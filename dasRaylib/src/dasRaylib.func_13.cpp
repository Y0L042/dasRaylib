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
// from raymath.h:399:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2Scale , SimNode_ExtFuncCall >(lib,"Vector2Scale","Vector2Scale")
		->args({"v","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:407:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Multiply , SimNode_ExtFuncCall >(lib,"Vector2Multiply","Vector2Multiply")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:415:15
	makeExtern< Vector2 (*)(Vector2) , Vector2Negate , SimNode_ExtFuncCall >(lib,"Vector2Negate","Vector2Negate")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:423:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Divide , SimNode_ExtFuncCall >(lib,"Vector2Divide","Vector2Divide")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:431:15
	makeExtern< Vector2 (*)(Vector2) , Vector2Normalize , SimNode_ExtFuncCall >(lib,"Vector2Normalize","Vector2Normalize")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:447:15
	makeExtern< Vector2 (*)(Vector2,const float4x4 &) , _rlw_Vector2Transform , SimNode_ExtFuncCall >(lib,"Vector2Transform","das::_rlw_Vector2Transform")
		->args({"v","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:462:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , Vector2Lerp , SimNode_ExtFuncCall >(lib,"Vector2Lerp","Vector2Lerp")
		->args({"v1","v2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:473:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Reflect , SimNode_ExtFuncCall >(lib,"Vector2Reflect","Vector2Reflect")
		->args({"v","normal"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:486:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Min , SimNode_ExtFuncCall >(lib,"Vector2Min","Vector2Min")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:497:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Max , SimNode_ExtFuncCall >(lib,"Vector2Max","Vector2Max")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:508:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2Rotate , SimNode_ExtFuncCall >(lib,"Vector2Rotate","Vector2Rotate")
		->args({"v","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:522:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , Vector2MoveTowards , SimNode_ExtFuncCall >(lib,"Vector2MoveTowards","Vector2MoveTowards")
		->args({"v","target","maxDistance"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:541:15
	makeExtern< Vector2 (*)(Vector2) , Vector2Invert , SimNode_ExtFuncCall >(lib,"Vector2Invert","Vector2Invert")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:550:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2) , Vector2Clamp , SimNode_ExtFuncCall >(lib,"Vector2Clamp","Vector2Clamp")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:561:15
	makeExtern< Vector2 (*)(Vector2,float,float) , Vector2ClampValue , SimNode_ExtFuncCall >(lib,"Vector2ClampValue","Vector2ClampValue")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:582:11
	makeExtern< int (*)(Vector2,Vector2) , Vector2Equals , SimNode_ExtFuncCall >(lib,"Vector2Equals","Vector2Equals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:599:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , Vector2Refract , SimNode_ExtFuncCall >(lib,"Vector2Refract","Vector2Refract")
		->args({"v","n","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:624:15
	makeExtern< Vector3 (*)() , Vector3Zero , SimNode_ExtFuncCall >(lib,"Vector3Zero","Vector3Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:632:15
	makeExtern< Vector3 (*)() , Vector3One , SimNode_ExtFuncCall >(lib,"Vector3One","Vector3One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:640:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Add , SimNode_ExtFuncCall >(lib,"Vector3Add","Vector3Add")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:648:15
	makeExtern< Vector3 (*)(Vector3,float) , Vector3AddValue , SimNode_ExtFuncCall >(lib,"Vector3AddValue","Vector3AddValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:656:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Subtract , SimNode_ExtFuncCall >(lib,"Vector3Subtract","Vector3Subtract")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:664:15
	makeExtern< Vector3 (*)(Vector3,float) , Vector3SubtractValue , SimNode_ExtFuncCall >(lib,"Vector3SubtractValue","Vector3SubtractValue")
		->args({"v","sub"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:672:15
	makeExtern< Vector3 (*)(Vector3,float) , Vector3Scale , SimNode_ExtFuncCall >(lib,"Vector3Scale","Vector3Scale")
		->args({"v","scalar"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:680:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Multiply , SimNode_ExtFuncCall >(lib,"Vector3Multiply","Vector3Multiply")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:688:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3CrossProduct , SimNode_ExtFuncCall >(lib,"Vector3CrossProduct","Vector3CrossProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:696:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Perpendicular , SimNode_ExtFuncCall >(lib,"Vector3Perpendicular","Vector3Perpendicular")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:725:13
	makeExtern< float (*)(const Vector3) , Vector3Length , SimNode_ExtFuncCall >(lib,"Vector3Length","Vector3Length")
		->args({"v"})
		->arg_type(0,makeType<const const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:733:13
	makeExtern< float (*)(const Vector3) , Vector3LengthSqr , SimNode_ExtFuncCall >(lib,"Vector3LengthSqr","Vector3LengthSqr")
		->args({"v"})
		->arg_type(0,makeType<const const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:741:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3DotProduct , SimNode_ExtFuncCall >(lib,"Vector3DotProduct","Vector3DotProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:749:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3Distance , SimNode_ExtFuncCall >(lib,"Vector3Distance","Vector3Distance")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:762:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3DistanceSqr , SimNode_ExtFuncCall >(lib,"Vector3DistanceSqr","Vector3DistanceSqr")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:775:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3Angle , SimNode_ExtFuncCall >(lib,"Vector3Angle","Vector3Angle")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:788:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Negate , SimNode_ExtFuncCall >(lib,"Vector3Negate","Vector3Negate")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:796:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Divide , SimNode_ExtFuncCall >(lib,"Vector3Divide","Vector3Divide")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:804:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Normalize , SimNode_ExtFuncCall >(lib,"Vector3Normalize","Vector3Normalize")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:822:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Project , SimNode_ExtFuncCall >(lib,"Vector3Project","Vector3Project")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:839:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Reject , SimNode_ExtFuncCall >(lib,"Vector3Reject","Vector3Reject")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:858:12
	makeExtern< void (*)(Vector3 *,Vector3 *) , Vector3OrthoNormalize , SimNode_ExtFuncCall >(lib,"Vector3OrthoNormalize","Vector3OrthoNormalize")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:891:15
	makeExtern< Vector3 (*)(Vector3,const float4x4 &) , _rlw_Vector3Transform , SimNode_ExtFuncCall >(lib,"Vector3Transform","das::_rlw_Vector3Transform")
		->args({"v","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:907:15
	makeExtern< Vector3 (*)(Vector3,Vector4) , Vector3RotateByQuaternion , SimNode_ExtFuncCall >(lib,"Vector3RotateByQuaternion","Vector3RotateByQuaternion")
		->args({"v","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:919:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3RotateByAxisAngle , SimNode_ExtFuncCall >(lib,"Vector3RotateByAxisAngle","Vector3RotateByAxisAngle")
		->args({"v","axis","angle"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

