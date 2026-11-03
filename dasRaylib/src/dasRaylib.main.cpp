// Hand-written part of the dasRaylib module (not touched by bind/bind_raylib.das).

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "dasRaylib.h"
#include "need_dasRaylib.h"

namespace das {

void Module_dasRaylib::initMain() {
    // float macros the generator can't evaluate (PI itself comes from daslang's math module)
    addConstant<float>(*this, "EPSILON", EPSILON);
    addConstant<float>(*this, "DEG2RAD", DEG2RAD);
    addConstant<float>(*this, "RAD2DEG", RAD2DEG);
}

ModuleAotType Module_dasRaylib::aotRequire ( TextWriter & tw ) const {
    tw << "#include \"need_dasRaylib.h\"\n";
    return ModuleAotType::cpp;
}

}
