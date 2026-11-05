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
void Module_dasRaylib::initFunctions_11() {
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
// from raylib.h:1644:12
	makeExtern< Mesh (*)(float,int,int) , GenMeshHemiSphere , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshHemiSphere","GenMeshHemiSphere")
		->args({"radius","rings","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1645:12
	makeExtern< Mesh (*)(float,float,int) , GenMeshCylinder , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCylinder","GenMeshCylinder")
		->args({"radius","height","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1646:12
	makeExtern< Mesh (*)(float,float,int) , GenMeshCone , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCone","GenMeshCone")
		->args({"radius","height","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1647:12
	makeExtern< Mesh (*)(float,float,int,int) , GenMeshTorus , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshTorus","GenMeshTorus")
		->args({"radius","size","radSeg","sides"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1648:12
	makeExtern< Mesh (*)(float,float,int,int) , GenMeshKnot , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshKnot","GenMeshKnot")
		->args({"radius","size","radSeg","sides"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1649:12
	makeExtern< Mesh (*)(Image,Vector3) , GenMeshHeightmap , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshHeightmap","GenMeshHeightmap")
		->args({"heightmap","size"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1650:12
	makeExtern< Mesh (*)(Image,Vector3) , GenMeshCubicmap , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCubicmap","GenMeshCubicmap")
		->args({"cubicmap","cubeSize"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1653:17
	makeExtern< Material * (*)(const char *,int *) , LoadMaterials , SimNode_ExtFuncCall >(lib,"LoadMaterials","LoadMaterials")
		->args({"fileName","materialCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1654:16
	makeExtern< Material (*)() , LoadMaterialDefault , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadMaterialDefault","LoadMaterialDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1655:12
	makeExtern< bool (*)(Material) , IsMaterialValid , SimNode_ExtFuncCall >(lib,"IsMaterialValid","IsMaterialValid")
		->args({"material"})
		->arg_type(0,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1656:12
	makeExtern< void (*)(Material) , UnloadMaterial , SimNode_ExtFuncCall >(lib,"UnloadMaterial","UnloadMaterial")
		->args({"material"})
		->arg_type(0,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1657:12
	makeExtern< void (*)(Material *,int,Texture) , SetMaterialTexture , SimNode_ExtFuncCall >(lib,"SetMaterialTexture","SetMaterialTexture")
		->args({"material","mapType","texture"})
		->arg_type(2,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1658:12
	makeExtern< void (*)(Model *,int,int) , SetModelMeshMaterial , SimNode_ExtFuncCall >(lib,"SetModelMeshMaterial","SetModelMeshMaterial")
		->args({"model","meshId","materialId"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1661:23
	makeExtern< ModelAnimation * (*)(const char *,int *) , LoadModelAnimations , SimNode_ExtFuncCall >(lib,"LoadModelAnimations","LoadModelAnimations")
		->args({"fileName","animCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1662:12
	makeExtern< void (*)(Model,ModelAnimation,float) , UpdateModelAnimation , SimNode_ExtFuncCall >(lib,"UpdateModelAnimation","UpdateModelAnimation")
		->args({"model","anim","frame"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const ModelAnimation>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1663:12
	makeExtern< void (*)(Model,ModelAnimation,float,ModelAnimation,float,float) , UpdateModelAnimationEx , SimNode_ExtFuncCall >(lib,"UpdateModelAnimationEx","UpdateModelAnimationEx")
		->args({"model","animA","frameA","animB","frameB","blend"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const ModelAnimation>(lib))
		->arg_type(3,makeType<const ModelAnimation>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1664:12
	makeExtern< void (*)(ModelAnimation *,int) , UnloadModelAnimations , SimNode_ExtFuncCall >(lib,"UnloadModelAnimations","UnloadModelAnimations")
		->args({"animations","animCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1665:12
	makeExtern< bool (*)(Model,ModelAnimation) , IsModelAnimationValid , SimNode_ExtFuncCall >(lib,"IsModelAnimationValid","IsModelAnimationValid")
		->args({"model","anim"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const ModelAnimation>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1668:12
	makeExtern< bool (*)(Vector3,float,Vector3,float) , CheckCollisionSpheres , SimNode_ExtFuncCall >(lib,"CheckCollisionSpheres","CheckCollisionSpheres")
		->args({"center1","radius1","center2","radius2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1669:12
	makeExtern< bool (*)(BoundingBox,BoundingBox) , CheckCollisionBoxes , SimNode_ExtFuncCall >(lib,"CheckCollisionBoxes","CheckCollisionBoxes")
		->args({"box1","box2"})
		->arg_type(0,makeType<const BoundingBox>(lib))
		->arg_type(1,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1670:12
	makeExtern< bool (*)(BoundingBox,Vector3,float) , CheckCollisionBoxSphere , SimNode_ExtFuncCall >(lib,"CheckCollisionBoxSphere","CheckCollisionBoxSphere")
		->args({"box","center","radius"})
		->arg_type(0,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1671:20
	makeExtern< RayCollision (*)(Ray,Vector3,float) , GetRayCollisionSphere , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionSphere","GetRayCollisionSphere")
		->args({"ray","center","radius"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1672:20
	makeExtern< RayCollision (*)(Ray,BoundingBox) , GetRayCollisionBox , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionBox","GetRayCollisionBox")
		->args({"ray","box"})
		->arg_type(0,makeType<const Ray>(lib))
		->arg_type(1,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1673:20
	makeExtern< RayCollision (*)(Ray,Mesh,const float4x4 &) , _rlw_GetRayCollisionMesh , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionMesh","das::_rlw_GetRayCollisionMesh")
		->args({"ray","mesh","transform"})
		->arg_type(0,makeType<const Ray>(lib))
		->arg_type(1,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1674:20
	makeExtern< RayCollision (*)(Ray,Vector3,Vector3,Vector3) , GetRayCollisionTriangle , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionTriangle","GetRayCollisionTriangle")
		->args({"ray","p1","p2","p3"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1675:20
	makeExtern< RayCollision (*)(Ray,Vector3,Vector3,Vector3,Vector3) , GetRayCollisionQuad , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionQuad","GetRayCollisionQuad")
		->args({"ray","p1","p2","p3","p4"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1683:12
	makeExtern< void (*)() , InitAudioDevice , SimNode_ExtFuncCall >(lib,"InitAudioDevice","InitAudioDevice")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1684:12
	makeExtern< void (*)() , CloseAudioDevice , SimNode_ExtFuncCall >(lib,"CloseAudioDevice","CloseAudioDevice")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1685:12
	makeExtern< bool (*)() , IsAudioDeviceReady , SimNode_ExtFuncCall >(lib,"IsAudioDeviceReady","IsAudioDeviceReady")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1686:12
	makeExtern< void (*)(float) , SetMasterVolume , SimNode_ExtFuncCall >(lib,"SetMasterVolume","SetMasterVolume")
		->args({"volume"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

