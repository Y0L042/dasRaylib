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
void Module_dasRaylib::initFunctions_6() {
// from raylib.h:1309:12
	makeExtern< void (*)(Vector2,float,float,float,int,float4) , _rlw_DrawCircleSector , SimNode_ExtFuncCall >(lib,"DrawCircleSector","das::_rlw_DrawCircleSector")
		->args({"center","radius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1310:12
	makeExtern< void (*)(Vector2,float,float,float,int,float4) , _rlw_DrawCircleSectorLines , SimNode_ExtFuncCall >(lib,"DrawCircleSectorLines","das::_rlw_DrawCircleSectorLines")
		->args({"center","radius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1311:12
	makeExtern< void (*)(Vector2,float,float,float,int,float,float4) , _rlw_DrawCircleSectorLinesEx , SimNode_ExtFuncCall >(lib,"DrawCircleSectorLinesEx","das::_rlw_DrawCircleSectorLinesEx")
		->args({"center","radius","startAngle","endAngle","segments","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1312:12
	makeExtern< void (*)(int,int,float,float4) , _rlw_DrawCircleLines , SimNode_ExtFuncCall >(lib,"DrawCircleLines","das::_rlw_DrawCircleLines")
		->args({"centerX","centerY","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1313:12
	makeExtern< void (*)(Vector2,float,float4) , _rlw_DrawCircleLinesV , SimNode_ExtFuncCall >(lib,"DrawCircleLinesV","das::_rlw_DrawCircleLinesV")
		->args({"center","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1314:12
	makeExtern< void (*)(Vector2,float,float,float4) , _rlw_DrawCircleLinesEx , SimNode_ExtFuncCall >(lib,"DrawCircleLinesEx","das::_rlw_DrawCircleLinesEx")
		->args({"center","radius","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1315:12
	makeExtern< void (*)(int,int,float,float,float4) , _rlw_DrawEllipse , SimNode_ExtFuncCall >(lib,"DrawEllipse","das::_rlw_DrawEllipse")
		->args({"centerX","centerY","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1316:12
	makeExtern< void (*)(Vector2,float,float,float4) , _rlw_DrawEllipseV , SimNode_ExtFuncCall >(lib,"DrawEllipseV","das::_rlw_DrawEllipseV")
		->args({"center","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1317:12
	makeExtern< void (*)(int,int,float,float,float4) , _rlw_DrawEllipseLines , SimNode_ExtFuncCall >(lib,"DrawEllipseLines","das::_rlw_DrawEllipseLines")
		->args({"centerX","centerY","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1318:12
	makeExtern< void (*)(Vector2,float,float,float4) , _rlw_DrawEllipseLinesV , SimNode_ExtFuncCall >(lib,"DrawEllipseLinesV","das::_rlw_DrawEllipseLinesV")
		->args({"center","radiusH","radiusV","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1319:12
	makeExtern< void (*)(Vector2,float,float,float,float4) , _rlw_DrawEllipseLinesEx , SimNode_ExtFuncCall >(lib,"DrawEllipseLinesEx","das::_rlw_DrawEllipseLinesEx")
		->args({"center","radiusH","radiusV","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1320:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,float4) , _rlw_DrawRing , SimNode_ExtFuncCall >(lib,"DrawRing","das::_rlw_DrawRing")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1321:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,float4) , _rlw_DrawRingLines , SimNode_ExtFuncCall >(lib,"DrawRingLines","das::_rlw_DrawRingLines")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1322:12
	makeExtern< void (*)(Vector2,float,float,float,float,int,float,float4) , _rlw_DrawRingLinesEx , SimNode_ExtFuncCall >(lib,"DrawRingLinesEx","das::_rlw_DrawRingLinesEx")
		->args({"center","innerRadius","outerRadius","startAngle","endAngle","segments","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1325:12
	makeExtern< void (*)(const Vector2 *,int,float,float4) , _rlw_DrawSplineLinear , SimNode_ExtFuncCall >(lib,"DrawSplineLinear","das::_rlw_DrawSplineLinear")
		->args({"points","pointCount","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1326:12
	makeExtern< void (*)(const Vector2 *,int,float,float4) , _rlw_DrawSplineBasis , SimNode_ExtFuncCall >(lib,"DrawSplineBasis","das::_rlw_DrawSplineBasis")
		->args({"points","pointCount","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1327:12
	makeExtern< void (*)(const Vector2 *,int,float,float4) , _rlw_DrawSplineCatmullRom , SimNode_ExtFuncCall >(lib,"DrawSplineCatmullRom","das::_rlw_DrawSplineCatmullRom")
		->args({"points","pointCount","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1328:12
	makeExtern< void (*)(const Vector2 *,int,float,float4) , _rlw_DrawSplineBezierQuadratic , SimNode_ExtFuncCall >(lib,"DrawSplineBezierQuadratic","das::_rlw_DrawSplineBezierQuadratic")
		->args({"points","pointCount","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1329:12
	makeExtern< void (*)(const Vector2 *,int,float,float4) , _rlw_DrawSplineBezierCubic , SimNode_ExtFuncCall >(lib,"DrawSplineBezierCubic","das::_rlw_DrawSplineBezierCubic")
		->args({"points","pointCount","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1330:12
	makeExtern< void (*)(Vector2,Vector2,float,float4) , _rlw_DrawSplineSegmentLinear , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentLinear","das::_rlw_DrawSplineSegmentLinear")
		->args({"p1","p2","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1331:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Vector2,float,float4) , _rlw_DrawSplineSegmentBasis , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentBasis","das::_rlw_DrawSplineSegmentBasis")
		->args({"p1","p2","p3","p4","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1332:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Vector2,float,float4) , _rlw_DrawSplineSegmentCatmullRom , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentCatmullRom","das::_rlw_DrawSplineSegmentCatmullRom")
		->args({"p1","p2","p3","p4","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1333:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float,float4) , _rlw_DrawSplineSegmentBezierQuadratic , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentBezierQuadratic","das::_rlw_DrawSplineSegmentBezierQuadratic")
		->args({"p1","c2","p3","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1334:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Vector2,float,float4) , _rlw_DrawSplineSegmentBezierCubic , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentBezierCubic","das::_rlw_DrawSplineSegmentBezierCubic")
		->args({"p1","c2","c3","p4","thick","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1337:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , GetSplinePointLinear , SimNode_ExtFuncCall >(lib,"GetSplinePointLinear","GetSplinePointLinear")
		->args({"startPos","endPos","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1338:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,Vector2,float) , GetSplinePointBasis , SimNode_ExtFuncCall >(lib,"GetSplinePointBasis","GetSplinePointBasis")
		->args({"p1","p2","p3","p4","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1339:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,Vector2,float) , GetSplinePointCatmullRom , SimNode_ExtFuncCall >(lib,"GetSplinePointCatmullRom","GetSplinePointCatmullRom")
		->args({"p1","p2","p3","p4","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1340:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,float) , GetSplinePointBezierQuadratic , SimNode_ExtFuncCall >(lib,"GetSplinePointBezierQuadratic","GetSplinePointBezierQuadratic")
		->args({"p1","c2","p3","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1341:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,Vector2,float) , GetSplinePointBezierCubic , SimNode_ExtFuncCall >(lib,"GetSplinePointBezierCubic","GetSplinePointBezierCubic")
		->args({"p1","c2","c3","p4","t"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1344:12
	makeExtern< bool (*)(Rectangle,Rectangle) , CheckCollisionRecs , SimNode_ExtFuncCall >(lib,"CheckCollisionRecs","CheckCollisionRecs")
		->args({"rec1","rec2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1345:12
	makeExtern< bool (*)(Vector2,float,Vector2,float) , CheckCollisionCircles , SimNode_ExtFuncCall >(lib,"CheckCollisionCircles","CheckCollisionCircles")
		->args({"center1","radius1","center2","radius2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1346:12
	makeExtern< bool (*)(Vector2,float,Rectangle) , CheckCollisionCircleRec , SimNode_ExtFuncCall >(lib,"CheckCollisionCircleRec","CheckCollisionCircleRec")
		->args({"center","radius","rec"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1347:12
	makeExtern< bool (*)(Vector2,float,Vector2,Vector2) , CheckCollisionCircleLine , SimNode_ExtFuncCall >(lib,"CheckCollisionCircleLine","CheckCollisionCircleLine")
		->args({"center","radius","p1","p2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1348:12
	makeExtern< bool (*)(Vector2,Rectangle) , CheckCollisionPointRec , SimNode_ExtFuncCall >(lib,"CheckCollisionPointRec","CheckCollisionPointRec")
		->args({"point","rec"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1349:12
	makeExtern< bool (*)(Vector2,Vector2,float) , CheckCollisionPointCircle , SimNode_ExtFuncCall >(lib,"CheckCollisionPointCircle","CheckCollisionPointCircle")
		->args({"point","center","radius"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1350:12
	makeExtern< bool (*)(Vector2,Vector2,Vector2,Vector2) , CheckCollisionPointTriangle , SimNode_ExtFuncCall >(lib,"CheckCollisionPointTriangle","CheckCollisionPointTriangle")
		->args({"point","p1","p2","p3"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1351:12
	makeExtern< bool (*)(Vector2,Vector2,Vector2,int) , CheckCollisionPointLine , SimNode_ExtFuncCall >(lib,"CheckCollisionPointLine","CheckCollisionPointLine")
		->args({"point","p1","p2","threshold"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1352:12
	makeExtern< bool (*)(Vector2,const Vector2 *,int) , CheckCollisionPointPoly , SimNode_ExtFuncCall >(lib,"CheckCollisionPointPoly","CheckCollisionPointPoly")
		->args({"point","points","pointCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1353:12
	makeExtern< bool (*)(Vector2,Vector2,Vector2,Vector2,Vector2 *) , CheckCollisionLines , SimNode_ExtFuncCall >(lib,"CheckCollisionLines","CheckCollisionLines")
		->args({"startPos1","endPos1","startPos2","endPos2","collisionPoint"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1354:17
	makeExtern< Rectangle (*)(Rectangle,Rectangle) , GetCollisionRec , SimNode_ExtFuncCall >(lib,"GetCollisionRec","GetCollisionRec")
		->args({"rec1","rec2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1362:13
	makeExtern< Image (*)(const char *) , LoadImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImage","LoadImage")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1363:13
	makeExtern< Image (*)(const char *,int,int,int,int) , LoadImageRaw , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageRaw","LoadImageRaw")
		->args({"fileName","width","height","format","headerSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1364:13
	makeExtern< Image (*)(const char *,int *) , LoadImageAnim , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnim","LoadImageAnim")
		->args({"fileName","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1365:13
	makeExtern< Image (*)(const char *,const unsigned char *,int,int *) , LoadImageAnimFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnimFromMemory","LoadImageAnimFromMemory")
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
}
}

