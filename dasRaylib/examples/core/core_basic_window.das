options gen2

// Ported from the raylib example core_basic_window, by Ramon Santamaria (@raysan5). zlib license.
require raylib/raylib_boost

[export]
def main {
    InitWindow(800, 450, "raylib [core] example - basic window")
    SetTargetFPS(60)

    while (!WindowShouldClose()) {
        BeginDrawing()
        ClearBackground(RAYWHITE)
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY)
        EndDrawing()
    }

    CloseWindow()
}
