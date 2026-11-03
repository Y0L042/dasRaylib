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
	makeExtern< Vector2 (*)() , GetGestureDragVector , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetGestureDragVector","GetGestureDragVector")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1252:13
	makeExtern< float (*)() , GetGestureDragAngle , SimNode_ExtFuncCall >(lib,"GetGestureDragAngle","GetGestureDragAngle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1253:15
	makeExtern< Vector2 (*)() , GetGesturePinchVector , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetGesturePinchVector","GetGesturePinchVector")
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
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1268:12
	makeExtern< void (*)(Texture,Rectangle) , SetShapesTexture , SimNode_ExtFuncCall >(lib,"SetShapesTexture","SetShapesTexture")
		->args({"texture","source"})
		->arg_type(0,makeType<const Texture>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1269:17
	makeExtern< Texture (*)() , GetShapesTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetShapesTexture","GetShapesTexture")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1270:17
	makeExtern< Rectangle (*)() , GetShapesTextureRectangle , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetShapesTextureRectangle","GetShapesTextureRectangle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1273:12
	makeExtern< void (*)(int,int,Color) , DrawPixel , SimNode_ExtFuncCall >(lib,"DrawPixel","DrawPixel")
		->args({"posX","posY","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1274:12
	makeExtern< void (*)(Vector2,Color) , DrawPixelV , SimNode_ExtFuncCall >(lib,"DrawPixelV","DrawPixelV")
		->args({"position","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1275:12
	makeExtern< void (*)(int,int,int,int,Color) , DrawLine , SimNode_ExtFuncCall >(lib,"DrawLine","DrawLine")
		->args({"startPosX","startPosY","endPosX","endPosY","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1276:12
	makeExtern< void (*)(Vector2,Vector2,Color) , DrawLineV , SimNode_ExtFuncCall >(lib,"DrawLineV","DrawLineV")
		->args({"startPos","endPos","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1277:12
	makeExtern< void (*)(Vector2,Vector2,float,Color) , DrawLineEx , SimNode_ExtFuncCall >(lib,"DrawLineEx","DrawLineEx")
		->args({"startPos","endPos","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1278:12
	makeExtern< void (*)(const Vector2 *,int,Color) , DrawLineStrip , SimNode_ExtFuncCall >(lib,"DrawLineStrip","DrawLineStrip")
		->args({"points","pointCount","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1279:12
	makeExtern< void (*)(Vector2,Vector2,float,Color) , DrawLineBezier , SimNode_ExtFuncCall >(lib,"DrawLineBezier","DrawLineBezier")
		->args({"startPos","endPos","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1280:12
	makeExtern< void (*)(Vector2,Vector2,int,int,Color) , DrawLineDashed , SimNode_ExtFuncCall >(lib,"DrawLineDashed","DrawLineDashed")
		->args({"startPos","endPos","dashSize","spaceSize","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1281:12
	makeExtern< void (*)(int,int,float,Color) , DrawCircle , SimNode_ExtFuncCall >(lib,"DrawCircle","DrawCircle")
		->args({"centerX","centerY","radius","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1282:12
	makeExtern< void (*)(Vector2,float,Color) , DrawCircleV , SimNode_ExtFuncCall >(lib,"DrawCircleV","DrawCircleV")
		->args({"center","radius","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1283:12
	makeExtern< void (*)(Vector2,float,Color,Color) , DrawCircleGradient , SimNode_ExtFuncCall >(lib,"DrawCircleGradient","DrawCircleGradient")
		->args({"center","radius","inner","outer"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1284:12
	makeExtern< void (*)(Vector2,float,float,float,int,Color) , DrawCircleSector , SimNode_ExtFuncCall >(lib,"DrawCircleSector","DrawCircleSector")
		->args({"center","radius","startAngle","endAngle","segments","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1285:12
	makeExtern< void (*)(Vector2,float,float,float,int,Color) , DrawCircleSectorLines , SimNode_ExtFuncCall >(lib,"DrawCircleSectorLines","DrawCircleSectorLines")
		->args({"center","radius","startAngle","endAngle","segments","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1286:12
	makeExtern< void (*)(int,int,float,Color) , DrawCircleLines , SimNode_ExtFuncCall >(lib,"DrawCircleLines","DrawCircleLines")
		->args({"centerX","centerY","radius","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1287:12
	makeExtern< void (*)(Vector2,float,Color) , DrawCircleLinesV , SimNode_ExtFuncCall >(lib,"DrawCircleLinesV","DrawCircleLinesV")
		->args({"center","radius","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1288:12
	makeExtern< void (*)(int,int,float,float,Color) , DrawEllipse , SimNode_ExtFuncCall >(lib,"DrawEllipse","DrawEllipse")
		->args({"centerX","centerY","radiusH","radiusV","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1289:12
	makeExtern< void (*)(Vector2,float,float,Color) , DrawEllipseV , SimNode_ExtFuncCall >(lib,"DrawEllipseV","DrawEllipseV")
		->args({"center","radiusH","radiusV","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1290:12
	makeExtern< void (*)(int,int,float,float,Color) , DrawEllipseLines , SimNode_ExtFuncCall >(lib,"DrawEllipseLines","DrawEllipseLines")
		->args({"centerX","centerY","radiusH","radiusV","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1291:12
	makeExtern< void (*)(Vector2,float,float,Color) , DrawEllipseLinesV , SimNode_ExtFuncCall >(lib,"DrawEllipseLinesV","DrawEllipseLinesV")
		->args({"center","radiusH","radiusV","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1292:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,Color) , DrawRing , SimNode_ExtFuncCall >(lib,"DrawRing","DrawRing")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(6,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1293:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,Color) , DrawRingLines , SimNode_ExtFuncCall >(lib,"DrawRingLines","DrawRingLines")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(6,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1294:12
	makeExtern< void (*)(int,int,int,int,Color) , DrawRectangle , SimNode_ExtFuncCall >(lib,"DrawRectangle","DrawRectangle")
		->args({"posX","posY","width","height","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1295:12
	makeExtern< void (*)(Vector2,Vector2,Color) , DrawRectangleV , SimNode_ExtFuncCall >(lib,"DrawRectangleV","DrawRectangleV")
		->args({"position","size","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1296:12
	makeExtern< void (*)(Rectangle,Color) , DrawRectangleRec , SimNode_ExtFuncCall >(lib,"DrawRectangleRec","DrawRectangleRec")
		->args({"rec","color"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1297:12
	makeExtern< void (*)(Rectangle,Vector2,float,Color) , DrawRectanglePro , SimNode_ExtFuncCall >(lib,"DrawRectanglePro","DrawRectanglePro")
		->args({"rec","origin","rotation","color"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1298:12
	makeExtern< void (*)(int,int,int,int,Color,Color) , DrawRectangleGradientV , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientV","DrawRectangleGradientV")
		->args({"posX","posY","width","height","top","bottom"})
		->arg_type(4,makeType<const Color>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1299:12
	makeExtern< void (*)(int,int,int,int,Color,Color) , DrawRectangleGradientH , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientH","DrawRectangleGradientH")
		->args({"posX","posY","width","height","left","right"})
		->arg_type(4,makeType<const Color>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1300:12
	makeExtern< void (*)(Rectangle,Color,Color,Color,Color) , DrawRectangleGradientEx , SimNode_ExtFuncCall >(lib,"DrawRectangleGradientEx","DrawRectangleGradientEx")
		->args({"rec","topLeft","bottomLeft","bottomRight","topRight"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1301:12
	makeExtern< void (*)(int,int,int,int,Color) , DrawRectangleLines , SimNode_ExtFuncCall >(lib,"DrawRectangleLines","DrawRectangleLines")
		->args({"posX","posY","width","height","color"})
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1302:12
	makeExtern< void (*)(Rectangle,float,Color) , DrawRectangleLinesEx , SimNode_ExtFuncCall >(lib,"DrawRectangleLinesEx","DrawRectangleLinesEx")
		->args({"rec","lineThick","color"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1303:12
	makeExtern< void (*)(Rectangle,float,int,Color) , DrawRectangleRounded , SimNode_ExtFuncCall >(lib,"DrawRectangleRounded","DrawRectangleRounded")
		->args({"rec","roundness","segments","color"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1304:12
	makeExtern< void (*)(Rectangle,float,int,Color) , DrawRectangleRoundedLines , SimNode_ExtFuncCall >(lib,"DrawRectangleRoundedLines","DrawRectangleRoundedLines")
		->args({"rec","roundness","segments","color"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1305:12
	makeExtern< void (*)(Rectangle,float,int,float,Color) , DrawRectangleRoundedLinesEx , SimNode_ExtFuncCall >(lib,"DrawRectangleRoundedLinesEx","DrawRectangleRoundedLinesEx")
		->args({"rec","roundness","segments","lineThick","color"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1306:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Color) , DrawTriangle , SimNode_ExtFuncCall >(lib,"DrawTriangle","DrawTriangle")
		->args({"v1","v2","v3","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1307:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Color) , DrawTriangleLines , SimNode_ExtFuncCall >(lib,"DrawTriangleLines","DrawTriangleLines")
		->args({"v1","v2","v3","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

