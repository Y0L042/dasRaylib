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
// from rlgl.h:606:12
	makeExtern< void (*)(int) , rlMatrixMode , SimNode_ExtFuncCall >(lib,"rlMatrixMode","rlMatrixMode")
		->args({"mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:607:12
	makeExtern< void (*)() , rlPushMatrix , SimNode_ExtFuncCall >(lib,"rlPushMatrix","rlPushMatrix")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:608:12
	makeExtern< void (*)() , rlPopMatrix , SimNode_ExtFuncCall >(lib,"rlPopMatrix","rlPopMatrix")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:609:12
	makeExtern< void (*)() , rlLoadIdentity , SimNode_ExtFuncCall >(lib,"rlLoadIdentity","rlLoadIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:610:12
	makeExtern< void (*)(float,float,float) , rlTranslatef , SimNode_ExtFuncCall >(lib,"rlTranslatef","rlTranslatef")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:611:12
	makeExtern< void (*)(float,float,float,float) , rlRotatef , SimNode_ExtFuncCall >(lib,"rlRotatef","rlRotatef")
		->args({"angle","x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:612:12
	makeExtern< void (*)(float,float,float) , rlScalef , SimNode_ExtFuncCall >(lib,"rlScalef","rlScalef")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:613:12
	makeExtern< void (*)(const float *) , rlMultMatrixf , SimNode_ExtFuncCall >(lib,"rlMultMatrixf","rlMultMatrixf")
		->args({"matf"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:614:12
	makeExtern< void (*)(double,double,double,double,double,double) , rlFrustum , SimNode_ExtFuncCall >(lib,"rlFrustum","rlFrustum")
		->args({"left","right","bottom","top","znear","zfar"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:615:12
	makeExtern< void (*)(double,double,double,double,double,double) , rlOrtho , SimNode_ExtFuncCall >(lib,"rlOrtho","rlOrtho")
		->args({"left","right","bottom","top","znear","zfar"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:616:12
	makeExtern< void (*)(int,int,int,int) , rlViewport , SimNode_ExtFuncCall >(lib,"rlViewport","rlViewport")
		->args({"x","y","width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:617:12
	makeExtern< void (*)(double,double) , rlSetClipPlanes , SimNode_ExtFuncCall >(lib,"rlSetClipPlanes","rlSetClipPlanes")
		->args({"nearPlane","farPlane"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:618:14
	makeExtern< double (*)() , rlGetCullDistanceNear , SimNode_ExtFuncCall >(lib,"rlGetCullDistanceNear","rlGetCullDistanceNear")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:619:14
	makeExtern< double (*)() , rlGetCullDistanceFar , SimNode_ExtFuncCall >(lib,"rlGetCullDistanceFar","rlGetCullDistanceFar")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:624:12
	makeExtern< void (*)(int) , rlBegin , SimNode_ExtFuncCall >(lib,"rlBegin","rlBegin")
		->args({"mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:625:12
	makeExtern< void (*)() , rlEnd , SimNode_ExtFuncCall >(lib,"rlEnd","rlEnd")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:626:12
	makeExtern< void (*)(int,int) , rlVertex2i , SimNode_ExtFuncCall >(lib,"rlVertex2i","rlVertex2i")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:627:12
	makeExtern< void (*)(float,float) , rlVertex2f , SimNode_ExtFuncCall >(lib,"rlVertex2f","rlVertex2f")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:628:12
	makeExtern< void (*)(float,float,float) , rlVertex3f , SimNode_ExtFuncCall >(lib,"rlVertex3f","rlVertex3f")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:629:12
	makeExtern< void (*)(float,float) , rlTexCoord2f , SimNode_ExtFuncCall >(lib,"rlTexCoord2f","rlTexCoord2f")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:630:12
	makeExtern< void (*)(float,float,float) , rlNormal3f , SimNode_ExtFuncCall >(lib,"rlNormal3f","rlNormal3f")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:631:12
	makeExtern< void (*)(unsigned char,unsigned char,unsigned char,unsigned char) , rlColor4ub , SimNode_ExtFuncCall >(lib,"rlColor4ub","rlColor4ub")
		->args({"r","g","b","a"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:632:12
	makeExtern< void (*)(float,float,float) , rlColor3f , SimNode_ExtFuncCall >(lib,"rlColor3f","rlColor3f")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:633:12
	makeExtern< void (*)(float,float,float,float) , rlColor4f , SimNode_ExtFuncCall >(lib,"rlColor4f","rlColor4f")
		->args({"x","y","z","w"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:642:12
	makeExtern< bool (*)(unsigned int) , rlEnableVertexArray , SimNode_ExtFuncCall >(lib,"rlEnableVertexArray","rlEnableVertexArray")
		->args({"vaoId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:643:12
	makeExtern< void (*)() , rlDisableVertexArray , SimNode_ExtFuncCall >(lib,"rlDisableVertexArray","rlDisableVertexArray")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:644:12
	makeExtern< void (*)(unsigned int) , rlEnableVertexBuffer , SimNode_ExtFuncCall >(lib,"rlEnableVertexBuffer","rlEnableVertexBuffer")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:645:12
	makeExtern< void (*)() , rlDisableVertexBuffer , SimNode_ExtFuncCall >(lib,"rlDisableVertexBuffer","rlDisableVertexBuffer")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:646:12
	makeExtern< void (*)(unsigned int) , rlEnableVertexBufferElement , SimNode_ExtFuncCall >(lib,"rlEnableVertexBufferElement","rlEnableVertexBufferElement")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:647:12
	makeExtern< void (*)() , rlDisableVertexBufferElement , SimNode_ExtFuncCall >(lib,"rlDisableVertexBufferElement","rlDisableVertexBufferElement")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:648:12
	makeExtern< void (*)(unsigned int) , rlEnableVertexAttribute , SimNode_ExtFuncCall >(lib,"rlEnableVertexAttribute","rlEnableVertexAttribute")
		->args({"index"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:649:12
	makeExtern< void (*)(unsigned int) , rlDisableVertexAttribute , SimNode_ExtFuncCall >(lib,"rlDisableVertexAttribute","rlDisableVertexAttribute")
		->args({"index"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:650:12
	makeExtern< void (*)(int,void *) , rlEnableStatePointer , SimNode_ExtFuncCall >(lib,"rlEnableStatePointer","rlEnableStatePointer")
		->args({"vertexAttribType","buffer"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:651:12
	makeExtern< void (*)(int) , rlDisableStatePointer , SimNode_ExtFuncCall >(lib,"rlDisableStatePointer","rlDisableStatePointer")
		->args({"vertexAttribType"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:654:12
	makeExtern< void (*)(int) , rlActiveTextureSlot , SimNode_ExtFuncCall >(lib,"rlActiveTextureSlot","rlActiveTextureSlot")
		->args({"slot"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:655:12
	makeExtern< void (*)(unsigned int) , rlEnableTexture , SimNode_ExtFuncCall >(lib,"rlEnableTexture","rlEnableTexture")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:656:12
	makeExtern< void (*)() , rlDisableTexture , SimNode_ExtFuncCall >(lib,"rlDisableTexture","rlDisableTexture")
		->addToModule(*this, SideEffects::worstDefault);
}
}

