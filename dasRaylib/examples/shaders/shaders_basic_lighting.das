options gen2

// Ported from the raylib example shaders_basic_lighting. zlib license.
require raylib/raylib_boost
require ../common/example.das
require ../common/rlights.das

let GLSL_VERSION = 330

[export]
def main {
    run_from_script_dir()
    SetConfigFlags(ConfigFlags.FLAG_MSAA_4X_HINT)
    InitWindow(800, 450, "raylib [shaders] example - basic lighting")

    var camera = Camera3D(
        position = float3(2.0, 4.0, 6.0),
        target = float3(0.0, 0.5, 0.0),
        up = float3(0.0, 1.0, 0.0),
        fovy = 45.0,
        projection = int(CameraProjection.CAMERA_PERSPECTIVE))

    var shader = LoadShader("resources/shaders/glsl{GLSL_VERSION}/lighting.vs", "resources/shaders/glsl{GLSL_VERSION}/lighting.fs")
    let view_loc = GetShaderLocation(shader, "viewPos")
    unsafe {
        shader.locs[int(ShaderLocationIndex.SHADER_LOC_VECTOR_VIEW)] = view_loc
    }
    SetShaderValue(shader, GetShaderLocation(shader, "ambient"), float4(0.1, 0.1, 0.1, 1.0))

    var lights <- [
        CreateLight(LightType.LIGHT_POINT, float3(-2.0, 1.0, -2.0), float3(0.0), YELLOW, shader),
        CreateLight(LightType.LIGHT_POINT, float3(2.0, 1.0, 2.0), float3(0.0), RED, shader),
        CreateLight(LightType.LIGHT_POINT, float3(-2.0, 1.0, 2.0), float3(0.0), GREEN, shader),
        CreateLight(LightType.LIGHT_POINT, float3(2.0, 1.0, -2.0), float3(0.0), BLUE, shader)
    ]
    let toggle_keys = fixed_array(KeyboardKey.KEY_Y, KeyboardKey.KEY_R, KeyboardKey.KEY_G, KeyboardKey.KEY_B)

    SetTargetFPS(60)

    while (!WindowShouldClose()) {
        UpdateCamera(unsafe(addr(camera)), CameraMode.CAMERA_ORBITAL)
        SetShaderValue(shader, view_loc, camera.position)

        for (i in range(MAX_LIGHTS)) {
            if (IsKeyPressed(toggle_keys[i])) {
                lights[i].enabled = !lights[i].enabled
            }
            UpdateLightValues(shader, lights[i])
        }

        BeginDrawing()
        ClearBackground(RAYWHITE)

        BeginMode3D(camera)
        BeginShaderMode(shader)
        DrawPlane(float3(0.0), float2(10.0), WHITE)
        DrawCube(float3(0.0), 2.0, 4.0, 2.0, WHITE)
        EndShaderMode()

        for (light in lights) {
            if (light.enabled) {
                DrawSphereEx(light.position, 0.2, 8, 8, light.color)
            } else {
                DrawSphereWires(light.position, 0.2, 8, 8, ColorAlpha(light.color, 0.3))
            }
        }
        DrawGrid(10, 1.0)
        EndMode3D()

        DrawFPS(10, 10)
        DrawText("Use keys [Y][R][G][B] to toggle lights", 10, 40, 20, DARKGRAY)
        EndDrawing()
    }

    UnloadShader(shader)
    CloseWindow()
}
