options gen2

// Ported from the raylib example shapes_circle_sector_drawing. zlib license.
require raylib/raylib_boost
require math
require strings

[export]
def main {
    InitWindow(800, 450, "raylib [shapes] example - circle sector drawing")

    let center = float2(float(GetScreenWidth() - 300) / 2.0, float(GetScreenHeight()) / 2.0)
    var outer_radius = 180.0
    var start_angle = 0.0
    var end_angle = 180.0
    var segments = 10.0

    SetTargetFPS(60)

    while (!WindowShouldClose()) {
        BeginDrawing()
        ClearBackground(RAYWHITE)

        DrawLine(500, 0, 500, GetScreenHeight(), Fade(LIGHTGRAY, 0.6))
        DrawRectangle(500, 0, GetScreenWidth() - 500, GetScreenHeight(), Fade(LIGHTGRAY, 0.3))

        DrawCircleSector(center, outer_radius, start_angle, end_angle, int(segments), Fade(MAROON, 0.3))
        DrawCircleSectorLines(center, outer_radius, start_angle, end_angle, int(segments), Fade(MAROON, 0.6))

        unsafe {
            GuiSliderBar(float4(600, 40, 120, 20), "StartAngle", "{start_angle:.2f}", addr(start_angle), 0.0, 720.0)
            GuiSliderBar(float4(600, 70, 120, 20), "EndAngle", "{end_angle:.2f}", addr(end_angle), 0.0, 720.0)
            GuiSliderBar(float4(600, 140, 120, 20), "Radius", "{outer_radius:.2f}", addr(outer_radius), 0.0, 200.0)
            GuiSliderBar(float4(600, 170, 120, 20), "Segments", "{segments:.2f}", addr(segments), 0.0, 100.0)
        }

        let min_segments = trunc(ceil((end_angle - start_angle) / 90.0))
        let manual = segments >= min_segments
        DrawText("MODE: {manual ? "MANUAL" : "AUTO"}", 600, 200, 10, manual ? MAROON : DARKGRAY)

        DrawFPS(10, 10)
        EndDrawing()
    }

    CloseWindow()
}
