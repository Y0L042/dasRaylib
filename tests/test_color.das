options gen2

// Colors are float4 RGBA in 0..1; wrappers convert to and from raylib's bytes.
require dastest/testing_boost public
require raylib
require raylib/raylib_boost
require math

def near(a, b : float4) : bool {
    let d = abs(a - b)
    return d.x < 0.003 && d.y < 0.003 && d.z < 0.003 && d.w < 0.003
}

[test]
def test_byte_round_trip(t : T?) {
    t |> run("GetColor decodes a packed color") @(t : T?) {
        t |> success(near(GetColor(0xE62937FFu), RED))
    }
    t |> run("ColorToInt encodes a float4") @(t : T?) {
        t |> equal(uint(ColorToInt(RED)), 0xE62937FFu)
    }
    t |> run("Fade scales alpha") @(t : T?) {
        t |> success(abs(Fade(RED, 0.5).w - 0.5) < 0.003)
    }
}

[test]
def test_constants(t : T?) {
    let palette = fixed_array(LIGHTGRAY, GRAY, DARKGRAY, YELLOW, GOLD, ORANGE, PINK, RED, MAROON, GREEN, LIME,
        DARKGREEN, SKYBLUE, BLUE, DARKBLUE, PURPLE, VIOLET, DARKPURPLE, BEIGE, BROWN, DARKBROWN, WHITE, BLACK,
        BLANK, MAGENTA, RAYWHITE)
    t |> run("every palette constant survives a byte round-trip") @(t : T?) {
        for (c in palette) {
            let bytes = to_Color(c)
            let back = to_Color(to_float4(bytes))
            t |> equal(int(back.r), int(bytes.r))
            t |> equal(int(back.g), int(bytes.g))
            t |> equal(int(back.b), int(bytes.b))
            t |> equal(int(back.a), int(bytes.a))
        }
    }
    t |> run("BLANK is fully transparent, WHITE is opaque") @(t : T?) {
        t |> equal(BLANK, float4(0.0))
        t |> equal(WHITE, float4(1.0))
    }
}
