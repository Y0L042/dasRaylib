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
void Module_dasRaylib::initFunctions_1() {
// from raylib.h:988:12
	makeExtern< void (*)(int,int,const char *) , InitWindow , SimNode_ExtFuncCall >(lib,"InitWindow","InitWindow")
		->args({"width","height","title"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:989:12
	makeExtern< void (*)() , CloseWindow , SimNode_ExtFuncCall >(lib,"CloseWindow","CloseWindow")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:990:12
	makeExtern< bool (*)() , WindowShouldClose , SimNode_ExtFuncCall >(lib,"WindowShouldClose","WindowShouldClose")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:991:12
	makeExtern< bool (*)() , IsWindowReady , SimNode_ExtFuncCall >(lib,"IsWindowReady","IsWindowReady")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:992:12
	makeExtern< bool (*)() , IsWindowFullscreen , SimNode_ExtFuncCall >(lib,"IsWindowFullscreen","IsWindowFullscreen")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:993:12
	makeExtern< bool (*)() , IsWindowHidden , SimNode_ExtFuncCall >(lib,"IsWindowHidden","IsWindowHidden")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:994:12
	makeExtern< bool (*)() , IsWindowMinimized , SimNode_ExtFuncCall >(lib,"IsWindowMinimized","IsWindowMinimized")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:995:12
	makeExtern< bool (*)() , IsWindowMaximized , SimNode_ExtFuncCall >(lib,"IsWindowMaximized","IsWindowMaximized")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:996:12
	makeExtern< bool (*)() , IsWindowFocused , SimNode_ExtFuncCall >(lib,"IsWindowFocused","IsWindowFocused")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:997:12
	makeExtern< bool (*)() , IsWindowResized , SimNode_ExtFuncCall >(lib,"IsWindowResized","IsWindowResized")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:998:12
	makeExtern< bool (*)(unsigned int) , IsWindowState , SimNode_ExtFuncCall >(lib,"IsWindowState","IsWindowState")
		->args({"flag"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:999:12
	makeExtern< void (*)(unsigned int) , SetWindowState , SimNode_ExtFuncCall >(lib,"SetWindowState","SetWindowState")
		->args({"flags"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1000:12
	makeExtern< void (*)(unsigned int) , ClearWindowState , SimNode_ExtFuncCall >(lib,"ClearWindowState","ClearWindowState")
		->args({"flags"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1001:12
	makeExtern< void (*)() , ToggleFullscreen , SimNode_ExtFuncCall >(lib,"ToggleFullscreen","ToggleFullscreen")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1002:12
	makeExtern< void (*)() , ToggleBorderlessWindowed , SimNode_ExtFuncCall >(lib,"ToggleBorderlessWindowed","ToggleBorderlessWindowed")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1003:12
	makeExtern< void (*)() , MaximizeWindow , SimNode_ExtFuncCall >(lib,"MaximizeWindow","MaximizeWindow")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1004:12
	makeExtern< void (*)() , MinimizeWindow , SimNode_ExtFuncCall >(lib,"MinimizeWindow","MinimizeWindow")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1005:12
	makeExtern< void (*)() , RestoreWindow , SimNode_ExtFuncCall >(lib,"RestoreWindow","RestoreWindow")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1006:12
	makeExtern< void (*)(Image) , SetWindowIcon , SimNode_ExtFuncCall >(lib,"SetWindowIcon","SetWindowIcon")
		->args({"image"})
		->arg_type(0,makeType<const Image>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1007:12
	makeExtern< void (*)(Image *,int) , SetWindowIcons , SimNode_ExtFuncCall >(lib,"SetWindowIcons","SetWindowIcons")
		->args({"images","count"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1008:12
	makeExtern< void (*)(const char *) , SetWindowTitle , SimNode_ExtFuncCall >(lib,"SetWindowTitle","SetWindowTitle")
		->args({"title"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1009:12
	makeExtern< void (*)(int,int) , SetWindowPosition , SimNode_ExtFuncCall >(lib,"SetWindowPosition","SetWindowPosition")
		->args({"x","y"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1010:12
	makeExtern< void (*)(int) , SetWindowMonitor , SimNode_ExtFuncCall >(lib,"SetWindowMonitor","SetWindowMonitor")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1011:12
	makeExtern< void (*)(int,int) , SetWindowMinSize , SimNode_ExtFuncCall >(lib,"SetWindowMinSize","SetWindowMinSize")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1012:12
	makeExtern< void (*)(int,int) , SetWindowMaxSize , SimNode_ExtFuncCall >(lib,"SetWindowMaxSize","SetWindowMaxSize")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1013:12
	makeExtern< void (*)(int,int) , SetWindowSize , SimNode_ExtFuncCall >(lib,"SetWindowSize","SetWindowSize")
		->args({"width","height"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1014:12
	makeExtern< void (*)(float) , SetWindowOpacity , SimNode_ExtFuncCall >(lib,"SetWindowOpacity","SetWindowOpacity")
		->args({"opacity"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1015:12
	makeExtern< void (*)() , SetWindowFocused , SimNode_ExtFuncCall >(lib,"SetWindowFocused","SetWindowFocused")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1016:13
	makeExtern< void * (*)() , GetWindowHandle , SimNode_ExtFuncCall >(lib,"GetWindowHandle","GetWindowHandle")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1017:11
	makeExtern< int (*)() , GetScreenWidth , SimNode_ExtFuncCall >(lib,"GetScreenWidth","GetScreenWidth")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1018:11
	makeExtern< int (*)() , GetScreenHeight , SimNode_ExtFuncCall >(lib,"GetScreenHeight","GetScreenHeight")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1019:11
	makeExtern< int (*)() , GetRenderWidth , SimNode_ExtFuncCall >(lib,"GetRenderWidth","GetRenderWidth")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1020:11
	makeExtern< int (*)() , GetRenderHeight , SimNode_ExtFuncCall >(lib,"GetRenderHeight","GetRenderHeight")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1021:11
	makeExtern< int (*)() , GetMonitorCount , SimNode_ExtFuncCall >(lib,"GetMonitorCount","GetMonitorCount")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1022:11
	makeExtern< int (*)() , GetCurrentMonitor , SimNode_ExtFuncCall >(lib,"GetCurrentMonitor","GetCurrentMonitor")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1023:15
	makeExtern< Vector2 (*)(int) , GetMonitorPosition , SimNode_ExtFuncCall >(lib,"GetMonitorPosition","GetMonitorPosition")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1024:11
	makeExtern< int (*)(int) , GetMonitorWidth , SimNode_ExtFuncCall >(lib,"GetMonitorWidth","GetMonitorWidth")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1025:11
	makeExtern< int (*)(int) , GetMonitorHeight , SimNode_ExtFuncCall >(lib,"GetMonitorHeight","GetMonitorHeight")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1026:11
	makeExtern< int (*)(int) , GetMonitorPhysicalWidth , SimNode_ExtFuncCall >(lib,"GetMonitorPhysicalWidth","GetMonitorPhysicalWidth")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1027:11
	makeExtern< int (*)(int) , GetMonitorPhysicalHeight , SimNode_ExtFuncCall >(lib,"GetMonitorPhysicalHeight","GetMonitorPhysicalHeight")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1028:11
	makeExtern< int (*)(int) , GetMonitorRefreshRate , SimNode_ExtFuncCall >(lib,"GetMonitorRefreshRate","GetMonitorRefreshRate")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1029:15
	makeExtern< Vector2 (*)() , GetWindowPosition , SimNode_ExtFuncCall >(lib,"GetWindowPosition","GetWindowPosition")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1030:15
	makeExtern< Vector2 (*)() , GetWindowScaleDPI , SimNode_ExtFuncCall >(lib,"GetWindowScaleDPI","GetWindowScaleDPI")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1031:19
	makeExtern< const char * (*)(int) , GetMonitorName , SimNode_ExtFuncCall >(lib,"GetMonitorName","GetMonitorName")
		->args({"monitor"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1032:12
	makeExtern< void (*)(const char *) , SetClipboardText , SimNode_ExtFuncCall >(lib,"SetClipboardText","SetClipboardText")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1033:19
	makeExtern< const char * (*)() , GetClipboardText , SimNode_ExtFuncCall >(lib,"GetClipboardText","GetClipboardText")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1034:13
	makeExtern< Image (*)() , GetClipboardImage , SimNode_ExtFuncCallAndCopyOrMove >(lib,"GetClipboardImage","GetClipboardImage")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1035:12
	makeExtern< void (*)() , EnableEventWaiting , SimNode_ExtFuncCall >(lib,"EnableEventWaiting","EnableEventWaiting")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1036:12
	makeExtern< void (*)() , DisableEventWaiting , SimNode_ExtFuncCall >(lib,"DisableEventWaiting","DisableEventWaiting")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1039:12
	makeExtern< void (*)() , ShowCursor , SimNode_ExtFuncCall >(lib,"ShowCursor","ShowCursor")
		->addToModule(*this, SideEffects::worstDefault);
}
}

