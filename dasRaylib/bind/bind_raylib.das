options gen2
require cbind/cbind_boost
require daslib/fio
require daslib/defer
require daslib/strings_boost
require strings

// Generates dasRaylib/src/* from raylib.h, raymath.h, rcamera.h, rlgl.h and raygui.h.
//
// Run with a daslang that has dasClangBind built:
//   bash manage.sh gen
// Environment:
//   RAYLIB_DIR    raylib install root (must contain include/raylib.h)
//   RAYGUI_DIR    directory holding raygui.h (raylib ships one in examples/shapes)
//   LIBCLANG_DIR  LLVM/libclang root (default C:/Programs/libClang), used for clang resource headers

let RAYLIB_HEADERS = fixed_array<string>("raylib.h", "raymath.h", "rcamera.h", "rlgl.h", "raygui.h")

// raylib types whose names collide with types in daslang's C++ `namespace das`
// (das::Matrix). Generated code lives inside `namespace das`, so spell them as ::Name.
let GLOBAL_QUALIFIED_TYPES = fixed_array<string>("Matrix")

def global_qualify(spelling : string) : string {
    var res = spelling
    for (tn in GLOBAL_QUALIFIED_TYPES) {
        if (res == tn) {
            return "::{tn}"
        }
        // whole-word replace in compound spellings like "Matrix *" or "const Matrix &"
        res = res |> replace("::{tn}", "") |> replace("{tn} ", "::{tn} ") |> replace("", "::{tn}")
        if (res |> ends_with(" {tn}")) {
            res = res |> slice(0, length(res) - length(tn)) + "::{tn}"
        }
    }
    return res
}

def env_or(name, def_value : string) : string {
    if (has_env_variable(name)) {
        let v = get_env_variable(name)
        if (!empty(v)) {
            return v |> replace("\\", "/")
        }
    }
    return def_value
}

def find_module_dir() : string {
    // dasRaylib/ is the parent of the directory holding this script
    var args : array<string>
    builtin_get_command_line_arguments(args)
    for (a in args) {
        let na = a |> replace("\\", "/")
        if (na |> ends_with("bind_raylib.das")) {
            return dir_name(dir_name(get_full_file_name(na) |> replace("\\", "/"))) |> replace("\\", "/")
        }
    }
    panic("can't locate bind_raylib.das on the command line")
    return ""
}

def is_raylib_header(fname : string) : bool {
    let nf = fname |> replace("\\", "/")
    for (h in RAYLIB_HEADERS) {
        if (nf |> ends_with("/{h}") || nf == h) {
            return true
        }
    }
    return false
}

class RaylibGen : CppGenBind {
    override func_to_stdout = false
    override include_local_parse_file = true
    override generate_constant_decl = true
    raylib_skip_func : table<string; bool>
    raylib_skip_const : table<string; bool>
    raylib_noref_func : table<string; bool>   // pointer args that are arrays (or freed) though no count follows them
    ref_func_count : int
    raylib_include_prefix : string  // stripped from "// from <file>:<line>" comments so output is machine-independent
    raygui_include_prefix : string
    pending_arg_types : int     // getCursorArgType calls left that are for arguments (the next one is the result)
    wrap_file : FILE const?     // dasRaylib.wrap.inc: C++ wrappers converting Color <-> float4, Matrix <-> float4x4
    wrapper_func_count : int
    def RaylibGen(module_dir, raylib_include, raygui_include, clang_resource : string) {
        raylib_include_prefix = "{raylib_include}/"
        raygui_include_prefix = "{raygui_include}/"
        bind_root = "{module_dir}/src"
        bind_module = "dasRaylib"
        bind_das_module = "raylib"
        let pfn = "cb_dasRaylib.h"
        let pfp = "{module_dir}/src/"
        CONST_FILE_NAMES <- array<string>(
            "{raylib_include}/raylib.h",
            "{raylib_include}/raymath.h",
            "{raylib_include}/rlgl.h"
        )
        let args <- array<string>(
            "-xc++-header",
            "-std=c++17",
            "-I{raylib_include}",
            "-I{raygui_include}",
            "-isystem{clang_resource}",
            "-DDAS_RAYLIB_BINDER_PARSE=1",      // hide the C++ glue in cb_dasRaylib.h from libclang
            "-D_ALLOW_COMPILER_AND_STL_VERSION_MISMATCH=1"
        )
        func_per_chunk = 50
        super(pfn, pfp, args)
        raylib_skip_func <- {
            // use raymath's float3 / float16, which collide with daslang's builtin float3
            "Vector3ToFloatV" => true,
            "MatrixToFloatV" => true
        }
        raylib_noref_func <- {
            "rlMultMatrixf" => true,        // float[16]
            "rlSetShader" => true,          // int locs[]
            "GenImageFontAtlas" => true,    // GlyphInfo glyphs[]
            "UnloadWaveSamples" => true,    // these free arrays raylib allocated
            "UnloadImageColors" => true,
            "UnloadImagePalette" => true,
            "UnloadRandomSequence" => true,
            "UnloadCodepoints" => true
        }
        raylib_skip_const <- {
            "RAYLIB_H" => true,
            "RAYMATH_H" => true,
            "RCAMERA_H" => true,
            "RLAPI" => true,
            "RMAPI" => true,
            "RL_VECTOR2_TYPE" => true,
            "RL_VECTOR3_TYPE" => true,
            "RL_VECTOR4_TYPE" => true,
            "RL_QUATERNION_TYPE" => true,
            "RL_MATRIX_TYPE" => true,
            // float macros: cbind's #define scanner truncates them to int. PI comes from
            // daslang's math module; EPSILON/DEG2RAD/RAD2DEG are added in dasRaylib.main.cpp
            "PI" => true,
            "EPSILON" => true
        }
        // raylib vector types become das math types (glue in src/cb_dasRaylib.h)
        aot_alias <- {
            "Vector2" => true,
            "Vector3" => true,
            "Vector4" => true,
            "Quaternion" => true,   // typedef of Vector4; spelled out, so it needs its own entry
            "Rectangle" => true
        }
        openAllFiles()
        wrap_file = openFile("{bind_root}/{bind_module}.wrap.inc")
        wrap_file |> fwrite("#pragma once\n\n")
        wrap_file |> fwrite("// Wrappers for raylib functions taking or returning Color / Matrix by value:\n")
        wrap_file |> fwrite("// das sees float4 (RGBA 0..1) and float4x4 instead. Helpers: src/cb_dasRaylib.h\n\n")
        wrap_file |> fwrite("// _rlr_* wrappers take a reference where raylib takes a pointer to one value, so das code\n")
        wrap_file |> fwrite("// passes `cam` instead of `unsafe(addr(cam))`. The pointer overloads are still registered.\n\n")
        wrap_file |> fwrite("namespace das \{\n\n")
        wrap_file |> fwrite("static_assert(sizeof(float2) == sizeof(Vector2), \"float2 must match Vector2\");\n")
        wrap_file |> fwrite("static_assert(sizeof(float3) == sizeof(Vector3), \"float3 must match Vector3\");\n")
        wrap_file |> fwrite("static_assert(sizeof(float4) == sizeof(Vector4), \"float4 must match Vector4\");\n")
        wrap_file |> fwrite("static_assert(sizeof(float4) == sizeof(Rectangle), \"float4 must match Rectangle\");\n\n")
    }
    def finishWrapFile {
        wrap_file |> fwrite("\}\n")
        closeFile(wrap_file)
    }
    def override generateModuleNeedH {
        CppGenBind`generateModuleNeedH(self)
        module_need_h_file |> fwrite("#include \"{bind_module}.wrap.inc\"\n")
    }
    def override clang_getCursorLocationDescription(var c : CXCursor) : string {
        let desc = AnyGenBind`clang_getCursorLocationDescription(self, c)
        if (desc |> starts_with(raygui_include_prefix)) {
            return desc |> slice(length(raygui_include_prefix))
        }
        return desc |> starts_with(raylib_include_prefix) ? desc |> slice(length(raylib_include_prefix)) : desc
    }
    def override skip_file(fname : string) : bool {
        return !is_raylib_header(fname)
    }
    def override skip_const(name : string) : bool {
        return raylib_skip_const |> key_exists(name)
    }
    def override skip_struct(name : string) {
        return name == "float3" || name == "float16"
    }
    def override skip_alias(var c : CXCursor) {
        // drop `typedef struct X X` self-aliases, keep Texture2D, Camera, Quaternion etc.
        let tdn = string(clang_getCursorDisplayName(c))
        var tdt = clang_getCanonicalType(clang_getCursorType(c))
        let tdts = string(clang_getTypeSpelling(tdt))
        if (tdts == tdn || tdts == "struct {tdn}" || tdts == "enum {tdn}") {
            return true
        }
        if (tdt.kind == CXTypeKind.Enum) {
            return true     // typedef enum {...} Name; is registered as the enum itself
        }
        if (tdt.kind == CXTypeKind.Pointer && clang_getPointeeType(tdt).kind == CXTypeKind.FunctionProto) {
            return true     // callback typedefs (TraceLogCallback has va_list); functions taking them are skipped anyway
        }
        return !is_raylib_header(clang_getCursorLocationFileName(c))
    }
    def override skip_function(var c : CXCursor) : bool {
        if (AnyGenBind`skip_function(self, c)) {
            return true
        }
        let function_name = string(clang_getCursorSpelling(c))
        if (raylib_skip_func |> key_exists(function_name)) {
            to_log(LOG_INFO, "skipping raylib blocked function {function_name}\n")
            return true
        }
        return !is_raylib_header(clang_getCursorLocationFileName(c))
    }
    def override namespace_name(name : string; dash : string = "::") : string {
        let res = AnyGenBind`namespace_name(self, name, dash)
        return dash == "::" ? global_qualify(res) : res
    }
    def override typeSpelling(var c : CXType) {
        return global_qualify(CppGenBind`typeSpelling(self, c))
    }
    // "Color" / "Matrix" for a by-value raylib Color / Matrix, "" otherwise
    // canonical record name without cv-qualifier ("const Vector3" -> "Vector3")
    def record_name(var t : CXType) : string {
        var ct = clang_getCanonicalType(t)
        let sp = string(clang_getTypeSpelling(ct))
        return starts_with(sp, "const ") ? slice(sp, 6) : sp
    }
    def add_const(s : string) : string {
        return starts_with(s, "const ") ? s : "const {s}"
    }
    def converted_kind(var t : CXType) : string {
        var ct = clang_getCanonicalType(t)
        if (ct.kind != CXTypeKind.Record) {
            return ""
        }
        let sp = record_name(t)
        return (sp == "Color" || sp == "Matrix") ? sp : ""
    }
    def needs_wrapper(var c : CXCursor) : bool {
        var fun_type = clang_getCursorType(c)
        var res_type = clang_getResultType(fun_type)
        if (!empty(converted_kind(res_type))) {
            return true
        }
        let narg = clang_Cursor_getNumArguments(c)
        for (ai in urange(narg)) {
            var carg = clang_Cursor_getArgument(c, ai)
            var arg_type = clang_getCursorType(carg)
            if (!empty(converted_kind(arg_type))) {
                return true
            }
        }
        return false
    }
    def is_handled_record(var t : CXType) : bool {
        // by-value struct that stays a das handled type (not an aot alias, not converted)
        var ct = clang_getCanonicalType(t)
        if (ct.kind != CXTypeKind.Record || !empty(converted_kind(t))) {
            return false
        }
        return !aot_alias |> key_exists(record_name(t))
    }
    // How a pointer argument maps to a das reference, or "" when it stays a pointer:
    //   "struct" handled struct (Camera3D *, Image *, ...)   -> T &
    //   "vec"    Vector2/3/4, Rectangle *                    -> float2/3/4 &
    //   "color"  Color *                                     -> float4 & (converted in and out)
    //   "scalar" int/unsigned int/float/bool *               -> T &
    // A pointer followed by an int count/size/length is an array and stays a pointer.
    def ref_kind(var c : CXCursor; ai : uint) : string {
        if (raylib_noref_func |> key_exists(string(clang_getCursorSpelling(c)))) {
            return ""
        }
        var carg = clang_Cursor_getArgument(c, ai)
        var t = clang_getCanonicalType(clang_getCursorType(carg))
        if (t.kind != CXTypeKind.Pointer) {
            return ""
        }
        let narg = uint(clang_Cursor_getNumArguments(c))
        if (ai + 1u < narg) {
            var next_arg = clang_Cursor_getArgument(c, ai + 1u)
            var next_type = clang_getCanonicalType(clang_getCursorType(next_arg))
            let next_name = to_lower(string(clang_getCursorSpelling(next_arg)))
            if (next_type.kind == CXTypeKind.Int && (find(next_name, "count") >= 0 || find(next_name, "size") >= 0 || find(next_name, "length") >= 0 || next_name == "instances")) {
                return ""
            }
        }
        var pt = clang_getCanonicalType(clang_getPointeeType(t))
        if (pt.kind == CXTypeKind.Int || pt.kind == CXTypeKind.UInt || pt.kind == CXTypeKind.Float || pt.kind == CXTypeKind.Bool) {
            return "scalar"
        }
        if (pt.kind == CXTypeKind.Record) {
            let rn = record_name(pt)
            if (rn == "Color") {
                return "color"
            } elif (rn == "Matrix") {
                return ""   // raylib only passes Matrix * as arrays
            } elif (aot_alias |> key_exists(rn)) {
                return "vec"
            }
            return "struct"
        }
        return ""
    }
    def has_ref_args(var c : CXCursor) : bool {
        let narg = clang_Cursor_getNumArguments(c)
        for (ai in urange(narg)) {
            if (!empty(ref_kind(c, ai))) {
                return true
            }
        }
        return false
    }
    // C++ spelling of the value a ref-able pointer points to, as das sees it
    def ref_value_spelling(var c : CXCursor; ai : uint; kind : string) : string {
        var carg = clang_Cursor_getArgument(c, ai)
        var pt = clang_getPointeeType(clang_getCanonicalType(clang_getCursorType(carg)))
        let is_const = clang_isConstQualifiedType(pt) != 0u
        var cpt = clang_getCanonicalType(pt)
        var base = ""
        if (kind == "scalar") {
            if (cpt.kind == CXTypeKind.Int) {
                base = "int32_t"
            } elif (cpt.kind == CXTypeKind.UInt) {
                base = "uint32_t"
            } elif (cpt.kind == CXTypeKind.Float) {
                base = "float"
            } else {
                base = "bool"
            }
        } elif (kind == "color") {
            base = "float4"
        } elif (kind == "vec") {
            let rn = record_name(cpt)
            base = rn == "Vector2" ? "float2" : (rn == "Vector3" ? "float3" : "float4")
        } else {
            base = global_qualify(record_name(cpt))
        }
        return is_const ? "const {base}" : base
    }
    // Emits a C++ wrapper and registers it under the raylib name. Color / Matrix by value become
    // float4 / float4x4. With use_refs, ref-able pointer args (see ref_kind) become references.
    def emit_wrapper(var c : CXCursor; use_refs : bool) {
        step_Function()
        wrapper_func_count ++
        let function_name = string(clang_getCursorSpelling(c))
        let wrapper_name = use_refs ? "_rlr_{function_name}" : "_rlw_{function_name}"
        var fun_type = clang_getCursorType(c)
        var res_type = clang_getResultType(fun_type)
        let res_kind = converted_kind(res_type)
        let res_spelling = res_kind == "Color" ? "float4" : (res_kind == "Matrix" ? "float4x4" : typeSpelling(res_type))
        let narg = clang_Cursor_getNumArguments(c)
        var param_types : array<string>
        var param_decls : array<string>
        var call_args : array<string>
        var arg_names : array<string>
        var pre_call : array<string>
        var post_call : array<string>
        for (ai in urange(narg)) {
            var carg = clang_Cursor_getArgument(c, ai)
            var arg_type = clang_getCursorType(carg)
            var arg_name = string(clang_getCursorSpelling(carg))
            if (empty(arg_name)) {
                arg_name = "_arg_{int(ai)}"
            }
            let kind = converted_kind(arg_type)
            let rkind = use_refs ? ref_kind(c, ai) : ""
            var ptype = typeSpelling(arg_type)
            var call = arg_name
            if (kind == "Color") {
                ptype = "float4"
                call = "das_rl_color({arg_name})"
            } elif (kind == "Matrix") {
                ptype = "const float4x4 &"
                call = "das_rl_matrix({arg_name})"
            } elif (!empty(rkind)) {
                ptype = "{ref_value_spelling(c, ai, rkind)} &"
                if (rkind == "color") {
                    pre_call |> push("Color _c_{arg_name} = das_rl_color({arg_name}); ")
                    call = "&_c_{arg_name}"
                    post_call |> push("{arg_name} = das_rl_float4(_c_{arg_name}); ")
                } elif (rkind == "vec") {
                    var pt = clang_getPointeeType(clang_getCanonicalType(arg_type))
                    call = "reinterpret_cast<{string(clang_getTypeSpelling(pt))} *>(&{arg_name})"
                } else {
                    call = "&{arg_name}"
                }
            }
            param_types |> push(ptype)
            param_decls |> push("{ptype} {arg_name}")
            call_args |> push(call)
            arg_names |> push(arg_name)
        }
        // wrapper body
        let call_expr = "::{function_name}({join(call_args, ", ")})"
        var result = call_expr
        if (res_kind == "Color") {
            result = "das_rl_float4({call_expr})"
        } elif (res_kind == "Matrix") {
            result = "das_rl_float4x4({call_expr})"
        }
        let pre = join(pre_call, "")
        let post = join(post_call, "")
        var body = ""
        if (res_type.kind == CXTypeKind.Void) {
            body = "{pre}{call_expr}; {post}"
        } elif (empty(post)) {
            body = "{pre}return {result};"
        } else {
            body = "{pre}auto _res = {result}; {post}return _res;"
        }
        wrap_file |> fwrite("{from_comment(c)}inline {res_spelling} {wrapper_name}({join(param_decls, ", ")}) \{ {body} \}\n")
        // registration
        var sim_node = "SimNode_ExtFuncCall"
        if (res_kind == "Matrix" || is_handled_record(res_type)) {
            sim_node = "SimNode_ExtFuncCallAndCopyOrMove"
        }
        fprint(func_file, from_comment(c))
        fprint(func_file, "\tmakeExtern< {res_spelling} (*)({join(param_types, ",")}) , {wrapper_name} , {sim_node} >(lib,\"{function_name}\",\"das::{wrapper_name}\")")
        if (narg != 0) {
            fprint(func_file, "\n\t\t->args(\{")
            for (n, i in arg_names, count()) {
                fprint(func_file, "{i != 0 ? "," : ""}\"{n}\"")
            }
            fprint(func_file, "\})")
            for (ai in urange(narg)) {
                var carg = clang_Cursor_getArgument(c, ai)
                var arg_type = clang_getCursorType(carg)
                if (is_handled_record(arg_type)) {
                    fprint(func_file, "\n\t\t->arg_type({int(ai)},makeType<{add_const(typeSpelling(arg_type))}>(lib))")
                }
            }
        }
        fprint(func_file, "\n\t\t->addToModule(*this, SideEffects::worstDefault);\n")
    }
    def override parse_anyFunctionDecl(var c : CXCursor; isMethod : bool) {
        if (!isMethod && needs_wrapper(c)) {
            emit_wrapper(c, false)
        } else {
            // CppGenBind calls getCursorArgType once per argument, then once for the result
            pending_arg_types = clang_Cursor_getNumArguments(c)
            CppGenBind`parse_anyFunctionDecl(self, c, isMethod)
            pending_arg_types = 0
        }
        if (!isMethod && has_ref_args(c)) {
            to_log(LOG_INFO, "reference overload for {string(clang_getCursorSpelling(c))}\n")
            ref_func_count ++
            emit_wrapper(c, true)
        }
    }
    def override getCursorArgType(var t : CXType) {
        let base = CppGenBind`getCursorArgType(self, t)
        if (pending_arg_types > 0) {
            pending_arg_types --
            // By-value struct args (Vector3, Color, ...) are copies on the C side. das handled
            // types otherwise come out as non-const `T implicit`, which rejects `let` values.
            if (is_handled_record(t)) {
                return add_const(empty(base) ? typeSpelling(t) : base)
            }
        }
        return base
    }
    def override isArgByValue(name : string) {
        return true
    }
    def override isLocalType(name, cppname : string) {
        return true
    }
    def override isTrivialCtorType(name, cppname : string) {
        return true
    }
    def override isCopyableType(name, cppname : string) {
        return true
    }
}

[export]
def main {
    let module_dir = find_module_dir()
    let raylib_dir = env_or("RAYLIB_DIR", "")
    if (empty(raylib_dir)) {
        panic("RAYLIB_DIR is not set")
    }
    let raylib_include = "{raylib_dir}/include"
    let raygui_include = env_or("RAYGUI_DIR", "")
    if (empty(raygui_include)) {
        panic("RAYGUI_DIR is not set")
    }
    let libclang_dir = env_or("LIBCLANG_DIR", "C:/Programs/libClang")
    // clang resource headers (stdarg.h, stdbool.h, ...): pick the single version dir
    var clang_resource = ""
    dir("{libclang_dir}/lib/clang") $(n) {
        if (n != "." && n != ".." && empty(clang_resource)) {
            clang_resource = "{libclang_dir}/lib/clang/{n}/include"
        }
    }
    print("module dir     : {module_dir}\n")
    print("raylib include : {raylib_include}\n")
    print("raygui include : {raygui_include}\n")
    print("clang resource : {clang_resource}\n")
    var cgb = new RaylibGen(module_dir, raylib_include, raygui_include, clang_resource)
    defer() {
        unsafe {
            delete cgb
        }
    }
    cgb->generate()
    cgb->finishWrapFile()
    print("{cgb.wrapper_func_count - cgb.ref_func_count} function(s) wrapped for Color/Matrix conversion\n")
    print("{cgb.ref_func_count} function(s) got a reference overload for their pointer arguments\n")
    print("generated {cgb.func_chunk_index} function chunk(s) into {module_dir}/src\n")
}
