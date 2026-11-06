options gen2
options rtti

// Generates docs/cheatsheet.html, a daslang version of the raylib cheatsheet.
//
//   bash manage.sh gen-docs           write the page
//   bash manage.sh gen-docs --check   fail if the page on disk is out of date
//
// Signatures come from reflecting the built `raylib` and `raylib_boost` modules, so they always
// match what scripts can call. Order, groups and comments come from raylib.h, raymath.h and
// rcamera.h; enum and struct comments come from raylib_api.json. Functions are joined by name.
//
// Generation fails if a bound function has no header entry, so a raylib update can't leave the
// page silently incomplete. Add new hand-written functions to `converter_comment`.

require raylib
require raylib/raylib_boost
require daslib/ast_boost
require daslib/rtti
require daslib/fio
require daslib/json
require daslib/json_boost
require daslib/strings_boost
require strings
require math

// Comment column for aligned lines. Longer signatures put their comment right after the code.
let COMMENT_COLUMN = 76

struct Signature {
    text : string       // plain text, used to measure alignment
    html : string
    from_boost : bool
}

struct Line {
    text : string       // empty on blank lines
    html : string
    comment : string
    is_code : bool
}

struct Unbound {
    name : string
    comment : string
    reason : string
}

struct Field {
    name : string
    type_name : string
    offset : uint
}

var errors : array<string>

var signatures : table<string; array<Signature>>
var documented : table<string; bool>
var sections : table<string; array<Line>>
var unbound : array<Unbound>

def fail(message : string) {
    errors |> push(message)
}

def esc(s : string) : string {
    return replace(replace(replace(s, "&", "&amp;"), "<", "&lt;"), ">", "&gt;")
}

def strip_suffix(s, suffix : string) : string {
    return slice(s, 0, length(s) - length(suffix))
}

// `describe` keeps qualifiers that mean nothing to a caller reading a signature. Only outer ones
// are dropped: the const in `float2 const?` says the pointee is read-only.
def clean_type(t : TypeDeclPtr) : string {
    var s = describe(t, false, false, false)
    var changed = true
    while (changed) {
        changed = false
        for (suffix in fixed_array(" implicit", " const", "&")) {
            if (ends_with(s, suffix)) {
                s = strip_suffix(s, suffix)
                changed = true
            }
        }
    }
    return s
}

def type_html(t : string) : string {
    return "<span class=\"t\">{esc(t)}</span>"
}

def keyword(k : string) : string {
    return "<span class=\"k\">{k}</span>"
}

def add_code(section : string; text, html, comment : string) {
    sections[section] |> push(Line(text = text, html = html, comment = comment, is_code = true))
}

def add_comment(section, comment : string) {
    sections[section] |> push(Line(text = comment, html = "<span class=\"c\">{esc(comment)}</span>"))
}

def add_blank(section : string) {
    if (!empty(sections[section])) {
        sections[section] |> push(Line())
    }
}

def render_lines(lines : array<Line>) : string {
    return build_string() $(var w) {
        var i = 0
        while (i < length(lines)) {
            if (!lines[i].is_code) {
                w |> write("{lines[i].html}\n")
                i++
                continue
            }
            var run_end = i
            var width = 0
            while (run_end < length(lines) && lines[run_end].is_code) {
                let len = length(lines[run_end].text)
                if (len <= COMMENT_COLUMN) {
                    width = max(width, len)
                }
                run_end++
            }
            while (i < run_end) {
                w |> write(lines[i].html)
                if (!empty(lines[i].comment)) {
                    let pad = max(width - length(lines[i].text), 0) + 2
                    w |> write(repeat(" ", pad))
                    w |> write("<span class=\"c\">// {esc(lines[i].comment)}</span>")
                }
                w |> write("\n")
                i++
            }
        }
    }
}

// ── reflection ──

def reflect_function(module_name : string; func : FunctionPtr) {
    var text = "def {func.name}("
    var html = "{keyword("def")} <span class=\"f\">{func.name}</span>("
    for (i in range(length(func.arguments))) {
        let sep = i == 0 ? "" : "; "
        let t = clean_type(func.arguments[i]._type)
        text += "{sep}{func.arguments[i].name} : {t}"
        html += "{sep}{func.arguments[i].name} : {type_html(t)}"
    }
    text += ")"
    html += ")"
    if (!func.result.isVoid) {
        let t = clean_type(func.result)
        text += " : {t}"
        html += " : {type_html(t)}"
    }
    signatures[string(func.name)] |> push(Signature(text = text, html = html, from_boost = module_name == "raylib_boost"))
}

def reflect_functions() {
    program_for_each_registered_module() $(mod) {
        let module_name = string(mod.name)
        if (module_name == "raylib" || module_name == "raylib_boost") {
            for_each_function(mod, "") $(func) {
                if (!func.flags.privateFunction) {
                    reflect_function(module_name, func)
                }
            }
        }
    }
    for (list in values(signatures)) {
        // Reflection order isn't stable. The int form stays first, then boost overloads.
        sort(list) $(a, b) {
            return a.from_boost != b.from_boost ? b.from_boost : a.text < b.text
        }
    }
}

def find_module_named(name : string) : Module? {
    var found : Module?
    program_for_each_registered_module() $(mod) {
        if (string(mod.name) == name) {
            found = mod
        }
    }
    return found
}

// ── headers ──

def read_text(path : string) : string {
    var text = ""
    fopen(path, "rb") $(f) {
        if (f == null) {
            panic("can't read {path}")
        }
        text = fread(f)
    }
    return replace(text, "\r", "")
}

def read_lines(path : string) : array<string> {
    return <- split(read_text(path), "\n")
}

def function_name(declaration : string) : string {
    let head = strip(slice(declaration, 0, find(declaration, "(")))
    var start = length(head)
    while (start > 0) {
        let ch = character_at(head, start - 1)
        if (ch == ' ' || ch == '*') {
            break
        }
        start--
    }
    return slice(head, start)
}

def trailing_comment(line : string) : string {
    let at = find(line, "//")
    return at < 0 ? "" : strip(slice(line, at + 2))
}

def unbound_reason(declaration : string) : string {
    if (find(declaration, "...") >= 0) {
        return "variadic"
    }
    if (find(declaration, "Callback") >= 0 || find(declaration, "Processor") >= 0) {
        return "callback"
    }
    return "other"
}

def add_function(section, name, comment, declaration : string; var pending : array<string>) {
    if (key_exists(documented, name)) {
        return
    }
    if (!key_exists(signatures, name)) {
        unbound |> push(Unbound(name = name, comment = comment, reason = unbound_reason(declaration)))
        return
    }
    documented |> insert(name, true)
    if (!empty(pending)) {
        add_blank(section)
        for (line in pending) {
            add_comment(section, line)
        }
        pending |> clear()
    }
    var first = true
    for (sig in signatures[name]) {
        add_code(section, sig.text, sig.html, first ? comment : "raylib_boost overload, takes the enum directly")
        first = false
    }
}

def section_of(heading : string) : string {
    for (entry in fixed_array("core", "rgestures", "rcamera")) {
        if (find(heading, "(Module: {entry})") >= 0) {
            return "core"
        }
    }
    for (entry in fixed_array("shapes", "textures", "text", "models", "audio")) {
        if (find(heading, "(Module: {entry})") >= 0) {
            return entry
        }
    }
    return ""
}

def parse_raylib_h(lines : array<string>) {
    var section = ""
    var pending : array<string>
    for (raw in lines) {
        let line = strip(raw)
        if (empty(section) && find(line, "(Module: core)") < 0) {
            continue
        }
        if (empty(line) || starts_with(line, "typedef")) {
            pending |> clear()
        } elif (starts_with(line, "//--") || starts_with(line, "//RLAPI")) {
            continue
        } elif (starts_with(line, "//")) {
            let next_section = section_of(line)
            if (empty(next_section)) {
                pending |> push(line)
            } else {
                section = next_section
                add_blank(section)
                add_comment(section, slice(line, 0, find(line, " (Module:")))
                pending |> clear()
            }
        } elif (starts_with(line, "RLAPI ")) {
            add_function(section, function_name(line), trailing_comment(line), line, pending)
        }
    }
}

def parse_raymath_h(lines : array<string>) {
    let heading = "// Module Functions Definition - "
    var pending : array<string>
    var comment = ""
    for (line in lines) {
        if (starts_with(line, heading)) {
            pending |> clear()
            pending |> push("// {slice(line, length(heading))}")
            comment = ""
        } elif (starts_with(line, "//")) {
            if (empty(comment) && !starts_with(line, "//--")) {
                comment = strip(slice(line, 2))
            }
        } elif (starts_with(line, "RMAPI ")) {
            add_function("raymath", function_name(line), comment, line, pending)
            comment = ""
        } else {
            comment = ""
        }
    }
}

def parse_rcamera_h(lines : array<string>) {
    // Declarations have no comments here. They sit on the definitions, further down.
    var comments : table<string; string>
    var in_definitions = false
    var first_comment = ""
    for (line in lines) {
        if (find(line, "Module Functions Definition") >= 0) {
            in_definitions = true
            first_comment = ""
        } elif (starts_with(line, "//")) {
            if (empty(first_comment) && !starts_with(line, "//--")) {
                first_comment = strip(slice(line, 2))
            }
        } else {
            if (in_definitions && !empty(first_comment) && find(line, "(") > 0 && !starts_with(line, " ") && !starts_with(line, "#")) {
                comments |> insert(function_name(line), first_comment)
            }
            first_comment = ""
        }
    }

    add_blank("core")
    add_comment("core", "// Camera helper functions (rcamera.h)")
    var in_declarations = false
    var pending : array<string>
    for (raw in lines) {
        let line = strip(raw)
        if (find(line, "Module Functions Declaration") >= 0) {
            in_declarations = true
        } elif (in_declarations && find(line, "RCAMERA_IMPLEMENTATION") >= 0) {
            break
        } elif (in_declarations && starts_with(line, "//") && !starts_with(line, "//--")) {
            pending |> push(line)
        } elif (in_declarations && starts_with(line, "RLAPI ")) {
            let name = function_name(line)
            add_function("core", name, comments?[name] ?? "", line, pending)
        } elif (in_declarations && empty(line)) {
            pending |> clear()
        }
    }
}

// ── hand-written additions ──

def converter_comment(name : string) : string {
    if (name == "to_float4") {
        return "Raw Color (as found in pointers and struct fields) to float4 RGBA 0..1"
    } elif (name == "to_Color") {
        return "float4 RGBA 0..1 to raw Color"
    } elif (name == "to_float4x4") {
        return "Raw Matrix (as found in pointers and struct fields) to float4x4"
    } elif (name == "to_Matrix") {
        return "float4x4 to raw Matrix"
    }
    return ""
}

def add_extras(mod : Module?) {
    add_comment("extras", "// Converters for raw Color and Matrix values")
    for (name in fixed_array("to_float4", "to_Color", "to_float4x4", "to_Matrix")) {
        if (!key_exists(signatures, name)) {
            fail("converter {name} is no longer bound")
            continue
        }
        documented |> insert(name, true)
        for (sig in signatures[name]) {
            add_code("extras", sig.text, sig.html, converter_comment(name))
        }
    }
    add_blank("extras")
    add_comment("extras", "// Constants")
    var constants : array<tuple<string; string>>
    for_each_global(mod) $(value) {
        constants |> push((string(value.name), clean_type(value._type)))
    }
    sort(constants) $(a, b) {
        return a._0 < b._0
    }
    for (c in constants) {
        add_code("extras", "let {c._0} : {c._1}", "{keyword("let")} {c._0} : {type_html(c._1)}", "")
    }
}

def add_colors(lines : array<string>) {
    var boost_globals : table<string; bool>
    for_each_global(find_module_named("raylib_boost")) $(value) {
        boost_globals |> insert(string(value.name), true)
    }
    add_comment("colors", "// float4 RGBA in 0..1, from raylib/raylib_boost. Comments show the raylib 0..255 bytes.")
    var count = 0
    for (line in lines) {
        let brace = find(line, "CLITERAL(Color)")
        if (!starts_with(line, "#define ") || brace < 0) {
            continue
        }
        let name = strip(slice(line, 8, brace))
        if (!key_exists(boost_globals, name)) {
            fail("raylib.h color {name} is missing from raylib_boost")
            continue
        }
        let bytes = strip(slice(line, find(line, "\{") + 1, find(line, "\}")))
        let parts <- split(bytes, ",")
        let css = "rgba({strip(parts[0])},{strip(parts[1])},{strip(parts[2])},{to_float(strip(parts[3])) / 255.0})"
        let swatch = "<span class=\"swatch\" style=\"background:{css}\"></span>"
        add_code("colors", "   let {name} : float4", "{swatch}{keyword("let")} {name} : {type_html("float4")}", "({bytes}) {trailing_comment(line)}")
        count++
    }
    if (count != length(boost_globals)) {
        fail("{count} colors in raylib.h but {length(boost_globals)} globals in raylib_boost")
    }
}

// ── structs and enums ──

def json_text(v : JsonValue?; key : string) : string {
    return v?[key] ?? ""
}

def add_struct(name, comment : string; var fields : array<Field>; var field_comments : table<string; string>) {
    sort(fields) $(a, b) {
        return a.offset < b.offset
    }
    add_code("structs", "struct {name}", "{keyword("struct")} <span class=\"f\">{name}</span>", comment)
    for (f in fields) {
        add_code("structs", "    {f.name} : {f.type_name}", "    {f.name} : {type_html(f.type_name)}", field_comments?[f.name] ?? "")
    }
    add_blank("structs")
}

def add_structs(mod : Module?; var api : JsonValue?) : int {
    var reflected : table<string; array<Field>>
    module_for_each_annotation(mod) $(value) {
        if (value.isBasicStructureAnnotation) {
            var ann = unsafe(reinterpret<BasicStructureAnnotation?>(value))
            var fields : array<Field>
            for_each_field(*ann) $(name, _cpp_name, xtype, offset) {
                fields |> push(Field(name = name, type_name = clean_type(xtype), offset = offset))
            }
            reflected |> emplace(string(value.name), fields)
        }
    }
    let total = length(reflected)
    var listed = 0
    for (entry in api?["structs"].value as _array) {
        let name = json_text(entry, "name")
        if (key_exists(reflected, name)) {
            var field_comments : table<string; string>
            for (field in entry?["fields"].value as _array) {
                field_comments |> insert(json_text(field, "name"), json_text(field, "description"))
            }
            add_struct(name, json_text(entry, "description"), reflected[name], field_comments)
            listed++
        }
    }
    if (listed != total) {
        fail("{total - listed} bound structs are missing from raylib_api.json")
    }
    return total
}

def add_aliases(mod : Module?; var api : JsonValue?) : int {
    var comments : table<string; string>
    for (entry in api?["aliases"].value as _array) {
        comments |> insert(json_text(entry, "name"), json_text(entry, "description"))
    }
    var aliases : array<tuple<string; string>>
    for_each_typedef(mod) $(name, value) {
        aliases |> push((string(name), clean_type(value)))
    }
    sort(aliases) $(a, b) {
        return a._0 < b._0
    }
    add_comment("structs", "// Type aliases")
    for (a in aliases) {
        add_code("structs", "typedef {a._0} = {a._1}", "{keyword("typedef")} {a._0} = {type_html(a._1)}", comments?[a._0] ?? "")
    }
    return length(aliases)
}

def add_enums(mod : Module?; var api : JsonValue?) : int {
    var reflected : table<string; array<tuple<string; string>>>
    for_each_enumeration(mod) $(value) {
        var entries : array<tuple<string; string>>
        for (entry in value.list) {
            entries |> push((string(entry.name), describe(entry.value)))
        }
        reflected |> emplace(string(value.name), entries)
    }
    var listed = 0
    for (entry in api?["enums"].value as _array) {
        let name = json_text(entry, "name")
        if (!key_exists(reflected, name)) {
            fail("raylib_api.json enum {name} is not bound")
            continue
        }
        var comments : table<string; string>
        for (item in entry?["values"].value as _array) {
            comments |> insert(json_text(item, "name"), json_text(item, "description"))
        }
        add_code("enums", "enum {name}", "{keyword("enum")} <span class=\"f\">{name}</span>", json_text(entry, "description"))
        for (item in reflected[name]) {
            add_code("enums", "    {item._0} = {item._1}", "    {item._0} = {esc(item._1)}", comments?[item._0] ?? "")
        }
        add_blank("enums")
        listed++
    }
    if (listed != length(reflected)) {
        fail("{length(reflected) - listed} bound enums are missing from raylib_api.json")
    }
    return listed
}

def add_unbound_group(reason, title : string) {
    var header_written = false
    for (u in unbound) {
        if (u.reason == reason) {
            if (!header_written) {
                add_blank("unbound")
                add_comment("unbound", "// {title}")
                header_written = true
            }
            add_code("unbound", u.name, u.name, u.comment)
        }
    }
}

// ── page ──

def section_html(id, title : string) : string {
    return "<p id=\"p{id}\">{title}</p>\n<div id=\"{id}\"><pre><code>{render_lines(sections[id])}</code></pre></div>\n"
}

def arg_value(args : array<string>; name : string) : string {
    let at = find_index(args, name)
    if (at < 0 || at + 1 >= length(args)) {
        panic("missing {name}")
    }
    return args[at + 1]
}

def header_version(lines : array<string>) : string {
    let prefix = "#define RAYLIB_VERSION "
    for (line in lines) {
        if (starts_with(line, prefix)) {
            return replace(strip(slice(line, length(prefix))), "\"", "")
        }
    }
    panic("RAYLIB_VERSION not found in raylib.h")
    return ""
}

def report_errors() : bool {
    if (empty(errors)) {
        return false
    }
    print("gen_cheatsheet: failed\n")
    for (e in errors) {
        print("  {e}\n")
    }
    return true
}

// daslang.exe uses the result as the process exit code.
[export]
def main : int {
    let args <- get_command_line_arguments()
    let root = arg_value(args, "--root")
    let raylib_src = arg_value(args, "--raylib-src")
    let check = find_index(args, "--check") >= 0

    let raylib_h <- read_lines("{raylib_src}/src/raylib.h")
    let module_version = "{RAYLIB_VERSION_MAJOR}.{RAYLIB_VERSION_MINOR}"
    let version = header_version(raylib_h)
    if (version != module_version && version != "{module_version}.{RAYLIB_VERSION_PATCH}") {
        fail("the built module is raylib {module_version} but the headers are {version}. Run manage.sh build.")
        report_errors()
        return 1
    }

    var error = ""
    var api = read_json(read_text("{raylib_src}/tools/rlparser/output/raylib_api.json"), error)
    if (api == null) {
        panic("can't parse raylib_api.json: {error}")
    }

    reflect_functions()
    parse_raylib_h(raylib_h)
    parse_rcamera_h(read_lines("{raylib_src}/src/rcamera.h"))
    parse_raymath_h(read_lines("{raylib_src}/src/raymath.h"))

    let mod = find_module_named("raylib")
    add_extras(mod)
    add_colors(raylib_h)
    let struct_count = add_structs(mod, api)
    let alias_count = add_aliases(mod, api)
    let enum_count = add_enums(mod, api)
    add_unbound_group("variadic", "Variadic: use daslang string formatting and print() instead")
    add_unbound_group("callback", "Take a C callback")
    add_unbound_group("other", "Skipped by the binder")

    var missing : array<string>
    for (name in keys(signatures)) {
        if (!key_exists(documented, name)) {
            missing |> push(name)
        }
    }
    sort(missing)
    for (name in missing) {
        fail("bound function {name} has no header entry. Add it to converter_comment if it's hand-written.")
    }
    if (report_errors()) {
        return 1
    }

    var signature_count = 0
    for (list in values(signatures)) {
        signature_count += length(list)
    }
    var page = read_text("{root}/docs/gen/cheatsheet.template.html")
    var left = ""
    left += section_html("core", "module: rcore")
    left += section_html("text", "module: rtext")
    left += section_html("audio", "module: raudio")
    left += section_html("enums", "enums")
    var right = ""
    right += section_html("shapes", "module: rshapes")
    right += section_html("textures", "module: rtextures")
    right += section_html("models", "module: rmodels")
    right += section_html("raymath", "module: raymath")
    right += section_html("structs", "structs")
    right += section_html("colors", "colors")
    right += section_html("extras", "converters and constants")
    right += section_html("unbound", "not bound")
    page = replace(page, "@@VERSION@@", version)
    page = replace(page, "@@LEFT@@", left)
    page = replace(page, "@@RIGHT@@", right)

    let out_path = "{root}/docs/cheatsheet.html"
    if (check) {
        var up_to_date = false
        fopen(out_path, "rb") $(f) {
            if (f != null) {
                up_to_date = replace(fread(f), "\r", "") == page
            }
        }
        if (!up_to_date) {
            print("docs/cheatsheet.html is out of date. Run: bash manage.sh gen-docs\n")
            return 1
        }
        print("docs/cheatsheet.html is up to date\n")
        return 0
    }
    fopen(out_path, "wb") $(f) {
        if (f == null) {
            panic("can't write {out_path}")
        }
        fwrite(f, page)
    }
    print("wrote docs/cheatsheet.html: raylib {version}, {signature_count} signatures, {struct_count} structs, {alias_count} aliases, {enum_count} enums, {length(unbound)} not bound\n")
    return 0
}
