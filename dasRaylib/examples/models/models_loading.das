options gen2

// Ported from the raylib example models_loading, by Ramon Santamaria (@raysan5). zlib license.
require raylib/raylib_boost
require ../common/example.das

def set_diffuse(var model : Model; texture : Texture) {
    unsafe {
        model.materials[0].maps[int(MaterialMapIndex.MATERIAL_MAP_ALBEDO)].texture = texture
    }
}

def first_mesh_bounds(model : Model) : BoundingBox {
    unsafe {
        return GetMeshBoundingBox(model.meshes[0])
    }
}

def is_model_file(path : string) : bool {
    for (ext in fixed_array(".obj", ".gltf", ".glb", ".vox", ".iqm", ".m3d")) {
        if (IsFileExtension(path, ext)) {
            return true
        }
    }
    return false
}

[export]
def main {
    run_from_script_dir()
    InitWindow(800, 450, "raylib [models] example - loading")

    var camera = Camera3D(
        position = float3(50.0, 50.0, 50.0),
        target = float3(0.0, 12.0, 0.0),
        up = float3(0.0, 1.0, 0.0),
        fovy = 45.0,
        projection = int(CameraProjection.CAMERA_PERSPECTIVE))

    var model = LoadModel("resources/models/obj/castle.obj")
    var texture = LoadTexture("resources/models/obj/castle_diffuse.png")
    set_diffuse(model, texture)

    let position = float3(0.0)
    var bounds = first_mesh_bounds(model)
    var selected = false

    SetTargetFPS(60)

    while (!WindowShouldClose()) {
        UpdateCamera(unsafe(addr(camera)), CameraMode.CAMERA_ORBITAL)

        if (IsFileDropped()) {
            let dropped = LoadDroppedFiles()
            if (dropped.count == 1u) {
                let path = unsafe(dropped.paths[0])
                if (is_model_file(path)) {
                    UnloadModel(model)
                    model = LoadModel(path)
                    set_diffuse(model, texture)
                    bounds = first_mesh_bounds(model)
                    camera.position = bounds.max + float3(10.0)
                } elif (IsFileExtension(path, ".png")) {
                    UnloadTexture(texture)
                    texture = LoadTexture(path)
                    set_diffuse(model, texture)
                }
            }
            UnloadDroppedFiles(dropped)
        }

        if (IsMouseButtonPressed(MouseButton.MOUSE_BUTTON_LEFT)) {
            let ray = GetScreenToWorldRay(GetMousePosition(), camera)
            selected = GetRayCollisionBox(ray, bounds).hit && !selected
        }

        BeginDrawing()
        ClearBackground(RAYWHITE)

        BeginMode3D(camera)
        DrawModel(model, position, 1.0, WHITE)
        DrawGrid(20, 10.0)
        if (selected) {
            DrawBoundingBox(bounds, GREEN)
        }
        EndMode3D()

        DrawText("Drag & drop model to load mesh/texture.", 10, GetScreenHeight() - 20, 10, DARKGRAY)
        if (selected) {
            DrawText("MODEL SELECTED", GetScreenWidth() - 110, 10, 10, GREEN)
        }
        DrawText("(c) Castle 3D model by Alberto Cano", 600, 430, 10, GRAY)
        DrawFPS(10, 10)

        EndDrawing()
    }

    UnloadTexture(texture)
    UnloadModel(model)
    CloseWindow()
}
