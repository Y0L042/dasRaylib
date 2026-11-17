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
void Module_dasRaylib::initFunctions_10() {
// from raylib.h:1465:23
	makeExtern< RenderTexture (*)(int,int,int) , LoadRenderTextureEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadRenderTextureEx","LoadRenderTextureEx")
		->args({"width","height","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1466:12
	makeExtern< bool (*)(Texture) , IsTextureValid , SimNode_ExtFuncCall >(lib,"IsTextureValid","IsTextureValid")
		->args({"texture"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1467:12
	makeExtern< void (*)(Texture) , UnloadTexture , SimNode_ExtFuncCall >(lib,"UnloadTexture","UnloadTexture")
		->args({"texture"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1468:12
	makeExtern< bool (*)(RenderTexture) , IsRenderTextureValid , SimNode_ExtFuncCall >(lib,"IsRenderTextureValid","IsRenderTextureValid")
		->args({"target"})
		->arg_type(0,makeType<const RenderTexture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1469:12
	makeExtern< void (*)(RenderTexture) , UnloadRenderTexture , SimNode_ExtFuncCall >(lib,"UnloadRenderTexture","UnloadRenderTexture")
		->args({"target"})
		->arg_type(0,makeType<const RenderTexture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1470:12
	makeExtern< void (*)(Texture,const void *) , UpdateTexture , SimNode_ExtFuncCall >(lib,"UpdateTexture","UpdateTexture")
		->args({"texture","pixels"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1471:12
	makeExtern< void (*)(Texture,Rectangle,const void *) , UpdateTextureRec , SimNode_ExtFuncCall >(lib,"UpdateTextureRec","UpdateTextureRec")
		->args({"texture","rec","pixels"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1474:12
	makeExtern< void (*)(Texture *) , GenTextureMipmaps , SimNode_ExtFuncCall >(lib,"GenTextureMipmaps","GenTextureMipmaps")
		->args({"texture"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1474:12
	makeExtern< void (*)(Texture &) , _rlr_GenTextureMipmaps , SimNode_ExtFuncCall >(lib,"GenTextureMipmaps","das::_rlr_GenTextureMipmaps")
		->args({"texture"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1475:12
	makeExtern< void (*)(Texture,int) , SetTextureFilter , SimNode_ExtFuncCall >(lib,"SetTextureFilter","SetTextureFilter")
		->args({"texture","filter"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1476:12
	makeExtern< void (*)(Texture,int) , SetTextureWrap , SimNode_ExtFuncCall >(lib,"SetTextureWrap","SetTextureWrap")
		->args({"texture","wrap"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1479:12
	makeExtern< void (*)(Texture,int,int,float4) , _rlw_DrawTexture , SimNode_ExtFuncCall >(lib,"DrawTexture","das::_rlw_DrawTexture")
		->args({"texture","posX","posY","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1480:12
	makeExtern< void (*)(Texture,Vector2,float4) , _rlw_DrawTextureV , SimNode_ExtFuncCall >(lib,"DrawTextureV","das::_rlw_DrawTextureV")
		->args({"texture","position","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1481:12
	makeExtern< void (*)(Texture,Vector2,float,float,float4) , _rlw_DrawTextureEx , SimNode_ExtFuncCall >(lib,"DrawTextureEx","das::_rlw_DrawTextureEx")
		->args({"texture","position","rotation","scale","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1482:12
	makeExtern< void (*)(Texture,Rectangle,Vector2,float4) , _rlw_DrawTextureRec , SimNode_ExtFuncCall >(lib,"DrawTextureRec","das::_rlw_DrawTextureRec")
		->args({"texture","rec","position","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1483:12
	makeExtern< void (*)(Texture,Rectangle,Rectangle,Vector2,float,float4) , _rlw_DrawTexturePro , SimNode_ExtFuncCall >(lib,"DrawTexturePro","das::_rlw_DrawTexturePro")
		->args({"texture","srcrec","dstrec","origin","rotation","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1484:12
	makeExtern< void (*)(Texture,NPatchInfo,Rectangle,Vector2,float,float4) , _rlw_DrawTextureNPatch , SimNode_ExtFuncCall >(lib,"DrawTextureNPatch","das::_rlw_DrawTextureNPatch")
		->args({"texture","nPatchInfo","dstrec","origin","rotation","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const NPatchInfo>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1487:12
	makeExtern< bool (*)(float4,float4) , _rlw_ColorIsEqual , SimNode_ExtFuncCall >(lib,"ColorIsEqual","das::_rlw_ColorIsEqual")
		->args({"col1","col2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1488:13
	makeExtern< float4 (*)(float4,float) , _rlw_Fade , SimNode_ExtFuncCall >(lib,"Fade","das::_rlw_Fade")
		->args({"color","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
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
// from raylib.h:1516:18
	makeExtern< GlyphInfo * (*)(const unsigned char *,int,int,const int *,int,int,int32_t &) , _rlr_LoadFontData , SimNode_ExtFuncCall >(lib,"LoadFontData","das::_rlr_LoadFontData")
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
}
}

