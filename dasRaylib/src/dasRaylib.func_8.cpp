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
	makeExtern< void (*)(Image *,Rectangle,Color) , ImageDrawRectangleRec , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleRec","ImageDrawRectangleRec")
		->args({"dst","rec","color"})
		->arg_type(1,makeType<const Rectangle>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1429:12
	makeExtern< void (*)(Image *,Rectangle,int,Color) , ImageDrawRectangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLines","ImageDrawRectangleLines")
		->args({"dst","rec","thick","color"})
		->arg_type(1,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1430:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,Color) , ImageDrawTriangle , SimNode_ExtFuncCall >(lib,"ImageDrawTriangle","ImageDrawTriangle")
		->args({"dst","v1","v2","v3","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1431:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,Color,Color,Color) , ImageDrawTriangleEx , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleEx","ImageDrawTriangleEx")
		->args({"dst","v1","v2","v3","c1","c2","c3"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->arg_type(6,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1432:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,Color) , ImageDrawTriangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleLines","ImageDrawTriangleLines")
		->args({"dst","v1","v2","v3","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1433:12
	makeExtern< void (*)(Image *,const Vector2 *,int,Color) , ImageDrawTriangleFan , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleFan","ImageDrawTriangleFan")
		->args({"dst","points","pointCount","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1434:12
	makeExtern< void (*)(Image *,const Vector2 *,int,Color) , ImageDrawTriangleStrip , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleStrip","ImageDrawTriangleStrip")
		->args({"dst","points","pointCount","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1435:12
	makeExtern< void (*)(Image *,Image,Rectangle,Rectangle,Color) , ImageDraw , SimNode_ExtFuncCall >(lib,"ImageDraw","ImageDraw")
		->args({"dst","src","srcRec","dstRec","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->arg_type(2,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Rectangle>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1436:12
	makeExtern< void (*)(Image *,const char *,int,int,int,Color) , ImageDrawText , SimNode_ExtFuncCall >(lib,"ImageDrawText","ImageDrawText")
		->args({"dst","text","posX","posY","fontSize","color"})
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1437:12
	makeExtern< void (*)(Image *,Font,const char *,Vector2,float,float,Color) , ImageDrawTextEx , SimNode_ExtFuncCall >(lib,"ImageDrawTextEx","ImageDrawTextEx")
		->args({"dst","font","text","position","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(6,makeType<const Color>(lib))
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
		->arg_type(1,makeType<const Rectangle>(lib))
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
	makeExtern< void (*)(Texture,int,int,Color) , DrawTexture , SimNode_ExtFuncCall >(lib,"DrawTexture","DrawTexture")
		->args({"texture","posX","posY","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1459:12
	makeExtern< void (*)(Texture,Vector2,Color) , DrawTextureV , SimNode_ExtFuncCall >(lib,"DrawTextureV","DrawTextureV")
		->args({"texture","position","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1460:12
	makeExtern< void (*)(Texture,Vector2,float,float,Color) , DrawTextureEx , SimNode_ExtFuncCall >(lib,"DrawTextureEx","DrawTextureEx")
		->args({"texture","position","rotation","scale","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1461:12
	makeExtern< void (*)(Texture,Rectangle,Vector2,Color) , DrawTextureRec , SimNode_ExtFuncCall >(lib,"DrawTextureRec","DrawTextureRec")
		->args({"texture","source","position","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1462:12
	makeExtern< void (*)(Texture,Rectangle,Rectangle,Vector2,float,Color) , DrawTexturePro , SimNode_ExtFuncCall >(lib,"DrawTexturePro","DrawTexturePro")
		->args({"texture","source","dest","origin","rotation","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->arg_type(2,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1463:12
	makeExtern< void (*)(Texture,NPatchInfo,Rectangle,Vector2,float,Color) , DrawTextureNPatch , SimNode_ExtFuncCall >(lib,"DrawTextureNPatch","DrawTextureNPatch")
		->args({"texture","nPatchInfo","dest","origin","rotation","tint"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const NPatchInfo>(lib))
		->arg_type(2,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1466:12
	makeExtern< bool (*)(Color,Color) , ColorIsEqual , SimNode_ExtFuncCall >(lib,"ColorIsEqual","ColorIsEqual")
		->args({"col1","col2"})
		->arg_type(0,makeType<const Color>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1467:13
	makeExtern< Color (*)(Color,float) , Fade , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Fade","Fade")
		->args({"color","alpha"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1468:11
	makeExtern< int (*)(Color) , ColorToInt , SimNode_ExtFuncCall >(lib,"ColorToInt","ColorToInt")
		->args({"color"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1469:15
	makeExtern< Vector4 (*)(Color) , ColorNormalize , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorNormalize","ColorNormalize")
		->args({"color"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1470:13
	makeExtern< Color (*)(Vector4) , ColorFromNormalized , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorFromNormalized","ColorFromNormalized")
		->args({"normalized"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1471:15
	makeExtern< Vector3 (*)(Color) , ColorToHSV , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorToHSV","ColorToHSV")
		->args({"color"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1472:13
	makeExtern< Color (*)(float,float,float) , ColorFromHSV , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorFromHSV","ColorFromHSV")
		->args({"hue","saturation","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1473:13
	makeExtern< Color (*)(Color,Color) , ColorTint , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorTint","ColorTint")
		->args({"color","tint"})
		->arg_type(0,makeType<const Color>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1474:13
	makeExtern< Color (*)(Color,float) , ColorBrightness , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorBrightness","ColorBrightness")
		->args({"color","factor"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1475:13
	makeExtern< Color (*)(Color,float) , ColorContrast , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorContrast","ColorContrast")
		->args({"color","contrast"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1476:13
	makeExtern< Color (*)(Color,float) , ColorAlpha , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorAlpha","ColorAlpha")
		->args({"color","alpha"})
		->arg_type(0,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1477:13
	makeExtern< Color (*)(Color,Color,Color) , ColorAlphaBlend , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorAlphaBlend","ColorAlphaBlend")
		->args({"dst","src","tint"})
		->arg_type(0,makeType<const Color>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1478:13
	makeExtern< Color (*)(Color,Color,float) , ColorLerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ColorLerp","ColorLerp")
		->args({"color1","color2","factor"})
		->arg_type(0,makeType<const Color>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1479:13
	makeExtern< Color (*)(unsigned int) , GetColor , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetColor","GetColor")
		->args({"hexValue"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1480:13
	makeExtern< Color (*)(void *,int) , GetPixelColor , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetPixelColor","GetPixelColor")
		->args({"srcPtr","format"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1481:12
	makeExtern< void (*)(void *,Color,int) , SetPixelColor , SimNode_ExtFuncCall >(lib,"SetPixelColor","SetPixelColor")
		->args({"dstPtr","color","format"})
		->arg_type(1,makeType<const Color>(lib))
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
	makeExtern< Font (*)(Image,Color,int) , LoadFontFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadFontFromImage","LoadFontFromImage")
		->args({"image","key","firstChar"})
		->arg_type(0,makeType<const Image>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

