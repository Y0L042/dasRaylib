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
// from raylib.h:1363:13
	makeExtern< Image (*)(const char *,int,int,int,int) , LoadImageRaw , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageRaw","LoadImageRaw")
		->args({"fileName","width","height","format","headerSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1364:13
	makeExtern< Image (*)(const char *,int *) , LoadImageAnim , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnim","LoadImageAnim")
		->args({"fileName","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1364:13
	makeExtern< Image (*)(const char *,int32_t &) , _rlr_LoadImageAnim , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnim","das::_rlr_LoadImageAnim")
		->args({"fileName","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1365:13
	makeExtern< Image (*)(const char *,const unsigned char *,int,int *) , LoadImageAnimFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnimFromMemory","LoadImageAnimFromMemory")
		->args({"fileType","fileData","dataSize","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1365:13
	makeExtern< Image (*)(const char *,const unsigned char *,int,int32_t &) , _rlr_LoadImageAnimFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnimFromMemory","das::_rlr_LoadImageAnimFromMemory")
		->args({"fileType","fileData","dataSize","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1366:13
	makeExtern< Image (*)(const char *,const unsigned char *,int) , LoadImageFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageFromMemory","LoadImageFromMemory")
		->args({"fileType","fileData","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1367:13
	makeExtern< Image (*)(Texture) , LoadImageFromTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageFromTexture","LoadImageFromTexture")
		->args({"texture"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1368:13
	makeExtern< Image (*)() , LoadImageFromScreen , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageFromScreen","LoadImageFromScreen")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1369:12
	makeExtern< bool (*)(Image) , IsImageValid , SimNode_ExtFuncCall >(lib,"IsImageValid","IsImageValid")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1370:12
	makeExtern< void (*)(Image) , UnloadImage , SimNode_ExtFuncCall >(lib,"UnloadImage","UnloadImage")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1371:12
	makeExtern< bool (*)(Image,const char *) , ExportImage , SimNode_ExtFuncCall >(lib,"ExportImage","ExportImage")
		->args({"image","fileName"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1372:22
	makeExtern< unsigned char * (*)(Image,const char *,int *) , ExportImageToMemory , SimNode_ExtFuncCall >(lib,"ExportImageToMemory","ExportImageToMemory")
		->args({"image","fileType","fileSize"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1372:22
	makeExtern< unsigned char * (*)(Image,const char *,int32_t &) , _rlr_ExportImageToMemory , SimNode_ExtFuncCall >(lib,"ExportImageToMemory","das::_rlr_ExportImageToMemory")
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
// from raylib.h:1392:12
	makeExtern< void (*)(Image &,int) , _rlr_ImageFormat , SimNode_ExtFuncCall >(lib,"ImageFormat","das::_rlr_ImageFormat")
		->args({"image","newFormat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1393:12
	makeExtern< void (*)(Image *,float4) , _rlw_ImageToPOT , SimNode_ExtFuncCall >(lib,"ImageToPOT","das::_rlw_ImageToPOT")
		->args({"image","fill"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1393:12
	makeExtern< void (*)(Image &,float4) , _rlr_ImageToPOT , SimNode_ExtFuncCall >(lib,"ImageToPOT","das::_rlr_ImageToPOT")
		->args({"image","fill"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1394:12
	makeExtern< void (*)(Image *,Rectangle) , ImageCrop , SimNode_ExtFuncCall >(lib,"ImageCrop","ImageCrop")
		->args({"image","crop"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1394:12
	makeExtern< void (*)(Image &,Rectangle) , _rlr_ImageCrop , SimNode_ExtFuncCall >(lib,"ImageCrop","das::_rlr_ImageCrop")
		->args({"image","crop"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1395:12
	makeExtern< void (*)(Image *,float) , ImageAlphaCrop , SimNode_ExtFuncCall >(lib,"ImageAlphaCrop","ImageAlphaCrop")
		->args({"image","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1395:12
	makeExtern< void (*)(Image &,float) , _rlr_ImageAlphaCrop , SimNode_ExtFuncCall >(lib,"ImageAlphaCrop","das::_rlr_ImageAlphaCrop")
		->args({"image","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1396:12
	makeExtern< void (*)(Image *,float4,float) , _rlw_ImageAlphaClear , SimNode_ExtFuncCall >(lib,"ImageAlphaClear","das::_rlw_ImageAlphaClear")
		->args({"image","color","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1396:12
	makeExtern< void (*)(Image &,float4,float) , _rlr_ImageAlphaClear , SimNode_ExtFuncCall >(lib,"ImageAlphaClear","das::_rlr_ImageAlphaClear")
		->args({"image","color","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1397:12
	makeExtern< void (*)(Image *,Image) , ImageAlphaMask , SimNode_ExtFuncCall >(lib,"ImageAlphaMask","ImageAlphaMask")
		->args({"image","alphaMask"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1397:12
	makeExtern< void (*)(Image &,Image) , _rlr_ImageAlphaMask , SimNode_ExtFuncCall >(lib,"ImageAlphaMask","das::_rlr_ImageAlphaMask")
		->args({"image","alphaMask"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1398:12
	makeExtern< void (*)(Image *) , ImageAlphaPremultiply , SimNode_ExtFuncCall >(lib,"ImageAlphaPremultiply","ImageAlphaPremultiply")
		->args({"image"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1398:12
	makeExtern< void (*)(Image &) , _rlr_ImageAlphaPremultiply , SimNode_ExtFuncCall >(lib,"ImageAlphaPremultiply","das::_rlr_ImageAlphaPremultiply")
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
// from raylib.h:1400:12
	makeExtern< void (*)(Image &,const float *,int) , _rlr_ImageKernelConvolution , SimNode_ExtFuncCall >(lib,"ImageKernelConvolution","das::_rlr_ImageKernelConvolution")
		->args({"image","kernel","kernelSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1401:12
	makeExtern< void (*)(Image *,int,int) , ImageResize , SimNode_ExtFuncCall >(lib,"ImageResize","ImageResize")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1401:12
	makeExtern< void (*)(Image &,int,int) , _rlr_ImageResize , SimNode_ExtFuncCall >(lib,"ImageResize","das::_rlr_ImageResize")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1402:12
	makeExtern< void (*)(Image *,int,int) , ImageResizeNN , SimNode_ExtFuncCall >(lib,"ImageResizeNN","ImageResizeNN")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1402:12
	makeExtern< void (*)(Image &,int,int) , _rlr_ImageResizeNN , SimNode_ExtFuncCall >(lib,"ImageResizeNN","das::_rlr_ImageResizeNN")
		->args({"image","newWidth","newHeight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1403:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageResizeCanvas , SimNode_ExtFuncCall >(lib,"ImageResizeCanvas","das::_rlw_ImageResizeCanvas")
		->args({"image","newWidth","newHeight","offsetX","offsetY","fill"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

