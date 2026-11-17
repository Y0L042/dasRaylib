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
// from raylib.h:1434:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4,float4,float4) , _rlw_ImageDrawTriangleGradient , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleGradient","das::_rlw_ImageDrawTriangleGradient")
		->args({"dst","v1","v2","v3","c1","c2","c3"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1434:12
	makeExtern< void (*)(Image &,Vector2,Vector2,Vector2,float4,float4,float4) , _rlr_ImageDrawTriangleGradient , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleGradient","das::_rlr_ImageDrawTriangleGradient")
		->args({"dst","v1","v2","v3","c1","c2","c3"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1435:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4) , _rlw_ImageDrawTriangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleLines","das::_rlw_ImageDrawTriangleLines")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1435:12
	makeExtern< void (*)(Image &,Vector2,Vector2,Vector2,float4) , _rlr_ImageDrawTriangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleLines","das::_rlr_ImageDrawTriangleLines")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1436:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawTriangleFan , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleFan","das::_rlw_ImageDrawTriangleFan")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1436:12
	makeExtern< void (*)(Image &,const Vector2 *,int,float4) , _rlr_ImageDrawTriangleFan , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleFan","das::_rlr_ImageDrawTriangleFan")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1437:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawTriangleStrip , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleStrip","das::_rlw_ImageDrawTriangleStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1437:12
	makeExtern< void (*)(Image &,const Vector2 *,int,float4) , _rlr_ImageDrawTriangleStrip , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleStrip","das::_rlr_ImageDrawTriangleStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1438:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageDrawRectangle , SimNode_ExtFuncCall >(lib,"ImageDrawRectangle","das::_rlw_ImageDrawRectangle")
		->args({"dst","posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1438:12
	makeExtern< void (*)(Image &,int,int,int,int,float4) , _rlr_ImageDrawRectangle , SimNode_ExtFuncCall >(lib,"ImageDrawRectangle","das::_rlr_ImageDrawRectangle")
		->args({"dst","posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1439:12
	makeExtern< void (*)(Image *,Vector2,Vector2,float4) , _rlw_ImageDrawRectangleV , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleV","das::_rlw_ImageDrawRectangleV")
		->args({"dst","position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1439:12
	makeExtern< void (*)(Image &,Vector2,Vector2,float4) , _rlr_ImageDrawRectangleV , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleV","das::_rlr_ImageDrawRectangleV")
		->args({"dst","position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1440:12
	makeExtern< void (*)(Image *,Rectangle,float4) , _rlw_ImageDrawRectangleRec , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleRec","das::_rlw_ImageDrawRectangleRec")
		->args({"dst","rec","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1440:12
	makeExtern< void (*)(Image &,Rectangle,float4) , _rlr_ImageDrawRectangleRec , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleRec","das::_rlr_ImageDrawRectangleRec")
		->args({"dst","rec","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1441:12
	makeExtern< void (*)(Image *,Rectangle,Vector2,float,float4) , _rlw_ImageDrawRectanglePro , SimNode_ExtFuncCall >(lib,"ImageDrawRectanglePro","das::_rlw_ImageDrawRectanglePro")
		->args({"dst","rec","origin","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1441:12
	makeExtern< void (*)(Image &,Rectangle,Vector2,float,float4) , _rlr_ImageDrawRectanglePro , SimNode_ExtFuncCall >(lib,"ImageDrawRectanglePro","das::_rlr_ImageDrawRectanglePro")
		->args({"dst","rec","origin","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1442:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageDrawRectangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLines","das::_rlw_ImageDrawRectangleLines")
		->args({"dst","posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1442:12
	makeExtern< void (*)(Image &,int,int,int,int,float4) , _rlr_ImageDrawRectangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLines","das::_rlr_ImageDrawRectangleLines")
		->args({"dst","posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1443:12
	makeExtern< void (*)(Image *,Rectangle,int,float4) , _rlw_ImageDrawRectangleLinesEx , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLinesEx","das::_rlw_ImageDrawRectangleLinesEx")
		->args({"dst","rec","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1443:12
	makeExtern< void (*)(Image &,Rectangle,int,float4) , _rlr_ImageDrawRectangleLinesEx , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLinesEx","das::_rlr_ImageDrawRectangleLinesEx")
		->args({"dst","rec","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1444:12
	makeExtern< void (*)(Image *,Rectangle,float4,float4,float4,float4) , _rlw_ImageDrawRectangleGradientEx , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleGradientEx","das::_rlw_ImageDrawRectangleGradientEx")
		->args({"dst","rec","col1","col2","col3","col4"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1444:12
	makeExtern< void (*)(Image &,Rectangle,float4,float4,float4,float4) , _rlr_ImageDrawRectangleGradientEx , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleGradientEx","das::_rlr_ImageDrawRectangleGradientEx")
		->args({"dst","rec","col1","col2","col3","col4"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1445:12
	makeExtern< void (*)(Image *,int,int,int,float4) , _rlw_ImageDrawCircle , SimNode_ExtFuncCall >(lib,"ImageDrawCircle","das::_rlw_ImageDrawCircle")
		->args({"dst","centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1445:12
	makeExtern< void (*)(Image &,int,int,int,float4) , _rlr_ImageDrawCircle , SimNode_ExtFuncCall >(lib,"ImageDrawCircle","das::_rlr_ImageDrawCircle")
		->args({"dst","centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1446:12
	makeExtern< void (*)(Image *,Vector2,int,float4) , _rlw_ImageDrawCircleV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleV","das::_rlw_ImageDrawCircleV")
		->args({"dst","center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1446:12
	makeExtern< void (*)(Image &,Vector2,int,float4) , _rlr_ImageDrawCircleV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleV","das::_rlr_ImageDrawCircleV")
		->args({"dst","center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1447:12
	makeExtern< void (*)(Image *,int,int,int,float4) , _rlw_ImageDrawCircleLines , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLines","das::_rlw_ImageDrawCircleLines")
		->args({"dst","centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1447:12
	makeExtern< void (*)(Image &,int,int,int,float4) , _rlr_ImageDrawCircleLines , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLines","das::_rlr_ImageDrawCircleLines")
		->args({"dst","centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1448:12
	makeExtern< void (*)(Image *,Vector2,int,float4) , _rlw_ImageDrawCircleLinesV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLinesV","das::_rlw_ImageDrawCircleLinesV")
		->args({"dst","center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1448:12
	makeExtern< void (*)(Image &,Vector2,int,float4) , _rlr_ImageDrawCircleLinesV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLinesV","das::_rlr_ImageDrawCircleLinesV")
		->args({"dst","center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1449:12
	makeExtern< void (*)(Image *,Vector2,float,float4,float4) , _rlw_ImageDrawCircleGradient , SimNode_ExtFuncCall >(lib,"ImageDrawCircleGradient","das::_rlw_ImageDrawCircleGradient")
		->args({"dst","center","radius","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1449:12
	makeExtern< void (*)(Image &,Vector2,float,float4,float4) , _rlr_ImageDrawCircleGradient , SimNode_ExtFuncCall >(lib,"ImageDrawCircleGradient","das::_rlr_ImageDrawCircleGradient")
		->args({"dst","center","radius","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1451:12
	makeExtern< void (*)(Image *,Image,int,int,float4) , _rlw_ImageDrawImage , SimNode_ExtFuncCall >(lib,"ImageDrawImage","das::_rlw_ImageDrawImage")
		->args({"dst","src","posX","posY","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1451:12
	makeExtern< void (*)(Image &,Image,int,int,float4) , _rlr_ImageDrawImage , SimNode_ExtFuncCall >(lib,"ImageDrawImage","das::_rlr_ImageDrawImage")
		->args({"dst","src","posX","posY","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1452:12
	makeExtern< void (*)(Image *,Image,Vector2,float,float,float4) , _rlw_ImageDrawImageEx , SimNode_ExtFuncCall >(lib,"ImageDrawImageEx","das::_rlw_ImageDrawImageEx")
		->args({"dst","src","position","rotation","scale","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1452:12
	makeExtern< void (*)(Image &,Image,Vector2,float,float,float4) , _rlr_ImageDrawImageEx , SimNode_ExtFuncCall >(lib,"ImageDrawImageEx","das::_rlr_ImageDrawImageEx")
		->args({"dst","src","position","rotation","scale","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1453:12
	makeExtern< void (*)(Image *,Image,Rectangle,Vector2,float4) , _rlw_ImageDrawImageRec , SimNode_ExtFuncCall >(lib,"ImageDrawImageRec","das::_rlw_ImageDrawImageRec")
		->args({"dst","src","srcRec","position","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1453:12
	makeExtern< void (*)(Image &,Image,Rectangle,Vector2,float4) , _rlr_ImageDrawImageRec , SimNode_ExtFuncCall >(lib,"ImageDrawImageRec","das::_rlr_ImageDrawImageRec")
		->args({"dst","src","srcRec","position","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1454:12
	makeExtern< void (*)(Image *,Image,Rectangle,Rectangle,Vector2,float,float4) , _rlw_ImageDrawImagePro , SimNode_ExtFuncCall >(lib,"ImageDrawImagePro","das::_rlw_ImageDrawImagePro")
		->args({"dst","src","srcRec","dstRec","origin","rotation","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1454:12
	makeExtern< void (*)(Image &,Image,Rectangle,Rectangle,Vector2,float,float4) , _rlr_ImageDrawImagePro , SimNode_ExtFuncCall >(lib,"ImageDrawImagePro","das::_rlr_ImageDrawImagePro")
		->args({"dst","src","srcRec","dstRec","origin","rotation","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1455:12
	makeExtern< void (*)(Image *,const char *,int,int,int,float4) , _rlw_ImageDrawText , SimNode_ExtFuncCall >(lib,"ImageDrawText","das::_rlw_ImageDrawText")
		->args({"dst","text","posX","posY","fontSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1455:12
	makeExtern< void (*)(Image &,const char *,int,int,int,float4) , _rlr_ImageDrawText , SimNode_ExtFuncCall >(lib,"ImageDrawText","das::_rlr_ImageDrawText")
		->args({"dst","text","posX","posY","fontSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1456:12
	makeExtern< void (*)(Image *,Font,const char *,Vector2,float,float,float4) , _rlw_ImageDrawTextEx , SimNode_ExtFuncCall >(lib,"ImageDrawTextEx","das::_rlw_ImageDrawTextEx")
		->args({"dst","font","text","position","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1456:12
	makeExtern< void (*)(Image &,Font,const char *,Vector2,float,float,float4) , _rlr_ImageDrawTextEx , SimNode_ExtFuncCall >(lib,"ImageDrawTextEx","das::_rlr_ImageDrawTextEx")
		->args({"dst","font","text","position","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1457:12
	makeExtern< void (*)(Image *,Font,const char *,Vector2,Vector2,float,float,float,float4) , _rlw_ImageDrawTextPro , SimNode_ExtFuncCall >(lib,"ImageDrawTextPro","das::_rlw_ImageDrawTextPro")
		->args({"dst","font","text","position","origin","rotation","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1457:12
	makeExtern< void (*)(Image &,Font,const char *,Vector2,Vector2,float,float,float,float4) , _rlr_ImageDrawTextPro , SimNode_ExtFuncCall >(lib,"ImageDrawTextPro","das::_rlr_ImageDrawTextPro")
		->args({"dst","font","text","position","origin","rotation","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1461:17
	makeExtern< Texture (*)(const char *) , LoadTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadTexture","LoadTexture")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1462:17
	makeExtern< Texture (*)(Image) , LoadTextureFromImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadTextureFromImage","LoadTextureFromImage")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1463:22
	makeExtern< Texture (*)(Image,int) , LoadTextureCubemap , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadTextureCubemap","LoadTextureCubemap")
		->args({"image","layout"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1464:23
	makeExtern< RenderTexture (*)(int,int) , LoadRenderTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadRenderTexture","LoadRenderTexture")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

