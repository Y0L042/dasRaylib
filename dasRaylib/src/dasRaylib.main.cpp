// Hand-written part of the dasRaylib module (not touched by bind/bind_raylib.das).

#include "daScript/misc/platform.h"
#include "daScript/ast/ast.h"
#include "daScript/ast/ast_interop.h"
#include "daScript/ast/ast_handle.h"
#include "daScript/simulate/bind_enum.h"
#include "dasRaylib.h"
#include "need_dasRaylib.h"

namespace das {

// Explicit converters for the places where Color / Matrix stay raw raylib structs:
// struct fields (MaterialMap.color, Model.transform, VrStereoConfig.*) and pointers
// (LoadImageColors, DrawMeshInstanced). Functions taking them by value already
// accept float4 / float4x4 directly (see dasRaylib.wrap.inc).
float4   das_rl_to_float4 ( const Color & c )       { return das_rl_float4(c); }
Color    das_rl_to_Color ( float4 c )               { return das_rl_color(c); }
float4x4 das_rl_to_float4x4 ( const ::Matrix & m )  { return das_rl_float4x4(m); }
::Matrix das_rl_to_Matrix ( const float4x4 & m )    { return das_rl_matrix(m); }

void Module_dasRaylib::initAotAlias() {
    // raylib names usable as das type aliases: Vector3 == float3, Rectangle == float4, ...
    addAlias(typeFactory<Vector2>::make(lib));
    addAlias(typeFactory<Vector3>::make(lib));
    addAlias(typeFactory<Vector4>::make(lib));
    addAlias(typeFactory<Rectangle>::make(lib));
}

void Module_dasRaylib::initMain() {
    // float macros the generator can't evaluate (PI itself comes from daslang's math module)
    addConstant<float>(*this, "EPSILON", EPSILON);
    addConstant<float>(*this, "DEG2RAD", DEG2RAD);
    addConstant<float>(*this, "RAD2DEG", RAD2DEG);

    addExtern<DAS_BIND_FUN(das_rl_to_float4)>(*this, lib, "to_float4",
        SideEffects::none, "das::das_rl_to_float4")->args({"color"});
    addExtern<DAS_BIND_FUN(das_rl_to_Color), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "to_Color",
        SideEffects::none, "das::das_rl_to_Color")->args({"color"});
    addExtern<DAS_BIND_FUN(das_rl_to_float4x4), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "to_float4x4",
        SideEffects::none, "das::das_rl_to_float4x4")->args({"matrix"});
    addExtern<DAS_BIND_FUN(das_rl_to_Matrix), SimNode_ExtFuncCallAndCopyOrMove>(*this, lib, "to_Matrix",
        SideEffects::none, "das::das_rl_to_Matrix")->args({"matrix"});
}

ModuleAotType Module_dasRaylib::aotRequire ( TextWriter & tw ) const {
    tw << "#include \"need_dasRaylib.h\"\n";
    return ModuleAotType::cpp;
}

}
