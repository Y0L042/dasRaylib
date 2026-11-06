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
void Module_dasRaylib::initFunctions_19() {
// from rlgl.h:786:11
	makeExtern< int (*)(unsigned int,const char *) , rlGetLocationAttrib , SimNode_ExtFuncCall >(lib,"rlGetLocationAttrib","rlGetLocationAttrib")
		->args({"id","attribName"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:787:12
	makeExtern< void (*)(int,const void *,int,int) , rlSetUniform , SimNode_ExtFuncCall >(lib,"rlSetUniform","rlSetUniform")
		->args({"locIndex","value","uniformType","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:788:12
	makeExtern< void (*)(int,const float4x4 &) , _rlw_rlSetUniformMatrix , SimNode_ExtFuncCall >(lib,"rlSetUniformMatrix","das::_rlw_rlSetUniformMatrix")
		->args({"locIndex","mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:789:12
	makeExtern< void (*)(int,const ::Matrix *,int) , rlSetUniformMatrices , SimNode_ExtFuncCall >(lib,"rlSetUniformMatrices","rlSetUniformMatrices")
		->args({"locIndex","mat","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:790:12
	makeExtern< void (*)(int,unsigned int) , rlSetUniformSampler , SimNode_ExtFuncCall >(lib,"rlSetUniformSampler","rlSetUniformSampler")
		->args({"locIndex","textureId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:791:12
	makeExtern< void (*)(unsigned int,int *) , rlSetShader , SimNode_ExtFuncCall >(lib,"rlSetShader","rlSetShader")
		->args({"id","locs"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:794:12
	makeExtern< void (*)(unsigned int,unsigned int,unsigned int) , rlComputeShaderDispatch , SimNode_ExtFuncCall >(lib,"rlComputeShaderDispatch","rlComputeShaderDispatch")
		->args({"groupX","groupY","groupZ"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:797:20
	makeExtern< unsigned int (*)(unsigned int,const void *,int) , rlLoadShaderBuffer , SimNode_ExtFuncCall >(lib,"rlLoadShaderBuffer","rlLoadShaderBuffer")
		->args({"size","data","usageHint"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:798:12
	makeExtern< void (*)(unsigned int) , rlUnloadShaderBuffer , SimNode_ExtFuncCall >(lib,"rlUnloadShaderBuffer","rlUnloadShaderBuffer")
		->args({"ssboId"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:799:12
	makeExtern< void (*)(unsigned int,const void *,unsigned int,unsigned int) , rlUpdateShaderBuffer , SimNode_ExtFuncCall >(lib,"rlUpdateShaderBuffer","rlUpdateShaderBuffer")
		->args({"id","data","dataSize","offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:800:12
	makeExtern< void (*)(unsigned int,unsigned int) , rlBindShaderBuffer , SimNode_ExtFuncCall >(lib,"rlBindShaderBuffer","rlBindShaderBuffer")
		->args({"id","index"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:801:12
	makeExtern< void (*)(unsigned int,void *,unsigned int,unsigned int) , rlReadShaderBuffer , SimNode_ExtFuncCall >(lib,"rlReadShaderBuffer","rlReadShaderBuffer")
		->args({"id","dest","count","offset"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:802:12
	makeExtern< void (*)(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) , rlCopyShaderBuffer , SimNode_ExtFuncCall >(lib,"rlCopyShaderBuffer","rlCopyShaderBuffer")
		->args({"destId","srcId","destOffset","srcOffset","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:803:20
	makeExtern< unsigned int (*)(unsigned int) , rlGetShaderBufferSize , SimNode_ExtFuncCall >(lib,"rlGetShaderBufferSize","rlGetShaderBufferSize")
		->args({"id"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:806:12
	makeExtern< void (*)(unsigned int,unsigned int,int,bool) , rlBindImageTexture , SimNode_ExtFuncCall >(lib,"rlBindImageTexture","rlBindImageTexture")
		->args({"id","index","format","readonly"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:809:14
	makeExtern< float4x4 (*)() , _rlw_rlGetMatrixModelview , SimNode_ExtFuncCallAndCopyOrMove >(lib,"rlGetMatrixModelview","das::_rlw_rlGetMatrixModelview")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:810:14
	makeExtern< float4x4 (*)() , _rlw_rlGetMatrixProjection , SimNode_ExtFuncCallAndCopyOrMove >(lib,"rlGetMatrixProjection","das::_rlw_rlGetMatrixProjection")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:811:14
	makeExtern< float4x4 (*)() , _rlw_rlGetMatrixTransform , SimNode_ExtFuncCallAndCopyOrMove >(lib,"rlGetMatrixTransform","das::_rlw_rlGetMatrixTransform")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:812:14
	makeExtern< float4x4 (*)(int) , _rlw_rlGetMatrixProjectionStereo , SimNode_ExtFuncCallAndCopyOrMove >(lib,"rlGetMatrixProjectionStereo","das::_rlw_rlGetMatrixProjectionStereo")
		->args({"eye"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:813:14
	makeExtern< float4x4 (*)(int) , _rlw_rlGetMatrixViewOffsetStereo , SimNode_ExtFuncCallAndCopyOrMove >(lib,"rlGetMatrixViewOffsetStereo","das::_rlw_rlGetMatrixViewOffsetStereo")
		->args({"eye"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:814:12
	makeExtern< void (*)(const float4x4 &) , _rlw_rlSetMatrixProjection , SimNode_ExtFuncCall >(lib,"rlSetMatrixProjection","das::_rlw_rlSetMatrixProjection")
		->args({"proj"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:815:12
	makeExtern< void (*)(const float4x4 &) , _rlw_rlSetMatrixModelview , SimNode_ExtFuncCall >(lib,"rlSetMatrixModelview","das::_rlw_rlSetMatrixModelview")
		->args({"view"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:816:12
	makeExtern< void (*)(const float4x4 &,const float4x4 &) , _rlw_rlSetMatrixProjectionStereo , SimNode_ExtFuncCall >(lib,"rlSetMatrixProjectionStereo","das::_rlw_rlSetMatrixProjectionStereo")
		->args({"right","left"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:817:12
	makeExtern< void (*)(const float4x4 &,const float4x4 &) , _rlw_rlSetMatrixViewOffsetStereo , SimNode_ExtFuncCall >(lib,"rlSetMatrixViewOffsetStereo","das::_rlw_rlSetMatrixViewOffsetStereo")
		->args({"right","left"})
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:820:12
	makeExtern< void (*)() , rlLoadDrawCube , SimNode_ExtFuncCall >(lib,"rlLoadDrawCube","rlLoadDrawCube")
		->addToModule(*this, SideEffects::worstDefault);
// from rlgl.h:821:12
	makeExtern< void (*)() , rlLoadDrawQuad , SimNode_ExtFuncCall >(lib,"rlLoadDrawQuad","rlLoadDrawQuad")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:789:16
	makeExtern< void (*)() , GuiEnable , SimNode_ExtFuncCall >(lib,"GuiEnable","GuiEnable")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:790:16
	makeExtern< void (*)() , GuiDisable , SimNode_ExtFuncCall >(lib,"GuiDisable","GuiDisable")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:791:16
	makeExtern< void (*)() , GuiLock , SimNode_ExtFuncCall >(lib,"GuiLock","GuiLock")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:792:16
	makeExtern< void (*)() , GuiUnlock , SimNode_ExtFuncCall >(lib,"GuiUnlock","GuiUnlock")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:793:16
	makeExtern< bool (*)() , GuiIsLocked , SimNode_ExtFuncCall >(lib,"GuiIsLocked","GuiIsLocked")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:794:16
	makeExtern< void (*)(float) , GuiSetAlpha , SimNode_ExtFuncCall >(lib,"GuiSetAlpha","GuiSetAlpha")
		->args({"alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:795:16
	makeExtern< void (*)(int) , GuiSetState , SimNode_ExtFuncCall >(lib,"GuiSetState","GuiSetState")
		->args({"state"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:796:15
	makeExtern< int (*)() , GuiGetState , SimNode_ExtFuncCall >(lib,"GuiGetState","GuiGetState")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:799:16
	makeExtern< void (*)(Font) , GuiSetFont , SimNode_ExtFuncCall >(lib,"GuiSetFont","GuiSetFont")
		->args({"font"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:800:16
	makeExtern< Font (*)() , GuiGetFont , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GuiGetFont","GuiGetFont")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:803:16
	makeExtern< void (*)(int,int,int) , GuiSetStyle , SimNode_ExtFuncCall >(lib,"GuiSetStyle","GuiSetStyle")
		->args({"control","property","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:804:15
	makeExtern< int (*)(int,int) , GuiGetStyle , SimNode_ExtFuncCall >(lib,"GuiGetStyle","GuiGetStyle")
		->args({"control","property"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:807:16
	makeExtern< void (*)(const char *) , GuiLoadStyle , SimNode_ExtFuncCall >(lib,"GuiLoadStyle","GuiLoadStyle")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:808:16
	makeExtern< void (*)(const unsigned char *,int) , GuiLoadStyleFromMemory , SimNode_ExtFuncCall >(lib,"GuiLoadStyleFromMemory","GuiLoadStyleFromMemory")
		->args({"fileData","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:809:16
	makeExtern< void (*)() , GuiLoadStyleDefault , SimNode_ExtFuncCall >(lib,"GuiLoadStyleDefault","GuiLoadStyleDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:812:16
	makeExtern< void (*)() , GuiEnableTooltip , SimNode_ExtFuncCall >(lib,"GuiEnableTooltip","GuiEnableTooltip")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:813:16
	makeExtern< void (*)() , GuiDisableTooltip , SimNode_ExtFuncCall >(lib,"GuiDisableTooltip","GuiDisableTooltip")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:814:16
	makeExtern< void (*)(const char *) , GuiSetTooltip , SimNode_ExtFuncCall >(lib,"GuiSetTooltip","GuiSetTooltip")
		->args({"tooltip"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:817:23
	makeExtern< const char * (*)(int,const char *) , GuiIconText , SimNode_ExtFuncCall >(lib,"GuiIconText","GuiIconText")
		->args({"iconId","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:819:16
	makeExtern< void (*)(int) , GuiSetIconScale , SimNode_ExtFuncCall >(lib,"GuiSetIconScale","GuiSetIconScale")
		->args({"scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:820:25
	makeExtern< unsigned int * (*)() , GuiGetIcons , SimNode_ExtFuncCall >(lib,"GuiGetIcons","GuiGetIcons")
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:821:18
	makeExtern< char ** (*)(const char *,bool) , GuiLoadIcons , SimNode_ExtFuncCall >(lib,"GuiLoadIcons","GuiLoadIcons")
		->args({"fileName","loadIconsName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:822:18
	makeExtern< char ** (*)(const unsigned char *,int,bool) , GuiLoadIconsFromMemory , SimNode_ExtFuncCall >(lib,"GuiLoadIconsFromMemory","GuiLoadIconsFromMemory")
		->args({"fileData","dataSize","loadIconsName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:823:16
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_GuiDrawIcon , SimNode_ExtFuncCall >(lib,"GuiDrawIcon","das::_rlw_GuiDrawIcon")
		->args({"iconId","posX","posY","pixelSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

