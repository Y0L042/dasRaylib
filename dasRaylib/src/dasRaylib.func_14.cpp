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
void Module_dasRaylib::initFunctions_14() {
// from raymath.h:971:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3MoveTowards , SimNode_ExtFuncCall >(lib,"Vector3MoveTowards","Vector3MoveTowards")
		->args({"v","target","maxDistance"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:992:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3Lerp , SimNode_ExtFuncCall >(lib,"Vector3Lerp","Vector3Lerp")
		->args({"v1","v2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1005:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3,Vector3,float) , Vector3CubicHermite , SimNode_ExtFuncCall >(lib,"Vector3CubicHermite","Vector3CubicHermite")
		->args({"v1","tangent1","v2","tangent2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1020:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Reflect , SimNode_ExtFuncCall >(lib,"Vector3Reflect","Vector3Reflect")
		->args({"v","normal"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1038:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Min , SimNode_ExtFuncCall >(lib,"Vector3Min","Vector3Min")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1050:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Max , SimNode_ExtFuncCall >(lib,"Vector3Max","Vector3Max")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1063:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3,Vector3) , Vector3Barycenter , SimNode_ExtFuncCall >(lib,"Vector3Barycenter","Vector3Barycenter")
		->args({"p","a","b","c"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1087:15
	makeExtern< Vector3 (*)(Vector3,const float4x4 &,const float4x4 &) , _rlw_Vector3Unproject , SimNode_ExtFuncCall >(lib,"Vector3Unproject","das::_rlw_Vector3Unproject")
		->args({"source","projection","view"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1182:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Invert , SimNode_ExtFuncCall >(lib,"Vector3Invert","Vector3Invert")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1191:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3) , Vector3Clamp , SimNode_ExtFuncCall >(lib,"Vector3Clamp","Vector3Clamp")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1203:15
	makeExtern< Vector3 (*)(Vector3,float,float) , Vector3ClampValue , SimNode_ExtFuncCall >(lib,"Vector3ClampValue","Vector3ClampValue")
		->args({"v","min","max"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1225:11
	makeExtern< int (*)(Vector3,Vector3) , Vector3Equals , SimNode_ExtFuncCall >(lib,"Vector3Equals","Vector3Equals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1243:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3Refract , SimNode_ExtFuncCall >(lib,"Vector3Refract","Vector3Refract")
		->args({"v","n","r"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1268:15
	makeExtern< Vector4 (*)() , Vector4Zero , SimNode_ExtFuncCall >(lib,"Vector4Zero","Vector4Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1275:15
	makeExtern< Vector4 (*)() , Vector4One , SimNode_ExtFuncCall >(lib,"Vector4One","Vector4One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1282:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Add , SimNode_ExtFuncCall >(lib,"Vector4Add","Vector4Add")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1294:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4AddValue , SimNode_ExtFuncCall >(lib,"Vector4AddValue","Vector4AddValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1306:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Subtract , SimNode_ExtFuncCall >(lib,"Vector4Subtract","Vector4Subtract")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1318:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4SubtractValue , SimNode_ExtFuncCall >(lib,"Vector4SubtractValue","Vector4SubtractValue")
		->args({"v","add"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1330:13
	makeExtern< float (*)(Vector4) , Vector4Length , SimNode_ExtFuncCall >(lib,"Vector4Length","Vector4Length")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1337:13
	makeExtern< float (*)(Vector4) , Vector4LengthSqr , SimNode_ExtFuncCall >(lib,"Vector4LengthSqr","Vector4LengthSqr")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1344:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4DotProduct , SimNode_ExtFuncCall >(lib,"Vector4DotProduct","Vector4DotProduct")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1351:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4Distance , SimNode_ExtFuncCall >(lib,"Vector4Distance","Vector4Distance")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1360:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4DistanceSqr , SimNode_ExtFuncCall >(lib,"Vector4DistanceSqr","Vector4DistanceSqr")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1370:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4Scale , SimNode_ExtFuncCall >(lib,"Vector4Scale","Vector4Scale")
		->args({"v","scale"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1377:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Multiply , SimNode_ExtFuncCall >(lib,"Vector4Multiply","Vector4Multiply")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1384:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Negate , SimNode_ExtFuncCall >(lib,"Vector4Negate","Vector4Negate")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1391:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Divide , SimNode_ExtFuncCall >(lib,"Vector4Divide","Vector4Divide")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1398:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Normalize , SimNode_ExtFuncCall >(lib,"Vector4Normalize","Vector4Normalize")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1416:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Min , SimNode_ExtFuncCall >(lib,"Vector4Min","Vector4Min")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1429:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Max , SimNode_ExtFuncCall >(lib,"Vector4Max","Vector4Max")
		->args({"v1","v2"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1442:15
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , Vector4Lerp , SimNode_ExtFuncCall >(lib,"Vector4Lerp","Vector4Lerp")
		->args({"v1","v2","amount"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1455:15
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , Vector4MoveTowards , SimNode_ExtFuncCall >(lib,"Vector4MoveTowards","Vector4MoveTowards")
		->args({"v","target","maxDistance"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1478:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Invert , SimNode_ExtFuncCall >(lib,"Vector4Invert","Vector4Invert")
		->args({"v"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1485:11
	makeExtern< int (*)(Vector4,Vector4) , Vector4Equals , SimNode_ExtFuncCall >(lib,"Vector4Equals","Vector4Equals")
		->args({"p","q"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1504:13
	makeExtern< float (*)(const float4x4 &) , _rlw_MatrixDeterminant , SimNode_ExtFuncCall >(lib,"MatrixDeterminant","das::_rlw_MatrixDeterminant")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1541:13
	makeExtern< float (*)(const float4x4 &) , _rlw_MatrixTrace , SimNode_ExtFuncCall >(lib,"MatrixTrace","das::_rlw_MatrixTrace")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1549:14
	makeExtern< float4x4 (*)(const float4x4 &) , _rlw_MatrixTranspose , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixTranspose","das::_rlw_MatrixTranspose")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1574:14
	makeExtern< float4x4 (*)(const float4x4 &) , _rlw_MatrixInvert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixInvert","das::_rlw_MatrixInvert")
		->args({"mat"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1621:14
	makeExtern< float4x4 (*)() , _rlw_MatrixIdentity , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixIdentity","das::_rlw_MatrixIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1632:14
	makeExtern< float4x4 (*)(const float4x4 &,const float4x4 &) , _rlw_MatrixAdd , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixAdd","das::_rlw_MatrixAdd")
		->args({"left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1657:14
	makeExtern< float4x4 (*)(const float4x4 &,const float4x4 &) , _rlw_MatrixSubtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixSubtract","das::_rlw_MatrixSubtract")
		->args({"left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1683:14
	makeExtern< float4x4 (*)(const float4x4 &,const float4x4 &) , _rlw_MatrixMultiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixMultiply","das::_rlw_MatrixMultiply")
		->args({"left","right"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1766:14
	makeExtern< float4x4 (*)(const float4x4 &,float) , _rlw_MatrixMultiplyValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixMultiplyValue","das::_rlw_MatrixMultiplyValue")
		->args({"left","value"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1779:14
	makeExtern< float4x4 (*)(float,float,float) , _rlw_MatrixTranslate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixTranslate","das::_rlw_MatrixTranslate")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1791:14
	makeExtern< float4x4 (*)(Vector3,float) , _rlw_MatrixRotate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotate","das::_rlw_MatrixRotate")
		->args({"axis","angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1836:14
	makeExtern< float4x4 (*)(float) , _rlw_MatrixRotateX , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateX","das::_rlw_MatrixRotateX")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1856:14
	makeExtern< float4x4 (*)(float) , _rlw_MatrixRotateY , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateY","das::_rlw_MatrixRotateY")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1876:14
	makeExtern< float4x4 (*)(float) , _rlw_MatrixRotateZ , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateZ","das::_rlw_MatrixRotateZ")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1897:14
	makeExtern< float4x4 (*)(Vector3) , _rlw_MatrixRotateXYZ , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateXYZ","das::_rlw_MatrixRotateXYZ")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
}
}

