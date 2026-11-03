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
void Module_dasRaylib::initFunctions_2() {
// from raylib.h:1038:12
	makeExtern< void (*)() , HideCursor , SimNode_ExtFuncCall >(lib,"HideCursor","HideCursor")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1039:12
	makeExtern< bool (*)() , IsCursorHidden , SimNode_ExtFuncCall >(lib,"IsCursorHidden","IsCursorHidden")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1040:12
	makeExtern< void (*)() , EnableCursor , SimNode_ExtFuncCall >(lib,"EnableCursor","EnableCursor")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1041:12
	makeExtern< void (*)() , DisableCursor , SimNode_ExtFuncCall >(lib,"DisableCursor","DisableCursor")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1042:12
	makeExtern< bool (*)() , IsCursorOnScreen , SimNode_ExtFuncCall >(lib,"IsCursorOnScreen","IsCursorOnScreen")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1045:12
	makeExtern< void (*)(float4) , _rlw_ClearBackground , SimNode_ExtFuncCall >(lib,"ClearBackground","das::_rlw_ClearBackground")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1046:12
	makeExtern< void (*)() , BeginDrawing , SimNode_ExtFuncCall >(lib,"BeginDrawing","BeginDrawing")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1047:12
	makeExtern< void (*)() , EndDrawing , SimNode_ExtFuncCall >(lib,"EndDrawing","EndDrawing")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1048:12
	makeExtern< void (*)(Camera2D) , BeginMode2D , SimNode_ExtFuncCall >(lib,"BeginMode2D","BeginMode2D")
		->args({"camera"})
		->arg_type(0,makeType<const Camera2D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1049:12
	makeExtern< void (*)() , EndMode2D , SimNode_ExtFuncCall >(lib,"EndMode2D","EndMode2D")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1050:12
	makeExtern< void (*)(Camera3D) , BeginMode3D , SimNode_ExtFuncCall >(lib,"BeginMode3D","BeginMode3D")
		->args({"camera"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1051:12
	makeExtern< void (*)() , EndMode3D , SimNode_ExtFuncCall >(lib,"EndMode3D","EndMode3D")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1052:12
	makeExtern< void (*)(RenderTexture) , BeginTextureMode , SimNode_ExtFuncCall >(lib,"BeginTextureMode","BeginTextureMode")
		->args({"target"})
		->arg_type(0,makeType<const RenderTexture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1053:12
	makeExtern< void (*)() , EndTextureMode , SimNode_ExtFuncCall >(lib,"EndTextureMode","EndTextureMode")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1054:12
	makeExtern< void (*)(Shader) , BeginShaderMode , SimNode_ExtFuncCall >(lib,"BeginShaderMode","BeginShaderMode")
		->args({"shader"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1055:12
	makeExtern< void (*)() , EndShaderMode , SimNode_ExtFuncCall >(lib,"EndShaderMode","EndShaderMode")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1056:12
	makeExtern< void (*)(int) , BeginBlendMode , SimNode_ExtFuncCall >(lib,"BeginBlendMode","BeginBlendMode")
		->args({"mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1057:12
	makeExtern< void (*)() , EndBlendMode , SimNode_ExtFuncCall >(lib,"EndBlendMode","EndBlendMode")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1058:12
	makeExtern< void (*)(int,int,int,int) , BeginScissorMode , SimNode_ExtFuncCall >(lib,"BeginScissorMode","BeginScissorMode")
		->args({"x","y","width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1059:12
	makeExtern< void (*)() , EndScissorMode , SimNode_ExtFuncCall >(lib,"EndScissorMode","EndScissorMode")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1060:12
	makeExtern< void (*)(VrStereoConfig) , BeginVrStereoMode , SimNode_ExtFuncCall >(lib,"BeginVrStereoMode","BeginVrStereoMode")
		->args({"config"})
		->arg_type(0,makeType<const VrStereoConfig>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1061:12
	makeExtern< void (*)() , EndVrStereoMode , SimNode_ExtFuncCall >(lib,"EndVrStereoMode","EndVrStereoMode")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1064:22
	makeExtern< VrStereoConfig (*)(VrDeviceInfo) , LoadVrStereoConfig , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadVrStereoConfig","LoadVrStereoConfig")
		->args({"device"})
		->arg_type(0,makeType<const VrDeviceInfo>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1065:12
	makeExtern< void (*)(VrStereoConfig) , UnloadVrStereoConfig , SimNode_ExtFuncCall >(lib,"UnloadVrStereoConfig","UnloadVrStereoConfig")
		->args({"config"})
		->arg_type(0,makeType<const VrStereoConfig>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1069:14
	makeExtern< Shader (*)(const char *,const char *) , LoadShader , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadShader","LoadShader")
		->args({"vsFileName","fsFileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1070:14
	makeExtern< Shader (*)(const char *,const char *) , LoadShaderFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadShaderFromMemory","LoadShaderFromMemory")
		->args({"vsCode","fsCode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1071:12
	makeExtern< bool (*)(Shader) , IsShaderValid , SimNode_ExtFuncCall >(lib,"IsShaderValid","IsShaderValid")
		->args({"shader"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1072:11
	makeExtern< int (*)(Shader,const char *) , GetShaderLocation , SimNode_ExtFuncCall >(lib,"GetShaderLocation","GetShaderLocation")
		->args({"shader","uniformName"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1073:11
	makeExtern< int (*)(Shader,const char *) , GetShaderLocationAttrib , SimNode_ExtFuncCall >(lib,"GetShaderLocationAttrib","GetShaderLocationAttrib")
		->args({"shader","attribName"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1074:12
	makeExtern< void (*)(Shader,int,const void *,int) , SetShaderValue , SimNode_ExtFuncCall >(lib,"SetShaderValue","SetShaderValue")
		->args({"shader","locIndex","value","uniformType"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1075:12
	makeExtern< void (*)(Shader,int,const void *,int,int) , SetShaderValueV , SimNode_ExtFuncCall >(lib,"SetShaderValueV","SetShaderValueV")
		->args({"shader","locIndex","value","uniformType","count"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1076:12
	makeExtern< void (*)(Shader,int,const float4x4 &) , _rlw_SetShaderValueMatrix , SimNode_ExtFuncCall >(lib,"SetShaderValueMatrix","das::_rlw_SetShaderValueMatrix")
		->args({"shader","locIndex","mat"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1077:12
	makeExtern< void (*)(Shader,int,Texture) , SetShaderValueTexture , SimNode_ExtFuncCall >(lib,"SetShaderValueTexture","SetShaderValueTexture")
		->args({"shader","locIndex","texture"})
		->arg_type(0,makeType<const Shader>(lib))
		->arg_type(2,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1078:12
	makeExtern< void (*)(Shader) , UnloadShader , SimNode_ExtFuncCall >(lib,"UnloadShader","UnloadShader")
		->args({"shader"})
		->arg_type(0,makeType<const Shader>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1082:11
	makeExtern< Ray (*)(Vector2,Camera3D) , GetScreenToWorldRay , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetScreenToWorldRay","GetScreenToWorldRay")
		->args({"position","camera"})
		->arg_type(1,makeType<const Camera3D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1083:11
	makeExtern< Ray (*)(Vector2,Camera3D,int,int) , GetScreenToWorldRayEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetScreenToWorldRayEx","GetScreenToWorldRayEx")
		->args({"position","camera","width","height"})
		->arg_type(1,makeType<const Camera3D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1084:15
	makeExtern< Vector2 (*)(Vector3,Camera3D) , GetWorldToScreen , SimNode_ExtFuncCall >(lib,"GetWorldToScreen","GetWorldToScreen")
		->args({"position","camera"})
		->arg_type(1,makeType<const Camera3D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1085:15
	makeExtern< Vector2 (*)(Vector3,Camera3D,int,int) , GetWorldToScreenEx , SimNode_ExtFuncCall >(lib,"GetWorldToScreenEx","GetWorldToScreenEx")
		->args({"position","camera","width","height"})
		->arg_type(1,makeType<const Camera3D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1086:15
	makeExtern< Vector2 (*)(Vector2,Camera2D) , GetWorldToScreen2D , SimNode_ExtFuncCall >(lib,"GetWorldToScreen2D","GetWorldToScreen2D")
		->args({"position","camera"})
		->arg_type(1,makeType<const Camera2D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1087:15
	makeExtern< Vector2 (*)(Vector2,Camera2D) , GetScreenToWorld2D , SimNode_ExtFuncCall >(lib,"GetScreenToWorld2D","GetScreenToWorld2D")
		->args({"position","camera"})
		->arg_type(1,makeType<const Camera2D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1088:14
	makeExtern< float4x4 (*)(Camera3D) , _rlw_GetCameraMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraMatrix","das::_rlw_GetCameraMatrix")
		->args({"camera"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1089:14
	makeExtern< float4x4 (*)(Camera2D) , _rlw_GetCameraMatrix2D , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraMatrix2D","das::_rlw_GetCameraMatrix2D")
		->args({"camera"})
		->arg_type(0,makeType<const Camera2D>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1092:12
	makeExtern< void (*)(int) , SetTargetFPS , SimNode_ExtFuncCall >(lib,"SetTargetFPS","SetTargetFPS")
		->args({"fps"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1093:13
	makeExtern< float (*)() , GetFrameTime , SimNode_ExtFuncCall >(lib,"GetFrameTime","GetFrameTime")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1094:14
	makeExtern< double (*)() , GetTime , SimNode_ExtFuncCall >(lib,"GetTime","GetTime")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1095:11
	makeExtern< int (*)() , GetFPS , SimNode_ExtFuncCall >(lib,"GetFPS","GetFPS")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1101:12
	makeExtern< void (*)() , SwapScreenBuffer , SimNode_ExtFuncCall >(lib,"SwapScreenBuffer","SwapScreenBuffer")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1102:12
	makeExtern< void (*)() , PollInputEvents , SimNode_ExtFuncCall >(lib,"PollInputEvents","PollInputEvents")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1103:12
	makeExtern< void (*)(double) , WaitTime , SimNode_ExtFuncCall >(lib,"WaitTime","WaitTime")
		->args({"seconds"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1106:12
	makeExtern< void (*)(unsigned int) , SetRandomSeed , SimNode_ExtFuncCall >(lib,"SetRandomSeed","SetRandomSeed")
		->args({"seed"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

