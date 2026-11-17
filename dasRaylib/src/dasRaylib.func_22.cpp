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
void Module_dasRaylib::initFunctions_22() {
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
// from raygui.h:836:15
	makeExtern< int (*)(Rectangle,const char *,Rectangle,float2 &,float4 &) , _rlr_GuiScrollPanel , SimNode_ExtFuncCall >(lib,"GuiScrollPanel","das::_rlr_GuiScrollPanel")
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
// from raygui.h:842:15
	makeExtern< int (*)(Rectangle,const char *,bool &) , _rlr_GuiToggle , SimNode_ExtFuncCall >(lib,"GuiToggle","das::_rlr_GuiToggle")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:843:15
	makeExtern< int (*)(Rectangle,const char *,int *) , GuiToggleGroup , SimNode_ExtFuncCall >(lib,"GuiToggleGroup","GuiToggleGroup")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:843:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &) , _rlr_GuiToggleGroup , SimNode_ExtFuncCall >(lib,"GuiToggleGroup","das::_rlr_GuiToggleGroup")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:844:15
	makeExtern< int (*)(Rectangle,const char *,int *) , GuiToggleSlider , SimNode_ExtFuncCall >(lib,"GuiToggleSlider","GuiToggleSlider")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:844:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &) , _rlr_GuiToggleSlider , SimNode_ExtFuncCall >(lib,"GuiToggleSlider","das::_rlr_GuiToggleSlider")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:845:15
	makeExtern< int (*)(Rectangle,const char *,bool *) , GuiCheckBox , SimNode_ExtFuncCall >(lib,"GuiCheckBox","GuiCheckBox")
		->args({"bounds","text","checked"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:845:15
	makeExtern< int (*)(Rectangle,const char *,bool &) , _rlr_GuiCheckBox , SimNode_ExtFuncCall >(lib,"GuiCheckBox","das::_rlr_GuiCheckBox")
		->args({"bounds","text","checked"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:846:15
	makeExtern< int (*)(Rectangle,const char *,int *) , GuiComboBox , SimNode_ExtFuncCall >(lib,"GuiComboBox","GuiComboBox")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:846:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &) , _rlr_GuiComboBox , SimNode_ExtFuncCall >(lib,"GuiComboBox","das::_rlr_GuiComboBox")
		->args({"bounds","text","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:848:15
	makeExtern< int (*)(Rectangle,const char *,int *,bool) , GuiDropdownBox , SimNode_ExtFuncCall >(lib,"GuiDropdownBox","GuiDropdownBox")
		->args({"bounds","text","active","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:848:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &,bool) , _rlr_GuiDropdownBox , SimNode_ExtFuncCall >(lib,"GuiDropdownBox","das::_rlr_GuiDropdownBox")
		->args({"bounds","text","active","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:849:15
	makeExtern< int (*)(Rectangle,const char *,int *,int,int,bool) , GuiSpinner , SimNode_ExtFuncCall >(lib,"GuiSpinner","GuiSpinner")
		->args({"bounds","text","value","minValue","maxValue","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:849:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &,int,int,bool) , _rlr_GuiSpinner , SimNode_ExtFuncCall >(lib,"GuiSpinner","das::_rlr_GuiSpinner")
		->args({"bounds","text","value","minValue","maxValue","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:850:15
	makeExtern< int (*)(Rectangle,const char *,int *,int,int,bool) , GuiValueBox , SimNode_ExtFuncCall >(lib,"GuiValueBox","GuiValueBox")
		->args({"bounds","text","value","minValue","maxValue","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:850:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &,int,int,bool) , _rlr_GuiValueBox , SimNode_ExtFuncCall >(lib,"GuiValueBox","das::_rlr_GuiValueBox")
		->args({"bounds","text","value","minValue","maxValue","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:851:15
	makeExtern< int (*)(Rectangle,const char *,char *,float *,bool) , GuiValueBoxFloat , SimNode_ExtFuncCall >(lib,"GuiValueBoxFloat","GuiValueBoxFloat")
		->args({"bounds","text","textValue","value","editMode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:851:15
	makeExtern< int (*)(Rectangle,const char *,char *,float &,bool) , _rlr_GuiValueBoxFloat , SimNode_ExtFuncCall >(lib,"GuiValueBoxFloat","das::_rlr_GuiValueBoxFloat")
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
// from raygui.h:854:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float &,float,float) , _rlr_GuiSlider , SimNode_ExtFuncCall >(lib,"GuiSlider","das::_rlr_GuiSlider")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:855:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float *,float,float) , GuiSliderBar , SimNode_ExtFuncCall >(lib,"GuiSliderBar","GuiSliderBar")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:855:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float &,float,float) , _rlr_GuiSliderBar , SimNode_ExtFuncCall >(lib,"GuiSliderBar","das::_rlr_GuiSliderBar")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:856:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float *,float,float) , GuiProgressBar , SimNode_ExtFuncCall >(lib,"GuiProgressBar","GuiProgressBar")
		->args({"bounds","textLeft","textRight","value","minValue","maxValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:856:15
	makeExtern< int (*)(Rectangle,const char *,const char *,float &,float,float) , _rlr_GuiProgressBar , SimNode_ExtFuncCall >(lib,"GuiProgressBar","das::_rlr_GuiProgressBar")
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
// from raygui.h:859:15
	makeExtern< int (*)(Rectangle,const char *,float,int,float2 &) , _rlr_GuiGrid , SimNode_ExtFuncCall >(lib,"GuiGrid","das::_rlr_GuiGrid")
		->args({"bounds","text","spacing","subdivs","mouseCell"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:862:15
	makeExtern< int (*)(Rectangle,const char *,int *,int *) , GuiListView , SimNode_ExtFuncCall >(lib,"GuiListView","GuiListView")
		->args({"bounds","text","scrollIndex","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:862:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &,int32_t &) , _rlr_GuiListView , SimNode_ExtFuncCall >(lib,"GuiListView","das::_rlr_GuiListView")
		->args({"bounds","text","scrollIndex","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:863:15
	makeExtern< int (*)(Rectangle,char **,int,int *,int *,int *) , GuiListViewEx , SimNode_ExtFuncCall >(lib,"GuiListViewEx","GuiListViewEx")
		->args({"bounds","text","count","scrollIndex","active","focus"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:863:15
	makeExtern< int (*)(Rectangle,char **,int,int32_t &,int32_t &,int32_t &) , _rlr_GuiListViewEx , SimNode_ExtFuncCall >(lib,"GuiListViewEx","das::_rlr_GuiListViewEx")
		->args({"bounds","text","count","scrollIndex","active","focus"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:864:15
	makeExtern< int (*)(Rectangle,const char *,int *,int *) , GuiTabBar , SimNode_ExtFuncCall >(lib,"GuiTabBar","GuiTabBar")
		->args({"bounds","text","hscroll","active"})
		->addToModule(*this, SideEffects::worstDefault);
// from raygui.h:864:15
	makeExtern< int (*)(Rectangle,const char *,int32_t &,int32_t &) , _rlr_GuiTabBar , SimNode_ExtFuncCall >(lib,"GuiTabBar","das::_rlr_GuiTabBar")
		->args({"bounds","text","hscroll","active"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

