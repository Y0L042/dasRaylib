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
void Module_dasRaylib::initFunctions_14() {
// from raymath.h:671:15
	makeExtern< Vector3 (*)(Vector3,float) , Vector3Scale , SimNode_ExtFuncCall >(lib,"Vector3Scale","Vector3Scale")
		->args({"v","scalar"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:679:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Multiply , SimNode_ExtFuncCall >(lib,"Vector3Multiply","Vector3Multiply")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:687:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3CrossProduct , SimNode_ExtFuncCall >(lib,"Vector3CrossProduct","Vector3CrossProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:695:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Perpendicular , SimNode_ExtFuncCall >(lib,"Vector3Perpendicular","Vector3Perpendicular")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:724:13
	makeExtern< float (*)(const Vector3) , Vector3Length , SimNode_ExtFuncCall >(lib,"Vector3Length","Vector3Length")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:732:13
	makeExtern< float (*)(const Vector3) , Vector3LengthSqr , SimNode_ExtFuncCall >(lib,"Vector3LengthSqr","Vector3LengthSqr")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:740:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3DotProduct , SimNode_ExtFuncCall >(lib,"Vector3DotProduct","Vector3DotProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:748:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3Distance , SimNode_ExtFuncCall >(lib,"Vector3Distance","Vector3Distance")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:761:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3DistanceSqr , SimNode_ExtFuncCall >(lib,"Vector3DistanceSqr","Vector3DistanceSqr")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:774:13
	makeExtern< float (*)(Vector3,Vector3) , Vector3Angle , SimNode_ExtFuncCall >(lib,"Vector3Angle","Vector3Angle")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:787:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Negate , SimNode_ExtFuncCall >(lib,"Vector3Negate","Vector3Negate")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:795:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Divide , SimNode_ExtFuncCall >(lib,"Vector3Divide","Vector3Divide")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:803:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Normalize , SimNode_ExtFuncCall >(lib,"Vector3Normalize","Vector3Normalize")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:821:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Project , SimNode_ExtFuncCall >(lib,"Vector3Project","Vector3Project")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:838:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Reject , SimNode_ExtFuncCall >(lib,"Vector3Reject","Vector3Reject")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:857:12
	makeExtern< void (*)(Vector3 *,Vector3 *) , Vector3OrthoNormalize , SimNode_ExtFuncCall >(lib,"Vector3OrthoNormalize","Vector3OrthoNormalize")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:890:15
	makeExtern< Vector3 (*)(Vector3,const float4x4 &) , _rlw_Vector3Transform , SimNode_ExtFuncCall >(lib,"Vector3Transform","das::_rlw_Vector3Transform")
		->args({"v","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:906:15
	makeExtern< Vector3 (*)(Vector3,Vector4) , Vector3RotateByQuaternion , SimNode_ExtFuncCall >(lib,"Vector3RotateByQuaternion","Vector3RotateByQuaternion")
		->args({"v","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:918:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3RotateByAxisAngle , SimNode_ExtFuncCall >(lib,"Vector3RotateByAxisAngle","Vector3RotateByAxisAngle")
		->args({"v","axis","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:970:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3MoveTowards , SimNode_ExtFuncCall >(lib,"Vector3MoveTowards","Vector3MoveTowards")
		->args({"v","target","maxDistance"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:991:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3Lerp , SimNode_ExtFuncCall >(lib,"Vector3Lerp","Vector3Lerp")
		->args({"v1","v2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1004:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3,Vector3,float) , Vector3CubicHermite , SimNode_ExtFuncCall >(lib,"Vector3CubicHermite","Vector3CubicHermite")
		->args({"v1","tangent1","v2","tangent2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1019:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Reflect , SimNode_ExtFuncCall >(lib,"Vector3Reflect","Vector3Reflect")
		->args({"v","normal"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1037:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Min , SimNode_ExtFuncCall >(lib,"Vector3Min","Vector3Min")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1049:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Max , SimNode_ExtFuncCall >(lib,"Vector3Max","Vector3Max")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1062:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3,Vector3) , Vector3Barycenter , SimNode_ExtFuncCall >(lib,"Vector3Barycenter","Vector3Barycenter")
		->args({"p","a","b","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1086:15
	makeExtern< Vector3 (*)(Vector3,const float4x4 &,const float4x4 &) , _rlw_Vector3Unproject , SimNode_ExtFuncCall >(lib,"Vector3Unproject","das::_rlw_Vector3Unproject")
		->args({"source","projection","view"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1181:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Invert , SimNode_ExtFuncCall >(lib,"Vector3Invert","Vector3Invert")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1190:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3) , Vector3Clamp , SimNode_ExtFuncCall >(lib,"Vector3Clamp","Vector3Clamp")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1202:15
	makeExtern< Vector3 (*)(Vector3,float,float) , Vector3ClampValue , SimNode_ExtFuncCall >(lib,"Vector3ClampValue","Vector3ClampValue")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1224:11
	makeExtern< int (*)(Vector3,Vector3) , Vector3Equals , SimNode_ExtFuncCall >(lib,"Vector3Equals","Vector3Equals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1242:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3Refract , SimNode_ExtFuncCall >(lib,"Vector3Refract","Vector3Refract")
		->args({"v","n","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1267:15
	makeExtern< Vector4 (*)() , Vector4Zero , SimNode_ExtFuncCall >(lib,"Vector4Zero","Vector4Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1274:15
	makeExtern< Vector4 (*)() , Vector4One , SimNode_ExtFuncCall >(lib,"Vector4One","Vector4One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1281:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Add , SimNode_ExtFuncCall >(lib,"Vector4Add","Vector4Add")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1293:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4AddValue , SimNode_ExtFuncCall >(lib,"Vector4AddValue","Vector4AddValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1305:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Subtract , SimNode_ExtFuncCall >(lib,"Vector4Subtract","Vector4Subtract")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1317:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4SubtractValue , SimNode_ExtFuncCall >(lib,"Vector4SubtractValue","Vector4SubtractValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1329:13
	makeExtern< float (*)(Vector4) , Vector4Length , SimNode_ExtFuncCall >(lib,"Vector4Length","Vector4Length")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1336:13
	makeExtern< float (*)(Vector4) , Vector4LengthSqr , SimNode_ExtFuncCall >(lib,"Vector4LengthSqr","Vector4LengthSqr")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1343:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4DotProduct , SimNode_ExtFuncCall >(lib,"Vector4DotProduct","Vector4DotProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1350:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4Distance , SimNode_ExtFuncCall >(lib,"Vector4Distance","Vector4Distance")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1359:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4DistanceSqr , SimNode_ExtFuncCall >(lib,"Vector4DistanceSqr","Vector4DistanceSqr")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1369:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4Scale , SimNode_ExtFuncCall >(lib,"Vector4Scale","Vector4Scale")
		->args({"v","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1376:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Multiply , SimNode_ExtFuncCall >(lib,"Vector4Multiply","Vector4Multiply")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1383:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Negate , SimNode_ExtFuncCall >(lib,"Vector4Negate","Vector4Negate")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1390:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Divide , SimNode_ExtFuncCall >(lib,"Vector4Divide","Vector4Divide")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1397:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Normalize , SimNode_ExtFuncCall >(lib,"Vector4Normalize","Vector4Normalize")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1415:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Min , SimNode_ExtFuncCall >(lib,"Vector4Min","Vector4Min")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1428:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Max , SimNode_ExtFuncCall >(lib,"Vector4Max","Vector4Max")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

