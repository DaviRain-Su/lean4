// Lean compiler output
// Module: Lake.Config.LeanConfig
// Imports: public import Lake.Build.Target.Basic public import Lake.Config.Dynlib public import Lake.Config.MetaClasses public import Init.Data.String.Modify meta import all Lake.Config.Meta import Lake.Util.Name import Init.Data.String.Modify import Lake.Config.Meta
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lake_Target_repr___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_instReprLeanOption_repr___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lake_Backend_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Backend_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Backend_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprBackend_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.Backend.c"};
static const lean_object* l_Lake_instReprBackend_repr___closed__0 = (const lean_object*)&l_Lake_instReprBackend_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprBackend_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBackend_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprBackend_repr___closed__1 = (const lean_object*)&l_Lake_instReprBackend_repr___closed__1_value;
static const lean_string_object l_Lake_instReprBackend_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lake.Backend.llvm"};
static const lean_object* l_Lake_instReprBackend_repr___closed__2 = (const lean_object*)&l_Lake_instReprBackend_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprBackend_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBackend_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprBackend_repr___closed__3 = (const lean_object*)&l_Lake_instReprBackend_repr___closed__3_value;
static const lean_string_object l_Lake_instReprBackend_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.Backend.default"};
static const lean_object* l_Lake_instReprBackend_repr___closed__4 = (const lean_object*)&l_Lake_instReprBackend_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprBackend_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBackend_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprBackend_repr___closed__5 = (const lean_object*)&l_Lake_instReprBackend_repr___closed__5_value;
static lean_once_cell_t l_Lake_instReprBackend_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBackend_repr___closed__6;
static lean_once_cell_t l_Lake_instReprBackend_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBackend_repr___closed__7;
LEAN_EXPORT lean_object* l_Lake_instReprBackend_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBackend_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprBackend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprBackend_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprBackend___closed__0 = (const lean_object*)&l_Lake_instReprBackend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprBackend = (const lean_object*)&l_Lake_instReprBackend___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_Backend_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBackend(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBackend___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Backend_instInhabited;
static const lean_string_object l_Lake_Backend_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lake_Backend_ofString_x3f___closed__0 = (const lean_object*)&l_Lake_Backend_ofString_x3f___closed__0_value;
static const lean_string_object l_Lake_Backend_ofString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "llvm"};
static const lean_object* l_Lake_Backend_ofString_x3f___closed__1 = (const lean_object*)&l_Lake_Backend_ofString_x3f___closed__1_value;
static const lean_string_object l_Lake_Backend_ofString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lake_Backend_ofString_x3f___closed__2 = (const lean_object*)&l_Lake_Backend_ofString_x3f___closed__2_value;
static const lean_ctor_object l_Lake_Backend_ofString_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lake_Backend_ofString_x3f___closed__3 = (const lean_object*)&l_Lake_Backend_ofString_x3f___closed__3_value;
static const lean_ctor_object l_Lake_Backend_ofString_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_Backend_ofString_x3f___closed__4 = (const lean_object*)&l_Lake_Backend_ofString_x3f___closed__4_value;
static const lean_ctor_object l_Lake_Backend_ofString_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Backend_ofString_x3f___closed__5 = (const lean_object*)&l_Lake_Backend_ofString_x3f___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Backend_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_ofString_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Backend_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Backend_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Config_LeanConfig_0__Lake_Backend_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Backend_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Config_LeanConfig_0__Lake_Backend_instToString___closed__0 = (const lean_object*)&l___private_Lake_Config_LeanConfig_0__Lake_Backend_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Config_LeanConfig_0__Lake_Backend_instToString = (const lean_object*)&l___private_Lake_Config_LeanConfig_0__Lake_Backend_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_Backend_orPreferLeft(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Backend_orPreferLeft___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instInhabitedBuildType_default;
LEAN_EXPORT uint8_t l_Lake_instInhabitedBuildType;
static const lean_string_object l_Lake_instReprBuildType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.BuildType.debug"};
static const lean_object* l_Lake_instReprBuildType_repr___closed__0 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprBuildType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildType_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprBuildType_repr___closed__1 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__1_value;
static const lean_string_object l_Lake_instReprBuildType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lake.BuildType.relWithDebInfo"};
static const lean_object* l_Lake_instReprBuildType_repr___closed__2 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprBuildType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildType_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprBuildType_repr___closed__3 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__3_value;
static const lean_string_object l_Lake_instReprBuildType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lake.BuildType.minSizeRel"};
static const lean_object* l_Lake_instReprBuildType_repr___closed__4 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprBuildType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildType_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprBuildType_repr___closed__5 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__5_value;
static const lean_string_object l_Lake_instReprBuildType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lake.BuildType.release"};
static const lean_object* l_Lake_instReprBuildType_repr___closed__6 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprBuildType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildType_repr___closed__6_value)}};
static const lean_object* l_Lake_instReprBuildType_repr___closed__7 = (const lean_object*)&l_Lake_instReprBuildType_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instReprBuildType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprBuildType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprBuildType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprBuildType___closed__0 = (const lean_object*)&l_Lake_instReprBuildType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprBuildType = (const lean_object*)&l_Lake_instReprBuildType___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_BuildType_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildType(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildType___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdBuildType_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instOrdBuildType_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdBuildType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdBuildType_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdBuildType___closed__0 = (const lean_object*)&l_Lake_instOrdBuildType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdBuildType = (const lean_object*)&l_Lake_instOrdBuildType___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildType_instLT;
LEAN_EXPORT lean_object* l_Lake_BuildType_instLE;
LEAN_EXPORT uint8_t l_Lake_BuildType_instMin___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_BuildType_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildType_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildType_instMin___closed__0 = (const lean_object*)&l_Lake_BuildType_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildType_instMin = (const lean_object*)&l_Lake_BuildType_instMin___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_BuildType_instMax___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_BuildType_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildType_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildType_instMax___closed__0 = (const lean_object*)&l_Lake_BuildType_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildType_instMax = (const lean_object*)&l_Lake_BuildType_instMax___closed__0_value;
static const lean_string_object l_Lake_BuildType_leancArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-O0"};
static const lean_object* l_Lake_BuildType_leancArgs___closed__0 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__0_value;
static const lean_string_object l_Lake_BuildType_leancArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-g"};
static const lean_object* l_Lake_BuildType_leancArgs___closed__1 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__1_value;
static const lean_array_object l_Lake_BuildType_leancArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_BuildType_leancArgs___closed__0_value),((lean_object*)&l_Lake_BuildType_leancArgs___closed__1_value)}};
static const lean_object* l_Lake_BuildType_leancArgs___closed__2 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__2_value;
static const lean_string_object l_Lake_BuildType_leancArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-O3"};
static const lean_object* l_Lake_BuildType_leancArgs___closed__3 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__3_value;
static const lean_string_object l_Lake_BuildType_leancArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "-DNDEBUG"};
static const lean_object* l_Lake_BuildType_leancArgs___closed__4 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__4_value;
static const lean_array_object l_Lake_BuildType_leancArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lake_BuildType_leancArgs___closed__3_value),((lean_object*)&l_Lake_BuildType_leancArgs___closed__1_value),((lean_object*)&l_Lake_BuildType_leancArgs___closed__4_value)}};
static const lean_object* l_Lake_BuildType_leancArgs___closed__5 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__5_value;
static const lean_string_object l_Lake_BuildType_leancArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "-Os"};
static const lean_object* l_Lake_BuildType_leancArgs___closed__6 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__6_value;
static const lean_array_object l_Lake_BuildType_leancArgs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_BuildType_leancArgs___closed__6_value),((lean_object*)&l_Lake_BuildType_leancArgs___closed__4_value)}};
static const lean_object* l_Lake_BuildType_leancArgs___closed__7 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__7_value;
static const lean_array_object l_Lake_BuildType_leancArgs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lake_BuildType_leancArgs___closed__3_value),((lean_object*)&l_Lake_BuildType_leancArgs___closed__4_value)}};
static const lean_object* l_Lake_BuildType_leancArgs___closed__8 = (const lean_object*)&l_Lake_BuildType_leancArgs___closed__8_value;
LEAN_EXPORT lean_object* l_Lake_BuildType_leancArgs(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_leancArgs___boxed(lean_object*);
static const lean_string_object l_Lake_BuildType_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__0 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__0_value;
static const lean_string_object l_Lake_BuildType_ofString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "relWithDebInfo"};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__1 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__1_value;
static const lean_string_object l_Lake_BuildType_ofString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "minSizeRel"};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__2 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__2_value;
static const lean_string_object l_Lake_BuildType_ofString_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "release"};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__3 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__3_value;
static const lean_ctor_object l_Lake_BuildType_ofString_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__4 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__4_value;
static const lean_ctor_object l_Lake_BuildType_ofString_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__5 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__5_value;
static const lean_ctor_object l_Lake_BuildType_ofString_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__6 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__6_value;
static const lean_ctor_object l_Lake_BuildType_ofString_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_BuildType_ofString_x3f___closed__7 = (const lean_object*)&l_Lake_BuildType_ofString_x3f___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_BuildType_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildType_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_BuildType_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildType_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildType_instToString___closed__0 = (const lean_object*)&l_Lake_BuildType_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildType_instToString = (const lean_object*)&l_Lake_BuildType_instToString___closed__0_value;
static const lean_string_object l_Lake_BuildType_leanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "debugAssertions"};
static const lean_object* l_Lake_BuildType_leanOptions___closed__0 = (const lean_object*)&l_Lake_BuildType_leanOptions___closed__0_value;
static const lean_ctor_object l_Lake_BuildType_leanOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_BuildType_leanOptions___closed__0_value),LEAN_SCALAR_PTR_LITERAL(110, 54, 192, 168, 100, 218, 251, 120)}};
static const lean_object* l_Lake_BuildType_leanOptions___closed__1 = (const lean_object*)&l_Lake_BuildType_leanOptions___closed__1_value;
static const lean_ctor_object l_Lake_BuildType_leanOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_BuildType_leanOptions___closed__2 = (const lean_object*)&l_Lake_BuildType_leanOptions___closed__2_value;
static lean_once_cell_t l_Lake_BuildType_leanOptions___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildType_leanOptions___closed__3;
LEAN_EXPORT lean_object* l_Lake_BuildType_leanOptions(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_leanOptions___boxed(lean_object*);
static const lean_array_object l_Lake_BuildType_leanArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildType_leanArgs___closed__0 = (const lean_object*)&l_Lake_BuildType_leanArgs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildType_leanArgs(uint8_t);
LEAN_EXPORT lean_object* l_Lake_BuildType_leanArgs___boxed(lean_object*);
static const lean_array_object l_Lake_instInhabitedLeanConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedLeanConfig_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedLeanConfig_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*13 + 8, .m_other = 13, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),((lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 2, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_instInhabitedLeanConfig_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLeanConfig_default = (const lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLeanConfig = (const lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__0 = (const lean_object*)&l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__1 = (const lean_object*)&l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__2 = (const lean_object*)&l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__3 = (const lean_object*)&l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprLeanConfig_repr_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__0 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__1 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__2 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__4 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__4_value;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__9 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10 = (const lean_object*)&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6_spec__12_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2(lean_object*);
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__0_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "buildType"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__2_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__3_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__4 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__4_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__3_value),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "leanOptions"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__10;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moreLeanArgs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__11 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__11_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__12 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__13;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "weakLeanArgs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__14 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__14_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__15 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__15_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "useZigCodegen"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__16 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__16_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__17 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__18;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "moreLeancArgs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__19 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__19_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__20 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__20_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "moreServerOptions"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__21 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__21_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__22 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__22_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__23;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "weakLeancArgs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__24 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__24_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__24_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__25 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__25_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moreLinkObjs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__26 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__26_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__26_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__27 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__27_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moreLinkLibs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__28 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__28_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__29 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__29_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "moreLinkArgs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__30 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__30_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__30_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__31 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__31_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "weakLinkArgs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__32 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__32_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__32_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__33 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__33_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "backend"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__34 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__34_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__34_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__35 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__35_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__36;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "platformIndependent"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__37 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__37_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__37_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__38 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__38_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__39;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dynlibs"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__40 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__40_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__40_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__41 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__41_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "plugins"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__42 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__42_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__42_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__43 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__43_value;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "requiresModuleSystem"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__44 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__44_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__44_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__45 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__45_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__46;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "allowNonModules"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__47 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__47_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__47_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__48 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__48_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__49;
static const lean_string_object l_Lake_instReprLeanConfig_repr___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__50 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__50_value;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__51;
static lean_once_cell_t l_Lake_instReprLeanConfig_repr___redArg___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__52;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__53 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__53_value;
static const lean_ctor_object l_Lake_instReprLeanConfig_repr___redArg___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__50_value)}};
static const lean_object* l_Lake_instReprLeanConfig_repr___redArg___closed__54 = (const lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__54_value;
LEAN_EXPORT lean_object* l_Lake_instReprLeanConfig_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprLeanConfig_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprLeanConfig_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprLeanConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprLeanConfig_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprLeanConfig___closed__0 = (const lean_object*)&l_Lake_instReprLeanConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprLeanConfig = (const lean_object*)&l_Lake_instReprLeanConfig___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_LeanConfig_buildType___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanConfig_buildType___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_buildType___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_buildType___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_buildType___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_buildType___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_buildType___proj___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_buildType___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_buildType___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_buildType___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_buildType___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_buildType___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_buildType___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_buildType___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_buildType___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_buildType___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_buildType___proj = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_buildType_instConfigField = (const lean_object*)&l_Lake_LeanConfig_buildType___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_leanOptions___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_leanOptions___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_leanOptions___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_leanOptions___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_leanOptions___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_leanOptions___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_leanOptions___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_leanOptions___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_leanOptions___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_leanOptions___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_leanOptions___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_leanOptions___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_leanOptions___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_leanOptions___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_leanOptions___proj = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_leanOptions_instConfigField = (const lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_moreLeanArgs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeanArgs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_moreLeanArgs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeanArgs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_moreLeanArgs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeanArgs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeanArgs___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_moreLeanArgs___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLeanArgs___proj = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLeanArgs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_weakLeanArgs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLeanArgs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_weakLeanArgs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLeanArgs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_weakLeanArgs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLeanArgs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_weakLeanArgs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_weakLeanArgs___proj = (const lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_weakLeanArgs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_weakLeanArgs___proj___closed__3_value;
LEAN_EXPORT uint8_t l_Lake_LeanConfig_useZigCodegen___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanConfig_useZigCodegen___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_useZigCodegen___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_useZigCodegen___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_useZigCodegen___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_useZigCodegen___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_useZigCodegen___proj___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_useZigCodegen___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_useZigCodegen___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_useZigCodegen___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_useZigCodegen___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_useZigCodegen___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_useZigCodegen___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_useZigCodegen___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_useZigCodegen___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_useZigCodegen___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_useZigCodegen___proj = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_useZigCodegen_instConfigField = (const lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_moreLeancArgs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeancArgs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_moreLeancArgs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeancArgs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_moreLeancArgs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLeancArgs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_moreLeancArgs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLeancArgs___proj = (const lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLeancArgs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_moreLeancArgs___proj___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_moreServerOptions___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreServerOptions___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreServerOptions___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_moreServerOptions___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreServerOptions___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreServerOptions___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_moreServerOptions___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreServerOptions___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreServerOptions___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_moreServerOptions___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_leanOptions___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_moreServerOptions___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreServerOptions___proj = (const lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreServerOptions_instConfigField = (const lean_object*)&l_Lake_LeanConfig_moreServerOptions___proj___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_weakLeancArgs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLeancArgs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_weakLeancArgs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLeancArgs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_weakLeancArgs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLeancArgs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_weakLeancArgs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_weakLeancArgs___proj = (const lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_weakLeancArgs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_weakLeancArgs___proj___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__2(lean_object*, lean_object*);
static const lean_array_object l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_moreLinkObjs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkObjs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkObjs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkObjs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkObjs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkObjs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkObjs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_moreLinkObjs___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLinkObjs___proj = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLinkObjs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_moreLinkLibs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkLibs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkLibs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkLibs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkLibs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkLibs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_moreLinkLibs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLinkLibs___proj = (const lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLinkLibs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_moreLinkLibs___proj___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_moreLinkArgs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkArgs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkArgs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkArgs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_moreLinkArgs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_moreLinkArgs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_moreLinkArgs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLinkArgs___proj = (const lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_moreLinkArgs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_moreLinkArgs___proj___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_weakLinkArgs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLinkArgs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_weakLinkArgs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLinkArgs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_weakLinkArgs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_weakLinkArgs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_weakLinkArgs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLeanArgs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_weakLinkArgs___proj = (const lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_weakLinkArgs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_weakLinkArgs___proj___closed__3_value;
LEAN_EXPORT uint8_t l_Lake_LeanConfig_backend___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanConfig_backend___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_backend___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_backend___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_backend___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_backend___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_backend___proj___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_backend___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_backend___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_backend___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_backend___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_backend___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_backend___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_backend___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_backend___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_backend___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_backend___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_backend___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_backend___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_backend___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_backend___proj = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_backend_instConfigField = (const lean_object*)&l_Lake_LeanConfig_backend___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lake_LeanConfig_platformIndependent___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_platformIndependent___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_platformIndependent___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_platformIndependent___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_platformIndependent___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_platformIndependent___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_platformIndependent___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_platformIndependent___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_platformIndependent___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_platformIndependent___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_platformIndependent___proj___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_platformIndependent___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__3_value;
static const lean_ctor_object l_Lake_LeanConfig_platformIndependent___proj___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_platformIndependent___proj___closed__4 = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_platformIndependent___proj = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__4_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_platformIndependent_instConfigField = (const lean_object*)&l_Lake_LeanConfig_platformIndependent___proj___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_dynlibs___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_dynlibs___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_dynlibs___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_dynlibs___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_dynlibs___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_dynlibs___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_dynlibs___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_dynlibs___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_dynlibs___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_dynlibs___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_dynlibs___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_dynlibs___proj = (const lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_dynlibs_instConfigField = (const lean_object*)&l_Lake_LeanConfig_dynlibs___proj___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_plugins___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_plugins___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_plugins___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_plugins___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_plugins___proj___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_plugins___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_plugins___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_plugins___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_plugins___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_plugins___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_moreLinkObjs___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_plugins___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_plugins___proj = (const lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_plugins_instConfigField = (const lean_object*)&l_Lake_LeanConfig_plugins___proj___closed__3_value;
LEAN_EXPORT uint8_t l_Lake_LeanConfig_requiresModuleSystem___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_requiresModuleSystem___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_requiresModuleSystem___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_requiresModuleSystem___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_requiresModuleSystem___proj___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_requiresModuleSystem___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_requiresModuleSystem___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_requiresModuleSystem___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj = (const lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_requiresModuleSystem_instConfigField = (const lean_object*)&l_Lake_LeanConfig_requiresModuleSystem___proj___closed__3_value;
LEAN_EXPORT uint8_t l_Lake_LeanConfig_allowNonModules___proj___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanConfig_allowNonModules___proj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_allowNonModules___proj___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_allowNonModules___proj___closed__0 = (const lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__0_value;
static const lean_closure_object l_Lake_LeanConfig_allowNonModules___proj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_allowNonModules___proj___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_allowNonModules___proj___closed__1 = (const lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_allowNonModules___proj___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_allowNonModules___proj___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_allowNonModules___proj___closed__2 = (const lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__2_value;
static const lean_ctor_object l_Lake_LeanConfig_allowNonModules___proj___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__0_value),((lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__1_value),((lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__2_value),((lean_object*)&l_Lake_LeanConfig_useZigCodegen___proj___closed__3_value)}};
static const lean_object* l_Lake_LeanConfig_allowNonModules___proj___closed__3 = (const lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_allowNonModules___proj = (const lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__3_value;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_allowNonModules_instConfigField = (const lean_object*)&l_Lake_LeanConfig_allowNonModules___proj___closed__3_value;
static const lean_array_object l_Lake_LeanConfig___fields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanConfig___fields___closed__0 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__0_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 227, 67, 96, 129, 21, 223, 119)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__1 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__1_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__1_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__2 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__2_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__3;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(20, 201, 223, 70, 146, 84, 32, 214)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__4 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__4_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__4_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__4_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__5 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__5_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__6;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(110, 73, 169, 213, 6, 174, 187, 7)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__7 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__7_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__7_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__7_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__8 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__8_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__9;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(12, 17, 230, 153, 39, 202, 125, 90)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__10 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__10_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__10_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__10_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__11 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__11_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__12;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__16_value),LEAN_SCALAR_PTR_LITERAL(38, 111, 241, 33, 252, 59, 59, 33)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__13 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__13_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__13_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__13_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__14 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__14_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__15;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(35, 65, 185, 53, 108, 178, 133, 37)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__16 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__16_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__16_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__16_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__17 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__17_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__18;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(206, 114, 170, 237, 212, 72, 1, 170)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__19 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__19_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__19_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__19_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__20 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__20_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__21;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__24_value),LEAN_SCALAR_PTR_LITERAL(103, 110, 140, 220, 181, 192, 131, 104)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__22 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__22_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__22_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__22_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__23 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__23_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__24;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__26_value),LEAN_SCALAR_PTR_LITERAL(232, 242, 55, 26, 170, 174, 241, 71)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__25 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__25_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__25_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__25_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__26 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__26_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__27;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(111, 122, 160, 205, 53, 195, 181, 180)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__28 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__28_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__28_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__28_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__29 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__29_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__30;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(14, 165, 131, 17, 225, 82, 140, 145)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__31 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__31_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__31_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__31_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__32 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__32_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__33;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(187, 9, 155, 166, 154, 189, 94, 67)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__34 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__34_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__34_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__34_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__35 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__35_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__36;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(40, 75, 156, 92, 110, 161, 40, 36)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__37 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__37_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__37_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__37_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__38 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__38_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__39;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__37_value),LEAN_SCALAR_PTR_LITERAL(51, 35, 219, 1, 108, 129, 116, 147)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__40 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__40_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__40_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__40_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__41 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__41_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__42;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(213, 126, 44, 113, 100, 173, 176, 199)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__43 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__43_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__43_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__43_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__44 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__44_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__45;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__42_value),LEAN_SCALAR_PTR_LITERAL(43, 100, 103, 72, 156, 88, 10, 236)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__46 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__46_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__46_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__46_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__47 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__47_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__48;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__44_value),LEAN_SCALAR_PTR_LITERAL(9, 5, 144, 35, 76, 175, 146, 150)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__49 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__49_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__49_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__49_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__50 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__50_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__51;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprLeanConfig_repr___redArg___closed__47_value),LEAN_SCALAR_PTR_LITERAL(196, 92, 18, 175, 109, 198, 159, 30)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__52 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__52_value;
static const lean_ctor_object l_Lake_LeanConfig___fields___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig___fields___closed__52_value),((lean_object*)&l_Lake_LeanConfig___fields___closed__52_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_LeanConfig___fields___closed__53 = (const lean_object*)&l_Lake_LeanConfig___fields___closed__53_value;
static lean_once_cell_t l_Lake_LeanConfig___fields___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig___fields___closed__54;
LEAN_EXPORT lean_object* l_Lake_LeanConfig___fields;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_instConfigFields;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_instConfigInfo___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig_instConfigInfo___closed__0;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__1 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__1_value;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__2 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__2_value;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__3 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__3_value;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__4 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__4_value;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__5 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__5_value;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__6 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__6_value;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__7 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__7_value;
static const lean_ctor_object l_Lake_LeanConfig_instConfigInfo___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__1_value),((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__2_value)}};
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__8 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__8_value;
static const lean_ctor_object l_Lake_LeanConfig_instConfigInfo___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__8_value),((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__3_value),((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__4_value),((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__5_value),((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__6_value)}};
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__9 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__9_value;
static const lean_ctor_object l_Lake_LeanConfig_instConfigInfo___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__9_value),((lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__7_value)}};
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__10 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__10_value;
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_LeanConfig_instConfigInfo___closed__11;
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig_instConfigInfo___closed__12;
static const lean_closure_object l_Lake_LeanConfig_instConfigInfo___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanConfig_instConfigInfo___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanConfig_instConfigInfo___closed__13 = (const lean_object*)&l_Lake_LeanConfig_instConfigInfo___closed__13_value;
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_LeanConfig_instConfigInfo___closed__14;
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lake_LeanConfig_instConfigInfo___closed__15;
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig_instConfigInfo___closed__16;
static lean_once_cell_t l_Lake_LeanConfig_instConfigInfo___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanConfig_instConfigInfo___closed__17;
LEAN_EXPORT lean_object* l_Lake_LeanConfig_instConfigInfo;
LEAN_EXPORT const lean_object* l_Lake_LeanConfig_instEmptyCollection = (const lean_object*)&l_Lake_instInhabitedLeanConfig_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Backend_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lake_Backend_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_toCtorIdx(uint8_t v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = l_Lake_Backend_ctorIdx(v_x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_toCtorIdx___boxed(lean_object* v_x_10_){
_start:
{
uint8_t v_x_4__boxed_11_; lean_object* v_res_12_; 
v_x_4__boxed_11_ = lean_unbox(v_x_10_);
v_res_12_ = l_Lake_Backend_toCtorIdx(v_x_4__boxed_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim___redArg(lean_object* v_k_13_){
_start:
{
lean_inc(v_k_13_);
return v_k_13_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim___redArg___boxed(lean_object* v_k_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lake_Backend_ctorElim___redArg(v_k_14_);
lean_dec(v_k_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, uint8_t v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_inc(v_k_20_);
return v_k_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ctorElim___boxed(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
uint8_t v_t_boxed_26_; lean_object* v_res_27_; 
v_t_boxed_26_ = lean_unbox(v_t_23_);
v_res_27_ = l_Lake_Backend_ctorElim(v_motive_21_, v_ctorIdx_22_, v_t_boxed_26_, v_h_24_, v_k_25_);
lean_dec(v_k_25_);
lean_dec(v_ctorIdx_22_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim___redArg(lean_object* v_c_28_){
_start:
{
lean_inc(v_c_28_);
return v_c_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim___redArg___boxed(lean_object* v_c_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lake_Backend_c_elim___redArg(v_c_29_);
lean_dec(v_c_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim(lean_object* v_motive_31_, uint8_t v_t_32_, lean_object* v_h_33_, lean_object* v_c_34_){
_start:
{
lean_inc(v_c_34_);
return v_c_34_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_c_elim___boxed(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_c_38_){
_start:
{
uint8_t v_t_boxed_39_; lean_object* v_res_40_; 
v_t_boxed_39_ = lean_unbox(v_t_36_);
v_res_40_ = l_Lake_Backend_c_elim(v_motive_35_, v_t_boxed_39_, v_h_37_, v_c_38_);
lean_dec(v_c_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim___redArg(lean_object* v_llvm_41_){
_start:
{
lean_inc(v_llvm_41_);
return v_llvm_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim___redArg___boxed(lean_object* v_llvm_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lake_Backend_llvm_elim___redArg(v_llvm_42_);
lean_dec(v_llvm_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim(lean_object* v_motive_44_, uint8_t v_t_45_, lean_object* v_h_46_, lean_object* v_llvm_47_){
_start:
{
lean_inc(v_llvm_47_);
return v_llvm_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_llvm_elim___boxed(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_llvm_51_){
_start:
{
uint8_t v_t_boxed_52_; lean_object* v_res_53_; 
v_t_boxed_52_ = lean_unbox(v_t_49_);
v_res_53_ = l_Lake_Backend_llvm_elim(v_motive_48_, v_t_boxed_52_, v_h_50_, v_llvm_51_);
lean_dec(v_llvm_51_);
return v_res_53_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim___redArg(lean_object* v_default_54_){
_start:
{
lean_inc(v_default_54_);
return v_default_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim___redArg___boxed(lean_object* v_default_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lake_Backend_default_elim___redArg(v_default_55_);
lean_dec(v_default_55_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim(lean_object* v_motive_57_, uint8_t v_t_58_, lean_object* v_h_59_, lean_object* v_default_60_){
_start:
{
lean_inc(v_default_60_);
return v_default_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_default_elim___boxed(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_default_64_){
_start:
{
uint8_t v_t_boxed_65_; lean_object* v_res_66_; 
v_t_boxed_65_ = lean_unbox(v_t_62_);
v_res_66_ = l_Lake_Backend_default_elim(v_motive_61_, v_t_boxed_65_, v_h_63_, v_default_64_);
lean_dec(v_default_64_);
return v_res_66_;
}
}
static lean_object* _init_l_Lake_instReprBackend_repr___closed__6(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(2u);
v___x_77_ = lean_nat_to_int(v___x_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lake_instReprBackend_repr___closed__7(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_unsigned_to_nat(1u);
v___x_79_ = lean_nat_to_int(v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBackend_repr(uint8_t v_x_80_, lean_object* v_prec_81_){
_start:
{
lean_object* v___y_83_; lean_object* v___y_90_; lean_object* v___y_97_; 
switch(v_x_80_)
{
case 0:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = lean_unsigned_to_nat(1024u);
v___x_104_ = lean_nat_dec_le(v___x_103_, v_prec_81_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_83_ = v___x_105_;
goto v___jp_82_;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_83_ = v___x_106_;
goto v___jp_82_;
}
}
case 1:
{
lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_107_ = lean_unsigned_to_nat(1024u);
v___x_108_ = lean_nat_dec_le(v___x_107_, v_prec_81_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_90_ = v___x_109_;
goto v___jp_89_;
}
else
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_90_ = v___x_110_;
goto v___jp_89_;
}
}
default: 
{
lean_object* v___x_111_; uint8_t v___x_112_; 
v___x_111_ = lean_unsigned_to_nat(1024u);
v___x_112_ = lean_nat_dec_le(v___x_111_, v_prec_81_);
if (v___x_112_ == 0)
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_97_ = v___x_113_;
goto v___jp_96_;
}
else
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_97_ = v___x_114_;
goto v___jp_96_;
}
}
}
v___jp_82_:
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_84_ = ((lean_object*)(l_Lake_instReprBackend_repr___closed__1));
lean_inc(v___y_83_);
v___x_85_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_85_, 0, v___y_83_);
lean_ctor_set(v___x_85_, 1, v___x_84_);
v___x_86_ = 0;
v___x_87_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*1, v___x_86_);
v___x_88_ = l_Repr_addAppParen(v___x_87_, v_prec_81_);
return v___x_88_;
}
v___jp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = ((lean_object*)(l_Lake_instReprBackend_repr___closed__3));
lean_inc(v___y_90_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___y_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = 0;
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_93_);
v___x_95_ = l_Repr_addAppParen(v___x_94_, v_prec_81_);
return v___x_95_;
}
v___jp_96_:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_98_ = ((lean_object*)(l_Lake_instReprBackend_repr___closed__5));
lean_inc(v___y_97_);
v___x_99_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_99_, 0, v___y_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = 0;
v___x_101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_101_, 0, v___x_99_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*1, v___x_100_);
v___x_102_ = l_Repr_addAppParen(v___x_101_, v_prec_81_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBackend_repr___boxed(lean_object* v_x_115_, lean_object* v_prec_116_){
_start:
{
uint8_t v_x_177__boxed_117_; lean_object* v_res_118_; 
v_x_177__boxed_117_ = lean_unbox(v_x_115_);
v_res_118_ = l_Lake_instReprBackend_repr(v_x_177__boxed_117_, v_prec_116_);
lean_dec(v_prec_116_);
return v_res_118_;
}
}
LEAN_EXPORT uint8_t l_Lake_Backend_ofNat(lean_object* v_n_121_){
_start:
{
lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_nat_dec_le(v_n_121_, v___x_122_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_nat_dec_le(v_n_121_, v___x_124_);
if (v___x_125_ == 0)
{
uint8_t v___x_126_; 
v___x_126_ = 2;
return v___x_126_;
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 1;
return v___x_127_;
}
}
else
{
uint8_t v___x_128_; 
v___x_128_ = 0;
return v___x_128_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ofNat___boxed(lean_object* v_n_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = l_Lake_Backend_ofNat(v_n_129_);
lean_dec(v_n_129_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBackend(uint8_t v_x_132_, uint8_t v_y_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_134_ = l_Lake_Backend_ctorIdx(v_x_132_);
v___x_135_ = l_Lake_Backend_ctorIdx(v_y_133_);
v___x_136_ = lean_nat_dec_eq(v___x_134_, v___x_135_);
lean_dec(v___x_135_);
lean_dec(v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBackend___boxed(lean_object* v_x_137_, lean_object* v_y_138_){
_start:
{
uint8_t v_x_13__boxed_139_; uint8_t v_y_14__boxed_140_; uint8_t v_res_141_; lean_object* v_r_142_; 
v_x_13__boxed_139_ = lean_unbox(v_x_137_);
v_y_14__boxed_140_ = lean_unbox(v_y_138_);
v_res_141_ = l_Lake_instDecidableEqBackend(v_x_13__boxed_139_, v_y_14__boxed_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
static uint8_t _init_l_Lake_Backend_instInhabited(void){
_start:
{
uint8_t v___x_143_; 
v___x_143_ = 2;
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ofString_x3f(lean_object* v_s_156_){
_start:
{
lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_157_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__0));
v___x_158_ = lean_string_dec_eq(v_s_156_, v___x_157_);
if (v___x_158_ == 0)
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__1));
v___x_160_ = lean_string_dec_eq(v_s_156_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__2));
v___x_162_ = lean_string_dec_eq(v_s_156_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; 
v___x_163_ = lean_box(0);
return v___x_163_;
}
else
{
lean_object* v___x_164_; 
v___x_164_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__3));
return v___x_164_;
}
}
else
{
lean_object* v___x_165_; 
v___x_165_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__4));
return v___x_165_;
}
}
else
{
lean_object* v___x_166_; 
v___x_166_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__5));
return v___x_166_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_ofString_x3f___boxed(lean_object* v_s_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lake_Backend_ofString_x3f(v_s_167_);
lean_dec_ref(v_s_167_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_toString(uint8_t v_bt_169_){
_start:
{
switch(v_bt_169_)
{
case 0:
{
lean_object* v___x_170_; 
v___x_170_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__0));
return v___x_170_;
}
case 1:
{
lean_object* v___x_171_; 
v___x_171_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__1));
return v___x_171_;
}
default: 
{
lean_object* v___x_172_; 
v___x_172_ = ((lean_object*)(l_Lake_Backend_ofString_x3f___closed__2));
return v___x_172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_toString___boxed(lean_object* v_bt_173_){
_start:
{
uint8_t v_bt_boxed_174_; lean_object* v_res_175_; 
v_bt_boxed_174_ = lean_unbox(v_bt_173_);
v_res_175_ = l_Lake_Backend_toString(v_bt_boxed_174_);
return v_res_175_;
}
}
LEAN_EXPORT uint8_t l_Lake_Backend_orPreferLeft(uint8_t v_x_178_, uint8_t v_x_179_){
_start:
{
if (v_x_178_ == 2)
{
return v_x_179_;
}
else
{
return v_x_178_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Backend_orPreferLeft___boxed(lean_object* v_x_180_, lean_object* v_x_181_){
_start:
{
uint8_t v_x_16__boxed_182_; uint8_t v_x_17__boxed_183_; uint8_t v_res_184_; lean_object* v_r_185_; 
v_x_16__boxed_182_ = lean_unbox(v_x_180_);
v_x_17__boxed_183_ = lean_unbox(v_x_181_);
v_res_184_ = l_Lake_Backend_orPreferLeft(v_x_16__boxed_182_, v_x_17__boxed_183_);
v_r_185_ = lean_box(v_res_184_);
return v_r_185_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorIdx(uint8_t v_x_186_){
_start:
{
switch(v_x_186_)
{
case 0:
{
lean_object* v___x_187_; 
v___x_187_ = lean_unsigned_to_nat(0u);
return v___x_187_;
}
case 1:
{
lean_object* v___x_188_; 
v___x_188_ = lean_unsigned_to_nat(1u);
return v___x_188_;
}
case 2:
{
lean_object* v___x_189_; 
v___x_189_ = lean_unsigned_to_nat(2u);
return v___x_189_;
}
default: 
{
lean_object* v___x_190_; 
v___x_190_ = lean_unsigned_to_nat(3u);
return v___x_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorIdx___boxed(lean_object* v_x_191_){
_start:
{
uint8_t v_x_boxed_192_; lean_object* v_res_193_; 
v_x_boxed_192_ = lean_unbox(v_x_191_);
v_res_193_ = l_Lake_BuildType_ctorIdx(v_x_boxed_192_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_toCtorIdx(uint8_t v_x_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lake_BuildType_ctorIdx(v_x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_toCtorIdx___boxed(lean_object* v_x_196_){
_start:
{
uint8_t v_x_4__boxed_197_; lean_object* v_res_198_; 
v_x_4__boxed_197_ = lean_unbox(v_x_196_);
v_res_198_ = l_Lake_BuildType_toCtorIdx(v_x_4__boxed_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim___redArg(lean_object* v_k_199_){
_start:
{
lean_inc(v_k_199_);
return v_k_199_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim___redArg___boxed(lean_object* v_k_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lake_BuildType_ctorElim___redArg(v_k_200_);
lean_dec(v_k_200_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim(lean_object* v_motive_202_, lean_object* v_ctorIdx_203_, uint8_t v_t_204_, lean_object* v_h_205_, lean_object* v_k_206_){
_start:
{
lean_inc(v_k_206_);
return v_k_206_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ctorElim___boxed(lean_object* v_motive_207_, lean_object* v_ctorIdx_208_, lean_object* v_t_209_, lean_object* v_h_210_, lean_object* v_k_211_){
_start:
{
uint8_t v_t_boxed_212_; lean_object* v_res_213_; 
v_t_boxed_212_ = lean_unbox(v_t_209_);
v_res_213_ = l_Lake_BuildType_ctorElim(v_motive_207_, v_ctorIdx_208_, v_t_boxed_212_, v_h_210_, v_k_211_);
lean_dec(v_k_211_);
lean_dec(v_ctorIdx_208_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim___redArg(lean_object* v_debug_214_){
_start:
{
lean_inc(v_debug_214_);
return v_debug_214_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim___redArg___boxed(lean_object* v_debug_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lake_BuildType_debug_elim___redArg(v_debug_215_);
lean_dec(v_debug_215_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim(lean_object* v_motive_217_, uint8_t v_t_218_, lean_object* v_h_219_, lean_object* v_debug_220_){
_start:
{
lean_inc(v_debug_220_);
return v_debug_220_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_debug_elim___boxed(lean_object* v_motive_221_, lean_object* v_t_222_, lean_object* v_h_223_, lean_object* v_debug_224_){
_start:
{
uint8_t v_t_boxed_225_; lean_object* v_res_226_; 
v_t_boxed_225_ = lean_unbox(v_t_222_);
v_res_226_ = l_Lake_BuildType_debug_elim(v_motive_221_, v_t_boxed_225_, v_h_223_, v_debug_224_);
lean_dec(v_debug_224_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim___redArg(lean_object* v_relWithDebInfo_227_){
_start:
{
lean_inc(v_relWithDebInfo_227_);
return v_relWithDebInfo_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim___redArg___boxed(lean_object* v_relWithDebInfo_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_Lake_BuildType_relWithDebInfo_elim___redArg(v_relWithDebInfo_228_);
lean_dec(v_relWithDebInfo_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim(lean_object* v_motive_230_, uint8_t v_t_231_, lean_object* v_h_232_, lean_object* v_relWithDebInfo_233_){
_start:
{
lean_inc(v_relWithDebInfo_233_);
return v_relWithDebInfo_233_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_relWithDebInfo_elim___boxed(lean_object* v_motive_234_, lean_object* v_t_235_, lean_object* v_h_236_, lean_object* v_relWithDebInfo_237_){
_start:
{
uint8_t v_t_boxed_238_; lean_object* v_res_239_; 
v_t_boxed_238_ = lean_unbox(v_t_235_);
v_res_239_ = l_Lake_BuildType_relWithDebInfo_elim(v_motive_234_, v_t_boxed_238_, v_h_236_, v_relWithDebInfo_237_);
lean_dec(v_relWithDebInfo_237_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim___redArg(lean_object* v_minSizeRel_240_){
_start:
{
lean_inc(v_minSizeRel_240_);
return v_minSizeRel_240_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim___redArg___boxed(lean_object* v_minSizeRel_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lake_BuildType_minSizeRel_elim___redArg(v_minSizeRel_241_);
lean_dec(v_minSizeRel_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim(lean_object* v_motive_243_, uint8_t v_t_244_, lean_object* v_h_245_, lean_object* v_minSizeRel_246_){
_start:
{
lean_inc(v_minSizeRel_246_);
return v_minSizeRel_246_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_minSizeRel_elim___boxed(lean_object* v_motive_247_, lean_object* v_t_248_, lean_object* v_h_249_, lean_object* v_minSizeRel_250_){
_start:
{
uint8_t v_t_boxed_251_; lean_object* v_res_252_; 
v_t_boxed_251_ = lean_unbox(v_t_248_);
v_res_252_ = l_Lake_BuildType_minSizeRel_elim(v_motive_247_, v_t_boxed_251_, v_h_249_, v_minSizeRel_250_);
lean_dec(v_minSizeRel_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim___redArg(lean_object* v_release_253_){
_start:
{
lean_inc(v_release_253_);
return v_release_253_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim___redArg___boxed(lean_object* v_release_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lake_BuildType_release_elim___redArg(v_release_254_);
lean_dec(v_release_254_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim(lean_object* v_motive_256_, uint8_t v_t_257_, lean_object* v_h_258_, lean_object* v_release_259_){
_start:
{
lean_inc(v_release_259_);
return v_release_259_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_release_elim___boxed(lean_object* v_motive_260_, lean_object* v_t_261_, lean_object* v_h_262_, lean_object* v_release_263_){
_start:
{
uint8_t v_t_boxed_264_; lean_object* v_res_265_; 
v_t_boxed_264_ = lean_unbox(v_t_261_);
v_res_265_ = l_Lake_BuildType_release_elim(v_motive_260_, v_t_boxed_264_, v_h_262_, v_release_263_);
lean_dec(v_release_263_);
return v_res_265_;
}
}
static uint8_t _init_l_Lake_instInhabitedBuildType_default(void){
_start:
{
uint8_t v___x_266_; 
v___x_266_ = 0;
return v___x_266_;
}
}
static uint8_t _init_l_Lake_instInhabitedBuildType(void){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = 0;
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildType_repr(uint8_t v_x_280_, lean_object* v_prec_281_){
_start:
{
lean_object* v___y_283_; lean_object* v___y_290_; lean_object* v___y_297_; lean_object* v___y_304_; 
switch(v_x_280_)
{
case 0:
{
lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_310_ = lean_unsigned_to_nat(1024u);
v___x_311_ = lean_nat_dec_le(v___x_310_, v_prec_281_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
v___x_312_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_283_ = v___x_312_;
goto v___jp_282_;
}
else
{
lean_object* v___x_313_; 
v___x_313_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_283_ = v___x_313_;
goto v___jp_282_;
}
}
case 1:
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1024u);
v___x_315_ = lean_nat_dec_le(v___x_314_, v_prec_281_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; 
v___x_316_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_290_ = v___x_316_;
goto v___jp_289_;
}
else
{
lean_object* v___x_317_; 
v___x_317_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_290_ = v___x_317_;
goto v___jp_289_;
}
}
case 2:
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = lean_unsigned_to_nat(1024u);
v___x_319_ = lean_nat_dec_le(v___x_318_, v_prec_281_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
v___x_320_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_297_ = v___x_320_;
goto v___jp_296_;
}
else
{
lean_object* v___x_321_; 
v___x_321_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_297_ = v___x_321_;
goto v___jp_296_;
}
}
default: 
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = lean_unsigned_to_nat(1024u);
v___x_323_ = lean_nat_dec_le(v___x_322_, v_prec_281_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__6, &l_Lake_instReprBackend_repr___closed__6_once, _init_l_Lake_instReprBackend_repr___closed__6);
v___y_304_ = v___x_324_;
goto v___jp_303_;
}
else
{
lean_object* v___x_325_; 
v___x_325_ = lean_obj_once(&l_Lake_instReprBackend_repr___closed__7, &l_Lake_instReprBackend_repr___closed__7_once, _init_l_Lake_instReprBackend_repr___closed__7);
v___y_304_ = v___x_325_;
goto v___jp_303_;
}
}
}
v___jp_282_:
{
lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_284_ = ((lean_object*)(l_Lake_instReprBuildType_repr___closed__1));
lean_inc(v___y_283_);
v___x_285_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_285_, 0, v___y_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = 0;
v___x_287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set_uint8(v___x_287_, sizeof(void*)*1, v___x_286_);
v___x_288_ = l_Repr_addAppParen(v___x_287_, v_prec_281_);
return v___x_288_;
}
v___jp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_291_ = ((lean_object*)(l_Lake_instReprBuildType_repr___closed__3));
lean_inc(v___y_290_);
v___x_292_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_292_, 0, v___y_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = 0;
v___x_294_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_294_, 0, v___x_292_);
lean_ctor_set_uint8(v___x_294_, sizeof(void*)*1, v___x_293_);
v___x_295_ = l_Repr_addAppParen(v___x_294_, v_prec_281_);
return v___x_295_;
}
v___jp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_298_ = ((lean_object*)(l_Lake_instReprBuildType_repr___closed__5));
lean_inc(v___y_297_);
v___x_299_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_299_, 0, v___y_297_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = 0;
v___x_301_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set_uint8(v___x_301_, sizeof(void*)*1, v___x_300_);
v___x_302_ = l_Repr_addAppParen(v___x_301_, v_prec_281_);
return v___x_302_;
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_305_ = ((lean_object*)(l_Lake_instReprBuildType_repr___closed__7));
lean_inc(v___y_304_);
v___x_306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_306_, 0, v___y_304_);
lean_ctor_set(v___x_306_, 1, v___x_305_);
v___x_307_ = 0;
v___x_308_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_308_, 0, v___x_306_);
lean_ctor_set_uint8(v___x_308_, sizeof(void*)*1, v___x_307_);
v___x_309_ = l_Repr_addAppParen(v___x_308_, v_prec_281_);
return v___x_309_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildType_repr___boxed(lean_object* v_x_326_, lean_object* v_prec_327_){
_start:
{
uint8_t v_x_229__boxed_328_; lean_object* v_res_329_; 
v_x_229__boxed_328_ = lean_unbox(v_x_326_);
v_res_329_ = l_Lake_instReprBuildType_repr(v_x_229__boxed_328_, v_prec_327_);
lean_dec(v_prec_327_);
return v_res_329_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildType_ofNat(lean_object* v_n_332_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = lean_nat_dec_le(v_n_332_, v___x_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = lean_unsigned_to_nat(2u);
v___x_336_ = lean_nat_dec_le(v_n_332_, v___x_335_);
if (v___x_336_ == 0)
{
uint8_t v___x_337_; 
v___x_337_ = 3;
return v___x_337_;
}
else
{
uint8_t v___x_338_; 
v___x_338_ = 2;
return v___x_338_;
}
}
else
{
lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_nat_dec_le(v_n_332_, v___x_339_);
if (v___x_340_ == 0)
{
uint8_t v___x_341_; 
v___x_341_ = 1;
return v___x_341_;
}
else
{
uint8_t v___x_342_; 
v___x_342_ = 0;
return v___x_342_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ofNat___boxed(lean_object* v_n_343_){
_start:
{
uint8_t v_res_344_; lean_object* v_r_345_; 
v_res_344_ = l_Lake_BuildType_ofNat(v_n_343_);
lean_dec(v_n_343_);
v_r_345_ = lean_box(v_res_344_);
return v_r_345_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildType(uint8_t v_x_346_, uint8_t v_y_347_){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_348_ = l_Lake_BuildType_ctorIdx(v_x_346_);
v___x_349_ = l_Lake_BuildType_ctorIdx(v_y_347_);
v___x_350_ = lean_nat_dec_eq(v___x_348_, v___x_349_);
lean_dec(v___x_349_);
lean_dec(v___x_348_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildType___boxed(lean_object* v_x_351_, lean_object* v_y_352_){
_start:
{
uint8_t v_x_13__boxed_353_; uint8_t v_y_14__boxed_354_; uint8_t v_res_355_; lean_object* v_r_356_; 
v_x_13__boxed_353_ = lean_unbox(v_x_351_);
v_y_14__boxed_354_ = lean_unbox(v_y_352_);
v_res_355_ = l_Lake_instDecidableEqBuildType(v_x_13__boxed_353_, v_y_14__boxed_354_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdBuildType_ord(uint8_t v_x_357_, uint8_t v_y_358_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_359_ = l_Lake_BuildType_ctorIdx(v_x_357_);
v___x_360_ = l_Lake_BuildType_ctorIdx(v_y_358_);
v___x_361_ = lean_nat_dec_lt(v___x_359_, v___x_360_);
if (v___x_361_ == 0)
{
uint8_t v___x_362_; 
v___x_362_ = lean_nat_dec_eq(v___x_359_, v___x_360_);
lean_dec(v___x_360_);
lean_dec(v___x_359_);
if (v___x_362_ == 0)
{
uint8_t v___x_363_; 
v___x_363_ = 2;
return v___x_363_;
}
else
{
uint8_t v___x_364_; 
v___x_364_ = 1;
return v___x_364_;
}
}
else
{
uint8_t v___x_365_; 
lean_dec(v___x_360_);
lean_dec(v___x_359_);
v___x_365_ = 0;
return v___x_365_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdBuildType_ord___boxed(lean_object* v_x_366_, lean_object* v_y_367_){
_start:
{
uint8_t v_x_30__boxed_368_; uint8_t v_y_31__boxed_369_; uint8_t v_res_370_; lean_object* v_r_371_; 
v_x_30__boxed_368_ = lean_unbox(v_x_366_);
v_y_31__boxed_369_ = lean_unbox(v_y_367_);
v_res_370_ = l_Lake_instOrdBuildType_ord(v_x_30__boxed_368_, v_y_31__boxed_369_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
static lean_object* _init_l_Lake_BuildType_instLT(void){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_box(0);
return v___x_374_;
}
}
static lean_object* _init_l_Lake_BuildType_instLE(void){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_box(0);
return v___x_375_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildType_instMin___lam__0(uint8_t v_x_376_, uint8_t v_y_377_){
_start:
{
uint8_t v___x_378_; 
v___x_378_ = l_Lake_instOrdBuildType_ord(v_x_376_, v_y_377_);
if (v___x_378_ == 2)
{
return v_y_377_;
}
else
{
return v_x_376_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_instMin___lam__0___boxed(lean_object* v_x_379_, lean_object* v_y_380_){
_start:
{
uint8_t v_x_boxed_381_; uint8_t v_y_boxed_382_; uint8_t v_res_383_; lean_object* v_r_384_; 
v_x_boxed_381_ = lean_unbox(v_x_379_);
v_y_boxed_382_ = lean_unbox(v_y_380_);
v_res_383_ = l_Lake_BuildType_instMin___lam__0(v_x_boxed_381_, v_y_boxed_382_);
v_r_384_ = lean_box(v_res_383_);
return v_r_384_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildType_instMax___lam__0(uint8_t v_x_387_, uint8_t v_y_388_){
_start:
{
uint8_t v___x_389_; 
v___x_389_ = l_Lake_instOrdBuildType_ord(v_x_387_, v_y_388_);
if (v___x_389_ == 2)
{
return v_x_387_;
}
else
{
return v_y_388_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_instMax___lam__0___boxed(lean_object* v_x_390_, lean_object* v_y_391_){
_start:
{
uint8_t v_x_boxed_392_; uint8_t v_y_boxed_393_; uint8_t v_res_394_; lean_object* v_r_395_; 
v_x_boxed_392_ = lean_unbox(v_x_390_);
v_y_boxed_393_ = lean_unbox(v_y_391_);
v_res_394_ = l_Lake_BuildType_instMax___lam__0(v_x_boxed_392_, v_y_boxed_393_);
v_r_395_ = lean_box(v_res_394_);
return v_r_395_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_leancArgs(uint8_t v_x_429_){
_start:
{
switch(v_x_429_)
{
case 0:
{
lean_object* v___x_430_; 
v___x_430_ = ((lean_object*)(l_Lake_BuildType_leancArgs___closed__2));
return v___x_430_;
}
case 1:
{
lean_object* v___x_431_; 
v___x_431_ = ((lean_object*)(l_Lake_BuildType_leancArgs___closed__5));
return v___x_431_;
}
case 2:
{
lean_object* v___x_432_; 
v___x_432_ = ((lean_object*)(l_Lake_BuildType_leancArgs___closed__7));
return v___x_432_;
}
default: 
{
lean_object* v___x_433_; 
v___x_433_ = ((lean_object*)(l_Lake_BuildType_leancArgs___closed__8));
return v___x_433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_leancArgs___boxed(lean_object* v_x_434_){
_start:
{
uint8_t v_x_163__boxed_435_; lean_object* v_res_436_; 
v_x_163__boxed_435_ = lean_unbox(v_x_434_);
v_res_436_ = l_Lake_BuildType_leancArgs(v_x_163__boxed_435_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_ofString_x3f(lean_object* v_s_453_){
_start:
{
lean_object* v___y_455_; lean_object* v___x_469_; uint32_t v___x_470_; uint32_t v___x_471_; uint8_t v___x_472_; 
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = lean_string_utf8_get(v_s_453_, v___x_469_);
v___x_471_ = 65;
v___x_472_ = lean_uint32_dec_le(v___x_471_, v___x_470_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; 
v___x_473_ = lean_string_utf8_set(v_s_453_, v___x_469_, v___x_470_);
v___y_455_ = v___x_473_;
goto v___jp_454_;
}
else
{
uint32_t v___x_474_; uint8_t v___x_475_; 
v___x_474_ = 90;
v___x_475_ = lean_uint32_dec_le(v___x_470_, v___x_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; 
v___x_476_ = lean_string_utf8_set(v_s_453_, v___x_469_, v___x_470_);
v___y_455_ = v___x_476_;
goto v___jp_454_;
}
else
{
uint32_t v___x_477_; uint32_t v___x_478_; lean_object* v___x_479_; 
v___x_477_ = 32;
v___x_478_ = lean_uint32_add(v___x_470_, v___x_477_);
v___x_479_ = lean_string_utf8_set(v_s_453_, v___x_469_, v___x_478_);
v___y_455_ = v___x_479_;
goto v___jp_454_;
}
}
v___jp_454_:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__0));
v___x_457_ = lean_string_dec_eq(v___y_455_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__1));
v___x_459_ = lean_string_dec_eq(v___y_455_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__2));
v___x_461_ = lean_string_dec_eq(v___y_455_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__3));
v___x_463_ = lean_string_dec_eq(v___y_455_, v___x_462_);
lean_dec_ref(v___y_455_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
v___x_464_ = lean_box(0);
return v___x_464_;
}
else
{
lean_object* v___x_465_; 
v___x_465_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__4));
return v___x_465_;
}
}
else
{
lean_object* v___x_466_; 
lean_dec_ref(v___y_455_);
v___x_466_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__5));
return v___x_466_;
}
}
else
{
lean_object* v___x_467_; 
lean_dec_ref(v___y_455_);
v___x_467_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__6));
return v___x_467_;
}
}
else
{
lean_object* v___x_468_; 
lean_dec_ref(v___y_455_);
v___x_468_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__7));
return v___x_468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_toString(uint8_t v_bt_480_){
_start:
{
switch(v_bt_480_)
{
case 0:
{
lean_object* v___x_481_; 
v___x_481_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__0));
return v___x_481_;
}
case 1:
{
lean_object* v___x_482_; 
v___x_482_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__1));
return v___x_482_;
}
case 2:
{
lean_object* v___x_483_; 
v___x_483_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__2));
return v___x_483_;
}
default: 
{
lean_object* v___x_484_; 
v___x_484_ = ((lean_object*)(l_Lake_BuildType_ofString_x3f___closed__3));
return v___x_484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_toString___boxed(lean_object* v_bt_485_){
_start:
{
uint8_t v_bt_boxed_486_; lean_object* v_res_487_; 
v_bt_boxed_486_ = lean_unbox(v_bt_485_);
v_res_487_ = l_Lake_BuildType_toString(v_bt_boxed_486_);
return v_res_487_;
}
}
static lean_object* _init_l_Lake_BuildType_leanOptions___closed__3(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_495_ = lean_box(1);
v___x_496_ = ((lean_object*)(l_Lake_BuildType_leanOptions___closed__2));
v___x_497_ = ((lean_object*)(l_Lake_BuildType_leanOptions___closed__1));
v___x_498_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_497_, v___x_496_, v___x_495_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_leanOptions(uint8_t v_x_499_){
_start:
{
if (v_x_499_ == 0)
{
lean_object* v___x_500_; 
v___x_500_ = lean_obj_once(&l_Lake_BuildType_leanOptions___closed__3, &l_Lake_BuildType_leanOptions___closed__3_once, _init_l_Lake_BuildType_leanOptions___closed__3);
return v___x_500_;
}
else
{
lean_object* v___x_501_; 
v___x_501_ = lean_box(1);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_leanOptions___boxed(lean_object* v_x_502_){
_start:
{
uint8_t v_x_70__boxed_503_; lean_object* v_res_504_; 
v_x_70__boxed_503_ = lean_unbox(v_x_502_);
v_res_504_ = l_Lake_BuildType_leanOptions(v_x_70__boxed_503_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_leanArgs(uint8_t v_t_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = ((lean_object*)(l_Lake_BuildType_leanArgs___closed__0));
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildType_leanArgs___boxed(lean_object* v_t_509_){
_start:
{
uint8_t v_t_boxed_510_; lean_object* v_res_511_; 
v_t_boxed_510_ = lean_unbox(v_t_509_);
v_res_511_ = l_Lake_BuildType_leanArgs(v_t_boxed_510_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4(lean_object* v_x_528_, lean_object* v_x_529_){
_start:
{
if (lean_obj_tag(v_x_528_) == 0)
{
lean_object* v___x_530_; 
v___x_530_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__1));
return v___x_530_;
}
else
{
lean_object* v_val_531_; lean_object* v___x_532_; uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_val_531_ = lean_ctor_get(v_x_528_, 0);
v___x_532_ = ((lean_object*)(l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___closed__3));
v___x_533_ = lean_unbox(v_val_531_);
v___x_534_ = l_Bool_repr___redArg(v___x_533_);
v___x_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_532_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = l_Repr_addAppParen(v___x_535_, v_x_529_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4___boxed(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4(v_x_537_, v_x_538_);
lean_dec(v_x_538_);
lean_dec(v_x_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprLeanConfig_repr_spec__5(lean_object* v_a_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lean_nat_to_int(v_a_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2___lam__0(lean_object* v___y_542_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = l_String_quote(v___y_542_);
v___x_544_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2_spec__6_spec__10(lean_object* v_x_545_, lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_dec(v_x_545_);
return v_x_546_;
}
else
{
lean_object* v_head_548_; lean_object* v_tail_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_560_; 
v_head_548_ = lean_ctor_get(v_x_547_, 0);
v_tail_549_ = lean_ctor_get(v_x_547_, 1);
v_isSharedCheck_560_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_560_ == 0)
{
v___x_551_ = v_x_547_;
v_isShared_552_ = v_isSharedCheck_560_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_tail_549_);
lean_inc(v_head_548_);
lean_dec(v_x_547_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_560_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
lean_inc(v_x_545_);
if (v_isShared_552_ == 0)
{
lean_ctor_set_tag(v___x_551_, 5);
lean_ctor_set(v___x_551_, 1, v_x_545_);
lean_ctor_set(v___x_551_, 0, v_x_546_);
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_x_546_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_x_545_);
v___x_554_ = v_reuseFailAlloc_559_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_555_ = l_String_quote(v_head_548_);
v___x_556_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
v___x_557_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_557_, 0, v___x_554_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v_x_546_ = v___x_557_;
v_x_547_ = v_tail_549_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2_spec__6(lean_object* v_x_561_, lean_object* v_x_562_, lean_object* v_x_563_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
lean_dec(v_x_561_);
return v_x_562_;
}
else
{
lean_object* v_head_564_; lean_object* v_tail_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_576_; 
v_head_564_ = lean_ctor_get(v_x_563_, 0);
v_tail_565_ = lean_ctor_get(v_x_563_, 1);
v_isSharedCheck_576_ = !lean_is_exclusive(v_x_563_);
if (v_isSharedCheck_576_ == 0)
{
v___x_567_ = v_x_563_;
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_tail_565_);
lean_inc(v_head_564_);
lean_dec(v_x_563_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
lean_inc(v_x_561_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 5);
lean_ctor_set(v___x_567_, 1, v_x_561_);
lean_ctor_set(v___x_567_, 0, v_x_562_);
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_x_562_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_x_561_);
v___x_570_ = v_reuseFailAlloc_575_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_571_ = l_String_quote(v_head_564_);
v___x_572_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
v___x_573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_570_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2_spec__6_spec__10(v_x_561_, v___x_573_, v_tail_565_);
return v___x_574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2(lean_object* v_x_577_, lean_object* v_x_578_){
_start:
{
if (lean_obj_tag(v_x_577_) == 0)
{
lean_object* v___x_579_; 
lean_dec(v_x_578_);
v___x_579_ = lean_box(0);
return v___x_579_;
}
else
{
lean_object* v_tail_580_; 
v_tail_580_ = lean_ctor_get(v_x_577_, 1);
if (lean_obj_tag(v_tail_580_) == 0)
{
lean_object* v_head_581_; lean_object* v___x_582_; 
lean_dec(v_x_578_);
v_head_581_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_head_581_);
lean_dec_ref_known(v_x_577_, 2);
v___x_582_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2___lam__0(v_head_581_);
return v___x_582_;
}
else
{
lean_object* v_head_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
lean_inc(v_tail_580_);
v_head_583_ = lean_ctor_get(v_x_577_, 0);
lean_inc(v_head_583_);
lean_dec_ref_known(v_x_577_, 2);
v___x_584_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2___lam__0(v_head_583_);
v___x_585_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2_spec__6(v_x_578_, v___x_584_, v_tail_580_);
return v___x_585_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__5(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__0));
v___x_595_ = lean_string_length(v___x_594_);
return v___x_595_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6(void){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__5, &l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__5_once, _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__5);
v___x_597_ = lean_nat_to_int(v___x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(lean_object* v_xs_605_){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_606_ = lean_array_get_size(v_xs_605_);
v___x_607_ = lean_unsigned_to_nat(0u);
v___x_608_ = lean_nat_dec_eq(v___x_606_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_609_ = lean_array_to_list(v_xs_605_);
v___x_610_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3));
v___x_611_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1_spec__2(v___x_609_, v___x_610_);
v___x_612_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6, &l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6);
v___x_613_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7));
v___x_614_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v___x_611_);
v___x_615_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8));
v___x_616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_617_, 0, v___x_612_);
lean_ctor_set(v___x_617_, 1, v___x_616_);
v___x_618_ = l_Std_Format_fill(v___x_617_);
return v___x_618_;
}
else
{
lean_object* v___x_619_; 
lean_dec_ref(v_xs_605_);
v___x_619_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10));
return v___x_619_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4___lam__0(lean_object* v___y_620_){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = l_Lake_Target_repr___redArg(v___y_620_, v___x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6_spec__12_spec__16(lean_object* v_x_623_, lean_object* v_x_624_, lean_object* v_x_625_){
_start:
{
if (lean_obj_tag(v_x_625_) == 0)
{
lean_dec(v_x_623_);
return v_x_624_;
}
else
{
lean_object* v_head_626_; lean_object* v_tail_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_638_; 
v_head_626_ = lean_ctor_get(v_x_625_, 0);
v_tail_627_ = lean_ctor_get(v_x_625_, 1);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_625_);
if (v_isSharedCheck_638_ == 0)
{
v___x_629_ = v_x_625_;
v_isShared_630_ = v_isSharedCheck_638_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_tail_627_);
lean_inc(v_head_626_);
lean_dec(v_x_625_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_638_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
lean_inc(v_x_623_);
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 5);
lean_ctor_set(v___x_629_, 1, v_x_623_);
lean_ctor_set(v___x_629_, 0, v_x_624_);
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_x_624_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_x_623_);
v___x_632_ = v_reuseFailAlloc_637_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = l_Lake_Target_repr___redArg(v_head_626_, v___x_633_);
v___x_635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_632_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v_x_624_ = v___x_635_;
v_x_625_ = v_tail_627_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6_spec__12(lean_object* v_x_639_, lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
if (lean_obj_tag(v_x_641_) == 0)
{
lean_dec(v_x_639_);
return v_x_640_;
}
else
{
lean_object* v_head_642_; lean_object* v_tail_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_654_; 
v_head_642_ = lean_ctor_get(v_x_641_, 0);
v_tail_643_ = lean_ctor_get(v_x_641_, 1);
v_isSharedCheck_654_ = !lean_is_exclusive(v_x_641_);
if (v_isSharedCheck_654_ == 0)
{
v___x_645_ = v_x_641_;
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_tail_643_);
lean_inc(v_head_642_);
lean_dec(v_x_641_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_654_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
lean_inc(v_x_639_);
if (v_isShared_646_ == 0)
{
lean_ctor_set_tag(v___x_645_, 5);
lean_ctor_set(v___x_645_, 1, v_x_639_);
lean_ctor_set(v___x_645_, 0, v_x_640_);
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_x_640_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_x_639_);
v___x_648_ = v_reuseFailAlloc_653_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_649_ = lean_unsigned_to_nat(0u);
v___x_650_ = l_Lake_Target_repr___redArg(v_head_642_, v___x_649_);
v___x_651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_648_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6_spec__12_spec__16(v_x_639_, v___x_651_, v_tail_643_);
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6(lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_655_) == 0)
{
lean_object* v___x_657_; 
lean_dec(v_x_656_);
v___x_657_ = lean_box(0);
return v___x_657_;
}
else
{
lean_object* v_tail_658_; 
v_tail_658_ = lean_ctor_get(v_x_655_, 1);
if (lean_obj_tag(v_tail_658_) == 0)
{
lean_object* v_head_659_; lean_object* v___x_660_; 
lean_dec(v_x_656_);
v_head_659_ = lean_ctor_get(v_x_655_, 0);
lean_inc(v_head_659_);
lean_dec_ref_known(v_x_655_, 2);
v___x_660_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4___lam__0(v_head_659_);
return v___x_660_;
}
else
{
lean_object* v_head_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
lean_inc(v_tail_658_);
v_head_661_ = lean_ctor_get(v_x_655_, 0);
lean_inc(v_head_661_);
lean_dec_ref_known(v_x_655_, 2);
v___x_662_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4___lam__0(v_head_661_);
v___x_663_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6_spec__12(v_x_656_, v___x_662_, v_tail_658_);
return v___x_663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3(lean_object* v_xs_664_){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_665_ = lean_array_get_size(v_xs_664_);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = lean_nat_dec_eq(v___x_665_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_668_ = lean_array_to_list(v_xs_664_);
v___x_669_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3));
v___x_670_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3_spec__6(v___x_668_, v___x_669_);
v___x_671_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6, &l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6);
v___x_672_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7));
v___x_673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v___x_670_);
v___x_674_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8));
v___x_675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_673_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v___x_676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_671_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = l_Std_Format_fill(v___x_676_);
return v___x_677_;
}
else
{
lean_object* v___x_678_; 
lean_dec_ref(v_xs_664_);
v___x_678_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10));
return v___x_678_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_679_, lean_object* v_x_680_, lean_object* v_x_681_){
_start:
{
if (lean_obj_tag(v_x_681_) == 0)
{
lean_dec(v_x_679_);
return v_x_680_;
}
else
{
lean_object* v_head_682_; lean_object* v_tail_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_693_; 
v_head_682_ = lean_ctor_get(v_x_681_, 0);
v_tail_683_ = lean_ctor_get(v_x_681_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_693_ == 0)
{
v___x_685_ = v_x_681_;
v_isShared_686_ = v_isSharedCheck_693_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_tail_683_);
lean_inc(v_head_682_);
lean_dec(v_x_681_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_693_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
lean_inc(v_x_679_);
if (v_isShared_686_ == 0)
{
lean_ctor_set_tag(v___x_685_, 5);
lean_ctor_set(v___x_685_, 1, v_x_679_);
lean_ctor_set(v___x_685_, 0, v_x_680_);
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_x_680_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_x_679_);
v___x_688_ = v_reuseFailAlloc_692_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_689_ = l_Lean_instReprLeanOption_repr___redArg(v_head_682_);
v___x_690_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v_x_680_ = v___x_690_;
v_x_681_ = v_tail_683_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0_spec__3(lean_object* v_x_694_, lean_object* v_x_695_, lean_object* v_x_696_){
_start:
{
if (lean_obj_tag(v_x_696_) == 0)
{
lean_dec(v_x_694_);
return v_x_695_;
}
else
{
lean_object* v_head_697_; lean_object* v_tail_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_708_; 
v_head_697_ = lean_ctor_get(v_x_696_, 0);
v_tail_698_ = lean_ctor_get(v_x_696_, 1);
v_isSharedCheck_708_ = !lean_is_exclusive(v_x_696_);
if (v_isSharedCheck_708_ == 0)
{
v___x_700_ = v_x_696_;
v_isShared_701_ = v_isSharedCheck_708_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_tail_698_);
lean_inc(v_head_697_);
lean_dec(v_x_696_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_708_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
lean_inc(v_x_694_);
if (v_isShared_701_ == 0)
{
lean_ctor_set_tag(v___x_700_, 5);
lean_ctor_set(v___x_700_, 1, v_x_694_);
lean_ctor_set(v___x_700_, 0, v_x_695_);
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v_x_695_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_x_694_);
v___x_703_ = v_reuseFailAlloc_707_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_704_ = l_Lean_instReprLeanOption_repr___redArg(v_head_697_);
v___x_705_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_703_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
v___x_706_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0_spec__3_spec__7(v_x_694_, v___x_705_, v_tail_698_);
return v___x_706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0(lean_object* v_x_709_, lean_object* v_x_710_){
_start:
{
if (lean_obj_tag(v_x_709_) == 0)
{
lean_object* v___x_711_; 
lean_dec(v_x_710_);
v___x_711_ = lean_box(0);
return v___x_711_;
}
else
{
lean_object* v_tail_712_; 
v_tail_712_ = lean_ctor_get(v_x_709_, 1);
if (lean_obj_tag(v_tail_712_) == 0)
{
lean_object* v_head_713_; lean_object* v___x_714_; 
lean_dec(v_x_710_);
v_head_713_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_head_713_);
lean_dec_ref_known(v_x_709_, 2);
v___x_714_ = l_Lean_instReprLeanOption_repr___redArg(v_head_713_);
return v___x_714_;
}
else
{
lean_object* v_head_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
lean_inc(v_tail_712_);
v_head_715_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_head_715_);
lean_dec_ref_known(v_x_709_, 2);
v___x_716_ = l_Lean_instReprLeanOption_repr___redArg(v_head_715_);
v___x_717_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0_spec__3(v_x_710_, v___x_716_, v_tail_712_);
return v___x_717_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0(lean_object* v_xs_718_){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_719_ = lean_array_get_size(v_xs_718_);
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = lean_nat_dec_eq(v___x_719_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_722_ = lean_array_to_list(v_xs_718_);
v___x_723_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3));
v___x_724_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0_spec__0(v___x_722_, v___x_723_);
v___x_725_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6, &l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6);
v___x_726_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7));
v___x_727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
lean_ctor_set(v___x_727_, 1, v___x_724_);
v___x_728_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8));
v___x_729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_727_);
lean_ctor_set(v___x_729_, 1, v___x_728_);
v___x_730_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_730_, 0, v___x_725_);
lean_ctor_set(v___x_730_, 1, v___x_729_);
v___x_731_ = l_Std_Format_fill(v___x_730_);
return v___x_731_;
}
else
{
lean_object* v___x_732_; 
lean_dec_ref(v_xs_718_);
v___x_732_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10));
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4_spec__9_spec__13(lean_object* v_x_733_, lean_object* v_x_734_, lean_object* v_x_735_){
_start:
{
if (lean_obj_tag(v_x_735_) == 0)
{
lean_dec(v_x_733_);
return v_x_734_;
}
else
{
lean_object* v_head_736_; lean_object* v_tail_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_748_; 
v_head_736_ = lean_ctor_get(v_x_735_, 0);
v_tail_737_ = lean_ctor_get(v_x_735_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_x_735_);
if (v_isSharedCheck_748_ == 0)
{
v___x_739_ = v_x_735_;
v_isShared_740_ = v_isSharedCheck_748_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_tail_737_);
lean_inc(v_head_736_);
lean_dec(v_x_735_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_748_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
lean_inc(v_x_733_);
if (v_isShared_740_ == 0)
{
lean_ctor_set_tag(v___x_739_, 5);
lean_ctor_set(v___x_739_, 1, v_x_733_);
lean_ctor_set(v___x_739_, 0, v_x_734_);
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_x_734_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_x_733_);
v___x_742_ = v_reuseFailAlloc_747_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_743_ = lean_unsigned_to_nat(0u);
v___x_744_ = l_Lake_Target_repr___redArg(v_head_736_, v___x_743_);
v___x_745_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_742_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v_x_734_ = v___x_745_;
v_x_735_ = v_tail_737_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4_spec__9(lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v_x_751_){
_start:
{
if (lean_obj_tag(v_x_751_) == 0)
{
lean_dec(v_x_749_);
return v_x_750_;
}
else
{
lean_object* v_head_752_; lean_object* v_tail_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_764_; 
v_head_752_ = lean_ctor_get(v_x_751_, 0);
v_tail_753_ = lean_ctor_get(v_x_751_, 1);
v_isSharedCheck_764_ = !lean_is_exclusive(v_x_751_);
if (v_isSharedCheck_764_ == 0)
{
v___x_755_ = v_x_751_;
v_isShared_756_ = v_isSharedCheck_764_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_tail_753_);
lean_inc(v_head_752_);
lean_dec(v_x_751_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_764_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_758_; 
lean_inc(v_x_749_);
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 5);
lean_ctor_set(v___x_755_, 1, v_x_749_);
lean_ctor_set(v___x_755_, 0, v_x_750_);
v___x_758_ = v___x_755_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_x_750_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_x_749_);
v___x_758_ = v_reuseFailAlloc_763_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_759_ = lean_unsigned_to_nat(0u);
v___x_760_ = l_Lake_Target_repr___redArg(v_head_752_, v___x_759_);
v___x_761_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_758_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v___x_762_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4_spec__9_spec__13(v_x_749_, v___x_761_, v_tail_753_);
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4(lean_object* v_x_765_, lean_object* v_x_766_){
_start:
{
if (lean_obj_tag(v_x_765_) == 0)
{
lean_object* v___x_767_; 
lean_dec(v_x_766_);
v___x_767_ = lean_box(0);
return v___x_767_;
}
else
{
lean_object* v_tail_768_; 
v_tail_768_ = lean_ctor_get(v_x_765_, 1);
if (lean_obj_tag(v_tail_768_) == 0)
{
lean_object* v_head_769_; lean_object* v___x_770_; 
lean_dec(v_x_766_);
v_head_769_ = lean_ctor_get(v_x_765_, 0);
lean_inc(v_head_769_);
lean_dec_ref_known(v_x_765_, 2);
v___x_770_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4___lam__0(v_head_769_);
return v___x_770_;
}
else
{
lean_object* v_head_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
lean_inc(v_tail_768_);
v_head_771_ = lean_ctor_get(v_x_765_, 0);
lean_inc(v_head_771_);
lean_dec_ref_known(v_x_765_, 2);
v___x_772_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4___lam__0(v_head_771_);
v___x_773_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4_spec__9(v_x_766_, v___x_772_, v_tail_768_);
return v___x_773_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2(lean_object* v_xs_774_){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_775_ = lean_array_get_size(v_xs_774_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_nat_dec_eq(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_778_ = lean_array_to_list(v_xs_774_);
v___x_779_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__3));
v___x_780_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2_spec__4(v___x_778_, v___x_779_);
v___x_781_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6, &l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6_once, _init_l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__6);
v___x_782_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__7));
v___x_783_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_782_);
lean_ctor_set(v___x_783_, 1, v___x_780_);
v___x_784_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__8));
v___x_785_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_781_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = l_Std_Format_fill(v___x_786_);
return v___x_787_;
}
else
{
lean_object* v___x_788_; 
lean_dec_ref(v_xs_774_);
v___x_788_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__10));
return v___x_788_;
}
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(13u);
v___x_803_ = lean_nat_to_int(v___x_802_);
return v___x_803_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_unsigned_to_nat(15u);
v___x_808_ = lean_nat_to_int(v___x_807_);
return v___x_808_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_unsigned_to_nat(16u);
v___x_813_ = lean_nat_to_int(v___x_812_);
return v___x_813_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_unsigned_to_nat(17u);
v___x_821_ = lean_nat_to_int(v___x_820_);
return v___x_821_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(21u);
v___x_829_ = lean_nat_to_int(v___x_828_);
return v___x_829_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__36(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = lean_unsigned_to_nat(11u);
v___x_849_ = lean_nat_to_int(v___x_848_);
return v___x_849_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__39(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_unsigned_to_nat(23u);
v___x_854_ = lean_nat_to_int(v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__46(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_unsigned_to_nat(24u);
v___x_865_ = lean_nat_to_int(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__49(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_unsigned_to_nat(19u);
v___x_870_ = lean_nat_to_int(v___x_869_);
return v___x_870_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__51(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__0));
v___x_873_ = lean_string_length(v___x_872_);
return v___x_873_;
}
}
static lean_object* _init_l_Lake_instReprLeanConfig_repr___redArg___closed__52(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__51, &l_Lake_instReprLeanConfig_repr___redArg___closed__51_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__51);
v___x_875_ = lean_nat_to_int(v___x_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLeanConfig_repr___redArg(lean_object* v_x_880_){
_start:
{
uint8_t v_buildType_881_; lean_object* v_leanOptions_882_; lean_object* v_moreLeanArgs_883_; lean_object* v_weakLeanArgs_884_; uint8_t v_useZigCodegen_885_; lean_object* v_moreLeancArgs_886_; lean_object* v_moreServerOptions_887_; lean_object* v_weakLeancArgs_888_; lean_object* v_moreLinkObjs_889_; lean_object* v_moreLinkLibs_890_; lean_object* v_moreLinkArgs_891_; lean_object* v_weakLinkArgs_892_; uint8_t v_backend_893_; lean_object* v_platformIndependent_894_; lean_object* v_dynlibs_895_; lean_object* v_plugins_896_; uint8_t v_requiresModuleSystem_897_; uint8_t v_allowNonModules_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; uint8_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_buildType_881_ = lean_ctor_get_uint8(v_x_880_, sizeof(void*)*13);
v_leanOptions_882_ = lean_ctor_get(v_x_880_, 0);
lean_inc_ref(v_leanOptions_882_);
v_moreLeanArgs_883_ = lean_ctor_get(v_x_880_, 1);
lean_inc_ref(v_moreLeanArgs_883_);
v_weakLeanArgs_884_ = lean_ctor_get(v_x_880_, 2);
lean_inc_ref(v_weakLeanArgs_884_);
v_useZigCodegen_885_ = lean_ctor_get_uint8(v_x_880_, sizeof(void*)*13 + 1);
v_moreLeancArgs_886_ = lean_ctor_get(v_x_880_, 3);
lean_inc_ref(v_moreLeancArgs_886_);
v_moreServerOptions_887_ = lean_ctor_get(v_x_880_, 4);
lean_inc_ref(v_moreServerOptions_887_);
v_weakLeancArgs_888_ = lean_ctor_get(v_x_880_, 5);
lean_inc_ref(v_weakLeancArgs_888_);
v_moreLinkObjs_889_ = lean_ctor_get(v_x_880_, 6);
lean_inc_ref(v_moreLinkObjs_889_);
v_moreLinkLibs_890_ = lean_ctor_get(v_x_880_, 7);
lean_inc_ref(v_moreLinkLibs_890_);
v_moreLinkArgs_891_ = lean_ctor_get(v_x_880_, 8);
lean_inc_ref(v_moreLinkArgs_891_);
v_weakLinkArgs_892_ = lean_ctor_get(v_x_880_, 9);
lean_inc_ref(v_weakLinkArgs_892_);
v_backend_893_ = lean_ctor_get_uint8(v_x_880_, sizeof(void*)*13 + 2);
v_platformIndependent_894_ = lean_ctor_get(v_x_880_, 10);
lean_inc(v_platformIndependent_894_);
v_dynlibs_895_ = lean_ctor_get(v_x_880_, 11);
lean_inc_ref(v_dynlibs_895_);
v_plugins_896_ = lean_ctor_get(v_x_880_, 12);
lean_inc_ref(v_plugins_896_);
v_requiresModuleSystem_897_ = lean_ctor_get_uint8(v_x_880_, sizeof(void*)*13 + 3);
v_allowNonModules_898_ = lean_ctor_get_uint8(v_x_880_, sizeof(void*)*13 + 4);
lean_dec_ref(v_x_880_);
v___x_899_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__5));
v___x_900_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__6));
v___x_901_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__7, &l_Lake_instReprLeanConfig_repr___redArg___closed__7_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__7);
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = l_Lake_instReprBuildType_repr(v_buildType_881_, v___x_902_);
v___x_904_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_901_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = 0;
v___x_906_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_906_, 0, v___x_904_);
lean_ctor_set_uint8(v___x_906_, sizeof(void*)*1, v___x_905_);
v___x_907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_900_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
v___x_908_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1___closed__2));
v___x_909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = lean_box(1);
v___x_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__9));
v___x_913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
lean_ctor_set(v___x_914_, 1, v___x_899_);
v___x_915_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__10, &l_Lake_instReprLeanConfig_repr___redArg___closed__10_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__10);
v___x_916_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0(v_leanOptions_882_);
v___x_917_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_918_, 0, v___x_917_);
lean_ctor_set_uint8(v___x_918_, sizeof(void*)*1, v___x_905_);
v___x_919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_914_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_919_);
lean_ctor_set(v___x_920_, 1, v___x_908_);
v___x_921_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
lean_ctor_set(v___x_921_, 1, v___x_910_);
v___x_922_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__12));
v___x_923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
v___x_924_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
lean_ctor_set(v___x_924_, 1, v___x_899_);
v___x_925_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__13, &l_Lake_instReprLeanConfig_repr___redArg___closed__13_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__13);
v___x_926_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(v_moreLeanArgs_883_);
v___x_927_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_925_);
lean_ctor_set(v___x_927_, 1, v___x_926_);
v___x_928_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_928_, 0, v___x_927_);
lean_ctor_set_uint8(v___x_928_, sizeof(void*)*1, v___x_905_);
v___x_929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_929_, 0, v___x_924_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
v___x_930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
lean_ctor_set(v___x_930_, 1, v___x_908_);
v___x_931_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
lean_ctor_set(v___x_931_, 1, v___x_910_);
v___x_932_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__15));
v___x_933_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_933_, 0, v___x_931_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
lean_ctor_set(v___x_934_, 1, v___x_899_);
v___x_935_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(v_weakLeanArgs_884_);
v___x_936_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_936_, 0, v___x_925_);
lean_ctor_set(v___x_936_, 1, v___x_935_);
v___x_937_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set_uint8(v___x_937_, sizeof(void*)*1, v___x_905_);
v___x_938_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_934_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
v___x_939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
lean_ctor_set(v___x_939_, 1, v___x_908_);
v___x_940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_940_, 0, v___x_939_);
lean_ctor_set(v___x_940_, 1, v___x_910_);
v___x_941_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__17));
v___x_942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
lean_ctor_set(v___x_943_, 1, v___x_899_);
v___x_944_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__18, &l_Lake_instReprLeanConfig_repr___redArg___closed__18_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__18);
v___x_945_ = l_Bool_repr___redArg(v_useZigCodegen_885_);
v___x_946_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_947_, 0, v___x_946_);
lean_ctor_set_uint8(v___x_947_, sizeof(void*)*1, v___x_905_);
v___x_948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_943_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
lean_ctor_set(v___x_949_, 1, v___x_908_);
v___x_950_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_949_);
lean_ctor_set(v___x_950_, 1, v___x_910_);
v___x_951_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__20));
v___x_952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set(v___x_953_, 1, v___x_899_);
v___x_954_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(v_moreLeancArgs_886_);
v___x_955_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_955_, 0, v___x_944_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_956_, 0, v___x_955_);
lean_ctor_set_uint8(v___x_956_, sizeof(void*)*1, v___x_905_);
v___x_957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_953_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
v___x_958_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
lean_ctor_set(v___x_958_, 1, v___x_908_);
v___x_959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set(v___x_959_, 1, v___x_910_);
v___x_960_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__22));
v___x_961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
lean_ctor_set(v___x_962_, 1, v___x_899_);
v___x_963_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__23, &l_Lake_instReprLeanConfig_repr___redArg___closed__23_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__23);
v___x_964_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__0(v_moreServerOptions_887_);
v___x_965_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set_uint8(v___x_966_, sizeof(void*)*1, v___x_905_);
v___x_967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_962_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
v___x_968_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_967_);
lean_ctor_set(v___x_968_, 1, v___x_908_);
v___x_969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
lean_ctor_set(v___x_969_, 1, v___x_910_);
v___x_970_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__25));
v___x_971_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_971_);
lean_ctor_set(v___x_972_, 1, v___x_899_);
v___x_973_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(v_weakLeancArgs_888_);
v___x_974_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_944_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_975_, 0, v___x_974_);
lean_ctor_set_uint8(v___x_975_, sizeof(void*)*1, v___x_905_);
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_972_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
lean_ctor_set(v___x_977_, 1, v___x_908_);
v___x_978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_977_);
lean_ctor_set(v___x_978_, 1, v___x_910_);
v___x_979_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__27));
v___x_980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set(v___x_981_, 1, v___x_899_);
v___x_982_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__2(v_moreLinkObjs_889_);
v___x_983_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_925_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*1, v___x_905_);
v___x_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_981_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___x_908_);
v___x_987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_910_);
v___x_988_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__29));
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_989_);
lean_ctor_set(v___x_990_, 1, v___x_899_);
v___x_991_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3(v_moreLinkLibs_890_);
v___x_992_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_925_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set_uint8(v___x_993_, sizeof(void*)*1, v___x_905_);
v___x_994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_990_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
lean_ctor_set(v___x_995_, 1, v___x_908_);
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___x_910_);
v___x_997_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__31));
v___x_998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_998_);
lean_ctor_set(v___x_999_, 1, v___x_899_);
v___x_1000_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(v_moreLinkArgs_891_);
v___x_1001_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_925_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
v___x_1002_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1002_, 0, v___x_1001_);
lean_ctor_set_uint8(v___x_1002_, sizeof(void*)*1, v___x_905_);
v___x_1003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_999_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___x_908_);
v___x_1005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_910_);
v___x_1006_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__33));
v___x_1007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
v___x_1008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___x_899_);
v___x_1009_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__1(v_weakLinkArgs_892_);
v___x_1010_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_925_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
lean_ctor_set_uint8(v___x_1011_, sizeof(void*)*1, v___x_905_);
v___x_1012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1008_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1012_);
lean_ctor_set(v___x_1013_, 1, v___x_908_);
v___x_1014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_910_);
v___x_1015_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__35));
v___x_1016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___x_899_);
v___x_1018_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__36, &l_Lake_instReprLeanConfig_repr___redArg___closed__36_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__36);
v___x_1019_ = l_Lake_instReprBackend_repr(v_backend_893_, v___x_902_);
v___x_1020_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1018_);
lean_ctor_set(v___x_1020_, 1, v___x_1019_);
v___x_1021_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
lean_ctor_set_uint8(v___x_1021_, sizeof(void*)*1, v___x_905_);
v___x_1022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1017_);
lean_ctor_set(v___x_1022_, 1, v___x_1021_);
v___x_1023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_908_);
v___x_1024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
lean_ctor_set(v___x_1024_, 1, v___x_910_);
v___x_1025_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__38));
v___x_1026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v___x_899_);
v___x_1028_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__39, &l_Lake_instReprLeanConfig_repr___redArg___closed__39_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__39);
v___x_1029_ = l_Option_repr___at___00Lake_instReprLeanConfig_repr_spec__4(v_platformIndependent_894_, v___x_902_);
lean_dec(v_platformIndependent_894_);
v___x_1030_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1028_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set_uint8(v___x_1031_, sizeof(void*)*1, v___x_905_);
v___x_1032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1027_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
lean_ctor_set(v___x_1033_, 1, v___x_908_);
v___x_1034_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
lean_ctor_set(v___x_1034_, 1, v___x_910_);
v___x_1035_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__41));
v___x_1036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1034_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set(v___x_1037_, 1, v___x_899_);
v___x_1038_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3(v_dynlibs_895_);
v___x_1039_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1018_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*1, v___x_905_);
v___x_1041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1037_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v___x_908_);
v___x_1043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
lean_ctor_set(v___x_1043_, 1, v___x_910_);
v___x_1044_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__43));
v___x_1045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
lean_ctor_set(v___x_1046_, 1, v___x_899_);
v___x_1047_ = l_Array_repr___at___00Lake_instReprLeanConfig_repr_spec__3(v_plugins_896_);
v___x_1048_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1018_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
lean_ctor_set_uint8(v___x_1049_, sizeof(void*)*1, v___x_905_);
v___x_1050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1046_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v___x_908_);
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set(v___x_1052_, 1, v___x_910_);
v___x_1053_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__45));
v___x_1054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1052_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v___x_899_);
v___x_1056_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__46, &l_Lake_instReprLeanConfig_repr___redArg___closed__46_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__46);
v___x_1057_ = l_Bool_repr___redArg(v_requiresModuleSystem_897_);
v___x_1058_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1056_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*1, v___x_905_);
v___x_1060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1055_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1060_);
lean_ctor_set(v___x_1061_, 1, v___x_908_);
v___x_1062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
lean_ctor_set(v___x_1062_, 1, v___x_910_);
v___x_1063_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__48));
v___x_1064_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v___x_899_);
v___x_1066_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__49, &l_Lake_instReprLeanConfig_repr___redArg___closed__49_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__49);
v___x_1067_ = l_Bool_repr___redArg(v_allowNonModules_898_);
v___x_1068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
lean_ctor_set_uint8(v___x_1069_, sizeof(void*)*1, v___x_905_);
v___x_1070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1065_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = lean_obj_once(&l_Lake_instReprLeanConfig_repr___redArg___closed__52, &l_Lake_instReprLeanConfig_repr___redArg___closed__52_once, _init_l_Lake_instReprLeanConfig_repr___redArg___closed__52);
v___x_1072_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__53));
v___x_1073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1072_);
lean_ctor_set(v___x_1073_, 1, v___x_1070_);
v___x_1074_ = ((lean_object*)(l_Lake_instReprLeanConfig_repr___redArg___closed__54));
v___x_1075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1071_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
lean_ctor_set_uint8(v___x_1077_, sizeof(void*)*1, v___x_905_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLeanConfig_repr(lean_object* v_x_1078_, lean_object* v_prec_1079_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l_Lake_instReprLeanConfig_repr___redArg(v_x_1078_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLeanConfig_repr___boxed(lean_object* v_x_1081_, lean_object* v_prec_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lake_instReprLeanConfig_repr(v_x_1081_, v_prec_1082_);
lean_dec(v_prec_1082_);
return v_res_1083_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_buildType___proj___lam__0(lean_object* v_cfg_1086_){
_start:
{
uint8_t v_buildType_1087_; 
v_buildType_1087_ = lean_ctor_get_uint8(v_cfg_1086_, sizeof(void*)*13);
return v_buildType_1087_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__0___boxed(lean_object* v_cfg_1088_){
_start:
{
uint8_t v_res_1089_; lean_object* v_r_1090_; 
v_res_1089_ = l_Lake_LeanConfig_buildType___proj___lam__0(v_cfg_1088_);
lean_dec_ref(v_cfg_1088_);
v_r_1090_ = lean_box(v_res_1089_);
return v_r_1090_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__1(uint8_t v_val_1091_, lean_object* v_cfg_1092_){
_start:
{
lean_object* v_leanOptions_1093_; lean_object* v_moreLeanArgs_1094_; lean_object* v_weakLeanArgs_1095_; uint8_t v_useZigCodegen_1096_; lean_object* v_moreLeancArgs_1097_; lean_object* v_moreServerOptions_1098_; lean_object* v_weakLeancArgs_1099_; lean_object* v_moreLinkObjs_1100_; lean_object* v_moreLinkLibs_1101_; lean_object* v_moreLinkArgs_1102_; lean_object* v_weakLinkArgs_1103_; uint8_t v_backend_1104_; lean_object* v_platformIndependent_1105_; lean_object* v_dynlibs_1106_; lean_object* v_plugins_1107_; uint8_t v_requiresModuleSystem_1108_; uint8_t v_allowNonModules_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v_leanOptions_1093_ = lean_ctor_get(v_cfg_1092_, 0);
v_moreLeanArgs_1094_ = lean_ctor_get(v_cfg_1092_, 1);
v_weakLeanArgs_1095_ = lean_ctor_get(v_cfg_1092_, 2);
v_useZigCodegen_1096_ = lean_ctor_get_uint8(v_cfg_1092_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1097_ = lean_ctor_get(v_cfg_1092_, 3);
v_moreServerOptions_1098_ = lean_ctor_get(v_cfg_1092_, 4);
v_weakLeancArgs_1099_ = lean_ctor_get(v_cfg_1092_, 5);
v_moreLinkObjs_1100_ = lean_ctor_get(v_cfg_1092_, 6);
v_moreLinkLibs_1101_ = lean_ctor_get(v_cfg_1092_, 7);
v_moreLinkArgs_1102_ = lean_ctor_get(v_cfg_1092_, 8);
v_weakLinkArgs_1103_ = lean_ctor_get(v_cfg_1092_, 9);
v_backend_1104_ = lean_ctor_get_uint8(v_cfg_1092_, sizeof(void*)*13 + 2);
v_platformIndependent_1105_ = lean_ctor_get(v_cfg_1092_, 10);
v_dynlibs_1106_ = lean_ctor_get(v_cfg_1092_, 11);
v_plugins_1107_ = lean_ctor_get(v_cfg_1092_, 12);
v_requiresModuleSystem_1108_ = lean_ctor_get_uint8(v_cfg_1092_, sizeof(void*)*13 + 3);
v_allowNonModules_1109_ = lean_ctor_get_uint8(v_cfg_1092_, sizeof(void*)*13 + 4);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_cfg_1092_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v_cfg_1092_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_plugins_1107_);
lean_inc(v_dynlibs_1106_);
lean_inc(v_platformIndependent_1105_);
lean_inc(v_weakLinkArgs_1103_);
lean_inc(v_moreLinkArgs_1102_);
lean_inc(v_moreLinkLibs_1101_);
lean_inc(v_moreLinkObjs_1100_);
lean_inc(v_weakLeancArgs_1099_);
lean_inc(v_moreServerOptions_1098_);
lean_inc(v_moreLeancArgs_1097_);
lean_inc(v_weakLeanArgs_1095_);
lean_inc(v_moreLeanArgs_1094_);
lean_inc(v_leanOptions_1093_);
lean_dec(v_cfg_1092_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_leanOptions_1093_);
lean_ctor_set(v_reuseFailAlloc_1115_, 1, v_moreLeanArgs_1094_);
lean_ctor_set(v_reuseFailAlloc_1115_, 2, v_weakLeanArgs_1095_);
lean_ctor_set(v_reuseFailAlloc_1115_, 3, v_moreLeancArgs_1097_);
lean_ctor_set(v_reuseFailAlloc_1115_, 4, v_moreServerOptions_1098_);
lean_ctor_set(v_reuseFailAlloc_1115_, 5, v_weakLeancArgs_1099_);
lean_ctor_set(v_reuseFailAlloc_1115_, 6, v_moreLinkObjs_1100_);
lean_ctor_set(v_reuseFailAlloc_1115_, 7, v_moreLinkLibs_1101_);
lean_ctor_set(v_reuseFailAlloc_1115_, 8, v_moreLinkArgs_1102_);
lean_ctor_set(v_reuseFailAlloc_1115_, 9, v_weakLinkArgs_1103_);
lean_ctor_set(v_reuseFailAlloc_1115_, 10, v_platformIndependent_1105_);
lean_ctor_set(v_reuseFailAlloc_1115_, 11, v_dynlibs_1106_);
lean_ctor_set(v_reuseFailAlloc_1115_, 12, v_plugins_1107_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*13 + 1, v_useZigCodegen_1096_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*13 + 2, v_backend_1104_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1108_);
lean_ctor_set_uint8(v_reuseFailAlloc_1115_, sizeof(void*)*13 + 4, v_allowNonModules_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_ctor_set_uint8(v___x_1114_, sizeof(void*)*13, v_val_1091_);
return v___x_1114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__1___boxed(lean_object* v_val_1117_, lean_object* v_cfg_1118_){
_start:
{
uint8_t v_val_88__boxed_1119_; lean_object* v_res_1120_; 
v_val_88__boxed_1119_ = lean_unbox(v_val_1117_);
v_res_1120_ = l_Lake_LeanConfig_buildType___proj___lam__1(v_val_88__boxed_1119_, v_cfg_1118_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__2(lean_object* v_f_1121_, lean_object* v_cfg_1122_){
_start:
{
uint8_t v_buildType_1123_; lean_object* v_leanOptions_1124_; lean_object* v_moreLeanArgs_1125_; lean_object* v_weakLeanArgs_1126_; uint8_t v_useZigCodegen_1127_; lean_object* v_moreLeancArgs_1128_; lean_object* v_moreServerOptions_1129_; lean_object* v_weakLeancArgs_1130_; lean_object* v_moreLinkObjs_1131_; lean_object* v_moreLinkLibs_1132_; lean_object* v_moreLinkArgs_1133_; lean_object* v_weakLinkArgs_1134_; uint8_t v_backend_1135_; lean_object* v_platformIndependent_1136_; lean_object* v_dynlibs_1137_; lean_object* v_plugins_1138_; uint8_t v_requiresModuleSystem_1139_; uint8_t v_allowNonModules_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1150_; 
v_buildType_1123_ = lean_ctor_get_uint8(v_cfg_1122_, sizeof(void*)*13);
v_leanOptions_1124_ = lean_ctor_get(v_cfg_1122_, 0);
v_moreLeanArgs_1125_ = lean_ctor_get(v_cfg_1122_, 1);
v_weakLeanArgs_1126_ = lean_ctor_get(v_cfg_1122_, 2);
v_useZigCodegen_1127_ = lean_ctor_get_uint8(v_cfg_1122_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1128_ = lean_ctor_get(v_cfg_1122_, 3);
v_moreServerOptions_1129_ = lean_ctor_get(v_cfg_1122_, 4);
v_weakLeancArgs_1130_ = lean_ctor_get(v_cfg_1122_, 5);
v_moreLinkObjs_1131_ = lean_ctor_get(v_cfg_1122_, 6);
v_moreLinkLibs_1132_ = lean_ctor_get(v_cfg_1122_, 7);
v_moreLinkArgs_1133_ = lean_ctor_get(v_cfg_1122_, 8);
v_weakLinkArgs_1134_ = lean_ctor_get(v_cfg_1122_, 9);
v_backend_1135_ = lean_ctor_get_uint8(v_cfg_1122_, sizeof(void*)*13 + 2);
v_platformIndependent_1136_ = lean_ctor_get(v_cfg_1122_, 10);
v_dynlibs_1137_ = lean_ctor_get(v_cfg_1122_, 11);
v_plugins_1138_ = lean_ctor_get(v_cfg_1122_, 12);
v_requiresModuleSystem_1139_ = lean_ctor_get_uint8(v_cfg_1122_, sizeof(void*)*13 + 3);
v_allowNonModules_1140_ = lean_ctor_get_uint8(v_cfg_1122_, sizeof(void*)*13 + 4);
v_isSharedCheck_1150_ = !lean_is_exclusive(v_cfg_1122_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1142_ = v_cfg_1122_;
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_plugins_1138_);
lean_inc(v_dynlibs_1137_);
lean_inc(v_platformIndependent_1136_);
lean_inc(v_weakLinkArgs_1134_);
lean_inc(v_moreLinkArgs_1133_);
lean_inc(v_moreLinkLibs_1132_);
lean_inc(v_moreLinkObjs_1131_);
lean_inc(v_weakLeancArgs_1130_);
lean_inc(v_moreServerOptions_1129_);
lean_inc(v_moreLeancArgs_1128_);
lean_inc(v_weakLeanArgs_1126_);
lean_inc(v_moreLeanArgs_1125_);
lean_inc(v_leanOptions_1124_);
lean_dec(v_cfg_1122_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1144_ = lean_box(v_buildType_1123_);
v___x_1145_ = lean_apply_1(v_f_1121_, v___x_1144_);
if (v_isShared_1143_ == 0)
{
v___x_1147_ = v___x_1142_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_leanOptions_1124_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_moreLeanArgs_1125_);
lean_ctor_set(v_reuseFailAlloc_1149_, 2, v_weakLeanArgs_1126_);
lean_ctor_set(v_reuseFailAlloc_1149_, 3, v_moreLeancArgs_1128_);
lean_ctor_set(v_reuseFailAlloc_1149_, 4, v_moreServerOptions_1129_);
lean_ctor_set(v_reuseFailAlloc_1149_, 5, v_weakLeancArgs_1130_);
lean_ctor_set(v_reuseFailAlloc_1149_, 6, v_moreLinkObjs_1131_);
lean_ctor_set(v_reuseFailAlloc_1149_, 7, v_moreLinkLibs_1132_);
lean_ctor_set(v_reuseFailAlloc_1149_, 8, v_moreLinkArgs_1133_);
lean_ctor_set(v_reuseFailAlloc_1149_, 9, v_weakLinkArgs_1134_);
lean_ctor_set(v_reuseFailAlloc_1149_, 10, v_platformIndependent_1136_);
lean_ctor_set(v_reuseFailAlloc_1149_, 11, v_dynlibs_1137_);
lean_ctor_set(v_reuseFailAlloc_1149_, 12, v_plugins_1138_);
v___x_1147_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
uint8_t v___x_1148_; 
v___x_1148_ = lean_unbox(v___x_1145_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*13, v___x_1148_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*13 + 1, v_useZigCodegen_1127_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*13 + 2, v_backend_1135_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1139_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*13 + 4, v_allowNonModules_1140_);
return v___x_1147_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_buildType___proj___lam__3(lean_object* v_x_1151_){
_start:
{
uint8_t v___x_1152_; 
v___x_1152_ = 3;
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_buildType___proj___lam__3___boxed(lean_object* v_x_1153_){
_start:
{
uint8_t v_res_1154_; lean_object* v_r_1155_; 
v_res_1154_ = l_Lake_LeanConfig_buildType___proj___lam__3(v_x_1153_);
lean_dec_ref(v_x_1153_);
v_r_1155_ = lean_box(v_res_1154_);
return v_r_1155_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__0(lean_object* v_cfg_1167_){
_start:
{
lean_object* v_leanOptions_1168_; 
v_leanOptions_1168_ = lean_ctor_get(v_cfg_1167_, 0);
lean_inc_ref(v_leanOptions_1168_);
return v_leanOptions_1168_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__0___boxed(lean_object* v_cfg_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lake_LeanConfig_leanOptions___proj___lam__0(v_cfg_1169_);
lean_dec_ref(v_cfg_1169_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__1(lean_object* v_val_1171_, lean_object* v_cfg_1172_){
_start:
{
uint8_t v_buildType_1173_; lean_object* v_moreLeanArgs_1174_; lean_object* v_weakLeanArgs_1175_; uint8_t v_useZigCodegen_1176_; lean_object* v_moreLeancArgs_1177_; lean_object* v_moreServerOptions_1178_; lean_object* v_weakLeancArgs_1179_; lean_object* v_moreLinkObjs_1180_; lean_object* v_moreLinkLibs_1181_; lean_object* v_moreLinkArgs_1182_; lean_object* v_weakLinkArgs_1183_; uint8_t v_backend_1184_; lean_object* v_platformIndependent_1185_; lean_object* v_dynlibs_1186_; lean_object* v_plugins_1187_; uint8_t v_requiresModuleSystem_1188_; uint8_t v_allowNonModules_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1196_; 
v_buildType_1173_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*13);
v_moreLeanArgs_1174_ = lean_ctor_get(v_cfg_1172_, 1);
v_weakLeanArgs_1175_ = lean_ctor_get(v_cfg_1172_, 2);
v_useZigCodegen_1176_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1177_ = lean_ctor_get(v_cfg_1172_, 3);
v_moreServerOptions_1178_ = lean_ctor_get(v_cfg_1172_, 4);
v_weakLeancArgs_1179_ = lean_ctor_get(v_cfg_1172_, 5);
v_moreLinkObjs_1180_ = lean_ctor_get(v_cfg_1172_, 6);
v_moreLinkLibs_1181_ = lean_ctor_get(v_cfg_1172_, 7);
v_moreLinkArgs_1182_ = lean_ctor_get(v_cfg_1172_, 8);
v_weakLinkArgs_1183_ = lean_ctor_get(v_cfg_1172_, 9);
v_backend_1184_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*13 + 2);
v_platformIndependent_1185_ = lean_ctor_get(v_cfg_1172_, 10);
v_dynlibs_1186_ = lean_ctor_get(v_cfg_1172_, 11);
v_plugins_1187_ = lean_ctor_get(v_cfg_1172_, 12);
v_requiresModuleSystem_1188_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*13 + 3);
v_allowNonModules_1189_ = lean_ctor_get_uint8(v_cfg_1172_, sizeof(void*)*13 + 4);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_cfg_1172_);
if (v_isSharedCheck_1196_ == 0)
{
lean_object* v_unused_1197_; 
v_unused_1197_ = lean_ctor_get(v_cfg_1172_, 0);
lean_dec(v_unused_1197_);
v___x_1191_ = v_cfg_1172_;
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_plugins_1187_);
lean_inc(v_dynlibs_1186_);
lean_inc(v_platformIndependent_1185_);
lean_inc(v_weakLinkArgs_1183_);
lean_inc(v_moreLinkArgs_1182_);
lean_inc(v_moreLinkLibs_1181_);
lean_inc(v_moreLinkObjs_1180_);
lean_inc(v_weakLeancArgs_1179_);
lean_inc(v_moreServerOptions_1178_);
lean_inc(v_moreLeancArgs_1177_);
lean_inc(v_weakLeanArgs_1175_);
lean_inc(v_moreLeanArgs_1174_);
lean_dec(v_cfg_1172_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1196_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v___x_1194_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v_val_1171_);
v___x_1194_ = v___x_1191_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_val_1171_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_moreLeanArgs_1174_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_weakLeanArgs_1175_);
lean_ctor_set(v_reuseFailAlloc_1195_, 3, v_moreLeancArgs_1177_);
lean_ctor_set(v_reuseFailAlloc_1195_, 4, v_moreServerOptions_1178_);
lean_ctor_set(v_reuseFailAlloc_1195_, 5, v_weakLeancArgs_1179_);
lean_ctor_set(v_reuseFailAlloc_1195_, 6, v_moreLinkObjs_1180_);
lean_ctor_set(v_reuseFailAlloc_1195_, 7, v_moreLinkLibs_1181_);
lean_ctor_set(v_reuseFailAlloc_1195_, 8, v_moreLinkArgs_1182_);
lean_ctor_set(v_reuseFailAlloc_1195_, 9, v_weakLinkArgs_1183_);
lean_ctor_set(v_reuseFailAlloc_1195_, 10, v_platformIndependent_1185_);
lean_ctor_set(v_reuseFailAlloc_1195_, 11, v_dynlibs_1186_);
lean_ctor_set(v_reuseFailAlloc_1195_, 12, v_plugins_1187_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*13, v_buildType_1173_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*13 + 1, v_useZigCodegen_1176_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*13 + 2, v_backend_1184_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1188_);
lean_ctor_set_uint8(v_reuseFailAlloc_1195_, sizeof(void*)*13 + 4, v_allowNonModules_1189_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__2(lean_object* v_f_1198_, lean_object* v_cfg_1199_){
_start:
{
uint8_t v_buildType_1200_; lean_object* v_leanOptions_1201_; lean_object* v_moreLeanArgs_1202_; lean_object* v_weakLeanArgs_1203_; uint8_t v_useZigCodegen_1204_; lean_object* v_moreLeancArgs_1205_; lean_object* v_moreServerOptions_1206_; lean_object* v_weakLeancArgs_1207_; lean_object* v_moreLinkObjs_1208_; lean_object* v_moreLinkLibs_1209_; lean_object* v_moreLinkArgs_1210_; lean_object* v_weakLinkArgs_1211_; uint8_t v_backend_1212_; lean_object* v_platformIndependent_1213_; lean_object* v_dynlibs_1214_; lean_object* v_plugins_1215_; uint8_t v_requiresModuleSystem_1216_; uint8_t v_allowNonModules_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
v_buildType_1200_ = lean_ctor_get_uint8(v_cfg_1199_, sizeof(void*)*13);
v_leanOptions_1201_ = lean_ctor_get(v_cfg_1199_, 0);
v_moreLeanArgs_1202_ = lean_ctor_get(v_cfg_1199_, 1);
v_weakLeanArgs_1203_ = lean_ctor_get(v_cfg_1199_, 2);
v_useZigCodegen_1204_ = lean_ctor_get_uint8(v_cfg_1199_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1205_ = lean_ctor_get(v_cfg_1199_, 3);
v_moreServerOptions_1206_ = lean_ctor_get(v_cfg_1199_, 4);
v_weakLeancArgs_1207_ = lean_ctor_get(v_cfg_1199_, 5);
v_moreLinkObjs_1208_ = lean_ctor_get(v_cfg_1199_, 6);
v_moreLinkLibs_1209_ = lean_ctor_get(v_cfg_1199_, 7);
v_moreLinkArgs_1210_ = lean_ctor_get(v_cfg_1199_, 8);
v_weakLinkArgs_1211_ = lean_ctor_get(v_cfg_1199_, 9);
v_backend_1212_ = lean_ctor_get_uint8(v_cfg_1199_, sizeof(void*)*13 + 2);
v_platformIndependent_1213_ = lean_ctor_get(v_cfg_1199_, 10);
v_dynlibs_1214_ = lean_ctor_get(v_cfg_1199_, 11);
v_plugins_1215_ = lean_ctor_get(v_cfg_1199_, 12);
v_requiresModuleSystem_1216_ = lean_ctor_get_uint8(v_cfg_1199_, sizeof(void*)*13 + 3);
v_allowNonModules_1217_ = lean_ctor_get_uint8(v_cfg_1199_, sizeof(void*)*13 + 4);
v_isSharedCheck_1225_ = !lean_is_exclusive(v_cfg_1199_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1219_ = v_cfg_1199_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_plugins_1215_);
lean_inc(v_dynlibs_1214_);
lean_inc(v_platformIndependent_1213_);
lean_inc(v_weakLinkArgs_1211_);
lean_inc(v_moreLinkArgs_1210_);
lean_inc(v_moreLinkLibs_1209_);
lean_inc(v_moreLinkObjs_1208_);
lean_inc(v_weakLeancArgs_1207_);
lean_inc(v_moreServerOptions_1206_);
lean_inc(v_moreLeancArgs_1205_);
lean_inc(v_weakLeanArgs_1203_);
lean_inc(v_moreLeanArgs_1202_);
lean_inc(v_leanOptions_1201_);
lean_dec(v_cfg_1199_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_apply_1(v_f_1198_, v_leanOptions_1201_);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_moreLeanArgs_1202_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_weakLeanArgs_1203_);
lean_ctor_set(v_reuseFailAlloc_1224_, 3, v_moreLeancArgs_1205_);
lean_ctor_set(v_reuseFailAlloc_1224_, 4, v_moreServerOptions_1206_);
lean_ctor_set(v_reuseFailAlloc_1224_, 5, v_weakLeancArgs_1207_);
lean_ctor_set(v_reuseFailAlloc_1224_, 6, v_moreLinkObjs_1208_);
lean_ctor_set(v_reuseFailAlloc_1224_, 7, v_moreLinkLibs_1209_);
lean_ctor_set(v_reuseFailAlloc_1224_, 8, v_moreLinkArgs_1210_);
lean_ctor_set(v_reuseFailAlloc_1224_, 9, v_weakLinkArgs_1211_);
lean_ctor_set(v_reuseFailAlloc_1224_, 10, v_platformIndependent_1213_);
lean_ctor_set(v_reuseFailAlloc_1224_, 11, v_dynlibs_1214_);
lean_ctor_set(v_reuseFailAlloc_1224_, 12, v_plugins_1215_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*13, v_buildType_1200_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*13 + 1, v_useZigCodegen_1204_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*13 + 2, v_backend_1212_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1216_);
lean_ctor_set_uint8(v_reuseFailAlloc_1224_, sizeof(void*)*13 + 4, v_allowNonModules_1217_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__3(lean_object* v_x_1226_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = ((lean_object*)(l_Lake_instInhabitedLeanConfig_default___closed__0));
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_leanOptions___proj___lam__3___boxed(lean_object* v_x_1228_){
_start:
{
lean_object* v_res_1229_; 
v_res_1229_ = l_Lake_LeanConfig_leanOptions___proj___lam__3(v_x_1228_);
lean_dec_ref(v_x_1228_);
return v_res_1229_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__0(lean_object* v_cfg_1241_){
_start:
{
lean_object* v_moreLeanArgs_1242_; 
v_moreLeanArgs_1242_ = lean_ctor_get(v_cfg_1241_, 1);
lean_inc_ref(v_moreLeanArgs_1242_);
return v_moreLeanArgs_1242_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__0___boxed(lean_object* v_cfg_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lake_LeanConfig_moreLeanArgs___proj___lam__0(v_cfg_1243_);
lean_dec_ref(v_cfg_1243_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__1(lean_object* v_val_1245_, lean_object* v_cfg_1246_){
_start:
{
uint8_t v_buildType_1247_; lean_object* v_leanOptions_1248_; lean_object* v_weakLeanArgs_1249_; uint8_t v_useZigCodegen_1250_; lean_object* v_moreLeancArgs_1251_; lean_object* v_moreServerOptions_1252_; lean_object* v_weakLeancArgs_1253_; lean_object* v_moreLinkObjs_1254_; lean_object* v_moreLinkLibs_1255_; lean_object* v_moreLinkArgs_1256_; lean_object* v_weakLinkArgs_1257_; uint8_t v_backend_1258_; lean_object* v_platformIndependent_1259_; lean_object* v_dynlibs_1260_; lean_object* v_plugins_1261_; uint8_t v_requiresModuleSystem_1262_; uint8_t v_allowNonModules_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
v_buildType_1247_ = lean_ctor_get_uint8(v_cfg_1246_, sizeof(void*)*13);
v_leanOptions_1248_ = lean_ctor_get(v_cfg_1246_, 0);
v_weakLeanArgs_1249_ = lean_ctor_get(v_cfg_1246_, 2);
v_useZigCodegen_1250_ = lean_ctor_get_uint8(v_cfg_1246_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1251_ = lean_ctor_get(v_cfg_1246_, 3);
v_moreServerOptions_1252_ = lean_ctor_get(v_cfg_1246_, 4);
v_weakLeancArgs_1253_ = lean_ctor_get(v_cfg_1246_, 5);
v_moreLinkObjs_1254_ = lean_ctor_get(v_cfg_1246_, 6);
v_moreLinkLibs_1255_ = lean_ctor_get(v_cfg_1246_, 7);
v_moreLinkArgs_1256_ = lean_ctor_get(v_cfg_1246_, 8);
v_weakLinkArgs_1257_ = lean_ctor_get(v_cfg_1246_, 9);
v_backend_1258_ = lean_ctor_get_uint8(v_cfg_1246_, sizeof(void*)*13 + 2);
v_platformIndependent_1259_ = lean_ctor_get(v_cfg_1246_, 10);
v_dynlibs_1260_ = lean_ctor_get(v_cfg_1246_, 11);
v_plugins_1261_ = lean_ctor_get(v_cfg_1246_, 12);
v_requiresModuleSystem_1262_ = lean_ctor_get_uint8(v_cfg_1246_, sizeof(void*)*13 + 3);
v_allowNonModules_1263_ = lean_ctor_get_uint8(v_cfg_1246_, sizeof(void*)*13 + 4);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_cfg_1246_);
if (v_isSharedCheck_1270_ == 0)
{
lean_object* v_unused_1271_; 
v_unused_1271_ = lean_ctor_get(v_cfg_1246_, 1);
lean_dec(v_unused_1271_);
v___x_1265_ = v_cfg_1246_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_plugins_1261_);
lean_inc(v_dynlibs_1260_);
lean_inc(v_platformIndependent_1259_);
lean_inc(v_weakLinkArgs_1257_);
lean_inc(v_moreLinkArgs_1256_);
lean_inc(v_moreLinkLibs_1255_);
lean_inc(v_moreLinkObjs_1254_);
lean_inc(v_weakLeancArgs_1253_);
lean_inc(v_moreServerOptions_1252_);
lean_inc(v_moreLeancArgs_1251_);
lean_inc(v_weakLeanArgs_1249_);
lean_inc(v_leanOptions_1248_);
lean_dec(v_cfg_1246_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v_val_1245_);
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_leanOptions_1248_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_val_1245_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v_weakLeanArgs_1249_);
lean_ctor_set(v_reuseFailAlloc_1269_, 3, v_moreLeancArgs_1251_);
lean_ctor_set(v_reuseFailAlloc_1269_, 4, v_moreServerOptions_1252_);
lean_ctor_set(v_reuseFailAlloc_1269_, 5, v_weakLeancArgs_1253_);
lean_ctor_set(v_reuseFailAlloc_1269_, 6, v_moreLinkObjs_1254_);
lean_ctor_set(v_reuseFailAlloc_1269_, 7, v_moreLinkLibs_1255_);
lean_ctor_set(v_reuseFailAlloc_1269_, 8, v_moreLinkArgs_1256_);
lean_ctor_set(v_reuseFailAlloc_1269_, 9, v_weakLinkArgs_1257_);
lean_ctor_set(v_reuseFailAlloc_1269_, 10, v_platformIndependent_1259_);
lean_ctor_set(v_reuseFailAlloc_1269_, 11, v_dynlibs_1260_);
lean_ctor_set(v_reuseFailAlloc_1269_, 12, v_plugins_1261_);
lean_ctor_set_uint8(v_reuseFailAlloc_1269_, sizeof(void*)*13, v_buildType_1247_);
lean_ctor_set_uint8(v_reuseFailAlloc_1269_, sizeof(void*)*13 + 1, v_useZigCodegen_1250_);
lean_ctor_set_uint8(v_reuseFailAlloc_1269_, sizeof(void*)*13 + 2, v_backend_1258_);
lean_ctor_set_uint8(v_reuseFailAlloc_1269_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1262_);
lean_ctor_set_uint8(v_reuseFailAlloc_1269_, sizeof(void*)*13 + 4, v_allowNonModules_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__2(lean_object* v_f_1272_, lean_object* v_cfg_1273_){
_start:
{
uint8_t v_buildType_1274_; lean_object* v_leanOptions_1275_; lean_object* v_moreLeanArgs_1276_; lean_object* v_weakLeanArgs_1277_; uint8_t v_useZigCodegen_1278_; lean_object* v_moreLeancArgs_1279_; lean_object* v_moreServerOptions_1280_; lean_object* v_weakLeancArgs_1281_; lean_object* v_moreLinkObjs_1282_; lean_object* v_moreLinkLibs_1283_; lean_object* v_moreLinkArgs_1284_; lean_object* v_weakLinkArgs_1285_; uint8_t v_backend_1286_; lean_object* v_platformIndependent_1287_; lean_object* v_dynlibs_1288_; lean_object* v_plugins_1289_; uint8_t v_requiresModuleSystem_1290_; uint8_t v_allowNonModules_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1299_; 
v_buildType_1274_ = lean_ctor_get_uint8(v_cfg_1273_, sizeof(void*)*13);
v_leanOptions_1275_ = lean_ctor_get(v_cfg_1273_, 0);
v_moreLeanArgs_1276_ = lean_ctor_get(v_cfg_1273_, 1);
v_weakLeanArgs_1277_ = lean_ctor_get(v_cfg_1273_, 2);
v_useZigCodegen_1278_ = lean_ctor_get_uint8(v_cfg_1273_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1279_ = lean_ctor_get(v_cfg_1273_, 3);
v_moreServerOptions_1280_ = lean_ctor_get(v_cfg_1273_, 4);
v_weakLeancArgs_1281_ = lean_ctor_get(v_cfg_1273_, 5);
v_moreLinkObjs_1282_ = lean_ctor_get(v_cfg_1273_, 6);
v_moreLinkLibs_1283_ = lean_ctor_get(v_cfg_1273_, 7);
v_moreLinkArgs_1284_ = lean_ctor_get(v_cfg_1273_, 8);
v_weakLinkArgs_1285_ = lean_ctor_get(v_cfg_1273_, 9);
v_backend_1286_ = lean_ctor_get_uint8(v_cfg_1273_, sizeof(void*)*13 + 2);
v_platformIndependent_1287_ = lean_ctor_get(v_cfg_1273_, 10);
v_dynlibs_1288_ = lean_ctor_get(v_cfg_1273_, 11);
v_plugins_1289_ = lean_ctor_get(v_cfg_1273_, 12);
v_requiresModuleSystem_1290_ = lean_ctor_get_uint8(v_cfg_1273_, sizeof(void*)*13 + 3);
v_allowNonModules_1291_ = lean_ctor_get_uint8(v_cfg_1273_, sizeof(void*)*13 + 4);
v_isSharedCheck_1299_ = !lean_is_exclusive(v_cfg_1273_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1293_ = v_cfg_1273_;
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_plugins_1289_);
lean_inc(v_dynlibs_1288_);
lean_inc(v_platformIndependent_1287_);
lean_inc(v_weakLinkArgs_1285_);
lean_inc(v_moreLinkArgs_1284_);
lean_inc(v_moreLinkLibs_1283_);
lean_inc(v_moreLinkObjs_1282_);
lean_inc(v_weakLeancArgs_1281_);
lean_inc(v_moreServerOptions_1280_);
lean_inc(v_moreLeancArgs_1279_);
lean_inc(v_weakLeanArgs_1277_);
lean_inc(v_moreLeanArgs_1276_);
lean_inc(v_leanOptions_1275_);
lean_dec(v_cfg_1273_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1299_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1295_; lean_object* v___x_1297_; 
v___x_1295_ = lean_apply_1(v_f_1272_, v_moreLeanArgs_1276_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 1, v___x_1295_);
v___x_1297_ = v___x_1293_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v_leanOptions_1275_);
lean_ctor_set(v_reuseFailAlloc_1298_, 1, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1298_, 2, v_weakLeanArgs_1277_);
lean_ctor_set(v_reuseFailAlloc_1298_, 3, v_moreLeancArgs_1279_);
lean_ctor_set(v_reuseFailAlloc_1298_, 4, v_moreServerOptions_1280_);
lean_ctor_set(v_reuseFailAlloc_1298_, 5, v_weakLeancArgs_1281_);
lean_ctor_set(v_reuseFailAlloc_1298_, 6, v_moreLinkObjs_1282_);
lean_ctor_set(v_reuseFailAlloc_1298_, 7, v_moreLinkLibs_1283_);
lean_ctor_set(v_reuseFailAlloc_1298_, 8, v_moreLinkArgs_1284_);
lean_ctor_set(v_reuseFailAlloc_1298_, 9, v_weakLinkArgs_1285_);
lean_ctor_set(v_reuseFailAlloc_1298_, 10, v_platformIndependent_1287_);
lean_ctor_set(v_reuseFailAlloc_1298_, 11, v_dynlibs_1288_);
lean_ctor_set(v_reuseFailAlloc_1298_, 12, v_plugins_1289_);
lean_ctor_set_uint8(v_reuseFailAlloc_1298_, sizeof(void*)*13, v_buildType_1274_);
lean_ctor_set_uint8(v_reuseFailAlloc_1298_, sizeof(void*)*13 + 1, v_useZigCodegen_1278_);
lean_ctor_set_uint8(v_reuseFailAlloc_1298_, sizeof(void*)*13 + 2, v_backend_1286_);
lean_ctor_set_uint8(v_reuseFailAlloc_1298_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1290_);
lean_ctor_set_uint8(v_reuseFailAlloc_1298_, sizeof(void*)*13 + 4, v_allowNonModules_1291_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__3(lean_object* v_x_1300_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = ((lean_object*)(l_Lake_BuildType_leanArgs___closed__0));
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeanArgs___proj___lam__3___boxed(lean_object* v_x_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l_Lake_LeanConfig_moreLeanArgs___proj___lam__3(v_x_1302_);
lean_dec_ref(v_x_1302_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__0(lean_object* v_cfg_1315_){
_start:
{
lean_object* v_weakLeanArgs_1316_; 
v_weakLeanArgs_1316_ = lean_ctor_get(v_cfg_1315_, 2);
lean_inc_ref(v_weakLeanArgs_1316_);
return v_weakLeanArgs_1316_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__0___boxed(lean_object* v_cfg_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Lake_LeanConfig_weakLeanArgs___proj___lam__0(v_cfg_1317_);
lean_dec_ref(v_cfg_1317_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__1(lean_object* v_val_1319_, lean_object* v_cfg_1320_){
_start:
{
uint8_t v_buildType_1321_; lean_object* v_leanOptions_1322_; lean_object* v_moreLeanArgs_1323_; uint8_t v_useZigCodegen_1324_; lean_object* v_moreLeancArgs_1325_; lean_object* v_moreServerOptions_1326_; lean_object* v_weakLeancArgs_1327_; lean_object* v_moreLinkObjs_1328_; lean_object* v_moreLinkLibs_1329_; lean_object* v_moreLinkArgs_1330_; lean_object* v_weakLinkArgs_1331_; uint8_t v_backend_1332_; lean_object* v_platformIndependent_1333_; lean_object* v_dynlibs_1334_; lean_object* v_plugins_1335_; uint8_t v_requiresModuleSystem_1336_; uint8_t v_allowNonModules_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
v_buildType_1321_ = lean_ctor_get_uint8(v_cfg_1320_, sizeof(void*)*13);
v_leanOptions_1322_ = lean_ctor_get(v_cfg_1320_, 0);
v_moreLeanArgs_1323_ = lean_ctor_get(v_cfg_1320_, 1);
v_useZigCodegen_1324_ = lean_ctor_get_uint8(v_cfg_1320_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1325_ = lean_ctor_get(v_cfg_1320_, 3);
v_moreServerOptions_1326_ = lean_ctor_get(v_cfg_1320_, 4);
v_weakLeancArgs_1327_ = lean_ctor_get(v_cfg_1320_, 5);
v_moreLinkObjs_1328_ = lean_ctor_get(v_cfg_1320_, 6);
v_moreLinkLibs_1329_ = lean_ctor_get(v_cfg_1320_, 7);
v_moreLinkArgs_1330_ = lean_ctor_get(v_cfg_1320_, 8);
v_weakLinkArgs_1331_ = lean_ctor_get(v_cfg_1320_, 9);
v_backend_1332_ = lean_ctor_get_uint8(v_cfg_1320_, sizeof(void*)*13 + 2);
v_platformIndependent_1333_ = lean_ctor_get(v_cfg_1320_, 10);
v_dynlibs_1334_ = lean_ctor_get(v_cfg_1320_, 11);
v_plugins_1335_ = lean_ctor_get(v_cfg_1320_, 12);
v_requiresModuleSystem_1336_ = lean_ctor_get_uint8(v_cfg_1320_, sizeof(void*)*13 + 3);
v_allowNonModules_1337_ = lean_ctor_get_uint8(v_cfg_1320_, sizeof(void*)*13 + 4);
v_isSharedCheck_1344_ = !lean_is_exclusive(v_cfg_1320_);
if (v_isSharedCheck_1344_ == 0)
{
lean_object* v_unused_1345_; 
v_unused_1345_ = lean_ctor_get(v_cfg_1320_, 2);
lean_dec(v_unused_1345_);
v___x_1339_ = v_cfg_1320_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_plugins_1335_);
lean_inc(v_dynlibs_1334_);
lean_inc(v_platformIndependent_1333_);
lean_inc(v_weakLinkArgs_1331_);
lean_inc(v_moreLinkArgs_1330_);
lean_inc(v_moreLinkLibs_1329_);
lean_inc(v_moreLinkObjs_1328_);
lean_inc(v_weakLeancArgs_1327_);
lean_inc(v_moreServerOptions_1326_);
lean_inc(v_moreLeancArgs_1325_);
lean_inc(v_moreLeanArgs_1323_);
lean_inc(v_leanOptions_1322_);
lean_dec(v_cfg_1320_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 2, v_val_1319_);
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_leanOptions_1322_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v_moreLeanArgs_1323_);
lean_ctor_set(v_reuseFailAlloc_1343_, 2, v_val_1319_);
lean_ctor_set(v_reuseFailAlloc_1343_, 3, v_moreLeancArgs_1325_);
lean_ctor_set(v_reuseFailAlloc_1343_, 4, v_moreServerOptions_1326_);
lean_ctor_set(v_reuseFailAlloc_1343_, 5, v_weakLeancArgs_1327_);
lean_ctor_set(v_reuseFailAlloc_1343_, 6, v_moreLinkObjs_1328_);
lean_ctor_set(v_reuseFailAlloc_1343_, 7, v_moreLinkLibs_1329_);
lean_ctor_set(v_reuseFailAlloc_1343_, 8, v_moreLinkArgs_1330_);
lean_ctor_set(v_reuseFailAlloc_1343_, 9, v_weakLinkArgs_1331_);
lean_ctor_set(v_reuseFailAlloc_1343_, 10, v_platformIndependent_1333_);
lean_ctor_set(v_reuseFailAlloc_1343_, 11, v_dynlibs_1334_);
lean_ctor_set(v_reuseFailAlloc_1343_, 12, v_plugins_1335_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*13, v_buildType_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*13 + 1, v_useZigCodegen_1324_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*13 + 2, v_backend_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1336_);
lean_ctor_set_uint8(v_reuseFailAlloc_1343_, sizeof(void*)*13 + 4, v_allowNonModules_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeanArgs___proj___lam__2(lean_object* v_f_1346_, lean_object* v_cfg_1347_){
_start:
{
uint8_t v_buildType_1348_; lean_object* v_leanOptions_1349_; lean_object* v_moreLeanArgs_1350_; lean_object* v_weakLeanArgs_1351_; uint8_t v_useZigCodegen_1352_; lean_object* v_moreLeancArgs_1353_; lean_object* v_moreServerOptions_1354_; lean_object* v_weakLeancArgs_1355_; lean_object* v_moreLinkObjs_1356_; lean_object* v_moreLinkLibs_1357_; lean_object* v_moreLinkArgs_1358_; lean_object* v_weakLinkArgs_1359_; uint8_t v_backend_1360_; lean_object* v_platformIndependent_1361_; lean_object* v_dynlibs_1362_; lean_object* v_plugins_1363_; uint8_t v_requiresModuleSystem_1364_; uint8_t v_allowNonModules_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1373_; 
v_buildType_1348_ = lean_ctor_get_uint8(v_cfg_1347_, sizeof(void*)*13);
v_leanOptions_1349_ = lean_ctor_get(v_cfg_1347_, 0);
v_moreLeanArgs_1350_ = lean_ctor_get(v_cfg_1347_, 1);
v_weakLeanArgs_1351_ = lean_ctor_get(v_cfg_1347_, 2);
v_useZigCodegen_1352_ = lean_ctor_get_uint8(v_cfg_1347_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1353_ = lean_ctor_get(v_cfg_1347_, 3);
v_moreServerOptions_1354_ = lean_ctor_get(v_cfg_1347_, 4);
v_weakLeancArgs_1355_ = lean_ctor_get(v_cfg_1347_, 5);
v_moreLinkObjs_1356_ = lean_ctor_get(v_cfg_1347_, 6);
v_moreLinkLibs_1357_ = lean_ctor_get(v_cfg_1347_, 7);
v_moreLinkArgs_1358_ = lean_ctor_get(v_cfg_1347_, 8);
v_weakLinkArgs_1359_ = lean_ctor_get(v_cfg_1347_, 9);
v_backend_1360_ = lean_ctor_get_uint8(v_cfg_1347_, sizeof(void*)*13 + 2);
v_platformIndependent_1361_ = lean_ctor_get(v_cfg_1347_, 10);
v_dynlibs_1362_ = lean_ctor_get(v_cfg_1347_, 11);
v_plugins_1363_ = lean_ctor_get(v_cfg_1347_, 12);
v_requiresModuleSystem_1364_ = lean_ctor_get_uint8(v_cfg_1347_, sizeof(void*)*13 + 3);
v_allowNonModules_1365_ = lean_ctor_get_uint8(v_cfg_1347_, sizeof(void*)*13 + 4);
v_isSharedCheck_1373_ = !lean_is_exclusive(v_cfg_1347_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1367_ = v_cfg_1347_;
v_isShared_1368_ = v_isSharedCheck_1373_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_plugins_1363_);
lean_inc(v_dynlibs_1362_);
lean_inc(v_platformIndependent_1361_);
lean_inc(v_weakLinkArgs_1359_);
lean_inc(v_moreLinkArgs_1358_);
lean_inc(v_moreLinkLibs_1357_);
lean_inc(v_moreLinkObjs_1356_);
lean_inc(v_weakLeancArgs_1355_);
lean_inc(v_moreServerOptions_1354_);
lean_inc(v_moreLeancArgs_1353_);
lean_inc(v_weakLeanArgs_1351_);
lean_inc(v_moreLeanArgs_1350_);
lean_inc(v_leanOptions_1349_);
lean_dec(v_cfg_1347_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1373_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1369_ = lean_apply_1(v_f_1346_, v_weakLeanArgs_1351_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 2, v___x_1369_);
v___x_1371_ = v___x_1367_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_leanOptions_1349_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_moreLeanArgs_1350_);
lean_ctor_set(v_reuseFailAlloc_1372_, 2, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1372_, 3, v_moreLeancArgs_1353_);
lean_ctor_set(v_reuseFailAlloc_1372_, 4, v_moreServerOptions_1354_);
lean_ctor_set(v_reuseFailAlloc_1372_, 5, v_weakLeancArgs_1355_);
lean_ctor_set(v_reuseFailAlloc_1372_, 6, v_moreLinkObjs_1356_);
lean_ctor_set(v_reuseFailAlloc_1372_, 7, v_moreLinkLibs_1357_);
lean_ctor_set(v_reuseFailAlloc_1372_, 8, v_moreLinkArgs_1358_);
lean_ctor_set(v_reuseFailAlloc_1372_, 9, v_weakLinkArgs_1359_);
lean_ctor_set(v_reuseFailAlloc_1372_, 10, v_platformIndependent_1361_);
lean_ctor_set(v_reuseFailAlloc_1372_, 11, v_dynlibs_1362_);
lean_ctor_set(v_reuseFailAlloc_1372_, 12, v_plugins_1363_);
lean_ctor_set_uint8(v_reuseFailAlloc_1372_, sizeof(void*)*13, v_buildType_1348_);
lean_ctor_set_uint8(v_reuseFailAlloc_1372_, sizeof(void*)*13 + 1, v_useZigCodegen_1352_);
lean_ctor_set_uint8(v_reuseFailAlloc_1372_, sizeof(void*)*13 + 2, v_backend_1360_);
lean_ctor_set_uint8(v_reuseFailAlloc_1372_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1364_);
lean_ctor_set_uint8(v_reuseFailAlloc_1372_, sizeof(void*)*13 + 4, v_allowNonModules_1365_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_useZigCodegen___proj___lam__0(lean_object* v_cfg_1384_){
_start:
{
uint8_t v_useZigCodegen_1385_; 
v_useZigCodegen_1385_ = lean_ctor_get_uint8(v_cfg_1384_, sizeof(void*)*13 + 1);
return v_useZigCodegen_1385_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__0___boxed(lean_object* v_cfg_1386_){
_start:
{
uint8_t v_res_1387_; lean_object* v_r_1388_; 
v_res_1387_ = l_Lake_LeanConfig_useZigCodegen___proj___lam__0(v_cfg_1386_);
lean_dec_ref(v_cfg_1386_);
v_r_1388_ = lean_box(v_res_1387_);
return v_r_1388_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__1(uint8_t v_val_1389_, lean_object* v_cfg_1390_){
_start:
{
uint8_t v_buildType_1391_; lean_object* v_leanOptions_1392_; lean_object* v_moreLeanArgs_1393_; lean_object* v_weakLeanArgs_1394_; lean_object* v_moreLeancArgs_1395_; lean_object* v_moreServerOptions_1396_; lean_object* v_weakLeancArgs_1397_; lean_object* v_moreLinkObjs_1398_; lean_object* v_moreLinkLibs_1399_; lean_object* v_moreLinkArgs_1400_; lean_object* v_weakLinkArgs_1401_; uint8_t v_backend_1402_; lean_object* v_platformIndependent_1403_; lean_object* v_dynlibs_1404_; lean_object* v_plugins_1405_; uint8_t v_requiresModuleSystem_1406_; uint8_t v_allowNonModules_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
v_buildType_1391_ = lean_ctor_get_uint8(v_cfg_1390_, sizeof(void*)*13);
v_leanOptions_1392_ = lean_ctor_get(v_cfg_1390_, 0);
v_moreLeanArgs_1393_ = lean_ctor_get(v_cfg_1390_, 1);
v_weakLeanArgs_1394_ = lean_ctor_get(v_cfg_1390_, 2);
v_moreLeancArgs_1395_ = lean_ctor_get(v_cfg_1390_, 3);
v_moreServerOptions_1396_ = lean_ctor_get(v_cfg_1390_, 4);
v_weakLeancArgs_1397_ = lean_ctor_get(v_cfg_1390_, 5);
v_moreLinkObjs_1398_ = lean_ctor_get(v_cfg_1390_, 6);
v_moreLinkLibs_1399_ = lean_ctor_get(v_cfg_1390_, 7);
v_moreLinkArgs_1400_ = lean_ctor_get(v_cfg_1390_, 8);
v_weakLinkArgs_1401_ = lean_ctor_get(v_cfg_1390_, 9);
v_backend_1402_ = lean_ctor_get_uint8(v_cfg_1390_, sizeof(void*)*13 + 2);
v_platformIndependent_1403_ = lean_ctor_get(v_cfg_1390_, 10);
v_dynlibs_1404_ = lean_ctor_get(v_cfg_1390_, 11);
v_plugins_1405_ = lean_ctor_get(v_cfg_1390_, 12);
v_requiresModuleSystem_1406_ = lean_ctor_get_uint8(v_cfg_1390_, sizeof(void*)*13 + 3);
v_allowNonModules_1407_ = lean_ctor_get_uint8(v_cfg_1390_, sizeof(void*)*13 + 4);
v_isSharedCheck_1414_ = !lean_is_exclusive(v_cfg_1390_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v_cfg_1390_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_plugins_1405_);
lean_inc(v_dynlibs_1404_);
lean_inc(v_platformIndependent_1403_);
lean_inc(v_weakLinkArgs_1401_);
lean_inc(v_moreLinkArgs_1400_);
lean_inc(v_moreLinkLibs_1399_);
lean_inc(v_moreLinkObjs_1398_);
lean_inc(v_weakLeancArgs_1397_);
lean_inc(v_moreServerOptions_1396_);
lean_inc(v_moreLeancArgs_1395_);
lean_inc(v_weakLeanArgs_1394_);
lean_inc(v_moreLeanArgs_1393_);
lean_inc(v_leanOptions_1392_);
lean_dec(v_cfg_1390_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_leanOptions_1392_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_moreLeanArgs_1393_);
lean_ctor_set(v_reuseFailAlloc_1413_, 2, v_weakLeanArgs_1394_);
lean_ctor_set(v_reuseFailAlloc_1413_, 3, v_moreLeancArgs_1395_);
lean_ctor_set(v_reuseFailAlloc_1413_, 4, v_moreServerOptions_1396_);
lean_ctor_set(v_reuseFailAlloc_1413_, 5, v_weakLeancArgs_1397_);
lean_ctor_set(v_reuseFailAlloc_1413_, 6, v_moreLinkObjs_1398_);
lean_ctor_set(v_reuseFailAlloc_1413_, 7, v_moreLinkLibs_1399_);
lean_ctor_set(v_reuseFailAlloc_1413_, 8, v_moreLinkArgs_1400_);
lean_ctor_set(v_reuseFailAlloc_1413_, 9, v_weakLinkArgs_1401_);
lean_ctor_set(v_reuseFailAlloc_1413_, 10, v_platformIndependent_1403_);
lean_ctor_set(v_reuseFailAlloc_1413_, 11, v_dynlibs_1404_);
lean_ctor_set(v_reuseFailAlloc_1413_, 12, v_plugins_1405_);
lean_ctor_set_uint8(v_reuseFailAlloc_1413_, sizeof(void*)*13, v_buildType_1391_);
lean_ctor_set_uint8(v_reuseFailAlloc_1413_, sizeof(void*)*13 + 2, v_backend_1402_);
lean_ctor_set_uint8(v_reuseFailAlloc_1413_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1406_);
lean_ctor_set_uint8(v_reuseFailAlloc_1413_, sizeof(void*)*13 + 4, v_allowNonModules_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*13 + 1, v_val_1389_);
return v___x_1412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__1___boxed(lean_object* v_val_1415_, lean_object* v_cfg_1416_){
_start:
{
uint8_t v_val_88__boxed_1417_; lean_object* v_res_1418_; 
v_val_88__boxed_1417_ = lean_unbox(v_val_1415_);
v_res_1418_ = l_Lake_LeanConfig_useZigCodegen___proj___lam__1(v_val_88__boxed_1417_, v_cfg_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__2(lean_object* v_f_1419_, lean_object* v_cfg_1420_){
_start:
{
uint8_t v_buildType_1421_; lean_object* v_leanOptions_1422_; lean_object* v_moreLeanArgs_1423_; lean_object* v_weakLeanArgs_1424_; uint8_t v_useZigCodegen_1425_; lean_object* v_moreLeancArgs_1426_; lean_object* v_moreServerOptions_1427_; lean_object* v_weakLeancArgs_1428_; lean_object* v_moreLinkObjs_1429_; lean_object* v_moreLinkLibs_1430_; lean_object* v_moreLinkArgs_1431_; lean_object* v_weakLinkArgs_1432_; uint8_t v_backend_1433_; lean_object* v_platformIndependent_1434_; lean_object* v_dynlibs_1435_; lean_object* v_plugins_1436_; uint8_t v_requiresModuleSystem_1437_; uint8_t v_allowNonModules_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1448_; 
v_buildType_1421_ = lean_ctor_get_uint8(v_cfg_1420_, sizeof(void*)*13);
v_leanOptions_1422_ = lean_ctor_get(v_cfg_1420_, 0);
v_moreLeanArgs_1423_ = lean_ctor_get(v_cfg_1420_, 1);
v_weakLeanArgs_1424_ = lean_ctor_get(v_cfg_1420_, 2);
v_useZigCodegen_1425_ = lean_ctor_get_uint8(v_cfg_1420_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1426_ = lean_ctor_get(v_cfg_1420_, 3);
v_moreServerOptions_1427_ = lean_ctor_get(v_cfg_1420_, 4);
v_weakLeancArgs_1428_ = lean_ctor_get(v_cfg_1420_, 5);
v_moreLinkObjs_1429_ = lean_ctor_get(v_cfg_1420_, 6);
v_moreLinkLibs_1430_ = lean_ctor_get(v_cfg_1420_, 7);
v_moreLinkArgs_1431_ = lean_ctor_get(v_cfg_1420_, 8);
v_weakLinkArgs_1432_ = lean_ctor_get(v_cfg_1420_, 9);
v_backend_1433_ = lean_ctor_get_uint8(v_cfg_1420_, sizeof(void*)*13 + 2);
v_platformIndependent_1434_ = lean_ctor_get(v_cfg_1420_, 10);
v_dynlibs_1435_ = lean_ctor_get(v_cfg_1420_, 11);
v_plugins_1436_ = lean_ctor_get(v_cfg_1420_, 12);
v_requiresModuleSystem_1437_ = lean_ctor_get_uint8(v_cfg_1420_, sizeof(void*)*13 + 3);
v_allowNonModules_1438_ = lean_ctor_get_uint8(v_cfg_1420_, sizeof(void*)*13 + 4);
v_isSharedCheck_1448_ = !lean_is_exclusive(v_cfg_1420_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1440_ = v_cfg_1420_;
v_isShared_1441_ = v_isSharedCheck_1448_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_plugins_1436_);
lean_inc(v_dynlibs_1435_);
lean_inc(v_platformIndependent_1434_);
lean_inc(v_weakLinkArgs_1432_);
lean_inc(v_moreLinkArgs_1431_);
lean_inc(v_moreLinkLibs_1430_);
lean_inc(v_moreLinkObjs_1429_);
lean_inc(v_weakLeancArgs_1428_);
lean_inc(v_moreServerOptions_1427_);
lean_inc(v_moreLeancArgs_1426_);
lean_inc(v_weakLeanArgs_1424_);
lean_inc(v_moreLeanArgs_1423_);
lean_inc(v_leanOptions_1422_);
lean_dec(v_cfg_1420_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1448_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1442_ = lean_box(v_useZigCodegen_1425_);
v___x_1443_ = lean_apply_1(v_f_1419_, v___x_1442_);
if (v_isShared_1441_ == 0)
{
v___x_1445_ = v___x_1440_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_leanOptions_1422_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_moreLeanArgs_1423_);
lean_ctor_set(v_reuseFailAlloc_1447_, 2, v_weakLeanArgs_1424_);
lean_ctor_set(v_reuseFailAlloc_1447_, 3, v_moreLeancArgs_1426_);
lean_ctor_set(v_reuseFailAlloc_1447_, 4, v_moreServerOptions_1427_);
lean_ctor_set(v_reuseFailAlloc_1447_, 5, v_weakLeancArgs_1428_);
lean_ctor_set(v_reuseFailAlloc_1447_, 6, v_moreLinkObjs_1429_);
lean_ctor_set(v_reuseFailAlloc_1447_, 7, v_moreLinkLibs_1430_);
lean_ctor_set(v_reuseFailAlloc_1447_, 8, v_moreLinkArgs_1431_);
lean_ctor_set(v_reuseFailAlloc_1447_, 9, v_weakLinkArgs_1432_);
lean_ctor_set(v_reuseFailAlloc_1447_, 10, v_platformIndependent_1434_);
lean_ctor_set(v_reuseFailAlloc_1447_, 11, v_dynlibs_1435_);
lean_ctor_set(v_reuseFailAlloc_1447_, 12, v_plugins_1436_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, sizeof(void*)*13, v_buildType_1421_);
v___x_1445_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
uint8_t v___x_1446_; 
v___x_1446_ = lean_unbox(v___x_1443_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*13 + 1, v___x_1446_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*13 + 2, v_backend_1433_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1437_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*13 + 4, v_allowNonModules_1438_);
return v___x_1445_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_useZigCodegen___proj___lam__3(lean_object* v_x_1449_){
_start:
{
uint8_t v___x_1450_; 
v___x_1450_ = 0;
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_useZigCodegen___proj___lam__3___boxed(lean_object* v_x_1451_){
_start:
{
uint8_t v_res_1452_; lean_object* v_r_1453_; 
v_res_1452_ = l_Lake_LeanConfig_useZigCodegen___proj___lam__3(v_x_1451_);
lean_dec_ref(v_x_1451_);
v_r_1453_ = lean_box(v_res_1452_);
return v_r_1453_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__0(lean_object* v_cfg_1465_){
_start:
{
lean_object* v_moreLeancArgs_1466_; 
v_moreLeancArgs_1466_ = lean_ctor_get(v_cfg_1465_, 3);
lean_inc_ref(v_moreLeancArgs_1466_);
return v_moreLeancArgs_1466_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__0___boxed(lean_object* v_cfg_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lake_LeanConfig_moreLeancArgs___proj___lam__0(v_cfg_1467_);
lean_dec_ref(v_cfg_1467_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__1(lean_object* v_val_1469_, lean_object* v_cfg_1470_){
_start:
{
uint8_t v_buildType_1471_; lean_object* v_leanOptions_1472_; lean_object* v_moreLeanArgs_1473_; lean_object* v_weakLeanArgs_1474_; uint8_t v_useZigCodegen_1475_; lean_object* v_moreServerOptions_1476_; lean_object* v_weakLeancArgs_1477_; lean_object* v_moreLinkObjs_1478_; lean_object* v_moreLinkLibs_1479_; lean_object* v_moreLinkArgs_1480_; lean_object* v_weakLinkArgs_1481_; uint8_t v_backend_1482_; lean_object* v_platformIndependent_1483_; lean_object* v_dynlibs_1484_; lean_object* v_plugins_1485_; uint8_t v_requiresModuleSystem_1486_; uint8_t v_allowNonModules_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
v_buildType_1471_ = lean_ctor_get_uint8(v_cfg_1470_, sizeof(void*)*13);
v_leanOptions_1472_ = lean_ctor_get(v_cfg_1470_, 0);
v_moreLeanArgs_1473_ = lean_ctor_get(v_cfg_1470_, 1);
v_weakLeanArgs_1474_ = lean_ctor_get(v_cfg_1470_, 2);
v_useZigCodegen_1475_ = lean_ctor_get_uint8(v_cfg_1470_, sizeof(void*)*13 + 1);
v_moreServerOptions_1476_ = lean_ctor_get(v_cfg_1470_, 4);
v_weakLeancArgs_1477_ = lean_ctor_get(v_cfg_1470_, 5);
v_moreLinkObjs_1478_ = lean_ctor_get(v_cfg_1470_, 6);
v_moreLinkLibs_1479_ = lean_ctor_get(v_cfg_1470_, 7);
v_moreLinkArgs_1480_ = lean_ctor_get(v_cfg_1470_, 8);
v_weakLinkArgs_1481_ = lean_ctor_get(v_cfg_1470_, 9);
v_backend_1482_ = lean_ctor_get_uint8(v_cfg_1470_, sizeof(void*)*13 + 2);
v_platformIndependent_1483_ = lean_ctor_get(v_cfg_1470_, 10);
v_dynlibs_1484_ = lean_ctor_get(v_cfg_1470_, 11);
v_plugins_1485_ = lean_ctor_get(v_cfg_1470_, 12);
v_requiresModuleSystem_1486_ = lean_ctor_get_uint8(v_cfg_1470_, sizeof(void*)*13 + 3);
v_allowNonModules_1487_ = lean_ctor_get_uint8(v_cfg_1470_, sizeof(void*)*13 + 4);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_cfg_1470_);
if (v_isSharedCheck_1494_ == 0)
{
lean_object* v_unused_1495_; 
v_unused_1495_ = lean_ctor_get(v_cfg_1470_, 3);
lean_dec(v_unused_1495_);
v___x_1489_ = v_cfg_1470_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_plugins_1485_);
lean_inc(v_dynlibs_1484_);
lean_inc(v_platformIndependent_1483_);
lean_inc(v_weakLinkArgs_1481_);
lean_inc(v_moreLinkArgs_1480_);
lean_inc(v_moreLinkLibs_1479_);
lean_inc(v_moreLinkObjs_1478_);
lean_inc(v_weakLeancArgs_1477_);
lean_inc(v_moreServerOptions_1476_);
lean_inc(v_weakLeanArgs_1474_);
lean_inc(v_moreLeanArgs_1473_);
lean_inc(v_leanOptions_1472_);
lean_dec(v_cfg_1470_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 3, v_val_1469_);
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_leanOptions_1472_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v_moreLeanArgs_1473_);
lean_ctor_set(v_reuseFailAlloc_1493_, 2, v_weakLeanArgs_1474_);
lean_ctor_set(v_reuseFailAlloc_1493_, 3, v_val_1469_);
lean_ctor_set(v_reuseFailAlloc_1493_, 4, v_moreServerOptions_1476_);
lean_ctor_set(v_reuseFailAlloc_1493_, 5, v_weakLeancArgs_1477_);
lean_ctor_set(v_reuseFailAlloc_1493_, 6, v_moreLinkObjs_1478_);
lean_ctor_set(v_reuseFailAlloc_1493_, 7, v_moreLinkLibs_1479_);
lean_ctor_set(v_reuseFailAlloc_1493_, 8, v_moreLinkArgs_1480_);
lean_ctor_set(v_reuseFailAlloc_1493_, 9, v_weakLinkArgs_1481_);
lean_ctor_set(v_reuseFailAlloc_1493_, 10, v_platformIndependent_1483_);
lean_ctor_set(v_reuseFailAlloc_1493_, 11, v_dynlibs_1484_);
lean_ctor_set(v_reuseFailAlloc_1493_, 12, v_plugins_1485_);
lean_ctor_set_uint8(v_reuseFailAlloc_1493_, sizeof(void*)*13, v_buildType_1471_);
lean_ctor_set_uint8(v_reuseFailAlloc_1493_, sizeof(void*)*13 + 1, v_useZigCodegen_1475_);
lean_ctor_set_uint8(v_reuseFailAlloc_1493_, sizeof(void*)*13 + 2, v_backend_1482_);
lean_ctor_set_uint8(v_reuseFailAlloc_1493_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1486_);
lean_ctor_set_uint8(v_reuseFailAlloc_1493_, sizeof(void*)*13 + 4, v_allowNonModules_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLeancArgs___proj___lam__2(lean_object* v_f_1496_, lean_object* v_cfg_1497_){
_start:
{
uint8_t v_buildType_1498_; lean_object* v_leanOptions_1499_; lean_object* v_moreLeanArgs_1500_; lean_object* v_weakLeanArgs_1501_; uint8_t v_useZigCodegen_1502_; lean_object* v_moreLeancArgs_1503_; lean_object* v_moreServerOptions_1504_; lean_object* v_weakLeancArgs_1505_; lean_object* v_moreLinkObjs_1506_; lean_object* v_moreLinkLibs_1507_; lean_object* v_moreLinkArgs_1508_; lean_object* v_weakLinkArgs_1509_; uint8_t v_backend_1510_; lean_object* v_platformIndependent_1511_; lean_object* v_dynlibs_1512_; lean_object* v_plugins_1513_; uint8_t v_requiresModuleSystem_1514_; uint8_t v_allowNonModules_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1523_; 
v_buildType_1498_ = lean_ctor_get_uint8(v_cfg_1497_, sizeof(void*)*13);
v_leanOptions_1499_ = lean_ctor_get(v_cfg_1497_, 0);
v_moreLeanArgs_1500_ = lean_ctor_get(v_cfg_1497_, 1);
v_weakLeanArgs_1501_ = lean_ctor_get(v_cfg_1497_, 2);
v_useZigCodegen_1502_ = lean_ctor_get_uint8(v_cfg_1497_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1503_ = lean_ctor_get(v_cfg_1497_, 3);
v_moreServerOptions_1504_ = lean_ctor_get(v_cfg_1497_, 4);
v_weakLeancArgs_1505_ = lean_ctor_get(v_cfg_1497_, 5);
v_moreLinkObjs_1506_ = lean_ctor_get(v_cfg_1497_, 6);
v_moreLinkLibs_1507_ = lean_ctor_get(v_cfg_1497_, 7);
v_moreLinkArgs_1508_ = lean_ctor_get(v_cfg_1497_, 8);
v_weakLinkArgs_1509_ = lean_ctor_get(v_cfg_1497_, 9);
v_backend_1510_ = lean_ctor_get_uint8(v_cfg_1497_, sizeof(void*)*13 + 2);
v_platformIndependent_1511_ = lean_ctor_get(v_cfg_1497_, 10);
v_dynlibs_1512_ = lean_ctor_get(v_cfg_1497_, 11);
v_plugins_1513_ = lean_ctor_get(v_cfg_1497_, 12);
v_requiresModuleSystem_1514_ = lean_ctor_get_uint8(v_cfg_1497_, sizeof(void*)*13 + 3);
v_allowNonModules_1515_ = lean_ctor_get_uint8(v_cfg_1497_, sizeof(void*)*13 + 4);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_cfg_1497_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1517_ = v_cfg_1497_;
v_isShared_1518_ = v_isSharedCheck_1523_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_plugins_1513_);
lean_inc(v_dynlibs_1512_);
lean_inc(v_platformIndependent_1511_);
lean_inc(v_weakLinkArgs_1509_);
lean_inc(v_moreLinkArgs_1508_);
lean_inc(v_moreLinkLibs_1507_);
lean_inc(v_moreLinkObjs_1506_);
lean_inc(v_weakLeancArgs_1505_);
lean_inc(v_moreServerOptions_1504_);
lean_inc(v_moreLeancArgs_1503_);
lean_inc(v_weakLeanArgs_1501_);
lean_inc(v_moreLeanArgs_1500_);
lean_inc(v_leanOptions_1499_);
lean_dec(v_cfg_1497_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1523_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1519_ = lean_apply_1(v_f_1496_, v_moreLeancArgs_1503_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 3, v___x_1519_);
v___x_1521_ = v___x_1517_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_leanOptions_1499_);
lean_ctor_set(v_reuseFailAlloc_1522_, 1, v_moreLeanArgs_1500_);
lean_ctor_set(v_reuseFailAlloc_1522_, 2, v_weakLeanArgs_1501_);
lean_ctor_set(v_reuseFailAlloc_1522_, 3, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1522_, 4, v_moreServerOptions_1504_);
lean_ctor_set(v_reuseFailAlloc_1522_, 5, v_weakLeancArgs_1505_);
lean_ctor_set(v_reuseFailAlloc_1522_, 6, v_moreLinkObjs_1506_);
lean_ctor_set(v_reuseFailAlloc_1522_, 7, v_moreLinkLibs_1507_);
lean_ctor_set(v_reuseFailAlloc_1522_, 8, v_moreLinkArgs_1508_);
lean_ctor_set(v_reuseFailAlloc_1522_, 9, v_weakLinkArgs_1509_);
lean_ctor_set(v_reuseFailAlloc_1522_, 10, v_platformIndependent_1511_);
lean_ctor_set(v_reuseFailAlloc_1522_, 11, v_dynlibs_1512_);
lean_ctor_set(v_reuseFailAlloc_1522_, 12, v_plugins_1513_);
lean_ctor_set_uint8(v_reuseFailAlloc_1522_, sizeof(void*)*13, v_buildType_1498_);
lean_ctor_set_uint8(v_reuseFailAlloc_1522_, sizeof(void*)*13 + 1, v_useZigCodegen_1502_);
lean_ctor_set_uint8(v_reuseFailAlloc_1522_, sizeof(void*)*13 + 2, v_backend_1510_);
lean_ctor_set_uint8(v_reuseFailAlloc_1522_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1514_);
lean_ctor_set_uint8(v_reuseFailAlloc_1522_, sizeof(void*)*13 + 4, v_allowNonModules_1515_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__0(lean_object* v_cfg_1534_){
_start:
{
lean_object* v_moreServerOptions_1535_; 
v_moreServerOptions_1535_ = lean_ctor_get(v_cfg_1534_, 4);
lean_inc_ref(v_moreServerOptions_1535_);
return v_moreServerOptions_1535_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__0___boxed(lean_object* v_cfg_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Lake_LeanConfig_moreServerOptions___proj___lam__0(v_cfg_1536_);
lean_dec_ref(v_cfg_1536_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__1(lean_object* v_val_1538_, lean_object* v_cfg_1539_){
_start:
{
uint8_t v_buildType_1540_; lean_object* v_leanOptions_1541_; lean_object* v_moreLeanArgs_1542_; lean_object* v_weakLeanArgs_1543_; uint8_t v_useZigCodegen_1544_; lean_object* v_moreLeancArgs_1545_; lean_object* v_weakLeancArgs_1546_; lean_object* v_moreLinkObjs_1547_; lean_object* v_moreLinkLibs_1548_; lean_object* v_moreLinkArgs_1549_; lean_object* v_weakLinkArgs_1550_; uint8_t v_backend_1551_; lean_object* v_platformIndependent_1552_; lean_object* v_dynlibs_1553_; lean_object* v_plugins_1554_; uint8_t v_requiresModuleSystem_1555_; uint8_t v_allowNonModules_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
v_buildType_1540_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*13);
v_leanOptions_1541_ = lean_ctor_get(v_cfg_1539_, 0);
v_moreLeanArgs_1542_ = lean_ctor_get(v_cfg_1539_, 1);
v_weakLeanArgs_1543_ = lean_ctor_get(v_cfg_1539_, 2);
v_useZigCodegen_1544_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1545_ = lean_ctor_get(v_cfg_1539_, 3);
v_weakLeancArgs_1546_ = lean_ctor_get(v_cfg_1539_, 5);
v_moreLinkObjs_1547_ = lean_ctor_get(v_cfg_1539_, 6);
v_moreLinkLibs_1548_ = lean_ctor_get(v_cfg_1539_, 7);
v_moreLinkArgs_1549_ = lean_ctor_get(v_cfg_1539_, 8);
v_weakLinkArgs_1550_ = lean_ctor_get(v_cfg_1539_, 9);
v_backend_1551_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*13 + 2);
v_platformIndependent_1552_ = lean_ctor_get(v_cfg_1539_, 10);
v_dynlibs_1553_ = lean_ctor_get(v_cfg_1539_, 11);
v_plugins_1554_ = lean_ctor_get(v_cfg_1539_, 12);
v_requiresModuleSystem_1555_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*13 + 3);
v_allowNonModules_1556_ = lean_ctor_get_uint8(v_cfg_1539_, sizeof(void*)*13 + 4);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_cfg_1539_);
if (v_isSharedCheck_1563_ == 0)
{
lean_object* v_unused_1564_; 
v_unused_1564_ = lean_ctor_get(v_cfg_1539_, 4);
lean_dec(v_unused_1564_);
v___x_1558_ = v_cfg_1539_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_plugins_1554_);
lean_inc(v_dynlibs_1553_);
lean_inc(v_platformIndependent_1552_);
lean_inc(v_weakLinkArgs_1550_);
lean_inc(v_moreLinkArgs_1549_);
lean_inc(v_moreLinkLibs_1548_);
lean_inc(v_moreLinkObjs_1547_);
lean_inc(v_weakLeancArgs_1546_);
lean_inc(v_moreLeancArgs_1545_);
lean_inc(v_weakLeanArgs_1543_);
lean_inc(v_moreLeanArgs_1542_);
lean_inc(v_leanOptions_1541_);
lean_dec(v_cfg_1539_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 4, v_val_1538_);
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_leanOptions_1541_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v_moreLeanArgs_1542_);
lean_ctor_set(v_reuseFailAlloc_1562_, 2, v_weakLeanArgs_1543_);
lean_ctor_set(v_reuseFailAlloc_1562_, 3, v_moreLeancArgs_1545_);
lean_ctor_set(v_reuseFailAlloc_1562_, 4, v_val_1538_);
lean_ctor_set(v_reuseFailAlloc_1562_, 5, v_weakLeancArgs_1546_);
lean_ctor_set(v_reuseFailAlloc_1562_, 6, v_moreLinkObjs_1547_);
lean_ctor_set(v_reuseFailAlloc_1562_, 7, v_moreLinkLibs_1548_);
lean_ctor_set(v_reuseFailAlloc_1562_, 8, v_moreLinkArgs_1549_);
lean_ctor_set(v_reuseFailAlloc_1562_, 9, v_weakLinkArgs_1550_);
lean_ctor_set(v_reuseFailAlloc_1562_, 10, v_platformIndependent_1552_);
lean_ctor_set(v_reuseFailAlloc_1562_, 11, v_dynlibs_1553_);
lean_ctor_set(v_reuseFailAlloc_1562_, 12, v_plugins_1554_);
lean_ctor_set_uint8(v_reuseFailAlloc_1562_, sizeof(void*)*13, v_buildType_1540_);
lean_ctor_set_uint8(v_reuseFailAlloc_1562_, sizeof(void*)*13 + 1, v_useZigCodegen_1544_);
lean_ctor_set_uint8(v_reuseFailAlloc_1562_, sizeof(void*)*13 + 2, v_backend_1551_);
lean_ctor_set_uint8(v_reuseFailAlloc_1562_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1555_);
lean_ctor_set_uint8(v_reuseFailAlloc_1562_, sizeof(void*)*13 + 4, v_allowNonModules_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreServerOptions___proj___lam__2(lean_object* v_f_1565_, lean_object* v_cfg_1566_){
_start:
{
uint8_t v_buildType_1567_; lean_object* v_leanOptions_1568_; lean_object* v_moreLeanArgs_1569_; lean_object* v_weakLeanArgs_1570_; uint8_t v_useZigCodegen_1571_; lean_object* v_moreLeancArgs_1572_; lean_object* v_moreServerOptions_1573_; lean_object* v_weakLeancArgs_1574_; lean_object* v_moreLinkObjs_1575_; lean_object* v_moreLinkLibs_1576_; lean_object* v_moreLinkArgs_1577_; lean_object* v_weakLinkArgs_1578_; uint8_t v_backend_1579_; lean_object* v_platformIndependent_1580_; lean_object* v_dynlibs_1581_; lean_object* v_plugins_1582_; uint8_t v_requiresModuleSystem_1583_; uint8_t v_allowNonModules_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1592_; 
v_buildType_1567_ = lean_ctor_get_uint8(v_cfg_1566_, sizeof(void*)*13);
v_leanOptions_1568_ = lean_ctor_get(v_cfg_1566_, 0);
v_moreLeanArgs_1569_ = lean_ctor_get(v_cfg_1566_, 1);
v_weakLeanArgs_1570_ = lean_ctor_get(v_cfg_1566_, 2);
v_useZigCodegen_1571_ = lean_ctor_get_uint8(v_cfg_1566_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1572_ = lean_ctor_get(v_cfg_1566_, 3);
v_moreServerOptions_1573_ = lean_ctor_get(v_cfg_1566_, 4);
v_weakLeancArgs_1574_ = lean_ctor_get(v_cfg_1566_, 5);
v_moreLinkObjs_1575_ = lean_ctor_get(v_cfg_1566_, 6);
v_moreLinkLibs_1576_ = lean_ctor_get(v_cfg_1566_, 7);
v_moreLinkArgs_1577_ = lean_ctor_get(v_cfg_1566_, 8);
v_weakLinkArgs_1578_ = lean_ctor_get(v_cfg_1566_, 9);
v_backend_1579_ = lean_ctor_get_uint8(v_cfg_1566_, sizeof(void*)*13 + 2);
v_platformIndependent_1580_ = lean_ctor_get(v_cfg_1566_, 10);
v_dynlibs_1581_ = lean_ctor_get(v_cfg_1566_, 11);
v_plugins_1582_ = lean_ctor_get(v_cfg_1566_, 12);
v_requiresModuleSystem_1583_ = lean_ctor_get_uint8(v_cfg_1566_, sizeof(void*)*13 + 3);
v_allowNonModules_1584_ = lean_ctor_get_uint8(v_cfg_1566_, sizeof(void*)*13 + 4);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_cfg_1566_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1586_ = v_cfg_1566_;
v_isShared_1587_ = v_isSharedCheck_1592_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_plugins_1582_);
lean_inc(v_dynlibs_1581_);
lean_inc(v_platformIndependent_1580_);
lean_inc(v_weakLinkArgs_1578_);
lean_inc(v_moreLinkArgs_1577_);
lean_inc(v_moreLinkLibs_1576_);
lean_inc(v_moreLinkObjs_1575_);
lean_inc(v_weakLeancArgs_1574_);
lean_inc(v_moreServerOptions_1573_);
lean_inc(v_moreLeancArgs_1572_);
lean_inc(v_weakLeanArgs_1570_);
lean_inc(v_moreLeanArgs_1569_);
lean_inc(v_leanOptions_1568_);
lean_dec(v_cfg_1566_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1592_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1588_ = lean_apply_1(v_f_1565_, v_moreServerOptions_1573_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 4, v___x_1588_);
v___x_1590_ = v___x_1586_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v_leanOptions_1568_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_moreLeanArgs_1569_);
lean_ctor_set(v_reuseFailAlloc_1591_, 2, v_weakLeanArgs_1570_);
lean_ctor_set(v_reuseFailAlloc_1591_, 3, v_moreLeancArgs_1572_);
lean_ctor_set(v_reuseFailAlloc_1591_, 4, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1591_, 5, v_weakLeancArgs_1574_);
lean_ctor_set(v_reuseFailAlloc_1591_, 6, v_moreLinkObjs_1575_);
lean_ctor_set(v_reuseFailAlloc_1591_, 7, v_moreLinkLibs_1576_);
lean_ctor_set(v_reuseFailAlloc_1591_, 8, v_moreLinkArgs_1577_);
lean_ctor_set(v_reuseFailAlloc_1591_, 9, v_weakLinkArgs_1578_);
lean_ctor_set(v_reuseFailAlloc_1591_, 10, v_platformIndependent_1580_);
lean_ctor_set(v_reuseFailAlloc_1591_, 11, v_dynlibs_1581_);
lean_ctor_set(v_reuseFailAlloc_1591_, 12, v_plugins_1582_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13, v_buildType_1567_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 1, v_useZigCodegen_1571_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 2, v_backend_1579_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1583_);
lean_ctor_set_uint8(v_reuseFailAlloc_1591_, sizeof(void*)*13 + 4, v_allowNonModules_1584_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__0(lean_object* v_cfg_1603_){
_start:
{
lean_object* v_weakLeancArgs_1604_; 
v_weakLeancArgs_1604_ = lean_ctor_get(v_cfg_1603_, 5);
lean_inc_ref(v_weakLeancArgs_1604_);
return v_weakLeancArgs_1604_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__0___boxed(lean_object* v_cfg_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l_Lake_LeanConfig_weakLeancArgs___proj___lam__0(v_cfg_1605_);
lean_dec_ref(v_cfg_1605_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__1(lean_object* v_val_1607_, lean_object* v_cfg_1608_){
_start:
{
uint8_t v_buildType_1609_; lean_object* v_leanOptions_1610_; lean_object* v_moreLeanArgs_1611_; lean_object* v_weakLeanArgs_1612_; uint8_t v_useZigCodegen_1613_; lean_object* v_moreLeancArgs_1614_; lean_object* v_moreServerOptions_1615_; lean_object* v_moreLinkObjs_1616_; lean_object* v_moreLinkLibs_1617_; lean_object* v_moreLinkArgs_1618_; lean_object* v_weakLinkArgs_1619_; uint8_t v_backend_1620_; lean_object* v_platformIndependent_1621_; lean_object* v_dynlibs_1622_; lean_object* v_plugins_1623_; uint8_t v_requiresModuleSystem_1624_; uint8_t v_allowNonModules_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
v_buildType_1609_ = lean_ctor_get_uint8(v_cfg_1608_, sizeof(void*)*13);
v_leanOptions_1610_ = lean_ctor_get(v_cfg_1608_, 0);
v_moreLeanArgs_1611_ = lean_ctor_get(v_cfg_1608_, 1);
v_weakLeanArgs_1612_ = lean_ctor_get(v_cfg_1608_, 2);
v_useZigCodegen_1613_ = lean_ctor_get_uint8(v_cfg_1608_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1614_ = lean_ctor_get(v_cfg_1608_, 3);
v_moreServerOptions_1615_ = lean_ctor_get(v_cfg_1608_, 4);
v_moreLinkObjs_1616_ = lean_ctor_get(v_cfg_1608_, 6);
v_moreLinkLibs_1617_ = lean_ctor_get(v_cfg_1608_, 7);
v_moreLinkArgs_1618_ = lean_ctor_get(v_cfg_1608_, 8);
v_weakLinkArgs_1619_ = lean_ctor_get(v_cfg_1608_, 9);
v_backend_1620_ = lean_ctor_get_uint8(v_cfg_1608_, sizeof(void*)*13 + 2);
v_platformIndependent_1621_ = lean_ctor_get(v_cfg_1608_, 10);
v_dynlibs_1622_ = lean_ctor_get(v_cfg_1608_, 11);
v_plugins_1623_ = lean_ctor_get(v_cfg_1608_, 12);
v_requiresModuleSystem_1624_ = lean_ctor_get_uint8(v_cfg_1608_, sizeof(void*)*13 + 3);
v_allowNonModules_1625_ = lean_ctor_get_uint8(v_cfg_1608_, sizeof(void*)*13 + 4);
v_isSharedCheck_1632_ = !lean_is_exclusive(v_cfg_1608_);
if (v_isSharedCheck_1632_ == 0)
{
lean_object* v_unused_1633_; 
v_unused_1633_ = lean_ctor_get(v_cfg_1608_, 5);
lean_dec(v_unused_1633_);
v___x_1627_ = v_cfg_1608_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_plugins_1623_);
lean_inc(v_dynlibs_1622_);
lean_inc(v_platformIndependent_1621_);
lean_inc(v_weakLinkArgs_1619_);
lean_inc(v_moreLinkArgs_1618_);
lean_inc(v_moreLinkLibs_1617_);
lean_inc(v_moreLinkObjs_1616_);
lean_inc(v_moreServerOptions_1615_);
lean_inc(v_moreLeancArgs_1614_);
lean_inc(v_weakLeanArgs_1612_);
lean_inc(v_moreLeanArgs_1611_);
lean_inc(v_leanOptions_1610_);
lean_dec(v_cfg_1608_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 5, v_val_1607_);
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_leanOptions_1610_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v_moreLeanArgs_1611_);
lean_ctor_set(v_reuseFailAlloc_1631_, 2, v_weakLeanArgs_1612_);
lean_ctor_set(v_reuseFailAlloc_1631_, 3, v_moreLeancArgs_1614_);
lean_ctor_set(v_reuseFailAlloc_1631_, 4, v_moreServerOptions_1615_);
lean_ctor_set(v_reuseFailAlloc_1631_, 5, v_val_1607_);
lean_ctor_set(v_reuseFailAlloc_1631_, 6, v_moreLinkObjs_1616_);
lean_ctor_set(v_reuseFailAlloc_1631_, 7, v_moreLinkLibs_1617_);
lean_ctor_set(v_reuseFailAlloc_1631_, 8, v_moreLinkArgs_1618_);
lean_ctor_set(v_reuseFailAlloc_1631_, 9, v_weakLinkArgs_1619_);
lean_ctor_set(v_reuseFailAlloc_1631_, 10, v_platformIndependent_1621_);
lean_ctor_set(v_reuseFailAlloc_1631_, 11, v_dynlibs_1622_);
lean_ctor_set(v_reuseFailAlloc_1631_, 12, v_plugins_1623_);
lean_ctor_set_uint8(v_reuseFailAlloc_1631_, sizeof(void*)*13, v_buildType_1609_);
lean_ctor_set_uint8(v_reuseFailAlloc_1631_, sizeof(void*)*13 + 1, v_useZigCodegen_1613_);
lean_ctor_set_uint8(v_reuseFailAlloc_1631_, sizeof(void*)*13 + 2, v_backend_1620_);
lean_ctor_set_uint8(v_reuseFailAlloc_1631_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1624_);
lean_ctor_set_uint8(v_reuseFailAlloc_1631_, sizeof(void*)*13 + 4, v_allowNonModules_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLeancArgs___proj___lam__2(lean_object* v_f_1634_, lean_object* v_cfg_1635_){
_start:
{
uint8_t v_buildType_1636_; lean_object* v_leanOptions_1637_; lean_object* v_moreLeanArgs_1638_; lean_object* v_weakLeanArgs_1639_; uint8_t v_useZigCodegen_1640_; lean_object* v_moreLeancArgs_1641_; lean_object* v_moreServerOptions_1642_; lean_object* v_weakLeancArgs_1643_; lean_object* v_moreLinkObjs_1644_; lean_object* v_moreLinkLibs_1645_; lean_object* v_moreLinkArgs_1646_; lean_object* v_weakLinkArgs_1647_; uint8_t v_backend_1648_; lean_object* v_platformIndependent_1649_; lean_object* v_dynlibs_1650_; lean_object* v_plugins_1651_; uint8_t v_requiresModuleSystem_1652_; uint8_t v_allowNonModules_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1661_; 
v_buildType_1636_ = lean_ctor_get_uint8(v_cfg_1635_, sizeof(void*)*13);
v_leanOptions_1637_ = lean_ctor_get(v_cfg_1635_, 0);
v_moreLeanArgs_1638_ = lean_ctor_get(v_cfg_1635_, 1);
v_weakLeanArgs_1639_ = lean_ctor_get(v_cfg_1635_, 2);
v_useZigCodegen_1640_ = lean_ctor_get_uint8(v_cfg_1635_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1641_ = lean_ctor_get(v_cfg_1635_, 3);
v_moreServerOptions_1642_ = lean_ctor_get(v_cfg_1635_, 4);
v_weakLeancArgs_1643_ = lean_ctor_get(v_cfg_1635_, 5);
v_moreLinkObjs_1644_ = lean_ctor_get(v_cfg_1635_, 6);
v_moreLinkLibs_1645_ = lean_ctor_get(v_cfg_1635_, 7);
v_moreLinkArgs_1646_ = lean_ctor_get(v_cfg_1635_, 8);
v_weakLinkArgs_1647_ = lean_ctor_get(v_cfg_1635_, 9);
v_backend_1648_ = lean_ctor_get_uint8(v_cfg_1635_, sizeof(void*)*13 + 2);
v_platformIndependent_1649_ = lean_ctor_get(v_cfg_1635_, 10);
v_dynlibs_1650_ = lean_ctor_get(v_cfg_1635_, 11);
v_plugins_1651_ = lean_ctor_get(v_cfg_1635_, 12);
v_requiresModuleSystem_1652_ = lean_ctor_get_uint8(v_cfg_1635_, sizeof(void*)*13 + 3);
v_allowNonModules_1653_ = lean_ctor_get_uint8(v_cfg_1635_, sizeof(void*)*13 + 4);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_cfg_1635_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1655_ = v_cfg_1635_;
v_isShared_1656_ = v_isSharedCheck_1661_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_plugins_1651_);
lean_inc(v_dynlibs_1650_);
lean_inc(v_platformIndependent_1649_);
lean_inc(v_weakLinkArgs_1647_);
lean_inc(v_moreLinkArgs_1646_);
lean_inc(v_moreLinkLibs_1645_);
lean_inc(v_moreLinkObjs_1644_);
lean_inc(v_weakLeancArgs_1643_);
lean_inc(v_moreServerOptions_1642_);
lean_inc(v_moreLeancArgs_1641_);
lean_inc(v_weakLeanArgs_1639_);
lean_inc(v_moreLeanArgs_1638_);
lean_inc(v_leanOptions_1637_);
lean_dec(v_cfg_1635_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1661_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1657_; lean_object* v___x_1659_; 
v___x_1657_ = lean_apply_1(v_f_1634_, v_weakLeancArgs_1643_);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 5, v___x_1657_);
v___x_1659_ = v___x_1655_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_leanOptions_1637_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_moreLeanArgs_1638_);
lean_ctor_set(v_reuseFailAlloc_1660_, 2, v_weakLeanArgs_1639_);
lean_ctor_set(v_reuseFailAlloc_1660_, 3, v_moreLeancArgs_1641_);
lean_ctor_set(v_reuseFailAlloc_1660_, 4, v_moreServerOptions_1642_);
lean_ctor_set(v_reuseFailAlloc_1660_, 5, v___x_1657_);
lean_ctor_set(v_reuseFailAlloc_1660_, 6, v_moreLinkObjs_1644_);
lean_ctor_set(v_reuseFailAlloc_1660_, 7, v_moreLinkLibs_1645_);
lean_ctor_set(v_reuseFailAlloc_1660_, 8, v_moreLinkArgs_1646_);
lean_ctor_set(v_reuseFailAlloc_1660_, 9, v_weakLinkArgs_1647_);
lean_ctor_set(v_reuseFailAlloc_1660_, 10, v_platformIndependent_1649_);
lean_ctor_set(v_reuseFailAlloc_1660_, 11, v_dynlibs_1650_);
lean_ctor_set(v_reuseFailAlloc_1660_, 12, v_plugins_1651_);
lean_ctor_set_uint8(v_reuseFailAlloc_1660_, sizeof(void*)*13, v_buildType_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1660_, sizeof(void*)*13 + 1, v_useZigCodegen_1640_);
lean_ctor_set_uint8(v_reuseFailAlloc_1660_, sizeof(void*)*13 + 2, v_backend_1648_);
lean_ctor_set_uint8(v_reuseFailAlloc_1660_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1652_);
lean_ctor_set_uint8(v_reuseFailAlloc_1660_, sizeof(void*)*13 + 4, v_allowNonModules_1653_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__0(lean_object* v_cfg_1672_){
_start:
{
lean_object* v_moreLinkObjs_1673_; 
v_moreLinkObjs_1673_ = lean_ctor_get(v_cfg_1672_, 6);
lean_inc_ref(v_moreLinkObjs_1673_);
return v_moreLinkObjs_1673_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__0___boxed(lean_object* v_cfg_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lake_LeanConfig_moreLinkObjs___proj___lam__0(v_cfg_1674_);
lean_dec_ref(v_cfg_1674_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__1(lean_object* v_val_1676_, lean_object* v_cfg_1677_){
_start:
{
uint8_t v_buildType_1678_; lean_object* v_leanOptions_1679_; lean_object* v_moreLeanArgs_1680_; lean_object* v_weakLeanArgs_1681_; uint8_t v_useZigCodegen_1682_; lean_object* v_moreLeancArgs_1683_; lean_object* v_moreServerOptions_1684_; lean_object* v_weakLeancArgs_1685_; lean_object* v_moreLinkLibs_1686_; lean_object* v_moreLinkArgs_1687_; lean_object* v_weakLinkArgs_1688_; uint8_t v_backend_1689_; lean_object* v_platformIndependent_1690_; lean_object* v_dynlibs_1691_; lean_object* v_plugins_1692_; uint8_t v_requiresModuleSystem_1693_; uint8_t v_allowNonModules_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
v_buildType_1678_ = lean_ctor_get_uint8(v_cfg_1677_, sizeof(void*)*13);
v_leanOptions_1679_ = lean_ctor_get(v_cfg_1677_, 0);
v_moreLeanArgs_1680_ = lean_ctor_get(v_cfg_1677_, 1);
v_weakLeanArgs_1681_ = lean_ctor_get(v_cfg_1677_, 2);
v_useZigCodegen_1682_ = lean_ctor_get_uint8(v_cfg_1677_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1683_ = lean_ctor_get(v_cfg_1677_, 3);
v_moreServerOptions_1684_ = lean_ctor_get(v_cfg_1677_, 4);
v_weakLeancArgs_1685_ = lean_ctor_get(v_cfg_1677_, 5);
v_moreLinkLibs_1686_ = lean_ctor_get(v_cfg_1677_, 7);
v_moreLinkArgs_1687_ = lean_ctor_get(v_cfg_1677_, 8);
v_weakLinkArgs_1688_ = lean_ctor_get(v_cfg_1677_, 9);
v_backend_1689_ = lean_ctor_get_uint8(v_cfg_1677_, sizeof(void*)*13 + 2);
v_platformIndependent_1690_ = lean_ctor_get(v_cfg_1677_, 10);
v_dynlibs_1691_ = lean_ctor_get(v_cfg_1677_, 11);
v_plugins_1692_ = lean_ctor_get(v_cfg_1677_, 12);
v_requiresModuleSystem_1693_ = lean_ctor_get_uint8(v_cfg_1677_, sizeof(void*)*13 + 3);
v_allowNonModules_1694_ = lean_ctor_get_uint8(v_cfg_1677_, sizeof(void*)*13 + 4);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_cfg_1677_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; 
v_unused_1702_ = lean_ctor_get(v_cfg_1677_, 6);
lean_dec(v_unused_1702_);
v___x_1696_ = v_cfg_1677_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_plugins_1692_);
lean_inc(v_dynlibs_1691_);
lean_inc(v_platformIndependent_1690_);
lean_inc(v_weakLinkArgs_1688_);
lean_inc(v_moreLinkArgs_1687_);
lean_inc(v_moreLinkLibs_1686_);
lean_inc(v_weakLeancArgs_1685_);
lean_inc(v_moreServerOptions_1684_);
lean_inc(v_moreLeancArgs_1683_);
lean_inc(v_weakLeanArgs_1681_);
lean_inc(v_moreLeanArgs_1680_);
lean_inc(v_leanOptions_1679_);
lean_dec(v_cfg_1677_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 6, v_val_1676_);
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_leanOptions_1679_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_moreLeanArgs_1680_);
lean_ctor_set(v_reuseFailAlloc_1700_, 2, v_weakLeanArgs_1681_);
lean_ctor_set(v_reuseFailAlloc_1700_, 3, v_moreLeancArgs_1683_);
lean_ctor_set(v_reuseFailAlloc_1700_, 4, v_moreServerOptions_1684_);
lean_ctor_set(v_reuseFailAlloc_1700_, 5, v_weakLeancArgs_1685_);
lean_ctor_set(v_reuseFailAlloc_1700_, 6, v_val_1676_);
lean_ctor_set(v_reuseFailAlloc_1700_, 7, v_moreLinkLibs_1686_);
lean_ctor_set(v_reuseFailAlloc_1700_, 8, v_moreLinkArgs_1687_);
lean_ctor_set(v_reuseFailAlloc_1700_, 9, v_weakLinkArgs_1688_);
lean_ctor_set(v_reuseFailAlloc_1700_, 10, v_platformIndependent_1690_);
lean_ctor_set(v_reuseFailAlloc_1700_, 11, v_dynlibs_1691_);
lean_ctor_set(v_reuseFailAlloc_1700_, 12, v_plugins_1692_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*13, v_buildType_1678_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*13 + 1, v_useZigCodegen_1682_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*13 + 2, v_backend_1689_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1693_);
lean_ctor_set_uint8(v_reuseFailAlloc_1700_, sizeof(void*)*13 + 4, v_allowNonModules_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__2(lean_object* v_f_1703_, lean_object* v_cfg_1704_){
_start:
{
uint8_t v_buildType_1705_; lean_object* v_leanOptions_1706_; lean_object* v_moreLeanArgs_1707_; lean_object* v_weakLeanArgs_1708_; uint8_t v_useZigCodegen_1709_; lean_object* v_moreLeancArgs_1710_; lean_object* v_moreServerOptions_1711_; lean_object* v_weakLeancArgs_1712_; lean_object* v_moreLinkObjs_1713_; lean_object* v_moreLinkLibs_1714_; lean_object* v_moreLinkArgs_1715_; lean_object* v_weakLinkArgs_1716_; uint8_t v_backend_1717_; lean_object* v_platformIndependent_1718_; lean_object* v_dynlibs_1719_; lean_object* v_plugins_1720_; uint8_t v_requiresModuleSystem_1721_; uint8_t v_allowNonModules_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1730_; 
v_buildType_1705_ = lean_ctor_get_uint8(v_cfg_1704_, sizeof(void*)*13);
v_leanOptions_1706_ = lean_ctor_get(v_cfg_1704_, 0);
v_moreLeanArgs_1707_ = lean_ctor_get(v_cfg_1704_, 1);
v_weakLeanArgs_1708_ = lean_ctor_get(v_cfg_1704_, 2);
v_useZigCodegen_1709_ = lean_ctor_get_uint8(v_cfg_1704_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1710_ = lean_ctor_get(v_cfg_1704_, 3);
v_moreServerOptions_1711_ = lean_ctor_get(v_cfg_1704_, 4);
v_weakLeancArgs_1712_ = lean_ctor_get(v_cfg_1704_, 5);
v_moreLinkObjs_1713_ = lean_ctor_get(v_cfg_1704_, 6);
v_moreLinkLibs_1714_ = lean_ctor_get(v_cfg_1704_, 7);
v_moreLinkArgs_1715_ = lean_ctor_get(v_cfg_1704_, 8);
v_weakLinkArgs_1716_ = lean_ctor_get(v_cfg_1704_, 9);
v_backend_1717_ = lean_ctor_get_uint8(v_cfg_1704_, sizeof(void*)*13 + 2);
v_platformIndependent_1718_ = lean_ctor_get(v_cfg_1704_, 10);
v_dynlibs_1719_ = lean_ctor_get(v_cfg_1704_, 11);
v_plugins_1720_ = lean_ctor_get(v_cfg_1704_, 12);
v_requiresModuleSystem_1721_ = lean_ctor_get_uint8(v_cfg_1704_, sizeof(void*)*13 + 3);
v_allowNonModules_1722_ = lean_ctor_get_uint8(v_cfg_1704_, sizeof(void*)*13 + 4);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_cfg_1704_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1724_ = v_cfg_1704_;
v_isShared_1725_ = v_isSharedCheck_1730_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_plugins_1720_);
lean_inc(v_dynlibs_1719_);
lean_inc(v_platformIndependent_1718_);
lean_inc(v_weakLinkArgs_1716_);
lean_inc(v_moreLinkArgs_1715_);
lean_inc(v_moreLinkLibs_1714_);
lean_inc(v_moreLinkObjs_1713_);
lean_inc(v_weakLeancArgs_1712_);
lean_inc(v_moreServerOptions_1711_);
lean_inc(v_moreLeancArgs_1710_);
lean_inc(v_weakLeanArgs_1708_);
lean_inc(v_moreLeanArgs_1707_);
lean_inc(v_leanOptions_1706_);
lean_dec(v_cfg_1704_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1730_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1726_; lean_object* v___x_1728_; 
v___x_1726_ = lean_apply_1(v_f_1703_, v_moreLinkObjs_1713_);
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 6, v___x_1726_);
v___x_1728_ = v___x_1724_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_leanOptions_1706_);
lean_ctor_set(v_reuseFailAlloc_1729_, 1, v_moreLeanArgs_1707_);
lean_ctor_set(v_reuseFailAlloc_1729_, 2, v_weakLeanArgs_1708_);
lean_ctor_set(v_reuseFailAlloc_1729_, 3, v_moreLeancArgs_1710_);
lean_ctor_set(v_reuseFailAlloc_1729_, 4, v_moreServerOptions_1711_);
lean_ctor_set(v_reuseFailAlloc_1729_, 5, v_weakLeancArgs_1712_);
lean_ctor_set(v_reuseFailAlloc_1729_, 6, v___x_1726_);
lean_ctor_set(v_reuseFailAlloc_1729_, 7, v_moreLinkLibs_1714_);
lean_ctor_set(v_reuseFailAlloc_1729_, 8, v_moreLinkArgs_1715_);
lean_ctor_set(v_reuseFailAlloc_1729_, 9, v_weakLinkArgs_1716_);
lean_ctor_set(v_reuseFailAlloc_1729_, 10, v_platformIndependent_1718_);
lean_ctor_set(v_reuseFailAlloc_1729_, 11, v_dynlibs_1719_);
lean_ctor_set(v_reuseFailAlloc_1729_, 12, v_plugins_1720_);
lean_ctor_set_uint8(v_reuseFailAlloc_1729_, sizeof(void*)*13, v_buildType_1705_);
lean_ctor_set_uint8(v_reuseFailAlloc_1729_, sizeof(void*)*13 + 1, v_useZigCodegen_1709_);
lean_ctor_set_uint8(v_reuseFailAlloc_1729_, sizeof(void*)*13 + 2, v_backend_1717_);
lean_ctor_set_uint8(v_reuseFailAlloc_1729_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1721_);
lean_ctor_set_uint8(v_reuseFailAlloc_1729_, sizeof(void*)*13 + 4, v_allowNonModules_1722_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__3(lean_object* v_x_1733_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = ((lean_object*)(l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___closed__0));
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkObjs___proj___lam__3___boxed(lean_object* v_x_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l_Lake_LeanConfig_moreLinkObjs___proj___lam__3(v_x_1735_);
lean_dec_ref(v_x_1735_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__0(lean_object* v_cfg_1748_){
_start:
{
lean_object* v_moreLinkLibs_1749_; 
v_moreLinkLibs_1749_ = lean_ctor_get(v_cfg_1748_, 7);
lean_inc_ref(v_moreLinkLibs_1749_);
return v_moreLinkLibs_1749_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__0___boxed(lean_object* v_cfg_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lake_LeanConfig_moreLinkLibs___proj___lam__0(v_cfg_1750_);
lean_dec_ref(v_cfg_1750_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__1(lean_object* v_val_1752_, lean_object* v_cfg_1753_){
_start:
{
uint8_t v_buildType_1754_; lean_object* v_leanOptions_1755_; lean_object* v_moreLeanArgs_1756_; lean_object* v_weakLeanArgs_1757_; uint8_t v_useZigCodegen_1758_; lean_object* v_moreLeancArgs_1759_; lean_object* v_moreServerOptions_1760_; lean_object* v_weakLeancArgs_1761_; lean_object* v_moreLinkObjs_1762_; lean_object* v_moreLinkArgs_1763_; lean_object* v_weakLinkArgs_1764_; uint8_t v_backend_1765_; lean_object* v_platformIndependent_1766_; lean_object* v_dynlibs_1767_; lean_object* v_plugins_1768_; uint8_t v_requiresModuleSystem_1769_; uint8_t v_allowNonModules_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
v_buildType_1754_ = lean_ctor_get_uint8(v_cfg_1753_, sizeof(void*)*13);
v_leanOptions_1755_ = lean_ctor_get(v_cfg_1753_, 0);
v_moreLeanArgs_1756_ = lean_ctor_get(v_cfg_1753_, 1);
v_weakLeanArgs_1757_ = lean_ctor_get(v_cfg_1753_, 2);
v_useZigCodegen_1758_ = lean_ctor_get_uint8(v_cfg_1753_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1759_ = lean_ctor_get(v_cfg_1753_, 3);
v_moreServerOptions_1760_ = lean_ctor_get(v_cfg_1753_, 4);
v_weakLeancArgs_1761_ = lean_ctor_get(v_cfg_1753_, 5);
v_moreLinkObjs_1762_ = lean_ctor_get(v_cfg_1753_, 6);
v_moreLinkArgs_1763_ = lean_ctor_get(v_cfg_1753_, 8);
v_weakLinkArgs_1764_ = lean_ctor_get(v_cfg_1753_, 9);
v_backend_1765_ = lean_ctor_get_uint8(v_cfg_1753_, sizeof(void*)*13 + 2);
v_platformIndependent_1766_ = lean_ctor_get(v_cfg_1753_, 10);
v_dynlibs_1767_ = lean_ctor_get(v_cfg_1753_, 11);
v_plugins_1768_ = lean_ctor_get(v_cfg_1753_, 12);
v_requiresModuleSystem_1769_ = lean_ctor_get_uint8(v_cfg_1753_, sizeof(void*)*13 + 3);
v_allowNonModules_1770_ = lean_ctor_get_uint8(v_cfg_1753_, sizeof(void*)*13 + 4);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_cfg_1753_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; 
v_unused_1778_ = lean_ctor_get(v_cfg_1753_, 7);
lean_dec(v_unused_1778_);
v___x_1772_ = v_cfg_1753_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_plugins_1768_);
lean_inc(v_dynlibs_1767_);
lean_inc(v_platformIndependent_1766_);
lean_inc(v_weakLinkArgs_1764_);
lean_inc(v_moreLinkArgs_1763_);
lean_inc(v_moreLinkObjs_1762_);
lean_inc(v_weakLeancArgs_1761_);
lean_inc(v_moreServerOptions_1760_);
lean_inc(v_moreLeancArgs_1759_);
lean_inc(v_weakLeanArgs_1757_);
lean_inc(v_moreLeanArgs_1756_);
lean_inc(v_leanOptions_1755_);
lean_dec(v_cfg_1753_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 7, v_val_1752_);
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_leanOptions_1755_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_moreLeanArgs_1756_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_weakLeanArgs_1757_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v_moreLeancArgs_1759_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v_moreServerOptions_1760_);
lean_ctor_set(v_reuseFailAlloc_1776_, 5, v_weakLeancArgs_1761_);
lean_ctor_set(v_reuseFailAlloc_1776_, 6, v_moreLinkObjs_1762_);
lean_ctor_set(v_reuseFailAlloc_1776_, 7, v_val_1752_);
lean_ctor_set(v_reuseFailAlloc_1776_, 8, v_moreLinkArgs_1763_);
lean_ctor_set(v_reuseFailAlloc_1776_, 9, v_weakLinkArgs_1764_);
lean_ctor_set(v_reuseFailAlloc_1776_, 10, v_platformIndependent_1766_);
lean_ctor_set(v_reuseFailAlloc_1776_, 11, v_dynlibs_1767_);
lean_ctor_set(v_reuseFailAlloc_1776_, 12, v_plugins_1768_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*13, v_buildType_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*13 + 1, v_useZigCodegen_1758_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*13 + 2, v_backend_1765_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1769_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*13 + 4, v_allowNonModules_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkLibs___proj___lam__2(lean_object* v_f_1779_, lean_object* v_cfg_1780_){
_start:
{
uint8_t v_buildType_1781_; lean_object* v_leanOptions_1782_; lean_object* v_moreLeanArgs_1783_; lean_object* v_weakLeanArgs_1784_; uint8_t v_useZigCodegen_1785_; lean_object* v_moreLeancArgs_1786_; lean_object* v_moreServerOptions_1787_; lean_object* v_weakLeancArgs_1788_; lean_object* v_moreLinkObjs_1789_; lean_object* v_moreLinkLibs_1790_; lean_object* v_moreLinkArgs_1791_; lean_object* v_weakLinkArgs_1792_; uint8_t v_backend_1793_; lean_object* v_platformIndependent_1794_; lean_object* v_dynlibs_1795_; lean_object* v_plugins_1796_; uint8_t v_requiresModuleSystem_1797_; uint8_t v_allowNonModules_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1806_; 
v_buildType_1781_ = lean_ctor_get_uint8(v_cfg_1780_, sizeof(void*)*13);
v_leanOptions_1782_ = lean_ctor_get(v_cfg_1780_, 0);
v_moreLeanArgs_1783_ = lean_ctor_get(v_cfg_1780_, 1);
v_weakLeanArgs_1784_ = lean_ctor_get(v_cfg_1780_, 2);
v_useZigCodegen_1785_ = lean_ctor_get_uint8(v_cfg_1780_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1786_ = lean_ctor_get(v_cfg_1780_, 3);
v_moreServerOptions_1787_ = lean_ctor_get(v_cfg_1780_, 4);
v_weakLeancArgs_1788_ = lean_ctor_get(v_cfg_1780_, 5);
v_moreLinkObjs_1789_ = lean_ctor_get(v_cfg_1780_, 6);
v_moreLinkLibs_1790_ = lean_ctor_get(v_cfg_1780_, 7);
v_moreLinkArgs_1791_ = lean_ctor_get(v_cfg_1780_, 8);
v_weakLinkArgs_1792_ = lean_ctor_get(v_cfg_1780_, 9);
v_backend_1793_ = lean_ctor_get_uint8(v_cfg_1780_, sizeof(void*)*13 + 2);
v_platformIndependent_1794_ = lean_ctor_get(v_cfg_1780_, 10);
v_dynlibs_1795_ = lean_ctor_get(v_cfg_1780_, 11);
v_plugins_1796_ = lean_ctor_get(v_cfg_1780_, 12);
v_requiresModuleSystem_1797_ = lean_ctor_get_uint8(v_cfg_1780_, sizeof(void*)*13 + 3);
v_allowNonModules_1798_ = lean_ctor_get_uint8(v_cfg_1780_, sizeof(void*)*13 + 4);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_cfg_1780_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1800_ = v_cfg_1780_;
v_isShared_1801_ = v_isSharedCheck_1806_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_plugins_1796_);
lean_inc(v_dynlibs_1795_);
lean_inc(v_platformIndependent_1794_);
lean_inc(v_weakLinkArgs_1792_);
lean_inc(v_moreLinkArgs_1791_);
lean_inc(v_moreLinkLibs_1790_);
lean_inc(v_moreLinkObjs_1789_);
lean_inc(v_weakLeancArgs_1788_);
lean_inc(v_moreServerOptions_1787_);
lean_inc(v_moreLeancArgs_1786_);
lean_inc(v_weakLeanArgs_1784_);
lean_inc(v_moreLeanArgs_1783_);
lean_inc(v_leanOptions_1782_);
lean_dec(v_cfg_1780_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1806_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1802_ = lean_apply_1(v_f_1779_, v_moreLinkLibs_1790_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 7, v___x_1802_);
v___x_1804_ = v___x_1800_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_leanOptions_1782_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v_moreLeanArgs_1783_);
lean_ctor_set(v_reuseFailAlloc_1805_, 2, v_weakLeanArgs_1784_);
lean_ctor_set(v_reuseFailAlloc_1805_, 3, v_moreLeancArgs_1786_);
lean_ctor_set(v_reuseFailAlloc_1805_, 4, v_moreServerOptions_1787_);
lean_ctor_set(v_reuseFailAlloc_1805_, 5, v_weakLeancArgs_1788_);
lean_ctor_set(v_reuseFailAlloc_1805_, 6, v_moreLinkObjs_1789_);
lean_ctor_set(v_reuseFailAlloc_1805_, 7, v___x_1802_);
lean_ctor_set(v_reuseFailAlloc_1805_, 8, v_moreLinkArgs_1791_);
lean_ctor_set(v_reuseFailAlloc_1805_, 9, v_weakLinkArgs_1792_);
lean_ctor_set(v_reuseFailAlloc_1805_, 10, v_platformIndependent_1794_);
lean_ctor_set(v_reuseFailAlloc_1805_, 11, v_dynlibs_1795_);
lean_ctor_set(v_reuseFailAlloc_1805_, 12, v_plugins_1796_);
lean_ctor_set_uint8(v_reuseFailAlloc_1805_, sizeof(void*)*13, v_buildType_1781_);
lean_ctor_set_uint8(v_reuseFailAlloc_1805_, sizeof(void*)*13 + 1, v_useZigCodegen_1785_);
lean_ctor_set_uint8(v_reuseFailAlloc_1805_, sizeof(void*)*13 + 2, v_backend_1793_);
lean_ctor_set_uint8(v_reuseFailAlloc_1805_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1797_);
lean_ctor_set_uint8(v_reuseFailAlloc_1805_, sizeof(void*)*13 + 4, v_allowNonModules_1798_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__0(lean_object* v_cfg_1817_){
_start:
{
lean_object* v_moreLinkArgs_1818_; 
v_moreLinkArgs_1818_ = lean_ctor_get(v_cfg_1817_, 8);
lean_inc_ref(v_moreLinkArgs_1818_);
return v_moreLinkArgs_1818_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__0___boxed(lean_object* v_cfg_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l_Lake_LeanConfig_moreLinkArgs___proj___lam__0(v_cfg_1819_);
lean_dec_ref(v_cfg_1819_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__1(lean_object* v_val_1821_, lean_object* v_cfg_1822_){
_start:
{
uint8_t v_buildType_1823_; lean_object* v_leanOptions_1824_; lean_object* v_moreLeanArgs_1825_; lean_object* v_weakLeanArgs_1826_; uint8_t v_useZigCodegen_1827_; lean_object* v_moreLeancArgs_1828_; lean_object* v_moreServerOptions_1829_; lean_object* v_weakLeancArgs_1830_; lean_object* v_moreLinkObjs_1831_; lean_object* v_moreLinkLibs_1832_; lean_object* v_weakLinkArgs_1833_; uint8_t v_backend_1834_; lean_object* v_platformIndependent_1835_; lean_object* v_dynlibs_1836_; lean_object* v_plugins_1837_; uint8_t v_requiresModuleSystem_1838_; uint8_t v_allowNonModules_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1846_; 
v_buildType_1823_ = lean_ctor_get_uint8(v_cfg_1822_, sizeof(void*)*13);
v_leanOptions_1824_ = lean_ctor_get(v_cfg_1822_, 0);
v_moreLeanArgs_1825_ = lean_ctor_get(v_cfg_1822_, 1);
v_weakLeanArgs_1826_ = lean_ctor_get(v_cfg_1822_, 2);
v_useZigCodegen_1827_ = lean_ctor_get_uint8(v_cfg_1822_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1828_ = lean_ctor_get(v_cfg_1822_, 3);
v_moreServerOptions_1829_ = lean_ctor_get(v_cfg_1822_, 4);
v_weakLeancArgs_1830_ = lean_ctor_get(v_cfg_1822_, 5);
v_moreLinkObjs_1831_ = lean_ctor_get(v_cfg_1822_, 6);
v_moreLinkLibs_1832_ = lean_ctor_get(v_cfg_1822_, 7);
v_weakLinkArgs_1833_ = lean_ctor_get(v_cfg_1822_, 9);
v_backend_1834_ = lean_ctor_get_uint8(v_cfg_1822_, sizeof(void*)*13 + 2);
v_platformIndependent_1835_ = lean_ctor_get(v_cfg_1822_, 10);
v_dynlibs_1836_ = lean_ctor_get(v_cfg_1822_, 11);
v_plugins_1837_ = lean_ctor_get(v_cfg_1822_, 12);
v_requiresModuleSystem_1838_ = lean_ctor_get_uint8(v_cfg_1822_, sizeof(void*)*13 + 3);
v_allowNonModules_1839_ = lean_ctor_get_uint8(v_cfg_1822_, sizeof(void*)*13 + 4);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_cfg_1822_);
if (v_isSharedCheck_1846_ == 0)
{
lean_object* v_unused_1847_; 
v_unused_1847_ = lean_ctor_get(v_cfg_1822_, 8);
lean_dec(v_unused_1847_);
v___x_1841_ = v_cfg_1822_;
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_plugins_1837_);
lean_inc(v_dynlibs_1836_);
lean_inc(v_platformIndependent_1835_);
lean_inc(v_weakLinkArgs_1833_);
lean_inc(v_moreLinkLibs_1832_);
lean_inc(v_moreLinkObjs_1831_);
lean_inc(v_weakLeancArgs_1830_);
lean_inc(v_moreServerOptions_1829_);
lean_inc(v_moreLeancArgs_1828_);
lean_inc(v_weakLeanArgs_1826_);
lean_inc(v_moreLeanArgs_1825_);
lean_inc(v_leanOptions_1824_);
lean_dec(v_cfg_1822_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1846_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1844_; 
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 8, v_val_1821_);
v___x_1844_ = v___x_1841_;
goto v_reusejp_1843_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_leanOptions_1824_);
lean_ctor_set(v_reuseFailAlloc_1845_, 1, v_moreLeanArgs_1825_);
lean_ctor_set(v_reuseFailAlloc_1845_, 2, v_weakLeanArgs_1826_);
lean_ctor_set(v_reuseFailAlloc_1845_, 3, v_moreLeancArgs_1828_);
lean_ctor_set(v_reuseFailAlloc_1845_, 4, v_moreServerOptions_1829_);
lean_ctor_set(v_reuseFailAlloc_1845_, 5, v_weakLeancArgs_1830_);
lean_ctor_set(v_reuseFailAlloc_1845_, 6, v_moreLinkObjs_1831_);
lean_ctor_set(v_reuseFailAlloc_1845_, 7, v_moreLinkLibs_1832_);
lean_ctor_set(v_reuseFailAlloc_1845_, 8, v_val_1821_);
lean_ctor_set(v_reuseFailAlloc_1845_, 9, v_weakLinkArgs_1833_);
lean_ctor_set(v_reuseFailAlloc_1845_, 10, v_platformIndependent_1835_);
lean_ctor_set(v_reuseFailAlloc_1845_, 11, v_dynlibs_1836_);
lean_ctor_set(v_reuseFailAlloc_1845_, 12, v_plugins_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1845_, sizeof(void*)*13, v_buildType_1823_);
lean_ctor_set_uint8(v_reuseFailAlloc_1845_, sizeof(void*)*13 + 1, v_useZigCodegen_1827_);
lean_ctor_set_uint8(v_reuseFailAlloc_1845_, sizeof(void*)*13 + 2, v_backend_1834_);
lean_ctor_set_uint8(v_reuseFailAlloc_1845_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1838_);
lean_ctor_set_uint8(v_reuseFailAlloc_1845_, sizeof(void*)*13 + 4, v_allowNonModules_1839_);
v___x_1844_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1843_;
}
v_reusejp_1843_:
{
return v___x_1844_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_moreLinkArgs___proj___lam__2(lean_object* v_f_1848_, lean_object* v_cfg_1849_){
_start:
{
uint8_t v_buildType_1850_; lean_object* v_leanOptions_1851_; lean_object* v_moreLeanArgs_1852_; lean_object* v_weakLeanArgs_1853_; uint8_t v_useZigCodegen_1854_; lean_object* v_moreLeancArgs_1855_; lean_object* v_moreServerOptions_1856_; lean_object* v_weakLeancArgs_1857_; lean_object* v_moreLinkObjs_1858_; lean_object* v_moreLinkLibs_1859_; lean_object* v_moreLinkArgs_1860_; lean_object* v_weakLinkArgs_1861_; uint8_t v_backend_1862_; lean_object* v_platformIndependent_1863_; lean_object* v_dynlibs_1864_; lean_object* v_plugins_1865_; uint8_t v_requiresModuleSystem_1866_; uint8_t v_allowNonModules_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1875_; 
v_buildType_1850_ = lean_ctor_get_uint8(v_cfg_1849_, sizeof(void*)*13);
v_leanOptions_1851_ = lean_ctor_get(v_cfg_1849_, 0);
v_moreLeanArgs_1852_ = lean_ctor_get(v_cfg_1849_, 1);
v_weakLeanArgs_1853_ = lean_ctor_get(v_cfg_1849_, 2);
v_useZigCodegen_1854_ = lean_ctor_get_uint8(v_cfg_1849_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1855_ = lean_ctor_get(v_cfg_1849_, 3);
v_moreServerOptions_1856_ = lean_ctor_get(v_cfg_1849_, 4);
v_weakLeancArgs_1857_ = lean_ctor_get(v_cfg_1849_, 5);
v_moreLinkObjs_1858_ = lean_ctor_get(v_cfg_1849_, 6);
v_moreLinkLibs_1859_ = lean_ctor_get(v_cfg_1849_, 7);
v_moreLinkArgs_1860_ = lean_ctor_get(v_cfg_1849_, 8);
v_weakLinkArgs_1861_ = lean_ctor_get(v_cfg_1849_, 9);
v_backend_1862_ = lean_ctor_get_uint8(v_cfg_1849_, sizeof(void*)*13 + 2);
v_platformIndependent_1863_ = lean_ctor_get(v_cfg_1849_, 10);
v_dynlibs_1864_ = lean_ctor_get(v_cfg_1849_, 11);
v_plugins_1865_ = lean_ctor_get(v_cfg_1849_, 12);
v_requiresModuleSystem_1866_ = lean_ctor_get_uint8(v_cfg_1849_, sizeof(void*)*13 + 3);
v_allowNonModules_1867_ = lean_ctor_get_uint8(v_cfg_1849_, sizeof(void*)*13 + 4);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_cfg_1849_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1869_ = v_cfg_1849_;
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_plugins_1865_);
lean_inc(v_dynlibs_1864_);
lean_inc(v_platformIndependent_1863_);
lean_inc(v_weakLinkArgs_1861_);
lean_inc(v_moreLinkArgs_1860_);
lean_inc(v_moreLinkLibs_1859_);
lean_inc(v_moreLinkObjs_1858_);
lean_inc(v_weakLeancArgs_1857_);
lean_inc(v_moreServerOptions_1856_);
lean_inc(v_moreLeancArgs_1855_);
lean_inc(v_weakLeanArgs_1853_);
lean_inc(v_moreLeanArgs_1852_);
lean_inc(v_leanOptions_1851_);
lean_dec(v_cfg_1849_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1871_ = lean_apply_1(v_f_1848_, v_moreLinkArgs_1860_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 8, v___x_1871_);
v___x_1873_ = v___x_1869_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_leanOptions_1851_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_moreLeanArgs_1852_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_weakLeanArgs_1853_);
lean_ctor_set(v_reuseFailAlloc_1874_, 3, v_moreLeancArgs_1855_);
lean_ctor_set(v_reuseFailAlloc_1874_, 4, v_moreServerOptions_1856_);
lean_ctor_set(v_reuseFailAlloc_1874_, 5, v_weakLeancArgs_1857_);
lean_ctor_set(v_reuseFailAlloc_1874_, 6, v_moreLinkObjs_1858_);
lean_ctor_set(v_reuseFailAlloc_1874_, 7, v_moreLinkLibs_1859_);
lean_ctor_set(v_reuseFailAlloc_1874_, 8, v___x_1871_);
lean_ctor_set(v_reuseFailAlloc_1874_, 9, v_weakLinkArgs_1861_);
lean_ctor_set(v_reuseFailAlloc_1874_, 10, v_platformIndependent_1863_);
lean_ctor_set(v_reuseFailAlloc_1874_, 11, v_dynlibs_1864_);
lean_ctor_set(v_reuseFailAlloc_1874_, 12, v_plugins_1865_);
lean_ctor_set_uint8(v_reuseFailAlloc_1874_, sizeof(void*)*13, v_buildType_1850_);
lean_ctor_set_uint8(v_reuseFailAlloc_1874_, sizeof(void*)*13 + 1, v_useZigCodegen_1854_);
lean_ctor_set_uint8(v_reuseFailAlloc_1874_, sizeof(void*)*13 + 2, v_backend_1862_);
lean_ctor_set_uint8(v_reuseFailAlloc_1874_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1866_);
lean_ctor_set_uint8(v_reuseFailAlloc_1874_, sizeof(void*)*13 + 4, v_allowNonModules_1867_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__0(lean_object* v_cfg_1886_){
_start:
{
lean_object* v_weakLinkArgs_1887_; 
v_weakLinkArgs_1887_ = lean_ctor_get(v_cfg_1886_, 9);
lean_inc_ref(v_weakLinkArgs_1887_);
return v_weakLinkArgs_1887_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__0___boxed(lean_object* v_cfg_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Lake_LeanConfig_weakLinkArgs___proj___lam__0(v_cfg_1888_);
lean_dec_ref(v_cfg_1888_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__1(lean_object* v_val_1890_, lean_object* v_cfg_1891_){
_start:
{
uint8_t v_buildType_1892_; lean_object* v_leanOptions_1893_; lean_object* v_moreLeanArgs_1894_; lean_object* v_weakLeanArgs_1895_; uint8_t v_useZigCodegen_1896_; lean_object* v_moreLeancArgs_1897_; lean_object* v_moreServerOptions_1898_; lean_object* v_weakLeancArgs_1899_; lean_object* v_moreLinkObjs_1900_; lean_object* v_moreLinkLibs_1901_; lean_object* v_moreLinkArgs_1902_; uint8_t v_backend_1903_; lean_object* v_platformIndependent_1904_; lean_object* v_dynlibs_1905_; lean_object* v_plugins_1906_; uint8_t v_requiresModuleSystem_1907_; uint8_t v_allowNonModules_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
v_buildType_1892_ = lean_ctor_get_uint8(v_cfg_1891_, sizeof(void*)*13);
v_leanOptions_1893_ = lean_ctor_get(v_cfg_1891_, 0);
v_moreLeanArgs_1894_ = lean_ctor_get(v_cfg_1891_, 1);
v_weakLeanArgs_1895_ = lean_ctor_get(v_cfg_1891_, 2);
v_useZigCodegen_1896_ = lean_ctor_get_uint8(v_cfg_1891_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1897_ = lean_ctor_get(v_cfg_1891_, 3);
v_moreServerOptions_1898_ = lean_ctor_get(v_cfg_1891_, 4);
v_weakLeancArgs_1899_ = lean_ctor_get(v_cfg_1891_, 5);
v_moreLinkObjs_1900_ = lean_ctor_get(v_cfg_1891_, 6);
v_moreLinkLibs_1901_ = lean_ctor_get(v_cfg_1891_, 7);
v_moreLinkArgs_1902_ = lean_ctor_get(v_cfg_1891_, 8);
v_backend_1903_ = lean_ctor_get_uint8(v_cfg_1891_, sizeof(void*)*13 + 2);
v_platformIndependent_1904_ = lean_ctor_get(v_cfg_1891_, 10);
v_dynlibs_1905_ = lean_ctor_get(v_cfg_1891_, 11);
v_plugins_1906_ = lean_ctor_get(v_cfg_1891_, 12);
v_requiresModuleSystem_1907_ = lean_ctor_get_uint8(v_cfg_1891_, sizeof(void*)*13 + 3);
v_allowNonModules_1908_ = lean_ctor_get_uint8(v_cfg_1891_, sizeof(void*)*13 + 4);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_cfg_1891_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_cfg_1891_, 9);
lean_dec(v_unused_1916_);
v___x_1910_ = v_cfg_1891_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_plugins_1906_);
lean_inc(v_dynlibs_1905_);
lean_inc(v_platformIndependent_1904_);
lean_inc(v_moreLinkArgs_1902_);
lean_inc(v_moreLinkLibs_1901_);
lean_inc(v_moreLinkObjs_1900_);
lean_inc(v_weakLeancArgs_1899_);
lean_inc(v_moreServerOptions_1898_);
lean_inc(v_moreLeancArgs_1897_);
lean_inc(v_weakLeanArgs_1895_);
lean_inc(v_moreLeanArgs_1894_);
lean_inc(v_leanOptions_1893_);
lean_dec(v_cfg_1891_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 9, v_val_1890_);
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_leanOptions_1893_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v_moreLeanArgs_1894_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v_weakLeanArgs_1895_);
lean_ctor_set(v_reuseFailAlloc_1914_, 3, v_moreLeancArgs_1897_);
lean_ctor_set(v_reuseFailAlloc_1914_, 4, v_moreServerOptions_1898_);
lean_ctor_set(v_reuseFailAlloc_1914_, 5, v_weakLeancArgs_1899_);
lean_ctor_set(v_reuseFailAlloc_1914_, 6, v_moreLinkObjs_1900_);
lean_ctor_set(v_reuseFailAlloc_1914_, 7, v_moreLinkLibs_1901_);
lean_ctor_set(v_reuseFailAlloc_1914_, 8, v_moreLinkArgs_1902_);
lean_ctor_set(v_reuseFailAlloc_1914_, 9, v_val_1890_);
lean_ctor_set(v_reuseFailAlloc_1914_, 10, v_platformIndependent_1904_);
lean_ctor_set(v_reuseFailAlloc_1914_, 11, v_dynlibs_1905_);
lean_ctor_set(v_reuseFailAlloc_1914_, 12, v_plugins_1906_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*13, v_buildType_1892_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*13 + 1, v_useZigCodegen_1896_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*13 + 2, v_backend_1903_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1914_, sizeof(void*)*13 + 4, v_allowNonModules_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_weakLinkArgs___proj___lam__2(lean_object* v_f_1917_, lean_object* v_cfg_1918_){
_start:
{
uint8_t v_buildType_1919_; lean_object* v_leanOptions_1920_; lean_object* v_moreLeanArgs_1921_; lean_object* v_weakLeanArgs_1922_; uint8_t v_useZigCodegen_1923_; lean_object* v_moreLeancArgs_1924_; lean_object* v_moreServerOptions_1925_; lean_object* v_weakLeancArgs_1926_; lean_object* v_moreLinkObjs_1927_; lean_object* v_moreLinkLibs_1928_; lean_object* v_moreLinkArgs_1929_; lean_object* v_weakLinkArgs_1930_; uint8_t v_backend_1931_; lean_object* v_platformIndependent_1932_; lean_object* v_dynlibs_1933_; lean_object* v_plugins_1934_; uint8_t v_requiresModuleSystem_1935_; uint8_t v_allowNonModules_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1944_; 
v_buildType_1919_ = lean_ctor_get_uint8(v_cfg_1918_, sizeof(void*)*13);
v_leanOptions_1920_ = lean_ctor_get(v_cfg_1918_, 0);
v_moreLeanArgs_1921_ = lean_ctor_get(v_cfg_1918_, 1);
v_weakLeanArgs_1922_ = lean_ctor_get(v_cfg_1918_, 2);
v_useZigCodegen_1923_ = lean_ctor_get_uint8(v_cfg_1918_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1924_ = lean_ctor_get(v_cfg_1918_, 3);
v_moreServerOptions_1925_ = lean_ctor_get(v_cfg_1918_, 4);
v_weakLeancArgs_1926_ = lean_ctor_get(v_cfg_1918_, 5);
v_moreLinkObjs_1927_ = lean_ctor_get(v_cfg_1918_, 6);
v_moreLinkLibs_1928_ = lean_ctor_get(v_cfg_1918_, 7);
v_moreLinkArgs_1929_ = lean_ctor_get(v_cfg_1918_, 8);
v_weakLinkArgs_1930_ = lean_ctor_get(v_cfg_1918_, 9);
v_backend_1931_ = lean_ctor_get_uint8(v_cfg_1918_, sizeof(void*)*13 + 2);
v_platformIndependent_1932_ = lean_ctor_get(v_cfg_1918_, 10);
v_dynlibs_1933_ = lean_ctor_get(v_cfg_1918_, 11);
v_plugins_1934_ = lean_ctor_get(v_cfg_1918_, 12);
v_requiresModuleSystem_1935_ = lean_ctor_get_uint8(v_cfg_1918_, sizeof(void*)*13 + 3);
v_allowNonModules_1936_ = lean_ctor_get_uint8(v_cfg_1918_, sizeof(void*)*13 + 4);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_cfg_1918_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1938_ = v_cfg_1918_;
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_plugins_1934_);
lean_inc(v_dynlibs_1933_);
lean_inc(v_platformIndependent_1932_);
lean_inc(v_weakLinkArgs_1930_);
lean_inc(v_moreLinkArgs_1929_);
lean_inc(v_moreLinkLibs_1928_);
lean_inc(v_moreLinkObjs_1927_);
lean_inc(v_weakLeancArgs_1926_);
lean_inc(v_moreServerOptions_1925_);
lean_inc(v_moreLeancArgs_1924_);
lean_inc(v_weakLeanArgs_1922_);
lean_inc(v_moreLeanArgs_1921_);
lean_inc(v_leanOptions_1920_);
lean_dec(v_cfg_1918_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1944_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1940_ = lean_apply_1(v_f_1917_, v_weakLinkArgs_1930_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 9, v___x_1940_);
v___x_1942_ = v___x_1938_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_leanOptions_1920_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_moreLeanArgs_1921_);
lean_ctor_set(v_reuseFailAlloc_1943_, 2, v_weakLeanArgs_1922_);
lean_ctor_set(v_reuseFailAlloc_1943_, 3, v_moreLeancArgs_1924_);
lean_ctor_set(v_reuseFailAlloc_1943_, 4, v_moreServerOptions_1925_);
lean_ctor_set(v_reuseFailAlloc_1943_, 5, v_weakLeancArgs_1926_);
lean_ctor_set(v_reuseFailAlloc_1943_, 6, v_moreLinkObjs_1927_);
lean_ctor_set(v_reuseFailAlloc_1943_, 7, v_moreLinkLibs_1928_);
lean_ctor_set(v_reuseFailAlloc_1943_, 8, v_moreLinkArgs_1929_);
lean_ctor_set(v_reuseFailAlloc_1943_, 9, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1943_, 10, v_platformIndependent_1932_);
lean_ctor_set(v_reuseFailAlloc_1943_, 11, v_dynlibs_1933_);
lean_ctor_set(v_reuseFailAlloc_1943_, 12, v_plugins_1934_);
lean_ctor_set_uint8(v_reuseFailAlloc_1943_, sizeof(void*)*13, v_buildType_1919_);
lean_ctor_set_uint8(v_reuseFailAlloc_1943_, sizeof(void*)*13 + 1, v_useZigCodegen_1923_);
lean_ctor_set_uint8(v_reuseFailAlloc_1943_, sizeof(void*)*13 + 2, v_backend_1931_);
lean_ctor_set_uint8(v_reuseFailAlloc_1943_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1935_);
lean_ctor_set_uint8(v_reuseFailAlloc_1943_, sizeof(void*)*13 + 4, v_allowNonModules_1936_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_backend___proj___lam__0(lean_object* v_cfg_1955_){
_start:
{
uint8_t v_backend_1956_; 
v_backend_1956_ = lean_ctor_get_uint8(v_cfg_1955_, sizeof(void*)*13 + 2);
return v_backend_1956_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__0___boxed(lean_object* v_cfg_1957_){
_start:
{
uint8_t v_res_1958_; lean_object* v_r_1959_; 
v_res_1958_ = l_Lake_LeanConfig_backend___proj___lam__0(v_cfg_1957_);
lean_dec_ref(v_cfg_1957_);
v_r_1959_ = lean_box(v_res_1958_);
return v_r_1959_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__1(uint8_t v_val_1960_, lean_object* v_cfg_1961_){
_start:
{
uint8_t v_buildType_1962_; lean_object* v_leanOptions_1963_; lean_object* v_moreLeanArgs_1964_; lean_object* v_weakLeanArgs_1965_; uint8_t v_useZigCodegen_1966_; lean_object* v_moreLeancArgs_1967_; lean_object* v_moreServerOptions_1968_; lean_object* v_weakLeancArgs_1969_; lean_object* v_moreLinkObjs_1970_; lean_object* v_moreLinkLibs_1971_; lean_object* v_moreLinkArgs_1972_; lean_object* v_weakLinkArgs_1973_; lean_object* v_platformIndependent_1974_; lean_object* v_dynlibs_1975_; lean_object* v_plugins_1976_; uint8_t v_requiresModuleSystem_1977_; uint8_t v_allowNonModules_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
v_buildType_1962_ = lean_ctor_get_uint8(v_cfg_1961_, sizeof(void*)*13);
v_leanOptions_1963_ = lean_ctor_get(v_cfg_1961_, 0);
v_moreLeanArgs_1964_ = lean_ctor_get(v_cfg_1961_, 1);
v_weakLeanArgs_1965_ = lean_ctor_get(v_cfg_1961_, 2);
v_useZigCodegen_1966_ = lean_ctor_get_uint8(v_cfg_1961_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1967_ = lean_ctor_get(v_cfg_1961_, 3);
v_moreServerOptions_1968_ = lean_ctor_get(v_cfg_1961_, 4);
v_weakLeancArgs_1969_ = lean_ctor_get(v_cfg_1961_, 5);
v_moreLinkObjs_1970_ = lean_ctor_get(v_cfg_1961_, 6);
v_moreLinkLibs_1971_ = lean_ctor_get(v_cfg_1961_, 7);
v_moreLinkArgs_1972_ = lean_ctor_get(v_cfg_1961_, 8);
v_weakLinkArgs_1973_ = lean_ctor_get(v_cfg_1961_, 9);
v_platformIndependent_1974_ = lean_ctor_get(v_cfg_1961_, 10);
v_dynlibs_1975_ = lean_ctor_get(v_cfg_1961_, 11);
v_plugins_1976_ = lean_ctor_get(v_cfg_1961_, 12);
v_requiresModuleSystem_1977_ = lean_ctor_get_uint8(v_cfg_1961_, sizeof(void*)*13 + 3);
v_allowNonModules_1978_ = lean_ctor_get_uint8(v_cfg_1961_, sizeof(void*)*13 + 4);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_cfg_1961_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v_cfg_1961_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_plugins_1976_);
lean_inc(v_dynlibs_1975_);
lean_inc(v_platformIndependent_1974_);
lean_inc(v_weakLinkArgs_1973_);
lean_inc(v_moreLinkArgs_1972_);
lean_inc(v_moreLinkLibs_1971_);
lean_inc(v_moreLinkObjs_1970_);
lean_inc(v_weakLeancArgs_1969_);
lean_inc(v_moreServerOptions_1968_);
lean_inc(v_moreLeancArgs_1967_);
lean_inc(v_weakLeanArgs_1965_);
lean_inc(v_moreLeanArgs_1964_);
lean_inc(v_leanOptions_1963_);
lean_dec(v_cfg_1961_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_leanOptions_1963_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v_moreLeanArgs_1964_);
lean_ctor_set(v_reuseFailAlloc_1984_, 2, v_weakLeanArgs_1965_);
lean_ctor_set(v_reuseFailAlloc_1984_, 3, v_moreLeancArgs_1967_);
lean_ctor_set(v_reuseFailAlloc_1984_, 4, v_moreServerOptions_1968_);
lean_ctor_set(v_reuseFailAlloc_1984_, 5, v_weakLeancArgs_1969_);
lean_ctor_set(v_reuseFailAlloc_1984_, 6, v_moreLinkObjs_1970_);
lean_ctor_set(v_reuseFailAlloc_1984_, 7, v_moreLinkLibs_1971_);
lean_ctor_set(v_reuseFailAlloc_1984_, 8, v_moreLinkArgs_1972_);
lean_ctor_set(v_reuseFailAlloc_1984_, 9, v_weakLinkArgs_1973_);
lean_ctor_set(v_reuseFailAlloc_1984_, 10, v_platformIndependent_1974_);
lean_ctor_set(v_reuseFailAlloc_1984_, 11, v_dynlibs_1975_);
lean_ctor_set(v_reuseFailAlloc_1984_, 12, v_plugins_1976_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*13, v_buildType_1962_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*13 + 1, v_useZigCodegen_1966_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*13 + 3, v_requiresModuleSystem_1977_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*13 + 4, v_allowNonModules_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_ctor_set_uint8(v___x_1983_, sizeof(void*)*13 + 2, v_val_1960_);
return v___x_1983_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__1___boxed(lean_object* v_val_1986_, lean_object* v_cfg_1987_){
_start:
{
uint8_t v_val_88__boxed_1988_; lean_object* v_res_1989_; 
v_val_88__boxed_1988_ = lean_unbox(v_val_1986_);
v_res_1989_ = l_Lake_LeanConfig_backend___proj___lam__1(v_val_88__boxed_1988_, v_cfg_1987_);
return v_res_1989_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__2(lean_object* v_f_1990_, lean_object* v_cfg_1991_){
_start:
{
uint8_t v_buildType_1992_; lean_object* v_leanOptions_1993_; lean_object* v_moreLeanArgs_1994_; lean_object* v_weakLeanArgs_1995_; uint8_t v_useZigCodegen_1996_; lean_object* v_moreLeancArgs_1997_; lean_object* v_moreServerOptions_1998_; lean_object* v_weakLeancArgs_1999_; lean_object* v_moreLinkObjs_2000_; lean_object* v_moreLinkLibs_2001_; lean_object* v_moreLinkArgs_2002_; lean_object* v_weakLinkArgs_2003_; uint8_t v_backend_2004_; lean_object* v_platformIndependent_2005_; lean_object* v_dynlibs_2006_; lean_object* v_plugins_2007_; uint8_t v_requiresModuleSystem_2008_; uint8_t v_allowNonModules_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2019_; 
v_buildType_1992_ = lean_ctor_get_uint8(v_cfg_1991_, sizeof(void*)*13);
v_leanOptions_1993_ = lean_ctor_get(v_cfg_1991_, 0);
v_moreLeanArgs_1994_ = lean_ctor_get(v_cfg_1991_, 1);
v_weakLeanArgs_1995_ = lean_ctor_get(v_cfg_1991_, 2);
v_useZigCodegen_1996_ = lean_ctor_get_uint8(v_cfg_1991_, sizeof(void*)*13 + 1);
v_moreLeancArgs_1997_ = lean_ctor_get(v_cfg_1991_, 3);
v_moreServerOptions_1998_ = lean_ctor_get(v_cfg_1991_, 4);
v_weakLeancArgs_1999_ = lean_ctor_get(v_cfg_1991_, 5);
v_moreLinkObjs_2000_ = lean_ctor_get(v_cfg_1991_, 6);
v_moreLinkLibs_2001_ = lean_ctor_get(v_cfg_1991_, 7);
v_moreLinkArgs_2002_ = lean_ctor_get(v_cfg_1991_, 8);
v_weakLinkArgs_2003_ = lean_ctor_get(v_cfg_1991_, 9);
v_backend_2004_ = lean_ctor_get_uint8(v_cfg_1991_, sizeof(void*)*13 + 2);
v_platformIndependent_2005_ = lean_ctor_get(v_cfg_1991_, 10);
v_dynlibs_2006_ = lean_ctor_get(v_cfg_1991_, 11);
v_plugins_2007_ = lean_ctor_get(v_cfg_1991_, 12);
v_requiresModuleSystem_2008_ = lean_ctor_get_uint8(v_cfg_1991_, sizeof(void*)*13 + 3);
v_allowNonModules_2009_ = lean_ctor_get_uint8(v_cfg_1991_, sizeof(void*)*13 + 4);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_cfg_1991_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2011_ = v_cfg_1991_;
v_isShared_2012_ = v_isSharedCheck_2019_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_plugins_2007_);
lean_inc(v_dynlibs_2006_);
lean_inc(v_platformIndependent_2005_);
lean_inc(v_weakLinkArgs_2003_);
lean_inc(v_moreLinkArgs_2002_);
lean_inc(v_moreLinkLibs_2001_);
lean_inc(v_moreLinkObjs_2000_);
lean_inc(v_weakLeancArgs_1999_);
lean_inc(v_moreServerOptions_1998_);
lean_inc(v_moreLeancArgs_1997_);
lean_inc(v_weakLeanArgs_1995_);
lean_inc(v_moreLeanArgs_1994_);
lean_inc(v_leanOptions_1993_);
lean_dec(v_cfg_1991_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2019_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2013_ = lean_box(v_backend_2004_);
v___x_2014_ = lean_apply_1(v_f_1990_, v___x_2013_);
if (v_isShared_2012_ == 0)
{
v___x_2016_ = v___x_2011_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_leanOptions_1993_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v_moreLeanArgs_1994_);
lean_ctor_set(v_reuseFailAlloc_2018_, 2, v_weakLeanArgs_1995_);
lean_ctor_set(v_reuseFailAlloc_2018_, 3, v_moreLeancArgs_1997_);
lean_ctor_set(v_reuseFailAlloc_2018_, 4, v_moreServerOptions_1998_);
lean_ctor_set(v_reuseFailAlloc_2018_, 5, v_weakLeancArgs_1999_);
lean_ctor_set(v_reuseFailAlloc_2018_, 6, v_moreLinkObjs_2000_);
lean_ctor_set(v_reuseFailAlloc_2018_, 7, v_moreLinkLibs_2001_);
lean_ctor_set(v_reuseFailAlloc_2018_, 8, v_moreLinkArgs_2002_);
lean_ctor_set(v_reuseFailAlloc_2018_, 9, v_weakLinkArgs_2003_);
lean_ctor_set(v_reuseFailAlloc_2018_, 10, v_platformIndependent_2005_);
lean_ctor_set(v_reuseFailAlloc_2018_, 11, v_dynlibs_2006_);
lean_ctor_set(v_reuseFailAlloc_2018_, 12, v_plugins_2007_);
lean_ctor_set_uint8(v_reuseFailAlloc_2018_, sizeof(void*)*13, v_buildType_1992_);
lean_ctor_set_uint8(v_reuseFailAlloc_2018_, sizeof(void*)*13 + 1, v_useZigCodegen_1996_);
v___x_2016_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
uint8_t v___x_2017_; 
v___x_2017_ = lean_unbox(v___x_2014_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*13 + 2, v___x_2017_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2008_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*13 + 4, v_allowNonModules_2009_);
return v___x_2016_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_backend___proj___lam__3(lean_object* v_x_2020_){
_start:
{
uint8_t v___x_2021_; 
v___x_2021_ = 2;
return v___x_2021_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_backend___proj___lam__3___boxed(lean_object* v_x_2022_){
_start:
{
uint8_t v_res_2023_; lean_object* v_r_2024_; 
v_res_2023_ = l_Lake_LeanConfig_backend___proj___lam__3(v_x_2022_);
lean_dec_ref(v_x_2022_);
v_r_2024_ = lean_box(v_res_2023_);
return v_r_2024_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__0(lean_object* v_cfg_2036_){
_start:
{
lean_object* v_platformIndependent_2037_; 
v_platformIndependent_2037_ = lean_ctor_get(v_cfg_2036_, 10);
lean_inc(v_platformIndependent_2037_);
return v_platformIndependent_2037_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__0___boxed(lean_object* v_cfg_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lake_LeanConfig_platformIndependent___proj___lam__0(v_cfg_2038_);
lean_dec_ref(v_cfg_2038_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__1(lean_object* v_val_2040_, lean_object* v_cfg_2041_){
_start:
{
uint8_t v_buildType_2042_; lean_object* v_leanOptions_2043_; lean_object* v_moreLeanArgs_2044_; lean_object* v_weakLeanArgs_2045_; uint8_t v_useZigCodegen_2046_; lean_object* v_moreLeancArgs_2047_; lean_object* v_moreServerOptions_2048_; lean_object* v_weakLeancArgs_2049_; lean_object* v_moreLinkObjs_2050_; lean_object* v_moreLinkLibs_2051_; lean_object* v_moreLinkArgs_2052_; lean_object* v_weakLinkArgs_2053_; uint8_t v_backend_2054_; lean_object* v_dynlibs_2055_; lean_object* v_plugins_2056_; uint8_t v_requiresModuleSystem_2057_; uint8_t v_allowNonModules_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
v_buildType_2042_ = lean_ctor_get_uint8(v_cfg_2041_, sizeof(void*)*13);
v_leanOptions_2043_ = lean_ctor_get(v_cfg_2041_, 0);
v_moreLeanArgs_2044_ = lean_ctor_get(v_cfg_2041_, 1);
v_weakLeanArgs_2045_ = lean_ctor_get(v_cfg_2041_, 2);
v_useZigCodegen_2046_ = lean_ctor_get_uint8(v_cfg_2041_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2047_ = lean_ctor_get(v_cfg_2041_, 3);
v_moreServerOptions_2048_ = lean_ctor_get(v_cfg_2041_, 4);
v_weakLeancArgs_2049_ = lean_ctor_get(v_cfg_2041_, 5);
v_moreLinkObjs_2050_ = lean_ctor_get(v_cfg_2041_, 6);
v_moreLinkLibs_2051_ = lean_ctor_get(v_cfg_2041_, 7);
v_moreLinkArgs_2052_ = lean_ctor_get(v_cfg_2041_, 8);
v_weakLinkArgs_2053_ = lean_ctor_get(v_cfg_2041_, 9);
v_backend_2054_ = lean_ctor_get_uint8(v_cfg_2041_, sizeof(void*)*13 + 2);
v_dynlibs_2055_ = lean_ctor_get(v_cfg_2041_, 11);
v_plugins_2056_ = lean_ctor_get(v_cfg_2041_, 12);
v_requiresModuleSystem_2057_ = lean_ctor_get_uint8(v_cfg_2041_, sizeof(void*)*13 + 3);
v_allowNonModules_2058_ = lean_ctor_get_uint8(v_cfg_2041_, sizeof(void*)*13 + 4);
v_isSharedCheck_2065_ = !lean_is_exclusive(v_cfg_2041_);
if (v_isSharedCheck_2065_ == 0)
{
lean_object* v_unused_2066_; 
v_unused_2066_ = lean_ctor_get(v_cfg_2041_, 10);
lean_dec(v_unused_2066_);
v___x_2060_ = v_cfg_2041_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_plugins_2056_);
lean_inc(v_dynlibs_2055_);
lean_inc(v_weakLinkArgs_2053_);
lean_inc(v_moreLinkArgs_2052_);
lean_inc(v_moreLinkLibs_2051_);
lean_inc(v_moreLinkObjs_2050_);
lean_inc(v_weakLeancArgs_2049_);
lean_inc(v_moreServerOptions_2048_);
lean_inc(v_moreLeancArgs_2047_);
lean_inc(v_weakLeanArgs_2045_);
lean_inc(v_moreLeanArgs_2044_);
lean_inc(v_leanOptions_2043_);
lean_dec(v_cfg_2041_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 10, v_val_2040_);
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_leanOptions_2043_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_moreLeanArgs_2044_);
lean_ctor_set(v_reuseFailAlloc_2064_, 2, v_weakLeanArgs_2045_);
lean_ctor_set(v_reuseFailAlloc_2064_, 3, v_moreLeancArgs_2047_);
lean_ctor_set(v_reuseFailAlloc_2064_, 4, v_moreServerOptions_2048_);
lean_ctor_set(v_reuseFailAlloc_2064_, 5, v_weakLeancArgs_2049_);
lean_ctor_set(v_reuseFailAlloc_2064_, 6, v_moreLinkObjs_2050_);
lean_ctor_set(v_reuseFailAlloc_2064_, 7, v_moreLinkLibs_2051_);
lean_ctor_set(v_reuseFailAlloc_2064_, 8, v_moreLinkArgs_2052_);
lean_ctor_set(v_reuseFailAlloc_2064_, 9, v_weakLinkArgs_2053_);
lean_ctor_set(v_reuseFailAlloc_2064_, 10, v_val_2040_);
lean_ctor_set(v_reuseFailAlloc_2064_, 11, v_dynlibs_2055_);
lean_ctor_set(v_reuseFailAlloc_2064_, 12, v_plugins_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*13, v_buildType_2042_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*13 + 1, v_useZigCodegen_2046_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*13 + 2, v_backend_2054_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2057_);
lean_ctor_set_uint8(v_reuseFailAlloc_2064_, sizeof(void*)*13 + 4, v_allowNonModules_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__2(lean_object* v_f_2067_, lean_object* v_cfg_2068_){
_start:
{
uint8_t v_buildType_2069_; lean_object* v_leanOptions_2070_; lean_object* v_moreLeanArgs_2071_; lean_object* v_weakLeanArgs_2072_; uint8_t v_useZigCodegen_2073_; lean_object* v_moreLeancArgs_2074_; lean_object* v_moreServerOptions_2075_; lean_object* v_weakLeancArgs_2076_; lean_object* v_moreLinkObjs_2077_; lean_object* v_moreLinkLibs_2078_; lean_object* v_moreLinkArgs_2079_; lean_object* v_weakLinkArgs_2080_; uint8_t v_backend_2081_; lean_object* v_platformIndependent_2082_; lean_object* v_dynlibs_2083_; lean_object* v_plugins_2084_; uint8_t v_requiresModuleSystem_2085_; uint8_t v_allowNonModules_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2094_; 
v_buildType_2069_ = lean_ctor_get_uint8(v_cfg_2068_, sizeof(void*)*13);
v_leanOptions_2070_ = lean_ctor_get(v_cfg_2068_, 0);
v_moreLeanArgs_2071_ = lean_ctor_get(v_cfg_2068_, 1);
v_weakLeanArgs_2072_ = lean_ctor_get(v_cfg_2068_, 2);
v_useZigCodegen_2073_ = lean_ctor_get_uint8(v_cfg_2068_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2074_ = lean_ctor_get(v_cfg_2068_, 3);
v_moreServerOptions_2075_ = lean_ctor_get(v_cfg_2068_, 4);
v_weakLeancArgs_2076_ = lean_ctor_get(v_cfg_2068_, 5);
v_moreLinkObjs_2077_ = lean_ctor_get(v_cfg_2068_, 6);
v_moreLinkLibs_2078_ = lean_ctor_get(v_cfg_2068_, 7);
v_moreLinkArgs_2079_ = lean_ctor_get(v_cfg_2068_, 8);
v_weakLinkArgs_2080_ = lean_ctor_get(v_cfg_2068_, 9);
v_backend_2081_ = lean_ctor_get_uint8(v_cfg_2068_, sizeof(void*)*13 + 2);
v_platformIndependent_2082_ = lean_ctor_get(v_cfg_2068_, 10);
v_dynlibs_2083_ = lean_ctor_get(v_cfg_2068_, 11);
v_plugins_2084_ = lean_ctor_get(v_cfg_2068_, 12);
v_requiresModuleSystem_2085_ = lean_ctor_get_uint8(v_cfg_2068_, sizeof(void*)*13 + 3);
v_allowNonModules_2086_ = lean_ctor_get_uint8(v_cfg_2068_, sizeof(void*)*13 + 4);
v_isSharedCheck_2094_ = !lean_is_exclusive(v_cfg_2068_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2088_ = v_cfg_2068_;
v_isShared_2089_ = v_isSharedCheck_2094_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_plugins_2084_);
lean_inc(v_dynlibs_2083_);
lean_inc(v_platformIndependent_2082_);
lean_inc(v_weakLinkArgs_2080_);
lean_inc(v_moreLinkArgs_2079_);
lean_inc(v_moreLinkLibs_2078_);
lean_inc(v_moreLinkObjs_2077_);
lean_inc(v_weakLeancArgs_2076_);
lean_inc(v_moreServerOptions_2075_);
lean_inc(v_moreLeancArgs_2074_);
lean_inc(v_weakLeanArgs_2072_);
lean_inc(v_moreLeanArgs_2071_);
lean_inc(v_leanOptions_2070_);
lean_dec(v_cfg_2068_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2094_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2090_; lean_object* v___x_2092_; 
v___x_2090_ = lean_apply_1(v_f_2067_, v_platformIndependent_2082_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 10, v___x_2090_);
v___x_2092_ = v___x_2088_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_leanOptions_2070_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v_moreLeanArgs_2071_);
lean_ctor_set(v_reuseFailAlloc_2093_, 2, v_weakLeanArgs_2072_);
lean_ctor_set(v_reuseFailAlloc_2093_, 3, v_moreLeancArgs_2074_);
lean_ctor_set(v_reuseFailAlloc_2093_, 4, v_moreServerOptions_2075_);
lean_ctor_set(v_reuseFailAlloc_2093_, 5, v_weakLeancArgs_2076_);
lean_ctor_set(v_reuseFailAlloc_2093_, 6, v_moreLinkObjs_2077_);
lean_ctor_set(v_reuseFailAlloc_2093_, 7, v_moreLinkLibs_2078_);
lean_ctor_set(v_reuseFailAlloc_2093_, 8, v_moreLinkArgs_2079_);
lean_ctor_set(v_reuseFailAlloc_2093_, 9, v_weakLinkArgs_2080_);
lean_ctor_set(v_reuseFailAlloc_2093_, 10, v___x_2090_);
lean_ctor_set(v_reuseFailAlloc_2093_, 11, v_dynlibs_2083_);
lean_ctor_set(v_reuseFailAlloc_2093_, 12, v_plugins_2084_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*13, v_buildType_2069_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*13 + 1, v_useZigCodegen_2073_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*13 + 2, v_backend_2081_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2085_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*13 + 4, v_allowNonModules_2086_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__3(lean_object* v_x_2095_){
_start:
{
lean_object* v___x_2096_; 
v___x_2096_ = lean_box(0);
return v___x_2096_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_platformIndependent___proj___lam__3___boxed(lean_object* v_x_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lake_LeanConfig_platformIndependent___proj___lam__3(v_x_2097_);
lean_dec_ref(v_x_2097_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__0(lean_object* v_cfg_2110_){
_start:
{
lean_object* v_dynlibs_2111_; 
v_dynlibs_2111_ = lean_ctor_get(v_cfg_2110_, 11);
lean_inc_ref(v_dynlibs_2111_);
return v_dynlibs_2111_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__0___boxed(lean_object* v_cfg_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Lake_LeanConfig_dynlibs___proj___lam__0(v_cfg_2112_);
lean_dec_ref(v_cfg_2112_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__1(lean_object* v_val_2114_, lean_object* v_cfg_2115_){
_start:
{
uint8_t v_buildType_2116_; lean_object* v_leanOptions_2117_; lean_object* v_moreLeanArgs_2118_; lean_object* v_weakLeanArgs_2119_; uint8_t v_useZigCodegen_2120_; lean_object* v_moreLeancArgs_2121_; lean_object* v_moreServerOptions_2122_; lean_object* v_weakLeancArgs_2123_; lean_object* v_moreLinkObjs_2124_; lean_object* v_moreLinkLibs_2125_; lean_object* v_moreLinkArgs_2126_; lean_object* v_weakLinkArgs_2127_; uint8_t v_backend_2128_; lean_object* v_platformIndependent_2129_; lean_object* v_plugins_2130_; uint8_t v_requiresModuleSystem_2131_; uint8_t v_allowNonModules_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
v_buildType_2116_ = lean_ctor_get_uint8(v_cfg_2115_, sizeof(void*)*13);
v_leanOptions_2117_ = lean_ctor_get(v_cfg_2115_, 0);
v_moreLeanArgs_2118_ = lean_ctor_get(v_cfg_2115_, 1);
v_weakLeanArgs_2119_ = lean_ctor_get(v_cfg_2115_, 2);
v_useZigCodegen_2120_ = lean_ctor_get_uint8(v_cfg_2115_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2121_ = lean_ctor_get(v_cfg_2115_, 3);
v_moreServerOptions_2122_ = lean_ctor_get(v_cfg_2115_, 4);
v_weakLeancArgs_2123_ = lean_ctor_get(v_cfg_2115_, 5);
v_moreLinkObjs_2124_ = lean_ctor_get(v_cfg_2115_, 6);
v_moreLinkLibs_2125_ = lean_ctor_get(v_cfg_2115_, 7);
v_moreLinkArgs_2126_ = lean_ctor_get(v_cfg_2115_, 8);
v_weakLinkArgs_2127_ = lean_ctor_get(v_cfg_2115_, 9);
v_backend_2128_ = lean_ctor_get_uint8(v_cfg_2115_, sizeof(void*)*13 + 2);
v_platformIndependent_2129_ = lean_ctor_get(v_cfg_2115_, 10);
v_plugins_2130_ = lean_ctor_get(v_cfg_2115_, 12);
v_requiresModuleSystem_2131_ = lean_ctor_get_uint8(v_cfg_2115_, sizeof(void*)*13 + 3);
v_allowNonModules_2132_ = lean_ctor_get_uint8(v_cfg_2115_, sizeof(void*)*13 + 4);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_cfg_2115_);
if (v_isSharedCheck_2139_ == 0)
{
lean_object* v_unused_2140_; 
v_unused_2140_ = lean_ctor_get(v_cfg_2115_, 11);
lean_dec(v_unused_2140_);
v___x_2134_ = v_cfg_2115_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_plugins_2130_);
lean_inc(v_platformIndependent_2129_);
lean_inc(v_weakLinkArgs_2127_);
lean_inc(v_moreLinkArgs_2126_);
lean_inc(v_moreLinkLibs_2125_);
lean_inc(v_moreLinkObjs_2124_);
lean_inc(v_weakLeancArgs_2123_);
lean_inc(v_moreServerOptions_2122_);
lean_inc(v_moreLeancArgs_2121_);
lean_inc(v_weakLeanArgs_2119_);
lean_inc(v_moreLeanArgs_2118_);
lean_inc(v_leanOptions_2117_);
lean_dec(v_cfg_2115_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
lean_ctor_set(v___x_2134_, 11, v_val_2114_);
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_leanOptions_2117_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_moreLeanArgs_2118_);
lean_ctor_set(v_reuseFailAlloc_2138_, 2, v_weakLeanArgs_2119_);
lean_ctor_set(v_reuseFailAlloc_2138_, 3, v_moreLeancArgs_2121_);
lean_ctor_set(v_reuseFailAlloc_2138_, 4, v_moreServerOptions_2122_);
lean_ctor_set(v_reuseFailAlloc_2138_, 5, v_weakLeancArgs_2123_);
lean_ctor_set(v_reuseFailAlloc_2138_, 6, v_moreLinkObjs_2124_);
lean_ctor_set(v_reuseFailAlloc_2138_, 7, v_moreLinkLibs_2125_);
lean_ctor_set(v_reuseFailAlloc_2138_, 8, v_moreLinkArgs_2126_);
lean_ctor_set(v_reuseFailAlloc_2138_, 9, v_weakLinkArgs_2127_);
lean_ctor_set(v_reuseFailAlloc_2138_, 10, v_platformIndependent_2129_);
lean_ctor_set(v_reuseFailAlloc_2138_, 11, v_val_2114_);
lean_ctor_set(v_reuseFailAlloc_2138_, 12, v_plugins_2130_);
lean_ctor_set_uint8(v_reuseFailAlloc_2138_, sizeof(void*)*13, v_buildType_2116_);
lean_ctor_set_uint8(v_reuseFailAlloc_2138_, sizeof(void*)*13 + 1, v_useZigCodegen_2120_);
lean_ctor_set_uint8(v_reuseFailAlloc_2138_, sizeof(void*)*13 + 2, v_backend_2128_);
lean_ctor_set_uint8(v_reuseFailAlloc_2138_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2131_);
lean_ctor_set_uint8(v_reuseFailAlloc_2138_, sizeof(void*)*13 + 4, v_allowNonModules_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_dynlibs___proj___lam__2(lean_object* v_f_2141_, lean_object* v_cfg_2142_){
_start:
{
uint8_t v_buildType_2143_; lean_object* v_leanOptions_2144_; lean_object* v_moreLeanArgs_2145_; lean_object* v_weakLeanArgs_2146_; uint8_t v_useZigCodegen_2147_; lean_object* v_moreLeancArgs_2148_; lean_object* v_moreServerOptions_2149_; lean_object* v_weakLeancArgs_2150_; lean_object* v_moreLinkObjs_2151_; lean_object* v_moreLinkLibs_2152_; lean_object* v_moreLinkArgs_2153_; lean_object* v_weakLinkArgs_2154_; uint8_t v_backend_2155_; lean_object* v_platformIndependent_2156_; lean_object* v_dynlibs_2157_; lean_object* v_plugins_2158_; uint8_t v_requiresModuleSystem_2159_; uint8_t v_allowNonModules_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2168_; 
v_buildType_2143_ = lean_ctor_get_uint8(v_cfg_2142_, sizeof(void*)*13);
v_leanOptions_2144_ = lean_ctor_get(v_cfg_2142_, 0);
v_moreLeanArgs_2145_ = lean_ctor_get(v_cfg_2142_, 1);
v_weakLeanArgs_2146_ = lean_ctor_get(v_cfg_2142_, 2);
v_useZigCodegen_2147_ = lean_ctor_get_uint8(v_cfg_2142_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2148_ = lean_ctor_get(v_cfg_2142_, 3);
v_moreServerOptions_2149_ = lean_ctor_get(v_cfg_2142_, 4);
v_weakLeancArgs_2150_ = lean_ctor_get(v_cfg_2142_, 5);
v_moreLinkObjs_2151_ = lean_ctor_get(v_cfg_2142_, 6);
v_moreLinkLibs_2152_ = lean_ctor_get(v_cfg_2142_, 7);
v_moreLinkArgs_2153_ = lean_ctor_get(v_cfg_2142_, 8);
v_weakLinkArgs_2154_ = lean_ctor_get(v_cfg_2142_, 9);
v_backend_2155_ = lean_ctor_get_uint8(v_cfg_2142_, sizeof(void*)*13 + 2);
v_platformIndependent_2156_ = lean_ctor_get(v_cfg_2142_, 10);
v_dynlibs_2157_ = lean_ctor_get(v_cfg_2142_, 11);
v_plugins_2158_ = lean_ctor_get(v_cfg_2142_, 12);
v_requiresModuleSystem_2159_ = lean_ctor_get_uint8(v_cfg_2142_, sizeof(void*)*13 + 3);
v_allowNonModules_2160_ = lean_ctor_get_uint8(v_cfg_2142_, sizeof(void*)*13 + 4);
v_isSharedCheck_2168_ = !lean_is_exclusive(v_cfg_2142_);
if (v_isSharedCheck_2168_ == 0)
{
v___x_2162_ = v_cfg_2142_;
v_isShared_2163_ = v_isSharedCheck_2168_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_plugins_2158_);
lean_inc(v_dynlibs_2157_);
lean_inc(v_platformIndependent_2156_);
lean_inc(v_weakLinkArgs_2154_);
lean_inc(v_moreLinkArgs_2153_);
lean_inc(v_moreLinkLibs_2152_);
lean_inc(v_moreLinkObjs_2151_);
lean_inc(v_weakLeancArgs_2150_);
lean_inc(v_moreServerOptions_2149_);
lean_inc(v_moreLeancArgs_2148_);
lean_inc(v_weakLeanArgs_2146_);
lean_inc(v_moreLeanArgs_2145_);
lean_inc(v_leanOptions_2144_);
lean_dec(v_cfg_2142_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2168_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2164_ = lean_apply_1(v_f_2141_, v_dynlibs_2157_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 11, v___x_2164_);
v___x_2166_ = v___x_2162_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v_leanOptions_2144_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_moreLeanArgs_2145_);
lean_ctor_set(v_reuseFailAlloc_2167_, 2, v_weakLeanArgs_2146_);
lean_ctor_set(v_reuseFailAlloc_2167_, 3, v_moreLeancArgs_2148_);
lean_ctor_set(v_reuseFailAlloc_2167_, 4, v_moreServerOptions_2149_);
lean_ctor_set(v_reuseFailAlloc_2167_, 5, v_weakLeancArgs_2150_);
lean_ctor_set(v_reuseFailAlloc_2167_, 6, v_moreLinkObjs_2151_);
lean_ctor_set(v_reuseFailAlloc_2167_, 7, v_moreLinkLibs_2152_);
lean_ctor_set(v_reuseFailAlloc_2167_, 8, v_moreLinkArgs_2153_);
lean_ctor_set(v_reuseFailAlloc_2167_, 9, v_weakLinkArgs_2154_);
lean_ctor_set(v_reuseFailAlloc_2167_, 10, v_platformIndependent_2156_);
lean_ctor_set(v_reuseFailAlloc_2167_, 11, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2167_, 12, v_plugins_2158_);
lean_ctor_set_uint8(v_reuseFailAlloc_2167_, sizeof(void*)*13, v_buildType_2143_);
lean_ctor_set_uint8(v_reuseFailAlloc_2167_, sizeof(void*)*13 + 1, v_useZigCodegen_2147_);
lean_ctor_set_uint8(v_reuseFailAlloc_2167_, sizeof(void*)*13 + 2, v_backend_2155_);
lean_ctor_set_uint8(v_reuseFailAlloc_2167_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2159_);
lean_ctor_set_uint8(v_reuseFailAlloc_2167_, sizeof(void*)*13 + 4, v_allowNonModules_2160_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__0(lean_object* v_cfg_2179_){
_start:
{
lean_object* v_plugins_2180_; 
v_plugins_2180_ = lean_ctor_get(v_cfg_2179_, 12);
lean_inc_ref(v_plugins_2180_);
return v_plugins_2180_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__0___boxed(lean_object* v_cfg_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l_Lake_LeanConfig_plugins___proj___lam__0(v_cfg_2181_);
lean_dec_ref(v_cfg_2181_);
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__1(lean_object* v_val_2183_, lean_object* v_cfg_2184_){
_start:
{
uint8_t v_buildType_2185_; lean_object* v_leanOptions_2186_; lean_object* v_moreLeanArgs_2187_; lean_object* v_weakLeanArgs_2188_; uint8_t v_useZigCodegen_2189_; lean_object* v_moreLeancArgs_2190_; lean_object* v_moreServerOptions_2191_; lean_object* v_weakLeancArgs_2192_; lean_object* v_moreLinkObjs_2193_; lean_object* v_moreLinkLibs_2194_; lean_object* v_moreLinkArgs_2195_; lean_object* v_weakLinkArgs_2196_; uint8_t v_backend_2197_; lean_object* v_platformIndependent_2198_; lean_object* v_dynlibs_2199_; uint8_t v_requiresModuleSystem_2200_; uint8_t v_allowNonModules_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
v_buildType_2185_ = lean_ctor_get_uint8(v_cfg_2184_, sizeof(void*)*13);
v_leanOptions_2186_ = lean_ctor_get(v_cfg_2184_, 0);
v_moreLeanArgs_2187_ = lean_ctor_get(v_cfg_2184_, 1);
v_weakLeanArgs_2188_ = lean_ctor_get(v_cfg_2184_, 2);
v_useZigCodegen_2189_ = lean_ctor_get_uint8(v_cfg_2184_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2190_ = lean_ctor_get(v_cfg_2184_, 3);
v_moreServerOptions_2191_ = lean_ctor_get(v_cfg_2184_, 4);
v_weakLeancArgs_2192_ = lean_ctor_get(v_cfg_2184_, 5);
v_moreLinkObjs_2193_ = lean_ctor_get(v_cfg_2184_, 6);
v_moreLinkLibs_2194_ = lean_ctor_get(v_cfg_2184_, 7);
v_moreLinkArgs_2195_ = lean_ctor_get(v_cfg_2184_, 8);
v_weakLinkArgs_2196_ = lean_ctor_get(v_cfg_2184_, 9);
v_backend_2197_ = lean_ctor_get_uint8(v_cfg_2184_, sizeof(void*)*13 + 2);
v_platformIndependent_2198_ = lean_ctor_get(v_cfg_2184_, 10);
v_dynlibs_2199_ = lean_ctor_get(v_cfg_2184_, 11);
v_requiresModuleSystem_2200_ = lean_ctor_get_uint8(v_cfg_2184_, sizeof(void*)*13 + 3);
v_allowNonModules_2201_ = lean_ctor_get_uint8(v_cfg_2184_, sizeof(void*)*13 + 4);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_cfg_2184_);
if (v_isSharedCheck_2208_ == 0)
{
lean_object* v_unused_2209_; 
v_unused_2209_ = lean_ctor_get(v_cfg_2184_, 12);
lean_dec(v_unused_2209_);
v___x_2203_ = v_cfg_2184_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_dynlibs_2199_);
lean_inc(v_platformIndependent_2198_);
lean_inc(v_weakLinkArgs_2196_);
lean_inc(v_moreLinkArgs_2195_);
lean_inc(v_moreLinkLibs_2194_);
lean_inc(v_moreLinkObjs_2193_);
lean_inc(v_weakLeancArgs_2192_);
lean_inc(v_moreServerOptions_2191_);
lean_inc(v_moreLeancArgs_2190_);
lean_inc(v_weakLeanArgs_2188_);
lean_inc(v_moreLeanArgs_2187_);
lean_inc(v_leanOptions_2186_);
lean_dec(v_cfg_2184_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 12, v_val_2183_);
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_leanOptions_2186_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v_moreLeanArgs_2187_);
lean_ctor_set(v_reuseFailAlloc_2207_, 2, v_weakLeanArgs_2188_);
lean_ctor_set(v_reuseFailAlloc_2207_, 3, v_moreLeancArgs_2190_);
lean_ctor_set(v_reuseFailAlloc_2207_, 4, v_moreServerOptions_2191_);
lean_ctor_set(v_reuseFailAlloc_2207_, 5, v_weakLeancArgs_2192_);
lean_ctor_set(v_reuseFailAlloc_2207_, 6, v_moreLinkObjs_2193_);
lean_ctor_set(v_reuseFailAlloc_2207_, 7, v_moreLinkLibs_2194_);
lean_ctor_set(v_reuseFailAlloc_2207_, 8, v_moreLinkArgs_2195_);
lean_ctor_set(v_reuseFailAlloc_2207_, 9, v_weakLinkArgs_2196_);
lean_ctor_set(v_reuseFailAlloc_2207_, 10, v_platformIndependent_2198_);
lean_ctor_set(v_reuseFailAlloc_2207_, 11, v_dynlibs_2199_);
lean_ctor_set(v_reuseFailAlloc_2207_, 12, v_val_2183_);
lean_ctor_set_uint8(v_reuseFailAlloc_2207_, sizeof(void*)*13, v_buildType_2185_);
lean_ctor_set_uint8(v_reuseFailAlloc_2207_, sizeof(void*)*13 + 1, v_useZigCodegen_2189_);
lean_ctor_set_uint8(v_reuseFailAlloc_2207_, sizeof(void*)*13 + 2, v_backend_2197_);
lean_ctor_set_uint8(v_reuseFailAlloc_2207_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2200_);
lean_ctor_set_uint8(v_reuseFailAlloc_2207_, sizeof(void*)*13 + 4, v_allowNonModules_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_plugins___proj___lam__2(lean_object* v_f_2210_, lean_object* v_cfg_2211_){
_start:
{
uint8_t v_buildType_2212_; lean_object* v_leanOptions_2213_; lean_object* v_moreLeanArgs_2214_; lean_object* v_weakLeanArgs_2215_; uint8_t v_useZigCodegen_2216_; lean_object* v_moreLeancArgs_2217_; lean_object* v_moreServerOptions_2218_; lean_object* v_weakLeancArgs_2219_; lean_object* v_moreLinkObjs_2220_; lean_object* v_moreLinkLibs_2221_; lean_object* v_moreLinkArgs_2222_; lean_object* v_weakLinkArgs_2223_; uint8_t v_backend_2224_; lean_object* v_platformIndependent_2225_; lean_object* v_dynlibs_2226_; lean_object* v_plugins_2227_; uint8_t v_requiresModuleSystem_2228_; uint8_t v_allowNonModules_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2237_; 
v_buildType_2212_ = lean_ctor_get_uint8(v_cfg_2211_, sizeof(void*)*13);
v_leanOptions_2213_ = lean_ctor_get(v_cfg_2211_, 0);
v_moreLeanArgs_2214_ = lean_ctor_get(v_cfg_2211_, 1);
v_weakLeanArgs_2215_ = lean_ctor_get(v_cfg_2211_, 2);
v_useZigCodegen_2216_ = lean_ctor_get_uint8(v_cfg_2211_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2217_ = lean_ctor_get(v_cfg_2211_, 3);
v_moreServerOptions_2218_ = lean_ctor_get(v_cfg_2211_, 4);
v_weakLeancArgs_2219_ = lean_ctor_get(v_cfg_2211_, 5);
v_moreLinkObjs_2220_ = lean_ctor_get(v_cfg_2211_, 6);
v_moreLinkLibs_2221_ = lean_ctor_get(v_cfg_2211_, 7);
v_moreLinkArgs_2222_ = lean_ctor_get(v_cfg_2211_, 8);
v_weakLinkArgs_2223_ = lean_ctor_get(v_cfg_2211_, 9);
v_backend_2224_ = lean_ctor_get_uint8(v_cfg_2211_, sizeof(void*)*13 + 2);
v_platformIndependent_2225_ = lean_ctor_get(v_cfg_2211_, 10);
v_dynlibs_2226_ = lean_ctor_get(v_cfg_2211_, 11);
v_plugins_2227_ = lean_ctor_get(v_cfg_2211_, 12);
v_requiresModuleSystem_2228_ = lean_ctor_get_uint8(v_cfg_2211_, sizeof(void*)*13 + 3);
v_allowNonModules_2229_ = lean_ctor_get_uint8(v_cfg_2211_, sizeof(void*)*13 + 4);
v_isSharedCheck_2237_ = !lean_is_exclusive(v_cfg_2211_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2231_ = v_cfg_2211_;
v_isShared_2232_ = v_isSharedCheck_2237_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_plugins_2227_);
lean_inc(v_dynlibs_2226_);
lean_inc(v_platformIndependent_2225_);
lean_inc(v_weakLinkArgs_2223_);
lean_inc(v_moreLinkArgs_2222_);
lean_inc(v_moreLinkLibs_2221_);
lean_inc(v_moreLinkObjs_2220_);
lean_inc(v_weakLeancArgs_2219_);
lean_inc(v_moreServerOptions_2218_);
lean_inc(v_moreLeancArgs_2217_);
lean_inc(v_weakLeanArgs_2215_);
lean_inc(v_moreLeanArgs_2214_);
lean_inc(v_leanOptions_2213_);
lean_dec(v_cfg_2211_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2237_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2233_; lean_object* v___x_2235_; 
v___x_2233_ = lean_apply_1(v_f_2210_, v_plugins_2227_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 12, v___x_2233_);
v___x_2235_ = v___x_2231_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_leanOptions_2213_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_moreLeanArgs_2214_);
lean_ctor_set(v_reuseFailAlloc_2236_, 2, v_weakLeanArgs_2215_);
lean_ctor_set(v_reuseFailAlloc_2236_, 3, v_moreLeancArgs_2217_);
lean_ctor_set(v_reuseFailAlloc_2236_, 4, v_moreServerOptions_2218_);
lean_ctor_set(v_reuseFailAlloc_2236_, 5, v_weakLeancArgs_2219_);
lean_ctor_set(v_reuseFailAlloc_2236_, 6, v_moreLinkObjs_2220_);
lean_ctor_set(v_reuseFailAlloc_2236_, 7, v_moreLinkLibs_2221_);
lean_ctor_set(v_reuseFailAlloc_2236_, 8, v_moreLinkArgs_2222_);
lean_ctor_set(v_reuseFailAlloc_2236_, 9, v_weakLinkArgs_2223_);
lean_ctor_set(v_reuseFailAlloc_2236_, 10, v_platformIndependent_2225_);
lean_ctor_set(v_reuseFailAlloc_2236_, 11, v_dynlibs_2226_);
lean_ctor_set(v_reuseFailAlloc_2236_, 12, v___x_2233_);
lean_ctor_set_uint8(v_reuseFailAlloc_2236_, sizeof(void*)*13, v_buildType_2212_);
lean_ctor_set_uint8(v_reuseFailAlloc_2236_, sizeof(void*)*13 + 1, v_useZigCodegen_2216_);
lean_ctor_set_uint8(v_reuseFailAlloc_2236_, sizeof(void*)*13 + 2, v_backend_2224_);
lean_ctor_set_uint8(v_reuseFailAlloc_2236_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2228_);
lean_ctor_set_uint8(v_reuseFailAlloc_2236_, sizeof(void*)*13 + 4, v_allowNonModules_2229_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_requiresModuleSystem___proj___lam__0(lean_object* v_cfg_2248_){
_start:
{
uint8_t v_requiresModuleSystem_2249_; 
v_requiresModuleSystem_2249_ = lean_ctor_get_uint8(v_cfg_2248_, sizeof(void*)*13 + 3);
return v_requiresModuleSystem_2249_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__0___boxed(lean_object* v_cfg_2250_){
_start:
{
uint8_t v_res_2251_; lean_object* v_r_2252_; 
v_res_2251_ = l_Lake_LeanConfig_requiresModuleSystem___proj___lam__0(v_cfg_2250_);
lean_dec_ref(v_cfg_2250_);
v_r_2252_ = lean_box(v_res_2251_);
return v_r_2252_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__1(uint8_t v_val_2253_, lean_object* v_cfg_2254_){
_start:
{
uint8_t v_buildType_2255_; lean_object* v_leanOptions_2256_; lean_object* v_moreLeanArgs_2257_; lean_object* v_weakLeanArgs_2258_; uint8_t v_useZigCodegen_2259_; lean_object* v_moreLeancArgs_2260_; lean_object* v_moreServerOptions_2261_; lean_object* v_weakLeancArgs_2262_; lean_object* v_moreLinkObjs_2263_; lean_object* v_moreLinkLibs_2264_; lean_object* v_moreLinkArgs_2265_; lean_object* v_weakLinkArgs_2266_; uint8_t v_backend_2267_; lean_object* v_platformIndependent_2268_; lean_object* v_dynlibs_2269_; lean_object* v_plugins_2270_; uint8_t v_allowNonModules_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
v_buildType_2255_ = lean_ctor_get_uint8(v_cfg_2254_, sizeof(void*)*13);
v_leanOptions_2256_ = lean_ctor_get(v_cfg_2254_, 0);
v_moreLeanArgs_2257_ = lean_ctor_get(v_cfg_2254_, 1);
v_weakLeanArgs_2258_ = lean_ctor_get(v_cfg_2254_, 2);
v_useZigCodegen_2259_ = lean_ctor_get_uint8(v_cfg_2254_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2260_ = lean_ctor_get(v_cfg_2254_, 3);
v_moreServerOptions_2261_ = lean_ctor_get(v_cfg_2254_, 4);
v_weakLeancArgs_2262_ = lean_ctor_get(v_cfg_2254_, 5);
v_moreLinkObjs_2263_ = lean_ctor_get(v_cfg_2254_, 6);
v_moreLinkLibs_2264_ = lean_ctor_get(v_cfg_2254_, 7);
v_moreLinkArgs_2265_ = lean_ctor_get(v_cfg_2254_, 8);
v_weakLinkArgs_2266_ = lean_ctor_get(v_cfg_2254_, 9);
v_backend_2267_ = lean_ctor_get_uint8(v_cfg_2254_, sizeof(void*)*13 + 2);
v_platformIndependent_2268_ = lean_ctor_get(v_cfg_2254_, 10);
v_dynlibs_2269_ = lean_ctor_get(v_cfg_2254_, 11);
v_plugins_2270_ = lean_ctor_get(v_cfg_2254_, 12);
v_allowNonModules_2271_ = lean_ctor_get_uint8(v_cfg_2254_, sizeof(void*)*13 + 4);
v_isSharedCheck_2278_ = !lean_is_exclusive(v_cfg_2254_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v_cfg_2254_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_plugins_2270_);
lean_inc(v_dynlibs_2269_);
lean_inc(v_platformIndependent_2268_);
lean_inc(v_weakLinkArgs_2266_);
lean_inc(v_moreLinkArgs_2265_);
lean_inc(v_moreLinkLibs_2264_);
lean_inc(v_moreLinkObjs_2263_);
lean_inc(v_weakLeancArgs_2262_);
lean_inc(v_moreServerOptions_2261_);
lean_inc(v_moreLeancArgs_2260_);
lean_inc(v_weakLeanArgs_2258_);
lean_inc(v_moreLeanArgs_2257_);
lean_inc(v_leanOptions_2256_);
lean_dec(v_cfg_2254_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_leanOptions_2256_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v_moreLeanArgs_2257_);
lean_ctor_set(v_reuseFailAlloc_2277_, 2, v_weakLeanArgs_2258_);
lean_ctor_set(v_reuseFailAlloc_2277_, 3, v_moreLeancArgs_2260_);
lean_ctor_set(v_reuseFailAlloc_2277_, 4, v_moreServerOptions_2261_);
lean_ctor_set(v_reuseFailAlloc_2277_, 5, v_weakLeancArgs_2262_);
lean_ctor_set(v_reuseFailAlloc_2277_, 6, v_moreLinkObjs_2263_);
lean_ctor_set(v_reuseFailAlloc_2277_, 7, v_moreLinkLibs_2264_);
lean_ctor_set(v_reuseFailAlloc_2277_, 8, v_moreLinkArgs_2265_);
lean_ctor_set(v_reuseFailAlloc_2277_, 9, v_weakLinkArgs_2266_);
lean_ctor_set(v_reuseFailAlloc_2277_, 10, v_platformIndependent_2268_);
lean_ctor_set(v_reuseFailAlloc_2277_, 11, v_dynlibs_2269_);
lean_ctor_set(v_reuseFailAlloc_2277_, 12, v_plugins_2270_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*13, v_buildType_2255_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*13 + 1, v_useZigCodegen_2259_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*13 + 2, v_backend_2267_);
lean_ctor_set_uint8(v_reuseFailAlloc_2277_, sizeof(void*)*13 + 4, v_allowNonModules_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_ctor_set_uint8(v___x_2276_, sizeof(void*)*13 + 3, v_val_2253_);
return v___x_2276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__1___boxed(lean_object* v_val_2279_, lean_object* v_cfg_2280_){
_start:
{
uint8_t v_val_88__boxed_2281_; lean_object* v_res_2282_; 
v_val_88__boxed_2281_ = lean_unbox(v_val_2279_);
v_res_2282_ = l_Lake_LeanConfig_requiresModuleSystem___proj___lam__1(v_val_88__boxed_2281_, v_cfg_2280_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_requiresModuleSystem___proj___lam__2(lean_object* v_f_2283_, lean_object* v_cfg_2284_){
_start:
{
uint8_t v_buildType_2285_; lean_object* v_leanOptions_2286_; lean_object* v_moreLeanArgs_2287_; lean_object* v_weakLeanArgs_2288_; uint8_t v_useZigCodegen_2289_; lean_object* v_moreLeancArgs_2290_; lean_object* v_moreServerOptions_2291_; lean_object* v_weakLeancArgs_2292_; lean_object* v_moreLinkObjs_2293_; lean_object* v_moreLinkLibs_2294_; lean_object* v_moreLinkArgs_2295_; lean_object* v_weakLinkArgs_2296_; uint8_t v_backend_2297_; lean_object* v_platformIndependent_2298_; lean_object* v_dynlibs_2299_; lean_object* v_plugins_2300_; uint8_t v_requiresModuleSystem_2301_; uint8_t v_allowNonModules_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2312_; 
v_buildType_2285_ = lean_ctor_get_uint8(v_cfg_2284_, sizeof(void*)*13);
v_leanOptions_2286_ = lean_ctor_get(v_cfg_2284_, 0);
v_moreLeanArgs_2287_ = lean_ctor_get(v_cfg_2284_, 1);
v_weakLeanArgs_2288_ = lean_ctor_get(v_cfg_2284_, 2);
v_useZigCodegen_2289_ = lean_ctor_get_uint8(v_cfg_2284_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2290_ = lean_ctor_get(v_cfg_2284_, 3);
v_moreServerOptions_2291_ = lean_ctor_get(v_cfg_2284_, 4);
v_weakLeancArgs_2292_ = lean_ctor_get(v_cfg_2284_, 5);
v_moreLinkObjs_2293_ = lean_ctor_get(v_cfg_2284_, 6);
v_moreLinkLibs_2294_ = lean_ctor_get(v_cfg_2284_, 7);
v_moreLinkArgs_2295_ = lean_ctor_get(v_cfg_2284_, 8);
v_weakLinkArgs_2296_ = lean_ctor_get(v_cfg_2284_, 9);
v_backend_2297_ = lean_ctor_get_uint8(v_cfg_2284_, sizeof(void*)*13 + 2);
v_platformIndependent_2298_ = lean_ctor_get(v_cfg_2284_, 10);
v_dynlibs_2299_ = lean_ctor_get(v_cfg_2284_, 11);
v_plugins_2300_ = lean_ctor_get(v_cfg_2284_, 12);
v_requiresModuleSystem_2301_ = lean_ctor_get_uint8(v_cfg_2284_, sizeof(void*)*13 + 3);
v_allowNonModules_2302_ = lean_ctor_get_uint8(v_cfg_2284_, sizeof(void*)*13 + 4);
v_isSharedCheck_2312_ = !lean_is_exclusive(v_cfg_2284_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2304_ = v_cfg_2284_;
v_isShared_2305_ = v_isSharedCheck_2312_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_plugins_2300_);
lean_inc(v_dynlibs_2299_);
lean_inc(v_platformIndependent_2298_);
lean_inc(v_weakLinkArgs_2296_);
lean_inc(v_moreLinkArgs_2295_);
lean_inc(v_moreLinkLibs_2294_);
lean_inc(v_moreLinkObjs_2293_);
lean_inc(v_weakLeancArgs_2292_);
lean_inc(v_moreServerOptions_2291_);
lean_inc(v_moreLeancArgs_2290_);
lean_inc(v_weakLeanArgs_2288_);
lean_inc(v_moreLeanArgs_2287_);
lean_inc(v_leanOptions_2286_);
lean_dec(v_cfg_2284_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2312_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2309_; 
v___x_2306_ = lean_box(v_requiresModuleSystem_2301_);
v___x_2307_ = lean_apply_1(v_f_2283_, v___x_2306_);
if (v_isShared_2305_ == 0)
{
v___x_2309_ = v___x_2304_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_leanOptions_2286_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v_moreLeanArgs_2287_);
lean_ctor_set(v_reuseFailAlloc_2311_, 2, v_weakLeanArgs_2288_);
lean_ctor_set(v_reuseFailAlloc_2311_, 3, v_moreLeancArgs_2290_);
lean_ctor_set(v_reuseFailAlloc_2311_, 4, v_moreServerOptions_2291_);
lean_ctor_set(v_reuseFailAlloc_2311_, 5, v_weakLeancArgs_2292_);
lean_ctor_set(v_reuseFailAlloc_2311_, 6, v_moreLinkObjs_2293_);
lean_ctor_set(v_reuseFailAlloc_2311_, 7, v_moreLinkLibs_2294_);
lean_ctor_set(v_reuseFailAlloc_2311_, 8, v_moreLinkArgs_2295_);
lean_ctor_set(v_reuseFailAlloc_2311_, 9, v_weakLinkArgs_2296_);
lean_ctor_set(v_reuseFailAlloc_2311_, 10, v_platformIndependent_2298_);
lean_ctor_set(v_reuseFailAlloc_2311_, 11, v_dynlibs_2299_);
lean_ctor_set(v_reuseFailAlloc_2311_, 12, v_plugins_2300_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*13, v_buildType_2285_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*13 + 1, v_useZigCodegen_2289_);
lean_ctor_set_uint8(v_reuseFailAlloc_2311_, sizeof(void*)*13 + 2, v_backend_2297_);
v___x_2309_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
uint8_t v___x_2310_; 
v___x_2310_ = lean_unbox(v___x_2307_);
lean_ctor_set_uint8(v___x_2309_, sizeof(void*)*13 + 3, v___x_2310_);
lean_ctor_set_uint8(v___x_2309_, sizeof(void*)*13 + 4, v_allowNonModules_2302_);
return v___x_2309_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_LeanConfig_allowNonModules___proj___lam__0(lean_object* v_cfg_2323_){
_start:
{
uint8_t v_allowNonModules_2324_; 
v_allowNonModules_2324_ = lean_ctor_get_uint8(v_cfg_2323_, sizeof(void*)*13 + 4);
return v_allowNonModules_2324_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__0___boxed(lean_object* v_cfg_2325_){
_start:
{
uint8_t v_res_2326_; lean_object* v_r_2327_; 
v_res_2326_ = l_Lake_LeanConfig_allowNonModules___proj___lam__0(v_cfg_2325_);
lean_dec_ref(v_cfg_2325_);
v_r_2327_ = lean_box(v_res_2326_);
return v_r_2327_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__1(uint8_t v_val_2328_, lean_object* v_cfg_2329_){
_start:
{
uint8_t v_buildType_2330_; lean_object* v_leanOptions_2331_; lean_object* v_moreLeanArgs_2332_; lean_object* v_weakLeanArgs_2333_; uint8_t v_useZigCodegen_2334_; lean_object* v_moreLeancArgs_2335_; lean_object* v_moreServerOptions_2336_; lean_object* v_weakLeancArgs_2337_; lean_object* v_moreLinkObjs_2338_; lean_object* v_moreLinkLibs_2339_; lean_object* v_moreLinkArgs_2340_; lean_object* v_weakLinkArgs_2341_; uint8_t v_backend_2342_; lean_object* v_platformIndependent_2343_; lean_object* v_dynlibs_2344_; lean_object* v_plugins_2345_; uint8_t v_requiresModuleSystem_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2353_; 
v_buildType_2330_ = lean_ctor_get_uint8(v_cfg_2329_, sizeof(void*)*13);
v_leanOptions_2331_ = lean_ctor_get(v_cfg_2329_, 0);
v_moreLeanArgs_2332_ = lean_ctor_get(v_cfg_2329_, 1);
v_weakLeanArgs_2333_ = lean_ctor_get(v_cfg_2329_, 2);
v_useZigCodegen_2334_ = lean_ctor_get_uint8(v_cfg_2329_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2335_ = lean_ctor_get(v_cfg_2329_, 3);
v_moreServerOptions_2336_ = lean_ctor_get(v_cfg_2329_, 4);
v_weakLeancArgs_2337_ = lean_ctor_get(v_cfg_2329_, 5);
v_moreLinkObjs_2338_ = lean_ctor_get(v_cfg_2329_, 6);
v_moreLinkLibs_2339_ = lean_ctor_get(v_cfg_2329_, 7);
v_moreLinkArgs_2340_ = lean_ctor_get(v_cfg_2329_, 8);
v_weakLinkArgs_2341_ = lean_ctor_get(v_cfg_2329_, 9);
v_backend_2342_ = lean_ctor_get_uint8(v_cfg_2329_, sizeof(void*)*13 + 2);
v_platformIndependent_2343_ = lean_ctor_get(v_cfg_2329_, 10);
v_dynlibs_2344_ = lean_ctor_get(v_cfg_2329_, 11);
v_plugins_2345_ = lean_ctor_get(v_cfg_2329_, 12);
v_requiresModuleSystem_2346_ = lean_ctor_get_uint8(v_cfg_2329_, sizeof(void*)*13 + 3);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_cfg_2329_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2348_ = v_cfg_2329_;
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_plugins_2345_);
lean_inc(v_dynlibs_2344_);
lean_inc(v_platformIndependent_2343_);
lean_inc(v_weakLinkArgs_2341_);
lean_inc(v_moreLinkArgs_2340_);
lean_inc(v_moreLinkLibs_2339_);
lean_inc(v_moreLinkObjs_2338_);
lean_inc(v_weakLeancArgs_2337_);
lean_inc(v_moreServerOptions_2336_);
lean_inc(v_moreLeancArgs_2335_);
lean_inc(v_weakLeanArgs_2333_);
lean_inc(v_moreLeanArgs_2332_);
lean_inc(v_leanOptions_2331_);
lean_dec(v_cfg_2329_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2353_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2351_; 
if (v_isShared_2349_ == 0)
{
v___x_2351_ = v___x_2348_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_leanOptions_2331_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v_moreLeanArgs_2332_);
lean_ctor_set(v_reuseFailAlloc_2352_, 2, v_weakLeanArgs_2333_);
lean_ctor_set(v_reuseFailAlloc_2352_, 3, v_moreLeancArgs_2335_);
lean_ctor_set(v_reuseFailAlloc_2352_, 4, v_moreServerOptions_2336_);
lean_ctor_set(v_reuseFailAlloc_2352_, 5, v_weakLeancArgs_2337_);
lean_ctor_set(v_reuseFailAlloc_2352_, 6, v_moreLinkObjs_2338_);
lean_ctor_set(v_reuseFailAlloc_2352_, 7, v_moreLinkLibs_2339_);
lean_ctor_set(v_reuseFailAlloc_2352_, 8, v_moreLinkArgs_2340_);
lean_ctor_set(v_reuseFailAlloc_2352_, 9, v_weakLinkArgs_2341_);
lean_ctor_set(v_reuseFailAlloc_2352_, 10, v_platformIndependent_2343_);
lean_ctor_set(v_reuseFailAlloc_2352_, 11, v_dynlibs_2344_);
lean_ctor_set(v_reuseFailAlloc_2352_, 12, v_plugins_2345_);
lean_ctor_set_uint8(v_reuseFailAlloc_2352_, sizeof(void*)*13, v_buildType_2330_);
lean_ctor_set_uint8(v_reuseFailAlloc_2352_, sizeof(void*)*13 + 1, v_useZigCodegen_2334_);
lean_ctor_set_uint8(v_reuseFailAlloc_2352_, sizeof(void*)*13 + 2, v_backend_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2352_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2346_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_ctor_set_uint8(v___x_2351_, sizeof(void*)*13 + 4, v_val_2328_);
return v___x_2351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__1___boxed(lean_object* v_val_2354_, lean_object* v_cfg_2355_){
_start:
{
uint8_t v_val_88__boxed_2356_; lean_object* v_res_2357_; 
v_val_88__boxed_2356_ = lean_unbox(v_val_2354_);
v_res_2357_ = l_Lake_LeanConfig_allowNonModules___proj___lam__1(v_val_88__boxed_2356_, v_cfg_2355_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_allowNonModules___proj___lam__2(lean_object* v_f_2358_, lean_object* v_cfg_2359_){
_start:
{
uint8_t v_buildType_2360_; lean_object* v_leanOptions_2361_; lean_object* v_moreLeanArgs_2362_; lean_object* v_weakLeanArgs_2363_; uint8_t v_useZigCodegen_2364_; lean_object* v_moreLeancArgs_2365_; lean_object* v_moreServerOptions_2366_; lean_object* v_weakLeancArgs_2367_; lean_object* v_moreLinkObjs_2368_; lean_object* v_moreLinkLibs_2369_; lean_object* v_moreLinkArgs_2370_; lean_object* v_weakLinkArgs_2371_; uint8_t v_backend_2372_; lean_object* v_platformIndependent_2373_; lean_object* v_dynlibs_2374_; lean_object* v_plugins_2375_; uint8_t v_requiresModuleSystem_2376_; uint8_t v_allowNonModules_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2387_; 
v_buildType_2360_ = lean_ctor_get_uint8(v_cfg_2359_, sizeof(void*)*13);
v_leanOptions_2361_ = lean_ctor_get(v_cfg_2359_, 0);
v_moreLeanArgs_2362_ = lean_ctor_get(v_cfg_2359_, 1);
v_weakLeanArgs_2363_ = lean_ctor_get(v_cfg_2359_, 2);
v_useZigCodegen_2364_ = lean_ctor_get_uint8(v_cfg_2359_, sizeof(void*)*13 + 1);
v_moreLeancArgs_2365_ = lean_ctor_get(v_cfg_2359_, 3);
v_moreServerOptions_2366_ = lean_ctor_get(v_cfg_2359_, 4);
v_weakLeancArgs_2367_ = lean_ctor_get(v_cfg_2359_, 5);
v_moreLinkObjs_2368_ = lean_ctor_get(v_cfg_2359_, 6);
v_moreLinkLibs_2369_ = lean_ctor_get(v_cfg_2359_, 7);
v_moreLinkArgs_2370_ = lean_ctor_get(v_cfg_2359_, 8);
v_weakLinkArgs_2371_ = lean_ctor_get(v_cfg_2359_, 9);
v_backend_2372_ = lean_ctor_get_uint8(v_cfg_2359_, sizeof(void*)*13 + 2);
v_platformIndependent_2373_ = lean_ctor_get(v_cfg_2359_, 10);
v_dynlibs_2374_ = lean_ctor_get(v_cfg_2359_, 11);
v_plugins_2375_ = lean_ctor_get(v_cfg_2359_, 12);
v_requiresModuleSystem_2376_ = lean_ctor_get_uint8(v_cfg_2359_, sizeof(void*)*13 + 3);
v_allowNonModules_2377_ = lean_ctor_get_uint8(v_cfg_2359_, sizeof(void*)*13 + 4);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_cfg_2359_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2379_ = v_cfg_2359_;
v_isShared_2380_ = v_isSharedCheck_2387_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_plugins_2375_);
lean_inc(v_dynlibs_2374_);
lean_inc(v_platformIndependent_2373_);
lean_inc(v_weakLinkArgs_2371_);
lean_inc(v_moreLinkArgs_2370_);
lean_inc(v_moreLinkLibs_2369_);
lean_inc(v_moreLinkObjs_2368_);
lean_inc(v_weakLeancArgs_2367_);
lean_inc(v_moreServerOptions_2366_);
lean_inc(v_moreLeancArgs_2365_);
lean_inc(v_weakLeanArgs_2363_);
lean_inc(v_moreLeanArgs_2362_);
lean_inc(v_leanOptions_2361_);
lean_dec(v_cfg_2359_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2387_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2384_; 
v___x_2381_ = lean_box(v_allowNonModules_2377_);
v___x_2382_ = lean_apply_1(v_f_2358_, v___x_2381_);
if (v_isShared_2380_ == 0)
{
v___x_2384_ = v___x_2379_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 13, 5);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_leanOptions_2361_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_moreLeanArgs_2362_);
lean_ctor_set(v_reuseFailAlloc_2386_, 2, v_weakLeanArgs_2363_);
lean_ctor_set(v_reuseFailAlloc_2386_, 3, v_moreLeancArgs_2365_);
lean_ctor_set(v_reuseFailAlloc_2386_, 4, v_moreServerOptions_2366_);
lean_ctor_set(v_reuseFailAlloc_2386_, 5, v_weakLeancArgs_2367_);
lean_ctor_set(v_reuseFailAlloc_2386_, 6, v_moreLinkObjs_2368_);
lean_ctor_set(v_reuseFailAlloc_2386_, 7, v_moreLinkLibs_2369_);
lean_ctor_set(v_reuseFailAlloc_2386_, 8, v_moreLinkArgs_2370_);
lean_ctor_set(v_reuseFailAlloc_2386_, 9, v_weakLinkArgs_2371_);
lean_ctor_set(v_reuseFailAlloc_2386_, 10, v_platformIndependent_2373_);
lean_ctor_set(v_reuseFailAlloc_2386_, 11, v_dynlibs_2374_);
lean_ctor_set(v_reuseFailAlloc_2386_, 12, v_plugins_2375_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*13, v_buildType_2360_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*13 + 1, v_useZigCodegen_2364_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*13 + 2, v_backend_2372_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*13 + 3, v_requiresModuleSystem_2376_);
v___x_2384_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
uint8_t v___x_2385_; 
v___x_2385_ = lean_unbox(v___x_2382_);
lean_ctor_set_uint8(v___x_2384_, sizeof(void*)*13 + 4, v___x_2385_);
return v___x_2384_;
}
}
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__3(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__2));
v___x_2407_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__0));
v___x_2408_ = lean_array_push(v___x_2407_, v___x_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__6(void){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v___x_2415_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__5));
v___x_2416_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__3, &l_Lake_LeanConfig___fields___closed__3_once, _init_l_Lake_LeanConfig___fields___closed__3);
v___x_2417_ = lean_array_push(v___x_2416_, v___x_2415_);
return v___x_2417_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__9(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__8));
v___x_2425_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__6, &l_Lake_LeanConfig___fields___closed__6_once, _init_l_Lake_LeanConfig___fields___closed__6);
v___x_2426_ = lean_array_push(v___x_2425_, v___x_2424_);
return v___x_2426_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__12(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; 
v___x_2433_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__11));
v___x_2434_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__9, &l_Lake_LeanConfig___fields___closed__9_once, _init_l_Lake_LeanConfig___fields___closed__9);
v___x_2435_ = lean_array_push(v___x_2434_, v___x_2433_);
return v___x_2435_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__15(void){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2442_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__14));
v___x_2443_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__12, &l_Lake_LeanConfig___fields___closed__12_once, _init_l_Lake_LeanConfig___fields___closed__12);
v___x_2444_ = lean_array_push(v___x_2443_, v___x_2442_);
return v___x_2444_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__18(void){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2451_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__17));
v___x_2452_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__15, &l_Lake_LeanConfig___fields___closed__15_once, _init_l_Lake_LeanConfig___fields___closed__15);
v___x_2453_ = lean_array_push(v___x_2452_, v___x_2451_);
return v___x_2453_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__21(void){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2460_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__20));
v___x_2461_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__18, &l_Lake_LeanConfig___fields___closed__18_once, _init_l_Lake_LeanConfig___fields___closed__18);
v___x_2462_ = lean_array_push(v___x_2461_, v___x_2460_);
return v___x_2462_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__24(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2469_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__23));
v___x_2470_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__21, &l_Lake_LeanConfig___fields___closed__21_once, _init_l_Lake_LeanConfig___fields___closed__21);
v___x_2471_ = lean_array_push(v___x_2470_, v___x_2469_);
return v___x_2471_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__27(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v___x_2478_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__26));
v___x_2479_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__24, &l_Lake_LeanConfig___fields___closed__24_once, _init_l_Lake_LeanConfig___fields___closed__24);
v___x_2480_ = lean_array_push(v___x_2479_, v___x_2478_);
return v___x_2480_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__30(void){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2487_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__29));
v___x_2488_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__27, &l_Lake_LeanConfig___fields___closed__27_once, _init_l_Lake_LeanConfig___fields___closed__27);
v___x_2489_ = lean_array_push(v___x_2488_, v___x_2487_);
return v___x_2489_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__33(void){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2496_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__32));
v___x_2497_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__30, &l_Lake_LeanConfig___fields___closed__30_once, _init_l_Lake_LeanConfig___fields___closed__30);
v___x_2498_ = lean_array_push(v___x_2497_, v___x_2496_);
return v___x_2498_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__36(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2505_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__35));
v___x_2506_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__33, &l_Lake_LeanConfig___fields___closed__33_once, _init_l_Lake_LeanConfig___fields___closed__33);
v___x_2507_ = lean_array_push(v___x_2506_, v___x_2505_);
return v___x_2507_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__39(void){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2514_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__38));
v___x_2515_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__36, &l_Lake_LeanConfig___fields___closed__36_once, _init_l_Lake_LeanConfig___fields___closed__36);
v___x_2516_ = lean_array_push(v___x_2515_, v___x_2514_);
return v___x_2516_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__42(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2523_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__41));
v___x_2524_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__39, &l_Lake_LeanConfig___fields___closed__39_once, _init_l_Lake_LeanConfig___fields___closed__39);
v___x_2525_ = lean_array_push(v___x_2524_, v___x_2523_);
return v___x_2525_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__45(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2532_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__44));
v___x_2533_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__42, &l_Lake_LeanConfig___fields___closed__42_once, _init_l_Lake_LeanConfig___fields___closed__42);
v___x_2534_ = lean_array_push(v___x_2533_, v___x_2532_);
return v___x_2534_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__48(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2541_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__47));
v___x_2542_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__45, &l_Lake_LeanConfig___fields___closed__45_once, _init_l_Lake_LeanConfig___fields___closed__45);
v___x_2543_ = lean_array_push(v___x_2542_, v___x_2541_);
return v___x_2543_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__51(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__50));
v___x_2551_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__48, &l_Lake_LeanConfig___fields___closed__48_once, _init_l_Lake_LeanConfig___fields___closed__48);
v___x_2552_ = lean_array_push(v___x_2551_, v___x_2550_);
return v___x_2552_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields___closed__54(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2559_ = ((lean_object*)(l_Lake_LeanConfig___fields___closed__53));
v___x_2560_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__51, &l_Lake_LeanConfig___fields___closed__51_once, _init_l_Lake_LeanConfig___fields___closed__51);
v___x_2561_ = lean_array_push(v___x_2560_, v___x_2559_);
return v___x_2561_;
}
}
static lean_object* _init_l_Lake_LeanConfig___fields(void){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_obj_once(&l_Lake_LeanConfig___fields___closed__54, &l_Lake_LeanConfig___fields___closed__54_once, _init_l_Lake_LeanConfig___fields___closed__54);
return v___x_2562_;
}
}
static lean_object* _init_l_Lake_LeanConfig_instConfigFields(void){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Lake_LeanConfig___fields;
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanConfig_instConfigInfo___lam__0(lean_object* v_x1_2564_, lean_object* v_x2_2565_){
_start:
{
lean_object* v_name_2566_; lean_object* v___x_2567_; 
v_name_2566_ = lean_ctor_get(v_x2_2565_, 0);
lean_inc(v_name_2566_);
v___x_2567_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_2566_, v_x2_2565_, v_x1_2564_);
return v___x_2567_;
}
}
static lean_object* _init_l_Lake_LeanConfig_instConfigInfo___closed__0(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = l_Lake_LeanConfig___fields;
v___x_2569_ = lean_array_get_size(v___x_2568_);
return v___x_2569_;
}
}
static uint8_t _init_l_Lake_LeanConfig_instConfigInfo___closed__11(void){
_start:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; uint8_t v___x_2591_; 
v___x_2589_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__0, &l_Lake_LeanConfig_instConfigInfo___closed__0_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__0);
v___x_2590_ = lean_unsigned_to_nat(0u);
v___x_2591_ = lean_nat_dec_lt(v___x_2590_, v___x_2589_);
return v___x_2591_;
}
}
static lean_object* _init_l_Lake_LeanConfig_instConfigInfo___closed__12(void){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2592_ = lean_unsigned_to_nat(0u);
v___x_2593_ = lean_box(1);
v___x_2594_ = l_Lake_LeanConfig___fields;
v___x_2595_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___x_2593_);
lean_ctor_set(v___x_2595_, 2, v___x_2592_);
return v___x_2595_;
}
}
static uint8_t _init_l_Lake_LeanConfig_instConfigInfo___closed__14(void){
_start:
{
lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2597_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__0, &l_Lake_LeanConfig_instConfigInfo___closed__0_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__0);
v___x_2598_ = lean_nat_dec_le(v___x_2597_, v___x_2597_);
return v___x_2598_;
}
}
static size_t _init_l_Lake_LeanConfig_instConfigInfo___closed__15(void){
_start:
{
lean_object* v___x_2599_; size_t v___x_2600_; 
v___x_2599_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__0, &l_Lake_LeanConfig_instConfigInfo___closed__0_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__0);
v___x_2600_ = lean_usize_of_nat(v___x_2599_);
return v___x_2600_;
}
}
static lean_object* _init_l_Lake_LeanConfig_instConfigInfo___closed__16(void){
_start:
{
lean_object* v___x_2601_; size_t v___x_2602_; size_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___f_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2601_ = lean_box(1);
v___x_2602_ = lean_usize_once(&l_Lake_LeanConfig_instConfigInfo___closed__15, &l_Lake_LeanConfig_instConfigInfo___closed__15_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__15);
v___x_2603_ = ((size_t)0ULL);
v___x_2604_ = l_Lake_LeanConfig___fields;
v___f_2605_ = ((lean_object*)(l_Lake_LeanConfig_instConfigInfo___closed__13));
v___x_2606_ = ((lean_object*)(l_Lake_LeanConfig_instConfigInfo___closed__10));
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2606_, v___f_2605_, v___x_2604_, v___x_2603_, v___x_2602_, v___x_2601_);
return v___x_2607_;
}
}
static lean_object* _init_l_Lake_LeanConfig_instConfigInfo___closed__17(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2608_ = lean_unsigned_to_nat(0u);
v___x_2609_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__16, &l_Lake_LeanConfig_instConfigInfo___closed__16_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__16);
v___x_2610_ = l_Lake_LeanConfig___fields;
v___x_2611_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
lean_ctor_set(v___x_2611_, 1, v___x_2609_);
lean_ctor_set(v___x_2611_, 2, v___x_2608_);
return v___x_2611_;
}
}
static lean_object* _init_l_Lake_LeanConfig_instConfigInfo(void){
_start:
{
uint8_t v___x_2612_; 
v___x_2612_ = lean_uint8_once(&l_Lake_LeanConfig_instConfigInfo___closed__11, &l_Lake_LeanConfig_instConfigInfo___closed__11_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__11);
if (v___x_2612_ == 0)
{
lean_object* v___x_2613_; 
v___x_2613_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__12, &l_Lake_LeanConfig_instConfigInfo___closed__12_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__12);
return v___x_2613_;
}
else
{
uint8_t v___x_2614_; 
v___x_2614_ = lean_uint8_once(&l_Lake_LeanConfig_instConfigInfo___closed__14, &l_Lake_LeanConfig_instConfigInfo___closed__14_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__14);
if (v___x_2614_ == 0)
{
if (v___x_2612_ == 0)
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__12, &l_Lake_LeanConfig_instConfigInfo___closed__12_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__12);
return v___x_2615_;
}
else
{
lean_object* v___x_2616_; 
v___x_2616_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__17, &l_Lake_LeanConfig_instConfigInfo___closed__17_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__17);
return v___x_2616_;
}
}
else
{
lean_object* v___x_2617_; 
v___x_2617_ = lean_obj_once(&l_Lake_LeanConfig_instConfigInfo___closed__17, &l_Lake_LeanConfig_instConfigInfo___closed__17_once, _init_l_Lake_LeanConfig_instConfigInfo___closed__17);
return v___x_2617_;
}
}
}
}
lean_object* runtime_initialize_Lake_Build_Target_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Dynlib(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_MetaClasses(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Modify(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Modify(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_LeanConfig(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Build_Target_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Dynlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_MetaClasses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Backend_instInhabited = _init_l_Lake_Backend_instInhabited();
l_Lake_instInhabitedBuildType_default = _init_l_Lake_instInhabitedBuildType_default();
l_Lake_instInhabitedBuildType = _init_l_Lake_instInhabitedBuildType();
l_Lake_BuildType_instLT = _init_l_Lake_BuildType_instLT();
lean_mark_persistent(l_Lake_BuildType_instLT);
l_Lake_BuildType_instLE = _init_l_Lake_BuildType_instLE();
lean_mark_persistent(l_Lake_BuildType_instLE);
l_Lake_LeanConfig___fields = _init_l_Lake_LeanConfig___fields();
lean_mark_persistent(l_Lake_LeanConfig___fields);
l_Lake_LeanConfig_instConfigFields = _init_l_Lake_LeanConfig_instConfigFields();
lean_mark_persistent(l_Lake_LeanConfig_instConfigFields);
l_Lake_LeanConfig_instConfigInfo = _init_l_Lake_LeanConfig_instConfigInfo();
lean_mark_persistent(l_Lake_LeanConfig_instConfigInfo);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_LeanConfig(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Target_Basic(uint8_t builtin);
lean_object* initialize_Lake_Config_Dynlib(uint8_t builtin);
lean_object* initialize_Lake_Config_MetaClasses(uint8_t builtin);
lean_object* initialize_Init_Data_String_Modify(uint8_t builtin);
lean_object* initialize_Lake_Config_Meta(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Init_Data_String_Modify(uint8_t builtin);
lean_object* initialize_Lake_Config_Meta(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_LeanConfig(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Target_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Dynlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_MetaClasses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_LeanConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_LeanConfig(builtin);
}
#ifdef __cplusplus
}
#endif
