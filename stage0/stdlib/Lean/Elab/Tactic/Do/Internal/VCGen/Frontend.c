// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Frontend
// Imports: public import Lean.Elab.Tactic.Do.VCGen.SuggestInvariant public import Lean.Elab.Tactic.Do.VCGen public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.Driver public import Lean.Meta.Sym.Simp.Attr public import Lean.Meta.Sym.Simp.ControlFlow public import Lean.Meta.Sym.Simp.EvalGround public import Lean.Meta.Sym.Simp.Forall public import Lean.Meta.Sym.Simp.Rewrite public import Lean.Meta.Sym.Simp.Simproc public import Lean.Elab.Tactic.Grind.Main public import Lean.Elab.Tactic.Grind.Basic import Lean.Meta.Sym.ProofInstInfo
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
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectMVars(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* l_Lean_Meta_Sym_mkProofInstInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkProofInstArgInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_isErased(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_insert(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_evalGrindTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_GrindTacticM_runAtGoal___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_erase(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_getSpecTheorems___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRules(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_extendWithSimpSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_elabConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Do_mvcgen_warning;
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Grind_mkGoalCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_elabInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 186, 72, 71, 180, 239, 13, 70)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6(lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "not a spec theorem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(216, 24, 229, 171, 59, 186, 144, 157)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpStar"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(125, 38, 251, 225, 228, 173, 11, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Could not resolve spec theorem `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 236, 192, 59, 252, 178, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "posConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12_value),LEAN_SCALAR_PTR_LITERAL(232, 137, 50, 117, 152, 182, 155, 132)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value),LEAN_SCALAR_PTR_LITERAL(49, 203, 120, 209, 69, 128, 204, 215)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "negConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18_value),LEAN_SCALAR_PTR_LITERAL(196, 29, 29, 161, 247, 206, 181, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(56, 247, 87, 81, 188, 35, 250, 148)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "mvcgen': the `leave` config option is currently ignored."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simp___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 153, .m_capacity = 153, .m_length = 148, .m_data = "named Sym.simp variants are not yet supported in `mvcgen'`; use `mvcgen' simplifying_assumptions [thm₁, thm₂, ...]` with the default variant instead"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Could not parse invariant label; expected `inv<n>`."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Duplicate invariant alternative for `inv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Expected `invariantDotAlt` or `invariantCaseAlt`."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "Alternation between labelled and bulleted invariants is not supported."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invariantAlts"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 41, 254, 250, 50, 69, 99, 10)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invariantsKW"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 87, 251, 76, 123, 116, 93, 232)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invariants\? "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value),LEAN_SCALAR_PTR_LITERAL(241, 40, 134, 186, 103, 193, 43, 220)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Invariant alternative `inv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` does not match any invariant goal."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 1, 0, 1, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 145, .m_capacity = 145, .m_length = 144, .m_data = "The `mvcgen'` tactic is an experimental drop-in replacement for `mvcgen` that will eventually replace it. Avoid using it in production projects."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mvcgen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(230, 164, 188, 44, 114, 250, 122, 123)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(89, 242, 56, 182, 153, 42, 114, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(132, 236, 244, 1, 128, 181, 211, 156)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "VCGen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(175, 167, 22, 210, 240, 170, 245, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Frontend"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(18, 209, 67, 183, 120, 233, 44, 242)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(147, 197, 196, 233, 158, 77, 49, 202)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 108, 164, 213, 221, 37, 180, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 84, 138, 219, 247, 214, 26, 16)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(73, 168, 135, 192, 193, 202, 29, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(109, 141, 169, 199, 171, 247, 59, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(64, 59, 250, 17, 189, 47, 163, 133)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalSymMVCGen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(19, 92, 242, 121, 57, 23, 92, 131)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "`mvcgen'` step inside `sym => …` blocks. "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind_<;>_"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<;>"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "simplifying_assumptions"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "until"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "internalize"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(46, 126, 89, 140, 218, 11, 77, 16)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(172, 206, 51, 98, 251, 95, 173, 15)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabMVCGen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 201, 16, 251, 167, 255, 54, 189)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 389, .m_capacity = 389, .m_length = 386, .m_data = "Tactic-level `mvcgen'`. Reuses the grind-mode implementation by re-quoting the\ninput as `Grind.mvcgen' …` and running it inside a `GrindTacticM` context built\nwithout `withProtectedMCtx`, so leftover `Grind.Goal`s flow back as the new tactic\ngoals. The optional `with $g:grind` clause runs as `<;> $g` and lets the user-supplied\ngrind step share an internalised E-graph with `mvcgen'`. "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(lean_object* v_x_7_, lean_object* v_goals_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_st_mk_ref(v_goals_8_);
v___x_17_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2));
lean_inc(v_a_14_);
lean_inc_ref(v_a_13_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v___x_16_);
v___x_18_ = lean_apply_9(v_x_7_, v___x_17_, v___x_16_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, lean_box(0));
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_27_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_27_ == 0)
{
v___x_21_ = v___x_18_;
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_a_19_);
lean_dec(v___x_18_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = lean_st_ref_get(v___x_16_);
lean_dec(v___x_16_);
lean_dec(v___x_23_);
if (v_isShared_22_ == 0)
{
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_19_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
else
{
lean_dec(v___x_16_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___boxed(lean_object* v_x_28_, lean_object* v_goals_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v_x_28_, v_goals_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(lean_object* v_00_u03b1_38_, lean_object* v_x_39_, lean_object* v_goals_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v_x_39_, v_goals_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___boxed(lean_object* v_00_u03b1_49_, lean_object* v_x_50_, lean_object* v_goals_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(v_00_u03b1_49_, v_x_50_, v_goals_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec(v_a_55_);
lean_dec_ref(v_a_54_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
return v_res_59_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(0);
v___x_61_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg(){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0);
v___x_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___boxed(lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0(lean_object* v_00_u03b1_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___boxed(lean_object* v_00_u03b1_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0(v_00_u03b1_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_86_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0);
v___x_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5(lean_object* v_00_u03b2_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6(lean_object* v_00_u03b2_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1);
return v___x_95_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_box(1);
v___x_97_ = l_Lean_MessageData_ofFormat(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2));
v___x_102_ = l_Lean_MessageData_ofFormat(v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6(lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
return v_x_103_;
}
else
{
lean_object* v_head_105_; lean_object* v_tail_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_128_; 
v_head_105_ = lean_ctor_get(v_x_104_, 0);
v_tail_106_ = lean_ctor_get(v_x_104_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_104_);
if (v_isSharedCheck_128_ == 0)
{
v___x_108_ = v_x_104_;
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_tail_106_);
lean_inc(v_head_105_);
lean_dec(v_x_104_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v_before_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_126_; 
v_before_110_ = lean_ctor_get(v_head_105_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v_head_105_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v_head_105_, 1);
lean_dec(v_unused_127_);
v___x_112_ = v_head_105_;
v_isShared_113_ = v_isSharedCheck_126_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_before_110_);
lean_dec(v_head_105_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_126_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0);
if (v_isShared_113_ == 0)
{
lean_ctor_set_tag(v___x_112_, 7);
lean_ctor_set(v___x_112_, 1, v___x_114_);
lean_ctor_set(v___x_112_, 0, v_x_103_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_x_103_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___x_114_);
v___x_116_ = v_reuseFailAlloc_125_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3);
if (v_isShared_109_ == 0)
{
lean_ctor_set_tag(v___x_108_, 7);
lean_ctor_set(v___x_108_, 1, v___x_117_);
lean_ctor_set(v___x_108_, 0, v___x_116_);
v___x_119_ = v___x_108_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_116_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_117_);
v___x_119_ = v_reuseFailAlloc_124_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = l_Lean_MessageData_ofSyntax(v_before_110_);
v___x_121_ = l_Lean_indentD(v___x_120_);
v___x_122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v_x_103_ = v___x_122_;
v_x_104_ = v_tail_106_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(lean_object* v_opts_129_, lean_object* v_opt_130_){
_start:
{
lean_object* v_name_131_; lean_object* v_defValue_132_; lean_object* v_map_133_; lean_object* v___x_134_; 
v_name_131_ = lean_ctor_get(v_opt_130_, 0);
v_defValue_132_ = lean_ctor_get(v_opt_130_, 1);
v_map_133_ = lean_ctor_get(v_opts_129_, 0);
v___x_134_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_133_, v_name_131_);
if (lean_obj_tag(v___x_134_) == 0)
{
uint8_t v___x_135_; 
v___x_135_ = lean_unbox(v_defValue_132_);
return v___x_135_;
}
else
{
lean_object* v_val_136_; 
v_val_136_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v___x_134_, 1);
if (lean_obj_tag(v_val_136_) == 1)
{
uint8_t v_v_137_; 
v_v_137_ = lean_ctor_get_uint8(v_val_136_, 0);
lean_dec_ref_known(v_val_136_, 0);
return v_v_137_;
}
else
{
uint8_t v___x_138_; 
lean_dec(v_val_136_);
v___x_138_ = lean_unbox(v_defValue_132_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5___boxed(lean_object* v_opts_139_, lean_object* v_opt_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_opts_139_, v_opt_140_);
lean_dec_ref(v_opt_140_);
lean_dec_ref(v_opts_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1));
v___x_147_ = l_Lean_MessageData_ofFormat(v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(lean_object* v_msgData_148_, lean_object* v_macroStack_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_options_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v_options_152_ = lean_ctor_get(v___y_150_, 2);
v___x_153_ = l_Lean_Elab_pp_macroStack;
v___x_154_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_152_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
lean_dec(v_macroStack_149_);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v_msgData_148_);
return v___x_155_;
}
else
{
if (lean_obj_tag(v_macroStack_149_) == 0)
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v_msgData_148_);
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v_after_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_173_; 
v_head_157_ = lean_ctor_get(v_macroStack_149_, 0);
lean_inc(v_head_157_);
v_after_158_ = lean_ctor_get(v_head_157_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_head_157_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v_head_157_, 0);
lean_dec(v_unused_174_);
v___x_160_ = v_head_157_;
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_after_158_);
lean_dec(v_head_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 7);
lean_ctor_set(v___x_160_, 1, v___x_162_);
lean_ctor_set(v___x_160_, 0, v_msgData_148_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_msgData_148_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v___x_162_);
v___x_164_ = v_reuseFailAlloc_172_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_msgData_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_165_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2);
v___x_166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = l_Lean_MessageData_ofSyntax(v_after_158_);
v___x_168_ = l_Lean_indentD(v___x_167_);
v_msgData_169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_169_, 0, v___x_166_);
lean_ctor_set(v_msgData_169_, 1, v___x_168_);
v___x_170_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6(v_msgData_169_, v_macroStack_149_);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
return v___x_171_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_175_, lean_object* v_macroStack_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(v_msgData_175_, v_macroStack_176_, v___y_177_);
lean_dec_ref(v___y_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(lean_object* v_msgData_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___x_186_; lean_object* v_env_187_; lean_object* v___x_188_; lean_object* v_mctx_189_; lean_object* v_lctx_190_; lean_object* v_options_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_186_ = lean_st_ref_get(v___y_184_);
v_env_187_ = lean_ctor_get(v___x_186_, 0);
lean_inc_ref(v_env_187_);
lean_dec(v___x_186_);
v___x_188_ = lean_st_ref_get(v___y_182_);
v_mctx_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc_ref(v_mctx_189_);
lean_dec(v___x_188_);
v_lctx_190_ = lean_ctor_get(v___y_181_, 2);
v_options_191_ = lean_ctor_get(v___y_183_, 2);
lean_inc_ref(v_options_191_);
lean_inc_ref(v_lctx_190_);
v___x_192_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_192_, 0, v_env_187_);
lean_ctor_set(v___x_192_, 1, v_mctx_189_);
lean_ctor_set(v___x_192_, 2, v_lctx_190_);
lean_ctor_set(v___x_192_, 3, v_options_191_);
v___x_193_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v_msgData_180_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1___boxed(lean_object* v_msgData_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v_msgData_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_ref_210_; lean_object* v___x_211_; lean_object* v_a_212_; lean_object* v_macroStack_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v_ref_210_ = lean_ctor_get(v___y_207_, 5);
v___x_211_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v_msg_202_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref(v___x_211_);
v_macroStack_213_ = lean_ctor_get(v___y_203_, 1);
v___x_214_ = l_Lean_Elab_getBetterRef(v_ref_210_, v_macroStack_213_);
lean_inc(v_macroStack_213_);
v___x_215_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(v_a_212_, v_macroStack_213_, v___y_207_);
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_214_);
lean_ctor_set(v___x_220_, 1, v_a_216_);
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 1);
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg___boxed(lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v_msg_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(lean_object* v_ref_234_, lean_object* v_msg_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_fileName_243_; lean_object* v_fileMap_244_; lean_object* v_options_245_; lean_object* v_currRecDepth_246_; lean_object* v_maxRecDepth_247_; lean_object* v_ref_248_; lean_object* v_currNamespace_249_; lean_object* v_openDecls_250_; lean_object* v_initHeartbeats_251_; lean_object* v_maxHeartbeats_252_; lean_object* v_quotContext_253_; lean_object* v_currMacroScope_254_; uint8_t v_diag_255_; lean_object* v_cancelTk_x3f_256_; uint8_t v_suppressElabErrors_257_; lean_object* v_inheritedTraceOptions_258_; lean_object* v_ref_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_fileName_243_ = lean_ctor_get(v___y_240_, 0);
v_fileMap_244_ = lean_ctor_get(v___y_240_, 1);
v_options_245_ = lean_ctor_get(v___y_240_, 2);
v_currRecDepth_246_ = lean_ctor_get(v___y_240_, 3);
v_maxRecDepth_247_ = lean_ctor_get(v___y_240_, 4);
v_ref_248_ = lean_ctor_get(v___y_240_, 5);
v_currNamespace_249_ = lean_ctor_get(v___y_240_, 6);
v_openDecls_250_ = lean_ctor_get(v___y_240_, 7);
v_initHeartbeats_251_ = lean_ctor_get(v___y_240_, 8);
v_maxHeartbeats_252_ = lean_ctor_get(v___y_240_, 9);
v_quotContext_253_ = lean_ctor_get(v___y_240_, 10);
v_currMacroScope_254_ = lean_ctor_get(v___y_240_, 11);
v_diag_255_ = lean_ctor_get_uint8(v___y_240_, sizeof(void*)*14);
v_cancelTk_x3f_256_ = lean_ctor_get(v___y_240_, 12);
v_suppressElabErrors_257_ = lean_ctor_get_uint8(v___y_240_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_258_ = lean_ctor_get(v___y_240_, 13);
v_ref_259_ = l_Lean_replaceRef(v_ref_234_, v_ref_248_);
lean_inc_ref(v_inheritedTraceOptions_258_);
lean_inc(v_cancelTk_x3f_256_);
lean_inc(v_currMacroScope_254_);
lean_inc(v_quotContext_253_);
lean_inc(v_maxHeartbeats_252_);
lean_inc(v_initHeartbeats_251_);
lean_inc(v_openDecls_250_);
lean_inc(v_currNamespace_249_);
lean_inc(v_maxRecDepth_247_);
lean_inc(v_currRecDepth_246_);
lean_inc_ref(v_options_245_);
lean_inc_ref(v_fileMap_244_);
lean_inc_ref(v_fileName_243_);
v___x_260_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_260_, 0, v_fileName_243_);
lean_ctor_set(v___x_260_, 1, v_fileMap_244_);
lean_ctor_set(v___x_260_, 2, v_options_245_);
lean_ctor_set(v___x_260_, 3, v_currRecDepth_246_);
lean_ctor_set(v___x_260_, 4, v_maxRecDepth_247_);
lean_ctor_set(v___x_260_, 5, v_ref_259_);
lean_ctor_set(v___x_260_, 6, v_currNamespace_249_);
lean_ctor_set(v___x_260_, 7, v_openDecls_250_);
lean_ctor_set(v___x_260_, 8, v_initHeartbeats_251_);
lean_ctor_set(v___x_260_, 9, v_maxHeartbeats_252_);
lean_ctor_set(v___x_260_, 10, v_quotContext_253_);
lean_ctor_set(v___x_260_, 11, v_currMacroScope_254_);
lean_ctor_set(v___x_260_, 12, v_cancelTk_x3f_256_);
lean_ctor_set(v___x_260_, 13, v_inheritedTraceOptions_258_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*14, v_diag_255_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*14 + 1, v_suppressElabErrors_257_);
v___x_261_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v_msg_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, v___x_260_, v___y_241_);
lean_dec_ref_known(v___x_260_, 14);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg___boxed(lean_object* v_ref_262_, lean_object* v_msg_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_262_, v_msg_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v_ref_262_);
return v_res_271_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_272_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0);
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1);
v___x_276_ = lean_unsigned_to_nat(0u);
v___x_277_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
lean_ctor_set(v___x_277_, 2, v___x_276_);
lean_ctor_set(v___x_277_, 3, v___x_276_);
lean_ctor_set(v___x_277_, 4, v___x_275_);
lean_ctor_set(v___x_277_, 5, v___x_275_);
lean_ctor_set(v___x_277_, 6, v___x_275_);
lean_ctor_set(v___x_277_, 7, v___x_275_);
lean_ctor_set(v___x_277_, 8, v___x_275_);
lean_ctor_set(v___x_277_, 9, v___x_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_unsigned_to_nat(32u);
v___x_279_ = lean_mk_empty_array_with_capacity(v___x_278_);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4(void){
_start:
{
size_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_281_ = ((size_t)5ULL);
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_unsigned_to_nat(32u);
v___x_284_ = lean_mk_empty_array_with_capacity(v___x_283_);
v___x_285_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3);
v___x_286_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set(v___x_286_, 2, v___x_282_);
lean_ctor_set(v___x_286_, 3, v___x_282_);
lean_ctor_set_usize(v___x_286_, 4, v___x_281_);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_287_ = lean_box(1);
v___x_288_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4);
v___x_289_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1);
v___x_290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
lean_ctor_set(v___x_290_, 2, v___x_287_);
return v___x_290_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10));
v___x_299_ = l_Lean_stringToMessageData(v___x_298_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12));
v___x_302_ = l_Lean_stringToMessageData(v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16));
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18));
v___x_311_ = l_Lean_stringToMessageData(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(lean_object* v_msg_312_, lean_object* v_declHint_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_316_; lean_object* v_env_317_; uint8_t v___x_318_; 
v___x_316_ = lean_st_ref_get(v___y_314_);
v_env_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc_ref(v_env_317_);
lean_dec(v___x_316_);
v___x_318_ = l_Lean_Name_isAnonymous(v_declHint_313_);
if (v___x_318_ == 0)
{
uint8_t v_isExporting_319_; 
v_isExporting_319_ = lean_ctor_get_uint8(v_env_317_, sizeof(void*)*8);
if (v_isExporting_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v_msg_312_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
lean_inc_ref(v_env_317_);
v___x_321_ = l_Lean_Environment_setExporting(v_env_317_, v___x_318_);
lean_inc(v_declHint_313_);
lean_inc_ref(v___x_321_);
v___x_322_ = l_Lean_Environment_contains(v___x_321_, v_declHint_313_, v_isExporting_319_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
lean_dec_ref(v___x_321_);
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v_msg_312_);
return v___x_323_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v_c_329_; lean_object* v___x_330_; 
v___x_324_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2);
v___x_325_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5);
v___x_326_ = l_Lean_Options_empty;
v___x_327_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_327_, 0, v___x_321_);
lean_ctor_set(v___x_327_, 1, v___x_324_);
lean_ctor_set(v___x_327_, 2, v___x_325_);
lean_ctor_set(v___x_327_, 3, v___x_326_);
lean_inc(v_declHint_313_);
v___x_328_ = l_Lean_MessageData_ofConstName(v_declHint_313_, v___x_318_);
v_c_329_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_329_, 0, v___x_327_);
lean_ctor_set(v_c_329_, 1, v___x_328_);
v___x_330_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_317_, v_declHint_313_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_331_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7);
v___x_332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v_c_329_);
v___x_333_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9);
v___x_334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = l_Lean_MessageData_note(v___x_334_);
v___x_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_336_, 0, v_msg_312_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
else
{
lean_object* v_val_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_373_; 
v_val_338_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_373_ == 0)
{
v___x_340_ = v___x_330_;
v_isShared_341_ = v_isSharedCheck_373_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_val_338_);
lean_dec(v___x_330_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_373_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_mod_345_; uint8_t v___x_346_; 
v___x_342_ = lean_box(0);
v___x_343_ = l_Lean_Environment_header(v_env_317_);
lean_dec_ref(v_env_317_);
v___x_344_ = l_Lean_EnvironmentHeader_moduleNames(v___x_343_);
v_mod_345_ = lean_array_get(v___x_342_, v___x_344_, v_val_338_);
lean_dec(v_val_338_);
lean_dec_ref(v___x_344_);
v___x_346_ = l_Lean_isPrivateName(v_declHint_313_);
lean_dec(v_declHint_313_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_358_; 
v___x_347_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11);
v___x_348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v_c_329_);
v___x_349_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13);
v___x_350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
v___x_351_ = l_Lean_MessageData_ofName(v_mod_345_);
v___x_352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15);
v___x_354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_352_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
v___x_355_ = l_Lean_MessageData_note(v___x_354_);
v___x_356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_356_, 0, v_msg_312_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 0);
lean_ctor_set(v___x_340_, 0, v___x_356_);
v___x_358_ = v___x_340_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_360_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7);
v___x_361_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_c_329_);
v___x_362_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17);
v___x_363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_361_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = l_Lean_MessageData_ofName(v_mod_345_);
v___x_365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19);
v___x_367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = l_Lean_MessageData_note(v___x_367_);
v___x_369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_369_, 0, v_msg_312_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 0);
lean_ctor_set(v___x_340_, 0, v___x_369_);
v___x_371_ = v___x_340_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_374_; 
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_msg_312_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___boxed(lean_object* v_msg_375_, lean_object* v_declHint_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_375_, v_declHint_376_, v___y_377_);
lean_dec(v___y_377_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(lean_object* v_msg_380_, lean_object* v_declHint_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_399_; 
v___x_389_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_380_, v_declHint_381_, v___y_387_);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_399_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_399_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_399_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_394_ = l_Lean_unknownIdentifierMessageTag;
v___x_395_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v_a_390_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_395_);
v___x_397_ = v___x_392_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12___boxed(lean_object* v_msg_400_, lean_object* v_declHint_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(v_msg_400_, v_declHint_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(lean_object* v_ref_410_, lean_object* v_msg_411_, lean_object* v_declHint_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_420_; lean_object* v_a_421_; lean_object* v___x_422_; 
v___x_420_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(v_msg_411_, v_declHint_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
v_a_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_a_421_);
lean_dec_ref(v___x_420_);
v___x_422_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_410_, v_a_421_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_ref_423_, lean_object* v_msg_424_, lean_object* v_declHint_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(v_ref_423_, v_msg_424_, v_declHint_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v_ref_423_);
return v_res_433_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0));
v___x_436_ = l_Lean_stringToMessageData(v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2));
v___x_439_ = l_Lean_stringToMessageData(v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(lean_object* v_ref_440_, lean_object* v_constName_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___x_449_; uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_449_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1);
v___x_450_ = 0;
lean_inc(v_constName_441_);
v___x_451_ = l_Lean_MessageData_ofConstName(v_constName_441_, v___x_450_);
v___x_452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_449_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3);
v___x_454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_452_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(v_ref_440_, v___x_454_, v_constName_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___boxed(lean_object* v_ref_456_, lean_object* v_constName_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(v_ref_456_, v_constName_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v_ref_456_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(lean_object* v_constName_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_ref_474_; lean_object* v___x_475_; 
v_ref_474_ = lean_ctor_get(v___y_471_, 5);
v___x_475_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(v_ref_474_, v_constName_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg___boxed(lean_object* v_constName_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(v_constName_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_484_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__0));
v___x_487_ = l_Lean_stringToMessageData(v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(lean_object* v_fst_488_, lean_object* v_fst_489_, lean_object* v_specThm_x3f_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
if (lean_obj_tag(v_specThm_x3f_490_) == 1)
{
lean_object* v_val_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_510_; 
v_val_498_ = lean_ctor_get(v_specThm_x3f_490_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_specThm_x3f_490_);
if (v_isSharedCheck_510_ == 0)
{
v___x_500_ = v_specThm_x3f_490_;
v_isShared_501_ = v_isSharedCheck_510_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_val_498_);
lean_dec(v_specThm_x3f_490_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_510_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v_proof_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v_proof_502_ = lean_ctor_get(v_val_498_, 1);
lean_inc_ref(v_proof_502_);
lean_dec(v_val_498_);
v___x_503_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_erase(v_fst_488_, v_proof_502_);
v___x_504_ = lean_box(0);
v___x_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v_fst_489_);
v___x_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_506_, 0, v___x_504_);
lean_ctor_set(v___x_506_, 1, v___x_505_);
if (v_isShared_501_ == 0)
{
lean_ctor_set_tag(v___x_500_, 0);
lean_ctor_set(v___x_500_, 0, v___x_506_);
v___x_508_ = v___x_500_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
else
{
lean_object* v___x_511_; lean_object* v___x_512_; 
lean_dec(v_specThm_x3f_490_);
v___x_511_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1);
v___x_512_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v___x_511_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_a_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_522_; 
v_a_513_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_522_ == 0)
{
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_522_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_a_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_522_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_520_; 
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v_fst_488_);
lean_ctor_set(v___x_517_, 1, v_fst_489_);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v_a_513_);
lean_ctor_set(v___x_518_, 1, v___x_517_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_518_);
v___x_520_ = v___x_515_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v_fst_489_);
lean_dec(v_fst_488_);
v_a_523_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_512_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_512_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___boxed(lean_object* v_fst_531_, lean_object* v_fst_532_, lean_object* v_specThm_x3f_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_531_, v_fst_532_, v_specThm_x3f_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
return v_res_541_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10(void){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9));
v___x_565_ = l_Lean_stringToMessageData(v___x_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(lean_object* v_as_567_, size_t v_sz_568_, size_t v_i_569_, lean_object* v_b_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v_a_579_; uint8_t v___x_583_; 
v___x_583_ = lean_usize_dec_lt(v_i_569_, v_sz_568_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; 
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v_b_570_);
return v___x_584_;
}
else
{
lean_object* v_snd_585_; lean_object* v_fst_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_832_; 
v_snd_585_ = lean_ctor_get(v_b_570_, 1);
v_fst_586_ = lean_ctor_get(v_b_570_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v_b_570_);
if (v_isSharedCheck_832_ == 0)
{
v___x_588_ = v_b_570_;
v_isShared_589_ = v_isSharedCheck_832_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_snd_585_);
lean_inc(v_fst_586_);
lean_dec(v_b_570_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_832_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v_fst_590_; lean_object* v_snd_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_831_; 
v_fst_590_ = lean_ctor_get(v_snd_585_, 0);
v_snd_591_ = lean_ctor_get(v_snd_585_, 1);
v_isSharedCheck_831_ = !lean_is_exclusive(v_snd_585_);
if (v_isSharedCheck_831_ == 0)
{
v___x_593_ = v_snd_585_;
v_isShared_594_ = v_isSharedCheck_831_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_snd_591_);
lean_inc(v_fst_590_);
lean_dec(v_snd_585_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_831_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v_fst_596_; lean_object* v_snd_597_; lean_object* v_fst_605_; lean_object* v_snd_606_; lean_object* v_fst_610_; lean_object* v_snd_611_; lean_object* v___x_614_; lean_object* v_a_615_; lean_object* v___y_617_; uint8_t v___y_618_; lean_object* v_a_622_; lean_object* v___y_626_; uint8_t v___y_627_; lean_object* v_a_631_; lean_object* v___y_639_; uint8_t v___y_640_; lean_object* v_a_644_; lean_object* v___y_648_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_614_ = lean_unsigned_to_nat(1u);
v_a_615_ = lean_array_uget_borrowed(v_as_567_, v_i_569_);
lean_inc(v_a_615_);
v___x_654_ = l_Lean_Syntax_getKind(v_a_615_);
v___x_655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4));
v___x_656_ = lean_name_eq(v___x_654_, v___x_655_);
if (v___x_656_ == 0)
{
lean_object* v___x_657_; uint8_t v___x_658_; 
lean_del_object(v___x_593_);
lean_del_object(v___x_588_);
v___x_657_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6));
v___x_658_ = lean_name_eq(v___x_654_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8));
v___x_660_ = lean_name_eq(v___x_654_, v___x_659_);
lean_dec(v___x_654_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; 
v___x_661_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec_ref_known(v___x_661_, 1);
v___x_662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_662_, 0, v_fst_590_);
lean_ctor_set(v___x_662_, 1, v_snd_591_);
v___x_663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_663_, 0, v_fst_586_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v_a_579_ = v___x_663_;
goto v___jp_578_;
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v_a_664_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_661_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_661_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v_snd_591_);
lean_inc(v_a_615_);
v___x_672_ = lean_array_push(v_fst_590_, v_a_615_);
v___x_673_ = lean_box(v___x_583_);
v___x_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v_fst_586_);
lean_ctor_set(v___x_675_, 1, v___x_674_);
v_a_579_ = v___x_675_;
goto v___jp_578_;
}
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
lean_dec(v___x_654_);
v___x_676_ = lean_unsigned_to_nat(0u);
v___x_677_ = l_Lean_Syntax_getArg(v_a_615_, v___x_676_);
v___x_678_ = l_Lean_Syntax_isNone(v___x_677_);
lean_dec(v___x_677_);
if (v___x_678_ == 0)
{
goto v___jp_634_;
}
else
{
lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_679_ = l_Lean_Syntax_getArg(v_a_615_, v___x_614_);
v___x_680_ = l_Lean_Syntax_isNone(v___x_679_);
lean_dec(v___x_679_);
if (v___x_680_ == 0)
{
goto v___jp_634_;
}
else
{
lean_object* v___x_681_; 
v___x_681_ = l_Lean_Meta_saveState___redArg(v___y_574_, v___y_576_);
if (lean_obj_tag(v___x_681_) == 0)
{
lean_object* v_a_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_727_; lean_object* v___x_758_; lean_object* v___x_759_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
v___x_683_ = lean_unsigned_to_nat(2u);
v___x_684_ = l_Lean_Syntax_getArg(v_a_615_, v___x_683_);
v___x_758_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11));
lean_inc(v___x_684_);
v___x_759_ = l_Lean_Elab_Term_resolveId_x3f(v___x_684_, v___x_758_, v___x_583_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_dec(v_a_682_);
v___y_727_ = v___x_759_;
goto v___jp_726_;
}
else
{
lean_object* v_a_760_; uint8_t v___y_762_; uint8_t v___x_773_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
v___x_773_ = l_Lean_Exception_isInterrupt(v_a_760_);
if (v___x_773_ == 0)
{
uint8_t v___x_774_; 
v___x_774_ = l_Lean_Exception_isRuntime(v_a_760_);
v___y_762_ = v___x_774_;
goto v___jp_761_;
}
else
{
lean_dec(v_a_760_);
v___y_762_ = v___x_773_;
goto v___jp_761_;
}
v___jp_761_:
{
if (v___y_762_ == 0)
{
lean_object* v___x_763_; 
lean_dec_ref_known(v___x_759_, 1);
v___x_763_ = l_Lean_Meta_SavedState_restore___redArg(v_a_682_, v___y_574_, v___y_576_);
lean_dec(v_a_682_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v___x_764_; 
lean_dec_ref_known(v___x_763_, 1);
lean_inc(v___x_684_);
v___x_764_ = l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(v___x_684_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
v___y_727_ = v___x_764_;
goto v___jp_726_;
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec(v___x_684_);
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v_a_765_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_763_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_763_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_dec(v_a_682_);
v___y_727_ = v___x_759_;
goto v___jp_726_;
}
}
}
v___jp_685_:
{
lean_object* v_fileName_692_; lean_object* v_fileMap_693_; lean_object* v_options_694_; lean_object* v_currRecDepth_695_; lean_object* v_maxRecDepth_696_; lean_object* v_ref_697_; lean_object* v_currNamespace_698_; lean_object* v_openDecls_699_; lean_object* v_initHeartbeats_700_; lean_object* v_maxHeartbeats_701_; lean_object* v_quotContext_702_; lean_object* v_currMacroScope_703_; uint8_t v_diag_704_; lean_object* v_cancelTk_x3f_705_; uint8_t v_suppressElabErrors_706_; lean_object* v_inheritedTraceOptions_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v_ref_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v_fileName_692_ = lean_ctor_get(v___y_690_, 0);
v_fileMap_693_ = lean_ctor_get(v___y_690_, 1);
v_options_694_ = lean_ctor_get(v___y_690_, 2);
v_currRecDepth_695_ = lean_ctor_get(v___y_690_, 3);
v_maxRecDepth_696_ = lean_ctor_get(v___y_690_, 4);
v_ref_697_ = lean_ctor_get(v___y_690_, 5);
v_currNamespace_698_ = lean_ctor_get(v___y_690_, 6);
v_openDecls_699_ = lean_ctor_get(v___y_690_, 7);
v_initHeartbeats_700_ = lean_ctor_get(v___y_690_, 8);
v_maxHeartbeats_701_ = lean_ctor_get(v___y_690_, 9);
v_quotContext_702_ = lean_ctor_get(v___y_690_, 10);
v_currMacroScope_703_ = lean_ctor_get(v___y_690_, 11);
v_diag_704_ = lean_ctor_get_uint8(v___y_690_, sizeof(void*)*14);
v_cancelTk_x3f_705_ = lean_ctor_get(v___y_690_, 12);
v_suppressElabErrors_706_ = lean_ctor_get_uint8(v___y_690_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_707_ = lean_ctor_get(v___y_690_, 13);
v___x_708_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10);
lean_inc(v___x_684_);
v___x_709_ = l_Lean_MessageData_ofSyntax(v___x_684_);
v___x_710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3);
v___x_712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_710_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v_ref_713_ = l_Lean_replaceRef(v___x_684_, v_ref_697_);
lean_dec(v___x_684_);
lean_inc_ref(v_inheritedTraceOptions_707_);
lean_inc(v_cancelTk_x3f_705_);
lean_inc(v_currMacroScope_703_);
lean_inc(v_quotContext_702_);
lean_inc(v_maxHeartbeats_701_);
lean_inc(v_initHeartbeats_700_);
lean_inc(v_openDecls_699_);
lean_inc(v_currNamespace_698_);
lean_inc(v_maxRecDepth_696_);
lean_inc(v_currRecDepth_695_);
lean_inc_ref(v_options_694_);
lean_inc_ref(v_fileMap_693_);
lean_inc_ref(v_fileName_692_);
v___x_714_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_714_, 0, v_fileName_692_);
lean_ctor_set(v___x_714_, 1, v_fileMap_693_);
lean_ctor_set(v___x_714_, 2, v_options_694_);
lean_ctor_set(v___x_714_, 3, v_currRecDepth_695_);
lean_ctor_set(v___x_714_, 4, v_maxRecDepth_696_);
lean_ctor_set(v___x_714_, 5, v_ref_713_);
lean_ctor_set(v___x_714_, 6, v_currNamespace_698_);
lean_ctor_set(v___x_714_, 7, v_openDecls_699_);
lean_ctor_set(v___x_714_, 8, v_initHeartbeats_700_);
lean_ctor_set(v___x_714_, 9, v_maxHeartbeats_701_);
lean_ctor_set(v___x_714_, 10, v_quotContext_702_);
lean_ctor_set(v___x_714_, 11, v_currMacroScope_703_);
lean_ctor_set(v___x_714_, 12, v_cancelTk_x3f_705_);
lean_ctor_set(v___x_714_, 13, v_inheritedTraceOptions_707_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*14, v_diag_704_);
lean_ctor_set_uint8(v___x_714_, sizeof(void*)*14 + 1, v_suppressElabErrors_706_);
v___x_715_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v___x_712_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___x_714_, v___y_691_);
lean_dec_ref_known(v___x_714_, 14);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v___x_716_; lean_object* v___x_717_; 
lean_dec_ref_known(v___x_715_, 1);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v_fst_590_);
lean_ctor_set(v___x_716_, 1, v_snd_591_);
v___x_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_717_, 0, v_fst_586_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v_a_579_ = v___x_717_;
goto v___jp_578_;
}
else
{
lean_object* v_a_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_725_; 
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v_a_718_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_725_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_725_ == 0)
{
v___x_720_ = v___x_715_;
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_a_718_);
lean_dec(v___x_715_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_725_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
if (v_isShared_721_ == 0)
{
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_a_718_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
}
v___jp_726_:
{
if (lean_obj_tag(v___y_727_) == 0)
{
lean_object* v_a_728_; 
v_a_728_ = lean_ctor_get(v___y_727_, 0);
lean_inc(v_a_728_);
lean_dec_ref_known(v___y_727_, 1);
if (lean_obj_tag(v_a_728_) == 1)
{
lean_object* v_val_729_; 
v_val_729_ = lean_ctor_get(v_a_728_, 0);
lean_inc(v_val_729_);
lean_dec_ref_known(v_a_728_, 1);
switch(lean_obj_tag(v_val_729_))
{
case 4:
{
lean_object* v_declName_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v___x_684_);
v_declName_730_ = lean_ctor_get(v_val_729_, 0);
lean_inc(v_declName_730_);
lean_dec_ref_known(v_val_729_, 2);
v___x_731_ = lean_unsigned_to_nat(1000u);
v___x_732_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromConst(v_declName_730_, v___x_731_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_732_, 1);
if (lean_obj_tag(v_a_733_) == 1)
{
lean_object* v_val_734_; lean_object* v___x_735_; 
v_val_734_ = lean_ctor_get(v_a_733_, 0);
lean_inc(v_val_734_);
lean_dec_ref_known(v_a_733_, 1);
v___x_735_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_insert(v_fst_586_, v_val_734_);
v_fst_610_ = v___x_735_;
v_snd_611_ = v_fst_590_;
goto v___jp_609_;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; 
lean_dec(v_a_733_);
v___x_736_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1);
v___x_737_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v___x_736_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_dec_ref_known(v___x_737_, 1);
v_fst_610_ = v_fst_586_;
v_snd_611_ = v_fst_590_;
goto v___jp_609_;
}
else
{
lean_object* v_a_738_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v_a_622_ = v_a_738_;
goto v___jp_621_;
}
}
}
else
{
lean_object* v_a_739_; 
v_a_739_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_732_, 1);
v_a_622_ = v_a_739_;
goto v___jp_621_;
}
}
case 1:
{
lean_object* v_fvarId_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec(v___x_684_);
v_fvarId_740_ = lean_ctor_get(v_val_729_, 0);
lean_inc(v_fvarId_740_);
lean_dec_ref_known(v_val_729_, 1);
v___x_741_ = lean_unsigned_to_nat(1000u);
v___x_742_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromLocal(v_fvarId_740_, v___x_741_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
if (lean_obj_tag(v_a_743_) == 1)
{
lean_object* v_val_744_; lean_object* v___x_745_; 
v_val_744_ = lean_ctor_get(v_a_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v_a_743_, 1);
v___x_745_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_insert(v_fst_586_, v_val_744_);
v_fst_605_ = v___x_745_;
v_snd_606_ = v_fst_590_;
goto v___jp_604_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; 
lean_dec(v_a_743_);
v___x_746_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___closed__1);
v___x_747_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v___x_746_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_dec_ref_known(v___x_747_, 1);
v_fst_605_ = v_fst_586_;
v_snd_606_ = v_fst_590_;
goto v___jp_604_;
}
else
{
lean_object* v_a_748_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
v_a_631_ = v_a_748_;
goto v___jp_630_;
}
}
}
else
{
lean_object* v_a_749_; 
v_a_749_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_742_, 1);
v_a_631_ = v_a_749_;
goto v___jp_630_;
}
}
default: 
{
lean_dec(v_val_729_);
v___y_686_ = v___y_571_;
v___y_687_ = v___y_572_;
v___y_688_ = v___y_573_;
v___y_689_ = v___y_574_;
v___y_690_ = v___y_575_;
v___y_691_ = v___y_576_;
goto v___jp_685_;
}
}
}
else
{
lean_dec(v_a_728_);
v___y_686_ = v___y_571_;
v___y_687_ = v___y_572_;
v___y_688_ = v___y_573_;
v___y_689_ = v___y_574_;
v___y_690_ = v___y_575_;
v___y_691_ = v___y_576_;
goto v___jp_685_;
}
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec(v___x_684_);
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v_a_750_ = lean_ctor_get(v___y_727_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___y_727_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___y_727_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___y_727_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v_a_775_ = lean_ctor_get(v___x_681_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_681_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_681_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_681_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_783_; lean_object* v___x_784_; 
lean_dec(v___x_654_);
v___x_783_ = l_Lean_Syntax_getArg(v_a_615_, v___x_614_);
lean_inc(v___x_783_);
v___x_784_ = l_Lean_Elab_Term_isLocalIdent_x3f(v___x_783_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
if (lean_obj_tag(v_a_785_) == 1)
{
lean_object* v_val_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec(v___x_783_);
v_val_786_ = lean_ctor_get(v_a_785_, 0);
lean_inc(v_val_786_);
lean_dec_ref_known(v_a_785_, 1);
v___x_787_ = l_Lean_Expr_fvarId_x21(v_val_786_);
lean_dec(v_val_786_);
v___x_788_ = lean_unsigned_to_nat(1000u);
v___x_789_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromLocal(v___x_787_, v___x_788_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_791_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_790_);
lean_dec_ref_known(v___x_789_, 1);
lean_inc(v_fst_590_);
lean_inc(v_fst_586_);
v___x_791_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_586_, v_fst_590_, v_a_790_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
v___y_648_ = v___x_791_;
goto v___jp_647_;
}
else
{
lean_object* v_a_792_; 
v_a_792_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_792_);
lean_dec_ref_known(v___x_789_, 1);
v_a_644_ = v_a_792_;
goto v___jp_643_;
}
}
else
{
lean_object* v___x_793_; lean_object* v___x_794_; 
lean_dec(v_a_785_);
v___x_793_ = lean_box(0);
lean_inc(v___x_783_);
v___x_794_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_783_, v___x_793_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v___x_783_);
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref_known(v___x_794_, 1);
v___x_796_ = lean_unsigned_to_nat(1000u);
v___x_797_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromConst(v_a_795_, v___x_796_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_799_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_797_, 1);
lean_inc(v_fst_590_);
lean_inc(v_fst_586_);
v___x_799_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_586_, v_fst_590_, v_a_798_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
v___y_648_ = v___x_799_;
goto v___jp_647_;
}
else
{
lean_object* v_a_800_; 
v_a_800_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_800_);
lean_dec_ref_known(v___x_797_, 1);
v_a_644_ = v_a_800_;
goto v___jp_643_;
}
}
else
{
lean_object* v_a_801_; uint8_t v___y_803_; uint8_t v___x_828_; 
v_a_801_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_801_);
lean_dec_ref_known(v___x_794_, 1);
v___x_828_ = l_Lean_Exception_isInterrupt(v_a_801_);
if (v___x_828_ == 0)
{
uint8_t v___x_829_; 
lean_inc(v_a_801_);
v___x_829_ = l_Lean_Exception_isRuntime(v_a_801_);
v___y_803_ = v___x_829_;
goto v___jp_802_;
}
else
{
v___y_803_ = v___x_828_;
goto v___jp_802_;
}
v___jp_802_:
{
if (v___y_803_ == 0)
{
lean_object* v_fileName_804_; lean_object* v_fileMap_805_; lean_object* v_options_806_; lean_object* v_currRecDepth_807_; lean_object* v_maxRecDepth_808_; lean_object* v_ref_809_; lean_object* v_currNamespace_810_; lean_object* v_openDecls_811_; lean_object* v_initHeartbeats_812_; lean_object* v_maxHeartbeats_813_; lean_object* v_quotContext_814_; lean_object* v_currMacroScope_815_; uint8_t v_diag_816_; lean_object* v_cancelTk_x3f_817_; uint8_t v_suppressElabErrors_818_; lean_object* v_inheritedTraceOptions_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v_ref_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec(v_a_801_);
v_fileName_804_ = lean_ctor_get(v___y_575_, 0);
v_fileMap_805_ = lean_ctor_get(v___y_575_, 1);
v_options_806_ = lean_ctor_get(v___y_575_, 2);
v_currRecDepth_807_ = lean_ctor_get(v___y_575_, 3);
v_maxRecDepth_808_ = lean_ctor_get(v___y_575_, 4);
v_ref_809_ = lean_ctor_get(v___y_575_, 5);
v_currNamespace_810_ = lean_ctor_get(v___y_575_, 6);
v_openDecls_811_ = lean_ctor_get(v___y_575_, 7);
v_initHeartbeats_812_ = lean_ctor_get(v___y_575_, 8);
v_maxHeartbeats_813_ = lean_ctor_get(v___y_575_, 9);
v_quotContext_814_ = lean_ctor_get(v___y_575_, 10);
v_currMacroScope_815_ = lean_ctor_get(v___y_575_, 11);
v_diag_816_ = lean_ctor_get_uint8(v___y_575_, sizeof(void*)*14);
v_cancelTk_x3f_817_ = lean_ctor_get(v___y_575_, 12);
v_suppressElabErrors_818_ = lean_ctor_get_uint8(v___y_575_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_819_ = lean_ctor_get(v___y_575_, 13);
v___x_820_ = l_Lean_Syntax_getId(v___x_783_);
v___x_821_ = lean_erase_macro_scopes(v___x_820_);
v_ref_822_ = l_Lean_replaceRef(v___x_783_, v_ref_809_);
lean_dec(v___x_783_);
lean_inc_ref(v_inheritedTraceOptions_819_);
lean_inc(v_cancelTk_x3f_817_);
lean_inc(v_currMacroScope_815_);
lean_inc(v_quotContext_814_);
lean_inc(v_maxHeartbeats_813_);
lean_inc(v_initHeartbeats_812_);
lean_inc(v_openDecls_811_);
lean_inc(v_currNamespace_810_);
lean_inc(v_maxRecDepth_808_);
lean_inc(v_currRecDepth_807_);
lean_inc_ref(v_options_806_);
lean_inc_ref(v_fileMap_805_);
lean_inc_ref(v_fileName_804_);
v___x_823_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_823_, 0, v_fileName_804_);
lean_ctor_set(v___x_823_, 1, v_fileMap_805_);
lean_ctor_set(v___x_823_, 2, v_options_806_);
lean_ctor_set(v___x_823_, 3, v_currRecDepth_807_);
lean_ctor_set(v___x_823_, 4, v_maxRecDepth_808_);
lean_ctor_set(v___x_823_, 5, v_ref_822_);
lean_ctor_set(v___x_823_, 6, v_currNamespace_810_);
lean_ctor_set(v___x_823_, 7, v_openDecls_811_);
lean_ctor_set(v___x_823_, 8, v_initHeartbeats_812_);
lean_ctor_set(v___x_823_, 9, v_maxHeartbeats_813_);
lean_ctor_set(v___x_823_, 10, v_quotContext_814_);
lean_ctor_set(v___x_823_, 11, v_currMacroScope_815_);
lean_ctor_set(v___x_823_, 12, v_cancelTk_x3f_817_);
lean_ctor_set(v___x_823_, 13, v_inheritedTraceOptions_819_);
lean_ctor_set_uint8(v___x_823_, sizeof(void*)*14, v_diag_816_);
lean_ctor_set_uint8(v___x_823_, sizeof(void*)*14 + 1, v_suppressElabErrors_818_);
v___x_824_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(v___x_821_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___x_823_, v___y_576_);
lean_dec_ref_known(v___x_823_, 14);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_826_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v___x_824_, 1);
lean_inc(v_fst_590_);
lean_inc(v_fst_586_);
v___x_826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_586_, v_fst_590_, v_a_825_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
v___y_648_ = v___x_826_;
goto v___jp_647_;
}
else
{
lean_object* v_a_827_; 
v_a_827_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___x_824_, 1);
v_a_644_ = v_a_827_;
goto v___jp_643_;
}
}
else
{
lean_dec(v___x_783_);
v_a_644_ = v_a_801_;
goto v___jp_643_;
}
}
}
}
}
else
{
lean_object* v_a_830_; 
lean_dec(v___x_783_);
v_a_830_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_784_, 1);
v_a_644_ = v_a_830_;
goto v___jp_643_;
}
}
v___jp_595_:
{
lean_object* v___x_599_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 0, v_snd_597_);
v___x_599_ = v___x_593_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_snd_597_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_snd_591_);
v___x_599_ = v_reuseFailAlloc_603_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
lean_object* v___x_601_; 
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v___x_599_);
lean_ctor_set(v___x_588_, 0, v_fst_596_);
v___x_601_ = v___x_588_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_fst_596_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v___x_599_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
v_a_579_ = v___x_601_;
goto v___jp_578_;
}
}
}
v___jp_604_:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v_snd_606_);
lean_ctor_set(v___x_607_, 1, v_snd_591_);
v___x_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_608_, 0, v_fst_605_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v_a_579_ = v___x_608_;
goto v___jp_578_;
}
v___jp_609_:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_612_, 0, v_snd_611_);
lean_ctor_set(v___x_612_, 1, v_snd_591_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v_fst_610_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v_a_579_ = v___x_613_;
goto v___jp_578_;
}
v___jp_616_:
{
if (v___y_618_ == 0)
{
lean_object* v___x_619_; 
lean_dec_ref(v___y_617_);
lean_inc(v_a_615_);
v___x_619_ = lean_array_push(v_fst_590_, v_a_615_);
v_fst_610_ = v_fst_586_;
v_snd_611_ = v___x_619_;
goto v___jp_609_;
}
else
{
lean_object* v___x_620_; 
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v___y_617_);
return v___x_620_;
}
}
v___jp_621_:
{
uint8_t v___x_623_; 
v___x_623_ = l_Lean_Exception_isInterrupt(v_a_622_);
if (v___x_623_ == 0)
{
uint8_t v___x_624_; 
lean_inc_ref(v_a_622_);
v___x_624_ = l_Lean_Exception_isRuntime(v_a_622_);
v___y_617_ = v_a_622_;
v___y_618_ = v___x_624_;
goto v___jp_616_;
}
else
{
v___y_617_ = v_a_622_;
v___y_618_ = v___x_623_;
goto v___jp_616_;
}
}
v___jp_625_:
{
if (v___y_627_ == 0)
{
lean_object* v___x_628_; 
lean_dec_ref(v___y_626_);
lean_inc(v_a_615_);
v___x_628_ = lean_array_push(v_fst_590_, v_a_615_);
v_fst_605_ = v_fst_586_;
v_snd_606_ = v___x_628_;
goto v___jp_604_;
}
else
{
lean_object* v___x_629_; 
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v___x_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_629_, 0, v___y_626_);
return v___x_629_;
}
}
v___jp_630_:
{
uint8_t v___x_632_; 
v___x_632_ = l_Lean_Exception_isInterrupt(v_a_631_);
if (v___x_632_ == 0)
{
uint8_t v___x_633_; 
lean_inc_ref(v_a_631_);
v___x_633_ = l_Lean_Exception_isRuntime(v_a_631_);
v___y_626_ = v_a_631_;
v___y_627_ = v___x_633_;
goto v___jp_625_;
}
else
{
v___y_626_ = v_a_631_;
v___y_627_ = v___x_632_;
goto v___jp_625_;
}
}
v___jp_634_:
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
lean_inc(v_a_615_);
v___x_635_ = lean_array_push(v_fst_590_, v_a_615_);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v_snd_591_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v_fst_586_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v_a_579_ = v___x_637_;
goto v___jp_578_;
}
v___jp_638_:
{
if (v___y_640_ == 0)
{
lean_object* v___x_641_; 
lean_dec_ref(v___y_639_);
lean_inc(v_a_615_);
v___x_641_ = lean_array_push(v_fst_590_, v_a_615_);
v_fst_596_ = v_fst_586_;
v_snd_597_ = v___x_641_;
goto v___jp_595_;
}
else
{
lean_object* v___x_642_; 
lean_del_object(v___x_593_);
lean_dec(v_snd_591_);
lean_dec(v_fst_590_);
lean_del_object(v___x_588_);
lean_dec(v_fst_586_);
v___x_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_642_, 0, v___y_639_);
return v___x_642_;
}
}
v___jp_643_:
{
uint8_t v___x_645_; 
v___x_645_ = l_Lean_Exception_isInterrupt(v_a_644_);
if (v___x_645_ == 0)
{
uint8_t v___x_646_; 
lean_inc_ref(v_a_644_);
v___x_646_ = l_Lean_Exception_isRuntime(v_a_644_);
v___y_639_ = v_a_644_;
v___y_640_ = v___x_646_;
goto v___jp_638_;
}
else
{
v___y_639_ = v_a_644_;
v___y_640_ = v___x_645_;
goto v___jp_638_;
}
}
v___jp_647_:
{
if (lean_obj_tag(v___y_648_) == 0)
{
lean_object* v_a_649_; lean_object* v_snd_650_; lean_object* v_fst_651_; lean_object* v_snd_652_; 
lean_dec(v_fst_590_);
lean_dec(v_fst_586_);
v_a_649_ = lean_ctor_get(v___y_648_, 0);
lean_inc(v_a_649_);
lean_dec_ref_known(v___y_648_, 1);
v_snd_650_ = lean_ctor_get(v_a_649_, 1);
lean_inc(v_snd_650_);
lean_dec(v_a_649_);
v_fst_651_ = lean_ctor_get(v_snd_650_, 0);
lean_inc(v_fst_651_);
v_snd_652_ = lean_ctor_get(v_snd_650_, 1);
lean_inc(v_snd_652_);
lean_dec(v_snd_650_);
v_fst_596_ = v_fst_651_;
v_snd_597_ = v_snd_652_;
goto v___jp_595_;
}
else
{
lean_object* v_a_653_; 
v_a_653_ = lean_ctor_get(v___y_648_, 0);
lean_inc(v_a_653_);
lean_dec_ref_known(v___y_648_, 1);
v_a_644_ = v_a_653_;
goto v___jp_643_;
}
}
}
}
}
v___jp_578_:
{
size_t v___x_580_; size_t v___x_581_; 
v___x_580_ = ((size_t)1ULL);
v___x_581_ = lean_usize_add(v_i_569_, v___x_580_);
v_i_569_ = v___x_581_;
v_b_570_ = v_a_579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___boxed(lean_object* v_as_833_, lean_object* v_sz_834_, lean_object* v_i_835_, lean_object* v_b_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
size_t v_sz_boxed_844_; size_t v_i_boxed_845_; lean_object* v_res_846_; 
v_sz_boxed_844_ = lean_unbox_usize(v_sz_834_);
lean_dec(v_sz_834_);
v_i_boxed_845_ = lean_unbox_usize(v_i_835_);
lean_dec(v_i_835_);
v_res_846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(v_as_833_, v_sz_boxed_844_, v_i_boxed_845_, v_b_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec_ref(v_as_833_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(lean_object* v_as_847_, size_t v_sz_848_, size_t v_i_849_, lean_object* v_b_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_a_857_; uint8_t v___x_861_; 
v___x_861_ = lean_usize_dec_lt(v_i_849_, v_sz_848_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v_b_850_);
return v___x_862_;
}
else
{
lean_object* v_a_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_a_863_ = lean_array_uget_borrowed(v_as_847_, v_i_849_);
lean_inc(v_a_863_);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v_a_863_);
lean_inc_ref(v_b_850_);
v___x_865_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_isErased(v_b_850_, v___x_864_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_863_);
v___x_867_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_mkSpecTheoremFromLocal(v_a_863_, v___x_866_, v___y_851_, v___y_852_, v___y_853_, v___y_854_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
if (lean_obj_tag(v_a_868_) == 1)
{
lean_object* v_val_869_; lean_object* v___x_870_; 
v_val_869_ = lean_ctor_get(v_a_868_, 0);
lean_inc(v_val_869_);
lean_dec_ref_known(v_a_868_, 1);
v___x_870_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_SpecTheorems_insert(v_b_850_, v_val_869_);
v_a_857_ = v___x_870_;
goto v___jp_856_;
}
else
{
lean_dec(v_a_868_);
v_a_857_ = v_b_850_;
goto v___jp_856_;
}
}
else
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_882_; 
v_a_871_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_882_ == 0)
{
v___x_873_ = v___x_867_;
v_isShared_874_ = v_isSharedCheck_882_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_867_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_882_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
uint8_t v___y_876_; uint8_t v___x_880_; 
v___x_880_ = l_Lean_Exception_isInterrupt(v_a_871_);
if (v___x_880_ == 0)
{
uint8_t v___x_881_; 
lean_inc(v_a_871_);
v___x_881_ = l_Lean_Exception_isRuntime(v_a_871_);
v___y_876_ = v___x_881_;
goto v___jp_875_;
}
else
{
v___y_876_ = v___x_880_;
goto v___jp_875_;
}
v___jp_875_:
{
if (v___y_876_ == 0)
{
lean_del_object(v___x_873_);
lean_dec(v_a_871_);
v_a_857_ = v_b_850_;
goto v___jp_856_;
}
else
{
lean_object* v___x_878_; 
lean_dec_ref(v_b_850_);
if (v_isShared_874_ == 0)
{
v___x_878_ = v___x_873_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_871_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
}
}
else
{
v_a_857_ = v_b_850_;
goto v___jp_856_;
}
}
v___jp_856_:
{
size_t v___x_858_; size_t v___x_859_; 
v___x_858_ = ((size_t)1ULL);
v___x_859_ = lean_usize_add(v_i_849_, v___x_858_);
v_i_849_ = v___x_859_;
v_b_850_ = v_a_857_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg___boxed(lean_object* v_as_883_, lean_object* v_sz_884_, lean_object* v_i_885_, lean_object* v_b_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
size_t v_sz_boxed_892_; size_t v_i_boxed_893_; lean_object* v_res_894_; 
v_sz_boxed_892_ = lean_unbox_usize(v_sz_884_);
lean_dec(v_sz_884_);
v_i_boxed_893_ = lean_unbox_usize(v_i_885_);
lean_dec(v_i_885_);
v_res_894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(v_as_883_, v_sz_boxed_892_, v_i_boxed_893_, v_b_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec_ref(v_as_883_);
return v_res_894_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1(void){
_start:
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = lean_box(0);
v___x_898_ = lean_unsigned_to_nat(16u);
v___x_899_ = lean_mk_array(v___x_898_, v___x_897_);
return v___x_899_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2(void){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1);
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v___x_900_);
return v___x_902_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15));
v___x_937_ = l_String_toRawSubstring_x27(v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22(void){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_948_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21));
v___x_949_ = l_String_toRawSubstring_x27(v___x_948_);
return v___x_949_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24(void){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l_Array_mkArray0(lean_box(0));
return v___x_952_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29(void){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return v___x_957_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30(void){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5(lean_box(0));
return v___x_958_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31(void){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6(lean_box(0));
return v___x_959_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32(void){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_960_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32);
v___x_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_962_, 0, v___x_961_);
return v___x_962_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_963_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33);
v___x_964_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31);
v___x_965_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30);
v___x_966_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29);
v___x_967_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
lean_ctor_set(v___x_967_, 2, v___x_965_);
lean_ctor_set(v___x_967_, 3, v___x_964_);
lean_ctor_set(v___x_967_, 4, v___x_965_);
lean_ctor_set(v___x_967_, 5, v___x_963_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(lean_object* v_lemmas_968_, lean_object* v_goal_969_, uint8_t v_ignoreStarArg_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_Elab_Tactic_Do_Internal_SpecAttr_getSpecTheorems___redArg(v_a_976_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; uint8_t v___x_981_; lean_object* v___y_983_; lean_object* v_specThms_984_; lean_object* v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_988_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; size_t v_sz_1028_; size_t v___x_1029_; lean_object* v___x_1030_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = lean_unsigned_to_nat(0u);
v___x_981_ = 0;
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = l_Lean_Syntax_getArg(v_lemmas_968_, v___x_1023_);
v___x_1025_ = l_Lean_Syntax_getSepArgs(v___x_1024_);
lean_dec(v___x_1024_);
v___x_1026_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3));
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v_a_979_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v_sz_1028_ = lean_array_size(v___x_1025_);
v___x_1029_ = ((size_t)0ULL);
v___x_1030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(v___x_1025_, v_sz_1028_, v___x_1029_, v___x_1027_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_);
lean_dec_ref(v___x_1025_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v_snd_1032_; lean_object* v_fst_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1137_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
v_snd_1032_ = lean_ctor_get(v_a_1031_, 1);
v_fst_1033_ = lean_ctor_get(v_a_1031_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_a_1031_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1035_ = v_a_1031_;
v_isShared_1036_ = v_isSharedCheck_1137_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_snd_1032_);
lean_inc(v_fst_1033_);
lean_dec(v_a_1031_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1137_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v_fst_1037_; lean_object* v_snd_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1136_; 
v_fst_1037_ = lean_ctor_get(v_snd_1032_, 0);
v_snd_1038_ = lean_ctor_get(v_snd_1032_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_snd_1032_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1040_ = v_snd_1032_;
v_isShared_1041_ = v_isSharedCheck_1136_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_snd_1038_);
lean_inc(v_fst_1037_);
lean_dec(v_snd_1032_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1136_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v_ref_1042_; lean_object* v_quotContext_1043_; lean_object* v_currMacroScope_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1049_; 
v_ref_1042_ = lean_ctor_get(v_a_975_, 5);
v_quotContext_1043_ = lean_ctor_get(v_a_975_, 10);
v_currMacroScope_1044_ = lean_ctor_get(v_a_975_, 11);
v___x_1045_ = l_Lean_SourceInfo_fromRef(v_ref_1042_, v___x_981_);
v___x_1046_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4));
v___x_1047_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5));
lean_inc(v___x_1045_);
if (v_isShared_1041_ == 0)
{
lean_ctor_set_tag(v___x_1040_, 2);
lean_ctor_set(v___x_1040_, 1, v___x_1046_);
lean_ctor_set(v___x_1040_, 0, v___x_1045_);
v___x_1049_ = v___x_1040_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1045_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1046_);
v___x_1049_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1056_; 
v___x_1050_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7));
v___x_1051_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9));
v___x_1052_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11));
v___x_1053_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13));
v___x_1054_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14));
lean_inc(v___x_1045_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set_tag(v___x_1035_, 2);
lean_ctor_set(v___x_1035_, 1, v___x_1054_);
lean_ctor_set(v___x_1035_, 0, v___x_1045_);
v___x_1056_ = v___x_1035_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1045_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1057_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16);
v___x_1058_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17));
lean_inc_n(v_currMacroScope_1044_, 2);
lean_inc_n(v_quotContext_1043_, 2);
v___x_1059_ = l_Lean_addMacroScope(v_quotContext_1043_, v___x_1058_, v_currMacroScope_1044_);
v___x_1060_ = lean_box(0);
lean_inc_n(v___x_1045_, 14);
v___x_1061_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1061_, 0, v___x_1045_);
lean_ctor_set(v___x_1061_, 1, v___x_1057_);
lean_ctor_set(v___x_1061_, 2, v___x_1059_);
lean_ctor_set(v___x_1061_, 3, v___x_1060_);
v___x_1062_ = l_Lean_Syntax_node2(v___x_1045_, v___x_1053_, v___x_1056_, v___x_1061_);
v___x_1063_ = l_Lean_Syntax_node1(v___x_1045_, v___x_1052_, v___x_1062_);
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19));
v___x_1065_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20));
v___x_1066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1045_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22);
v___x_1068_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23));
v___x_1069_ = l_Lean_addMacroScope(v_quotContext_1043_, v___x_1068_, v_currMacroScope_1044_);
v___x_1070_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1045_);
lean_ctor_set(v___x_1070_, 1, v___x_1067_);
lean_ctor_set(v___x_1070_, 2, v___x_1069_);
lean_ctor_set(v___x_1070_, 3, v___x_1060_);
v___x_1071_ = l_Lean_Syntax_node2(v___x_1045_, v___x_1064_, v___x_1066_, v___x_1070_);
v___x_1072_ = l_Lean_Syntax_node1(v___x_1045_, v___x_1052_, v___x_1071_);
v___x_1073_ = l_Lean_Syntax_node2(v___x_1045_, v___x_1051_, v___x_1063_, v___x_1072_);
v___x_1074_ = l_Lean_Syntax_node1(v___x_1045_, v___x_1050_, v___x_1073_);
v___x_1075_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24);
v___x_1076_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1045_);
lean_ctor_set(v___x_1076_, 1, v___x_1051_);
lean_ctor_set(v___x_1076_, 2, v___x_1075_);
v___x_1077_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25));
v___x_1078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1045_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26));
v___x_1080_ = l_Lean_Syntax_SepArray_ofElems(v___x_1079_, v_fst_1037_);
lean_dec(v_fst_1037_);
v___x_1081_ = l_Array_append___redArg(v___x_1075_, v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1045_);
lean_ctor_set(v___x_1082_, 1, v___x_1051_);
lean_ctor_set(v___x_1082_, 2, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27));
v___x_1084_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1045_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = l_Lean_Syntax_node3(v___x_1045_, v___x_1051_, v___x_1078_, v___x_1082_, v___x_1084_);
lean_inc_ref_n(v___x_1076_, 2);
v___x_1086_ = l_Lean_Syntax_node6(v___x_1045_, v___x_1047_, v___x_1049_, v___x_1074_, v___x_1076_, v___x_1076_, v___x_1085_, v___x_1076_);
v___x_1087_ = 0;
v___x_1088_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28));
v___x_1089_ = lean_box(v___x_981_);
v___x_1090_ = lean_box(v___x_1087_);
v___x_1091_ = lean_box(v_ignoreStarArg_970_);
v___x_1092_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_1092_, 0, v___x_1086_);
lean_closure_set(v___x_1092_, 1, v___x_1089_);
lean_closure_set(v___x_1092_, 2, v___x_1090_);
lean_closure_set(v___x_1092_, 3, v___x_1091_);
lean_closure_set(v___x_1092_, 4, v___x_1088_);
v___x_1093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1093_, 0, v_goal_969_);
lean_ctor_set(v___x_1093_, 1, v___x_1060_);
v___x_1094_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_1092_, v___x_1093_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___y_1097_; lean_object* v_ctx_1120_; lean_object* v_simpTheorems_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1094_, 1);
v_ctx_1120_ = lean_ctor_get(v_a_1095_, 0);
lean_inc_ref(v_ctx_1120_);
lean_dec(v_a_1095_);
v_simpTheorems_1121_ = lean_ctor_get(v_ctx_1120_, 6);
lean_inc_ref(v_simpTheorems_1121_);
lean_dec_ref(v_ctx_1120_);
v___x_1122_ = lean_array_get_size(v_simpTheorems_1121_);
v___x_1123_ = lean_nat_dec_lt(v___x_980_, v___x_1122_);
if (v___x_1123_ == 0)
{
lean_object* v___x_1124_; 
lean_dec_ref(v_simpTheorems_1121_);
v___x_1124_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34);
v___y_1097_ = v___x_1124_;
goto v___jp_1096_;
}
else
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_array_fget(v_simpTheorems_1121_, v___x_980_);
lean_dec_ref(v_simpTheorems_1121_);
v___y_1097_ = v___x_1125_;
goto v___jp_1096_;
}
v___jp_1096_:
{
uint8_t v___x_1098_; 
v___x_1098_ = lean_unbox(v_snd_1038_);
lean_dec(v_snd_1038_);
if (v___x_1098_ == 0)
{
v___y_983_ = v___y_1097_;
v_specThms_984_ = v_fst_1033_;
v___y_985_ = v_a_973_;
v___y_986_ = v_a_974_;
v___y_987_ = v_a_975_;
v___y_988_ = v_a_976_;
goto v___jp_982_;
}
else
{
if (v_ignoreStarArg_970_ == 0)
{
lean_object* v___x_1099_; 
v___x_1099_ = l_Lean_Meta_getPropHyps(v_a_973_, v_a_974_, v_a_975_, v_a_976_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; size_t v_sz_1101_; lean_object* v___x_1102_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v_sz_1101_ = lean_array_size(v_a_1100_);
v___x_1102_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(v_a_1100_, v_sz_1101_, v___x_1029_, v_fst_1033_, v_a_973_, v_a_974_, v_a_975_, v_a_976_);
lean_dec(v_a_1100_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
v___y_983_ = v___y_1097_;
v_specThms_984_ = v_a_1103_;
v___y_985_ = v_a_973_;
v___y_986_ = v_a_974_;
v___y_987_ = v_a_975_;
v___y_988_ = v_a_976_;
goto v___jp_982_;
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec_ref(v___y_1097_);
v_a_1104_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1102_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1102_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec_ref(v___y_1097_);
lean_dec(v_fst_1033_);
v_a_1112_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1099_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1099_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
else
{
v___y_983_ = v___y_1097_;
v_specThms_984_ = v_fst_1033_;
v___y_985_ = v_a_973_;
v___y_986_ = v_a_974_;
v___y_987_ = v_a_975_;
v___y_988_ = v_a_976_;
goto v___jp_982_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec(v_snd_1038_);
lean_dec(v_fst_1033_);
v_a_1126_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1094_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1094_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
lean_dec(v_goal_969_);
v_a_1138_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1140_ = v___x_1030_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___x_1030_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_a_1138_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
v___jp_982_:
{
lean_object* v___x_989_; 
v___x_989_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRules(v___y_985_, v___y_986_, v___y_987_, v___y_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_extendWithSimpSpecs(v_specThms_984_, v___y_983_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec_ref(v___y_983_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1006_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_1006_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1006_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1004_; 
v___x_996_ = lean_box(0);
v___x_997_ = 1;
v___x_998_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2);
v___x_999_ = lean_alloc_ctor(0, 4, 5);
lean_ctor_set(v___x_999_, 0, v_a_990_);
lean_ctor_set(v___x_999_, 1, v___x_996_);
lean_ctor_set(v___x_999_, 2, v___x_998_);
lean_ctor_set(v___x_999_, 3, v___x_996_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*4, v___x_997_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*4 + 1, v___x_981_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*4 + 2, v___x_997_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*4 + 3, v___x_981_);
lean_ctor_set_uint8(v___x_999_, sizeof(void*)*4 + 4, v___x_997_);
v___x_1000_ = lean_box(1);
v___x_1001_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1001_, 0, v_a_992_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
lean_ctor_set(v___x_1001_, 2, v___x_996_);
lean_ctor_set(v___x_1001_, 3, v___x_980_);
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_999_);
lean_ctor_set(v___x_1002_, 1, v___x_1001_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v___x_1002_);
v___x_1004_ = v___x_994_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1002_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
lean_dec(v_a_990_);
v_a_1007_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_991_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_991_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec_ref(v_specThms_984_);
lean_dec_ref(v___y_983_);
v_a_1015_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_989_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_989_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_dec(v_goal_969_);
v_a_1146_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_978_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_978_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___boxed(lean_object* v_lemmas_1154_, lean_object* v_goal_1155_, lean_object* v_ignoreStarArg_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_, lean_object* v_a_1163_){
_start:
{
uint8_t v_ignoreStarArg_boxed_1164_; lean_object* v_res_1165_; 
v_ignoreStarArg_boxed_1164_ = lean_unbox(v_ignoreStarArg_1156_);
v_res_1165_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(v_lemmas_1154_, v_goal_1155_, v_ignoreStarArg_boxed_1164_, v_a_1157_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v_a_1162_);
lean_dec(v_a_1162_);
lean_dec_ref(v_a_1161_);
lean_dec(v_a_1160_);
lean_dec_ref(v_a_1159_);
lean_dec(v_a_1158_);
lean_dec_ref(v_a_1157_);
lean_dec(v_lemmas_1154_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1(lean_object* v_00_u03b1_1166_, lean_object* v_msg_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v_msg_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___boxed(lean_object* v_00_u03b1_1176_, lean_object* v_msg_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
lean_object* v_res_1185_; 
v_res_1185_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1(v_00_u03b1_1176_, v_msg_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2(lean_object* v_00_u03b1_1186_, lean_object* v_constName_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(v_constName_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___boxed(lean_object* v_00_u03b1_1196_, lean_object* v_constName_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2(v_00_u03b1_1196_, v_constName_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4(lean_object* v_as_1206_, size_t v_sz_1207_, size_t v_i_1208_, lean_object* v_b_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(v_as_1206_, v_sz_1207_, v_i_1208_, v_b_1209_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___boxed(lean_object* v_as_1218_, lean_object* v_sz_1219_, lean_object* v_i_1220_, lean_object* v_b_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
size_t v_sz_boxed_1229_; size_t v_i_boxed_1230_; lean_object* v_res_1231_; 
v_sz_boxed_1229_ = lean_unbox_usize(v_sz_1219_);
lean_dec(v_sz_1219_);
v_i_boxed_1230_ = lean_unbox_usize(v_i_1220_);
lean_dec(v_i_1220_);
v_res_1231_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4(v_as_1218_, v_sz_boxed_1229_, v_i_boxed_1230_, v_b_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
lean_dec_ref(v___y_1222_);
lean_dec_ref(v_as_1218_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2(lean_object* v_msgData_1232_, lean_object* v_macroStack_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(v_msgData_1232_, v_macroStack_1233_, v___y_1238_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___boxed(lean_object* v_msgData_1242_, lean_object* v_macroStack_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2(v_msgData_1242_, v_macroStack_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4(lean_object* v_00_u03b1_1252_, lean_object* v_ref_1253_, lean_object* v_constName_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(v_ref_1253_, v_constName_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1263_, lean_object* v_ref_1264_, lean_object* v_constName_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4(v_00_u03b1_1263_, v_ref_1264_, v_constName_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v_ref_1264_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9(lean_object* v_00_u03b1_1274_, lean_object* v_ref_1275_, lean_object* v_msg_1276_, lean_object* v_declHint_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v___x_1285_; 
v___x_1285_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(v_ref_1275_, v_msg_1276_, v_declHint_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___boxed(lean_object* v_00_u03b1_1286_, lean_object* v_ref_1287_, lean_object* v_msg_1288_, lean_object* v_declHint_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9(v_00_u03b1_1286_, v_ref_1287_, v_msg_1288_, v_declHint_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v_ref_1287_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13(lean_object* v_msg_1298_, lean_object* v_declHint_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___x_1307_; 
v___x_1307_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_1298_, v_declHint_1299_, v___y_1305_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___boxed(lean_object* v_msg_1308_, lean_object* v_declHint_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13(v_msg_1308_, v_declHint_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13(lean_object* v_00_u03b1_1318_, lean_object* v_ref_1319_, lean_object* v_msg_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_1319_, v_msg_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___boxed(lean_object* v_00_u03b1_1329_, lean_object* v_ref_1330_, lean_object* v_msg_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13(v_00_u03b1_1329_, v_ref_1330_, v_msg_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v_ref_1330_);
return v_res_1339_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(uint8_t v___y_1347_, uint8_t v_suppressElabErrors_1348_, lean_object* v_x_1349_){
_start:
{
if (lean_obj_tag(v_x_1349_) == 1)
{
lean_object* v_pre_1350_; 
v_pre_1350_ = lean_ctor_get(v_x_1349_, 0);
switch(lean_obj_tag(v_pre_1350_))
{
case 1:
{
lean_object* v_pre_1351_; 
v_pre_1351_ = lean_ctor_get(v_pre_1350_, 0);
switch(lean_obj_tag(v_pre_1351_))
{
case 0:
{
lean_object* v_str_1352_; lean_object* v_str_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v_str_1352_ = lean_ctor_get(v_x_1349_, 1);
v_str_1353_ = lean_ctor_get(v_pre_1350_, 1);
v___x_1354_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_1355_ = lean_string_dec_eq(v_str_1353_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1356_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2));
v___x_1357_ = lean_string_dec_eq(v_str_1353_, v___x_1356_);
if (v___x_1357_ == 0)
{
return v___y_1347_;
}
else
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_1359_ = lean_string_dec_eq(v_str_1352_, v___x_1358_);
if (v___x_1359_ == 0)
{
return v___y_1347_;
}
else
{
return v_suppressElabErrors_1348_;
}
}
}
else
{
lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_1361_ = lean_string_dec_eq(v_str_1352_, v___x_1360_);
if (v___x_1361_ == 0)
{
return v___y_1347_;
}
else
{
return v_suppressElabErrors_1348_;
}
}
}
case 1:
{
lean_object* v_pre_1362_; 
v_pre_1362_ = lean_ctor_get(v_pre_1351_, 0);
if (lean_obj_tag(v_pre_1362_) == 0)
{
lean_object* v_str_1363_; lean_object* v_str_1364_; lean_object* v_str_1365_; lean_object* v___x_1366_; uint8_t v___x_1367_; 
v_str_1363_ = lean_ctor_get(v_x_1349_, 1);
v_str_1364_ = lean_ctor_get(v_pre_1350_, 1);
v_str_1365_ = lean_ctor_get(v_pre_1351_, 1);
v___x_1366_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_1367_ = lean_string_dec_eq(v_str_1365_, v___x_1366_);
if (v___x_1367_ == 0)
{
return v___y_1347_;
}
else
{
lean_object* v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_1369_ = lean_string_dec_eq(v_str_1364_, v___x_1368_);
if (v___x_1369_ == 0)
{
return v___y_1347_;
}
else
{
lean_object* v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_1371_ = lean_string_dec_eq(v_str_1363_, v___x_1370_);
if (v___x_1371_ == 0)
{
return v___y_1347_;
}
else
{
return v_suppressElabErrors_1348_;
}
}
}
}
else
{
return v___y_1347_;
}
}
default: 
{
return v___y_1347_;
}
}
}
case 0:
{
lean_object* v_str_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; 
v_str_1372_ = lean_ctor_get(v_x_1349_, 1);
v___x_1373_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_1374_ = lean_string_dec_eq(v_str_1372_, v___x_1373_);
if (v___x_1374_ == 0)
{
return v___y_1347_;
}
else
{
return v_suppressElabErrors_1348_;
}
}
default: 
{
return v___y_1347_;
}
}
}
else
{
return v___y_1347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___y_1375_, lean_object* v_suppressElabErrors_1376_, lean_object* v_x_1377_){
_start:
{
uint8_t v___y_2865__boxed_1378_; uint8_t v_suppressElabErrors_boxed_1379_; uint8_t v_res_1380_; lean_object* v_r_1381_; 
v___y_2865__boxed_1378_ = lean_unbox(v___y_1375_);
v_suppressElabErrors_boxed_1379_ = lean_unbox(v_suppressElabErrors_1376_);
v_res_1380_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(v___y_2865__boxed_1378_, v_suppressElabErrors_boxed_1379_, v_x_1377_);
lean_dec(v_x_1377_);
v_r_1381_ = lean_box(v_res_1380_);
return v_r_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(lean_object* v_ref_1383_, lean_object* v_msgData_1384_, uint8_t v_severity_1385_, uint8_t v_isSilent_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___y_1393_; lean_object* v___y_1394_; lean_object* v___y_1395_; uint8_t v___y_1396_; lean_object* v___y_1397_; lean_object* v___y_1398_; uint8_t v___y_1399_; lean_object* v___y_1400_; lean_object* v___y_1401_; lean_object* v___y_1429_; lean_object* v___y_1430_; lean_object* v___y_1431_; uint8_t v___y_1432_; lean_object* v___y_1433_; uint8_t v___y_1434_; uint8_t v___y_1435_; lean_object* v___y_1436_; lean_object* v___y_1454_; lean_object* v___y_1455_; lean_object* v___y_1456_; uint8_t v___y_1457_; uint8_t v___y_1458_; lean_object* v___y_1459_; uint8_t v___y_1460_; lean_object* v___y_1461_; lean_object* v___y_1465_; lean_object* v___y_1466_; lean_object* v___y_1467_; uint8_t v___y_1468_; lean_object* v___y_1469_; uint8_t v___y_1470_; uint8_t v___y_1471_; uint8_t v___x_1476_; lean_object* v___y_1478_; lean_object* v___y_1479_; uint8_t v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1482_; uint8_t v___y_1483_; uint8_t v___y_1484_; uint8_t v___y_1486_; uint8_t v___x_1501_; 
v___x_1476_ = 2;
v___x_1501_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1385_, v___x_1476_);
if (v___x_1501_ == 0)
{
v___y_1486_ = v___x_1501_;
goto v___jp_1485_;
}
else
{
uint8_t v___x_1502_; 
lean_inc_ref(v_msgData_1384_);
v___x_1502_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1384_);
v___y_1486_ = v___x_1502_;
goto v___jp_1485_;
}
v___jp_1392_:
{
lean_object* v___x_1402_; lean_object* v_currNamespace_1403_; lean_object* v_openDecls_1404_; lean_object* v_env_1405_; lean_object* v_nextMacroScope_1406_; lean_object* v_ngen_1407_; lean_object* v_auxDeclNGen_1408_; lean_object* v_traceState_1409_; lean_object* v_cache_1410_; lean_object* v_messages_1411_; lean_object* v_infoState_1412_; lean_object* v_snapshotTasks_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1427_; 
v___x_1402_ = lean_st_ref_take(v___y_1401_);
v_currNamespace_1403_ = lean_ctor_get(v___y_1400_, 6);
v_openDecls_1404_ = lean_ctor_get(v___y_1400_, 7);
v_env_1405_ = lean_ctor_get(v___x_1402_, 0);
v_nextMacroScope_1406_ = lean_ctor_get(v___x_1402_, 1);
v_ngen_1407_ = lean_ctor_get(v___x_1402_, 2);
v_auxDeclNGen_1408_ = lean_ctor_get(v___x_1402_, 3);
v_traceState_1409_ = lean_ctor_get(v___x_1402_, 4);
v_cache_1410_ = lean_ctor_get(v___x_1402_, 5);
v_messages_1411_ = lean_ctor_get(v___x_1402_, 6);
v_infoState_1412_ = lean_ctor_get(v___x_1402_, 7);
v_snapshotTasks_1413_ = lean_ctor_get(v___x_1402_, 8);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1415_ = v___x_1402_;
v_isShared_1416_ = v_isSharedCheck_1427_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_snapshotTasks_1413_);
lean_inc(v_infoState_1412_);
lean_inc(v_messages_1411_);
lean_inc(v_cache_1410_);
lean_inc(v_traceState_1409_);
lean_inc(v_auxDeclNGen_1408_);
lean_inc(v_ngen_1407_);
lean_inc(v_nextMacroScope_1406_);
lean_inc(v_env_1405_);
lean_dec(v___x_1402_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1427_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1422_; 
lean_inc(v_openDecls_1404_);
lean_inc(v_currNamespace_1403_);
v___x_1417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1417_, 0, v_currNamespace_1403_);
lean_ctor_set(v___x_1417_, 1, v_openDecls_1404_);
v___x_1418_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1417_);
lean_ctor_set(v___x_1418_, 1, v___y_1398_);
lean_inc_ref(v___y_1393_);
lean_inc_ref(v___y_1397_);
v___x_1419_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1419_, 0, v___y_1397_);
lean_ctor_set(v___x_1419_, 1, v___y_1395_);
lean_ctor_set(v___x_1419_, 2, v___y_1394_);
lean_ctor_set(v___x_1419_, 3, v___y_1393_);
lean_ctor_set(v___x_1419_, 4, v___x_1418_);
lean_ctor_set_uint8(v___x_1419_, sizeof(void*)*5, v___y_1396_);
lean_ctor_set_uint8(v___x_1419_, sizeof(void*)*5 + 1, v___y_1399_);
lean_ctor_set_uint8(v___x_1419_, sizeof(void*)*5 + 2, v_isSilent_1386_);
v___x_1420_ = l_Lean_MessageLog_add(v___x_1419_, v_messages_1411_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 6, v___x_1420_);
v___x_1422_ = v___x_1415_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_env_1405_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_nextMacroScope_1406_);
lean_ctor_set(v_reuseFailAlloc_1426_, 2, v_ngen_1407_);
lean_ctor_set(v_reuseFailAlloc_1426_, 3, v_auxDeclNGen_1408_);
lean_ctor_set(v_reuseFailAlloc_1426_, 4, v_traceState_1409_);
lean_ctor_set(v_reuseFailAlloc_1426_, 5, v_cache_1410_);
lean_ctor_set(v_reuseFailAlloc_1426_, 6, v___x_1420_);
lean_ctor_set(v_reuseFailAlloc_1426_, 7, v_infoState_1412_);
lean_ctor_set(v_reuseFailAlloc_1426_, 8, v_snapshotTasks_1413_);
v___x_1422_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1423_ = lean_st_ref_set(v___y_1401_, v___x_1422_);
v___x_1424_ = lean_box(0);
v___x_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
return v___x_1425_;
}
}
}
v___jp_1428_:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1452_; 
v___x_1437_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1384_);
v___x_1438_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v___x_1437_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1452_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1452_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
lean_inc_ref_n(v___y_1431_, 2);
v___x_1443_ = l_Lean_FileMap_toPosition(v___y_1431_, v___y_1430_);
lean_dec(v___y_1430_);
v___x_1444_ = l_Lean_FileMap_toPosition(v___y_1431_, v___y_1436_);
lean_dec(v___y_1436_);
v___x_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
v___x_1446_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_1432_ == 0)
{
lean_del_object(v___x_1441_);
lean_dec_ref(v___y_1429_);
v___y_1393_ = v___x_1446_;
v___y_1394_ = v___x_1445_;
v___y_1395_ = v___x_1443_;
v___y_1396_ = v___y_1434_;
v___y_1397_ = v___y_1433_;
v___y_1398_ = v_a_1439_;
v___y_1399_ = v___y_1435_;
v___y_1400_ = v___y_1389_;
v___y_1401_ = v___y_1390_;
goto v___jp_1392_;
}
else
{
uint8_t v___x_1447_; 
lean_inc(v_a_1439_);
v___x_1447_ = l_Lean_MessageData_hasTag(v___y_1429_, v_a_1439_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1450_; 
lean_dec_ref_known(v___x_1445_, 1);
lean_dec_ref(v___x_1443_);
lean_dec(v_a_1439_);
v___x_1448_ = lean_box(0);
if (v_isShared_1442_ == 0)
{
lean_ctor_set(v___x_1441_, 0, v___x_1448_);
v___x_1450_ = v___x_1441_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
return v___x_1450_;
}
}
else
{
lean_del_object(v___x_1441_);
v___y_1393_ = v___x_1446_;
v___y_1394_ = v___x_1445_;
v___y_1395_ = v___x_1443_;
v___y_1396_ = v___y_1434_;
v___y_1397_ = v___y_1433_;
v___y_1398_ = v_a_1439_;
v___y_1399_ = v___y_1435_;
v___y_1400_ = v___y_1389_;
v___y_1401_ = v___y_1390_;
goto v___jp_1392_;
}
}
}
}
v___jp_1453_:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_Syntax_getTailPos_x3f(v___y_1455_, v___y_1458_);
lean_dec(v___y_1455_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_inc(v___y_1461_);
v___y_1429_ = v___y_1454_;
v___y_1430_ = v___y_1461_;
v___y_1431_ = v___y_1456_;
v___y_1432_ = v___y_1457_;
v___y_1433_ = v___y_1459_;
v___y_1434_ = v___y_1458_;
v___y_1435_ = v___y_1460_;
v___y_1436_ = v___y_1461_;
goto v___jp_1428_;
}
else
{
lean_object* v_val_1463_; 
v_val_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v___x_1462_, 1);
v___y_1429_ = v___y_1454_;
v___y_1430_ = v___y_1461_;
v___y_1431_ = v___y_1456_;
v___y_1432_ = v___y_1457_;
v___y_1433_ = v___y_1459_;
v___y_1434_ = v___y_1458_;
v___y_1435_ = v___y_1460_;
v___y_1436_ = v_val_1463_;
goto v___jp_1428_;
}
}
v___jp_1464_:
{
lean_object* v_ref_1472_; lean_object* v___x_1473_; 
v_ref_1472_ = l_Lean_replaceRef(v_ref_1383_, v___y_1466_);
v___x_1473_ = l_Lean_Syntax_getPos_x3f(v_ref_1472_, v___y_1470_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v___x_1474_; 
v___x_1474_ = lean_unsigned_to_nat(0u);
v___y_1454_ = v___y_1465_;
v___y_1455_ = v_ref_1472_;
v___y_1456_ = v___y_1467_;
v___y_1457_ = v___y_1468_;
v___y_1458_ = v___y_1470_;
v___y_1459_ = v___y_1469_;
v___y_1460_ = v___y_1471_;
v___y_1461_ = v___x_1474_;
goto v___jp_1453_;
}
else
{
lean_object* v_val_1475_; 
v_val_1475_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_val_1475_);
lean_dec_ref_known(v___x_1473_, 1);
v___y_1454_ = v___y_1465_;
v___y_1455_ = v_ref_1472_;
v___y_1456_ = v___y_1467_;
v___y_1457_ = v___y_1468_;
v___y_1458_ = v___y_1470_;
v___y_1459_ = v___y_1469_;
v___y_1460_ = v___y_1471_;
v___y_1461_ = v_val_1475_;
goto v___jp_1453_;
}
}
v___jp_1477_:
{
if (v___y_1484_ == 0)
{
v___y_1465_ = v___y_1481_;
v___y_1466_ = v___y_1478_;
v___y_1467_ = v___y_1479_;
v___y_1468_ = v___y_1480_;
v___y_1469_ = v___y_1482_;
v___y_1470_ = v___y_1483_;
v___y_1471_ = v_severity_1385_;
goto v___jp_1464_;
}
else
{
v___y_1465_ = v___y_1481_;
v___y_1466_ = v___y_1478_;
v___y_1467_ = v___y_1479_;
v___y_1468_ = v___y_1480_;
v___y_1469_ = v___y_1482_;
v___y_1470_ = v___y_1483_;
v___y_1471_ = v___x_1476_;
goto v___jp_1464_;
}
}
v___jp_1485_:
{
if (v___y_1486_ == 0)
{
lean_object* v_fileName_1487_; lean_object* v_fileMap_1488_; lean_object* v_options_1489_; lean_object* v_ref_1490_; uint8_t v_suppressElabErrors_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___f_1494_; uint8_t v___x_1495_; uint8_t v___x_1496_; 
v_fileName_1487_ = lean_ctor_get(v___y_1389_, 0);
v_fileMap_1488_ = lean_ctor_get(v___y_1389_, 1);
v_options_1489_ = lean_ctor_get(v___y_1389_, 2);
v_ref_1490_ = lean_ctor_get(v___y_1389_, 5);
v_suppressElabErrors_1491_ = lean_ctor_get_uint8(v___y_1389_, sizeof(void*)*14 + 1);
v___x_1492_ = lean_box(v___y_1486_);
v___x_1493_ = lean_box(v_suppressElabErrors_1491_);
v___f_1494_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1494_, 0, v___x_1492_);
lean_closure_set(v___f_1494_, 1, v___x_1493_);
v___x_1495_ = 1;
v___x_1496_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1385_, v___x_1495_);
if (v___x_1496_ == 0)
{
v___y_1478_ = v_ref_1490_;
v___y_1479_ = v_fileMap_1488_;
v___y_1480_ = v_suppressElabErrors_1491_;
v___y_1481_ = v___f_1494_;
v___y_1482_ = v_fileName_1487_;
v___y_1483_ = v___y_1486_;
v___y_1484_ = v___x_1496_;
goto v___jp_1477_;
}
else
{
lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1497_ = l_Lean_warningAsError;
v___x_1498_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_1489_, v___x_1497_);
v___y_1478_ = v_ref_1490_;
v___y_1479_ = v_fileMap_1488_;
v___y_1480_ = v_suppressElabErrors_1491_;
v___y_1481_ = v___f_1494_;
v___y_1482_ = v_fileName_1487_;
v___y_1483_ = v___y_1486_;
v___y_1484_ = v___x_1498_;
goto v___jp_1477_;
}
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_dec_ref(v_msgData_1384_);
v___x_1499_ = lean_box(0);
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
return v___x_1500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_1503_, lean_object* v_msgData_1504_, lean_object* v_severity_1505_, lean_object* v_isSilent_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
uint8_t v_severity_boxed_1512_; uint8_t v_isSilent_boxed_1513_; lean_object* v_res_1514_; 
v_severity_boxed_1512_ = lean_unbox(v_severity_1505_);
v_isSilent_boxed_1513_ = lean_unbox(v_isSilent_1506_);
v_res_1514_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(v_ref_1503_, v_msgData_1504_, v_severity_boxed_1512_, v_isSilent_boxed_1513_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v_ref_1503_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(lean_object* v_msgData_1515_, uint8_t v_severity_1516_, uint8_t v_isSilent_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_ref_1523_; lean_object* v___x_1524_; 
v_ref_1523_ = lean_ctor_get(v___y_1520_, 5);
v___x_1524_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(v_ref_1523_, v_msgData_1515_, v_severity_1516_, v_isSilent_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0___boxed(lean_object* v_msgData_1525_, lean_object* v_severity_1526_, lean_object* v_isSilent_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
uint8_t v_severity_boxed_1533_; uint8_t v_isSilent_boxed_1534_; lean_object* v_res_1535_; 
v_severity_boxed_1533_ = lean_unbox(v_severity_1526_);
v_isSilent_boxed_1534_ = lean_unbox(v_isSilent_1527_);
v_res_1535_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(v_msgData_1525_, v_severity_boxed_1533_, v_isSilent_boxed_1534_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(lean_object* v_msgData_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
uint8_t v___x_1542_; uint8_t v___x_1543_; lean_object* v___x_1544_; 
v___x_1542_ = 1;
v___x_1543_ = 0;
v___x_1544_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(v_msgData_1536_, v___x_1542_, v___x_1543_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0___boxed(lean_object* v_msgData_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(v_msgData_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
return v_res_1551_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2(void){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1));
v___x_1556_ = l_Lean_MessageData_ofFormat(v___x_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(lean_object* v_config_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_){
_start:
{
uint8_t v_leave_1563_; 
v_leave_1563_ = lean_ctor_get_uint8(v_config_1557_, sizeof(void*)*1 + 1);
if (v_leave_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1564_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2);
v___x_1565_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(v___x_1564_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_);
return v___x_1565_;
}
else
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1566_ = lean_box(0);
v___x_1567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1566_);
return v___x_1567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___boxed(lean_object* v_config_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(v_config_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
lean_dec_ref(v_config_1568_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(lean_object* v_x_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0));
v___x_1589_ = l_Lean_Meta_Sym_Simp_simpArrowTelescope(v___x_1588_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed(lean_object* v_x_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(v_x_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(lean_object* v___f_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v___x_1615_; 
lean_inc_ref(v___y_1604_);
v___x_1615_ = l_Lean_Meta_Sym_Simp_simpControl(v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1617_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
v___x_1617_ = lean_box(0);
if (lean_obj_tag(v_a_1616_) == 0)
{
uint8_t v_done_1618_; 
v_done_1618_ = lean_ctor_get_uint8(v_a_1616_, 0);
if (v_done_1618_ == 0)
{
uint8_t v_contextDependent_1619_; lean_object* v___x_1620_; 
lean_dec_ref_known(v___x_1615_, 1);
v_contextDependent_1619_ = lean_ctor_get_uint8(v_a_1616_, 1);
lean_dec_ref_known(v_a_1616_, 0);
v___x_1620_ = lean_apply_12(v___f_1603_, v___x_1617_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, lean_box(0));
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; uint8_t v___y_1623_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
if (v_contextDependent_1619_ == 0)
{
lean_dec(v_a_1621_);
return v___x_1620_;
}
else
{
if (lean_obj_tag(v_a_1621_) == 0)
{
uint8_t v_contextDependent_1633_; 
v_contextDependent_1633_ = lean_ctor_get_uint8(v_a_1621_, 1);
v___y_1623_ = v_contextDependent_1633_;
goto v___jp_1622_;
}
else
{
uint8_t v_contextDependent_1634_; 
v_contextDependent_1634_ = lean_ctor_get_uint8(v_a_1621_, sizeof(void*)*2 + 1);
v___y_1623_ = v_contextDependent_1634_;
goto v___jp_1622_;
}
}
v___jp_1622_:
{
if (v___y_1623_ == 0)
{
lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1631_; 
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1631_ == 0)
{
lean_object* v_unused_1632_; 
v_unused_1632_ = lean_ctor_get(v___x_1620_, 0);
lean_dec(v_unused_1632_);
v___x_1625_ = v___x_1620_;
v_isShared_1626_ = v_isSharedCheck_1631_;
goto v_resetjp_1624_;
}
else
{
lean_dec(v___x_1620_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1631_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1627_; lean_object* v___x_1629_; 
v___x_1627_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1621_);
if (v_isShared_1626_ == 0)
{
lean_ctor_set(v___x_1625_, 0, v___x_1627_);
v___x_1629_ = v___x_1625_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v___x_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
else
{
lean_dec(v_a_1621_);
return v___x_1620_;
}
}
}
else
{
return v___x_1620_;
}
}
else
{
lean_dec_ref_known(v_a_1616_, 0);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec_ref(v___f_1603_);
return v___x_1615_;
}
}
else
{
uint8_t v_done_1635_; 
v_done_1635_ = lean_ctor_get_uint8(v_a_1616_, sizeof(void*)*2);
if (v_done_1635_ == 0)
{
lean_object* v_e_x27_1636_; lean_object* v_proof_1637_; uint8_t v_contextDependent_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1688_; 
lean_dec_ref_known(v___x_1615_, 1);
v_e_x27_1636_ = lean_ctor_get(v_a_1616_, 0);
v_proof_1637_ = lean_ctor_get(v_a_1616_, 1);
v_contextDependent_1638_ = lean_ctor_get_uint8(v_a_1616_, sizeof(void*)*2 + 1);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_a_1616_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1640_ = v_a_1616_;
v_isShared_1641_ = v_isSharedCheck_1688_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_proof_1637_);
lean_inc(v_e_x27_1636_);
lean_dec(v_a_1616_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1688_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1642_; 
lean_inc(v___y_1613_);
lean_inc_ref(v___y_1612_);
lean_inc(v___y_1611_);
lean_inc_ref(v___y_1610_);
lean_inc(v___y_1609_);
lean_inc_ref(v_e_x27_1636_);
v___x_1642_ = lean_apply_12(v___f_1603_, v___x_1617_, v_e_x27_1636_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, lean_box(0));
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1687_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1687_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1687_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
if (lean_obj_tag(v_a_1643_) == 0)
{
uint8_t v_done_1647_; uint8_t v_contextDependent_1648_; uint8_t v___y_1650_; 
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1604_);
v_done_1647_ = lean_ctor_get_uint8(v_a_1643_, 0);
v_contextDependent_1648_ = lean_ctor_get_uint8(v_a_1643_, 1);
lean_dec_ref_known(v_a_1643_, 0);
if (v_contextDependent_1638_ == 0)
{
v___y_1650_ = v_contextDependent_1648_;
goto v___jp_1649_;
}
else
{
v___y_1650_ = v_contextDependent_1638_;
goto v___jp_1649_;
}
v___jp_1649_:
{
lean_object* v___x_1652_; 
if (v_isShared_1641_ == 0)
{
v___x_1652_ = v___x_1640_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_e_x27_1636_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v_proof_1637_);
v___x_1652_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
lean_object* v___x_1654_; 
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*2, v_done_1647_);
lean_ctor_set_uint8(v___x_1652_, sizeof(void*)*2 + 1, v___y_1650_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1652_);
v___x_1654_ = v___x_1645_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1652_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
else
{
lean_object* v_e_x27_1657_; lean_object* v_proof_1658_; uint8_t v_done_1659_; uint8_t v_contextDependent_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1686_; 
lean_del_object(v___x_1645_);
lean_del_object(v___x_1640_);
v_e_x27_1657_ = lean_ctor_get(v_a_1643_, 0);
v_proof_1658_ = lean_ctor_get(v_a_1643_, 1);
v_done_1659_ = lean_ctor_get_uint8(v_a_1643_, sizeof(void*)*2);
v_contextDependent_1660_ = lean_ctor_get_uint8(v_a_1643_, sizeof(void*)*2 + 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_a_1643_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1662_ = v_a_1643_;
v_isShared_1663_ = v_isSharedCheck_1686_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_proof_1658_);
lean_inc(v_e_x27_1657_);
lean_dec(v_a_1643_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1686_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; 
lean_inc_ref(v_e_x27_1657_);
v___x_1664_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1604_, v_e_x27_1636_, v_proof_1637_, v_e_x27_1657_, v_proof_1658_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_object* v_a_1665_; lean_object* v___x_1667_; uint8_t v_isShared_1668_; uint8_t v_isSharedCheck_1677_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1677_ == 0)
{
v___x_1667_ = v___x_1664_;
v_isShared_1668_ = v_isSharedCheck_1677_;
goto v_resetjp_1666_;
}
else
{
lean_inc(v_a_1665_);
lean_dec(v___x_1664_);
v___x_1667_ = lean_box(0);
v_isShared_1668_ = v_isSharedCheck_1677_;
goto v_resetjp_1666_;
}
v_resetjp_1666_:
{
uint8_t v___y_1670_; 
if (v_contextDependent_1638_ == 0)
{
v___y_1670_ = v_contextDependent_1660_;
goto v___jp_1669_;
}
else
{
v___y_1670_ = v_contextDependent_1638_;
goto v___jp_1669_;
}
v___jp_1669_:
{
lean_object* v___x_1672_; 
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 1, v_a_1665_);
v___x_1672_ = v___x_1662_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1676_; 
v_reuseFailAlloc_1676_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1676_, 0, v_e_x27_1657_);
lean_ctor_set(v_reuseFailAlloc_1676_, 1, v_a_1665_);
lean_ctor_set_uint8(v_reuseFailAlloc_1676_, sizeof(void*)*2, v_done_1659_);
v___x_1672_ = v_reuseFailAlloc_1676_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1674_; 
lean_ctor_set_uint8(v___x_1672_, sizeof(void*)*2 + 1, v___y_1670_);
if (v_isShared_1668_ == 0)
{
lean_ctor_set(v___x_1667_, 0, v___x_1672_);
v___x_1674_ = v___x_1667_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_del_object(v___x_1662_);
lean_dec_ref(v_e_x27_1657_);
v_a_1678_ = lean_ctor_get(v___x_1664_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1664_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1664_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1664_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1640_);
lean_dec_ref(v_proof_1637_);
lean_dec_ref(v_e_x27_1636_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1604_);
return v___x_1642_;
}
}
}
else
{
lean_dec_ref_known(v_a_1616_, 2);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec_ref(v___f_1603_);
return v___x_1615_;
}
}
}
else
{
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec_ref(v___f_1603_);
return v___x_1615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed(lean_object* v___f_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(v___f_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(lean_object* v_a_1703_, lean_object* v_x_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1716_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0));
v___x_1717_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_1703_, v___x_1716_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed(lean_object* v_a_1718_, lean_object* v_x_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v_res_1731_; 
v_res_1731_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(v_a_1718_, v_x_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec(v___y_1723_);
lean_dec_ref(v___y_1722_);
lean_dec(v___y_1721_);
lean_dec_ref(v_a_1718_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(lean_object* v___f_1732_, lean_object* v___x_1733_, lean_object* v___f_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_){
_start:
{
uint8_t v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; uint8_t v___y_1750_; lean_object* v___y_1754_; uint8_t v___y_1755_; lean_object* v___y_1756_; uint8_t v___y_1757_; lean_object* v___y_1761_; lean_object* v_e_x27_1762_; lean_object* v_proof_1763_; uint8_t v_done_1764_; uint8_t v_contextDependent_1765_; lean_object* v___y_1788_; lean_object* v___y_1789_; uint8_t v___y_1790_; lean_object* v___y_1794_; lean_object* v_a_1795_; lean_object* v___y_1808_; lean_object* v___x_1810_; 
lean_inc_ref(v___y_1735_);
v___x_1810_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_1733_, v___y_1735_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1812_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_a_1811_);
v___x_1812_ = lean_box(0);
if (lean_obj_tag(v_a_1811_) == 0)
{
uint8_t v_done_1813_; 
v_done_1813_ = lean_ctor_get_uint8(v_a_1811_, 0);
if (v_done_1813_ == 0)
{
uint8_t v_contextDependent_1814_; lean_object* v___x_1815_; 
lean_dec_ref_known(v___x_1810_, 1);
v_contextDependent_1814_ = lean_ctor_get_uint8(v_a_1811_, 1);
lean_dec_ref_known(v_a_1811_, 0);
lean_inc(v___y_1744_);
lean_inc_ref(v___y_1743_);
lean_inc(v___y_1742_);
lean_inc_ref(v___y_1741_);
lean_inc(v___y_1740_);
lean_inc_ref(v___y_1739_);
lean_inc(v___y_1738_);
lean_inc_ref(v___y_1737_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
v___x_1815_ = lean_apply_12(v___f_1734_, v___x_1812_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, lean_box(0));
if (lean_obj_tag(v___x_1815_) == 0)
{
lean_object* v_a_1816_; uint8_t v___y_1818_; 
v_a_1816_ = lean_ctor_get(v___x_1815_, 0);
lean_inc(v_a_1816_);
if (v_contextDependent_1814_ == 0)
{
v___y_1794_ = v___x_1815_;
v_a_1795_ = v_a_1816_;
goto v___jp_1793_;
}
else
{
if (lean_obj_tag(v_a_1816_) == 0)
{
uint8_t v_contextDependent_1828_; 
v_contextDependent_1828_ = lean_ctor_get_uint8(v_a_1816_, 1);
v___y_1818_ = v_contextDependent_1828_;
goto v___jp_1817_;
}
else
{
uint8_t v_contextDependent_1829_; 
v_contextDependent_1829_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*2 + 1);
v___y_1818_ = v_contextDependent_1829_;
goto v___jp_1817_;
}
}
v___jp_1817_:
{
if (v___y_1818_ == 0)
{
lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1826_; 
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1815_);
if (v_isSharedCheck_1826_ == 0)
{
lean_object* v_unused_1827_; 
v_unused_1827_ = lean_ctor_get(v___x_1815_, 0);
lean_dec(v_unused_1827_);
v___x_1820_ = v___x_1815_;
v_isShared_1821_ = v_isSharedCheck_1826_;
goto v_resetjp_1819_;
}
else
{
lean_dec(v___x_1815_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1826_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1822_; lean_object* v___x_1824_; 
v___x_1822_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1816_);
lean_inc_ref(v___x_1822_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v___x_1822_);
v___x_1824_ = v___x_1820_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
v___y_1794_ = v___x_1824_;
v_a_1795_ = v___x_1822_;
goto v___jp_1793_;
}
}
}
else
{
v___y_1794_ = v___x_1815_;
v_a_1795_ = v_a_1816_;
goto v___jp_1793_;
}
}
}
else
{
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___f_1732_);
return v___x_1815_;
}
}
else
{
lean_dec_ref_known(v_a_1811_, 0);
lean_dec_ref(v___f_1734_);
v___y_1808_ = v___x_1810_;
goto v___jp_1807_;
}
}
else
{
uint8_t v_done_1830_; 
v_done_1830_ = lean_ctor_get_uint8(v_a_1811_, sizeof(void*)*2);
if (v_done_1830_ == 0)
{
lean_object* v_e_x27_1831_; lean_object* v_proof_1832_; uint8_t v_contextDependent_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1883_; 
lean_dec_ref_known(v___x_1810_, 1);
v_e_x27_1831_ = lean_ctor_get(v_a_1811_, 0);
v_proof_1832_ = lean_ctor_get(v_a_1811_, 1);
v_contextDependent_1833_ = lean_ctor_get_uint8(v_a_1811_, sizeof(void*)*2 + 1);
v_isSharedCheck_1883_ = !lean_is_exclusive(v_a_1811_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1835_ = v_a_1811_;
v_isShared_1836_ = v_isSharedCheck_1883_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_proof_1832_);
lean_inc(v_e_x27_1831_);
lean_dec(v_a_1811_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1883_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1837_; 
lean_inc(v___y_1744_);
lean_inc_ref(v___y_1743_);
lean_inc(v___y_1742_);
lean_inc_ref(v___y_1741_);
lean_inc(v___y_1740_);
lean_inc_ref(v___y_1739_);
lean_inc(v___y_1738_);
lean_inc_ref(v___y_1737_);
lean_inc(v___y_1736_);
lean_inc_ref(v_e_x27_1831_);
v___x_1837_ = lean_apply_12(v___f_1734_, v___x_1812_, v_e_x27_1831_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, lean_box(0));
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1882_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1840_ = v___x_1837_;
v_isShared_1841_ = v_isSharedCheck_1882_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1837_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1882_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
if (lean_obj_tag(v_a_1838_) == 0)
{
uint8_t v_done_1842_; uint8_t v_contextDependent_1843_; uint8_t v___y_1845_; 
v_done_1842_ = lean_ctor_get_uint8(v_a_1838_, 0);
v_contextDependent_1843_ = lean_ctor_get_uint8(v_a_1838_, 1);
lean_dec_ref_known(v_a_1838_, 0);
if (v_contextDependent_1833_ == 0)
{
v___y_1845_ = v_contextDependent_1843_;
goto v___jp_1844_;
}
else
{
v___y_1845_ = v_contextDependent_1833_;
goto v___jp_1844_;
}
v___jp_1844_:
{
lean_object* v___x_1847_; 
lean_inc_ref(v_proof_1832_);
lean_inc_ref(v_e_x27_1831_);
if (v_isShared_1836_ == 0)
{
v___x_1847_ = v___x_1835_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_e_x27_1831_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_proof_1832_);
v___x_1847_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1849_; 
lean_ctor_set_uint8(v___x_1847_, sizeof(void*)*2, v_done_1842_);
lean_ctor_set_uint8(v___x_1847_, sizeof(void*)*2 + 1, v___y_1845_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 0, v___x_1847_);
v___x_1849_ = v___x_1840_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
v___y_1761_ = v___x_1849_;
v_e_x27_1762_ = v_e_x27_1831_;
v_proof_1763_ = v_proof_1832_;
v_done_1764_ = v_done_1842_;
v_contextDependent_1765_ = v___y_1845_;
goto v___jp_1760_;
}
}
}
}
else
{
lean_object* v_e_x27_1852_; lean_object* v_proof_1853_; uint8_t v_done_1854_; uint8_t v_contextDependent_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1881_; 
lean_del_object(v___x_1840_);
lean_del_object(v___x_1835_);
v_e_x27_1852_ = lean_ctor_get(v_a_1838_, 0);
v_proof_1853_ = lean_ctor_get(v_a_1838_, 1);
v_done_1854_ = lean_ctor_get_uint8(v_a_1838_, sizeof(void*)*2);
v_contextDependent_1855_ = lean_ctor_get_uint8(v_a_1838_, sizeof(void*)*2 + 1);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_a_1838_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1857_ = v_a_1838_;
v_isShared_1858_ = v_isSharedCheck_1881_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_proof_1853_);
lean_inc(v_e_x27_1852_);
lean_dec(v_a_1838_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1881_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1859_; 
lean_inc_ref(v_e_x27_1852_);
lean_inc_ref(v___y_1735_);
v___x_1859_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1735_, v_e_x27_1831_, v_proof_1832_, v_e_x27_1852_, v_proof_1853_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1872_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1872_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1872_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1872_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
uint8_t v___y_1865_; 
if (v_contextDependent_1833_ == 0)
{
v___y_1865_ = v_contextDependent_1855_;
goto v___jp_1864_;
}
else
{
v___y_1865_ = v_contextDependent_1833_;
goto v___jp_1864_;
}
v___jp_1864_:
{
lean_object* v___x_1867_; 
lean_inc(v_a_1860_);
lean_inc_ref(v_e_x27_1852_);
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v_a_1860_);
v___x_1867_ = v___x_1857_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v_e_x27_1852_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v_a_1860_);
lean_ctor_set_uint8(v_reuseFailAlloc_1871_, sizeof(void*)*2, v_done_1854_);
v___x_1867_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
lean_ctor_set_uint8(v___x_1867_, sizeof(void*)*2 + 1, v___y_1865_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1867_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
v___y_1761_ = v___x_1869_;
v_e_x27_1762_ = v_e_x27_1852_;
v_proof_1763_ = v_a_1860_;
v_done_1764_ = v_done_1854_;
v_contextDependent_1765_ = v___y_1865_;
goto v___jp_1760_;
}
}
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
lean_del_object(v___x_1857_);
lean_dec_ref(v_e_x27_1852_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___f_1732_);
v_a_1873_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1859_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1859_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1835_);
lean_dec_ref(v_proof_1832_);
lean_dec_ref(v_e_x27_1831_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___f_1732_);
return v___x_1837_;
}
}
}
else
{
lean_dec_ref_known(v_a_1811_, 2);
lean_dec_ref(v___f_1734_);
v___y_1808_ = v___x_1810_;
goto v___jp_1807_;
}
}
}
else
{
lean_dec_ref(v___f_1734_);
v___y_1808_ = v___x_1810_;
goto v___jp_1807_;
}
v___jp_1746_:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1751_, 0, v___y_1749_);
lean_ctor_set(v___x_1751_, 1, v___y_1748_);
lean_ctor_set_uint8(v___x_1751_, sizeof(void*)*2, v___y_1747_);
lean_ctor_set_uint8(v___x_1751_, sizeof(void*)*2 + 1, v___y_1750_);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
return v___x_1752_;
}
v___jp_1753_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1758_, 0, v___y_1756_);
lean_ctor_set(v___x_1758_, 1, v___y_1754_);
lean_ctor_set_uint8(v___x_1758_, sizeof(void*)*2, v___y_1755_);
lean_ctor_set_uint8(v___x_1758_, sizeof(void*)*2 + 1, v___y_1757_);
v___x_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1758_);
return v___x_1759_;
}
v___jp_1760_:
{
if (v_done_1764_ == 0)
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
lean_dec_ref(v___y_1761_);
v___x_1766_ = lean_box(0);
lean_inc(v___y_1744_);
lean_inc_ref(v___y_1743_);
lean_inc(v___y_1742_);
lean_inc_ref(v___y_1741_);
lean_inc(v___y_1740_);
lean_inc_ref(v_e_x27_1762_);
v___x_1767_ = lean_apply_12(v___f_1732_, v___x_1766_, v_e_x27_1762_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, lean_box(0));
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
lean_inc(v_a_1768_);
lean_dec_ref_known(v___x_1767_, 1);
if (lean_obj_tag(v_a_1768_) == 0)
{
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1735_);
if (v_contextDependent_1765_ == 0)
{
uint8_t v_done_1769_; uint8_t v_contextDependent_1770_; 
v_done_1769_ = lean_ctor_get_uint8(v_a_1768_, 0);
v_contextDependent_1770_ = lean_ctor_get_uint8(v_a_1768_, 1);
lean_dec_ref_known(v_a_1768_, 0);
v___y_1747_ = v_done_1769_;
v___y_1748_ = v_proof_1763_;
v___y_1749_ = v_e_x27_1762_;
v___y_1750_ = v_contextDependent_1770_;
goto v___jp_1746_;
}
else
{
uint8_t v_done_1771_; 
v_done_1771_ = lean_ctor_get_uint8(v_a_1768_, 0);
lean_dec_ref_known(v_a_1768_, 0);
v___y_1747_ = v_done_1771_;
v___y_1748_ = v_proof_1763_;
v___y_1749_ = v_e_x27_1762_;
v___y_1750_ = v_contextDependent_1765_;
goto v___jp_1746_;
}
}
else
{
lean_object* v_e_x27_1772_; lean_object* v_proof_1773_; uint8_t v_done_1774_; uint8_t v_contextDependent_1775_; lean_object* v___x_1776_; 
v_e_x27_1772_ = lean_ctor_get(v_a_1768_, 0);
lean_inc_ref_n(v_e_x27_1772_, 2);
v_proof_1773_ = lean_ctor_get(v_a_1768_, 1);
lean_inc_ref(v_proof_1773_);
v_done_1774_ = lean_ctor_get_uint8(v_a_1768_, sizeof(void*)*2);
v_contextDependent_1775_ = lean_ctor_get_uint8(v_a_1768_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1768_, 2);
v___x_1776_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1735_, v_e_x27_1762_, v_proof_1763_, v_e_x27_1772_, v_proof_1773_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
if (lean_obj_tag(v___x_1776_) == 0)
{
if (v_contextDependent_1765_ == 0)
{
lean_object* v_a_1777_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1777_);
lean_dec_ref_known(v___x_1776_, 1);
v___y_1754_ = v_a_1777_;
v___y_1755_ = v_done_1774_;
v___y_1756_ = v_e_x27_1772_;
v___y_1757_ = v_contextDependent_1775_;
goto v___jp_1753_;
}
else
{
lean_object* v_a_1778_; 
v_a_1778_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1778_);
lean_dec_ref_known(v___x_1776_, 1);
v___y_1754_ = v_a_1778_;
v___y_1755_ = v_done_1774_;
v___y_1756_ = v_e_x27_1772_;
v___y_1757_ = v_contextDependent_1765_;
goto v___jp_1753_;
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
lean_dec_ref(v_e_x27_1772_);
v_a_1779_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1776_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1776_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
else
{
lean_dec_ref(v_proof_1763_);
lean_dec_ref(v_e_x27_1762_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1735_);
return v___x_1767_;
}
}
else
{
lean_dec_ref(v_proof_1763_);
lean_dec_ref(v_e_x27_1762_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___f_1732_);
return v___y_1761_;
}
}
v___jp_1787_:
{
if (v___y_1790_ == 0)
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
lean_dec_ref(v___y_1789_);
v___x_1791_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1788_);
v___x_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1791_);
return v___x_1792_;
}
else
{
lean_dec_ref(v___y_1788_);
return v___y_1789_;
}
}
v___jp_1793_:
{
if (lean_obj_tag(v_a_1795_) == 0)
{
uint8_t v_done_1796_; 
v_done_1796_ = lean_ctor_get_uint8(v_a_1795_, 0);
if (v_done_1796_ == 0)
{
uint8_t v_contextDependent_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
lean_dec_ref(v___y_1794_);
v_contextDependent_1797_ = lean_ctor_get_uint8(v_a_1795_, 1);
lean_dec_ref_known(v_a_1795_, 0);
v___x_1798_ = lean_box(0);
v___x_1799_ = lean_apply_12(v___f_1732_, v___x_1798_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, lean_box(0));
if (lean_obj_tag(v___x_1799_) == 0)
{
if (v_contextDependent_1797_ == 0)
{
return v___x_1799_;
}
else
{
lean_object* v_a_1800_; 
v_a_1800_ = lean_ctor_get(v___x_1799_, 0);
lean_inc(v_a_1800_);
if (lean_obj_tag(v_a_1800_) == 0)
{
uint8_t v_contextDependent_1801_; 
v_contextDependent_1801_ = lean_ctor_get_uint8(v_a_1800_, 1);
v___y_1788_ = v_a_1800_;
v___y_1789_ = v___x_1799_;
v___y_1790_ = v_contextDependent_1801_;
goto v___jp_1787_;
}
else
{
uint8_t v_contextDependent_1802_; 
v_contextDependent_1802_ = lean_ctor_get_uint8(v_a_1800_, sizeof(void*)*2 + 1);
v___y_1788_ = v_a_1800_;
v___y_1789_ = v___x_1799_;
v___y_1790_ = v_contextDependent_1802_;
goto v___jp_1787_;
}
}
}
else
{
return v___x_1799_;
}
}
else
{
lean_dec_ref_known(v_a_1795_, 0);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___f_1732_);
return v___y_1794_;
}
}
else
{
lean_object* v_e_x27_1803_; lean_object* v_proof_1804_; uint8_t v_done_1805_; uint8_t v_contextDependent_1806_; 
v_e_x27_1803_ = lean_ctor_get(v_a_1795_, 0);
lean_inc_ref(v_e_x27_1803_);
v_proof_1804_ = lean_ctor_get(v_a_1795_, 1);
lean_inc_ref(v_proof_1804_);
v_done_1805_ = lean_ctor_get_uint8(v_a_1795_, sizeof(void*)*2);
v_contextDependent_1806_ = lean_ctor_get_uint8(v_a_1795_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1795_, 2);
v___y_1761_ = v___y_1794_;
v_e_x27_1762_ = v_e_x27_1803_;
v_proof_1763_ = v_proof_1804_;
v_done_1764_ = v_done_1805_;
v_contextDependent_1765_ = v_contextDependent_1806_;
goto v___jp_1760_;
}
}
v___jp_1807_:
{
if (lean_obj_tag(v___y_1808_) == 0)
{
lean_object* v_a_1809_; 
v_a_1809_ = lean_ctor_get(v___y_1808_, 0);
lean_inc(v_a_1809_);
v___y_1794_ = v___y_1808_;
v_a_1795_ = v_a_1809_;
goto v___jp_1793_;
}
else
{
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec_ref(v___f_1732_);
return v___y_1808_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed(lean_object* v___f_1884_, lean_object* v___x_1885_, lean_object* v___f_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(v___f_1884_, v___x_1885_, v___f_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___x_1885_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(lean_object* v___x_1899_, lean_object* v___f_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v___x_1912_; 
lean_inc_ref(v___y_1901_);
v___x_1912_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_1899_, v___y_1901_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
v___x_1914_ = lean_box(0);
if (lean_obj_tag(v_a_1913_) == 0)
{
uint8_t v_done_1915_; 
v_done_1915_ = lean_ctor_get_uint8(v_a_1913_, 0);
if (v_done_1915_ == 0)
{
uint8_t v_contextDependent_1916_; lean_object* v___x_1917_; 
lean_dec_ref_known(v___x_1912_, 1);
v_contextDependent_1916_ = lean_ctor_get_uint8(v_a_1913_, 1);
lean_dec_ref_known(v_a_1913_, 0);
v___x_1917_ = lean_apply_12(v___f_1900_, v___x_1914_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, lean_box(0));
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; uint8_t v___y_1920_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
if (v_contextDependent_1916_ == 0)
{
lean_dec(v_a_1918_);
return v___x_1917_;
}
else
{
if (lean_obj_tag(v_a_1918_) == 0)
{
uint8_t v_contextDependent_1930_; 
v_contextDependent_1930_ = lean_ctor_get_uint8(v_a_1918_, 1);
v___y_1920_ = v_contextDependent_1930_;
goto v___jp_1919_;
}
else
{
uint8_t v_contextDependent_1931_; 
v_contextDependent_1931_ = lean_ctor_get_uint8(v_a_1918_, sizeof(void*)*2 + 1);
v___y_1920_ = v_contextDependent_1931_;
goto v___jp_1919_;
}
}
v___jp_1919_:
{
if (v___y_1920_ == 0)
{
lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1928_; 
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1928_ == 0)
{
lean_object* v_unused_1929_; 
v_unused_1929_ = lean_ctor_get(v___x_1917_, 0);
lean_dec(v_unused_1929_);
v___x_1922_ = v___x_1917_;
v_isShared_1923_ = v_isSharedCheck_1928_;
goto v_resetjp_1921_;
}
else
{
lean_dec(v___x_1917_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1928_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1924_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1918_);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1924_);
v___x_1926_ = v___x_1922_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
else
{
lean_dec(v_a_1918_);
return v___x_1917_;
}
}
}
else
{
return v___x_1917_;
}
}
else
{
lean_dec_ref_known(v_a_1913_, 0);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec_ref(v___f_1900_);
return v___x_1912_;
}
}
else
{
uint8_t v_done_1932_; 
v_done_1932_ = lean_ctor_get_uint8(v_a_1913_, sizeof(void*)*2);
if (v_done_1932_ == 0)
{
lean_object* v_e_x27_1933_; lean_object* v_proof_1934_; uint8_t v_contextDependent_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1985_; 
lean_dec_ref_known(v___x_1912_, 1);
v_e_x27_1933_ = lean_ctor_get(v_a_1913_, 0);
v_proof_1934_ = lean_ctor_get(v_a_1913_, 1);
v_contextDependent_1935_ = lean_ctor_get_uint8(v_a_1913_, sizeof(void*)*2 + 1);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_a_1913_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1937_ = v_a_1913_;
v_isShared_1938_ = v_isSharedCheck_1985_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_proof_1934_);
lean_inc(v_e_x27_1933_);
lean_dec(v_a_1913_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1985_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; 
lean_inc(v___y_1910_);
lean_inc_ref(v___y_1909_);
lean_inc(v___y_1908_);
lean_inc_ref(v___y_1907_);
lean_inc(v___y_1906_);
lean_inc_ref(v_e_x27_1933_);
v___x_1939_ = lean_apply_12(v___f_1900_, v___x_1914_, v_e_x27_1933_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, lean_box(0));
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1984_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1942_ = v___x_1939_;
v_isShared_1943_ = v_isSharedCheck_1984_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1939_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1984_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
if (lean_obj_tag(v_a_1940_) == 0)
{
uint8_t v_done_1944_; uint8_t v_contextDependent_1945_; uint8_t v___y_1947_; 
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1901_);
v_done_1944_ = lean_ctor_get_uint8(v_a_1940_, 0);
v_contextDependent_1945_ = lean_ctor_get_uint8(v_a_1940_, 1);
lean_dec_ref_known(v_a_1940_, 0);
if (v_contextDependent_1935_ == 0)
{
v___y_1947_ = v_contextDependent_1945_;
goto v___jp_1946_;
}
else
{
v___y_1947_ = v_contextDependent_1935_;
goto v___jp_1946_;
}
v___jp_1946_:
{
lean_object* v___x_1949_; 
if (v_isShared_1938_ == 0)
{
v___x_1949_ = v___x_1937_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_e_x27_1933_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v_proof_1934_);
v___x_1949_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
lean_object* v___x_1951_; 
lean_ctor_set_uint8(v___x_1949_, sizeof(void*)*2, v_done_1944_);
lean_ctor_set_uint8(v___x_1949_, sizeof(void*)*2 + 1, v___y_1947_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 0, v___x_1949_);
v___x_1951_ = v___x_1942_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
lean_object* v_e_x27_1954_; lean_object* v_proof_1955_; uint8_t v_done_1956_; uint8_t v_contextDependent_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1983_; 
lean_del_object(v___x_1942_);
lean_del_object(v___x_1937_);
v_e_x27_1954_ = lean_ctor_get(v_a_1940_, 0);
v_proof_1955_ = lean_ctor_get(v_a_1940_, 1);
v_done_1956_ = lean_ctor_get_uint8(v_a_1940_, sizeof(void*)*2);
v_contextDependent_1957_ = lean_ctor_get_uint8(v_a_1940_, sizeof(void*)*2 + 1);
v_isSharedCheck_1983_ = !lean_is_exclusive(v_a_1940_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1959_ = v_a_1940_;
v_isShared_1960_ = v_isSharedCheck_1983_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_proof_1955_);
lean_inc(v_e_x27_1954_);
lean_dec(v_a_1940_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1983_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; 
lean_inc_ref(v_e_x27_1954_);
v___x_1961_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1901_, v_e_x27_1933_, v_proof_1934_, v_e_x27_1954_, v_proof_1955_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1974_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1974_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
uint8_t v___y_1967_; 
if (v_contextDependent_1935_ == 0)
{
v___y_1967_ = v_contextDependent_1957_;
goto v___jp_1966_;
}
else
{
v___y_1967_ = v_contextDependent_1935_;
goto v___jp_1966_;
}
v___jp_1966_:
{
lean_object* v___x_1969_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 1, v_a_1962_);
v___x_1969_ = v___x_1959_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_e_x27_1954_);
lean_ctor_set(v_reuseFailAlloc_1973_, 1, v_a_1962_);
lean_ctor_set_uint8(v_reuseFailAlloc_1973_, sizeof(void*)*2, v_done_1956_);
v___x_1969_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
lean_object* v___x_1971_; 
lean_ctor_set_uint8(v___x_1969_, sizeof(void*)*2 + 1, v___y_1967_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 0, v___x_1969_);
v___x_1971_ = v___x_1964_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_del_object(v___x_1959_);
lean_dec_ref(v_e_x27_1954_);
v_a_1975_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1961_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1961_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1937_);
lean_dec_ref(v_proof_1934_);
lean_dec_ref(v_e_x27_1933_);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1901_);
return v___x_1939_;
}
}
}
else
{
lean_dec_ref_known(v_a_1913_, 2);
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec_ref(v___f_1900_);
return v___x_1912_;
}
}
}
else
{
lean_dec(v___y_1910_);
lean_dec_ref(v___y_1909_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec_ref(v___y_1901_);
lean_dec_ref(v___f_1900_);
return v___x_1912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed(lean_object* v___x_1986_, lean_object* v___f_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(v___x_1986_, v___f_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___x_1986_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(lean_object* v_msg_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_ref_2006_; lean_object* v___x_2007_; lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2016_; 
v_ref_2006_ = lean_ctor_get(v___y_2003_, 5);
v___x_2007_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v_msg_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_);
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2010_ = v___x_2007_;
v_isShared_2011_ = v_isSharedCheck_2016_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_2007_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2016_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2014_; 
lean_inc(v_ref_2006_);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v_ref_2006_);
lean_ctor_set(v___x_2012_, 1, v_a_2008_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set_tag(v___x_2010_, 1);
lean_ctor_set(v___x_2010_, 0, v___x_2012_);
v___x_2014_ = v___x_2010_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v___x_2012_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg___boxed(lean_object* v_msg_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v_msg_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(lean_object* v_as_2024_, size_t v_sz_2025_, size_t v_i_2026_, lean_object* v_b_2027_){
_start:
{
uint8_t v___x_2029_; 
v___x_2029_ = lean_usize_dec_lt(v_i_2026_, v_sz_2025_);
if (v___x_2029_ == 0)
{
lean_object* v___x_2030_; 
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v_b_2027_);
return v___x_2030_;
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; 
v_a_2031_ = lean_array_uget_borrowed(v_as_2024_, v_i_2026_);
lean_inc(v_a_2031_);
v___x_2032_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_b_2027_, v_a_2031_);
v___x_2033_ = ((size_t)1ULL);
v___x_2034_ = lean_usize_add(v_i_2026_, v___x_2033_);
v_i_2026_ = v___x_2034_;
v_b_2027_ = v___x_2032_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg___boxed(lean_object* v_as_2036_, lean_object* v_sz_2037_, lean_object* v_i_2038_, lean_object* v_b_2039_, lean_object* v___y_2040_){
_start:
{
size_t v_sz_boxed_2041_; size_t v_i_boxed_2042_; lean_object* v_res_2043_; 
v_sz_boxed_2041_ = lean_unbox_usize(v_sz_2037_);
lean_dec(v_sz_2037_);
v_i_boxed_2042_ = lean_unbox_usize(v_i_2038_);
lean_dec(v_i_2038_);
v_res_2043_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_as_2036_, v_sz_boxed_2041_, v_i_boxed_2042_, v_b_2039_);
lean_dec_ref(v_as_2036_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(lean_object* v___x_2044_, lean_object* v_as_2045_, size_t v_sz_2046_, size_t v_i_2047_, lean_object* v_b_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_a_2055_; uint8_t v___x_2059_; 
v___x_2059_ = lean_usize_dec_lt(v_i_2047_, v_sz_2046_);
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v_b_2048_);
return v___x_2060_;
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v_a_2061_ = lean_array_uget_borrowed(v_as_2045_, v_i_2047_);
v___x_2062_ = l_Lean_TSyntax_getId(v_a_2061_);
v___x_2063_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_2044_, v___x_2062_);
lean_dec(v___x_2062_);
if (lean_obj_tag(v___x_2063_) == 1)
{
lean_object* v_val_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v_val_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_val_2064_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = l_Lean_LocalDecl_toExpr(v_val_2064_);
v___x_2066_ = l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(v___x_2065_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2068_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2067_);
lean_dec_ref_known(v___x_2066_, 1);
v___x_2068_ = lean_array_push(v_b_2048_, v_a_2067_);
v_a_2055_ = v___x_2068_;
goto v___jp_2054_;
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec_ref(v_b_2048_);
v_a_2069_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2066_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2066_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
lean_object* v___x_2077_; 
lean_dec(v___x_2063_);
lean_inc(v_a_2061_);
v___x_2077_ = l_Lean_realizeGlobalConstNoOverload(v_a_2061_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; lean_object* v___x_2079_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_a_2078_);
lean_dec_ref_known(v___x_2077_, 1);
v___x_2079_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_a_2078_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2081_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2081_ = lean_array_push(v_b_2048_, v_a_2080_);
v_a_2055_ = v___x_2081_;
goto v___jp_2054_;
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_dec_ref(v_b_2048_);
v_a_2082_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2079_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2079_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2087_; 
if (v_isShared_2085_ == 0)
{
v___x_2087_ = v___x_2084_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_a_2082_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
return v___x_2087_;
}
}
}
}
else
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2097_; 
lean_dec_ref(v_b_2048_);
v_a_2090_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2097_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2092_ = v___x_2077_;
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2077_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2093_ == 0)
{
v___x_2095_ = v___x_2092_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_a_2090_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
}
}
v___jp_2054_:
{
size_t v___x_2056_; size_t v___x_2057_; 
v___x_2056_ = ((size_t)1ULL);
v___x_2057_ = lean_usize_add(v_i_2047_, v___x_2056_);
v_i_2047_ = v___x_2057_;
v_b_2048_ = v_a_2055_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1___boxed(lean_object* v___x_2098_, lean_object* v_as_2099_, lean_object* v_sz_2100_, lean_object* v_i_2101_, lean_object* v_b_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
size_t v_sz_boxed_2108_; size_t v_i_boxed_2109_; lean_object* v_res_2110_; 
v_sz_boxed_2108_ = lean_unbox_usize(v_sz_2100_);
lean_dec(v_sz_2100_);
v_i_boxed_2109_ = lean_unbox_usize(v_i_2101_);
lean_dec(v_i_2101_);
v_res_2110_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(v___x_2098_, v_as_2099_, v_sz_boxed_2108_, v_i_boxed_2109_, v_b_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec_ref(v_as_2099_);
lean_dec_ref(v___x_2098_);
return v_res_2110_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2(void){
_start:
{
lean_object* v___x_2114_; 
v___x_2114_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2114_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3(void){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; 
v___x_2115_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2);
v___x_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
return v___x_2116_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5));
v___x_2121_ = l_Lean_stringToMessageData(v___x_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(lean_object* v_variantId_x3f_2122_, lean_object* v_extraIds_x3f_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_){
_start:
{
lean_object* v___f_2129_; lean_object* v_post_2131_; lean_object* v_extraThms_2135_; lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; lean_object* v___y_2139_; lean_object* v___y_2172_; lean_object* v___y_2173_; lean_object* v___y_2174_; lean_object* v___y_2175_; lean_object* v___y_2192_; 
v___f_2129_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1));
if (lean_obj_tag(v_variantId_x3f_2122_) == 0)
{
lean_object* v___x_2204_; 
v___x_2204_ = lean_box(0);
v___y_2192_ = v___x_2204_;
goto v___jp_2191_;
}
else
{
lean_object* v_val_2205_; lean_object* v___x_2206_; 
v_val_2205_ = lean_ctor_get(v_variantId_x3f_2122_, 0);
v___x_2206_ = l_Lean_TSyntax_getId(v_val_2205_);
v___y_2192_ = v___x_2206_;
goto v___jp_2191_;
}
v___jp_2130_:
{
lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___f_2129_);
lean_ctor_set(v___x_2132_, 1, v_post_2131_);
v___x_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
return v___x_2133_;
}
v___jp_2134_:
{
lean_object* v___x_2140_; 
v___x_2140_ = l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(v___y_2139_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v___f_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; uint8_t v___x_2146_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v___f_2142_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed), 13, 1);
lean_closure_set(v___f_2142_, 0, v_a_2141_);
v___x_2143_ = lean_unsigned_to_nat(255u);
v___x_2144_ = lean_array_get_size(v_extraThms_2135_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v___x_2146_ = lean_nat_dec_eq(v___x_2144_, v___x_2145_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; size_t v_sz_2148_; size_t v___x_2149_; lean_object* v___x_2150_; 
v___x_2147_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3);
v_sz_2148_ = lean_array_size(v_extraThms_2135_);
v___x_2149_ = ((size_t)0ULL);
v___x_2150_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_extraThms_2135_, v_sz_2148_, v___x_2149_, v___x_2147_);
lean_dec_ref(v_extraThms_2135_);
if (lean_obj_tag(v___x_2150_) == 0)
{
lean_object* v_a_2151_; lean_object* v___f_2152_; lean_object* v___f_2153_; 
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
lean_inc(v_a_2151_);
lean_dec_ref_known(v___x_2150_, 1);
v___f_2152_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed), 13, 1);
lean_closure_set(v___f_2152_, 0, v_a_2151_);
v___f_2153_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed), 14, 3);
lean_closure_set(v___f_2153_, 0, v___f_2152_);
lean_closure_set(v___f_2153_, 1, v___x_2143_);
lean_closure_set(v___f_2153_, 2, v___f_2142_);
v_post_2131_ = v___f_2153_;
goto v___jp_2130_;
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec_ref(v___f_2142_);
v_a_2154_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2150_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2150_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
else
{
lean_object* v___f_2162_; 
lean_dec_ref(v_extraThms_2135_);
v___f_2162_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed), 13, 2);
lean_closure_set(v___f_2162_, 0, v___x_2143_);
lean_closure_set(v___f_2162_, 1, v___f_2142_);
v_post_2131_ = v___f_2162_;
goto v___jp_2130_;
}
}
else
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2170_; 
lean_dec_ref(v_extraThms_2135_);
v_a_2163_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2170_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2165_ = v___x_2140_;
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2140_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2170_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2168_; 
if (v_isShared_2166_ == 0)
{
v___x_2168_ = v___x_2165_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2169_; 
v_reuseFailAlloc_2169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2169_, 0, v_a_2163_);
v___x_2168_ = v_reuseFailAlloc_2169_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
return v___x_2168_;
}
}
}
}
v___jp_2171_:
{
lean_object* v_extraThms_2176_; 
v_extraThms_2176_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4));
if (lean_obj_tag(v_extraIds_x3f_2123_) == 1)
{
lean_object* v_val_2177_; lean_object* v_lctx_2178_; size_t v_sz_2179_; size_t v___x_2180_; lean_object* v___x_2181_; 
v_val_2177_ = lean_ctor_get(v_extraIds_x3f_2123_, 0);
v_lctx_2178_ = lean_ctor_get(v___y_2172_, 2);
v_sz_2179_ = lean_array_size(v_val_2177_);
v___x_2180_ = ((size_t)0ULL);
v___x_2181_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(v_lctx_2178_, v_val_2177_, v_sz_2179_, v___x_2180_, v_extraThms_2176_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v_extraThms_2135_ = v_a_2182_;
v___y_2136_ = v___y_2172_;
v___y_2137_ = v___y_2173_;
v___y_2138_ = v___y_2174_;
v___y_2139_ = v___y_2175_;
goto v___jp_2134_;
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
v_a_2183_ = lean_ctor_get(v___x_2181_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2181_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2181_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2181_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
else
{
v_extraThms_2135_ = v_extraThms_2176_;
v___y_2136_ = v___y_2172_;
v___y_2137_ = v___y_2173_;
v___y_2138_ = v___y_2174_;
v___y_2139_ = v___y_2175_;
goto v___jp_2134_;
}
}
v___jp_2191_:
{
uint8_t v___x_2193_; 
v___x_2193_ = l_Lean_Name_isAnonymous(v___y_2192_);
lean_dec(v___y_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
v___x_2194_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6);
v___x_2195_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v___x_2194_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_);
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2198_ = v___x_2195_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2195_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2196_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
else
{
v___y_2172_ = v_a_2124_;
v___y_2173_ = v_a_2125_;
v___y_2174_ = v_a_2126_;
v___y_2175_ = v_a_2127_;
goto v___jp_2171_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___boxed(lean_object* v_variantId_x3f_2207_, lean_object* v_extraIds_x3f_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(v_variantId_x3f_2207_, v_extraIds_x3f_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
lean_dec(v_extraIds_x3f_2208_);
lean_dec(v_variantId_x3f_2207_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(lean_object* v_as_2215_, size_t v_sz_2216_, size_t v_i_2217_, lean_object* v_b_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v___x_2224_; 
v___x_2224_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_as_2215_, v_sz_2216_, v_i_2217_, v_b_2218_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___boxed(lean_object* v_as_2225_, lean_object* v_sz_2226_, lean_object* v_i_2227_, lean_object* v_b_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
size_t v_sz_boxed_2234_; size_t v_i_boxed_2235_; lean_object* v_res_2236_; 
v_sz_boxed_2234_ = lean_unbox_usize(v_sz_2226_);
lean_dec(v_sz_2226_);
v_i_boxed_2235_ = lean_unbox_usize(v_i_2227_);
lean_dec(v_i_2227_);
v_res_2236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(v_as_2225_, v_sz_boxed_2234_, v_i_boxed_2235_, v_b_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec_ref(v_as_2225_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(lean_object* v_00_u03b1_2237_, lean_object* v_msg_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v_msg_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___boxed(lean_object* v_00_u03b1_2245_, lean_object* v_msg_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(v_00_u03b1_2245_, v_msg_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(size_t v_sz_2253_, size_t v_i_2254_, lean_object* v_bs_2255_){
_start:
{
uint8_t v___x_2256_; 
v___x_2256_ = lean_usize_dec_lt(v_i_2254_, v_sz_2253_);
if (v___x_2256_ == 0)
{
return v_bs_2255_;
}
else
{
lean_object* v_v_2257_; lean_object* v___x_2258_; lean_object* v_bs_x27_2259_; size_t v___x_2260_; size_t v___x_2261_; lean_object* v___x_2262_; 
v_v_2257_ = lean_array_uget(v_bs_2255_, v_i_2254_);
v___x_2258_ = lean_unsigned_to_nat(0u);
v_bs_x27_2259_ = lean_array_uset(v_bs_2255_, v_i_2254_, v___x_2258_);
v___x_2260_ = ((size_t)1ULL);
v___x_2261_ = lean_usize_add(v_i_2254_, v___x_2260_);
v___x_2262_ = lean_array_uset(v_bs_x27_2259_, v_i_2254_, v_v_2257_);
v_i_2254_ = v___x_2261_;
v_bs_2255_ = v___x_2262_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0___boxed(lean_object* v_sz_2264_, lean_object* v_i_2265_, lean_object* v_bs_2266_){
_start:
{
size_t v_sz_boxed_2267_; size_t v_i_boxed_2268_; lean_object* v_res_2269_; 
v_sz_boxed_2267_ = lean_unbox_usize(v_sz_2264_);
lean_dec(v_sz_2264_);
v_i_boxed_2268_ = lean_unbox_usize(v_i_2265_);
lean_dec(v_i_2265_);
v_res_2269_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(v_sz_boxed_2267_, v_i_boxed_2268_, v_bs_2266_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(lean_object* v_simpClause_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v___y_2277_; lean_object* v___y_2278_; lean_object* v___x_2297_; lean_object* v___x_2298_; uint8_t v___x_2299_; 
v___x_2297_ = l_Lean_Syntax_getNumArgs(v_simpClause_2270_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v___x_2299_ = lean_nat_dec_eq(v___x_2297_, v___x_2298_);
lean_dec(v___x_2297_);
if (v___x_2299_ == 0)
{
lean_object* v___x_2300_; lean_object* v___y_2302_; lean_object* v___y_2303_; lean_object* v___y_2311_; lean_object* v___x_2317_; lean_object* v___x_2321_; uint8_t v___x_2322_; 
v___x_2300_ = lean_unsigned_to_nat(1u);
v___x_2317_ = l_Lean_Syntax_getArg(v_simpClause_2270_, v___x_2300_);
v___x_2321_ = l_Lean_Syntax_getNumArgs(v___x_2317_);
v___x_2322_ = lean_nat_dec_eq(v___x_2321_, v___x_2298_);
lean_dec(v___x_2321_);
if (v___x_2322_ == 0)
{
goto v___jp_2318_;
}
else
{
if (v___x_2299_ == 0)
{
lean_object* v___x_2323_; 
lean_dec(v___x_2317_);
v___x_2323_ = lean_box(0);
v___y_2311_ = v___x_2323_;
goto v___jp_2310_;
}
else
{
goto v___jp_2318_;
}
}
v___jp_2301_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; size_t v_sz_2306_; size_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2304_ = l_Lean_Syntax_getArg(v___y_2303_, v___x_2300_);
lean_dec(v___y_2303_);
v___x_2305_ = l_Lean_Syntax_getSepArgs(v___x_2304_);
lean_dec(v___x_2304_);
v_sz_2306_ = lean_array_size(v___x_2305_);
v___x_2307_ = ((size_t)0ULL);
v___x_2308_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(v_sz_2306_, v___x_2307_, v___x_2305_);
v___x_2309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
v___y_2277_ = v___y_2302_;
v___y_2278_ = v___x_2309_;
goto v___jp_2276_;
}
v___jp_2310_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; 
v___x_2312_ = lean_unsigned_to_nat(2u);
v___x_2313_ = l_Lean_Syntax_getArg(v_simpClause_2270_, v___x_2312_);
v___x_2314_ = l_Lean_Syntax_getNumArgs(v___x_2313_);
v___x_2315_ = lean_nat_dec_eq(v___x_2314_, v___x_2298_);
lean_dec(v___x_2314_);
if (v___x_2315_ == 0)
{
v___y_2302_ = v___y_2311_;
v___y_2303_ = v___x_2313_;
goto v___jp_2301_;
}
else
{
if (v___x_2299_ == 0)
{
lean_object* v___x_2316_; 
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v___y_2277_ = v___y_2311_;
v___y_2278_ = v___x_2316_;
goto v___jp_2276_;
}
else
{
v___y_2302_ = v___y_2311_;
v___y_2303_ = v___x_2313_;
goto v___jp_2301_;
}
}
}
v___jp_2318_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = l_Lean_Syntax_getArg(v___x_2317_, v___x_2298_);
lean_dec(v___x_2317_);
v___x_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
v___y_2311_ = v___x_2320_;
goto v___jp_2310_;
}
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = lean_box(0);
v___x_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2324_);
return v___x_2325_;
}
v___jp_2276_:
{
lean_object* v___x_2279_; 
v___x_2279_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(v___y_2277_, v___y_2278_, v_a_2271_, v_a_2272_, v_a_2273_, v_a_2274_);
lean_dec(v___y_2278_);
lean_dec(v___y_2277_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2288_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2288_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2288_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2284_, 0, v_a_2280_);
if (v_isShared_2283_ == 0)
{
lean_ctor_set(v___x_2282_, 0, v___x_2284_);
v___x_2286_ = v___x_2282_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
v_a_2289_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2279_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2279_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions___boxed(lean_object* v_simpClause_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(v_simpClause_2326_, v_a_2327_, v_a_2328_, v_a_2329_, v_a_2330_);
lean_dec(v_a_2330_);
lean_dec_ref(v_a_2329_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec(v_simpClause_2326_);
return v_res_2332_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2334_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0));
v___x_2335_ = lean_string_utf8_byte_size(v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(lean_object* v_s_2336_){
_start:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2337_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0));
v___x_2338_ = lean_string_utf8_byte_size(v_s_2336_);
v___x_2339_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1);
v___x_2340_ = lean_nat_dec_le(v___x_2339_, v___x_2338_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
lean_dec_ref(v_s_2336_);
v___x_2341_ = lean_box(0);
return v___x_2341_;
}
else
{
lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___x_2342_ = lean_unsigned_to_nat(0u);
v___x_2343_ = lean_string_memcmp(v_s_2336_, v___x_2337_, v___x_2342_, v___x_2342_, v___x_2339_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2344_; 
lean_dec_ref(v_s_2336_);
v___x_2344_ = lean_box(0);
return v___x_2344_;
}
else
{
lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
lean_inc_ref(v_s_2336_);
v___x_2345_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2345_, 0, v_s_2336_);
lean_ctor_set(v___x_2345_, 1, v___x_2342_);
lean_ctor_set(v___x_2345_, 2, v___x_2338_);
v___x_2346_ = l_String_Slice_pos_x21(v___x_2345_, v___x_2339_);
lean_dec_ref_known(v___x_2345_, 3);
v___x_2347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2347_, 0, v_s_2336_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
lean_ctor_set(v___x_2347_, 2, v___x_2338_);
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
return v___x_2348_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(lean_object* v_s_2349_, lean_object* v_pat_2350_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(v_s_2349_);
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___boxed(lean_object* v_s_2352_, lean_object* v_pat_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(v_s_2352_, v_pat_2353_);
lean_dec_ref(v_pat_2353_);
return v_res_2354_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(lean_object* v_a_2355_, lean_object* v_x_2356_){
_start:
{
if (lean_obj_tag(v_x_2356_) == 0)
{
uint8_t v___x_2357_; 
v___x_2357_ = 0;
return v___x_2357_;
}
else
{
lean_object* v_key_2358_; lean_object* v_tail_2359_; uint8_t v___x_2360_; 
v_key_2358_ = lean_ctor_get(v_x_2356_, 0);
v_tail_2359_ = lean_ctor_get(v_x_2356_, 2);
v___x_2360_ = lean_nat_dec_eq(v_key_2358_, v_a_2355_);
if (v___x_2360_ == 0)
{
v_x_2356_ = v_tail_2359_;
goto _start;
}
else
{
return v___x_2360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg___boxed(lean_object* v_a_2362_, lean_object* v_x_2363_){
_start:
{
uint8_t v_res_2364_; lean_object* v_r_2365_; 
v_res_2364_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2362_, v_x_2363_);
lean_dec(v_x_2363_);
lean_dec(v_a_2362_);
v_r_2365_ = lean_box(v_res_2364_);
return v_r_2365_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object* v_m_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v_buckets_2368_; lean_object* v___x_2369_; uint64_t v___x_2370_; uint64_t v___x_2371_; uint64_t v___x_2372_; uint64_t v_fold_2373_; uint64_t v___x_2374_; uint64_t v___x_2375_; uint64_t v___x_2376_; size_t v___x_2377_; size_t v___x_2378_; size_t v___x_2379_; size_t v___x_2380_; size_t v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; 
v_buckets_2368_ = lean_ctor_get(v_m_2366_, 1);
v___x_2369_ = lean_array_get_size(v_buckets_2368_);
v___x_2370_ = lean_uint64_of_nat(v_a_2367_);
v___x_2371_ = 32ULL;
v___x_2372_ = lean_uint64_shift_right(v___x_2370_, v___x_2371_);
v_fold_2373_ = lean_uint64_xor(v___x_2370_, v___x_2372_);
v___x_2374_ = 16ULL;
v___x_2375_ = lean_uint64_shift_right(v_fold_2373_, v___x_2374_);
v___x_2376_ = lean_uint64_xor(v_fold_2373_, v___x_2375_);
v___x_2377_ = lean_uint64_to_usize(v___x_2376_);
v___x_2378_ = lean_usize_of_nat(v___x_2369_);
v___x_2379_ = ((size_t)1ULL);
v___x_2380_ = lean_usize_sub(v___x_2378_, v___x_2379_);
v___x_2381_ = lean_usize_land(v___x_2377_, v___x_2380_);
v___x_2382_ = lean_array_uget_borrowed(v_buckets_2368_, v___x_2381_);
v___x_2383_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2367_, v___x_2382_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg___boxed(lean_object* v_m_2384_, lean_object* v_a_2385_){
_start:
{
uint8_t v_res_2386_; lean_object* v_r_2387_; 
v_res_2386_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_m_2384_, v_a_2385_);
lean_dec(v_a_2385_);
lean_dec_ref(v_m_2384_);
v_r_2387_ = lean_box(v_res_2386_);
return v_r_2387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(lean_object* v_a_2388_, lean_object* v_b_2389_, lean_object* v_x_2390_){
_start:
{
if (lean_obj_tag(v_x_2390_) == 0)
{
lean_dec(v_b_2389_);
lean_dec(v_a_2388_);
return v_x_2390_;
}
else
{
lean_object* v_key_2391_; lean_object* v_value_2392_; lean_object* v_tail_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2405_; 
v_key_2391_ = lean_ctor_get(v_x_2390_, 0);
v_value_2392_ = lean_ctor_get(v_x_2390_, 1);
v_tail_2393_ = lean_ctor_get(v_x_2390_, 2);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_x_2390_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2395_ = v_x_2390_;
v_isShared_2396_ = v_isSharedCheck_2405_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_tail_2393_);
lean_inc(v_value_2392_);
lean_inc(v_key_2391_);
lean_dec(v_x_2390_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2405_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
uint8_t v___x_2397_; 
v___x_2397_ = lean_nat_dec_eq(v_key_2391_, v_a_2388_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2398_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_2388_, v_b_2389_, v_tail_2393_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 2, v___x_2398_);
v___x_2400_ = v___x_2395_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_key_2391_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_value_2392_);
lean_ctor_set(v_reuseFailAlloc_2401_, 2, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
else
{
lean_object* v___x_2403_; 
lean_dec(v_value_2392_);
lean_dec(v_key_2391_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 1, v_b_2389_);
lean_ctor_set(v___x_2395_, 0, v_a_2388_);
v___x_2403_ = v___x_2395_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2388_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v_b_2389_);
lean_ctor_set(v_reuseFailAlloc_2404_, 2, v_tail_2393_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_x_2406_, lean_object* v_x_2407_){
_start:
{
if (lean_obj_tag(v_x_2407_) == 0)
{
return v_x_2406_;
}
else
{
lean_object* v_key_2408_; lean_object* v_value_2409_; lean_object* v_tail_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2433_; 
v_key_2408_ = lean_ctor_get(v_x_2407_, 0);
v_value_2409_ = lean_ctor_get(v_x_2407_, 1);
v_tail_2410_ = lean_ctor_get(v_x_2407_, 2);
v_isSharedCheck_2433_ = !lean_is_exclusive(v_x_2407_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2412_ = v_x_2407_;
v_isShared_2413_ = v_isSharedCheck_2433_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_tail_2410_);
lean_inc(v_value_2409_);
lean_inc(v_key_2408_);
lean_dec(v_x_2407_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2433_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; uint64_t v___x_2415_; uint64_t v___x_2416_; uint64_t v___x_2417_; uint64_t v_fold_2418_; uint64_t v___x_2419_; uint64_t v___x_2420_; uint64_t v___x_2421_; size_t v___x_2422_; size_t v___x_2423_; size_t v___x_2424_; size_t v___x_2425_; size_t v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2429_; 
v___x_2414_ = lean_array_get_size(v_x_2406_);
v___x_2415_ = lean_uint64_of_nat(v_key_2408_);
v___x_2416_ = 32ULL;
v___x_2417_ = lean_uint64_shift_right(v___x_2415_, v___x_2416_);
v_fold_2418_ = lean_uint64_xor(v___x_2415_, v___x_2417_);
v___x_2419_ = 16ULL;
v___x_2420_ = lean_uint64_shift_right(v_fold_2418_, v___x_2419_);
v___x_2421_ = lean_uint64_xor(v_fold_2418_, v___x_2420_);
v___x_2422_ = lean_uint64_to_usize(v___x_2421_);
v___x_2423_ = lean_usize_of_nat(v___x_2414_);
v___x_2424_ = ((size_t)1ULL);
v___x_2425_ = lean_usize_sub(v___x_2423_, v___x_2424_);
v___x_2426_ = lean_usize_land(v___x_2422_, v___x_2425_);
v___x_2427_ = lean_array_uget_borrowed(v_x_2406_, v___x_2426_);
lean_inc(v___x_2427_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 2, v___x_2427_);
v___x_2429_ = v___x_2412_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_key_2408_);
lean_ctor_set(v_reuseFailAlloc_2432_, 1, v_value_2409_);
lean_ctor_set(v_reuseFailAlloc_2432_, 2, v___x_2427_);
v___x_2429_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
lean_object* v___x_2430_; 
v___x_2430_ = lean_array_uset(v_x_2406_, v___x_2426_, v___x_2429_);
v_x_2406_ = v___x_2430_;
v_x_2407_ = v_tail_2410_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2434_, lean_object* v_source_2435_, lean_object* v_target_2436_){
_start:
{
lean_object* v___x_2437_; uint8_t v___x_2438_; 
v___x_2437_ = lean_array_get_size(v_source_2435_);
v___x_2438_ = lean_nat_dec_lt(v_i_2434_, v___x_2437_);
if (v___x_2438_ == 0)
{
lean_dec_ref(v_source_2435_);
lean_dec(v_i_2434_);
return v_target_2436_;
}
else
{
lean_object* v_es_2439_; lean_object* v___x_2440_; lean_object* v_source_2441_; lean_object* v_target_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v_es_2439_ = lean_array_fget(v_source_2435_, v_i_2434_);
v___x_2440_ = lean_box(0);
v_source_2441_ = lean_array_fset(v_source_2435_, v_i_2434_, v___x_2440_);
v_target_2442_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(v_target_2436_, v_es_2439_);
v___x_2443_ = lean_unsigned_to_nat(1u);
v___x_2444_ = lean_nat_add(v_i_2434_, v___x_2443_);
lean_dec(v_i_2434_);
v_i_2434_ = v___x_2444_;
v_source_2435_ = v_source_2441_;
v_target_2436_ = v_target_2442_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(lean_object* v_data_2446_){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v_nbuckets_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2447_ = lean_array_get_size(v_data_2446_);
v___x_2448_ = lean_unsigned_to_nat(2u);
v_nbuckets_2449_ = lean_nat_mul(v___x_2447_, v___x_2448_);
v___x_2450_ = lean_unsigned_to_nat(0u);
v___x_2451_ = lean_box(0);
v___x_2452_ = lean_mk_array(v_nbuckets_2449_, v___x_2451_);
v___x_2453_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(v___x_2450_, v_data_2446_, v___x_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object* v_m_2454_, lean_object* v_a_2455_, lean_object* v_b_2456_){
_start:
{
lean_object* v_size_2457_; lean_object* v_buckets_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2501_; 
v_size_2457_ = lean_ctor_get(v_m_2454_, 0);
v_buckets_2458_ = lean_ctor_get(v_m_2454_, 1);
v_isSharedCheck_2501_ = !lean_is_exclusive(v_m_2454_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2460_ = v_m_2454_;
v_isShared_2461_ = v_isSharedCheck_2501_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_buckets_2458_);
lean_inc(v_size_2457_);
lean_dec(v_m_2454_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2501_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2462_; uint64_t v___x_2463_; uint64_t v___x_2464_; uint64_t v___x_2465_; uint64_t v_fold_2466_; uint64_t v___x_2467_; uint64_t v___x_2468_; uint64_t v___x_2469_; size_t v___x_2470_; size_t v___x_2471_; size_t v___x_2472_; size_t v___x_2473_; size_t v___x_2474_; lean_object* v_bkt_2475_; uint8_t v___x_2476_; 
v___x_2462_ = lean_array_get_size(v_buckets_2458_);
v___x_2463_ = lean_uint64_of_nat(v_a_2455_);
v___x_2464_ = 32ULL;
v___x_2465_ = lean_uint64_shift_right(v___x_2463_, v___x_2464_);
v_fold_2466_ = lean_uint64_xor(v___x_2463_, v___x_2465_);
v___x_2467_ = 16ULL;
v___x_2468_ = lean_uint64_shift_right(v_fold_2466_, v___x_2467_);
v___x_2469_ = lean_uint64_xor(v_fold_2466_, v___x_2468_);
v___x_2470_ = lean_uint64_to_usize(v___x_2469_);
v___x_2471_ = lean_usize_of_nat(v___x_2462_);
v___x_2472_ = ((size_t)1ULL);
v___x_2473_ = lean_usize_sub(v___x_2471_, v___x_2472_);
v___x_2474_ = lean_usize_land(v___x_2470_, v___x_2473_);
v_bkt_2475_ = lean_array_uget_borrowed(v_buckets_2458_, v___x_2474_);
v___x_2476_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2455_, v_bkt_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; lean_object* v_size_x27_2478_; lean_object* v___x_2479_; lean_object* v_buckets_x27_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; uint8_t v___x_2486_; 
v___x_2477_ = lean_unsigned_to_nat(1u);
v_size_x27_2478_ = lean_nat_add(v_size_2457_, v___x_2477_);
lean_dec(v_size_2457_);
lean_inc(v_bkt_2475_);
v___x_2479_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2479_, 0, v_a_2455_);
lean_ctor_set(v___x_2479_, 1, v_b_2456_);
lean_ctor_set(v___x_2479_, 2, v_bkt_2475_);
v_buckets_x27_2480_ = lean_array_uset(v_buckets_2458_, v___x_2474_, v___x_2479_);
v___x_2481_ = lean_unsigned_to_nat(4u);
v___x_2482_ = lean_nat_mul(v_size_x27_2478_, v___x_2481_);
v___x_2483_ = lean_unsigned_to_nat(3u);
v___x_2484_ = lean_nat_div(v___x_2482_, v___x_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_array_get_size(v_buckets_x27_2480_);
v___x_2486_ = lean_nat_dec_le(v___x_2484_, v___x_2485_);
lean_dec(v___x_2484_);
if (v___x_2486_ == 0)
{
lean_object* v_val_2487_; lean_object* v___x_2489_; 
v_val_2487_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_buckets_x27_2480_);
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 1, v_val_2487_);
lean_ctor_set(v___x_2460_, 0, v_size_x27_2478_);
v___x_2489_ = v___x_2460_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_size_x27_2478_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v_val_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
else
{
lean_object* v___x_2492_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 1, v_buckets_x27_2480_);
lean_ctor_set(v___x_2460_, 0, v_size_x27_2478_);
v___x_2492_ = v___x_2460_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_size_x27_2478_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v_buckets_x27_2480_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
else
{
lean_object* v___x_2494_; lean_object* v_buckets_x27_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2499_; 
lean_inc(v_bkt_2475_);
v___x_2494_ = lean_box(0);
v_buckets_x27_2495_ = lean_array_uset(v_buckets_2458_, v___x_2474_, v___x_2494_);
v___x_2496_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_2455_, v_b_2456_, v_bkt_2475_);
v___x_2497_ = lean_array_uset(v_buckets_x27_2495_, v___x_2474_, v___x_2496_);
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 1, v___x_2497_);
v___x_2499_ = v___x_2460_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_size_2457_);
lean_ctor_set(v_reuseFailAlloc_2500_, 1, v___x_2497_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1));
v___x_2506_ = l_Lean_MessageData_ofFormat(v___x_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(lean_object* v_fst_2511_, lean_object* v___x_2512_, lean_object* v___x_2513_, lean_object* v___x_2514_, lean_object* v_a_2515_, lean_object* v___x_2516_, lean_object* v___x_2517_, lean_object* v_____r_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
uint8_t v___x_2526_; lean_object* v___y_2550_; lean_object* v_val_2557_; uint8_t v___x_2575_; 
v___x_2526_ = 0;
lean_inc(v___x_2513_);
v___x_2575_ = l_Lean_Syntax_isOfKind(v___x_2513_, v___x_2514_);
if (v___x_2575_ == 0)
{
lean_object* v___x_2576_; 
v___x_2576_ = lean_nat_add(v_a_2515_, v___x_2516_);
v_val_2557_ = v___x_2576_;
goto v___jp_2556_;
}
else
{
lean_object* v___x_2577_; lean_object* v___x_2578_; uint8_t v___x_2579_; 
v___x_2577_ = l_Lean_Syntax_getArg(v___x_2513_, v___x_2517_);
v___x_2578_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5));
lean_inc(v___x_2577_);
v___x_2579_ = l_Lean_Syntax_isOfKind(v___x_2577_, v___x_2578_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; 
lean_dec(v___x_2577_);
v___x_2580_ = lean_nat_add(v_a_2515_, v___x_2516_);
v_val_2557_ = v___x_2580_;
goto v___jp_2556_;
}
else
{
lean_object* v___x_2581_; 
v___x_2581_ = l_Lean_TSyntax_getId(v___x_2577_);
lean_dec(v___x_2577_);
if (lean_obj_tag(v___x_2581_) == 1)
{
lean_object* v_pre_2582_; 
v_pre_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_pre_2582_);
if (lean_obj_tag(v_pre_2582_) == 0)
{
lean_object* v_str_2583_; lean_object* v___x_2584_; 
v_str_2583_ = lean_ctor_get(v___x_2581_, 1);
lean_inc_ref(v_str_2583_);
lean_dec_ref_known(v___x_2581_, 2);
v___x_2584_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(v_str_2583_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_dec(v___x_2512_);
goto v___jp_2527_;
}
else
{
lean_object* v_val_2585_; lean_object* v___x_2586_; 
v_val_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_val_2585_);
lean_dec_ref_known(v___x_2584_, 1);
v___x_2586_ = l_String_Slice_toNat_x3f(v_val_2585_);
lean_dec(v_val_2585_);
if (lean_obj_tag(v___x_2586_) == 1)
{
lean_object* v_val_2587_; 
v_val_2587_ = lean_ctor_get(v___x_2586_, 0);
lean_inc(v_val_2587_);
lean_dec_ref_known(v___x_2586_, 1);
v_val_2557_ = v_val_2587_;
goto v___jp_2556_;
}
else
{
lean_dec(v___x_2586_);
lean_dec(v___x_2512_);
goto v___jp_2527_;
}
}
}
else
{
lean_dec(v_pre_2582_);
lean_dec_ref_known(v___x_2581_, 2);
lean_dec(v___x_2512_);
goto v___jp_2527_;
}
}
else
{
lean_dec(v___x_2581_);
lean_dec(v___x_2512_);
goto v___jp_2527_;
}
}
}
v___jp_2527_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
v___x_2528_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2);
v___x_2529_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2513_, v___x_2528_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___x_2513_);
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2539_; 
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2539_ == 0)
{
lean_object* v_unused_2540_; 
v_unused_2540_ = lean_ctor_get(v___x_2529_, 0);
lean_dec(v_unused_2540_);
v___x_2531_ = v___x_2529_;
v_isShared_2532_ = v_isSharedCheck_2539_;
goto v_resetjp_2530_;
}
else
{
lean_dec(v___x_2529_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2539_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2537_; 
v___x_2533_ = lean_box(v___x_2526_);
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v_fst_2511_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
if (v_isShared_2532_ == 0)
{
lean_ctor_set(v___x_2531_, 0, v___x_2535_);
v___x_2537_ = v___x_2531_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v___x_2535_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec(v_fst_2511_);
v_a_2541_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2529_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2529_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
v___jp_2549_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2551_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_fst_2511_, v___y_2550_, v___x_2512_);
v___x_2552_ = lean_box(v___x_2526_);
v___x_2553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2553_, 0, v___x_2551_);
lean_ctor_set(v___x_2553_, 1, v___x_2552_);
v___x_2554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
v___x_2555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2554_);
return v___x_2555_;
}
v___jp_2556_:
{
uint8_t v___x_2558_; 
v___x_2558_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_fst_2511_, v_val_2557_);
if (v___x_2558_ == 0)
{
lean_dec(v___x_2513_);
v___y_2550_ = v_val_2557_;
goto v___jp_2549_;
}
else
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2559_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3));
lean_inc(v_val_2557_);
v___x_2560_ = l_Nat_reprFast(v_val_2557_);
v___x_2561_ = lean_string_append(v___x_2559_, v___x_2560_);
lean_dec_ref(v___x_2560_);
v___x_2562_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14));
v___x_2563_ = lean_string_append(v___x_2561_, v___x_2562_);
v___x_2564_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
v___x_2565_ = l_Lean_MessageData_ofFormat(v___x_2564_);
v___x_2566_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2513_, v___x_2565_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___x_2513_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_dec_ref_known(v___x_2566_, 1);
v___y_2550_ = v_val_2557_;
goto v___jp_2549_;
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_val_2557_);
lean_dec(v___x_2512_);
lean_dec(v_fst_2511_);
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2566_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2566_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___boxed(lean_object* v_fst_2588_, lean_object* v___x_2589_, lean_object* v___x_2590_, lean_object* v___x_2591_, lean_object* v_a_2592_, lean_object* v___x_2593_, lean_object* v___x_2594_, lean_object* v_____r_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_2588_, v___x_2589_, v___x_2590_, v___x_2591_, v_a_2592_, v___x_2593_, v___x_2594_, v_____r_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___x_2594_);
lean_dec(v___x_2593_);
lean_dec(v_a_2592_);
lean_dec(v___x_2591_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(lean_object* v_a_2604_, lean_object* v___x_2605_, lean_object* v_fst_2606_, lean_object* v___x_2607_, lean_object* v_____r_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
uint8_t v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v___x_2616_ = 1;
v___x_2617_ = lean_nat_add(v_a_2604_, v___x_2605_);
v___x_2618_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_fst_2606_, v___x_2617_, v___x_2607_);
v___x_2619_ = lean_box(v___x_2616_);
v___x_2620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2618_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
v___x_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
v___x_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2622_, 0, v___x_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1___boxed(lean_object* v_a_2623_, lean_object* v___x_2624_, lean_object* v_fst_2625_, lean_object* v___x_2626_, lean_object* v_____r_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_2623_, v___x_2624_, v_fst_2625_, v___x_2626_, v_____r_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___x_2624_);
lean_dec(v_a_2623_);
return v_res_2635_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2649_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4));
v___x_2650_ = l_Lean_stringToMessageData(v___x_2649_);
return v___x_2650_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11(void){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; 
v___x_2662_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10));
v___x_2663_ = l_Lean_stringToMessageData(v___x_2662_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(lean_object* v_upperBound_2668_, lean_object* v_alts_2669_, lean_object* v___x_2670_, lean_object* v_a_2671_, lean_object* v_b_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
uint8_t v___x_2680_; 
v___x_2680_ = lean_nat_dec_lt(v_a_2671_, v_upperBound_2668_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; 
lean_dec(v_a_2671_);
v___x_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2681_, 0, v_b_2672_);
return v___x_2681_;
}
else
{
lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2798_; 
v_fst_2682_ = lean_ctor_get(v_b_2672_, 0);
v_snd_2683_ = lean_ctor_get(v_b_2672_, 1);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_b_2672_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2685_ = v_b_2672_;
v_isShared_2686_ = v_isSharedCheck_2798_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_snd_2683_);
lean_inc(v_fst_2682_);
lean_dec(v_b_2672_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2798_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v_a_2690_; lean_object* v___y_2694_; lean_object* v___x_2713_; lean_object* v___x_2714_; uint8_t v___x_2715_; 
v___x_2687_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1));
v___x_2688_ = lean_unsigned_to_nat(1u);
v___x_2713_ = lean_unsigned_to_nat(0u);
v___x_2714_ = lean_array_fget_borrowed(v_alts_2669_, v_a_2671_);
lean_inc(v___x_2714_);
v___x_2715_ = l_Lean_Syntax_isOfKind(v___x_2714_, v___x_2687_);
if (v___x_2715_ == 0)
{
lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2716_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3));
lean_inc(v___x_2714_);
v___x_2717_ = l_Lean_Syntax_isOfKind(v___x_2714_, v___x_2716_);
if (v___x_2717_ == 0)
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_2719_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2714_, v___x_2718_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v___x_2721_; 
lean_dec_ref_known(v___x_2719_, 1);
if (v_isShared_2686_ == 0)
{
v___x_2721_ = v___x_2685_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_fst_2682_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_snd_2683_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
v_a_2690_ = v___x_2721_;
goto v___jp_2689_;
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_del_object(v___x_2685_);
lean_dec(v_snd_2683_);
lean_dec(v_fst_2682_);
lean_dec(v_a_2671_);
v_a_2723_ = lean_ctor_get(v___x_2719_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2719_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2719_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
else
{
lean_object* v___x_2731_; lean_object* v___x_2732_; uint8_t v___x_2733_; 
v___x_2731_ = l_Lean_Syntax_getArg(v___x_2714_, v___x_2688_);
v___x_2732_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7));
lean_inc(v___x_2731_);
v___x_2733_ = l_Lean_Syntax_isOfKind(v___x_2731_, v___x_2732_);
if (v___x_2733_ == 0)
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
lean_dec(v___x_2731_);
v___x_2734_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_2735_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2714_, v___x_2734_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v___x_2737_; 
lean_dec_ref_known(v___x_2735_, 1);
if (v_isShared_2686_ == 0)
{
v___x_2737_ = v___x_2685_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_fst_2682_);
lean_ctor_set(v_reuseFailAlloc_2738_, 1, v_snd_2683_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
v_a_2690_ = v___x_2737_;
goto v___jp_2689_;
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_del_object(v___x_2685_);
lean_dec(v_snd_2683_);
lean_dec(v_fst_2682_);
lean_dec(v_a_2671_);
v_a_2739_ = lean_ctor_get(v___x_2735_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2735_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2735_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2735_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
else
{
lean_object* v___x_2747_; lean_object* v___x_2748_; uint8_t v___x_2762_; 
lean_del_object(v___x_2685_);
v___x_2747_ = l_Lean_Syntax_getArg(v___x_2731_, v___x_2713_);
lean_dec(v___x_2731_);
v___x_2748_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9));
v___x_2762_ = lean_unbox(v_snd_2683_);
lean_dec(v_snd_2683_);
if (v___x_2762_ == 1)
{
goto v___jp_2749_;
}
else
{
if (v___x_2715_ == 0)
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_box(0);
lean_inc(v___x_2714_);
v___x_2764_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_2682_, v___x_2714_, v___x_2747_, v___x_2748_, v_a_2671_, v___x_2688_, v___x_2713_, v___x_2763_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
v___y_2694_ = v___x_2764_;
goto v___jp_2693_;
}
else
{
goto v___jp_2749_;
}
}
v___jp_2749_:
{
lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2750_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11);
v___x_2751_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2714_, v___x_2750_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; lean_object* v___x_2753_; 
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2751_, 1);
lean_inc(v___x_2714_);
v___x_2753_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_2682_, v___x_2714_, v___x_2747_, v___x_2748_, v_a_2671_, v___x_2688_, v___x_2713_, v_a_2752_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
v___y_2694_ = v___x_2753_;
goto v___jp_2693_;
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
lean_dec(v___x_2747_);
lean_dec(v_fst_2682_);
lean_dec(v_a_2671_);
v_a_2754_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___x_2751_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2751_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_a_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2765_; lean_object* v___x_2766_; uint8_t v___x_2767_; 
v___x_2765_ = l_Lean_Syntax_getArg(v___x_2714_, v___x_2713_);
v___x_2766_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13));
v___x_2767_ = l_Lean_Syntax_isOfKind(v___x_2765_, v___x_2766_);
if (v___x_2767_ == 0)
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_2769_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2714_, v___x_2768_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v___x_2771_; 
lean_dec_ref_known(v___x_2769_, 1);
if (v_isShared_2686_ == 0)
{
v___x_2771_ = v___x_2685_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_fst_2682_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v_snd_2683_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
v_a_2690_ = v___x_2771_;
goto v___jp_2689_;
}
}
else
{
lean_object* v_a_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
lean_del_object(v___x_2685_);
lean_dec(v_snd_2683_);
lean_dec(v_fst_2682_);
lean_dec(v_a_2671_);
v_a_2773_ = lean_ctor_get(v___x_2769_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v___x_2769_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2775_ = v___x_2769_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_a_2773_);
lean_dec(v___x_2769_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_a_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
else
{
uint8_t v___x_2794_; 
lean_del_object(v___x_2685_);
v___x_2794_ = lean_unbox(v_snd_2683_);
lean_dec(v_snd_2683_);
if (v___x_2794_ == 0)
{
goto v___jp_2781_;
}
else
{
uint8_t v___x_2795_; 
v___x_2795_ = lean_nat_dec_eq(v___x_2670_, v___x_2713_);
if (v___x_2795_ == 0)
{
lean_object* v___x_2796_; lean_object* v___x_2797_; 
v___x_2796_ = lean_box(0);
lean_inc(v___x_2714_);
v___x_2797_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_2671_, v___x_2688_, v_fst_2682_, v___x_2714_, v___x_2796_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
v___y_2694_ = v___x_2797_;
goto v___jp_2693_;
}
else
{
goto v___jp_2781_;
}
}
v___jp_2781_:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11);
v___x_2783_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2714_, v___x_2782_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2783_) == 0)
{
lean_object* v_a_2784_; lean_object* v___x_2785_; 
v_a_2784_ = lean_ctor_get(v___x_2783_, 0);
lean_inc(v_a_2784_);
lean_dec_ref_known(v___x_2783_, 1);
lean_inc(v___x_2714_);
v___x_2785_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_2671_, v___x_2688_, v_fst_2682_, v___x_2714_, v_a_2784_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
v___y_2694_ = v___x_2785_;
goto v___jp_2693_;
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
lean_dec(v_fst_2682_);
lean_dec(v_a_2671_);
v_a_2786_ = lean_ctor_get(v___x_2783_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2783_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2783_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2783_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
}
}
v___jp_2689_:
{
lean_object* v___x_2691_; 
v___x_2691_ = lean_nat_add(v_a_2671_, v___x_2688_);
lean_dec(v_a_2671_);
v_a_2671_ = v___x_2691_;
v_b_2672_ = v_a_2690_;
goto _start;
}
v___jp_2693_:
{
if (lean_obj_tag(v___y_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2704_; 
v_a_2695_ = lean_ctor_get(v___y_2694_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___y_2694_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2697_ = v___y_2694_;
v_isShared_2698_ = v_isSharedCheck_2704_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___y_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2704_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
if (lean_obj_tag(v_a_2695_) == 0)
{
lean_object* v_a_2699_; lean_object* v___x_2701_; 
lean_dec(v_a_2671_);
v_a_2699_ = lean_ctor_get(v_a_2695_, 0);
lean_inc(v_a_2699_);
lean_dec_ref_known(v_a_2695_, 1);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v_a_2699_);
v___x_2701_ = v___x_2697_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2699_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
else
{
lean_object* v_a_2703_; 
lean_del_object(v___x_2697_);
v_a_2703_ = lean_ctor_get(v_a_2695_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v_a_2695_, 1);
v_a_2690_ = v_a_2703_;
goto v___jp_2689_;
}
}
}
else
{
lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2712_; 
lean_dec(v_a_2671_);
v_a_2705_ = lean_ctor_get(v___y_2694_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___y_2694_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2707_ = v___y_2694_;
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_dec(v___y_2694_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___boxed(lean_object* v_upperBound_2799_, lean_object* v_alts_2800_, lean_object* v___x_2801_, lean_object* v_a_2802_, lean_object* v_b_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v_upperBound_2799_, v_alts_2800_, v___x_2801_, v_a_2802_, v_b_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
lean_dec(v___x_2801_);
lean_dec_ref(v_alts_2800_);
lean_dec(v_upperBound_2799_);
return v_res_2811_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2(void){
_start:
{
uint8_t v_dotOrCase_2818_; lean_object* v_map_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_dotOrCase_2818_ = 2;
v_map_2819_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2);
v___x_2820_ = lean_box(v_dotOrCase_2818_);
v___x_2821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2821_, 0, v_map_2819_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
return v___x_2821_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3(void){
_start:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
v___x_2822_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2);
v___x_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(lean_object* v_stx_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l_Lean_Syntax_getOptional_x3f(v_stx_2835_);
if (lean_obj_tag(v___x_2843_) == 1)
{
lean_object* v_val_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2953_; 
v_val_2844_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2846_ = v___x_2843_;
v_isShared_2847_ = v_isSharedCheck_2953_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_val_2844_);
lean_dec(v___x_2843_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2953_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2848_; uint8_t v___x_2849_; 
v___x_2848_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1));
lean_inc(v_val_2844_);
v___x_2849_ = l_Lean_Syntax_isOfKind(v_val_2844_, v___x_2848_);
if (v___x_2849_ == 0)
{
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; lean_object* v___x_2851_; 
lean_del_object(v___x_2846_);
lean_dec(v_val_2844_);
v___x_2850_ = lean_box(0);
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
return v___x_2851_;
}
else
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v_alts_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; uint8_t v___x_2857_; 
v___x_2852_ = lean_unsigned_to_nat(1u);
v___x_2853_ = l_Lean_Syntax_getArg(v_val_2844_, v___x_2852_);
lean_dec(v_val_2844_);
v_alts_2854_ = l_Lean_Syntax_getArgs(v___x_2853_);
lean_dec(v___x_2853_);
v___x_2855_ = lean_array_get_size(v_alts_2854_);
v___x_2856_ = lean_unsigned_to_nat(0u);
v___x_2857_ = lean_nat_dec_eq(v___x_2855_, v___x_2856_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_2859_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_2855_, v_alts_2854_, v___x_2855_, v___x_2856_, v___x_2858_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
lean_dec_ref(v_alts_2854_);
if (lean_obj_tag(v___x_2859_) == 0)
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2871_; 
v_a_2860_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2862_ = v___x_2859_;
v_isShared_2863_ = v_isSharedCheck_2871_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2859_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2871_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v_fst_2864_; lean_object* v___x_2866_; 
v_fst_2864_ = lean_ctor_get(v_a_2860_, 0);
lean_inc(v_fst_2864_);
lean_dec(v_a_2860_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v_fst_2864_);
v___x_2866_ = v___x_2846_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_fst_2864_);
v___x_2866_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
lean_object* v___x_2868_; 
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 0, v___x_2866_);
v___x_2868_ = v___x_2862_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2866_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
else
{
lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2879_; 
lean_del_object(v___x_2846_);
v_a_2872_ = lean_ctor_get(v___x_2859_, 0);
v_isSharedCheck_2879_ = !lean_is_exclusive(v___x_2859_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2874_ = v___x_2859_;
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2859_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2879_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2877_; 
if (v_isShared_2875_ == 0)
{
v___x_2877_ = v___x_2874_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_a_2872_);
v___x_2877_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
return v___x_2877_;
}
}
}
}
else
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_dec_ref(v_alts_2854_);
lean_del_object(v___x_2846_);
v___x_2880_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
return v___x_2881_;
}
}
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; uint8_t v___x_2885_; 
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = l_Lean_Syntax_getArg(v_val_2844_, v___x_2882_);
v___x_2884_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5));
lean_inc(v___x_2883_);
v___x_2885_ = l_Lean_Syntax_isOfKind(v___x_2883_, v___x_2884_);
if (v___x_2885_ == 0)
{
lean_dec(v___x_2883_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
lean_del_object(v___x_2846_);
lean_dec(v_val_2844_);
v___x_2886_ = lean_box(0);
v___x_2887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
return v___x_2887_;
}
else
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v_alts_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2888_ = lean_unsigned_to_nat(1u);
v___x_2889_ = l_Lean_Syntax_getArg(v_val_2844_, v___x_2888_);
lean_dec(v_val_2844_);
v_alts_2890_ = l_Lean_Syntax_getArgs(v___x_2889_);
lean_dec(v___x_2889_);
v___x_2891_ = lean_array_get_size(v_alts_2890_);
v___x_2892_ = lean_nat_dec_eq(v___x_2891_, v___x_2882_);
if (v___x_2892_ == 0)
{
lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2893_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_2894_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_2891_, v_alts_2890_, v___x_2891_, v___x_2882_, v___x_2893_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
lean_dec_ref(v_alts_2890_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2906_; 
v_a_2895_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2897_ = v___x_2894_;
v_isShared_2898_ = v_isSharedCheck_2906_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2894_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2906_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v_fst_2899_; lean_object* v___x_2901_; 
v_fst_2899_ = lean_ctor_get(v_a_2895_, 0);
lean_inc(v_fst_2899_);
lean_dec(v_a_2895_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v_fst_2899_);
v___x_2901_ = v___x_2846_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v_fst_2899_);
v___x_2901_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
lean_object* v___x_2903_; 
if (v_isShared_2898_ == 0)
{
lean_ctor_set(v___x_2897_, 0, v___x_2901_);
v___x_2903_ = v___x_2897_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v___x_2901_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2914_; 
lean_del_object(v___x_2846_);
v_a_2907_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2909_ = v___x_2894_;
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2894_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
else
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
lean_dec_ref(v_alts_2890_);
lean_del_object(v___x_2846_);
v___x_2915_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
return v___x_2916_;
}
}
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2917_ = l_Lean_Syntax_getArg(v___x_2883_, v___x_2882_);
lean_dec(v___x_2883_);
v___x_2918_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8));
v___x_2919_ = l_Lean_Syntax_isOfKind(v___x_2917_, v___x_2918_);
if (v___x_2919_ == 0)
{
if (v___x_2849_ == 0)
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_del_object(v___x_2846_);
lean_dec(v_val_2844_);
v___x_2920_ = lean_box(0);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
else
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v_alts_2924_; lean_object* v___x_2925_; uint8_t v___x_2926_; 
v___x_2922_ = lean_unsigned_to_nat(1u);
v___x_2923_ = l_Lean_Syntax_getArg(v_val_2844_, v___x_2922_);
lean_dec(v_val_2844_);
v_alts_2924_ = l_Lean_Syntax_getArgs(v___x_2923_);
lean_dec(v___x_2923_);
v___x_2925_ = lean_array_get_size(v_alts_2924_);
v___x_2926_ = lean_nat_dec_eq(v___x_2925_, v___x_2882_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___x_2927_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_2928_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_2925_, v_alts_2924_, v___x_2925_, v___x_2882_, v___x_2927_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_);
lean_dec_ref(v_alts_2924_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2940_; 
v_a_2929_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2931_ = v___x_2928_;
v_isShared_2932_ = v_isSharedCheck_2940_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2928_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2940_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v_fst_2933_; lean_object* v___x_2935_; 
v_fst_2933_ = lean_ctor_get(v_a_2929_, 0);
lean_inc(v_fst_2933_);
lean_dec(v_a_2929_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v_fst_2933_);
v___x_2935_ = v___x_2846_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_fst_2933_);
v___x_2935_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
lean_object* v___x_2937_; 
if (v_isShared_2932_ == 0)
{
lean_ctor_set(v___x_2931_, 0, v___x_2935_);
v___x_2937_ = v___x_2931_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v___x_2935_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_del_object(v___x_2846_);
v_a_2941_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2928_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2928_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
else
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
lean_dec_ref(v_alts_2924_);
lean_del_object(v___x_2846_);
v___x_2949_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
return v___x_2950_;
}
}
}
else
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
lean_del_object(v___x_2846_);
lean_dec(v_val_2844_);
v___x_2951_ = lean_box(0);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
}
}
}
else
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
lean_dec(v___x_2843_);
v___x_2954_ = lean_box(0);
v___x_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
return v___x_2955_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___boxed(lean_object* v_stx_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(v_stx_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_);
lean_dec(v_a_2962_);
lean_dec_ref(v_a_2961_);
lean_dec(v_a_2960_);
lean_dec_ref(v_a_2959_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_stx_2956_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0(lean_object* v_00_u03b2_2965_, lean_object* v_m_2966_, lean_object* v_a_2967_, lean_object* v_b_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_m_2966_, v_a_2967_, v_b_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(lean_object* v_00_u03b2_2970_, lean_object* v_m_2971_, lean_object* v_a_2972_){
_start:
{
uint8_t v___x_2973_; 
v___x_2973_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_m_2971_, v_a_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___boxed(lean_object* v_00_u03b2_2974_, lean_object* v_m_2975_, lean_object* v_a_2976_){
_start:
{
uint8_t v_res_2977_; lean_object* v_r_2978_; 
v_res_2977_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(v_00_u03b2_2974_, v_m_2975_, v_a_2976_);
lean_dec(v_a_2976_);
lean_dec_ref(v_m_2975_);
v_r_2978_ = lean_box(v_res_2977_);
return v_r_2978_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(lean_object* v_upperBound_2979_, lean_object* v_alts_2980_, lean_object* v___x_2981_, lean_object* v_inst_2982_, lean_object* v_R_2983_, lean_object* v_a_2984_, lean_object* v_b_2985_, lean_object* v_c_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_){
_start:
{
lean_object* v___x_2994_; 
v___x_2994_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v_upperBound_2979_, v_alts_2980_, v___x_2981_, v_a_2984_, v_b_2985_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
return v___x_2994_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___boxed(lean_object* v_upperBound_2995_, lean_object* v_alts_2996_, lean_object* v___x_2997_, lean_object* v_inst_2998_, lean_object* v_R_2999_, lean_object* v_a_3000_, lean_object* v_b_3001_, lean_object* v_c_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v_res_3010_; 
v_res_3010_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(v_upperBound_2995_, v_alts_2996_, v___x_2997_, v_inst_2998_, v_R_2999_, v_a_3000_, v_b_3001_, v_c_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_);
lean_dec(v___y_3008_);
lean_dec_ref(v___y_3007_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___x_2997_);
lean_dec_ref(v_alts_2996_);
lean_dec(v_upperBound_2995_);
return v_res_3010_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(lean_object* v_00_u03b2_3011_, lean_object* v_a_3012_, lean_object* v_x_3013_){
_start:
{
uint8_t v___x_3014_; 
v___x_3014_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_3012_, v_x_3013_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3015_, lean_object* v_a_3016_, lean_object* v_x_3017_){
_start:
{
uint8_t v_res_3018_; lean_object* v_r_3019_; 
v_res_3018_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(v_00_u03b2_3015_, v_a_3016_, v_x_3017_);
lean_dec(v_x_3017_);
lean_dec(v_a_3016_);
v_r_3019_ = lean_box(v_res_3018_);
return v_r_3019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1(lean_object* v_00_u03b2_3020_, lean_object* v_data_3021_){
_start:
{
lean_object* v___x_3022_; 
v___x_3022_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_data_3021_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2(lean_object* v_00_u03b2_3023_, lean_object* v_a_3024_, lean_object* v_b_3025_, lean_object* v_x_3026_){
_start:
{
lean_object* v___x_3027_; 
v___x_3027_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_3024_, v_b_3025_, v_x_3026_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3028_, lean_object* v_i_3029_, lean_object* v_source_3030_, lean_object* v_target_3031_){
_start:
{
lean_object* v___x_3032_; 
v___x_3032_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(v_i_3029_, v_source_3030_, v_target_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_3033_, lean_object* v_x_3034_, lean_object* v_x_3035_){
_start:
{
lean_object* v___x_3036_; 
v___x_3036_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(v_x_3034_, v_x_3035_);
return v___x_3036_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(lean_object* v_a_3037_, lean_object* v_x_3038_){
_start:
{
if (lean_obj_tag(v_x_3038_) == 0)
{
lean_object* v___x_3039_; 
v___x_3039_ = lean_box(0);
return v___x_3039_;
}
else
{
lean_object* v_key_3040_; lean_object* v_value_3041_; lean_object* v_tail_3042_; uint8_t v___x_3043_; 
v_key_3040_ = lean_ctor_get(v_x_3038_, 0);
v_value_3041_ = lean_ctor_get(v_x_3038_, 1);
v_tail_3042_ = lean_ctor_get(v_x_3038_, 2);
v___x_3043_ = lean_nat_dec_eq(v_key_3040_, v_a_3037_);
if (v___x_3043_ == 0)
{
v_x_3038_ = v_tail_3042_;
goto _start;
}
else
{
lean_object* v___x_3045_; 
lean_inc(v_value_3041_);
v___x_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3045_, 0, v_value_3041_);
return v___x_3045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg___boxed(lean_object* v_a_3046_, lean_object* v_x_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3046_, v_x_3047_);
lean_dec(v_x_3047_);
lean_dec(v_a_3046_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object* v_m_3049_, lean_object* v_a_3050_){
_start:
{
lean_object* v_buckets_3051_; lean_object* v___x_3052_; uint64_t v___x_3053_; uint64_t v___x_3054_; uint64_t v___x_3055_; uint64_t v_fold_3056_; uint64_t v___x_3057_; uint64_t v___x_3058_; uint64_t v___x_3059_; size_t v___x_3060_; size_t v___x_3061_; size_t v___x_3062_; size_t v___x_3063_; size_t v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v_buckets_3051_ = lean_ctor_get(v_m_3049_, 1);
v___x_3052_ = lean_array_get_size(v_buckets_3051_);
v___x_3053_ = lean_uint64_of_nat(v_a_3050_);
v___x_3054_ = 32ULL;
v___x_3055_ = lean_uint64_shift_right(v___x_3053_, v___x_3054_);
v_fold_3056_ = lean_uint64_xor(v___x_3053_, v___x_3055_);
v___x_3057_ = 16ULL;
v___x_3058_ = lean_uint64_shift_right(v_fold_3056_, v___x_3057_);
v___x_3059_ = lean_uint64_xor(v_fold_3056_, v___x_3058_);
v___x_3060_ = lean_uint64_to_usize(v___x_3059_);
v___x_3061_ = lean_usize_of_nat(v___x_3052_);
v___x_3062_ = ((size_t)1ULL);
v___x_3063_ = lean_usize_sub(v___x_3061_, v___x_3062_);
v___x_3064_ = lean_usize_land(v___x_3060_, v___x_3063_);
v___x_3065_ = lean_array_uget_borrowed(v_buckets_3051_, v___x_3064_);
v___x_3066_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3050_, v___x_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg___boxed(lean_object* v_m_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_m_3067_, v_a_3068_);
lean_dec(v_a_3068_);
lean_dec_ref(v_m_3067_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(lean_object* v_m_3070_, lean_object* v_a_3071_, lean_object* v_b_3072_){
_start:
{
lean_object* v_size_3073_; lean_object* v_buckets_3074_; lean_object* v___x_3075_; uint64_t v___x_3076_; uint64_t v___x_3077_; uint64_t v___x_3078_; uint64_t v_fold_3079_; uint64_t v___x_3080_; uint64_t v___x_3081_; uint64_t v___x_3082_; size_t v___x_3083_; size_t v___x_3084_; size_t v___x_3085_; size_t v___x_3086_; size_t v___x_3087_; lean_object* v_bkt_3088_; uint8_t v___x_3089_; 
v_size_3073_ = lean_ctor_get(v_m_3070_, 0);
v_buckets_3074_ = lean_ctor_get(v_m_3070_, 1);
v___x_3075_ = lean_array_get_size(v_buckets_3074_);
v___x_3076_ = lean_uint64_of_nat(v_a_3071_);
v___x_3077_ = 32ULL;
v___x_3078_ = lean_uint64_shift_right(v___x_3076_, v___x_3077_);
v_fold_3079_ = lean_uint64_xor(v___x_3076_, v___x_3078_);
v___x_3080_ = 16ULL;
v___x_3081_ = lean_uint64_shift_right(v_fold_3079_, v___x_3080_);
v___x_3082_ = lean_uint64_xor(v_fold_3079_, v___x_3081_);
v___x_3083_ = lean_uint64_to_usize(v___x_3082_);
v___x_3084_ = lean_usize_of_nat(v___x_3075_);
v___x_3085_ = ((size_t)1ULL);
v___x_3086_ = lean_usize_sub(v___x_3084_, v___x_3085_);
v___x_3087_ = lean_usize_land(v___x_3083_, v___x_3086_);
v_bkt_3088_ = lean_array_uget_borrowed(v_buckets_3074_, v___x_3087_);
v___x_3089_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_3071_, v_bkt_3088_);
if (v___x_3089_ == 0)
{
lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3110_; 
lean_inc_ref(v_buckets_3074_);
lean_inc(v_size_3073_);
v_isSharedCheck_3110_ = !lean_is_exclusive(v_m_3070_);
if (v_isSharedCheck_3110_ == 0)
{
lean_object* v_unused_3111_; lean_object* v_unused_3112_; 
v_unused_3111_ = lean_ctor_get(v_m_3070_, 1);
lean_dec(v_unused_3111_);
v_unused_3112_ = lean_ctor_get(v_m_3070_, 0);
lean_dec(v_unused_3112_);
v___x_3091_ = v_m_3070_;
v_isShared_3092_ = v_isSharedCheck_3110_;
goto v_resetjp_3090_;
}
else
{
lean_dec(v_m_3070_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3110_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3093_; lean_object* v_size_x27_3094_; lean_object* v___x_3095_; lean_object* v_buckets_x27_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; uint8_t v___x_3102_; 
v___x_3093_ = lean_unsigned_to_nat(1u);
v_size_x27_3094_ = lean_nat_add(v_size_3073_, v___x_3093_);
lean_dec(v_size_3073_);
lean_inc(v_bkt_3088_);
v___x_3095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3095_, 0, v_a_3071_);
lean_ctor_set(v___x_3095_, 1, v_b_3072_);
lean_ctor_set(v___x_3095_, 2, v_bkt_3088_);
v_buckets_x27_3096_ = lean_array_uset(v_buckets_3074_, v___x_3087_, v___x_3095_);
v___x_3097_ = lean_unsigned_to_nat(4u);
v___x_3098_ = lean_nat_mul(v_size_x27_3094_, v___x_3097_);
v___x_3099_ = lean_unsigned_to_nat(3u);
v___x_3100_ = lean_nat_div(v___x_3098_, v___x_3099_);
lean_dec(v___x_3098_);
v___x_3101_ = lean_array_get_size(v_buckets_x27_3096_);
v___x_3102_ = lean_nat_dec_le(v___x_3100_, v___x_3101_);
lean_dec(v___x_3100_);
if (v___x_3102_ == 0)
{
lean_object* v_val_3103_; lean_object* v___x_3105_; 
v_val_3103_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_buckets_x27_3096_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 1, v_val_3103_);
lean_ctor_set(v___x_3091_, 0, v_size_x27_3094_);
v___x_3105_ = v___x_3091_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_size_x27_3094_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v_val_3103_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
else
{
lean_object* v___x_3108_; 
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 1, v_buckets_x27_3096_);
lean_ctor_set(v___x_3091_, 0, v_size_x27_3094_);
v___x_3108_ = v___x_3091_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_size_x27_3094_);
lean_ctor_set(v_reuseFailAlloc_3109_, 1, v_buckets_x27_3096_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
else
{
lean_dec(v_b_3072_);
lean_dec(v_a_3071_);
return v_m_3070_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(lean_object* v_upperBound_3113_, lean_object* v_alts_3114_, lean_object* v_invariants_3115_, lean_object* v_a_3116_, lean_object* v_b_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_a_3126_; uint8_t v___x_3130_; 
v___x_3130_ = lean_nat_dec_lt(v_a_3116_, v_upperBound_3113_);
if (v___x_3130_ == 0)
{
lean_object* v___x_3131_; 
lean_dec(v_a_3116_);
v___x_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3131_, 0, v_b_3117_);
return v___x_3131_;
}
else
{
lean_object* v___x_3132_; lean_object* v___x_3133_; uint8_t v___x_3134_; 
v___x_3132_ = lean_unsigned_to_nat(1u);
v___x_3133_ = lean_nat_add(v_a_3116_, v___x_3132_);
v___x_3134_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_b_3117_, v___x_3133_);
if (v___x_3134_ == 0)
{
lean_object* v___x_3135_; 
v___x_3135_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_alts_3114_, v___x_3133_);
if (lean_obj_tag(v___x_3135_) == 1)
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
lean_dec_ref_known(v___x_3135_, 1);
v___x_3136_ = lean_array_fget_borrowed(v_invariants_3115_, v_a_3116_);
lean_inc(v___x_3136_);
v___x_3137_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_alts_3114_, v___x_3133_, v___x_3136_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
lean_dec_ref_known(v___x_3137_, 1);
v___x_3138_ = lean_box(0);
v___x_3139_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(v_b_3117_, v___x_3133_, v___x_3138_);
v_a_3126_ = v___x_3139_;
goto v___jp_3125_;
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v___x_3133_);
lean_dec_ref(v_b_3117_);
lean_dec(v_a_3116_);
v_a_3140_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3137_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3137_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
else
{
lean_dec(v___x_3135_);
lean_dec(v___x_3133_);
v_a_3126_ = v_b_3117_;
goto v___jp_3125_;
}
}
else
{
lean_dec(v___x_3133_);
v_a_3126_ = v_b_3117_;
goto v___jp_3125_;
}
}
v___jp_3125_:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3127_ = lean_unsigned_to_nat(1u);
v___x_3128_ = lean_nat_add(v_a_3116_, v___x_3127_);
lean_dec(v_a_3116_);
v_a_3116_ = v___x_3128_;
v_b_3117_ = v_a_3126_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg___boxed(lean_object* v_upperBound_3148_, lean_object* v_alts_3149_, lean_object* v_invariants_3150_, lean_object* v_a_3151_, lean_object* v_b_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v_upperBound_3148_, v_alts_3149_, v_invariants_3150_, v_a_3151_, v_b_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v_invariants_3150_);
lean_dec_ref(v_alts_3149_);
lean_dec(v_upperBound_3148_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(lean_object* v_ref_3161_, lean_object* v_msgData_3162_, uint8_t v_severity_3163_, uint8_t v_isSilent_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v___y_3171_; uint8_t v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; uint8_t v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3207_; lean_object* v___y_3208_; uint8_t v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3211_; uint8_t v___y_3212_; uint8_t v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3232_; lean_object* v___y_3233_; uint8_t v___y_3234_; lean_object* v___y_3235_; uint8_t v___y_3236_; lean_object* v___y_3237_; uint8_t v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3243_; lean_object* v___y_3244_; uint8_t v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; uint8_t v___y_3248_; uint8_t v___y_3249_; uint8_t v___x_3254_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v___y_3258_; lean_object* v___y_3259_; uint8_t v___y_3260_; uint8_t v___y_3261_; uint8_t v___y_3262_; uint8_t v___y_3264_; uint8_t v___x_3279_; 
v___x_3254_ = 2;
v___x_3279_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3163_, v___x_3254_);
if (v___x_3279_ == 0)
{
v___y_3264_ = v___x_3279_;
goto v___jp_3263_;
}
else
{
uint8_t v___x_3280_; 
lean_inc_ref(v_msgData_3162_);
v___x_3280_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3162_);
v___y_3264_ = v___x_3280_;
goto v___jp_3263_;
}
v___jp_3170_:
{
lean_object* v___x_3180_; lean_object* v_currNamespace_3181_; lean_object* v_openDecls_3182_; lean_object* v_env_3183_; lean_object* v_nextMacroScope_3184_; lean_object* v_ngen_3185_; lean_object* v_auxDeclNGen_3186_; lean_object* v_traceState_3187_; lean_object* v_cache_3188_; lean_object* v_messages_3189_; lean_object* v_infoState_3190_; lean_object* v_snapshotTasks_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3205_; 
v___x_3180_ = lean_st_ref_take(v___y_3179_);
v_currNamespace_3181_ = lean_ctor_get(v___y_3178_, 6);
v_openDecls_3182_ = lean_ctor_get(v___y_3178_, 7);
v_env_3183_ = lean_ctor_get(v___x_3180_, 0);
v_nextMacroScope_3184_ = lean_ctor_get(v___x_3180_, 1);
v_ngen_3185_ = lean_ctor_get(v___x_3180_, 2);
v_auxDeclNGen_3186_ = lean_ctor_get(v___x_3180_, 3);
v_traceState_3187_ = lean_ctor_get(v___x_3180_, 4);
v_cache_3188_ = lean_ctor_get(v___x_3180_, 5);
v_messages_3189_ = lean_ctor_get(v___x_3180_, 6);
v_infoState_3190_ = lean_ctor_get(v___x_3180_, 7);
v_snapshotTasks_3191_ = lean_ctor_get(v___x_3180_, 8);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3180_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3193_ = v___x_3180_;
v_isShared_3194_ = v_isSharedCheck_3205_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_snapshotTasks_3191_);
lean_inc(v_infoState_3190_);
lean_inc(v_messages_3189_);
lean_inc(v_cache_3188_);
lean_inc(v_traceState_3187_);
lean_inc(v_auxDeclNGen_3186_);
lean_inc(v_ngen_3185_);
lean_inc(v_nextMacroScope_3184_);
lean_inc(v_env_3183_);
lean_dec(v___x_3180_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3205_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3200_; 
lean_inc(v_openDecls_3182_);
lean_inc(v_currNamespace_3181_);
v___x_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3195_, 0, v_currNamespace_3181_);
lean_ctor_set(v___x_3195_, 1, v_openDecls_3182_);
v___x_3196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
lean_ctor_set(v___x_3196_, 1, v___y_3171_);
lean_inc_ref(v___y_3176_);
lean_inc_ref(v___y_3175_);
v___x_3197_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3197_, 0, v___y_3175_);
lean_ctor_set(v___x_3197_, 1, v___y_3173_);
lean_ctor_set(v___x_3197_, 2, v___y_3174_);
lean_ctor_set(v___x_3197_, 3, v___y_3176_);
lean_ctor_set(v___x_3197_, 4, v___x_3196_);
lean_ctor_set_uint8(v___x_3197_, sizeof(void*)*5, v___y_3172_);
lean_ctor_set_uint8(v___x_3197_, sizeof(void*)*5 + 1, v___y_3177_);
lean_ctor_set_uint8(v___x_3197_, sizeof(void*)*5 + 2, v_isSilent_3164_);
v___x_3198_ = l_Lean_MessageLog_add(v___x_3197_, v_messages_3189_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 6, v___x_3198_);
v___x_3200_ = v___x_3193_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_env_3183_);
lean_ctor_set(v_reuseFailAlloc_3204_, 1, v_nextMacroScope_3184_);
lean_ctor_set(v_reuseFailAlloc_3204_, 2, v_ngen_3185_);
lean_ctor_set(v_reuseFailAlloc_3204_, 3, v_auxDeclNGen_3186_);
lean_ctor_set(v_reuseFailAlloc_3204_, 4, v_traceState_3187_);
lean_ctor_set(v_reuseFailAlloc_3204_, 5, v_cache_3188_);
lean_ctor_set(v_reuseFailAlloc_3204_, 6, v___x_3198_);
lean_ctor_set(v_reuseFailAlloc_3204_, 7, v_infoState_3190_);
lean_ctor_set(v_reuseFailAlloc_3204_, 8, v_snapshotTasks_3191_);
v___x_3200_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = lean_st_ref_set(v___y_3179_, v___x_3200_);
v___x_3202_ = lean_box(0);
v___x_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
return v___x_3203_;
}
}
}
v___jp_3206_:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3230_; 
v___x_3215_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3162_);
v___x_3216_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v___x_3215_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_);
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3230_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3230_ == 0)
{
v___x_3219_ = v___x_3216_;
v_isShared_3220_ = v_isSharedCheck_3230_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3216_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3230_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
lean_inc_ref_n(v___y_3208_, 2);
v___x_3221_ = l_Lean_FileMap_toPosition(v___y_3208_, v___y_3211_);
lean_dec(v___y_3211_);
v___x_3222_ = l_Lean_FileMap_toPosition(v___y_3208_, v___y_3214_);
lean_dec(v___y_3214_);
v___x_3223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3222_);
v___x_3224_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_3212_ == 0)
{
lean_del_object(v___x_3219_);
lean_dec_ref(v___y_3207_);
v___y_3171_ = v_a_3217_;
v___y_3172_ = v___y_3209_;
v___y_3173_ = v___x_3221_;
v___y_3174_ = v___x_3223_;
v___y_3175_ = v___y_3210_;
v___y_3176_ = v___x_3224_;
v___y_3177_ = v___y_3213_;
v___y_3178_ = v___y_3167_;
v___y_3179_ = v___y_3168_;
goto v___jp_3170_;
}
else
{
uint8_t v___x_3225_; 
lean_inc(v_a_3217_);
v___x_3225_ = l_Lean_MessageData_hasTag(v___y_3207_, v_a_3217_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3226_; lean_object* v___x_3228_; 
lean_dec_ref_known(v___x_3223_, 1);
lean_dec_ref(v___x_3221_);
lean_dec(v_a_3217_);
v___x_3226_ = lean_box(0);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 0, v___x_3226_);
v___x_3228_ = v___x_3219_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3226_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
else
{
lean_del_object(v___x_3219_);
v___y_3171_ = v_a_3217_;
v___y_3172_ = v___y_3209_;
v___y_3173_ = v___x_3221_;
v___y_3174_ = v___x_3223_;
v___y_3175_ = v___y_3210_;
v___y_3176_ = v___x_3224_;
v___y_3177_ = v___y_3213_;
v___y_3178_ = v___y_3167_;
v___y_3179_ = v___y_3168_;
goto v___jp_3170_;
}
}
}
}
v___jp_3231_:
{
lean_object* v___x_3240_; 
v___x_3240_ = l_Lean_Syntax_getTailPos_x3f(v___y_3237_, v___y_3234_);
lean_dec(v___y_3237_);
if (lean_obj_tag(v___x_3240_) == 0)
{
lean_inc(v___y_3239_);
v___y_3207_ = v___y_3232_;
v___y_3208_ = v___y_3233_;
v___y_3209_ = v___y_3234_;
v___y_3210_ = v___y_3235_;
v___y_3211_ = v___y_3239_;
v___y_3212_ = v___y_3236_;
v___y_3213_ = v___y_3238_;
v___y_3214_ = v___y_3239_;
goto v___jp_3206_;
}
else
{
lean_object* v_val_3241_; 
v_val_3241_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_val_3241_);
lean_dec_ref_known(v___x_3240_, 1);
v___y_3207_ = v___y_3232_;
v___y_3208_ = v___y_3233_;
v___y_3209_ = v___y_3234_;
v___y_3210_ = v___y_3235_;
v___y_3211_ = v___y_3239_;
v___y_3212_ = v___y_3236_;
v___y_3213_ = v___y_3238_;
v___y_3214_ = v_val_3241_;
goto v___jp_3206_;
}
}
v___jp_3242_:
{
lean_object* v_ref_3250_; lean_object* v___x_3251_; 
v_ref_3250_ = l_Lean_replaceRef(v_ref_3161_, v___y_3246_);
v___x_3251_ = l_Lean_Syntax_getPos_x3f(v_ref_3250_, v___y_3245_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v___x_3252_; 
v___x_3252_ = lean_unsigned_to_nat(0u);
v___y_3232_ = v___y_3243_;
v___y_3233_ = v___y_3244_;
v___y_3234_ = v___y_3245_;
v___y_3235_ = v___y_3247_;
v___y_3236_ = v___y_3248_;
v___y_3237_ = v_ref_3250_;
v___y_3238_ = v___y_3249_;
v___y_3239_ = v___x_3252_;
goto v___jp_3231_;
}
else
{
lean_object* v_val_3253_; 
v_val_3253_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_val_3253_);
lean_dec_ref_known(v___x_3251_, 1);
v___y_3232_ = v___y_3243_;
v___y_3233_ = v___y_3244_;
v___y_3234_ = v___y_3245_;
v___y_3235_ = v___y_3247_;
v___y_3236_ = v___y_3248_;
v___y_3237_ = v_ref_3250_;
v___y_3238_ = v___y_3249_;
v___y_3239_ = v_val_3253_;
goto v___jp_3231_;
}
}
v___jp_3255_:
{
if (v___y_3262_ == 0)
{
v___y_3243_ = v___y_3258_;
v___y_3244_ = v___y_3256_;
v___y_3245_ = v___y_3261_;
v___y_3246_ = v___y_3257_;
v___y_3247_ = v___y_3259_;
v___y_3248_ = v___y_3260_;
v___y_3249_ = v_severity_3163_;
goto v___jp_3242_;
}
else
{
v___y_3243_ = v___y_3258_;
v___y_3244_ = v___y_3256_;
v___y_3245_ = v___y_3261_;
v___y_3246_ = v___y_3257_;
v___y_3247_ = v___y_3259_;
v___y_3248_ = v___y_3260_;
v___y_3249_ = v___x_3254_;
goto v___jp_3242_;
}
}
v___jp_3263_:
{
if (v___y_3264_ == 0)
{
lean_object* v_fileName_3265_; lean_object* v_fileMap_3266_; lean_object* v_options_3267_; lean_object* v_ref_3268_; uint8_t v_suppressElabErrors_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___f_3272_; uint8_t v___x_3273_; uint8_t v___x_3274_; 
v_fileName_3265_ = lean_ctor_get(v___y_3167_, 0);
v_fileMap_3266_ = lean_ctor_get(v___y_3167_, 1);
v_options_3267_ = lean_ctor_get(v___y_3167_, 2);
v_ref_3268_ = lean_ctor_get(v___y_3167_, 5);
v_suppressElabErrors_3269_ = lean_ctor_get_uint8(v___y_3167_, sizeof(void*)*14 + 1);
v___x_3270_ = lean_box(v___y_3264_);
v___x_3271_ = lean_box(v_suppressElabErrors_3269_);
v___f_3272_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3272_, 0, v___x_3270_);
lean_closure_set(v___f_3272_, 1, v___x_3271_);
v___x_3273_ = 1;
v___x_3274_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3163_, v___x_3273_);
if (v___x_3274_ == 0)
{
v___y_3256_ = v_fileMap_3266_;
v___y_3257_ = v_ref_3268_;
v___y_3258_ = v___f_3272_;
v___y_3259_ = v_fileName_3265_;
v___y_3260_ = v_suppressElabErrors_3269_;
v___y_3261_ = v___y_3264_;
v___y_3262_ = v___x_3274_;
goto v___jp_3255_;
}
else
{
lean_object* v___x_3275_; uint8_t v___x_3276_; 
v___x_3275_ = l_Lean_warningAsError;
v___x_3276_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_3267_, v___x_3275_);
v___y_3256_ = v_fileMap_3266_;
v___y_3257_ = v_ref_3268_;
v___y_3258_ = v___f_3272_;
v___y_3259_ = v_fileName_3265_;
v___y_3260_ = v_suppressElabErrors_3269_;
v___y_3261_ = v___y_3264_;
v___y_3262_ = v___x_3276_;
goto v___jp_3255_;
}
}
else
{
lean_object* v___x_3277_; lean_object* v___x_3278_; 
lean_dec_ref(v_msgData_3162_);
v___x_3277_ = lean_box(0);
v___x_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3277_);
return v___x_3278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg___boxed(lean_object* v_ref_3281_, lean_object* v_msgData_3282_, lean_object* v_severity_3283_, lean_object* v_isSilent_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
uint8_t v_severity_boxed_3290_; uint8_t v_isSilent_boxed_3291_; lean_object* v_res_3292_; 
v_severity_boxed_3290_ = lean_unbox(v_severity_3283_);
v_isSilent_boxed_3291_ = lean_unbox(v_isSilent_3284_);
v_res_3292_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3281_, v_msgData_3282_, v_severity_boxed_3290_, v_isSilent_boxed_3291_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_);
lean_dec(v___y_3288_);
lean_dec_ref(v___y_3287_);
lean_dec(v___y_3286_);
lean_dec_ref(v___y_3285_);
lean_dec(v_ref_3281_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(lean_object* v_ref_3293_, lean_object* v_msgData_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_){
_start:
{
uint8_t v___x_3302_; uint8_t v___x_3303_; lean_object* v___x_3304_; 
v___x_3302_ = 1;
v___x_3303_ = 0;
v___x_3304_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3293_, v_msgData_3294_, v___x_3302_, v___x_3303_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0___boxed(lean_object* v_ref_3305_, lean_object* v_msgData_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(v_ref_3305_, v_msgData_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v_ref_3305_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(lean_object* v_a_3317_, lean_object* v_as_3318_, size_t v_sz_3319_, size_t v_i_3320_, lean_object* v_b_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v_a_3330_; uint8_t v___x_3334_; 
v___x_3334_ = lean_usize_dec_lt(v_i_3320_, v_sz_3319_);
if (v___x_3334_ == 0)
{
lean_object* v___x_3335_; 
v___x_3335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3335_, 0, v_b_3321_);
return v___x_3335_;
}
else
{
lean_object* v_a_3336_; lean_object* v_fst_3337_; lean_object* v_snd_3338_; lean_object* v___x_3339_; uint8_t v___x_3340_; 
v_a_3336_ = lean_array_uget_borrowed(v_as_3318_, v_i_3320_);
v_fst_3337_ = lean_ctor_get(v_a_3336_, 0);
v_snd_3338_ = lean_ctor_get(v_a_3336_, 1);
v___x_3339_ = lean_box(0);
v___x_3340_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_a_3317_, v_fst_3337_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3341_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0));
lean_inc(v_fst_3337_);
v___x_3342_ = l_Nat_reprFast(v_fst_3337_);
v___x_3343_ = lean_string_append(v___x_3341_, v___x_3342_);
lean_dec_ref(v___x_3342_);
v___x_3344_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1));
v___x_3345_ = lean_string_append(v___x_3343_, v___x_3344_);
v___x_3346_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3346_, 0, v___x_3345_);
v___x_3347_ = l_Lean_MessageData_ofFormat(v___x_3346_);
v___x_3348_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(v_snd_3338_, v___x_3347_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_dec_ref_known(v___x_3348_, 1);
v_a_3330_ = v___x_3339_;
goto v___jp_3329_;
}
else
{
return v___x_3348_;
}
}
else
{
v_a_3330_ = v___x_3339_;
goto v___jp_3329_;
}
}
v___jp_3329_:
{
size_t v___x_3331_; size_t v___x_3332_; 
v___x_3331_ = ((size_t)1ULL);
v___x_3332_ = lean_usize_add(v_i_3320_, v___x_3331_);
v_i_3320_ = v___x_3332_;
v_b_3321_ = v_a_3330_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___boxed(lean_object* v_a_3349_, lean_object* v_as_3350_, lean_object* v_sz_3351_, lean_object* v_i_3352_, lean_object* v_b_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
size_t v_sz_boxed_3361_; size_t v_i_boxed_3362_; lean_object* v_res_3363_; 
v_sz_boxed_3361_ = lean_unbox_usize(v_sz_3351_);
lean_dec(v_sz_3351_);
v_i_boxed_3362_ = lean_unbox_usize(v_i_3352_);
lean_dec(v_i_3352_);
v_res_3363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(v_a_3349_, v_as_3350_, v_sz_boxed_3361_, v_i_boxed_3362_, v_b_3353_, v___y_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_);
lean_dec(v___y_3359_);
lean_dec_ref(v___y_3358_);
lean_dec(v___y_3357_);
lean_dec_ref(v___y_3356_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec_ref(v_as_3350_);
lean_dec_ref(v_a_3349_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(lean_object* v_x_3364_, lean_object* v_x_3365_){
_start:
{
if (lean_obj_tag(v_x_3365_) == 0)
{
return v_x_3364_;
}
else
{
lean_object* v_key_3366_; lean_object* v_value_3367_; lean_object* v_tail_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v_key_3366_ = lean_ctor_get(v_x_3365_, 0);
v_value_3367_ = lean_ctor_get(v_x_3365_, 1);
v_tail_3368_ = lean_ctor_get(v_x_3365_, 2);
lean_inc(v_value_3367_);
lean_inc(v_key_3366_);
v___x_3369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3369_, 0, v_key_3366_);
lean_ctor_set(v___x_3369_, 1, v_value_3367_);
v___x_3370_ = lean_array_push(v_x_3364_, v___x_3369_);
v_x_3364_ = v___x_3370_;
v_x_3365_ = v_tail_3368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2___boxed(lean_object* v_x_3372_, lean_object* v_x_3373_){
_start:
{
lean_object* v_res_3374_; 
v_res_3374_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(v_x_3372_, v_x_3373_);
lean_dec(v_x_3373_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(lean_object* v_as_3375_, size_t v_i_3376_, size_t v_stop_3377_, lean_object* v_b_3378_){
_start:
{
uint8_t v___x_3379_; 
v___x_3379_ = lean_usize_dec_eq(v_i_3376_, v_stop_3377_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; lean_object* v___x_3381_; size_t v___x_3382_; size_t v___x_3383_; 
v___x_3380_ = lean_array_uget_borrowed(v_as_3375_, v_i_3376_);
v___x_3381_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(v_b_3378_, v___x_3380_);
v___x_3382_ = ((size_t)1ULL);
v___x_3383_ = lean_usize_add(v_i_3376_, v___x_3382_);
v_i_3376_ = v___x_3383_;
v_b_3378_ = v___x_3381_;
goto _start;
}
else
{
return v_b_3378_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3___boxed(lean_object* v_as_3385_, lean_object* v_i_3386_, lean_object* v_stop_3387_, lean_object* v_b_3388_){
_start:
{
size_t v_i_boxed_3389_; size_t v_stop_boxed_3390_; lean_object* v_res_3391_; 
v_i_boxed_3389_ = lean_unbox_usize(v_i_3386_);
lean_dec(v_i_3386_);
v_stop_boxed_3390_ = lean_unbox_usize(v_stop_3387_);
lean_dec(v_stop_3387_);
v_res_3391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_as_3385_, v_i_boxed_3389_, v_stop_boxed_3390_, v_b_3388_);
lean_dec_ref(v_as_3385_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(lean_object* v_alts_3392_, lean_object* v_invariants_3393_, lean_object* v_inlineHandled_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3402_ = lean_unsigned_to_nat(0u);
v___x_3403_ = lean_array_get_size(v_invariants_3393_);
v___x_3404_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v___x_3403_, v_alts_3392_, v_invariants_3393_, v___x_3402_, v_inlineHandled_3394_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_);
if (lean_obj_tag(v___x_3404_) == 0)
{
lean_object* v_a_3405_; lean_object* v___y_3407_; lean_object* v_size_3420_; lean_object* v_buckets_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; uint8_t v___x_3424_; 
v_a_3405_ = lean_ctor_get(v___x_3404_, 0);
lean_inc(v_a_3405_);
lean_dec_ref_known(v___x_3404_, 1);
v_size_3420_ = lean_ctor_get(v_alts_3392_, 0);
v_buckets_3421_ = lean_ctor_get(v_alts_3392_, 1);
v___x_3422_ = lean_mk_empty_array_with_capacity(v_size_3420_);
v___x_3423_ = lean_array_get_size(v_buckets_3421_);
v___x_3424_ = lean_nat_dec_lt(v___x_3402_, v___x_3423_);
if (v___x_3424_ == 0)
{
v___y_3407_ = v___x_3422_;
goto v___jp_3406_;
}
else
{
uint8_t v___x_3425_; 
v___x_3425_ = lean_nat_dec_le(v___x_3423_, v___x_3423_);
if (v___x_3425_ == 0)
{
if (v___x_3424_ == 0)
{
v___y_3407_ = v___x_3422_;
goto v___jp_3406_;
}
else
{
size_t v___x_3426_; size_t v___x_3427_; lean_object* v___x_3428_; 
v___x_3426_ = ((size_t)0ULL);
v___x_3427_ = lean_usize_of_nat(v___x_3423_);
v___x_3428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_buckets_3421_, v___x_3426_, v___x_3427_, v___x_3422_);
v___y_3407_ = v___x_3428_;
goto v___jp_3406_;
}
}
else
{
size_t v___x_3429_; size_t v___x_3430_; lean_object* v___x_3431_; 
v___x_3429_ = ((size_t)0ULL);
v___x_3430_ = lean_usize_of_nat(v___x_3423_);
v___x_3431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_buckets_3421_, v___x_3429_, v___x_3430_, v___x_3422_);
v___y_3407_ = v___x_3431_;
goto v___jp_3406_;
}
}
v___jp_3406_:
{
lean_object* v___x_3408_; size_t v_sz_3409_; size_t v___x_3410_; lean_object* v___x_3411_; 
v___x_3408_ = lean_box(0);
v_sz_3409_ = lean_array_size(v___y_3407_);
v___x_3410_ = ((size_t)0ULL);
v___x_3411_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(v_a_3405_, v___y_3407_, v_sz_3409_, v___x_3410_, v___x_3408_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_);
lean_dec_ref(v___y_3407_);
lean_dec(v_a_3405_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3418_ == 0)
{
lean_object* v_unused_3419_; 
v_unused_3419_ = lean_ctor_get(v___x_3411_, 0);
lean_dec(v_unused_3419_);
v___x_3413_ = v___x_3411_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_dec(v___x_3411_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
lean_ctor_set(v___x_3413_, 0, v___x_3408_);
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v___x_3408_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
else
{
return v___x_3411_;
}
}
}
else
{
lean_object* v_a_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3439_; 
v_a_3432_ = lean_ctor_get(v___x_3404_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3404_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3434_ = v___x_3404_;
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_a_3432_);
lean_dec(v___x_3404_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
lean_object* v___x_3437_; 
if (v_isShared_3435_ == 0)
{
v___x_3437_ = v___x_3434_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_a_3432_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants___boxed(lean_object* v_alts_3440_, lean_object* v_invariants_3441_, lean_object* v_inlineHandled_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_alts_3440_, v_invariants_3441_, v_inlineHandled_3442_, v_a_3443_, v_a_3444_, v_a_3445_, v_a_3446_, v_a_3447_, v_a_3448_);
lean_dec(v_a_3448_);
lean_dec_ref(v_a_3447_);
lean_dec(v_a_3446_);
lean_dec_ref(v_a_3445_);
lean_dec(v_a_3444_);
lean_dec_ref(v_a_3443_);
lean_dec_ref(v_invariants_3441_);
lean_dec_ref(v_alts_3440_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(lean_object* v_00_u03b2_3451_, lean_object* v_m_3452_, lean_object* v_a_3453_){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_m_3452_, v_a_3453_);
return v___x_3454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___boxed(lean_object* v_00_u03b2_3455_, lean_object* v_m_3456_, lean_object* v_a_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(v_00_u03b2_3455_, v_m_3456_, v_a_3457_);
lean_dec(v_a_3457_);
lean_dec_ref(v_m_3456_);
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5(lean_object* v_00_u03b2_3459_, lean_object* v_m_3460_, lean_object* v_a_3461_, lean_object* v_b_3462_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(v_m_3460_, v_a_3461_, v_b_3462_);
return v___x_3463_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(lean_object* v_upperBound_3464_, lean_object* v_alts_3465_, lean_object* v_invariants_3466_, lean_object* v_inst_3467_, lean_object* v_R_3468_, lean_object* v_a_3469_, lean_object* v_b_3470_, lean_object* v_c_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v___x_3479_; 
v___x_3479_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v_upperBound_3464_, v_alts_3465_, v_invariants_3466_, v_a_3469_, v_b_3470_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_, v___y_3477_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___boxed(lean_object* v_upperBound_3480_, lean_object* v_alts_3481_, lean_object* v_invariants_3482_, lean_object* v_inst_3483_, lean_object* v_R_3484_, lean_object* v_a_3485_, lean_object* v_b_3486_, lean_object* v_c_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(v_upperBound_3480_, v_alts_3481_, v_invariants_3482_, v_inst_3483_, v_R_3484_, v_a_3485_, v_b_3486_, v_c_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_, v___y_3493_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v___y_3491_);
lean_dec_ref(v___y_3490_);
lean_dec(v___y_3489_);
lean_dec_ref(v___y_3488_);
lean_dec_ref(v_invariants_3482_);
lean_dec_ref(v_alts_3481_);
lean_dec(v_upperBound_3480_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(lean_object* v_ref_3496_, lean_object* v_msgData_3497_, uint8_t v_severity_3498_, uint8_t v_isSilent_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v___x_3507_; 
v___x_3507_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3496_, v_msgData_3497_, v_severity_3498_, v_isSilent_3499_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___boxed(lean_object* v_ref_3508_, lean_object* v_msgData_3509_, lean_object* v_severity_3510_, lean_object* v_isSilent_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
uint8_t v_severity_boxed_3519_; uint8_t v_isSilent_boxed_3520_; lean_object* v_res_3521_; 
v_severity_boxed_3519_ = lean_unbox(v_severity_3510_);
v_isSilent_boxed_3520_ = lean_unbox(v_isSilent_3511_);
v_res_3521_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(v_ref_3508_, v_msgData_3509_, v_severity_boxed_3519_, v_isSilent_boxed_3520_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v_ref_3508_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(lean_object* v_00_u03b2_3522_, lean_object* v_a_3523_, lean_object* v_x_3524_){
_start:
{
lean_object* v___x_3525_; 
v___x_3525_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3523_, v_x_3524_);
return v___x_3525_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___boxed(lean_object* v_00_u03b2_3526_, lean_object* v_a_3527_, lean_object* v_x_3528_){
_start:
{
lean_object* v_res_3529_; 
v_res_3529_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(v_00_u03b2_3526_, v_a_3527_, v_x_3528_);
lean_dec(v_x_3528_);
lean_dec(v_a_3527_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(lean_object* v_xs_3530_, lean_object* v_range_3531_, lean_object* v_b_3532_, lean_object* v_i_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_){
_start:
{
lean_object* v_stop_3539_; lean_object* v_step_3540_; uint8_t v___x_3541_; 
v_stop_3539_ = lean_ctor_get(v_range_3531_, 1);
v_step_3540_ = lean_ctor_get(v_range_3531_, 2);
v___x_3541_ = lean_nat_dec_lt(v_i_3533_, v_stop_3539_);
if (v___x_3541_ == 0)
{
lean_object* v___x_3542_; 
lean_dec(v_i_3533_);
v___x_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3542_, 0, v_b_3532_);
return v___x_3542_;
}
else
{
lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3543_ = lean_array_fget_borrowed(v_xs_3530_, v_i_3533_);
lean_inc(v___y_3537_);
lean_inc_ref(v___y_3536_);
lean_inc(v___y_3535_);
lean_inc_ref(v___y_3534_);
lean_inc(v___x_3543_);
v___x_3544_ = lean_infer_type(v___x_3543_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v_a_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_a_3545_);
lean_dec_ref_known(v___x_3544_, 1);
v___x_3546_ = lean_expr_abstract_range(v_a_3545_, v_i_3533_, v_xs_3530_);
lean_dec(v_a_3545_);
v___x_3547_ = lean_array_push(v_b_3532_, v___x_3546_);
v___x_3548_ = lean_nat_add(v_i_3533_, v_step_3540_);
lean_dec(v_i_3533_);
v_b_3532_ = v___x_3547_;
v_i_3533_ = v___x_3548_;
goto _start;
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3557_; 
lean_dec(v_i_3533_);
lean_dec_ref(v_b_3532_);
v_a_3550_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3552_ = v___x_3544_;
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3544_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3557_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___x_3555_; 
if (v_isShared_3553_ == 0)
{
v___x_3555_ = v___x_3552_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3556_, 0, v_a_3550_);
v___x_3555_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
return v___x_3555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg___boxed(lean_object* v_xs_3558_, lean_object* v_range_3559_, lean_object* v_b_3560_, lean_object* v_i_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
lean_object* v_res_3567_; 
v_res_3567_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(v_xs_3558_, v_range_3559_, v_b_3560_, v_i_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec_ref(v_range_3559_);
lean_dec_ref(v_xs_3558_);
return v_res_3567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(lean_object* v_as_3568_, size_t v_sz_3569_, size_t v_i_3570_, lean_object* v_b_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_){
_start:
{
uint8_t v___x_3577_; 
v___x_3577_ = lean_usize_dec_lt(v_i_3570_, v_sz_3569_);
if (v___x_3577_ == 0)
{
lean_object* v___x_3578_; 
v___x_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3578_, 0, v_b_3571_);
return v___x_3578_;
}
else
{
lean_object* v_a_3579_; lean_object* v___x_3580_; 
v_a_3579_ = lean_array_uget_borrowed(v_as_3568_, v_i_3570_);
lean_inc(v_a_3579_);
v___x_3580_ = l_Lean_Meta_Sym_mkProofInstInfo_x3f(v_a_3579_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_object* v_a_3581_; lean_object* v_a_3583_; 
v_a_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_a_3581_);
lean_dec_ref_known(v___x_3580_, 1);
if (lean_obj_tag(v_a_3581_) == 1)
{
lean_object* v_val_3587_; lean_object* v___x_3588_; 
v_val_3587_ = lean_ctor_get(v_a_3581_, 0);
lean_inc(v_val_3587_);
lean_dec_ref_known(v_a_3581_, 1);
lean_inc(v_a_3579_);
v___x_3588_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3588_, 0, v_a_3579_);
lean_ctor_set(v___x_3588_, 1, v_val_3587_);
lean_ctor_set(v___x_3588_, 2, v_b_3571_);
v_a_3583_ = v___x_3588_;
goto v___jp_3582_;
}
else
{
lean_dec(v_a_3581_);
v_a_3583_ = v_b_3571_;
goto v___jp_3582_;
}
v___jp_3582_:
{
size_t v___x_3584_; size_t v___x_3585_; 
v___x_3584_ = ((size_t)1ULL);
v___x_3585_ = lean_usize_add(v_i_3570_, v___x_3584_);
v_i_3570_ = v___x_3585_;
v_b_3571_ = v_a_3583_;
goto _start;
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v_b_3571_);
v_a_3589_ = lean_ctor_get(v___x_3580_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3580_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3580_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3580_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1___boxed(lean_object* v_as_3597_, lean_object* v_sz_3598_, lean_object* v_i_3599_, lean_object* v_b_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
size_t v_sz_boxed_3606_; size_t v_i_boxed_3607_; lean_object* v_res_3608_; 
v_sz_boxed_3606_ = lean_unbox_usize(v_sz_3598_);
lean_dec(v_sz_3598_);
v_i_boxed_3607_ = lean_unbox_usize(v_i_3599_);
lean_dec(v_i_3599_);
v_res_3608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(v_as_3597_, v_sz_boxed_3606_, v_i_boxed_3607_, v_b_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
lean_dec_ref(v_as_3597_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(lean_object* v_xs_3611_, lean_object* v_e_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_){
_start:
{
lean_object* v___x_3618_; lean_object* v_varTypes_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3618_ = lean_unsigned_to_nat(0u);
v_varTypes_3619_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0));
v___x_3620_ = lean_array_get_size(v_xs_3611_);
v___x_3621_ = lean_unsigned_to_nat(1u);
v___x_3622_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3618_);
lean_ctor_set(v___x_3622_, 1, v___x_3620_);
lean_ctor_set(v___x_3622_, 2, v___x_3621_);
v___x_3623_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(v_xs_3611_, v___x_3622_, v_varTypes_3619_, v___x_3618_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_);
lean_dec_ref_known(v___x_3622_, 3);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v_pattern_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; size_t v_sz_3628_; size_t v___x_3629_; lean_object* v___x_3630_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
lean_inc(v_a_3624_);
lean_dec_ref_known(v___x_3623_, 1);
v_pattern_3625_ = lean_expr_abstract(v_e_3612_, v_xs_3611_);
v___x_3626_ = lean_box(0);
lean_inc_ref(v_pattern_3625_);
v___x_3627_ = l_Lean_Expr_getUsedConstants(v_pattern_3625_);
v_sz_3628_ = lean_array_size(v___x_3627_);
v___x_3629_ = ((size_t)0ULL);
v___x_3630_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(v___x_3627_, v_sz_3628_, v___x_3629_, v___x_3626_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_);
lean_dec_ref(v___x_3627_);
if (lean_obj_tag(v___x_3630_) == 0)
{
lean_object* v_a_3631_; lean_object* v___x_3632_; 
v_a_3631_ = lean_ctor_get(v___x_3630_, 0);
lean_inc(v_a_3631_);
lean_dec_ref_known(v___x_3630_, 1);
v___x_3632_ = l_Lean_Meta_Sym_mkProofInstArgInfo_x3f(v_xs_3611_, v_a_3613_, v_a_3614_, v_a_3615_, v_a_3616_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3643_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3635_ = v___x_3632_;
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3632_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3643_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3641_; 
v___x_3637_ = lean_box(0);
v___x_3638_ = lean_box(0);
v___x_3639_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3637_);
lean_ctor_set(v___x_3639_, 1, v_a_3624_);
lean_ctor_set(v___x_3639_, 2, v_a_3633_);
lean_ctor_set(v___x_3639_, 3, v_pattern_3625_);
lean_ctor_set(v___x_3639_, 4, v_a_3631_);
lean_ctor_set(v___x_3639_, 5, v___x_3638_);
if (v_isShared_3636_ == 0)
{
lean_ctor_set(v___x_3635_, 0, v___x_3639_);
v___x_3641_ = v___x_3635_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3639_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_dec(v_a_3631_);
lean_dec_ref(v_pattern_3625_);
lean_dec(v_a_3624_);
v_a_3644_ = lean_ctor_get(v___x_3632_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3632_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3632_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3659_; 
lean_dec_ref(v_pattern_3625_);
lean_dec(v_a_3624_);
v_a_3652_ = lean_ctor_get(v___x_3630_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v___x_3630_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3654_ = v___x_3630_;
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_3630_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
}
else
{
lean_object* v_a_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3667_; 
v_a_3660_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3667_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3667_ == 0)
{
v___x_3662_ = v___x_3623_;
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_a_3660_);
lean_dec(v___x_3623_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3667_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3665_; 
if (v_isShared_3663_ == 0)
{
v___x_3665_ = v___x_3662_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v_a_3660_);
v___x_3665_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
return v___x_3665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___boxed(lean_object* v_xs_3668_, lean_object* v_e_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(v_xs_3668_, v_e_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_);
lean_dec(v_a_3673_);
lean_dec_ref(v_a_3672_);
lean_dec(v_a_3671_);
lean_dec_ref(v_a_3670_);
lean_dec_ref(v_e_3669_);
lean_dec_ref(v_xs_3668_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0(lean_object* v_xs_3676_, lean_object* v_range_3677_, lean_object* v_b_3678_, lean_object* v_i_3679_, lean_object* v_hs_3680_, lean_object* v_hl_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_){
_start:
{
lean_object* v___x_3687_; 
v___x_3687_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(v_xs_3676_, v_range_3677_, v_b_3678_, v_i_3679_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
return v___x_3687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___boxed(lean_object* v_xs_3688_, lean_object* v_range_3689_, lean_object* v_b_3690_, lean_object* v_i_3691_, lean_object* v_hs_3692_, lean_object* v_hl_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0(v_xs_3688_, v_range_3689_, v_b_3690_, v_i_3691_, v_hs_3692_, v_hl_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_);
lean_dec(v___y_3697_);
lean_dec_ref(v___y_3696_);
lean_dec(v___y_3695_);
lean_dec_ref(v___y_3694_);
lean_dec_ref(v_range_3689_);
lean_dec_ref(v_xs_3688_);
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(lean_object* v_e_3700_, lean_object* v___y_3701_){
_start:
{
uint8_t v___x_3703_; 
v___x_3703_ = l_Lean_Expr_hasMVar(v_e_3700_);
if (v___x_3703_ == 0)
{
lean_object* v___x_3704_; 
v___x_3704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3704_, 0, v_e_3700_);
return v___x_3704_;
}
else
{
lean_object* v___x_3705_; lean_object* v_mctx_3706_; lean_object* v___x_3707_; lean_object* v_fst_3708_; lean_object* v_snd_3709_; lean_object* v___x_3710_; lean_object* v_cache_3711_; lean_object* v_zetaDeltaFVarIds_3712_; lean_object* v_postponed_3713_; lean_object* v_diag_3714_; lean_object* v___x_3716_; uint8_t v_isShared_3717_; uint8_t v_isSharedCheck_3723_; 
v___x_3705_ = lean_st_ref_get(v___y_3701_);
v_mctx_3706_ = lean_ctor_get(v___x_3705_, 0);
lean_inc_ref(v_mctx_3706_);
lean_dec(v___x_3705_);
v___x_3707_ = l_Lean_instantiateMVarsCore(v_mctx_3706_, v_e_3700_);
v_fst_3708_ = lean_ctor_get(v___x_3707_, 0);
lean_inc(v_fst_3708_);
v_snd_3709_ = lean_ctor_get(v___x_3707_, 1);
lean_inc(v_snd_3709_);
lean_dec_ref(v___x_3707_);
v___x_3710_ = lean_st_ref_take(v___y_3701_);
v_cache_3711_ = lean_ctor_get(v___x_3710_, 1);
v_zetaDeltaFVarIds_3712_ = lean_ctor_get(v___x_3710_, 2);
v_postponed_3713_ = lean_ctor_get(v___x_3710_, 3);
v_diag_3714_ = lean_ctor_get(v___x_3710_, 4);
v_isSharedCheck_3723_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3723_ == 0)
{
lean_object* v_unused_3724_; 
v_unused_3724_ = lean_ctor_get(v___x_3710_, 0);
lean_dec(v_unused_3724_);
v___x_3716_ = v___x_3710_;
v_isShared_3717_ = v_isSharedCheck_3723_;
goto v_resetjp_3715_;
}
else
{
lean_inc(v_diag_3714_);
lean_inc(v_postponed_3713_);
lean_inc(v_zetaDeltaFVarIds_3712_);
lean_inc(v_cache_3711_);
lean_dec(v___x_3710_);
v___x_3716_ = lean_box(0);
v_isShared_3717_ = v_isSharedCheck_3723_;
goto v_resetjp_3715_;
}
v_resetjp_3715_:
{
lean_object* v___x_3719_; 
if (v_isShared_3717_ == 0)
{
lean_ctor_set(v___x_3716_, 0, v_snd_3709_);
v___x_3719_ = v___x_3716_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3722_; 
v_reuseFailAlloc_3722_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3722_, 0, v_snd_3709_);
lean_ctor_set(v_reuseFailAlloc_3722_, 1, v_cache_3711_);
lean_ctor_set(v_reuseFailAlloc_3722_, 2, v_zetaDeltaFVarIds_3712_);
lean_ctor_set(v_reuseFailAlloc_3722_, 3, v_postponed_3713_);
lean_ctor_set(v_reuseFailAlloc_3722_, 4, v_diag_3714_);
v___x_3719_ = v_reuseFailAlloc_3722_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3720_ = lean_st_ref_set(v___y_3701_, v___x_3719_);
v___x_3721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3721_, 0, v_fst_3708_);
return v___x_3721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg___boxed(lean_object* v_e_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(v_e_3725_, v___y_3726_);
lean_dec(v___y_3726_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0(lean_object* v_e_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(v_e_3729_, v___y_3733_);
return v___x_3737_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___boxed(lean_object* v_e_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
lean_object* v_res_3746_; 
v_res_3746_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0(v_e_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
return v_res_3746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg(lean_object* v_a_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
lean_object* v___x_3755_; 
v___x_3755_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
return v___x_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg___boxed(lean_object* v_a_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_){
_start:
{
lean_object* v_res_3764_; 
v_res_3764_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg(v_a_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_);
lean_dec(v___y_3762_);
lean_dec_ref(v___y_3761_);
lean_dec(v___y_3760_);
lean_dec_ref(v___y_3759_);
lean_dec(v___y_3758_);
lean_dec_ref(v___y_3757_);
return v_res_3764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2(lean_object* v_00_u03b1_3765_, lean_object* v_a_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___boxed(lean_object* v_00_u03b1_3775_, lean_object* v_a_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2(v_00_u03b1_3775_, v_a_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
lean_dec_ref(v___y_3779_);
lean_dec(v___y_3778_);
lean_dec_ref(v___y_3777_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(lean_object* v_lctx_3785_, lean_object* v_localInsts_3786_, lean_object* v_x_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_3785_, v_localInsts_3786_, v_x_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3801_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3796_ = v___x_3793_;
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
else
{
lean_inc(v_a_3794_);
lean_dec(v___x_3793_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3801_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v_a_3794_);
v___x_3799_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
return v___x_3799_;
}
}
}
else
{
lean_object* v_a_3802_; lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
v_a_3802_ = lean_ctor_get(v___x_3793_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3804_ = v___x_3793_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_inc(v_a_3802_);
lean_dec(v___x_3793_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3802_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg___boxed(lean_object* v_lctx_3810_, lean_object* v_localInsts_3811_, lean_object* v_x_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(v_lctx_3810_, v_localInsts_3811_, v_x_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_);
lean_dec(v___y_3816_);
lean_dec_ref(v___y_3815_);
lean_dec(v___y_3814_);
lean_dec_ref(v___y_3813_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3(lean_object* v_00_u03b1_3819_, lean_object* v_lctx_3820_, lean_object* v_localInsts_3821_, lean_object* v_x_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_){
_start:
{
lean_object* v___x_3828_; 
v___x_3828_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(v_lctx_3820_, v_localInsts_3821_, v_x_3822_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_);
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___boxed(lean_object* v_00_u03b1_3829_, lean_object* v_lctx_3830_, lean_object* v_localInsts_3831_, lean_object* v_x_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3(v_00_u03b1_3829_, v_lctx_3830_, v_localInsts_3831_, v_x_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
lean_dec_ref(v___y_3833_);
return v_res_3838_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0(lean_object* v_x_3839_){
_start:
{
uint8_t v___x_3840_; 
v___x_3840_ = 0;
return v___x_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0___boxed(lean_object* v_x_3841_){
_start:
{
uint8_t v_res_3842_; lean_object* v_r_3843_; 
v_res_3842_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0(v_x_3841_);
lean_dec(v_x_3841_);
v_r_3843_ = lean_box(v_res_3842_);
return v_r_3843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(size_t v_sz_3844_, size_t v_i_3845_, lean_object* v_bs_3846_){
_start:
{
uint8_t v___x_3847_; 
v___x_3847_ = lean_usize_dec_lt(v_i_3845_, v_sz_3844_);
if (v___x_3847_ == 0)
{
return v_bs_3846_;
}
else
{
lean_object* v_v_3848_; lean_object* v___x_3849_; lean_object* v_bs_x27_3850_; lean_object* v___x_3851_; size_t v___x_3852_; size_t v___x_3853_; lean_object* v___x_3854_; 
v_v_3848_ = lean_array_uget(v_bs_3846_, v_i_3845_);
v___x_3849_ = lean_unsigned_to_nat(0u);
v_bs_x27_3850_ = lean_array_uset(v_bs_3846_, v_i_3845_, v___x_3849_);
v___x_3851_ = l_Lean_Expr_mvar___override(v_v_3848_);
v___x_3852_ = ((size_t)1ULL);
v___x_3853_ = lean_usize_add(v_i_3845_, v___x_3852_);
v___x_3854_ = lean_array_uset(v_bs_x27_3850_, v_i_3845_, v___x_3851_);
v_i_3845_ = v___x_3853_;
v_bs_3846_ = v___x_3854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1___boxed(lean_object* v_sz_3856_, lean_object* v_i_3857_, lean_object* v_bs_3858_){
_start:
{
size_t v_sz_boxed_3859_; size_t v_i_boxed_3860_; lean_object* v_res_3861_; 
v_sz_boxed_3859_ = lean_unbox_usize(v_sz_3856_);
lean_dec(v_sz_3856_);
v_i_boxed_3860_ = lean_unbox_usize(v_i_3857_);
lean_dec(v_i_3857_);
v_res_3861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(v_sz_boxed_3859_, v_i_boxed_3860_, v_bs_3858_);
return v_res_3861_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v___x_3862_ = lean_box(0);
v___x_3863_ = lean_unsigned_to_nat(16u);
v___x_3864_ = lean_mk_array(v___x_3863_, v___x_3862_);
return v___x_3864_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3865_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0);
v___x_3866_ = lean_unsigned_to_nat(0u);
v___x_3867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3866_);
lean_ctor_set(v___x_3867_, 1, v___x_3865_);
return v___x_3867_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3870_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2));
v___x_3871_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1);
v___x_3872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
lean_ctor_set(v___x_3872_, 1, v___x_3870_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1(uint8_t v___x_3873_, lean_object* v___x_3874_, lean_object* v_m_3875_, lean_object* v_p_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l_Lean_Meta_mkFreshTypeMVar(v___x_3873_, v___x_3874_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v_a_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; lean_object* v___x_3889_; 
v_a_3885_ = lean_ctor_get(v___x_3884_, 0);
lean_inc(v_a_3885_);
lean_dec_ref_known(v___x_3884_, 1);
v___x_3886_ = l_Lean_Expr_app___override(v_m_3875_, v_a_3885_);
v___x_3887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
v___x_3888_ = 1;
v___x_3889_ = l_Lean_Elab_Term_elabTerm(v_p_3876_, v___x_3887_, v___x_3888_, v___x_3888_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3891_; lean_object* v_a_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v_result_3895_; size_t v_sz_3896_; size_t v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
v___x_3891_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(v_a_3890_, v___y_3880_);
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc_n(v_a_3892_, 2);
lean_dec_ref(v___x_3891_);
v___x_3893_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3);
v___x_3894_ = l_Lean_Expr_collectMVars(v___x_3893_, v_a_3892_);
v_result_3895_ = lean_ctor_get(v___x_3894_, 1);
lean_inc_ref(v_result_3895_);
lean_dec_ref(v___x_3894_);
v_sz_3896_ = lean_array_size(v_result_3895_);
v___x_3897_ = ((size_t)0ULL);
v___x_3898_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(v_sz_3896_, v___x_3897_, v_result_3895_);
v___x_3899_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(v___x_3898_, v_a_3892_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
lean_dec(v_a_3892_);
lean_dec_ref(v___x_3898_);
return v___x_3899_;
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
v_a_3900_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3889_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3889_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
else
{
lean_object* v_a_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3915_; 
lean_dec(v_p_3876_);
lean_dec_ref(v_m_3875_);
v_a_3908_ = lean_ctor_get(v___x_3884_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3910_ = v___x_3884_;
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_a_3908_);
lean_dec(v___x_3884_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3915_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3913_; 
if (v_isShared_3911_ == 0)
{
v___x_3913_ = v___x_3910_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3908_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
return v___x_3913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___boxed(lean_object* v___x_3916_, lean_object* v___x_3917_, lean_object* v_m_3918_, lean_object* v_p_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_){
_start:
{
uint8_t v___x_3884__boxed_3927_; lean_object* v_res_3928_; 
v___x_3884__boxed_3927_ = lean_unbox(v___x_3916_);
v_res_3928_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1(v___x_3884__boxed_3927_, v___x_3917_, v_m_3918_, v_p_3919_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_);
lean_dec(v___y_3925_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
lean_dec_ref(v___y_3922_);
lean_dec(v___y_3921_);
lean_dec_ref(v___y_3920_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2(lean_object* v_p_3929_, lean_object* v___f_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v_fileName_3938_; lean_object* v_fileMap_3939_; lean_object* v_options_3940_; lean_object* v_currRecDepth_3941_; lean_object* v_maxRecDepth_3942_; lean_object* v_ref_3943_; lean_object* v_currNamespace_3944_; lean_object* v_openDecls_3945_; lean_object* v_initHeartbeats_3946_; lean_object* v_maxHeartbeats_3947_; lean_object* v_quotContext_3948_; lean_object* v_currMacroScope_3949_; uint8_t v_diag_3950_; lean_object* v_cancelTk_x3f_3951_; uint8_t v_suppressElabErrors_3952_; lean_object* v_inheritedTraceOptions_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3988_; 
v_fileName_3938_ = lean_ctor_get(v___y_3935_, 0);
v_fileMap_3939_ = lean_ctor_get(v___y_3935_, 1);
v_options_3940_ = lean_ctor_get(v___y_3935_, 2);
v_currRecDepth_3941_ = lean_ctor_get(v___y_3935_, 3);
v_maxRecDepth_3942_ = lean_ctor_get(v___y_3935_, 4);
v_ref_3943_ = lean_ctor_get(v___y_3935_, 5);
v_currNamespace_3944_ = lean_ctor_get(v___y_3935_, 6);
v_openDecls_3945_ = lean_ctor_get(v___y_3935_, 7);
v_initHeartbeats_3946_ = lean_ctor_get(v___y_3935_, 8);
v_maxHeartbeats_3947_ = lean_ctor_get(v___y_3935_, 9);
v_quotContext_3948_ = lean_ctor_get(v___y_3935_, 10);
v_currMacroScope_3949_ = lean_ctor_get(v___y_3935_, 11);
v_diag_3950_ = lean_ctor_get_uint8(v___y_3935_, sizeof(void*)*14);
v_cancelTk_x3f_3951_ = lean_ctor_get(v___y_3935_, 12);
v_suppressElabErrors_3952_ = lean_ctor_get_uint8(v___y_3935_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3953_ = lean_ctor_get(v___y_3935_, 13);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___y_3935_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3955_ = v___y_3935_;
v_isShared_3956_ = v_isSharedCheck_3988_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_inheritedTraceOptions_3953_);
lean_inc(v_cancelTk_x3f_3951_);
lean_inc(v_currMacroScope_3949_);
lean_inc(v_quotContext_3948_);
lean_inc(v_maxHeartbeats_3947_);
lean_inc(v_initHeartbeats_3946_);
lean_inc(v_openDecls_3945_);
lean_inc(v_currNamespace_3944_);
lean_inc(v_ref_3943_);
lean_inc(v_maxRecDepth_3942_);
lean_inc(v_currRecDepth_3941_);
lean_inc(v_options_3940_);
lean_inc(v_fileMap_3939_);
lean_inc(v_fileName_3938_);
lean_dec(v___y_3935_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3988_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v_declName_x3f_3957_; lean_object* v_macroStack_3958_; uint8_t v_mayPostpone_3959_; uint8_t v_errToSorry_3960_; lean_object* v_autoBoundImplicitContext_3961_; lean_object* v_autoBoundImplicitForbidden_3962_; lean_object* v_sectionVars_3963_; lean_object* v_sectionFVars_3964_; uint8_t v_implicitLambda_3965_; uint8_t v_heedElabAsElim_3966_; uint8_t v_isNoncomputableSection_3967_; uint8_t v_isMetaSection_3968_; uint8_t v_inPattern_3969_; lean_object* v_tacSnap_x3f_3970_; uint8_t v_saveRecAppSyntax_3971_; uint8_t v_holesAsSyntheticOpaque_3972_; uint8_t v_checkDeprecated_3973_; lean_object* v_fixedTermElabs_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3987_; 
v_declName_x3f_3957_ = lean_ctor_get(v___y_3931_, 0);
v_macroStack_3958_ = lean_ctor_get(v___y_3931_, 1);
v_mayPostpone_3959_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8);
v_errToSorry_3960_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_3961_ = lean_ctor_get(v___y_3931_, 2);
v_autoBoundImplicitForbidden_3962_ = lean_ctor_get(v___y_3931_, 3);
v_sectionVars_3963_ = lean_ctor_get(v___y_3931_, 4);
v_sectionFVars_3964_ = lean_ctor_get(v___y_3931_, 5);
v_implicitLambda_3965_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 2);
v_heedElabAsElim_3966_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_3967_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 4);
v_isMetaSection_3968_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 5);
v_inPattern_3969_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_3970_ = lean_ctor_get(v___y_3931_, 6);
v_saveRecAppSyntax_3971_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_3972_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 9);
v_checkDeprecated_3973_ = lean_ctor_get_uint8(v___y_3931_, sizeof(void*)*8 + 10);
v_fixedTermElabs_3974_ = lean_ctor_get(v___y_3931_, 7);
v_isSharedCheck_3987_ = !lean_is_exclusive(v___y_3931_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3976_ = v___y_3931_;
v_isShared_3977_ = v_isSharedCheck_3987_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_fixedTermElabs_3974_);
lean_inc(v_tacSnap_x3f_3970_);
lean_inc(v_sectionFVars_3964_);
lean_inc(v_sectionVars_3963_);
lean_inc(v_autoBoundImplicitForbidden_3962_);
lean_inc(v_autoBoundImplicitContext_3961_);
lean_inc(v_macroStack_3958_);
lean_inc(v_declName_x3f_3957_);
lean_dec(v___y_3931_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3987_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v_ref_3978_; lean_object* v___x_3980_; 
v_ref_3978_ = l_Lean_replaceRef(v_p_3929_, v_ref_3943_);
lean_dec(v_ref_3943_);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 5, v_ref_3978_);
v___x_3980_ = v___x_3955_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v_fileName_3938_);
lean_ctor_set(v_reuseFailAlloc_3986_, 1, v_fileMap_3939_);
lean_ctor_set(v_reuseFailAlloc_3986_, 2, v_options_3940_);
lean_ctor_set(v_reuseFailAlloc_3986_, 3, v_currRecDepth_3941_);
lean_ctor_set(v_reuseFailAlloc_3986_, 4, v_maxRecDepth_3942_);
lean_ctor_set(v_reuseFailAlloc_3986_, 5, v_ref_3978_);
lean_ctor_set(v_reuseFailAlloc_3986_, 6, v_currNamespace_3944_);
lean_ctor_set(v_reuseFailAlloc_3986_, 7, v_openDecls_3945_);
lean_ctor_set(v_reuseFailAlloc_3986_, 8, v_initHeartbeats_3946_);
lean_ctor_set(v_reuseFailAlloc_3986_, 9, v_maxHeartbeats_3947_);
lean_ctor_set(v_reuseFailAlloc_3986_, 10, v_quotContext_3948_);
lean_ctor_set(v_reuseFailAlloc_3986_, 11, v_currMacroScope_3949_);
lean_ctor_set(v_reuseFailAlloc_3986_, 12, v_cancelTk_x3f_3951_);
lean_ctor_set(v_reuseFailAlloc_3986_, 13, v_inheritedTraceOptions_3953_);
lean_ctor_set_uint8(v_reuseFailAlloc_3986_, sizeof(void*)*14, v_diag_3950_);
lean_ctor_set_uint8(v_reuseFailAlloc_3986_, sizeof(void*)*14 + 1, v_suppressElabErrors_3952_);
v___x_3980_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
uint8_t v___x_3981_; lean_object* v___x_3983_; 
v___x_3981_ = 1;
if (v_isShared_3977_ == 0)
{
v___x_3983_ = v___x_3976_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_declName_x3f_3957_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v_macroStack_3958_);
lean_ctor_set(v_reuseFailAlloc_3985_, 2, v_autoBoundImplicitContext_3961_);
lean_ctor_set(v_reuseFailAlloc_3985_, 3, v_autoBoundImplicitForbidden_3962_);
lean_ctor_set(v_reuseFailAlloc_3985_, 4, v_sectionVars_3963_);
lean_ctor_set(v_reuseFailAlloc_3985_, 5, v_sectionFVars_3964_);
lean_ctor_set(v_reuseFailAlloc_3985_, 6, v_tacSnap_x3f_3970_);
lean_ctor_set(v_reuseFailAlloc_3985_, 7, v_fixedTermElabs_3974_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8, v_mayPostpone_3959_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 1, v_errToSorry_3960_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 2, v_implicitLambda_3965_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 3, v_heedElabAsElim_3966_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 4, v_isNoncomputableSection_3967_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 5, v_isMetaSection_3968_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 7, v_inPattern_3969_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_3971_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_3972_);
lean_ctor_set_uint8(v_reuseFailAlloc_3985_, sizeof(void*)*8 + 10, v_checkDeprecated_3973_);
v___x_3983_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
lean_object* v___x_3984_; 
lean_ctor_set_uint8(v___x_3983_, sizeof(void*)*8 + 6, v___x_3981_);
v___x_3984_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___f_3930_, v___x_3983_, v___y_3932_, v___y_3933_, v___y_3934_, v___x_3980_, v___y_3936_);
lean_dec_ref(v___x_3980_);
lean_dec_ref(v___x_3983_);
return v___x_3984_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2___boxed(lean_object* v_p_3989_, lean_object* v___f_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2(v_p_3989_, v___f_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
lean_dec(v___y_3996_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec(v___y_3992_);
lean_dec(v_p_3989_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3(lean_object* v___x_3999_, lean_object* v___x_4000_, lean_object* v___x_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_){
_start:
{
lean_object* v___x_4007_; 
v___x_4007_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_3999_, v___x_4000_, v___x_4001_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
if (lean_obj_tag(v___x_4007_) == 0)
{
lean_object* v_a_4008_; lean_object* v___x_4010_; uint8_t v_isShared_4011_; uint8_t v_isSharedCheck_4016_; 
v_a_4008_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4016_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4016_ == 0)
{
v___x_4010_ = v___x_4007_;
v_isShared_4011_ = v_isSharedCheck_4016_;
goto v_resetjp_4009_;
}
else
{
lean_inc(v_a_4008_);
lean_dec(v___x_4007_);
v___x_4010_ = lean_box(0);
v_isShared_4011_ = v_isSharedCheck_4016_;
goto v_resetjp_4009_;
}
v_resetjp_4009_:
{
lean_object* v_fst_4012_; lean_object* v___x_4014_; 
v_fst_4012_ = lean_ctor_get(v_a_4008_, 0);
lean_inc(v_fst_4012_);
lean_dec(v_a_4008_);
if (v_isShared_4011_ == 0)
{
lean_ctor_set(v___x_4010_, 0, v_fst_4012_);
v___x_4014_ = v___x_4010_;
goto v_reusejp_4013_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_fst_4012_);
v___x_4014_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4013_;
}
v_reusejp_4013_:
{
return v___x_4014_;
}
}
}
else
{
lean_object* v_a_4017_; lean_object* v___x_4019_; uint8_t v_isShared_4020_; uint8_t v_isSharedCheck_4024_; 
v_a_4017_ = lean_ctor_get(v___x_4007_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v___x_4007_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4019_ = v___x_4007_;
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
else
{
lean_inc(v_a_4017_);
lean_dec(v___x_4007_);
v___x_4019_ = lean_box(0);
v_isShared_4020_ = v_isSharedCheck_4024_;
goto v_resetjp_4018_;
}
v_resetjp_4018_:
{
lean_object* v___x_4022_; 
if (v_isShared_4020_ == 0)
{
v___x_4022_ = v___x_4019_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4017_);
v___x_4022_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
return v___x_4022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3___boxed(lean_object* v___x_4025_, lean_object* v___x_4026_, lean_object* v___x_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_){
_start:
{
lean_object* v_res_4033_; 
v_res_4033_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3(v___x_4025_, v___x_4026_, v___x_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_);
lean_dec(v___y_4031_);
lean_dec_ref(v___y_4030_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4(lean_object* v_p_4039_, lean_object* v___f_4040_, lean_object* v_lctx_4041_, lean_object* v_localInstances_4042_, lean_object* v_m_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_){
_start:
{
uint8_t v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___f_4052_; lean_object* v___f_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; uint8_t v___x_4057_; lean_object* v___x_4058_; uint8_t v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___f_4063_; lean_object* v___x_4064_; 
v___x_4049_ = 0;
v___x_4050_ = lean_box(0);
v___x_4051_ = lean_box(v___x_4049_);
lean_inc(v_p_4039_);
v___f_4052_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___boxed), 11, 4);
lean_closure_set(v___f_4052_, 0, v___x_4051_);
lean_closure_set(v___f_4052_, 1, v___x_4050_);
lean_closure_set(v___f_4052_, 2, v_m_4043_);
lean_closure_set(v___f_4052_, 3, v_p_4039_);
v___f_4053_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4053_, 0, v_p_4039_);
lean_closure_set(v___f_4053_, 1, v___f_4052_);
v___x_4054_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___boxed), 9, 2);
lean_closure_set(v___x_4054_, 0, lean_box(0));
lean_closure_set(v___x_4054_, 1, v___f_4053_);
v___x_4055_ = lean_box(0);
v___x_4056_ = lean_box(0);
v___x_4057_ = 1;
v___x_4058_ = lean_box(1);
v___x_4059_ = 0;
v___x_4060_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0));
v___x_4061_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_4061_, 0, v___x_4055_);
lean_ctor_set(v___x_4061_, 1, v___x_4056_);
lean_ctor_set(v___x_4061_, 2, v___x_4055_);
lean_ctor_set(v___x_4061_, 3, v___f_4040_);
lean_ctor_set(v___x_4061_, 4, v___x_4058_);
lean_ctor_set(v___x_4061_, 5, v___x_4058_);
lean_ctor_set(v___x_4061_, 6, v___x_4055_);
lean_ctor_set(v___x_4061_, 7, v___x_4060_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8, v___x_4057_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 1, v___x_4057_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 2, v___x_4057_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 3, v___x_4057_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 4, v___x_4059_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 5, v___x_4059_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 6, v___x_4059_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 7, v___x_4059_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 8, v___x_4057_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 9, v___x_4059_);
lean_ctor_set_uint8(v___x_4061_, sizeof(void*)*8 + 10, v___x_4057_);
v___x_4062_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1));
v___f_4063_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3___boxed), 8, 3);
lean_closure_set(v___f_4063_, 0, v___x_4054_);
lean_closure_set(v___f_4063_, 1, v___x_4061_);
lean_closure_set(v___f_4063_, 2, v___x_4062_);
v___x_4064_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(v_lctx_4041_, v_localInstances_4042_, v___f_4063_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_);
return v___x_4064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___boxed(lean_object* v_p_4065_, lean_object* v___f_4066_, lean_object* v_lctx_4067_, lean_object* v_localInstances_4068_, lean_object* v_m_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4(v_p_4065_, v___f_4066_, v_lctx_4067_, v_localInstances_4068_, v_m_4069_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(lean_object* v_p_4077_, lean_object* v_a_4078_){
_start:
{
lean_object* v_lctx_4080_; lean_object* v_localInstances_4081_; lean_object* v___f_4082_; lean_object* v___f_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v_lctx_4080_ = lean_ctor_get(v_a_4078_, 2);
v_localInstances_4081_ = lean_ctor_get(v_a_4078_, 3);
v___f_4082_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0));
lean_inc_ref(v_localInstances_4081_);
lean_inc_ref(v_lctx_4080_);
v___f_4083_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___boxed), 10, 4);
lean_closure_set(v___f_4083_, 0, v_p_4077_);
lean_closure_set(v___f_4083_, 1, v___f_4082_);
lean_closure_set(v___f_4083_, 2, v_lctx_4080_);
lean_closure_set(v___f_4083_, 3, v_localInstances_4081_);
v___x_4084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4084_, 0, v___f_4083_);
v___x_4085_ = lean_st_mk_ref(v___x_4084_);
v___x_4086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4085_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___boxed(lean_object* v_p_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(v_p_4087_, v_a_4088_);
lean_dec_ref(v_a_4088_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern(lean_object* v_p_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_){
_start:
{
lean_object* v___x_4099_; 
v___x_4099_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(v_p_4091_, v_a_4094_);
return v___x_4099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___boxed(lean_object* v_p_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_){
_start:
{
lean_object* v_res_4108_; 
v_res_4108_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern(v_p_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_, v_a_4106_);
lean_dec(v_a_4106_);
lean_dec_ref(v_a_4105_);
lean_dec(v_a_4104_);
lean_dec_ref(v_a_4103_);
lean_dec(v_a_4102_);
lean_dec_ref(v_a_4101_);
return v_res_4108_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(lean_object* v_x_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_){
_start:
{
lean_object* v___x_4117_; 
lean_inc(v___y_4111_);
lean_inc_ref(v___y_4110_);
v___x_4117_ = lean_apply_7(v_x_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_, v___y_4115_, lean_box(0));
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed(lean_object* v_x_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v_res_4126_; 
v_res_4126_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(v_x_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
return v_res_4126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(lean_object* v_mvarId_4127_, lean_object* v_x_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_){
_start:
{
lean_object* v___f_4136_; lean_object* v___x_4137_; 
lean_inc(v___y_4130_);
lean_inc_ref(v___y_4129_);
v___f_4136_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4136_, 0, v_x_4128_);
lean_closure_set(v___f_4136_, 1, v___y_4129_);
lean_closure_set(v___f_4136_, 2, v___y_4130_);
v___x_4137_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4127_, v___f_4136_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_);
if (lean_obj_tag(v___x_4137_) == 0)
{
return v___x_4137_;
}
else
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4145_; 
v_a_4138_ = lean_ctor_get(v___x_4137_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v___x_4137_);
if (v_isSharedCheck_4145_ == 0)
{
v___x_4140_ = v___x_4137_;
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4137_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4145_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v___x_4143_; 
if (v_isShared_4141_ == 0)
{
v___x_4143_ = v___x_4140_;
goto v_reusejp_4142_;
}
else
{
lean_object* v_reuseFailAlloc_4144_; 
v_reuseFailAlloc_4144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4144_, 0, v_a_4138_);
v___x_4143_ = v_reuseFailAlloc_4144_;
goto v_reusejp_4142_;
}
v_reusejp_4142_:
{
return v___x_4143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___boxed(lean_object* v_mvarId_4146_, lean_object* v_x_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_mvarId_4146_, v_x_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
lean_dec(v___y_4153_);
lean_dec_ref(v___y_4152_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
return v_res_4155_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(lean_object* v_00_u03b1_4156_, lean_object* v_mvarId_4157_, lean_object* v_x_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v___x_4166_; 
v___x_4166_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_mvarId_4157_, v_x_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___boxed(lean_object* v_00_u03b1_4167_, lean_object* v_mvarId_4168_, lean_object* v_x_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(v_00_u03b1_4167_, v_mvarId_4168_, v_x_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec(v___y_4173_);
lean_dec_ref(v___y_4172_);
lean_dec(v___y_4171_);
lean_dec_ref(v___y_4170_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(lean_object* v_ref_4178_, lean_object* v_msgData_4179_, uint8_t v_severity_4180_, uint8_t v_isSilent_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_){
_start:
{
lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4190_; lean_object* v___y_4191_; uint8_t v___y_4192_; lean_object* v___y_4193_; uint8_t v___y_4194_; lean_object* v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4224_; uint8_t v___y_4225_; lean_object* v___y_4226_; uint8_t v___y_4227_; lean_object* v___y_4228_; lean_object* v___y_4229_; uint8_t v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4249_; uint8_t v___y_4250_; lean_object* v___y_4251_; uint8_t v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; uint8_t v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4260_; uint8_t v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; uint8_t v___y_4265_; uint8_t v___y_4266_; uint8_t v___x_4271_; uint8_t v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; uint8_t v___y_4278_; uint8_t v___y_4279_; uint8_t v___y_4281_; uint8_t v___x_4296_; 
v___x_4271_ = 2;
v___x_4296_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4180_, v___x_4271_);
if (v___x_4296_ == 0)
{
v___y_4281_ = v___x_4296_;
goto v___jp_4280_;
}
else
{
uint8_t v___x_4297_; 
lean_inc_ref(v_msgData_4179_);
v___x_4297_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4179_);
v___y_4281_ = v___x_4297_;
goto v___jp_4280_;
}
v___jp_4187_:
{
lean_object* v___x_4197_; lean_object* v_currNamespace_4198_; lean_object* v_openDecls_4199_; lean_object* v_env_4200_; lean_object* v_nextMacroScope_4201_; lean_object* v_ngen_4202_; lean_object* v_auxDeclNGen_4203_; lean_object* v_traceState_4204_; lean_object* v_cache_4205_; lean_object* v_messages_4206_; lean_object* v_infoState_4207_; lean_object* v_snapshotTasks_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4222_; 
v___x_4197_ = lean_st_ref_take(v___y_4196_);
v_currNamespace_4198_ = lean_ctor_get(v___y_4195_, 6);
v_openDecls_4199_ = lean_ctor_get(v___y_4195_, 7);
v_env_4200_ = lean_ctor_get(v___x_4197_, 0);
v_nextMacroScope_4201_ = lean_ctor_get(v___x_4197_, 1);
v_ngen_4202_ = lean_ctor_get(v___x_4197_, 2);
v_auxDeclNGen_4203_ = lean_ctor_get(v___x_4197_, 3);
v_traceState_4204_ = lean_ctor_get(v___x_4197_, 4);
v_cache_4205_ = lean_ctor_get(v___x_4197_, 5);
v_messages_4206_ = lean_ctor_get(v___x_4197_, 6);
v_infoState_4207_ = lean_ctor_get(v___x_4197_, 7);
v_snapshotTasks_4208_ = lean_ctor_get(v___x_4197_, 8);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4197_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4210_ = v___x_4197_;
v_isShared_4211_ = v_isSharedCheck_4222_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_snapshotTasks_4208_);
lean_inc(v_infoState_4207_);
lean_inc(v_messages_4206_);
lean_inc(v_cache_4205_);
lean_inc(v_traceState_4204_);
lean_inc(v_auxDeclNGen_4203_);
lean_inc(v_ngen_4202_);
lean_inc(v_nextMacroScope_4201_);
lean_inc(v_env_4200_);
lean_dec(v___x_4197_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4222_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4217_; 
lean_inc(v_openDecls_4199_);
lean_inc(v_currNamespace_4198_);
v___x_4212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4212_, 0, v_currNamespace_4198_);
lean_ctor_set(v___x_4212_, 1, v_openDecls_4199_);
v___x_4213_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4213_, 0, v___x_4212_);
lean_ctor_set(v___x_4213_, 1, v___y_4190_);
lean_inc_ref(v___y_4191_);
lean_inc_ref(v___y_4193_);
v___x_4214_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4214_, 0, v___y_4193_);
lean_ctor_set(v___x_4214_, 1, v___y_4188_);
lean_ctor_set(v___x_4214_, 2, v___y_4189_);
lean_ctor_set(v___x_4214_, 3, v___y_4191_);
lean_ctor_set(v___x_4214_, 4, v___x_4213_);
lean_ctor_set_uint8(v___x_4214_, sizeof(void*)*5, v___y_4194_);
lean_ctor_set_uint8(v___x_4214_, sizeof(void*)*5 + 1, v___y_4192_);
lean_ctor_set_uint8(v___x_4214_, sizeof(void*)*5 + 2, v_isSilent_4181_);
v___x_4215_ = l_Lean_MessageLog_add(v___x_4214_, v_messages_4206_);
if (v_isShared_4211_ == 0)
{
lean_ctor_set(v___x_4210_, 6, v___x_4215_);
v___x_4217_ = v___x_4210_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_env_4200_);
lean_ctor_set(v_reuseFailAlloc_4221_, 1, v_nextMacroScope_4201_);
lean_ctor_set(v_reuseFailAlloc_4221_, 2, v_ngen_4202_);
lean_ctor_set(v_reuseFailAlloc_4221_, 3, v_auxDeclNGen_4203_);
lean_ctor_set(v_reuseFailAlloc_4221_, 4, v_traceState_4204_);
lean_ctor_set(v_reuseFailAlloc_4221_, 5, v_cache_4205_);
lean_ctor_set(v_reuseFailAlloc_4221_, 6, v___x_4215_);
lean_ctor_set(v_reuseFailAlloc_4221_, 7, v_infoState_4207_);
lean_ctor_set(v_reuseFailAlloc_4221_, 8, v_snapshotTasks_4208_);
v___x_4217_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4218_ = lean_st_ref_set(v___y_4196_, v___x_4217_);
v___x_4219_ = lean_box(0);
v___x_4220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4219_);
return v___x_4220_;
}
}
}
v___jp_4223_:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v_a_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4247_; 
v___x_4232_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4179_);
v___x_4233_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v___x_4232_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_);
v_a_4234_ = lean_ctor_get(v___x_4233_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4236_ = v___x_4233_;
v_isShared_4237_ = v_isSharedCheck_4247_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_a_4234_);
lean_dec(v___x_4233_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4247_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; 
lean_inc_ref_n(v___y_4228_, 2);
v___x_4238_ = l_Lean_FileMap_toPosition(v___y_4228_, v___y_4226_);
lean_dec(v___y_4226_);
v___x_4239_ = l_Lean_FileMap_toPosition(v___y_4228_, v___y_4231_);
lean_dec(v___y_4231_);
v___x_4240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4239_);
v___x_4241_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_4225_ == 0)
{
lean_del_object(v___x_4236_);
lean_dec_ref(v___y_4224_);
v___y_4188_ = v___x_4238_;
v___y_4189_ = v___x_4240_;
v___y_4190_ = v_a_4234_;
v___y_4191_ = v___x_4241_;
v___y_4192_ = v___y_4227_;
v___y_4193_ = v___y_4229_;
v___y_4194_ = v___y_4230_;
v___y_4195_ = v___y_4184_;
v___y_4196_ = v___y_4185_;
goto v___jp_4187_;
}
else
{
uint8_t v___x_4242_; 
lean_inc(v_a_4234_);
v___x_4242_ = l_Lean_MessageData_hasTag(v___y_4224_, v_a_4234_);
if (v___x_4242_ == 0)
{
lean_object* v___x_4243_; lean_object* v___x_4245_; 
lean_dec_ref_known(v___x_4240_, 1);
lean_dec_ref(v___x_4238_);
lean_dec(v_a_4234_);
v___x_4243_ = lean_box(0);
if (v_isShared_4237_ == 0)
{
lean_ctor_set(v___x_4236_, 0, v___x_4243_);
v___x_4245_ = v___x_4236_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v___x_4243_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
else
{
lean_del_object(v___x_4236_);
v___y_4188_ = v___x_4238_;
v___y_4189_ = v___x_4240_;
v___y_4190_ = v_a_4234_;
v___y_4191_ = v___x_4241_;
v___y_4192_ = v___y_4227_;
v___y_4193_ = v___y_4229_;
v___y_4194_ = v___y_4230_;
v___y_4195_ = v___y_4184_;
v___y_4196_ = v___y_4185_;
goto v___jp_4187_;
}
}
}
}
v___jp_4248_:
{
lean_object* v___x_4257_; 
v___x_4257_ = l_Lean_Syntax_getTailPos_x3f(v___y_4251_, v___y_4255_);
lean_dec(v___y_4251_);
if (lean_obj_tag(v___x_4257_) == 0)
{
lean_inc(v___y_4256_);
v___y_4224_ = v___y_4249_;
v___y_4225_ = v___y_4250_;
v___y_4226_ = v___y_4256_;
v___y_4227_ = v___y_4252_;
v___y_4228_ = v___y_4253_;
v___y_4229_ = v___y_4254_;
v___y_4230_ = v___y_4255_;
v___y_4231_ = v___y_4256_;
goto v___jp_4223_;
}
else
{
lean_object* v_val_4258_; 
v_val_4258_ = lean_ctor_get(v___x_4257_, 0);
lean_inc(v_val_4258_);
lean_dec_ref_known(v___x_4257_, 1);
v___y_4224_ = v___y_4249_;
v___y_4225_ = v___y_4250_;
v___y_4226_ = v___y_4256_;
v___y_4227_ = v___y_4252_;
v___y_4228_ = v___y_4253_;
v___y_4229_ = v___y_4254_;
v___y_4230_ = v___y_4255_;
v___y_4231_ = v_val_4258_;
goto v___jp_4223_;
}
}
v___jp_4259_:
{
lean_object* v_ref_4267_; lean_object* v___x_4268_; 
v_ref_4267_ = l_Lean_replaceRef(v_ref_4178_, v___y_4262_);
v___x_4268_ = l_Lean_Syntax_getPos_x3f(v_ref_4267_, v___y_4265_);
if (lean_obj_tag(v___x_4268_) == 0)
{
lean_object* v___x_4269_; 
v___x_4269_ = lean_unsigned_to_nat(0u);
v___y_4249_ = v___y_4260_;
v___y_4250_ = v___y_4261_;
v___y_4251_ = v_ref_4267_;
v___y_4252_ = v___y_4266_;
v___y_4253_ = v___y_4263_;
v___y_4254_ = v___y_4264_;
v___y_4255_ = v___y_4265_;
v___y_4256_ = v___x_4269_;
goto v___jp_4248_;
}
else
{
lean_object* v_val_4270_; 
v_val_4270_ = lean_ctor_get(v___x_4268_, 0);
lean_inc(v_val_4270_);
lean_dec_ref_known(v___x_4268_, 1);
v___y_4249_ = v___y_4260_;
v___y_4250_ = v___y_4261_;
v___y_4251_ = v_ref_4267_;
v___y_4252_ = v___y_4266_;
v___y_4253_ = v___y_4263_;
v___y_4254_ = v___y_4264_;
v___y_4255_ = v___y_4265_;
v___y_4256_ = v_val_4270_;
goto v___jp_4248_;
}
}
v___jp_4272_:
{
if (v___y_4279_ == 0)
{
v___y_4260_ = v___y_4275_;
v___y_4261_ = v___y_4273_;
v___y_4262_ = v___y_4274_;
v___y_4263_ = v___y_4276_;
v___y_4264_ = v___y_4277_;
v___y_4265_ = v___y_4278_;
v___y_4266_ = v_severity_4180_;
goto v___jp_4259_;
}
else
{
v___y_4260_ = v___y_4275_;
v___y_4261_ = v___y_4273_;
v___y_4262_ = v___y_4274_;
v___y_4263_ = v___y_4276_;
v___y_4264_ = v___y_4277_;
v___y_4265_ = v___y_4278_;
v___y_4266_ = v___x_4271_;
goto v___jp_4259_;
}
}
v___jp_4280_:
{
if (v___y_4281_ == 0)
{
lean_object* v_fileName_4282_; lean_object* v_fileMap_4283_; lean_object* v_options_4284_; lean_object* v_ref_4285_; uint8_t v_suppressElabErrors_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___f_4289_; uint8_t v___x_4290_; uint8_t v___x_4291_; 
v_fileName_4282_ = lean_ctor_get(v___y_4184_, 0);
v_fileMap_4283_ = lean_ctor_get(v___y_4184_, 1);
v_options_4284_ = lean_ctor_get(v___y_4184_, 2);
v_ref_4285_ = lean_ctor_get(v___y_4184_, 5);
v_suppressElabErrors_4286_ = lean_ctor_get_uint8(v___y_4184_, sizeof(void*)*14 + 1);
v___x_4287_ = lean_box(v___y_4281_);
v___x_4288_ = lean_box(v_suppressElabErrors_4286_);
v___f_4289_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4289_, 0, v___x_4287_);
lean_closure_set(v___f_4289_, 1, v___x_4288_);
v___x_4290_ = 1;
v___x_4291_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4180_, v___x_4290_);
if (v___x_4291_ == 0)
{
v___y_4273_ = v_suppressElabErrors_4286_;
v___y_4274_ = v_ref_4285_;
v___y_4275_ = v___f_4289_;
v___y_4276_ = v_fileMap_4283_;
v___y_4277_ = v_fileName_4282_;
v___y_4278_ = v___y_4281_;
v___y_4279_ = v___x_4291_;
goto v___jp_4272_;
}
else
{
lean_object* v___x_4292_; uint8_t v___x_4293_; 
v___x_4292_ = l_Lean_warningAsError;
v___x_4293_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_4284_, v___x_4292_);
v___y_4273_ = v_suppressElabErrors_4286_;
v___y_4274_ = v_ref_4285_;
v___y_4275_ = v___f_4289_;
v___y_4276_ = v_fileMap_4283_;
v___y_4277_ = v_fileName_4282_;
v___y_4278_ = v___y_4281_;
v___y_4279_ = v___x_4293_;
goto v___jp_4272_;
}
}
else
{
lean_object* v___x_4294_; lean_object* v___x_4295_; 
lean_dec_ref(v_msgData_4179_);
v___x_4294_ = lean_box(0);
v___x_4295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4295_, 0, v___x_4294_);
return v___x_4295_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg___boxed(lean_object* v_ref_4298_, lean_object* v_msgData_4299_, lean_object* v_severity_4300_, lean_object* v_isSilent_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
uint8_t v_severity_boxed_4307_; uint8_t v_isSilent_boxed_4308_; lean_object* v_res_4309_; 
v_severity_boxed_4307_ = lean_unbox(v_severity_4300_);
v_isSilent_boxed_4308_ = lean_unbox(v_isSilent_4301_);
v_res_4309_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4298_, v_msgData_4299_, v_severity_boxed_4307_, v_isSilent_boxed_4308_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
lean_dec(v_ref_4298_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(lean_object* v_ref_4310_, lean_object* v_msgData_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
uint8_t v___x_4319_; uint8_t v___x_4320_; lean_object* v___x_4321_; 
v___x_4319_ = 1;
v___x_4320_ = 0;
v___x_4321_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4310_, v_msgData_4311_, v___x_4319_, v___x_4320_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_);
return v___x_4321_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0___boxed(lean_object* v_ref_4322_, lean_object* v_msgData_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(v_ref_4322_, v_msgData_4323_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
lean_dec(v___y_4329_);
lean_dec_ref(v___y_4328_);
lean_dec(v___y_4327_);
lean_dec_ref(v___y_4326_);
lean_dec(v___y_4325_);
lean_dec_ref(v___y_4324_);
lean_dec(v_ref_4322_);
return v_res_4331_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4339_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2));
v___x_4340_ = l_Lean_MessageData_ofFormat(v___x_4339_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(lean_object* v_stx_4341_, lean_object* v_goal_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_){
_start:
{
uint8_t v___y_4351_; uint8_t v___y_4352_; lean_object* v___y_4353_; uint8_t v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4356_; lean_object* v___y_4357_; uint8_t v___y_4358_; uint8_t v___y_4359_; lean_object* v___y_4360_; lean_object* v___y_4361_; lean_object* v___y_4362_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v_untilPat_x3f_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4416_; lean_object* v___y_4417_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v_options_4477_; lean_object* v___x_4478_; uint8_t v___x_4479_; 
v_options_4477_ = lean_ctor_get(v___y_4347_, 2);
v___x_4478_ = l_Lean_Elab_Tactic_Do_mvcgen_warning;
v___x_4479_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_4477_, v___x_4478_);
if (v___x_4479_ == 0)
{
v___y_4416_ = v___y_4343_;
v___y_4417_ = v___y_4344_;
v___y_4418_ = v___y_4345_;
v___y_4419_ = v___y_4346_;
v___y_4420_ = v___y_4347_;
v___y_4421_ = v___y_4348_;
goto v___jp_4415_;
}
else
{
lean_object* v___x_4480_; lean_object* v___x_4481_; 
v___x_4480_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3);
v___x_4481_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(v_stx_4341_, v___x_4480_, v___y_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_);
if (lean_obj_tag(v___x_4481_) == 0)
{
lean_dec_ref_known(v___x_4481_, 1);
v___y_4416_ = v___y_4343_;
v___y_4417_ = v___y_4344_;
v___y_4418_ = v___y_4345_;
v___y_4419_ = v___y_4346_;
v___y_4420_ = v___y_4347_;
v___y_4421_ = v___y_4348_;
goto v___jp_4415_;
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
lean_dec(v_goal_4342_);
v_a_4482_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4481_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4481_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
v___jp_4350_:
{
lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4363_ = lean_alloc_ctor(0, 4, 5);
lean_ctor_set(v___x_4363_, 0, v___y_4356_);
lean_ctor_set(v___x_4363_, 1, v___y_4353_);
lean_ctor_set(v___x_4363_, 2, v___y_4362_);
lean_ctor_set(v___x_4363_, 3, v___y_4357_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*4, v___y_4354_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*4 + 1, v___y_4358_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*4 + 2, v___y_4359_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*4 + 3, v___y_4352_);
lean_ctor_set_uint8(v___x_4363_, sizeof(void*)*4 + 4, v___y_4351_);
v___x_4364_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4364_, 0, v___y_4361_);
lean_ctor_set(v___x_4364_, 1, v___x_4363_);
lean_ctor_set(v___x_4364_, 2, v___y_4355_);
lean_ctor_set(v___x_4364_, 3, v___y_4360_);
v___x_4365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
return v___x_4365_;
}
v___jp_4366_:
{
lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4377_ = lean_unsigned_to_nat(5u);
v___x_4378_ = l_Lean_Syntax_getArg(v_stx_4341_, v___x_4377_);
v___x_4379_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(v___x_4378_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
lean_dec(v___x_4378_);
if (lean_obj_tag(v___x_4379_) == 0)
{
lean_object* v_a_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; 
v_a_4380_ = lean_ctor_get(v___x_4379_, 0);
lean_inc(v_a_4380_);
lean_dec_ref_known(v___x_4379_, 1);
v___x_4381_ = lean_unsigned_to_nat(4u);
v___x_4382_ = l_Lean_Syntax_getArg(v_stx_4341_, v___x_4381_);
v___x_4383_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(v___x_4382_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
lean_dec(v___x_4382_);
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4384_; 
v_a_4384_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4384_);
lean_dec_ref_known(v___x_4383_, 1);
if (lean_obj_tag(v_a_4384_) == 0)
{
lean_object* v_backwardRules_4385_; uint8_t v_trivial_4386_; uint8_t v_jp_4387_; uint8_t v_errorOnMissingSpec_4388_; uint8_t v_debug_4389_; uint8_t v_internalize_4390_; lean_object* v___x_4391_; 
v_backwardRules_4385_ = lean_ctor_get(v___y_4369_, 0);
lean_inc_ref(v_backwardRules_4385_);
lean_dec_ref(v___y_4369_);
v_trivial_4386_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1);
v_jp_4387_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_4388_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 4);
v_debug_4389_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 5);
v_internalize_4390_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 6);
v___x_4391_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2);
v___y_4351_ = v_internalize_4390_;
v___y_4352_ = v_debug_4389_;
v___y_4353_ = v_a_4380_;
v___y_4354_ = v_trivial_4386_;
v___y_4355_ = v___y_4367_;
v___y_4356_ = v_backwardRules_4385_;
v___y_4357_ = v_untilPat_x3f_4370_;
v___y_4358_ = v_jp_4387_;
v___y_4359_ = v_errorOnMissingSpec_4388_;
v___y_4360_ = v_a_4384_;
v___y_4361_ = v___y_4368_;
v___y_4362_ = v___x_4391_;
goto v___jp_4350_;
}
else
{
lean_object* v_backwardRules_4392_; uint8_t v_trivial_4393_; uint8_t v_jp_4394_; uint8_t v_errorOnMissingSpec_4395_; uint8_t v_debug_4396_; uint8_t v_internalize_4397_; lean_object* v_val_4398_; 
v_backwardRules_4392_ = lean_ctor_get(v___y_4369_, 0);
lean_inc_ref(v_backwardRules_4392_);
lean_dec_ref(v___y_4369_);
v_trivial_4393_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1);
v_jp_4394_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_4395_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 4);
v_debug_4396_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 5);
v_internalize_4397_ = lean_ctor_get_uint8(v___y_4368_, sizeof(void*)*1 + 6);
v_val_4398_ = lean_ctor_get(v_a_4384_, 0);
lean_inc(v_val_4398_);
v___y_4351_ = v_internalize_4397_;
v___y_4352_ = v_debug_4396_;
v___y_4353_ = v_a_4380_;
v___y_4354_ = v_trivial_4393_;
v___y_4355_ = v___y_4367_;
v___y_4356_ = v_backwardRules_4392_;
v___y_4357_ = v_untilPat_x3f_4370_;
v___y_4358_ = v_jp_4394_;
v___y_4359_ = v_errorOnMissingSpec_4395_;
v___y_4360_ = v_a_4384_;
v___y_4361_ = v___y_4368_;
v___y_4362_ = v_val_4398_;
goto v___jp_4350_;
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_dec(v_a_4380_);
lean_dec(v_untilPat_x3f_4370_);
lean_dec_ref(v___y_4369_);
lean_dec_ref(v___y_4368_);
lean_dec_ref(v___y_4367_);
v_a_4399_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4383_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4383_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
lean_dec(v_untilPat_x3f_4370_);
lean_dec_ref(v___y_4369_);
lean_dec_ref(v___y_4368_);
lean_dec_ref(v___y_4367_);
v_a_4407_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4379_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v___x_4379_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
v___jp_4415_:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; uint8_t v___x_4424_; uint8_t v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___x_4422_ = lean_unsigned_to_nat(1u);
v___x_4423_ = l_Lean_Syntax_getArg(v_stx_4341_, v___x_4422_);
v___x_4424_ = 1;
v___x_4425_ = 0;
v___x_4426_ = lean_box(0);
v___x_4427_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0));
v___x_4428_ = lean_box(v___x_4424_);
v___x_4429_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabConfig___boxed), 12, 3);
lean_closure_set(v___x_4429_, 0, v___x_4423_);
lean_closure_set(v___x_4429_, 1, v___x_4427_);
lean_closure_set(v___x_4429_, 2, v___x_4428_);
v___x_4430_ = lean_box(0);
v___x_4431_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_4429_, v___x_4430_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4433_; 
v_a_4432_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_a_4432_);
lean_dec_ref_known(v___x_4431_, 1);
v___x_4433_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(v_a_4432_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; 
lean_dec_ref_known(v___x_4433_, 1);
v___x_4434_ = lean_unsigned_to_nat(2u);
v___x_4435_ = l_Lean_Syntax_getArg(v_stx_4341_, v___x_4434_);
v___x_4436_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(v___x_4435_, v_goal_4342_, v___x_4425_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
lean_dec(v___x_4435_);
if (lean_obj_tag(v___x_4436_) == 0)
{
lean_object* v_a_4437_; lean_object* v_fst_4438_; lean_object* v_snd_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; uint8_t v___x_4442_; 
v_a_4437_ = lean_ctor_get(v___x_4436_, 0);
lean_inc(v_a_4437_);
lean_dec_ref_known(v___x_4436_, 1);
v_fst_4438_ = lean_ctor_get(v_a_4437_, 0);
lean_inc(v_fst_4438_);
v_snd_4439_ = lean_ctor_get(v_a_4437_, 1);
lean_inc(v_snd_4439_);
lean_dec(v_a_4437_);
v___x_4440_ = lean_unsigned_to_nat(3u);
v___x_4441_ = l_Lean_Syntax_getArg(v_stx_4341_, v___x_4440_);
v___x_4442_ = l_Lean_Syntax_isNone(v___x_4441_);
if (v___x_4442_ == 0)
{
lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v_a_4445_; lean_object* v___x_4447_; uint8_t v_isShared_4448_; uint8_t v_isSharedCheck_4452_; 
v___x_4443_ = l_Lean_Syntax_getArg(v___x_4441_, v___x_4422_);
lean_dec(v___x_4441_);
v___x_4444_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(v___x_4443_, v___y_4418_);
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4452_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4447_ = v___x_4444_;
v_isShared_4448_ = v_isSharedCheck_4452_;
goto v_resetjp_4446_;
}
else
{
lean_inc(v_a_4445_);
lean_dec(v___x_4444_);
v___x_4447_ = lean_box(0);
v_isShared_4448_ = v_isSharedCheck_4452_;
goto v_resetjp_4446_;
}
v_resetjp_4446_:
{
lean_object* v___x_4450_; 
if (v_isShared_4448_ == 0)
{
lean_ctor_set_tag(v___x_4447_, 1);
v___x_4450_ = v___x_4447_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_a_4445_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
v___y_4367_ = v_snd_4439_;
v___y_4368_ = v_a_4432_;
v___y_4369_ = v_fst_4438_;
v_untilPat_x3f_4370_ = v___x_4450_;
v___y_4371_ = v___y_4416_;
v___y_4372_ = v___y_4417_;
v___y_4373_ = v___y_4418_;
v___y_4374_ = v___y_4419_;
v___y_4375_ = v___y_4420_;
v___y_4376_ = v___y_4421_;
goto v___jp_4366_;
}
}
}
else
{
lean_dec(v___x_4441_);
v___y_4367_ = v_snd_4439_;
v___y_4368_ = v_a_4432_;
v___y_4369_ = v_fst_4438_;
v_untilPat_x3f_4370_ = v___x_4426_;
v___y_4371_ = v___y_4416_;
v___y_4372_ = v___y_4417_;
v___y_4373_ = v___y_4418_;
v___y_4374_ = v___y_4419_;
v___y_4375_ = v___y_4420_;
v___y_4376_ = v___y_4421_;
goto v___jp_4366_;
}
}
else
{
lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
lean_dec(v_a_4432_);
v_a_4453_ = lean_ctor_get(v___x_4436_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4436_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4455_ = v___x_4436_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4436_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
else
{
lean_object* v_a_4461_; lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4468_; 
lean_dec(v_a_4432_);
lean_dec(v_goal_4342_);
v_a_4461_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4463_ = v___x_4433_;
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
else
{
lean_inc(v_a_4461_);
lean_dec(v___x_4433_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4468_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4466_; 
if (v_isShared_4464_ == 0)
{
v___x_4466_ = v___x_4463_;
goto v_reusejp_4465_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v_a_4461_);
v___x_4466_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4465_;
}
v_reusejp_4465_:
{
return v___x_4466_;
}
}
}
}
else
{
lean_object* v_a_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4476_; 
lean_dec(v_goal_4342_);
v_a_4469_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4471_ = v___x_4431_;
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_a_4469_);
lean_dec(v___x_4431_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4476_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v___x_4474_; 
if (v_isShared_4472_ == 0)
{
v___x_4474_ = v___x_4471_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v_a_4469_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
return v___x_4474_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed(lean_object* v_stx_4490_, lean_object* v_goal_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(v_stx_4490_, v_goal_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v_stx_4490_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(lean_object* v_stx_4500_, lean_object* v_goal_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_){
_start:
{
lean_object* v___f_4509_; lean_object* v___x_4510_; 
lean_inc(v_goal_4501_);
v___f_4509_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4509_, 0, v_stx_4500_);
lean_closure_set(v___f_4509_, 1, v_goal_4501_);
v___x_4510_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_goal_4501_, v___f_4509_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_);
return v___x_4510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___boxed(lean_object* v_stx_4511_, lean_object* v_goal_4512_, lean_object* v_a_4513_, lean_object* v_a_4514_, lean_object* v_a_4515_, lean_object* v_a_4516_, lean_object* v_a_4517_, lean_object* v_a_4518_, lean_object* v_a_4519_){
_start:
{
lean_object* v_res_4520_; 
v_res_4520_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_4511_, v_goal_4512_, v_a_4513_, v_a_4514_, v_a_4515_, v_a_4516_, v_a_4517_, v_a_4518_);
lean_dec(v_a_4518_);
lean_dec_ref(v_a_4517_);
lean_dec(v_a_4516_);
lean_dec_ref(v_a_4515_);
lean_dec(v_a_4514_);
lean_dec_ref(v_a_4513_);
return v_res_4520_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(lean_object* v_ref_4521_, lean_object* v_msgData_4522_, uint8_t v_severity_4523_, uint8_t v_isSilent_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
lean_object* v___x_4532_; 
v___x_4532_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4521_, v_msgData_4522_, v_severity_4523_, v_isSilent_4524_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_);
return v___x_4532_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___boxed(lean_object* v_ref_4533_, lean_object* v_msgData_4534_, lean_object* v_severity_4535_, lean_object* v_isSilent_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
uint8_t v_severity_boxed_4544_; uint8_t v_isSilent_boxed_4545_; lean_object* v_res_4546_; 
v_severity_boxed_4544_ = lean_unbox(v_severity_4535_);
v_isSilent_boxed_4545_ = lean_unbox(v_isSilent_4536_);
v_res_4546_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(v_ref_4533_, v_msgData_4534_, v_severity_boxed_4544_, v_isSilent_boxed_4545_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
lean_dec(v___y_4538_);
lean_dec_ref(v___y_4537_);
lean_dec(v_ref_4533_);
return v_res_4546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(lean_object* v_a_4547_, lean_object* v_ctx_4548_, lean_object* v_scope_4549_, lean_object* v_stepLimit_4550_, lean_object* v_invariantAlts_x3f_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_){
_start:
{
lean_object* v___x_4562_; 
v___x_4562_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_run(v_a_4547_, v_ctx_4548_, v_scope_4549_, v_stepLimit_4550_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_);
if (lean_obj_tag(v___x_4562_) == 0)
{
if (lean_obj_tag(v_invariantAlts_x3f_4551_) == 1)
{
lean_object* v_a_4563_; lean_object* v_val_4564_; lean_object* v_invariants_4565_; lean_object* v_inlineHandledInvariants_4566_; lean_object* v___x_4567_; 
v_a_4563_ = lean_ctor_get(v___x_4562_, 0);
lean_inc(v_a_4563_);
lean_dec_ref_known(v___x_4562_, 1);
v_val_4564_ = lean_ctor_get(v_invariantAlts_x3f_4551_, 0);
v_invariants_4565_ = lean_ctor_get(v_a_4563_, 0);
v_inlineHandledInvariants_4566_ = lean_ctor_get(v_a_4563_, 2);
lean_inc_ref(v_inlineHandledInvariants_4566_);
v___x_4567_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_val_4564_, v_invariants_4565_, v_inlineHandledInvariants_4566_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4574_ == 0)
{
lean_object* v_unused_4575_; 
v_unused_4575_ = lean_ctor_get(v___x_4567_, 0);
lean_dec(v_unused_4575_);
v___x_4569_ = v___x_4567_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_dec(v___x_4567_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
lean_ctor_set(v___x_4569_, 0, v_a_4563_);
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4563_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
else
{
lean_object* v_a_4576_; lean_object* v___x_4578_; uint8_t v_isShared_4579_; uint8_t v_isSharedCheck_4583_; 
lean_dec(v_a_4563_);
v_a_4576_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_4583_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4583_ == 0)
{
v___x_4578_ = v___x_4567_;
v_isShared_4579_ = v_isSharedCheck_4583_;
goto v_resetjp_4577_;
}
else
{
lean_inc(v_a_4576_);
lean_dec(v___x_4567_);
v___x_4578_ = lean_box(0);
v_isShared_4579_ = v_isSharedCheck_4583_;
goto v_resetjp_4577_;
}
v_resetjp_4577_:
{
lean_object* v___x_4581_; 
if (v_isShared_4579_ == 0)
{
v___x_4581_ = v___x_4578_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4582_; 
v_reuseFailAlloc_4582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4582_, 0, v_a_4576_);
v___x_4581_ = v_reuseFailAlloc_4582_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
return v___x_4581_;
}
}
}
}
else
{
return v___x_4562_;
}
}
else
{
return v___x_4562_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed(lean_object* v_a_4584_, lean_object* v_ctx_4585_, lean_object* v_scope_4586_, lean_object* v_stepLimit_4587_, lean_object* v_invariantAlts_x3f_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_){
_start:
{
lean_object* v_res_4599_; 
v_res_4599_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(v_a_4584_, v_ctx_4585_, v_scope_4586_, v_stepLimit_4587_, v_invariantAlts_x3f_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_, v___y_4597_);
lean_dec(v___y_4597_);
lean_dec_ref(v___y_4596_);
lean_dec(v___y_4595_);
lean_dec_ref(v___y_4594_);
lean_dec(v___y_4593_);
lean_dec_ref(v___y_4592_);
lean_dec(v___y_4591_);
lean_dec_ref(v___y_4590_);
lean_dec(v___y_4589_);
lean_dec(v_invariantAlts_x3f_4588_);
lean_dec_ref(v_ctx_4585_);
return v_res_4599_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(lean_object* v_x_4600_, lean_object* v_x_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
if (lean_obj_tag(v_x_4600_) == 0)
{
lean_object* v___x_4612_; lean_object* v___x_4613_; 
v___x_4612_ = l_List_reverse___redArg(v_x_4601_);
v___x_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4612_);
return v___x_4613_;
}
else
{
lean_object* v_head_4614_; lean_object* v_tail_4615_; lean_object* v___x_4617_; uint8_t v_isShared_4618_; uint8_t v_isSharedCheck_4633_; 
v_head_4614_ = lean_ctor_get(v_x_4600_, 0);
v_tail_4615_ = lean_ctor_get(v_x_4600_, 1);
v_isSharedCheck_4633_ = !lean_is_exclusive(v_x_4600_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4617_ = v_x_4600_;
v_isShared_4618_ = v_isSharedCheck_4633_;
goto v_resetjp_4616_;
}
else
{
lean_inc(v_tail_4615_);
lean_inc(v_head_4614_);
lean_dec(v_x_4600_);
v___x_4617_ = lean_box(0);
v_isShared_4618_ = v_isSharedCheck_4633_;
goto v_resetjp_4616_;
}
v_resetjp_4616_:
{
lean_object* v___x_4619_; 
v___x_4619_ = l_Lean_Meta_Grind_mkGoalCore(v_head_4614_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
if (lean_obj_tag(v___x_4619_) == 0)
{
lean_object* v_a_4620_; lean_object* v___x_4622_; 
v_a_4620_ = lean_ctor_get(v___x_4619_, 0);
lean_inc(v_a_4620_);
lean_dec_ref_known(v___x_4619_, 1);
if (v_isShared_4618_ == 0)
{
lean_ctor_set(v___x_4617_, 1, v_x_4601_);
lean_ctor_set(v___x_4617_, 0, v_a_4620_);
v___x_4622_ = v___x_4617_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4620_);
lean_ctor_set(v_reuseFailAlloc_4624_, 1, v_x_4601_);
v___x_4622_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
v_x_4600_ = v_tail_4615_;
v_x_4601_ = v___x_4622_;
goto _start;
}
}
else
{
lean_object* v_a_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4632_; 
lean_del_object(v___x_4617_);
lean_dec(v_tail_4615_);
lean_dec(v_x_4601_);
v_a_4625_ = lean_ctor_get(v___x_4619_, 0);
v_isSharedCheck_4632_ = !lean_is_exclusive(v___x_4619_);
if (v_isSharedCheck_4632_ == 0)
{
v___x_4627_ = v___x_4619_;
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_a_4625_);
lean_dec(v___x_4619_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4632_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
lean_object* v___x_4630_; 
if (v_isShared_4628_ == 0)
{
v___x_4630_ = v___x_4627_;
goto v_reusejp_4629_;
}
else
{
lean_object* v_reuseFailAlloc_4631_; 
v_reuseFailAlloc_4631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4631_, 0, v_a_4625_);
v___x_4630_ = v_reuseFailAlloc_4631_;
goto v_reusejp_4629_;
}
v_reusejp_4629_:
{
return v___x_4630_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1___boxed(lean_object* v_x_4634_, lean_object* v_x_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(v_x_4634_, v_x_4635_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_);
lean_dec(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
lean_dec(v___y_4640_);
lean_dec_ref(v___y_4639_);
lean_dec(v___y_4638_);
lean_dec_ref(v___y_4637_);
lean_dec(v___y_4636_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(lean_object* v___x_4647_, lean_object* v___x_4648_, lean_object* v_a_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_){
_start:
{
lean_object* v___x_4660_; 
v___x_4660_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(v___x_4647_, v___x_4648_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4671_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4663_ = v___x_4660_;
v_isShared_4664_ = v_isSharedCheck_4671_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_a_4661_);
lean_dec(v___x_4660_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4671_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v_vcs_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4669_; 
v_vcs_4665_ = lean_ctor_get(v_a_4649_, 1);
lean_inc_ref(v_vcs_4665_);
lean_dec_ref(v_a_4649_);
v___x_4666_ = lean_array_to_list(v_vcs_4665_);
v___x_4667_ = l_List_appendTR___redArg(v_a_4661_, v___x_4666_);
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 0, v___x_4667_);
v___x_4669_ = v___x_4663_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v___x_4667_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
else
{
lean_dec_ref(v_a_4649_);
return v___x_4660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed(lean_object* v___x_4672_, lean_object* v___x_4673_, lean_object* v_a_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_){
_start:
{
lean_object* v_res_4685_; 
v_res_4685_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(v___x_4672_, v___x_4673_, v_a_4674_, v___y_4675_, v___y_4676_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_, v___y_4682_, v___y_4683_);
lean_dec(v___y_4683_);
lean_dec_ref(v___y_4682_);
lean_dec(v___y_4681_);
lean_dec_ref(v___y_4680_);
lean_dec(v___y_4679_);
lean_dec_ref(v___y_4678_);
lean_dec(v___y_4677_);
lean_dec_ref(v___y_4676_);
lean_dec(v___y_4675_);
return v_res_4685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(size_t v_sz_4686_, size_t v_i_4687_, lean_object* v_bs_4688_){
_start:
{
uint8_t v___x_4689_; 
v___x_4689_ = lean_usize_dec_lt(v_i_4687_, v_sz_4686_);
if (v___x_4689_ == 0)
{
return v_bs_4688_;
}
else
{
lean_object* v_v_4690_; lean_object* v_mvarId_4691_; lean_object* v___x_4692_; lean_object* v_bs_x27_4693_; size_t v___x_4694_; size_t v___x_4695_; lean_object* v___x_4696_; 
v_v_4690_ = lean_array_uget_borrowed(v_bs_4688_, v_i_4687_);
v_mvarId_4691_ = lean_ctor_get(v_v_4690_, 1);
lean_inc(v_mvarId_4691_);
v___x_4692_ = lean_unsigned_to_nat(0u);
v_bs_x27_4693_ = lean_array_uset(v_bs_4688_, v_i_4687_, v___x_4692_);
v___x_4694_ = ((size_t)1ULL);
v___x_4695_ = lean_usize_add(v_i_4687_, v___x_4694_);
v___x_4696_ = lean_array_uset(v_bs_x27_4693_, v_i_4687_, v_mvarId_4691_);
v_i_4687_ = v___x_4695_;
v_bs_4688_ = v___x_4696_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___boxed(lean_object* v_sz_4698_, lean_object* v_i_4699_, lean_object* v_bs_4700_){
_start:
{
size_t v_sz_boxed_4701_; size_t v_i_boxed_4702_; lean_object* v_res_4703_; 
v_sz_boxed_4701_ = lean_unbox_usize(v_sz_4698_);
lean_dec(v_sz_4698_);
v_i_boxed_4702_ = lean_unbox_usize(v_i_4699_);
lean_dec(v_i_4699_);
v_res_4703_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(v_sz_boxed_4701_, v_i_boxed_4702_, v_bs_4700_);
return v_res_4703_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_keys_4704_, lean_object* v_i_4705_, lean_object* v_k_4706_){
_start:
{
lean_object* v___x_4707_; uint8_t v___x_4708_; 
v___x_4707_ = lean_array_get_size(v_keys_4704_);
v___x_4708_ = lean_nat_dec_lt(v_i_4705_, v___x_4707_);
if (v___x_4708_ == 0)
{
lean_dec(v_i_4705_);
return v___x_4708_;
}
else
{
lean_object* v_k_x27_4709_; uint8_t v___x_4710_; 
v_k_x27_4709_ = lean_array_fget_borrowed(v_keys_4704_, v_i_4705_);
v___x_4710_ = l_Lean_instBEqMVarId_beq(v_k_4706_, v_k_x27_4709_);
if (v___x_4710_ == 0)
{
lean_object* v___x_4711_; lean_object* v___x_4712_; 
v___x_4711_ = lean_unsigned_to_nat(1u);
v___x_4712_ = lean_nat_add(v_i_4705_, v___x_4711_);
lean_dec(v_i_4705_);
v_i_4705_ = v___x_4712_;
goto _start;
}
else
{
lean_dec(v_i_4705_);
return v___x_4710_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_keys_4714_, lean_object* v_i_4715_, lean_object* v_k_4716_){
_start:
{
uint8_t v_res_4717_; lean_object* v_r_4718_; 
v_res_4717_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(v_keys_4714_, v_i_4715_, v_k_4716_);
lean_dec(v_k_4716_);
lean_dec_ref(v_keys_4714_);
v_r_4718_ = lean_box(v_res_4717_);
return v_r_4718_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_4719_; size_t v___x_4720_; size_t v___x_4721_; 
v___x_4719_ = ((size_t)5ULL);
v___x_4720_ = ((size_t)1ULL);
v___x_4721_ = lean_usize_shift_left(v___x_4720_, v___x_4719_);
return v___x_4721_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_4722_; size_t v___x_4723_; size_t v___x_4724_; 
v___x_4722_ = ((size_t)1ULL);
v___x_4723_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_4724_ = lean_usize_sub(v___x_4723_, v___x_4722_);
return v___x_4724_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4725_, size_t v_x_4726_, lean_object* v_x_4727_){
_start:
{
if (lean_obj_tag(v_x_4725_) == 0)
{
lean_object* v_es_4728_; lean_object* v___x_4729_; size_t v___x_4730_; size_t v___x_4731_; size_t v___x_4732_; lean_object* v_j_4733_; lean_object* v___x_4734_; 
v_es_4728_ = lean_ctor_get(v_x_4725_, 0);
v___x_4729_ = lean_box(2);
v___x_4730_ = ((size_t)5ULL);
v___x_4731_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_4732_ = lean_usize_land(v_x_4726_, v___x_4731_);
v_j_4733_ = lean_usize_to_nat(v___x_4732_);
v___x_4734_ = lean_array_get_borrowed(v___x_4729_, v_es_4728_, v_j_4733_);
lean_dec(v_j_4733_);
switch(lean_obj_tag(v___x_4734_))
{
case 0:
{
lean_object* v_key_4735_; uint8_t v___x_4736_; 
v_key_4735_ = lean_ctor_get(v___x_4734_, 0);
v___x_4736_ = l_Lean_instBEqMVarId_beq(v_x_4727_, v_key_4735_);
return v___x_4736_;
}
case 1:
{
lean_object* v_node_4737_; size_t v___x_4738_; 
v_node_4737_ = lean_ctor_get(v___x_4734_, 0);
v___x_4738_ = lean_usize_shift_right(v_x_4726_, v___x_4730_);
v_x_4725_ = v_node_4737_;
v_x_4726_ = v___x_4738_;
goto _start;
}
default: 
{
uint8_t v___x_4740_; 
v___x_4740_ = 0;
return v___x_4740_;
}
}
}
else
{
lean_object* v_ks_4741_; lean_object* v___x_4742_; uint8_t v___x_4743_; 
v_ks_4741_ = lean_ctor_get(v_x_4725_, 0);
v___x_4742_ = lean_unsigned_to_nat(0u);
v___x_4743_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(v_ks_4741_, v___x_4742_, v_x_4727_);
return v___x_4743_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4744_, lean_object* v_x_4745_, lean_object* v_x_4746_){
_start:
{
size_t v_x_6274__boxed_4747_; uint8_t v_res_4748_; lean_object* v_r_4749_; 
v_x_6274__boxed_4747_ = lean_unbox_usize(v_x_4745_);
lean_dec(v_x_4745_);
v_res_4748_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_4744_, v_x_6274__boxed_4747_, v_x_4746_);
lean_dec(v_x_4746_);
lean_dec_ref(v_x_4744_);
v_r_4749_ = lean_box(v_res_4748_);
return v_r_4749_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(lean_object* v_x_4750_, lean_object* v_x_4751_){
_start:
{
uint64_t v___x_4752_; size_t v___x_4753_; uint8_t v___x_4754_; 
v___x_4752_ = l_Lean_instHashableMVarId_hash(v_x_4751_);
v___x_4753_ = lean_uint64_to_usize(v___x_4752_);
v___x_4754_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_4750_, v___x_4753_, v_x_4751_);
return v___x_4754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg___boxed(lean_object* v_x_4755_, lean_object* v_x_4756_){
_start:
{
uint8_t v_res_4757_; lean_object* v_r_4758_; 
v_res_4757_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_x_4755_, v_x_4756_);
lean_dec(v_x_4756_);
lean_dec_ref(v_x_4755_);
v_r_4758_ = lean_box(v_res_4757_);
return v_r_4758_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(lean_object* v_mvarId_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v___x_4762_; lean_object* v_mctx_4763_; lean_object* v_eAssignment_4764_; uint8_t v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4762_ = lean_st_ref_get(v___y_4760_);
v_mctx_4763_ = lean_ctor_get(v___x_4762_, 0);
lean_inc_ref(v_mctx_4763_);
lean_dec(v___x_4762_);
v_eAssignment_4764_ = lean_ctor_get(v_mctx_4763_, 8);
lean_inc_ref(v_eAssignment_4764_);
lean_dec_ref(v_mctx_4763_);
v___x_4765_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_eAssignment_4764_, v_mvarId_4759_);
lean_dec_ref(v_eAssignment_4764_);
v___x_4766_ = lean_box(v___x_4765_);
v___x_4767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4767_, 0, v___x_4766_);
return v___x_4767_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg___boxed(lean_object* v_mvarId_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_){
_start:
{
lean_object* v_res_4771_; 
v_res_4771_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v_mvarId_4768_, v___y_4769_);
lean_dec(v___y_4769_);
lean_dec(v_mvarId_4768_);
return v_res_4771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(lean_object* v_as_4772_, size_t v_i_4773_, size_t v_stop_4774_, lean_object* v_b_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_){
_start:
{
lean_object* v_a_4786_; uint8_t v___x_4790_; 
v___x_4790_ = lean_usize_dec_eq(v_i_4773_, v_stop_4774_);
if (v___x_4790_ == 0)
{
lean_object* v___x_4791_; lean_object* v___x_4794_; 
v___x_4791_ = lean_array_uget_borrowed(v_as_4772_, v_i_4773_);
v___x_4794_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v___x_4791_, v___y_4781_);
if (lean_obj_tag(v___x_4794_) == 0)
{
lean_object* v_a_4795_; uint8_t v___x_4796_; 
v_a_4795_ = lean_ctor_get(v___x_4794_, 0);
lean_inc(v_a_4795_);
lean_dec_ref_known(v___x_4794_, 1);
v___x_4796_ = lean_unbox(v_a_4795_);
lean_dec(v_a_4795_);
if (v___x_4796_ == 0)
{
goto v___jp_4792_;
}
else
{
v_a_4786_ = v_b_4775_;
goto v___jp_4785_;
}
}
else
{
if (lean_obj_tag(v___x_4794_) == 0)
{
lean_object* v_a_4797_; uint8_t v___x_4798_; 
v_a_4797_ = lean_ctor_get(v___x_4794_, 0);
lean_inc(v_a_4797_);
lean_dec_ref_known(v___x_4794_, 1);
v___x_4798_ = lean_unbox(v_a_4797_);
lean_dec(v_a_4797_);
if (v___x_4798_ == 0)
{
v_a_4786_ = v_b_4775_;
goto v___jp_4785_;
}
else
{
goto v___jp_4792_;
}
}
else
{
lean_object* v_a_4799_; lean_object* v___x_4801_; uint8_t v_isShared_4802_; uint8_t v_isSharedCheck_4806_; 
lean_dec_ref(v_b_4775_);
v_a_4799_ = lean_ctor_get(v___x_4794_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v___x_4794_);
if (v_isSharedCheck_4806_ == 0)
{
v___x_4801_ = v___x_4794_;
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
else
{
lean_inc(v_a_4799_);
lean_dec(v___x_4794_);
v___x_4801_ = lean_box(0);
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
v_resetjp_4800_:
{
lean_object* v___x_4804_; 
if (v_isShared_4802_ == 0)
{
v___x_4804_ = v___x_4801_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v_a_4799_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
}
}
v___jp_4792_:
{
lean_object* v___x_4793_; 
lean_inc(v___x_4791_);
v___x_4793_ = lean_array_push(v_b_4775_, v___x_4791_);
v_a_4786_ = v___x_4793_;
goto v___jp_4785_;
}
}
else
{
lean_object* v___x_4807_; 
v___x_4807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4807_, 0, v_b_4775_);
return v___x_4807_;
}
v___jp_4785_:
{
size_t v___x_4787_; size_t v___x_4788_; 
v___x_4787_ = ((size_t)1ULL);
v___x_4788_ = lean_usize_add(v_i_4773_, v___x_4787_);
v_i_4773_ = v___x_4788_;
v_b_4775_ = v_a_4786_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2___boxed(lean_object* v_as_4808_, lean_object* v_i_4809_, lean_object* v_stop_4810_, lean_object* v_b_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_){
_start:
{
size_t v_i_boxed_4821_; size_t v_stop_boxed_4822_; lean_object* v_res_4823_; 
v_i_boxed_4821_ = lean_unbox_usize(v_i_4809_);
lean_dec(v_i_4809_);
v_stop_boxed_4822_ = lean_unbox_usize(v_stop_4810_);
lean_dec(v_stop_4810_);
v_res_4823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_as_4808_, v_i_boxed_4821_, v_stop_boxed_4822_, v_b_4811_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_, v___y_4816_, v___y_4817_, v___y_4818_, v___y_4819_);
lean_dec(v___y_4819_);
lean_dec_ref(v___y_4818_);
lean_dec(v___y_4817_);
lean_dec_ref(v___y_4816_);
lean_dec(v___y_4815_);
lean_dec_ref(v___y_4814_);
lean_dec(v___y_4813_);
lean_dec_ref(v___y_4812_);
lean_dec_ref(v_as_4808_);
return v_res_4823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(lean_object* v_stx_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_, lean_object* v_a_4827_, lean_object* v_a_4828_, lean_object* v_a_4829_, lean_object* v_a_4830_, lean_object* v_a_4831_, lean_object* v_a_4832_){
_start:
{
lean_object* v___x_4834_; 
v___x_4834_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v_a_4826_, v_a_4829_, v_a_4830_, v_a_4831_, v_a_4832_);
if (lean_obj_tag(v___x_4834_) == 0)
{
lean_object* v_a_4835_; lean_object* v_mvarId_4836_; lean_object* v___x_4837_; 
v_a_4835_ = lean_ctor_get(v___x_4834_, 0);
lean_inc(v_a_4835_);
lean_dec_ref_known(v___x_4834_, 1);
v_mvarId_4836_ = lean_ctor_get(v_a_4835_, 1);
lean_inc(v_mvarId_4836_);
lean_inc(v_stx_4824_);
v___x_4837_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_4824_, v_mvarId_4836_, v_a_4827_, v_a_4828_, v_a_4829_, v_a_4830_, v_a_4831_, v_a_4832_);
if (lean_obj_tag(v___x_4837_) == 0)
{
lean_object* v_a_4838_; lean_object* v_config_4839_; lean_object* v_ctx_4840_; lean_object* v_scope_4841_; lean_object* v_invariantAlts_x3f_4842_; lean_object* v_stepLimit_4843_; lean_object* v___f_4844_; lean_object* v___x_4845_; 
v_a_4838_ = lean_ctor_get(v___x_4837_, 0);
lean_inc(v_a_4838_);
lean_dec_ref_known(v___x_4837_, 1);
v_config_4839_ = lean_ctor_get(v_a_4838_, 0);
lean_inc_ref(v_config_4839_);
v_ctx_4840_ = lean_ctor_get(v_a_4838_, 1);
lean_inc_ref(v_ctx_4840_);
v_scope_4841_ = lean_ctor_get(v_a_4838_, 2);
lean_inc_ref(v_scope_4841_);
v_invariantAlts_x3f_4842_ = lean_ctor_get(v_a_4838_, 3);
lean_inc_n(v_invariantAlts_x3f_4842_, 2);
lean_dec(v_a_4838_);
v_stepLimit_4843_ = lean_ctor_get(v_config_4839_, 0);
lean_inc(v_stepLimit_4843_);
lean_dec_ref(v_config_4839_);
v___f_4844_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed), 15, 5);
lean_closure_set(v___f_4844_, 0, v_a_4835_);
lean_closure_set(v___f_4844_, 1, v_ctx_4840_);
lean_closure_set(v___f_4844_, 2, v_scope_4841_);
lean_closure_set(v___f_4844_, 3, v_stepLimit_4843_);
lean_closure_set(v___f_4844_, 4, v_invariantAlts_x3f_4842_);
v___x_4845_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_4844_, v_a_4825_, v_a_4826_, v_a_4829_, v_a_4830_, v_a_4831_, v_a_4832_);
if (lean_obj_tag(v___x_4845_) == 0)
{
lean_object* v_a_4846_; lean_object* v___y_4848_; lean_object* v___y_4849_; lean_object* v___y_4850_; lean_object* v___y_4851_; lean_object* v___y_4852_; lean_object* v___y_4853_; lean_object* v_a_4854_; lean_object* v___y_4870_; lean_object* v___y_4871_; lean_object* v___y_4872_; lean_object* v___y_4873_; lean_object* v___y_4874_; lean_object* v___y_4875_; lean_object* v___y_4876_; lean_object* v___y_4887_; lean_object* v___y_4888_; lean_object* v___y_4889_; lean_object* v___y_4890_; lean_object* v___y_4891_; lean_object* v___y_4892_; lean_object* v___y_4893_; lean_object* v___y_4894_; 
v_a_4846_ = lean_ctor_get(v___x_4845_, 0);
lean_inc(v_a_4846_);
lean_dec_ref_known(v___x_4845_, 1);
if (lean_obj_tag(v_invariantAlts_x3f_4842_) == 0)
{
lean_object* v_invariants_4907_; lean_object* v_vcs_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; size_t v_sz_4911_; size_t v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; 
v_invariants_4907_ = lean_ctor_get(v_a_4846_, 0);
v_vcs_4908_ = lean_ctor_get(v_a_4846_, 1);
v___x_4909_ = lean_unsigned_to_nat(4u);
v___x_4910_ = l_Lean_Syntax_getArg(v_stx_4824_, v___x_4909_);
lean_dec(v_stx_4824_);
v_sz_4911_ = lean_array_size(v_vcs_4908_);
v___x_4912_ = ((size_t)0ULL);
lean_inc_ref(v_vcs_4908_);
v___x_4913_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(v_sz_4911_, v___x_4912_, v_vcs_4908_);
v___x_4914_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___boxed), 11, 1);
lean_closure_set(v___x_4914_, 0, v___x_4913_);
lean_inc_ref_n(v_invariants_4907_, 2);
v___x_4915_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabInvariants___boxed), 12, 3);
lean_closure_set(v___x_4915_, 0, v___x_4910_);
lean_closure_set(v___x_4915_, 1, v_invariants_4907_);
lean_closure_set(v___x_4915_, 2, v___x_4914_);
v___x_4916_ = lean_array_to_list(v_invariants_4907_);
v___x_4917_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_4915_, v___x_4916_, v_a_4827_, v_a_4828_, v_a_4829_, v_a_4830_, v_a_4831_, v_a_4832_);
if (lean_obj_tag(v___x_4917_) == 0)
{
lean_dec_ref_known(v___x_4917_, 1);
v___y_4887_ = v_a_4825_;
v___y_4888_ = v_a_4826_;
v___y_4889_ = v_a_4827_;
v___y_4890_ = v_a_4828_;
v___y_4891_ = v_a_4829_;
v___y_4892_ = v_a_4830_;
v___y_4893_ = v_a_4831_;
v___y_4894_ = v_a_4832_;
goto v___jp_4886_;
}
else
{
lean_dec(v_a_4846_);
return v___x_4917_;
}
}
else
{
lean_dec_ref_known(v_invariantAlts_x3f_4842_, 1);
lean_dec(v_stx_4824_);
v___y_4887_ = v_a_4825_;
v___y_4888_ = v_a_4826_;
v___y_4889_ = v_a_4827_;
v___y_4890_ = v_a_4828_;
v___y_4891_ = v_a_4829_;
v___y_4892_ = v_a_4830_;
v___y_4893_ = v_a_4831_;
v___y_4894_ = v_a_4832_;
goto v___jp_4886_;
}
v___jp_4847_:
{
lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___f_4857_; lean_object* v___x_4858_; 
v___x_4855_ = lean_array_to_list(v_a_4854_);
v___x_4856_ = lean_box(0);
v___f_4857_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed), 13, 3);
lean_closure_set(v___f_4857_, 0, v___x_4855_);
lean_closure_set(v___f_4857_, 1, v___x_4856_);
lean_closure_set(v___f_4857_, 2, v_a_4846_);
v___x_4858_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_4857_, v___y_4851_, v___y_4853_, v___y_4849_, v___y_4848_, v___y_4850_, v___y_4852_);
if (lean_obj_tag(v___x_4858_) == 0)
{
lean_object* v_a_4859_; lean_object* v___x_4860_; 
v_a_4859_ = lean_ctor_get(v___x_4858_, 0);
lean_inc(v_a_4859_);
lean_dec_ref_known(v___x_4858_, 1);
v___x_4860_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v_a_4859_, v___y_4853_, v___y_4849_, v___y_4848_, v___y_4850_, v___y_4852_);
return v___x_4860_;
}
else
{
lean_object* v_a_4861_; lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_4868_; 
v_a_4861_ = lean_ctor_get(v___x_4858_, 0);
v_isSharedCheck_4868_ = !lean_is_exclusive(v___x_4858_);
if (v_isSharedCheck_4868_ == 0)
{
v___x_4863_ = v___x_4858_;
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
else
{
lean_inc(v_a_4861_);
lean_dec(v___x_4858_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
lean_object* v___x_4866_; 
if (v_isShared_4864_ == 0)
{
v___x_4866_ = v___x_4863_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v_a_4861_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
return v___x_4866_;
}
}
}
}
v___jp_4869_:
{
if (lean_obj_tag(v___y_4876_) == 0)
{
lean_object* v_a_4877_; 
v_a_4877_ = lean_ctor_get(v___y_4876_, 0);
lean_inc(v_a_4877_);
lean_dec_ref_known(v___y_4876_, 1);
v___y_4848_ = v___y_4870_;
v___y_4849_ = v___y_4871_;
v___y_4850_ = v___y_4873_;
v___y_4851_ = v___y_4872_;
v___y_4852_ = v___y_4874_;
v___y_4853_ = v___y_4875_;
v_a_4854_ = v_a_4877_;
goto v___jp_4847_;
}
else
{
lean_object* v_a_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4885_; 
lean_dec(v_a_4846_);
v_a_4878_ = lean_ctor_get(v___y_4876_, 0);
v_isSharedCheck_4885_ = !lean_is_exclusive(v___y_4876_);
if (v_isSharedCheck_4885_ == 0)
{
v___x_4880_ = v___y_4876_;
v_isShared_4881_ = v_isSharedCheck_4885_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_a_4878_);
lean_dec(v___y_4876_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4885_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v___x_4883_; 
if (v_isShared_4881_ == 0)
{
v___x_4883_ = v___x_4880_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4884_; 
v_reuseFailAlloc_4884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4884_, 0, v_a_4878_);
v___x_4883_ = v_reuseFailAlloc_4884_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
return v___x_4883_;
}
}
}
}
v___jp_4886_:
{
lean_object* v_invariants_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; uint8_t v___x_4899_; 
v_invariants_4895_ = lean_ctor_get(v_a_4846_, 0);
v___x_4896_ = lean_unsigned_to_nat(0u);
v___x_4897_ = lean_array_get_size(v_invariants_4895_);
v___x_4898_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2));
v___x_4899_ = lean_nat_dec_lt(v___x_4896_, v___x_4897_);
if (v___x_4899_ == 0)
{
v___y_4848_ = v___y_4892_;
v___y_4849_ = v___y_4891_;
v___y_4850_ = v___y_4893_;
v___y_4851_ = v___y_4887_;
v___y_4852_ = v___y_4894_;
v___y_4853_ = v___y_4888_;
v_a_4854_ = v___x_4898_;
goto v___jp_4847_;
}
else
{
uint8_t v___x_4900_; 
v___x_4900_ = lean_nat_dec_le(v___x_4897_, v___x_4897_);
if (v___x_4900_ == 0)
{
if (v___x_4899_ == 0)
{
v___y_4848_ = v___y_4892_;
v___y_4849_ = v___y_4891_;
v___y_4850_ = v___y_4893_;
v___y_4851_ = v___y_4887_;
v___y_4852_ = v___y_4894_;
v___y_4853_ = v___y_4888_;
v_a_4854_ = v___x_4898_;
goto v___jp_4847_;
}
else
{
size_t v___x_4901_; size_t v___x_4902_; lean_object* v___x_4903_; 
v___x_4901_ = ((size_t)0ULL);
v___x_4902_ = lean_usize_of_nat(v___x_4897_);
v___x_4903_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_invariants_4895_, v___x_4901_, v___x_4902_, v___x_4898_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_, v___y_4894_);
v___y_4870_ = v___y_4892_;
v___y_4871_ = v___y_4891_;
v___y_4872_ = v___y_4887_;
v___y_4873_ = v___y_4893_;
v___y_4874_ = v___y_4894_;
v___y_4875_ = v___y_4888_;
v___y_4876_ = v___x_4903_;
goto v___jp_4869_;
}
}
else
{
size_t v___x_4904_; size_t v___x_4905_; lean_object* v___x_4906_; 
v___x_4904_ = ((size_t)0ULL);
v___x_4905_ = lean_usize_of_nat(v___x_4897_);
v___x_4906_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_invariants_4895_, v___x_4904_, v___x_4905_, v___x_4898_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_, v___y_4894_);
v___y_4870_ = v___y_4892_;
v___y_4871_ = v___y_4891_;
v___y_4872_ = v___y_4887_;
v___y_4873_ = v___y_4893_;
v___y_4874_ = v___y_4894_;
v___y_4875_ = v___y_4888_;
v___y_4876_ = v___x_4906_;
goto v___jp_4869_;
}
}
}
}
else
{
lean_object* v_a_4918_; lean_object* v___x_4920_; uint8_t v_isShared_4921_; uint8_t v_isSharedCheck_4925_; 
lean_dec(v_invariantAlts_x3f_4842_);
lean_dec(v_stx_4824_);
v_a_4918_ = lean_ctor_get(v___x_4845_, 0);
v_isSharedCheck_4925_ = !lean_is_exclusive(v___x_4845_);
if (v_isSharedCheck_4925_ == 0)
{
v___x_4920_ = v___x_4845_;
v_isShared_4921_ = v_isSharedCheck_4925_;
goto v_resetjp_4919_;
}
else
{
lean_inc(v_a_4918_);
lean_dec(v___x_4845_);
v___x_4920_ = lean_box(0);
v_isShared_4921_ = v_isSharedCheck_4925_;
goto v_resetjp_4919_;
}
v_resetjp_4919_:
{
lean_object* v___x_4923_; 
if (v_isShared_4921_ == 0)
{
v___x_4923_ = v___x_4920_;
goto v_reusejp_4922_;
}
else
{
lean_object* v_reuseFailAlloc_4924_; 
v_reuseFailAlloc_4924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4924_, 0, v_a_4918_);
v___x_4923_ = v_reuseFailAlloc_4924_;
goto v_reusejp_4922_;
}
v_reusejp_4922_:
{
return v___x_4923_;
}
}
}
}
else
{
lean_object* v_a_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_4933_; 
lean_dec(v_a_4835_);
lean_dec(v_stx_4824_);
v_a_4926_ = lean_ctor_get(v___x_4837_, 0);
v_isSharedCheck_4933_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_4933_ == 0)
{
v___x_4928_ = v___x_4837_;
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_a_4926_);
lean_dec(v___x_4837_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
lean_object* v___x_4931_; 
if (v_isShared_4929_ == 0)
{
v___x_4931_ = v___x_4928_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v_a_4926_);
v___x_4931_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
return v___x_4931_;
}
}
}
}
else
{
lean_object* v_a_4934_; lean_object* v___x_4936_; uint8_t v_isShared_4937_; uint8_t v_isSharedCheck_4941_; 
lean_dec(v_stx_4824_);
v_a_4934_ = lean_ctor_get(v___x_4834_, 0);
v_isSharedCheck_4941_ = !lean_is_exclusive(v___x_4834_);
if (v_isSharedCheck_4941_ == 0)
{
v___x_4936_ = v___x_4834_;
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
else
{
lean_inc(v_a_4934_);
lean_dec(v___x_4834_);
v___x_4936_ = lean_box(0);
v_isShared_4937_ = v_isSharedCheck_4941_;
goto v_resetjp_4935_;
}
v_resetjp_4935_:
{
lean_object* v___x_4939_; 
if (v_isShared_4937_ == 0)
{
v___x_4939_ = v___x_4936_;
goto v_reusejp_4938_;
}
else
{
lean_object* v_reuseFailAlloc_4940_; 
v_reuseFailAlloc_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4940_, 0, v_a_4934_);
v___x_4939_ = v_reuseFailAlloc_4940_;
goto v_reusejp_4938_;
}
v_reusejp_4938_:
{
return v___x_4939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed(lean_object* v_stx_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(v_stx_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_);
lean_dec(v_a_4950_);
lean_dec_ref(v_a_4949_);
lean_dec(v_a_4948_);
lean_dec_ref(v_a_4947_);
lean_dec(v_a_4946_);
lean_dec_ref(v_a_4945_);
lean_dec(v_a_4944_);
lean_dec_ref(v_a_4943_);
return v_res_4952_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(lean_object* v_mvarId_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_){
_start:
{
lean_object* v___x_4963_; 
v___x_4963_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v_mvarId_4953_, v___y_4959_);
return v___x_4963_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___boxed(lean_object* v_mvarId_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_){
_start:
{
lean_object* v_res_4974_; 
v_res_4974_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(v_mvarId_4964_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_);
lean_dec(v___y_4972_);
lean_dec_ref(v___y_4971_);
lean_dec(v___y_4970_);
lean_dec_ref(v___y_4969_);
lean_dec(v___y_4968_);
lean_dec_ref(v___y_4967_);
lean_dec(v___y_4966_);
lean_dec_ref(v___y_4965_);
lean_dec(v_mvarId_4964_);
return v_res_4974_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(lean_object* v_00_u03b2_4975_, lean_object* v_x_4976_, lean_object* v_x_4977_){
_start:
{
uint8_t v___x_4978_; 
v___x_4978_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_x_4976_, v_x_4977_);
return v___x_4978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4979_, lean_object* v_x_4980_, lean_object* v_x_4981_){
_start:
{
uint8_t v_res_4982_; lean_object* v_r_4983_; 
v_res_4982_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(v_00_u03b2_4979_, v_x_4980_, v_x_4981_);
lean_dec(v_x_4981_);
lean_dec_ref(v_x_4980_);
v_r_4983_ = lean_box(v_res_4982_);
return v_r_4983_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4984_, lean_object* v_x_4985_, size_t v_x_4986_, lean_object* v_x_4987_){
_start:
{
uint8_t v___x_4988_; 
v___x_4988_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_4985_, v_x_4986_, v_x_4987_);
return v___x_4988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4989_, lean_object* v_x_4990_, lean_object* v_x_4991_, lean_object* v_x_4992_){
_start:
{
size_t v_x_6661__boxed_4993_; uint8_t v_res_4994_; lean_object* v_r_4995_; 
v_x_6661__boxed_4993_ = lean_unbox_usize(v_x_4991_);
lean_dec(v_x_4991_);
v_res_4994_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(v_00_u03b2_4989_, v_x_4990_, v_x_6661__boxed_4993_, v_x_4992_);
lean_dec(v_x_4992_);
lean_dec_ref(v_x_4990_);
v_r_4995_ = lean_box(v_res_4994_);
return v_r_4995_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_4996_, lean_object* v_keys_4997_, lean_object* v_vals_4998_, lean_object* v_heq_4999_, lean_object* v_i_5000_, lean_object* v_k_5001_){
_start:
{
uint8_t v___x_5002_; 
v___x_5002_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(v_keys_4997_, v_i_5000_, v_k_5001_);
return v___x_5002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_5003_, lean_object* v_keys_5004_, lean_object* v_vals_5005_, lean_object* v_heq_5006_, lean_object* v_i_5007_, lean_object* v_k_5008_){
_start:
{
uint8_t v_res_5009_; lean_object* v_r_5010_; 
v_res_5009_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_5003_, v_keys_5004_, v_vals_5005_, v_heq_5006_, v_i_5007_, v_k_5008_);
lean_dec(v_k_5008_);
lean_dec_ref(v_vals_5005_);
lean_dec_ref(v_keys_5004_);
v_r_5010_ = lean_box(v_res_5009_);
return v_r_5010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1(){
_start:
{
lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; 
v___x_5071_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_5072_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2));
v___x_5073_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__23));
v___x_5074_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed), 10, 0);
v___x_5075_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5071_, v___x_5072_, v___x_5073_, v___x_5074_);
return v___x_5075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___boxed(lean_object* v_a_5076_){
_start:
{
lean_object* v_res_5077_; 
v_res_5077_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
return v_res_5077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3(){
_start:
{
lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___x_5080_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__23));
v___x_5081_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0));
v___x_5082_ = l_Lean_addBuiltinDocString(v___x_5080_, v___x_5081_);
return v___x_5082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___boxed(lean_object* v_a_5083_){
_start:
{
lean_object* v_res_5084_; 
v_res_5084_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
return v_res_5084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(){
_start:
{
lean_object* v___x_5086_; lean_object* v___x_5087_; 
v___x_5086_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0);
v___x_5087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5087_, 0, v___x_5086_);
return v___x_5087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg___boxed(lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(lean_object* v_00_u03b1_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_, lean_object* v___y_5098_){
_start:
{
lean_object* v___x_5100_; 
v___x_5100_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___boxed(lean_object* v_00_u03b1_5101_, lean_object* v___y_5102_, lean_object* v___y_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_){
_start:
{
lean_object* v_res_5111_; 
v_res_5111_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(v_00_u03b1_5101_, v___y_5102_, v___y_5103_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_, v___y_5108_, v___y_5109_);
lean_dec(v___y_5109_);
lean_dec_ref(v___y_5108_);
lean_dec(v___y_5107_);
lean_dec_ref(v___y_5106_);
lean_dec(v___y_5105_);
lean_dec_ref(v___y_5104_);
lean_dec(v___y_5103_);
lean_dec_ref(v___y_5102_);
return v_res_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(lean_object* v_x_5114_, lean_object* v_x_5115_){
_start:
{
lean_object* v___x_5116_; 
v___x_5116_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
return v___x_5116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed(lean_object* v_x_5117_, lean_object* v_x_5118_){
_start:
{
lean_object* v_res_5119_; 
v_res_5119_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(v_x_5117_, v_x_5118_);
lean_dec(v_x_5118_);
lean_dec(v_x_5117_);
return v_res_5119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(lean_object* v_00___5120_){
_start:
{
lean_object* v___x_5121_; 
v___x_5121_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
return v___x_5121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__2(lean_object* v_x_5122_){
_start:
{
lean_object* v___x_5123_; lean_object* v___x_5124_; 
v___x_5123_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___x_5124_ = lean_array_push(v___x_5123_, v_x_5122_);
return v___x_5124_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(lean_object* v_a_5125_, lean_object* v_a_5126_){
_start:
{
if (lean_obj_tag(v_a_5125_) == 0)
{
lean_object* v___x_5127_; 
v___x_5127_ = l_List_reverse___redArg(v_a_5126_);
return v___x_5127_;
}
else
{
lean_object* v_head_5128_; lean_object* v_tail_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5138_; 
v_head_5128_ = lean_ctor_get(v_a_5125_, 0);
v_tail_5129_ = lean_ctor_get(v_a_5125_, 1);
v_isSharedCheck_5138_ = !lean_is_exclusive(v_a_5125_);
if (v_isSharedCheck_5138_ == 0)
{
v___x_5131_ = v_a_5125_;
v_isShared_5132_ = v_isSharedCheck_5138_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_tail_5129_);
lean_inc(v_head_5128_);
lean_dec(v_a_5125_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5138_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v_mvarId_5133_; lean_object* v___x_5135_; 
v_mvarId_5133_ = lean_ctor_get(v_head_5128_, 1);
lean_inc(v_mvarId_5133_);
lean_dec(v_head_5128_);
if (v_isShared_5132_ == 0)
{
lean_ctor_set(v___x_5131_, 1, v_a_5126_);
lean_ctor_set(v___x_5131_, 0, v_mvarId_5133_);
v___x_5135_ = v___x_5131_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5137_; 
v_reuseFailAlloc_5137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5137_, 0, v_mvarId_5133_);
lean_ctor_set(v_reuseFailAlloc_5137_, 1, v_a_5126_);
v___x_5135_ = v_reuseFailAlloc_5137_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
v_a_5125_ = v_tail_5129_;
v_a_5126_ = v___x_5135_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5(void){
_start:
{
lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5144_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4));
v___x_5145_ = l_String_toRawSubstring_x27(v___x_5144_);
return v___x_5145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3(uint8_t v___x_5148_, lean_object* v_stx_5149_, lean_object* v___x_5150_, lean_object* v___x_5151_, lean_object* v___x_5152_, uint8_t v___x_5153_, lean_object* v___f_5154_, lean_object* v___f_5155_, lean_object* v___f_5156_, lean_object* v___x_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_){
_start:
{
lean_object* v___y_5168_; lean_object* v_step_5169_; lean_object* v___y_5170_; lean_object* v___y_5171_; lean_object* v___y_5172_; lean_object* v___y_5173_; lean_object* v___y_5174_; lean_object* v___y_5175_; lean_object* v___y_5176_; lean_object* v___y_5177_; lean_object* v___y_5226_; lean_object* v___y_5227_; lean_object* v___y_5228_; lean_object* v___y_5229_; lean_object* v___y_5230_; lean_object* v___y_5231_; lean_object* v___y_5232_; lean_object* v___y_5233_; lean_object* v___y_5234_; lean_object* v___y_5235_; lean_object* v___y_5236_; lean_object* v___y_5237_; lean_object* v___y_5238_; lean_object* v___y_5239_; lean_object* v___y_5240_; lean_object* v___y_5241_; lean_object* v___y_5242_; lean_object* v___y_5243_; lean_object* v___y_5244_; lean_object* v___y_5245_; lean_object* v___y_5246_; lean_object* v___y_5257_; lean_object* v___y_5258_; lean_object* v___y_5259_; lean_object* v___y_5260_; lean_object* v___y_5261_; lean_object* v___y_5262_; lean_object* v___y_5263_; lean_object* v___y_5264_; lean_object* v___y_5265_; lean_object* v___y_5266_; lean_object* v___y_5267_; lean_object* v___y_5268_; lean_object* v___y_5269_; lean_object* v___y_5270_; lean_object* v___y_5271_; lean_object* v___y_5272_; lean_object* v___y_5273_; lean_object* v___y_5274_; lean_object* v___y_5275_; lean_object* v___y_5276_; lean_object* v___y_5277_; lean_object* v___y_5278_; lean_object* v___y_5279_; 
if (v___x_5148_ == 0)
{
lean_object* v___x_5283_; 
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5283_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5283_;
}
else
{
lean_object* v___x_5284_; lean_object* v_cfg_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; uint8_t v___x_5288_; 
v___x_5284_ = lean_unsigned_to_nat(1u);
v_cfg_5285_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5284_);
v___x_5286_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6));
lean_inc_ref(v___x_5152_);
lean_inc_ref(v___x_5151_);
lean_inc_ref(v___x_5150_);
v___x_5287_ = l_Lean_Name_mkStr4(v___x_5150_, v___x_5151_, v___x_5152_, v___x_5286_);
lean_inc(v_cfg_5285_);
v___x_5288_ = l_Lean_Syntax_isOfKind(v_cfg_5285_, v___x_5287_);
if (v___x_5288_ == 0)
{
lean_object* v___x_5289_; 
lean_dec(v___x_5287_);
lean_dec(v_cfg_5285_);
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5289_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5289_;
}
else
{
lean_object* v___x_5290_; lean_object* v___y_5292_; lean_object* v___y_5293_; lean_object* v___y_5294_; lean_object* v___y_5295_; lean_object* v___y_5296_; lean_object* v___y_5297_; lean_object* v___y_5298_; lean_object* v___y_5299_; lean_object* v___y_5300_; lean_object* v___y_5301_; lean_object* v___y_5302_; lean_object* v___y_5303_; lean_object* v___y_5304_; lean_object* v___y_5305_; lean_object* v___y_5306_; lean_object* v___y_5307_; lean_object* v___y_5308_; lean_object* v___y_5309_; lean_object* v___y_5310_; lean_object* v___y_5311_; lean_object* v___y_5312_; lean_object* v___y_5313_; lean_object* v___y_5314_; lean_object* v___y_5327_; lean_object* v___y_5328_; lean_object* v___y_5329_; lean_object* v___y_5330_; lean_object* v___y_5331_; lean_object* v___y_5332_; lean_object* v___y_5333_; lean_object* v___y_5334_; lean_object* v___y_5335_; lean_object* v___y_5336_; lean_object* v___y_5337_; lean_object* v___y_5338_; lean_object* v___y_5339_; lean_object* v___y_5340_; lean_object* v___y_5341_; lean_object* v___y_5342_; lean_object* v___y_5343_; lean_object* v___y_5344_; lean_object* v___y_5345_; lean_object* v___y_5346_; lean_object* v___y_5347_; lean_object* v___y_5348_; lean_object* v___y_5362_; lean_object* v___y_5363_; lean_object* v___y_5364_; lean_object* v___y_5365_; lean_object* v___y_5366_; lean_object* v___y_5367_; lean_object* v___y_5368_; lean_object* v___y_5369_; lean_object* v___y_5370_; lean_object* v___y_5371_; lean_object* v___y_5372_; lean_object* v___y_5373_; lean_object* v___y_5374_; lean_object* v___y_5375_; lean_object* v___y_5376_; lean_object* v___y_5377_; lean_object* v___y_5378_; lean_object* v___y_5379_; lean_object* v___y_5380_; lean_object* v___y_5381_; lean_object* v___y_5382_; lean_object* v___y_5383_; lean_object* v___y_5391_; lean_object* v___y_5392_; lean_object* v___y_5393_; lean_object* v___y_5394_; lean_object* v___y_5395_; lean_object* v___y_5396_; lean_object* v___y_5397_; lean_object* v___y_5398_; lean_object* v___y_5399_; lean_object* v___y_5400_; lean_object* v___y_5401_; lean_object* v___y_5402_; lean_object* v___y_5403_; lean_object* v___y_5404_; lean_object* v___y_5405_; lean_object* v___y_5406_; lean_object* v___y_5407_; lean_object* v___y_5408_; lean_object* v___y_5409_; lean_object* v___y_5410_; lean_object* v___y_5411_; lean_object* v___y_5412_; lean_object* v_tk_5420_; lean_object* v___y_5422_; lean_object* v___y_5423_; lean_object* v___y_5424_; lean_object* v___y_5425_; lean_object* v___y_5426_; lean_object* v___y_5427_; lean_object* v___y_5428_; lean_object* v_cfg_5429_; lean_object* v___y_5430_; lean_object* v___y_5431_; lean_object* v___y_5432_; lean_object* v___y_5433_; lean_object* v___y_5434_; lean_object* v___y_5435_; lean_object* v___y_5436_; lean_object* v_ref_5437_; lean_object* v___y_5438_; lean_object* v___y_5457_; lean_object* v___y_5458_; lean_object* v___y_5459_; lean_object* v___y_5460_; lean_object* v___y_5461_; lean_object* v___y_5462_; lean_object* v___y_5463_; lean_object* v___y_5464_; lean_object* v___y_5465_; lean_object* v___y_5466_; lean_object* v___y_5467_; lean_object* v___y_5468_; lean_object* v___y_5469_; lean_object* v___y_5470_; lean_object* v___y_5471_; lean_object* v___y_5496_; lean_object* v___y_5497_; lean_object* v___y_5498_; lean_object* v___y_5499_; lean_object* v___y_5500_; lean_object* v___y_5501_; lean_object* v_g_5502_; lean_object* v___y_5503_; lean_object* v___y_5504_; lean_object* v___y_5505_; lean_object* v___y_5506_; lean_object* v___y_5507_; lean_object* v___y_5508_; lean_object* v___y_5509_; lean_object* v___y_5510_; lean_object* v___x_5521_; lean_object* v___y_5523_; lean_object* v___y_5524_; lean_object* v___y_5525_; lean_object* v___y_5526_; lean_object* v_sa_5527_; lean_object* v_thms_5528_; lean_object* v___y_5529_; lean_object* v___y_5530_; lean_object* v___y_5531_; lean_object* v___y_5532_; lean_object* v___y_5533_; lean_object* v___y_5534_; lean_object* v___y_5535_; lean_object* v___y_5536_; lean_object* v___y_5546_; lean_object* v___y_5547_; lean_object* v___y_5548_; lean_object* v___y_5549_; lean_object* v___y_5550_; lean_object* v___y_5551_; lean_object* v___y_5552_; lean_object* v___y_5553_; lean_object* v___y_5554_; lean_object* v___y_5555_; lean_object* v___y_5556_; lean_object* v___y_5557_; lean_object* v___y_5558_; lean_object* v___y_5559_; lean_object* v___y_5563_; lean_object* v___y_5564_; lean_object* v___y_5565_; lean_object* v___y_5566_; lean_object* v___y_5567_; lean_object* v_thms_5568_; lean_object* v___y_5569_; lean_object* v___y_5570_; lean_object* v___y_5571_; lean_object* v___y_5572_; lean_object* v___y_5573_; lean_object* v___y_5574_; lean_object* v___y_5575_; lean_object* v___y_5576_; lean_object* v___y_5588_; lean_object* v___y_5589_; lean_object* v_u_5590_; lean_object* v___y_5591_; lean_object* v___y_5592_; lean_object* v___y_5593_; lean_object* v___y_5594_; lean_object* v___y_5595_; lean_object* v___y_5596_; lean_object* v___y_5597_; lean_object* v___y_5598_; lean_object* v_lems_5617_; lean_object* v___y_5618_; lean_object* v___y_5619_; lean_object* v___y_5620_; lean_object* v___y_5621_; lean_object* v___y_5622_; lean_object* v___y_5623_; lean_object* v___y_5624_; lean_object* v___y_5625_; lean_object* v___x_5634_; uint8_t v___x_5635_; 
v___x_5290_ = lean_unsigned_to_nat(0u);
v_tk_5420_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5290_);
v___x_5521_ = lean_unsigned_to_nat(2u);
v___x_5634_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5521_);
v___x_5635_ = l_Lean_Syntax_isNone(v___x_5634_);
if (v___x_5635_ == 0)
{
lean_object* v___x_5636_; uint8_t v___x_5637_; 
v___x_5636_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_5634_);
v___x_5637_ = l_Lean_Syntax_matchesNull(v___x_5634_, v___x_5636_);
if (v___x_5637_ == 0)
{
lean_object* v___x_5638_; 
lean_dec(v___x_5634_);
lean_dec(v_tk_5420_);
lean_dec(v___x_5287_);
lean_dec(v_cfg_5285_);
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5638_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5638_;
}
else
{
lean_object* v___x_5639_; lean_object* v_lems_5640_; lean_object* v___x_5641_; 
v___x_5639_ = l_Lean_Syntax_getArg(v___x_5634_, v___x_5284_);
lean_dec(v___x_5634_);
v_lems_5640_ = l_Lean_Syntax_getArgs(v___x_5639_);
lean_dec(v___x_5639_);
v___x_5641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5641_, 0, v_lems_5640_);
v_lems_5617_ = v___x_5641_;
v___y_5618_ = v___y_5158_;
v___y_5619_ = v___y_5159_;
v___y_5620_ = v___y_5160_;
v___y_5621_ = v___y_5161_;
v___y_5622_ = v___y_5162_;
v___y_5623_ = v___y_5163_;
v___y_5624_ = v___y_5164_;
v___y_5625_ = v___y_5165_;
goto v___jp_5616_;
}
}
else
{
lean_object* v___x_5642_; 
lean_dec(v___x_5634_);
v___x_5642_ = lean_box(0);
v_lems_5617_ = v___x_5642_;
v___y_5618_ = v___y_5158_;
v___y_5619_ = v___y_5159_;
v___y_5620_ = v___y_5160_;
v___y_5621_ = v___y_5161_;
v___y_5622_ = v___y_5162_;
v___y_5623_ = v___y_5163_;
v___y_5624_ = v___y_5164_;
v___y_5625_ = v___y_5165_;
goto v___jp_5616_;
}
v___jp_5291_:
{
lean_object* v___x_5315_; lean_object* v___x_5316_; 
lean_inc_ref(v___y_5304_);
v___x_5315_ = l_Array_append___redArg(v___y_5304_, v___y_5314_);
lean_dec_ref(v___y_5314_);
lean_inc(v___y_5312_);
lean_inc(v___y_5300_);
v___x_5316_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5316_, 0, v___y_5300_);
lean_ctor_set(v___x_5316_, 1, v___y_5312_);
lean_ctor_set(v___x_5316_, 2, v___x_5315_);
if (lean_obj_tag(v___y_5313_) == 1)
{
lean_object* v_val_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; 
v_val_5317_ = lean_ctor_get(v___y_5313_, 0);
lean_inc(v_val_5317_);
lean_dec_ref_known(v___y_5313_, 1);
v___x_5318_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25));
lean_inc_n(v___y_5300_, 3);
v___x_5319_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5319_, 0, v___y_5300_);
lean_ctor_set(v___x_5319_, 1, v___x_5318_);
lean_inc_ref(v___y_5304_);
v___x_5320_ = l_Array_append___redArg(v___y_5304_, v_val_5317_);
lean_dec(v_val_5317_);
lean_inc(v___y_5312_);
v___x_5321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5321_, 0, v___y_5300_);
lean_ctor_set(v___x_5321_, 1, v___y_5312_);
lean_ctor_set(v___x_5321_, 2, v___x_5320_);
v___x_5322_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27));
v___x_5323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5323_, 0, v___y_5300_);
lean_ctor_set(v___x_5323_, 1, v___x_5322_);
v___x_5324_ = l_Array_mkArray3___redArg(v___x_5319_, v___x_5321_, v___x_5323_);
v___y_5257_ = v___x_5316_;
v___y_5258_ = v___y_5292_;
v___y_5259_ = v___y_5293_;
v___y_5260_ = v___y_5294_;
v___y_5261_ = v___y_5295_;
v___y_5262_ = v___y_5296_;
v___y_5263_ = v___y_5297_;
v___y_5264_ = v___y_5298_;
v___y_5265_ = v___y_5299_;
v___y_5266_ = v___y_5301_;
v___y_5267_ = v___y_5300_;
v___y_5268_ = v___y_5302_;
v___y_5269_ = v___y_5303_;
v___y_5270_ = v___y_5304_;
v___y_5271_ = v___y_5305_;
v___y_5272_ = v___y_5306_;
v___y_5273_ = v___y_5307_;
v___y_5274_ = v___y_5310_;
v___y_5275_ = v___y_5309_;
v___y_5276_ = v___y_5308_;
v___y_5277_ = v___y_5311_;
v___y_5278_ = v___y_5312_;
v___y_5279_ = v___x_5324_;
goto v___jp_5256_;
}
else
{
lean_object* v___x_5325_; 
lean_dec(v___y_5313_);
v___x_5325_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___y_5257_ = v___x_5316_;
v___y_5258_ = v___y_5292_;
v___y_5259_ = v___y_5293_;
v___y_5260_ = v___y_5294_;
v___y_5261_ = v___y_5295_;
v___y_5262_ = v___y_5296_;
v___y_5263_ = v___y_5297_;
v___y_5264_ = v___y_5298_;
v___y_5265_ = v___y_5299_;
v___y_5266_ = v___y_5301_;
v___y_5267_ = v___y_5300_;
v___y_5268_ = v___y_5302_;
v___y_5269_ = v___y_5303_;
v___y_5270_ = v___y_5304_;
v___y_5271_ = v___y_5305_;
v___y_5272_ = v___y_5306_;
v___y_5273_ = v___y_5307_;
v___y_5274_ = v___y_5310_;
v___y_5275_ = v___y_5309_;
v___y_5276_ = v___y_5308_;
v___y_5277_ = v___y_5311_;
v___y_5278_ = v___y_5312_;
v___y_5279_ = v___x_5325_;
goto v___jp_5256_;
}
}
v___jp_5326_:
{
lean_object* v___x_5349_; lean_object* v___x_5350_; 
lean_inc_ref(v___y_5338_);
v___x_5349_ = l_Array_append___redArg(v___y_5338_, v___y_5348_);
lean_dec_ref(v___y_5348_);
lean_inc(v___y_5347_);
lean_inc(v___y_5335_);
v___x_5350_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5350_, 0, v___y_5335_);
lean_ctor_set(v___x_5350_, 1, v___y_5347_);
lean_ctor_set(v___x_5350_, 2, v___x_5349_);
if (lean_obj_tag(v___y_5334_) == 1)
{
if (lean_obj_tag(v___y_5340_) == 1)
{
lean_object* v_val_5351_; lean_object* v_val_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; 
lean_dec_ref(v___f_5156_);
v_val_5351_ = lean_ctor_get(v___y_5334_, 0);
lean_inc(v_val_5351_);
lean_dec_ref_known(v___y_5334_, 1);
v_val_5352_ = lean_ctor_get(v___y_5340_, 0);
lean_inc(v_val_5352_);
lean_dec_ref_known(v___y_5340_, 1);
v___x_5353_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2));
lean_inc(v___y_5335_);
v___x_5354_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5354_, 0, v___y_5335_);
lean_ctor_set(v___x_5354_, 1, v___x_5353_);
if (lean_obj_tag(v_val_5351_) == 0)
{
lean_object* v___x_5355_; lean_object* v___x_5356_; 
lean_dec_ref(v___f_5155_);
v___x_5355_ = lean_box(0);
v___x_5356_ = lean_apply_1(v___f_5154_, v___x_5355_);
v___y_5292_ = v___y_5327_;
v___y_5293_ = v___y_5328_;
v___y_5294_ = v___x_5350_;
v___y_5295_ = v___y_5329_;
v___y_5296_ = v___y_5330_;
v___y_5297_ = v___y_5331_;
v___y_5298_ = v___y_5332_;
v___y_5299_ = v___y_5333_;
v___y_5300_ = v___y_5335_;
v___y_5301_ = v___y_5336_;
v___y_5302_ = v___y_5337_;
v___y_5303_ = v___y_5339_;
v___y_5304_ = v___y_5338_;
v___y_5305_ = v___y_5341_;
v___y_5306_ = v___y_5342_;
v___y_5307_ = v___y_5343_;
v___y_5308_ = v___x_5354_;
v___y_5309_ = v___y_5345_;
v___y_5310_ = v___y_5344_;
v___y_5311_ = v___y_5346_;
v___y_5312_ = v___y_5347_;
v___y_5313_ = v_val_5352_;
v___y_5314_ = v___x_5356_;
goto v___jp_5291_;
}
else
{
lean_object* v_val_5357_; lean_object* v___x_5358_; 
lean_dec_ref(v___f_5154_);
v_val_5357_ = lean_ctor_get(v_val_5351_, 0);
lean_inc(v_val_5357_);
lean_dec_ref_known(v_val_5351_, 1);
v___x_5358_ = lean_apply_1(v___f_5155_, v_val_5357_);
v___y_5292_ = v___y_5327_;
v___y_5293_ = v___y_5328_;
v___y_5294_ = v___x_5350_;
v___y_5295_ = v___y_5329_;
v___y_5296_ = v___y_5330_;
v___y_5297_ = v___y_5331_;
v___y_5298_ = v___y_5332_;
v___y_5299_ = v___y_5333_;
v___y_5300_ = v___y_5335_;
v___y_5301_ = v___y_5336_;
v___y_5302_ = v___y_5337_;
v___y_5303_ = v___y_5339_;
v___y_5304_ = v___y_5338_;
v___y_5305_ = v___y_5341_;
v___y_5306_ = v___y_5342_;
v___y_5307_ = v___y_5343_;
v___y_5308_ = v___x_5354_;
v___y_5309_ = v___y_5345_;
v___y_5310_ = v___y_5344_;
v___y_5311_ = v___y_5346_;
v___y_5312_ = v___y_5347_;
v___y_5313_ = v_val_5352_;
v___y_5314_ = v___x_5358_;
goto v___jp_5291_;
}
}
else
{
lean_object* v___x_5359_; 
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
v___x_5359_ = lean_apply_2(v___f_5156_, v___y_5334_, v___y_5340_);
v___y_5226_ = v___y_5327_;
v___y_5227_ = v___y_5328_;
v___y_5228_ = v___x_5350_;
v___y_5229_ = v___y_5329_;
v___y_5230_ = v___y_5330_;
v___y_5231_ = v___y_5331_;
v___y_5232_ = v___y_5332_;
v___y_5233_ = v___y_5333_;
v___y_5234_ = v___y_5335_;
v___y_5235_ = v___y_5336_;
v___y_5236_ = v___y_5337_;
v___y_5237_ = v___y_5338_;
v___y_5238_ = v___y_5339_;
v___y_5239_ = v___y_5341_;
v___y_5240_ = v___y_5342_;
v___y_5241_ = v___y_5343_;
v___y_5242_ = v___y_5345_;
v___y_5243_ = v___y_5344_;
v___y_5244_ = v___y_5346_;
v___y_5245_ = v___y_5347_;
v___y_5246_ = v___x_5359_;
goto v___jp_5225_;
}
}
else
{
lean_object* v___x_5360_; 
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
v___x_5360_ = lean_apply_2(v___f_5156_, v___y_5334_, v___y_5340_);
v___y_5226_ = v___y_5327_;
v___y_5227_ = v___y_5328_;
v___y_5228_ = v___x_5350_;
v___y_5229_ = v___y_5329_;
v___y_5230_ = v___y_5330_;
v___y_5231_ = v___y_5331_;
v___y_5232_ = v___y_5332_;
v___y_5233_ = v___y_5333_;
v___y_5234_ = v___y_5335_;
v___y_5235_ = v___y_5336_;
v___y_5236_ = v___y_5337_;
v___y_5237_ = v___y_5338_;
v___y_5238_ = v___y_5339_;
v___y_5239_ = v___y_5341_;
v___y_5240_ = v___y_5342_;
v___y_5241_ = v___y_5343_;
v___y_5242_ = v___y_5345_;
v___y_5243_ = v___y_5344_;
v___y_5244_ = v___y_5346_;
v___y_5245_ = v___y_5347_;
v___y_5246_ = v___x_5360_;
goto v___jp_5225_;
}
}
v___jp_5361_:
{
lean_object* v___x_5384_; lean_object* v___x_5385_; 
lean_inc_ref(v___y_5372_);
v___x_5384_ = l_Array_append___redArg(v___y_5372_, v___y_5383_);
lean_dec_ref(v___y_5383_);
lean_inc(v___y_5382_);
lean_inc(v___y_5369_);
v___x_5385_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5385_, 0, v___y_5369_);
lean_ctor_set(v___x_5385_, 1, v___y_5382_);
lean_ctor_set(v___x_5385_, 2, v___x_5384_);
if (lean_obj_tag(v___y_5376_) == 0)
{
lean_object* v___x_5386_; lean_object* v___x_5387_; 
v___x_5386_ = lean_box(0);
lean_inc_ref(v___f_5154_);
v___x_5387_ = lean_apply_1(v___f_5154_, v___x_5386_);
v___y_5327_ = v___y_5362_;
v___y_5328_ = v___y_5363_;
v___y_5329_ = v___y_5364_;
v___y_5330_ = v___y_5365_;
v___y_5331_ = v___y_5366_;
v___y_5332_ = v___x_5385_;
v___y_5333_ = v___y_5367_;
v___y_5334_ = v___y_5368_;
v___y_5335_ = v___y_5369_;
v___y_5336_ = v___y_5370_;
v___y_5337_ = v___y_5371_;
v___y_5338_ = v___y_5372_;
v___y_5339_ = v___y_5373_;
v___y_5340_ = v___y_5375_;
v___y_5341_ = v___y_5374_;
v___y_5342_ = v___y_5377_;
v___y_5343_ = v___y_5378_;
v___y_5344_ = v___y_5380_;
v___y_5345_ = v___y_5379_;
v___y_5346_ = v___y_5381_;
v___y_5347_ = v___y_5382_;
v___y_5348_ = v___x_5387_;
goto v___jp_5326_;
}
else
{
lean_object* v_val_5388_; lean_object* v___x_5389_; 
v_val_5388_ = lean_ctor_get(v___y_5376_, 0);
lean_inc(v_val_5388_);
lean_dec_ref_known(v___y_5376_, 1);
lean_inc_ref(v___f_5155_);
v___x_5389_ = lean_apply_1(v___f_5155_, v_val_5388_);
v___y_5327_ = v___y_5362_;
v___y_5328_ = v___y_5363_;
v___y_5329_ = v___y_5364_;
v___y_5330_ = v___y_5365_;
v___y_5331_ = v___y_5366_;
v___y_5332_ = v___x_5385_;
v___y_5333_ = v___y_5367_;
v___y_5334_ = v___y_5368_;
v___y_5335_ = v___y_5369_;
v___y_5336_ = v___y_5370_;
v___y_5337_ = v___y_5371_;
v___y_5338_ = v___y_5372_;
v___y_5339_ = v___y_5373_;
v___y_5340_ = v___y_5375_;
v___y_5341_ = v___y_5374_;
v___y_5342_ = v___y_5377_;
v___y_5343_ = v___y_5378_;
v___y_5344_ = v___y_5380_;
v___y_5345_ = v___y_5379_;
v___y_5346_ = v___y_5381_;
v___y_5347_ = v___y_5382_;
v___y_5348_ = v___x_5389_;
goto v___jp_5326_;
}
}
v___jp_5390_:
{
lean_object* v___x_5413_; lean_object* v___x_5414_; 
lean_inc_ref(v___y_5400_);
v___x_5413_ = l_Array_append___redArg(v___y_5400_, v___y_5412_);
lean_dec_ref(v___y_5412_);
lean_inc(v___y_5411_);
lean_inc(v___y_5398_);
v___x_5414_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5414_, 0, v___y_5398_);
lean_ctor_set(v___x_5414_, 1, v___y_5411_);
lean_ctor_set(v___x_5414_, 2, v___x_5413_);
if (lean_obj_tag(v___y_5406_) == 1)
{
lean_object* v_val_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; 
v_val_5415_ = lean_ctor_get(v___y_5406_, 0);
lean_inc(v_val_5415_);
lean_dec_ref_known(v___y_5406_, 1);
v___x_5416_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3));
lean_inc(v___y_5398_);
v___x_5417_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5417_, 0, v___y_5398_);
lean_ctor_set(v___x_5417_, 1, v___x_5416_);
v___x_5418_ = l_Array_mkArray2___redArg(v___x_5417_, v_val_5415_);
v___y_5362_ = v___y_5391_;
v___y_5363_ = v___y_5392_;
v___y_5364_ = v___y_5393_;
v___y_5365_ = v___y_5394_;
v___y_5366_ = v___y_5395_;
v___y_5367_ = v___y_5396_;
v___y_5368_ = v___y_5397_;
v___y_5369_ = v___y_5398_;
v___y_5370_ = v___x_5414_;
v___y_5371_ = v___y_5399_;
v___y_5372_ = v___y_5400_;
v___y_5373_ = v___y_5401_;
v___y_5374_ = v___y_5403_;
v___y_5375_ = v___y_5402_;
v___y_5376_ = v___y_5404_;
v___y_5377_ = v___y_5405_;
v___y_5378_ = v___y_5407_;
v___y_5379_ = v___y_5409_;
v___y_5380_ = v___y_5408_;
v___y_5381_ = v___y_5410_;
v___y_5382_ = v___y_5411_;
v___y_5383_ = v___x_5418_;
goto v___jp_5361_;
}
else
{
lean_object* v___x_5419_; 
lean_dec(v___y_5406_);
v___x_5419_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___y_5362_ = v___y_5391_;
v___y_5363_ = v___y_5392_;
v___y_5364_ = v___y_5393_;
v___y_5365_ = v___y_5394_;
v___y_5366_ = v___y_5395_;
v___y_5367_ = v___y_5396_;
v___y_5368_ = v___y_5397_;
v___y_5369_ = v___y_5398_;
v___y_5370_ = v___x_5414_;
v___y_5371_ = v___y_5399_;
v___y_5372_ = v___y_5400_;
v___y_5373_ = v___y_5401_;
v___y_5374_ = v___y_5403_;
v___y_5375_ = v___y_5402_;
v___y_5376_ = v___y_5404_;
v___y_5377_ = v___y_5405_;
v___y_5378_ = v___y_5407_;
v___y_5379_ = v___y_5409_;
v___y_5380_ = v___y_5408_;
v___y_5381_ = v___y_5410_;
v___y_5382_ = v___y_5411_;
v___y_5383_ = v___x_5419_;
goto v___jp_5361_;
}
}
v___jp_5421_:
{
uint8_t v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; 
v___x_5439_ = 0;
v___x_5440_ = l_Lean_SourceInfo_fromRef(v_ref_5437_, v___x_5439_);
v___x_5441_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0));
lean_inc_ref(v___x_5157_);
lean_inc_ref(v___x_5152_);
lean_inc_ref(v___x_5151_);
lean_inc_ref(v___x_5150_);
v___x_5442_ = l_Lean_Name_mkStr5(v___x_5150_, v___x_5151_, v___x_5152_, v___x_5441_, v___x_5157_);
v___x_5443_ = l_Lean_SourceInfo_fromRef(v_tk_5420_, v___x_5153_);
lean_dec(v_tk_5420_);
v___x_5444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5444_, 0, v___x_5443_);
lean_ctor_set(v___x_5444_, 1, v___x_5157_);
v___x_5445_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9));
v___x_5446_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24);
if (lean_obj_tag(v___y_5425_) == 1)
{
lean_object* v_val_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; 
v_val_5447_ = lean_ctor_get(v___y_5425_, 0);
lean_inc(v_val_5447_);
lean_dec_ref_known(v___y_5425_, 1);
v___x_5448_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25));
lean_inc_n(v___x_5440_, 3);
v___x_5449_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5440_);
lean_ctor_set(v___x_5449_, 1, v___x_5448_);
v___x_5450_ = l_Array_append___redArg(v___x_5446_, v_val_5447_);
lean_dec(v_val_5447_);
v___x_5451_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5440_);
lean_ctor_set(v___x_5451_, 1, v___x_5445_);
lean_ctor_set(v___x_5451_, 2, v___x_5450_);
v___x_5452_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27));
v___x_5453_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5453_, 0, v___x_5440_);
lean_ctor_set(v___x_5453_, 1, v___x_5452_);
v___x_5454_ = l_Array_mkArray3___redArg(v___x_5449_, v___x_5451_, v___x_5453_);
v___y_5391_ = v___y_5430_;
v___y_5392_ = v___x_5442_;
v___y_5393_ = v___y_5422_;
v___y_5394_ = v___y_5424_;
v___y_5395_ = v___x_5444_;
v___y_5396_ = v_cfg_5429_;
v___y_5397_ = v___y_5428_;
v___y_5398_ = v___x_5440_;
v___y_5399_ = v___y_5431_;
v___y_5400_ = v___x_5446_;
v___y_5401_ = v___y_5432_;
v___y_5402_ = v___y_5423_;
v___y_5403_ = v___y_5433_;
v___y_5404_ = v___y_5426_;
v___y_5405_ = v___y_5434_;
v___y_5406_ = v___y_5427_;
v___y_5407_ = v___y_5438_;
v___y_5408_ = v___y_5435_;
v___y_5409_ = v___x_5441_;
v___y_5410_ = v___y_5436_;
v___y_5411_ = v___x_5445_;
v___y_5412_ = v___x_5454_;
goto v___jp_5390_;
}
else
{
lean_object* v___x_5455_; 
lean_dec(v___y_5425_);
v___x_5455_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___y_5391_ = v___y_5430_;
v___y_5392_ = v___x_5442_;
v___y_5393_ = v___y_5422_;
v___y_5394_ = v___y_5424_;
v___y_5395_ = v___x_5444_;
v___y_5396_ = v_cfg_5429_;
v___y_5397_ = v___y_5428_;
v___y_5398_ = v___x_5440_;
v___y_5399_ = v___y_5431_;
v___y_5400_ = v___x_5446_;
v___y_5401_ = v___y_5432_;
v___y_5402_ = v___y_5423_;
v___y_5403_ = v___y_5433_;
v___y_5404_ = v___y_5426_;
v___y_5405_ = v___y_5434_;
v___y_5406_ = v___y_5427_;
v___y_5407_ = v___y_5438_;
v___y_5408_ = v___y_5435_;
v___y_5409_ = v___x_5441_;
v___y_5410_ = v___y_5436_;
v___y_5411_ = v___x_5445_;
v___y_5412_ = v___x_5455_;
goto v___jp_5390_;
}
}
v___jp_5456_:
{
if (lean_obj_tag(v___y_5457_) == 0)
{
lean_object* v_ref_5472_; lean_object* v_quotContext_5473_; lean_object* v_currMacroScope_5474_; uint8_t v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; 
v_ref_5472_ = lean_ctor_get(v___y_5461_, 5);
v_quotContext_5473_ = lean_ctor_get(v___y_5461_, 10);
v_currMacroScope_5474_ = lean_ctor_get(v___y_5461_, 11);
v___x_5475_ = 0;
v___x_5476_ = l_Lean_SourceInfo_fromRef(v_ref_5472_, v___x_5475_);
v___x_5477_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9));
v___x_5478_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10));
lean_inc_ref_n(v___x_5152_, 2);
lean_inc_ref_n(v___x_5151_, 2);
lean_inc_ref_n(v___x_5150_, 2);
v___x_5479_ = l_Lean_Name_mkStr4(v___x_5150_, v___x_5151_, v___x_5152_, v___x_5478_);
v___x_5480_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18));
v___x_5481_ = l_Lean_Name_mkStr4(v___x_5150_, v___x_5151_, v___x_5152_, v___x_5480_);
v___x_5482_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20));
lean_inc_n(v___x_5476_, 5);
v___x_5483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5483_, 0, v___x_5476_);
lean_ctor_set(v___x_5483_, 1, v___x_5482_);
v___x_5484_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5, &l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5);
v___x_5485_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6));
lean_inc(v_currMacroScope_5474_);
lean_inc(v_quotContext_5473_);
v___x_5486_ = l_Lean_addMacroScope(v_quotContext_5473_, v___x_5485_, v_currMacroScope_5474_);
v___x_5487_ = lean_box(0);
v___x_5488_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5488_, 0, v___x_5476_);
lean_ctor_set(v___x_5488_, 1, v___x_5484_);
lean_ctor_set(v___x_5488_, 2, v___x_5486_);
lean_ctor_set(v___x_5488_, 3, v___x_5487_);
v___x_5489_ = l_Lean_Syntax_node2(v___x_5476_, v___x_5481_, v___x_5483_, v___x_5488_);
v___x_5490_ = l_Lean_Syntax_node1(v___x_5476_, v___x_5479_, v___x_5489_);
v___x_5491_ = l_Lean_Syntax_node1(v___x_5476_, v___x_5477_, v___x_5490_);
v___x_5492_ = l_Lean_Syntax_node1(v___x_5476_, v___x_5287_, v___x_5491_);
v___x_5493_ = l_Lean_Parser_Tactic_appendConfig(v___x_5492_, v_cfg_5285_);
v___y_5422_ = v___y_5457_;
v___y_5423_ = v___y_5465_;
v___y_5424_ = v___y_5458_;
v___y_5425_ = v___y_5466_;
v___y_5426_ = v___y_5471_;
v___y_5427_ = v___y_5469_;
v___y_5428_ = v___y_5463_;
v_cfg_5429_ = v___x_5493_;
v___y_5430_ = v___y_5460_;
v___y_5431_ = v___y_5462_;
v___y_5432_ = v___y_5468_;
v___y_5433_ = v___y_5470_;
v___y_5434_ = v___y_5467_;
v___y_5435_ = v___y_5464_;
v___y_5436_ = v___y_5461_;
v_ref_5437_ = v_ref_5472_;
v___y_5438_ = v___y_5459_;
goto v___jp_5421_;
}
else
{
lean_object* v_ref_5494_; 
lean_dec(v___x_5287_);
v_ref_5494_ = lean_ctor_get(v___y_5461_, 5);
v___y_5422_ = v___y_5457_;
v___y_5423_ = v___y_5465_;
v___y_5424_ = v___y_5458_;
v___y_5425_ = v___y_5466_;
v___y_5426_ = v___y_5471_;
v___y_5427_ = v___y_5469_;
v___y_5428_ = v___y_5463_;
v_cfg_5429_ = v_cfg_5285_;
v___y_5430_ = v___y_5460_;
v___y_5431_ = v___y_5462_;
v___y_5432_ = v___y_5468_;
v___y_5433_ = v___y_5470_;
v___y_5434_ = v___y_5467_;
v___y_5435_ = v___y_5464_;
v___y_5436_ = v___y_5461_;
v_ref_5437_ = v_ref_5494_;
v___y_5438_ = v___y_5459_;
goto v___jp_5421_;
}
}
v___jp_5495_:
{
lean_object* v___x_5511_; 
v___x_5511_ = l_Lean_Syntax_getOptional_x3f(v___y_5499_);
lean_dec(v___y_5499_);
if (lean_obj_tag(v___x_5511_) == 0)
{
lean_object* v___x_5512_; 
v___x_5512_ = lean_box(0);
v___y_5457_ = v_g_5502_;
v___y_5458_ = v___y_5497_;
v___y_5459_ = v___y_5510_;
v___y_5460_ = v___y_5503_;
v___y_5461_ = v___y_5509_;
v___y_5462_ = v___y_5504_;
v___y_5463_ = v___y_5501_;
v___y_5464_ = v___y_5508_;
v___y_5465_ = v___y_5496_;
v___y_5466_ = v___y_5498_;
v___y_5467_ = v___y_5507_;
v___y_5468_ = v___y_5505_;
v___y_5469_ = v___y_5500_;
v___y_5470_ = v___y_5506_;
v___y_5471_ = v___x_5512_;
goto v___jp_5456_;
}
else
{
lean_object* v_val_5513_; lean_object* v___x_5515_; uint8_t v_isShared_5516_; uint8_t v_isSharedCheck_5520_; 
v_val_5513_ = lean_ctor_get(v___x_5511_, 0);
v_isSharedCheck_5520_ = !lean_is_exclusive(v___x_5511_);
if (v_isSharedCheck_5520_ == 0)
{
v___x_5515_ = v___x_5511_;
v_isShared_5516_ = v_isSharedCheck_5520_;
goto v_resetjp_5514_;
}
else
{
lean_inc(v_val_5513_);
lean_dec(v___x_5511_);
v___x_5515_ = lean_box(0);
v_isShared_5516_ = v_isSharedCheck_5520_;
goto v_resetjp_5514_;
}
v_resetjp_5514_:
{
lean_object* v___x_5518_; 
if (v_isShared_5516_ == 0)
{
v___x_5518_ = v___x_5515_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5519_; 
v_reuseFailAlloc_5519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5519_, 0, v_val_5513_);
v___x_5518_ = v_reuseFailAlloc_5519_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
v___y_5457_ = v_g_5502_;
v___y_5458_ = v___y_5497_;
v___y_5459_ = v___y_5510_;
v___y_5460_ = v___y_5503_;
v___y_5461_ = v___y_5509_;
v___y_5462_ = v___y_5504_;
v___y_5463_ = v___y_5501_;
v___y_5464_ = v___y_5508_;
v___y_5465_ = v___y_5496_;
v___y_5466_ = v___y_5498_;
v___y_5467_ = v___y_5507_;
v___y_5468_ = v___y_5505_;
v___y_5469_ = v___y_5500_;
v___y_5470_ = v___y_5506_;
v___y_5471_ = v___x_5518_;
goto v___jp_5456_;
}
}
}
}
v___jp_5522_:
{
lean_object* v___x_5537_; lean_object* v___x_5538_; uint8_t v___x_5539_; 
v___x_5537_ = lean_unsigned_to_nat(6u);
v___x_5538_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5537_);
v___x_5539_ = l_Lean_Syntax_isNone(v___x_5538_);
if (v___x_5539_ == 0)
{
uint8_t v___x_5540_; 
lean_inc(v___x_5538_);
v___x_5540_ = l_Lean_Syntax_matchesNull(v___x_5538_, v___x_5521_);
if (v___x_5540_ == 0)
{
lean_object* v___x_5541_; 
lean_dec(v___x_5538_);
lean_dec(v_thms_5528_);
lean_dec(v_sa_5527_);
lean_dec(v___y_5526_);
lean_dec(v___y_5525_);
lean_dec(v___y_5524_);
lean_dec(v___y_5523_);
lean_dec(v_tk_5420_);
lean_dec(v___x_5287_);
lean_dec(v_cfg_5285_);
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5541_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5541_;
}
else
{
lean_object* v_g_5542_; lean_object* v___x_5543_; 
v_g_5542_ = l_Lean_Syntax_getArg(v___x_5538_, v___x_5284_);
lean_dec(v___x_5538_);
v___x_5543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5543_, 0, v_g_5542_);
v___y_5496_ = v_thms_5528_;
v___y_5497_ = v___y_5523_;
v___y_5498_ = v___y_5524_;
v___y_5499_ = v___y_5525_;
v___y_5500_ = v___y_5526_;
v___y_5501_ = v_sa_5527_;
v_g_5502_ = v___x_5543_;
v___y_5503_ = v___y_5529_;
v___y_5504_ = v___y_5530_;
v___y_5505_ = v___y_5531_;
v___y_5506_ = v___y_5532_;
v___y_5507_ = v___y_5533_;
v___y_5508_ = v___y_5534_;
v___y_5509_ = v___y_5535_;
v___y_5510_ = v___y_5536_;
goto v___jp_5495_;
}
}
else
{
lean_object* v___x_5544_; 
lean_dec(v___x_5538_);
v___x_5544_ = lean_box(0);
v___y_5496_ = v_thms_5528_;
v___y_5497_ = v___y_5523_;
v___y_5498_ = v___y_5524_;
v___y_5499_ = v___y_5525_;
v___y_5500_ = v___y_5526_;
v___y_5501_ = v_sa_5527_;
v_g_5502_ = v___x_5544_;
v___y_5503_ = v___y_5529_;
v___y_5504_ = v___y_5530_;
v___y_5505_ = v___y_5531_;
v___y_5506_ = v___y_5532_;
v___y_5507_ = v___y_5533_;
v___y_5508_ = v___y_5534_;
v___y_5509_ = v___y_5535_;
v___y_5510_ = v___y_5536_;
goto v___jp_5495_;
}
}
v___jp_5545_:
{
lean_object* v___x_5560_; lean_object* v___x_5561_; 
v___x_5560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5560_, 0, v___y_5559_);
v___x_5561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5561_, 0, v___y_5557_);
v___y_5523_ = v___y_5547_;
v___y_5524_ = v___y_5552_;
v___y_5525_ = v___y_5554_;
v___y_5526_ = v___y_5555_;
v_sa_5527_ = v___x_5560_;
v_thms_5528_ = v___x_5561_;
v___y_5529_ = v___y_5546_;
v___y_5530_ = v___y_5549_;
v___y_5531_ = v___y_5551_;
v___y_5532_ = v___y_5558_;
v___y_5533_ = v___y_5550_;
v___y_5534_ = v___y_5553_;
v___y_5535_ = v___y_5556_;
v___y_5536_ = v___y_5548_;
goto v___jp_5522_;
}
v___jp_5562_:
{
lean_object* v___x_5577_; 
v___x_5577_ = l_Lean_Syntax_getOptional_x3f(v___y_5565_);
lean_dec(v___y_5565_);
if (lean_obj_tag(v___x_5577_) == 0)
{
lean_object* v___x_5578_; 
v___x_5578_ = lean_box(0);
v___y_5546_ = v___y_5569_;
v___y_5547_ = v___y_5563_;
v___y_5548_ = v___y_5576_;
v___y_5549_ = v___y_5570_;
v___y_5550_ = v___y_5573_;
v___y_5551_ = v___y_5571_;
v___y_5552_ = v___y_5564_;
v___y_5553_ = v___y_5574_;
v___y_5554_ = v___y_5566_;
v___y_5555_ = v___y_5567_;
v___y_5556_ = v___y_5575_;
v___y_5557_ = v_thms_5568_;
v___y_5558_ = v___y_5572_;
v___y_5559_ = v___x_5578_;
goto v___jp_5545_;
}
else
{
lean_object* v_val_5579_; lean_object* v___x_5581_; uint8_t v_isShared_5582_; uint8_t v_isSharedCheck_5586_; 
v_val_5579_ = lean_ctor_get(v___x_5577_, 0);
v_isSharedCheck_5586_ = !lean_is_exclusive(v___x_5577_);
if (v_isSharedCheck_5586_ == 0)
{
v___x_5581_ = v___x_5577_;
v_isShared_5582_ = v_isSharedCheck_5586_;
goto v_resetjp_5580_;
}
else
{
lean_inc(v_val_5579_);
lean_dec(v___x_5577_);
v___x_5581_ = lean_box(0);
v_isShared_5582_ = v_isSharedCheck_5586_;
goto v_resetjp_5580_;
}
v_resetjp_5580_:
{
lean_object* v___x_5584_; 
if (v_isShared_5582_ == 0)
{
v___x_5584_ = v___x_5581_;
goto v_reusejp_5583_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v_val_5579_);
v___x_5584_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5583_;
}
v_reusejp_5583_:
{
v___y_5546_ = v___y_5569_;
v___y_5547_ = v___y_5563_;
v___y_5548_ = v___y_5576_;
v___y_5549_ = v___y_5570_;
v___y_5550_ = v___y_5573_;
v___y_5551_ = v___y_5571_;
v___y_5552_ = v___y_5564_;
v___y_5553_ = v___y_5574_;
v___y_5554_ = v___y_5566_;
v___y_5555_ = v___y_5567_;
v___y_5556_ = v___y_5575_;
v___y_5557_ = v_thms_5568_;
v___y_5558_ = v___y_5572_;
v___y_5559_ = v___x_5584_;
goto v___jp_5545_;
}
}
}
}
v___jp_5587_:
{
lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; uint8_t v___x_5603_; 
v___x_5599_ = lean_unsigned_to_nat(4u);
v___x_5600_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5599_);
v___x_5601_ = lean_unsigned_to_nat(5u);
v___x_5602_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5601_);
v___x_5603_ = l_Lean_Syntax_isNone(v___x_5602_);
if (v___x_5603_ == 0)
{
uint8_t v___x_5604_; 
lean_inc(v___x_5602_);
v___x_5604_ = l_Lean_Syntax_matchesNull(v___x_5602_, v___y_5588_);
if (v___x_5604_ == 0)
{
lean_object* v___x_5605_; 
lean_dec(v___x_5602_);
lean_dec(v___x_5600_);
lean_dec(v_u_5590_);
lean_dec(v___y_5589_);
lean_dec(v_tk_5420_);
lean_dec(v___x_5287_);
lean_dec(v_cfg_5285_);
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5605_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5605_;
}
else
{
lean_object* v___x_5606_; lean_object* v___x_5607_; uint8_t v___x_5608_; 
v___x_5606_ = l_Lean_Syntax_getArg(v___x_5602_, v___x_5284_);
v___x_5607_ = l_Lean_Syntax_getArg(v___x_5602_, v___x_5521_);
lean_dec(v___x_5602_);
v___x_5608_ = l_Lean_Syntax_isNone(v___x_5607_);
if (v___x_5608_ == 0)
{
uint8_t v___x_5609_; 
lean_inc(v___x_5607_);
v___x_5609_ = l_Lean_Syntax_matchesNull(v___x_5607_, v___y_5588_);
if (v___x_5609_ == 0)
{
lean_object* v___x_5610_; 
lean_dec(v___x_5607_);
lean_dec(v___x_5606_);
lean_dec(v___x_5600_);
lean_dec(v_u_5590_);
lean_dec(v___y_5589_);
lean_dec(v_tk_5420_);
lean_dec(v___x_5287_);
lean_dec(v_cfg_5285_);
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5610_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5610_;
}
else
{
lean_object* v___x_5611_; lean_object* v_thms_5612_; lean_object* v___x_5613_; 
v___x_5611_ = l_Lean_Syntax_getArg(v___x_5607_, v___x_5284_);
lean_dec(v___x_5607_);
v_thms_5612_ = l_Lean_Syntax_getArgs(v___x_5611_);
lean_dec(v___x_5611_);
v___x_5613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5613_, 0, v_thms_5612_);
v___y_5563_ = v___x_5601_;
v___y_5564_ = v___y_5589_;
v___y_5565_ = v___x_5606_;
v___y_5566_ = v___x_5600_;
v___y_5567_ = v_u_5590_;
v_thms_5568_ = v___x_5613_;
v___y_5569_ = v___y_5591_;
v___y_5570_ = v___y_5592_;
v___y_5571_ = v___y_5593_;
v___y_5572_ = v___y_5594_;
v___y_5573_ = v___y_5595_;
v___y_5574_ = v___y_5596_;
v___y_5575_ = v___y_5597_;
v___y_5576_ = v___y_5598_;
goto v___jp_5562_;
}
}
else
{
lean_object* v___x_5614_; 
lean_dec(v___x_5607_);
v___x_5614_ = lean_box(0);
v___y_5563_ = v___x_5601_;
v___y_5564_ = v___y_5589_;
v___y_5565_ = v___x_5606_;
v___y_5566_ = v___x_5600_;
v___y_5567_ = v_u_5590_;
v_thms_5568_ = v___x_5614_;
v___y_5569_ = v___y_5591_;
v___y_5570_ = v___y_5592_;
v___y_5571_ = v___y_5593_;
v___y_5572_ = v___y_5594_;
v___y_5573_ = v___y_5595_;
v___y_5574_ = v___y_5596_;
v___y_5575_ = v___y_5597_;
v___y_5576_ = v___y_5598_;
goto v___jp_5562_;
}
}
}
else
{
lean_object* v___x_5615_; 
lean_dec(v___x_5602_);
v___x_5615_ = lean_box(0);
v___y_5523_ = v___x_5601_;
v___y_5524_ = v___y_5589_;
v___y_5525_ = v___x_5600_;
v___y_5526_ = v_u_5590_;
v_sa_5527_ = v___x_5615_;
v_thms_5528_ = v___x_5615_;
v___y_5529_ = v___y_5591_;
v___y_5530_ = v___y_5592_;
v___y_5531_ = v___y_5593_;
v___y_5532_ = v___y_5594_;
v___y_5533_ = v___y_5595_;
v___y_5534_ = v___y_5596_;
v___y_5535_ = v___y_5597_;
v___y_5536_ = v___y_5598_;
goto v___jp_5522_;
}
}
v___jp_5616_:
{
lean_object* v___x_5626_; lean_object* v___x_5627_; uint8_t v___x_5628_; 
v___x_5626_ = lean_unsigned_to_nat(3u);
v___x_5627_ = l_Lean_Syntax_getArg(v_stx_5149_, v___x_5626_);
v___x_5628_ = l_Lean_Syntax_isNone(v___x_5627_);
if (v___x_5628_ == 0)
{
uint8_t v___x_5629_; 
lean_inc(v___x_5627_);
v___x_5629_ = l_Lean_Syntax_matchesNull(v___x_5627_, v___x_5521_);
if (v___x_5629_ == 0)
{
lean_object* v___x_5630_; 
lean_dec(v___x_5627_);
lean_dec(v_lems_5617_);
lean_dec(v_tk_5420_);
lean_dec(v___x_5287_);
lean_dec(v_cfg_5285_);
lean_dec_ref(v___x_5157_);
lean_dec_ref(v___f_5156_);
lean_dec_ref(v___f_5155_);
lean_dec_ref(v___f_5154_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___x_5630_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5630_;
}
else
{
lean_object* v_u_5631_; lean_object* v___x_5632_; 
v_u_5631_ = l_Lean_Syntax_getArg(v___x_5627_, v___x_5284_);
lean_dec(v___x_5627_);
v___x_5632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5632_, 0, v_u_5631_);
v___y_5588_ = v___x_5626_;
v___y_5589_ = v_lems_5617_;
v_u_5590_ = v___x_5632_;
v___y_5591_ = v___y_5618_;
v___y_5592_ = v___y_5619_;
v___y_5593_ = v___y_5620_;
v___y_5594_ = v___y_5621_;
v___y_5595_ = v___y_5622_;
v___y_5596_ = v___y_5623_;
v___y_5597_ = v___y_5624_;
v___y_5598_ = v___y_5625_;
goto v___jp_5587_;
}
}
else
{
lean_object* v___x_5633_; 
lean_dec(v___x_5627_);
v___x_5633_ = lean_box(0);
v___y_5588_ = v___x_5626_;
v___y_5589_ = v_lems_5617_;
v_u_5590_ = v___x_5633_;
v___y_5591_ = v___y_5618_;
v___y_5592_ = v___y_5619_;
v___y_5593_ = v___y_5620_;
v___y_5594_ = v___y_5621_;
v___y_5595_ = v___y_5622_;
v___y_5596_ = v___y_5623_;
v___y_5597_ = v___y_5624_;
v___y_5598_ = v___y_5625_;
goto v___jp_5587_;
}
}
}
}
v___jp_5167_:
{
lean_object* v___x_5178_; 
v___x_5178_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_5171_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_);
if (lean_obj_tag(v___x_5178_) == 0)
{
lean_object* v_a_5179_; uint8_t v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; 
v_a_5179_ = lean_ctor_get(v___x_5178_, 0);
lean_inc(v_a_5179_);
lean_dec_ref_known(v___x_5178_, 1);
v___x_5180_ = 0;
v___x_5181_ = lean_unsigned_to_nat(9u);
v___x_5182_ = lean_unsigned_to_nat(8u);
v___x_5183_ = lean_unsigned_to_nat(1000u);
v___x_5184_ = lean_unsigned_to_nat(100000u);
v___x_5185_ = lean_unsigned_to_nat(1024u);
v___x_5186_ = lean_unsigned_to_nat(1048576u);
v___x_5187_ = lean_unsigned_to_nat(10u);
v___x_5188_ = lean_unsigned_to_nat(50u);
v___x_5189_ = lean_box(0);
v___x_5190_ = lean_alloc_ctor(0, 13, 32);
lean_ctor_set(v___x_5190_, 0, v___x_5181_);
lean_ctor_set(v___x_5190_, 1, v___y_5168_);
lean_ctor_set(v___x_5190_, 2, v___x_5182_);
lean_ctor_set(v___x_5190_, 3, v___x_5182_);
lean_ctor_set(v___x_5190_, 4, v___x_5183_);
lean_ctor_set(v___x_5190_, 5, v___x_5183_);
lean_ctor_set(v___x_5190_, 6, v___x_5184_);
lean_ctor_set(v___x_5190_, 7, v___x_5185_);
lean_ctor_set(v___x_5190_, 8, v___x_5183_);
lean_ctor_set(v___x_5190_, 9, v___x_5186_);
lean_ctor_set(v___x_5190_, 10, v___x_5187_);
lean_ctor_set(v___x_5190_, 11, v___x_5188_);
lean_ctor_set(v___x_5190_, 12, v___x_5189_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 1, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 2, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 3, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 4, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 5, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 6, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 7, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 8, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 9, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 10, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 11, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 12, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 13, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 14, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 15, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 16, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 17, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 18, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 19, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 20, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 21, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 22, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 23, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 24, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 25, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 26, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 27, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 28, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 29, v___x_5180_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 30, v___x_5153_);
lean_ctor_set_uint8(v___x_5190_, sizeof(void*)*13 + 31, v___x_5153_);
v___x_5191_ = l_Lean_Meta_Grind_mkDefaultParams(v___x_5190_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_);
if (lean_obj_tag(v___x_5191_) == 0)
{
lean_object* v_a_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; 
v_a_5192_ = lean_ctor_get(v___x_5191_, 0);
lean_inc(v_a_5192_);
lean_dec_ref_known(v___x_5191_, 1);
v___x_5193_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_evalGrindTactic___boxed), 10, 1);
lean_closure_set(v___x_5193_, 0, v_step_5169_);
v___x_5194_ = l_Lean_Elab_Tactic_Grind_GrindTacticM_runAtGoal___redArg(v_a_5179_, v_a_5192_, v___x_5193_, v___x_5153_, v___y_5170_, v___y_5172_, v___y_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_);
if (lean_obj_tag(v___x_5194_) == 0)
{
lean_object* v_a_5195_; lean_object* v_snd_5196_; lean_object* v_goals_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; 
v_a_5195_ = lean_ctor_get(v___x_5194_, 0);
lean_inc(v_a_5195_);
lean_dec_ref_known(v___x_5194_, 1);
v_snd_5196_ = lean_ctor_get(v_a_5195_, 1);
lean_inc(v_snd_5196_);
lean_dec(v_a_5195_);
v_goals_5197_ = lean_ctor_get(v_snd_5196_, 2);
lean_inc(v_goals_5197_);
lean_dec(v_snd_5196_);
v___x_5198_ = lean_box(0);
v___x_5199_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(v_goals_5197_, v___x_5198_);
v___x_5200_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_5199_, v___y_5171_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_);
return v___x_5200_;
}
else
{
lean_object* v_a_5201_; lean_object* v___x_5203_; uint8_t v_isShared_5204_; uint8_t v_isSharedCheck_5208_; 
v_a_5201_ = lean_ctor_get(v___x_5194_, 0);
v_isSharedCheck_5208_ = !lean_is_exclusive(v___x_5194_);
if (v_isSharedCheck_5208_ == 0)
{
v___x_5203_ = v___x_5194_;
v_isShared_5204_ = v_isSharedCheck_5208_;
goto v_resetjp_5202_;
}
else
{
lean_inc(v_a_5201_);
lean_dec(v___x_5194_);
v___x_5203_ = lean_box(0);
v_isShared_5204_ = v_isSharedCheck_5208_;
goto v_resetjp_5202_;
}
v_resetjp_5202_:
{
lean_object* v___x_5206_; 
if (v_isShared_5204_ == 0)
{
v___x_5206_ = v___x_5203_;
goto v_reusejp_5205_;
}
else
{
lean_object* v_reuseFailAlloc_5207_; 
v_reuseFailAlloc_5207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5207_, 0, v_a_5201_);
v___x_5206_ = v_reuseFailAlloc_5207_;
goto v_reusejp_5205_;
}
v_reusejp_5205_:
{
return v___x_5206_;
}
}
}
}
else
{
lean_object* v_a_5209_; lean_object* v___x_5211_; uint8_t v_isShared_5212_; uint8_t v_isSharedCheck_5216_; 
lean_dec(v_a_5179_);
lean_dec(v_step_5169_);
v_a_5209_ = lean_ctor_get(v___x_5191_, 0);
v_isSharedCheck_5216_ = !lean_is_exclusive(v___x_5191_);
if (v_isSharedCheck_5216_ == 0)
{
v___x_5211_ = v___x_5191_;
v_isShared_5212_ = v_isSharedCheck_5216_;
goto v_resetjp_5210_;
}
else
{
lean_inc(v_a_5209_);
lean_dec(v___x_5191_);
v___x_5211_ = lean_box(0);
v_isShared_5212_ = v_isSharedCheck_5216_;
goto v_resetjp_5210_;
}
v_resetjp_5210_:
{
lean_object* v___x_5214_; 
if (v_isShared_5212_ == 0)
{
v___x_5214_ = v___x_5211_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5215_; 
v_reuseFailAlloc_5215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5215_, 0, v_a_5209_);
v___x_5214_ = v_reuseFailAlloc_5215_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
return v___x_5214_;
}
}
}
}
else
{
lean_object* v_a_5217_; lean_object* v___x_5219_; uint8_t v_isShared_5220_; uint8_t v_isSharedCheck_5224_; 
lean_dec(v_step_5169_);
lean_dec(v___y_5168_);
v_a_5217_ = lean_ctor_get(v___x_5178_, 0);
v_isSharedCheck_5224_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5224_ == 0)
{
v___x_5219_ = v___x_5178_;
v_isShared_5220_ = v_isSharedCheck_5224_;
goto v_resetjp_5218_;
}
else
{
lean_inc(v_a_5217_);
lean_dec(v___x_5178_);
v___x_5219_ = lean_box(0);
v_isShared_5220_ = v_isSharedCheck_5224_;
goto v_resetjp_5218_;
}
v_resetjp_5218_:
{
lean_object* v___x_5222_; 
if (v_isShared_5220_ == 0)
{
v___x_5222_ = v___x_5219_;
goto v_reusejp_5221_;
}
else
{
lean_object* v_reuseFailAlloc_5223_; 
v_reuseFailAlloc_5223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5223_, 0, v_a_5217_);
v___x_5222_ = v_reuseFailAlloc_5223_;
goto v_reusejp_5221_;
}
v_reusejp_5221_:
{
return v___x_5222_;
}
}
}
}
v___jp_5225_:
{
lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; 
v___x_5247_ = l_Array_append___redArg(v___y_5237_, v___y_5246_);
lean_dec_ref(v___y_5246_);
lean_inc(v___y_5245_);
lean_inc_n(v___y_5234_, 2);
v___x_5248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5248_, 0, v___y_5234_);
lean_ctor_set(v___x_5248_, 1, v___y_5245_);
lean_ctor_set(v___x_5248_, 2, v___x_5247_);
v___x_5249_ = l_Lean_Syntax_node6(v___y_5234_, v___y_5227_, v___y_5231_, v___y_5233_, v___y_5235_, v___y_5232_, v___y_5228_, v___x_5248_);
if (lean_obj_tag(v___y_5229_) == 0)
{
lean_dec_ref(v___y_5242_);
lean_dec(v___y_5234_);
lean_dec_ref(v___x_5152_);
lean_dec_ref(v___x_5151_);
lean_dec_ref(v___x_5150_);
v___y_5168_ = v___y_5230_;
v_step_5169_ = v___x_5249_;
v___y_5170_ = v___y_5226_;
v___y_5171_ = v___y_5236_;
v___y_5172_ = v___y_5238_;
v___y_5173_ = v___y_5239_;
v___y_5174_ = v___y_5240_;
v___y_5175_ = v___y_5243_;
v___y_5176_ = v___y_5244_;
v___y_5177_ = v___y_5241_;
goto v___jp_5167_;
}
else
{
lean_object* v_val_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; 
v_val_5250_ = lean_ctor_get(v___y_5229_, 0);
lean_inc(v_val_5250_);
lean_dec_ref_known(v___y_5229_, 1);
v___x_5251_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0));
v___x_5252_ = l_Lean_Name_mkStr5(v___x_5150_, v___x_5151_, v___x_5152_, v___y_5242_, v___x_5251_);
v___x_5253_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1));
lean_inc(v___y_5234_);
v___x_5254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5254_, 0, v___y_5234_);
lean_ctor_set(v___x_5254_, 1, v___x_5253_);
v___x_5255_ = l_Lean_Syntax_node3(v___y_5234_, v___x_5252_, v___x_5249_, v___x_5254_, v_val_5250_);
v___y_5168_ = v___y_5230_;
v_step_5169_ = v___x_5255_;
v___y_5170_ = v___y_5226_;
v___y_5171_ = v___y_5236_;
v___y_5172_ = v___y_5238_;
v___y_5173_ = v___y_5239_;
v___y_5174_ = v___y_5240_;
v___y_5175_ = v___y_5243_;
v___y_5176_ = v___y_5244_;
v___y_5177_ = v___y_5241_;
goto v___jp_5167_;
}
}
v___jp_5256_:
{
lean_object* v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; 
lean_inc_ref(v___y_5270_);
v___x_5280_ = l_Array_append___redArg(v___y_5270_, v___y_5279_);
lean_dec_ref(v___y_5279_);
lean_inc(v___y_5278_);
lean_inc(v___y_5267_);
v___x_5281_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5281_, 0, v___y_5267_);
lean_ctor_set(v___x_5281_, 1, v___y_5278_);
lean_ctor_set(v___x_5281_, 2, v___x_5280_);
v___x_5282_ = l_Array_mkArray3___redArg(v___y_5276_, v___y_5257_, v___x_5281_);
v___y_5226_ = v___y_5258_;
v___y_5227_ = v___y_5259_;
v___y_5228_ = v___y_5260_;
v___y_5229_ = v___y_5261_;
v___y_5230_ = v___y_5262_;
v___y_5231_ = v___y_5263_;
v___y_5232_ = v___y_5264_;
v___y_5233_ = v___y_5265_;
v___y_5234_ = v___y_5267_;
v___y_5235_ = v___y_5266_;
v___y_5236_ = v___y_5268_;
v___y_5237_ = v___y_5270_;
v___y_5238_ = v___y_5269_;
v___y_5239_ = v___y_5271_;
v___y_5240_ = v___y_5272_;
v___y_5241_ = v___y_5273_;
v___y_5242_ = v___y_5275_;
v___y_5243_ = v___y_5274_;
v___y_5244_ = v___y_5277_;
v___y_5245_ = v___y_5278_;
v___y_5246_ = v___x_5282_;
goto v___jp_5225_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___boxed(lean_object** _args){
lean_object* v___x_5643_ = _args[0];
lean_object* v_stx_5644_ = _args[1];
lean_object* v___x_5645_ = _args[2];
lean_object* v___x_5646_ = _args[3];
lean_object* v___x_5647_ = _args[4];
lean_object* v___x_5648_ = _args[5];
lean_object* v___f_5649_ = _args[6];
lean_object* v___f_5650_ = _args[7];
lean_object* v___f_5651_ = _args[8];
lean_object* v___x_5652_ = _args[9];
lean_object* v___y_5653_ = _args[10];
lean_object* v___y_5654_ = _args[11];
lean_object* v___y_5655_ = _args[12];
lean_object* v___y_5656_ = _args[13];
lean_object* v___y_5657_ = _args[14];
lean_object* v___y_5658_ = _args[15];
lean_object* v___y_5659_ = _args[16];
lean_object* v___y_5660_ = _args[17];
lean_object* v___y_5661_ = _args[18];
_start:
{
uint8_t v___x_10950__boxed_5662_; uint8_t v___x_10954__boxed_5663_; lean_object* v_res_5664_; 
v___x_10950__boxed_5662_ = lean_unbox(v___x_5643_);
v___x_10954__boxed_5663_ = lean_unbox(v___x_5648_);
v_res_5664_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3(v___x_10950__boxed_5662_, v_stx_5644_, v___x_5645_, v___x_5646_, v___x_5647_, v___x_10954__boxed_5663_, v___f_5649_, v___f_5650_, v___f_5651_, v___x_5652_, v___y_5653_, v___y_5654_, v___y_5655_, v___y_5656_, v___y_5657_, v___y_5658_, v___y_5659_, v___y_5660_);
lean_dec(v___y_5660_);
lean_dec_ref(v___y_5659_);
lean_dec(v___y_5658_);
lean_dec_ref(v___y_5657_);
lean_dec(v___y_5656_);
lean_dec_ref(v___y_5655_);
lean_dec(v___y_5654_);
lean_dec_ref(v___y_5653_);
lean_dec(v_stx_5644_);
return v_res_5664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(lean_object* v_stx_5673_, lean_object* v_a_5674_, lean_object* v_a_5675_, lean_object* v_a_5676_, lean_object* v_a_5677_, lean_object* v_a_5678_, lean_object* v_a_5679_, lean_object* v_a_5680_, lean_object* v_a_5681_){
_start:
{
lean_object* v___f_5683_; lean_object* v___f_5684_; lean_object* v___f_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; uint8_t v___x_5691_; uint8_t v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___y_5695_; lean_object* v___x_5696_; 
v___f_5683_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0));
v___f_5684_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1));
v___f_5685_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2));
v___x_5686_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0));
v___x_5687_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1));
v___x_5688_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2));
v___x_5689_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1));
v___x_5690_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3));
lean_inc(v_stx_5673_);
v___x_5691_ = l_Lean_Syntax_isOfKind(v_stx_5673_, v___x_5690_);
v___x_5692_ = 1;
v___x_5693_ = lean_box(v___x_5691_);
v___x_5694_ = lean_box(v___x_5692_);
v___y_5695_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___boxed), 19, 10);
lean_closure_set(v___y_5695_, 0, v___x_5693_);
lean_closure_set(v___y_5695_, 1, v_stx_5673_);
lean_closure_set(v___y_5695_, 2, v___x_5686_);
lean_closure_set(v___y_5695_, 3, v___x_5687_);
lean_closure_set(v___y_5695_, 4, v___x_5688_);
lean_closure_set(v___y_5695_, 5, v___x_5694_);
lean_closure_set(v___y_5695_, 6, v___f_5684_);
lean_closure_set(v___y_5695_, 7, v___f_5685_);
lean_closure_set(v___y_5695_, 8, v___f_5683_);
lean_closure_set(v___y_5695_, 9, v___x_5689_);
v___x_5696_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_5695_, v_a_5674_, v_a_5675_, v_a_5676_, v_a_5677_, v_a_5678_, v_a_5679_, v_a_5680_, v_a_5681_);
return v___x_5696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed(lean_object* v_stx_5697_, lean_object* v_a_5698_, lean_object* v_a_5699_, lean_object* v_a_5700_, lean_object* v_a_5701_, lean_object* v_a_5702_, lean_object* v_a_5703_, lean_object* v_a_5704_, lean_object* v_a_5705_, lean_object* v_a_5706_){
_start:
{
lean_object* v_res_5707_; 
v_res_5707_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(v_stx_5697_, v_a_5698_, v_a_5699_, v_a_5700_, v_a_5701_, v_a_5702_, v_a_5703_, v_a_5704_, v_a_5705_);
lean_dec(v_a_5705_);
lean_dec_ref(v_a_5704_);
lean_dec(v_a_5703_);
lean_dec_ref(v_a_5702_);
lean_dec(v_a_5701_);
lean_dec_ref(v_a_5700_);
lean_dec(v_a_5699_);
lean_dec_ref(v_a_5698_);
return v_res_5707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1(){
_start:
{
lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; 
v___x_5717_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_5718_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3));
v___x_5719_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1));
v___x_5720_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed), 10, 0);
v___x_5721_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5717_, v___x_5718_, v___x_5719_, v___x_5720_);
return v___x_5721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___boxed(lean_object* v_a_5722_){
_start:
{
lean_object* v_res_5723_; 
v_res_5723_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
return v_res_5723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3(){
_start:
{
lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; 
v___x_5726_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1));
v___x_5727_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0));
v___x_5728_ = l_Lean_addBuiltinDocString(v___x_5726_, v___x_5727_);
return v___x_5728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___boxed(lean_object* v_a_5729_){
_start:
{
lean_object* v_res_5730_; 
v_res_5730_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
return v_res_5730_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ProofInstInfo(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ProofInstInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ProofInstInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_VCGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ProofInstInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
}
#ifdef __cplusplus
}
#endif
