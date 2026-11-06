options gen2

// rlgl and raygui need a window for most calls. These cover the parts that don't.
require dastest/testing_boost public
require raylib
require raylib/raylib_boost

[test]
def test_text_buffer(t : T?) {
    t |> run("text_buffer and text_of round-trip") @(t : T?) {
        let buffer <- text_buffer("hello", 16)
        t |> equal(length(buffer), 16)
        t |> equal(text_of(buffer), "hello")
    }
    t |> run("text_buffer truncates and stays zero-terminated") @(t : T?) {
        let buffer <- text_buffer("hello", 4)
        t |> equal(text_of(buffer), "hel")
    }
}

[test]
def test_constants(t : T?) {
    t |> run("rlgl primitive constants match OpenGL") @(t : T?) {
        t |> equal(RL_TRIANGLES, 0x0004u)
        t |> equal(RL_QUADS, 0x0007u)
    }
    t |> run("raygui style values are bound") @(t : T?) {
        t |> equal(int(GuiState.STATE_NORMAL), 0)
    }
}
