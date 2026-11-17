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
void Module_dasRaylib::initFunctions_11() {
// from raylib.h:1527:12
	makeExtern< void (*)(Font,int,Vector2,float,float4) , _rlw_DrawTextCodepoint , SimNode_ExtFuncCall >(lib,"DrawTextCodepoint","das::_rlw_DrawTextCodepoint")
		->args({"font","codepoint","position","fontSize","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1528:12
	makeExtern< void (*)(Font,const int *,int,Vector2,float,float,float4) , _rlw_DrawTextCodepoints , SimNode_ExtFuncCall >(lib,"DrawTextCodepoints","das::_rlw_DrawTextCodepoints")
		->args({"font","codepoints","codepointCount","position","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1531:12
	makeExtern< void (*)(int) , SetTextLineSpacing , SimNode_ExtFuncCall >(lib,"SetTextLineSpacing","SetTextLineSpacing")
		->args({"spacing"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1532:11
	makeExtern< int (*)(const char *,int) , MeasureText , SimNode_ExtFuncCall >(lib,"MeasureText","MeasureText")
		->args({"text","fontSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1533:15
	makeExtern< Vector2 (*)(Font,const char *,float,float) , MeasureTextEx , SimNode_ExtFuncCall >(lib,"MeasureTextEx","MeasureTextEx")
		->args({"font","text","fontSize","spacing"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1534:15
	makeExtern< Vector2 (*)(Font,const int *,int,float,float) , MeasureTextCodepoints , SimNode_ExtFuncCall >(lib,"MeasureTextCodepoints","MeasureTextCodepoints")
		->args({"font","codepoints","length","fontSize","spacing"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1535:11
	makeExtern< int (*)(Font,int) , GetGlyphIndex , SimNode_ExtFuncCall >(lib,"GetGlyphIndex","GetGlyphIndex")
		->args({"font","codepoint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1536:17
	makeExtern< GlyphInfo (*)(Font,int) , GetGlyphInfo , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetGlyphInfo","GetGlyphInfo")
		->args({"font","codepoint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1537:17
	makeExtern< Rectangle (*)(Font,int) , GetGlyphAtlasRec , SimNode_ExtFuncCall >(lib,"GetGlyphAtlasRec","GetGlyphAtlasRec")
		->args({"font","codepoint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1540:13
	makeExtern< char * (*)(const int *,int) , LoadUTF8 , SimNode_ExtFuncCall >(lib,"LoadUTF8","LoadUTF8")
		->args({"codepoints","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1541:12
	makeExtern< void (*)(char *) , UnloadUTF8 , SimNode_ExtFuncCall >(lib,"UnloadUTF8","UnloadUTF8")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1542:12
	makeExtern< int * (*)(const char *,int *) , LoadCodepoints , SimNode_ExtFuncCall >(lib,"LoadCodepoints","LoadCodepoints")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1542:12
	makeExtern< int * (*)(const char *,int32_t &) , _rlr_LoadCodepoints , SimNode_ExtFuncCall >(lib,"LoadCodepoints","das::_rlr_LoadCodepoints")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1543:12
	makeExtern< void (*)(int *) , UnloadCodepoints , SimNode_ExtFuncCall >(lib,"UnloadCodepoints","UnloadCodepoints")
		->args({"codepoints"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1544:11
	makeExtern< int (*)(const char *) , GetCodepointCount , SimNode_ExtFuncCall >(lib,"GetCodepointCount","GetCodepointCount")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1545:11
	makeExtern< int (*)(const char *,int *) , GetCodepoint , SimNode_ExtFuncCall >(lib,"GetCodepoint","GetCodepoint")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1545:11
	makeExtern< int (*)(const char *,int32_t &) , _rlr_GetCodepoint , SimNode_ExtFuncCall >(lib,"GetCodepoint","das::_rlr_GetCodepoint")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1546:11
	makeExtern< int (*)(const char *,int *) , GetCodepointNext , SimNode_ExtFuncCall >(lib,"GetCodepointNext","GetCodepointNext")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1546:11
	makeExtern< int (*)(const char *,int32_t &) , _rlr_GetCodepointNext , SimNode_ExtFuncCall >(lib,"GetCodepointNext","das::_rlr_GetCodepointNext")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1547:11
	makeExtern< int (*)(const char *,int *) , GetCodepointPrevious , SimNode_ExtFuncCall >(lib,"GetCodepointPrevious","GetCodepointPrevious")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1547:11
	makeExtern< int (*)(const char *,int32_t &) , _rlr_GetCodepointPrevious , SimNode_ExtFuncCall >(lib,"GetCodepointPrevious","das::_rlr_GetCodepointPrevious")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1548:19
	makeExtern< const char * (*)(int,int *) , CodepointToUTF8 , SimNode_ExtFuncCall >(lib,"CodepointToUTF8","CodepointToUTF8")
		->args({"codepoint","utf8Size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1548:19
	makeExtern< const char * (*)(int,int32_t &) , _rlr_CodepointToUTF8 , SimNode_ExtFuncCall >(lib,"CodepointToUTF8","das::_rlr_CodepointToUTF8")
		->args({"codepoint","utf8Size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1553:14
	makeExtern< char ** (*)(const char *,int *) , LoadTextLines , SimNode_ExtFuncCall >(lib,"LoadTextLines","LoadTextLines")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1553:14
	makeExtern< char ** (*)(const char *,int32_t &) , _rlr_LoadTextLines , SimNode_ExtFuncCall >(lib,"LoadTextLines","das::_rlr_LoadTextLines")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1554:12
	makeExtern< void (*)(char **,int) , UnloadTextLines , SimNode_ExtFuncCall >(lib,"UnloadTextLines","UnloadTextLines")
		->args({"text","lineCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1555:11
	makeExtern< int (*)(char *,const char *) , TextCopy , SimNode_ExtFuncCall >(lib,"TextCopy","TextCopy")
		->args({"dst","src"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1556:12
	makeExtern< bool (*)(const char *,const char *) , TextIsEqual , SimNode_ExtFuncCall >(lib,"TextIsEqual","TextIsEqual")
		->args({"text1","text2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1557:20
	makeExtern< unsigned int (*)(const char *) , TextLength , SimNode_ExtFuncCall >(lib,"TextLength","TextLength")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1559:19
	makeExtern< const char * (*)(const char *,int,int) , TextSubtext , SimNode_ExtFuncCall >(lib,"TextSubtext","TextSubtext")
		->args({"text","position","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1560:19
	makeExtern< const char * (*)(const char *) , TextRemoveSpaces , SimNode_ExtFuncCall >(lib,"TextRemoveSpaces","TextRemoveSpaces")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1561:13
	makeExtern< char * (*)(const char *,const char *,const char *) , GetTextBetween , SimNode_ExtFuncCall >(lib,"GetTextBetween","GetTextBetween")
		->args({"text","begin","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1562:13
	makeExtern< char * (*)(const char *,const char *,const char *) , TextReplace , SimNode_ExtFuncCall >(lib,"TextReplace","TextReplace")
		->args({"text","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1563:13
	makeExtern< char * (*)(const char *,const char *,const char *) , TextReplaceAlloc , SimNode_ExtFuncCall >(lib,"TextReplaceAlloc","TextReplaceAlloc")
		->args({"text","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1564:13
	makeExtern< char * (*)(const char *,const char *,const char *,const char *) , TextReplaceBetween , SimNode_ExtFuncCall >(lib,"TextReplaceBetween","TextReplaceBetween")
		->args({"text","begin","end","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1565:13
	makeExtern< char * (*)(const char *,const char *,const char *,const char *) , TextReplaceBetweenAlloc , SimNode_ExtFuncCall >(lib,"TextReplaceBetweenAlloc","TextReplaceBetweenAlloc")
		->args({"text","begin","end","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1566:13
	makeExtern< char * (*)(const char *,const char *,int) , TextInsert , SimNode_ExtFuncCall >(lib,"TextInsert","TextInsert")
		->args({"text","insert","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1567:13
	makeExtern< char * (*)(const char *,const char *,int) , TextInsertAlloc , SimNode_ExtFuncCall >(lib,"TextInsertAlloc","TextInsertAlloc")
		->args({"text","insert","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1568:13
	makeExtern< char * (*)(char **,int,const char *) , TextJoin , SimNode_ExtFuncCall >(lib,"TextJoin","TextJoin")
		->args({"textList","count","delimiter"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1569:14
	makeExtern< char ** (*)(const char *,char,int *) , TextSplit , SimNode_ExtFuncCall >(lib,"TextSplit","TextSplit")
		->args({"text","delimiter","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1569:14
	makeExtern< char ** (*)(const char *,char,int32_t &) , _rlr_TextSplit , SimNode_ExtFuncCall >(lib,"TextSplit","das::_rlr_TextSplit")
		->args({"text","delimiter","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1570:12
	makeExtern< void (*)(char *,const char *,int *) , TextAppend , SimNode_ExtFuncCall >(lib,"TextAppend","TextAppend")
		->args({"text","append","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1570:12
	makeExtern< void (*)(char *,const char *,int32_t &) , _rlr_TextAppend , SimNode_ExtFuncCall >(lib,"TextAppend","das::_rlr_TextAppend")
		->args({"text","append","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1571:11
	makeExtern< int (*)(const char *,const char *) , TextFindIndex , SimNode_ExtFuncCall >(lib,"TextFindIndex","TextFindIndex")
		->args({"text","search"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1572:13
	makeExtern< char * (*)(const char *) , TextToUpper , SimNode_ExtFuncCall >(lib,"TextToUpper","TextToUpper")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1573:13
	makeExtern< char * (*)(const char *) , TextToLower , SimNode_ExtFuncCall >(lib,"TextToLower","TextToLower")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1574:13
	makeExtern< char * (*)(const char *) , TextToPascal , SimNode_ExtFuncCall >(lib,"TextToPascal","TextToPascal")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1575:13
	makeExtern< char * (*)(const char *) , TextToSnake , SimNode_ExtFuncCall >(lib,"TextToSnake","TextToSnake")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1576:13
	makeExtern< char * (*)(const char *) , TextToCamel , SimNode_ExtFuncCall >(lib,"TextToCamel","TextToCamel")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1577:11
	makeExtern< int (*)(const char *) , TextToInteger , SimNode_ExtFuncCall >(lib,"TextToInteger","TextToInteger")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

