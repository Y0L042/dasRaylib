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
void Module_dasRaylib::initFunctions_13() {
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
// from raylib.h:1653:17
	makeExtern< Material * (*)(const char *,int32_t &) , _rlr_LoadMaterials , SimNode_ExtFuncCall >(lib,"LoadMaterials","das::_rlr_LoadMaterials")
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
// from raylib.h:1657:12
	makeExtern< void (*)(Material &,int,Texture) , _rlr_SetMaterialTexture , SimNode_ExtFuncCall >(lib,"SetMaterialTexture","das::_rlr_SetMaterialTexture")
		->args({"material","mapType","texture"})
		->arg_type(2,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1658:12
	makeExtern< void (*)(Model *,int,int) , SetModelMeshMaterial , SimNode_ExtFuncCall >(lib,"SetModelMeshMaterial","SetModelMeshMaterial")
		->args({"model","meshId","materialId"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1658:12
	makeExtern< void (*)(Model &,int,int) , _rlr_SetModelMeshMaterial , SimNode_ExtFuncCall >(lib,"SetModelMeshMaterial","das::_rlr_SetModelMeshMaterial")
		->args({"model","meshId","materialId"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1661:23
	makeExtern< ModelAnimation * (*)(const char *,int *) , LoadModelAnimations , SimNode_ExtFuncCall >(lib,"LoadModelAnimations","LoadModelAnimations")
		->args({"fileName","animCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1661:23
	makeExtern< ModelAnimation * (*)(const char *,int32_t &) , _rlr_LoadModelAnimations , SimNode_ExtFuncCall >(lib,"LoadModelAnimations","das::_rlr_LoadModelAnimations")
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
// from raylib.h:1687:13
	makeExtern< float (*)() , GetMasterVolume , SimNode_ExtFuncCall >(lib,"GetMasterVolume","GetMasterVolume")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1690:12
	makeExtern< Wave (*)(const char *) , LoadWave , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadWave","LoadWave")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1691:12
	makeExtern< Wave (*)(const char *,const unsigned char *,int) , LoadWaveFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadWaveFromMemory","LoadWaveFromMemory")
		->args({"fileType","fileData","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1692:12
	makeExtern< bool (*)(Wave) , IsWaveValid , SimNode_ExtFuncCall >(lib,"IsWaveValid","IsWaveValid")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1693:13
	makeExtern< Sound (*)(const char *) , LoadSound , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadSound","LoadSound")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1694:13
	makeExtern< Sound (*)(Wave) , LoadSoundFromWave , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadSoundFromWave","LoadSoundFromWave")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1695:13
	makeExtern< Sound (*)(Sound) , LoadSoundAlias , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadSoundAlias","LoadSoundAlias")
		->args({"source"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1696:12
	makeExtern< bool (*)(Sound) , IsSoundValid , SimNode_ExtFuncCall >(lib,"IsSoundValid","IsSoundValid")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1697:12
	makeExtern< void (*)(Sound,const void *,int) , UpdateSound , SimNode_ExtFuncCall >(lib,"UpdateSound","UpdateSound")
		->args({"sound","data","frameCount"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1698:12
	makeExtern< void (*)(Wave) , UnloadWave , SimNode_ExtFuncCall >(lib,"UnloadWave","UnloadWave")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1699:12
	makeExtern< void (*)(Sound) , UnloadSound , SimNode_ExtFuncCall >(lib,"UnloadSound","UnloadSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1700:12
	makeExtern< void (*)(Sound) , UnloadSoundAlias , SimNode_ExtFuncCall >(lib,"UnloadSoundAlias","UnloadSoundAlias")
		->args({"alias"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1701:12
	makeExtern< bool (*)(Wave,const char *) , ExportWave , SimNode_ExtFuncCall >(lib,"ExportWave","ExportWave")
		->args({"wave","fileName"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1702:12
	makeExtern< bool (*)(Wave,const char *) , ExportWaveAsCode , SimNode_ExtFuncCall >(lib,"ExportWaveAsCode","ExportWaveAsCode")
		->args({"wave","fileName"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1705:12
	makeExtern< void (*)(Sound) , PlaySound , SimNode_ExtFuncCall >(lib,"PlaySound","PlaySound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1706:12
	makeExtern< void (*)(Sound) , StopSound , SimNode_ExtFuncCall >(lib,"StopSound","StopSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

