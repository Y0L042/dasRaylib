// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#pragma once

// Wrappers for raylib functions taking or returning Color / Matrix by value:
// das sees float4 (RGBA 0..1) and float4x4 instead. Helpers: src/cb_dasRaylib.h

namespace das {

// from raylib.h:1047:12
inline void _rlw_ClearBackground(float4 color) { ::ClearBackground(das_rl_color(color)); }
// from raylib.h:1078:12
inline void _rlw_SetShaderValueMatrix(Shader shader, int locIndex, const float4x4 & mat) { ::SetShaderValueMatrix(shader, locIndex, das_rl_matrix(mat)); }
// from raylib.h:1089:14
inline float4x4 _rlw_GetCameraMatrix(Camera3D camera) { return das_rl_float4x4(::GetCameraMatrix(camera)); }
// from raylib.h:1090:14
inline float4x4 _rlw_GetCameraMatrix2D(Camera2D camera) { return das_rl_float4x4(::GetCameraMatrix2D(camera)); }
// from raylib.h:1277:12
inline void _rlw_DrawPixel(int posX, int posY, float4 color) { ::DrawPixel(posX, posY, das_rl_color(color)); }
// from raylib.h:1278:12
inline void _rlw_DrawPixelV(Vector2 position, float4 color) { ::DrawPixelV(position, das_rl_color(color)); }
// from raylib.h:1279:12
inline void _rlw_DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, float4 color) { ::DrawLine(startPosX, startPosY, endPosX, endPosY, das_rl_color(color)); }
// from raylib.h:1280:12
inline void _rlw_DrawLineV(Vector2 startPos, Vector2 endPos, float4 color) { ::DrawLineV(startPos, endPos, das_rl_color(color)); }
// from raylib.h:1281:12
inline void _rlw_DrawLineEx(Vector2 startPos, Vector2 endPos, float thick, float4 color) { ::DrawLineEx(startPos, endPos, thick, das_rl_color(color)); }
// from raylib.h:1282:12
inline void _rlw_DrawLineStrip(const Vector2 * points, int pointCount, float4 color) { ::DrawLineStrip(points, pointCount, das_rl_color(color)); }
// from raylib.h:1283:12
inline void _rlw_DrawLineBezier(Vector2 startPos, Vector2 endPos, float thick, float4 color) { ::DrawLineBezier(startPos, endPos, thick, das_rl_color(color)); }
// from raylib.h:1284:12
inline void _rlw_DrawLineDashed(Vector2 startPos, Vector2 endPos, int dashSize, int spaceSize, float4 color) { ::DrawLineDashed(startPos, endPos, dashSize, spaceSize, das_rl_color(color)); }
// from raylib.h:1285:12
inline void _rlw_DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, float4 color) { ::DrawTriangle(v1, v2, v3, das_rl_color(color)); }
// from raylib.h:1286:12
inline void _rlw_DrawTriangleGradient(Vector2 v1, Vector2 v2, Vector2 v3, float4 c1, float4 c2, float4 c3) { ::DrawTriangleGradient(v1, v2, v3, das_rl_color(c1), das_rl_color(c2), das_rl_color(c3)); }
// from raylib.h:1287:12
inline void _rlw_DrawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, float4 color) { ::DrawTriangleLines(v1, v2, v3, das_rl_color(color)); }
// from raylib.h:1288:12
inline void _rlw_DrawTriangleLinesEx(Vector2 v1, Vector2 v2, Vector2 v3, float thick, float4 color) { ::DrawTriangleLinesEx(v1, v2, v3, thick, das_rl_color(color)); }
// from raylib.h:1289:12
inline void _rlw_DrawTriangleFan(const Vector2 * points, int pointCount, float4 color) { ::DrawTriangleFan(points, pointCount, das_rl_color(color)); }
// from raylib.h:1290:12
inline void _rlw_DrawTriangleStrip(const Vector2 * points, int pointCount, float4 color) { ::DrawTriangleStrip(points, pointCount, das_rl_color(color)); }
// from raylib.h:1291:12
inline void _rlw_DrawRectangle(int posX, int posY, int width, int height, float4 color) { ::DrawRectangle(posX, posY, width, height, das_rl_color(color)); }
// from raylib.h:1292:12
inline void _rlw_DrawRectangleV(Vector2 position, Vector2 size, float4 color) { ::DrawRectangleV(position, size, das_rl_color(color)); }
// from raylib.h:1293:12
inline void _rlw_DrawRectangleRec(Rectangle rec, float4 color) { ::DrawRectangleRec(rec, das_rl_color(color)); }
// from raylib.h:1294:12
inline void _rlw_DrawRectanglePro(Rectangle rec, Vector2 origin, float rotation, float4 color) { ::DrawRectanglePro(rec, origin, rotation, das_rl_color(color)); }
// from raylib.h:1295:12
inline void _rlw_DrawRectangleGradientV(int posX, int posY, int width, int height, float4 top, float4 bottom) { ::DrawRectangleGradientV(posX, posY, width, height, das_rl_color(top), das_rl_color(bottom)); }
// from raylib.h:1296:12
inline void _rlw_DrawRectangleGradientH(int posX, int posY, int width, int height, float4 left, float4 right) { ::DrawRectangleGradientH(posX, posY, width, height, das_rl_color(left), das_rl_color(right)); }
// from raylib.h:1297:12
inline void _rlw_DrawRectangleGradientEx(Rectangle rec, float4 col1, float4 col2, float4 col3, float4 col4) { ::DrawRectangleGradientEx(rec, das_rl_color(col1), das_rl_color(col2), das_rl_color(col3), das_rl_color(col4)); }
// from raylib.h:1298:12
inline void _rlw_DrawRectangleLines(int posX, int posY, int width, int height, float4 color) { ::DrawRectangleLines(posX, posY, width, height, das_rl_color(color)); }
// from raylib.h:1299:12
inline void _rlw_DrawRectangleLinesEx(Rectangle rec, float thick, float4 color) { ::DrawRectangleLinesEx(rec, thick, das_rl_color(color)); }
// from raylib.h:1300:12
inline void _rlw_DrawRectangleRounded(Rectangle rec, float roundness, int segments, float4 color) { ::DrawRectangleRounded(rec, roundness, segments, das_rl_color(color)); }
// from raylib.h:1301:12
inline void _rlw_DrawRectangleRoundedLines(Rectangle rec, float roundness, int segments, float4 color) { ::DrawRectangleRoundedLines(rec, roundness, segments, das_rl_color(color)); }
// from raylib.h:1302:12
inline void _rlw_DrawRectangleRoundedLinesEx(Rectangle rec, float roundness, int segments, float thick, float4 color) { ::DrawRectangleRoundedLinesEx(rec, roundness, segments, thick, das_rl_color(color)); }
// from raylib.h:1303:12
inline void _rlw_DrawPoly(Vector2 center, int sides, float radius, float rotation, float4 color) { ::DrawPoly(center, sides, radius, rotation, das_rl_color(color)); }
// from raylib.h:1304:12
inline void _rlw_DrawPolyLines(Vector2 center, int sides, float radius, float rotation, float4 color) { ::DrawPolyLines(center, sides, radius, rotation, das_rl_color(color)); }
// from raylib.h:1305:12
inline void _rlw_DrawPolyLinesEx(Vector2 center, int sides, float radius, float rotation, float thick, float4 color) { ::DrawPolyLinesEx(center, sides, radius, rotation, thick, das_rl_color(color)); }
// from raylib.h:1306:12
inline void _rlw_DrawCircle(int centerX, int centerY, float radius, float4 color) { ::DrawCircle(centerX, centerY, radius, das_rl_color(color)); }
// from raylib.h:1307:12
inline void _rlw_DrawCircleV(Vector2 center, float radius, float4 color) { ::DrawCircleV(center, radius, das_rl_color(color)); }
// from raylib.h:1308:12
inline void _rlw_DrawCircleGradient(Vector2 center, float radius, float4 inner, float4 outer) { ::DrawCircleGradient(center, radius, das_rl_color(inner), das_rl_color(outer)); }
// from raylib.h:1309:12
inline void _rlw_DrawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, float4 color) { ::DrawCircleSector(center, radius, startAngle, endAngle, segments, das_rl_color(color)); }
// from raylib.h:1310:12
inline void _rlw_DrawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, float4 color) { ::DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, das_rl_color(color)); }
// from raylib.h:1311:12
inline void _rlw_DrawCircleSectorLinesEx(Vector2 center, float radius, float startAngle, float endAngle, int segments, float thick, float4 color) { ::DrawCircleSectorLinesEx(center, radius, startAngle, endAngle, segments, thick, das_rl_color(color)); }
// from raylib.h:1312:12
inline void _rlw_DrawCircleLines(int centerX, int centerY, float radius, float4 color) { ::DrawCircleLines(centerX, centerY, radius, das_rl_color(color)); }
// from raylib.h:1313:12
inline void _rlw_DrawCircleLinesV(Vector2 center, float radius, float4 color) { ::DrawCircleLinesV(center, radius, das_rl_color(color)); }
// from raylib.h:1314:12
inline void _rlw_DrawCircleLinesEx(Vector2 center, float radius, float thick, float4 color) { ::DrawCircleLinesEx(center, radius, thick, das_rl_color(color)); }
// from raylib.h:1315:12
inline void _rlw_DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, float4 color) { ::DrawEllipse(centerX, centerY, radiusH, radiusV, das_rl_color(color)); }
// from raylib.h:1316:12
inline void _rlw_DrawEllipseV(Vector2 center, float radiusH, float radiusV, float4 color) { ::DrawEllipseV(center, radiusH, radiusV, das_rl_color(color)); }
// from raylib.h:1317:12
inline void _rlw_DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, float4 color) { ::DrawEllipseLines(centerX, centerY, radiusH, radiusV, das_rl_color(color)); }
// from raylib.h:1318:12
inline void _rlw_DrawEllipseLinesV(Vector2 center, float radiusH, float radiusV, float4 color) { ::DrawEllipseLinesV(center, radiusH, radiusV, das_rl_color(color)); }
// from raylib.h:1319:12
inline void _rlw_DrawEllipseLinesEx(Vector2 center, float radiusH, float radiusV, float thick, float4 color) { ::DrawEllipseLinesEx(center, radiusH, radiusV, thick, das_rl_color(color)); }
// from raylib.h:1320:12
inline void _rlw_DrawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, float4 color) { ::DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, das_rl_color(color)); }
// from raylib.h:1321:12
inline void _rlw_DrawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, float4 color) { ::DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, das_rl_color(color)); }
// from raylib.h:1322:12
inline void _rlw_DrawRingLinesEx(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, float thick, float4 color) { ::DrawRingLinesEx(center, innerRadius, outerRadius, startAngle, endAngle, segments, thick, das_rl_color(color)); }
// from raylib.h:1325:12
inline void _rlw_DrawSplineLinear(const Vector2 * points, int pointCount, float thick, float4 color) { ::DrawSplineLinear(points, pointCount, thick, das_rl_color(color)); }
// from raylib.h:1326:12
inline void _rlw_DrawSplineBasis(const Vector2 * points, int pointCount, float thick, float4 color) { ::DrawSplineBasis(points, pointCount, thick, das_rl_color(color)); }
// from raylib.h:1327:12
inline void _rlw_DrawSplineCatmullRom(const Vector2 * points, int pointCount, float thick, float4 color) { ::DrawSplineCatmullRom(points, pointCount, thick, das_rl_color(color)); }
// from raylib.h:1328:12
inline void _rlw_DrawSplineBezierQuadratic(const Vector2 * points, int pointCount, float thick, float4 color) { ::DrawSplineBezierQuadratic(points, pointCount, thick, das_rl_color(color)); }
// from raylib.h:1329:12
inline void _rlw_DrawSplineBezierCubic(const Vector2 * points, int pointCount, float thick, float4 color) { ::DrawSplineBezierCubic(points, pointCount, thick, das_rl_color(color)); }
// from raylib.h:1330:12
inline void _rlw_DrawSplineSegmentLinear(Vector2 p1, Vector2 p2, float thick, float4 color) { ::DrawSplineSegmentLinear(p1, p2, thick, das_rl_color(color)); }
// from raylib.h:1331:12
inline void _rlw_DrawSplineSegmentBasis(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, float4 color) { ::DrawSplineSegmentBasis(p1, p2, p3, p4, thick, das_rl_color(color)); }
// from raylib.h:1332:12
inline void _rlw_DrawSplineSegmentCatmullRom(Vector2 p1, Vector2 p2, Vector2 p3, Vector2 p4, float thick, float4 color) { ::DrawSplineSegmentCatmullRom(p1, p2, p3, p4, thick, das_rl_color(color)); }
// from raylib.h:1333:12
inline void _rlw_DrawSplineSegmentBezierQuadratic(Vector2 p1, Vector2 c2, Vector2 p3, float thick, float4 color) { ::DrawSplineSegmentBezierQuadratic(p1, c2, p3, thick, das_rl_color(color)); }
// from raylib.h:1334:12
inline void _rlw_DrawSplineSegmentBezierCubic(Vector2 p1, Vector2 c2, Vector2 c3, Vector2 p4, float thick, float4 color) { ::DrawSplineSegmentBezierCubic(p1, c2, c3, p4, thick, das_rl_color(color)); }
// from raylib.h:1376:13
inline Image _rlw_GenImageColor(int width, int height, float4 color) { return ::GenImageColor(width, height, das_rl_color(color)); }
// from raylib.h:1377:13
inline Image _rlw_GenImageGradientLinear(int width, int height, int direction, float4 start, float4 end) { return ::GenImageGradientLinear(width, height, direction, das_rl_color(start), das_rl_color(end)); }
// from raylib.h:1378:13
inline Image _rlw_GenImageGradientRadial(int width, int height, float density, float4 inner, float4 outer) { return ::GenImageGradientRadial(width, height, density, das_rl_color(inner), das_rl_color(outer)); }
// from raylib.h:1379:13
inline Image _rlw_GenImageGradientSquare(int width, int height, float density, float4 inner, float4 outer) { return ::GenImageGradientSquare(width, height, density, das_rl_color(inner), das_rl_color(outer)); }
// from raylib.h:1380:13
inline Image _rlw_GenImageChecked(int width, int height, int checksX, int checksY, float4 col1, float4 col2) { return ::GenImageChecked(width, height, checksX, checksY, das_rl_color(col1), das_rl_color(col2)); }
// from raylib.h:1390:13
inline Image _rlw_ImageText(const char * text, int fontSize, float4 color) { return ::ImageText(text, fontSize, das_rl_color(color)); }
// from raylib.h:1391:13
inline Image _rlw_ImageTextEx(Font font, const char * text, float fontSize, float spacing, float4 tint) { return ::ImageTextEx(font, text, fontSize, spacing, das_rl_color(tint)); }
// from raylib.h:1393:12
inline void _rlw_ImageToPOT(Image * image, float4 fill) { ::ImageToPOT(image, das_rl_color(fill)); }
// from raylib.h:1396:12
inline void _rlw_ImageAlphaClear(Image * image, float4 color, float threshold) { ::ImageAlphaClear(image, das_rl_color(color), threshold); }
// from raylib.h:1403:12
inline void _rlw_ImageResizeCanvas(Image * image, int newWidth, int newHeight, int offsetX, int offsetY, float4 fill) { ::ImageResizeCanvas(image, newWidth, newHeight, offsetX, offsetY, das_rl_color(fill)); }
// from raylib.h:1411:12
inline void _rlw_ImageColorTint(Image * image, float4 color) { ::ImageColorTint(image, das_rl_color(color)); }
// from raylib.h:1416:12
inline void _rlw_ImageColorReplace(Image * image, float4 color, float4 replace) { ::ImageColorReplace(image, das_rl_color(color), das_rl_color(replace)); }
// from raylib.h:1422:13
inline float4 _rlw_GetImageColor(Image image, int x, int y) { return das_rl_float4(::GetImageColor(image, x, y)); }
// from raylib.h:1426:12
inline void _rlw_ImageClearBackground(Image * dst, float4 color) { ::ImageClearBackground(dst, das_rl_color(color)); }
// from raylib.h:1427:12
inline void _rlw_ImageDrawPixel(Image * dst, int posX, int posY, float4 color) { ::ImageDrawPixel(dst, posX, posY, das_rl_color(color)); }
// from raylib.h:1428:12
inline void _rlw_ImageDrawPixelV(Image * dst, Vector2 position, float4 color) { ::ImageDrawPixelV(dst, position, das_rl_color(color)); }
// from raylib.h:1429:12
inline void _rlw_ImageDrawLine(Image * dst, int startPosX, int startPosY, int endPosX, int endPosY, float4 color) { ::ImageDrawLine(dst, startPosX, startPosY, endPosX, endPosY, das_rl_color(color)); }
// from raylib.h:1430:12
inline void _rlw_ImageDrawLineV(Image * dst, Vector2 start, Vector2 end, float4 color) { ::ImageDrawLineV(dst, start, end, das_rl_color(color)); }
// from raylib.h:1431:12
inline void _rlw_ImageDrawLineEx(Image * dst, Vector2 start, Vector2 end, int thick, float4 color) { ::ImageDrawLineEx(dst, start, end, thick, das_rl_color(color)); }
// from raylib.h:1432:12
inline void _rlw_ImageDrawLineStrip(Image * dst, const Vector2 * points, int pointCount, float4 color) { ::ImageDrawLineStrip(dst, points, pointCount, das_rl_color(color)); }
// from raylib.h:1433:12
inline void _rlw_ImageDrawTriangle(Image * dst, Vector2 v1, Vector2 v2, Vector2 v3, float4 color) { ::ImageDrawTriangle(dst, v1, v2, v3, das_rl_color(color)); }
// from raylib.h:1434:12
inline void _rlw_ImageDrawTriangleGradient(Image * dst, Vector2 v1, Vector2 v2, Vector2 v3, float4 c1, float4 c2, float4 c3) { ::ImageDrawTriangleGradient(dst, v1, v2, v3, das_rl_color(c1), das_rl_color(c2), das_rl_color(c3)); }
// from raylib.h:1435:12
inline void _rlw_ImageDrawTriangleLines(Image * dst, Vector2 v1, Vector2 v2, Vector2 v3, float4 color) { ::ImageDrawTriangleLines(dst, v1, v2, v3, das_rl_color(color)); }
// from raylib.h:1436:12
inline void _rlw_ImageDrawTriangleFan(Image * dst, const Vector2 * points, int pointCount, float4 color) { ::ImageDrawTriangleFan(dst, points, pointCount, das_rl_color(color)); }
// from raylib.h:1437:12
inline void _rlw_ImageDrawTriangleStrip(Image * dst, const Vector2 * points, int pointCount, float4 color) { ::ImageDrawTriangleStrip(dst, points, pointCount, das_rl_color(color)); }
// from raylib.h:1438:12
inline void _rlw_ImageDrawRectangle(Image * dst, int posX, int posY, int width, int height, float4 color) { ::ImageDrawRectangle(dst, posX, posY, width, height, das_rl_color(color)); }
// from raylib.h:1439:12
inline void _rlw_ImageDrawRectangleV(Image * dst, Vector2 position, Vector2 size, float4 color) { ::ImageDrawRectangleV(dst, position, size, das_rl_color(color)); }
// from raylib.h:1440:12
inline void _rlw_ImageDrawRectangleRec(Image * dst, Rectangle rec, float4 color) { ::ImageDrawRectangleRec(dst, rec, das_rl_color(color)); }
// from raylib.h:1441:12
inline void _rlw_ImageDrawRectanglePro(Image * dst, Rectangle rec, Vector2 origin, float rotation, float4 color) { ::ImageDrawRectanglePro(dst, rec, origin, rotation, das_rl_color(color)); }
// from raylib.h:1442:12
inline void _rlw_ImageDrawRectangleLines(Image * dst, int posX, int posY, int width, int height, float4 color) { ::ImageDrawRectangleLines(dst, posX, posY, width, height, das_rl_color(color)); }
// from raylib.h:1443:12
inline void _rlw_ImageDrawRectangleLinesEx(Image * dst, Rectangle rec, int thick, float4 color) { ::ImageDrawRectangleLinesEx(dst, rec, thick, das_rl_color(color)); }
// from raylib.h:1444:12
inline void _rlw_ImageDrawRectangleGradientEx(Image * dst, Rectangle rec, float4 col1, float4 col2, float4 col3, float4 col4) { ::ImageDrawRectangleGradientEx(dst, rec, das_rl_color(col1), das_rl_color(col2), das_rl_color(col3), das_rl_color(col4)); }
// from raylib.h:1445:12
inline void _rlw_ImageDrawCircle(Image * dst, int centerX, int centerY, int radius, float4 color) { ::ImageDrawCircle(dst, centerX, centerY, radius, das_rl_color(color)); }
// from raylib.h:1446:12
inline void _rlw_ImageDrawCircleV(Image * dst, Vector2 center, int radius, float4 color) { ::ImageDrawCircleV(dst, center, radius, das_rl_color(color)); }
// from raylib.h:1447:12
inline void _rlw_ImageDrawCircleLines(Image * dst, int centerX, int centerY, int radius, float4 color) { ::ImageDrawCircleLines(dst, centerX, centerY, radius, das_rl_color(color)); }
// from raylib.h:1448:12
inline void _rlw_ImageDrawCircleLinesV(Image * dst, Vector2 center, int radius, float4 color) { ::ImageDrawCircleLinesV(dst, center, radius, das_rl_color(color)); }
// from raylib.h:1449:12
inline void _rlw_ImageDrawCircleGradient(Image * dst, Vector2 center, float radius, float4 inner, float4 outer) { ::ImageDrawCircleGradient(dst, center, radius, das_rl_color(inner), das_rl_color(outer)); }
// from raylib.h:1451:12
inline void _rlw_ImageDrawImage(Image * dst, Image src, int posX, int posY, float4 tint) { ::ImageDrawImage(dst, src, posX, posY, das_rl_color(tint)); }
// from raylib.h:1452:12
inline void _rlw_ImageDrawImageEx(Image * dst, Image src, Vector2 position, float rotation, float scale, float4 tint) { ::ImageDrawImageEx(dst, src, position, rotation, scale, das_rl_color(tint)); }
// from raylib.h:1453:12
inline void _rlw_ImageDrawImageRec(Image * dst, Image src, Rectangle srcRec, Vector2 position, float4 tint) { ::ImageDrawImageRec(dst, src, srcRec, position, das_rl_color(tint)); }
// from raylib.h:1454:12
inline void _rlw_ImageDrawImagePro(Image * dst, Image src, Rectangle srcRec, Rectangle dstRec, Vector2 origin, float rotation, float4 tint) { ::ImageDrawImagePro(dst, src, srcRec, dstRec, origin, rotation, das_rl_color(tint)); }
// from raylib.h:1455:12
inline void _rlw_ImageDrawText(Image * dst, const char * text, int posX, int posY, int fontSize, float4 color) { ::ImageDrawText(dst, text, posX, posY, fontSize, das_rl_color(color)); }
// from raylib.h:1456:12
inline void _rlw_ImageDrawTextEx(Image * dst, Font font, const char * text, Vector2 position, float fontSize, float spacing, float4 tint) { ::ImageDrawTextEx(dst, font, text, position, fontSize, spacing, das_rl_color(tint)); }
// from raylib.h:1457:12
inline void _rlw_ImageDrawTextPro(Image * dst, Font font, const char * text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, float4 tint) { ::ImageDrawTextPro(dst, font, text, position, origin, rotation, fontSize, spacing, das_rl_color(tint)); }
// from raylib.h:1479:12
inline void _rlw_DrawTexture(Texture texture, int posX, int posY, float4 tint) { ::DrawTexture(texture, posX, posY, das_rl_color(tint)); }
// from raylib.h:1480:12
inline void _rlw_DrawTextureV(Texture texture, Vector2 position, float4 tint) { ::DrawTextureV(texture, position, das_rl_color(tint)); }
// from raylib.h:1481:12
inline void _rlw_DrawTextureEx(Texture texture, Vector2 position, float rotation, float scale, float4 tint) { ::DrawTextureEx(texture, position, rotation, scale, das_rl_color(tint)); }
// from raylib.h:1482:12
inline void _rlw_DrawTextureRec(Texture texture, Rectangle rec, Vector2 position, float4 tint) { ::DrawTextureRec(texture, rec, position, das_rl_color(tint)); }
// from raylib.h:1483:12
inline void _rlw_DrawTexturePro(Texture texture, Rectangle srcrec, Rectangle dstrec, Vector2 origin, float rotation, float4 tint) { ::DrawTexturePro(texture, srcrec, dstrec, origin, rotation, das_rl_color(tint)); }
// from raylib.h:1484:12
inline void _rlw_DrawTextureNPatch(Texture texture, NPatchInfo nPatchInfo, Rectangle dstrec, Vector2 origin, float rotation, float4 tint) { ::DrawTextureNPatch(texture, nPatchInfo, dstrec, origin, rotation, das_rl_color(tint)); }
// from raylib.h:1487:12
inline bool _rlw_ColorIsEqual(float4 col1, float4 col2) { return ::ColorIsEqual(das_rl_color(col1), das_rl_color(col2)); }
// from raylib.h:1488:13
inline float4 _rlw_Fade(float4 color, float alpha) { return das_rl_float4(::Fade(das_rl_color(color), alpha)); }
// from raylib.h:1489:11
inline int _rlw_ColorToInt(float4 color) { return ::ColorToInt(das_rl_color(color)); }
// from raylib.h:1490:15
inline Vector4 _rlw_ColorNormalize(float4 color) { return ::ColorNormalize(das_rl_color(color)); }
// from raylib.h:1491:13
inline float4 _rlw_ColorFromNormalized(Vector4 normalized) { return das_rl_float4(::ColorFromNormalized(normalized)); }
// from raylib.h:1492:15
inline Vector3 _rlw_ColorToHSV(float4 color) { return ::ColorToHSV(das_rl_color(color)); }
// from raylib.h:1493:13
inline float4 _rlw_ColorFromHSV(float hue, float saturation, float value) { return das_rl_float4(::ColorFromHSV(hue, saturation, value)); }
// from raylib.h:1494:13
inline float4 _rlw_ColorTint(float4 color, float4 tint) { return das_rl_float4(::ColorTint(das_rl_color(color), das_rl_color(tint))); }
// from raylib.h:1495:13
inline float4 _rlw_ColorBrightness(float4 color, float factor) { return das_rl_float4(::ColorBrightness(das_rl_color(color), factor)); }
// from raylib.h:1496:13
inline float4 _rlw_ColorContrast(float4 color, float contrast) { return das_rl_float4(::ColorContrast(das_rl_color(color), contrast)); }
// from raylib.h:1497:13
inline float4 _rlw_ColorAlpha(float4 color, float alpha) { return das_rl_float4(::ColorAlpha(das_rl_color(color), alpha)); }
// from raylib.h:1498:13
inline float4 _rlw_ColorAlphaBlend(float4 dst, float4 src, float4 tint) { return das_rl_float4(::ColorAlphaBlend(das_rl_color(dst), das_rl_color(src), das_rl_color(tint))); }
// from raylib.h:1499:13
inline float4 _rlw_ColorLerp(float4 color1, float4 color2, float factor) { return das_rl_float4(::ColorLerp(das_rl_color(color1), das_rl_color(color2), factor)); }
// from raylib.h:1500:13
inline float4 _rlw_GetColor(unsigned int hexValue) { return das_rl_float4(::GetColor(hexValue)); }
// from raylib.h:1501:13
inline float4 _rlw_GetPixelColor(const void * srcPtr, int format) { return das_rl_float4(::GetPixelColor(srcPtr, format)); }
// from raylib.h:1502:12
inline void _rlw_SetPixelColor(void * dstPtr, float4 color, int format) { ::SetPixelColor(dstPtr, das_rl_color(color), format); }
// from raylib.h:1513:12
inline Font _rlw_LoadFontFromImage(Image image, float4 key, int firstChar) { return ::LoadFontFromImage(image, das_rl_color(key), firstChar); }
// from raylib.h:1524:12
inline void _rlw_DrawText(const char * text, int posX, int posY, int fontSize, float4 color) { ::DrawText(text, posX, posY, fontSize, das_rl_color(color)); }
// from raylib.h:1525:12
inline void _rlw_DrawTextEx(Font font, const char * text, Vector2 position, float fontSize, float spacing, float4 tint) { ::DrawTextEx(font, text, position, fontSize, spacing, das_rl_color(tint)); }
// from raylib.h:1526:12
inline void _rlw_DrawTextPro(Font font, const char * text, Vector2 position, Vector2 origin, float rotation, float fontSize, float spacing, float4 tint) { ::DrawTextPro(font, text, position, origin, rotation, fontSize, spacing, das_rl_color(tint)); }
// from raylib.h:1527:12
inline void _rlw_DrawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, float4 tint) { ::DrawTextCodepoint(font, codepoint, position, fontSize, das_rl_color(tint)); }
// from raylib.h:1528:12
inline void _rlw_DrawTextCodepoints(Font font, const int * codepoints, int codepointCount, Vector2 position, float fontSize, float spacing, float4 tint) { ::DrawTextCodepoints(font, codepoints, codepointCount, position, fontSize, spacing, das_rl_color(tint)); }
// from raylib.h:1585:12
inline void _rlw_DrawLine3D(Vector3 startPos, Vector3 endPos, float4 color) { ::DrawLine3D(startPos, endPos, das_rl_color(color)); }
// from raylib.h:1586:12
inline void _rlw_DrawPoint3D(Vector3 position, float4 color) { ::DrawPoint3D(position, das_rl_color(color)); }
// from raylib.h:1587:12
inline void _rlw_DrawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, float4 color) { ::DrawCircle3D(center, radius, rotationAxis, rotationAngle, das_rl_color(color)); }
// from raylib.h:1588:12
inline void _rlw_DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, float4 color) { ::DrawTriangle3D(v1, v2, v3, das_rl_color(color)); }
// from raylib.h:1589:12
inline void _rlw_DrawTriangleStrip3D(const Vector3 * points, int pointCount, float4 color) { ::DrawTriangleStrip3D(points, pointCount, das_rl_color(color)); }
// from raylib.h:1590:12
inline void _rlw_DrawCube(Vector3 position, float width, float height, float length, float4 color) { ::DrawCube(position, width, height, length, das_rl_color(color)); }
// from raylib.h:1591:12
inline void _rlw_DrawCubeV(Vector3 position, Vector3 size, float4 color) { ::DrawCubeV(position, size, das_rl_color(color)); }
// from raylib.h:1592:12
inline void _rlw_DrawCubeWires(Vector3 position, float width, float height, float length, float4 color) { ::DrawCubeWires(position, width, height, length, das_rl_color(color)); }
// from raylib.h:1593:12
inline void _rlw_DrawCubeWiresV(Vector3 position, Vector3 size, float4 color) { ::DrawCubeWiresV(position, size, das_rl_color(color)); }
// from raylib.h:1594:12
inline void _rlw_DrawSphere(Vector3 centerPos, float radius, float4 color) { ::DrawSphere(centerPos, radius, das_rl_color(color)); }
// from raylib.h:1595:12
inline void _rlw_DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, float4 color) { ::DrawSphereEx(centerPos, radius, rings, slices, das_rl_color(color)); }
// from raylib.h:1596:12
inline void _rlw_DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, float4 color) { ::DrawSphereWires(centerPos, radius, rings, slices, das_rl_color(color)); }
// from raylib.h:1597:12
inline void _rlw_DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int sides, float4 color) { ::DrawCylinder(position, radiusTop, radiusBottom, height, sides, das_rl_color(color)); }
// from raylib.h:1598:12
inline void _rlw_DrawCylinderEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, float4 color) { ::DrawCylinderEx(startPos, endPos, startRadius, endRadius, sides, das_rl_color(color)); }
// from raylib.h:1599:12
inline void _rlw_DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int sides, float4 color) { ::DrawCylinderWires(position, radiusTop, radiusBottom, height, sides, das_rl_color(color)); }
// from raylib.h:1600:12
inline void _rlw_DrawCylinderWiresEx(Vector3 startPos, Vector3 endPos, float startRadius, float endRadius, int sides, float4 color) { ::DrawCylinderWiresEx(startPos, endPos, startRadius, endRadius, sides, das_rl_color(color)); }
// from raylib.h:1601:12
inline void _rlw_DrawCapsule(Vector3 startPos, Vector3 endPos, float radius, int rings, int slices, float4 color) { ::DrawCapsule(startPos, endPos, radius, rings, slices, das_rl_color(color)); }
// from raylib.h:1602:12
inline void _rlw_DrawCapsuleWires(Vector3 startPos, Vector3 endPos, float radius, int rings, int slices, float4 color) { ::DrawCapsuleWires(startPos, endPos, radius, rings, slices, das_rl_color(color)); }
// from raylib.h:1603:12
inline void _rlw_DrawPlane(Vector3 centerPos, Vector2 size, float4 color) { ::DrawPlane(centerPos, size, das_rl_color(color)); }
// from raylib.h:1604:12
inline void _rlw_DrawRay(Ray ray, float4 color) { ::DrawRay(ray, das_rl_color(color)); }
// from raylib.h:1619:12
inline void _rlw_DrawModel(Model model, Vector3 position, float scale, float4 tint) { ::DrawModel(model, position, scale, das_rl_color(tint)); }
// from raylib.h:1620:12
inline void _rlw_DrawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, float4 tint) { ::DrawModelEx(model, position, rotationAxis, rotationAngle, scale, das_rl_color(tint)); }
// from raylib.h:1621:12
inline void _rlw_DrawModelWires(Model model, Vector3 position, float scale, float4 tint) { ::DrawModelWires(model, position, scale, das_rl_color(tint)); }
// from raylib.h:1622:12
inline void _rlw_DrawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, float4 tint) { ::DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, das_rl_color(tint)); }
// from raylib.h:1623:12
inline void _rlw_DrawBoundingBox(BoundingBox box, float4 color) { ::DrawBoundingBox(box, das_rl_color(color)); }
// from raylib.h:1624:12
inline void _rlw_DrawBillboard(Camera3D camera, Texture texture, Vector3 position, float scale, float4 tint) { ::DrawBillboard(camera, texture, position, scale, das_rl_color(tint)); }
// from raylib.h:1625:12
inline void _rlw_DrawBillboardRec(Camera3D camera, Texture texture, Rectangle rec, Vector3 position, Vector2 size, float4 tint) { ::DrawBillboardRec(camera, texture, rec, position, size, das_rl_color(tint)); }
// from raylib.h:1626:12
inline void _rlw_DrawBillboardPro(Camera3D camera, Texture texture, Rectangle rec, Vector3 position, Vector3 up, Vector2 size, Vector2 origin, float rotation, float4 tint) { ::DrawBillboardPro(camera, texture, rec, position, up, size, origin, rotation, das_rl_color(tint)); }
// from raylib.h:1632:12
inline void _rlw_DrawMesh(Mesh mesh, Material material, const float4x4 & transform) { ::DrawMesh(mesh, material, das_rl_matrix(transform)); }
// from raylib.h:1673:20
inline RayCollision _rlw_GetRayCollisionMesh(Ray ray, Mesh mesh, const float4x4 & transform) { return ::GetRayCollisionMesh(ray, mesh, das_rl_matrix(transform)); }
// from raymath.h:446:15
inline Vector2 _rlw_Vector2Transform(Vector2 v, const float4x4 & mat) { return ::Vector2Transform(v, das_rl_matrix(mat)); }
// from raymath.h:890:15
inline Vector3 _rlw_Vector3Transform(Vector3 v, const float4x4 & mat) { return ::Vector3Transform(v, das_rl_matrix(mat)); }
// from raymath.h:1086:15
inline Vector3 _rlw_Vector3Unproject(Vector3 source, const float4x4 & projection, const float4x4 & view) { return ::Vector3Unproject(source, das_rl_matrix(projection), das_rl_matrix(view)); }
// from raymath.h:1503:13
inline float _rlw_MatrixDeterminant(const float4x4 & mat) { return ::MatrixDeterminant(das_rl_matrix(mat)); }
// from raymath.h:1540:13
inline float _rlw_MatrixTrace(const float4x4 & mat) { return ::MatrixTrace(das_rl_matrix(mat)); }
// from raymath.h:1548:14
inline float4x4 _rlw_MatrixTranspose(const float4x4 & mat) { return das_rl_float4x4(::MatrixTranspose(das_rl_matrix(mat))); }
// from raymath.h:1573:14
inline float4x4 _rlw_MatrixInvert(const float4x4 & mat) { return das_rl_float4x4(::MatrixInvert(das_rl_matrix(mat))); }
// from raymath.h:1620:14
inline float4x4 _rlw_MatrixIdentity() { return das_rl_float4x4(::MatrixIdentity()); }
// from raymath.h:1631:14
inline float4x4 _rlw_MatrixAdd(const float4x4 & left, const float4x4 & right) { return das_rl_float4x4(::MatrixAdd(das_rl_matrix(left), das_rl_matrix(right))); }
// from raymath.h:1656:14
inline float4x4 _rlw_MatrixSubtract(const float4x4 & left, const float4x4 & right) { return das_rl_float4x4(::MatrixSubtract(das_rl_matrix(left), das_rl_matrix(right))); }
// from raymath.h:1682:14
inline float4x4 _rlw_MatrixMultiply(const float4x4 & left, const float4x4 & right) { return das_rl_float4x4(::MatrixMultiply(das_rl_matrix(left), das_rl_matrix(right))); }
// from raymath.h:1765:14
inline float4x4 _rlw_MatrixMultiplyValue(const float4x4 & left, float value) { return das_rl_float4x4(::MatrixMultiplyValue(das_rl_matrix(left), value)); }
// from raymath.h:1778:14
inline float4x4 _rlw_MatrixTranslate(float x, float y, float z) { return das_rl_float4x4(::MatrixTranslate(x, y, z)); }
// from raymath.h:1790:14
inline float4x4 _rlw_MatrixRotate(Vector3 axis, float angle) { return das_rl_float4x4(::MatrixRotate(axis, angle)); }
// from raymath.h:1835:14
inline float4x4 _rlw_MatrixRotateX(float angle) { return das_rl_float4x4(::MatrixRotateX(angle)); }
// from raymath.h:1855:14
inline float4x4 _rlw_MatrixRotateY(float angle) { return das_rl_float4x4(::MatrixRotateY(angle)); }
// from raymath.h:1875:14
inline float4x4 _rlw_MatrixRotateZ(float angle) { return das_rl_float4x4(::MatrixRotateZ(angle)); }
// from raymath.h:1896:14
inline float4x4 _rlw_MatrixRotateXYZ(Vector3 angle) { return das_rl_float4x4(::MatrixRotateXYZ(angle)); }
// from raymath.h:1927:14
inline float4x4 _rlw_MatrixRotateZYX(Vector3 angle) { return das_rl_float4x4(::MatrixRotateZYX(angle)); }
// from raymath.h:1962:14
inline float4x4 _rlw_MatrixScale(float x, float y, float z) { return das_rl_float4x4(::MatrixScale(x, y, z)); }
// from raymath.h:1973:14
inline float4x4 _rlw_MatrixFrustum(double left, double right, double bottom, double top, double nearPlane, double farPlane) { return das_rl_float4x4(::MatrixFrustum(left, right, bottom, top, nearPlane, farPlane)); }
// from raymath.h:2006:14
inline float4x4 _rlw_MatrixPerspective(double fovY, double aspect, double nearPlane, double farPlane) { return das_rl_float4x4(::MatrixPerspective(fovY, aspect, nearPlane, farPlane)); }
// from raymath.h:2032:14
inline float4x4 _rlw_MatrixOrtho(double left, double right, double bottom, double top, double nearPlane, double farPlane) { return das_rl_float4x4(::MatrixOrtho(left, right, bottom, top, nearPlane, farPlane)); }
// from raymath.h:2061:14
inline float4x4 _rlw_MatrixLookAt(Vector3 eye, Vector3 target, Vector3 up) { return das_rl_float4x4(::MatrixLookAt(eye, target, up)); }
// from raymath.h:2426:18
inline Vector4 _rlw_QuaternionFromMatrix(const float4x4 & mat) { return ::QuaternionFromMatrix(das_rl_matrix(mat)); }
// from raymath.h:2490:14
inline float4x4 _rlw_QuaternionToMatrix(Vector4 q) { return das_rl_float4x4(::QuaternionToMatrix(q)); }
// from raymath.h:2646:18
inline Vector4 _rlw_QuaternionTransform(Vector4 q, const float4x4 & mat) { return ::QuaternionTransform(q, das_rl_matrix(mat)); }
// from raymath.h:2678:14
inline float4x4 _rlw_MatrixCompose(Vector3 translation, Vector4 rotation, Vector3 scale) { return das_rl_float4x4(::MatrixCompose(translation, rotation, scale)); }
// from raymath.h:2731:12
inline void _rlw_MatrixDecompose(const float4x4 & mat, Vector3 * translation, Vector4 * rotation, Vector3 * scale) { ::MatrixDecompose(das_rl_matrix(mat), translation, rotation, scale); }
// from rcamera.h:156:14
inline float4x4 _rlw_GetCameraViewMatrix(Camera3D * camera) { return das_rl_float4x4(::GetCameraViewMatrix(camera)); }
// from rcamera.h:157:14
inline float4x4 _rlw_GetCameraProjectionMatrix(Camera3D * camera, float aspect) { return das_rl_float4x4(::GetCameraProjectionMatrix(camera, aspect)); }
}
