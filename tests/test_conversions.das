options gen2

// The hand-written converters between raw raylib types and daslang math types.
require dastest/testing_boost public
require raylib
require raylib/raylib_boost
require math

[test]
def test_color_conversion(t : T?) {
    t |> run("to_Color keeps the byte channels") @(t : T?) {
        let c = to_Color(float4(1.0, 0.0, 0.0, 1.0))
        t |> equal(int(c.r), 255)
        t |> equal(int(c.g), 0)
        t |> equal(int(c.b), 0)
        t |> equal(int(c.a), 255)
    }
    t |> run("to_float4 restores 0..1 channels") @(t : T?) {
        t |> equal(to_float4(to_Color(float4(0.0, 1.0, 0.0, 1.0))), float4(0.0, 1.0, 0.0, 1.0))
    }
}

[test]
def test_matrix_conversion(t : T?) {
    t |> run("to_Matrix and to_float4x4 round-trip") @(t : T?) {
        let m = MatrixTranslate(1.0, 2.0, 3.0)
        let r = to_float4x4(to_Matrix(m))
        for (i in range(4)) {
            t |> success(length(r[i] - m[i]) < 1e-6)
        }
    }
    t |> run("to_Matrix stores translation in raylib's m12..m14") @(t : T?) {
        let raw = to_Matrix(MatrixTranslate(1.0, 2.0, 3.0))
        t |> equal(raw.m12, 1.0)
        t |> equal(raw.m13, 2.0)
        t |> equal(raw.m14, 3.0)
    }
}

[test]
def test_constants(t : T?) {
    t |> run("DEG2RAD and RAD2DEG are inverses") @(t : T?) {
        t |> success(abs(DEG2RAD * RAD2DEG - 1.0) < 1e-6)
    }
}
