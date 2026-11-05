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
void Module_dasRaylib::initFunctions_15() {
// from raymath.h:1441:15
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , Vector4Lerp , SimNode_ExtFuncCall >(lib,"Vector4Lerp","Vector4Lerp")
		->args({"v1","v2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1454:15
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , Vector4MoveTowards , SimNode_ExtFuncCall >(lib,"Vector4MoveTowards","Vector4MoveTowards")
		->args({"v","target","maxDistance"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1477:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Invert , SimNode_ExtFuncCall >(lib,"Vector4Invert","Vector4Invert")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1484:11
	makeExtern< int (*)(Vector4,Vector4) , Vector4Equals , SimNode_ExtFuncCall >(lib,"Vector4Equals","Vector4Equals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1503:13
	makeExtern< float (*)(const float4x4 &) , _rlw_MatrixDeterminant , SimNode_ExtFuncCall >(lib,"MatrixDeterminant","das::_rlw_MatrixDeterminant")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1540:13
	makeExtern< float (*)(const float4x4 &) , _rlw_MatrixTrace , SimNode_ExtFuncCall >(lib,"MatrixTrace","das::_rlw_MatrixTrace")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1548:14
	makeExtern< float4x4 (*)(const float4x4 &) , _rlw_MatrixTranspose , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixTranspose","das::_rlw_MatrixTranspose")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1573:14
	makeExtern< float4x4 (*)(const float4x4 &) , _rlw_MatrixInvert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixInvert","das::_rlw_MatrixInvert")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1620:14
	makeExtern< float4x4 (*)() , _rlw_MatrixIdentity , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixIdentity","das::_rlw_MatrixIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1631:14
	makeExtern< float4x4 (*)(const float4x4 &,const float4x4 &) , _rlw_MatrixAdd , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixAdd","das::_rlw_MatrixAdd")
		->args({"left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1656:14
	makeExtern< float4x4 (*)(const float4x4 &,const float4x4 &) , _rlw_MatrixSubtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixSubtract","das::_rlw_MatrixSubtract")
		->args({"left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1682:14
	makeExtern< float4x4 (*)(const float4x4 &,const float4x4 &) , _rlw_MatrixMultiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixMultiply","das::_rlw_MatrixMultiply")
		->args({"left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1765:14
	makeExtern< float4x4 (*)(const float4x4 &,float) , _rlw_MatrixMultiplyValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixMultiplyValue","das::_rlw_MatrixMultiplyValue")
		->args({"left","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1778:14
	makeExtern< float4x4 (*)(float,float,float) , _rlw_MatrixTranslate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixTranslate","das::_rlw_MatrixTranslate")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1790:14
	makeExtern< float4x4 (*)(Vector3,float) , _rlw_MatrixRotate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotate","das::_rlw_MatrixRotate")
		->args({"axis","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1835:14
	makeExtern< float4x4 (*)(float) , _rlw_MatrixRotateX , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateX","das::_rlw_MatrixRotateX")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1855:14
	makeExtern< float4x4 (*)(float) , _rlw_MatrixRotateY , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateY","das::_rlw_MatrixRotateY")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1875:14
	makeExtern< float4x4 (*)(float) , _rlw_MatrixRotateZ , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateZ","das::_rlw_MatrixRotateZ")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1896:14
	makeExtern< float4x4 (*)(Vector3) , _rlw_MatrixRotateXYZ , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateXYZ","das::_rlw_MatrixRotateXYZ")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1927:14
	makeExtern< float4x4 (*)(Vector3) , _rlw_MatrixRotateZYX , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateZYX","das::_rlw_MatrixRotateZYX")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1962:14
	makeExtern< float4x4 (*)(float,float,float) , _rlw_MatrixScale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixScale","das::_rlw_MatrixScale")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1973:14
	makeExtern< float4x4 (*)(double,double,double,double,double,double) , _rlw_MatrixFrustum , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixFrustum","das::_rlw_MatrixFrustum")
		->args({"left","right","bottom","top","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2006:14
	makeExtern< float4x4 (*)(double,double,double,double) , _rlw_MatrixPerspective , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixPerspective","das::_rlw_MatrixPerspective")
		->args({"fovY","aspect","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2032:14
	makeExtern< float4x4 (*)(double,double,double,double,double,double) , _rlw_MatrixOrtho , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixOrtho","das::_rlw_MatrixOrtho")
		->args({"left","right","bottom","top","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2061:14
	makeExtern< float4x4 (*)(Vector3,Vector3,Vector3) , _rlw_MatrixLookAt , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixLookAt","das::_rlw_MatrixLookAt")
		->args({"eye","target","up"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2145:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionAdd , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionAdd","QuaternionAdd")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2153:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionAddValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionAddValue","QuaternionAddValue")
		->args({"q","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2161:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionSubtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSubtract","QuaternionSubtract")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2169:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionSubtractValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSubtractValue","QuaternionSubtractValue")
		->args({"q","sub"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2177:18
	makeExtern< Vector4 (*)() , QuaternionIdentity , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionIdentity","QuaternionIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2185:13
	makeExtern< float (*)(Vector4) , QuaternionLength , SimNode_ExtFuncCall >(lib,"QuaternionLength","QuaternionLength")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2193:18
	makeExtern< Vector4 (*)(Vector4) , QuaternionNormalize , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionNormalize","QuaternionNormalize")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2210:18
	makeExtern< Vector4 (*)(Vector4) , QuaternionInvert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionInvert","QuaternionInvert")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2230:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionMultiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionMultiply","QuaternionMultiply")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2246:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionScale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionScale","QuaternionScale")
		->args({"q","mul"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2259:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionDivide , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionDivide","QuaternionDivide")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2267:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionLerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionLerp","QuaternionLerp")
		->args({"q1","q2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2280:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionNlerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionNlerp","QuaternionNlerp")
		->args({"q1","q2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2305:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionSlerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSlerp","QuaternionSlerp")
		->args({"q1","q2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2352:18
	makeExtern< Vector4 (*)(Vector4,Vector4,Vector4,Vector4,float) , QuaternionCubicHermiteSpline , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionCubicHermiteSpline","QuaternionCubicHermiteSpline")
		->args({"q1","outTangent1","q2","inTangent2","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2377:18
	makeExtern< Vector4 (*)(Vector3,Vector3) , QuaternionFromVector3ToVector3 , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromVector3ToVector3","QuaternionFromVector3ToVector3")
		->args({"from","to"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2426:18
	makeExtern< Vector4 (*)(const float4x4 &) , _rlw_QuaternionFromMatrix , SimNode_ExtFuncCall >(lib,"QuaternionFromMatrix","das::_rlw_QuaternionFromMatrix")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2490:14
	makeExtern< float4x4 (*)(Vector4) , _rlw_QuaternionToMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionToMatrix","das::_rlw_QuaternionToMatrix")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2524:18
	makeExtern< Vector4 (*)(Vector3,float) , QuaternionFromAxisAngle , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromAxisAngle","QuaternionFromAxisAngle")
		->args({"axis","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2563:12
	makeExtern< void (*)(Vector4,Vector3 *,float *) , QuaternionToAxisAngle , SimNode_ExtFuncCall >(lib,"QuaternionToAxisAngle","QuaternionToAxisAngle")
		->args({"q","outAxis","outAngle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2601:18
	makeExtern< Vector4 (*)(float,float,float) , QuaternionFromEuler , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromEuler","QuaternionFromEuler")
		->args({"pitch","yaw","roll"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2622:15
	makeExtern< Vector3 (*)(Vector4) , QuaternionToEuler , SimNode_ExtFuncCall >(lib,"QuaternionToEuler","QuaternionToEuler")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2646:18
	makeExtern< Vector4 (*)(Vector4,const float4x4 &) , _rlw_QuaternionTransform , SimNode_ExtFuncCall >(lib,"QuaternionTransform","das::_rlw_QuaternionTransform")
		->args({"q","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2659:11
	makeExtern< int (*)(Vector4,Vector4) , QuaternionEquals , SimNode_ExtFuncCall >(lib,"QuaternionEquals","QuaternionEquals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2678:14
	makeExtern< float4x4 (*)(Vector3,Vector4,Vector3) , _rlw_MatrixCompose , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixCompose","das::_rlw_MatrixCompose")
		->args({"translation","rotation","scale"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

