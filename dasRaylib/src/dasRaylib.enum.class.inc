// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

// from raylib.h:555:9
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

// from raylib.h:576:9
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

// from raylib.h:589:9
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

// from raylib.h:712:9
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

// from raylib.h:723:9
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

// from raylib.h:738:9
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

// from raylib.h:760:9
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

// from raylib.h:770:9
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

// from raylib.h:790:9
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

// from raylib.h:827:9
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

// from raylib.h:844:9
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

// from raylib.h:853:9
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

// from raylib.h:883:9
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

// from raylib.h:893:9
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

// from raylib.h:901:9
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

// from raylib.h:910:9
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

// from raylib.h:917:9
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

// from raylib.h:930:9
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

// from raylib.h:945:9
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

// from raylib.h:954:9
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

// from raylib.h:960:9
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

// from rlgl.h:431:9
class Enumeration_rlGlVersion : public das::Enumeration {
public:
	Enumeration_rlGlVersion() : das::Enumeration("rlGlVersion") {
		external = true;
		cppName = "rlGlVersion";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_OPENGL_SOFTWARE", "RL_OPENGL_SOFTWARE", int64_t(rlGlVersion::RL_OPENGL_SOFTWARE), das::LineInfo());
		addIEx("RL_OPENGL_11", "RL_OPENGL_11", int64_t(rlGlVersion::RL_OPENGL_11), das::LineInfo());
		addIEx("RL_OPENGL_21", "RL_OPENGL_21", int64_t(rlGlVersion::RL_OPENGL_21), das::LineInfo());
		addIEx("RL_OPENGL_33", "RL_OPENGL_33", int64_t(rlGlVersion::RL_OPENGL_33), das::LineInfo());
		addIEx("RL_OPENGL_43", "RL_OPENGL_43", int64_t(rlGlVersion::RL_OPENGL_43), das::LineInfo());
		addIEx("RL_OPENGL_ES_20", "RL_OPENGL_ES_20", int64_t(rlGlVersion::RL_OPENGL_ES_20), das::LineInfo());
		addIEx("RL_OPENGL_ES_30", "RL_OPENGL_ES_30", int64_t(rlGlVersion::RL_OPENGL_ES_30), das::LineInfo());
	}
};

// from rlgl.h:443:9
class Enumeration_rlTraceLogLevel : public das::Enumeration {
public:
	Enumeration_rlTraceLogLevel() : das::Enumeration("rlTraceLogLevel") {
		external = true;
		cppName = "rlTraceLogLevel";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_LOG_ALL", "RL_LOG_ALL", int64_t(rlTraceLogLevel::RL_LOG_ALL), das::LineInfo());
		addIEx("RL_LOG_TRACE", "RL_LOG_TRACE", int64_t(rlTraceLogLevel::RL_LOG_TRACE), das::LineInfo());
		addIEx("RL_LOG_DEBUG", "RL_LOG_DEBUG", int64_t(rlTraceLogLevel::RL_LOG_DEBUG), das::LineInfo());
		addIEx("RL_LOG_INFO", "RL_LOG_INFO", int64_t(rlTraceLogLevel::RL_LOG_INFO), das::LineInfo());
		addIEx("RL_LOG_WARNING", "RL_LOG_WARNING", int64_t(rlTraceLogLevel::RL_LOG_WARNING), das::LineInfo());
		addIEx("RL_LOG_ERROR", "RL_LOG_ERROR", int64_t(rlTraceLogLevel::RL_LOG_ERROR), das::LineInfo());
		addIEx("RL_LOG_FATAL", "RL_LOG_FATAL", int64_t(rlTraceLogLevel::RL_LOG_FATAL), das::LineInfo());
		addIEx("RL_LOG_NONE", "RL_LOG_NONE", int64_t(rlTraceLogLevel::RL_LOG_NONE), das::LineInfo());
	}
};

// from rlgl.h:456:9
class Enumeration_rlPixelFormat : public das::Enumeration {
public:
	Enumeration_rlPixelFormat() : das::Enumeration("rlPixelFormat") {
		external = true;
		cppName = "rlPixelFormat";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_GRAYSCALE", "RL_PIXELFORMAT_UNCOMPRESSED_GRAYSCALE", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_GRAYSCALE), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA", "RL_PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_GRAY_ALPHA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R5G6B5", "RL_PIXELFORMAT_UNCOMPRESSED_R5G6B5", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R5G6B5), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R8G8B8", "RL_PIXELFORMAT_UNCOMPRESSED_R8G8B8", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R8G8B8), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R5G5B5A1", "RL_PIXELFORMAT_UNCOMPRESSED_R5G5B5A1", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R5G5B5A1), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R4G4B4A4", "RL_PIXELFORMAT_UNCOMPRESSED_R4G4B4A4", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R4G4B4A4), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8", "RL_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R8G8B8A8), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R32", "RL_PIXELFORMAT_UNCOMPRESSED_R32", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R32), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R32G32B32", "RL_PIXELFORMAT_UNCOMPRESSED_R32G32B32", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R32G32B32), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R32G32B32A32", "RL_PIXELFORMAT_UNCOMPRESSED_R32G32B32A32", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R32G32B32A32), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R16", "RL_PIXELFORMAT_UNCOMPRESSED_R16", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R16), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R16G16B16", "RL_PIXELFORMAT_UNCOMPRESSED_R16G16B16", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R16G16B16), das::LineInfo());
		addIEx("RL_PIXELFORMAT_UNCOMPRESSED_R16G16B16A16", "RL_PIXELFORMAT_UNCOMPRESSED_R16G16B16A16", int64_t(rlPixelFormat::RL_PIXELFORMAT_UNCOMPRESSED_R16G16B16A16), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_DXT1_RGB", "RL_PIXELFORMAT_COMPRESSED_DXT1_RGB", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_DXT1_RGB), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_DXT1_RGBA", "RL_PIXELFORMAT_COMPRESSED_DXT1_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_DXT1_RGBA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_DXT3_RGBA", "RL_PIXELFORMAT_COMPRESSED_DXT3_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_DXT3_RGBA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_DXT5_RGBA", "RL_PIXELFORMAT_COMPRESSED_DXT5_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_DXT5_RGBA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_ETC1_RGB", "RL_PIXELFORMAT_COMPRESSED_ETC1_RGB", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_ETC1_RGB), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_ETC2_RGB", "RL_PIXELFORMAT_COMPRESSED_ETC2_RGB", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_ETC2_RGB), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA", "RL_PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_ETC2_EAC_RGBA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_PVRT_RGB", "RL_PIXELFORMAT_COMPRESSED_PVRT_RGB", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_PVRT_RGB), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_PVRT_RGBA", "RL_PIXELFORMAT_COMPRESSED_PVRT_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_PVRT_RGBA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA", "RL_PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_ASTC_4x4_RGBA), das::LineInfo());
		addIEx("RL_PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA", "RL_PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA", int64_t(rlPixelFormat::RL_PIXELFORMAT_COMPRESSED_ASTC_8x8_RGBA), das::LineInfo());
	}
};

// from rlgl.h:486:9
class Enumeration_rlTextureFilter : public das::Enumeration {
public:
	Enumeration_rlTextureFilter() : das::Enumeration("rlTextureFilter") {
		external = true;
		cppName = "rlTextureFilter";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_TEXTURE_FILTER_POINT", "RL_TEXTURE_FILTER_POINT", int64_t(rlTextureFilter::RL_TEXTURE_FILTER_POINT), das::LineInfo());
		addIEx("RL_TEXTURE_FILTER_BILINEAR", "RL_TEXTURE_FILTER_BILINEAR", int64_t(rlTextureFilter::RL_TEXTURE_FILTER_BILINEAR), das::LineInfo());
		addIEx("RL_TEXTURE_FILTER_TRILINEAR", "RL_TEXTURE_FILTER_TRILINEAR", int64_t(rlTextureFilter::RL_TEXTURE_FILTER_TRILINEAR), das::LineInfo());
		addIEx("RL_TEXTURE_FILTER_ANISOTROPIC_4X", "RL_TEXTURE_FILTER_ANISOTROPIC_4X", int64_t(rlTextureFilter::RL_TEXTURE_FILTER_ANISOTROPIC_4X), das::LineInfo());
		addIEx("RL_TEXTURE_FILTER_ANISOTROPIC_8X", "RL_TEXTURE_FILTER_ANISOTROPIC_8X", int64_t(rlTextureFilter::RL_TEXTURE_FILTER_ANISOTROPIC_8X), das::LineInfo());
		addIEx("RL_TEXTURE_FILTER_ANISOTROPIC_16X", "RL_TEXTURE_FILTER_ANISOTROPIC_16X", int64_t(rlTextureFilter::RL_TEXTURE_FILTER_ANISOTROPIC_16X), das::LineInfo());
	}
};

// from rlgl.h:496:9
class Enumeration_rlBlendMode : public das::Enumeration {
public:
	Enumeration_rlBlendMode() : das::Enumeration("rlBlendMode") {
		external = true;
		cppName = "rlBlendMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_BLEND_ALPHA", "RL_BLEND_ALPHA", int64_t(rlBlendMode::RL_BLEND_ALPHA), das::LineInfo());
		addIEx("RL_BLEND_ADDITIVE", "RL_BLEND_ADDITIVE", int64_t(rlBlendMode::RL_BLEND_ADDITIVE), das::LineInfo());
		addIEx("RL_BLEND_MULTIPLIED", "RL_BLEND_MULTIPLIED", int64_t(rlBlendMode::RL_BLEND_MULTIPLIED), das::LineInfo());
		addIEx("RL_BLEND_ADD_COLORS", "RL_BLEND_ADD_COLORS", int64_t(rlBlendMode::RL_BLEND_ADD_COLORS), das::LineInfo());
		addIEx("RL_BLEND_SUBTRACT_COLORS", "RL_BLEND_SUBTRACT_COLORS", int64_t(rlBlendMode::RL_BLEND_SUBTRACT_COLORS), das::LineInfo());
		addIEx("RL_BLEND_ALPHA_PREMULTIPLY", "RL_BLEND_ALPHA_PREMULTIPLY", int64_t(rlBlendMode::RL_BLEND_ALPHA_PREMULTIPLY), das::LineInfo());
		addIEx("RL_BLEND_CUSTOM", "RL_BLEND_CUSTOM", int64_t(rlBlendMode::RL_BLEND_CUSTOM), das::LineInfo());
		addIEx("RL_BLEND_CUSTOM_SEPARATE", "RL_BLEND_CUSTOM_SEPARATE", int64_t(rlBlendMode::RL_BLEND_CUSTOM_SEPARATE), das::LineInfo());
	}
};

// from rlgl.h:508:9
class Enumeration_rlShaderLocationIndex : public das::Enumeration {
public:
	Enumeration_rlShaderLocationIndex() : das::Enumeration("rlShaderLocationIndex") {
		external = true;
		cppName = "rlShaderLocationIndex";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_SHADER_LOC_VERTEX_POSITION", "RL_SHADER_LOC_VERTEX_POSITION", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VERTEX_POSITION), das::LineInfo());
		addIEx("RL_SHADER_LOC_VERTEX_TEXCOORD01", "RL_SHADER_LOC_VERTEX_TEXCOORD01", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VERTEX_TEXCOORD01), das::LineInfo());
		addIEx("RL_SHADER_LOC_VERTEX_TEXCOORD02", "RL_SHADER_LOC_VERTEX_TEXCOORD02", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VERTEX_TEXCOORD02), das::LineInfo());
		addIEx("RL_SHADER_LOC_VERTEX_NORMAL", "RL_SHADER_LOC_VERTEX_NORMAL", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VERTEX_NORMAL), das::LineInfo());
		addIEx("RL_SHADER_LOC_VERTEX_TANGENT", "RL_SHADER_LOC_VERTEX_TANGENT", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VERTEX_TANGENT), das::LineInfo());
		addIEx("RL_SHADER_LOC_VERTEX_COLOR", "RL_SHADER_LOC_VERTEX_COLOR", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VERTEX_COLOR), das::LineInfo());
		addIEx("RL_SHADER_LOC_MATRIX_MVP", "RL_SHADER_LOC_MATRIX_MVP", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MATRIX_MVP), das::LineInfo());
		addIEx("RL_SHADER_LOC_MATRIX_VIEW", "RL_SHADER_LOC_MATRIX_VIEW", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MATRIX_VIEW), das::LineInfo());
		addIEx("RL_SHADER_LOC_MATRIX_PROJECTION", "RL_SHADER_LOC_MATRIX_PROJECTION", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MATRIX_PROJECTION), das::LineInfo());
		addIEx("RL_SHADER_LOC_MATRIX_MODEL", "RL_SHADER_LOC_MATRIX_MODEL", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MATRIX_MODEL), das::LineInfo());
		addIEx("RL_SHADER_LOC_MATRIX_NORMAL", "RL_SHADER_LOC_MATRIX_NORMAL", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MATRIX_NORMAL), das::LineInfo());
		addIEx("RL_SHADER_LOC_VECTOR_VIEW", "RL_SHADER_LOC_VECTOR_VIEW", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_VECTOR_VIEW), das::LineInfo());
		addIEx("RL_SHADER_LOC_COLOR_DIFFUSE", "RL_SHADER_LOC_COLOR_DIFFUSE", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_COLOR_DIFFUSE), das::LineInfo());
		addIEx("RL_SHADER_LOC_COLOR_SPECULAR", "RL_SHADER_LOC_COLOR_SPECULAR", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_COLOR_SPECULAR), das::LineInfo());
		addIEx("RL_SHADER_LOC_COLOR_AMBIENT", "RL_SHADER_LOC_COLOR_AMBIENT", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_COLOR_AMBIENT), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_ALBEDO", "RL_SHADER_LOC_MAP_ALBEDO", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_ALBEDO), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_METALNESS", "RL_SHADER_LOC_MAP_METALNESS", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_METALNESS), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_NORMAL", "RL_SHADER_LOC_MAP_NORMAL", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_NORMAL), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_ROUGHNESS", "RL_SHADER_LOC_MAP_ROUGHNESS", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_ROUGHNESS), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_OCCLUSION", "RL_SHADER_LOC_MAP_OCCLUSION", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_OCCLUSION), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_EMISSION", "RL_SHADER_LOC_MAP_EMISSION", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_EMISSION), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_HEIGHT", "RL_SHADER_LOC_MAP_HEIGHT", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_HEIGHT), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_CUBEMAP", "RL_SHADER_LOC_MAP_CUBEMAP", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_CUBEMAP), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_IRRADIANCE", "RL_SHADER_LOC_MAP_IRRADIANCE", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_IRRADIANCE), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_PREFILTER", "RL_SHADER_LOC_MAP_PREFILTER", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_PREFILTER), das::LineInfo());
		addIEx("RL_SHADER_LOC_MAP_BRDF", "RL_SHADER_LOC_MAP_BRDF", int64_t(rlShaderLocationIndex::RL_SHADER_LOC_MAP_BRDF), das::LineInfo());
	}
};

// from rlgl.h:541:9
class Enumeration_rlShaderUniformDataType : public das::Enumeration {
public:
	Enumeration_rlShaderUniformDataType() : das::Enumeration("rlShaderUniformDataType") {
		external = true;
		cppName = "rlShaderUniformDataType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_SHADER_UNIFORM_FLOAT", "RL_SHADER_UNIFORM_FLOAT", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_FLOAT), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_VEC2", "RL_SHADER_UNIFORM_VEC2", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_VEC2), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_VEC3", "RL_SHADER_UNIFORM_VEC3", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_VEC3), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_VEC4", "RL_SHADER_UNIFORM_VEC4", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_VEC4), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_INT", "RL_SHADER_UNIFORM_INT", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_INT), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_IVEC2", "RL_SHADER_UNIFORM_IVEC2", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_IVEC2), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_IVEC3", "RL_SHADER_UNIFORM_IVEC3", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_IVEC3), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_IVEC4", "RL_SHADER_UNIFORM_IVEC4", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_IVEC4), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_UINT", "RL_SHADER_UNIFORM_UINT", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_UINT), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_UIVEC2", "RL_SHADER_UNIFORM_UIVEC2", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_UIVEC2), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_UIVEC3", "RL_SHADER_UNIFORM_UIVEC3", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_UIVEC3), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_UIVEC4", "RL_SHADER_UNIFORM_UIVEC4", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_UIVEC4), das::LineInfo());
		addIEx("RL_SHADER_UNIFORM_SAMPLER2D", "RL_SHADER_UNIFORM_SAMPLER2D", int64_t(rlShaderUniformDataType::RL_SHADER_UNIFORM_SAMPLER2D), das::LineInfo());
	}
};

// from rlgl.h:558:9
class Enumeration_rlShaderAttributeDataType : public das::Enumeration {
public:
	Enumeration_rlShaderAttributeDataType() : das::Enumeration("rlShaderAttributeDataType") {
		external = true;
		cppName = "rlShaderAttributeDataType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_SHADER_ATTRIB_FLOAT", "RL_SHADER_ATTRIB_FLOAT", int64_t(rlShaderAttributeDataType::RL_SHADER_ATTRIB_FLOAT), das::LineInfo());
		addIEx("RL_SHADER_ATTRIB_VEC2", "RL_SHADER_ATTRIB_VEC2", int64_t(rlShaderAttributeDataType::RL_SHADER_ATTRIB_VEC2), das::LineInfo());
		addIEx("RL_SHADER_ATTRIB_VEC3", "RL_SHADER_ATTRIB_VEC3", int64_t(rlShaderAttributeDataType::RL_SHADER_ATTRIB_VEC3), das::LineInfo());
		addIEx("RL_SHADER_ATTRIB_VEC4", "RL_SHADER_ATTRIB_VEC4", int64_t(rlShaderAttributeDataType::RL_SHADER_ATTRIB_VEC4), das::LineInfo());
	}
};

// from rlgl.h:567:9
class Enumeration_rlFramebufferAttachType : public das::Enumeration {
public:
	Enumeration_rlFramebufferAttachType() : das::Enumeration("rlFramebufferAttachType") {
		external = true;
		cppName = "rlFramebufferAttachType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL0", "RL_ATTACHMENT_COLOR_CHANNEL0", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL0), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL1", "RL_ATTACHMENT_COLOR_CHANNEL1", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL1), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL2", "RL_ATTACHMENT_COLOR_CHANNEL2", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL2), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL3", "RL_ATTACHMENT_COLOR_CHANNEL3", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL3), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL4", "RL_ATTACHMENT_COLOR_CHANNEL4", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL4), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL5", "RL_ATTACHMENT_COLOR_CHANNEL5", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL5), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL6", "RL_ATTACHMENT_COLOR_CHANNEL6", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL6), das::LineInfo());
		addIEx("RL_ATTACHMENT_COLOR_CHANNEL7", "RL_ATTACHMENT_COLOR_CHANNEL7", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_COLOR_CHANNEL7), das::LineInfo());
		addIEx("RL_ATTACHMENT_DEPTH", "RL_ATTACHMENT_DEPTH", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_DEPTH), das::LineInfo());
		addIEx("RL_ATTACHMENT_STENCIL", "RL_ATTACHMENT_STENCIL", int64_t(rlFramebufferAttachType::RL_ATTACHMENT_STENCIL), das::LineInfo());
	}
};

// from rlgl.h:581:9
class Enumeration_rlFramebufferAttachTextureType : public das::Enumeration {
public:
	Enumeration_rlFramebufferAttachTextureType() : das::Enumeration("rlFramebufferAttachTextureType") {
		external = true;
		cppName = "rlFramebufferAttachTextureType";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_ATTACHMENT_CUBEMAP_POSITIVE_X", "RL_ATTACHMENT_CUBEMAP_POSITIVE_X", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_CUBEMAP_POSITIVE_X), das::LineInfo());
		addIEx("RL_ATTACHMENT_CUBEMAP_NEGATIVE_X", "RL_ATTACHMENT_CUBEMAP_NEGATIVE_X", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_CUBEMAP_NEGATIVE_X), das::LineInfo());
		addIEx("RL_ATTACHMENT_CUBEMAP_POSITIVE_Y", "RL_ATTACHMENT_CUBEMAP_POSITIVE_Y", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_CUBEMAP_POSITIVE_Y), das::LineInfo());
		addIEx("RL_ATTACHMENT_CUBEMAP_NEGATIVE_Y", "RL_ATTACHMENT_CUBEMAP_NEGATIVE_Y", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_CUBEMAP_NEGATIVE_Y), das::LineInfo());
		addIEx("RL_ATTACHMENT_CUBEMAP_POSITIVE_Z", "RL_ATTACHMENT_CUBEMAP_POSITIVE_Z", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_CUBEMAP_POSITIVE_Z), das::LineInfo());
		addIEx("RL_ATTACHMENT_CUBEMAP_NEGATIVE_Z", "RL_ATTACHMENT_CUBEMAP_NEGATIVE_Z", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_CUBEMAP_NEGATIVE_Z), das::LineInfo());
		addIEx("RL_ATTACHMENT_TEXTURE2D", "RL_ATTACHMENT_TEXTURE2D", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_TEXTURE2D), das::LineInfo());
		addIEx("RL_ATTACHMENT_RENDERBUFFER", "RL_ATTACHMENT_RENDERBUFFER", int64_t(rlFramebufferAttachTextureType::RL_ATTACHMENT_RENDERBUFFER), das::LineInfo());
	}
};

// from rlgl.h:593:9
class Enumeration_rlCullMode : public das::Enumeration {
public:
	Enumeration_rlCullMode() : das::Enumeration("rlCullMode") {
		external = true;
		cppName = "rlCullMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RL_CULL_FACE_FRONT", "RL_CULL_FACE_FRONT", int64_t(rlCullMode::RL_CULL_FACE_FRONT), das::LineInfo());
		addIEx("RL_CULL_FACE_BACK", "RL_CULL_FACE_BACK", int64_t(rlCullMode::RL_CULL_FACE_BACK), das::LineInfo());
	}
};

// from raygui.h:561:9
class Enumeration_GuiResult : public das::Enumeration {
public:
	Enumeration_GuiResult() : das::Enumeration("GuiResult") {
		external = true;
		cppName = "GuiResult";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("RESULT_NONE", "RESULT_NONE", int64_t(GuiResult::RESULT_NONE), das::LineInfo());
		addIEx("RESULT_PRESSED", "RESULT_PRESSED", int64_t(GuiResult::RESULT_PRESSED), das::LineInfo());
		addIEx("RESULT_CHANGED", "RESULT_CHANGED", int64_t(GuiResult::RESULT_CHANGED), das::LineInfo());
		addIEx("RESULT_TAB_CLOSE", "RESULT_TAB_CLOSE", int64_t(GuiResult::RESULT_TAB_CLOSE), das::LineInfo());
	}
};

// from raygui.h:570:9
class Enumeration_GuiState : public das::Enumeration {
public:
	Enumeration_GuiState() : das::Enumeration("GuiState") {
		external = true;
		cppName = "GuiState";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("STATE_NORMAL", "STATE_NORMAL", int64_t(GuiState::STATE_NORMAL), das::LineInfo());
		addIEx("STATE_FOCUSED", "STATE_FOCUSED", int64_t(GuiState::STATE_FOCUSED), das::LineInfo());
		addIEx("STATE_PRESSED", "STATE_PRESSED", int64_t(GuiState::STATE_PRESSED), das::LineInfo());
		addIEx("STATE_DISABLED", "STATE_DISABLED", int64_t(GuiState::STATE_DISABLED), das::LineInfo());
	}
};

// from raygui.h:578:9
class Enumeration_GuiTextAlignment : public das::Enumeration {
public:
	Enumeration_GuiTextAlignment() : das::Enumeration("GuiTextAlignment") {
		external = true;
		cppName = "GuiTextAlignment";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXT_ALIGN_LEFT", "TEXT_ALIGN_LEFT", int64_t(GuiTextAlignment::TEXT_ALIGN_LEFT), das::LineInfo());
		addIEx("TEXT_ALIGN_CENTER", "TEXT_ALIGN_CENTER", int64_t(GuiTextAlignment::TEXT_ALIGN_CENTER), das::LineInfo());
		addIEx("TEXT_ALIGN_RIGHT", "TEXT_ALIGN_RIGHT", int64_t(GuiTextAlignment::TEXT_ALIGN_RIGHT), das::LineInfo());
	}
};

// from raygui.h:586:9
class Enumeration_GuiTextAlignmentVertical : public das::Enumeration {
public:
	Enumeration_GuiTextAlignmentVertical() : das::Enumeration("GuiTextAlignmentVertical") {
		external = true;
		cppName = "GuiTextAlignmentVertical";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXT_ALIGN_TOP", "TEXT_ALIGN_TOP", int64_t(GuiTextAlignmentVertical::TEXT_ALIGN_TOP), das::LineInfo());
		addIEx("TEXT_ALIGN_MIDDLE", "TEXT_ALIGN_MIDDLE", int64_t(GuiTextAlignmentVertical::TEXT_ALIGN_MIDDLE), das::LineInfo());
		addIEx("TEXT_ALIGN_BOTTOM", "TEXT_ALIGN_BOTTOM", int64_t(GuiTextAlignmentVertical::TEXT_ALIGN_BOTTOM), das::LineInfo());
	}
};

// from raygui.h:594:9
class Enumeration_GuiTextWrapMode : public das::Enumeration {
public:
	Enumeration_GuiTextWrapMode() : das::Enumeration("GuiTextWrapMode") {
		external = true;
		cppName = "GuiTextWrapMode";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXT_WRAP_NONE", "TEXT_WRAP_NONE", int64_t(GuiTextWrapMode::TEXT_WRAP_NONE), das::LineInfo());
		addIEx("TEXT_WRAP_CHAR", "TEXT_WRAP_CHAR", int64_t(GuiTextWrapMode::TEXT_WRAP_CHAR), das::LineInfo());
		addIEx("TEXT_WRAP_WORD", "TEXT_WRAP_WORD", int64_t(GuiTextWrapMode::TEXT_WRAP_WORD), das::LineInfo());
	}
};

// from raygui.h:602:9
class Enumeration_GuiControl : public das::Enumeration {
public:
	Enumeration_GuiControl() : das::Enumeration("GuiControl") {
		external = true;
		cppName = "GuiControl";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("DEFAULT", "DEFAULT", int64_t(GuiControl::DEFAULT), das::LineInfo());
		addIEx("LABEL", "LABEL", int64_t(GuiControl::LABEL), das::LineInfo());
		addIEx("BUTTON", "BUTTON", int64_t(GuiControl::BUTTON), das::LineInfo());
		addIEx("TOGGLE", "TOGGLE", int64_t(GuiControl::TOGGLE), das::LineInfo());
		addIEx("SLIDER", "SLIDER", int64_t(GuiControl::SLIDER), das::LineInfo());
		addIEx("PROGRESSBAR", "PROGRESSBAR", int64_t(GuiControl::PROGRESSBAR), das::LineInfo());
		addIEx("CHECKBOX", "CHECKBOX", int64_t(GuiControl::CHECKBOX), das::LineInfo());
		addIEx("COMBOBOX", "COMBOBOX", int64_t(GuiControl::COMBOBOX), das::LineInfo());
		addIEx("DROPDOWNBOX", "DROPDOWNBOX", int64_t(GuiControl::DROPDOWNBOX), das::LineInfo());
		addIEx("TEXTBOX", "TEXTBOX", int64_t(GuiControl::TEXTBOX), das::LineInfo());
		addIEx("VALUEBOX", "VALUEBOX", int64_t(GuiControl::VALUEBOX), das::LineInfo());
		addIEx("TABBAR", "TABBAR", int64_t(GuiControl::TABBAR), das::LineInfo());
		addIEx("LISTVIEW", "LISTVIEW", int64_t(GuiControl::LISTVIEW), das::LineInfo());
		addIEx("COLORPICKER", "COLORPICKER", int64_t(GuiControl::COLORPICKER), das::LineInfo());
		addIEx("SCROLLBAR", "SCROLLBAR", int64_t(GuiControl::SCROLLBAR), das::LineInfo());
		addIEx("STATUSBAR", "STATUSBAR", int64_t(GuiControl::STATUSBAR), das::LineInfo());
	}
};

// from raygui.h:628:9
class Enumeration_GuiControlProperty : public das::Enumeration {
public:
	Enumeration_GuiControlProperty() : das::Enumeration("GuiControlProperty") {
		external = true;
		cppName = "GuiControlProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("BORDER_COLOR_NORMAL", "BORDER_COLOR_NORMAL", int64_t(GuiControlProperty::BORDER_COLOR_NORMAL), das::LineInfo());
		addIEx("BASE_COLOR_NORMAL", "BASE_COLOR_NORMAL", int64_t(GuiControlProperty::BASE_COLOR_NORMAL), das::LineInfo());
		addIEx("TEXT_COLOR_NORMAL", "TEXT_COLOR_NORMAL", int64_t(GuiControlProperty::TEXT_COLOR_NORMAL), das::LineInfo());
		addIEx("BORDER_COLOR_FOCUSED", "BORDER_COLOR_FOCUSED", int64_t(GuiControlProperty::BORDER_COLOR_FOCUSED), das::LineInfo());
		addIEx("BASE_COLOR_FOCUSED", "BASE_COLOR_FOCUSED", int64_t(GuiControlProperty::BASE_COLOR_FOCUSED), das::LineInfo());
		addIEx("TEXT_COLOR_FOCUSED", "TEXT_COLOR_FOCUSED", int64_t(GuiControlProperty::TEXT_COLOR_FOCUSED), das::LineInfo());
		addIEx("BORDER_COLOR_PRESSED", "BORDER_COLOR_PRESSED", int64_t(GuiControlProperty::BORDER_COLOR_PRESSED), das::LineInfo());
		addIEx("BASE_COLOR_PRESSED", "BASE_COLOR_PRESSED", int64_t(GuiControlProperty::BASE_COLOR_PRESSED), das::LineInfo());
		addIEx("TEXT_COLOR_PRESSED", "TEXT_COLOR_PRESSED", int64_t(GuiControlProperty::TEXT_COLOR_PRESSED), das::LineInfo());
		addIEx("BORDER_COLOR_DISABLED", "BORDER_COLOR_DISABLED", int64_t(GuiControlProperty::BORDER_COLOR_DISABLED), das::LineInfo());
		addIEx("BASE_COLOR_DISABLED", "BASE_COLOR_DISABLED", int64_t(GuiControlProperty::BASE_COLOR_DISABLED), das::LineInfo());
		addIEx("TEXT_COLOR_DISABLED", "TEXT_COLOR_DISABLED", int64_t(GuiControlProperty::TEXT_COLOR_DISABLED), das::LineInfo());
		addIEx("BORDER_WIDTH", "BORDER_WIDTH", int64_t(GuiControlProperty::BORDER_WIDTH), das::LineInfo());
		addIEx("TEXT_PADDING", "TEXT_PADDING", int64_t(GuiControlProperty::TEXT_PADDING), das::LineInfo());
		addIEx("TEXT_ALIGNMENT", "TEXT_ALIGNMENT", int64_t(GuiControlProperty::TEXT_ALIGNMENT), das::LineInfo());
		addIEx("BASEPROP16", "BASEPROP16", int64_t(GuiControlProperty::BASEPROP16), das::LineInfo());
	}
};

// from raygui.h:664:9
class Enumeration_GuiDefaultProperty : public das::Enumeration {
public:
	Enumeration_GuiDefaultProperty() : das::Enumeration("GuiDefaultProperty") {
		external = true;
		cppName = "GuiDefaultProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXT_SIZE", "TEXT_SIZE", int64_t(GuiDefaultProperty::TEXT_SIZE), das::LineInfo());
		addIEx("TEXT_SPACING", "TEXT_SPACING", int64_t(GuiDefaultProperty::TEXT_SPACING), das::LineInfo());
		addIEx("LINE_COLOR", "LINE_COLOR", int64_t(GuiDefaultProperty::LINE_COLOR), das::LineInfo());
		addIEx("BACKGROUND_COLOR", "BACKGROUND_COLOR", int64_t(GuiDefaultProperty::BACKGROUND_COLOR), das::LineInfo());
		addIEx("TEXT_LINE_SPACING", "TEXT_LINE_SPACING", int64_t(GuiDefaultProperty::TEXT_LINE_SPACING), das::LineInfo());
		addIEx("TEXT_ALIGNMENT_VERTICAL", "TEXT_ALIGNMENT_VERTICAL", int64_t(GuiDefaultProperty::TEXT_ALIGNMENT_VERTICAL), das::LineInfo());
		addIEx("TEXT_WRAP_MODE", "TEXT_WRAP_MODE", int64_t(GuiDefaultProperty::TEXT_WRAP_MODE), das::LineInfo());
		addIEx("EXTPROP08", "EXTPROP08", int64_t(GuiDefaultProperty::EXTPROP08), das::LineInfo());
	}
};

// from raygui.h:687:9
class Enumeration_GuiToggleProperty : public das::Enumeration {
public:
	Enumeration_GuiToggleProperty() : das::Enumeration("GuiToggleProperty") {
		external = true;
		cppName = "GuiToggleProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("GROUP_PADDING", "GROUP_PADDING", int64_t(GuiToggleProperty::GROUP_PADDING), das::LineInfo());
		addIEx("GROUP_WIDTH_FULL", "GROUP_WIDTH_FULL", int64_t(GuiToggleProperty::GROUP_WIDTH_FULL), das::LineInfo());
	}
};

// from raygui.h:693:9
class Enumeration_GuiSliderProperty : public das::Enumeration {
public:
	Enumeration_GuiSliderProperty() : das::Enumeration("GuiSliderProperty") {
		external = true;
		cppName = "GuiSliderProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SLIDER_WIDTH", "SLIDER_WIDTH", int64_t(GuiSliderProperty::SLIDER_WIDTH), das::LineInfo());
		addIEx("SLIDER_PADDING", "SLIDER_PADDING", int64_t(GuiSliderProperty::SLIDER_PADDING), das::LineInfo());
	}
};

// from raygui.h:699:9
class Enumeration_GuiProgressBarProperty : public das::Enumeration {
public:
	Enumeration_GuiProgressBarProperty() : das::Enumeration("GuiProgressBarProperty") {
		external = true;
		cppName = "GuiProgressBarProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("PROGRESS_PADDING", "PROGRESS_PADDING", int64_t(GuiProgressBarProperty::PROGRESS_PADDING), das::LineInfo());
		addIEx("PROGRESS_SIDE", "PROGRESS_SIDE", int64_t(GuiProgressBarProperty::PROGRESS_SIDE), das::LineInfo());
	}
};

// from raygui.h:705:9
class Enumeration_GuiScrollBarProperty : public das::Enumeration {
public:
	Enumeration_GuiScrollBarProperty() : das::Enumeration("GuiScrollBarProperty") {
		external = true;
		cppName = "GuiScrollBarProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("ARROWS_SIZE", "ARROWS_SIZE", int64_t(GuiScrollBarProperty::ARROWS_SIZE), das::LineInfo());
		addIEx("ARROWS_VISIBLE", "ARROWS_VISIBLE", int64_t(GuiScrollBarProperty::ARROWS_VISIBLE), das::LineInfo());
		addIEx("SCROLL_SLIDER_PADDING", "SCROLL_SLIDER_PADDING", int64_t(GuiScrollBarProperty::SCROLL_SLIDER_PADDING), das::LineInfo());
		addIEx("SCROLL_SLIDER_SIZE", "SCROLL_SLIDER_SIZE", int64_t(GuiScrollBarProperty::SCROLL_SLIDER_SIZE), das::LineInfo());
		addIEx("SCROLL_PADDING", "SCROLL_PADDING", int64_t(GuiScrollBarProperty::SCROLL_PADDING), das::LineInfo());
		addIEx("SCROLL_SPEED", "SCROLL_SPEED", int64_t(GuiScrollBarProperty::SCROLL_SPEED), das::LineInfo());
	}
};

// from raygui.h:715:9
class Enumeration_GuiCheckBoxProperty : public das::Enumeration {
public:
	Enumeration_GuiCheckBoxProperty() : das::Enumeration("GuiCheckBoxProperty") {
		external = true;
		cppName = "GuiCheckBoxProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("CHECK_PADDING", "CHECK_PADDING", int64_t(GuiCheckBoxProperty::CHECK_PADDING), das::LineInfo());
	}
};

// from raygui.h:720:9
class Enumeration_GuiComboBoxProperty : public das::Enumeration {
public:
	Enumeration_GuiComboBoxProperty() : das::Enumeration("GuiComboBoxProperty") {
		external = true;
		cppName = "GuiComboBoxProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("COMBO_BUTTON_WIDTH", "COMBO_BUTTON_WIDTH", int64_t(GuiComboBoxProperty::COMBO_BUTTON_WIDTH), das::LineInfo());
		addIEx("COMBO_BUTTON_SPACING", "COMBO_BUTTON_SPACING", int64_t(GuiComboBoxProperty::COMBO_BUTTON_SPACING), das::LineInfo());
	}
};

// from raygui.h:727:9
class Enumeration_GuiDropdownBoxProperty : public das::Enumeration {
public:
	Enumeration_GuiDropdownBoxProperty() : das::Enumeration("GuiDropdownBoxProperty") {
		external = true;
		cppName = "GuiDropdownBoxProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("ARROW_PADDING", "ARROW_PADDING", int64_t(GuiDropdownBoxProperty::ARROW_PADDING), das::LineInfo());
		addIEx("DROPDOWN_ITEMS_SPACING", "DROPDOWN_ITEMS_SPACING", int64_t(GuiDropdownBoxProperty::DROPDOWN_ITEMS_SPACING), das::LineInfo());
		addIEx("DROPDOWN_ARROW_HIDDEN", "DROPDOWN_ARROW_HIDDEN", int64_t(GuiDropdownBoxProperty::DROPDOWN_ARROW_HIDDEN), das::LineInfo());
		addIEx("DROPDOWN_ROLL_UP", "DROPDOWN_ROLL_UP", int64_t(GuiDropdownBoxProperty::DROPDOWN_ROLL_UP), das::LineInfo());
		addIEx("DROPDOWN_MAX_HEIGHT", "DROPDOWN_MAX_HEIGHT", int64_t(GuiDropdownBoxProperty::DROPDOWN_MAX_HEIGHT), das::LineInfo());
	}
};

// from raygui.h:736:9
class Enumeration_GuiTextBoxProperty : public das::Enumeration {
public:
	Enumeration_GuiTextBoxProperty() : das::Enumeration("GuiTextBoxProperty") {
		external = true;
		cppName = "GuiTextBoxProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TEXT_READONLY", "TEXT_READONLY", int64_t(GuiTextBoxProperty::TEXT_READONLY), das::LineInfo());
	}
};

// from raygui.h:741:9
class Enumeration_GuiValueBoxProperty : public das::Enumeration {
public:
	Enumeration_GuiValueBoxProperty() : das::Enumeration("GuiValueBoxProperty") {
		external = true;
		cppName = "GuiValueBoxProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("SPINNER_BUTTON_WIDTH", "SPINNER_BUTTON_WIDTH", int64_t(GuiValueBoxProperty::SPINNER_BUTTON_WIDTH), das::LineInfo());
		addIEx("SPINNER_BUTTON_SPACING", "SPINNER_BUTTON_SPACING", int64_t(GuiValueBoxProperty::SPINNER_BUTTON_SPACING), das::LineInfo());
	}
};

// from raygui.h:747:9
class Enumeration_GuiTabBarProperty : public das::Enumeration {
public:
	Enumeration_GuiTabBarProperty() : das::Enumeration("GuiTabBarProperty") {
		external = true;
		cppName = "GuiTabBarProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("TAB_ITEMS_WIDTH", "TAB_ITEMS_WIDTH", int64_t(GuiTabBarProperty::TAB_ITEMS_WIDTH), das::LineInfo());
		addIEx("TAB_CLOSE_BUTTON", "TAB_CLOSE_BUTTON", int64_t(GuiTabBarProperty::TAB_CLOSE_BUTTON), das::LineInfo());
		addIEx("TAB_LINE_SIDE", "TAB_LINE_SIDE", int64_t(GuiTabBarProperty::TAB_LINE_SIDE), das::LineInfo());
	}
};

// from raygui.h:757:9
class Enumeration_GuiListViewProperty : public das::Enumeration {
public:
	Enumeration_GuiListViewProperty() : das::Enumeration("GuiListViewProperty") {
		external = true;
		cppName = "GuiListViewProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("LIST_ITEMS_HEIGHT", "LIST_ITEMS_HEIGHT", int64_t(GuiListViewProperty::LIST_ITEMS_HEIGHT), das::LineInfo());
		addIEx("LIST_ITEMS_SPACING", "LIST_ITEMS_SPACING", int64_t(GuiListViewProperty::LIST_ITEMS_SPACING), das::LineInfo());
		addIEx("SCROLLBAR_WIDTH", "SCROLLBAR_WIDTH", int64_t(GuiListViewProperty::SCROLLBAR_WIDTH), das::LineInfo());
		addIEx("SCROLLBAR_SIDE", "SCROLLBAR_SIDE", int64_t(GuiListViewProperty::SCROLLBAR_SIDE), das::LineInfo());
		addIEx("LIST_ITEMS_BORDER_NORMAL", "LIST_ITEMS_BORDER_NORMAL", int64_t(GuiListViewProperty::LIST_ITEMS_BORDER_NORMAL), das::LineInfo());
		addIEx("LIST_ITEMS_BORDER_WIDTH", "LIST_ITEMS_BORDER_WIDTH", int64_t(GuiListViewProperty::LIST_ITEMS_BORDER_WIDTH), das::LineInfo());
	}
};

// from raygui.h:767:9
class Enumeration_GuiColorPickerProperty : public das::Enumeration {
public:
	Enumeration_GuiColorPickerProperty() : das::Enumeration("GuiColorPickerProperty") {
		external = true;
		cppName = "GuiColorPickerProperty";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("COLOR_SELECTOR_SIZE", "COLOR_SELECTOR_SIZE", int64_t(GuiColorPickerProperty::COLOR_SELECTOR_SIZE), das::LineInfo());
		addIEx("HUEBAR_WIDTH", "HUEBAR_WIDTH", int64_t(GuiColorPickerProperty::HUEBAR_WIDTH), das::LineInfo());
		addIEx("HUEBAR_PADDING", "HUEBAR_PADDING", int64_t(GuiColorPickerProperty::HUEBAR_PADDING), das::LineInfo());
		addIEx("HUEBAR_SELECTOR_HEIGHT", "HUEBAR_SELECTOR_HEIGHT", int64_t(GuiColorPickerProperty::HUEBAR_SELECTOR_HEIGHT), das::LineInfo());
		addIEx("HUEBAR_SELECTOR_OVERFLOW", "HUEBAR_SELECTOR_OVERFLOW", int64_t(GuiColorPickerProperty::HUEBAR_SELECTOR_OVERFLOW), das::LineInfo());
	}
};

// from raygui.h:882:9
class Enumeration_GuiIconName : public das::Enumeration {
public:
	Enumeration_GuiIconName() : das::Enumeration("GuiIconName") {
		external = true;
		cppName = "GuiIconName";
		baseType = (das::Type) das::ToBasicType<int>::type;
		addIEx("ICON_NONE", "ICON_NONE", int64_t(GuiIconName::ICON_NONE), das::LineInfo());
		addIEx("ICON_FOLDER_FILE_OPEN", "ICON_FOLDER_FILE_OPEN", int64_t(GuiIconName::ICON_FOLDER_FILE_OPEN), das::LineInfo());
		addIEx("ICON_FILE_SAVE_CLASSIC", "ICON_FILE_SAVE_CLASSIC", int64_t(GuiIconName::ICON_FILE_SAVE_CLASSIC), das::LineInfo());
		addIEx("ICON_FOLDER_OPEN", "ICON_FOLDER_OPEN", int64_t(GuiIconName::ICON_FOLDER_OPEN), das::LineInfo());
		addIEx("ICON_FOLDER_SAVE", "ICON_FOLDER_SAVE", int64_t(GuiIconName::ICON_FOLDER_SAVE), das::LineInfo());
		addIEx("ICON_FILE_OPEN", "ICON_FILE_OPEN", int64_t(GuiIconName::ICON_FILE_OPEN), das::LineInfo());
		addIEx("ICON_FILE_SAVE", "ICON_FILE_SAVE", int64_t(GuiIconName::ICON_FILE_SAVE), das::LineInfo());
		addIEx("ICON_FILE_EXPORT", "ICON_FILE_EXPORT", int64_t(GuiIconName::ICON_FILE_EXPORT), das::LineInfo());
		addIEx("ICON_FILE_ADD", "ICON_FILE_ADD", int64_t(GuiIconName::ICON_FILE_ADD), das::LineInfo());
		addIEx("ICON_FILE_DELETE", "ICON_FILE_DELETE", int64_t(GuiIconName::ICON_FILE_DELETE), das::LineInfo());
		addIEx("ICON_FILETYPE_TEXT", "ICON_FILETYPE_TEXT", int64_t(GuiIconName::ICON_FILETYPE_TEXT), das::LineInfo());
		addIEx("ICON_FILETYPE_AUDIO", "ICON_FILETYPE_AUDIO", int64_t(GuiIconName::ICON_FILETYPE_AUDIO), das::LineInfo());
		addIEx("ICON_FILETYPE_IMAGE", "ICON_FILETYPE_IMAGE", int64_t(GuiIconName::ICON_FILETYPE_IMAGE), das::LineInfo());
		addIEx("ICON_FILETYPE_PLAY", "ICON_FILETYPE_PLAY", int64_t(GuiIconName::ICON_FILETYPE_PLAY), das::LineInfo());
		addIEx("ICON_FILETYPE_VIDEO", "ICON_FILETYPE_VIDEO", int64_t(GuiIconName::ICON_FILETYPE_VIDEO), das::LineInfo());
		addIEx("ICON_FILETYPE_INFO", "ICON_FILETYPE_INFO", int64_t(GuiIconName::ICON_FILETYPE_INFO), das::LineInfo());
		addIEx("ICON_FILE_COPY", "ICON_FILE_COPY", int64_t(GuiIconName::ICON_FILE_COPY), das::LineInfo());
		addIEx("ICON_FILE_CUT", "ICON_FILE_CUT", int64_t(GuiIconName::ICON_FILE_CUT), das::LineInfo());
		addIEx("ICON_FILE_PASTE", "ICON_FILE_PASTE", int64_t(GuiIconName::ICON_FILE_PASTE), das::LineInfo());
		addIEx("ICON_CURSOR_HAND", "ICON_CURSOR_HAND", int64_t(GuiIconName::ICON_CURSOR_HAND), das::LineInfo());
		addIEx("ICON_CURSOR_POINTER", "ICON_CURSOR_POINTER", int64_t(GuiIconName::ICON_CURSOR_POINTER), das::LineInfo());
		addIEx("ICON_CURSOR_CLASSIC", "ICON_CURSOR_CLASSIC", int64_t(GuiIconName::ICON_CURSOR_CLASSIC), das::LineInfo());
		addIEx("ICON_PENCIL", "ICON_PENCIL", int64_t(GuiIconName::ICON_PENCIL), das::LineInfo());
		addIEx("ICON_PENCIL_BIG", "ICON_PENCIL_BIG", int64_t(GuiIconName::ICON_PENCIL_BIG), das::LineInfo());
		addIEx("ICON_BRUSH_CLASSIC", "ICON_BRUSH_CLASSIC", int64_t(GuiIconName::ICON_BRUSH_CLASSIC), das::LineInfo());
		addIEx("ICON_BRUSH_PAINTER", "ICON_BRUSH_PAINTER", int64_t(GuiIconName::ICON_BRUSH_PAINTER), das::LineInfo());
		addIEx("ICON_WATER_DROP", "ICON_WATER_DROP", int64_t(GuiIconName::ICON_WATER_DROP), das::LineInfo());
		addIEx("ICON_COLOR_PICKER", "ICON_COLOR_PICKER", int64_t(GuiIconName::ICON_COLOR_PICKER), das::LineInfo());
		addIEx("ICON_RUBBER", "ICON_RUBBER", int64_t(GuiIconName::ICON_RUBBER), das::LineInfo());
		addIEx("ICON_COLOR_BUCKET", "ICON_COLOR_BUCKET", int64_t(GuiIconName::ICON_COLOR_BUCKET), das::LineInfo());
		addIEx("ICON_TEXT_T", "ICON_TEXT_T", int64_t(GuiIconName::ICON_TEXT_T), das::LineInfo());
		addIEx("ICON_TEXT_A", "ICON_TEXT_A", int64_t(GuiIconName::ICON_TEXT_A), das::LineInfo());
		addIEx("ICON_SCALE", "ICON_SCALE", int64_t(GuiIconName::ICON_SCALE), das::LineInfo());
		addIEx("ICON_RESIZE", "ICON_RESIZE", int64_t(GuiIconName::ICON_RESIZE), das::LineInfo());
		addIEx("ICON_FILTER_POINT", "ICON_FILTER_POINT", int64_t(GuiIconName::ICON_FILTER_POINT), das::LineInfo());
		addIEx("ICON_FILTER_BILINEAR", "ICON_FILTER_BILINEAR", int64_t(GuiIconName::ICON_FILTER_BILINEAR), das::LineInfo());
		addIEx("ICON_CROP", "ICON_CROP", int64_t(GuiIconName::ICON_CROP), das::LineInfo());
		addIEx("ICON_CROP_ALPHA", "ICON_CROP_ALPHA", int64_t(GuiIconName::ICON_CROP_ALPHA), das::LineInfo());
		addIEx("ICON_SQUARE_TOGGLE", "ICON_SQUARE_TOGGLE", int64_t(GuiIconName::ICON_SQUARE_TOGGLE), das::LineInfo());
		addIEx("ICON_SYMMETRY", "ICON_SYMMETRY", int64_t(GuiIconName::ICON_SYMMETRY), das::LineInfo());
		addIEx("ICON_SYMMETRY_HORIZONTAL", "ICON_SYMMETRY_HORIZONTAL", int64_t(GuiIconName::ICON_SYMMETRY_HORIZONTAL), das::LineInfo());
		addIEx("ICON_SYMMETRY_VERTICAL", "ICON_SYMMETRY_VERTICAL", int64_t(GuiIconName::ICON_SYMMETRY_VERTICAL), das::LineInfo());
		addIEx("ICON_LENS", "ICON_LENS", int64_t(GuiIconName::ICON_LENS), das::LineInfo());
		addIEx("ICON_LENS_BIG", "ICON_LENS_BIG", int64_t(GuiIconName::ICON_LENS_BIG), das::LineInfo());
		addIEx("ICON_EYE_ON", "ICON_EYE_ON", int64_t(GuiIconName::ICON_EYE_ON), das::LineInfo());
		addIEx("ICON_EYE_OFF", "ICON_EYE_OFF", int64_t(GuiIconName::ICON_EYE_OFF), das::LineInfo());
		addIEx("ICON_FILTER_TOP", "ICON_FILTER_TOP", int64_t(GuiIconName::ICON_FILTER_TOP), das::LineInfo());
		addIEx("ICON_FILTER", "ICON_FILTER", int64_t(GuiIconName::ICON_FILTER), das::LineInfo());
		addIEx("ICON_TARGET_POINT", "ICON_TARGET_POINT", int64_t(GuiIconName::ICON_TARGET_POINT), das::LineInfo());
		addIEx("ICON_TARGET_SMALL", "ICON_TARGET_SMALL", int64_t(GuiIconName::ICON_TARGET_SMALL), das::LineInfo());
		addIEx("ICON_TARGET_BIG", "ICON_TARGET_BIG", int64_t(GuiIconName::ICON_TARGET_BIG), das::LineInfo());
		addIEx("ICON_TARGET_MOVE", "ICON_TARGET_MOVE", int64_t(GuiIconName::ICON_TARGET_MOVE), das::LineInfo());
		addIEx("ICON_CURSOR_MOVE", "ICON_CURSOR_MOVE", int64_t(GuiIconName::ICON_CURSOR_MOVE), das::LineInfo());
		addIEx("ICON_CURSOR_SCALE", "ICON_CURSOR_SCALE", int64_t(GuiIconName::ICON_CURSOR_SCALE), das::LineInfo());
		addIEx("ICON_CURSOR_SCALE_RIGHT", "ICON_CURSOR_SCALE_RIGHT", int64_t(GuiIconName::ICON_CURSOR_SCALE_RIGHT), das::LineInfo());
		addIEx("ICON_CURSOR_SCALE_LEFT", "ICON_CURSOR_SCALE_LEFT", int64_t(GuiIconName::ICON_CURSOR_SCALE_LEFT), das::LineInfo());
		addIEx("ICON_UNDO", "ICON_UNDO", int64_t(GuiIconName::ICON_UNDO), das::LineInfo());
		addIEx("ICON_REDO", "ICON_REDO", int64_t(GuiIconName::ICON_REDO), das::LineInfo());
		addIEx("ICON_REREDO", "ICON_REREDO", int64_t(GuiIconName::ICON_REREDO), das::LineInfo());
		addIEx("ICON_MUTATE", "ICON_MUTATE", int64_t(GuiIconName::ICON_MUTATE), das::LineInfo());
		addIEx("ICON_ROTATE", "ICON_ROTATE", int64_t(GuiIconName::ICON_ROTATE), das::LineInfo());
		addIEx("ICON_REPEAT", "ICON_REPEAT", int64_t(GuiIconName::ICON_REPEAT), das::LineInfo());
		addIEx("ICON_SHUFFLE", "ICON_SHUFFLE", int64_t(GuiIconName::ICON_SHUFFLE), das::LineInfo());
		addIEx("ICON_EMPTYBOX", "ICON_EMPTYBOX", int64_t(GuiIconName::ICON_EMPTYBOX), das::LineInfo());
		addIEx("ICON_TARGET", "ICON_TARGET", int64_t(GuiIconName::ICON_TARGET), das::LineInfo());
		addIEx("ICON_TARGET_SMALL_FILL", "ICON_TARGET_SMALL_FILL", int64_t(GuiIconName::ICON_TARGET_SMALL_FILL), das::LineInfo());
		addIEx("ICON_TARGET_BIG_FILL", "ICON_TARGET_BIG_FILL", int64_t(GuiIconName::ICON_TARGET_BIG_FILL), das::LineInfo());
		addIEx("ICON_TARGET_MOVE_FILL", "ICON_TARGET_MOVE_FILL", int64_t(GuiIconName::ICON_TARGET_MOVE_FILL), das::LineInfo());
		addIEx("ICON_CURSOR_MOVE_FILL", "ICON_CURSOR_MOVE_FILL", int64_t(GuiIconName::ICON_CURSOR_MOVE_FILL), das::LineInfo());
		addIEx("ICON_CURSOR_SCALE_FILL", "ICON_CURSOR_SCALE_FILL", int64_t(GuiIconName::ICON_CURSOR_SCALE_FILL), das::LineInfo());
		addIEx("ICON_CURSOR_SCALE_RIGHT_FILL", "ICON_CURSOR_SCALE_RIGHT_FILL", int64_t(GuiIconName::ICON_CURSOR_SCALE_RIGHT_FILL), das::LineInfo());
		addIEx("ICON_CURSOR_SCALE_LEFT_FILL", "ICON_CURSOR_SCALE_LEFT_FILL", int64_t(GuiIconName::ICON_CURSOR_SCALE_LEFT_FILL), das::LineInfo());
		addIEx("ICON_UNDO_FILL", "ICON_UNDO_FILL", int64_t(GuiIconName::ICON_UNDO_FILL), das::LineInfo());
		addIEx("ICON_REDO_FILL", "ICON_REDO_FILL", int64_t(GuiIconName::ICON_REDO_FILL), das::LineInfo());
		addIEx("ICON_REREDO_FILL", "ICON_REREDO_FILL", int64_t(GuiIconName::ICON_REREDO_FILL), das::LineInfo());
		addIEx("ICON_MUTATE_FILL", "ICON_MUTATE_FILL", int64_t(GuiIconName::ICON_MUTATE_FILL), das::LineInfo());
		addIEx("ICON_ROTATE_FILL", "ICON_ROTATE_FILL", int64_t(GuiIconName::ICON_ROTATE_FILL), das::LineInfo());
		addIEx("ICON_REPEAT_FILL", "ICON_REPEAT_FILL", int64_t(GuiIconName::ICON_REPEAT_FILL), das::LineInfo());
		addIEx("ICON_SHUFFLE_FILL", "ICON_SHUFFLE_FILL", int64_t(GuiIconName::ICON_SHUFFLE_FILL), das::LineInfo());
		addIEx("ICON_EMPTYBOX_SMALL", "ICON_EMPTYBOX_SMALL", int64_t(GuiIconName::ICON_EMPTYBOX_SMALL), das::LineInfo());
		addIEx("ICON_BOX", "ICON_BOX", int64_t(GuiIconName::ICON_BOX), das::LineInfo());
		addIEx("ICON_BOX_TOP", "ICON_BOX_TOP", int64_t(GuiIconName::ICON_BOX_TOP), das::LineInfo());
		addIEx("ICON_BOX_TOP_RIGHT", "ICON_BOX_TOP_RIGHT", int64_t(GuiIconName::ICON_BOX_TOP_RIGHT), das::LineInfo());
		addIEx("ICON_BOX_RIGHT", "ICON_BOX_RIGHT", int64_t(GuiIconName::ICON_BOX_RIGHT), das::LineInfo());
		addIEx("ICON_BOX_BOTTOM_RIGHT", "ICON_BOX_BOTTOM_RIGHT", int64_t(GuiIconName::ICON_BOX_BOTTOM_RIGHT), das::LineInfo());
		addIEx("ICON_BOX_BOTTOM", "ICON_BOX_BOTTOM", int64_t(GuiIconName::ICON_BOX_BOTTOM), das::LineInfo());
		addIEx("ICON_BOX_BOTTOM_LEFT", "ICON_BOX_BOTTOM_LEFT", int64_t(GuiIconName::ICON_BOX_BOTTOM_LEFT), das::LineInfo());
		addIEx("ICON_BOX_LEFT", "ICON_BOX_LEFT", int64_t(GuiIconName::ICON_BOX_LEFT), das::LineInfo());
		addIEx("ICON_BOX_TOP_LEFT", "ICON_BOX_TOP_LEFT", int64_t(GuiIconName::ICON_BOX_TOP_LEFT), das::LineInfo());
		addIEx("ICON_BOX_CENTER", "ICON_BOX_CENTER", int64_t(GuiIconName::ICON_BOX_CENTER), das::LineInfo());
		addIEx("ICON_BOX_CIRCLE_MASK", "ICON_BOX_CIRCLE_MASK", int64_t(GuiIconName::ICON_BOX_CIRCLE_MASK), das::LineInfo());
		addIEx("ICON_POT", "ICON_POT", int64_t(GuiIconName::ICON_POT), das::LineInfo());
		addIEx("ICON_ALPHA_MULTIPLY", "ICON_ALPHA_MULTIPLY", int64_t(GuiIconName::ICON_ALPHA_MULTIPLY), das::LineInfo());
		addIEx("ICON_ALPHA_CLEAR", "ICON_ALPHA_CLEAR", int64_t(GuiIconName::ICON_ALPHA_CLEAR), das::LineInfo());
		addIEx("ICON_DITHERING", "ICON_DITHERING", int64_t(GuiIconName::ICON_DITHERING), das::LineInfo());
		addIEx("ICON_MIPMAPS", "ICON_MIPMAPS", int64_t(GuiIconName::ICON_MIPMAPS), das::LineInfo());
		addIEx("ICON_BOX_GRID", "ICON_BOX_GRID", int64_t(GuiIconName::ICON_BOX_GRID), das::LineInfo());
		addIEx("ICON_GRID", "ICON_GRID", int64_t(GuiIconName::ICON_GRID), das::LineInfo());
		addIEx("ICON_BOX_CORNERS_SMALL", "ICON_BOX_CORNERS_SMALL", int64_t(GuiIconName::ICON_BOX_CORNERS_SMALL), das::LineInfo());
		addIEx("ICON_BOX_CORNERS_BIG", "ICON_BOX_CORNERS_BIG", int64_t(GuiIconName::ICON_BOX_CORNERS_BIG), das::LineInfo());
		addIEx("ICON_FOUR_BOXES", "ICON_FOUR_BOXES", int64_t(GuiIconName::ICON_FOUR_BOXES), das::LineInfo());
		addIEx("ICON_GRID_FILL", "ICON_GRID_FILL", int64_t(GuiIconName::ICON_GRID_FILL), das::LineInfo());
		addIEx("ICON_BOX_MULTISIZE", "ICON_BOX_MULTISIZE", int64_t(GuiIconName::ICON_BOX_MULTISIZE), das::LineInfo());
		addIEx("ICON_ZOOM_SMALL", "ICON_ZOOM_SMALL", int64_t(GuiIconName::ICON_ZOOM_SMALL), das::LineInfo());
		addIEx("ICON_ZOOM_MEDIUM", "ICON_ZOOM_MEDIUM", int64_t(GuiIconName::ICON_ZOOM_MEDIUM), das::LineInfo());
		addIEx("ICON_ZOOM_BIG", "ICON_ZOOM_BIG", int64_t(GuiIconName::ICON_ZOOM_BIG), das::LineInfo());
		addIEx("ICON_ZOOM_ALL", "ICON_ZOOM_ALL", int64_t(GuiIconName::ICON_ZOOM_ALL), das::LineInfo());
		addIEx("ICON_ZOOM_CENTER", "ICON_ZOOM_CENTER", int64_t(GuiIconName::ICON_ZOOM_CENTER), das::LineInfo());
		addIEx("ICON_BOX_DOTS_SMALL", "ICON_BOX_DOTS_SMALL", int64_t(GuiIconName::ICON_BOX_DOTS_SMALL), das::LineInfo());
		addIEx("ICON_BOX_DOTS_BIG", "ICON_BOX_DOTS_BIG", int64_t(GuiIconName::ICON_BOX_DOTS_BIG), das::LineInfo());
		addIEx("ICON_BOX_CONCENTRIC", "ICON_BOX_CONCENTRIC", int64_t(GuiIconName::ICON_BOX_CONCENTRIC), das::LineInfo());
		addIEx("ICON_BOX_GRID_BIG", "ICON_BOX_GRID_BIG", int64_t(GuiIconName::ICON_BOX_GRID_BIG), das::LineInfo());
		addIEx("ICON_OK_TICK", "ICON_OK_TICK", int64_t(GuiIconName::ICON_OK_TICK), das::LineInfo());
		addIEx("ICON_CROSS", "ICON_CROSS", int64_t(GuiIconName::ICON_CROSS), das::LineInfo());
		addIEx("ICON_ARROW_LEFT", "ICON_ARROW_LEFT", int64_t(GuiIconName::ICON_ARROW_LEFT), das::LineInfo());
		addIEx("ICON_ARROW_RIGHT", "ICON_ARROW_RIGHT", int64_t(GuiIconName::ICON_ARROW_RIGHT), das::LineInfo());
		addIEx("ICON_ARROW_DOWN", "ICON_ARROW_DOWN", int64_t(GuiIconName::ICON_ARROW_DOWN), das::LineInfo());
		addIEx("ICON_ARROW_UP", "ICON_ARROW_UP", int64_t(GuiIconName::ICON_ARROW_UP), das::LineInfo());
		addIEx("ICON_ARROW_LEFT_FILL", "ICON_ARROW_LEFT_FILL", int64_t(GuiIconName::ICON_ARROW_LEFT_FILL), das::LineInfo());
		addIEx("ICON_ARROW_RIGHT_FILL", "ICON_ARROW_RIGHT_FILL", int64_t(GuiIconName::ICON_ARROW_RIGHT_FILL), das::LineInfo());
		addIEx("ICON_ARROW_DOWN_FILL", "ICON_ARROW_DOWN_FILL", int64_t(GuiIconName::ICON_ARROW_DOWN_FILL), das::LineInfo());
		addIEx("ICON_ARROW_UP_FILL", "ICON_ARROW_UP_FILL", int64_t(GuiIconName::ICON_ARROW_UP_FILL), das::LineInfo());
		addIEx("ICON_AUDIO", "ICON_AUDIO", int64_t(GuiIconName::ICON_AUDIO), das::LineInfo());
		addIEx("ICON_FX", "ICON_FX", int64_t(GuiIconName::ICON_FX), das::LineInfo());
		addIEx("ICON_WAVE", "ICON_WAVE", int64_t(GuiIconName::ICON_WAVE), das::LineInfo());
		addIEx("ICON_WAVE_SINUS", "ICON_WAVE_SINUS", int64_t(GuiIconName::ICON_WAVE_SINUS), das::LineInfo());
		addIEx("ICON_WAVE_SQUARE", "ICON_WAVE_SQUARE", int64_t(GuiIconName::ICON_WAVE_SQUARE), das::LineInfo());
		addIEx("ICON_WAVE_TRIANGULAR", "ICON_WAVE_TRIANGULAR", int64_t(GuiIconName::ICON_WAVE_TRIANGULAR), das::LineInfo());
		addIEx("ICON_CROSS_SMALL", "ICON_CROSS_SMALL", int64_t(GuiIconName::ICON_CROSS_SMALL), das::LineInfo());
		addIEx("ICON_PLAYER_PREVIOUS", "ICON_PLAYER_PREVIOUS", int64_t(GuiIconName::ICON_PLAYER_PREVIOUS), das::LineInfo());
		addIEx("ICON_PLAYER_PLAY_BACK", "ICON_PLAYER_PLAY_BACK", int64_t(GuiIconName::ICON_PLAYER_PLAY_BACK), das::LineInfo());
		addIEx("ICON_PLAYER_PLAY", "ICON_PLAYER_PLAY", int64_t(GuiIconName::ICON_PLAYER_PLAY), das::LineInfo());
		addIEx("ICON_PLAYER_PAUSE", "ICON_PLAYER_PAUSE", int64_t(GuiIconName::ICON_PLAYER_PAUSE), das::LineInfo());
		addIEx("ICON_PLAYER_STOP", "ICON_PLAYER_STOP", int64_t(GuiIconName::ICON_PLAYER_STOP), das::LineInfo());
		addIEx("ICON_PLAYER_NEXT", "ICON_PLAYER_NEXT", int64_t(GuiIconName::ICON_PLAYER_NEXT), das::LineInfo());
		addIEx("ICON_PLAYER_RECORD", "ICON_PLAYER_RECORD", int64_t(GuiIconName::ICON_PLAYER_RECORD), das::LineInfo());
		addIEx("ICON_MAGNET", "ICON_MAGNET", int64_t(GuiIconName::ICON_MAGNET), das::LineInfo());
		addIEx("ICON_LOCK_CLOSE", "ICON_LOCK_CLOSE", int64_t(GuiIconName::ICON_LOCK_CLOSE), das::LineInfo());
		addIEx("ICON_LOCK_OPEN", "ICON_LOCK_OPEN", int64_t(GuiIconName::ICON_LOCK_OPEN), das::LineInfo());
		addIEx("ICON_CLOCK", "ICON_CLOCK", int64_t(GuiIconName::ICON_CLOCK), das::LineInfo());
		addIEx("ICON_TOOLS", "ICON_TOOLS", int64_t(GuiIconName::ICON_TOOLS), das::LineInfo());
		addIEx("ICON_GEAR", "ICON_GEAR", int64_t(GuiIconName::ICON_GEAR), das::LineInfo());
		addIEx("ICON_GEAR_BIG", "ICON_GEAR_BIG", int64_t(GuiIconName::ICON_GEAR_BIG), das::LineInfo());
		addIEx("ICON_BIN", "ICON_BIN", int64_t(GuiIconName::ICON_BIN), das::LineInfo());
		addIEx("ICON_HAND_POINTER", "ICON_HAND_POINTER", int64_t(GuiIconName::ICON_HAND_POINTER), das::LineInfo());
		addIEx("ICON_LASER", "ICON_LASER", int64_t(GuiIconName::ICON_LASER), das::LineInfo());
		addIEx("ICON_COIN", "ICON_COIN", int64_t(GuiIconName::ICON_COIN), das::LineInfo());
		addIEx("ICON_EXPLOSION", "ICON_EXPLOSION", int64_t(GuiIconName::ICON_EXPLOSION), das::LineInfo());
		addIEx("ICON_1UP", "ICON_1UP", int64_t(GuiIconName::ICON_1UP), das::LineInfo());
		addIEx("ICON_PLAYER", "ICON_PLAYER", int64_t(GuiIconName::ICON_PLAYER), das::LineInfo());
		addIEx("ICON_PLAYER_JUMP", "ICON_PLAYER_JUMP", int64_t(GuiIconName::ICON_PLAYER_JUMP), das::LineInfo());
		addIEx("ICON_KEY", "ICON_KEY", int64_t(GuiIconName::ICON_KEY), das::LineInfo());
		addIEx("ICON_DEMON", "ICON_DEMON", int64_t(GuiIconName::ICON_DEMON), das::LineInfo());
		addIEx("ICON_TEXT_POPUP", "ICON_TEXT_POPUP", int64_t(GuiIconName::ICON_TEXT_POPUP), das::LineInfo());
		addIEx("ICON_GEAR_EX", "ICON_GEAR_EX", int64_t(GuiIconName::ICON_GEAR_EX), das::LineInfo());
		addIEx("ICON_CRACK", "ICON_CRACK", int64_t(GuiIconName::ICON_CRACK), das::LineInfo());
		addIEx("ICON_CRACK_POINTS", "ICON_CRACK_POINTS", int64_t(GuiIconName::ICON_CRACK_POINTS), das::LineInfo());
		addIEx("ICON_STAR", "ICON_STAR", int64_t(GuiIconName::ICON_STAR), das::LineInfo());
		addIEx("ICON_DOOR", "ICON_DOOR", int64_t(GuiIconName::ICON_DOOR), das::LineInfo());
		addIEx("ICON_EXIT", "ICON_EXIT", int64_t(GuiIconName::ICON_EXIT), das::LineInfo());
		addIEx("ICON_MODE_2D", "ICON_MODE_2D", int64_t(GuiIconName::ICON_MODE_2D), das::LineInfo());
		addIEx("ICON_MODE_3D", "ICON_MODE_3D", int64_t(GuiIconName::ICON_MODE_3D), das::LineInfo());
		addIEx("ICON_CUBE", "ICON_CUBE", int64_t(GuiIconName::ICON_CUBE), das::LineInfo());
		addIEx("ICON_CUBE_FACE_TOP", "ICON_CUBE_FACE_TOP", int64_t(GuiIconName::ICON_CUBE_FACE_TOP), das::LineInfo());
		addIEx("ICON_CUBE_FACE_LEFT", "ICON_CUBE_FACE_LEFT", int64_t(GuiIconName::ICON_CUBE_FACE_LEFT), das::LineInfo());
		addIEx("ICON_CUBE_FACE_FRONT", "ICON_CUBE_FACE_FRONT", int64_t(GuiIconName::ICON_CUBE_FACE_FRONT), das::LineInfo());
		addIEx("ICON_CUBE_FACE_BOTTOM", "ICON_CUBE_FACE_BOTTOM", int64_t(GuiIconName::ICON_CUBE_FACE_BOTTOM), das::LineInfo());
		addIEx("ICON_CUBE_FACE_RIGHT", "ICON_CUBE_FACE_RIGHT", int64_t(GuiIconName::ICON_CUBE_FACE_RIGHT), das::LineInfo());
		addIEx("ICON_CUBE_FACE_BACK", "ICON_CUBE_FACE_BACK", int64_t(GuiIconName::ICON_CUBE_FACE_BACK), das::LineInfo());
		addIEx("ICON_CAMERA", "ICON_CAMERA", int64_t(GuiIconName::ICON_CAMERA), das::LineInfo());
		addIEx("ICON_SPECIAL", "ICON_SPECIAL", int64_t(GuiIconName::ICON_SPECIAL), das::LineInfo());
		addIEx("ICON_LINK_NET", "ICON_LINK_NET", int64_t(GuiIconName::ICON_LINK_NET), das::LineInfo());
		addIEx("ICON_LINK_BOXES", "ICON_LINK_BOXES", int64_t(GuiIconName::ICON_LINK_BOXES), das::LineInfo());
		addIEx("ICON_LINK_MULTI", "ICON_LINK_MULTI", int64_t(GuiIconName::ICON_LINK_MULTI), das::LineInfo());
		addIEx("ICON_LINK", "ICON_LINK", int64_t(GuiIconName::ICON_LINK), das::LineInfo());
		addIEx("ICON_LINK_BROKE", "ICON_LINK_BROKE", int64_t(GuiIconName::ICON_LINK_BROKE), das::LineInfo());
		addIEx("ICON_TEXT_NOTES", "ICON_TEXT_NOTES", int64_t(GuiIconName::ICON_TEXT_NOTES), das::LineInfo());
		addIEx("ICON_NOTEBOOK", "ICON_NOTEBOOK", int64_t(GuiIconName::ICON_NOTEBOOK), das::LineInfo());
		addIEx("ICON_SUITCASE", "ICON_SUITCASE", int64_t(GuiIconName::ICON_SUITCASE), das::LineInfo());
		addIEx("ICON_SUITCASE_ZIP", "ICON_SUITCASE_ZIP", int64_t(GuiIconName::ICON_SUITCASE_ZIP), das::LineInfo());
		addIEx("ICON_MAILBOX", "ICON_MAILBOX", int64_t(GuiIconName::ICON_MAILBOX), das::LineInfo());
		addIEx("ICON_MONITOR", "ICON_MONITOR", int64_t(GuiIconName::ICON_MONITOR), das::LineInfo());
		addIEx("ICON_PRINTER", "ICON_PRINTER", int64_t(GuiIconName::ICON_PRINTER), das::LineInfo());
		addIEx("ICON_PHOTO_CAMERA", "ICON_PHOTO_CAMERA", int64_t(GuiIconName::ICON_PHOTO_CAMERA), das::LineInfo());
		addIEx("ICON_PHOTO_CAMERA_FLASH", "ICON_PHOTO_CAMERA_FLASH", int64_t(GuiIconName::ICON_PHOTO_CAMERA_FLASH), das::LineInfo());
		addIEx("ICON_HOUSE", "ICON_HOUSE", int64_t(GuiIconName::ICON_HOUSE), das::LineInfo());
		addIEx("ICON_HEART", "ICON_HEART", int64_t(GuiIconName::ICON_HEART), das::LineInfo());
		addIEx("ICON_CORNER", "ICON_CORNER", int64_t(GuiIconName::ICON_CORNER), das::LineInfo());
		addIEx("ICON_VERTICAL_BARS", "ICON_VERTICAL_BARS", int64_t(GuiIconName::ICON_VERTICAL_BARS), das::LineInfo());
		addIEx("ICON_VERTICAL_BARS_FILL", "ICON_VERTICAL_BARS_FILL", int64_t(GuiIconName::ICON_VERTICAL_BARS_FILL), das::LineInfo());
		addIEx("ICON_LIFE_BARS", "ICON_LIFE_BARS", int64_t(GuiIconName::ICON_LIFE_BARS), das::LineInfo());
		addIEx("ICON_INFO", "ICON_INFO", int64_t(GuiIconName::ICON_INFO), das::LineInfo());
		addIEx("ICON_CROSSLINE", "ICON_CROSSLINE", int64_t(GuiIconName::ICON_CROSSLINE), das::LineInfo());
		addIEx("ICON_HELP", "ICON_HELP", int64_t(GuiIconName::ICON_HELP), das::LineInfo());
		addIEx("ICON_FILETYPE_ALPHA", "ICON_FILETYPE_ALPHA", int64_t(GuiIconName::ICON_FILETYPE_ALPHA), das::LineInfo());
		addIEx("ICON_FILETYPE_HOME", "ICON_FILETYPE_HOME", int64_t(GuiIconName::ICON_FILETYPE_HOME), das::LineInfo());
		addIEx("ICON_LAYERS_VISIBLE", "ICON_LAYERS_VISIBLE", int64_t(GuiIconName::ICON_LAYERS_VISIBLE), das::LineInfo());
		addIEx("ICON_LAYERS", "ICON_LAYERS", int64_t(GuiIconName::ICON_LAYERS), das::LineInfo());
		addIEx("ICON_WINDOW", "ICON_WINDOW", int64_t(GuiIconName::ICON_WINDOW), das::LineInfo());
		addIEx("ICON_HIDPI", "ICON_HIDPI", int64_t(GuiIconName::ICON_HIDPI), das::LineInfo());
		addIEx("ICON_FILETYPE_BINARY", "ICON_FILETYPE_BINARY", int64_t(GuiIconName::ICON_FILETYPE_BINARY), das::LineInfo());
		addIEx("ICON_HEX", "ICON_HEX", int64_t(GuiIconName::ICON_HEX), das::LineInfo());
		addIEx("ICON_SHIELD", "ICON_SHIELD", int64_t(GuiIconName::ICON_SHIELD), das::LineInfo());
		addIEx("ICON_FILE_NEW", "ICON_FILE_NEW", int64_t(GuiIconName::ICON_FILE_NEW), das::LineInfo());
		addIEx("ICON_FOLDER_ADD", "ICON_FOLDER_ADD", int64_t(GuiIconName::ICON_FOLDER_ADD), das::LineInfo());
		addIEx("ICON_ALARM", "ICON_ALARM", int64_t(GuiIconName::ICON_ALARM), das::LineInfo());
		addIEx("ICON_CPU", "ICON_CPU", int64_t(GuiIconName::ICON_CPU), das::LineInfo());
		addIEx("ICON_ROM", "ICON_ROM", int64_t(GuiIconName::ICON_ROM), das::LineInfo());
		addIEx("ICON_STEP_OVER", "ICON_STEP_OVER", int64_t(GuiIconName::ICON_STEP_OVER), das::LineInfo());
		addIEx("ICON_STEP_INTO", "ICON_STEP_INTO", int64_t(GuiIconName::ICON_STEP_INTO), das::LineInfo());
		addIEx("ICON_STEP_OUT", "ICON_STEP_OUT", int64_t(GuiIconName::ICON_STEP_OUT), das::LineInfo());
		addIEx("ICON_RESTART", "ICON_RESTART", int64_t(GuiIconName::ICON_RESTART), das::LineInfo());
		addIEx("ICON_BREAKPOINT_ON", "ICON_BREAKPOINT_ON", int64_t(GuiIconName::ICON_BREAKPOINT_ON), das::LineInfo());
		addIEx("ICON_BREAKPOINT_OFF", "ICON_BREAKPOINT_OFF", int64_t(GuiIconName::ICON_BREAKPOINT_OFF), das::LineInfo());
		addIEx("ICON_BURGER_MENU", "ICON_BURGER_MENU", int64_t(GuiIconName::ICON_BURGER_MENU), das::LineInfo());
		addIEx("ICON_CASE_SENSITIVE", "ICON_CASE_SENSITIVE", int64_t(GuiIconName::ICON_CASE_SENSITIVE), das::LineInfo());
		addIEx("ICON_REG_EXP", "ICON_REG_EXP", int64_t(GuiIconName::ICON_REG_EXP), das::LineInfo());
		addIEx("ICON_FOLDER", "ICON_FOLDER", int64_t(GuiIconName::ICON_FOLDER), das::LineInfo());
		addIEx("ICON_FILE", "ICON_FILE", int64_t(GuiIconName::ICON_FILE), das::LineInfo());
		addIEx("ICON_SAND_TIMER", "ICON_SAND_TIMER", int64_t(GuiIconName::ICON_SAND_TIMER), das::LineInfo());
		addIEx("ICON_WARNING", "ICON_WARNING", int64_t(GuiIconName::ICON_WARNING), das::LineInfo());
		addIEx("ICON_HELP_BOX", "ICON_HELP_BOX", int64_t(GuiIconName::ICON_HELP_BOX), das::LineInfo());
		addIEx("ICON_INFO_BOX", "ICON_INFO_BOX", int64_t(GuiIconName::ICON_INFO_BOX), das::LineInfo());
		addIEx("ICON_PRIORITY", "ICON_PRIORITY", int64_t(GuiIconName::ICON_PRIORITY), das::LineInfo());
		addIEx("ICON_LAYERS_ISO", "ICON_LAYERS_ISO", int64_t(GuiIconName::ICON_LAYERS_ISO), das::LineInfo());
		addIEx("ICON_LAYERS2", "ICON_LAYERS2", int64_t(GuiIconName::ICON_LAYERS2), das::LineInfo());
		addIEx("ICON_MLAYERS", "ICON_MLAYERS", int64_t(GuiIconName::ICON_MLAYERS), das::LineInfo());
		addIEx("ICON_MAPS", "ICON_MAPS", int64_t(GuiIconName::ICON_MAPS), das::LineInfo());
		addIEx("ICON_HOT", "ICON_HOT", int64_t(GuiIconName::ICON_HOT), das::LineInfo());
		addIEx("ICON_LABEL", "ICON_LABEL", int64_t(GuiIconName::ICON_LABEL), das::LineInfo());
		addIEx("ICON_NAME_ID", "ICON_NAME_ID", int64_t(GuiIconName::ICON_NAME_ID), das::LineInfo());
		addIEx("ICON_SLICING", "ICON_SLICING", int64_t(GuiIconName::ICON_SLICING), das::LineInfo());
		addIEx("ICON_MANUAL_CONTROL", "ICON_MANUAL_CONTROL", int64_t(GuiIconName::ICON_MANUAL_CONTROL), das::LineInfo());
		addIEx("ICON_COLLISION", "ICON_COLLISION", int64_t(GuiIconName::ICON_COLLISION), das::LineInfo());
		addIEx("ICON_CIRCLE_ADD", "ICON_CIRCLE_ADD", int64_t(GuiIconName::ICON_CIRCLE_ADD), das::LineInfo());
		addIEx("ICON_CIRCLE_ADD_FILL", "ICON_CIRCLE_ADD_FILL", int64_t(GuiIconName::ICON_CIRCLE_ADD_FILL), das::LineInfo());
		addIEx("ICON_CIRCLE_WARNING", "ICON_CIRCLE_WARNING", int64_t(GuiIconName::ICON_CIRCLE_WARNING), das::LineInfo());
		addIEx("ICON_CIRCLE_WARNING_FILL", "ICON_CIRCLE_WARNING_FILL", int64_t(GuiIconName::ICON_CIRCLE_WARNING_FILL), das::LineInfo());
		addIEx("ICON_BOX_MORE", "ICON_BOX_MORE", int64_t(GuiIconName::ICON_BOX_MORE), das::LineInfo());
		addIEx("ICON_BOX_MORE_FILL", "ICON_BOX_MORE_FILL", int64_t(GuiIconName::ICON_BOX_MORE_FILL), das::LineInfo());
		addIEx("ICON_BOX_MINUS", "ICON_BOX_MINUS", int64_t(GuiIconName::ICON_BOX_MINUS), das::LineInfo());
		addIEx("ICON_BOX_MINUS_FILL", "ICON_BOX_MINUS_FILL", int64_t(GuiIconName::ICON_BOX_MINUS_FILL), das::LineInfo());
		addIEx("ICON_UNION", "ICON_UNION", int64_t(GuiIconName::ICON_UNION), das::LineInfo());
		addIEx("ICON_INTERSECTION", "ICON_INTERSECTION", int64_t(GuiIconName::ICON_INTERSECTION), das::LineInfo());
		addIEx("ICON_DIFFERENCE", "ICON_DIFFERENCE", int64_t(GuiIconName::ICON_DIFFERENCE), das::LineInfo());
		addIEx("ICON_SPHERE", "ICON_SPHERE", int64_t(GuiIconName::ICON_SPHERE), das::LineInfo());
		addIEx("ICON_CYLINDER", "ICON_CYLINDER", int64_t(GuiIconName::ICON_CYLINDER), das::LineInfo());
		addIEx("ICON_CONE", "ICON_CONE", int64_t(GuiIconName::ICON_CONE), das::LineInfo());
		addIEx("ICON_ELLIPSOID", "ICON_ELLIPSOID", int64_t(GuiIconName::ICON_ELLIPSOID), das::LineInfo());
		addIEx("ICON_CAPSULE", "ICON_CAPSULE", int64_t(GuiIconName::ICON_CAPSULE), das::LineInfo());
		addIEx("ICON_FILETYPE_FONT", "ICON_FILETYPE_FONT", int64_t(GuiIconName::ICON_FILETYPE_FONT), das::LineInfo());
		addIEx("ICON_FILETYPE_3D", "ICON_FILETYPE_3D", int64_t(GuiIconName::ICON_FILETYPE_3D), das::LineInfo());
		addIEx("ICON_FILETYPE_CODE_XML", "ICON_FILETYPE_CODE_XML", int64_t(GuiIconName::ICON_FILETYPE_CODE_XML), das::LineInfo());
		addIEx("ICON_FILETYPE_CODE_C", "ICON_FILETYPE_CODE_C", int64_t(GuiIconName::ICON_FILETYPE_CODE_C), das::LineInfo());
		addIEx("ICON_FILETYPE_CODE_PYTHON", "ICON_FILETYPE_CODE_PYTHON", int64_t(GuiIconName::ICON_FILETYPE_CODE_PYTHON), das::LineInfo());
		addIEx("ICON_FILETYPE_CODE_JS", "ICON_FILETYPE_CODE_JS", int64_t(GuiIconName::ICON_FILETYPE_CODE_JS), das::LineInfo());
		addIEx("ICON_FILETYPE_ICON", "ICON_FILETYPE_ICON", int64_t(GuiIconName::ICON_FILETYPE_ICON), das::LineInfo());
	}
};

