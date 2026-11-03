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
void Module_dasRaylib::initFunctions_8() {
// from raylib.h:1428:12
	makeExtern< void (*)(Image *,Rectangle,float4) , _rlw_ImageDrawRectangleRec , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleRec","das::_rlw_ImageDrawRectangleRec")
		->args({"dst","rec","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1429:12
	makeExtern< void (*)(Image *,Rectangle,int,float4) , _rlw_ImageDrawRectangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLines","das::_rlw_ImageDrawRectangleLines")
		->args({"dst","rec","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1430:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4) , _rlw_ImageDrawTriangle , SimNode_ExtFuncCall >(lib,"ImageDrawTriangle","das::_rlw_ImageDrawTriangle")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1431:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4,float4,float4) , _rlw_ImageDrawTriangleEx , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleEx","das::_rlw_ImageDrawTriangleEx")
		->args({"dst","v1","v2","v3","c1","c2","c3"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1432:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4) , _rlw_ImageDrawTriangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleLines","das::_rlw_ImageDrawTriangleLines")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1433:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawTriangleFan , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleFan","das::_rlw_ImageDrawTriangleFan")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1434:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawTriangleStrip , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleStrip","das::_rlw_ImageDrawTriangleStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1435:12
	makeExtern< void (*)(Image *,Image,Rectangle,Rectangle,float4) , _rlw_ImageDraw , SimNode_ExtFuncCall >(lib,"ImageDraw","das::_rlw_ImageDraw")
		->args({"dst","src","srcRec","dstRec","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1436:12
	makeExtern< void (*)(Image *,const char *,int,int,int,float4) , _rlw_ImageDrawText , SimNode_ExtFuncCall >(lib,"ImageDrawText","das::_rlw_ImageDrawText")
		->args({"dst","text","posX","posY","fontSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1437:12
	makeExtern< void (*)(Image *,Font,const char *,Vector2,float,float,float4) , _rlw_ImageDrawTextEx , SimNode_ExtFuncCall >(lib,"ImageDrawTextEx","das::_rlw_ImageDrawTextEx")
		->args({"dst","font","text","position","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1441:17
	makeExtern< Texture (*)(const char *) , LoadTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadTexture","LoadTexture")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1442:17
	makeExtern< Texture (*)(Image) , LoadTextureFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadTextureFromImage","LoadTextureFromImage")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1443:22
	makeExtern< Texture (*)(Image,int) , LoadTextureCubemap , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadTextureCubemap","LoadTextureCubemap")
		->args({"image","layout"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1444:23
	makeExtern< RenderTexture (*)(int,int) , LoadRenderTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadRenderTexture","LoadRenderTexture")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1445:12
	makeExtern< bool (*)(Texture) , IsTextureValid , SimNode_ExtFuncCall >(lib,"IsTextureValid","IsTextureValid")
		->args({"texture"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1446:12
	makeExtern< void (*)(Texture) , UnloadTexture , SimNode_ExtFuncCall >(lib,"UnloadTexture","UnloadTexture")
		->args({"texture"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1447:12
	makeExtern< bool (*)(RenderTexture) , IsRenderTextureValid , SimNode_ExtFuncCall >(lib,"IsRenderTextureValid","IsRenderTextureValid")
		->args({"target"})
		->arg_type(0,makeType<const RenderTexture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1448:12
	makeExtern< void (*)(RenderTexture) , UnloadRenderTexture , SimNode_ExtFuncCall >(lib,"UnloadRenderTexture","UnloadRenderTexture")
		->args({"target"})
		->arg_type(0,makeType<const RenderTexture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1449:12
	makeExtern< void (*)(Texture,const void *) , UpdateTexture , SimNode_ExtFuncCall >(lib,"UpdateTexture","UpdateTexture")
		->args({"texture","pixels"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1450:12
	makeExtern< void (*)(Texture,Rectangle,const void *) , UpdateTextureRec , SimNode_ExtFuncCall >(lib,"UpdateTextureRec","UpdateTextureRec")
		->args({"texture","rec","pixels"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1453:12
	makeExtern< void (*)(Texture *) , GenTextureMipmaps , SimNode_ExtFuncCall >(lib,"GenTextureMipmaps","GenTextureMipmaps")
		->args({"texture"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1454:12
	makeExtern< void (*)(Texture,int) , SetTextureFilter , SimNode_ExtFuncCall >(lib,"SetTextureFilter","SetTextureFilter")
		->args({"texture","filter"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1455:12
	makeExtern< void (*)(Texture,int) , SetTextureWrap , SimNode_ExtFuncCall >(lib,"SetTextureWrap","SetTextureWrap")
		->args({"texture","wrap"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1458:12
	makeExtern< void (*)(Texture,int,int,float4) , _rlw_DrawTexture , SimNode_ExtFuncCall >(lib,"DrawTexture","das::_rlw_DrawTexture")
		->args({"texture","posX","posY","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1459:12
	makeExtern< void (*)(Texture,Vector2,float4) , _rlw_DrawTextureV , SimNode_ExtFuncCall >(lib,"DrawTextureV","das::_rlw_DrawTextureV")
		->args({"texture","position","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1460:12
	makeExtern< void (*)(Texture,Vector2,float,float,float4) , _rlw_DrawTextureEx , SimNode_ExtFuncCall >(lib,"DrawTextureEx","das::_rlw_DrawTextureEx")
		->args({"texture","position","rotation","scale","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1461:12
	makeExtern< void (*)(Texture,Rectangle,Vector2,float4) , _rlw_DrawTextureRec , SimNode_ExtFuncCall >(lib,"DrawTextureRec","das::_rlw_DrawTextureRec")
		->args({"texture","source","position","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1462:12
	makeExtern< void (*)(Texture,Rectangle,Rectangle,Vector2,float,float4) , _rlw_DrawTexturePro , SimNode_ExtFuncCall >(lib,"DrawTexturePro","das::_rlw_DrawTexturePro")
		->args({"texture","source","dest","origin","rotation","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1463:12
	makeExtern< void (*)(Texture,NPatchInfo,Rectangle,Vector2,float,float4) , _rlw_DrawTextureNPatch , SimNode_ExtFuncCall >(lib,"DrawTextureNPatch","das::_rlw_DrawTextureNPatch")
		->args({"texture","nPatchInfo","dest","origin","rotation","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const NPatchInfo>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1466:12
	makeExtern< bool (*)(float4,float4) , _rlw_ColorIsEqual , SimNode_ExtFuncCall >(lib,"ColorIsEqual","das::_rlw_ColorIsEqual")
		->args({"col1","col2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1467:13
	makeExtern< float4 (*)(float4,float) , _rlw_Fade , SimNode_ExtFuncCall >(lib,"Fade","das::_rlw_Fade")
		->args({"color","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1468:11
	makeExtern< int (*)(float4) , _rlw_ColorToInt , SimNode_ExtFuncCall >(lib,"ColorToInt","das::_rlw_ColorToInt")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1469:15
	makeExtern< Vector4 (*)(float4) , _rlw_ColorNormalize , SimNode_ExtFuncCall >(lib,"ColorNormalize","das::_rlw_ColorNormalize")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1470:13
	makeExtern< float4 (*)(Vector4) , _rlw_ColorFromNormalized , SimNode_ExtFuncCall >(lib,"ColorFromNormalized","das::_rlw_ColorFromNormalized")
		->args({"normalized"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1471:15
	makeExtern< Vector3 (*)(float4) , _rlw_ColorToHSV , SimNode_ExtFuncCall >(lib,"ColorToHSV","das::_rlw_ColorToHSV")
		->args({"color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1472:13
	makeExtern< float4 (*)(float,float,float) , _rlw_ColorFromHSV , SimNode_ExtFuncCall >(lib,"ColorFromHSV","das::_rlw_ColorFromHSV")
		->args({"hue","saturation","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1473:13
	makeExtern< float4 (*)(float4,float4) , _rlw_ColorTint , SimNode_ExtFuncCall >(lib,"ColorTint","das::_rlw_ColorTint")
		->args({"color","tint"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1474:13
	makeExtern< float4 (*)(float4,float) , _rlw_ColorBrightness , SimNode_ExtFuncCall >(lib,"ColorBrightness","das::_rlw_ColorBrightness")
		->args({"color","factor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1475:13
	makeExtern< float4 (*)(float4,float) , _rlw_ColorContrast , SimNode_ExtFuncCall >(lib,"ColorContrast","das::_rlw_ColorContrast")
		->args({"color","contrast"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1476:13
	makeExtern< float4 (*)(float4,float) , _rlw_ColorAlpha , SimNode_ExtFuncCall >(lib,"ColorAlpha","das::_rlw_ColorAlpha")
		->args({"color","alpha"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1477:13
	makeExtern< float4 (*)(float4,float4,float4) , _rlw_ColorAlphaBlend , SimNode_ExtFuncCall >(lib,"ColorAlphaBlend","das::_rlw_ColorAlphaBlend")
		->args({"dst","src","tint"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1478:13
	makeExtern< float4 (*)(float4,float4,float) , _rlw_ColorLerp , SimNode_ExtFuncCall >(lib,"ColorLerp","das::_rlw_ColorLerp")
		->args({"color1","color2","factor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1479:13
	makeExtern< float4 (*)(unsigned int) , _rlw_GetColor , SimNode_ExtFuncCall >(lib,"GetColor","das::_rlw_GetColor")
		->args({"hexValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1480:13
	makeExtern< float4 (*)(void *,int) , _rlw_GetPixelColor , SimNode_ExtFuncCall >(lib,"GetPixelColor","das::_rlw_GetPixelColor")
		->args({"srcPtr","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1481:12
	makeExtern< void (*)(void *,float4,int) , _rlw_SetPixelColor , SimNode_ExtFuncCall >(lib,"SetPixelColor","das::_rlw_SetPixelColor")
		->args({"dstPtr","color","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1482:11
	makeExtern< int (*)(int,int,int) , GetPixelDataSize , SimNode_ExtFuncCall >(lib,"GetPixelDataSize","GetPixelDataSize")
		->args({"width","height","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1489:12
	makeExtern< Font (*)() , GetFontDefault , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetFontDefault","GetFontDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1490:12
	makeExtern< Font (*)(const char *) , LoadFont , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFont","LoadFont")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1491:12
	makeExtern< Font (*)(const char *,int,const int *,int) , LoadFontEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontEx","LoadFontEx")
		->args({"fileName","fontSize","codepoints","codepointCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1492:12
	makeExtern< Font (*)(Image,float4,int) , _rlw_LoadFontFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontFromImage","das::_rlw_LoadFontFromImage")
		->args({"image","key","firstChar"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

