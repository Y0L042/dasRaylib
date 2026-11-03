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
void Module_dasRaylib::initFunctions_9() {
// from raylib.h:1493:12
	makeExtern< Font (*)(const char *,const unsigned char *,int,int,const int *,int) , LoadFontFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontFromMemory","LoadFontFromMemory")
		->args({"fileType","fileData","dataSize","fontSize","codepoints","codepointCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1494:12
	makeExtern< bool (*)(Font) , IsFontValid , SimNode_ExtFuncCall >(lib,"IsFontValid","IsFontValid")
		->args({"font"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1495:18
	makeExtern< GlyphInfo * (*)(const unsigned char *,int,int,const int *,int,int,int *) , LoadFontData , SimNode_ExtFuncCall >(lib,"LoadFontData","LoadFontData")
		->args({"fileData","dataSize","fontSize","codepoints","codepointCount","type","glyphCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1496:13
	makeExtern< Image (*)(const GlyphInfo *,Rectangle **,int,int,int,int) , GenImageFontAtlas , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageFontAtlas","GenImageFontAtlas")
		->args({"glyphs","glyphRecs","glyphCount","fontSize","padding","packMethod"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1497:12
	makeExtern< void (*)(GlyphInfo *,int) , UnloadFontData , SimNode_ExtFuncCall >(lib,"UnloadFontData","UnloadFontData")
		->args({"glyphs","glyphCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1498:12
	makeExtern< void (*)(Font) , UnloadFont , SimNode_ExtFuncCall >(lib,"UnloadFont","UnloadFont")
		->args({"font"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1499:12
	makeExtern< bool (*)(Font,const char *) , ExportFontAsCode , SimNode_ExtFuncCall >(lib,"ExportFontAsCode","ExportFontAsCode")
		->args({"font","fileName"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1502:12
	makeExtern< void (*)(int,int) , DrawFPS , SimNode_ExtFuncCall >(lib,"DrawFPS","DrawFPS")
		->args({"posX","posY"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1503:12
	makeExtern< void (*)(const char *,int,int,int,Color) , DrawText , SimNode_ExtFuncCall >(lib,"DrawText","DrawText")
		->args({"text","posX","posY","fontSize","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1504:12
	makeExtern< void (*)(Font,const char *,Vector2,float,float,Color) , DrawTextEx , SimNode_ExtFuncCall >(lib,"DrawTextEx","DrawTextEx")
		->args({"font","text","position","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1505:12
	makeExtern< void (*)(Font,const char *,Vector2,Vector2,float,float,float,Color) , DrawTextPro , SimNode_ExtFuncCall >(lib,"DrawTextPro","DrawTextPro")
		->args({"font","text","position","origin","rotation","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(7,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1506:12
	makeExtern< void (*)(Font,int,Vector2,float,Color) , DrawTextCodepoint , SimNode_ExtFuncCall >(lib,"DrawTextCodepoint","DrawTextCodepoint")
		->args({"font","codepoint","position","fontSize","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1507:12
	makeExtern< void (*)(Font,const int *,int,Vector2,float,float,Color) , DrawTextCodepoints , SimNode_ExtFuncCall >(lib,"DrawTextCodepoints","DrawTextCodepoints")
		->args({"font","codepoints","codepointCount","position","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(6,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1510:12
	makeExtern< void (*)(int) , SetTextLineSpacing , SimNode_ExtFuncCall >(lib,"SetTextLineSpacing","SetTextLineSpacing")
		->args({"spacing"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1511:11
	makeExtern< int (*)(const char *,int) , MeasureText , SimNode_ExtFuncCall >(lib,"MeasureText","MeasureText")
		->args({"text","fontSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1512:15
	makeExtern< Vector2 (*)(Font,const char *,float,float) , MeasureTextEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MeasureTextEx","MeasureTextEx")
		->args({"font","text","fontSize","spacing"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1513:15
	makeExtern< Vector2 (*)(Font,const int *,int,float,float) , MeasureTextCodepoints , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MeasureTextCodepoints","MeasureTextCodepoints")
		->args({"font","codepoints","length","fontSize","spacing"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1514:11
	makeExtern< int (*)(Font,int) , GetGlyphIndex , SimNode_ExtFuncCall >(lib,"GetGlyphIndex","GetGlyphIndex")
		->args({"font","codepoint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1515:17
	makeExtern< GlyphInfo (*)(Font,int) , GetGlyphInfo , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetGlyphInfo","GetGlyphInfo")
		->args({"font","codepoint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1516:17
	makeExtern< Rectangle (*)(Font,int) , GetGlyphAtlasRec , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetGlyphAtlasRec","GetGlyphAtlasRec")
		->args({"font","codepoint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1519:13
	makeExtern< char * (*)(const int *,int) , LoadUTF8 , SimNode_ExtFuncCall >(lib,"LoadUTF8","LoadUTF8")
		->args({"codepoints","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1520:12
	makeExtern< void (*)(char *) , UnloadUTF8 , SimNode_ExtFuncCall >(lib,"UnloadUTF8","UnloadUTF8")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1521:12
	makeExtern< int * (*)(const char *,int *) , LoadCodepoints , SimNode_ExtFuncCall >(lib,"LoadCodepoints","LoadCodepoints")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1522:12
	makeExtern< void (*)(int *) , UnloadCodepoints , SimNode_ExtFuncCall >(lib,"UnloadCodepoints","UnloadCodepoints")
		->args({"codepoints"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1523:11
	makeExtern< int (*)(const char *) , GetCodepointCount , SimNode_ExtFuncCall >(lib,"GetCodepointCount","GetCodepointCount")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1524:11
	makeExtern< int (*)(const char *,int *) , GetCodepoint , SimNode_ExtFuncCall >(lib,"GetCodepoint","GetCodepoint")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1525:11
	makeExtern< int (*)(const char *,int *) , GetCodepointNext , SimNode_ExtFuncCall >(lib,"GetCodepointNext","GetCodepointNext")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1526:11
	makeExtern< int (*)(const char *,int *) , GetCodepointPrevious , SimNode_ExtFuncCall >(lib,"GetCodepointPrevious","GetCodepointPrevious")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1527:19
	makeExtern< const char * (*)(int,int *) , CodepointToUTF8 , SimNode_ExtFuncCall >(lib,"CodepointToUTF8","CodepointToUTF8")
		->args({"codepoint","utf8Size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1532:14
	makeExtern< char ** (*)(const char *,int *) , LoadTextLines , SimNode_ExtFuncCall >(lib,"LoadTextLines","LoadTextLines")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1533:12
	makeExtern< void (*)(char **,int) , UnloadTextLines , SimNode_ExtFuncCall >(lib,"UnloadTextLines","UnloadTextLines")
		->args({"text","lineCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1534:11
	makeExtern< int (*)(char *,const char *) , TextCopy , SimNode_ExtFuncCall >(lib,"TextCopy","TextCopy")
		->args({"dst","src"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1535:12
	makeExtern< bool (*)(const char *,const char *) , TextIsEqual , SimNode_ExtFuncCall >(lib,"TextIsEqual","TextIsEqual")
		->args({"text1","text2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1536:20
	makeExtern< unsigned int (*)(const char *) , TextLength , SimNode_ExtFuncCall >(lib,"TextLength","TextLength")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1538:19
	makeExtern< const char * (*)(const char *,int,int) , TextSubtext , SimNode_ExtFuncCall >(lib,"TextSubtext","TextSubtext")
		->args({"text","position","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1539:19
	makeExtern< const char * (*)(const char *) , TextRemoveSpaces , SimNode_ExtFuncCall >(lib,"TextRemoveSpaces","TextRemoveSpaces")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1540:13
	makeExtern< char * (*)(const char *,const char *,const char *) , GetTextBetween , SimNode_ExtFuncCall >(lib,"GetTextBetween","GetTextBetween")
		->args({"text","begin","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1541:13
	makeExtern< char * (*)(const char *,const char *,const char *) , TextReplace , SimNode_ExtFuncCall >(lib,"TextReplace","TextReplace")
		->args({"text","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1542:13
	makeExtern< char * (*)(const char *,const char *,const char *) , TextReplaceAlloc , SimNode_ExtFuncCall >(lib,"TextReplaceAlloc","TextReplaceAlloc")
		->args({"text","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1543:13
	makeExtern< char * (*)(const char *,const char *,const char *,const char *) , TextReplaceBetween , SimNode_ExtFuncCall >(lib,"TextReplaceBetween","TextReplaceBetween")
		->args({"text","begin","end","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1544:13
	makeExtern< char * (*)(const char *,const char *,const char *,const char *) , TextReplaceBetweenAlloc , SimNode_ExtFuncCall >(lib,"TextReplaceBetweenAlloc","TextReplaceBetweenAlloc")
		->args({"text","begin","end","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1545:13
	makeExtern< char * (*)(const char *,const char *,int) , TextInsert , SimNode_ExtFuncCall >(lib,"TextInsert","TextInsert")
		->args({"text","insert","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1546:13
	makeExtern< char * (*)(const char *,const char *,int) , TextInsertAlloc , SimNode_ExtFuncCall >(lib,"TextInsertAlloc","TextInsertAlloc")
		->args({"text","insert","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1547:13
	makeExtern< char * (*)(char **,int,const char *) , TextJoin , SimNode_ExtFuncCall >(lib,"TextJoin","TextJoin")
		->args({"textList","count","delimiter"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1548:14
	makeExtern< char ** (*)(const char *,char,int *) , TextSplit , SimNode_ExtFuncCall >(lib,"TextSplit","TextSplit")
		->args({"text","delimiter","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1549:12
	makeExtern< void (*)(char *,const char *,int *) , TextAppend , SimNode_ExtFuncCall >(lib,"TextAppend","TextAppend")
		->args({"text","append","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1550:11
	makeExtern< int (*)(const char *,const char *) , TextFindIndex , SimNode_ExtFuncCall >(lib,"TextFindIndex","TextFindIndex")
		->args({"text","search"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1551:13
	makeExtern< char * (*)(const char *) , TextToUpper , SimNode_ExtFuncCall >(lib,"TextToUpper","TextToUpper")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1552:13
	makeExtern< char * (*)(const char *) , TextToLower , SimNode_ExtFuncCall >(lib,"TextToLower","TextToLower")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1553:13
	makeExtern< char * (*)(const char *) , TextToPascal , SimNode_ExtFuncCall >(lib,"TextToPascal","TextToPascal")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

