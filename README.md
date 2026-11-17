# dasRaylib

[raylib](https://www.raylib.com/) 6.2 bindings for [daslang](https://daslang.io/), using daslang's own math types. Vectors are `float2`/`float3`/`float4`, matrices are `float4x4` and colors are `float4` in 0..1.

The bindings cover `raylib.h`, `raymath.h`, `rcamera.h`, `rlgl.h` and `raygui.h`.

**API reference:** [docs/cheatsheet.html](docs/cheatsheet.html), generated from the built module. It lists every function, struct, enum and color, plus the functions that are not bound.

## Install

```
daspkg install github.com/Y0L042/dasRaylib          # latest release
daspkg install github.com/Y0L042/dasRaylib@1.0.0    # a specific release
```

CMake fetches and builds raylib itself, so nothing else needs installing.

Requirements:

- Windows with MSVC (Visual Studio 2022 or later), CMake 3.22+, and git.
- daslang SDK 0.6.4 or later. The bindings are generated against the SDK headers, so a newer SDK can need a newer dasRaylib.
- A DLL build of daslang (the SDK's `daslang.exe` is one). On a static build, `require raylib` cannot find the module.

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
| `T *` to one value (`Camera *`, `Image *`, `float *`, ...) | `var x : T` (reference) | Also bound as a `T?` pointer, see below |

### Pointer parameters

When a raylib function takes a pointer to one value, you can pass a `var` variable or struct field directly. You do not need `unsafe(addr(...))`:

```das
var cam = Camera3D(position = float3(15.0), target = float3(0.0), up = float3(0, 1, 0), fovy = 45.0)
cam |> UpdateCamera(CameraMode.CAMERA_ORBITAL)
let fwd = GetCameraForward(cam)

var img = GenImageColor(64, 64, RED)
img |> ImageResize(128, 128)

var radius = 80.0
GuiSliderBar(float4(600, 140, 120, 20), "Radius", "{radius:.2f}", radius, 0.0, 200.0)

var a = float3(1, 0, 0)
var b = float3(1, 1, 0)
Vector3OrthoNormalize(a, b)     // changes a and b

var col = RED
GuiColorPicker(float4(10, 10, 200, 200), "", col)     // col stays a float4 in 0..1
```

The function can change the value, so it must be a `var`. If you pass a `let` value, compilation fails.

The pointer form is still bound. Use it to pass `null` to an optional raygui argument. Arrays stay pointers, for example `DrawLineStrip(points, pointCount, color)`. A pointer stays a pointer when an int count, size or length follows it. Returned pointers are also not changed.

Two modules are available:

- `require raylib`: all functions, structs and enums. Enum parameters are plain `int` or `uint`.
- `require raylib/raylib_boost`: re-exports `raylib` and adds the color constants, such as `RED`, and overloads that take enums, such as `IsKeyDown(KeyboardKey.KEY_A)`.

## Development

`manage.sh` (Git Bash) and `manage.bat` (cmd.exe) run everything. They take the same commands, so `bash manage.sh build` and `manage.bat build` do the same thing. They need a daslang checkout built with dasClangBind. Set `DASLANG_REPO` to that checkout, and scripts must run with the same daslang the module was built against.

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

Windows with MSVC is the only supported platform. Linux and macOS are untested and may not build.

## License

zlib, see [LICENSE](LICENSE). raylib is also under the zlib license.
