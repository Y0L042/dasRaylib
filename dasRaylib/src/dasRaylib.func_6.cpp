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
// from raylib.h:1308:12
	makeExtern< void (*)(const Vector2 *,int,Color) , DrawTriangleFan , SimNode_ExtFuncCall >(lib,"DrawTriangleFan","DrawTriangleFan")
		->args({"points","pointCount","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1309:12
	makeExtern< void (*)(const Vector2 *,int,Color) , DrawTriangleStrip , SimNode_ExtFuncCall >(lib,"DrawTriangleStrip","DrawTriangleStrip")
		->args({"points","pointCount","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1310:12
	makeExtern< void (*)(Vector2,int,float,float,Color) , DrawPoly , SimNode_ExtFuncCall >(lib,"DrawPoly","DrawPoly")
		->args({"center","sides","radius","rotation","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1311:12
	makeExtern< void (*)(Vector2,int,float,float,Color) , DrawPolyLines , SimNode_ExtFuncCall >(lib,"DrawPolyLines","DrawPolyLines")
		->args({"center","sides","radius","rotation","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1312:12
	makeExtern< void (*)(Vector2,int,float,float,float,Color) , DrawPolyLinesEx , SimNode_ExtFuncCall >(lib,"DrawPolyLinesEx","DrawPolyLinesEx")
		->args({"center","sides","radius","rotation","lineThick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1315:12
	makeExtern< void (*)(const Vector2 *,int,float,Color) , DrawSplineLinear , SimNode_ExtFuncCall >(lib,"DrawSplineLinear","DrawSplineLinear")
		->args({"points","pointCount","thick","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1316:12
	makeExtern< void (*)(const Vector2 *,int,float,Color) , DrawSplineBasis , SimNode_ExtFuncCall >(lib,"DrawSplineBasis","DrawSplineBasis")
		->args({"points","pointCount","thick","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1317:12
	makeExtern< void (*)(const Vector2 *,int,float,Color) , DrawSplineCatmullRom , SimNode_ExtFuncCall >(lib,"DrawSplineCatmullRom","DrawSplineCatmullRom")
		->args({"points","pointCount","thick","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1318:12
	makeExtern< void (*)(const Vector2 *,int,float,Color) , DrawSplineBezierQuadratic , SimNode_ExtFuncCall >(lib,"DrawSplineBezierQuadratic","DrawSplineBezierQuadratic")
		->args({"points","pointCount","thick","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1319:12
	makeExtern< void (*)(const Vector2 *,int,float,Color) , DrawSplineBezierCubic , SimNode_ExtFuncCall >(lib,"DrawSplineBezierCubic","DrawSplineBezierCubic")
		->args({"points","pointCount","thick","color"})
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1320:12
	makeExtern< void (*)(Vector2,Vector2,float,Color) , DrawSplineSegmentLinear , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentLinear","DrawSplineSegmentLinear")
		->args({"p1","p2","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1321:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Vector2,float,Color) , DrawSplineSegmentBasis , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentBasis","DrawSplineSegmentBasis")
		->args({"p1","p2","p3","p4","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1322:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Vector2,float,Color) , DrawSplineSegmentCatmullRom , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentCatmullRom","DrawSplineSegmentCatmullRom")
		->args({"p1","p2","p3","p4","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1323:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,float,Color) , DrawSplineSegmentBezierQuadratic , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentBezierQuadratic","DrawSplineSegmentBezierQuadratic")
		->args({"p1","c2","p3","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1324:12
	makeExtern< void (*)(Vector2,Vector2,Vector2,Vector2,float,Color) , DrawSplineSegmentBezierCubic , SimNode_ExtFuncCall >(lib,"DrawSplineSegmentBezierCubic","DrawSplineSegmentBezierCubic")
		->args({"p1","c2","c3","p4","thick","color"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1327:15
	makeExtern< Vector2 (*)(Vector2,Vector2,float) , GetSplinePointLinear , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetSplinePointLinear","GetSplinePointLinear")
		->args({"startPos","endPos","t"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1328:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,Vector2,float) , GetSplinePointBasis , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetSplinePointBasis","GetSplinePointBasis")
		->args({"p1","p2","p3","p4","t"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1329:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,Vector2,float) , GetSplinePointCatmullRom , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetSplinePointCatmullRom","GetSplinePointCatmullRom")
		->args({"p1","p2","p3","p4","t"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1330:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,float) , GetSplinePointBezierQuad , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetSplinePointBezierQuad","GetSplinePointBezierQuad")
		->args({"p1","c2","p3","t"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1331:15
	makeExtern< Vector2 (*)(Vector2,Vector2,Vector2,Vector2,float) , GetSplinePointBezierCubic , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetSplinePointBezierCubic","GetSplinePointBezierCubic")
		->args({"p1","c2","c3","p4","t"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1334:12
	makeExtern< bool (*)(Rectangle,Rectangle) , CheckCollisionRecs , SimNode_ExtFuncCall >(lib,"CheckCollisionRecs","CheckCollisionRecs")
		->args({"rec1","rec2"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1335:12
	makeExtern< bool (*)(Vector2,float,Vector2,float) , CheckCollisionCircles , SimNode_ExtFuncCall >(lib,"CheckCollisionCircles","CheckCollisionCircles")
		->args({"center1","radius1","center2","radius2"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1336:12
	makeExtern< bool (*)(Vector2,float,Rectangle) , CheckCollisionCircleRec , SimNode_ExtFuncCall >(lib,"CheckCollisionCircleRec","CheckCollisionCircleRec")
		->args({"center","radius","rec"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1337:12
	makeExtern< bool (*)(Vector2,float,Vector2,Vector2) , CheckCollisionCircleLine , SimNode_ExtFuncCall >(lib,"CheckCollisionCircleLine","CheckCollisionCircleLine")
		->args({"center","radius","p1","p2"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1338:12
	makeExtern< bool (*)(Vector2,Rectangle) , CheckCollisionPointRec , SimNode_ExtFuncCall >(lib,"CheckCollisionPointRec","CheckCollisionPointRec")
		->args({"point","rec"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1339:12
	makeExtern< bool (*)(Vector2,Vector2,float) , CheckCollisionPointCircle , SimNode_ExtFuncCall >(lib,"CheckCollisionPointCircle","CheckCollisionPointCircle")
		->args({"point","center","radius"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1340:12
	makeExtern< bool (*)(Vector2,Vector2,Vector2,Vector2) , CheckCollisionPointTriangle , SimNode_ExtFuncCall >(lib,"CheckCollisionPointTriangle","CheckCollisionPointTriangle")
		->args({"point","p1","p2","p3"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1341:12
	makeExtern< bool (*)(Vector2,Vector2,Vector2,int) , CheckCollisionPointLine , SimNode_ExtFuncCall >(lib,"CheckCollisionPointLine","CheckCollisionPointLine")
		->args({"point","p1","p2","threshold"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1342:12
	makeExtern< bool (*)(Vector2,const Vector2 *,int) , CheckCollisionPointPoly , SimNode_ExtFuncCall >(lib,"CheckCollisionPointPoly","CheckCollisionPointPoly")
		->args({"point","points","pointCount"})
		->arg_type(0,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1343:12
	makeExtern< bool (*)(Vector2,Vector2,Vector2,Vector2,Vector2 *) , CheckCollisionLines , SimNode_ExtFuncCall >(lib,"CheckCollisionLines","CheckCollisionLines")
		->args({"startPos1","endPos1","startPos2","endPos2","collisionPoint"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Vector2>(lib))
		->arg_type(3,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1344:17
	makeExtern< Rectangle (*)(Rectangle,Rectangle) , GetCollisionRec , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetCollisionRec","GetCollisionRec")
		->args({"rec1","rec2"})
		->arg_type(0,makeType<const Rectangle>(lib))
		->arg_type(1,makeType<const Rectangle>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1352:13
	makeExtern< Image (*)(const char *) , LoadImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImage","LoadImage")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1353:13
	makeExtern< Image (*)(const char *,int,int,int,int) , LoadImageRaw , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageRaw","LoadImageRaw")
		->args({"fileName","width","height","format","headerSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1354:13
	makeExtern< Image (*)(const char *,int *) , LoadImageAnim , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnim","LoadImageAnim")
		->args({"fileName","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1355:13
	makeExtern< Image (*)(const char *,const unsigned char *,int,int *) , LoadImageAnimFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageAnimFromMemory","LoadImageAnimFromMemory")
		->args({"fileType","fileData","dataSize","frames"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1356:13
	makeExtern< Image (*)(const char *,const unsigned char *,int) , LoadImageFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageFromMemory","LoadImageFromMemory")
		->args({"fileType","fileData","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1357:13
	makeExtern< Image (*)(Texture) , LoadImageFromTexture , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageFromTexture","LoadImageFromTexture")
		->args({"texture"})
		->arg_type(0,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1358:13
	makeExtern< Image (*)() , LoadImageFromScreen , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadImageFromScreen","LoadImageFromScreen")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1359:12
	makeExtern< bool (*)(Image) , IsImageValid , SimNode_ExtFuncCall >(lib,"IsImageValid","IsImageValid")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1360:12
	makeExtern< void (*)(Image) , UnloadImage , SimNode_ExtFuncCall >(lib,"UnloadImage","UnloadImage")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1361:12
	makeExtern< bool (*)(Image,const char *) , ExportImage , SimNode_ExtFuncCall >(lib,"ExportImage","ExportImage")
		->args({"image","fileName"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1362:22
	makeExtern< unsigned char * (*)(Image,const char *,int *) , ExportImageToMemory , SimNode_ExtFuncCall >(lib,"ExportImageToMemory","ExportImageToMemory")
		->args({"image","fileType","fileSize"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1363:12
	makeExtern< bool (*)(Image,const char *) , ExportImageAsCode , SimNode_ExtFuncCall >(lib,"ExportImageAsCode","ExportImageAsCode")
		->args({"image","fileName"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1366:13
	makeExtern< Image (*)(int,int,Color) , GenImageColor , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageColor","GenImageColor")
		->args({"width","height","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1367:13
	makeExtern< Image (*)(int,int,int,Color,Color) , GenImageGradientLinear , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageGradientLinear","GenImageGradientLinear")
		->args({"width","height","direction","start","end"})
		->arg_type(3,makeType<const Color>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1368:13
	makeExtern< Image (*)(int,int,float,Color,Color) , GenImageGradientRadial , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageGradientRadial","GenImageGradientRadial")
		->args({"width","height","density","inner","outer"})
		->arg_type(3,makeType<const Color>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1369:13
	makeExtern< Image (*)(int,int,float,Color,Color) , GenImageGradientSquare , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageGradientSquare","GenImageGradientSquare")
		->args({"width","height","density","inner","outer"})
		->arg_type(3,makeType<const Color>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1370:13
	makeExtern< Image (*)(int,int,int,int,Color,Color) , GenImageChecked , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageChecked","GenImageChecked")
		->args({"width","height","checksX","checksY","col1","col2"})
		->arg_type(4,makeType<const Color>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1371:13
	makeExtern< Image (*)(int,int,float) , GenImageWhiteNoise , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImageWhiteNoise","GenImageWhiteNoise")
		->args({"width","height","factor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1372:13
	makeExtern< Image (*)(int,int,int,int,float) , GenImagePerlinNoise , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenImagePerlinNoise","GenImagePerlinNoise")
		->args({"width","height","offsetX","offsetY","scale"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

