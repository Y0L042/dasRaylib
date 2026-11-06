options gen2

// raymath through daslang math types: Vector2/3/4 -> float2/3/4, Matrix -> float4x4.
require dastest/testing_boost public
require raylib
require math

def near(a, b : float4x4) : bool {
    for (i in range(4)) {
        if (length(a[i] - b[i]) > 1e-5) {
            return false
        }
    }
    return true
}

[test]
def test_vectors(t : T?) {
    t |> run("Vector3Add takes and returns float3") @(t : T?) {
        t |> equal(Vector3Add(float3(1, 2, 3), float3(4, 5, 6)), float3(5, 7, 9))
    }
    t |> run("Vector2Normalize returns a unit float2") @(t : T?) {
        t |> success(length(Vector2Normalize(float2(3, 4)) - float2(0.6, 0.8)) < 1e-5)
    }
    t |> run("Vector3 is an alias of float3") @(t : T?) {
        var v : Vector3 = float3(1.0)
        v += float3(1.0)
        t |> equal(v, float3(2.0))
    }
}

[test]
def test_matrices(t : T?) {
    let mt = MatrixTranslate(1.0, 2.0, 3.0)
    t |> run("MatrixTranslate matches das translation()") @(t : T?) {
        t |> success(near(mt, translation(float3(1, 2, 3))))
    }
    t |> run("MatrixMultiply by identity is unchanged") @(t : T?) {
        t |> success(near(MatrixMultiply(mt, MatrixIdentity()), mt))
    }
    t |> run("Vector3Transform applies the translation") @(t : T?) {
        t |> equal(Vector3Transform(float3(0.0), mt), float3(1, 2, 3))
    }
}

[test]
def test_rectangles(t : T?) {
    let ra = float4(0, 0, 10, 10)
    let rb : Rectangle = float4(5, 5, 10, 10)
    t |> run("Rectangle is an alias of float4") @(t : T?) {
        t |> success(CheckCollisionRecs(ra, rb))
        t |> equal(GetCollisionRec(ra, rb), float4(5, 5, 5, 5))
    }
}

[test]
def test_camera(t : T?) {
    var cam = Camera3D(position = float3(10.0), target = float3(0.0), up = float3(0, 1, 0), fovy = 45.0,
        projection = int(CameraProjection.CAMERA_PERSPECTIVE))
    t |> run("GetCameraForward points at the target") @(t : T?) {
        t |> success(length(GetCameraForward(unsafe(addr(cam))) - normalize(float3(-1.0))) < 1e-5)
    }
    t |> run("GetCameraViewMatrix moves the eye to the origin") @(t : T?) {
        let view = GetCameraViewMatrix(unsafe(addr(cam)))
        t |> success(length((view * float4(cam.position, 1.0)).xyz) < 1e-4)
    }
}
