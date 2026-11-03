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
// from raylib.h:1241:11
	makeExtern< int (*)(int) , GetTouchPointId , SimNode_ExtFuncCall >(lib,"GetTouchPointId","GetTouchPointId")
		->args({"index"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1242:11
	makeExtern< int (*)() , GetTouchPointCount , SimNode_ExtFuncCall >(lib,"GetTouchPointCount","GetTouchPointCount")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1247:12
	makeExtern< void (*)(unsigned int) , SetGesturesEnabled , SimNode_ExtFuncCall >(lib,"SetGesturesEnabled","SetGesturesEnabled")
		->args({"flags"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1248:12
	makeExtern< bool (*)(unsigned int) , IsGestureDetected , SimNode_ExtFuncCall >(lib,"IsGestureDetected","IsGestureDetected")
		->args({"gesture"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1249:11
	makeExtern< int (*)() , GetGestureDetected , SimNode_ExtFuncCall >(lib,"GetGestureDetected","GetGestureDetected")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1250:13
	makeExtern< float (*)() , GetGestureHoldDuration , SimNode_ExtFuncCall >(lib,"GetGestureHoldDuration","GetGestureHoldDuration")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1251:15
	makeExtern< Vector2 (*)() , GetGestureDragVector , SimNode_ExtFuncCall >(lib,"GetGestureDragVector","GetGestureDragVector")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1252:13
	makeExtern< float (*)() , GetGestureDragAngle , SimNode_ExtFuncCall >(lib,"GetGestureDragAngle","GetGestureDragAngle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1253:15
	makeExtern< Vector2 (*)() , GetGesturePinchVector , SimNode_ExtFuncCall >(lib,"GetGesturePinchVector","GetGesturePinchVector")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1254:13
	makeExtern< float (*)() , GetGesturePinchAngle , SimNode_ExtFuncCall >(lib,"GetGesturePinchAngle","GetGesturePinchAngle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1259:12
	makeExtern< void (*)(Camera3D *,int) , UpdateCamera , SimNode_ExtFuncCall >(lib,"UpdateCamera","UpdateCamera")
		->args({"camera","mode"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1260:12
	makeExtern< void (*)(Camera3D *,Vector3,Vector3,float) , UpdateCameraPro , SimNode_ExtFuncCall >(lib,"UpdateCameraPro","UpdateCameraPro")
		->args({"camera","movement","rotation","zoom"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1268:12
	makeExtern< void (*)(Texture,Rectangle) , SetShapesTexture , SimNode_ExtFuncCall >(lib,"SetShapesTexture","SetShapesTexture")
		->args({"texture","source"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1269:17
	makeExtern< Texture (*)() , GetShapesTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetShapesTexture","GetShapesTexture")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1270:17
	makeExtern< Rectangle (*)() , GetShapesTextureRectangle , SimNode_ExtFuncCall >(lib,"GetShapesTextureRectangle","GetShapesTextureRectangle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1273:12
	makeExtern< void (*)(int,int,float4) , _rlw_DrawPixel , SimNode_ExtFuncCall >(lib,"DrawPixel","das::_rlw_DrawPixel")
		->args({"posX","posY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1274:12
	makeExtern< void (*)(Vector2,float4) , _rlw_DrawPixelV , SimNode_ExtFuncCall >(lib,"DrawPixelV","das::_rlw_DrawPixelV")
		->args({"position","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1275:12
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_DrawLine , SimNode_ExtFuncCall >(lib,"DrawLine","das::_rlw_DrawLine")
		->args({"startPosX","startPosY","endPosX","endPosY","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1276:12
	makeExtern< void (*)(Vector2,Vector2,float4) , _rlw_DrawLineV , SimNode_ExtFuncCall >(lib,"DrawLineV","das::_rlw_DrawLineV")
		->args({"startPos","endPos","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1277:12
	makeExtern< void (*)(Vector2,Vector2,float,float4) , _rlw_DrawLineEx , SimNode_ExtFuncCall >(lib,"DrawLineEx","das::_rlw_DrawLineEx")
		->args({"startPos","endPos","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1278:12
	makeExtern< void (*)(const Vector2 *,int,float4) , _rlw_DrawLineStrip , SimNode_ExtFuncCall >(lib,"DrawLineStrip","das::_rlw_DrawLineStrip")
		->args({"points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1279:12
	makeExtern< void (*)(Vector2,Vector2,float,float4) , _rlw_DrawLineBezier , SimNode_ExtFuncCall >(lib,"DrawLineBezier","das::_rlw_DrawLineBezier")
		->args({"startPos","endPos","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1280:12
	makeExtern< void (*)(Vector2,Vector2,int,int,float4) , _rlw_DrawLineDashed , SimNode_ExtFuncCall >(lib,"DrawLineDashed","das::_rlw_DrawLineDashed")
		->args({"startPos","endPos","dashSize","spaceSize","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1281:12
	makeExtern< void (*)(int,int,float,float4) , _rlw_DrawCircle , SimNode_ExtFuncCall >(lib,"DrawCircle","das::_rlw_DrawCircle")
		->args({"centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1282:12
	makeExtern< void (*)(Vector2,float,float4) , _rlw_DrawCircleV , SimNode_ExtFuncCall >(lib,"DrawCircleV","das::_rlw_DrawCircleV")
		->args({"center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1283:12
	makeExtern< void (*)(Vector2,float,float4,float4) , _rlw_DrawCircleGradient , SimNode_ExtFuncCall >(lib,"DrawCircleGradient","das::_rlw_DrawCircleGradient")
		->args({"center","radius","inner","outer"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1284:12
	makeExtern< void (*)(Vector2,float,float,float,int,float4) , _rlw_DrawCircleSector , SimNode_ExtFuncCall >(lib,"DrawCircleSector","das::_rlw_DrawCircleSector")
		->args({"center","radius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1285:12
	makeExtern< void (*)(Vector2,float,float,float,int,float4) , _rlw_DrawCircleSectorLines , SimNode_ExtFuncCall >(lib,"DrawCircleSectorLines","das::_rlw_DrawCircleSectorLines")
		->args({"center","radius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1286:12
	makeExtern< void (*)(int,int,float,float4) , _rlw_DrawCircleLines , SimNode_ExtFuncCall >(lib,"DrawCircleLines","das::_rlw_DrawCircleLines")
		->args({"centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1287:12
	makeExtern< void (*)(Vector2,float,float4) , _rlw_DrawCircleLinesV , SimNode_ExtFuncCall >(lib,"DrawCircleLinesV","das::_rlw_DrawCircleLinesV")
		->args({"center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1288:12
	makeExtern< void (*)(int,int,float,float,float4) , _rlw_DrawEllipse , SimNode_ExtFuncCall >(lib,"DrawEllipse","das::_rlw_DrawEllipse")
		->args({"centerX","centerY","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1289:12
	makeExtern< void (*)(Vector2,float,float,float4) , _rlw_DrawEllipseV , SimNode_ExtFuncCall >(lib,"DrawEllipseV","das::_rlw_DrawEllipseV")
		->args({"center","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1290:12
	makeExtern< void (*)(int,int,float,float,float4) , _rlw_DrawEllipseLines , SimNode_ExtFuncCall >(lib,"DrawEllipseLines","das::_rlw_DrawEllipseLines")
		->args({"centerX","centerY","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1291:12
	makeExtern< void (*)(Vector2,float,float,float4) , _rlw_DrawEllipseLinesV , SimNode_ExtFuncCall >(lib,"DrawEllipseLinesV","das::_rlw_DrawEllipseLinesV")
		->args({"center","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1292:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,float4) , _rlw_DrawRing , SimNode_ExtFuncCall >(lib,"DrawRing","das::_rlw_DrawRing")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1293:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,float4) , _rlw_DrawRingLines , SimNode_ExtFuncCall >(lib,"DrawRingLines","das::_rlw_DrawRingLines")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1294:12
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_DrawRectangle , SimNode_ExtFuncCall >(lib,"DrawRectangle","das::_rlw_DrawRectangle")
		->args({"posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1295:12
	makeExtern< void (*)(Vector2,Vector2,float4) , _rlw_DrawRectangleV , SimNode_ExtFuncCall >(lib,"DrawRectangleV","das::_rlw_DrawRectangleV")
		->args({"position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1296:12
	makeExtern< void (*)(Rectangle,float4) , _rlw_DrawRectangleRec , SimNode_ExtFuncCall >(lib,"DrawRectangleRec","das::_rlw_DrawRectangleRec")
		->args({"rec","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1297:12
	makeExtern< void (*)(Rectangle,Vector2,float,float4) , _rlw_DrawRectanglePro , SimNode_ExtFuncCall >(lib,"DrawRectanglePro","das::_rlw_DrawRectanglePro")
		->args({"rec","origin","rotation","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1298:12
	makeExtern< void (*)(int,int,int,int,float4,float4) , _rlw_DrawRectangleGradientV , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientV","das::_rlw_DrawRectangleGradientV")
		->args({"posX","posY","width","height","top","bottom"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1299:12
	makeExtern< void (*)(int,int,int,int,float4,float4) , _rlw_DrawRectangleGradientH , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientH","das::_rlw_DrawRectangleGradientH")
		->args({"posX","posY","width","height","left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1300:12
	makeExtern< void (*)(Rectangle,float4,float4,float4,float4) , _rlw_DrawRectangleGradientEx , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientEx","das::_rlw_DrawRectangleGradientEx")
		->args({"rec","topLeft","bottomLeft","bottomRight","topRight"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1301:12
	makeExtern< void (*)(int,int,int,int,float4) , _rlw_DrawRectangleLines , SimNode_ExtFuncCall >(lib,"DrawRectangleLines","das::_rlw_DrawRectangleLines")
		->args({"posX","posY","width","height","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1302:12
	makeExtern< void (*)(Rectangle,float,float4) , _rlw_DrawRectangleLinesEx , SimNode_ExtFuncCall >(lib,"DrawRectangleLinesEx","das::_rlw_DrawRectangleLinesEx")
		->args({"rec","lineThick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1303:12
	makeExtern< void (*)(Rectangle,float,int,float4) , _rlw_DrawRectangleRounded , SimNode_ExtFuncCall >(lib,"DrawRectangleRounded","das::_rlw_DrawRectangleRounded")
		->args({"rec","roundness","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1304:12
	makeExtern< void (*)(Rectangle,float,int,float4) , _rlw_DrawRectangleRoundedLines , SimNode_ExtFuncCall >(lib,"DrawRectangleRoundedLines","das::_rlw_DrawRectangleRoundedLines")
		->args({"rec","roundness","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1305:12
	makeExtern< void (*)(Rectangle,float,int,float,float4) , _rlw_DrawRectangleRoundedLinesEx , SimNode_ExtFuncCall >(lib,"DrawRectangleRoundedLinesEx","das::_rlw_DrawRectangleRoundedLinesEx")
		->args({"rec","roundness","segments","lineThick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1306:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float4) , _rlw_DrawTriangle , SimNode_ExtFuncCall >(lib,"DrawTriangle","das::_rlw_DrawTriangle")
		->args({"v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1307:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float4) , _rlw_DrawTriangleLines , SimNode_ExtFuncCall >(lib,"DrawTriangleLines","das::_rlw_DrawTriangleLines")
		->args({"v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

