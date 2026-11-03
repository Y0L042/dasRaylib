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
	makeExtern< ::Matrix (*)(Vector3) , MatrixRotateZYX , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateZYX","MatrixRotateZYX")
		->args({"angle"})
		->arg_type(0,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1963:14
	makeExtern< ::Matrix (*)(float,float,float) , MatrixScale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixScale","MatrixScale")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1974:14
	makeExtern< ::Matrix (*)(double,double,double,double,double,double) , MatrixFrustum , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixFrustum","MatrixFrustum")
		->args({"left","right","bottom","top","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2007:14
	makeExtern< ::Matrix (*)(double,double,double,double) , MatrixPerspective , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixPerspective","MatrixPerspective")
		->args({"fovY","aspect","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2033:14
	makeExtern< ::Matrix (*)(double,double,double,double,double,double) , MatrixOrtho , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixOrtho","MatrixOrtho")
		->args({"left","right","bottom","top","nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2062:14
	makeExtern< ::Matrix (*)(Vector3,Vector3,Vector3) , MatrixLookAt , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixLookAt","MatrixLookAt")
		->args({"eye","target","up"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2146:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionAdd , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionAdd","QuaternionAdd")
		->args({"q1","q2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2154:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionAddValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionAddValue","QuaternionAddValue")
		->args({"q","add"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2162:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionSubtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSubtract","QuaternionSubtract")
		->args({"q1","q2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2170:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionSubtractValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSubtractValue","QuaternionSubtractValue")
		->args({"q","sub"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2178:18
	makeExtern< Vector4 (*)() , QuaternionIdentity , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionIdentity","QuaternionIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2186:13
	makeExtern< float (*)(Vector4) , QuaternionLength , SimNode_ExtFuncCall >(lib,"QuaternionLength","QuaternionLength")
		->args({"q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2194:18
	makeExtern< Vector4 (*)(Vector4) , QuaternionNormalize , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionNormalize","QuaternionNormalize")
		->args({"q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2211:18
	makeExtern< Vector4 (*)(Vector4) , QuaternionInvert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionInvert","QuaternionInvert")
		->args({"q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2231:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionMultiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionMultiply","QuaternionMultiply")
		->args({"q1","q2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2247:18
	makeExtern< Vector4 (*)(Vector4,float) , QuaternionScale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionScale","QuaternionScale")
		->args({"q","mul"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2260:18
	makeExtern< Vector4 (*)(Vector4,Vector4) , QuaternionDivide , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionDivide","QuaternionDivide")
		->args({"q1","q2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2268:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionLerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionLerp","QuaternionLerp")
		->args({"q1","q2","amount"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2281:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionNlerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionNlerp","QuaternionNlerp")
		->args({"q1","q2","amount"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2306:18
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , QuaternionSlerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionSlerp","QuaternionSlerp")
		->args({"q1","q2","amount"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2353:18
	makeExtern< Vector4 (*)(Vector4,Vector4,Vector4,Vector4,float) , QuaternionCubicHermiteSpline , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionCubicHermiteSpline","QuaternionCubicHermiteSpline")
		->args({"q1","outTangent1","q2","inTangent2","t"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->arg_type(2,makeType<const Vector4>(lib))
		->arg_type(3,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2378:18
	makeExtern< Vector4 (*)(Vector3,Vector3) , QuaternionFromVector3ToVector3 , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromVector3ToVector3","QuaternionFromVector3ToVector3")
		->args({"from","to"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2406:18
	makeExtern< Vector4 (*)(::Matrix) , QuaternionFromMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromMatrix","QuaternionFromMatrix")
		->args({"mat"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2470:14
	makeExtern< ::Matrix (*)(Vector4) , QuaternionToMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionToMatrix","QuaternionToMatrix")
		->args({"q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2504:18
	makeExtern< Vector4 (*)(Vector3,float) , QuaternionFromAxisAngle , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromAxisAngle","QuaternionFromAxisAngle")
		->args({"axis","angle"})
		->arg_type(0,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2543:12
	makeExtern< void (*)(Vector4,Vector3 *,float *) , QuaternionToAxisAngle , SimNode_ExtFuncCall >(lib,"QuaternionToAxisAngle","QuaternionToAxisAngle")
		->args({"q","outAxis","outAngle"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2581:18
	makeExtern< Vector4 (*)(float,float,float) , QuaternionFromEuler , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionFromEuler","QuaternionFromEuler")
		->args({"pitch","yaw","roll"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2602:15
	makeExtern< Vector3 (*)(Vector4) , QuaternionToEuler , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionToEuler","QuaternionToEuler")
		->args({"q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2626:18
	makeExtern< Vector4 (*)(Vector4,::Matrix) , QuaternionTransform , SimNode_ExtFuncCallAndCopyOrMove >(lib,"QuaternionTransform","QuaternionTransform")
		->args({"q","mat"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2639:11
	makeExtern< int (*)(Vector4,Vector4) , QuaternionEquals , SimNode_ExtFuncCall >(lib,"QuaternionEquals","QuaternionEquals")
		->args({"p","q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2659:14
	makeExtern< ::Matrix (*)(Vector3,Vector4,Vector3) , MatrixCompose , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixCompose","MatrixCompose")
		->args({"translation","rotation","scale"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:2689:12
	makeExtern< void (*)(::Matrix,Vector3 *,Vector4 *,Vector3 *) , MatrixDecompose , SimNode_ExtFuncCall >(lib,"MatrixDecompose","MatrixDecompose")
		->args({"mat","translation","rotation","scale"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:141:15
	makeExtern< Vector3 (*)(Camera3D *) , GetCameraForward , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraForward","GetCameraForward")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:142:15
	makeExtern< Vector3 (*)(Camera3D *) , GetCameraUp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraUp","GetCameraUp")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:143:15
	makeExtern< Vector3 (*)(Camera3D *) , GetCameraRight , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraRight","GetCameraRight")
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
	makeExtern< ::Matrix (*)(Camera3D *) , GetCameraViewMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraViewMatrix","GetCameraViewMatrix")
		->args({"camera"})
		->addToModule(*this, SideEffects::worstDefault);
// from rcamera.h:157:14
	makeExtern< ::Matrix (*)(Camera3D *,float) , GetCameraProjectionMatrix , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCameraProjectionMatrix","GetCameraProjectionMatrix")
		->args({"camera","aspect"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

