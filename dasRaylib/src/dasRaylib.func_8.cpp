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
// from raylib.h:1429:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageDrawLine , SimNode_ExtFuncCall >(lib,"ImageDrawLine","das::_rlw_ImageDrawLine")
		->args({"dst","startPosX","startPosY","endPosX","endPosY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1430:12
	makeExtern< void (*)(Image *,Vector2,Vector2,float4) , _rlw_ImageDrawLineV , SimNode_ExtFuncCall >(lib,"ImageDrawLineV","das::_rlw_ImageDrawLineV")
		->args({"dst","start","end","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1431:12
	makeExtern< void (*)(Image *,Vector2,Vector2,int,float4) , _rlw_ImageDrawLineEx , SimNode_ExtFuncCall >(lib,"ImageDrawLineEx","das::_rlw_ImageDrawLineEx")
		->args({"dst","start","end","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1432:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawLineStrip , SimNode_ExtFuncCall >(lib,"ImageDrawLineStrip","das::_rlw_ImageDrawLineStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1433:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4) , _rlw_ImageDrawTriangle , SimNode_ExtFuncCall >(lib,"ImageDrawTriangle","das::_rlw_ImageDrawTriangle")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1434:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4,float4,float4) , _rlw_ImageDrawTriangleGradient , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleGradient","das::_rlw_ImageDrawTriangleGradient")
		->args({"dst","v1","v2","v3","c1","c2","c3"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1435:12
	makeExtern< void (*)(Image *,Vector2,Vector2,Vector2,float4) , _rlw_ImageDrawTriangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleLines","das::_rlw_ImageDrawTriangleLines")
		->args({"dst","v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1436:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawTriangleFan , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleFan","das::_rlw_ImageDrawTriangleFan")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1437:12
	makeExtern< void (*)(Image *,const Vector2 *,int,float4) , _rlw_ImageDrawTriangleStrip , SimNode_ExtFuncCall >(lib,"ImageDrawTriangleStrip","das::_rlw_ImageDrawTriangleStrip")
		->args({"dst","points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1438:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageDrawRectangle , SimNode_ExtFuncCall >(lib,"ImageDrawRectangle","das::_rlw_ImageDrawRectangle")
		->args({"dst","posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1439:12
	makeExtern< void (*)(Image *,Vector2,Vector2,float4) , _rlw_ImageDrawRectangleV , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleV","das::_rlw_ImageDrawRectangleV")
		->args({"dst","position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1440:12
	makeExtern< void (*)(Image *,Rectangle,float4) , _rlw_ImageDrawRectangleRec , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleRec","das::_rlw_ImageDrawRectangleRec")
		->args({"dst","rec","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1441:12
	makeExtern< void (*)(Image *,Rectangle,Vector2,float,float4) , _rlw_ImageDrawRectanglePro , SimNode_ExtFuncCall >(lib,"ImageDrawRectanglePro","das::_rlw_ImageDrawRectanglePro")
		->args({"dst","rec","origin","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1442:12
	makeExtern< void (*)(Image *,int,int,int,int,float4) , _rlw_ImageDrawRectangleLines , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLines","das::_rlw_ImageDrawRectangleLines")
		->args({"dst","posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1443:12
	makeExtern< void (*)(Image *,Rectangle,int,float4) , _rlw_ImageDrawRectangleLinesEx , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleLinesEx","das::_rlw_ImageDrawRectangleLinesEx")
		->args({"dst","rec","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1444:12
	makeExtern< void (*)(Image *,Rectangle,float4,float4,float4,float4) , _rlw_ImageDrawRectangleGradientEx , SimNode_ExtFuncCall >(lib,"ImageDrawRectangleGradientEx","das::_rlw_ImageDrawRectangleGradientEx")
		->args({"dst","rec","col1","col2","col3","col4"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1445:12
	makeExtern< void (*)(Image *,int,int,int,float4) , _rlw_ImageDrawCircle , SimNode_ExtFuncCall >(lib,"ImageDrawCircle","das::_rlw_ImageDrawCircle")
		->args({"dst","centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1446:12
	makeExtern< void (*)(Image *,Vector2,int,float4) , _rlw_ImageDrawCircleV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleV","das::_rlw_ImageDrawCircleV")
		->args({"dst","center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1447:12
	makeExtern< void (*)(Image *,int,int,int,float4) , _rlw_ImageDrawCircleLines , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLines","das::_rlw_ImageDrawCircleLines")
		->args({"dst","centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1448:12
	makeExtern< void (*)(Image *,Vector2,int,float4) , _rlw_ImageDrawCircleLinesV , SimNode_ExtFuncCall >(lib,"ImageDrawCircleLinesV","das::_rlw_ImageDrawCircleLinesV")
		->args({"dst","center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1449:12
	makeExtern< void (*)(Image *,Vector2,float,float4,float4) , _rlw_ImageDrawCircleGradient , SimNode_ExtFuncCall >(lib,"ImageDrawCircleGradient","das::_rlw_ImageDrawCircleGradient")
		->args({"dst","center","radius","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1451:12
	makeExtern< void (*)(Image *,Image,int,int,float4) , _rlw_ImageDrawImage , SimNode_ExtFuncCall >(lib,"ImageDrawImage","das::_rlw_ImageDrawImage")
		->args({"dst","src","posX","posY","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1452:12
	makeExtern< void (*)(Image *,Image,Vector2,float,float,float4) , _rlw_ImageDrawImageEx , SimNode_ExtFuncCall >(lib,"ImageDrawImageEx","das::_rlw_ImageDrawImageEx")
		->args({"dst","src","position","rotation","scale","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1453:12
	makeExtern< void (*)(Image *,Image,Rectangle,Vector2,float4) , _rlw_ImageDrawImageRec , SimNode_ExtFuncCall >(lib,"ImageDrawImageRec","das::_rlw_ImageDrawImageRec")
		->args({"dst","src","srcRec","position","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1454:12
	makeExtern< void (*)(Image *,Image,Rectangle,Rectangle,Vector2,float,float4) , _rlw_ImageDrawImagePro , SimNode_ExtFuncCall >(lib,"ImageDrawImagePro","das::_rlw_ImageDrawImagePro")
		->args({"dst","src","srcRec","dstRec","origin","rotation","tint"})
		->arg_type(1,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1455:12
	makeExtern< void (*)(Image *,const char *,int,int,int,float4) , _rlw_ImageDrawText , SimNode_ExtFuncCall >(lib,"ImageDrawText","das::_rlw_ImageDrawText")
		->args({"dst","text","posX","posY","fontSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1456:12
	makeExtern< void (*)(Image *,Font,const char *,Vector2,float,float,float4) , _rlw_ImageDrawTextEx , SimNode_ExtFuncCall >(lib,"ImageDrawTextEx","das::_rlw_ImageDrawTextEx")
		->args({"dst","font","text","position","fontSize","spacing","tint"})
		->arg_type(1,makeType<const Font>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1457:12
	makeExtern< void (*)(Image *,Font,const char *,Vector2,Vector2,float,float,float,float4) , _rlw_ImageDrawTextPro , SimNode_ExtFuncCall >(lib,"ImageDrawTextPro","das::_rlw_ImageDrawTextPro")
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
}
}

