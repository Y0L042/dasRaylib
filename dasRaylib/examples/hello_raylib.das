options gen2

// Smoke test for the generated dasRaylib module, using daslang math types:
//   Vector2/3/4 -> float2/3/4, Rectangle -> float4, Color -> float4 (0..1), Matrix -> float4x4
//   bash manage.sh run
require raylib
require raylib/raylib_boost
require math

var failures = 0

def check(what : string; ok : bool) {
    print("{ok ? "ok  " : "FAIL"} {what}\n")
    if (!ok) {
        failures++
    }
}

def near(a, b : float4; eps : float = 0.003) : bool {
    let d = abs(a - b)
    return d.x < eps && d.y < eps && d.z < eps && d.w < eps
}

def near(a, b : float4x4) : bool {
    return near(a[0], b[0], 1e-5) && near(a[1], b[1], 1e-5) && near(a[2], b[2], 1e-5) && near(a[3], b[3], 1e-5)
}

def run_checks {
    // vectors
    let s = Vector3Add(float3(1, 2, 3), float3(4, 5, 6))
    check("Vector3Add -> float3 {s}", s == float3(5, 7, 9))
    let n = Vector2Normalize(float2(3.0, 4.0))
    check("Vector2Normalize -> float2 {n}", length(n - float2(0.6, 0.8)) < 1e-5)
    var v : Vector3 = float3(1.0)       // raylib names are type aliases of das math types
    v += float3(1.0)
    check("Vector3 alias is float3 {v}", v == float3(2.0))

    // matrices (raylib stores the transpose of das float4x4; wrappers convert)
    let mt = MatrixTranslate(1.0, 2.0, 3.0)
    check("MatrixTranslate == translation(float3(1,2,3))", near(mt, translation(float3(1, 2, 3))))
    check("MatrixMultiply(T, I) == T", near(MatrixMultiply(mt, MatrixIdentity()), mt))
    let moved = Vector3Transform(float3(0.0), mt)
    check("Vector3Transform(0, T) = {moved}", moved == float3(1, 2, 3))
    let rm = to_float4x4(to_Matrix(mt))
    check("to_Matrix/to_float4x4 round-trip", near(rm, mt))

    // colors as float4 0..1
    check("GetColor(0xE62937FF) == RED", near(GetColor(0xE62937FFu), RED))
    check("ColorToInt(RED) == 0xE62937FF", uint(ColorToInt(RED)) == 0xE62937FFu)
    check("Fade(RED, 0.5).w ~ 0.5", abs(Fade(RED, 0.5).w - 0.5) < 0.003)
    check("to_Color/to_float4 round-trip", near(to_float4(to_Color(SKYBLUE)), SKYBLUE))

    // rectangles as float4 (x, y, width, height)
    let ra = float4(0, 0, 10, 10)
    let rb : Rectangle = float4(5, 5, 10, 10)
    check("CheckCollisionRecs", CheckCollisionRecs(ra, rb))
    check("GetCollisionRec == float4(5,5,5,5)", GetCollisionRec(ra, rb) == float4(5, 5, 5, 5))
}

[export]
def main {
    run_checks()

    var cam = Camera3D(
        position = float3(10.0),
        target = float3(0.0),
        up = float3(0, 1, 0),
        fovy = 45.0,
        projection = int(CameraProjection.CAMERA_PERSPECTIVE))
    let fwd = GetCameraForward(unsafe(addr(cam)))
    check("GetCameraForward = {fwd}", length(fwd - normalize(float3(-1.0))) < 1e-5)
    let view = GetCameraViewMatrix(unsafe(addr(cam)))
    check("GetCameraViewMatrix is float4x4 (eye -> origin)", length((view * float4(cam.position, 1.0)).xyz) < 1e-4)

    SetConfigFlags(ConfigFlags.FLAG_WINDOW_RESIZABLE)
    InitWindow(800, 450, "dasRaylib - daslang math types")
    SetTargetFPS(60)
    var frame = 0
    while (!WindowShouldClose() && frame < 180) {
        UpdateCamera(unsafe(addr(cam)), CameraMode.CAMERA_ORBITAL)
        BeginDrawing()
        ClearBackground(RAYWHITE)
        BeginMode3D(cam)
        DrawCube(float3(0.0), 2.0, 2.0, 2.0, lerp(RED, BLUE, float(frame) / 180.0))
        DrawCubeWires(float3(0.0), 2.0, 2.0, 2.0, MAROON)
        DrawGrid(10, 1.0)
        EndMode3D()
        DrawRectangleRec(float4(10, 70, 200, 30), Fade(SKYBLUE, 0.5))
        DrawText("Hello from daslang math types!", 10, 10, 20, DARKGRAY)
        DrawFPS(10, 40)
        EndDrawing()
        frame++
    }
    CloseWindow()
    print("ran {frame} frames, {failures} failure(s)\n")
    if (failures != 0) {
        panic("hello_raylib: {failures} check(s) failed")
    }
}
