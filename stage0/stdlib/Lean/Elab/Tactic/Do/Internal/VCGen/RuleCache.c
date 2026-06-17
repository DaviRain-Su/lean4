// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.RuleCache
// Imports: public import Lean.Elab.Tactic.Do.VCGen.Split public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruction public import Lean.Elab.Tactic.Do.Internal.VCGen.Util import Lean.Meta.Sym.InferType
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
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_LatticeSplit_mkBackwardRuleForLattice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
lean_inc_ref(v___y_2_);
v___x_14_ = lean_apply_12(v_k_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed(lean_object* v_k_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0(v_k_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(lean_object* v_k_29_, uint8_t v_allowLevelAssignments_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; 
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc(v___y_32_);
lean_inc_ref(v___y_31_);
v___f_43_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_43_, 0, v_k_29_);
lean_closure_set(v___f_43_, 1, v___y_31_);
lean_closure_set(v___f_43_, 2, v___y_32_);
lean_closure_set(v___f_43_, 3, v___y_33_);
lean_closure_set(v___f_43_, 4, v___y_34_);
lean_closure_set(v___f_43_, 5, v___y_35_);
lean_closure_set(v___f_43_, 6, v___y_36_);
lean_closure_set(v___f_43_, 7, v___y_37_);
v___x_44_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_30_, v___f_43_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
if (lean_obj_tag(v___x_44_) == 0)
{
return v___x_44_;
}
else
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_a_45_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg___boxed(lean_object* v_k_53_, lean_object* v_allowLevelAssignments_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_67_; lean_object* v_res_68_; 
v_allowLevelAssignments_boxed_67_ = lean_unbox(v_allowLevelAssignments_54_);
v_res_68_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_53_, v_allowLevelAssignments_boxed_67_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, v___y_65_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
lean_dec_ref(v___y_60_);
lean_dec(v___y_59_);
lean_dec_ref(v___y_58_);
lean_dec(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1(lean_object* v_00_u03b1_69_, lean_object* v_k_70_, uint8_t v_allowLevelAssignments_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v_k_70_, v_allowLevelAssignments_71_, v___y_72_, v___y_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___boxed(lean_object* v_00_u03b1_85_, lean_object* v_k_86_, lean_object* v_allowLevelAssignments_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_100_; lean_object* v_res_101_; 
v_allowLevelAssignments_boxed_100_ = lean_unbox(v_allowLevelAssignments_87_);
v_res_101_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1(v_00_u03b1_85_, v_k_86_, v_allowLevelAssignments_boxed_100_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0(lean_object* v_kind_104_, lean_object* v_specThm_105_, lean_object* v_info_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
if (lean_obj_tag(v_kind_104_) == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___closed__0));
v___x_120_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSpec(v_specThm_105_, v_info_106_, v___x_119_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v_a_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_129_; 
v_a_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_129_ == 0)
{
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_a_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_129_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v___x_125_; lean_object* v___x_127_; 
v___x_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_125_, 0, v_a_121_);
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 0, v___x_125_);
v___x_127_ = v___x_123_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_120_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_120_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_161_; 
v_isSharedCheck_161_ = !lean_is_exclusive(v_kind_104_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v_kind_104_, 0);
lean_dec(v_unused_162_);
v___x_139_ = v_kind_104_;
v_isShared_140_ = v_isSharedCheck_161_;
goto v_resetjp_138_;
}
else
{
lean_dec(v_kind_104_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_161_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tryMkBackwardRuleFromSimp(v_specThm_105_, v_info_106_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
if (lean_obj_tag(v___x_141_) == 0)
{
lean_object* v_a_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_152_; 
v_a_142_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_152_ == 0)
{
v___x_144_ = v___x_141_;
v_isShared_145_ = v_isSharedCheck_152_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_a_142_);
lean_dec(v___x_141_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_152_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 0, v_a_142_);
v___x_147_ = v___x_139_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_142_);
v___x_147_ = v_reuseFailAlloc_151_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_149_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v___x_147_);
v___x_149_ = v___x_144_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_del_object(v___x_139_);
v_a_153_ = lean_ctor_get(v___x_141_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_141_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_141_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_141_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed(lean_object* v_kind_163_, lean_object* v_specThm_164_, lean_object* v_info_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0(v_kind_163_, v_specThm_164_, v_info_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
lean_dec(v___y_168_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec_ref(v_info_165_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(lean_object* v_a_179_, lean_object* v_x_180_){
_start:
{
if (lean_obj_tag(v_x_180_) == 0)
{
lean_object* v___x_181_; 
v___x_181_ = lean_box(0);
return v___x_181_;
}
else
{
lean_object* v_key_182_; lean_object* v_value_183_; lean_object* v_tail_184_; uint8_t v___y_186_; lean_object* v_fst_189_; lean_object* v_snd_190_; lean_object* v_fst_191_; lean_object* v_snd_192_; uint8_t v___x_193_; 
v_key_182_ = lean_ctor_get(v_x_180_, 0);
v_value_183_ = lean_ctor_get(v_x_180_, 1);
v_tail_184_ = lean_ctor_get(v_x_180_, 2);
v_fst_189_ = lean_ctor_get(v_key_182_, 0);
v_snd_190_ = lean_ctor_get(v_key_182_, 1);
v_fst_191_ = lean_ctor_get(v_a_179_, 0);
v_snd_192_ = lean_ctor_get(v_a_179_, 1);
v___x_193_ = lean_name_eq(v_fst_189_, v_fst_191_);
if (v___x_193_ == 0)
{
v___y_186_ = v___x_193_;
goto v___jp_185_;
}
else
{
lean_object* v_fst_194_; lean_object* v_snd_195_; lean_object* v_fst_196_; lean_object* v_snd_197_; uint8_t v___x_198_; 
v_fst_194_ = lean_ctor_get(v_snd_190_, 0);
v_snd_195_ = lean_ctor_get(v_snd_190_, 1);
v_fst_196_ = lean_ctor_get(v_snd_192_, 0);
v_snd_197_ = lean_ctor_get(v_snd_192_, 1);
v___x_198_ = lean_expr_eqv(v_fst_194_, v_fst_196_);
if (v___x_198_ == 0)
{
v___y_186_ = v___x_198_;
goto v___jp_185_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = lean_nat_dec_eq(v_snd_195_, v_snd_197_);
v___y_186_ = v___x_199_;
goto v___jp_185_;
}
}
v___jp_185_:
{
if (v___y_186_ == 0)
{
v_x_180_ = v_tail_184_;
goto _start;
}
else
{
lean_object* v___x_188_; 
lean_inc(v_value_183_);
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v_value_183_);
return v___x_188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg___boxed(lean_object* v_a_200_, lean_object* v_x_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_200_, v_x_201_);
lean_dec(v_x_201_);
lean_dec_ref(v_a_200_);
return v_res_202_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_203_; uint64_t v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(1723u);
v___x_204_ = lean_uint64_of_nat(v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(lean_object* v_m_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_buckets_207_; lean_object* v_fst_208_; lean_object* v_snd_209_; lean_object* v___x_210_; uint64_t v___y_212_; 
v_buckets_207_ = lean_ctor_get(v_m_205_, 1);
v_fst_208_ = lean_ctor_get(v_a_206_, 0);
v_snd_209_ = lean_ctor_get(v_a_206_, 1);
v___x_210_ = lean_array_get_size(v_buckets_207_);
if (lean_obj_tag(v_fst_208_) == 0)
{
uint64_t v___x_232_; 
v___x_232_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_212_ = v___x_232_;
goto v___jp_211_;
}
else
{
uint64_t v_hash_233_; 
v_hash_233_ = lean_ctor_get_uint64(v_fst_208_, sizeof(void*)*2);
v___y_212_ = v_hash_233_;
goto v___jp_211_;
}
v___jp_211_:
{
lean_object* v_fst_213_; lean_object* v_snd_214_; uint64_t v___x_215_; uint64_t v___x_216_; uint64_t v___x_217_; uint64_t v___x_218_; uint64_t v___x_219_; uint64_t v___x_220_; uint64_t v_fold_221_; uint64_t v___x_222_; uint64_t v___x_223_; uint64_t v___x_224_; size_t v___x_225_; size_t v___x_226_; size_t v___x_227_; size_t v___x_228_; size_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v_fst_213_ = lean_ctor_get(v_snd_209_, 0);
v_snd_214_ = lean_ctor_get(v_snd_209_, 1);
v___x_215_ = l_Lean_Expr_hash(v_fst_213_);
v___x_216_ = lean_uint64_of_nat(v_snd_214_);
v___x_217_ = lean_uint64_mix_hash(v___x_215_, v___x_216_);
v___x_218_ = lean_uint64_mix_hash(v___y_212_, v___x_217_);
v___x_219_ = 32ULL;
v___x_220_ = lean_uint64_shift_right(v___x_218_, v___x_219_);
v_fold_221_ = lean_uint64_xor(v___x_218_, v___x_220_);
v___x_222_ = 16ULL;
v___x_223_ = lean_uint64_shift_right(v_fold_221_, v___x_222_);
v___x_224_ = lean_uint64_xor(v_fold_221_, v___x_223_);
v___x_225_ = lean_uint64_to_usize(v___x_224_);
v___x_226_ = lean_usize_of_nat(v___x_210_);
v___x_227_ = ((size_t)1ULL);
v___x_228_ = lean_usize_sub(v___x_226_, v___x_227_);
v___x_229_ = lean_usize_land(v___x_225_, v___x_228_);
v___x_230_ = lean_array_uget_borrowed(v_buckets_207_, v___x_229_);
v___x_231_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_206_, v___x_230_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___boxed(lean_object* v_m_234_, lean_object* v_a_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_234_, v_a_235_);
lean_dec_ref(v_a_235_);
lean_dec_ref(v_m_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
return v_x_237_;
}
else
{
lean_object* v_key_239_; lean_object* v_value_240_; lean_object* v_tail_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_275_; 
v_key_239_ = lean_ctor_get(v_x_238_, 0);
v_value_240_ = lean_ctor_get(v_x_238_, 1);
v_tail_241_ = lean_ctor_get(v_x_238_, 2);
v_isSharedCheck_275_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_275_ == 0)
{
v___x_243_ = v_x_238_;
v_isShared_244_ = v_isSharedCheck_275_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_tail_241_);
lean_inc(v_value_240_);
lean_inc(v_key_239_);
lean_dec(v_x_238_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_275_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v_fst_245_; lean_object* v_snd_246_; lean_object* v___x_247_; uint64_t v___y_249_; 
v_fst_245_ = lean_ctor_get(v_key_239_, 0);
v_snd_246_ = lean_ctor_get(v_key_239_, 1);
v___x_247_ = lean_array_get_size(v_x_237_);
if (lean_obj_tag(v_fst_245_) == 0)
{
uint64_t v___x_273_; 
v___x_273_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_249_ = v___x_273_;
goto v___jp_248_;
}
else
{
uint64_t v_hash_274_; 
v_hash_274_ = lean_ctor_get_uint64(v_fst_245_, sizeof(void*)*2);
v___y_249_ = v_hash_274_;
goto v___jp_248_;
}
v___jp_248_:
{
lean_object* v_fst_250_; lean_object* v_snd_251_; uint64_t v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; uint64_t v___x_255_; uint64_t v___x_256_; uint64_t v___x_257_; uint64_t v_fold_258_; uint64_t v___x_259_; uint64_t v___x_260_; uint64_t v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; size_t v___x_265_; size_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
v_fst_250_ = lean_ctor_get(v_snd_246_, 0);
v_snd_251_ = lean_ctor_get(v_snd_246_, 1);
v___x_252_ = l_Lean_Expr_hash(v_fst_250_);
v___x_253_ = lean_uint64_of_nat(v_snd_251_);
v___x_254_ = lean_uint64_mix_hash(v___x_252_, v___x_253_);
v___x_255_ = lean_uint64_mix_hash(v___y_249_, v___x_254_);
v___x_256_ = 32ULL;
v___x_257_ = lean_uint64_shift_right(v___x_255_, v___x_256_);
v_fold_258_ = lean_uint64_xor(v___x_255_, v___x_257_);
v___x_259_ = 16ULL;
v___x_260_ = lean_uint64_shift_right(v_fold_258_, v___x_259_);
v___x_261_ = lean_uint64_xor(v_fold_258_, v___x_260_);
v___x_262_ = lean_uint64_to_usize(v___x_261_);
v___x_263_ = lean_usize_of_nat(v___x_247_);
v___x_264_ = ((size_t)1ULL);
v___x_265_ = lean_usize_sub(v___x_263_, v___x_264_);
v___x_266_ = lean_usize_land(v___x_262_, v___x_265_);
v___x_267_ = lean_array_uget_borrowed(v_x_237_, v___x_266_);
lean_inc(v___x_267_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 2, v___x_267_);
v___x_269_ = v___x_243_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v_key_239_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_value_240_);
lean_ctor_set(v_reuseFailAlloc_272_, 2, v___x_267_);
v___x_269_ = v_reuseFailAlloc_272_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
lean_object* v___x_270_; 
v___x_270_ = lean_array_uset(v_x_237_, v___x_266_, v___x_269_);
v_x_237_ = v___x_270_;
v_x_238_ = v_tail_241_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(lean_object* v_i_276_, lean_object* v_source_277_, lean_object* v_target_278_){
_start:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_array_get_size(v_source_277_);
v___x_280_ = lean_nat_dec_lt(v_i_276_, v___x_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_source_277_);
lean_dec(v_i_276_);
return v_target_278_;
}
else
{
lean_object* v_es_281_; lean_object* v___x_282_; lean_object* v_source_283_; lean_object* v_target_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_es_281_ = lean_array_fget(v_source_277_, v_i_276_);
v___x_282_ = lean_box(0);
v_source_283_ = lean_array_fset(v_source_277_, v_i_276_, v___x_282_);
v_target_284_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(v_target_278_, v_es_281_);
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_nat_add(v_i_276_, v___x_285_);
lean_dec(v_i_276_);
v_i_276_ = v___x_286_;
v_source_277_ = v_source_283_;
v_target_278_ = v_target_284_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(lean_object* v_data_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_nbuckets_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_289_ = lean_array_get_size(v_data_288_);
v___x_290_ = lean_unsigned_to_nat(2u);
v_nbuckets_291_ = lean_nat_mul(v___x_289_, v___x_290_);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_box(0);
v___x_294_ = lean_mk_array(v_nbuckets_291_, v___x_293_);
v___x_295_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(v___x_292_, v_data_288_, v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(lean_object* v_a_296_, lean_object* v_x_297_){
_start:
{
if (lean_obj_tag(v_x_297_) == 0)
{
uint8_t v___x_298_; 
v___x_298_ = 0;
return v___x_298_;
}
else
{
lean_object* v_key_299_; lean_object* v_tail_300_; uint8_t v___y_302_; lean_object* v_fst_304_; lean_object* v_snd_305_; lean_object* v_fst_306_; lean_object* v_snd_307_; uint8_t v___x_308_; 
v_key_299_ = lean_ctor_get(v_x_297_, 0);
v_tail_300_ = lean_ctor_get(v_x_297_, 2);
v_fst_304_ = lean_ctor_get(v_key_299_, 0);
v_snd_305_ = lean_ctor_get(v_key_299_, 1);
v_fst_306_ = lean_ctor_get(v_a_296_, 0);
v_snd_307_ = lean_ctor_get(v_a_296_, 1);
v___x_308_ = lean_name_eq(v_fst_304_, v_fst_306_);
if (v___x_308_ == 0)
{
v___y_302_ = v___x_308_;
goto v___jp_301_;
}
else
{
lean_object* v_fst_309_; lean_object* v_snd_310_; lean_object* v_fst_311_; lean_object* v_snd_312_; uint8_t v___x_313_; 
v_fst_309_ = lean_ctor_get(v_snd_305_, 0);
v_snd_310_ = lean_ctor_get(v_snd_305_, 1);
v_fst_311_ = lean_ctor_get(v_snd_307_, 0);
v_snd_312_ = lean_ctor_get(v_snd_307_, 1);
v___x_313_ = lean_expr_eqv(v_fst_309_, v_fst_311_);
if (v___x_313_ == 0)
{
v___y_302_ = v___x_313_;
goto v___jp_301_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = lean_nat_dec_eq(v_snd_310_, v_snd_312_);
v___y_302_ = v___x_314_;
goto v___jp_301_;
}
}
v___jp_301_:
{
if (v___y_302_ == 0)
{
v_x_297_ = v_tail_300_;
goto _start;
}
else
{
return v___y_302_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg___boxed(lean_object* v_a_315_, lean_object* v_x_316_){
_start:
{
uint8_t v_res_317_; lean_object* v_r_318_; 
v_res_317_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_315_, v_x_316_);
lean_dec(v_x_316_);
lean_dec_ref(v_a_315_);
v_r_318_ = lean_box(v_res_317_);
return v_r_318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(lean_object* v_a_319_, lean_object* v_b_320_, lean_object* v_x_321_){
_start:
{
if (lean_obj_tag(v_x_321_) == 0)
{
lean_dec(v_b_320_);
lean_dec_ref(v_a_319_);
return v_x_321_;
}
else
{
lean_object* v_key_322_; lean_object* v_value_323_; lean_object* v_tail_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_348_; 
v_key_322_ = lean_ctor_get(v_x_321_, 0);
v_value_323_ = lean_ctor_get(v_x_321_, 1);
v_tail_324_ = lean_ctor_get(v_x_321_, 2);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_321_);
if (v_isSharedCheck_348_ == 0)
{
v___x_326_ = v_x_321_;
v_isShared_327_ = v_isSharedCheck_348_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_tail_324_);
lean_inc(v_value_323_);
lean_inc(v_key_322_);
lean_dec(v_x_321_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_348_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
uint8_t v___y_329_; lean_object* v_fst_337_; lean_object* v_snd_338_; lean_object* v_fst_339_; lean_object* v_snd_340_; uint8_t v___x_341_; 
v_fst_337_ = lean_ctor_get(v_key_322_, 0);
v_snd_338_ = lean_ctor_get(v_key_322_, 1);
v_fst_339_ = lean_ctor_get(v_a_319_, 0);
v_snd_340_ = lean_ctor_get(v_a_319_, 1);
v___x_341_ = lean_name_eq(v_fst_337_, v_fst_339_);
if (v___x_341_ == 0)
{
v___y_329_ = v___x_341_;
goto v___jp_328_;
}
else
{
lean_object* v_fst_342_; lean_object* v_snd_343_; lean_object* v_fst_344_; lean_object* v_snd_345_; uint8_t v___x_346_; 
v_fst_342_ = lean_ctor_get(v_snd_338_, 0);
v_snd_343_ = lean_ctor_get(v_snd_338_, 1);
v_fst_344_ = lean_ctor_get(v_snd_340_, 0);
v_snd_345_ = lean_ctor_get(v_snd_340_, 1);
v___x_346_ = lean_expr_eqv(v_fst_342_, v_fst_344_);
if (v___x_346_ == 0)
{
v___y_329_ = v___x_346_;
goto v___jp_328_;
}
else
{
uint8_t v___x_347_; 
v___x_347_ = lean_nat_dec_eq(v_snd_343_, v_snd_345_);
v___y_329_ = v___x_347_;
goto v___jp_328_;
}
}
v___jp_328_:
{
if (v___y_329_ == 0)
{
lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_330_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_319_, v_b_320_, v_tail_324_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 2, v___x_330_);
v___x_332_ = v___x_326_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_key_322_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_value_323_);
lean_ctor_set(v_reuseFailAlloc_333_, 2, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
else
{
lean_object* v___x_335_; 
lean_dec(v_value_323_);
lean_dec(v_key_322_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 1, v_b_320_);
lean_ctor_set(v___x_326_, 0, v_a_319_);
v___x_335_ = v___x_326_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_319_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_b_320_);
lean_ctor_set(v_reuseFailAlloc_336_, 2, v_tail_324_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(lean_object* v_m_349_, lean_object* v_a_350_, lean_object* v_b_351_){
_start:
{
lean_object* v_size_352_; lean_object* v_buckets_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_407_; 
v_size_352_ = lean_ctor_get(v_m_349_, 0);
v_buckets_353_ = lean_ctor_get(v_m_349_, 1);
v_isSharedCheck_407_ = !lean_is_exclusive(v_m_349_);
if (v_isSharedCheck_407_ == 0)
{
v___x_355_ = v_m_349_;
v_isShared_356_ = v_isSharedCheck_407_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_buckets_353_);
lean_inc(v_size_352_);
lean_dec(v_m_349_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_407_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v_fst_357_; lean_object* v_snd_358_; lean_object* v___x_359_; uint64_t v___y_361_; 
v_fst_357_ = lean_ctor_get(v_a_350_, 0);
v_snd_358_ = lean_ctor_get(v_a_350_, 1);
v___x_359_ = lean_array_get_size(v_buckets_353_);
if (lean_obj_tag(v_fst_357_) == 0)
{
uint64_t v___x_405_; 
v___x_405_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_361_ = v___x_405_;
goto v___jp_360_;
}
else
{
uint64_t v_hash_406_; 
v_hash_406_ = lean_ctor_get_uint64(v_fst_357_, sizeof(void*)*2);
v___y_361_ = v_hash_406_;
goto v___jp_360_;
}
v___jp_360_:
{
lean_object* v_fst_362_; lean_object* v_snd_363_; uint64_t v___x_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint64_t v___x_369_; uint64_t v_fold_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint64_t v___x_373_; size_t v___x_374_; size_t v___x_375_; size_t v___x_376_; size_t v___x_377_; size_t v___x_378_; lean_object* v_bkt_379_; uint8_t v___x_380_; 
v_fst_362_ = lean_ctor_get(v_snd_358_, 0);
v_snd_363_ = lean_ctor_get(v_snd_358_, 1);
v___x_364_ = l_Lean_Expr_hash(v_fst_362_);
v___x_365_ = lean_uint64_of_nat(v_snd_363_);
v___x_366_ = lean_uint64_mix_hash(v___x_364_, v___x_365_);
v___x_367_ = lean_uint64_mix_hash(v___y_361_, v___x_366_);
v___x_368_ = 32ULL;
v___x_369_ = lean_uint64_shift_right(v___x_367_, v___x_368_);
v_fold_370_ = lean_uint64_xor(v___x_367_, v___x_369_);
v___x_371_ = 16ULL;
v___x_372_ = lean_uint64_shift_right(v_fold_370_, v___x_371_);
v___x_373_ = lean_uint64_xor(v_fold_370_, v___x_372_);
v___x_374_ = lean_uint64_to_usize(v___x_373_);
v___x_375_ = lean_usize_of_nat(v___x_359_);
v___x_376_ = ((size_t)1ULL);
v___x_377_ = lean_usize_sub(v___x_375_, v___x_376_);
v___x_378_ = lean_usize_land(v___x_374_, v___x_377_);
v_bkt_379_ = lean_array_uget_borrowed(v_buckets_353_, v___x_378_);
v___x_380_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_350_, v_bkt_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; lean_object* v_size_x27_382_; lean_object* v___x_383_; lean_object* v_buckets_x27_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_381_ = lean_unsigned_to_nat(1u);
v_size_x27_382_ = lean_nat_add(v_size_352_, v___x_381_);
lean_dec(v_size_352_);
lean_inc(v_bkt_379_);
v___x_383_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_383_, 0, v_a_350_);
lean_ctor_set(v___x_383_, 1, v_b_351_);
lean_ctor_set(v___x_383_, 2, v_bkt_379_);
v_buckets_x27_384_ = lean_array_uset(v_buckets_353_, v___x_378_, v___x_383_);
v___x_385_ = lean_unsigned_to_nat(4u);
v___x_386_ = lean_nat_mul(v_size_x27_382_, v___x_385_);
v___x_387_ = lean_unsigned_to_nat(3u);
v___x_388_ = lean_nat_div(v___x_386_, v___x_387_);
lean_dec(v___x_386_);
v___x_389_ = lean_array_get_size(v_buckets_x27_384_);
v___x_390_ = lean_nat_dec_le(v___x_388_, v___x_389_);
lean_dec(v___x_388_);
if (v___x_390_ == 0)
{
lean_object* v_val_391_; lean_object* v___x_393_; 
v_val_391_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_buckets_x27_384_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 1, v_val_391_);
lean_ctor_set(v___x_355_, 0, v_size_x27_382_);
v___x_393_ = v___x_355_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_size_x27_382_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_val_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
else
{
lean_object* v___x_396_; 
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 1, v_buckets_x27_384_);
lean_ctor_set(v___x_355_, 0, v_size_x27_382_);
v___x_396_ = v___x_355_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_size_x27_382_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_buckets_x27_384_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
else
{
lean_object* v___x_398_; lean_object* v_buckets_x27_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
lean_inc(v_bkt_379_);
v___x_398_ = lean_box(0);
v_buckets_x27_399_ = lean_array_uset(v_buckets_353_, v___x_378_, v___x_398_);
v___x_400_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_350_, v_b_351_, v_bkt_379_);
v___x_401_ = lean_array_uset(v_buckets_x27_399_, v___x_378_, v___x_400_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 1, v___x_401_);
v___x_403_ = v___x_355_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_size_352_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___x_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(lean_object* v_specThm_408_, lean_object* v_info_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v___x_422_; lean_object* v_proof_423_; lean_object* v_kind_424_; lean_object* v_excessArgs_425_; lean_object* v_specBackwardRuleCache_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v_key_431_; lean_object* v___x_432_; 
v___x_422_ = lean_st_ref_get(v_a_411_);
v_proof_423_ = lean_ctor_get(v_specThm_408_, 1);
v_kind_424_ = lean_ctor_get(v_specThm_408_, 2);
lean_inc(v_kind_424_);
v_excessArgs_425_ = lean_ctor_get(v_info_409_, 2);
v_specBackwardRuleCache_426_ = lean_ctor_get(v___x_422_, 0);
lean_inc_ref(v_specBackwardRuleCache_426_);
lean_dec(v___x_422_);
v___x_427_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecProof_key(v_proof_423_);
v___x_428_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(v_info_409_);
v___x_429_ = lean_array_get_size(v_excessArgs_425_);
v___x_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v_key_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_431_, 0, v___x_427_);
lean_ctor_set(v_key_431_, 1, v___x_430_);
v___x_432_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_specBackwardRuleCache_426_, v_key_431_);
lean_dec_ref(v_specBackwardRuleCache_426_);
if (lean_obj_tag(v___x_432_) == 1)
{
lean_object* v___x_433_; 
lean_dec_ref_known(v_key_431_, 2);
lean_dec(v_kind_424_);
lean_dec_ref(v_info_409_);
lean_dec_ref(v_specThm_408_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v___x_432_);
return v___x_433_;
}
else
{
lean_object* v___y_434_; uint8_t v___x_435_; lean_object* v___x_436_; 
lean_dec(v___x_432_);
v___y_434_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___lam__0___boxed), 15, 3);
lean_closure_set(v___y_434_, 0, v_kind_424_);
lean_closure_set(v___y_434_, 1, v_specThm_408_);
lean_closure_set(v___y_434_, 2, v_info_409_);
v___x_435_ = 0;
v___x_436_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__1___redArg(v___y_434_, v___x_435_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_472_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_472_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_472_ == 0)
{
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_472_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_472_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
if (lean_obj_tag(v_a_437_) == 0)
{
lean_object* v___x_441_; lean_object* v___x_443_; 
lean_dec_ref_known(v_key_431_, 2);
v___x_441_ = lean_box(0);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_441_);
v___x_443_ = v___x_439_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_441_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
else
{
lean_object* v_val_445_; 
v_val_445_ = lean_ctor_get(v_a_437_, 0);
lean_inc(v_val_445_);
lean_dec_ref_known(v_a_437_, 1);
if (lean_obj_tag(v_val_445_) == 1)
{
lean_object* v_val_446_; lean_object* v___x_447_; lean_object* v_specBackwardRuleCache_448_; lean_object* v_splitBackwardRuleCache_449_; lean_object* v_latticeBackwardRuleCache_450_; lean_object* v_invariants_451_; lean_object* v_vcs_452_; lean_object* v_simpState_453_; lean_object* v_fuel_454_; lean_object* v_inlineHandledInvariants_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_467_; 
v_val_446_ = lean_ctor_get(v_val_445_, 0);
v___x_447_ = lean_st_ref_take(v_a_411_);
v_specBackwardRuleCache_448_ = lean_ctor_get(v___x_447_, 0);
v_splitBackwardRuleCache_449_ = lean_ctor_get(v___x_447_, 1);
v_latticeBackwardRuleCache_450_ = lean_ctor_get(v___x_447_, 2);
v_invariants_451_ = lean_ctor_get(v___x_447_, 3);
v_vcs_452_ = lean_ctor_get(v___x_447_, 4);
v_simpState_453_ = lean_ctor_get(v___x_447_, 5);
v_fuel_454_ = lean_ctor_get(v___x_447_, 6);
v_inlineHandledInvariants_455_ = lean_ctor_get(v___x_447_, 7);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_467_ == 0)
{
v___x_457_ = v___x_447_;
v_isShared_458_ = v_isSharedCheck_467_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_inlineHandledInvariants_455_);
lean_inc(v_fuel_454_);
lean_inc(v_simpState_453_);
lean_inc(v_vcs_452_);
lean_inc(v_invariants_451_);
lean_inc(v_latticeBackwardRuleCache_450_);
lean_inc(v_splitBackwardRuleCache_449_);
lean_inc(v_specBackwardRuleCache_448_);
lean_dec(v___x_447_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_467_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___x_459_; lean_object* v___x_461_; 
lean_inc(v_val_446_);
v___x_459_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_specBackwardRuleCache_448_, v_key_431_, v_val_446_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 0, v___x_459_);
v___x_461_ = v___x_457_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_splitBackwardRuleCache_449_);
lean_ctor_set(v_reuseFailAlloc_466_, 2, v_latticeBackwardRuleCache_450_);
lean_ctor_set(v_reuseFailAlloc_466_, 3, v_invariants_451_);
lean_ctor_set(v_reuseFailAlloc_466_, 4, v_vcs_452_);
lean_ctor_set(v_reuseFailAlloc_466_, 5, v_simpState_453_);
lean_ctor_set(v_reuseFailAlloc_466_, 6, v_fuel_454_);
lean_ctor_set(v_reuseFailAlloc_466_, 7, v_inlineHandledInvariants_455_);
v___x_461_ = v_reuseFailAlloc_466_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
lean_object* v___x_462_; lean_object* v___x_464_; 
v___x_462_ = lean_st_ref_set(v_a_411_, v___x_461_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v_val_445_);
v___x_464_ = v___x_439_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_val_445_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
else
{
lean_object* v___x_468_; lean_object* v___x_470_; 
lean_dec(v_val_445_);
lean_dec_ref_known(v_key_431_, 2);
v___x_468_ = lean_box(0);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_468_);
v___x_470_ = v___x_439_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
}
}
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec_ref_known(v_key_431_, 2);
v_a_473_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_436_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_436_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached___boxed(lean_object* v_specThm_481_, lean_object* v_info_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(v_specThm_481_, v_info_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_, v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_);
lean_dec(v_a_493_);
lean_dec_ref(v_a_492_);
lean_dec(v_a_491_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec_ref(v_a_488_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0(lean_object* v_00_u03b2_496_, lean_object* v_m_497_, lean_object* v_a_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_m_497_, v_a_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___boxed(lean_object* v_00_u03b2_500_, lean_object* v_m_501_, lean_object* v_a_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0(v_00_u03b2_500_, v_m_501_, v_a_502_);
lean_dec_ref(v_a_502_);
lean_dec_ref(v_m_501_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2(lean_object* v_00_u03b2_504_, lean_object* v_m_505_, lean_object* v_a_506_, lean_object* v_b_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_m_505_, v_a_506_, v_b_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(lean_object* v_00_u03b2_509_, lean_object* v_a_510_, lean_object* v_x_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___redArg(v_a_510_, v_x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0___boxed(lean_object* v_00_u03b2_513_, lean_object* v_a_514_, lean_object* v_x_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0_spec__0(v_00_u03b2_513_, v_a_514_, v_x_515_);
lean_dec(v_x_515_);
lean_dec_ref(v_a_514_);
return v_res_516_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(lean_object* v_00_u03b2_517_, lean_object* v_a_518_, lean_object* v_x_519_){
_start:
{
uint8_t v___x_520_; 
v___x_520_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___redArg(v_a_518_, v_x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3___boxed(lean_object* v_00_u03b2_521_, lean_object* v_a_522_, lean_object* v_x_523_){
_start:
{
uint8_t v_res_524_; lean_object* v_r_525_; 
v_res_524_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__3(v_00_u03b2_521_, v_a_522_, v_x_523_);
lean_dec(v_x_523_);
lean_dec_ref(v_a_522_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4(lean_object* v_00_u03b2_526_, lean_object* v_data_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4___redArg(v_data_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5(lean_object* v_00_u03b2_529_, lean_object* v_a_530_, lean_object* v_b_531_, lean_object* v_x_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__5___redArg(v_a_530_, v_b_531_, v_x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_534_, lean_object* v_i_535_, lean_object* v_source_536_, lean_object* v_target_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5___redArg(v_i_535_, v_source_536_, v_target_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_539_, lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2_spec__4_spec__5_spec__6___redArg(v_x_540_, v_x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(lean_object* v_splitInfo_549_, lean_object* v_info_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___y_558_; 
switch(lean_obj_tag(v_splitInfo_549_))
{
case 0:
{
lean_object* v___x_602_; 
v___x_602_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__1));
v___y_558_ = v___x_602_;
goto v___jp_557_;
}
case 1:
{
lean_object* v___x_603_; 
v___x_603_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___closed__3));
v___y_558_ = v___x_603_;
goto v___jp_557_;
}
default: 
{
lean_object* v_matcherApp_604_; lean_object* v_matcherName_605_; 
v_matcherApp_604_ = lean_ctor_get(v_splitInfo_549_, 0);
v_matcherName_605_ = lean_ctor_get(v_matcherApp_604_, 1);
lean_inc(v_matcherName_605_);
v___y_558_ = v_matcherName_605_;
goto v___jp_557_;
}
}
v___jp_557_:
{
lean_object* v___x_559_; lean_object* v_excessArgs_560_; lean_object* v_splitBackwardRuleCache_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v_key_565_; lean_object* v___x_566_; 
v___x_559_ = lean_st_ref_get(v_a_551_);
v_excessArgs_560_ = lean_ctor_get(v_info_550_, 2);
v_splitBackwardRuleCache_561_ = lean_ctor_get(v___x_559_, 1);
lean_inc_ref(v_splitBackwardRuleCache_561_);
lean_dec(v___x_559_);
v___x_562_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_instWP(v_info_550_);
v___x_563_ = lean_array_get_size(v_excessArgs_560_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v_key_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_key_565_, 0, v___y_558_);
lean_ctor_set(v_key_565_, 1, v___x_564_);
v___x_566_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg(v_splitBackwardRuleCache_561_, v_key_565_);
lean_dec_ref(v_splitBackwardRuleCache_561_);
if (lean_obj_tag(v___x_566_) == 1)
{
lean_object* v_val_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
lean_dec_ref_known(v_key_565_, 2);
lean_dec_ref(v_info_550_);
lean_dec_ref(v_splitInfo_549_);
v_val_567_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_566_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_val_567_);
lean_dec(v___x_566_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
lean_ctor_set_tag(v___x_569_, 0);
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_val_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
else
{
lean_object* v___x_575_; 
lean_dec(v___x_566_);
v___x_575_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(v_splitInfo_549_, v_info_550_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_601_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_601_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_601_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_601_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v_specBackwardRuleCache_581_; lean_object* v_splitBackwardRuleCache_582_; lean_object* v_latticeBackwardRuleCache_583_; lean_object* v_invariants_584_; lean_object* v_vcs_585_; lean_object* v_simpState_586_; lean_object* v_fuel_587_; lean_object* v_inlineHandledInvariants_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_600_; 
v___x_580_ = lean_st_ref_take(v_a_551_);
v_specBackwardRuleCache_581_ = lean_ctor_get(v___x_580_, 0);
v_splitBackwardRuleCache_582_ = lean_ctor_get(v___x_580_, 1);
v_latticeBackwardRuleCache_583_ = lean_ctor_get(v___x_580_, 2);
v_invariants_584_ = lean_ctor_get(v___x_580_, 3);
v_vcs_585_ = lean_ctor_get(v___x_580_, 4);
v_simpState_586_ = lean_ctor_get(v___x_580_, 5);
v_fuel_587_ = lean_ctor_get(v___x_580_, 6);
v_inlineHandledInvariants_588_ = lean_ctor_get(v___x_580_, 7);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_580_);
if (v_isSharedCheck_600_ == 0)
{
v___x_590_ = v___x_580_;
v_isShared_591_ = v_isSharedCheck_600_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_inlineHandledInvariants_588_);
lean_inc(v_fuel_587_);
lean_inc(v_simpState_586_);
lean_inc(v_vcs_585_);
lean_inc(v_invariants_584_);
lean_inc(v_latticeBackwardRuleCache_583_);
lean_inc(v_splitBackwardRuleCache_582_);
lean_inc(v_specBackwardRuleCache_581_);
lean_dec(v___x_580_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_600_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; lean_object* v___x_594_; 
lean_inc(v_a_576_);
v___x_592_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__2___redArg(v_splitBackwardRuleCache_582_, v_key_565_, v_a_576_);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v___x_592_);
v___x_594_ = v___x_590_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_specBackwardRuleCache_581_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v___x_592_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_latticeBackwardRuleCache_583_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_invariants_584_);
lean_ctor_set(v_reuseFailAlloc_599_, 4, v_vcs_585_);
lean_ctor_set(v_reuseFailAlloc_599_, 5, v_simpState_586_);
lean_ctor_set(v_reuseFailAlloc_599_, 6, v_fuel_587_);
lean_ctor_set(v_reuseFailAlloc_599_, 7, v_inlineHandledInvariants_588_);
v___x_594_ = v_reuseFailAlloc_599_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_595_ = lean_st_ref_set(v_a_551_, v___x_594_);
if (v_isShared_579_ == 0)
{
v___x_597_ = v___x_578_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_576_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_key_565_, 2);
return v___x_575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg___boxed(lean_object* v_splitInfo_606_, lean_object* v_info_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_606_, v_info_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached(lean_object* v_splitInfo_615_, lean_object* v_info_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___redArg(v_splitInfo_615_, v_info_616_, v_a_618_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached___boxed(lean_object* v_splitInfo_630_, lean_object* v_info_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplitCached(v_splitInfo_630_, v_info_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_);
lean_dec(v_a_642_);
lean_dec_ref(v_a_641_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec(v_a_638_);
lean_dec_ref(v_a_637_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
return v_res_644_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(lean_object* v_xs_645_, lean_object* v_ys_646_, lean_object* v_x_647_){
_start:
{
lean_object* v_zero_648_; uint8_t v_isZero_649_; 
v_zero_648_ = lean_unsigned_to_nat(0u);
v_isZero_649_ = lean_nat_dec_eq(v_x_647_, v_zero_648_);
if (v_isZero_649_ == 1)
{
lean_dec(v_x_647_);
return v_isZero_649_;
}
else
{
lean_object* v_one_650_; lean_object* v_n_651_; lean_object* v___x_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v_one_650_ = lean_unsigned_to_nat(1u);
v_n_651_ = lean_nat_sub(v_x_647_, v_one_650_);
lean_dec(v_x_647_);
v___x_652_ = lean_array_fget_borrowed(v_xs_645_, v_n_651_);
v___x_653_ = lean_array_fget_borrowed(v_ys_646_, v_n_651_);
v___x_654_ = lean_expr_eqv(v___x_652_, v___x_653_);
if (v___x_654_ == 0)
{
lean_dec(v_n_651_);
return v___x_654_;
}
else
{
v_x_647_ = v_n_651_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_xs_656_, lean_object* v_ys_657_, lean_object* v_x_658_){
_start:
{
uint8_t v_res_659_; lean_object* v_r_660_; 
v_res_659_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(v_xs_656_, v_ys_657_, v_x_658_);
lean_dec_ref(v_ys_657_);
lean_dec_ref(v_xs_656_);
v_r_660_ = lean_box(v_res_659_);
return v_r_660_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg(lean_object* v_a_661_, lean_object* v_x_662_){
_start:
{
if (lean_obj_tag(v_x_662_) == 0)
{
uint8_t v___x_663_; 
v___x_663_ = 0;
return v___x_663_;
}
else
{
lean_object* v_key_664_; lean_object* v_tail_665_; uint8_t v___y_667_; lean_object* v_fst_669_; lean_object* v_snd_670_; lean_object* v_fst_671_; lean_object* v_snd_672_; uint8_t v___x_673_; 
v_key_664_ = lean_ctor_get(v_x_662_, 0);
v_tail_665_ = lean_ctor_get(v_x_662_, 2);
v_fst_669_ = lean_ctor_get(v_key_664_, 0);
v_snd_670_ = lean_ctor_get(v_key_664_, 1);
v_fst_671_ = lean_ctor_get(v_a_661_, 0);
v_snd_672_ = lean_ctor_get(v_a_661_, 1);
v___x_673_ = lean_name_eq(v_fst_669_, v_fst_671_);
if (v___x_673_ == 0)
{
v___y_667_ = v___x_673_;
goto v___jp_666_;
}
else
{
lean_object* v_fst_674_; lean_object* v_snd_675_; lean_object* v_fst_676_; lean_object* v_snd_677_; lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v_fst_674_ = lean_ctor_get(v_snd_670_, 0);
v_snd_675_ = lean_ctor_get(v_snd_670_, 1);
v_fst_676_ = lean_ctor_get(v_snd_672_, 0);
v_snd_677_ = lean_ctor_get(v_snd_672_, 1);
v___x_678_ = lean_array_get_size(v_fst_674_);
v___x_679_ = lean_array_get_size(v_fst_676_);
v___x_680_ = lean_nat_dec_eq(v___x_678_, v___x_679_);
if (v___x_680_ == 0)
{
v_x_662_ = v_tail_665_;
goto _start;
}
else
{
uint8_t v___x_682_; 
v___x_682_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(v_fst_674_, v_fst_676_, v___x_678_);
if (v___x_682_ == 0)
{
v_x_662_ = v_tail_665_;
goto _start;
}
else
{
uint8_t v___x_684_; 
v___x_684_ = lean_nat_dec_eq(v_snd_675_, v_snd_677_);
v___y_667_ = v___x_684_;
goto v___jp_666_;
}
}
}
v___jp_666_:
{
if (v___y_667_ == 0)
{
v_x_662_ = v_tail_665_;
goto _start;
}
else
{
return v___y_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg___boxed(lean_object* v_a_685_, lean_object* v_x_686_){
_start:
{
uint8_t v_res_687_; lean_object* v_r_688_; 
v_res_687_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg(v_a_685_, v_x_686_);
lean_dec(v_x_686_);
lean_dec_ref(v_a_685_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(lean_object* v_as_689_, size_t v_i_690_, size_t v_stop_691_, uint64_t v_b_692_){
_start:
{
uint8_t v___x_693_; 
v___x_693_ = lean_usize_dec_eq(v_i_690_, v_stop_691_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; uint64_t v___x_695_; uint64_t v___x_696_; size_t v___x_697_; size_t v___x_698_; 
v___x_694_ = lean_array_uget_borrowed(v_as_689_, v_i_690_);
v___x_695_ = l_Lean_Expr_hash(v___x_694_);
v___x_696_ = lean_uint64_mix_hash(v_b_692_, v___x_695_);
v___x_697_ = ((size_t)1ULL);
v___x_698_ = lean_usize_add(v_i_690_, v___x_697_);
v_i_690_ = v___x_698_;
v_b_692_ = v___x_696_;
goto _start;
}
else
{
return v_b_692_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2___boxed(lean_object* v_as_700_, lean_object* v_i_701_, lean_object* v_stop_702_, lean_object* v_b_703_){
_start:
{
size_t v_i_boxed_704_; size_t v_stop_boxed_705_; uint64_t v_b_boxed_706_; uint64_t v_res_707_; lean_object* v_r_708_; 
v_i_boxed_704_ = lean_unbox_usize(v_i_701_);
lean_dec(v_i_701_);
v_stop_boxed_705_ = lean_unbox_usize(v_stop_702_);
lean_dec(v_stop_702_);
v_b_boxed_706_ = lean_unbox_uint64(v_b_703_);
lean_dec_ref(v_b_703_);
v_res_707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_as_700_, v_i_boxed_704_, v_stop_boxed_705_, v_b_boxed_706_);
lean_dec_ref(v_as_700_);
v_r_708_ = lean_box_uint64(v_res_707_);
return v_r_708_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7_spec__8___redArg(lean_object* v_x_709_, lean_object* v_x_710_){
_start:
{
if (lean_obj_tag(v_x_710_) == 0)
{
return v_x_709_;
}
else
{
lean_object* v_key_711_; lean_object* v_value_712_; lean_object* v_tail_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_761_; 
v_key_711_ = lean_ctor_get(v_x_710_, 0);
v_value_712_ = lean_ctor_get(v_x_710_, 1);
v_tail_713_ = lean_ctor_get(v_x_710_, 2);
v_isSharedCheck_761_ = !lean_is_exclusive(v_x_710_);
if (v_isSharedCheck_761_ == 0)
{
v___x_715_ = v_x_710_;
v_isShared_716_ = v_isSharedCheck_761_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_tail_713_);
lean_inc(v_value_712_);
lean_inc(v_key_711_);
lean_dec(v_x_710_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_761_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v_fst_717_; lean_object* v_snd_718_; lean_object* v___x_719_; lean_object* v___y_721_; uint64_t v___y_722_; uint64_t v___y_723_; uint64_t v___y_745_; 
v_fst_717_ = lean_ctor_get(v_key_711_, 0);
v_snd_718_ = lean_ctor_get(v_key_711_, 1);
v___x_719_ = lean_array_get_size(v_x_709_);
if (lean_obj_tag(v_fst_717_) == 0)
{
uint64_t v___x_759_; 
v___x_759_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_745_ = v___x_759_;
goto v___jp_744_;
}
else
{
uint64_t v_hash_760_; 
v_hash_760_ = lean_ctor_get_uint64(v_fst_717_, sizeof(void*)*2);
v___y_745_ = v_hash_760_;
goto v___jp_744_;
}
v___jp_720_:
{
uint64_t v___x_724_; uint64_t v___x_725_; uint64_t v___x_726_; uint64_t v___x_727_; uint64_t v___x_728_; uint64_t v_fold_729_; uint64_t v___x_730_; uint64_t v___x_731_; uint64_t v___x_732_; size_t v___x_733_; size_t v___x_734_; size_t v___x_735_; size_t v___x_736_; size_t v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_724_ = lean_uint64_of_nat(v___y_721_);
lean_dec(v___y_721_);
v___x_725_ = lean_uint64_mix_hash(v___y_723_, v___x_724_);
v___x_726_ = lean_uint64_mix_hash(v___y_722_, v___x_725_);
v___x_727_ = 32ULL;
v___x_728_ = lean_uint64_shift_right(v___x_726_, v___x_727_);
v_fold_729_ = lean_uint64_xor(v___x_726_, v___x_728_);
v___x_730_ = 16ULL;
v___x_731_ = lean_uint64_shift_right(v_fold_729_, v___x_730_);
v___x_732_ = lean_uint64_xor(v_fold_729_, v___x_731_);
v___x_733_ = lean_uint64_to_usize(v___x_732_);
v___x_734_ = lean_usize_of_nat(v___x_719_);
v___x_735_ = ((size_t)1ULL);
v___x_736_ = lean_usize_sub(v___x_734_, v___x_735_);
v___x_737_ = lean_usize_land(v___x_733_, v___x_736_);
v___x_738_ = lean_array_uget_borrowed(v_x_709_, v___x_737_);
lean_inc(v___x_738_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 2, v___x_738_);
v___x_740_ = v___x_715_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_key_711_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v_value_712_);
lean_ctor_set(v_reuseFailAlloc_743_, 2, v___x_738_);
v___x_740_ = v_reuseFailAlloc_743_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = lean_array_uset(v_x_709_, v___x_737_, v___x_740_);
v_x_709_ = v___x_741_;
v_x_710_ = v_tail_713_;
goto _start;
}
}
v___jp_744_:
{
lean_object* v_fst_746_; lean_object* v_snd_747_; uint64_t v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v_fst_746_ = lean_ctor_get(v_snd_718_, 0);
v_snd_747_ = lean_ctor_get(v_snd_718_, 1);
v___x_748_ = 7ULL;
v___x_749_ = lean_unsigned_to_nat(0u);
v___x_750_ = lean_array_get_size(v_fst_746_);
v___x_751_ = lean_nat_dec_lt(v___x_749_, v___x_750_);
if (v___x_751_ == 0)
{
lean_inc(v_snd_747_);
v___y_721_ = v_snd_747_;
v___y_722_ = v___y_745_;
v___y_723_ = v___x_748_;
goto v___jp_720_;
}
else
{
uint8_t v___x_752_; 
v___x_752_ = lean_nat_dec_le(v___x_750_, v___x_750_);
if (v___x_752_ == 0)
{
if (v___x_751_ == 0)
{
lean_inc(v_snd_747_);
v___y_721_ = v_snd_747_;
v___y_722_ = v___y_745_;
v___y_723_ = v___x_748_;
goto v___jp_720_;
}
else
{
size_t v___x_753_; size_t v___x_754_; uint64_t v___x_755_; 
v___x_753_ = ((size_t)0ULL);
v___x_754_ = lean_usize_of_nat(v___x_750_);
v___x_755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_fst_746_, v___x_753_, v___x_754_, v___x_748_);
lean_inc(v_snd_747_);
v___y_721_ = v_snd_747_;
v___y_722_ = v___y_745_;
v___y_723_ = v___x_755_;
goto v___jp_720_;
}
}
else
{
size_t v___x_756_; size_t v___x_757_; uint64_t v___x_758_; 
v___x_756_ = ((size_t)0ULL);
v___x_757_ = lean_usize_of_nat(v___x_750_);
v___x_758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_fst_746_, v___x_756_, v___x_757_, v___x_748_);
lean_inc(v_snd_747_);
v___y_721_ = v_snd_747_;
v___y_722_ = v___y_745_;
v___y_723_ = v___x_758_;
goto v___jp_720_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7___redArg(lean_object* v_i_762_, lean_object* v_source_763_, lean_object* v_target_764_){
_start:
{
lean_object* v___x_765_; uint8_t v___x_766_; 
v___x_765_ = lean_array_get_size(v_source_763_);
v___x_766_ = lean_nat_dec_lt(v_i_762_, v___x_765_);
if (v___x_766_ == 0)
{
lean_dec_ref(v_source_763_);
lean_dec(v_i_762_);
return v_target_764_;
}
else
{
lean_object* v_es_767_; lean_object* v___x_768_; lean_object* v_source_769_; lean_object* v_target_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v_es_767_ = lean_array_fget(v_source_763_, v_i_762_);
v___x_768_ = lean_box(0);
v_source_769_ = lean_array_fset(v_source_763_, v_i_762_, v___x_768_);
v_target_770_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7_spec__8___redArg(v_target_764_, v_es_767_);
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = lean_nat_add(v_i_762_, v___x_771_);
lean_dec(v_i_762_);
v_i_762_ = v___x_772_;
v_source_763_ = v_source_769_;
v_target_764_ = v_target_770_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5___redArg(lean_object* v_data_774_){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v_nbuckets_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_775_ = lean_array_get_size(v_data_774_);
v___x_776_ = lean_unsigned_to_nat(2u);
v_nbuckets_777_ = lean_nat_mul(v___x_775_, v___x_776_);
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = lean_box(0);
v___x_780_ = lean_mk_array(v_nbuckets_777_, v___x_779_);
v___x_781_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7___redArg(v___x_778_, v_data_774_, v___x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6___redArg(lean_object* v_a_782_, lean_object* v_b_783_, lean_object* v_x_784_){
_start:
{
if (lean_obj_tag(v_x_784_) == 0)
{
lean_dec(v_b_783_);
lean_dec_ref(v_a_782_);
return v_x_784_;
}
else
{
lean_object* v_key_785_; lean_object* v_value_786_; lean_object* v_tail_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_813_; 
v_key_785_ = lean_ctor_get(v_x_784_, 0);
v_value_786_ = lean_ctor_get(v_x_784_, 1);
v_tail_787_ = lean_ctor_get(v_x_784_, 2);
v_isSharedCheck_813_ = !lean_is_exclusive(v_x_784_);
if (v_isSharedCheck_813_ == 0)
{
v___x_789_ = v_x_784_;
v_isShared_790_ = v_isSharedCheck_813_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_tail_787_);
lean_inc(v_value_786_);
lean_inc(v_key_785_);
lean_dec(v_x_784_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_813_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
uint8_t v___y_797_; lean_object* v_fst_799_; lean_object* v_snd_800_; lean_object* v_fst_801_; lean_object* v_snd_802_; uint8_t v___x_803_; 
v_fst_799_ = lean_ctor_get(v_key_785_, 0);
v_snd_800_ = lean_ctor_get(v_key_785_, 1);
v_fst_801_ = lean_ctor_get(v_a_782_, 0);
v_snd_802_ = lean_ctor_get(v_a_782_, 1);
v___x_803_ = lean_name_eq(v_fst_799_, v_fst_801_);
if (v___x_803_ == 0)
{
v___y_797_ = v___x_803_;
goto v___jp_796_;
}
else
{
lean_object* v_fst_804_; lean_object* v_snd_805_; lean_object* v_fst_806_; lean_object* v_snd_807_; lean_object* v___x_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v_fst_804_ = lean_ctor_get(v_snd_800_, 0);
v_snd_805_ = lean_ctor_get(v_snd_800_, 1);
v_fst_806_ = lean_ctor_get(v_snd_802_, 0);
v_snd_807_ = lean_ctor_get(v_snd_802_, 1);
v___x_808_ = lean_array_get_size(v_fst_804_);
v___x_809_ = lean_array_get_size(v_fst_806_);
v___x_810_ = lean_nat_dec_eq(v___x_808_, v___x_809_);
if (v___x_810_ == 0)
{
goto v___jp_791_;
}
else
{
uint8_t v___x_811_; 
v___x_811_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(v_fst_804_, v_fst_806_, v___x_808_);
if (v___x_811_ == 0)
{
goto v___jp_791_;
}
else
{
uint8_t v___x_812_; 
v___x_812_ = lean_nat_dec_eq(v_snd_805_, v_snd_807_);
v___y_797_ = v___x_812_;
goto v___jp_796_;
}
}
}
v___jp_791_:
{
lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_792_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6___redArg(v_a_782_, v_b_783_, v_tail_787_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 2, v___x_792_);
v___x_794_ = v___x_789_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_key_785_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_value_786_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
v___jp_796_:
{
if (v___y_797_ == 0)
{
goto v___jp_791_;
}
else
{
lean_object* v___x_798_; 
lean_del_object(v___x_789_);
lean_dec(v_value_786_);
lean_dec(v_key_785_);
v___x_798_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_798_, 0, v_a_782_);
lean_ctor_set(v___x_798_, 1, v_b_783_);
lean_ctor_set(v___x_798_, 2, v_tail_787_);
return v___x_798_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2___redArg(lean_object* v_m_814_, lean_object* v_a_815_, lean_object* v_b_816_){
_start:
{
lean_object* v_size_817_; lean_object* v_buckets_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_886_; 
v_size_817_ = lean_ctor_get(v_m_814_, 0);
v_buckets_818_ = lean_ctor_get(v_m_814_, 1);
v_isSharedCheck_886_ = !lean_is_exclusive(v_m_814_);
if (v_isSharedCheck_886_ == 0)
{
v___x_820_ = v_m_814_;
v_isShared_821_ = v_isSharedCheck_886_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_buckets_818_);
lean_inc(v_size_817_);
lean_dec(v_m_814_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_886_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_fst_822_; lean_object* v_snd_823_; lean_object* v___x_824_; lean_object* v___y_826_; uint64_t v___y_827_; uint64_t v___y_828_; uint64_t v___y_870_; 
v_fst_822_ = lean_ctor_get(v_a_815_, 0);
v_snd_823_ = lean_ctor_get(v_a_815_, 1);
v___x_824_ = lean_array_get_size(v_buckets_818_);
if (lean_obj_tag(v_fst_822_) == 0)
{
uint64_t v___x_884_; 
v___x_884_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_870_ = v___x_884_;
goto v___jp_869_;
}
else
{
uint64_t v_hash_885_; 
v_hash_885_ = lean_ctor_get_uint64(v_fst_822_, sizeof(void*)*2);
v___y_870_ = v_hash_885_;
goto v___jp_869_;
}
v___jp_825_:
{
uint64_t v___x_829_; uint64_t v___x_830_; uint64_t v___x_831_; uint64_t v___x_832_; uint64_t v___x_833_; uint64_t v_fold_834_; uint64_t v___x_835_; uint64_t v___x_836_; uint64_t v___x_837_; size_t v___x_838_; size_t v___x_839_; size_t v___x_840_; size_t v___x_841_; size_t v___x_842_; lean_object* v_bkt_843_; uint8_t v___x_844_; 
v___x_829_ = lean_uint64_of_nat(v___y_826_);
lean_dec(v___y_826_);
v___x_830_ = lean_uint64_mix_hash(v___y_828_, v___x_829_);
v___x_831_ = lean_uint64_mix_hash(v___y_827_, v___x_830_);
v___x_832_ = 32ULL;
v___x_833_ = lean_uint64_shift_right(v___x_831_, v___x_832_);
v_fold_834_ = lean_uint64_xor(v___x_831_, v___x_833_);
v___x_835_ = 16ULL;
v___x_836_ = lean_uint64_shift_right(v_fold_834_, v___x_835_);
v___x_837_ = lean_uint64_xor(v_fold_834_, v___x_836_);
v___x_838_ = lean_uint64_to_usize(v___x_837_);
v___x_839_ = lean_usize_of_nat(v___x_824_);
v___x_840_ = ((size_t)1ULL);
v___x_841_ = lean_usize_sub(v___x_839_, v___x_840_);
v___x_842_ = lean_usize_land(v___x_838_, v___x_841_);
v_bkt_843_ = lean_array_uget_borrowed(v_buckets_818_, v___x_842_);
v___x_844_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg(v_a_815_, v_bkt_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; lean_object* v_size_x27_846_; lean_object* v___x_847_; lean_object* v_buckets_x27_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_845_ = lean_unsigned_to_nat(1u);
v_size_x27_846_ = lean_nat_add(v_size_817_, v___x_845_);
lean_dec(v_size_817_);
lean_inc(v_bkt_843_);
v___x_847_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_847_, 0, v_a_815_);
lean_ctor_set(v___x_847_, 1, v_b_816_);
lean_ctor_set(v___x_847_, 2, v_bkt_843_);
v_buckets_x27_848_ = lean_array_uset(v_buckets_818_, v___x_842_, v___x_847_);
v___x_849_ = lean_unsigned_to_nat(4u);
v___x_850_ = lean_nat_mul(v_size_x27_846_, v___x_849_);
v___x_851_ = lean_unsigned_to_nat(3u);
v___x_852_ = lean_nat_div(v___x_850_, v___x_851_);
lean_dec(v___x_850_);
v___x_853_ = lean_array_get_size(v_buckets_x27_848_);
v___x_854_ = lean_nat_dec_le(v___x_852_, v___x_853_);
lean_dec(v___x_852_);
if (v___x_854_ == 0)
{
lean_object* v_val_855_; lean_object* v___x_857_; 
v_val_855_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5___redArg(v_buckets_x27_848_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v_val_855_);
lean_ctor_set(v___x_820_, 0, v_size_x27_846_);
v___x_857_ = v___x_820_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_size_x27_846_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_val_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
else
{
lean_object* v___x_860_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v_buckets_x27_848_);
lean_ctor_set(v___x_820_, 0, v_size_x27_846_);
v___x_860_ = v___x_820_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_size_x27_846_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v_buckets_x27_848_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
else
{
lean_object* v___x_862_; lean_object* v_buckets_x27_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_867_; 
lean_inc(v_bkt_843_);
v___x_862_ = lean_box(0);
v_buckets_x27_863_ = lean_array_uset(v_buckets_818_, v___x_842_, v___x_862_);
v___x_864_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6___redArg(v_a_815_, v_b_816_, v_bkt_843_);
v___x_865_ = lean_array_uset(v_buckets_x27_863_, v___x_842_, v___x_864_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v___x_865_);
v___x_867_ = v___x_820_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_size_817_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
v___jp_869_:
{
lean_object* v_fst_871_; lean_object* v_snd_872_; uint64_t v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v_fst_871_ = lean_ctor_get(v_snd_823_, 0);
v_snd_872_ = lean_ctor_get(v_snd_823_, 1);
v___x_873_ = 7ULL;
v___x_874_ = lean_unsigned_to_nat(0u);
v___x_875_ = lean_array_get_size(v_fst_871_);
v___x_876_ = lean_nat_dec_lt(v___x_874_, v___x_875_);
if (v___x_876_ == 0)
{
lean_inc(v_snd_872_);
v___y_826_ = v_snd_872_;
v___y_827_ = v___y_870_;
v___y_828_ = v___x_873_;
goto v___jp_825_;
}
else
{
uint8_t v___x_877_; 
v___x_877_ = lean_nat_dec_le(v___x_875_, v___x_875_);
if (v___x_877_ == 0)
{
if (v___x_876_ == 0)
{
lean_inc(v_snd_872_);
v___y_826_ = v_snd_872_;
v___y_827_ = v___y_870_;
v___y_828_ = v___x_873_;
goto v___jp_825_;
}
else
{
size_t v___x_878_; size_t v___x_879_; uint64_t v___x_880_; 
v___x_878_ = ((size_t)0ULL);
v___x_879_ = lean_usize_of_nat(v___x_875_);
v___x_880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_fst_871_, v___x_878_, v___x_879_, v___x_873_);
lean_inc(v_snd_872_);
v___y_826_ = v_snd_872_;
v___y_827_ = v___y_870_;
v___y_828_ = v___x_880_;
goto v___jp_825_;
}
}
else
{
size_t v___x_881_; size_t v___x_882_; uint64_t v___x_883_; 
v___x_881_ = ((size_t)0ULL);
v___x_882_ = lean_usize_of_nat(v___x_875_);
v___x_883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_fst_871_, v___x_881_, v___x_882_, v___x_873_);
lean_inc(v_snd_872_);
v___y_826_ = v_snd_872_;
v___y_827_ = v___y_870_;
v___y_828_ = v___x_883_;
goto v___jp_825_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg(lean_object* v_a_887_, lean_object* v_x_888_){
_start:
{
if (lean_obj_tag(v_x_888_) == 0)
{
lean_object* v___x_889_; 
v___x_889_ = lean_box(0);
return v___x_889_;
}
else
{
lean_object* v_key_890_; lean_object* v_value_891_; lean_object* v_tail_892_; uint8_t v___y_894_; lean_object* v_fst_897_; lean_object* v_snd_898_; lean_object* v_fst_899_; lean_object* v_snd_900_; uint8_t v___x_901_; 
v_key_890_ = lean_ctor_get(v_x_888_, 0);
v_value_891_ = lean_ctor_get(v_x_888_, 1);
v_tail_892_ = lean_ctor_get(v_x_888_, 2);
v_fst_897_ = lean_ctor_get(v_key_890_, 0);
v_snd_898_ = lean_ctor_get(v_key_890_, 1);
v_fst_899_ = lean_ctor_get(v_a_887_, 0);
v_snd_900_ = lean_ctor_get(v_a_887_, 1);
v___x_901_ = lean_name_eq(v_fst_897_, v_fst_899_);
if (v___x_901_ == 0)
{
v___y_894_ = v___x_901_;
goto v___jp_893_;
}
else
{
lean_object* v_fst_902_; lean_object* v_snd_903_; lean_object* v_fst_904_; lean_object* v_snd_905_; lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v_fst_902_ = lean_ctor_get(v_snd_898_, 0);
v_snd_903_ = lean_ctor_get(v_snd_898_, 1);
v_fst_904_ = lean_ctor_get(v_snd_900_, 0);
v_snd_905_ = lean_ctor_get(v_snd_900_, 1);
v___x_906_ = lean_array_get_size(v_fst_902_);
v___x_907_ = lean_array_get_size(v_fst_904_);
v___x_908_ = lean_nat_dec_eq(v___x_906_, v___x_907_);
if (v___x_908_ == 0)
{
v_x_888_ = v_tail_892_;
goto _start;
}
else
{
uint8_t v___x_910_; 
v___x_910_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(v_fst_902_, v_fst_904_, v___x_906_);
if (v___x_910_ == 0)
{
v_x_888_ = v_tail_892_;
goto _start;
}
else
{
uint8_t v___x_912_; 
v___x_912_ = lean_nat_dec_eq(v_snd_903_, v_snd_905_);
v___y_894_ = v___x_912_;
goto v___jp_893_;
}
}
}
v___jp_893_:
{
if (v___y_894_ == 0)
{
v_x_888_ = v_tail_892_;
goto _start;
}
else
{
lean_object* v___x_896_; 
lean_inc(v_value_891_);
v___x_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_896_, 0, v_value_891_);
return v___x_896_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg___boxed(lean_object* v_a_913_, lean_object* v_x_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg(v_a_913_, v_x_914_);
lean_dec(v_x_914_);
lean_dec_ref(v_a_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg(lean_object* v_m_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_buckets_918_; lean_object* v_fst_919_; lean_object* v_snd_920_; lean_object* v___x_921_; lean_object* v___y_923_; uint64_t v___y_924_; uint64_t v___y_925_; uint64_t v___y_943_; 
v_buckets_918_ = lean_ctor_get(v_m_916_, 1);
v_fst_919_ = lean_ctor_get(v_a_917_, 0);
v_snd_920_ = lean_ctor_get(v_a_917_, 1);
v___x_921_ = lean_array_get_size(v_buckets_918_);
if (lean_obj_tag(v_fst_919_) == 0)
{
uint64_t v___x_957_; 
v___x_957_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached_spec__0___redArg___closed__0);
v___y_943_ = v___x_957_;
goto v___jp_942_;
}
else
{
uint64_t v_hash_958_; 
v_hash_958_ = lean_ctor_get_uint64(v_fst_919_, sizeof(void*)*2);
v___y_943_ = v_hash_958_;
goto v___jp_942_;
}
v___jp_922_:
{
uint64_t v___x_926_; uint64_t v___x_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v___x_930_; uint64_t v_fold_931_; uint64_t v___x_932_; uint64_t v___x_933_; uint64_t v___x_934_; size_t v___x_935_; size_t v___x_936_; size_t v___x_937_; size_t v___x_938_; size_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_926_ = lean_uint64_of_nat(v___y_923_);
v___x_927_ = lean_uint64_mix_hash(v___y_925_, v___x_926_);
v___x_928_ = lean_uint64_mix_hash(v___y_924_, v___x_927_);
v___x_929_ = 32ULL;
v___x_930_ = lean_uint64_shift_right(v___x_928_, v___x_929_);
v_fold_931_ = lean_uint64_xor(v___x_928_, v___x_930_);
v___x_932_ = 16ULL;
v___x_933_ = lean_uint64_shift_right(v_fold_931_, v___x_932_);
v___x_934_ = lean_uint64_xor(v_fold_931_, v___x_933_);
v___x_935_ = lean_uint64_to_usize(v___x_934_);
v___x_936_ = lean_usize_of_nat(v___x_921_);
v___x_937_ = ((size_t)1ULL);
v___x_938_ = lean_usize_sub(v___x_936_, v___x_937_);
v___x_939_ = lean_usize_land(v___x_935_, v___x_938_);
v___x_940_ = lean_array_uget_borrowed(v_buckets_918_, v___x_939_);
v___x_941_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg(v_a_917_, v___x_940_);
return v___x_941_;
}
v___jp_942_:
{
lean_object* v_fst_944_; lean_object* v_snd_945_; uint64_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; 
v_fst_944_ = lean_ctor_get(v_snd_920_, 0);
v_snd_945_ = lean_ctor_get(v_snd_920_, 1);
v___x_946_ = 7ULL;
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_array_get_size(v_fst_944_);
v___x_949_ = lean_nat_dec_lt(v___x_947_, v___x_948_);
if (v___x_949_ == 0)
{
v___y_923_ = v_snd_945_;
v___y_924_ = v___y_943_;
v___y_925_ = v___x_946_;
goto v___jp_922_;
}
else
{
uint8_t v___x_950_; 
v___x_950_ = lean_nat_dec_le(v___x_948_, v___x_948_);
if (v___x_950_ == 0)
{
if (v___x_949_ == 0)
{
v___y_923_ = v_snd_945_;
v___y_924_ = v___y_943_;
v___y_925_ = v___x_946_;
goto v___jp_922_;
}
else
{
size_t v___x_951_; size_t v___x_952_; uint64_t v___x_953_; 
v___x_951_ = ((size_t)0ULL);
v___x_952_ = lean_usize_of_nat(v___x_948_);
v___x_953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_fst_944_, v___x_951_, v___x_952_, v___x_946_);
v___y_923_ = v_snd_945_;
v___y_924_ = v___y_943_;
v___y_925_ = v___x_953_;
goto v___jp_922_;
}
}
else
{
size_t v___x_954_; size_t v___x_955_; uint64_t v___x_956_; 
v___x_954_ = ((size_t)0ULL);
v___x_955_ = lean_usize_of_nat(v___x_948_);
v___x_956_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__2(v_fst_944_, v___x_954_, v___x_955_, v___x_946_);
v___y_923_ = v_snd_945_;
v___y_924_ = v___y_943_;
v___y_925_ = v___x_956_;
goto v___jp_922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg___boxed(lean_object* v_m_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg(v_m_959_, v_a_960_);
lean_dec_ref(v_a_960_);
lean_dec_ref(v_m_959_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg(size_t v_sz_962_, size_t v_i_963_, lean_object* v_bs_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_){
_start:
{
uint8_t v___x_971_; 
v___x_971_ = lean_usize_dec_lt(v_i_963_, v_sz_962_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; 
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v_bs_964_);
return v___x_972_;
}
else
{
lean_object* v_v_973_; lean_object* v___x_974_; 
v_v_973_ = lean_array_uget_borrowed(v_bs_964_, v_i_963_);
lean_inc(v_v_973_);
v___x_974_ = l_Lean_Meta_Sym_inferType___redArg(v_v_973_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; lean_object* v_bs_x27_977_; size_t v___x_978_; size_t v___x_979_; lean_object* v___x_980_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = lean_unsigned_to_nat(0u);
v_bs_x27_977_ = lean_array_uset(v_bs_964_, v_i_963_, v___x_976_);
v___x_978_ = ((size_t)1ULL);
v___x_979_ = lean_usize_add(v_i_963_, v___x_978_);
v___x_980_ = lean_array_uset(v_bs_x27_977_, v_i_963_, v_a_975_);
v_i_963_ = v___x_979_;
v_bs_964_ = v___x_980_;
goto _start;
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
lean_dec_ref(v_bs_964_);
v_a_982_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_974_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_974_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg___boxed(lean_object* v_sz_990_, lean_object* v_i_991_, lean_object* v_bs_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
size_t v_sz_boxed_999_; size_t v_i_boxed_1000_; lean_object* v_res_1001_; 
v_sz_boxed_999_ = lean_unbox_usize(v_sz_990_);
lean_dec(v_sz_990_);
v_i_boxed_1000_ = lean_unbox_usize(v_i_991_);
lean_dec(v_i_991_);
v_res_1001_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg(v_sz_boxed_999_, v_i_boxed_1000_, v_bs_992_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec(v___y_993_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___redArg(lean_object* v_c_1002_, lean_object* v_as_1003_, lean_object* v_excessArgs_1004_, lean_object* v_resultType_x3f_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v___x_1014_; size_t v_sz_1015_; size_t v___x_1016_; lean_object* v___x_1017_; 
v___x_1014_ = lean_st_ref_get(v_a_1006_);
v_sz_1015_ = lean_array_size(v_as_1003_);
v___x_1016_ = ((size_t)0ULL);
lean_inc_ref(v_as_1003_);
v___x_1017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg(v_sz_1015_, v___x_1016_, v_as_1003_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1059_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1020_ = v___x_1017_;
v_isShared_1021_ = v_isSharedCheck_1059_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1017_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1059_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v_latticeBackwardRuleCache_1022_; lean_object* v_applyLemma_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v_latticeBackwardRuleCache_1022_ = lean_ctor_get(v___x_1014_, 2);
lean_inc_ref(v_latticeBackwardRuleCache_1022_);
lean_dec(v___x_1014_);
v_applyLemma_1023_ = lean_ctor_get(v_c_1002_, 1);
v___x_1024_ = lean_array_get_size(v_excessArgs_1004_);
v___x_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1025_, 0, v_a_1018_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
lean_inc(v_applyLemma_1023_);
v___x_1026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1026_, 0, v_applyLemma_1023_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg(v_latticeBackwardRuleCache_1022_, v___x_1026_);
lean_dec_ref(v_latticeBackwardRuleCache_1022_);
if (lean_obj_tag(v___x_1027_) == 1)
{
lean_object* v_val_1028_; lean_object* v___x_1030_; 
lean_dec_ref_known(v___x_1026_, 2);
lean_dec(v_resultType_x3f_1005_);
lean_dec_ref(v_excessArgs_1004_);
lean_dec_ref(v_as_1003_);
lean_dec_ref(v_c_1002_);
v_val_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_val_1028_);
lean_dec_ref_known(v___x_1027_, 1);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v_val_1028_);
v___x_1030_ = v___x_1020_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_val_1028_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
else
{
lean_object* v___x_1032_; 
lean_dec(v___x_1027_);
lean_del_object(v___x_1020_);
v___x_1032_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_LatticeSplit_mkBackwardRuleForLattice(v_c_1002_, v_as_1003_, v_excessArgs_1004_, v_resultType_x3f_1005_, v_a_1009_, v_a_1010_, v_a_1011_, v_a_1012_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1058_; 
v_a_1033_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1035_ = v___x_1032_;
v_isShared_1036_ = v_isSharedCheck_1058_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1032_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1058_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v_specBackwardRuleCache_1038_; lean_object* v_splitBackwardRuleCache_1039_; lean_object* v_latticeBackwardRuleCache_1040_; lean_object* v_invariants_1041_; lean_object* v_vcs_1042_; lean_object* v_simpState_1043_; lean_object* v_fuel_1044_; lean_object* v_inlineHandledInvariants_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1057_; 
v___x_1037_ = lean_st_ref_take(v_a_1006_);
v_specBackwardRuleCache_1038_ = lean_ctor_get(v___x_1037_, 0);
v_splitBackwardRuleCache_1039_ = lean_ctor_get(v___x_1037_, 1);
v_latticeBackwardRuleCache_1040_ = lean_ctor_get(v___x_1037_, 2);
v_invariants_1041_ = lean_ctor_get(v___x_1037_, 3);
v_vcs_1042_ = lean_ctor_get(v___x_1037_, 4);
v_simpState_1043_ = lean_ctor_get(v___x_1037_, 5);
v_fuel_1044_ = lean_ctor_get(v___x_1037_, 6);
v_inlineHandledInvariants_1045_ = lean_ctor_get(v___x_1037_, 7);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1047_ = v___x_1037_;
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_inlineHandledInvariants_1045_);
lean_inc(v_fuel_1044_);
lean_inc(v_simpState_1043_);
lean_inc(v_vcs_1042_);
lean_inc(v_invariants_1041_);
lean_inc(v_latticeBackwardRuleCache_1040_);
lean_inc(v_splitBackwardRuleCache_1039_);
lean_inc(v_specBackwardRuleCache_1038_);
lean_dec(v___x_1037_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1057_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; lean_object* v___x_1051_; 
lean_inc(v_a_1033_);
v___x_1049_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2___redArg(v_latticeBackwardRuleCache_1040_, v___x_1026_, v_a_1033_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 2, v___x_1049_);
v___x_1051_ = v___x_1047_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_specBackwardRuleCache_1038_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v_splitBackwardRuleCache_1039_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v___x_1049_);
lean_ctor_set(v_reuseFailAlloc_1056_, 3, v_invariants_1041_);
lean_ctor_set(v_reuseFailAlloc_1056_, 4, v_vcs_1042_);
lean_ctor_set(v_reuseFailAlloc_1056_, 5, v_simpState_1043_);
lean_ctor_set(v_reuseFailAlloc_1056_, 6, v_fuel_1044_);
lean_ctor_set(v_reuseFailAlloc_1056_, 7, v_inlineHandledInvariants_1045_);
v___x_1051_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = lean_st_ref_set(v_a_1006_, v___x_1051_);
if (v_isShared_1036_ == 0)
{
v___x_1054_ = v___x_1035_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1033_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
else
{
lean_dec_ref_known(v___x_1026_, 2);
return v___x_1032_;
}
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec(v___x_1014_);
lean_dec(v_resultType_x3f_1005_);
lean_dec_ref(v_excessArgs_1004_);
lean_dec_ref(v_as_1003_);
lean_dec_ref(v_c_1002_);
v_a_1060_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1017_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1017_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___redArg___boxed(lean_object* v_c_1068_, lean_object* v_as_1069_, lean_object* v_excessArgs_1070_, lean_object* v_resultType_x3f_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___redArg(v_c_1068_, v_as_1069_, v_excessArgs_1070_, v_resultType_x3f_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_a_1074_);
lean_dec_ref(v_a_1073_);
lean_dec(v_a_1072_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached(lean_object* v_c_1081_, lean_object* v_as_1082_, lean_object* v_excessArgs_1083_, lean_object* v_resultType_x3f_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___redArg(v_c_1081_, v_as_1082_, v_excessArgs_1083_, v_resultType_x3f_1084_, v_a_1086_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached___boxed(lean_object* v_c_1098_, lean_object* v_as_1099_, lean_object* v_excessArgs_1100_, lean_object* v_resultType_x3f_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached(v_c_1098_, v_as_1099_, v_excessArgs_1100_, v_resultType_x3f_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_);
lean_dec(v_a_1112_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
lean_dec(v_a_1108_);
lean_dec_ref(v_a_1107_);
lean_dec(v_a_1106_);
lean_dec_ref(v_a_1105_);
lean_dec(v_a_1104_);
lean_dec(v_a_1103_);
lean_dec_ref(v_a_1102_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0(size_t v_sz_1115_, size_t v_i_1116_, lean_object* v_bs_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___redArg(v_sz_1115_, v_i_1116_, v_bs_1117_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0___boxed(lean_object* v_sz_1126_, lean_object* v_i_1127_, lean_object* v_bs_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
size_t v_sz_boxed_1136_; size_t v_i_boxed_1137_; lean_object* v_res_1138_; 
v_sz_boxed_1136_ = lean_unbox_usize(v_sz_1126_);
lean_dec(v_sz_1126_);
v_i_boxed_1137_ = lean_unbox_usize(v_i_1127_);
lean_dec(v_i_1127_);
v_res_1138_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__0(v_sz_boxed_1136_, v_i_boxed_1137_, v_bs_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1(lean_object* v_00_u03b2_1139_, lean_object* v_m_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___redArg(v_m_1140_, v_a_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1___boxed(lean_object* v_00_u03b2_1143_, lean_object* v_m_1144_, lean_object* v_a_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1(v_00_u03b2_1143_, v_m_1144_, v_a_1145_);
lean_dec_ref(v_a_1145_);
lean_dec_ref(v_m_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2(lean_object* v_00_u03b2_1147_, lean_object* v_m_1148_, lean_object* v_a_1149_, lean_object* v_b_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2___redArg(v_m_1148_, v_a_1149_, v_b_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1(lean_object* v_00_u03b2_1152_, lean_object* v_a_1153_, lean_object* v_x_1154_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___redArg(v_a_1153_, v_x_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1156_, lean_object* v_a_1157_, lean_object* v_x_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1(v_00_u03b2_1156_, v_a_1157_, v_x_1158_);
lean_dec(v_x_1158_);
lean_dec_ref(v_a_1157_);
return v_res_1159_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4(lean_object* v_00_u03b2_1160_, lean_object* v_a_1161_, lean_object* v_x_1162_){
_start:
{
uint8_t v___x_1163_; 
v___x_1163_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___redArg(v_a_1161_, v_x_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1164_, lean_object* v_a_1165_, lean_object* v_x_1166_){
_start:
{
uint8_t v_res_1167_; lean_object* v_r_1168_; 
v_res_1167_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__4(v_00_u03b2_1164_, v_a_1165_, v_x_1166_);
lean_dec(v_x_1166_);
lean_dec_ref(v_a_1165_);
v_r_1168_ = lean_box(v_res_1167_);
return v_r_1168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5(lean_object* v_00_u03b2_1169_, lean_object* v_data_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5___redArg(v_data_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6(lean_object* v_00_u03b2_1172_, lean_object* v_a_1173_, lean_object* v_b_1174_, lean_object* v_x_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__6___redArg(v_a_1173_, v_b_1174_, v_x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2(lean_object* v_xs_1177_, lean_object* v_ys_1178_, lean_object* v_hsz_1179_, lean_object* v_x_1180_, lean_object* v_x_1181_){
_start:
{
uint8_t v___x_1182_; 
v___x_1182_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___redArg(v_xs_1177_, v_ys_1178_, v_x_1180_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2___boxed(lean_object* v_xs_1183_, lean_object* v_ys_1184_, lean_object* v_hsz_1185_, lean_object* v_x_1186_, lean_object* v_x_1187_){
_start:
{
uint8_t v_res_1188_; lean_object* v_r_1189_; 
v_res_1188_ = l_Array_isEqvAux___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__1_spec__1_spec__2(v_xs_1183_, v_ys_1184_, v_hsz_1185_, v_x_1186_, v_x_1187_);
lean_dec_ref(v_ys_1184_);
lean_dec_ref(v_xs_1183_);
v_r_1189_ = lean_box(v_res_1188_);
return v_r_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_1190_, lean_object* v_i_1191_, lean_object* v_source_1192_, lean_object* v_target_1193_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7___redArg(v_i_1191_, v_source_1192_, v_target_1193_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7_spec__8(lean_object* v_00_u03b2_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForLatticeCached_spec__2_spec__5_spec__7_spec__8___redArg(v_x_1196_, v_x_1197_);
return v___x_1198_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruction(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
}
#ifdef __cplusplus
}
#endif
