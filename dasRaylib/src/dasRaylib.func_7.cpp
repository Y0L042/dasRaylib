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
// from raylib.h:1372:22
	makeExtern< unsigned char * (*)(Image,const char *,int *) , ExportImageToMemory , SimNode_ExtFuncCall >(lib,"ExportImageToMemory","ExportImageToMemory")
		->args({"image","fileType","fileSize"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1373:12
	makeExtern< bool (*)(Image,const char *) , ExportImageAsCode , SimNode_ExtFuncCall >(lib,"ExportImageAsCode","ExportImageAsCode")
		->args({"image","fileName"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1376:13
	makeExtern< Image (*)(int,int,float4) , _rlw_GenImageColor , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageColor","das::_rlw_GenImageColor")
		->args({"width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1377:13
	makeExtern< Image (*)(int,int,int,float4,float4) , _rlw_GenImageGradientLinear , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageGradientLinear","das::_rlw_GenImageGradientLinear")
		->args({"width","height","direction","start","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1378:13
	makeExtern< Image (*)(int,int,float,float4,float4) , _rlw_GenImageGradientRadial , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageGradientRadial","das::_rlw_GenImageGradientRadial")
		->args({"width","height","density","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1379:13
	makeExtern< Image (*)(int,int,float,float4,float4) , _rlw_GenImageGradientSquare , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageGradientSquare","das::_rlw_GenImageGradientSquare")
		->args({"width","height","density","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1380:13
	makeExtern< Image (*)(int,int,int,int,float4,float4) , _rlw_GenImageChecked , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageChecked","das::_rlw_GenImageChecked")
		->args({"width","height","checksX","checksY","col1","col2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1381:13
	makeExtern< Image (*)(int,int,float) , GenImageWhiteNoise , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageWhiteNoise","GenImageWhiteNoise")
		->args({"width","height","factor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1382:13
	makeExtern< Image (*)(int,int,int,int,float) , GenImagePerlinNoise , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImagePerlinNoise","GenImagePerlinNoise")
		->args({"width","height","offsetX","offsetY","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1383:13
	makeExtern< Image (*)(int,int,int) , GenImageCellular , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageCellular","GenImageCellular")
		->args({"width","height","tileSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1384:13
	makeExtern< Image (*)(int,int,const char *) , GenImageText , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageText","GenImageText")
		->args({"width","height","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1387:13
	makeExtern< Image (*)(Image) , ImageCopy , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageCopy","ImageCopy")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1388:13
	makeExtern< Image (*)(Image,Rectangle) , ImageFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageFromImage","ImageFromImage")
		->args({"image","rec"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1389:13
	makeExtern< Image (*)(Image,int) , ImageFromChannel , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageFromChannel","ImageFromChannel")
		->args({"image","selectedChannel"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1390:13
	makeExtern< Image (*)(const char *,int,float4) , _rlw_ImageText , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageText","das::_rlw_ImageText")
		->args({"text","fontSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1391:13
	makeExtern< Image (*)(Font,const char *,float,float,float4) , _rlw_ImageTextEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"ImageTextEx","das::_rlw_ImageTextEx")
		->args({"font","text","fontSize","spacing","tint"})
		->arg_type(0,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1392:12
	makeExtern< void (*)(Image *,int) , ImageFormat , SimNode_ExtFuncCall >(lib,"ImageFormat","ImageFormat")
		->args({"image","newFormat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1393:12
	makeExtern< void (*)(Image *,float4) , _rlw_ImageToPOT , SimNode_ExtFuncCall >(lib,"ImageToPOT","das::_rlw_ImageToPOT")
		->args({"image","fill"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1394:12
	makeExtern< void (*)(Image *,Rectangle) , ImageCrop , SimNode_ExtFuncCall >(lib,"ImageCrop","ImageCrop")
		->args({"image","crop"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1395:12
	makeExtern< void (*)(Image *,float) , ImageAlphaCrop , SimNode_ExtFuncCall >(lib,"ImageAlphaCrop","ImageAlphaCrop")
		->args({"image","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1396:12
	makeExtern< void (*)(Image *,float4,float) , _rlw_ImageAlphaClear , SimNode_ExtFuncCall >(lib,"ImageAlphaClear","das::_rlw_ImageAlphaClear")
		->args({"image","color","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1397:12
	makeExtern< void (*)(Image *,Image) , ImageAlphaMask , SimNode_ExtFuncCall >(lib,"ImageAlphaMask","ImageAlphaMask")
		->args({"image","alphaMask"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1398:12
	makeExtern< void (*)(Image *) , ImageAlphaPremultiply , SimNode_ExtFuncCall >(lib,"ImageAlphaPremultiply","ImageAlphaPremultiply")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1399:12
	makeExtern< void (*)(Image *,int) , ImageBlurGaussian , SimNode_ExtFuncCall >(lib,"ImageBlurGaussian","ImageBlurGaussian")
		->args({"image","blurSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1400:12
	makeExtern< void (*)(Image *,const float *,int) , ImageKernelConvolution , SimNode_ExtFuncCall >(lib,"ImageKernelConvolution","ImageKernelConvolution")
		->args({"image","kernel","kernelSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1401:12
	makeExtern< void (*)(Image *,int,int) , ImageResize , SimNode_ExtFuncCall >(lib,"ImageResize","ImageResize")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1402:12
	makeExtern< void (*)(Image *,int,int) , ImageResizeNN , SimNode_ExtFuncCall >(lib,"ImageResizeNN","ImageResizeNN")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1403:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageResizeCanvas , SimNode_ExtFuncCall >(lib,"ImageResizeCanvas","das::_rlw_ImageResizeCanvas")
		->args({"image","newWidth","newHeight","offsetX","offsetY","fill"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1404:12
	makeExtern< void (*)(Image *) , ImageMipmaps , SimNode_ExtFuncCall >(lib,"ImageMipmaps","ImageMipmaps")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1405:12
	makeExtern< void (*)(Image *,int,int,int,int) , ImageDither , SimNode_ExtFuncCall >(lib,"ImageDither","ImageDither")
		->args({"image","rBpp","gBpp","bBpp","aBpp"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1406:12
	makeExtern< void (*)(Image *) , ImageFlipVertical , SimNode_ExtFuncCall >(lib,"ImageFlipVertical","ImageFlipVertical")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1407:12
	makeExtern< void (*)(Image *) , ImageFlipHorizontal , SimNode_ExtFuncCall >(lib,"ImageFlipHorizontal","ImageFlipHorizontal")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1408:12
	makeExtern< void (*)(Image *,int) , ImageRotate , SimNode_ExtFuncCall >(lib,"ImageRotate","ImageRotate")
		->args({"image","degrees"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1409:12
	makeExtern< void (*)(Image *) , ImageRotateCW , SimNode_ExtFuncCall >(lib,"ImageRotateCW","ImageRotateCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1410:12
	makeExtern< void (*)(Image *) , ImageRotateCCW , SimNode_ExtFuncCall >(lib,"ImageRotateCCW","ImageRotateCCW")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1411:12
	makeExtern< void (*)(Image *,float4) , _rlw_ImageColorTint , SimNode_ExtFuncCall >(lib,"ImageColorTint","das::_rlw_ImageColorTint")
		->args({"image","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1412:12
	makeExtern< void (*)(Image *) , ImageColorInvert , SimNode_ExtFuncCall >(lib,"ImageColorInvert","ImageColorInvert")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1413:12
	makeExtern< void (*)(Image *) , ImageColorGrayscale , SimNode_ExtFuncCall >(lib,"ImageColorGrayscale","ImageColorGrayscale")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1414:12
	makeExtern< void (*)(Image *,int) , ImageColorContrast , SimNode_ExtFuncCall >(lib,"ImageColorContrast","ImageColorContrast")
		->args({"image","contrast"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1415:12
	makeExtern< void (*)(Image *,int) , ImageColorBrightness , SimNode_ExtFuncCall >(lib,"ImageColorBrightness","ImageColorBrightness")
		->args({"image","brightness"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1416:12
	makeExtern< void (*)(Image *,float4,float4) , _rlw_ImageColorReplace , SimNode_ExtFuncCall >(lib,"ImageColorReplace","das::_rlw_ImageColorReplace")
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
// from raylib.h:1427:12
	makeExtern< void (*)(Image *,int,int,float4) , _rlw_ImageDrawPixel , SimNode_ExtFuncCall >(lib,"ImageDrawPixel","das::_rlw_ImageDrawPixel")
		->args({"dst","posX","posY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1428:12
	makeExtern< void (*)(Image *,Vector2,float4) , _rlw_ImageDrawPixelV , SimNode_ExtFuncCall >(lib,"ImageDrawPixelV","das::_rlw_ImageDrawPixelV")
		->args({"dst","position","color"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

