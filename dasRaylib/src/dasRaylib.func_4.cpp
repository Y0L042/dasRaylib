// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "dasRaylib.h"
#include "need_dasRaylib.h"
namespace das {
#include "dasRaylib.func.aot.decl.inc"
void Module_dasRaylib::initFunctions_4() {
// from raylib.h:1177:22
	makeExtern< unsigned char * (*)(const char *,int *) , DecodeDataBase64 , SimNode_ExtFuncCall >(lib,"DecodeDataBase64","DecodeDataBase64")
		->args({"text","outputSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1178:20
	makeExtern< unsigned int (*)(unsigned char *,int) , ComputeCRC32 , SimNode_ExtFuncCall >(lib,"ComputeCRC32","ComputeCRC32")
		->args({"data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1179:21
	makeExtern< unsigned int * (*)(unsigned char *,int) , ComputeMD5 , SimNode_ExtFuncCall >(lib,"ComputeMD5","ComputeMD5")
		->args({"data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1180:21
	makeExtern< unsigned int * (*)(unsigned char *,int) , ComputeSHA1 , SimNode_ExtFuncCall >(lib,"ComputeSHA1","ComputeSHA1")
		->args({"data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1181:21
	makeExtern< unsigned int * (*)(unsigned char *,int) , ComputeSHA256 , SimNode_ExtFuncCall >(lib,"ComputeSHA256","ComputeSHA256")
		->args({"data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1184:27
	makeExtern< AutomationEventList (*)(const char *) , LoadAutomationEventList , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadAutomationEventList","LoadAutomationEventList")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1185:12
	makeExtern< void (*)(AutomationEventList) , UnloadAutomationEventList , SimNode_ExtFuncCall >(lib,"UnloadAutomationEventList","UnloadAutomationEventList")
		->args({"list"})
		->arg_type(0,makeType<const AutomationEventList>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1186:12
	makeExtern< bool (*)(AutomationEventList,const char *) , ExportAutomationEventList , SimNode_ExtFuncCall >(lib,"ExportAutomationEventList","ExportAutomationEventList")
		->args({"list","fileName"})
		->arg_type(0,makeType<const AutomationEventList>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1187:12
	makeExtern< void (*)(AutomationEventList *) , SetAutomationEventList , SimNode_ExtFuncCall >(lib,"SetAutomationEventList","SetAutomationEventList")
		->args({"list"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1188:12
	makeExtern< void (*)(int) , SetAutomationEventBaseFrame , SimNode_ExtFuncCall >(lib,"SetAutomationEventBaseFrame","SetAutomationEventBaseFrame")
		->args({"frame"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1189:12
	makeExtern< void (*)() , StartAutomationEventRecording , SimNode_ExtFuncCall >(lib,"StartAutomationEventRecording","StartAutomationEventRecording")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1190:12
	makeExtern< void (*)() , StopAutomationEventRecording , SimNode_ExtFuncCall >(lib,"StopAutomationEventRecording","StopAutomationEventRecording")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1191:12
	makeExtern< void (*)(AutomationEvent) , PlayAutomationEvent , SimNode_ExtFuncCall >(lib,"PlayAutomationEvent","PlayAutomationEvent")
		->args({"event"})
		->arg_type(0,makeType<const AutomationEvent>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1198:12
	makeExtern< bool (*)(int) , IsKeyPressed , SimNode_ExtFuncCall >(lib,"IsKeyPressed","IsKeyPressed")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1199:12
	makeExtern< bool (*)(int) , IsKeyPressedRepeat , SimNode_ExtFuncCall >(lib,"IsKeyPressedRepeat","IsKeyPressedRepeat")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1200:12
	makeExtern< bool (*)(int) , IsKeyDown , SimNode_ExtFuncCall >(lib,"IsKeyDown","IsKeyDown")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1201:12
	makeExtern< bool (*)(int) , IsKeyReleased , SimNode_ExtFuncCall >(lib,"IsKeyReleased","IsKeyReleased")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1202:12
	makeExtern< bool (*)(int) , IsKeyUp , SimNode_ExtFuncCall >(lib,"IsKeyUp","IsKeyUp")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1203:11
	makeExtern< int (*)() , GetKeyPressed , SimNode_ExtFuncCall >(lib,"GetKeyPressed","GetKeyPressed")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1204:11
	makeExtern< int (*)() , GetCharPressed , SimNode_ExtFuncCall >(lib,"GetCharPressed","GetCharPressed")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1205:19
	makeExtern< const char * (*)(int) , GetKeyName , SimNode_ExtFuncCall >(lib,"GetKeyName","GetKeyName")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1206:12
	makeExtern< void (*)(int) , SetExitKey , SimNode_ExtFuncCall >(lib,"SetExitKey","SetExitKey")
		->args({"key"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1209:12
	makeExtern< bool (*)(int) , IsGamepadAvailable , SimNode_ExtFuncCall >(lib,"IsGamepadAvailable","IsGamepadAvailable")
		->args({"gamepad"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1210:19
	makeExtern< const char * (*)(int) , GetGamepadName , SimNode_ExtFuncCall >(lib,"GetGamepadName","GetGamepadName")
		->args({"gamepad"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1211:12
	makeExtern< bool (*)(int,int) , IsGamepadButtonPressed , SimNode_ExtFuncCall >(lib,"IsGamepadButtonPressed","IsGamepadButtonPressed")
		->args({"gamepad","button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1212:12
	makeExtern< bool (*)(int,int) , IsGamepadButtonDown , SimNode_ExtFuncCall >(lib,"IsGamepadButtonDown","IsGamepadButtonDown")
		->args({"gamepad","button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1213:12
	makeExtern< bool (*)(int,int) , IsGamepadButtonReleased , SimNode_ExtFuncCall >(lib,"IsGamepadButtonReleased","IsGamepadButtonReleased")
		->args({"gamepad","button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1214:12
	makeExtern< bool (*)(int,int) , IsGamepadButtonUp , SimNode_ExtFuncCall >(lib,"IsGamepadButtonUp","IsGamepadButtonUp")
		->args({"gamepad","button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1215:11
	makeExtern< int (*)() , GetGamepadButtonPressed , SimNode_ExtFuncCall >(lib,"GetGamepadButtonPressed","GetGamepadButtonPressed")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1216:11
	makeExtern< int (*)(int) , GetGamepadAxisCount , SimNode_ExtFuncCall >(lib,"GetGamepadAxisCount","GetGamepadAxisCount")
		->args({"gamepad"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1217:13
	makeExtern< float (*)(int,int) , GetGamepadAxisMovement , SimNode_ExtFuncCall >(lib,"GetGamepadAxisMovement","GetGamepadAxisMovement")
		->args({"gamepad","axis"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1218:11
	makeExtern< int (*)(const char *) , SetGamepadMappings , SimNode_ExtFuncCall >(lib,"SetGamepadMappings","SetGamepadMappings")
		->args({"mappings"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1219:12
	makeExtern< void (*)(int,float,float,float) , SetGamepadVibration , SimNode_ExtFuncCall >(lib,"SetGamepadVibration","SetGamepadVibration")
		->args({"gamepad","leftMotor","rightMotor","duration"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1222:12
	makeExtern< bool (*)(int) , IsMouseButtonPressed , SimNode_ExtFuncCall >(lib,"IsMouseButtonPressed","IsMouseButtonPressed")
		->args({"button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1223:12
	makeExtern< bool (*)(int) , IsMouseButtonDown , SimNode_ExtFuncCall >(lib,"IsMouseButtonDown","IsMouseButtonDown")
		->args({"button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1224:12
	makeExtern< bool (*)(int) , IsMouseButtonReleased , SimNode_ExtFuncCall >(lib,"IsMouseButtonReleased","IsMouseButtonReleased")
		->args({"button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1225:12
	makeExtern< bool (*)(int) , IsMouseButtonUp , SimNode_ExtFuncCall >(lib,"IsMouseButtonUp","IsMouseButtonUp")
		->args({"button"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1226:11
	makeExtern< int (*)() , GetMouseX , SimNode_ExtFuncCall >(lib,"GetMouseX","GetMouseX")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1227:11
	makeExtern< int (*)() , GetMouseY , SimNode_ExtFuncCall >(lib,"GetMouseY","GetMouseY")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1228:15
	makeExtern< Vector2 (*)() , GetMousePosition , SimNode_ExtFuncCall >(lib,"GetMousePosition","GetMousePosition")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1229:15
	makeExtern< Vector2 (*)() , GetMouseDelta , SimNode_ExtFuncCall >(lib,"GetMouseDelta","GetMouseDelta")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1230:12
	makeExtern< void (*)(int,int) , SetMousePosition , SimNode_ExtFuncCall >(lib,"SetMousePosition","SetMousePosition")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1231:12
	makeExtern< void (*)(int,int) , SetMouseOffset , SimNode_ExtFuncCall >(lib,"SetMouseOffset","SetMouseOffset")
		->args({"offsetX","offsetY"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1232:12
	makeExtern< void (*)(float,float) , SetMouseScale , SimNode_ExtFuncCall >(lib,"SetMouseScale","SetMouseScale")
		->args({"scaleX","scaleY"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1233:13
	makeExtern< float (*)() , GetMouseWheelMove , SimNode_ExtFuncCall >(lib,"GetMouseWheelMove","GetMouseWheelMove")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1234:15
	makeExtern< Vector2 (*)() , GetMouseWheelMoveV , SimNode_ExtFuncCall >(lib,"GetMouseWheelMoveV","GetMouseWheelMoveV")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1235:12
	makeExtern< void (*)(int) , SetMouseCursor , SimNode_ExtFuncCall >(lib,"SetMouseCursor","SetMouseCursor")
		->args({"cursor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1238:11
	makeExtern< int (*)() , GetTouchX , SimNode_ExtFuncCall >(lib,"GetTouchX","GetTouchX")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1239:11
	makeExtern< int (*)() , GetTouchY , SimNode_ExtFuncCall >(lib,"GetTouchY","GetTouchY")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1240:15
	makeExtern< Vector2 (*)(int) , GetTouchPosition , SimNode_ExtFuncCall >(lib,"GetTouchPosition","GetTouchPosition")
		->args({"index"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

