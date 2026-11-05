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
void Module_dasRaylib::initFunctions_3() {
// from raylib.h:1108:11
	makeExtern< int (*)(int,int) , GetRandomValue , SimNode_ExtFuncCall >(lib,"GetRandomValue","GetRandomValue")
		->args({"min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1109:12
	makeExtern< int * (*)(unsigned int,int,int) , LoadRandomSequence , SimNode_ExtFuncCall >(lib,"LoadRandomSequence","LoadRandomSequence")
		->args({"count","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1110:12
	makeExtern< void (*)(int *) , UnloadRandomSequence , SimNode_ExtFuncCall >(lib,"UnloadRandomSequence","UnloadRandomSequence")
		->args({"sequence"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1113:12
	makeExtern< void (*)(const char *) , TakeScreenshot , SimNode_ExtFuncCall >(lib,"TakeScreenshot","TakeScreenshot")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1114:12
	makeExtern< void (*)(unsigned int) , SetConfigFlags , SimNode_ExtFuncCall >(lib,"SetConfigFlags","SetConfigFlags")
		->args({"flags"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1115:12
	makeExtern< void (*)(const char *) , OpenURL , SimNode_ExtFuncCall >(lib,"OpenURL","OpenURL")
		->args({"url"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1118:12
	makeExtern< void (*)(int) , SetTraceLogLevel , SimNode_ExtFuncCall >(lib,"SetTraceLogLevel","SetTraceLogLevel")
		->args({"logLevel"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1123:13
	makeExtern< void * (*)(unsigned int) , MemAlloc , SimNode_ExtFuncCall >(lib,"MemAlloc","MemAlloc")
		->args({"size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1124:13
	makeExtern< void * (*)(void *,unsigned int) , MemRealloc , SimNode_ExtFuncCall >(lib,"MemRealloc","MemRealloc")
		->args({"ptr","size"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1125:12
	makeExtern< void (*)(void *) , MemFree , SimNode_ExtFuncCall >(lib,"MemFree","MemFree")
		->args({"ptr"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1128:22
	makeExtern< unsigned char * (*)(const char *,int *) , LoadFileData , SimNode_ExtFuncCall >(lib,"LoadFileData","LoadFileData")
		->args({"fileName","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1129:12
	makeExtern< void (*)(unsigned char *) , UnloadFileData , SimNode_ExtFuncCall >(lib,"UnloadFileData","UnloadFileData")
		->args({"data"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1130:12
	makeExtern< bool (*)(const char *,const void *,int) , SaveFileData , SimNode_ExtFuncCall >(lib,"SaveFileData","SaveFileData")
		->args({"fileName","data","dataSize"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1131:12
	makeExtern< bool (*)(const unsigned char *,int,const char *) , ExportDataAsCode , SimNode_ExtFuncCall >(lib,"ExportDataAsCode","ExportDataAsCode")
		->args({"data","dataSize","fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1132:13
	makeExtern< char * (*)(const char *) , LoadFileText , SimNode_ExtFuncCall >(lib,"LoadFileText","LoadFileText")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1133:12
	makeExtern< void (*)(char *) , UnloadFileText , SimNode_ExtFuncCall >(lib,"UnloadFileText","UnloadFileText")
		->args({"text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1134:12
	makeExtern< bool (*)(const char *,const char *) , SaveFileText , SimNode_ExtFuncCall >(lib,"SaveFileText","SaveFileText")
		->args({"fileName","text"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1143:11
	makeExtern< int (*)(const char *,const char *) , FileRename , SimNode_ExtFuncCall >(lib,"FileRename","FileRename")
		->args({"fileName","fileRename"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1144:11
	makeExtern< int (*)(const char *) , FileRemove , SimNode_ExtFuncCall >(lib,"FileRemove","FileRemove")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1145:11
	makeExtern< int (*)(const char *,const char *) , FileCopy , SimNode_ExtFuncCall >(lib,"FileCopy","FileCopy")
		->args({"srcPath","dstPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1146:11
	makeExtern< int (*)(const char *,const char *) , FileMove , SimNode_ExtFuncCall >(lib,"FileMove","FileMove")
		->args({"srcPath","dstPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1147:11
	makeExtern< int (*)(const char *,const char *,const char *) , FileTextReplace , SimNode_ExtFuncCall >(lib,"FileTextReplace","FileTextReplace")
		->args({"fileName","search","replacement"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1148:11
	makeExtern< int (*)(const char *,const char *) , FileTextFindIndex , SimNode_ExtFuncCall >(lib,"FileTextFindIndex","FileTextFindIndex")
		->args({"fileName","search"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1149:12
	makeExtern< bool (*)(const char *) , FileExists , SimNode_ExtFuncCall >(lib,"FileExists","FileExists")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1150:12
	makeExtern< bool (*)(const char *) , DirectoryExists , SimNode_ExtFuncCall >(lib,"DirectoryExists","DirectoryExists")
		->args({"dirPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1151:12
	makeExtern< bool (*)(const char *,const char *) , IsFileExtension , SimNode_ExtFuncCall >(lib,"IsFileExtension","IsFileExtension")
		->args({"fileName","ext"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1152:12
	makeExtern< bool (*)(const char *) , IsFileHidden , SimNode_ExtFuncCall >(lib,"IsFileHidden","IsFileHidden")
		->args({"filePath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1153:11
	makeExtern< int (*)(const char *) , GetFileLength , SimNode_ExtFuncCall >(lib,"GetFileLength","GetFileLength")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1154:12
	makeExtern< long (*)(const char *) , GetFileModTime , SimNode_ExtFuncCall >(lib,"GetFileModTime","GetFileModTime")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1155:19
	makeExtern< const char * (*)(const char *) , GetFileExtension , SimNode_ExtFuncCall >(lib,"GetFileExtension","GetFileExtension")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1156:19
	makeExtern< const char * (*)(const char *) , GetFileName , SimNode_ExtFuncCall >(lib,"GetFileName","GetFileName")
		->args({"filePath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1157:19
	makeExtern< const char * (*)(const char *) , GetFileNameWithoutExt , SimNode_ExtFuncCall >(lib,"GetFileNameWithoutExt","GetFileNameWithoutExt")
		->args({"filePath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1158:19
	makeExtern< const char * (*)(const char *) , GetDirectoryPath , SimNode_ExtFuncCall >(lib,"GetDirectoryPath","GetDirectoryPath")
		->args({"filePath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1159:19
	makeExtern< const char * (*)(const char *) , GetPrevDirectoryPath , SimNode_ExtFuncCall >(lib,"GetPrevDirectoryPath","GetPrevDirectoryPath")
		->args({"dirPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1160:19
	makeExtern< const char * (*)() , GetWorkingDirectory , SimNode_ExtFuncCall >(lib,"GetWorkingDirectory","GetWorkingDirectory")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1161:19
	makeExtern< const char * (*)() , GetApplicationDirectory , SimNode_ExtFuncCall >(lib,"GetApplicationDirectory","GetApplicationDirectory")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1162:11
	makeExtern< int (*)(const char *) , MakeDirectory , SimNode_ExtFuncCall >(lib,"MakeDirectory","MakeDirectory")
		->args({"dirPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1163:11
	makeExtern< int (*)(const char *) , ChangeDirectory , SimNode_ExtFuncCall >(lib,"ChangeDirectory","ChangeDirectory")
		->args({"dirPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1164:12
	makeExtern< bool (*)(const char *) , IsPathFile , SimNode_ExtFuncCall >(lib,"IsPathFile","IsPathFile")
		->args({"path"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1165:12
	makeExtern< bool (*)(const char *) , IsPathDirectory , SimNode_ExtFuncCall >(lib,"IsPathDirectory","IsPathDirectory")
		->args({"path"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1166:12
	makeExtern< bool (*)(const char *) , IsPathAbsolute , SimNode_ExtFuncCall >(lib,"IsPathAbsolute","IsPathAbsolute")
		->args({"path"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1167:12
	makeExtern< bool (*)(const char *) , IsFileNameValid , SimNode_ExtFuncCall >(lib,"IsFileNameValid","IsFileNameValid")
		->args({"fileName"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1168:20
	makeExtern< FilePathList (*)(const char *) , LoadDirectoryFiles , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadDirectoryFiles","LoadDirectoryFiles")
		->args({"dirPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1169:20
	makeExtern< FilePathList (*)(const char *,const char *,bool) , LoadDirectoryFilesEx , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadDirectoryFilesEx","LoadDirectoryFilesEx")
		->args({"basePath","filter","scanSubdirs"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1170:12
	makeExtern< void (*)(FilePathList) , UnloadDirectoryFiles , SimNode_ExtFuncCall >(lib,"UnloadDirectoryFiles","UnloadDirectoryFiles")
		->args({"files"})
		->arg_type(0,makeType<const FilePathList>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1171:12
	makeExtern< bool (*)() , IsFileDropped , SimNode_ExtFuncCall >(lib,"IsFileDropped","IsFileDropped")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1172:20
	makeExtern< FilePathList (*)() , LoadDroppedFiles , SimNode_ExtFuncCallAndCopyOrMove >(lib,"LoadDroppedFiles","LoadDroppedFiles")
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1173:12
	makeExtern< void (*)(FilePathList) , UnloadDroppedFiles , SimNode_ExtFuncCall >(lib,"UnloadDroppedFiles","UnloadDroppedFiles")
		->args({"files"})
		->arg_type(0,makeType<const FilePathList>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1174:20
	makeExtern< unsigned int (*)(const char *) , GetDirectoryFileCount , SimNode_ExtFuncCall >(lib,"GetDirectoryFileCount","GetDirectoryFileCount")
		->args({"dirPath"})
		->addToModule(*this, SideEffects::worstDefault);
// from raylib.h:1175:20
	makeExtern< unsigned int (*)(const char *,const char *,bool) , GetDirectoryFileCountEx , SimNode_ExtFuncCall >(lib,"GetDirectoryFileCountEx","GetDirectoryFileCountEx")
		->args({"basePath","filter","scanSubdirs"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

