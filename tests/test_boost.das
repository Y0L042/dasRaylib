options gen2

// raylib_boost's enum overloads must resolve and agree with the int functions they wrap.
// None of these need a window: raylib reads its zeroed input state.
require dastest/testing_boost public
require raylib
require raylib/raylib_boost

[test]
def test_key_overloads(t : T?) {
    let key = KeyboardKey.KEY_A
    t |> run("key overloads match the int functions") @(t : T?) {
        t |> equal(IsKeyDown(key), IsKeyDown(int(key)))
        t |> equal(IsKeyUp(key), IsKeyUp(int(key)))
        t |> equal(IsKeyPressed(key), IsKeyPressed(int(key)))
        t |> equal(IsKeyPressedRepeat(key), IsKeyPressedRepeat(int(key)))
        t |> equal(IsKeyReleased(key), IsKeyReleased(int(key)))
    }
    t |> run("enum values are raylib's key codes") @(t : T?) {
        t |> equal(int(key), 65)
    }
}

[test]
def test_mouse_overloads(t : T?) {
    let button = MouseButton.MOUSE_BUTTON_LEFT
    t |> run("mouse overloads match the int functions") @(t : T?) {
        t |> equal(IsMouseButtonDown(button), IsMouseButtonDown(int(button)))
        t |> equal(IsMouseButtonUp(button), IsMouseButtonUp(int(button)))
        t |> equal(IsMouseButtonPressed(button), IsMouseButtonPressed(int(button)))
        t |> equal(IsMouseButtonReleased(button), IsMouseButtonReleased(int(button)))
    }
}
