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
void Module_dasRaylib::initFunctions_18() {
// from rlgl.h:719:11
	makeExtern< int (*)() , rlGetFramebufferWidth , SimNode_ExtFuncCall >(lib,"rlGetFramebufferWidth","rlGetFramebufferWidth")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:720:12
	makeExtern< void (*)(int) , rlSetFramebufferHeight , SimNode_ExtFuncCall >(lib,"rlSetFramebufferHeight","rlSetFramebufferHeight")
		->args({"height"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:721:11
	makeExtern< int (*)() , rlGetFramebufferHeight , SimNode_ExtFuncCall >(lib,"rlGetFramebufferHeight","rlGetFramebufferHeight")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:723:20
	makeExtern< unsigned int (*)() , rlGetTextureIdDefault , SimNode_ExtFuncCall >(lib,"rlGetTextureIdDefault","rlGetTextureIdDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:724:20
	makeExtern< unsigned int (*)() , rlGetShaderIdDefault , SimNode_ExtFuncCall >(lib,"rlGetShaderIdDefault","rlGetShaderIdDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:725:12
	makeExtern< int * (*)() , rlGetShaderLocsDefault , SimNode_ExtFuncCall >(lib,"rlGetShaderLocsDefault","rlGetShaderLocsDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:730:21
	makeExtern< rlRenderBatch (*)(int,int) , rlLoadRenderBatch , SimNode_ExtFuncCallAndCopyOrMove >(lib,"rlLoadRenderBatch","rlLoadRenderBatch")
		->args({"numBuffers","bufferElements"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:731:12
	makeExtern< void (*)(rlRenderBatch) , rlUnloadRenderBatch , SimNode_ExtFuncCall >(lib,"rlUnloadRenderBatch","rlUnloadRenderBatch")
		->args({"batch"})
		->arg_type(0,makeType<const rlRenderBatch>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:732:12
	makeExtern< void (*)(rlRenderBatch *) , rlDrawRenderBatch , SimNode_ExtFuncCall >(lib,"rlDrawRenderBatch","rlDrawRenderBatch")
		->args({"batch"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:733:12
	makeExtern< void (*)(rlRenderBatch *) , rlSetRenderBatchActive , SimNode_ExtFuncCall >(lib,"rlSetRenderBatchActive","rlSetRenderBatchActive")
		->args({"batch"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:734:12
	makeExtern< void (*)() , rlDrawRenderBatchActive , SimNode_ExtFuncCall >(lib,"rlDrawRenderBatchActive","rlDrawRenderBatchActive")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:735:12
	makeExtern< bool (*)(int) , rlCheckRenderBatchLimit , SimNode_ExtFuncCall >(lib,"rlCheckRenderBatchLimit","rlCheckRenderBatchLimit")
		->args({"vCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:737:12
	makeExtern< void (*)(unsigned int) , rlSetTexture , SimNode_ExtFuncCall >(lib,"rlSetTexture","rlSetTexture")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:742:20
	makeExtern< unsigned int (*)() , rlLoadVertexArray , SimNode_ExtFuncCall >(lib,"rlLoadVertexArray","rlLoadVertexArray")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:743:20
	makeExtern< unsigned int (*)(const void *,int,bool) , rlLoadVertexBuffer , SimNode_ExtFuncCall >(lib,"rlLoadVertexBuffer","rlLoadVertexBuffer")
		->args({"buffer","size","dynamic"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:744:20
	makeExtern< unsigned int (*)(const void *,int,bool) , rlLoadVertexBufferElement , SimNode_ExtFuncCall >(lib,"rlLoadVertexBufferElement","rlLoadVertexBufferElement")
		->args({"buffer","size","dynamic"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:745:12
	makeExtern< void (*)(unsigned int,const void *,int,int) , rlUpdateVertexBuffer , SimNode_ExtFuncCall >(lib,"rlUpdateVertexBuffer","rlUpdateVertexBuffer")
		->args({"bufferId","data","dataSize","offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:746:12
	makeExtern< void (*)(unsigned int,const void *,int,int) , rlUpdateVertexBufferElements , SimNode_ExtFuncCall >(lib,"rlUpdateVertexBufferElements","rlUpdateVertexBufferElements")
		->args({"id","data","dataSize","offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:747:12
	makeExtern< void (*)(unsigned int) , rlUnloadVertexArray , SimNode_ExtFuncCall >(lib,"rlUnloadVertexArray","rlUnloadVertexArray")
		->args({"vaoId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:748:12
	makeExtern< void (*)(unsigned int) , rlUnloadVertexBuffer , SimNode_ExtFuncCall >(lib,"rlUnloadVertexBuffer","rlUnloadVertexBuffer")
		->args({"vboId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:749:12
	makeExtern< void (*)(unsigned int,int,int,bool,int,int) , rlSetVertexAttribute , SimNode_ExtFuncCall >(lib,"rlSetVertexAttribute","rlSetVertexAttribute")
		->args({"index","compSize","type","normalized","stride","offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:750:12
	makeExtern< void (*)(unsigned int,int) , rlSetVertexAttributeDivisor , SimNode_ExtFuncCall >(lib,"rlSetVertexAttributeDivisor","rlSetVertexAttributeDivisor")
		->args({"index","divisor"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:751:12
	makeExtern< void (*)(int,const void *,int,int) , rlSetVertexAttributeDefault , SimNode_ExtFuncCall >(lib,"rlSetVertexAttributeDefault","rlSetVertexAttributeDefault")
		->args({"locIndex","value","attribType","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:752:12
	makeExtern< void (*)(int,int) , rlDrawVertexArray , SimNode_ExtFuncCall >(lib,"rlDrawVertexArray","rlDrawVertexArray")
		->args({"offset","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:753:12
	makeExtern< void (*)(int,int,const void *) , rlDrawVertexArrayElements , SimNode_ExtFuncCall >(lib,"rlDrawVertexArrayElements","rlDrawVertexArrayElements")
		->args({"offset","count","buffer"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:754:12
	makeExtern< void (*)(int,int,int) , rlDrawVertexArrayInstanced , SimNode_ExtFuncCall >(lib,"rlDrawVertexArrayInstanced","rlDrawVertexArrayInstanced")
		->args({"offset","count","instances"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:755:12
	makeExtern< void (*)(int,int,const void *,int) , rlDrawVertexArrayElementsInstanced , SimNode_ExtFuncCall >(lib,"rlDrawVertexArrayElementsInstanced","rlDrawVertexArrayElementsInstanced")
		->args({"offset","count","buffer","instances"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:758:20
	makeExtern< unsigned int (*)(const void *,int,int,int,int) , rlLoadTexture , SimNode_ExtFuncCall >(lib,"rlLoadTexture","rlLoadTexture")
		->args({"data","width","height","format","mipmapCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:759:20
	makeExtern< unsigned int (*)(int,int,bool) , rlLoadTextureDepth , SimNode_ExtFuncCall >(lib,"rlLoadTextureDepth","rlLoadTextureDepth")
		->args({"width","height","useRenderBuffer"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:760:20
	makeExtern< unsigned int (*)(const void *,int,int,int) , rlLoadTextureCubemap , SimNode_ExtFuncCall >(lib,"rlLoadTextureCubemap","rlLoadTextureCubemap")
		->args({"data","size","format","mipmapCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:761:12
	makeExtern< void (*)(unsigned int,int,int,int,int,int,const void *) , rlUpdateTexture , SimNode_ExtFuncCall >(lib,"rlUpdateTexture","rlUpdateTexture")
		->args({"id","offsetX","offsetY","width","height","format","data"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:762:12
	makeExtern< void (*)(int,unsigned int *,unsigned int *,unsigned int *) , rlGetGlTextureFormats , SimNode_ExtFuncCall >(lib,"rlGetGlTextureFormats","rlGetGlTextureFormats")
		->args({"format","glInternalFormat","glFormat","glType"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:763:19
	makeExtern< const char * (*)(unsigned int) , rlGetPixelFormatName , SimNode_ExtFuncCall >(lib,"rlGetPixelFormatName","rlGetPixelFormatName")
		->args({"format"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:764:12
	makeExtern< void (*)(unsigned int) , rlUnloadTexture , SimNode_ExtFuncCall >(lib,"rlUnloadTexture","rlUnloadTexture")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:765:12
	makeExtern< void (*)(unsigned int,int,int,int,int *) , rlGenTextureMipmaps , SimNode_ExtFuncCall >(lib,"rlGenTextureMipmaps","rlGenTextureMipmaps")
		->args({"id","width","height","format","mipmaps"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:766:13
	makeExtern< void * (*)(unsigned int,int,int,int) , rlReadTexturePixels , SimNode_ExtFuncCall >(lib,"rlReadTexturePixels","rlReadTexturePixels")
		->args({"id","width","height","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:767:22
	makeExtern< unsigned char * (*)(int,int) , rlReadScreenPixels , SimNode_ExtFuncCall >(lib,"rlReadScreenPixels","rlReadScreenPixels")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:770:20
	makeExtern< unsigned int (*)() , rlLoadFramebuffer , SimNode_ExtFuncCall >(lib,"rlLoadFramebuffer","rlLoadFramebuffer")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:771:12
	makeExtern< void (*)(unsigned int,unsigned int,int,int,int) , rlFramebufferAttach , SimNode_ExtFuncCall >(lib,"rlFramebufferAttach","rlFramebufferAttach")
		->args({"id","texId","attachType","texType","mipLevel"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:772:12
	makeExtern< bool (*)(unsigned int) , rlFramebufferComplete , SimNode_ExtFuncCall >(lib,"rlFramebufferComplete","rlFramebufferComplete")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:773:12
	makeExtern< void (*)(unsigned int) , rlUnloadFramebuffer , SimNode_ExtFuncCall >(lib,"rlUnloadFramebuffer","rlUnloadFramebuffer")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:775:12
	makeExtern< void (*)(int,int,int,int,int,void *) , rlCopyFramebuffer , SimNode_ExtFuncCall >(lib,"rlCopyFramebuffer","rlCopyFramebuffer")
		->args({"x","y","width","height","format","pixels"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:776:12
	makeExtern< void (*)(int,int) , rlResizeFramebuffer , SimNode_ExtFuncCall >(lib,"rlResizeFramebuffer","rlResizeFramebuffer")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:779:20
	makeExtern< unsigned int (*)(const char *,int) , rlLoadShader , SimNode_ExtFuncCall >(lib,"rlLoadShader","rlLoadShader")
		->args({"code","type"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:780:20
	makeExtern< unsigned int (*)(const char *,const char *) , rlLoadShaderProgram , SimNode_ExtFuncCall >(lib,"rlLoadShaderProgram","rlLoadShaderProgram")
		->args({"vsCode","fsCode"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:781:20
	makeExtern< unsigned int (*)(unsigned int,unsigned int) , rlLoadShaderProgramEx , SimNode_ExtFuncCall >(lib,"rlLoadShaderProgramEx","rlLoadShaderProgramEx")
		->args({"vsId","fsId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:782:20
	makeExtern< unsigned int (*)(unsigned int) , rlLoadShaderProgramCompute , SimNode_ExtFuncCall >(lib,"rlLoadShaderProgramCompute","rlLoadShaderProgramCompute")
		->args({"csId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:783:12
	makeExtern< void (*)(unsigned int) , rlUnloadShader , SimNode_ExtFuncCall >(lib,"rlUnloadShader","rlUnloadShader")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:784:12
	makeExtern< void (*)(unsigned int) , rlUnloadShaderProgram , SimNode_ExtFuncCall >(lib,"rlUnloadShaderProgram","rlUnloadShaderProgram")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:785:11
	makeExtern< int (*)(unsigned int,const char *) , rlGetLocationUniform , SimNode_ExtFuncCall >(lib,"rlGetLocationUniform","rlGetLocationUniform")
		->args({"id","uniformName"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

