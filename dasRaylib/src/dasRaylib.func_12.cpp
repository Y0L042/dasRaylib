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
void Module_dasRaylib::initFunctions_12() {
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
// from raylib.h:1620:12
	makeExtern< void (*)(Model,Vector3,Vector3,float,Vector3,float4) , _rlw_DrawModelEx , SimNode_ExtFuncCall >(lib,"DrawModelEx","das::_rlw_DrawModelEx")
		->args({"model","position","rotationAxis","rotationAngle","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1621:12
	makeExtern< void (*)(Model,Vector3,float,float4) , _rlw_DrawModelWires , SimNode_ExtFuncCall >(lib,"DrawModelWires","das::_rlw_DrawModelWires")
		->args({"model","position","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1622:12
	makeExtern< void (*)(Model,Vector3,Vector3,float,Vector3,float4) , _rlw_DrawModelWiresEx , SimNode_ExtFuncCall >(lib,"DrawModelWiresEx","das::_rlw_DrawModelWiresEx")
		->args({"model","position","rotationAxis","rotationAngle","scale","tint"})
		->arg_type(0,makeType<const Model>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1623:12
	makeExtern< void (*)(BoundingBox,float4) , _rlw_DrawBoundingBox , SimNode_ExtFuncCall >(lib,"DrawBoundingBox","das::_rlw_DrawBoundingBox")
		->args({"box","color"})
		->arg_type(0,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1624:12
	makeExtern< void (*)(Camera3D,Texture,Vector3,float,float4) , _rlw_DrawBillboard , SimNode_ExtFuncCall >(lib,"DrawBillboard","das::_rlw_DrawBillboard")
		->args({"camera","texture","position","scale","tint"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->arg_type(1,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1625:12
	makeExtern< void (*)(Camera3D,Texture,Rectangle,Vector3,Vector2,float4) , _rlw_DrawBillboardRec , SimNode_ExtFuncCall >(lib,"DrawBillboardRec","das::_rlw_DrawBillboardRec")
		->args({"camera","texture","rec","position","size","tint"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->arg_type(1,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1626:12
	makeExtern< void (*)(Camera3D,Texture,Rectangle,Vector3,Vector3,Vector2,Vector2,float,float4) , _rlw_DrawBillboardPro , SimNode_ExtFuncCall >(lib,"DrawBillboardPro","das::_rlw_DrawBillboardPro")
		->args({"camera","texture","rec","position","up","size","origin","rotation","tint"})
		->arg_type(0,makeType<const Camera3D>(lib))
		->arg_type(1,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1629:12
	makeExtern< void (*)(Mesh *,bool) , UploadMesh , SimNode_ExtFuncCall >(lib,"UploadMesh","UploadMesh")
		->args({"mesh","dynamic"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1629:12
	makeExtern< void (*)(Mesh &,bool) , _rlr_UploadMesh , SimNode_ExtFuncCall >(lib,"UploadMesh","das::_rlr_UploadMesh")
		->args({"mesh","dynamic"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1630:12
	makeExtern< void (*)(Mesh,int,const void *,int,int) , UpdateMeshBuffer , SimNode_ExtFuncCall >(lib,"UpdateMeshBuffer","UpdateMeshBuffer")
		->args({"mesh","index","data","dataSize","offset"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1631:12
	makeExtern< void (*)(Mesh) , UnloadMesh , SimNode_ExtFuncCall >(lib,"UnloadMesh","UnloadMesh")
		->args({"mesh"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1632:12
	makeExtern< void (*)(Mesh,Material,const float4x4 &) , _rlw_DrawMesh , SimNode_ExtFuncCall >(lib,"DrawMesh","das::_rlw_DrawMesh")
		->args({"mesh","material","transform"})
		->arg_type(0,makeType<const Mesh>(lib))
		->arg_type(1,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1633:12
	makeExtern< void (*)(Mesh,Material,const ::Matrix *,int) , DrawMeshInstanced , SimNode_ExtFuncCall >(lib,"DrawMeshInstanced","DrawMeshInstanced")
		->args({"mesh","material","transforms","instances"})
		->arg_type(0,makeType<const Mesh>(lib))
		->arg_type(1,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1634:19
	makeExtern< BoundingBox (*)(Mesh) , GetMeshBoundingBox , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetMeshBoundingBox","GetMeshBoundingBox")
		->args({"mesh"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1635:12
	makeExtern< void (*)(Mesh *) , GenMeshTangents , SimNode_ExtFuncCall >(lib,"GenMeshTangents","GenMeshTangents")
		->args({"mesh"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1635:12
	makeExtern< void (*)(Mesh &) , _rlr_GenMeshTangents , SimNode_ExtFuncCall >(lib,"GenMeshTangents","das::_rlr_GenMeshTangents")
		->args({"mesh"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1636:12
	makeExtern< bool (*)(Mesh,const char *) , ExportMesh , SimNode_ExtFuncCall >(lib,"ExportMesh","ExportMesh")
		->args({"mesh","fileName"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1637:12
	makeExtern< bool (*)(Mesh,const char *) , ExportMeshAsCode , SimNode_ExtFuncCall >(lib,"ExportMeshAsCode","ExportMeshAsCode")
		->args({"mesh","fileName"})
		->arg_type(0,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1640:12
	makeExtern< Mesh (*)(int,float) , GenMeshPoly , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshPoly","GenMeshPoly")
		->args({"sides","radius"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1641:12
	makeExtern< Mesh (*)(float,float,int,int) , GenMeshPlane , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshPlane","GenMeshPlane")
		->args({"width","length","resX","resZ"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1642:12
	makeExtern< Mesh (*)(float,float,float) , GenMeshCube , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCube","GenMeshCube")
		->args({"width","height","length"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1643:12
	makeExtern< Mesh (*)(float,int,int) , GenMeshSphere , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshSphere","GenMeshSphere")
		->args({"radius","rings","slices"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

