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
void Module_dasRaylib::initFunctions_5() {
// from raylib.h:1242:11
	makeExtern< int (*)() , GetTouchX , SimNode_ExtFuncCall >(lib,"GetTouchX","GetTouchX")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1243:11
	makeExtern< int (*)() , GetTouchY , SimNode_ExtFuncCall >(lib,"GetTouchY","GetTouchY")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1244:15
	makeExtern< Vector2 (*)(int) , GetTouchPosition , SimNode_ExtFuncCall >(lib,"GetTouchPosition","GetTouchPosition")
		->args({"index"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1245:11
	makeExtern< int (*)(int) , GetTouchPointId , SimNode_ExtFuncCall >(lib,"GetTouchPointId","GetTouchPointId")
		->args({"index"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1246:11
	makeExtern< int (*)() , GetTouchPointCount , SimNode_ExtFuncCall >(lib,"GetTouchPointCount","GetTouchPointCount")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1251:12
	makeExtern< void (*)(unsigned int) , SetGesturesEnabled , SimNode_ExtFuncCall >(lib,"SetGesturesEnabled","SetGesturesEnabled")
		->args({"flags"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1252:12
	makeExtern< bool (*)(unsigned int) , IsGestureDetected , SimNode_ExtFuncCall >(lib,"IsGestureDetected","IsGestureDetected")
		->args({"gesture"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1253:11
	makeExtern< int (*)() , GetGestureDetected , SimNode_ExtFuncCall >(lib,"GetGestureDetected","GetGestureDetected")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1254:13
	makeExtern< float (*)() , GetGestureHoldDuration , SimNode_ExtFuncCall >(lib,"GetGestureHoldDuration","GetGestureHoldDuration")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1255:15
	makeExtern< Vector2 (*)() , GetGestureDragVector , SimNode_ExtFuncCall >(lib,"GetGestureDragVector","GetGestureDragVector")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1256:13
	makeExtern< float (*)() , GetGestureDragAngle , SimNode_ExtFuncCall >(lib,"GetGestureDragAngle","GetGestureDragAngle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1257:15
	makeExtern< Vector2 (*)() , GetGesturePinchVector , SimNode_ExtFuncCall >(lib,"GetGesturePinchVector","GetGesturePinchVector")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1258:13
	makeExtern< float (*)() , GetGesturePinchAngle , SimNode_ExtFuncCall >(lib,"GetGesturePinchAngle","GetGesturePinchAngle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1263:12
	makeExtern< void (*)(Camera3D *,int) , UpdateCamera , SimNode_ExtFuncCall >(lib,"UpdateCamera","UpdateCamera")
		->args({"camera","mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1264:12
	makeExtern< void (*)(Camera3D *,Vector3,Vector3,float) , UpdateCameraPro , SimNode_ExtFuncCall >(lib,"UpdateCameraPro","UpdateCameraPro")
		->args({"camera","movement","rotation","zoom"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1272:12
	makeExtern< void (*)(Texture,Rectangle) , SetShapesTexture , SimNode_ExtFuncCall >(lib,"SetShapesTexture","SetShapesTexture")
		->args({"texture","rec"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1273:17
	makeExtern< Texture (*)() , GetShapesTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetShapesTexture","GetShapesTexture")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1274:17
	makeExtern< Rectangle (*)() , GetShapesTextureRectangle , SimNode_ExtFuncCall >(lib,"GetShapesTextureRectangle","GetShapesTextureRectangle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1277:12
	makeExtern< void (*)(int,int,float4) , _rlw_DrawPixel , SimNode_ExtFuncCall >(lib,"DrawPixel","das::_rlw_DrawPixel")
		->args({"posX","posY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1278:12
	makeExtern< void (*)(Vector2,float4) , _rlw_DrawPixelV , SimNode_ExtFuncCall >(lib,"DrawPixelV","das::_rlw_DrawPixelV")
		->args({"position","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1279:12
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_DrawLine , SimNode_ExtFuncCall >(lib,"DrawLine","das::_rlw_DrawLine")
		->args({"startPosX","startPosY","endPosX","endPosY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1280:12
	makeExtern< void (*)(Vector2,Vector2,float4) , _rlw_DrawLineV , SimNode_ExtFuncCall >(lib,"DrawLineV","das::_rlw_DrawLineV")
		->args({"startPos","endPos","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1281:12
	makeExtern< void (*)(Vector2,Vector2,float,float4) , _rlw_DrawLineEx , SimNode_ExtFuncCall >(lib,"DrawLineEx","das::_rlw_DrawLineEx")
		->args({"startPos","endPos","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1282:12
	makeExtern< void (*)(const Vector2 *,int,float4) , _rlw_DrawLineStrip , SimNode_ExtFuncCall >(lib,"DrawLineStrip","das::_rlw_DrawLineStrip")
		->args({"points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1283:12
	makeExtern< void (*)(Vector2,Vector2,float,float4) , _rlw_DrawLineBezier , SimNode_ExtFuncCall >(lib,"DrawLineBezier","das::_rlw_DrawLineBezier")
		->args({"startPos","endPos","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1284:12
	makeExtern< void (*)(Vector2,Vector2,int,int,float4) , _rlw_DrawLineDashed , SimNode_ExtFuncCall >(lib,"DrawLineDashed","das::_rlw_DrawLineDashed")
		->args({"startPos","endPos","dashSize","spaceSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1285:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float4) , _rlw_DrawTriangle , SimNode_ExtFuncCall >(lib,"DrawTriangle","das::_rlw_DrawTriangle")
		->args({"v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1286:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float4,float4,float4) , _rlw_DrawTriangleGradient , SimNode_ExtFuncCall >(lib,"DrawTriangleGradient","das::_rlw_DrawTriangleGradient")
		->args({"v1","v2","v3","c1","c2","c3"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1287:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float4) , _rlw_DrawTriangleLines , SimNode_ExtFuncCall >(lib,"DrawTriangleLines","das::_rlw_DrawTriangleLines")
		->args({"v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1288:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float,float4) , _rlw_DrawTriangleLinesEx , SimNode_ExtFuncCall >(lib,"DrawTriangleLinesEx","das::_rlw_DrawTriangleLinesEx")
		->args({"v1","v2","v3","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1289:12
	makeExtern< void (*)(const Vector2 *,int,float4) , _rlw_DrawTriangleFan , SimNode_ExtFuncCall >(lib,"DrawTriangleFan","das::_rlw_DrawTriangleFan")
		->args({"points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1290:12
	makeExtern< void (*)(const Vector2 *,int,float4) , _rlw_DrawTriangleStrip , SimNode_ExtFuncCall >(lib,"DrawTriangleStrip","das::_rlw_DrawTriangleStrip")
		->args({"points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1291:12
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_DrawRectangle , SimNode_ExtFuncCall >(lib,"DrawRectangle","das::_rlw_DrawRectangle")
		->args({"posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1292:12
	makeExtern< void (*)(Vector2,Vector2,float4) , _rlw_DrawRectangleV , SimNode_ExtFuncCall >(lib,"DrawRectangleV","das::_rlw_DrawRectangleV")
		->args({"position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1293:12
	makeExtern< void (*)(Rectangle,float4) , _rlw_DrawRectangleRec , SimNode_ExtFuncCall >(lib,"DrawRectangleRec","das::_rlw_DrawRectangleRec")
		->args({"rec","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1294:12
	makeExtern< void (*)(Rectangle,Vector2,float,float4) , _rlw_DrawRectanglePro , SimNode_ExtFuncCall >(lib,"DrawRectanglePro","das::_rlw_DrawRectanglePro")
		->args({"rec","origin","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1295:12
	makeExtern< void (*)(int,int,int,int,float4,float4) , _rlw_DrawRectangleGradientV , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientV","das::_rlw_DrawRectangleGradientV")
		->args({"posX","posY","width","height","top","bottom"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1296:12
	makeExtern< void (*)(int,int,int,int,float4,float4) , _rlw_DrawRectangleGradientH , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientH","das::_rlw_DrawRectangleGradientH")
		->args({"posX","posY","width","height","left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1297:12
	makeExtern< void (*)(Rectangle,float4,float4,float4,float4) , _rlw_DrawRectangleGradientEx , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientEx","das::_rlw_DrawRectangleGradientEx")
		->args({"rec","col1","col2","col3","col4"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1298:12
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_DrawRectangleLines , SimNode_ExtFuncCall >(lib,"DrawRectangleLines","das::_rlw_DrawRectangleLines")
		->args({"posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1299:12
	makeExtern< void (*)(Rectangle,float,float4) , _rlw_DrawRectangleLinesEx , SimNode_ExtFuncCall >(lib,"DrawRectangleLinesEx","das::_rlw_DrawRectangleLinesEx")
		->args({"rec","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1300:12
	makeExtern< void (*)(Rectangle,float,int,float4) , _rlw_DrawRectangleRounded , SimNode_ExtFuncCall >(lib,"DrawRectangleRounded","das::_rlw_DrawRectangleRounded")
		->args({"rec","roundness","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1301:12
	makeExtern< void (*)(Rectangle,float,int,float4) , _rlw_DrawRectangleRoundedLines , SimNode_ExtFuncCall >(lib,"DrawRectangleRoundedLines","das::_rlw_DrawRectangleRoundedLines")
		->args({"rec","roundness","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1302:12
	makeExtern< void (*)(Rectangle,float,int,float,float4) , _rlw_DrawRectangleRoundedLinesEx , SimNode_ExtFuncCall >(lib,"DrawRectangleRoundedLinesEx","das::_rlw_DrawRectangleRoundedLinesEx")
		->args({"rec","roundness","segments","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1303:12
	makeExtern< void (*)(Vector2,int,float,float,float4) , _rlw_DrawPoly , SimNode_ExtFuncCall >(lib,"DrawPoly","das::_rlw_DrawPoly")
		->args({"center","sides","radius","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1304:12
	makeExtern< void (*)(Vector2,int,float,float,float4) , _rlw_DrawPolyLines , SimNode_ExtFuncCall >(lib,"DrawPolyLines","das::_rlw_DrawPolyLines")
		->args({"center","sides","radius","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1305:12
	makeExtern< void (*)(Vector2,int,float,float,float,float4) , _rlw_DrawPolyLinesEx , SimNode_ExtFuncCall >(lib,"DrawPolyLinesEx","das::_rlw_DrawPolyLinesEx")
		->args({"center","sides","radius","rotation","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1306:12
	makeExtern< void (*)(int,int,float,float4) , _rlw_DrawCircle , SimNode_ExtFuncCall >(lib,"DrawCircle","das::_rlw_DrawCircle")
		->args({"centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1307:12
	makeExtern< void (*)(Vector2,float,float4) , _rlw_DrawCircleV , SimNode_ExtFuncCall >(lib,"DrawCircleV","das::_rlw_DrawCircleV")
		->args({"center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1308:12
	makeExtern< void (*)(Vector2,float,float4,float4) , _rlw_DrawCircleGradient , SimNode_ExtFuncCall >(lib,"DrawCircleGradient","das::_rlw_DrawCircleGradient")
		->args({"center","radius","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

