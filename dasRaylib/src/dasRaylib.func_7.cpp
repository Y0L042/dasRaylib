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
void Module_dasRaylib::initFunctions_7() {
// from raylib.h:1373:13
	makeExtern< Image (*)(int,int,int) , GenImageCellular , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageCellular","GenImageCellular")
		->args({"width","height","tileSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1374:13
	makeExtern< Image (*)(int,int,const char *) , GenImageText , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageText","GenImageText")
		->args({"width","height","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1377:13
	makeExtern< Image (*)(Image) , ImageCopy , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageCopy","ImageCopy")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1378:13
	makeExtern< Image (*)(Image,Rectangle) , ImageFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageFromImage","ImageFromImage")
		->args({"image","rec"})
		->arg_type(0,makeType<const Image>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1379:13
	makeExtern< Image (*)(Image,int) , ImageFromChannel , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageFromChannel","ImageFromChannel")
		->args({"image","selectedChannel"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1380:13
	makeExtern< Image (*)(const char *,int,Color) , ImageText , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageText","ImageText")
		->args({"text","fontSize","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1381:13
	makeExtern< Image (*)(Font,const char *,float,float,Color) , ImageTextEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageTextEx","ImageTextEx")
		->args({"font","text","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1382:12
	makeExtern< void (*)(Image *,int) , ImageFormat , SimNode_ExtFuncCall >(lib,"ImageFormat","ImageFormat")
		->args({"image","newFormat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1383:12
	makeExtern< void (*)(Image *,Color) , ImageToPOT , SimNode_ExtFuncCall >(lib,"ImageToPOT","ImageToPOT")
		->args({"image","fill"})
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1384:12
	makeExtern< void (*)(Image *,Rectangle) , ImageCrop , SimNode_ExtFuncCall >(lib,"ImageCrop","ImageCrop")
		->args({"image","crop"})
		->arg_type(1,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1385:12
	makeExtern< void (*)(Image *,float) , ImageAlphaCrop , SimNode_ExtFuncCall >(lib,"ImageAlphaCrop","ImageAlphaCrop")
		->args({"image","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1386:12
	makeExtern< void (*)(Image *,Color,float) , ImageAlphaClear , SimNode_ExtFuncCall >(lib,"ImageAlphaClear","ImageAlphaClear")
		->args({"image","color","threshold"})
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1387:12
	makeExtern< void (*)(Image *,Image) , ImageAlphaMask , SimNode_ExtFuncCall >(lib,"ImageAlphaMask","ImageAlphaMask")
		->args({"image","alphaMask"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1388:12
	makeExtern< void (*)(Image *) , ImageAlphaPremultiply , SimNode_ExtFuncCall >(lib,"ImageAlphaPremultiply","ImageAlphaPremultiply")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1389:12
	makeExtern< void (*)(Image *,int) , ImageBlurGaussian , SimNode_ExtFuncCall >(lib,"ImageBlurGaussian","ImageBlurGaussian")
		->args({"image","blurSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1390:12
	makeExtern< void (*)(Image *,const float *,int) , ImageKernelConvolution , SimNode_ExtFuncCall >(lib,"ImageKernelConvolution","ImageKernelConvolution")
		->args({"image","kernel","kernelSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1391:12
	makeExtern< void (*)(Image *,int,int) , ImageResize , SimNode_ExtFuncCall >(lib,"ImageResize","ImageResize")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1392:12
	makeExtern< void (*)(Image *,int,int) , ImageResizeNN , SimNode_ExtFuncCall >(lib,"ImageResizeNN","ImageResizeNN")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1393:12
	makeExtern< void (*)(Image *,int,int,int,int,Color) , ImageResizeCanvas , SimNode_ExtFuncCall >(lib,"ImageResizeCanvas","ImageResizeCanvas")
		->args({"image","newWidth","newHeight","offsetX","offsetY","fill"})
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1394:12
	makeExtern< void (*)(Image *) , ImageMipmaps , SimNode_ExtFuncCall >(lib,"ImageMipmaps","ImageMipmaps")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1395:12
	makeExtern< void (*)(Image *,int,int,int,int) , ImageDither , SimNode_ExtFuncCall >(lib,"ImageDither","ImageDither")
		->args({"image","rBpp","gBpp","bBpp","aBpp"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1396:12
	makeExtern< void (*)(Image *) , ImageFlipVertical , SimNode_ExtFuncCall >(lib,"ImageFlipVertical","ImageFlipVertical")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1397:12
	makeExtern< void (*)(Image *) , ImageFlipHorizontal , SimNode_ExtFuncCall >(lib,"ImageFlipHorizontal","ImageFlipHorizontal")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1398:12
	makeExtern< void (*)(Image *,int) , ImageRotate , SimNode_ExtFuncCall >(lib,"ImageRotate","ImageRotate")
		->args({"image","degrees"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1399:12
	makeExtern< void (*)(Image *) , ImageRotateCW , SimNode_ExtFuncCall >(lib,"ImageRotateCW","ImageRotateCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1400:12
	makeExtern< void (*)(Image *) , ImageRotateCCW , SimNode_ExtFuncCall >(lib,"ImageRotateCCW","ImageRotateCCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1401:12
	makeExtern< void (*)(Image *,Color) , ImageColorTint , SimNode_ExtFuncCall >(lib,"ImageColorTint","ImageColorTint")
		->args({"image","color"})
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1402:12
	makeExtern< void (*)(Image *) , ImageColorInvert , SimNode_ExtFuncCall >(lib,"ImageColorInvert","ImageColorInvert")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1403:12
	makeExtern< void (*)(Image *) , ImageColorGrayscale , SimNode_ExtFuncCall >(lib,"ImageColorGrayscale","ImageColorGrayscale")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1404:12
	makeExtern< void (*)(Image *,float) , ImageColorContrast , SimNode_ExtFuncCall >(lib,"ImageColorContrast","ImageColorContrast")
		->args({"image","contrast"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1405:12
	makeExtern< void (*)(Image *,int) , ImageColorBrightness , SimNode_ExtFuncCall >(lib,"ImageColorBrightness","ImageColorBrightness")
		->args({"image","brightness"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1406:12
	makeExtern< void (*)(Image *,Color,Color) , ImageColorReplace , SimNode_ExtFuncCall >(lib,"ImageColorReplace","ImageColorReplace")
		->args({"image","color","replace"})
		->arg_type(1,makeType<const Color>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1407:14
	makeExtern< Color * (*)(Image) , LoadImageColors , SimNode_ExtFuncCall >(lib,"LoadImageColors","LoadImageColors")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1408:14
	makeExtern< Color * (*)(Image,int,int *) , LoadImagePalette , SimNode_ExtFuncCall >(lib,"LoadImagePalette","LoadImagePalette")
		->args({"image","maxPaletteSize","colorCount"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1409:12
	makeExtern< void (*)(Color *) , UnloadImageColors , SimNode_ExtFuncCall >(lib,"UnloadImageColors","UnloadImageColors")
		->args({"colors"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1410:12
	makeExtern< void (*)(Color *) , UnloadImagePalette , SimNode_ExtFuncCall >(lib,"UnloadImagePalette","UnloadImagePalette")
		->args({"colors"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1411:17
	makeExtern< Rectangle (*)(Image,float) , GetImageAlphaBorder , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetImageAlphaBorder","GetImageAlphaBorder")
		->args({"image","threshold"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1412:13
	makeExtern< Color (*)(Image,int,int) , GetImageColor , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetImageColor","GetImageColor")
		->args({"image","x","y"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1416:12
	makeExtern< void (*)(Image *,Color) , ImageClearBackground , SimNode_ExtFuncCall >(lib,"ImageClearBackground","ImageClearBackground")
		->args({"dst","color"})
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1417:12
	makeExtern< void (*)(Image *,int,int,Color) , ImageDrawPixel , SimNode_ExtFuncCall >(lib,"ImageDrawPixel","ImageDrawPixel")
		->args({"dst","posX","posY","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1418:12
	makeExtern< void (*)(Image *,Vector2,Color) , ImageDrawPixelV , SimNode_ExtFuncCall >(lib,"ImageDrawPixelV","ImageDrawPixelV")
		->args({"dst","position","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1419:12
	makeExtern< void (*)(Image *,int,int,int,int,Color) , ImageDrawLine , SimNode_ExtFuncCall >(lib,"ImageDrawLine","ImageDrawLine")
		->args({"dst","startPosX","startPosY","endPosX","endPosY","color"})
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1420:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Color) , ImageDrawLineV , SimNode_ExtFuncCall >(lib,"ImageDrawLineV","ImageDrawLineV")
		->args({"dst","start","end","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1421:12
	makeExtern< void (*)(Image *,Vector2,Vector2,int,Color) , ImageDrawLineEx , SimNode_ExtFuncCall >(lib,"ImageDrawLineEx","ImageDrawLineEx")
		->args({"dst","start","end","thick","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1422:12
	makeExtern< void (*)(Image *,int,int,int,Color) , ImageDrawCircle , SimNode_ExtFuncCall >(lib,"ImageDrawCircle","ImageDrawCircle")
		->args({"dst","centerX","centerY","radius","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1423:12
	makeExtern< void (*)(Image *,Vector2,int,Color) , ImageDrawCircleV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleV","ImageDrawCircleV")
		->args({"dst","center","radius","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1424:12
	makeExtern< void (*)(Image *,int,int,int,Color) , ImageDrawCircleLines , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLines","ImageDrawCircleLines")
		->args({"dst","centerX","centerY","radius","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1425:12
	makeExtern< void (*)(Image *,Vector2,int,Color) , ImageDrawCircleLinesV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLinesV","ImageDrawCircleLinesV")
		->args({"dst","center","radius","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1426:12
	makeExtern< void (*)(Image *,int,int,int,int,Color) , ImageDrawRectangle , SimNode_ExtFuncCall >(lib,"ImageDrawRectangle","ImageDrawRectangle")
		->args({"dst","posX","posY","width","height","color"})
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1427:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Color) , ImageDrawRectangleV , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleV","ImageDrawRectangleV")
		->args({"dst","position","size","color"})
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

