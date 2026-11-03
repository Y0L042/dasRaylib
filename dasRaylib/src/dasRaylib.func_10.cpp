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
// from raylib.h:1554:13
	makeExtern< char * (*)(const char *) , TextToSnake , SimNode_ExtFuncCall >(lib,"TextToSnake","TextToSnake")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1555:13
	makeExtern< char * (*)(const char *) , TextToCamel , SimNode_ExtFuncCall >(lib,"TextToCamel","TextToCamel")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1556:11
	makeExtern< int (*)(const char *) , TextToInteger , SimNode_ExtFuncCall >(lib,"TextToInteger","TextToInteger")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1557:13
	makeExtern< float (*)(const char *) , TextToFloat , SimNode_ExtFuncCall >(lib,"TextToFloat","TextToFloat")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1564:12
	makeExtern< void (*)(Vector3,Vector3,Color) , DrawLine3D , SimNode_ExtFuncCall >(lib,"DrawLine3D","DrawLine3D")
		->args({"startPos","endPos","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1565:12
	makeExtern< void (*)(Vector3,Color) , DrawPoint3D , SimNode_ExtFuncCall >(lib,"DrawPoint3D","DrawPoint3D")
		->args({"position","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1566:12
	makeExtern< void (*)(Vector3,float,Vector3,float,Color) , DrawCircle3D , SimNode_ExtFuncCall >(lib,"DrawCircle3D","DrawCircle3D")
		->args({"center","radius","rotationAxis","rotationAngle","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1567:12
	makeExtern< void (*)(Vector3,Vector3,Vector3,Color) , DrawTriangle3D , SimNode_ExtFuncCall >(lib,"DrawTriangle3D","DrawTriangle3D")
		->args({"v1","v2","v3","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1568:12
	makeExtern< void (*)(const Vector3 *,int,Color) , DrawTriangleStrip3D , SimNode_ExtFuncCall >(lib,"DrawTriangleStrip3D","DrawTriangleStrip3D")
		->args({"points","pointCount","color"})
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1569:12
	makeExtern< void (*)(Vector3,float,float,float,Color) , DrawCube , SimNode_ExtFuncCall >(lib,"DrawCube","DrawCube")
		->args({"position","width","height","length","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1570:12
	makeExtern< void (*)(Vector3,Vector3,Color) , DrawCubeV , SimNode_ExtFuncCall >(lib,"DrawCubeV","DrawCubeV")
		->args({"position","size","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1571:12
	makeExtern< void (*)(Vector3,float,float,float,Color) , DrawCubeWires , SimNode_ExtFuncCall >(lib,"DrawCubeWires","DrawCubeWires")
		->args({"position","width","height","length","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1572:12
	makeExtern< void (*)(Vector3,Vector3,Color) , DrawCubeWiresV , SimNode_ExtFuncCall >(lib,"DrawCubeWiresV","DrawCubeWiresV")
		->args({"position","size","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1573:12
	makeExtern< void (*)(Vector3,float,Color) , DrawSphere , SimNode_ExtFuncCall >(lib,"DrawSphere","DrawSphere")
		->args({"centerPos","radius","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1574:12
	makeExtern< void (*)(Vector3,float,int,int,Color) , DrawSphereEx , SimNode_ExtFuncCall >(lib,"DrawSphereEx","DrawSphereEx")
		->args({"centerPos","radius","rings","slices","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1575:12
	makeExtern< void (*)(Vector3,float,int,int,Color) , DrawSphereWires , SimNode_ExtFuncCall >(lib,"DrawSphereWires","DrawSphereWires")
		->args({"centerPos","radius","rings","slices","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1576:12
	makeExtern< void (*)(Vector3,float,float,float,int,Color) , DrawCylinder , SimNode_ExtFuncCall >(lib,"DrawCylinder","DrawCylinder")
		->args({"position","radiusTop","radiusBottom","height","slices","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1577:12
	makeExtern< void (*)(Vector3,Vector3,float,float,int,Color) , DrawCylinderEx , SimNode_ExtFuncCall >(lib,"DrawCylinderEx","DrawCylinderEx")
		->args({"startPos","endPos","startRadius","endRadius","sides","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1578:12
	makeExtern< void (*)(Vector3,float,float,float,int,Color) , DrawCylinderWires , SimNode_ExtFuncCall >(lib,"DrawCylinderWires","DrawCylinderWires")
		->args({"position","radiusTop","radiusBottom","height","slices","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1579:12
	makeExtern< void (*)(Vector3,Vector3,float,float,int,Color) , DrawCylinderWiresEx , SimNode_ExtFuncCall >(lib,"DrawCylinderWiresEx","DrawCylinderWiresEx")
		->args({"startPos","endPos","startRadius","endRadius","sides","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1580:12
	makeExtern< void (*)(Vector3,Vector3,float,int,int,Color) , DrawCapsule , SimNode_ExtFuncCall >(lib,"DrawCapsule","DrawCapsule")
		->args({"startPos","endPos","radius","slices","rings","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1581:12
	makeExtern< void (*)(Vector3,Vector3,float,int,int,Color) , DrawCapsuleWires , SimNode_ExtFuncCall >(lib,"DrawCapsuleWires","DrawCapsuleWires")
		->args({"startPos","endPos","radius","slices","rings","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1582:12
	makeExtern< void (*)(Vector3,Vector2,Color) , DrawPlane , SimNode_ExtFuncCall >(lib,"DrawPlane","DrawPlane")
		->args({"centerPos","size","color"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->arg_type(2,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1583:12
	makeExtern< void (*)(Ray,Color) , DrawRay , SimNode_ExtFuncCall >(lib,"DrawRay","DrawRay")
		->args({"ray","color"})
		->arg_type(0,makeType<const Ray>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1584:12
	makeExtern< void (*)(int,float) , DrawGrid , SimNode_ExtFuncCall >(lib,"DrawGrid","DrawGrid")
		->args({"slices","spacing"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1591:13
	makeExtern< Model (*)(const char *) , LoadModel , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadModel","LoadModel")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1592:13
	makeExtern< Model (*)(Mesh) , LoadModelFromMesh , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadModelFromMesh","LoadModelFromMesh")
		->args({"mesh"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1593:12
	makeExtern< bool (*)(Model) , IsModelValid , SimNode_ExtFuncCall >(lib,"IsModelValid","IsModelValid")
		->args({"model"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1594:12
	makeExtern< void (*)(Model) , UnloadModel , SimNode_ExtFuncCall >(lib,"UnloadModel","UnloadModel")
		->args({"model"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1595:19
	makeExtern< BoundingBox (*)(Model) , GetModelBoundingBox , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetModelBoundingBox","GetModelBoundingBox")
		->args({"model"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1598:12
	makeExtern< void (*)(Model,Vector3,float,Color) , DrawModel , SimNode_ExtFuncCall >(lib,"DrawModel","DrawModel")
		->args({"model","position","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1599:12
	makeExtern< void (*)(Model,Vector3,Vector3,float,Vector3,Color) , DrawModelEx , SimNode_ExtFuncCall >(lib,"DrawModelEx","DrawModelEx")
		->args({"model","position","rotationAxis","rotationAngle","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1600:12
	makeExtern< void (*)(Model,Vector3,float,Color) , DrawModelWires , SimNode_ExtFuncCall >(lib,"DrawModelWires","DrawModelWires")
		->args({"model","position","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(3,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1601:12
	makeExtern< void (*)(Model,Vector3,Vector3,float,Vector3,Color) , DrawModelWiresEx , SimNode_ExtFuncCall >(lib,"DrawModelWiresEx","DrawModelWiresEx")
		->args({"model","position","rotationAxis","rotationAngle","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1602:12
	makeExtern< void (*)(BoundingBox,Color) , DrawBoundingBox , SimNode_ExtFuncCall >(lib,"DrawBoundingBox","DrawBoundingBox")
		->args({"box","color"})
		->arg_type(0,makeType<const BoundingBox>(lib))
		->arg_type(1,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1603:12
	makeExtern< void (*)(Camera3D,Texture,Vector3,float,Color) , DrawBillboard , SimNode_ExtFuncCall >(lib,"DrawBillboard","DrawBillboard")
		->args({"camera","texture","position","scale","tint"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->arg_type(1,makeType<const Texture>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1604:12
	makeExtern< void (*)(Camera3D,Texture,Rectangle,Vector3,Vector2,Color) , DrawBillboardRec , SimNode_ExtFuncCall >(lib,"DrawBillboardRec","DrawBillboardRec")
		->args({"camera","texture","source","position","size","tint"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->arg_type(1,makeType<const Texture>(lib))
		->arg_type(2,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Vector2>(lib))
		->arg_type(5,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1605:12
	makeExtern< void (*)(Camera3D,Texture,Rectangle,Vector3,Vector3,Vector2,Vector2,float,Color) , DrawBillboardPro , SimNode_ExtFuncCall >(lib,"DrawBillboardPro","DrawBillboardPro")
		->args({"camera","texture","source","position","up","size","origin","rotation","tint"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->arg_type(1,makeType<const Texture>(lib))
		->arg_type(2,makeType<const Rectangle>(lib))
		->arg_type(3,makeType<const Vector3>(lib))
		->arg_type(4,makeType<const Vector3>(lib))
		->arg_type(5,makeType<const Vector2>(lib))
		->arg_type(6,makeType<const Vector2>(lib))
		->arg_type(8,makeType<const Color>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1608:12
	makeExtern< void (*)(Mesh *,bool) , UploadMesh , SimNode_ExtFuncCall >(lib,"UploadMesh","UploadMesh")
		->args({"mesh","dynamic"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1609:12
	makeExtern< void (*)(Mesh,int,const void *,int,int) , UpdateMeshBuffer , SimNode_ExtFuncCall >(lib,"UpdateMeshBuffer","UpdateMeshBuffer")
		->args({"mesh","index","data","dataSize","offset"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1610:12
	makeExtern< void (*)(Mesh) , UnloadMesh , SimNode_ExtFuncCall >(lib,"UnloadMesh","UnloadMesh")
		->args({"mesh"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1611:12
	makeExtern< void (*)(Mesh,Material,::Matrix) , DrawMesh , SimNode_ExtFuncCall >(lib,"DrawMesh","DrawMesh")
		->args({"mesh","material","transform"})
		->arg_type(0,makeType<const Mesh>(lib))
		->arg_type(1,makeType<const Material>(lib))
		->arg_type(2,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1612:12
	makeExtern< void (*)(Mesh,Material,const ::Matrix *,int) , DrawMeshInstanced , SimNode_ExtFuncCall >(lib,"DrawMeshInstanced","DrawMeshInstanced")
		->args({"mesh","material","transforms","instances"})
		->arg_type(0,makeType<const Mesh>(lib))
		->arg_type(1,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1613:19
	makeExtern< BoundingBox (*)(Mesh) , GetMeshBoundingBox , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetMeshBoundingBox","GetMeshBoundingBox")
		->args({"mesh"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1614:12
	makeExtern< void (*)(Mesh *) , GenMeshTangents , SimNode_ExtFuncCall >(lib,"GenMeshTangents","GenMeshTangents")
		->args({"mesh"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1615:12
	makeExtern< bool (*)(Mesh,const char *) , ExportMesh , SimNode_ExtFuncCall >(lib,"ExportMesh","ExportMesh")
		->args({"mesh","fileName"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1616:12
	makeExtern< bool (*)(Mesh,const char *) , ExportMeshAsCode , SimNode_ExtFuncCall >(lib,"ExportMeshAsCode","ExportMeshAsCode")
		->args({"mesh","fileName"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1619:12
	makeExtern< Mesh (*)(int,float) , GenMeshPoly , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshPoly","GenMeshPoly")
		->args({"sides","radius"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1620:12
	makeExtern< Mesh (*)(float,float,int,int) , GenMeshPlane , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshPlane","GenMeshPlane")
		->args({"width","length","resX","resZ"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1621:12
	makeExtern< Mesh (*)(float,float,float) , GenMeshCube , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCube","GenMeshCube")
		->args({"width","height","length"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

