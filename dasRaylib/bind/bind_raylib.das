options gen2
require cbind/cbind_boost
require daslib/fio
require daslib/defer
require daslib/strings_boost

// Generates dasRaylib/src/* from raylib.h + raymath.h + rcamera.h.
//
// Run (from anywhere, with a daslang that has dasClangBind built):
//   daslang dasRaylib/bind/bind_raylib.das
// Environment:
//   RAYLIB_DIR    raylib install root (must contain include/raylib.h)
//   LIBCLANG_DIR  LLVM/libclang root (default C:/Programs/libClang), used for clang resource headers

let RAYLIB_HEADERS = fixed_array<string>("raylib.h", "raymath.h", "rcamera.h")

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
    raylib_include_prefix : string  // stripped from "// from <file>:<line>" comments so output is machine-independent
    pending_arg_types : int     // getCursorArgType calls left that are for arguments (the next one is the result)
    def RaylibGen(module_dir, raylib_include, clang_resource : string) {
        raylib_include_prefix = "{raylib_include}/"
        bind_root = "{module_dir}/src"
        bind_module = "dasRaylib"
        bind_das_module = "raylib"
        let pfn = "cb_dasRaylib.h"
        let pfp = "{module_dir}/src/"
        CONST_FILE_NAMES <- array<string>(
            "{raylib_include}/raylib.h",
            "{raylib_include}/raymath.h"
        )
        let args <- array<string>(
            "-xc++-header",
            "-std=c++17",
            "-I{raylib_include}",
            "-isystem{clang_resource}",
            "-D_ALLOW_COMPILER_AND_STL_VERSION_MISMATCH=1"
        )
        func_per_chunk = 50
        super(pfn, pfp, args)
        raylib_skip_func <- {
            // use raymath's float3 / float16, which collide with daslang's builtin float3
            "Vector3ToFloatV" => true,
            "MatrixToFloatV" => true
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
        openAllFiles()
    }
    def override clang_getCursorLocationDescription(var c : CXCursor) : string {
        let desc = AnyGenBind`clang_getCursorLocationDescription(self, c)
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
    def override parse_anyFunctionDecl(var c : CXCursor; isMethod : bool) {
        // CppGenBind calls getCursorArgType once per argument, then once for the result
        pending_arg_types = clang_Cursor_getNumArguments(c)
        CppGenBind`parse_anyFunctionDecl(self, c, isMethod)
        pending_arg_types = 0
    }
    def override getCursorArgType(var t : CXType) {
        let base = CppGenBind`getCursorArgType(self, t)
        if (pending_arg_types > 0) {
            pending_arg_types --
            // By-value struct args (Vector3, Color, ...) are copies on the C side. das handled
            // types otherwise come out as non-const `T implicit`, which rejects `let` values.
            var ct = clang_getCanonicalType(t)
            if (ct.kind == CXTypeKind.Record) {
                return "const {empty(base) ? typeSpelling(t) : base}"
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
    print("clang resource : {clang_resource}\n")
    var cgb = new RaylibGen(module_dir, raylib_include, clang_resource)
    defer() {
        unsafe {
            delete cgb
        }
    }
    cgb->generate()
    print("generated {cgb.func_chunk_index} function chunk(s) into {module_dir}/src\n")
}
