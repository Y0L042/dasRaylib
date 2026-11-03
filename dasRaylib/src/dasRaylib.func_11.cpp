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
// from raylib.h:1622:12
	makeExtern< Mesh (*)(float,int,int) , GenMeshSphere , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshSphere","GenMeshSphere")
		->args({"radius","rings","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1623:12
	makeExtern< Mesh (*)(float,int,int) , GenMeshHemiSphere , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshHemiSphere","GenMeshHemiSphere")
		->args({"radius","rings","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1624:12
	makeExtern< Mesh (*)(float,float,int) , GenMeshCylinder , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCylinder","GenMeshCylinder")
		->args({"radius","height","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1625:12
	makeExtern< Mesh (*)(float,float,int) , GenMeshCone , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCone","GenMeshCone")
		->args({"radius","height","slices"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1626:12
	makeExtern< Mesh (*)(float,float,int,int) , GenMeshTorus , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshTorus","GenMeshTorus")
		->args({"radius","size","radSeg","sides"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1627:12
	makeExtern< Mesh (*)(float,float,int,int) , GenMeshKnot , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshKnot","GenMeshKnot")
		->args({"radius","size","radSeg","sides"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1628:12
	makeExtern< Mesh (*)(Image,Vector3) , GenMeshHeightmap , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshHeightmap","GenMeshHeightmap")
		->args({"heightmap","size"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1629:12
	makeExtern< Mesh (*)(Image,Vector3) , GenMeshCubicmap , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GenMeshCubicmap","GenMeshCubicmap")
		->args({"cubicmap","cubeSize"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1632:17
	makeExtern< Material * (*)(const char *,int *) , LoadMaterials , SimNode_ExtFuncCall >(lib,"LoadMaterials","LoadMaterials")
		->args({"fileName","materialCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1633:16
	makeExtern< Material (*)() , LoadMaterialDefault , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadMaterialDefault","LoadMaterialDefault")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1634:12
	makeExtern< bool (*)(Material) , IsMaterialValid , SimNode_ExtFuncCall >(lib,"IsMaterialValid","IsMaterialValid")
		->args({"material"})
		->arg_type(0,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1635:12
	makeExtern< void (*)(Material) , UnloadMaterial , SimNode_ExtFuncCall >(lib,"UnloadMaterial","UnloadMaterial")
		->args({"material"})
		->arg_type(0,makeType<const Material>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1636:12
	makeExtern< void (*)(Material *,int,Texture) , SetMaterialTexture , SimNode_ExtFuncCall >(lib,"SetMaterialTexture","SetMaterialTexture")
		->args({"material","mapType","texture"})
		->arg_type(2,makeType<const Texture>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1637:12
	makeExtern< void (*)(Model *,int,int) , SetModelMeshMaterial , SimNode_ExtFuncCall >(lib,"SetModelMeshMaterial","SetModelMeshMaterial")
		->args({"model","meshId","materialId"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1640:23
	makeExtern< ModelAnimation * (*)(const char *,int *) , LoadModelAnimations , SimNode_ExtFuncCall >(lib,"LoadModelAnimations","LoadModelAnimations")
		->args({"fileName","animCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1641:12
	makeExtern< void (*)(Model,ModelAnimation,float) , UpdateModelAnimation , SimNode_ExtFuncCall >(lib,"UpdateModelAnimation","UpdateModelAnimation")
		->args({"model","anim","frame"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const ModelAnimation>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1642:12
	makeExtern< void (*)(Model,ModelAnimation,float,ModelAnimation,float,float) , UpdateModelAnimationEx , SimNode_ExtFuncCall >(lib,"UpdateModelAnimationEx","UpdateModelAnimationEx")
		->args({"model","animA","frameA","animB","frameB","blend"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const ModelAnimation>(lib))
		->arg_type(3,makeType<const ModelAnimation>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1643:12
	makeExtern< void (*)(ModelAnimation *,int) , UnloadModelAnimations , SimNode_ExtFuncCall >(lib,"UnloadModelAnimations","UnloadModelAnimations")
		->args({"animations","animCount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1644:12
	makeExtern< bool (*)(Model,ModelAnimation) , IsModelAnimationValid , SimNode_ExtFuncCall >(lib,"IsModelAnimationValid","IsModelAnimationValid")
		->args({"model","anim"})
		->arg_type(0,makeType<const Model>(lib))
		->arg_type(1,makeType<const ModelAnimation>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1647:12
	makeExtern< bool (*)(Vector3,float,Vector3,float) , CheckCollisionSpheres , SimNode_ExtFuncCall >(lib,"CheckCollisionSpheres","CheckCollisionSpheres")
		->args({"center1","radius1","center2","radius2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1648:12
	makeExtern< bool (*)(BoundingBox,BoundingBox) , CheckCollisionBoxes , SimNode_ExtFuncCall >(lib,"CheckCollisionBoxes","CheckCollisionBoxes")
		->args({"box1","box2"})
		->arg_type(0,makeType<const BoundingBox>(lib))
		->arg_type(1,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1649:12
	makeExtern< bool (*)(BoundingBox,Vector3,float) , CheckCollisionBoxSphere , SimNode_ExtFuncCall >(lib,"CheckCollisionBoxSphere","CheckCollisionBoxSphere")
		->args({"box","center","radius"})
		->arg_type(0,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1650:20
	makeExtern< RayCollision (*)(Ray,Vector3,float) , GetRayCollisionSphere , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionSphere","GetRayCollisionSphere")
		->args({"ray","center","radius"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1651:20
	makeExtern< RayCollision (*)(Ray,BoundingBox) , GetRayCollisionBox , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionBox","GetRayCollisionBox")
		->args({"ray","box"})
		->arg_type(0,makeType<const Ray>(lib))
		->arg_type(1,makeType<const BoundingBox>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1652:20
	makeExtern< RayCollision (*)(Ray,Mesh,const float4x4 &) , _rlw_GetRayCollisionMesh , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionMesh","das::_rlw_GetRayCollisionMesh")
		->args({"ray","mesh","transform"})
		->arg_type(0,makeType<const Ray>(lib))
		->arg_type(1,makeType<const Mesh>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1653:20
	makeExtern< RayCollision (*)(Ray,Vector3,Vector3,Vector3) , GetRayCollisionTriangle , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionTriangle","GetRayCollisionTriangle")
		->args({"ray","p1","p2","p3"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1654:20
	makeExtern< RayCollision (*)(Ray,Vector3,Vector3,Vector3,Vector3) , GetRayCollisionQuad , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetRayCollisionQuad","GetRayCollisionQuad")
		->args({"ray","p1","p2","p3","p4"})
		->arg_type(0,makeType<const Ray>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1662:12
	makeExtern< void (*)() , InitAudioDevice , SimNode_ExtFuncCall >(lib,"InitAudioDevice","InitAudioDevice")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1663:12
	makeExtern< void (*)() , CloseAudioDevice , SimNode_ExtFuncCall >(lib,"CloseAudioDevice","CloseAudioDevice")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1664:12
	makeExtern< bool (*)() , IsAudioDeviceReady , SimNode_ExtFuncCall >(lib,"IsAudioDeviceReady","IsAudioDeviceReady")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1665:12
	makeExtern< void (*)(float) , SetMasterVolume , SimNode_ExtFuncCall >(lib,"SetMasterVolume","SetMasterVolume")
		->args({"volume"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1666:13
	makeExtern< float (*)() , GetMasterVolume , SimNode_ExtFuncCall >(lib,"GetMasterVolume","GetMasterVolume")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1669:12
	makeExtern< Wave (*)(const char *) , LoadWave , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadWave","LoadWave")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1670:12
	makeExtern< Wave (*)(const char *,const unsigned char *,int) , LoadWaveFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadWaveFromMemory","LoadWaveFromMemory")
		->args({"fileType","fileData","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1671:12
	makeExtern< bool (*)(Wave) , IsWaveValid , SimNode_ExtFuncCall >(lib,"IsWaveValid","IsWaveValid")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1672:13
	makeExtern< Sound (*)(const char *) , LoadSound , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadSound","LoadSound")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1673:13
	makeExtern< Sound (*)(Wave) , LoadSoundFromWave , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadSoundFromWave","LoadSoundFromWave")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1674:13
	makeExtern< Sound (*)(Sound) , LoadSoundAlias , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadSoundAlias","LoadSoundAlias")
		->args({"source"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1675:12
	makeExtern< bool (*)(Sound) , IsSoundValid , SimNode_ExtFuncCall >(lib,"IsSoundValid","IsSoundValid")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1676:12
	makeExtern< void (*)(Sound,const void *,int) , UpdateSound , SimNode_ExtFuncCall >(lib,"UpdateSound","UpdateSound")
		->args({"sound","data","sampleCount"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1677:12
	makeExtern< void (*)(Wave) , UnloadWave , SimNode_ExtFuncCall >(lib,"UnloadWave","UnloadWave")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1678:12
	makeExtern< void (*)(Sound) , UnloadSound , SimNode_ExtFuncCall >(lib,"UnloadSound","UnloadSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1679:12
	makeExtern< void (*)(Sound) , UnloadSoundAlias , SimNode_ExtFuncCall >(lib,"UnloadSoundAlias","UnloadSoundAlias")
		->args({"alias"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1680:12
	makeExtern< bool (*)(Wave,const char *) , ExportWave , SimNode_ExtFuncCall >(lib,"ExportWave","ExportWave")
		->args({"wave","fileName"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1681:12
	makeExtern< bool (*)(Wave,const char *) , ExportWaveAsCode , SimNode_ExtFuncCall >(lib,"ExportWaveAsCode","ExportWaveAsCode")
		->args({"wave","fileName"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1684:12
	makeExtern< void (*)(Sound) , PlaySound , SimNode_ExtFuncCall >(lib,"PlaySound","PlaySound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1685:12
	makeExtern< void (*)(Sound) , StopSound , SimNode_ExtFuncCall >(lib,"StopSound","StopSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1686:12
	makeExtern< void (*)(Sound) , PauseSound , SimNode_ExtFuncCall >(lib,"PauseSound","PauseSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1687:12
	makeExtern< void (*)(Sound) , ResumeSound , SimNode_ExtFuncCall >(lib,"ResumeSound","ResumeSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1688:12
	makeExtern< bool (*)(Sound) , IsSoundPlaying , SimNode_ExtFuncCall >(lib,"IsSoundPlaying","IsSoundPlaying")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

