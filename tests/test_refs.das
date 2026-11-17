options gen2

// Reference overloads: raylib functions taking a pointer to one value also accept the value itself.
require dastest/testing_boost public
require raylib/raylib_boost
require math

def make_camera() : Camera3D {
    return Camera3D(position = float3(10.0), target = float3(0.0), up = float3(0, 1, 0), fovy = 45.0,
        projection = int(CameraProjection.CAMERA_PERSPECTIVE))
}

[test]
def test_camera_refs(t : T?) {
    t |> run("CameraMoveForward moves the camera it is given") @(t : T?) {
        var cam = make_camera()
        let fwd = GetCameraForward(cam)
        CameraMoveForward(cam, 2.0, false)
        t |> success(length(cam.position - (float3(10.0) + fwd * 2.0)) < 1e-4)
    }
    t |> run("pipe syntax works on the camera") @(t : T?) {
        var cam = make_camera()
        cam |> CameraMoveUp(1.5)
        t |> success(abs(cam.position.y - 11.5) < 1e-4)
    }
    t |> run("a camera inside a struct can be passed") @(t : T?) {
        var cams : array<Camera3D>
        cams |> push(make_camera())
        CameraMoveUp(cams[0], 1.0)
        t |> success(abs(cams[0].position.y - 11.0) < 1e-4)
    }
}

[test]
def test_vector_refs(t : T?) {
    t |> run("Vector3OrthoNormalize changes both float3 values") @(t : T?) {
        var a = float3(2, 0, 0)
        var b = float3(1, 1, 0)
        Vector3OrthoNormalize(a, b)
        t |> success(length(a - float3(1, 0, 0)) < 1e-5)
        t |> success(length(b - float3(0, 1, 0)) < 1e-5)
    }
    t |> run("QuaternionToAxisAngle writes a float3 and a float") @(t : T?) {
        var axis = float3(0.0)
        var angle = 0.0
        QuaternionToAxisAngle(QuaternionFromAxisAngle(float3(0, 0, 1), 0.5), axis, angle)
        t |> success(length(axis - float3(0, 0, 1)) < 1e-5)
        t |> success(abs(angle - 0.5) < 1e-5)
    }
}

[test]
def test_scalar_refs(t : T?) {
    t |> run("GetCodepoint writes an int") @(t : T?) {
        var size = 0
        t |> equal(GetCodepoint("A", size), 65)
        t |> equal(size, 1)
    }
}

// raygui needs a window, so these are only compiled: a wrong overload fails the whole file.
def private compile_only_raygui_refs() {
    var text = text_buffer("name", 32)
    var btn = 0
    var secret = false
    GuiTextInputBox(float4(0, 0, 200, 100), "title", "message", text, "ok", btn, secret)
    var items <- ["a", "b"]
    var scroll = 0
    var active = -1
    var focus = -1
    GuiListViewEx(float4(0, 0, 100, 100), items, scroll, active, focus)
    var checked = false
    GuiCheckBox(float4(0, 0, 20, 20), "check", checked)
    var col = RED
    GuiColorPicker(float4(0, 0, 100, 100), "", col)
}

[test]
def test_image_refs(t : T?) {
    t |> run("Image mutators change the image they are given") @(t : T?) {
        var img = GenImageColor(4, 2, RED)
        img |> ImageResize(8, 4)
        t |> equal(img.width, 8)
        t |> equal(img.height, 4)
        img |> ImageRotateCW()
        t |> equal(img.width, 4)
        img |> ImageClearBackground(BLUE)
        t |> success(length(GetImageColor(img, 0, 0) - BLUE) < 1e-5)
        UnloadImage(img)
    }
}
