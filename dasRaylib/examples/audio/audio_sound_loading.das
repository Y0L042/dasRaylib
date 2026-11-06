options gen2

// Ported from the raylib example audio_sound_loading, by Ramon Santamaria (@raysan5). zlib license.
require raylib/raylib_boost
require ../common/example.das

[export]
def main {
    run_from_script_dir()
    InitWindow(800, 450, "raylib [audio] example - sound loading")
    InitAudioDevice()

    let fx_wav = LoadSound("resources/sound.wav")
    let fx_ogg = LoadSound("resources/target.ogg")

    SetTargetFPS(60)

    while (!WindowShouldClose()) {
        if (IsKeyPressed(KeyboardKey.KEY_SPACE)) {
            PlaySound(fx_wav)
        }
        if (IsKeyPressed(KeyboardKey.KEY_ENTER)) {
            PlaySound(fx_ogg)
        }

        BeginDrawing()
        ClearBackground(RAYWHITE)
        DrawText("Press SPACE to PLAY the WAV sound!", 200, 180, 20, LIGHTGRAY)
        DrawText("Press ENTER to PLAY the OGG sound!", 200, 220, 20, LIGHTGRAY)
        EndDrawing()
    }

    UnloadSound(fx_wav)
    UnloadSound(fx_ogg)
    CloseAudioDevice()
    CloseWindow()
}
