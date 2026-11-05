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
// from raylib.h:1489:11
	makeExtern< int (*)(float4) , _rlw_ColorToInt , SimNode_ExtFuncCall >(lib,"ColorToInt","das::_rlw_ColorToInt")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1490:15
	makeExtern< Vector4 (*)(float4) , _rlw_ColorNormalize , SimNode_ExtFuncCall >(lib,"ColorNormalize","das::_rlw_ColorNormalize")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1491:13
	makeExtern< float4 (*)(Vector4) , _rlw_ColorFromNormalized , SimNode_ExtFuncCall >(lib,"ColorFromNormalized","das::_rlw_ColorFromNormalized")
		->args({"normalized"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1492:15
	makeExtern< Vector3 (*)(float4) , _rlw_ColorToHSV , SimNode_ExtFuncCall >(lib,"ColorToHSV","das::_rlw_ColorToHSV")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1493:13
	makeExtern< float4 (*)(float,float,float) , _rlw_ColorFromHSV , SimNode_ExtFuncCall >(lib,"ColorFromHSV","das::_rlw_ColorFromHSV")
		->args({"hue","saturation","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1494:13
	makeExtern< float4 (*)(float4,float4) , _rlw_ColorTint , SimNode_ExtFuncCall >(lib,"ColorTint","das::_rlw_ColorTint")
		->args({"color","tint"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1495:13
	makeExtern< float4 (*)(float4,float) , _rlw_ColorBrightness , SimNode_ExtFuncCall >(lib,"ColorBrightness","das::_rlw_ColorBrightness")
		->args({"color","factor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1496:13
	makeExtern< float4 (*)(float4,float) , _rlw_ColorContrast , SimNode_ExtFuncCall >(lib,"ColorContrast","das::_rlw_ColorContrast")
		->args({"color","contrast"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1497:13
	makeExtern< float4 (*)(float4,float) , _rlw_ColorAlpha , SimNode_ExtFuncCall >(lib,"ColorAlpha","das::_rlw_ColorAlpha")
		->args({"color","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1498:13
	makeExtern< float4 (*)(float4,float4,float4) , _rlw_ColorAlphaBlend , SimNode_ExtFuncCall >(lib,"ColorAlphaBlend","das::_rlw_ColorAlphaBlend")
		->args({"dst","src","tint"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1499:13
	makeExtern< float4 (*)(float4,float4,float) , _rlw_ColorLerp , SimNode_ExtFuncCall >(lib,"ColorLerp","das::_rlw_ColorLerp")
		->args({"color1","color2","factor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1500:13
	makeExtern< float4 (*)(unsigned int) , _rlw_GetColor , SimNode_ExtFuncCall >(lib,"GetColor","das::_rlw_GetColor")
		->args({"hexValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1501:13
	makeExtern< float4 (*)(const void *,int) , _rlw_GetPixelColor , SimNode_ExtFuncCall >(lib,"GetPixelColor","das::_rlw_GetPixelColor")
		->args({"srcPtr","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1502:12
	makeExtern< void (*)(void *,float4,int) , _rlw_SetPixelColor , SimNode_ExtFuncCall >(lib,"SetPixelColor","das::_rlw_SetPixelColor")
		->args({"dstPtr","color","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1503:11
	makeExtern< int (*)(int,int,int) , GetPixelDataSize , SimNode_ExtFuncCall >(lib,"GetPixelDataSize","GetPixelDataSize")
		->args({"width","height","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1510:12
	makeExtern< Font (*)() , GetFontDefault , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetFontDefault","GetFontDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1511:12
	makeExtern< Font (*)(const char *) , LoadFont , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFont","LoadFont")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1512:12
	makeExtern< Font (*)(const char *,int,const int *,int) , LoadFontEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontEx","LoadFontEx")
		->args({"fileName","fontSize","codepoints","codepointCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1513:12
	makeExtern< Font (*)(Image,float4,int) , _rlw_LoadFontFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontFromImage","das::_rlw_LoadFontFromImage")
		->args({"image","key","firstChar"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1514:12
	makeExtern< Font (*)(const char *,const unsigned char *,int,int,const int *,int) , LoadFontFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontFromMemory","LoadFontFromMemory")
		->args({"fileType","fileData","dataSize","fontSize","codepoints","codepointCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1515:12
	makeExtern< bool (*)(Font) , IsFontValid , SimNode_ExtFuncCall >(lib,"IsFontValid","IsFontValid")
		->args({"font"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1516:18
	makeExtern< GlyphInfo * (*)(const unsigned char *,int,int,const int *,int,int,int *) , LoadFontData , SimNode_ExtFuncCall >(lib,"LoadFontData","LoadFontData")
		->args({"fileData","dataSize","fontSize","codepoints","codepointCount","type","glyphCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1517:13
	makeExtern< Image (*)(const GlyphInfo *,Rectangle **,int,int,int,int) , GenImageFontAtlas , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageFontAtlas","GenImageFontAtlas")
		->args({"glyphs","glyphRecs","glyphCount","fontSize","padding","packMethod"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1518:12
	makeExtern< void (*)(GlyphInfo *,int) , UnloadFontData , SimNode_ExtFuncCall >(lib,"UnloadFontData","UnloadFontData")
		->args({"glyphs","glyphCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1519:12
	makeExtern< void (*)(Font) , UnloadFont , SimNode_ExtFuncCall >(lib,"UnloadFont","UnloadFont")
		->args({"font"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1520:12
	makeExtern< bool (*)(Font,const char *) , ExportFontAsCode , SimNode_ExtFuncCall >(lib,"ExportFontAsCode","ExportFontAsCode")
		->args({"font","fileName"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1523:12
	makeExtern< void (*)(int,int) , DrawFPS , SimNode_ExtFuncCall >(lib,"DrawFPS","DrawFPS")
		->args({"posX","posY"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1524:12
	makeExtern< void (*)(const char *,int,int,int,float4) , _rlw_DrawText , SimNode_ExtFuncCall >(lib,"DrawText","das::_rlw_DrawText")
		->args({"text","posX","posY","fontSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1525:12
	makeExtern< void (*)(Font,const char *,Vector2,float,float,float4) , _rlw_DrawTextEx , SimNode_ExtFuncCall >(lib,"DrawTextEx","das::_rlw_DrawTextEx")
		->args({"font","text","position","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1526:12
	makeExtern< void (*)(Font,const char *,Vector2,Vector2,float,float,float,float4) , _rlw_DrawTextPro , SimNode_ExtFuncCall >(lib,"DrawTextPro","das::_rlw_DrawTextPro")
		->args({"font","text","position","origin","rotation","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
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
// from raylib.h:1546:11
	makeExtern< int (*)(const char *,int *) , GetCodepointNext , SimNode_ExtFuncCall >(lib,"GetCodepointNext","GetCodepointNext")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1547:11
	makeExtern< int (*)(const char *,int *) , GetCodepointPrevious , SimNode_ExtFuncCall >(lib,"GetCodepointPrevious","GetCodepointPrevious")
		->args({"text","codepointSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1548:19
	makeExtern< const char * (*)(int,int *) , CodepointToUTF8 , SimNode_ExtFuncCall >(lib,"CodepointToUTF8","CodepointToUTF8")
		->args({"codepoint","utf8Size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1553:14
	makeExtern< char ** (*)(const char *,int *) , LoadTextLines , SimNode_ExtFuncCall >(lib,"LoadTextLines","LoadTextLines")
		->args({"text","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1554:12
	makeExtern< void (*)(char **,int) , UnloadTextLines , SimNode_ExtFuncCall >(lib,"UnloadTextLines","UnloadTextLines")
		->args({"text","lineCount"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

