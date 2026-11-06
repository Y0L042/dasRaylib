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
void Module_dasRaylib::initFunctions_20() {
// from raygui.h:827:15
	makeExtern< int (*)(const char *) , GuiGetTextWidth , SimNode_ExtFuncCall >(lib,"GuiGetTextWidth","GuiGetTextWidth")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:832:15
	makeExtern< int (*)(Rectangle,const char *) , GuiWindowBox , SimNode_ExtFuncCall >(lib,"GuiWindowBox","GuiWindowBox")
		->args({"bounds","title"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:833:15
	makeExtern< int (*)(Rectangle,const char *) , GuiGroupBox , SimNode_ExtFuncCall >(lib,"GuiGroupBox","GuiGroupBox")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:834:15
	makeExtern< int (*)(Rectangle,const char *) , GuiLine , SimNode_ExtFuncCall >(lib,"GuiLine","GuiLine")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:835:15
	makeExtern< int (*)(Rectangle,const char *) , GuiPanel , SimNode_ExtFuncCall >(lib,"GuiPanel","GuiPanel")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:836:15
	makeExtern< int (*)(Rectangle,const char *,Rectangle,Vector2 *,Rectangle *) , GuiScrollPanel , SimNode_ExtFuncCall >(lib,"GuiScrollPanel","GuiScrollPanel")
		->args({"bounds","text","content","scroll","view"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:839:15
	makeExtern< int (*)(Rectangle,const char *) , GuiLabel , SimNode_ExtFuncCall >(lib,"GuiLabel","GuiLabel")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:840:15
	makeExtern< int (*)(Rectangle,const char *) , GuiButton , SimNode_ExtFuncCall >(lib,"GuiButton","GuiButton")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:841:15
	makeExtern< int (*)(Rectangle,const char *) , GuiLabelButton , SimNode_ExtFuncCall >(lib,"GuiLabelButton","GuiLabelButton")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:842:15
	makeExtern< int (*)(Rectangle,const char *,bool *) , GuiToggle , SimNode_ExtFuncCall >(lib,"GuiToggle","GuiToggle")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:843:15
	makeExtern< int (*)(Rectangle,const char *,int *) , GuiToggleGroup , SimNode_ExtFuncCall >(lib,"GuiToggleGroup","GuiToggleGroup")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:844:15
	makeExtern< int (*)(Rectangle,const char *,int *) , GuiToggleSlider , SimNode_ExtFuncCall >(lib,"GuiToggleSlider","GuiToggleSlider")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:845:15
	makeExtern< int (*)(Rectangle,const char *,bool *) , GuiCheckBox , SimNode_ExtFuncCall >(lib,"GuiCheckBox","GuiCheckBox")
		->args({"bounds","text","checked"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:846:15
	makeExtern< int (*)(Rectangle,const char *,int *) , GuiComboBox , SimNode_ExtFuncCall >(lib,"GuiComboBox","GuiComboBox")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:848:15
	makeExtern< int (*)(Rectangle,const char *,int *,bool) , GuiDropdownBox , SimNode_ExtFuncCall >(lib,"GuiDropdownBox","GuiDropdownBox")
		->args({"bounds","text","active","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:849:15
	makeExtern< int (*)(Rectangle,const char *,int *,int,int,bool) , GuiSpinner , SimNode_ExtFuncCall >(lib,"GuiSpinner","GuiSpinner")
		->args({"bounds","text","value","minValue","maxValue","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:850:15
	makeExtern< int (*)(Rectangle,const char *,int *,int,int,bool) , GuiValueBox , SimNode_ExtFuncCall >(lib,"GuiValueBox","GuiValueBox")
		->args({"bounds","text","value","minValue","maxValue","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:851:15
	makeExtern< int (*)(Rectangle,const char *,char *,float *,bool) , GuiValueBoxFloat , SimNode_ExtFuncCall >(lib,"GuiValueBoxFloat","GuiValueBoxFloat")
		->args({"bounds","text","textValue","value","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:852:15
	makeExtern< int (*)(Rectangle,char *,int,bool) , GuiTextBox , SimNode_ExtFuncCall >(lib,"GuiTextBox","GuiTextBox")
		->args({"bounds","text","textSize","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:854:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float *,float,float) , GuiSlider , SimNode_ExtFuncCall >(lib,"GuiSlider","GuiSlider")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:855:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float *,float,float) , GuiSliderBar , SimNode_ExtFuncCall >(lib,"GuiSliderBar","GuiSliderBar")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:856:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float *,float,float) , GuiProgressBar , SimNode_ExtFuncCall >(lib,"GuiProgressBar","GuiProgressBar")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:857:15
	makeExtern< int (*)(Rectangle,const char *) , GuiStatusBar , SimNode_ExtFuncCall >(lib,"GuiStatusBar","GuiStatusBar")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:858:15
	makeExtern< int (*)(Rectangle,const char *) , GuiDummyRec , SimNode_ExtFuncCall >(lib,"GuiDummyRec","GuiDummyRec")
		->args({"bounds","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:859:15
	makeExtern< int (*)(Rectangle,const char *,float,int,Vector2 *) , GuiGrid , SimNode_ExtFuncCall >(lib,"GuiGrid","GuiGrid")
		->args({"bounds","text","spacing","subdivs","mouseCell"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:862:15
	makeExtern< int (*)(Rectangle,const char *,int *,int *) , GuiListView , SimNode_ExtFuncCall >(lib,"GuiListView","GuiListView")
		->args({"bounds","text","scrollIndex","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:863:15
	makeExtern< int (*)(Rectangle,char **,int,int *,int *,int *) , GuiListViewEx , SimNode_ExtFuncCall >(lib,"GuiListViewEx","GuiListViewEx")
		->args({"bounds","text","count","scrollIndex","active","focus"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:864:15
	makeExtern< int (*)(Rectangle,const char *,int *,int *) , GuiTabBar , SimNode_ExtFuncCall >(lib,"GuiTabBar","GuiTabBar")
		->args({"bounds","text","hscroll","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:865:15
	makeExtern< int (*)(Rectangle,char **,int,int *,int *,int *) , GuiTabBarEx , SimNode_ExtFuncCall >(lib,"GuiTabBarEx","GuiTabBarEx")
		->args({"bounds","text","count","hscroll","active","focus"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:866:15
	makeExtern< int (*)(Rectangle,const char *,const char *,const char *,int *) , GuiMessageBox , SimNode_ExtFuncCall >(lib,"GuiMessageBox","GuiMessageBox")
		->args({"bounds","title","message","btnText","btnActive"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:867:15
	makeExtern< int (*)(Rectangle,const char *,const char *,char *,int,const char *,int *,bool *) , GuiTextInputBox , SimNode_ExtFuncCall >(lib,"GuiTextInputBox","GuiTextInputBox")
		->args({"bounds","title","message","text","textSize","btnText","btnActive","secretViewActive"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:868:15
	makeExtern< int (*)(Rectangle,const char *,Color *) , GuiColorPicker , SimNode_ExtFuncCall >(lib,"GuiColorPicker","GuiColorPicker")
		->args({"bounds","text","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:869:15
	makeExtern< int (*)(Rectangle,const char *,Color *) , GuiColorPanel , SimNode_ExtFuncCall >(lib,"GuiColorPanel","GuiColorPanel")
		->args({"bounds","text","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:870:15
	makeExtern< int (*)(Rectangle,const char *,float *) , GuiColorBarAlpha , SimNode_ExtFuncCall >(lib,"GuiColorBarAlpha","GuiColorBarAlpha")
		->args({"bounds","text","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:871:15
	makeExtern< int (*)(Rectangle,const char *,float *) , GuiColorBarHue , SimNode_ExtFuncCall >(lib,"GuiColorBarHue","GuiColorBarHue")
		->args({"bounds","text","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:872:15
	makeExtern< int (*)(Rectangle,const char *,Vector3 *) , GuiColorPickerHSV , SimNode_ExtFuncCall >(lib,"GuiColorPickerHSV","GuiColorPickerHSV")
		->args({"bounds","text","colorHsv"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:873:15
	makeExtern< int (*)(Rectangle,const char *,Vector3 *) , GuiColorPanelHSV , SimNode_ExtFuncCall >(lib,"GuiColorPanelHSV","GuiColorPanelHSV")
		->args({"bounds","text","colorHsv"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

