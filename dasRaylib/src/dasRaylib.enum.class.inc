// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from raylib.h:553:9
class Enumeration_ConfigFlags : public das::Enumeration {
public:
	Enumeration_ConfigFlags() : das::Enumeration("ConfigFlags") {
		external = true;
		cppName = "ConfigFlags";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("FLAG_VSYNC_HINT", "FLAG_VSYNC_HINT", int64_t(ConfigFlags::FLAG_VSYNC_HINT), das::LineInfo());
		addIEx("FLAG_FULLSCREEN_MODE", "FLAG_FULLSCREEN_MODE", int64_t(ConfigFlags::FLAG_FULLSCREEN_MODE), das::LineInfo());
		addIEx("FLAG_WINDOW_RESIZABLE", "FLAG_WINDOW_RESIZABLE", int64_t(ConfigFlags::FLAG_WINDOW_RESIZABLE), das::LineInfo());
		addIEx("FLAG_WINDOW_UNDECORATED", "FLAG_WINDOW_UNDECORATED", int64_t(ConfigFlags::FLAG_WINDOW_UNDECORATED), das::LineInfo());
		addIEx("FLAG_WINDOW_HIDDEN", "FLAG_WINDOW_HIDDEN", int64_t(ConfigFlags::FLAG_WINDOW_HIDDEN), das::LineInfo());
		addIEx("FLAG_WINDOW_MINIMIZED", "FLAG_WINDOW_MINIMIZED", int64_t(ConfigFlags::FLAG_WINDOW_MINIMIZED), das::LineInfo());
		addIEx("FLAG_WINDOW_MAXIMIZED", "FLAG_WINDOW_MAXIMIZED", int64_t(ConfigFlags::FLAG_WINDOW_MAXIMIZED), das::LineInfo());
		addIEx("FLAG_WINDOW_UNFOCUSED", "FLAG_WINDOW_UNFOCUSED", int64_t(ConfigFlags::FLAG_WINDOW_UNFOCUSED), das::LineInfo());
		addIEx("FLAG_WINDOW_TOPMOST", "FLAG_WINDOW_TOPMOST", int64_t(ConfigFlags::FLAG_WINDOW_TOPMOST), das::LineInfo());
		addIEx("FLAG_WINDOW_ALWAYS_RUN", "FLAG_WINDOW_ALWAYS_RUN", int64_t(ConfigFlags::FLAG_WINDOW_ALWAYS_RUN), das::LineInfo());
		addIEx("FLAG_WINDOW_TRANSPARENT", "FLAG_WINDOW_TRANSPARENT", int64_t(ConfigFlags::FLAG_WINDOW_TRANSPARENT), das::LineInfo());
		addIEx("FLAG_WINDOW_HIGHDPI", "FLAG_WINDOW_HIGHDPI", int64_t(ConfigFlags::FLAG_WINDOW_HIGHDPI), das::LineInfo());
		addIEx("FLAG_WINDOW_MOUSE_PASSTHROUGH", "FLAG_WINDOW_MOUSE_PASSTHROUGH", int64_t(ConfigFlags::FLAG_WINDOW_MOUSE_PASSTHROUGH), das::LineInfo());
		addIEx("FLAG_BORDERLESS_WINDOWED_MODE", "FLAG_BORDERLESS_WINDOWED_MODE", int64_t(ConfigFlags::FLAG_BORDERLESS_WINDOWED_MODE), das::LineInfo());
		addIEx("FLAG_MSAA_4X_HINT", "FLAG_MSAA_4X_HINT", int64_t(ConfigFlags::FLAG_MSAA_4X_HINT), das::LineInfo());
		addIEx("FLAG_INTERLACED_HINT", "FLAG_INTERLACED_HINT", int64_t(ConfigFlags::FLAG_INTERLACED_HINT), das::LineInfo());
	}
};

// from raylib.h:574:9
class Enumeration_TraceLogLevel : public das::Enumeration {
public:
	Enumeration_TraceLogLevel() : das::Enumeration("TraceLogLevel") {
		external = true;
		cppName = "TraceLogLevel";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("LOG_ALL", "LOG_ALL", int64_t(TraceLogLevel::LOG_ALL), das::LineInfo());
		addIEx("LOG_TRACE", "LOG_TRACE", int64_t(TraceLogLevel::LOG_TRACE), das::LineInfo());
		addIEx("LOG_DEBUG", "LOG_DEBUG", int64_t(TraceLogLevel::LOG_DEBUG), das::LineInfo());
		addIEx("LOG_INFO", "LOG_INFO", int64_t(TraceLogLevel::LOG_INFO), das::LineInfo());
		addIEx("LOG_WARNING", "LOG_WARNING", int64_t(TraceLogLevel::LOG_WARNING), das::LineInfo());
		addIEx("LOG_ERROR", "LOG_ERROR", int64_t(TraceLogLevel::LOG_ERROR), das::LineInfo());
		addIEx("LOG_FATAL", "LOG_FATAL", int64_t(TraceLogLevel::LOG_FATAL), das::LineInfo());
		addIEx("LOG_NONE", "LOG_NONE", int64_t(TraceLogLevel::LOG_NONE), das::LineInfo());
	}
};

// from raylib.h:587:9
class Enumeration_KeyboardKey : public das::Enumeration {
public:
	Enumeration_KeyboardKey() : das::Enumeration("KeyboardKey") {
		external = true;
		cppName = "KeyboardKey";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("KEY_NULL", "KEY_NULL", int64_t(KeyboardKey::KEY_NULL), das::LineInfo());
		addIEx("KEY_APOSTROPHE", "KEY_APOSTROPHE", int64_t(KeyboardKey::KEY_APOSTROPHE), das::LineInfo());
		addIEx("KEY_COMMA", "KEY_COMMA", int64_t(KeyboardKey::KEY_COMMA), das::LineInfo());
		addIEx("KEY_MINUS", "KEY_MINUS", int64_t(KeyboardKey::KEY_MINUS), das::LineInfo());
		addIEx("KEY_PERIOD", "KEY_PERIOD", int64_t(KeyboardKey::KEY_PERIOD), das::LineInfo());
		addIEx("KEY_SLASH", "KEY_SLASH", int64_t(KeyboardKey::KEY_SLASH), das::LineInfo());
		addIEx("KEY_ZERO", "KEY_ZERO", int64_t(KeyboardKey::KEY_ZERO), das::LineInfo());
		addIEx("KEY_ONE", "KEY_ONE", int64_t(KeyboardKey::KEY_ONE), das::LineInfo());
		addIEx("KEY_TWO", "KEY_TWO", int64_t(KeyboardKey::KEY_TWO), das::LineInfo());
		addIEx("KEY_THREE", "KEY_THREE", int64_t(KeyboardKey::KEY_THREE), das::LineInfo());
		addIEx("KEY_FOUR", "KEY_FOUR", int64_t(KeyboardKey::KEY_FOUR), das::LineInfo());
		addIEx("KEY_FIVE", "KEY_FIVE", int64_t(KeyboardKey::KEY_FIVE), das::LineInfo());
		addIEx("KEY_SIX", "KEY_SIX", int64_t(KeyboardKey::KEY_SIX), das::LineInfo());
		addIEx("KEY_SEVEN", "KEY_SEVEN", int64_t(KeyboardKey::KEY_SEVEN), das::LineInfo());
		addIEx("KEY_EIGHT", "KEY_EIGHT", int64_t(KeyboardKey::KEY_EIGHT), das::LineInfo());
		addIEx("KEY_NINE", "KEY_NINE", int64_t(KeyboardKey::KEY_NINE), das::LineInfo());
		addIEx("KEY_SEMICOLON", "KEY_SEMICOLON", int64_t(KeyboardKey::KEY_SEMICOLON), das::LineInfo());
		addIEx("KEY_EQUAL", "KEY_EQUAL", int64_t(KeyboardKey::KEY_EQUAL), das::LineInfo());
		addIEx("KEY_A", "KEY_A", int64_t(KeyboardKey::KEY_A), das::LineInfo());
		addIEx("KEY_B", "KEY_B", int64_t(KeyboardKey::KEY_B), das::LineInfo());
		addIEx("KEY_C", "KEY_C", int64_t(KeyboardKey::KEY_C), das::LineInfo());
		addIEx("KEY_D", "KEY_D", int64_t(KeyboardKey::KEY_D), das::LineInfo());
		addIEx("KEY_E", "KEY_E", int64_t(KeyboardKey::KEY_E), das::LineInfo());
		addIEx("KEY_F", "KEY_F", int64_t(KeyboardKey::KEY_F), das::LineInfo());
		addIEx("KEY_G", "KEY_G", int64_t(KeyboardKey::KEY_G), das::LineInfo());
		addIEx("KEY_H", "KEY_H", int64_t(KeyboardKey::KEY_H), das::LineInfo());
		addIEx("KEY_I", "KEY_I", int64_t(KeyboardKey::KEY_I), das::LineInfo());
		addIEx("KEY_J", "KEY_J", int64_t(KeyboardKey::KEY_J), das::LineInfo());
		addIEx("KEY_K", "KEY_K", int64_t(KeyboardKey::KEY_K), das::LineInfo());
		addIEx("KEY_L", "KEY_L", int64_t(KeyboardKey::KEY_L), das::LineInfo());
		addIEx("KEY_M", "KEY_M", int64_t(KeyboardKey::KEY_M), das::LineInfo());
		addIEx("KEY_N", "KEY_N", int64_t(KeyboardKey::KEY_N), das::LineInfo());
		addIEx("KEY_O", "KEY_O", int64_t(KeyboardKey::KEY_O), das::LineInfo());
		addIEx("KEY_P", "KEY_P", int64_t(KeyboardKey::KEY_P), das::LineInfo());
		addIEx("KEY_Q", "KEY_Q", int64_t(KeyboardKey::KEY_Q), das::LineInfo());
		addIEx("KEY_R", "KEY_R", int64_t(KeyboardKey::KEY_R), das::LineInfo());
		addIEx("KEY_S", "KEY_S", int64_t(KeyboardKey::KEY_S), das::LineInfo());
		addIEx("KEY_T", "KEY_T", int64_t(KeyboardKey::KEY_T), das::LineInfo());
		addIEx("KEY_U", "KEY_U", int64_t(KeyboardKey::KEY_U), das::LineInfo());
		addIEx("KEY_V", "KEY_V", int64_t(KeyboardKey::KEY_V), das::LineInfo());
		addIEx("KEY_W", "KEY_W", int64_t(KeyboardKey::KEY_W), das::LineInfo());
		addIEx("KEY_X", "KEY_X", int64_t(KeyboardKey::KEY_X), das::LineInfo());
		addIEx("KEY_Y", "KEY_Y", int64_t(KeyboardKey::KEY_Y), das::LineInfo());
		addIEx("KEY_Z", "KEY_Z", int64_t(KeyboardKey::KEY_Z), das::LineInfo());
		addIEx("KEY_LEFT_BRACKET", "KEY_LEFT_BRACKET", int64_t(KeyboardKey::KEY_LEFT_BRACKET), das::LineInfo());
		addIEx("KEY_BACKSLASH", "KEY_BACKSLASH", int64_t(KeyboardKey::KEY_BACKSLASH), das::LineInfo());
		addIEx("KEY_RIGHT_BRACKET", "KEY_RIGHT_BRACKET", int64_t(KeyboardKey::KEY_RIGHT_BRACKET), das::LineInfo());
		addIEx("KEY_GRAVE", "KEY_GRAVE", int64_t(KeyboardKey::KEY_GRAVE), das::LineInfo());
		addIEx("KEY_SPACE", "KEY_SPACE", int64_t(KeyboardKey::KEY_SPACE), das::LineInfo());
		addIEx("KEY_ESCAPE", "KEY_ESCAPE", int64_t(KeyboardKey::KEY_ESCAPE), das::LineInfo());
		addIEx("KEY_ENTER", "KEY_ENTER", int64_t(KeyboardKey::KEY_ENTER), das::LineInfo());
		addIEx("KEY_TAB", "KEY_TAB", int64_t(KeyboardKey::KEY_TAB), das::LineInfo());
		addIEx("KEY_BACKSPACE", "KEY_BACKSPACE", int64_t(KeyboardKey::KEY_BACKSPACE), das::LineInfo());
		addIEx("KEY_INSERT", "KEY_INSERT", int64_t(KeyboardKey::KEY_INSERT), das::LineInfo());
		addIEx("KEY_DELETE", "KEY_DELETE", int64_t(KeyboardKey::KEY_DELETE), das::LineInfo());
		addIEx("KEY_RIGHT", "KEY_RIGHT", int64_t(KeyboardKey::KEY_RIGHT), das::LineInfo());
		addIEx("KEY_LEFT", "KEY_LEFT", int64_t(KeyboardKey::KEY_LEFT), das::LineInfo());
		addIEx("KEY_DOWN", "KEY_DOWN", int64_t(KeyboardKey::KEY_DOWN), das::LineInfo());
		addIEx("KEY_UP", "KEY_UP", int64_t(KeyboardKey::KEY_UP), das::LineInfo());
		addIEx("KEY_PAGE_UP", "KEY_PAGE_UP", int64_t(KeyboardKey::KEY_PAGE_UP), das::LineInfo());
		addIEx("KEY_PAGE_DOWN", "KEY_PAGE_DOWN", int64_t(KeyboardKey::KEY_PAGE_DOWN), das::LineInfo());
		addIEx("KEY_HOME", "KEY_HOME", int64_t(KeyboardKey::KEY_HOME), das::LineInfo());
		addIEx("KEY_END", "KEY_END", int64_t(KeyboardKey::KEY_END), das::LineInfo());
		addIEx("KEY_CAPS_LOCK", "KEY_CAPS_LOCK", int64_t(KeyboardKey::KEY_CAPS_LOCK), das::LineInfo());
		addIEx("KEY_SCROLL_LOCK", "KEY_SCROLL_LOCK", int64_t(KeyboardKey::KEY_SCROLL_LOCK), das::LineInfo());
		addIEx("KEY_NUM_LOCK", "KEY_NUM_LOCK", int64_t(KeyboardKey::KEY_NUM_LOCK), das::LineInfo());
		addIEx("KEY_PRINT_SCREEN", "KEY_PRINT_SCREEN", int64_t(KeyboardKey::KEY_PRINT_SCREEN), das::LineInfo());
		addIEx("KEY_PAUSE", "KEY_PAUSE", int64_t(KeyboardKey::KEY_PAUSE), das::LineInfo());
		addIEx("KEY_F1", "KEY_F1", int64_t(KeyboardKey::KEY_F1), das::LineInfo());
		addIEx("KEY_F2", "KEY_F2", int64_t(KeyboardKey::KEY_F2), das::LineInfo());
		addIEx("KEY_F3", "KEY_F3", int64_t(KeyboardKey::KEY_F3), das::LineInfo());
		addIEx("KEY_F4", "KEY_F4", int64_t(KeyboardKey::KEY_F4), das::LineInfo());
		addIEx("KEY_F5", "KEY_F5", int64_t(KeyboardKey::KEY_F5), das::LineInfo());
		addIEx("KEY_F6", "KEY_F6", int64_t(KeyboardKey::KEY_F6), das::LineInfo());
		addIEx("KEY_F7", "KEY_F7", int64_t(KeyboardKey::KEY_F7), das::LineInfo());
		addIEx("KEY_F8", "KEY_F8", int64_t(KeyboardKey::KEY_F8), das::LineInfo());
		addIEx("KEY_F9", "KEY_F9", int64_t(KeyboardKey::KEY_F9), das::LineInfo());
		addIEx("KEY_F10", "KEY_F10", int64_t(KeyboardKey::KEY_F10), das::LineInfo());
		addIEx("KEY_F11", "KEY_F11", int64_t(KeyboardKey::KEY_F11), das::LineInfo());
		addIEx("KEY_F12", "KEY_F12", int64_t(KeyboardKey::KEY_F12), das::LineInfo());
		addIEx("KEY_LEFT_SHIFT", "KEY_LEFT_SHIFT", int64_t(KeyboardKey::KEY_LEFT_SHIFT), das::LineInfo());
		addIEx("KEY_LEFT_CONTROL", "KEY_LEFT_CONTROL", int64_t(KeyboardKey::KEY_LEFT_CONTROL), das::LineInfo());
		addIEx("KEY_LEFT_ALT", "KEY_LEFT_ALT", int64_t(KeyboardKey::KEY_LEFT_ALT), das::LineInfo());
		addIEx("KEY_LEFT_SUPER", "KEY_LEFT_SUPER", int64_t(KeyboardKey::KEY_LEFT_SUPER), das::LineInfo());
		addIEx("KEY_RIGHT_SHIFT", "KEY_RIGHT_SHIFT", int64_t(KeyboardKey::KEY_RIGHT_SHIFT), das::LineInfo());
		addIEx("KEY_RIGHT_CONTROL", "KEY_RIGHT_CONTROL", int64_t(KeyboardKey::KEY_RIGHT_CONTROL), das::LineInfo());
		addIEx("KEY_RIGHT_ALT", "KEY_RIGHT_ALT", int64_t(KeyboardKey::KEY_RIGHT_ALT), das::LineInfo());
		addIEx("KEY_RIGHT_SUPER", "KEY_RIGHT_SUPER", int64_t(KeyboardKey::KEY_RIGHT_SUPER), das::LineInfo());
		addIEx("KEY_KB_MENU", "KEY_KB_MENU", int64_t(KeyboardKey::KEY_KB_MENU), das::LineInfo());
		addIEx("KEY_KP_0", "KEY_KP_0", int64_t(KeyboardKey::KEY_KP_0), das::LineInfo());
		addIEx("KEY_KP_1", "KEY_KP_1", int64_t(KeyboardKey::KEY_KP_1), das::LineInfo());
		addIEx("KEY_KP_2", "KEY_KP_2", int64_t(KeyboardKey::KEY_KP_2), das::LineInfo());
		addIEx("KEY_KP_3", "KEY_KP_3", int64_t(KeyboardKey::KEY_KP_3), das::LineInfo());
		addIEx("KEY_KP_4", "KEY_KP_4", int64_t(KeyboardKey::KEY_KP_4), das::LineInfo());
		addIEx("KEY_KP_5", "KEY_KP_5", int64_t(KeyboardKey::KEY_KP_5), das::LineInfo());
		addIEx("KEY_KP_6", "KEY_KP_6", int64_t(KeyboardKey::KEY_KP_6), das::LineInfo());
		addIEx("KEY_KP_7", "KEY_KP_7", int64_t(KeyboardKey::KEY_KP_7), das::LineInfo());
		addIEx("KEY_KP_8", "KEY_KP_8", int64_t(KeyboardKey::KEY_KP_8), das::LineInfo());
		addIEx("KEY_KP_9", "KEY_KP_9", int64_t(KeyboardKey::KEY_KP_9), das::LineInfo());
		addIEx("KEY_KP_DECIMAL", "KEY_KP_DECIMAL", int64_t(KeyboardKey::KEY_KP_DECIMAL), das::LineInfo());
		addIEx("KEY_KP_DIVIDE", "KEY_KP_DIVIDE", int64_t(KeyboardKey::KEY_KP_DIVIDE), das::LineInfo());
		addIEx("KEY_KP_MULTIPLY", "KEY_KP_MULTIPLY", int64_t(KeyboardKey::KEY_KP_MULTIPLY), das::LineInfo());
		addIEx("KEY_KP_SUBTRACT", "KEY_KP_SUBTRACT", int64_t(KeyboardKey::KEY_KP_SUBTRACT), das::LineInfo());
		addIEx("KEY_KP_ADD", "KEY_KP_ADD", int64_t(KeyboardKey::KEY_KP_ADD), das::LineInfo());
		addIEx("KEY_KP_ENTER", "KEY_KP_ENTER", int64_t(KeyboardKey::KEY_KP_ENTER), das::LineInfo());
		addIEx("KEY_KP_EQUAL", "KEY_KP_EQUAL", int64_t(KeyboardKey::KEY_KP_EQUAL), das::LineInfo());
		addIEx("KEY_BACK", "KEY_BACK", int64_t(KeyboardKey::KEY_BACK), das::LineInfo());
		addIEx("KEY_MENU", "KEY_MENU", int64_t(KeyboardKey::KEY_MENU), das::LineInfo());
		addIEx("KEY_VOLUME_UP", "KEY_VOLUME_UP", int64_t(KeyboardKey::KEY_VOLUME_UP), das::LineInfo());
		addIEx("KEY_VOLUME_DOWN", "KEY_VOLUME_DOWN", int64_t(KeyboardKey::KEY_VOLUME_DOWN), das::LineInfo());
	}
};

// from raylib.h:710:9
class Enumeration_MouseButton : public das::Enumeration {
public:
	Enumeration_MouseButton() : das::Enumeration("MouseButton") {
		external = true;
		cppName = "MouseButton";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("MOUSE_BUTTON_LEFT", "MOUSE_BUTTON_LEFT", int64_t(MouseButton::MOUSE_BUTTON_LEFT), das::LineInfo());
		addIEx("MOUSE_BUTTON_RIGHT", "MOUSE_BUTTON_RIGHT", int64_t(MouseButton::MOUSE_BUTTON_RIGHT), das::LineInfo());
		addIEx("MOUSE_BUTTON_MIDDLE", "MOUSE_BUTTON_MIDDLE", int64_t(MouseButton::MOUSE_BUTTON_MIDDLE), das::LineInfo());
		addIEx("MOUSE_BUTTON_SIDE", "MOUSE_BUTTON_SIDE", int64_t(MouseButton::MOUSE_BUTTON_SIDE), das::LineInfo());
		addIEx("MOUSE_BUTTON_EXTRA", "MOUSE_BUTTON_EXTRA", int64_t(MouseButton::MOUSE_BUTTON_EXTRA), das::LineInfo());
		addIEx("MOUSE_BUTTON_FORWARD", "MOUSE_BUTTON_FORWARD", int64_t(MouseButton::MOUSE_BUTTON_FORWARD), das::LineInfo());
		addIEx("MOUSE_BUTTON_BACK", "MOUSE_BUTTON_BACK", int64_t(MouseButton::MOUSE_BUTTON_BACK), das::LineInfo());
	}
};

// from raylib.h:721:9
class Enumeration_MouseCursor : public das::Enumeration {
public:
	Enumeration_MouseCursor() : das::Enumeration("MouseCursor") {
		external = true;
		cppName = "MouseCursor";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("MOUSE_CURSOR_DEFAULT", "MOUSE_CURSOR_DEFAULT", int64_t(MouseCursor::MOUSE_CURSOR_DEFAULT), das::LineInfo());
		addIEx("MOUSE_CURSOR_ARROW", "MOUSE_CURSOR_ARROW", int64_t(MouseCursor::MOUSE_CURSOR_ARROW), das::LineInfo());
		addIEx("MOUSE_CURSOR_IBEAM", "MOUSE_CURSOR_IBEAM", int64_t(MouseCursor::MOUSE_CURSOR_IBEAM), das::LineInfo());
		addIEx("MOUSE_CURSOR_CROSSHAIR", "MOUSE_CURSOR_CROSSHAIR", int64_t(MouseCursor::MOUSE_CURSOR_CROSSHAIR), das::LineInfo());
		addIEx("MOUSE_CURSOR_POINTING_HAND", "MOUSE_CURSOR_POINTING_HAND", int64_t(MouseCursor::MOUSE_CURSOR_POINTING_HAND), das::LineInfo());
		addIEx("MOUSE_CURSOR_RESIZE_EW", "MOUSE_CURSOR_RESIZE_EW", int64_t(MouseCursor::MOUSE_CURSOR_RESIZE_EW), das::LineInfo());
		addIEx("MOUSE_CURSOR_RESIZE_NS", "MOUSE_CURSOR_RESIZE_NS", int64_t(MouseCursor::MOUSE_CURSOR_RESIZE_NS), das::LineInfo());
		addIEx("MOUSE_CURSOR_RESIZE_NWSE", "MOUSE_CURSOR_RESIZE_NWSE", int64_t(MouseCursor::MOUSE_CURSOR_RESIZE_NWSE), das::LineInfo());
		addIEx("MOUSE_CURSOR_RESIZE_NESW", "MOUSE_CURSOR_RESIZE_NESW", int64_t(MouseCursor::MOUSE_CURSOR_RESIZE_NESW), das::LineInfo());
		addIEx("MOUSE_CURSOR_RESIZE_ALL", "MOUSE_CURSOR_RESIZE_ALL", int64_t(MouseCursor::MOUSE_CURSOR_RESIZE_ALL), das::LineInfo());
		addIEx("MOUSE_CURSOR_NOT_ALLOWED", "MOUSE_CURSOR_NOT_ALLOWED", int64_t(MouseCursor::MOUSE_CURSOR_NOT_ALLOWED), das::LineInfo());
	}
};

// from raylib.h:736:9
class Enumeration_GamepadButton : public das::Enumeration {
public:
	Enumeration_GamepadButton() : das::Enumeration("GamepadButton") {
		external = true;
		cppName = "GamepadButton";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("GAMEPAD_BUTTON_UNKNOWN", "GAMEPAD_BUTTON_UNKNOWN", int64_t(GamepadButton::GAMEPAD_BUTTON_UNKNOWN), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_FACE_UP", "GAMEPAD_BUTTON_LEFT_FACE_UP", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_FACE_UP), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_FACE_RIGHT", "GAMEPAD_BUTTON_LEFT_FACE_RIGHT", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_FACE_RIGHT), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_FACE_DOWN", "GAMEPAD_BUTTON_LEFT_FACE_DOWN", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_FACE_DOWN), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_FACE_LEFT", "GAMEPAD_BUTTON_LEFT_FACE_LEFT", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_FACE_LEFT), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_FACE_UP", "GAMEPAD_BUTTON_RIGHT_FACE_UP", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_FACE_UP), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", "GAMEPAD_BUTTON_RIGHT_FACE_RIGHT", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_FACE_RIGHT), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_FACE_DOWN", "GAMEPAD_BUTTON_RIGHT_FACE_DOWN", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_FACE_DOWN), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_FACE_LEFT", "GAMEPAD_BUTTON_RIGHT_FACE_LEFT", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_FACE_LEFT), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_TRIGGER_1", "GAMEPAD_BUTTON_LEFT_TRIGGER_1", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_TRIGGER_1), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_TRIGGER_2", "GAMEPAD_BUTTON_LEFT_TRIGGER_2", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_TRIGGER_2), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_TRIGGER_1", "GAMEPAD_BUTTON_RIGHT_TRIGGER_1", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_TRIGGER_1), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_TRIGGER_2", "GAMEPAD_BUTTON_RIGHT_TRIGGER_2", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_TRIGGER_2), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_MIDDLE_LEFT", "GAMEPAD_BUTTON_MIDDLE_LEFT", int64_t(GamepadButton::GAMEPAD_BUTTON_MIDDLE_LEFT), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_MIDDLE", "GAMEPAD_BUTTON_MIDDLE", int64_t(GamepadButton::GAMEPAD_BUTTON_MIDDLE), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_MIDDLE_RIGHT", "GAMEPAD_BUTTON_MIDDLE_RIGHT", int64_t(GamepadButton::GAMEPAD_BUTTON_MIDDLE_RIGHT), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_LEFT_THUMB", "GAMEPAD_BUTTON_LEFT_THUMB", int64_t(GamepadButton::GAMEPAD_BUTTON_LEFT_THUMB), das::LineInfo());
		addIEx("GAMEPAD_BUTTON_RIGHT_THUMB", "GAMEPAD_BUTTON_RIGHT_THUMB", int64_t(GamepadButton::GAMEPAD_BUTTON_RIGHT_THUMB), das::LineInfo());
	}
};

// from raylib.h:758:9
class Enumeration_GamepadAxis : public das::Enumeration {
public:
	Enumeration_GamepadAxis() : das::Enumeration("GamepadAxis") {
		external = true;
		cppName = "GamepadAxis";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("GAMEPAD_AXIS_LEFT_X", "GAMEPAD_AXIS_LEFT_X", int64_t(GamepadAxis::GAMEPAD_AXIS_LEFT_X), das::LineInfo());
		addIEx("GAMEPAD_AXIS_LEFT_Y", "GAMEPAD_AXIS_LEFT_Y", int64_t(GamepadAxis::GAMEPAD_AXIS_LEFT_Y), das::LineInfo());
		addIEx("GAMEPAD_AXIS_RIGHT_X", "GAMEPAD_AXIS_RIGHT_X", int64_t(GamepadAxis::GAMEPAD_AXIS_RIGHT_X), das::LineInfo());
		addIEx("GAMEPAD_AXIS_RIGHT_Y", "GAMEPAD_AXIS_RIGHT_Y", int64_t(GamepadAxis::GAMEPAD_AXIS_RIGHT_Y), das::LineInfo());
		addIEx("GAMEPAD_AXIS_LEFT_TRIGGER", "GAMEPAD_AXIS_LEFT_TRIGGER", int64_t(GamepadAxis::GAMEPAD_AXIS_LEFT_TRIGGER), das::LineInfo());
		addIEx("GAMEPAD_AXIS_RIGHT_TRIGGER", "GAMEPAD_AXIS_RIGHT_TRIGGER", int64_t(GamepadAxis::GAMEPAD_AXIS_RIGHT_TRIGGER), das::LineInfo());
	}
};

// from raylib.h:768:9
class Enumeration_MaterialMapIndex : public das::Enumeration {
public:
	Enumeration_MaterialMapIndex() : das::Enumeration("MaterialMapIndex") {
		external = true;
		cppName = "MaterialMapIndex";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("MATERIAL_MAP_ALBEDO", "MATERIAL_MAP_ALBEDO", int64_t(MaterialMapIndex::MATERIAL_MAP_ALBEDO), das::LineInfo());
		addIEx("MATERIAL_MAP_METALNESS", "MATERIAL_MAP_METALNESS", int64_t(MaterialMapIndex::MATERIAL_MAP_METALNESS), das::LineInfo());
		addIEx("MATERIAL_MAP_NORMAL", "MATERIAL_MAP_NORMAL", int64_t(MaterialMapIndex::MATERIAL_MAP_NORMAL), das::LineInfo());
		addIEx("MATERIAL_MAP_ROUGHNESS", "MATERIAL_MAP_ROUGHNESS", int64_t(MaterialMapIndex::MATERIAL_MAP_ROUGHNESS), das::LineInfo());
		addIEx("MATERIAL_MAP_OCCLUSION", "MATERIAL_MAP_OCCLUSION", int64_t(MaterialMapIndex::MATERIAL_MAP_OCCLUSION), das::LineInfo());
		addIEx("MATERIAL_MAP_EMISSION", "MATERIAL_MAP_EMISSION", int64_t(MaterialMapIndex::MATERIAL_MAP_EMISSION), das::LineInfo());
		addIEx("MATERIAL_MAP_HEIGHT", "MATERIAL_MAP_HEIGHT", int64_t(MaterialMapIndex::MATERIAL_MAP_HEIGHT), das::LineInfo());
		addIEx("MATERIAL_MAP_CUBEMAP", "MATERIAL_MAP_CUBEMAP", int64_t(MaterialMapIndex::MATERIAL_MAP_CUBEMAP), das::LineInfo());
		addIEx("MATERIAL_MAP_IRRADIANCE", "MATERIAL_MAP_IRRADIANCE", int64_t(MaterialMapIndex::MATERIAL_MAP_IRRADIANCE), das::LineInfo());
		addIEx("MATERIAL_MAP_PREFILTER", "MATERIAL_MAP_PREFILTER", int64_t(MaterialMapIndex::MATERIAL_MAP_PREFILTER), das::LineInfo());
		addIEx("MATERIAL_MAP_BRDF", "MATERIAL_MAP_BRDF", int64_t(MaterialMapIndex::MATERIAL_MAP_BRDF), das::LineInfo());
	}
};

// from raylib.h:788:9
class Enumeration_ShaderLocationIndex : public das::Enumeration {
public:
	Enumeration_ShaderLocationIndex() : das::Enumeration("ShaderLocationIndex") {
		external = true;
		cppName = "ShaderLocationIndex";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SHADER_LOC_VERTEX_POSITION", "SHADER_LOC_VERTEX_POSITION", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_POSITION), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_TEXCOORD01", "SHADER_LOC_VERTEX_TEXCOORD01", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_TEXCOORD01), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_TEXCOORD02", "SHADER_LOC_VERTEX_TEXCOORD02", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_TEXCOORD02), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_NORMAL", "SHADER_LOC_VERTEX_NORMAL", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_NORMAL), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_TANGENT", "SHADER_LOC_VERTEX_TANGENT", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_TANGENT), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_COLOR", "SHADER_LOC_VERTEX_COLOR", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_COLOR), das::LineInfo());
		addIEx("SHADER_LOC_MATRIX_MVP", "SHADER_LOC_MATRIX_MVP", int64_t(ShaderLocationIndex::SHADER_LOC_MATRIX_MVP), das::LineInfo());
		addIEx("SHADER_LOC_MATRIX_VIEW", "SHADER_LOC_MATRIX_VIEW", int64_t(ShaderLocationIndex::SHADER_LOC_MATRIX_VIEW), das::LineInfo());
		addIEx("SHADER_LOC_MATRIX_PROJECTION", "SHADER_LOC_MATRIX_PROJECTION", int64_t(ShaderLocationIndex::SHADER_LOC_MATRIX_PROJECTION), das::LineInfo());
		addIEx("SHADER_LOC_MATRIX_MODEL", "SHADER_LOC_MATRIX_MODEL", int64_t(ShaderLocationIndex::SHADER_LOC_MATRIX_MODEL), das::LineInfo());
		addIEx("SHADER_LOC_MATRIX_NORMAL", "SHADER_LOC_MATRIX_NORMAL", int64_t(ShaderLocationIndex::SHADER_LOC_MATRIX_NORMAL), das::LineInfo());
		addIEx("SHADER_LOC_VECTOR_VIEW", "SHADER_LOC_VECTOR_VIEW", int64_t(ShaderLocationIndex::SHADER_LOC_VECTOR_VIEW), das::LineInfo());
		addIEx("SHADER_LOC_COLOR_DIFFUSE", "SHADER_LOC_COLOR_DIFFUSE", int64_t(ShaderLocationIndex::SHADER_LOC_COLOR_DIFFUSE), das::LineInfo());
		addIEx("SHADER_LOC_COLOR_SPECULAR", "SHADER_LOC_COLOR_SPECULAR", int64_t(ShaderLocationIndex::SHADER_LOC_COLOR_SPECULAR), das::LineInfo());
		addIEx("SHADER_LOC_COLOR_AMBIENT", "SHADER_LOC_COLOR_AMBIENT", int64_t(ShaderLocationIndex::SHADER_LOC_COLOR_AMBIENT), das::LineInfo());
		addIEx("SHADER_LOC_MAP_ALBEDO", "SHADER_LOC_MAP_ALBEDO", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_ALBEDO), das::LineInfo());
		addIEx("SHADER_LOC_MAP_METALNESS", "SHADER_LOC_MAP_METALNESS", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_METALNESS), das::LineInfo());
		addIEx("SHADER_LOC_MAP_NORMAL", "SHADER_LOC_MAP_NORMAL", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_NORMAL), das::LineInfo());
		addIEx("SHADER_LOC_MAP_ROUGHNESS", "SHADER_LOC_MAP_ROUGHNESS", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_ROUGHNESS), das::LineInfo());
		addIEx("SHADER_LOC_MAP_OCCLUSION", "SHADER_LOC_MAP_OCCLUSION", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_OCCLUSION), das::LineInfo());
		addIEx("SHADER_LOC_MAP_EMISSION", "SHADER_LOC_MAP_EMISSION", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_EMISSION), das::LineInfo());
		addIEx("SHADER_LOC_MAP_HEIGHT", "SHADER_LOC_MAP_HEIGHT", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_HEIGHT), das::LineInfo());
		addIEx("SHADER_LOC_MAP_CUBEMAP", "SHADER_LOC_MAP_CUBEMAP", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_CUBEMAP), das::LineInfo());
		addIEx("SHADER_LOC_MAP_IRRADIANCE", "SHADER_LOC_MAP_IRRADIANCE", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_IRRADIANCE), das::LineInfo());
		addIEx("SHADER_LOC_MAP_PREFILTER", "SHADER_LOC_MAP_PREFILTER", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_PREFILTER), das::LineInfo());
		addIEx("SHADER_LOC_MAP_BRDF", "SHADER_LOC_MAP_BRDF", int64_t(ShaderLocationIndex::SHADER_LOC_MAP_BRDF), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_BONEIDS", "SHADER_LOC_VERTEX_BONEIDS", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_BONEIDS), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_BONEWEIGHTS", "SHADER_LOC_VERTEX_BONEWEIGHTS", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_BONEWEIGHTS), das::LineInfo());
		addIEx("SHADER_LOC_MATRIX_BONETRANSFORMS", "SHADER_LOC_MATRIX_BONETRANSFORMS", int64_t(ShaderLocationIndex::SHADER_LOC_MATRIX_BONETRANSFORMS), das::LineInfo());
		addIEx("SHADER_LOC_VERTEX_INSTANCETRANSFORM", "SHADER_LOC_VERTEX_INSTANCETRANSFORM", int64_t(ShaderLocationIndex::SHADER_LOC_VERTEX_INSTANCETRANSFORM), das::LineInfo());
	}
};

// from raylib.h:825:9
class Enumeration_ShaderUniformDataType : public das::Enumeration {
public:
	Enumeration_ShaderUniformDataType() : das::Enumeration("ShaderUniformDataType") {
		external = true;
		cppName = "ShaderUniformDataType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SHADER_UNIFORM_FLOAT", "SHADER_UNIFORM_FLOAT", int64_t(ShaderUniformDataType::SHADER_UNIFORM_FLOAT), das::LineInfo());
		addIEx("SHADER_UNIFORM_VEC2", "SHADER_UNIFORM_VEC2", int64_t(ShaderUniformDataType::SHADER_UNIFORM_VEC2), das::LineInfo());
		addIEx("SHADER_UNIFORM_VEC3", "SHADER_UNIFORM_VEC3", int64_t(ShaderUniformDataType::SHADER_UNIFORM_VEC3), das::LineInfo());
		addIEx("SHADER_UNIFORM_VEC4", "SHADER_UNIFORM_VEC4", int64_t(ShaderUniformDataType::SHADER_UNIFORM_VEC4), das::LineInfo());
		addIEx("SHADER_UNIFORM_INT", "SHADER_UNIFORM_INT", int64_t(ShaderUniformDataType::SHADER_UNIFORM_INT), das::LineInfo());
		addIEx("SHADER_UNIFORM_IVEC2", "SHADER_UNIFORM_IVEC2", int64_t(ShaderUniformDataType::SHADER_UNIFORM_IVEC2), das::LineInfo());
		addIEx("SHADER_UNIFORM_IVEC3", "SHADER_UNIFORM_IVEC3", int64_t(ShaderUniformDataType::SHADER_UNIFORM_IVEC3), das::LineInfo());
		addIEx("SHADER_UNIFORM_IVEC4", "SHADER_UNIFORM_IVEC4", int64_t(ShaderUniformDataType::SHADER_UNIFORM_IVEC4), das::LineInfo());
		addIEx("SHADER_UNIFORM_UINT", "SHADER_UNIFORM_UINT", int64_t(ShaderUniformDataType::SHADER_UNIFORM_UINT), das::LineInfo());
		addIEx("SHADER_UNIFORM_UIVEC2", "SHADER_UNIFORM_UIVEC2", int64_t(ShaderUniformDataType::SHADER_UNIFORM_UIVEC2), das::LineInfo());
		addIEx("SHADER_UNIFORM_UIVEC3", "SHADER_UNIFORM_UIVEC3", int64_t(ShaderUniformDataType::SHADER_UNIFORM_UIVEC3), das::LineInfo());
		addIEx("SHADER_UNIFORM_UIVEC4", "SHADER_UNIFORM_UIVEC4", int64_t(ShaderUniformDataType::SHADER_UNIFORM_UIVEC4), das::LineInfo());
		addIEx("SHADER_UNIFORM_SAMPLER2D", "SHADER_UNIFORM_SAMPLER2D", int64_t(ShaderUniformDataType::SHADER_UNIFORM_SAMPLER2D), das::LineInfo());
	}
};

// from raylib.h:842:9
class Enumeration_ShaderAttributeDataType : public das::Enumeration {
public:
	Enumeration_ShaderAttributeDataType() : das::Enumeration("ShaderAttributeDataType") {
		external = true;
		cppName = "ShaderAttributeDataType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SHADER_ATTRIB_FLOAT", "SHADER_ATTRIB_FLOAT", int64_t(ShaderAttributeDataType::SHADER_ATTRIB_FLOAT), das::LineInfo());
		addIEx("SHADER_ATTRIB_VEC2", "SHADER_ATTRIB_VEC2", int64_t(ShaderAttributeDataType::SHADER_ATTRIB_VEC2), das::LineInfo());
		addIEx("SHADER_ATTRIB_VEC3", "SHADER_ATTRIB_VEC3", int64_t(ShaderAttributeDataType::SHADER_ATTRIB_VEC3), das::LineInfo());
		addIEx("SHADER_ATTRIB_VEC4", "SHADER_ATTRIB_VEC4", int64_t(ShaderAttributeDataType::SHADER_ATTRIB_VEC4), das::LineInfo());
	}
};

// from raylib.h:851:9
class Enumeration_PixelFormat : public das::Enumeration {
public:
	Enumeration_PixelFormat() : das::Enumeration("PixelFormat") {
		external = true;
		cppName = "PixelFormat";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("UNCOMPRESSED_GRAYSCALE", "PIXELFORMAT_UNCOMPRESSED_GRAYSCALE", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_GRAYSCALE), das::LineInfo());
		addIEx("UNCOMPRESSED_GRAY_ALPHA", "PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA), das::LineInfo());
		addIEx("UNCOMPRESSED_R5G6B5", "PIXELFORMAT_UNCOMPRESSED_R5G6B5", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R5G6B5), das::LineInfo());
		addIEx("UNCOMPRESSED_R8G8B8", "PIXELFORMAT_UNCOMPRESSED_R8G8B8", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R8G8B8), das::LineInfo());
		addIEx("UNCOMPRESSED_R5G5B5A1", "PIXELFORMAT_UNCOMPRESSED_R5G5B5A1", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R5G5B5A1), das::LineInfo());
		addIEx("UNCOMPRESSED_R4G4B4A4", "PIXELFORMAT_UNCOMPRESSED_R4G4B4A4", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R4G4B4A4), das::LineInfo());
		addIEx("UNCOMPRESSED_R8G8B8A8", "PIXELFORMAT_UNCOMPRESSED_R8G8B8A8", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R8G8B8A8), das::LineInfo());
		addIEx("UNCOMPRESSED_R32", "PIXELFORMAT_UNCOMPRESSED_R32", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R32), das::LineInfo());
		addIEx("UNCOMPRESSED_R32G32B32", "PIXELFORMAT_UNCOMPRESSED_R32G32B32", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R32G32B32), das::LineInfo());
		addIEx("UNCOMPRESSED_R32G32B32A32", "PIXELFORMAT_UNCOMPRESSED_R32G32B32A32", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R32G32B32A32), das::LineInfo());
		addIEx("UNCOMPRESSED_R16", "PIXELFORMAT_UNCOMPRESSED_R16", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R16), das::LineInfo());
		addIEx("UNCOMPRESSED_R16G16B16", "PIXELFORMAT_UNCOMPRESSED_R16G16B16", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R16G16B16), das::LineInfo());
		addIEx("UNCOMPRESSED_R16G16B16A16", "PIXELFORMAT_UNCOMPRESSED_R16G16B16A16", int64_t(PixelFormat::PIXELFORMAT_UNCOMPRESSED_R16G16B16A16), das::LineInfo());
		addIEx("COMPRESSED_DXT1_RGB", "PIXELFORMAT_COMPRESSED_DXT1_RGB", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_DXT1_RGB), das::LineInfo());
		addIEx("COMPRESSED_DXT1_RGBA", "PIXELFORMAT_COMPRESSED_DXT1_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_DXT1_RGBA), das::LineInfo());
		addIEx("COMPRESSED_DXT3_RGBA", "PIXELFORMAT_COMPRESSED_DXT3_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_DXT3_RGBA), das::LineInfo());
		addIEx("COMPRESSED_DXT5_RGBA", "PIXELFORMAT_COMPRESSED_DXT5_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_DXT5_RGBA), das::LineInfo());
		addIEx("COMPRESSED_ETC1_RGB", "PIXELFORMAT_COMPRESSED_ETC1_RGB", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_ETC1_RGB), das::LineInfo());
		addIEx("COMPRESSED_ETC2_RGB", "PIXELFORMAT_COMPRESSED_ETC2_RGB", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_ETC2_RGB), das::LineInfo());
		addIEx("COMPRESSED_ETC2_EAC_RGBA", "PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA), das::LineInfo());
		addIEx("COMPRESSED_PVRT_RGB", "PIXELFORMAT_COMPRESSED_PVRT_RGB", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_PVRT_RGB), das::LineInfo());
		addIEx("COMPRESSED_PVRT_RGBA", "PIXELFORMAT_COMPRESSED_PVRT_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_PVRT_RGBA), das::LineInfo());
		addIEx("COMPRESSED_ASTC_4x4_RGBA", "PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA), das::LineInfo());
		addIEx("COMPRESSED_ASTC_8x8_RGBA", "PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA", int64_t(PixelFormat::PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA), das::LineInfo());
	}
};

// from raylib.h:881:9
class Enumeration_TextureFilter : public das::Enumeration {
public:
	Enumeration_TextureFilter() : das::Enumeration("TextureFilter") {
		external = true;
		cppName = "TextureFilter";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXTURE_FILTER_POINT", "TEXTURE_FILTER_POINT", int64_t(TextureFilter::TEXTURE_FILTER_POINT), das::LineInfo());
		addIEx("TEXTURE_FILTER_BILINEAR", "TEXTURE_FILTER_BILINEAR", int64_t(TextureFilter::TEXTURE_FILTER_BILINEAR), das::LineInfo());
		addIEx("TEXTURE_FILTER_TRILINEAR", "TEXTURE_FILTER_TRILINEAR", int64_t(TextureFilter::TEXTURE_FILTER_TRILINEAR), das::LineInfo());
		addIEx("TEXTURE_FILTER_ANISOTROPIC_4X", "TEXTURE_FILTER_ANISOTROPIC_4X", int64_t(TextureFilter::TEXTURE_FILTER_ANISOTROPIC_4X), das::LineInfo());
		addIEx("TEXTURE_FILTER_ANISOTROPIC_8X", "TEXTURE_FILTER_ANISOTROPIC_8X", int64_t(TextureFilter::TEXTURE_FILTER_ANISOTROPIC_8X), das::LineInfo());
		addIEx("TEXTURE_FILTER_ANISOTROPIC_16X", "TEXTURE_FILTER_ANISOTROPIC_16X", int64_t(TextureFilter::TEXTURE_FILTER_ANISOTROPIC_16X), das::LineInfo());
	}
};

// from raylib.h:891:9
class Enumeration_TextureWrap : public das::Enumeration {
public:
	Enumeration_TextureWrap() : das::Enumeration("TextureWrap") {
		external = true;
		cppName = "TextureWrap";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXTURE_WRAP_REPEAT", "TEXTURE_WRAP_REPEAT", int64_t(TextureWrap::TEXTURE_WRAP_REPEAT), das::LineInfo());
		addIEx("TEXTURE_WRAP_CLAMP", "TEXTURE_WRAP_CLAMP", int64_t(TextureWrap::TEXTURE_WRAP_CLAMP), das::LineInfo());
		addIEx("TEXTURE_WRAP_MIRROR_REPEAT", "TEXTURE_WRAP_MIRROR_REPEAT", int64_t(TextureWrap::TEXTURE_WRAP_MIRROR_REPEAT), das::LineInfo());
		addIEx("TEXTURE_WRAP_MIRROR_CLAMP", "TEXTURE_WRAP_MIRROR_CLAMP", int64_t(TextureWrap::TEXTURE_WRAP_MIRROR_CLAMP), das::LineInfo());
	}
};

// from raylib.h:899:9
class Enumeration_CubemapLayout : public das::Enumeration {
public:
	Enumeration_CubemapLayout() : das::Enumeration("CubemapLayout") {
		external = true;
		cppName = "CubemapLayout";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CUBEMAP_LAYOUT_AUTO_DETECT", "CUBEMAP_LAYOUT_AUTO_DETECT", int64_t(CubemapLayout::CUBEMAP_LAYOUT_AUTO_DETECT), das::LineInfo());
		addIEx("CUBEMAP_LAYOUT_LINE_VERTICAL", "CUBEMAP_LAYOUT_LINE_VERTICAL", int64_t(CubemapLayout::CUBEMAP_LAYOUT_LINE_VERTICAL), das::LineInfo());
		addIEx("CUBEMAP_LAYOUT_LINE_HORIZONTAL", "CUBEMAP_LAYOUT_LINE_HORIZONTAL", int64_t(CubemapLayout::CUBEMAP_LAYOUT_LINE_HORIZONTAL), das::LineInfo());
		addIEx("CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR", "CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR", int64_t(CubemapLayout::CUBEMAP_LAYOUT_CROSS_THREE_BY_FOUR), das::LineInfo());
		addIEx("CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE", "CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE", int64_t(CubemapLayout::CUBEMAP_LAYOUT_CROSS_FOUR_BY_THREE), das::LineInfo());
	}
};

// from raylib.h:908:9
class Enumeration_FontType : public das::Enumeration {
public:
	Enumeration_FontType() : das::Enumeration("FontType") {
		external = true;
		cppName = "FontType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("FONT_DEFAULT", "FONT_DEFAULT", int64_t(FontType::FONT_DEFAULT), das::LineInfo());
		addIEx("FONT_BITMAP", "FONT_BITMAP", int64_t(FontType::FONT_BITMAP), das::LineInfo());
		addIEx("FONT_SDF", "FONT_SDF", int64_t(FontType::FONT_SDF), das::LineInfo());
	}
};

// from raylib.h:915:9
class Enumeration_BlendMode : public das::Enumeration {
public:
	Enumeration_BlendMode() : das::Enumeration("BlendMode") {
		external = true;
		cppName = "BlendMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("BLEND_ALPHA", "BLEND_ALPHA", int64_t(BlendMode::BLEND_ALPHA), das::LineInfo());
		addIEx("BLEND_ADDITIVE", "BLEND_ADDITIVE", int64_t(BlendMode::BLEND_ADDITIVE), das::LineInfo());
		addIEx("BLEND_MULTIPLIED", "BLEND_MULTIPLIED", int64_t(BlendMode::BLEND_MULTIPLIED), das::LineInfo());
		addIEx("BLEND_ADD_COLORS", "BLEND_ADD_COLORS", int64_t(BlendMode::BLEND_ADD_COLORS), das::LineInfo());
		addIEx("BLEND_SUBTRACT_COLORS", "BLEND_SUBTRACT_COLORS", int64_t(BlendMode::BLEND_SUBTRACT_COLORS), das::LineInfo());
		addIEx("BLEND_ALPHA_PREMULTIPLY", "BLEND_ALPHA_PREMULTIPLY", int64_t(BlendMode::BLEND_ALPHA_PREMULTIPLY), das::LineInfo());
		addIEx("BLEND_CUSTOM", "BLEND_CUSTOM", int64_t(BlendMode::BLEND_CUSTOM), das::LineInfo());
		addIEx("BLEND_CUSTOM_SEPARATE", "BLEND_CUSTOM_SEPARATE", int64_t(BlendMode::BLEND_CUSTOM_SEPARATE), das::LineInfo());
	}
};

// from raylib.h:928:9
class Enumeration_Gesture : public das::Enumeration {
public:
	Enumeration_Gesture() : das::Enumeration("Gesture") {
		external = true;
		cppName = "Gesture";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NONE", "GESTURE_NONE", int64_t(Gesture::GESTURE_NONE), das::LineInfo());
		addIEx("TAP", "GESTURE_TAP", int64_t(Gesture::GESTURE_TAP), das::LineInfo());
		addIEx("DOUBLETAP", "GESTURE_DOUBLETAP", int64_t(Gesture::GESTURE_DOUBLETAP), das::LineInfo());
		addIEx("HOLD", "GESTURE_HOLD", int64_t(Gesture::GESTURE_HOLD), das::LineInfo());
		addIEx("DRAG", "GESTURE_DRAG", int64_t(Gesture::GESTURE_DRAG), das::LineInfo());
		addIEx("SWIPE_RIGHT", "GESTURE_SWIPE_RIGHT", int64_t(Gesture::GESTURE_SWIPE_RIGHT), das::LineInfo());
		addIEx("SWIPE_LEFT", "GESTURE_SWIPE_LEFT", int64_t(Gesture::GESTURE_SWIPE_LEFT), das::LineInfo());
		addIEx("SWIPE_UP", "GESTURE_SWIPE_UP", int64_t(Gesture::GESTURE_SWIPE_UP), das::LineInfo());
		addIEx("SWIPE_DOWN", "GESTURE_SWIPE_DOWN", int64_t(Gesture::GESTURE_SWIPE_DOWN), das::LineInfo());
		addIEx("PINCH_IN", "GESTURE_PINCH_IN", int64_t(Gesture::GESTURE_PINCH_IN), das::LineInfo());
		addIEx("PINCH_OUT", "GESTURE_PINCH_OUT", int64_t(Gesture::GESTURE_PINCH_OUT), das::LineInfo());
	}
};

// from raylib.h:943:9
class Enumeration_CameraMode : public das::Enumeration {
public:
	Enumeration_CameraMode() : das::Enumeration("CameraMode") {
		external = true;
		cppName = "CameraMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CAMERA_CUSTOM", "CAMERA_CUSTOM", int64_t(CameraMode::CAMERA_CUSTOM), das::LineInfo());
		addIEx("CAMERA_FREE", "CAMERA_FREE", int64_t(CameraMode::CAMERA_FREE), das::LineInfo());
		addIEx("CAMERA_ORBITAL", "CAMERA_ORBITAL", int64_t(CameraMode::CAMERA_ORBITAL), das::LineInfo());
		addIEx("CAMERA_FIRST_PERSON", "CAMERA_FIRST_PERSON", int64_t(CameraMode::CAMERA_FIRST_PERSON), das::LineInfo());
		addIEx("CAMERA_THIRD_PERSON", "CAMERA_THIRD_PERSON", int64_t(CameraMode::CAMERA_THIRD_PERSON), das::LineInfo());
	}
};

// from raylib.h:952:9
class Enumeration_CameraProjection : public das::Enumeration {
public:
	Enumeration_CameraProjection() : das::Enumeration("CameraProjection") {
		external = true;
		cppName = "CameraProjection";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CAMERA_PERSPECTIVE", "CAMERA_PERSPECTIVE", int64_t(CameraProjection::CAMERA_PERSPECTIVE), das::LineInfo());
		addIEx("CAMERA_ORTHOGRAPHIC", "CAMERA_ORTHOGRAPHIC", int64_t(CameraProjection::CAMERA_ORTHOGRAPHIC), das::LineInfo());
	}
};

// from raylib.h:958:9
class Enumeration_NPatchLayout : public das::Enumeration {
public:
	Enumeration_NPatchLayout() : das::Enumeration("NPatchLayout") {
		external = true;
		cppName = "NPatchLayout";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("NPATCH_NINE_PATCH", "NPATCH_NINE_PATCH", int64_t(NPatchLayout::NPATCH_NINE_PATCH), das::LineInfo());
		addIEx("NPATCH_THREE_PATCH_VERTICAL", "NPATCH_THREE_PATCH_VERTICAL", int64_t(NPatchLayout::NPATCH_THREE_PATCH_VERTICAL), das::LineInfo());
		addIEx("NPATCH_THREE_PATCH_HORIZONTAL", "NPATCH_THREE_PATCH_HORIZONTAL", int64_t(NPatchLayout::NPATCH_THREE_PATCH_HORIZONTAL), das::LineInfo());
	}
};

