#pragma once

// Parse/compile entry point for the dasClangBind raylib binder (hand-written).
//
// Include order matters: raylib.h defines the RL_*_TYPE guards, so raymath.h
// skips its own Vector2/3/4, Quaternion and Matrix definitions. rcamera.h only
// redefines types under RCAMERA_STANDALONE (left undefined here).
#include <raylib.h>
#include <raymath.h>
#include <rcamera.h>

// Everything below is C++ glue for the compiled module; libclang parses this
// header too, so keep it out of the binder's view.
#if !defined(DAS_RAYLIB_BINDER_PARSE)

#include <string.h>
#include "daScript/simulate/cast.h"

namespace das {

// ── raylib vector types as das math types (bit-identical aliases) ─────────────
//   Vector2 -> float2, Vector3 -> float3, Vector4 (Quaternion) -> float4,
//   Rectangle {x,y,width,height} -> float4
// raylib's structs are C aggregates without constructors, so the JIT/interop
// wrappers bridge vec4f <-> T with memcpy (same approach as dasImgui's ImRect).
#define DAS_RAYLIB_VEC_ALIAS(T, DAS_TYPE, NFLOATS, CAST_BASE)                               \
    static_assert(sizeof(T) == sizeof(float) * NFLOATS, #T " must be " #NFLOATS " floats");  \
    template <> struct typeFactory<T> {                                                      \
        static TypeDeclPtr make(const ModuleLibrary &) {                                     \
            auto t = new TypeDecl(Type::DAS_TYPE, cppBindingLineInfo());                     \
            t->alias = #T;                                                                   \
            t->aotAlias = true;                                                              \
            return t;                                                                        \
        }                                                                                    \
    };                                                                                       \
    template <> struct typeName<T> { constexpr static const char * name() { return #T; } }; \
    template <> struct cast<T> : CAST_BASE<T> {};                                            \
    template <> struct cast_arg<T> {                                                         \
        static __forceinline T to ( Context & ctx, SimNode * node ) {                        \
            vec4f res = node->eval(ctx);                                                     \
            T v; memcpy(&v, &res, sizeof(T));                                                \
            return v;                                                                        \
        }                                                                                    \
    };                                                                                       \
    template <> struct cast_arg<const T &> {                                                 \
        static __forceinline T to ( Context & ctx, SimNode * node ) {                        \
            vec4f res = node->eval(ctx);                                                     \
            T v; memcpy(&v, &res, sizeof(T));                                                \
            return v;                                                                        \
        }                                                                                    \
    };                                                                                       \
    struct WrapRaylib##T##Arg : T {                                                          \
        __forceinline WrapRaylib##T##Arg(vec4f t) { memcpy(static_cast<T*>(this), &t, sizeof(T)); } \
        __forceinline operator vec4f() const {                                               \
            vec4f r = v_zero(); memcpy(&r, static_cast<const T*>(this), sizeof(T)); return r; \
        }                                                                                    \
    };                                                                                       \
    template <> struct WrapType<T> { enum { value = true }; typedef vec4f type; typedef vec4f rettype; }; \
    template <> struct WrapArgType<T> { typedef WrapRaylib##T##Arg type; };                 \
    template <> struct WrapRetType<T> { typedef WrapRaylib##T##Arg type; };                 \
    template <> struct JitConstRefByValue<const T &> { enum { value = true }; };             \
    template <> struct WrapArgType<const T &> { using type = const WrapArgType<T>::type &; };

DAS_RAYLIB_VEC_ALIAS(Vector2,   tFloat2, 2, cast_fVec_half)
DAS_RAYLIB_VEC_ALIAS(Vector3,   tFloat3, 3, cast_fVec)
DAS_RAYLIB_VEC_ALIAS(Vector4,   tFloat4, 4, cast_fVec)
DAS_RAYLIB_VEC_ALIAS(Rectangle, tFloat4, 4, cast_fVec)

#undef DAS_RAYLIB_VEC_ALIAS

// ── converting types: Color <-> float4 (0..1), Matrix <-> float4x4 ────────────
// Used by the generated wrappers in dasRaylib.wrap.inc and by the explicit
// to_float4 / to_Color / to_float4x4 / to_Matrix functions.

inline Color das_rl_color ( float4 c ) {
    auto ch = [](float v) -> unsigned char {
        v = v < 0.0f ? 0.0f : (v > 1.0f ? 1.0f : v);
        return (unsigned char)(v * 255.0f + 0.5f);
    };
    return Color{ ch(c.x), ch(c.y), ch(c.z), ch(c.w) };
}

inline float4 das_rl_float4 ( Color c ) {
    const float k = 1.0f / 255.0f;
    return float4(c.r * k, c.g * k, c.b * k, c.a * k);
}

// raylib numbers Matrix elements column-major (m0..m3 = column 0, m12..m14 =
// translation) but stores them row by row; das float4x4 stores columns
// (m[3] = translation). Assign by name so the layout difference is explicit.
inline ::Matrix das_rl_matrix ( const float4x4 & m ) {
    ::Matrix r;
    r.m0  = m.m[0].x; r.m1  = m.m[0].y; r.m2  = m.m[0].z; r.m3  = m.m[0].w;
    r.m4  = m.m[1].x; r.m5  = m.m[1].y; r.m6  = m.m[1].z; r.m7  = m.m[1].w;
    r.m8  = m.m[2].x; r.m9  = m.m[2].y; r.m10 = m.m[2].z; r.m11 = m.m[2].w;
    r.m12 = m.m[3].x; r.m13 = m.m[3].y; r.m14 = m.m[3].z; r.m15 = m.m[3].w;
    return r;
}

inline float4x4 das_rl_float4x4 ( const ::Matrix & r ) {
    float4x4 m;
    m.m[0] = float4(r.m0,  r.m1,  r.m2,  r.m3);
    m.m[1] = float4(r.m4,  r.m5,  r.m6,  r.m7);
    m.m[2] = float4(r.m8,  r.m9,  r.m10, r.m11);
    m.m[3] = float4(r.m12, r.m13, r.m14, r.m15);
    return m;
}

}

#endif // !DAS_RAYLIB_BINDER_PARSE
