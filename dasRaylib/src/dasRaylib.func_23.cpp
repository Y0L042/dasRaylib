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
void Module_dasRaylib::initFunctions_23() {
// from raygui.h:865:15
	makeExtern< int (*)(Rectangle,char **,int,int *,int *,int *) , GuiTabBarEx , SimNode_ExtFuncCall >(lib,"GuiTabBarEx","GuiTabBarEx")
		->args({"bounds","text","count","hscroll","active","focus"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:865:15
	makeExtern< int (*)(Rectangle,char **,int,int32_t &,int32_t &,int32_t &) , _rlr_GuiTabBarEx , SimNode_ExtFuncCall >(lib,"GuiTabBarEx","das::_rlr_GuiTabBarEx")
		->args({"bounds","text","count","hscroll","active","focus"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:866:15
	makeExtern< int (*)(Rectangle,const char *,const char *,const char *,int *) , GuiMessageBox , SimNode_ExtFuncCall >(lib,"GuiMessageBox","GuiMessageBox")
		->args({"bounds","title","message","btnText","btnActive"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:866:15
	makeExtern< int (*)(Rectangle,const char *,const char *,const char *,int32_t &) , _rlr_GuiMessageBox , SimNode_ExtFuncCall >(lib,"GuiMessageBox","das::_rlr_GuiMessageBox")
		->args({"bounds","title","message","btnText","btnActive"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:867:15
	makeExtern< int (*)(Rectangle,const char *,const char *,char *,int,const char *,int *,bool *) , GuiTextInputBox , SimNode_ExtFuncCall >(lib,"GuiTextInputBox","GuiTextInputBox")
		->args({"bounds","title","message","text","textSize","btnText","btnActive","secretViewActive"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:867:15
	makeExtern< int (*)(Rectangle,const char *,const char *,char *,int,const char *,int32_t &,bool &) , _rlr_GuiTextInputBox , SimNode_ExtFuncCall >(lib,"GuiTextInputBox","das::_rlr_GuiTextInputBox")
		->args({"bounds","title","message","text","textSize","btnText","btnActive","secretViewActive"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:868:15
	makeExtern< int (*)(Rectangle,const char *,Color *) , GuiColorPicker , SimNode_ExtFuncCall >(lib,"GuiColorPicker","GuiColorPicker")
		->args({"bounds","text","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:868:15
	makeExtern< int (*)(Rectangle,const char *,float4 &) , _rlr_GuiColorPicker , SimNode_ExtFuncCall >(lib,"GuiColorPicker","das::_rlr_GuiColorPicker")
		->args({"bounds","text","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:869:15
	makeExtern< int (*)(Rectangle,const char *,Color *) , GuiColorPanel , SimNode_ExtFuncCall >(lib,"GuiColorPanel","GuiColorPanel")
		->args({"bounds","text","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:869:15
	makeExtern< int (*)(Rectangle,const char *,float4 &) , _rlr_GuiColorPanel , SimNode_ExtFuncCall >(lib,"GuiColorPanel","das::_rlr_GuiColorPanel")
		->args({"bounds","text","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:870:15
	makeExtern< int (*)(Rectangle,const char *,float *) , GuiColorBarAlpha , SimNode_ExtFuncCall >(lib,"GuiColorBarAlpha","GuiColorBarAlpha")
		->args({"bounds","text","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:870:15
	makeExtern< int (*)(Rectangle,const char *,float &) , _rlr_GuiColorBarAlpha , SimNode_ExtFuncCall >(lib,"GuiColorBarAlpha","das::_rlr_GuiColorBarAlpha")
		->args({"bounds","text","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:871:15
	makeExtern< int (*)(Rectangle,const char *,float *) , GuiColorBarHue , SimNode_ExtFuncCall >(lib,"GuiColorBarHue","GuiColorBarHue")
		->args({"bounds","text","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:871:15
	makeExtern< int (*)(Rectangle,const char *,float &) , _rlr_GuiColorBarHue , SimNode_ExtFuncCall >(lib,"GuiColorBarHue","das::_rlr_GuiColorBarHue")
		->args({"bounds","text","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:872:15
	makeExtern< int (*)(Rectangle,const char *,Vector3 *) , GuiColorPickerHSV , SimNode_ExtFuncCall >(lib,"GuiColorPickerHSV","GuiColorPickerHSV")
		->args({"bounds","text","colorHsv"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:872:15
	makeExtern< int (*)(Rectangle,const char *,float3 &) , _rlr_GuiColorPickerHSV , SimNode_ExtFuncCall >(lib,"GuiColorPickerHSV","das::_rlr_GuiColorPickerHSV")
		->args({"bounds","text","colorHsv"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:873:15
	makeExtern< int (*)(Rectangle,const char *,Vector3 *) , GuiColorPanelHSV , SimNode_ExtFuncCall >(lib,"GuiColorPanelHSV","GuiColorPanelHSV")
		->args({"bounds","text","colorHsv"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:873:15
	makeExtern< int (*)(Rectangle,const char *,float3 &) , _rlr_GuiColorPanelHSV , SimNode_ExtFuncCall >(lib,"GuiColorPanelHSV","das::_rlr_GuiColorPanelHSV")
		->args({"bounds","text","colorHsv"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

