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
// from raymath.h:1928:14
	makeExtern< float4x4 (*)(Vector3) , _rlw_MatrixRotateZYX , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateZYX","das::_rlw_MatrixRotateZYX")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1963:14
	makeExtern< float4x4 (*)(float,float,float) , _rlw_MatrixScale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixScale","das::_rlw_MatrixScale")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1974:14
	makeExtern< float4x4 (*)(double,double,double,double,double,double) , _rlw_MatrixFrustum , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixFrustum","das::_rlw_MatrixFrustum")
		->args({"left","right","bottom","top","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2007:14
	makeExtern< float4x4 (*)(double,double,double,double) , _rlw_MatrixPerspective , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixPerspective","das::_rlw_MatrixPerspective")
		->args({"fovY","aspect","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2033:14
	makeExtern< float4x4 (*)(double,double,double,double,double,double) , _rlw_MatrixOrtho , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixOrtho","das::_rlw_MatrixOrtho")
		->args({"left","right","bottom","top","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2062:14
	makeExtern< float4x4 (*)(Vector3,Vector3,Vector3) , _rlw_MatrixLookAt , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixLookAt","das::_rlw_MatrixLookAt")
		->args({"eye","target","up"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2146:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionAdd , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionAdd","QuaternionAdd")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2154:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionAddValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionAddValue","QuaternionAddValue")
		->args({"q","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2162:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionSubtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSubtract","QuaternionSubtract")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2170:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionSubtractValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSubtractValue","QuaternionSubtractValue")
		->args({"q","sub"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2178:18
	makeExtern< Vector4 (*)() , QuaternionIdentity , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionIdentity","QuaternionIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2186:13
	makeExtern< float (*)(Vector4) , QuaternionLength , SimNode_ExtFuncCall >(lib,"QuaternionLength","QuaternionLength")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2194:18
	makeExtern< Vector4 (*)(Vector4) , QuaternionNormalize , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionNormalize","QuaternionNormalize")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2211:18
	makeExtern< Vector4 (*)(Vector4) , QuaternionInvert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionInvert","QuaternionInvert")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2231:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionMultiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionMultiply","QuaternionMultiply")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2247:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionScale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionScale","QuaternionScale")
		->args({"q","mul"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2260:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionDivide , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionDivide","QuaternionDivide")
		->args({"q1","q2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2268:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionLerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionLerp","QuaternionLerp")
		->args({"q1","q2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2281:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionNlerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionNlerp","QuaternionNlerp")
		->args({"q1","q2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2306:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionSlerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSlerp","QuaternionSlerp")
		->args({"q1","q2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2353:18
	makeExtern< Vector4 (*)(Vector4,Vector4,Vector4,Vector4,float) , QuaternionCubicHermiteSpline , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionCubicHermiteSpline","QuaternionCubicHermiteSpline")
		->args({"q1","outTangent1","q2","inTangent2","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2378:18
	makeExtern< Vector4 (*)(Vector3,Vector3) , QuaternionFromVector3ToVector3 , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromVector3ToVector3","QuaternionFromVector3ToVector3")
		->args({"from","to"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2406:18
	makeExtern< Vector4 (*)(const float4x4 &) , _rlw_QuaternionFromMatrix , SimNode_ExtFuncCall >(lib,"QuaternionFromMatrix","das::_rlw_QuaternionFromMatrix")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2470:14
	makeExtern< float4x4 (*)(Vector4) , _rlw_QuaternionToMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionToMatrix","das::_rlw_QuaternionToMatrix")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2504:18
	makeExtern< Vector4 (*)(Vector3,float) , QuaternionFromAxisAngle , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromAxisAngle","QuaternionFromAxisAngle")
		->args({"axis","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2543:12
	makeExtern< void (*)(Vector4,Vector3 *,float *) , QuaternionToAxisAngle , SimNode_ExtFuncCall >(lib,"QuaternionToAxisAngle","QuaternionToAxisAngle")
		->args({"q","outAxis","outAngle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2581:18
	makeExtern< Vector4 (*)(float,float,float) , QuaternionFromEuler , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromEuler","QuaternionFromEuler")
		->args({"pitch","yaw","roll"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2602:15
	makeExtern< Vector3 (*)(Vector4) , QuaternionToEuler , SimNode_ExtFuncCall >(lib,"QuaternionToEuler","QuaternionToEuler")
		->args({"q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2626:18
	makeExtern< Vector4 (*)(Vector4,const float4x4 &) , _rlw_QuaternionTransform , SimNode_ExtFuncCall >(lib,"QuaternionTransform","das::_rlw_QuaternionTransform")
		->args({"q","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2639:11
	makeExtern< int (*)(Vector4,Vector4) , QuaternionEquals , SimNode_ExtFuncCall >(lib,"QuaternionEquals","QuaternionEquals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2659:14
	makeExtern< float4x4 (*)(Vector3,Vector4,Vector3) , _rlw_MatrixCompose , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixCompose","das::_rlw_MatrixCompose")
		->args({"translation","rotation","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2689:12
	makeExtern< void (*)(const float4x4 &,Vector3 *,Vector4 *,Vector3 *) , _rlw_MatrixDecompose , SimNode_ExtFuncCall >(lib,"MatrixDecompose","das::_rlw_MatrixDecompose")
		->args({"mat","translation","rotation","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:141:15
	makeExtern< Vector3 (*)(Camera3D *) , GetCameraForward , SimNode_ExtFuncCall >(lib,"GetCameraForward","GetCameraForward")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:142:15
	makeExtern< Vector3 (*)(Camera3D *) , GetCameraUp , SimNode_ExtFuncCall >(lib,"GetCameraUp","GetCameraUp")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:143:15
	makeExtern< Vector3 (*)(Camera3D *) , GetCameraRight , SimNode_ExtFuncCall >(lib,"GetCameraRight","GetCameraRight")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:146:12
	makeExtern< void (*)(Camera3D *,float,bool) , CameraMoveForward , SimNode_ExtFuncCall >(lib,"CameraMoveForward","CameraMoveForward")
		->args({"camera","distance","moveInWorldPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:147:12
	makeExtern< void (*)(Camera3D *,float) , CameraMoveUp , SimNode_ExtFuncCall >(lib,"CameraMoveUp","CameraMoveUp")
		->args({"camera","distance"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:148:12
	makeExtern< void (*)(Camera3D *,float,bool) , CameraMoveRight , SimNode_ExtFuncCall >(lib,"CameraMoveRight","CameraMoveRight")
		->args({"camera","distance","moveInWorldPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:149:12
	makeExtern< void (*)(Camera3D *,float) , CameraMoveToTarget , SimNode_ExtFuncCall >(lib,"CameraMoveToTarget","CameraMoveToTarget")
		->args({"camera","delta"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:152:12
	makeExtern< void (*)(Camera3D *,float,bool) , CameraYaw , SimNode_ExtFuncCall >(lib,"CameraYaw","CameraYaw")
		->args({"camera","angle","rotateAroundTarget"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:153:12
	makeExtern< void (*)(Camera3D *,float,bool,bool,bool) , CameraPitch , SimNode_ExtFuncCall >(lib,"CameraPitch","CameraPitch")
		->args({"camera","angle","lockView","rotateAroundTarget","rotateUp"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:154:12
	makeExtern< void (*)(Camera3D *,float) , CameraRoll , SimNode_ExtFuncCall >(lib,"CameraRoll","CameraRoll")
		->args({"camera","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:156:14
	makeExtern< float4x4 (*)(Camera3D *) , _rlw_GetCameraViewMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraViewMatrix","das::_rlw_GetCameraViewMatrix")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:157:14
	makeExtern< float4x4 (*)(Camera3D *,float) , _rlw_GetCameraProjectionMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraProjectionMatrix","das::_rlw_GetCameraProjectionMatrix")
		->args({"camera","aspect"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

