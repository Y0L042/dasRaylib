options gen2

module raylib_boost shared public

// Hand-written convenience layer over the generated `raylib` module.
//   require raylib/raylib_boost   // re-exports raylib
require raylib public

// ── raylib color macros (#define RED CLITERAL(Color){...}) — not visible to the binder ──
let public LIGHTGRAY  = Color(r = 200u8, g = 200u8, b = 200u8, a = 255u8)
let public GRAY       = Color(r = 130u8, g = 130u8, b = 130u8, a = 255u8)
let public DARKGRAY   = Color(r = 80u8,  g = 80u8,  b = 80u8,  a = 255u8)
let public YELLOW     = Color(r = 253u8, g = 249u8, b = 0u8,   a = 255u8)
let public GOLD       = Color(r = 255u8, g = 203u8, b = 0u8,   a = 255u8)
let public ORANGE     = Color(r = 255u8, g = 161u8, b = 0u8,   a = 255u8)
let public PINK       = Color(r = 255u8, g = 109u8, b = 194u8, a = 255u8)
let public RED        = Color(r = 230u8, g = 41u8,  b = 55u8,  a = 255u8)
let public MAROON     = Color(r = 190u8, g = 33u8,  b = 55u8,  a = 255u8)
let public GREEN      = Color(r = 0u8,   g = 228u8, b = 48u8,  a = 255u8)
let public LIME       = Color(r = 0u8,   g = 158u8, b = 47u8,  a = 255u8)
let public DARKGREEN  = Color(r = 0u8,   g = 117u8, b = 44u8,  a = 255u8)
let public SKYBLUE    = Color(r = 102u8, g = 191u8, b = 255u8, a = 255u8)
let public BLUE       = Color(r = 0u8,   g = 121u8, b = 241u8, a = 255u8)
let public DARKBLUE   = Color(r = 0u8,   g = 82u8,  b = 172u8, a = 255u8)
let public PURPLE     = Color(r = 200u8, g = 122u8, b = 255u8, a = 255u8)
let public VIOLET     = Color(r = 135u8, g = 60u8,  b = 190u8, a = 255u8)
let public DARKPURPLE = Color(r = 112u8, g = 31u8,  b = 126u8, a = 255u8)
let public BEIGE      = Color(r = 211u8, g = 176u8, b = 131u8, a = 255u8)
let public BROWN      = Color(r = 127u8, g = 106u8, b = 80u8,  a = 255u8)
let public DARKBROWN  = Color(r = 76u8,  g = 63u8,  b = 47u8,  a = 255u8)
let public WHITE      = Color(r = 255u8, g = 255u8, b = 255u8, a = 255u8)
let public BLACK      = Color(r = 0u8,   g = 0u8,   b = 0u8,   a = 255u8)
let public BLANK      = Color(r = 0u8,   g = 0u8,   b = 0u8,   a = 0u8)
let public MAGENTA    = Color(r = 255u8, g = 0u8,   b = 255u8, a = 255u8)
let public RAYWHITE   = Color(r = 245u8, g = 245u8, b = 245u8, a = 255u8)

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
