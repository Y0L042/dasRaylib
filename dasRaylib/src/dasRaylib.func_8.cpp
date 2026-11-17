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
// from raylib.h:1403:12
	makeExtern< void (*)(Image &,int,int,int,int,float4) , _rlr_ImageResizeCanvas , SimNode_ExtFuncCall >(lib,"ImageResizeCanvas","das::_rlr_ImageResizeCanvas")
		->args({"image","newWidth","newHeight","offsetX","offsetY","fill"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1404:12
	makeExtern< void (*)(Image *) , ImageMipmaps , SimNode_ExtFuncCall >(lib,"ImageMipmaps","ImageMipmaps")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1404:12
	makeExtern< void (*)(Image &) , _rlr_ImageMipmaps , SimNode_ExtFuncCall >(lib,"ImageMipmaps","das::_rlr_ImageMipmaps")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1405:12
	makeExtern< void (*)(Image *,int,int,int,int) , ImageDither , SimNode_ExtFuncCall >(lib,"ImageDither","ImageDither")
		->args({"image","rBpp","gBpp","bBpp","aBpp"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1405:12
	makeExtern< void (*)(Image &,int,int,int,int) , _rlr_ImageDither , SimNode_ExtFuncCall >(lib,"ImageDither","das::_rlr_ImageDither")
		->args({"image","rBpp","gBpp","bBpp","aBpp"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1406:12
	makeExtern< void (*)(Image *) , ImageFlipVertical , SimNode_ExtFuncCall >(lib,"ImageFlipVertical","ImageFlipVertical")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1406:12
	makeExtern< void (*)(Image &) , _rlr_ImageFlipVertical , SimNode_ExtFuncCall >(lib,"ImageFlipVertical","das::_rlr_ImageFlipVertical")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1407:12
	makeExtern< void (*)(Image *) , ImageFlipHorizontal , SimNode_ExtFuncCall >(lib,"ImageFlipHorizontal","ImageFlipHorizontal")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1407:12
	makeExtern< void (*)(Image &) , _rlr_ImageFlipHorizontal , SimNode_ExtFuncCall >(lib,"ImageFlipHorizontal","das::_rlr_ImageFlipHorizontal")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1408:12
	makeExtern< void (*)(Image *,int) , ImageRotate , SimNode_ExtFuncCall >(lib,"ImageRotate","ImageRotate")
		->args({"image","degrees"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1408:12
	makeExtern< void (*)(Image &,int) , _rlr_ImageRotate , SimNode_ExtFuncCall >(lib,"ImageRotate","das::_rlr_ImageRotate")
		->args({"image","degrees"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1409:12
	makeExtern< void (*)(Image *) , ImageRotateCW , SimNode_ExtFuncCall >(lib,"ImageRotateCW","ImageRotateCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1409:12
	makeExtern< void (*)(Image &) , _rlr_ImageRotateCW , SimNode_ExtFuncCall >(lib,"ImageRotateCW","das::_rlr_ImageRotateCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1410:12
	makeExtern< void (*)(Image *) , ImageRotateCCW , SimNode_ExtFuncCall >(lib,"ImageRotateCCW","ImageRotateCCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1410:12
	makeExtern< void (*)(Image &) , _rlr_ImageRotateCCW , SimNode_ExtFuncCall >(lib,"ImageRotateCCW","das::_rlr_ImageRotateCCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1411:12
	makeExtern< void (*)(Image *,float4) , _rlw_ImageColorTint , SimNode_ExtFuncCall >(lib,"ImageColorTint","das::_rlw_ImageColorTint")
		->args({"image","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1411:12
	makeExtern< void (*)(Image &,float4) , _rlr_ImageColorTint , SimNode_ExtFuncCall >(lib,"ImageColorTint","das::_rlr_ImageColorTint")
		->args({"image","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1412:12
	makeExtern< void (*)(Image *) , ImageColorInvert , SimNode_ExtFuncCall >(lib,"ImageColorInvert","ImageColorInvert")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1412:12
	makeExtern< void (*)(Image &) , _rlr_ImageColorInvert , SimNode_ExtFuncCall >(lib,"ImageColorInvert","das::_rlr_ImageColorInvert")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1413:12
	makeExtern< void (*)(Image *) , ImageColorGrayscale , SimNode_ExtFuncCall >(lib,"ImageColorGrayscale","ImageColorGrayscale")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1413:12
	makeExtern< void (*)(Image &) , _rlr_ImageColorGrayscale , SimNode_ExtFuncCall >(lib,"ImageColorGrayscale","das::_rlr_ImageColorGrayscale")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1414:12
	makeExtern< void (*)(Image *,int) , ImageColorContrast , SimNode_ExtFuncCall >(lib,"ImageColorContrast","ImageColorContrast")
		->args({"image","contrast"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1414:12
	makeExtern< void (*)(Image &,int) , _rlr_ImageColorContrast , SimNode_ExtFuncCall >(lib,"ImageColorContrast","das::_rlr_ImageColorContrast")
		->args({"image","contrast"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1415:12
	makeExtern< void (*)(Image *,int) , ImageColorBrightness , SimNode_ExtFuncCall >(lib,"ImageColorBrightness","ImageColorBrightness")
		->args({"image","brightness"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1415:12
	makeExtern< void (*)(Image &,int) , _rlr_ImageColorBrightness , SimNode_ExtFuncCall >(lib,"ImageColorBrightness","das::_rlr_ImageColorBrightness")
		->args({"image","brightness"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1416:12
	makeExtern< void (*)(Image *,float4,float4) , _rlw_ImageColorReplace , SimNode_ExtFuncCall >(lib,"ImageColorReplace","das::_rlw_ImageColorReplace")
		->args({"image","color","replace"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1416:12
	makeExtern< void (*)(Image &,float4,float4) , _rlr_ImageColorReplace , SimNode_ExtFuncCall >(lib,"ImageColorReplace","das::_rlr_ImageColorReplace")
		->args({"image","color","replace"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1417:14
	makeExtern< Color * (*)(Image) , LoadImageColors , SimNode_ExtFuncCall >(lib,"LoadImageColors","LoadImageColors")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1418:14
	makeExtern< Color * (*)(Image,int,int *) , LoadImagePalette , SimNode_ExtFuncCall >(lib,"LoadImagePalette","LoadImagePalette")
		->args({"image","maxPaletteSize","colorCount"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1418:14
	makeExtern< Color * (*)(Image,int,int32_t &) , _rlr_LoadImagePalette , SimNode_ExtFuncCall >(lib,"LoadImagePalette","das::_rlr_LoadImagePalette")
		->args({"image","maxPaletteSize","colorCount"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1419:12
	makeExtern< void (*)(Color *) , UnloadImageColors , SimNode_ExtFuncCall >(lib,"UnloadImageColors","UnloadImageColors")
		->args({"colors"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1420:12
	makeExtern< void (*)(Color *) , UnloadImagePalette , SimNode_ExtFuncCall >(lib,"UnloadImagePalette","UnloadImagePalette")
		->args({"colors"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1421:17
	makeExtern< Rectangle (*)(Image,float) , GetImageAlphaBorder , SimNode_ExtFuncCall >(lib,"GetImageAlphaBorder","GetImageAlphaBorder")
		->args({"image","threshold"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1422:13
	makeExtern< float4 (*)(Image,int,int) , _rlw_GetImageColor , SimNode_ExtFuncCall >(lib,"GetImageColor","das::_rlw_GetImageColor")
		->args({"image","x","y"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1426:12
	makeExtern< void (*)(Image *,float4) , _rlw_ImageClearBackground , SimNode_ExtFuncCall >(lib,"ImageClearBackground","das::_rlw_ImageClearBackground")
		->args({"dst","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1426:12
	makeExtern< void (*)(Image &,float4) , _rlr_ImageClearBackground , SimNode_ExtFuncCall >(lib,"ImageClearBackground","das::_rlr_ImageClearBackground")
		->args({"dst","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1427:12
	makeExtern< void (*)(Image *,int,int,float4) , _rlw_ImageDrawPixel , SimNode_ExtFuncCall >(lib,"ImageDrawPixel","das::_rlw_ImageDrawPixel")
		->args({"dst","posX","posY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1427:12
	makeExtern< void (*)(Image &,int,int,float4) , _rlr_ImageDrawPixel , SimNode_ExtFuncCall >(lib,"ImageDrawPixel","das::_rlr_ImageDrawPixel")
		->args({"dst","posX","posY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1428:12
	makeExtern< void (*)(Image *,Vector2,float4) , _rlw_ImageDrawPixelV , SimNode_ExtFuncCall >(lib,"ImageDrawPixelV","das::_rlw_ImageDrawPixelV")
		->args({"dst","position","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1428:12
	makeExtern< void (*)(Image &,Vector2,float4) , _rlr_ImageDrawPixelV , SimNode_ExtFuncCall >(lib,"ImageDrawPixelV","das::_rlr_ImageDrawPixelV")
		->args({"dst","position","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1429:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageDrawLine , SimNode_ExtFuncCall >(lib,"ImageDrawLine","das::_rlw_ImageDrawLine")
		->args({"dst","startPosX","startPosY","endPosX","endPosY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1429:12
	makeExtern< void (*)(Image &,int,int,int,int,float4) , _rlr_ImageDrawLine , SimNode_ExtFuncCall >(lib,"ImageDrawLine","das::_rlr_ImageDrawLine")
		->args({"dst","startPosX","startPosY","endPosX","endPosY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1430:12
	makeExtern< void (*)(Image *,Vector2,Vector2,float4) , _rlw_ImageDrawLineV , SimNode_ExtFuncCall >(lib,"ImageDrawLineV","das::_rlw_ImageDrawLineV")
		->args({"dst","start","end","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1430:12
	makeExtern< void (*)(Image &,Vector2,Vector2,float4) , _rlr_ImageDrawLineV , SimNode_ExtFuncCall >(lib,"ImageDrawLineV","das::_rlr_ImageDrawLineV")
		->args({"dst","start","end","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1431:12
	makeExtern< void (*)(Image *,Vector2,Vector2,int,float4) , _rlw_ImageDrawLineEx , SimNode_ExtFuncCall >(lib,"ImageDrawLineEx","das::_rlw_ImageDrawLineEx")
		->args({"dst","start","end","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1431:12
	makeExtern< void (*)(Image &,Vector2,Vector2,int,float4) , _rlr_ImageDrawLineEx , SimNode_ExtFuncCall >(lib,"ImageDrawLineEx","das::_rlr_ImageDrawLineEx")
		->args({"dst","start","end","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1432:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawLineStrip , SimNode_ExtFuncCall >(lib,"ImageDrawLineStrip","das::_rlw_ImageDrawLineStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1432:12
	makeExtern< void (*)(Image &,const Vector2 *,int,float4) , _rlr_ImageDrawLineStrip , SimNode_ExtFuncCall >(lib,"ImageDrawLineStrip","das::_rlr_ImageDrawLineStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1433:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4) , _rlw_ImageDrawTriangle , SimNode_ExtFuncCall >(lib,"ImageDrawTriangle","das::_rlw_ImageDrawTriangle")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1433:12
	makeExtern< void (*)(Image &,Vector2,Vector2,Vector2,float4) , _rlr_ImageDrawTriangle , SimNode_ExtFuncCall >(lib,"ImageDrawTriangle","das::_rlr_ImageDrawTriangle")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

