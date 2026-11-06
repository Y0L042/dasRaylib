# dasRaylib

[raylib](https://www.raylib.com/) 6.2 bindings for [daslang](https://daslang.io/), using daslang's own math types. Vectors are `float2`/`float3`/`float4`, matrices are `float4x4` and colors are `float4` in 0..1.

The bindings cover `raylib.h`, `raymath.h` and `rcamera.h`. `rlgl` and `raygui` are not bound.

**API reference:** [docs/cheatsheet.html](docs/cheatsheet.html), generated from the built module. It lists every function, struct, enum and color, plus the functions that are not bound.

## Install

```
daspkg install github.com/Y0L042/dasRaylib
```

CMake fetches and builds raylib itself, so nothing else needs installing.

## Example

```das
options gen2
require raylib/raylib_boost     // re-exports raylib

[export]
def main {
    InitWindow(800, 450, "hello")
    SetTargetFPS(60)
    while (!WindowShouldClose()) {
        BeginDrawing()
        ClearBackground(RAYWHITE)
        DrawCircleV(float2(400, 225), 50.0, RED)
        DrawText("Hello from daslang!", 10, 10, 20, DARKGRAY)
        EndDrawing()
    }
    CloseWindow()
}
```

`dasRaylib/examples/hello_raylib.das` is a longer example.

## Type mapping

| raylib | daslang | Notes |
|---|---|---|
| `Vector2`, `Vector3`, `Vector4` | `float2`, `float3`, `float4` | The raylib names also work as aliases |
| `Quaternion` | `float4` | |
| `Rectangle` | `float4` | x, y, width, height |
| `Color` by value | `float4` | RGBA in 0..1, converted to bytes for you |
| `Matrix` by value | `float4x4` | Converted for you |
| `Color`, `Matrix` in pointers and struct fields | Raw `Color`, `Matrix` | Use `to_float4`, `to_Color`, `to_float4x4`, `to_Matrix` |

Two modules are available:

- `require raylib`: all functions, structs and enums. Enum parameters are plain `int` or `uint`.
- `require raylib/raylib_boost`: re-exports `raylib` and adds the color constants, such as `RED`, and overloads that take enums, such as `IsKeyDown(KeyboardKey.KEY_A)`.

## Development

`manage.sh` runs everything. It needs a daslang checkout built with dasClangBind. Set `DASLANG_REPO` to that checkout, and scripts must run with the same daslang the module was built against.

| Command | What it does |
|---|---|
| `bash manage.sh build` | Fetch raylib and build the module into `_build/Release` |
| `bash manage.sh run [script.das]` | Run a script, by default `hello_raylib.das` |
| `bash manage.sh test` | Run `tests/`. No window needed |
| `bash manage.sh gen` | Regenerate `dasRaylib/src` from the raylib headers. Needs libclang (`LIBCLANG_DIR`) |
| `bash manage.sh gen-docs` | Regenerate `docs/cheatsheet.html` |
| `bash manage.sh gen-docs --check` | Fail if the cheatsheet is out of date |
| `bash manage.sh fmt [--verify]` | Format the `.das` sources |
| `bash manage.sh package` | Bundle a built package into `dist/raylib/` |

`dasRaylib/src` is generated, except for `cb_dasRaylib.h` and `dasRaylib.main.cpp`.

### Updating raylib

1. Change the tag in `dasRaylib/CMakeLists.txt`.
2. Run `gen`, `build`, `test` and `gen-docs`, in that order. `gen-docs` reads the built module, so it has to come after `build`.

`gen-docs` fails if a bound function has no entry in the headers, or if the module and headers are different raylib versions. New hand-written functions need a comment in `converter_comment` in `docs/gen/gen_cheatsheet.das`.

## Status

Developed and tested on Windows with MSVC. Linux and macOS are untested.

## License

zlib, see [LICENSE](LICENSE). raylib is also under the zlib license.
