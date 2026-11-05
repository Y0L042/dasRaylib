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
// from raylib.h:1707:12
	makeExtern< void (*)(Sound) , PauseSound , SimNode_ExtFuncCall >(lib,"PauseSound","PauseSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1708:12
	makeExtern< void (*)(Sound) , ResumeSound , SimNode_ExtFuncCall >(lib,"ResumeSound","ResumeSound")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1709:12
	makeExtern< bool (*)(Sound) , IsSoundPlaying , SimNode_ExtFuncCall >(lib,"IsSoundPlaying","IsSoundPlaying")
		->args({"sound"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1710:12
	makeExtern< void (*)(Sound,float) , SetSoundVolume , SimNode_ExtFuncCall >(lib,"SetSoundVolume","SetSoundVolume")
		->args({"sound","volume"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1711:12
	makeExtern< void (*)(Sound,float) , SetSoundPitch , SimNode_ExtFuncCall >(lib,"SetSoundPitch","SetSoundPitch")
		->args({"sound","pitch"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1712:12
	makeExtern< void (*)(Sound,float) , SetSoundPan , SimNode_ExtFuncCall >(lib,"SetSoundPan","SetSoundPan")
		->args({"sound","pan"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1713:12
	makeExtern< Wave (*)(Wave) , WaveCopy , SimNode_ExtFuncCallAndCopyOrMove >(lib,"WaveCopy","WaveCopy")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1714:12
	makeExtern< void (*)(Wave *,int,int) , WaveCrop , SimNode_ExtFuncCall >(lib,"WaveCrop","WaveCrop")
		->args({"wave","initFrame","finalFrame"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1715:12
	makeExtern< void (*)(Wave *,int,int,int) , WaveFormat , SimNode_ExtFuncCall >(lib,"WaveFormat","WaveFormat")
		->args({"wave","sampleRate","sampleSize","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1716:14
	makeExtern< float * (*)(Wave) , LoadWaveSamples , SimNode_ExtFuncCall >(lib,"LoadWaveSamples","LoadWaveSamples")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1717:12
	makeExtern< void (*)(float *) , UnloadWaveSamples , SimNode_ExtFuncCall >(lib,"UnloadWaveSamples","UnloadWaveSamples")
		->args({"samples"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1720:13
	makeExtern< Music (*)(const char *) , LoadMusicStream , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadMusicStream","LoadMusicStream")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1721:13
	makeExtern< Music (*)(const char *,const unsigned char *,int) , LoadMusicStreamFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadMusicStreamFromMemory","LoadMusicStreamFromMemory")
		->args({"fileType","data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1722:12
	makeExtern< bool (*)(Music) , IsMusicValid , SimNode_ExtFuncCall >(lib,"IsMusicValid","IsMusicValid")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1723:12
	makeExtern< void (*)(Music) , UnloadMusicStream , SimNode_ExtFuncCall >(lib,"UnloadMusicStream","UnloadMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1724:12
	makeExtern< void (*)(Music) , PlayMusicStream , SimNode_ExtFuncCall >(lib,"PlayMusicStream","PlayMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1725:12
	makeExtern< bool (*)(Music) , IsMusicStreamPlaying , SimNode_ExtFuncCall >(lib,"IsMusicStreamPlaying","IsMusicStreamPlaying")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1726:12
	makeExtern< void (*)(Music) , UpdateMusicStream , SimNode_ExtFuncCall >(lib,"UpdateMusicStream","UpdateMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1727:12
	makeExtern< void (*)(Music) , StopMusicStream , SimNode_ExtFuncCall >(lib,"StopMusicStream","StopMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1728:12
	makeExtern< void (*)(Music) , PauseMusicStream , SimNode_ExtFuncCall >(lib,"PauseMusicStream","PauseMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1729:12
	makeExtern< void (*)(Music) , ResumeMusicStream , SimNode_ExtFuncCall >(lib,"ResumeMusicStream","ResumeMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1730:12
	makeExtern< void (*)(Music,float) , SeekMusicStream , SimNode_ExtFuncCall >(lib,"SeekMusicStream","SeekMusicStream")
		->args({"music","position"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1731:12
	makeExtern< void (*)(Music,float) , SetMusicVolume , SimNode_ExtFuncCall >(lib,"SetMusicVolume","SetMusicVolume")
		->args({"music","volume"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1732:12
	makeExtern< void (*)(Music,float) , SetMusicPitch , SimNode_ExtFuncCall >(lib,"SetMusicPitch","SetMusicPitch")
		->args({"music","pitch"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1733:12
	makeExtern< void (*)(Music,float) , SetMusicPan , SimNode_ExtFuncCall >(lib,"SetMusicPan","SetMusicPan")
		->args({"music","pan"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1734:13
	makeExtern< float (*)(Music) , GetMusicTimeLength , SimNode_ExtFuncCall >(lib,"GetMusicTimeLength","GetMusicTimeLength")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1735:13
	makeExtern< float (*)(Music) , GetMusicTimePlayed , SimNode_ExtFuncCall >(lib,"GetMusicTimePlayed","GetMusicTimePlayed")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1738:19
	makeExtern< AudioStream (*)(unsigned int,unsigned int,unsigned int) , LoadAudioStream , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadAudioStream","LoadAudioStream")
		->args({"sampleRate","sampleSize","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1739:12
	makeExtern< bool (*)(AudioStream) , IsAudioStreamValid , SimNode_ExtFuncCall >(lib,"IsAudioStreamValid","IsAudioStreamValid")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1740:12
	makeExtern< void (*)(AudioStream) , UnloadAudioStream , SimNode_ExtFuncCall >(lib,"UnloadAudioStream","UnloadAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1741:12
	makeExtern< void (*)(AudioStream,const void *,int) , UpdateAudioStream , SimNode_ExtFuncCall >(lib,"UpdateAudioStream","UpdateAudioStream")
		->args({"stream","data","frameCount"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1742:12
	makeExtern< bool (*)(AudioStream) , IsAudioStreamProcessed , SimNode_ExtFuncCall >(lib,"IsAudioStreamProcessed","IsAudioStreamProcessed")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1743:12
	makeExtern< void (*)(AudioStream) , PlayAudioStream , SimNode_ExtFuncCall >(lib,"PlayAudioStream","PlayAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1744:12
	makeExtern< void (*)(AudioStream) , PauseAudioStream , SimNode_ExtFuncCall >(lib,"PauseAudioStream","PauseAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

