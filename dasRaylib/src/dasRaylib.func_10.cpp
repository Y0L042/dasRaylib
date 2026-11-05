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
void Module_dasRaylib::initFunctions_10() {
// from raylib.h:1555:11
	makeExtern< int (*)(char *,const char *) , TextCopy , SimNode_ExtFuncCall >(lib,"TextCopy","TextCopy")
		->args({"dst","src"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1556:12
	makeExtern< bool (*)(const char *,const char *) , TextIsEqual , SimNode_ExtFuncCall >(lib,"TextIsEqual","TextIsEqual")
		->args({"text1","text2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1557:20
	makeExtern< unsigned int (*)(const char *) , TextLength , SimNode_ExtFuncCall >(lib,"TextLength","TextLength")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1559:19
	makeExtern< const char * (*)(const char *,int,int) , TextSubtext , SimNode_ExtFuncCall >(lib,"TextSubtext","TextSubtext")
		->args({"text","position","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1560:19
	makeExtern< const char * (*)(const char *) , TextRemoveSpaces , SimNode_ExtFuncCall >(lib,"TextRemoveSpaces","TextRemoveSpaces")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1561:13
	makeExtern< char * (*)(const char *,const char *,const char *) , GetTextBetween , SimNode_ExtFuncCall >(lib,"GetTextBetween","GetTextBetween")
		->args({"text","begin","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1562:13
	makeExtern< char * (*)(const char *,const char *,const char *) , TextReplace , SimNode_ExtFuncCall >(lib,"TextReplace","TextReplace")
		->args({"text","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1563:13
	makeExtern< char * (*)(const char *,const char *,const char *) , TextReplaceAlloc , SimNode_ExtFuncCall >(lib,"TextReplaceAlloc","TextReplaceAlloc")
		->args({"text","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1564:13
	makeExtern< char * (*)(const char *,const char *,const char *,const char *) , TextReplaceBetween , SimNode_ExtFuncCall >(lib,"TextReplaceBetween","TextReplaceBetween")
		->args({"text","begin","end","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1565:13
	makeExtern< char * (*)(const char *,const char *,const char *,const char *) , TextReplaceBetweenAlloc , SimNode_ExtFuncCall >(lib,"TextReplaceBetweenAlloc","TextReplaceBetweenAlloc")
		->args({"text","begin","end","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1566:13
	makeExtern< char * (*)(const char *,const char *,int) , TextInsert , SimNode_ExtFuncCall >(lib,"TextInsert","TextInsert")
		->args({"text","insert","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1567:13
	makeExtern< char * (*)(const char *,const char *,int) , TextInsertAlloc , SimNode_ExtFuncCall >(lib,"TextInsertAlloc","TextInsertAlloc")
		->args({"text","insert","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1568:13
	makeExtern< char * (*)(char **,int,const char *) , TextJoin , SimNode_ExtFuncCall >(lib,"TextJoin","TextJoin")
		->args({"textList","count","delimiter"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1569:14
	makeExtern< char ** (*)(const char *,char,int *) , TextSplit , SimNode_ExtFuncCall >(lib,"TextSplit","TextSplit")
		->args({"text","delimiter","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1570:12
	makeExtern< void (*)(char *,const char *,int *) , TextAppend , SimNode_ExtFuncCall >(lib,"TextAppend","TextAppend")
		->args({"text","append","position"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1571:11
	makeExtern< int (*)(const char *,const char *) , TextFindIndex , SimNode_ExtFuncCall >(lib,"TextFindIndex","TextFindIndex")
		->args({"text","search"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1572:13
	makeExtern< char * (*)(const char *) , TextToUpper , SimNode_ExtFuncCall >(lib,"TextToUpper","TextToUpper")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1573:13
	makeExtern< char * (*)(const char *) , TextToLower , SimNode_ExtFuncCall >(lib,"TextToLower","TextToLower")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1574:13
	makeExtern< char * (*)(const char *) , TextToPascal , SimNode_ExtFuncCall >(lib,"TextToPascal","TextToPascal")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1575:13
	makeExtern< char * (*)(const char *) , TextToSnake , SimNode_ExtFuncCall >(lib,"TextToSnake","TextToSnake")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1576:13
	makeExtern< char * (*)(const char *) , TextToCamel , SimNode_ExtFuncCall >(lib,"TextToCamel","TextToCamel")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1577:11
	makeExtern< int (*)(const char *) , TextToInteger , SimNode_ExtFuncCall >(lib,"TextToInteger","TextToInteger")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1578:13
	makeExtern< float (*)(const char *) , TextToFloat , SimNode_ExtFuncCall >(lib,"TextToFloat","TextToFloat")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1585:12
	makeExtern< void (*)(Vector3,Vector3,float4) , _rlw_DrawLine3D , SimNode_ExtFuncCall >(lib,"DrawLine3D","das::_rlw_DrawLine3D")
		->args({"startPos","endPos","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1586:12
	makeExtern< void (*)(Vector3,float4) , _rlw_DrawPoint3D , SimNode_ExtFuncCall >(lib,"DrawPoint3D","das::_rlw_DrawPoint3D")
		->args({"position","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1587:12
	makeExtern< void (*)(Vector3,float,Vector3,float,float4) , _rlw_DrawCircle3D , SimNode_ExtFuncCall >(lib,"DrawCircle3D","das::_rlw_DrawCircle3D")
		->args({"center","radius","rotationAxis","rotationAngle","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1588:12
	makeExtern< void (*)(Vector3,Vector3,Vector3,float4) , _rlw_DrawTriangle3D , SimNode_ExtFuncCall >(lib,"DrawTriangle3D","das::_rlw_DrawTriangle3D")
		->args({"v1","v2","v3","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1589:12
	makeExtern< void (*)(const Vector3 *,int,float4) , _rlw_DrawTriangleStrip3D , SimNode_ExtFuncCall >(lib,"DrawTriangleStrip3D","das::_rlw_DrawTriangleStrip3D")
		->args({"points","pointCount","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1590:12
	makeExtern< void (*)(Vector3,float,float,float,float4) , _rlw_DrawCube , SimNode_ExtFuncCall >(lib,"DrawCube","das::_rlw_DrawCube")
		->args({"position","width","height","length","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1591:12
	makeExtern< void (*)(Vector3,Vector3,float4) , _rlw_DrawCubeV , SimNode_ExtFuncCall >(lib,"DrawCubeV","das::_rlw_DrawCubeV")
		->args({"position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1592:12
	makeExtern< void (*)(Vector3,float,float,float,float4) , _rlw_DrawCubeWires , SimNode_ExtFuncCall >(lib,"DrawCubeWires","das::_rlw_DrawCubeWires")
		->args({"position","width","height","length","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1593:12
	makeExtern< void (*)(Vector3,Vector3,float4) , _rlw_DrawCubeWiresV , SimNode_ExtFuncCall >(lib,"DrawCubeWiresV","das::_rlw_DrawCubeWiresV")
		->args({"position","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1594:12
	makeExtern< void (*)(Vector3,float,float4) , _rlw_DrawSphere , SimNode_ExtFuncCall >(lib,"DrawSphere","das::_rlw_DrawSphere")
		->args({"centerPos","radius","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1595:12
	makeExtern< void (*)(Vector3,float,int,int,float4) , _rlw_DrawSphereEx , SimNode_ExtFuncCall >(lib,"DrawSphereEx","das::_rlw_DrawSphereEx")
		->args({"centerPos","radius","rings","slices","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1596:12
	makeExtern< void (*)(Vector3,float,int,int,float4) , _rlw_DrawSphereWires , SimNode_ExtFuncCall >(lib,"DrawSphereWires","das::_rlw_DrawSphereWires")
		->args({"centerPos","radius","rings","slices","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1597:12
	makeExtern< void (*)(Vector3,float,float,float,int,float4) , _rlw_DrawCylinder , SimNode_ExtFuncCall >(lib,"DrawCylinder","das::_rlw_DrawCylinder")
		->args({"position","radiusTop","radiusBottom","height","sides","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1598:12
	makeExtern< void (*)(Vector3,Vector3,float,float,int,float4) , _rlw_DrawCylinderEx , SimNode_ExtFuncCall >(lib,"DrawCylinderEx","das::_rlw_DrawCylinderEx")
		->args({"startPos","endPos","startRadius","endRadius","sides","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1599:12
	makeExtern< void (*)(Vector3,float,float,float,int,float4) , _rlw_DrawCylinderWires , SimNode_ExtFuncCall >(lib,"DrawCylinderWires","das::_rlw_DrawCylinderWires")
		->args({"position","radiusTop","radiusBottom","height","sides","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1600:12
	makeExtern< void (*)(Vector3,Vector3,float,float,int,float4) , _rlw_DrawCylinderWiresEx , SimNode_ExtFuncCall >(lib,"DrawCylinderWiresEx","das::_rlw_DrawCylinderWiresEx")
		->args({"startPos","endPos","startRadius","endRadius","sides","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1601:12
	makeExtern< void (*)(Vector3,Vector3,float,int,int,float4) , _rlw_DrawCapsule , SimNode_ExtFuncCall >(lib,"DrawCapsule","das::_rlw_DrawCapsule")
		->args({"startPos","endPos","radius","rings","slices","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1602:12
	makeExtern< void (*)(Vector3,Vector3,float,int,int,float4) , _rlw_DrawCapsuleWires , SimNode_ExtFuncCall >(lib,"DrawCapsuleWires","das::_rlw_DrawCapsuleWires")
		->args({"startPos","endPos","radius","rings","slices","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1603:12
	makeExtern< void (*)(Vector3,Vector2,float4) , _rlw_DrawPlane , SimNode_ExtFuncCall >(lib,"DrawPlane","das::_rlw_DrawPlane")
		->args({"centerPos","size","color"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1604:12
	makeExtern< void (*)(Ray,float4) , _rlw_DrawRay , SimNode_ExtFuncCall >(lib,"DrawRay","das::_rlw_DrawRay")
		->args({"ray","color"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1605:12
	makeExtern< void (*)(int,float) , DrawGrid , SimNode_ExtFuncCall >(lib,"DrawGrid","DrawGrid")
		->args({"slices","spacing"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1612:13
	makeExtern< Model (*)(const char *) , LoadModel , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadModel","LoadModel")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1613:13
	makeExtern< Model (*)(Mesh) , LoadModelFromMesh , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadModelFromMesh","LoadModelFromMesh")
		->args({"mesh"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1614:12
	makeExtern< bool (*)(Model) , IsModelValid , SimNode_ExtFuncCall >(lib,"IsModelValid","IsModelValid")
		->args({"model"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1615:12
	makeExtern< void (*)(Model) , UnloadModel , SimNode_ExtFuncCall >(lib,"UnloadModel","UnloadModel")
		->args({"model"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1616:19
	makeExtern< BoundingBox (*)(Model) , GetModelBoundingBox , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetModelBoundingBox","GetModelBoundingBox")
		->args({"model"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1619:12
	makeExtern< void (*)(Model,Vector3,float,float4) , _rlw_DrawModel , SimNode_ExtFuncCall >(lib,"DrawModel","das::_rlw_DrawModel")
		->args({"model","position","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

