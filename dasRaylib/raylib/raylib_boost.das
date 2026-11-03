options gen2

module raylib_boost shared public

// Hand-written convenience layer over the generated `raylib` module.
//   require raylib/raylib_boost   // re-exports raylib
require raylib public

// ── raylib color macros (#define RED CLITERAL(Color){...}) — not visible to the binder ──
// Colors are das float4 RGBA in 0..1; raylib functions convert them to bytes (exact round-trip).
let public LIGHTGRAY = float4(200.0, 200.0, 200.0, 255.0) / 255.0
let public GRAY = float4(130.0, 130.0, 130.0, 255.0) / 255.0
let public DARKGRAY = float4(80.0, 80.0, 80.0, 255.0) / 255.0
let public YELLOW = float4(253.0, 249.0, 0.0, 255.0) / 255.0
let public GOLD = float4(255.0, 203.0, 0.0, 255.0) / 255.0
let public ORANGE = float4(255.0, 161.0, 0.0, 255.0) / 255.0
let public PINK = float4(255.0, 109.0, 194.0, 255.0) / 255.0
let public RED = float4(230.0, 41.0, 55.0, 255.0) / 255.0
let public MAROON = float4(190.0, 33.0, 55.0, 255.0) / 255.0
let public GREEN = float4(0.0, 228.0, 48.0, 255.0) / 255.0
let public LIME = float4(0.0, 158.0, 47.0, 255.0) / 255.0
let public DARKGREEN = float4(0.0, 117.0, 44.0, 255.0) / 255.0
let public SKYBLUE = float4(102.0, 191.0, 255.0, 255.0) / 255.0
let public BLUE = float4(0.0, 121.0, 241.0, 255.0) / 255.0
let public DARKBLUE = float4(0.0, 82.0, 172.0, 255.0) / 255.0
let public PURPLE = float4(200.0, 122.0, 255.0, 255.0) / 255.0
let public VIOLET = float4(135.0, 60.0, 190.0, 255.0) / 255.0
let public DARKPURPLE = float4(112.0, 31.0, 126.0, 255.0) / 255.0
let public BEIGE = float4(211.0, 176.0, 131.0, 255.0) / 255.0
let public BROWN = float4(127.0, 106.0, 80.0, 255.0) / 255.0
let public DARKBROWN = float4(76.0, 63.0, 47.0, 255.0) / 255.0
let public WHITE = float4(255.0, 255.0, 255.0, 255.0) / 255.0
let public BLACK = float4(0.0, 0.0, 0.0, 255.0) / 255.0
let public BLANK = float4(0.0, 0.0, 0.0, 0.0) / 255.0
let public MAGENTA = float4(255.0, 0.0, 255.0, 255.0) / 255.0
let public RAYWHITE = float4(245.0, 245.0, 245.0, 255.0) / 255.0

// ── typed overloads: raylib takes plain int for keys/buttons/flags ──
def public IsKeyPressed(key : KeyboardKey) : bool { return IsKeyPressed(int(key)); }
def public IsKeyPressedRepeat(key : KeyboardKey) : bool { return IsKeyPressedRepeat(int(key)); }
def public IsKeyDown(key : KeyboardKey) : bool { return IsKeyDown(int(key)); }
def public IsKeyReleased(key : KeyboardKey) : bool { return IsKeyReleased(int(key)); }
def public IsKeyUp(key : KeyboardKey) : bool { return IsKeyUp(int(key)); }
def public SetExitKey(key : KeyboardKey) { SetExitKey(int(key)); }
def public IsMouseButtonPressed(button : MouseButton) : bool { return IsMouseButtonPressed(int(button)); }
def public IsMouseButtonDown(button : MouseButton) : bool { return IsMouseButtonDown(int(button)); }
def public IsMouseButtonReleased(button : MouseButton) : bool { return IsMouseButtonReleased(int(button)); }
def public IsMouseButtonUp(button : MouseButton) : bool { return IsMouseButtonUp(int(button)); }
def public SetConfigFlags(flags : ConfigFlags) { SetConfigFlags(uint(flags)); }
def public UpdateCamera(var camera : Camera3D?; mode : CameraMode) { UpdateCamera(camera, int(mode)); }
