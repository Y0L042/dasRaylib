// this file is generated via Daslang automatic binder
// all user modifications will be lost after this file is re-generated

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "dasRaylib.h"
#include "need_dasRaylib.h"
#include "dasRaylib.struct.impl.inc"
namespace das {
#include "dasRaylib.enum.class.inc"
#include "dasRaylib.struct.class.inc"
#include "dasRaylib.func.aot.inc"
Module_dasRaylib::Module_dasRaylib() : Module("raylib") {
}
bool Module_dasRaylib::initDependencies() {
	if ( initialized ) return true;
	initialized = true;
	lib.addModule(this);
	lib.addBuiltInModule();
	initAotAlias();
	#include "dasRaylib.const.inc"
	#include "dasRaylib.enum.add.inc"
	#include "dasRaylib.dummy.add.inc"
	#include "dasRaylib.struct.add.inc"
	#include "dasRaylib.struct.postadd.inc"
	#include "dasRaylib.alias.add.inc"
	#include "dasRaylib.func.reg.inc"
	initMain();
	return true;
}
REGISTER_DYN_MODULE(Module_dasRaylib,Module_dasRaylib);
}
REGISTER_MODULE_IN_NAMESPACE(Module_dasRaylib,das);

