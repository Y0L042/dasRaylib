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
void Module_dasRaylib::initFunctions_13() {
// from raylib.h:1745:12
	makeExtern< void (*)(AudioStream) , ResumeAudioStream , SimNode_ExtFuncCall >(lib,"ResumeAudioStream","ResumeAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1746:12
	makeExtern< bool (*)(AudioStream) , IsAudioStreamPlaying , SimNode_ExtFuncCall >(lib,"IsAudioStreamPlaying","IsAudioStreamPlaying")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1747:12
	makeExtern< void (*)(AudioStream) , StopAudioStream , SimNode_ExtFuncCall >(lib,"StopAudioStream","StopAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1748:12
	makeExtern< void (*)(AudioStream,float) , SetAudioStreamVolume , SimNode_ExtFuncCall >(lib,"SetAudioStreamVolume","SetAudioStreamVolume")
		->args({"stream","volume"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1749:12
	makeExtern< void (*)(AudioStream,float) , SetAudioStreamPitch , SimNode_ExtFuncCall >(lib,"SetAudioStreamPitch","SetAudioStreamPitch")
		->args({"stream","pitch"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1750:12
	makeExtern< void (*)(AudioStream,float) , SetAudioStreamPan , SimNode_ExtFuncCall >(lib,"SetAudioStreamPan","SetAudioStreamPan")
		->args({"stream","pan"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1751:12
	makeExtern< void (*)(int) , SetAudioStreamBufferSizeDefault , SimNode_ExtFuncCall >(lib,"SetAudioStreamBufferSizeDefault","SetAudioStreamBufferSizeDefault")
		->args({"size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:217:13
	makeExtern< float (*)(float,float,float) , Clamp , SimNode_ExtFuncCall >(lib,"Clamp","Clamp")
		->args({"value","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:227:13
	makeExtern< float (*)(float,float,float) , Lerp , SimNode_ExtFuncCall >(lib,"Lerp","Lerp")
		->args({"start","end","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:235:13
	makeExtern< float (*)(float,float,float) , Normalize , SimNode_ExtFuncCall >(lib,"Normalize","Normalize")
		->args({"value","start","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:243:13
	makeExtern< float (*)(float,float,float,float,float) , Remap , SimNode_ExtFuncCall >(lib,"Remap","Remap")
		->args({"value","inputStart","inputEnd","outputStart","outputEnd"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:251:13
	makeExtern< float (*)(float,float,float) , Wrap , SimNode_ExtFuncCall >(lib,"Wrap","Wrap")
		->args({"value","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:259:11
	makeExtern< int (*)(float,float) , FloatEquals , SimNode_ExtFuncCall >(lib,"FloatEquals","FloatEquals")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:275:15
	makeExtern< Vector2 (*)() , Vector2Zero , SimNode_ExtFuncCall >(lib,"Vector2Zero","Vector2Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:283:15
	makeExtern< Vector2 (*)() , Vector2One , SimNode_ExtFuncCall >(lib,"Vector2One","Vector2One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:291:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Add , SimNode_ExtFuncCall >(lib,"Vector2Add","Vector2Add")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:299:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2AddValue , SimNode_ExtFuncCall >(lib,"Vector2AddValue","Vector2AddValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:307:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Subtract , SimNode_ExtFuncCall >(lib,"Vector2Subtract","Vector2Subtract")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:315:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2SubtractValue , SimNode_ExtFuncCall >(lib,"Vector2SubtractValue","Vector2SubtractValue")
		->args({"v","sub"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:323:13
	makeExtern< float (*)(Vector2) , Vector2Length , SimNode_ExtFuncCall >(lib,"Vector2Length","Vector2Length")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:331:13
	makeExtern< float (*)(Vector2) , Vector2LengthSqr , SimNode_ExtFuncCall >(lib,"Vector2LengthSqr","Vector2LengthSqr")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:339:13
	makeExtern< float (*)(Vector2,Vector2) , Vector2DotProduct , SimNode_ExtFuncCall >(lib,"Vector2DotProduct","Vector2DotProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:347:13
	makeExtern< float (*)(Vector2,Vector2) , Vector2CrossProduct , SimNode_ExtFuncCall >(lib,"Vector2CrossProduct","Vector2CrossProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:355:13
	makeExtern< float (*)(Vector2,Vector2) , Vector2Distance , SimNode_ExtFuncCall >(lib,"Vector2Distance","Vector2Distance")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:363:13
	makeExtern< float (*)(Vector2,Vector2) , Vector2DistanceSqr , SimNode_ExtFuncCall >(lib,"Vector2DistanceSqr","Vector2DistanceSqr")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:373:13
	makeExtern< float (*)(Vector2,Vector2) , Vector2Angle , SimNode_ExtFuncCall >(lib,"Vector2Angle","Vector2Angle")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:388:13
	makeExtern< float (*)(Vector2,Vector2) , Vector2LineAngle , SimNode_ExtFuncCall >(lib,"Vector2LineAngle","Vector2LineAngle")
		->args({"start","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:398:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2Scale , SimNode_ExtFuncCall >(lib,"Vector2Scale","Vector2Scale")
		->args({"v","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:406:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Multiply , SimNode_ExtFuncCall >(lib,"Vector2Multiply","Vector2Multiply")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:414:15
	makeExtern< Vector2 (*)(Vector2) , Vector2Negate , SimNode_ExtFuncCall >(lib,"Vector2Negate","Vector2Negate")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:422:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Divide , SimNode_ExtFuncCall >(lib,"Vector2Divide","Vector2Divide")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:430:15
	makeExtern< Vector2 (*)(Vector2) , Vector2Normalize , SimNode_ExtFuncCall >(lib,"Vector2Normalize","Vector2Normalize")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:446:15
	makeExtern< Vector2 (*)(Vector2,const float4x4 &) , _rlw_Vector2Transform , SimNode_ExtFuncCall >(lib,"Vector2Transform","das::_rlw_Vector2Transform")
		->args({"v","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:461:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , Vector2Lerp , SimNode_ExtFuncCall >(lib,"Vector2Lerp","Vector2Lerp")
		->args({"v1","v2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:472:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Reflect , SimNode_ExtFuncCall >(lib,"Vector2Reflect","Vector2Reflect")
		->args({"v","normal"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:485:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Min , SimNode_ExtFuncCall >(lib,"Vector2Min","Vector2Min")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:496:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Max , SimNode_ExtFuncCall >(lib,"Vector2Max","Vector2Max")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:507:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2Rotate , SimNode_ExtFuncCall >(lib,"Vector2Rotate","Vector2Rotate")
		->args({"v","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:521:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , Vector2MoveTowards , SimNode_ExtFuncCall >(lib,"Vector2MoveTowards","Vector2MoveTowards")
		->args({"v","target","maxDistance"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:540:15
	makeExtern< Vector2 (*)(Vector2) , Vector2Invert , SimNode_ExtFuncCall >(lib,"Vector2Invert","Vector2Invert")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:549:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2) , Vector2Clamp , SimNode_ExtFuncCall >(lib,"Vector2Clamp","Vector2Clamp")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:560:15
	makeExtern< Vector2 (*)(Vector2,float,float) , Vector2ClampValue , SimNode_ExtFuncCall >(lib,"Vector2ClampValue","Vector2ClampValue")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:581:11
	makeExtern< int (*)(Vector2,Vector2) , Vector2Equals , SimNode_ExtFuncCall >(lib,"Vector2Equals","Vector2Equals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:598:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , Vector2Refract , SimNode_ExtFuncCall >(lib,"Vector2Refract","Vector2Refract")
		->args({"v","n","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:623:15
	makeExtern< Vector3 (*)() , Vector3Zero , SimNode_ExtFuncCall >(lib,"Vector3Zero","Vector3Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:631:15
	makeExtern< Vector3 (*)() , Vector3One , SimNode_ExtFuncCall >(lib,"Vector3One","Vector3One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:639:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Add , SimNode_ExtFuncCall >(lib,"Vector3Add","Vector3Add")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:647:15
	makeExtern< Vector3 (*)(Vector3,float) , Vector3AddValue , SimNode_ExtFuncCall >(lib,"Vector3AddValue","Vector3AddValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:655:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Subtract , SimNode_ExtFuncCall >(lib,"Vector3Subtract","Vector3Subtract")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:663:15
	makeExtern< Vector3 (*)(Vector3,float) , Vector3SubtractValue , SimNode_ExtFuncCall >(lib,"Vector3SubtractValue","Vector3SubtractValue")
		->args({"v","sub"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

