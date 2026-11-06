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
void Module_dasRaylib::initFunctions_17() {
// from rlgl.h:657:12
	makeExtern< void (*)(unsigned int) , rlEnableTextureCubemap , SimNode_ExtFuncCall >(lib,"rlEnableTextureCubemap","rlEnableTextureCubemap")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:658:12
	makeExtern< void (*)() , rlDisableTextureCubemap , SimNode_ExtFuncCall >(lib,"rlDisableTextureCubemap","rlDisableTextureCubemap")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:659:12
	makeExtern< void (*)(unsigned int,int,int) , rlTextureParameters , SimNode_ExtFuncCall >(lib,"rlTextureParameters","rlTextureParameters")
		->args({"id","param","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:660:12
	makeExtern< void (*)(unsigned int,int,int) , rlCubemapParameters , SimNode_ExtFuncCall >(lib,"rlCubemapParameters","rlCubemapParameters")
		->args({"id","param","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:663:12
	makeExtern< void (*)(unsigned int) , rlEnableShader , SimNode_ExtFuncCall >(lib,"rlEnableShader","rlEnableShader")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:664:12
	makeExtern< void (*)() , rlDisableShader , SimNode_ExtFuncCall >(lib,"rlDisableShader","rlDisableShader")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:667:12
	makeExtern< void (*)(unsigned int) , rlEnableFramebuffer , SimNode_ExtFuncCall >(lib,"rlEnableFramebuffer","rlEnableFramebuffer")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:668:12
	makeExtern< void (*)() , rlDisableFramebuffer , SimNode_ExtFuncCall >(lib,"rlDisableFramebuffer","rlDisableFramebuffer")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:669:20
	makeExtern< unsigned int (*)() , rlGetActiveFramebuffer , SimNode_ExtFuncCall >(lib,"rlGetActiveFramebuffer","rlGetActiveFramebuffer")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:670:12
	makeExtern< void (*)(int) , rlActiveDrawBuffers , SimNode_ExtFuncCall >(lib,"rlActiveDrawBuffers","rlActiveDrawBuffers")
		->args({"count"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:671:12
	makeExtern< void (*)(int,int,int,int,int,int,int,int,int) , rlBlitFramebuffer , SimNode_ExtFuncCall >(lib,"rlBlitFramebuffer","rlBlitFramebuffer")
		->args({"srcX","srcY","srcWidth","srcHeight","dstX","dstY","dstWidth","dstHeight","bufferMask"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:672:12
	makeExtern< void (*)(unsigned int,unsigned int) , rlBindFramebuffer , SimNode_ExtFuncCall >(lib,"rlBindFramebuffer","rlBindFramebuffer")
		->args({"target","framebuffer"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:675:12
	makeExtern< void (*)() , rlEnableColorBlend , SimNode_ExtFuncCall >(lib,"rlEnableColorBlend","rlEnableColorBlend")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:676:12
	makeExtern< void (*)() , rlDisableColorBlend , SimNode_ExtFuncCall >(lib,"rlDisableColorBlend","rlDisableColorBlend")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:677:12
	makeExtern< void (*)() , rlEnableDepthTest , SimNode_ExtFuncCall >(lib,"rlEnableDepthTest","rlEnableDepthTest")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:678:12
	makeExtern< void (*)() , rlDisableDepthTest , SimNode_ExtFuncCall >(lib,"rlDisableDepthTest","rlDisableDepthTest")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:679:12
	makeExtern< void (*)() , rlEnableDepthMask , SimNode_ExtFuncCall >(lib,"rlEnableDepthMask","rlEnableDepthMask")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:680:12
	makeExtern< void (*)() , rlDisableDepthMask , SimNode_ExtFuncCall >(lib,"rlDisableDepthMask","rlDisableDepthMask")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:681:12
	makeExtern< void (*)() , rlEnableBackfaceCulling , SimNode_ExtFuncCall >(lib,"rlEnableBackfaceCulling","rlEnableBackfaceCulling")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:682:12
	makeExtern< void (*)() , rlDisableBackfaceCulling , SimNode_ExtFuncCall >(lib,"rlDisableBackfaceCulling","rlDisableBackfaceCulling")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:683:12
	makeExtern< void (*)(bool,bool,bool,bool) , rlColorMask , SimNode_ExtFuncCall >(lib,"rlColorMask","rlColorMask")
		->args({"r","g","b","a"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:684:12
	makeExtern< void (*)(int) , rlSetCullFace , SimNode_ExtFuncCall >(lib,"rlSetCullFace","rlSetCullFace")
		->args({"mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:685:12
	makeExtern< void (*)() , rlEnableScissorTest , SimNode_ExtFuncCall >(lib,"rlEnableScissorTest","rlEnableScissorTest")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:686:12
	makeExtern< void (*)() , rlDisableScissorTest , SimNode_ExtFuncCall >(lib,"rlDisableScissorTest","rlDisableScissorTest")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:687:12
	makeExtern< void (*)(int,int,int,int) , rlScissor , SimNode_ExtFuncCall >(lib,"rlScissor","rlScissor")
		->args({"x","y","width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:688:12
	makeExtern< void (*)() , rlEnablePointMode , SimNode_ExtFuncCall >(lib,"rlEnablePointMode","rlEnablePointMode")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:689:12
	makeExtern< void (*)() , rlDisablePointMode , SimNode_ExtFuncCall >(lib,"rlDisablePointMode","rlDisablePointMode")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:690:12
	makeExtern< void (*)(float) , rlSetPointSize , SimNode_ExtFuncCall >(lib,"rlSetPointSize","rlSetPointSize")
		->args({"size"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:691:13
	makeExtern< float (*)() , rlGetPointSize , SimNode_ExtFuncCall >(lib,"rlGetPointSize","rlGetPointSize")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:692:12
	makeExtern< void (*)() , rlEnableWireMode , SimNode_ExtFuncCall >(lib,"rlEnableWireMode","rlEnableWireMode")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:693:12
	makeExtern< void (*)() , rlDisableWireMode , SimNode_ExtFuncCall >(lib,"rlDisableWireMode","rlDisableWireMode")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:694:12
	makeExtern< void (*)(float) , rlSetLineWidth , SimNode_ExtFuncCall >(lib,"rlSetLineWidth","rlSetLineWidth")
		->args({"width"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:695:13
	makeExtern< float (*)() , rlGetLineWidth , SimNode_ExtFuncCall >(lib,"rlGetLineWidth","rlGetLineWidth")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:696:12
	makeExtern< void (*)() , rlEnableSmoothLines , SimNode_ExtFuncCall >(lib,"rlEnableSmoothLines","rlEnableSmoothLines")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:697:12
	makeExtern< void (*)() , rlDisableSmoothLines , SimNode_ExtFuncCall >(lib,"rlDisableSmoothLines","rlDisableSmoothLines")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:698:12
	makeExtern< void (*)() , rlEnableStereoRender , SimNode_ExtFuncCall >(lib,"rlEnableStereoRender","rlEnableStereoRender")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:699:12
	makeExtern< void (*)() , rlDisableStereoRender , SimNode_ExtFuncCall >(lib,"rlDisableStereoRender","rlDisableStereoRender")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:700:12
	makeExtern< bool (*)() , rlIsStereoRenderEnabled , SimNode_ExtFuncCall >(lib,"rlIsStereoRenderEnabled","rlIsStereoRenderEnabled")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:702:12
	makeExtern< void (*)(unsigned char,unsigned char,unsigned char,unsigned char) , rlClearColor , SimNode_ExtFuncCall >(lib,"rlClearColor","rlClearColor")
		->args({"r","g","b","a"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:703:12
	makeExtern< void (*)() , rlClearScreenBuffers , SimNode_ExtFuncCall >(lib,"rlClearScreenBuffers","rlClearScreenBuffers")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:704:12
	makeExtern< void (*)() , rlCheckErrors , SimNode_ExtFuncCall >(lib,"rlCheckErrors","rlCheckErrors")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:705:12
	makeExtern< void (*)(int) , rlSetBlendMode , SimNode_ExtFuncCall >(lib,"rlSetBlendMode","rlSetBlendMode")
		->args({"mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:706:12
	makeExtern< void (*)(int,int,int) , rlSetBlendFactors , SimNode_ExtFuncCall >(lib,"rlSetBlendFactors","rlSetBlendFactors")
		->args({"glSrcFactor","glDstFactor","glEquation"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:707:12
	makeExtern< void (*)(int,int,int,int,int,int) , rlSetBlendFactorsSeparate , SimNode_ExtFuncCall >(lib,"rlSetBlendFactorsSeparate","rlSetBlendFactorsSeparate")
		->args({"glSrcRGB","glDstRGB","glSrcAlpha","glDstAlpha","glEqRGB","glEqAlpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:713:12
	makeExtern< void (*)(int,int) , rlglInit , SimNode_ExtFuncCall >(lib,"rlglInit","rlglInit")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:714:12
	makeExtern< void (*)() , rlglClose , SimNode_ExtFuncCall >(lib,"rlglClose","rlglClose")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:715:12
	makeExtern< void (*)(void *) , rlLoadExtensions , SimNode_ExtFuncCall >(lib,"rlLoadExtensions","rlLoadExtensions")
		->args({"loader"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:716:13
	makeExtern< void * (*)(const char *) , rlGetProcAddress , SimNode_ExtFuncCall >(lib,"rlGetProcAddress","rlGetProcAddress")
		->args({"procName"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:717:11
	makeExtern< int (*)() , rlGetVersion , SimNode_ExtFuncCall >(lib,"rlGetVersion","rlGetVersion")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:718:12
	makeExtern< void (*)(int) , rlSetFramebufferWidth , SimNode_ExtFuncCall >(lib,"rlSetFramebufferWidth","rlSetFramebufferWidth")
		->args({"width"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

