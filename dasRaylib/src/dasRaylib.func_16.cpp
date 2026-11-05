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
void Module_dasRaylib::initFunctions_16() {
// from raymath.h:2731:12
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

