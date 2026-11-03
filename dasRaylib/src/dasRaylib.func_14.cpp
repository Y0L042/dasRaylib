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
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3MoveTowards , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3MoveTowards","Vector3MoveTowards")
		->args({"v","target","maxDistance"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:992:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3Lerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Lerp","Vector3Lerp")
		->args({"v1","v2","amount"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1005:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3,Vector3,float) , Vector3CubicHermite , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3CubicHermite","Vector3CubicHermite")
		->args({"v1","tangent1","v2","tangent2","amount"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(3,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1020:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Reflect , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Reflect","Vector3Reflect")
		->args({"v","normal"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1038:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Min , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Min","Vector3Min")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1050:15
	makeExtern< Vector3 (*)(Vector3,Vector3) , Vector3Max , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Max","Vector3Max")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1063:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3,Vector3) , Vector3Barycenter , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Barycenter","Vector3Barycenter")
		->args({"p","a","b","c"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->arg_type(3,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1087:15
	makeExtern< Vector3 (*)(Vector3,::Matrix,::Matrix) , Vector3Unproject , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Unproject","Vector3Unproject")
		->args({"source","projection","view"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const ::Matrix>(lib))
		->arg_type(2,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1182:15
	makeExtern< Vector3 (*)(Vector3) , Vector3Invert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Invert","Vector3Invert")
		->args({"v"})
		->arg_type(0,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1191:15
	makeExtern< Vector3 (*)(Vector3,Vector3,Vector3) , Vector3Clamp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Clamp","Vector3Clamp")
		->args({"v","min","max"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->arg_type(2,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1203:15
	makeExtern< Vector3 (*)(Vector3,float,float) , Vector3ClampValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3ClampValue","Vector3ClampValue")
		->args({"v","min","max"})
		->arg_type(0,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1225:11
	makeExtern< int (*)(Vector3,Vector3) , Vector3Equals , SimNode_ExtFuncCall >(lib,"Vector3Equals","Vector3Equals")
		->args({"p","q"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1243:15
	makeExtern< Vector3 (*)(Vector3,Vector3,float) , Vector3Refract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector3Refract","Vector3Refract")
		->args({"v","n","r"})
		->arg_type(0,makeType<const Vector3>(lib))
		->arg_type(1,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1268:15
	makeExtern< Vector4 (*)() , Vector4Zero , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Zero","Vector4Zero")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1275:15
	makeExtern< Vector4 (*)() , Vector4One , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4One","Vector4One")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1282:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Add , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Add","Vector4Add")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1294:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4AddValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4AddValue","Vector4AddValue")
		->args({"v","add"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1306:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Subtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Subtract","Vector4Subtract")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1318:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4SubtractValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4SubtractValue","Vector4SubtractValue")
		->args({"v","add"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1330:13
	makeExtern< float (*)(Vector4) , Vector4Length , SimNode_ExtFuncCall >(lib,"Vector4Length","Vector4Length")
		->args({"v"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1337:13
	makeExtern< float (*)(Vector4) , Vector4LengthSqr , SimNode_ExtFuncCall >(lib,"Vector4LengthSqr","Vector4LengthSqr")
		->args({"v"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1344:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4DotProduct , SimNode_ExtFuncCall >(lib,"Vector4DotProduct","Vector4DotProduct")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1351:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4Distance , SimNode_ExtFuncCall >(lib,"Vector4Distance","Vector4Distance")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1360:13
	makeExtern< float (*)(Vector4,Vector4) , Vector4DistanceSqr , SimNode_ExtFuncCall >(lib,"Vector4DistanceSqr","Vector4DistanceSqr")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1370:15
	makeExtern< Vector4 (*)(Vector4,float) , Vector4Scale , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Scale","Vector4Scale")
		->args({"v","scale"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1377:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Multiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Multiply","Vector4Multiply")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1384:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Negate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Negate","Vector4Negate")
		->args({"v"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1391:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Divide , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Divide","Vector4Divide")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1398:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Normalize , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Normalize","Vector4Normalize")
		->args({"v"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1416:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Min , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Min","Vector4Min")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1429:15
	makeExtern< Vector4 (*)(Vector4,Vector4) , Vector4Max , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Max","Vector4Max")
		->args({"v1","v2"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1442:15
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , Vector4Lerp , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Lerp","Vector4Lerp")
		->args({"v1","v2","amount"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1455:15
	makeExtern< Vector4 (*)(Vector4,Vector4,float) , Vector4MoveTowards , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4MoveTowards","Vector4MoveTowards")
		->args({"v","target","maxDistance"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1478:15
	makeExtern< Vector4 (*)(Vector4) , Vector4Invert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"Vector4Invert","Vector4Invert")
		->args({"v"})
		->arg_type(0,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1485:11
	makeExtern< int (*)(Vector4,Vector4) , Vector4Equals , SimNode_ExtFuncCall >(lib,"Vector4Equals","Vector4Equals")
		->args({"p","q"})
		->arg_type(0,makeType<const Vector4>(lib))
		->arg_type(1,makeType<const Vector4>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1504:13
	makeExtern< float (*)(::Matrix) , MatrixDeterminant , SimNode_ExtFuncCall >(lib,"MatrixDeterminant","MatrixDeterminant")
		->args({"mat"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1541:13
	makeExtern< float (*)(::Matrix) , MatrixTrace , SimNode_ExtFuncCall >(lib,"MatrixTrace","MatrixTrace")
		->args({"mat"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1549:14
	makeExtern< ::Matrix (*)(::Matrix) , MatrixTranspose , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixTranspose","MatrixTranspose")
		->args({"mat"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1574:14
	makeExtern< ::Matrix (*)(::Matrix) , MatrixInvert , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixInvert","MatrixInvert")
		->args({"mat"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1621:14
	makeExtern< ::Matrix (*)() , MatrixIdentity , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixIdentity","MatrixIdentity")
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1632:14
	makeExtern< ::Matrix (*)(::Matrix,::Matrix) , MatrixAdd , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixAdd","MatrixAdd")
		->args({"left","right"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->arg_type(1,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1657:14
	makeExtern< ::Matrix (*)(::Matrix,::Matrix) , MatrixSubtract , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixSubtract","MatrixSubtract")
		->args({"left","right"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->arg_type(1,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1683:14
	makeExtern< ::Matrix (*)(::Matrix,::Matrix) , MatrixMultiply , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixMultiply","MatrixMultiply")
		->args({"left","right"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->arg_type(1,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1766:14
	makeExtern< ::Matrix (*)(::Matrix,float) , MatrixMultiplyValue , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixMultiplyValue","MatrixMultiplyValue")
		->args({"left","value"})
		->arg_type(0,makeType<const ::Matrix>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1779:14
	makeExtern< ::Matrix (*)(float,float,float) , MatrixTranslate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixTranslate","MatrixTranslate")
		->args({"x","y","z"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1791:14
	makeExtern< ::Matrix (*)(Vector3,float) , MatrixRotate , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotate","MatrixRotate")
		->args({"axis","angle"})
		->arg_type(0,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1836:14
	makeExtern< ::Matrix (*)(float) , MatrixRotateX , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateX","MatrixRotateX")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1856:14
	makeExtern< ::Matrix (*)(float) , MatrixRotateY , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateY","MatrixRotateY")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1876:14
	makeExtern< ::Matrix (*)(float) , MatrixRotateZ , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateZ","MatrixRotateZ")
		->args({"angle"})
		->addToModule(*this, SideEffects::worstDefault);
// from raymath.h:1897:14
	makeExtern< ::Matrix (*)(Vector3) , MatrixRotateXYZ , SimNode_ExtFuncCallAndCopyOrMove >(lib,"MatrixRotateXYZ","MatrixRotateXYZ")
		->args({"angle"})
		->arg_type(0,makeType<const Vector3>(lib))
		->addToModule(*this, SideEffects::worstDefault);
}
}

