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
// from raylib.h:1689:12
	makeExtern< void (*)(Sound,float) , SetSoundVolume , SimNode_ExtFuncCall >(lib,"SetSoundVolume","SetSoundVolume")
		->args({"sound","volume"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1690:12
	makeExtern< void (*)(Sound,float) , SetSoundPitch , SimNode_ExtFuncCall >(lib,"SetSoundPitch","SetSoundPitch")
		->args({"sound","pitch"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1691:12
	makeExtern< void (*)(Sound,float) , SetSoundPan , SimNode_ExtFuncCall >(lib,"SetSoundPan","SetSoundPan")
		->args({"sound","pan"})
		->arg_type(0,makeType<const Sound>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1692:12
	makeExtern< Wave (*)(Wave) , WaveCopy , SimNode_ExtFuncCallAndCopyOrMove >(lib,"WaveCopy","WaveCopy")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1693:12
	makeExtern< void (*)(Wave *,int,int) , WaveCrop , SimNode_ExtFuncCall >(lib,"WaveCrop","WaveCrop")
		->args({"wave","initFrame","finalFrame"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1694:12
	makeExtern< void (*)(Wave *,int,int,int) , WaveFormat , SimNode_ExtFuncCall >(lib,"WaveFormat","WaveFormat")
		->args({"wave","sampleRate","sampleSize","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1695:14
	makeExtern< float * (*)(Wave) , LoadWaveSamples , SimNode_ExtFuncCall >(lib,"LoadWaveSamples","LoadWaveSamples")
		->args({"wave"})
		->arg_type(0,makeType<const Wave>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1696:12
	makeExtern< void (*)(float *) , UnloadWaveSamples , SimNode_ExtFuncCall >(lib,"UnloadWaveSamples","UnloadWaveSamples")
		->args({"samples"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1699:13
	makeExtern< Music (*)(const char *) , LoadMusicStream , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadMusicStream","LoadMusicStream")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1700:13
	makeExtern< Music (*)(const char *,const unsigned char *,int) , LoadMusicStreamFromMemory , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadMusicStreamFromMemory","LoadMusicStreamFromMemory")
		->args({"fileType","data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1701:12
	makeExtern< bool (*)(Music) , IsMusicValid , SimNode_ExtFuncCall >(lib,"IsMusicValid","IsMusicValid")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1702:12
	makeExtern< void (*)(Music) , UnloadMusicStream , SimNode_ExtFuncCall >(lib,"UnloadMusicStream","UnloadMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1703:12
	makeExtern< void (*)(Music) , PlayMusicStream , SimNode_ExtFuncCall >(lib,"PlayMusicStream","PlayMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1704:12
	makeExtern< bool (*)(Music) , IsMusicStreamPlaying , SimNode_ExtFuncCall >(lib,"IsMusicStreamPlaying","IsMusicStreamPlaying")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1705:12
	makeExtern< void (*)(Music) , UpdateMusicStream , SimNode_ExtFuncCall >(lib,"UpdateMusicStream","UpdateMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1706:12
	makeExtern< void (*)(Music) , StopMusicStream , SimNode_ExtFuncCall >(lib,"StopMusicStream","StopMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1707:12
	makeExtern< void (*)(Music) , PauseMusicStream , SimNode_ExtFuncCall >(lib,"PauseMusicStream","PauseMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1708:12
	makeExtern< void (*)(Music) , ResumeMusicStream , SimNode_ExtFuncCall >(lib,"ResumeMusicStream","ResumeMusicStream")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1709:12
	makeExtern< void (*)(Music,float) , SeekMusicStream , SimNode_ExtFuncCall >(lib,"SeekMusicStream","SeekMusicStream")
		->args({"music","position"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1710:12
	makeExtern< void (*)(Music,float) , SetMusicVolume , SimNode_ExtFuncCall >(lib,"SetMusicVolume","SetMusicVolume")
		->args({"music","volume"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1711:12
	makeExtern< void (*)(Music,float) , SetMusicPitch , SimNode_ExtFuncCall >(lib,"SetMusicPitch","SetMusicPitch")
		->args({"music","pitch"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1712:12
	makeExtern< void (*)(Music,float) , SetMusicPan , SimNode_ExtFuncCall >(lib,"SetMusicPan","SetMusicPan")
		->args({"music","pan"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1713:13
	makeExtern< float (*)(Music) , GetMusicTimeLength , SimNode_ExtFuncCall >(lib,"GetMusicTimeLength","GetMusicTimeLength")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1714:13
	makeExtern< float (*)(Music) , GetMusicTimePlayed , SimNode_ExtFuncCall >(lib,"GetMusicTimePlayed","GetMusicTimePlayed")
		->args({"music"})
		->arg_type(0,makeType<const Music>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1717:19
	makeExtern< AudioStream (*)(unsigned int,unsigned int,unsigned int) , LoadAudioStream , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadAudioStream","LoadAudioStream")
		->args({"sampleRate","sampleSize","channels"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1718:12
	makeExtern< bool (*)(AudioStream) , IsAudioStreamValid , SimNode_ExtFuncCall >(lib,"IsAudioStreamValid","IsAudioStreamValid")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1719:12
	makeExtern< void (*)(AudioStream) , UnloadAudioStream , SimNode_ExtFuncCall >(lib,"UnloadAudioStream","UnloadAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1720:12
	makeExtern< void (*)(AudioStream,const void *,int) , UpdateAudioStream , SimNode_ExtFuncCall >(lib,"UpdateAudioStream","UpdateAudioStream")
		->args({"stream","data","frameCount"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1721:12
	makeExtern< bool (*)(AudioStream) , IsAudioStreamProcessed , SimNode_ExtFuncCall >(lib,"IsAudioStreamProcessed","IsAudioStreamProcessed")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1722:12
	makeExtern< void (*)(AudioStream) , PlayAudioStream , SimNode_ExtFuncCall >(lib,"PlayAudioStream","PlayAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1723:12
	makeExtern< void (*)(AudioStream) , PauseAudioStream , SimNode_ExtFuncCall >(lib,"PauseAudioStream","PauseAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1724:12
	makeExtern< void (*)(AudioStream) , ResumeAudioStream , SimNode_ExtFuncCall >(lib,"ResumeAudioStream","ResumeAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1725:12
	makeExtern< bool (*)(AudioStream) , IsAudioStreamPlaying , SimNode_ExtFuncCall >(lib,"IsAudioStreamPlaying","IsAudioStreamPlaying")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1726:12
	makeExtern< void (*)(AudioStream) , StopAudioStream , SimNode_ExtFuncCall >(lib,"StopAudioStream","StopAudioStream")
		->args({"stream"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1727:12
	makeExtern< void (*)(AudioStream,float) , SetAudioStreamVolume , SimNode_ExtFuncCall >(lib,"SetAudioStreamVolume","SetAudioStreamVolume")
		->args({"stream","volume"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1728:12
	makeExtern< void (*)(AudioStream,float) , SetAudioStreamPitch , SimNode_ExtFuncCall >(lib,"SetAudioStreamPitch","SetAudioStreamPitch")
		->args({"stream","pitch"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1729:12
	makeExtern< void (*)(AudioStream,float) , SetAudioStreamPan , SimNode_ExtFuncCall >(lib,"SetAudioStreamPan","SetAudioStreamPan")
		->args({"stream","pan"})
		->arg_type(0,makeType<const AudioStream>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1730:12
	makeExtern< void (*)(int) , SetAudioStreamBufferSizeDefault , SimNode_ExtFuncCall >(lib,"SetAudioStreamBufferSizeDefault","SetAudioStreamBufferSizeDefault")
		->args({"size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:217:13
	makeExtern< float (*)(float,float,float) , Clamp , SimNode_ExtFuncCall >(lib,"Clamp","Clamp")
		->args({"value","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:227:13
	makeExtern< float (*)(float,float,float) , Lerp , SimNode_ExtFuncCall >(lib,"Lerp","Lerp")
		->args({"start","end","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:235:13
	makeExtern< float (*)(float,float,float) , Normalize , SimNode_ExtFuncCall >(lib,"Normalize","Normalize")
		->args({"value","start","end"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:243:13
	makeExtern< float (*)(float,float,float,float,float) , Remap , SimNode_ExtFuncCall >(lib,"Remap","Remap")
		->args({"value","inputStart","inputEnd","outputStart","outputEnd"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:251:13
	makeExtern< float (*)(float,float,float) , Wrap , SimNode_ExtFuncCall >(lib,"Wrap","Wrap")
		->args({"value","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:259:11
	makeExtern< int (*)(float,float) , FloatEquals , SimNode_ExtFuncCall >(lib,"FloatEquals","FloatEquals")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:275:15
	makeExtern< Vector2 (*)() , Vector2Zero , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector2Zero","Vector2Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:283:15
	makeExtern< Vector2 (*)() , Vector2One , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector2One","Vector2One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:291:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Add , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector2Add","Vector2Add")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:299:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2AddValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector2AddValue","Vector2AddValue")
		->args({"v","add"})
		->arg_type(0,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:307:15
	makeExtern< Vector2 (*)(Vector2,Vector2) , Vector2Subtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector2Subtract","Vector2Subtract")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector2>(lib))
		->arg_type(1,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:315:15
	makeExtern< Vector2 (*)(Vector2,float) , Vector2SubtractValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector2SubtractValue","Vector2SubtractValue")
		->args({"v","sub"})
		->arg_type(0,makeType<const Vector2>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

