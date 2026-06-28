// Lean compiler output
// Module: Lean.Compiler.LCNF.EmitYul
// Imports: import Lean.CoreM public import Lean.Expr public import Lean.Compiler.LCNF.Basic import Lean.Compiler.LCNF.EmitUtil import Lean.Compiler.LCNF.PhaseExt public import Lean.Compiler.ExportAttr public import Lean.Compiler.NameMangling public import Lean.Compiler.Yul.AST public import Lean.Compiler.Yul.Printer
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_Yul_Literal_natLit(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mangle(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_getExternAttrData_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_getExternEntryFor(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isVoid(lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_collectUsedDecls(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_Yul_Literal_hex(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Compiler_Yul_Printer_render(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yStr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yCall(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yBuiltin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sExprStmt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sVarDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sAssignment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sIfStmt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sSwitch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sFuncDef(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sLeave;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_tn(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freeMemPtrSlot;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_yulIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "v_"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_yulIdent___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_yulIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yulIdent(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_yulFnName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "f_"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_yulFnName___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_yulFnName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yulFnName(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "or"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "shl"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "shr"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mload"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mul"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mstore"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_argToExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_freshName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_t"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_freshName___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unknown EmitYul local type "};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_captureStmts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_captureStmts___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "EmitYul: Nat literal "};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = " exceeds 32 bits; EVM Nat is U256-capped"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log2"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log1"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log0"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lean_evm_"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "returnMem"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revertMem"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sstore"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lean_apply_n"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lean_apply_2"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lean_apply_1"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lean_obj_tag"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "EmitYul: invalid jump arity to "};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "EmitYul: recursive join point "};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " not supported on EVM"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "EmitYul: jump to unknown join point "};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_ret"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "EmitYul: pure case alternative in impure code not supported"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_box"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "lean_unbox"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lean_alloc_ctor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tag"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nfields"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "obj"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ptr"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__66 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__66_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__66_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lean_ctor_get"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "v"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lean_ctor_set"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_add"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_sub"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "iszero"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "va"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vb"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_mul"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decEq"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decLe"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decLt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_div"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_mod"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mod"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "f_Nat_shiftRight"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "f_Nat_shiftLeft"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "f_Nat_land"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_lor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_xor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "calldataload"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "0x"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_r"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "return"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_v"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(lean_object*);
static const lean_ctor_object l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_captureStmts___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0 = (const lean_object*)&l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Contract"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yNum(lean_object* v_n_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = l_Lean_Compiler_Yul_Literal_natLit(v_n_1_);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yStr(lean_object* v_s_4_){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5_, 0, v_s_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yCall(lean_object* v_fn_6_, lean_object* v_args_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_8_, 0, v_fn_6_);
lean_ctor_set(v___x_8_, 1, v_args_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yBuiltin(lean_object* v_name_9_, lean_object* v_args_10_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_11_, 0, v_name_9_);
lean_ctor_set(v___x_11_, 1, v_args_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sExprStmt(lean_object* v_e_12_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_13_, 0, v_e_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sVarDecl(lean_object* v_names_14_, lean_object* v_value_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_16_, 0, v_names_14_);
lean_ctor_set(v___x_16_, 1, v_value_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sAssignment(lean_object* v_names_17_, lean_object* v_value_18_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_19_, 0, v_names_17_);
lean_ctor_set(v___x_19_, 1, v_value_18_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sIfStmt(lean_object* v_cond_20_, lean_object* v_body_21_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_22_, 0, v_cond_20_);
lean_ctor_set(v___x_22_, 1, v_body_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sSwitch(lean_object* v_e_23_, lean_object* v_cases_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_25_, 0, v_e_23_);
lean_ctor_set(v___x_25_, 1, v_cases_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_sFuncDef(lean_object* v_name_26_, lean_object* v_params_27_, lean_object* v_returns_28_, lean_object* v_body_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_30_, 0, v_name_26_);
lean_ctor_set(v___x_30_, 1, v_params_27_);
lean_ctor_set(v___x_30_, 2, v_returns_28_);
lean_ctor_set(v___x_30_, 3, v_body_29_);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_sLeave(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = lean_box(10);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_tn(lean_object* v_s_32_){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = lean_box(0);
v___x_34_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_34_, 0, v_s_32_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrSlot(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(64u);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yulIdent(lean_object* v_name_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_yulIdent___closed__0));
v___x_39_ = l_Lean_Name_mangle(v_name_37_, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_yulFnName(lean_object* v_name_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_yulFnName___closed__0));
v___x_43_ = l_Lean_Name_mangle(v_name_41_, v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = lean_unsigned_to_nat(1u);
v___x_47_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_48_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_49_ = lean_unsigned_to_nat(2u);
v___x_50_ = lean_mk_empty_array_with_capacity(v___x_49_);
v___x_51_ = lean_array_push(v___x_50_, v___x_48_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(lean_object* v_n_52_){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_53_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_54_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_55_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_56_ = lean_unsigned_to_nat(2u);
v___x_57_ = lean_mk_empty_array_with_capacity(v___x_56_);
v___x_58_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_59_ = lean_array_push(v___x_58_, v_n_52_);
v___x_60_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_60_, 0, v___x_54_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
v___x_61_ = lean_array_push(v___x_57_, v___x_60_);
v___x_62_ = lean_array_push(v___x_61_, v___x_55_);
v___x_63_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_63_, 0, v___x_53_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(lean_object* v_o_65_){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_67_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_68_ = lean_array_push(v___x_67_, v_o_65_);
v___x_69_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_66_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_70_);
return v___x_71_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_73_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_72_);
return v___x_73_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1);
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_unsigned_to_nat(8u);
v___x_76_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__1(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_77_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0);
v___x_78_ = lean_unsigned_to_nat(2u);
v___x_79_ = lean_mk_empty_array_with_capacity(v___x_78_);
v___x_80_ = lean_array_push(v___x_79_, v___x_77_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__2(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_unsigned_to_nat(16u);
v___x_82_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_81_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__3(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__2);
v___x_84_ = lean_unsigned_to_nat(2u);
v___x_85_ = lean_mk_empty_array_with_capacity(v___x_84_);
v___x_86_ = lean_array_push(v___x_85_, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_unsigned_to_nat(32u);
v___x_88_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_87_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__5(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_90_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_91_ = lean_unsigned_to_nat(2u);
v___x_92_ = lean_mk_empty_array_with_capacity(v___x_91_);
v___x_93_ = lean_array_push(v___x_92_, v___x_90_);
v___x_94_ = lean_array_push(v___x_93_, v___x_89_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_95_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__5, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__5);
v___x_96_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_97_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___x_95_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(lean_object* v_tag_98_, lean_object* v_other_99_, lean_object* v_csSz_100_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_101_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_102_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_tag_98_);
v___x_103_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_104_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_other_99_);
v___x_105_ = lean_unsigned_to_nat(2u);
v___x_106_ = lean_mk_empty_array_with_capacity(v___x_105_);
v___x_107_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__1);
v___x_108_ = lean_array_push(v___x_107_, v___x_104_);
v___x_109_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_103_);
lean_ctor_set(v___x_109_, 1, v___x_108_);
lean_inc_ref_n(v___x_106_, 2);
v___x_110_ = lean_array_push(v___x_106_, v___x_102_);
v___x_111_ = lean_array_push(v___x_110_, v___x_109_);
v___x_112_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_101_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_csSz_100_);
v___x_114_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__3);
v___x_115_ = lean_array_push(v___x_114_, v___x_113_);
v___x_116_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_103_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_array_push(v___x_106_, v___x_112_);
v___x_118_ = lean_array_push(v___x_117_, v___x_116_);
v___x_119_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_101_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6);
v___x_121_ = lean_array_push(v___x_106_, v___x_119_);
v___x_122_ = lean_array_push(v___x_121_, v___x_120_);
v___x_123_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_101_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
return v___x_123_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(64u);
v___x_126_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__2(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_127_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_128_ = lean_unsigned_to_nat(1u);
v___x_129_ = lean_mk_empty_array_with_capacity(v___x_128_);
v___x_130_ = lean_array_push(v___x_129_, v___x_127_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__3(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__2);
v___x_132_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_133_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_131_);
return v___x_133_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr(void){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__3);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(lean_object* v_obj_137_, lean_object* v_i_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_139_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_140_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_141_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_142_ = lean_unsigned_to_nat(1u);
v___x_143_ = lean_nat_add(v_i_138_, v___x_142_);
v___x_144_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_143_);
v___x_145_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_146_ = lean_unsigned_to_nat(2u);
v___x_147_ = lean_mk_empty_array_with_capacity(v___x_146_);
lean_inc_ref(v___x_147_);
v___x_148_ = lean_array_push(v___x_147_, v___x_144_);
v___x_149_ = lean_array_push(v___x_148_, v___x_145_);
v___x_150_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_141_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = lean_array_push(v___x_147_, v_obj_137_);
v___x_152_ = lean_array_push(v___x_151_, v___x_150_);
v___x_153_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_153_, 0, v___x_140_);
lean_ctor_set(v___x_153_, 1, v___x_152_);
v___x_154_ = lean_mk_empty_array_with_capacity(v___x_142_);
v___x_155_ = lean_array_push(v___x_154_, v___x_153_);
v___x_156_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_156_, 0, v___x_139_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___boxed(lean_object* v_obj_157_, lean_object* v_i_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v_obj_157_, v_i_158_);
lean_dec(v_i_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(lean_object* v_obj_161_, lean_object* v_i_162_, lean_object* v_value_163_){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_164_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_165_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_166_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_167_ = lean_unsigned_to_nat(1u);
v___x_168_ = lean_nat_add(v_i_162_, v___x_167_);
v___x_169_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_168_);
v___x_170_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_171_ = lean_unsigned_to_nat(2u);
v___x_172_ = lean_mk_empty_array_with_capacity(v___x_171_);
lean_inc_ref_n(v___x_172_, 2);
v___x_173_ = lean_array_push(v___x_172_, v___x_169_);
v___x_174_ = lean_array_push(v___x_173_, v___x_170_);
v___x_175_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_166_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
v___x_176_ = lean_array_push(v___x_172_, v_obj_161_);
v___x_177_ = lean_array_push(v___x_176_, v___x_175_);
v___x_178_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_165_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = lean_array_push(v___x_172_, v___x_178_);
v___x_180_ = lean_array_push(v___x_179_, v_value_163_);
v___x_181_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_164_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___boxed(lean_object* v_obj_183_, lean_object* v_i_184_, lean_object* v_value_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_obj_183_, v_i_184_, v_value_185_);
lean_dec(v_i_184_);
return v_res_186_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr;
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1(void){
_start:
{
lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_189_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_190_ = lean_unsigned_to_nat(2u);
v___x_191_ = lean_mk_empty_array_with_capacity(v___x_190_);
v___x_192_ = lean_array_push(v___x_191_, v___x_189_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN(lean_object* v_nwords_193_, lean_object* v_ptrName_194_){
_start:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v_decl_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v_bump_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_inc_ref(v_ptrName_194_);
v___x_195_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_ptrName_194_);
v___x_196_ = lean_unsigned_to_nat(1u);
v___x_197_ = lean_mk_empty_array_with_capacity(v___x_196_);
v___x_198_ = lean_array_push(v___x_197_, v___x_195_);
v___x_199_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0);
v_decl_200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_decl_200_, 0, v___x_198_);
lean_ctor_set(v_decl_200_, 1, v___x_199_);
v___x_201_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_202_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v_ptrName_194_);
v___x_204_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_205_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_nwords_193_);
v___x_206_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_207_ = lean_unsigned_to_nat(2u);
v___x_208_ = lean_mk_empty_array_with_capacity(v___x_207_);
lean_inc_ref_n(v___x_208_, 2);
v___x_209_ = lean_array_push(v___x_208_, v___x_205_);
v___x_210_ = lean_array_push(v___x_209_, v___x_206_);
v___x_211_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_204_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_inc_ref(v___x_203_);
v___x_212_ = lean_array_push(v___x_208_, v___x_203_);
v___x_213_ = lean_array_push(v___x_212_, v___x_211_);
v___x_214_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_202_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
v___x_215_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1);
v___x_216_ = lean_array_push(v___x_215_, v___x_214_);
v___x_217_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_201_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v_bump_218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_bump_218_, 0, v___x_217_);
v___x_219_ = lean_array_push(v___x_208_, v_decl_200_);
v___x_220_ = lean_array_push(v___x_219_, v_bump_218_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
lean_ctor_set(v___x_221_, 1, v___x_203_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_argToExpr(lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_222_) == 0)
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1);
return v___x_223_;
}
else
{
lean_object* v_fvarId_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_232_; 
v_fvarId_224_ = lean_ctor_get(v_x_222_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v_x_222_);
if (v_isSharedCheck_232_ == 0)
{
v___x_226_ = v_x_222_;
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_fvarId_224_);
lean_dec(v_x_222_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_232_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_228_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_224_);
if (v_isShared_227_ == 0)
{
lean_ctor_set(v___x_226_, 0, v___x_228_);
v___x_230_ = v___x_226_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_228_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg(lean_object* v_s_233_, lean_object* v_a_234_){
_start:
{
lean_object* v___x_236_; lean_object* v_stmts_237_; lean_object* v_fresh_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_249_; 
v___x_236_ = lean_st_ref_take(v_a_234_);
v_stmts_237_ = lean_ctor_get(v___x_236_, 0);
v_fresh_238_ = lean_ctor_get(v___x_236_, 1);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_249_ == 0)
{
v___x_240_ = v___x_236_;
v_isShared_241_ = v_isSharedCheck_249_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_fresh_238_);
lean_inc(v_stmts_237_);
lean_dec(v___x_236_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_249_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_242_ = lean_array_push(v_stmts_237_, v_s_233_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_242_);
v___x_244_ = v___x_240_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_fresh_238_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = lean_st_ref_set(v_a_234_, v___x_244_);
v___x_246_ = lean_box(0);
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg___boxed(lean_object* v_s_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Compiler_LCNF_EmitYul_emit___redArg(v_s_250_, v_a_251_);
lean_dec(v_a_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit(lean_object* v_s_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v___x_260_; lean_object* v_stmts_261_; lean_object* v_fresh_262_; lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_273_; 
v___x_260_ = lean_st_ref_take(v_a_256_);
v_stmts_261_ = lean_ctor_get(v___x_260_, 0);
v_fresh_262_ = lean_ctor_get(v___x_260_, 1);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_273_ == 0)
{
v___x_264_ = v___x_260_;
v_isShared_265_ = v_isSharedCheck_273_;
goto v_resetjp_263_;
}
else
{
lean_inc(v_fresh_262_);
lean_inc(v_stmts_261_);
lean_dec(v___x_260_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_273_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_266_ = lean_array_push(v_stmts_261_, v_s_254_);
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 0, v___x_266_);
v___x_268_ = v___x_264_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_272_, 1, v_fresh_262_);
v___x_268_ = v_reuseFailAlloc_272_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_269_ = lean_st_ref_set(v_a_256_, v___x_268_);
v___x_270_ = lean_box(0);
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___boxed(lean_object* v_s_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lean_Compiler_LCNF_EmitYul_emit(v_s_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_);
lean_dec(v_a_278_);
lean_dec_ref(v_a_277_);
lean_dec(v_a_276_);
lean_dec_ref(v_a_275_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(lean_object* v_a_282_){
_start:
{
lean_object* v___x_284_; lean_object* v_stmts_285_; lean_object* v_fresh_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_300_; 
v___x_284_ = lean_st_ref_get(v_a_282_);
v_stmts_285_ = lean_ctor_get(v___x_284_, 0);
v_fresh_286_ = lean_ctor_get(v___x_284_, 1);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_300_ == 0)
{
v___x_288_ = v___x_284_;
v_isShared_289_ = v_isSharedCheck_300_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_fresh_286_);
lean_inc(v_stmts_285_);
lean_dec(v___x_284_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_300_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_293_; 
v___x_290_ = lean_unsigned_to_nat(1u);
v___x_291_ = lean_nat_add(v_fresh_286_, v___x_290_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 1, v___x_291_);
v___x_293_ = v___x_288_;
goto v_reusejp_292_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_stmts_285_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_291_);
v___x_293_ = v_reuseFailAlloc_299_;
goto v_reusejp_292_;
}
v_reusejp_292_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_294_ = lean_st_ref_set(v_a_282_, v___x_293_);
v___x_295_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freshName___redArg___closed__0));
v___x_296_ = l_Nat_reprFast(v_fresh_286_);
v___x_297_ = lean_string_append(v___x_295_, v___x_296_);
lean_dec_ref(v___x_296_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___redArg___boxed(lean_object* v_a_301_, lean_object* v_a_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_301_);
lean_dec(v_a_301_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName(lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v___x_309_; 
v___x_309_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_305_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_freshName___boxed(lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_Compiler_LCNF_EmitYul_freshName(v_a_310_, v_a_311_, v_a_312_, v_a_313_);
lean_dec(v_a_313_);
lean_dec_ref(v_a_312_);
lean_dec(v_a_311_);
lean_dec_ref(v_a_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg(lean_object* v_ss_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_319_; lean_object* v_stmts_320_; lean_object* v_fresh_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_332_; 
v___x_319_ = lean_st_ref_take(v_a_317_);
v_stmts_320_ = lean_ctor_get(v___x_319_, 0);
v_fresh_321_ = lean_ctor_get(v___x_319_, 1);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_332_ == 0)
{
v___x_323_ = v___x_319_;
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_fresh_321_);
lean_inc(v_stmts_320_);
lean_dec(v___x_319_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_332_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = l_Array_append___redArg(v_stmts_320_, v_ss_316_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v___x_325_);
v___x_327_ = v___x_323_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_325_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_fresh_321_);
v___x_327_ = v_reuseFailAlloc_331_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_328_ = lean_st_ref_set(v_a_317_, v___x_327_);
v___x_329_ = lean_box(0);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg___boxed(lean_object* v_ss_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg(v_ss_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_ss_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany(lean_object* v_ss_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
lean_object* v___x_343_; lean_object* v_stmts_344_; lean_object* v_fresh_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_356_; 
v___x_343_ = lean_st_ref_take(v_a_339_);
v_stmts_344_ = lean_ctor_get(v___x_343_, 0);
v_fresh_345_ = lean_ctor_get(v___x_343_, 1);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_356_ == 0)
{
v___x_347_ = v___x_343_;
v_isShared_348_ = v_isSharedCheck_356_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_fresh_345_);
lean_inc(v_stmts_344_);
lean_dec(v___x_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_356_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = l_Array_append___redArg(v_stmts_344_, v_ss_337_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_fresh_345_);
v___x_351_ = v_reuseFailAlloc_355_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_st_ref_set(v_a_339_, v___x_351_);
v___x_353_ = lean_box(0);
v___x_354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
return v___x_354_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___boxed(lean_object* v_ss_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Compiler_LCNF_EmitYul_emitMany(v_ss_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_);
lean_dec(v_a_361_);
lean_dec_ref(v_a_360_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec_ref(v_ss_357_);
return v_res_363_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_364_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_367_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1);
v___x_368_ = lean_unsigned_to_nat(0u);
v___x_369_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
lean_ctor_set(v___x_369_, 2, v___x_368_);
lean_ctor_set(v___x_369_, 3, v___x_368_);
lean_ctor_set(v___x_369_, 4, v___x_367_);
lean_ctor_set(v___x_369_, 5, v___x_367_);
lean_ctor_set(v___x_369_, 6, v___x_367_);
lean_ctor_set(v___x_369_, 7, v___x_367_);
lean_ctor_set(v___x_369_, 8, v___x_367_);
lean_ctor_set(v___x_369_, 9, v___x_367_);
return v___x_369_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_370_ = lean_unsigned_to_nat(32u);
v___x_371_ = lean_mk_empty_array_with_capacity(v___x_370_);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_373_ = ((size_t)5ULL);
v___x_374_ = lean_unsigned_to_nat(0u);
v___x_375_ = lean_unsigned_to_nat(32u);
v___x_376_ = lean_mk_empty_array_with_capacity(v___x_375_);
v___x_377_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3);
v___x_378_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_378_, 0, v___x_377_);
lean_ctor_set(v___x_378_, 1, v___x_376_);
lean_ctor_set(v___x_378_, 2, v___x_374_);
lean_ctor_set(v___x_378_, 3, v___x_374_);
lean_ctor_set_usize(v___x_378_, 4, v___x_373_);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = lean_box(1);
v___x_380_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4);
v___x_381_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1);
v___x_382_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___x_380_);
lean_ctor_set(v___x_382_, 2, v___x_379_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(lean_object* v_msgData_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v___x_387_; lean_object* v_env_388_; lean_object* v_options_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_387_ = lean_st_ref_get(v___y_385_);
v_env_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc_ref(v_env_388_);
lean_dec(v___x_387_);
v_options_389_ = lean_ctor_get(v___y_384_, 2);
v___x_390_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2);
v___x_391_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_389_);
v___x_392_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_392_, 0, v_env_388_);
lean_ctor_set(v___x_392_, 1, v___x_390_);
lean_ctor_set(v___x_392_, 2, v___x_391_);
lean_ctor_set(v___x_392_, 3, v_options_389_);
v___x_393_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v_msgData_383_);
v___x_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___boxed(lean_object* v_msgData_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(v_msgData_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(lean_object* v_msg_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_ref_404_; lean_object* v___x_405_; lean_object* v_a_406_; lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_414_; 
v_ref_404_ = lean_ctor_get(v___y_401_, 5);
v___x_405_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(v_msg_400_, v___y_401_, v___y_402_);
v_a_406_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_414_ == 0)
{
v___x_408_ = v___x_405_;
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
else
{
lean_inc(v_a_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v___x_412_; 
lean_inc(v_ref_404_);
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v_ref_404_);
lean_ctor_set(v___x_410_, 1, v_a_406_);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 1);
lean_ctor_set(v___x_408_, 0, v___x_410_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg___boxed(lean_object* v_msg_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v_msg_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_419_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__0));
v___x_422_ = l_Lean_stringToMessageData(v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType(lean_object* v_fvarId_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_fvarTypes_429_; lean_object* v___x_430_; 
v_fvarTypes_429_ = lean_ctor_get(v_a_424_, 4);
v___x_430_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_fvarTypes_429_, v_fvarId_423_);
if (lean_obj_tag(v___x_430_) == 1)
{
lean_object* v_val_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_dec(v_fvarId_423_);
v_val_431_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_430_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_val_431_);
lean_dec(v___x_430_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 0);
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_val_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
lean_dec(v___x_430_);
v___x_439_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1, &l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1);
v___x_440_ = l_Lean_MessageData_ofName(v_fvarId_423_);
v___x_441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
v___x_442_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_441_, v_a_426_, v_a_427_);
return v___x_442_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType___boxed(lean_object* v_fvarId_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_Compiler_LCNF_EmitYul_getStoredType(v_fvarId_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
lean_dec(v_a_445_);
lean_dec_ref(v_a_444_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0(lean_object* v_00_u03b1_450_, lean_object* v_msg_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v_msg_451_, v___y_454_, v___y_455_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___boxed(lean_object* v_00_u03b1_458_, lean_object* v_msg_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0(v_00_u03b1_458_, v_msg_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(lean_object* v_fvarId_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_joinDecls_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_joinDecls_469_ = lean_ctor_get(v_a_467_, 5);
v___x_470_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_joinDecls_469_, v_fvarId_466_);
v___x_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg___boxed(lean_object* v_fvarId_472_, lean_object* v_a_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_472_, v_a_473_);
lean_dec_ref(v_a_473_);
lean_dec(v_fvarId_472_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f(lean_object* v_fvarId_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_476_, v_a_477_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___boxed(lean_object* v_fvarId_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f(v_fvarId_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
lean_dec(v_fvarId_483_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(lean_object* v_args_490_, lean_object* v_ps_491_, lean_object* v_range_492_, lean_object* v_b_493_, lean_object* v_i_494_){
_start:
{
lean_object* v_stop_495_; lean_object* v_step_496_; lean_object* v_a_498_; uint8_t v___x_501_; 
v_stop_495_ = lean_ctor_get(v_range_492_, 1);
v_step_496_ = lean_ctor_get(v_range_492_, 2);
v___x_501_ = lean_nat_dec_lt(v_i_494_, v_stop_495_);
if (v___x_501_ == 0)
{
lean_dec(v_i_494_);
return v_b_493_;
}
else
{
lean_object* v_arg_502_; uint8_t v___y_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v_arg_502_ = lean_array_fget_borrowed(v_args_490_, v_i_494_);
v___x_507_ = lean_array_get_size(v_ps_491_);
v___x_508_ = lean_nat_dec_lt(v_i_494_, v___x_507_);
if (v___x_508_ == 0)
{
goto v___jp_503_;
}
else
{
lean_object* v_p_509_; lean_object* v_type_510_; uint8_t v___x_511_; 
v_p_509_ = lean_array_fget_borrowed(v_ps_491_, v_i_494_);
v_type_510_ = lean_ctor_get(v_p_509_, 2);
v___x_511_ = l_Lean_Expr_isVoid(v_type_510_);
if (v___x_511_ == 0)
{
uint8_t v___x_512_; 
v___x_512_ = l_Lean_Expr_isErased(v_type_510_);
v___y_506_ = v___x_512_;
goto v___jp_505_;
}
else
{
v___y_506_ = v___x_511_;
goto v___jp_505_;
}
}
v___jp_503_:
{
lean_object* v_filtered_504_; 
lean_inc(v_arg_502_);
v_filtered_504_ = lean_array_push(v_b_493_, v_arg_502_);
v_a_498_ = v_filtered_504_;
goto v___jp_497_;
}
v___jp_505_:
{
if (v___y_506_ == 0)
{
goto v___jp_503_;
}
else
{
v_a_498_ = v_b_493_;
goto v___jp_497_;
}
}
}
v___jp_497_:
{
lean_object* v___x_499_; 
v___x_499_ = lean_nat_add(v_i_494_, v_step_496_);
lean_dec(v_i_494_);
v_b_493_ = v_a_498_;
v_i_494_ = v___x_499_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg___boxed(lean_object* v_args_513_, lean_object* v_ps_514_, lean_object* v_range_515_, lean_object* v_b_516_, lean_object* v_i_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(v_args_513_, v_ps_514_, v_range_515_, v_b_516_, v_i_517_);
lean_dec_ref(v_range_515_);
lean_dec_ref(v_ps_514_);
lean_dec_ref(v_args_513_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(lean_object* v_ps_521_, lean_object* v_args_522_){
_start:
{
lean_object* v___x_523_; lean_object* v_filtered_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_523_ = lean_unsigned_to_nat(0u);
v_filtered_524_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___closed__0));
v___x_525_ = lean_array_get_size(v_args_522_);
v___x_526_ = lean_unsigned_to_nat(1u);
v___x_527_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_527_, 0, v___x_523_);
lean_ctor_set(v___x_527_, 1, v___x_525_);
lean_ctor_set(v___x_527_, 2, v___x_526_);
v___x_528_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(v_args_522_, v_ps_521_, v___x_527_, v_filtered_524_, v___x_523_);
lean_dec_ref_known(v___x_527_, 3);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___boxed(lean_object* v_ps_529_, lean_object* v_args_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(v_ps_529_, v_args_530_);
lean_dec_ref(v_args_530_);
lean_dec_ref(v_ps_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0(lean_object* v_args_532_, lean_object* v_ps_533_, lean_object* v_range_534_, lean_object* v_b_535_, lean_object* v_i_536_, lean_object* v_hs_537_, lean_object* v_hl_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(v_args_532_, v_ps_533_, v_range_534_, v_b_535_, v_i_536_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___boxed(lean_object* v_args_540_, lean_object* v_ps_541_, lean_object* v_range_542_, lean_object* v_b_543_, lean_object* v_i_544_, lean_object* v_hs_545_, lean_object* v_hl_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0(v_args_540_, v_ps_541_, v_range_542_, v_b_543_, v_i_544_, v_hs_545_, v_hl_546_);
lean_dec_ref(v_range_542_);
lean_dec_ref(v_ps_541_);
lean_dec_ref(v_args_540_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts(lean_object* v_act_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v_stmts_558_; lean_object* v_fresh_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_597_; 
v___x_556_ = lean_st_ref_get(v_a_552_);
v___x_557_ = lean_st_ref_take(v_a_552_);
lean_dec(v___x_557_);
v_stmts_558_ = lean_ctor_get(v___x_556_, 0);
v_fresh_559_ = lean_ctor_get(v___x_556_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_597_ == 0)
{
v___x_561_ = v___x_556_;
v_isShared_562_ = v_isSharedCheck_597_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_fresh_559_);
lean_inc(v_stmts_558_);
lean_dec(v___x_556_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_597_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_563_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_captureStmts___closed__0));
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_565_ = v___x_561_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_563_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_fresh_559_);
v___x_565_ = v_reuseFailAlloc_596_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_st_ref_set(v_a_552_, v___x_565_);
lean_inc(v_a_554_);
lean_inc_ref(v_a_553_);
lean_inc(v_a_552_);
lean_inc_ref(v_a_551_);
v___x_567_ = lean_apply_5(v_act_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, lean_box(0));
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_586_; 
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_586_ == 0)
{
lean_object* v_unused_587_; 
v_unused_587_ = lean_ctor_get(v___x_567_, 0);
lean_dec(v_unused_587_);
v___x_569_ = v___x_567_;
v_isShared_570_ = v_isSharedCheck_586_;
goto v_resetjp_568_;
}
else
{
lean_dec(v___x_567_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_586_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v_stmts_573_; lean_object* v_fresh_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_585_; 
v___x_571_ = lean_st_ref_get(v_a_552_);
v___x_572_ = lean_st_ref_take(v_a_552_);
lean_dec(v___x_572_);
v_stmts_573_ = lean_ctor_get(v___x_571_, 0);
v_fresh_574_ = lean_ctor_get(v___x_571_, 1);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_585_ == 0)
{
v___x_576_ = v___x_571_;
v_isShared_577_ = v_isSharedCheck_585_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_fresh_574_);
lean_inc(v_stmts_573_);
lean_dec(v___x_571_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_585_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 0, v_stmts_558_);
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_stmts_558_);
lean_ctor_set(v_reuseFailAlloc_584_, 1, v_fresh_574_);
v___x_579_ = v_reuseFailAlloc_584_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_st_ref_set(v_a_552_, v___x_579_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v_stmts_573_);
v___x_582_ = v___x_569_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_stmts_573_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_595_; 
lean_dec_ref(v_stmts_558_);
v_a_588_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_595_ == 0)
{
v___x_590_ = v___x_567_;
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_a_588_);
lean_dec(v___x_567_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_595_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_593_; 
if (v_isShared_591_ == 0)
{
v___x_593_ = v___x_590_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_a_588_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts___boxed(lean_object* v_act_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v_act_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(lean_object* v_code_605_, lean_object* v_acc_606_){
_start:
{
switch(lean_obj_tag(v_code_605_))
{
case 0:
{
lean_object* v_k_607_; 
v_k_607_ = lean_ctor_get(v_code_605_, 1);
lean_inc_ref(v_k_607_);
lean_dec_ref_known(v_code_605_, 2);
v_code_605_ = v_k_607_;
goto _start;
}
case 2:
{
lean_object* v_decl_609_; lean_object* v_k_610_; lean_object* v_fvarId_611_; lean_object* v_value_612_; lean_object* v_acc_613_; lean_object* v_acc_614_; 
v_decl_609_ = lean_ctor_get(v_code_605_, 0);
lean_inc_ref(v_decl_609_);
v_k_610_ = lean_ctor_get(v_code_605_, 1);
lean_inc_ref(v_k_610_);
lean_dec_ref_known(v_code_605_, 2);
v_fvarId_611_ = lean_ctor_get(v_decl_609_, 0);
lean_inc(v_fvarId_611_);
v_value_612_ = lean_ctor_get(v_decl_609_, 4);
lean_inc_ref(v_value_612_);
v_acc_613_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fvarId_611_, v_decl_609_, v_acc_606_);
v_acc_614_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v_value_612_, v_acc_613_);
v_code_605_ = v_k_610_;
v_acc_606_ = v_acc_614_;
goto _start;
}
case 4:
{
lean_object* v_cases_616_; lean_object* v_alts_617_; lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v_cases_616_ = lean_ctor_get(v_code_605_, 0);
lean_inc_ref(v_cases_616_);
lean_dec_ref_known(v_code_605_, 1);
v_alts_617_ = lean_ctor_get(v_cases_616_, 3);
lean_inc_ref(v_alts_617_);
lean_dec_ref(v_cases_616_);
v___x_618_ = lean_unsigned_to_nat(0u);
v___x_619_ = lean_array_get_size(v_alts_617_);
v___x_620_ = lean_nat_dec_lt(v___x_618_, v___x_619_);
if (v___x_620_ == 0)
{
lean_dec_ref(v_alts_617_);
return v_acc_606_;
}
else
{
uint8_t v___x_621_; 
v___x_621_ = lean_nat_dec_le(v___x_619_, v___x_619_);
if (v___x_621_ == 0)
{
if (v___x_620_ == 0)
{
lean_dec_ref(v_alts_617_);
return v_acc_606_;
}
else
{
size_t v___x_622_; size_t v___x_623_; lean_object* v___x_624_; 
v___x_622_ = ((size_t)0ULL);
v___x_623_ = lean_usize_of_nat(v___x_619_);
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(v_alts_617_, v___x_622_, v___x_623_, v_acc_606_);
lean_dec_ref(v_alts_617_);
return v___x_624_;
}
}
else
{
size_t v___x_625_; size_t v___x_626_; lean_object* v___x_627_; 
v___x_625_ = ((size_t)0ULL);
v___x_626_ = lean_usize_of_nat(v___x_619_);
v___x_627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(v_alts_617_, v___x_625_, v___x_626_, v_acc_606_);
lean_dec_ref(v_alts_617_);
return v___x_627_;
}
}
}
case 7:
{
lean_object* v_k_628_; 
v_k_628_ = lean_ctor_get(v_code_605_, 3);
lean_inc_ref(v_k_628_);
lean_dec_ref_known(v_code_605_, 4);
v_code_605_ = v_k_628_;
goto _start;
}
case 8:
{
lean_object* v_k_630_; 
v_k_630_ = lean_ctor_get(v_code_605_, 3);
lean_inc_ref(v_k_630_);
lean_dec_ref_known(v_code_605_, 4);
v_code_605_ = v_k_630_;
goto _start;
}
case 9:
{
lean_object* v_k_632_; 
v_k_632_ = lean_ctor_get(v_code_605_, 5);
lean_inc_ref(v_k_632_);
lean_dec_ref_known(v_code_605_, 6);
v_code_605_ = v_k_632_;
goto _start;
}
case 10:
{
lean_object* v_k_634_; 
v_k_634_ = lean_ctor_get(v_code_605_, 2);
lean_inc_ref(v_k_634_);
lean_dec_ref_known(v_code_605_, 3);
v_code_605_ = v_k_634_;
goto _start;
}
case 11:
{
lean_object* v_k_636_; 
v_k_636_ = lean_ctor_get(v_code_605_, 2);
lean_inc_ref(v_k_636_);
lean_dec_ref_known(v_code_605_, 3);
v_code_605_ = v_k_636_;
goto _start;
}
case 12:
{
lean_object* v_k_638_; 
v_k_638_ = lean_ctor_get(v_code_605_, 3);
lean_inc_ref(v_k_638_);
lean_dec_ref_known(v_code_605_, 4);
v_code_605_ = v_k_638_;
goto _start;
}
case 13:
{
lean_object* v_k_640_; 
v_k_640_ = lean_ctor_get(v_code_605_, 1);
lean_inc_ref(v_k_640_);
lean_dec_ref_known(v_code_605_, 2);
v_code_605_ = v_k_640_;
goto _start;
}
default: 
{
lean_dec_ref(v_code_605_);
return v_acc_606_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(lean_object* v_as_642_, size_t v_i_643_, size_t v_stop_644_, lean_object* v_b_645_){
_start:
{
lean_object* v___y_647_; uint8_t v___x_652_; 
v___x_652_ = lean_usize_dec_eq(v_i_643_, v_stop_644_);
if (v___x_652_ == 0)
{
lean_object* v___x_653_; 
v___x_653_ = lean_array_uget_borrowed(v_as_642_, v_i_643_);
switch(lean_obj_tag(v___x_653_))
{
case 0:
{
lean_object* v_code_654_; 
v_code_654_ = lean_ctor_get(v___x_653_, 2);
lean_inc_ref(v_code_654_);
v___y_647_ = v_code_654_;
goto v___jp_646_;
}
case 1:
{
lean_object* v_code_655_; 
v_code_655_ = lean_ctor_get(v___x_653_, 1);
lean_inc_ref(v_code_655_);
v___y_647_ = v_code_655_;
goto v___jp_646_;
}
default: 
{
lean_object* v_code_656_; 
v_code_656_ = lean_ctor_get(v___x_653_, 0);
lean_inc_ref(v_code_656_);
v___y_647_ = v_code_656_;
goto v___jp_646_;
}
}
}
else
{
return v_b_645_;
}
v___jp_646_:
{
lean_object* v___x_648_; size_t v___x_649_; size_t v___x_650_; 
v___x_648_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v___y_647_, v_b_645_);
v___x_649_ = ((size_t)1ULL);
v___x_650_ = lean_usize_add(v_i_643_, v___x_649_);
v_i_643_ = v___x_650_;
v_b_645_ = v___x_648_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0___boxed(lean_object* v_as_657_, lean_object* v_i_658_, lean_object* v_stop_659_, lean_object* v_b_660_){
_start:
{
size_t v_i_boxed_661_; size_t v_stop_boxed_662_; lean_object* v_res_663_; 
v_i_boxed_661_ = lean_unbox_usize(v_i_658_);
lean_dec(v_i_658_);
v_stop_boxed_662_ = lean_unbox_usize(v_stop_659_);
lean_dec(v_stop_659_);
v_res_663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(v_as_657_, v_i_boxed_661_, v_stop_boxed_662_, v_b_660_);
lean_dec_ref(v_as_657_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(lean_object* v_as_664_, size_t v_i_665_, size_t v_stop_666_, lean_object* v_b_667_){
_start:
{
uint8_t v___x_668_; 
v___x_668_ = lean_usize_dec_eq(v_i_665_, v_stop_666_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; lean_object* v_fvarId_670_; lean_object* v_type_671_; lean_object* v___x_672_; size_t v___x_673_; size_t v___x_674_; 
v___x_669_ = lean_array_uget_borrowed(v_as_664_, v_i_665_);
v_fvarId_670_ = lean_ctor_get(v___x_669_, 0);
v_type_671_ = lean_ctor_get(v___x_669_, 2);
lean_inc_ref(v_type_671_);
lean_inc(v_fvarId_670_);
v___x_672_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fvarId_670_, v_type_671_, v_b_667_);
v___x_673_ = ((size_t)1ULL);
v___x_674_ = lean_usize_add(v_i_665_, v___x_673_);
v_i_665_ = v___x_674_;
v_b_667_ = v___x_672_;
goto _start;
}
else
{
return v_b_667_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0___boxed(lean_object* v_as_676_, lean_object* v_i_677_, lean_object* v_stop_678_, lean_object* v_b_679_){
_start:
{
size_t v_i_boxed_680_; size_t v_stop_boxed_681_; lean_object* v_res_682_; 
v_i_boxed_680_ = lean_unbox_usize(v_i_677_);
lean_dec(v_i_677_);
v_stop_boxed_681_ = lean_unbox_usize(v_stop_678_);
lean_dec(v_stop_678_);
v_res_682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_as_676_, v_i_boxed_680_, v_stop_boxed_681_, v_b_679_);
lean_dec_ref(v_as_676_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(lean_object* v_code_683_, lean_object* v_acc_684_){
_start:
{
switch(lean_obj_tag(v_code_683_))
{
case 0:
{
lean_object* v_decl_685_; lean_object* v_k_686_; lean_object* v_fvarId_687_; lean_object* v_type_688_; lean_object* v___x_689_; 
v_decl_685_ = lean_ctor_get(v_code_683_, 0);
lean_inc_ref(v_decl_685_);
v_k_686_ = lean_ctor_get(v_code_683_, 1);
lean_inc_ref(v_k_686_);
lean_dec_ref_known(v_code_683_, 2);
v_fvarId_687_ = lean_ctor_get(v_decl_685_, 0);
lean_inc(v_fvarId_687_);
v_type_688_ = lean_ctor_get(v_decl_685_, 2);
lean_inc_ref(v_type_688_);
lean_dec_ref(v_decl_685_);
v___x_689_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fvarId_687_, v_type_688_, v_acc_684_);
v_code_683_ = v_k_686_;
v_acc_684_ = v___x_689_;
goto _start;
}
case 2:
{
lean_object* v_decl_691_; lean_object* v_k_692_; lean_object* v_params_693_; lean_object* v_value_694_; lean_object* v___y_696_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v_decl_691_ = lean_ctor_get(v_code_683_, 0);
lean_inc_ref(v_decl_691_);
v_k_692_ = lean_ctor_get(v_code_683_, 1);
lean_inc_ref(v_k_692_);
lean_dec_ref_known(v_code_683_, 2);
v_params_693_ = lean_ctor_get(v_decl_691_, 2);
lean_inc_ref(v_params_693_);
v_value_694_ = lean_ctor_get(v_decl_691_, 4);
lean_inc_ref(v_value_694_);
lean_dec_ref(v_decl_691_);
v___x_699_ = lean_unsigned_to_nat(0u);
v___x_700_ = lean_array_get_size(v_params_693_);
v___x_701_ = lean_nat_dec_lt(v___x_699_, v___x_700_);
if (v___x_701_ == 0)
{
lean_dec_ref(v_params_693_);
v___y_696_ = v_acc_684_;
goto v___jp_695_;
}
else
{
uint8_t v___x_702_; 
v___x_702_ = lean_nat_dec_le(v___x_700_, v___x_700_);
if (v___x_702_ == 0)
{
if (v___x_701_ == 0)
{
lean_dec_ref(v_params_693_);
v___y_696_ = v_acc_684_;
goto v___jp_695_;
}
else
{
size_t v___x_703_; size_t v___x_704_; lean_object* v___x_705_; 
v___x_703_ = ((size_t)0ULL);
v___x_704_ = lean_usize_of_nat(v___x_700_);
v___x_705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_693_, v___x_703_, v___x_704_, v_acc_684_);
lean_dec_ref(v_params_693_);
v___y_696_ = v___x_705_;
goto v___jp_695_;
}
}
else
{
size_t v___x_706_; size_t v___x_707_; lean_object* v___x_708_; 
v___x_706_ = ((size_t)0ULL);
v___x_707_ = lean_usize_of_nat(v___x_700_);
v___x_708_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_693_, v___x_706_, v___x_707_, v_acc_684_);
lean_dec_ref(v_params_693_);
v___y_696_ = v___x_708_;
goto v___jp_695_;
}
}
v___jp_695_:
{
lean_object* v_acc_697_; 
v_acc_697_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v_value_694_, v___y_696_);
v_code_683_ = v_k_692_;
v_acc_684_ = v_acc_697_;
goto _start;
}
}
case 4:
{
lean_object* v_cases_709_; lean_object* v_alts_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_cases_709_ = lean_ctor_get(v_code_683_, 0);
lean_inc_ref(v_cases_709_);
lean_dec_ref_known(v_code_683_, 1);
v_alts_710_ = lean_ctor_get(v_cases_709_, 3);
lean_inc_ref(v_alts_710_);
lean_dec_ref(v_cases_709_);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = lean_array_get_size(v_alts_710_);
v___x_713_ = lean_nat_dec_lt(v___x_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_dec_ref(v_alts_710_);
return v_acc_684_;
}
else
{
uint8_t v___x_714_; 
v___x_714_ = lean_nat_dec_le(v___x_712_, v___x_712_);
if (v___x_714_ == 0)
{
if (v___x_713_ == 0)
{
lean_dec_ref(v_alts_710_);
return v_acc_684_;
}
else
{
size_t v___x_715_; size_t v___x_716_; lean_object* v___x_717_; 
v___x_715_ = ((size_t)0ULL);
v___x_716_ = lean_usize_of_nat(v___x_712_);
v___x_717_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(v_alts_710_, v___x_715_, v___x_716_, v_acc_684_);
lean_dec_ref(v_alts_710_);
return v___x_717_;
}
}
else
{
size_t v___x_718_; size_t v___x_719_; lean_object* v___x_720_; 
v___x_718_ = ((size_t)0ULL);
v___x_719_ = lean_usize_of_nat(v___x_712_);
v___x_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(v_alts_710_, v___x_718_, v___x_719_, v_acc_684_);
lean_dec_ref(v_alts_710_);
return v___x_720_;
}
}
}
case 7:
{
lean_object* v_k_721_; 
v_k_721_ = lean_ctor_get(v_code_683_, 3);
lean_inc_ref(v_k_721_);
lean_dec_ref_known(v_code_683_, 4);
v_code_683_ = v_k_721_;
goto _start;
}
case 8:
{
lean_object* v_k_723_; 
v_k_723_ = lean_ctor_get(v_code_683_, 3);
lean_inc_ref(v_k_723_);
lean_dec_ref_known(v_code_683_, 4);
v_code_683_ = v_k_723_;
goto _start;
}
case 9:
{
lean_object* v_k_725_; 
v_k_725_ = lean_ctor_get(v_code_683_, 5);
lean_inc_ref(v_k_725_);
lean_dec_ref_known(v_code_683_, 6);
v_code_683_ = v_k_725_;
goto _start;
}
case 10:
{
lean_object* v_k_727_; 
v_k_727_ = lean_ctor_get(v_code_683_, 2);
lean_inc_ref(v_k_727_);
lean_dec_ref_known(v_code_683_, 3);
v_code_683_ = v_k_727_;
goto _start;
}
case 11:
{
lean_object* v_k_729_; 
v_k_729_ = lean_ctor_get(v_code_683_, 2);
lean_inc_ref(v_k_729_);
lean_dec_ref_known(v_code_683_, 3);
v_code_683_ = v_k_729_;
goto _start;
}
case 12:
{
lean_object* v_k_731_; 
v_k_731_ = lean_ctor_get(v_code_683_, 3);
lean_inc_ref(v_k_731_);
lean_dec_ref_known(v_code_683_, 4);
v_code_683_ = v_k_731_;
goto _start;
}
case 13:
{
lean_object* v_k_733_; 
v_k_733_ = lean_ctor_get(v_code_683_, 1);
lean_inc_ref(v_k_733_);
lean_dec_ref_known(v_code_683_, 2);
v_code_683_ = v_k_733_;
goto _start;
}
default: 
{
lean_dec_ref(v_code_683_);
return v_acc_684_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(lean_object* v_as_735_, size_t v_i_736_, size_t v_stop_737_, lean_object* v_b_738_){
_start:
{
lean_object* v___y_740_; uint8_t v___x_745_; 
v___x_745_ = lean_usize_dec_eq(v_i_736_, v_stop_737_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; 
v___x_746_ = lean_array_uget_borrowed(v_as_735_, v_i_736_);
switch(lean_obj_tag(v___x_746_))
{
case 0:
{
lean_object* v_code_747_; 
v_code_747_ = lean_ctor_get(v___x_746_, 2);
lean_inc_ref(v_code_747_);
v___y_740_ = v_code_747_;
goto v___jp_739_;
}
case 1:
{
lean_object* v_code_748_; 
v_code_748_ = lean_ctor_get(v___x_746_, 1);
lean_inc_ref(v_code_748_);
v___y_740_ = v_code_748_;
goto v___jp_739_;
}
default: 
{
lean_object* v_code_749_; 
v_code_749_ = lean_ctor_get(v___x_746_, 0);
lean_inc_ref(v_code_749_);
v___y_740_ = v_code_749_;
goto v___jp_739_;
}
}
}
else
{
return v_b_738_;
}
v___jp_739_:
{
lean_object* v___x_741_; size_t v___x_742_; size_t v___x_743_; 
v___x_741_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v___y_740_, v_b_738_);
v___x_742_ = ((size_t)1ULL);
v___x_743_ = lean_usize_add(v_i_736_, v___x_742_);
v_i_736_ = v___x_743_;
v_b_738_ = v___x_741_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1___boxed(lean_object* v_as_750_, lean_object* v_i_751_, lean_object* v_stop_752_, lean_object* v_b_753_){
_start:
{
size_t v_i_boxed_754_; size_t v_stop_boxed_755_; lean_object* v_res_756_; 
v_i_boxed_754_ = lean_unbox_usize(v_i_751_);
lean_dec(v_i_751_);
v_stop_boxed_755_ = lean_unbox_usize(v_stop_752_);
lean_dec(v_stop_752_);
v_res_756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(v_as_750_, v_i_boxed_754_, v_stop_boxed_755_, v_b_753_);
lean_dec_ref(v_as_750_);
return v_res_756_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(lean_object* v_target_757_, lean_object* v_x_758_){
_start:
{
switch(lean_obj_tag(v_x_758_))
{
case 0:
{
lean_object* v_k_759_; 
v_k_759_ = lean_ctor_get(v_x_758_, 1);
v_x_758_ = v_k_759_;
goto _start;
}
case 2:
{
lean_object* v_decl_761_; lean_object* v_k_762_; lean_object* v_value_763_; uint8_t v___x_764_; 
v_decl_761_ = lean_ctor_get(v_x_758_, 0);
v_k_762_ = lean_ctor_get(v_x_758_, 1);
v_value_763_ = lean_ctor_get(v_decl_761_, 4);
v___x_764_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_target_757_, v_value_763_);
if (v___x_764_ == 0)
{
v_x_758_ = v_k_762_;
goto _start;
}
else
{
return v___x_764_;
}
}
case 3:
{
lean_object* v_fvarId_766_; uint8_t v___x_767_; 
v_fvarId_766_ = lean_ctor_get(v_x_758_, 0);
v___x_767_ = lean_name_eq(v_fvarId_766_, v_target_757_);
return v___x_767_;
}
case 4:
{
lean_object* v_cases_768_; lean_object* v_alts_769_; lean_object* v___x_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v_cases_768_ = lean_ctor_get(v_x_758_, 0);
v_alts_769_ = lean_ctor_get(v_cases_768_, 3);
v___x_770_ = lean_unsigned_to_nat(0u);
v___x_771_ = lean_array_get_size(v_alts_769_);
v___x_772_ = lean_nat_dec_lt(v___x_770_, v___x_771_);
if (v___x_772_ == 0)
{
return v___x_772_;
}
else
{
if (v___x_772_ == 0)
{
return v___x_772_;
}
else
{
size_t v___x_773_; size_t v___x_774_; uint8_t v___x_775_; 
v___x_773_ = ((size_t)0ULL);
v___x_774_ = lean_usize_of_nat(v___x_771_);
v___x_775_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(v_target_757_, v_alts_769_, v___x_773_, v___x_774_);
return v___x_775_;
}
}
}
case 7:
{
lean_object* v_k_776_; 
v_k_776_ = lean_ctor_get(v_x_758_, 3);
v_x_758_ = v_k_776_;
goto _start;
}
case 8:
{
lean_object* v_k_778_; 
v_k_778_ = lean_ctor_get(v_x_758_, 3);
v_x_758_ = v_k_778_;
goto _start;
}
case 9:
{
lean_object* v_k_780_; 
v_k_780_ = lean_ctor_get(v_x_758_, 5);
v_x_758_ = v_k_780_;
goto _start;
}
case 10:
{
lean_object* v_k_782_; 
v_k_782_ = lean_ctor_get(v_x_758_, 2);
v_x_758_ = v_k_782_;
goto _start;
}
case 11:
{
lean_object* v_k_784_; 
v_k_784_ = lean_ctor_get(v_x_758_, 2);
v_x_758_ = v_k_784_;
goto _start;
}
case 12:
{
lean_object* v_k_786_; 
v_k_786_ = lean_ctor_get(v_x_758_, 3);
v_x_758_ = v_k_786_;
goto _start;
}
case 13:
{
lean_object* v_k_788_; 
v_k_788_ = lean_ctor_get(v_x_758_, 1);
v_x_758_ = v_k_788_;
goto _start;
}
default: 
{
uint8_t v___x_790_; 
v___x_790_ = 0;
return v___x_790_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(lean_object* v_target_791_, lean_object* v_as_792_, size_t v_i_793_, size_t v_stop_794_){
_start:
{
uint8_t v___x_795_; 
v___x_795_ = lean_usize_dec_eq(v_i_793_, v_stop_794_);
if (v___x_795_ == 0)
{
uint8_t v___x_796_; lean_object* v___y_798_; lean_object* v___x_803_; 
v___x_796_ = 1;
v___x_803_ = lean_array_uget_borrowed(v_as_792_, v_i_793_);
switch(lean_obj_tag(v___x_803_))
{
case 0:
{
lean_object* v_code_804_; 
v_code_804_ = lean_ctor_get(v___x_803_, 2);
v___y_798_ = v_code_804_;
goto v___jp_797_;
}
case 1:
{
lean_object* v_code_805_; 
v_code_805_ = lean_ctor_get(v___x_803_, 1);
v___y_798_ = v_code_805_;
goto v___jp_797_;
}
default: 
{
lean_object* v_code_806_; 
v_code_806_ = lean_ctor_get(v___x_803_, 0);
v___y_798_ = v_code_806_;
goto v___jp_797_;
}
}
v___jp_797_:
{
uint8_t v___x_799_; 
v___x_799_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_target_791_, v___y_798_);
if (v___x_799_ == 0)
{
size_t v___x_800_; size_t v___x_801_; 
v___x_800_ = ((size_t)1ULL);
v___x_801_ = lean_usize_add(v_i_793_, v___x_800_);
v_i_793_ = v___x_801_;
goto _start;
}
else
{
return v___x_796_;
}
}
}
else
{
uint8_t v___x_807_; 
v___x_807_ = 0;
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0___boxed(lean_object* v_target_808_, lean_object* v_as_809_, lean_object* v_i_810_, lean_object* v_stop_811_){
_start:
{
size_t v_i_boxed_812_; size_t v_stop_boxed_813_; uint8_t v_res_814_; lean_object* v_r_815_; 
v_i_boxed_812_ = lean_unbox_usize(v_i_810_);
lean_dec(v_i_810_);
v_stop_boxed_813_ = lean_unbox_usize(v_stop_811_);
lean_dec(v_stop_811_);
v_res_814_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(v_target_808_, v_as_809_, v_i_boxed_812_, v_stop_boxed_813_);
lean_dec_ref(v_as_809_);
lean_dec(v_target_808_);
v_r_815_ = lean_box(v_res_814_);
return v_r_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo___boxed(lean_object* v_target_816_, lean_object* v_x_817_){
_start:
{
uint8_t v_res_818_; lean_object* v_r_819_; 
v_res_818_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_target_816_, v_x_817_);
lean_dec_ref(v_x_817_);
lean_dec(v_target_816_);
v_r_819_ = lean_box(v_res_818_);
return v_r_819_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__0));
v___x_822_ = l_Lean_stringToMessageData(v___x_821_);
return v___x_822_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3(void){
_start:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__2));
v___x_825_ = l_Lean_stringToMessageData(v___x_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(lean_object* v_x_826_, lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
uint64_t v_v_831_; 
switch(lean_obj_tag(v_x_826_))
{
case 0:
{
lean_object* v_val_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_857_; 
v_val_836_ = lean_ctor_get(v_x_826_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v_x_826_);
if (v_isSharedCheck_857_ == 0)
{
v___x_838_ = v_x_826_;
v_isShared_839_ = v_isSharedCheck_857_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_val_836_);
lean_dec(v_x_826_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_857_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = lean_cstr_to_nat("4294967296");
v___x_841_ = lean_nat_dec_lt(v_val_836_, v___x_840_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_845_; 
v___x_842_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1);
v___x_843_ = l_Nat_reprFast(v_val_836_);
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 3);
lean_ctor_set(v___x_838_, 0, v___x_843_);
v___x_845_ = v___x_838_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_843_);
v___x_845_ = v_reuseFailAlloc_851_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_846_ = l_Lean_MessageData_ofFormat(v___x_845_);
v___x_847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_842_);
lean_ctor_set(v___x_847_, 1, v___x_846_);
v___x_848_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3);
v___x_849_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_847_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_849_, v_a_827_, v_a_828_);
return v___x_850_;
}
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_852_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_val_836_);
v___x_853_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_852_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_853_);
v___x_855_ = v___x_838_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
case 1:
{
lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_865_; 
v_isSharedCheck_865_ = !lean_is_exclusive(v_x_826_);
if (v_isSharedCheck_865_ == 0)
{
lean_object* v_unused_866_; 
v_unused_866_ = lean_ctor_get(v_x_826_, 0);
lean_dec(v_unused_866_);
v___x_859_ = v_x_826_;
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
else
{
lean_dec(v_x_826_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 0);
lean_ctor_set(v___x_859_, 0, v___x_861_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
case 2:
{
uint8_t v_val_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_val_867_ = lean_ctor_get_uint8(v_x_826_, 0);
lean_dec_ref_known(v_x_826_, 0);
v___x_868_ = lean_uint8_to_nat(v_val_867_);
v___x_869_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_868_);
v___x_870_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_869_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
case 3:
{
uint16_t v_val_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_val_872_ = lean_ctor_get_uint16(v_x_826_, 0);
lean_dec_ref_known(v_x_826_, 0);
v___x_873_ = lean_uint16_to_nat(v_val_872_);
v___x_874_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_873_);
v___x_875_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_874_);
v___x_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
return v___x_876_;
}
case 4:
{
uint32_t v_val_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v_val_877_ = lean_ctor_get_uint32(v_x_826_, 0);
lean_dec_ref_known(v_x_826_, 0);
v___x_878_ = lean_uint32_to_nat(v_val_877_);
v___x_879_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_878_);
v___x_880_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_879_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
return v___x_881_;
}
default: 
{
uint64_t v_val_882_; 
v_val_882_ = lean_ctor_get_uint64(v_x_826_, 0);
lean_dec_ref(v_x_826_);
v_v_831_ = v_val_882_;
goto v___jp_830_;
}
}
v___jp_830_:
{
lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_uint64_to_nat(v_v_831_);
v___x_833_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_832_);
v___x_834_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_833_);
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___boxed(lean_object* v_x_883_, lean_object* v_a_884_, lean_object* v_a_885_, lean_object* v_a_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_x_883_, v_a_884_, v_a_885_);
lean_dec(v_a_885_);
lean_dec_ref(v_a_884_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr(lean_object* v_x_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_x_888_, v_a_891_, v_a_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___boxed(lean_object* v_x_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr(v_x_895_, v_a_896_, v_a_897_, v_a_898_, v_a_899_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(lean_object* v___x_902_, lean_object* v_byteLen_903_, lean_object* v_bytes_904_, lean_object* v_range_905_, lean_object* v_b_906_, lean_object* v_i_907_){
_start:
{
lean_object* v_stop_909_; lean_object* v_step_910_; lean_object* v_a_912_; uint8_t v___x_915_; 
v_stop_909_ = lean_ctor_get(v_range_905_, 1);
v_step_910_ = lean_ctor_get(v_range_905_, 2);
v___x_915_ = lean_nat_dec_lt(v_i_907_, v_stop_909_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; 
lean_dec(v_i_907_);
v___x_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_916_, 0, v_b_906_);
return v___x_916_;
}
else
{
lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_917_ = lean_nat_add(v___x_902_, v_i_907_);
v___x_918_ = lean_nat_dec_lt(v___x_917_, v_byteLen_903_);
if (v___x_918_ == 0)
{
lean_dec(v___x_917_);
v_a_912_ = v_b_906_;
goto v___jp_911_;
}
else
{
lean_object* v___x_919_; uint8_t v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_919_ = lean_unsigned_to_nat(31u);
v___x_920_ = lean_byte_array_get(v_bytes_904_, v___x_917_);
lean_dec(v___x_917_);
v___x_921_ = lean_uint8_to_nat(v___x_920_);
v___x_922_ = lean_nat_sub(v___x_919_, v_i_907_);
v___x_923_ = lean_unsigned_to_nat(8u);
v___x_924_ = lean_nat_mul(v___x_922_, v___x_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_unsigned_to_nat(2u);
v___x_926_ = lean_nat_pow(v___x_925_, v___x_924_);
lean_dec(v___x_924_);
v___x_927_ = lean_nat_mul(v___x_921_, v___x_926_);
lean_dec(v___x_926_);
v___x_928_ = lean_nat_add(v_b_906_, v___x_927_);
lean_dec(v___x_927_);
lean_dec(v_b_906_);
v_a_912_ = v___x_928_;
goto v___jp_911_;
}
}
v___jp_911_:
{
lean_object* v___x_913_; 
v___x_913_ = lean_nat_add(v_i_907_, v_step_910_);
lean_dec(v_i_907_);
v_b_906_ = v_a_912_;
v_i_907_ = v___x_913_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg___boxed(lean_object* v___x_929_, lean_object* v_byteLen_930_, lean_object* v_bytes_931_, lean_object* v_range_932_, lean_object* v_b_933_, lean_object* v_i_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(v___x_929_, v_byteLen_930_, v_bytes_931_, v_range_932_, v_b_933_, v_i_934_);
lean_dec_ref(v_range_932_);
lean_dec_ref(v_bytes_931_);
lean_dec(v_byteLen_930_);
lean_dec(v___x_929_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(lean_object* v_byteLen_941_, lean_object* v_bytes_942_, lean_object* v___x_943_, lean_object* v_range_944_, lean_object* v_b_945_, lean_object* v_i_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_stop_952_; lean_object* v_step_953_; uint8_t v___x_954_; 
v_stop_952_ = lean_ctor_get(v_range_944_, 1);
v_step_953_ = lean_ctor_get(v_range_944_, 2);
v___x_954_ = lean_nat_dec_lt(v_i_946_, v_stop_952_);
if (v___x_954_ == 0)
{
lean_object* v___x_955_; 
lean_dec(v_i_946_);
lean_dec_ref(v___x_943_);
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v_b_945_);
return v___x_955_;
}
else
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_995_; 
v___x_956_ = lean_unsigned_to_nat(32u);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_nat_mul(v_i_946_, v___x_956_);
v___x_959_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___closed__0));
v___x_960_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(v___x_958_, v_byteLen_941_, v_bytes_942_, v___x_959_, v___x_957_, v___x_957_);
v_a_961_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_995_ == 0)
{
v___x_963_ = v___x_960_;
v_isShared_964_ = v_isSharedCheck_995_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_960_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_995_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_965_; lean_object* v_stmts_966_; lean_object* v_fresh_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_994_; 
v___x_965_ = lean_st_ref_take(v___y_948_);
v_stmts_966_ = lean_ctor_get(v___x_965_, 0);
v_fresh_967_ = lean_ctor_get(v___x_965_, 1);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_994_ == 0)
{
v___x_969_ = v___x_965_;
v_isShared_970_ = v_isSharedCheck_994_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_fresh_967_);
lean_inc(v_stmts_966_);
lean_dec(v___x_965_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_994_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_971_ = lean_unsigned_to_nat(2u);
v___x_972_ = lean_mk_empty_array_with_capacity(v___x_971_);
lean_inc_ref(v___x_943_);
lean_inc_ref(v___x_972_);
v___x_973_ = lean_array_push(v___x_972_, v___x_943_);
v___x_974_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_975_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_976_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_958_);
v___x_977_ = lean_array_push(v___x_973_, v___x_976_);
v___x_978_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_978_, 0, v___x_974_);
lean_ctor_set(v___x_978_, 1, v___x_977_);
v___x_979_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_a_961_);
v___x_980_ = lean_array_push(v___x_972_, v___x_978_);
v___x_981_ = lean_array_push(v___x_980_, v___x_979_);
v___x_982_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_975_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
if (v_isShared_964_ == 0)
{
lean_ctor_set_tag(v___x_963_, 3);
lean_ctor_set(v___x_963_, 0, v___x_982_);
v___x_984_ = v___x_963_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_993_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_array_push(v_stmts_966_, v___x_984_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 0, v___x_985_);
v___x_987_ = v___x_969_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_fresh_967_);
v___x_987_ = v_reuseFailAlloc_992_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = lean_st_ref_set(v___y_948_, v___x_987_);
v___x_989_ = lean_box(0);
v___x_990_ = lean_nat_add(v_i_946_, v_step_953_);
lean_dec(v_i_946_);
v_b_945_ = v___x_989_;
v_i_946_ = v___x_990_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___boxed(lean_object* v_byteLen_996_, lean_object* v_bytes_997_, lean_object* v___x_998_, lean_object* v_range_999_, lean_object* v_b_1000_, lean_object* v_i_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(v_byteLen_996_, v_bytes_997_, v___x_998_, v_range_999_, v_b_1000_, v_i_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec_ref(v_range_999_);
lean_dec_ref(v_bytes_997_);
lean_dec(v_byteLen_996_);
return v_res_1007_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0(void){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = lean_unsigned_to_nat(249u);
v___x_1010_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___x_1009_, v___x_1008_, v___x_1008_);
return v___x_1010_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = lean_unsigned_to_nat(96u);
v___x_1012_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1011_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(128u);
v___x_1014_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit(lean_object* v_lhsId_1015_, lean_object* v_s_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v___x_1022_; lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1172_; 
v___x_1022_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_1018_);
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1172_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1172_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_bytes_1027_; lean_object* v_byteLen_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v_dataWords_1032_; lean_object* v___x_1033_; lean_object* v_nwords_1034_; lean_object* v___x_1035_; lean_object* v_fst_1036_; lean_object* v_snd_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1171_; 
v_bytes_1027_ = lean_string_to_utf8(v_s_1016_);
v_byteLen_1028_ = lean_byte_array_size(v_bytes_1027_);
v___x_1029_ = lean_unsigned_to_nat(31u);
v___x_1030_ = lean_nat_add(v_byteLen_1028_, v___x_1029_);
v___x_1031_ = lean_unsigned_to_nat(5u);
v_dataWords_1032_ = lean_nat_shiftr(v___x_1030_, v___x_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_unsigned_to_nat(4u);
v_nwords_1034_ = lean_nat_add(v___x_1033_, v_dataWords_1032_);
v___x_1035_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1034_, v_a_1023_);
v_fst_1036_ = lean_ctor_get(v___x_1035_, 0);
v_snd_1037_ = lean_ctor_get(v___x_1035_, 1);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1039_ = v___x_1035_;
v_isShared_1040_ = v_isSharedCheck_1171_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_snd_1037_);
lean_inc(v_fst_1036_);
lean_dec(v___x_1035_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1171_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1041_; lean_object* v_stmts_1042_; lean_object* v_fresh_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1170_; 
v___x_1041_ = lean_st_ref_take(v_a_1018_);
v_stmts_1042_ = lean_ctor_get(v___x_1041_, 0);
v_fresh_1043_ = lean_ctor_get(v___x_1041_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1045_ = v___x_1041_;
v_isShared_1046_ = v_isSharedCheck_1170_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_fresh_1043_);
lean_inc(v_stmts_1042_);
lean_dec(v___x_1041_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1170_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1047_; lean_object* v___x_1049_; 
v___x_1047_ = l_Array_append___redArg(v_stmts_1042_, v_fst_1036_);
lean_dec(v_fst_1036_);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 0, v___x_1047_);
v___x_1049_ = v___x_1045_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_fresh_1043_);
v___x_1049_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v_stmts_1054_; lean_object* v_fresh_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1168_; 
v___x_1050_ = lean_st_ref_set(v_a_1018_, v___x_1049_);
v___x_1051_ = lean_unsigned_to_nat(0u);
v___x_1052_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0);
v___x_1053_ = lean_st_ref_take(v_a_1018_);
v_stmts_1054_ = lean_ctor_get(v___x_1053_, 0);
v_fresh_1055_ = lean_ctor_get(v___x_1053_, 1);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1057_ = v___x_1053_;
v_isShared_1058_ = v_isSharedCheck_1168_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_fresh_1055_);
lean_inc(v_stmts_1054_);
lean_dec(v___x_1053_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1168_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1059_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1060_ = lean_unsigned_to_nat(2u);
v___x_1061_ = lean_mk_empty_array_with_capacity(v___x_1060_);
lean_inc(v_snd_1037_);
lean_inc_ref(v___x_1061_);
v___x_1062_ = lean_array_push(v___x_1061_, v_snd_1037_);
lean_inc_ref(v___x_1062_);
v___x_1063_ = lean_array_push(v___x_1062_, v___x_1052_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set_tag(v___x_1039_, 3);
lean_ctor_set(v___x_1039_, 1, v___x_1063_);
lean_ctor_set(v___x_1039_, 0, v___x_1059_);
v___x_1065_ = v___x_1039_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
lean_object* v___x_1067_; 
if (v_isShared_1026_ == 0)
{
lean_ctor_set_tag(v___x_1025_, 3);
lean_ctor_set(v___x_1025_, 0, v___x_1065_);
v___x_1067_ = v___x_1025_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1065_);
v___x_1067_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1068_ = lean_array_push(v_stmts_1054_, v___x_1067_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1068_);
v___x_1070_ = v___x_1057_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1068_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_fresh_1055_);
v___x_1070_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v_stmts_1073_; lean_object* v_fresh_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1164_; 
v___x_1071_ = lean_st_ref_set(v_a_1018_, v___x_1070_);
v___x_1072_ = lean_st_ref_take(v_a_1018_);
v_stmts_1073_ = lean_ctor_get(v___x_1072_, 0);
v_fresh_1074_ = lean_ctor_get(v___x_1072_, 1);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1076_ = v___x_1072_;
v_isShared_1077_ = v_isSharedCheck_1164_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_fresh_1074_);
lean_inc(v_stmts_1073_);
lean_dec(v___x_1072_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1164_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
v___x_1078_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_1079_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
lean_inc_ref(v___x_1062_);
v___x_1080_ = lean_array_push(v___x_1062_, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1078_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_byteLen_1028_);
lean_inc_ref(v___x_1061_);
v___x_1083_ = lean_array_push(v___x_1061_, v___x_1081_);
lean_inc_ref(v___x_1082_);
v___x_1084_ = lean_array_push(v___x_1083_, v___x_1082_);
v___x_1085_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1059_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
v___x_1087_ = lean_array_push(v_stmts_1073_, v___x_1086_);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 0, v___x_1087_);
v___x_1089_ = v___x_1076_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_fresh_1074_);
v___x_1089_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_stmts_1092_; lean_object* v_fresh_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1162_; 
v___x_1090_ = lean_st_ref_set(v_a_1018_, v___x_1089_);
v___x_1091_ = lean_st_ref_take(v_a_1018_);
v_stmts_1092_ = lean_ctor_get(v___x_1091_, 0);
v_fresh_1093_ = lean_ctor_get(v___x_1091_, 1);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1095_ = v___x_1091_;
v_isShared_1096_ = v_isSharedCheck_1162_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_fresh_1093_);
lean_inc(v_stmts_1092_);
lean_dec(v___x_1091_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1162_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1097_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
lean_inc_ref(v___x_1062_);
v___x_1098_ = lean_array_push(v___x_1062_, v___x_1097_);
v___x_1099_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1078_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
lean_inc_ref(v___x_1061_);
v___x_1100_ = lean_array_push(v___x_1061_, v___x_1099_);
v___x_1101_ = lean_array_push(v___x_1100_, v___x_1082_);
v___x_1102_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1059_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1102_);
v___x_1104_ = lean_array_push(v_stmts_1092_, v___x_1103_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1104_);
v___x_1106_ = v___x_1095_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_fresh_1093_);
v___x_1106_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v_stmts_1109_; lean_object* v_fresh_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1160_; 
v___x_1107_ = lean_st_ref_set(v_a_1018_, v___x_1106_);
v___x_1108_ = lean_st_ref_take(v_a_1018_);
v_stmts_1109_ = lean_ctor_get(v___x_1108_, 0);
v_fresh_1110_ = lean_ctor_get(v___x_1108_, 1);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1112_ = v___x_1108_;
v_isShared_1113_ = v_isSharedCheck_1160_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_fresh_1110_);
lean_inc(v_stmts_1109_);
lean_dec(v___x_1108_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1160_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1114_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1);
lean_inc_ref(v___x_1062_);
v___x_1115_ = lean_array_push(v___x_1062_, v___x_1114_);
v___x_1116_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1078_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_string_length(v_s_1016_);
v___x_1118_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1117_);
v___x_1119_ = lean_array_push(v___x_1061_, v___x_1116_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1118_);
v___x_1121_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1059_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
v___x_1122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
v___x_1123_ = lean_array_push(v_stmts_1109_, v___x_1122_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 0, v___x_1123_);
v___x_1125_ = v___x_1112_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1123_);
lean_ctor_set(v_reuseFailAlloc_1159_, 1, v_fresh_1110_);
v___x_1125_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1126_ = lean_st_ref_set(v_a_1018_, v___x_1125_);
v___x_1127_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2);
v___x_1128_ = lean_array_push(v___x_1062_, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1078_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = lean_unsigned_to_nat(1u);
v___x_1131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1051_);
lean_ctor_set(v___x_1131_, 1, v_dataWords_1032_);
lean_ctor_set(v___x_1131_, 2, v___x_1130_);
v___x_1132_ = lean_box(0);
v___x_1133_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(v_byteLen_1028_, v_bytes_1027_, v___x_1129_, v___x_1131_, v___x_1132_, v___x_1051_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
lean_dec_ref_known(v___x_1131_, 3);
lean_dec_ref(v_bytes_1027_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1157_; 
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1157_ == 0)
{
lean_object* v_unused_1158_; 
v_unused_1158_ = lean_ctor_get(v___x_1133_, 0);
lean_dec(v_unused_1158_);
v___x_1135_ = v___x_1133_;
v_isShared_1136_ = v_isSharedCheck_1157_;
goto v_resetjp_1134_;
}
else
{
lean_dec(v___x_1133_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1157_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v_stmts_1138_; lean_object* v_fresh_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1156_; 
v___x_1137_ = lean_st_ref_take(v_a_1018_);
v_stmts_1138_ = lean_ctor_get(v___x_1137_, 0);
v_fresh_1139_ = lean_ctor_get(v___x_1137_, 1);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1141_ = v___x_1137_;
v_isShared_1142_ = v_isSharedCheck_1156_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_fresh_1139_);
lean_inc(v_stmts_1138_);
lean_dec(v___x_1137_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1156_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1143_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1015_);
v___x_1144_ = lean_mk_empty_array_with_capacity(v___x_1130_);
v___x_1145_ = lean_array_push(v___x_1144_, v___x_1143_);
v___x_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1146_, 0, v_snd_1037_);
v___x_1147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_array_push(v_stmts_1138_, v___x_1147_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1148_);
v___x_1150_ = v___x_1141_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1155_, 1, v_fresh_1139_);
v___x_1150_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_st_ref_set(v_a_1018_, v___x_1150_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1132_);
v___x_1153_ = v___x_1135_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1132_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
else
{
lean_dec(v_snd_1037_);
lean_dec_ref(v_lhsId_1015_);
return v___x_1133_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit___boxed(lean_object* v_lhsId_1173_, lean_object* v_s_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_Compiler_LCNF_EmitYul_emitStringLit(v_lhsId_1173_, v_s_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
lean_dec(v_a_1178_);
lean_dec_ref(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
lean_dec_ref(v_s_1174_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0(lean_object* v___x_1181_, lean_object* v_byteLen_1182_, lean_object* v_bytes_1183_, lean_object* v_range_1184_, lean_object* v_b_1185_, lean_object* v_i_1186_, lean_object* v_hs_1187_, lean_object* v_hl_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(v___x_1181_, v_byteLen_1182_, v_bytes_1183_, v_range_1184_, v_b_1185_, v_i_1186_);
return v___x_1194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___boxed(lean_object* v___x_1195_, lean_object* v_byteLen_1196_, lean_object* v_bytes_1197_, lean_object* v_range_1198_, lean_object* v_b_1199_, lean_object* v_i_1200_, lean_object* v_hs_1201_, lean_object* v_hl_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0(v___x_1195_, v_byteLen_1196_, v_bytes_1197_, v_range_1198_, v_b_1199_, v_i_1200_, v_hs_1201_, v_hl_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec_ref(v_range_1198_);
lean_dec_ref(v_bytes_1197_);
lean_dec(v_byteLen_1196_);
lean_dec(v___x_1195_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1(lean_object* v_byteLen_1209_, lean_object* v_bytes_1210_, lean_object* v___x_1211_, lean_object* v_range_1212_, lean_object* v_b_1213_, lean_object* v_i_1214_, lean_object* v_hs_1215_, lean_object* v_hl_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(v_byteLen_1209_, v_bytes_1210_, v___x_1211_, v_range_1212_, v_b_1213_, v_i_1214_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___boxed(lean_object* v_byteLen_1223_, lean_object* v_bytes_1224_, lean_object* v___x_1225_, lean_object* v_range_1226_, lean_object* v_b_1227_, lean_object* v_i_1228_, lean_object* v_hs_1229_, lean_object* v_hl_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1(v_byteLen_1223_, v_bytes_1224_, v___x_1225_, v_range_1226_, v_b_1227_, v_i_1228_, v_hs_1229_, v_hl_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec_ref(v_range_1226_);
lean_dec_ref(v_bytes_1224_);
lean_dec(v_byteLen_1223_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(lean_object* v_args_1237_, lean_object* v_snd_1238_, lean_object* v_range_1239_, lean_object* v_b_1240_, lean_object* v_i_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v_stop_1244_; lean_object* v_step_1245_; uint8_t v___x_1246_; 
v_stop_1244_ = lean_ctor_get(v_range_1239_, 1);
v_step_1245_ = lean_ctor_get(v_range_1239_, 2);
v___x_1246_ = lean_nat_dec_lt(v_i_1241_, v_stop_1244_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; 
lean_dec(v_i_1241_);
lean_dec_ref(v_snd_1238_);
v___x_1247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1247_, 0, v_b_1240_);
return v___x_1247_;
}
else
{
lean_object* v___x_1248_; lean_object* v_stmts_1249_; lean_object* v_fresh_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1266_; 
v___x_1248_ = lean_st_ref_take(v___y_1242_);
v_stmts_1249_ = lean_ctor_get(v___x_1248_, 0);
v_fresh_1250_ = lean_ctor_get(v___x_1248_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1252_ = v___x_1248_;
v_isShared_1253_ = v_isSharedCheck_1266_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_fresh_1250_);
lean_inc(v_stmts_1249_);
lean_dec(v___x_1248_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1266_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1254_ = lean_box(0);
v___x_1255_ = lean_array_get_borrowed(v___x_1254_, v_args_1237_, v_i_1241_);
lean_inc(v___x_1255_);
v___x_1256_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_1255_);
lean_inc_ref(v_snd_1238_);
v___x_1257_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1238_, v_i_1241_, v___x_1256_);
v___x_1258_ = lean_array_push(v_stmts_1249_, v___x_1257_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 0, v___x_1258_);
v___x_1260_ = v___x_1252_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1258_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v_fresh_1250_);
v___x_1260_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = lean_st_ref_set(v___y_1242_, v___x_1260_);
v___x_1262_ = lean_box(0);
v___x_1263_ = lean_nat_add(v_i_1241_, v_step_1245_);
lean_dec(v_i_1241_);
v_b_1240_ = v___x_1262_;
v_i_1241_ = v___x_1263_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg___boxed(lean_object* v_args_1267_, lean_object* v_snd_1268_, lean_object* v_range_1269_, lean_object* v_b_1270_, lean_object* v_i_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1267_, v_snd_1268_, v_range_1269_, v_b_1270_, v_i_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v_range_1269_);
lean_dec_ref(v_args_1267_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor(lean_object* v_lhsId_1275_, lean_object* v_info_1276_, lean_object* v_args_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_){
_start:
{
lean_object* v_cidx_1283_; lean_object* v_size_1284_; lean_object* v_usize_1285_; lean_object* v_ssize_1286_; lean_object* v___x_1287_; uint8_t v___y_1370_; uint8_t v___x_1394_; 
v_cidx_1283_ = lean_ctor_get(v_info_1276_, 1);
lean_inc(v_cidx_1283_);
v_size_1284_ = lean_ctor_get(v_info_1276_, 2);
lean_inc(v_size_1284_);
v_usize_1285_ = lean_ctor_get(v_info_1276_, 3);
lean_inc(v_usize_1285_);
v_ssize_1286_ = lean_ctor_get(v_info_1276_, 4);
lean_inc(v_ssize_1286_);
lean_dec_ref(v_info_1276_);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1394_ = lean_nat_dec_eq(v_size_1284_, v___x_1287_);
if (v___x_1394_ == 0)
{
lean_dec(v_usize_1285_);
v___y_1370_ = v___x_1394_;
goto v___jp_1369_;
}
else
{
uint8_t v___x_1395_; 
v___x_1395_ = lean_nat_dec_eq(v_usize_1285_, v___x_1287_);
lean_dec(v_usize_1285_);
v___y_1370_ = v___x_1395_;
goto v___jp_1369_;
}
v___jp_1288_:
{
lean_object* v___x_1289_; lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1368_; 
v___x_1289_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_1279_);
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1368_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1368_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1294_; lean_object* v_nwords_1295_; lean_object* v___x_1296_; lean_object* v_fst_1297_; lean_object* v_snd_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1367_; 
v___x_1294_ = lean_unsigned_to_nat(1u);
v_nwords_1295_ = lean_nat_add(v_size_1284_, v___x_1294_);
v___x_1296_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1295_, v_a_1290_);
v_fst_1297_ = lean_ctor_get(v___x_1296_, 0);
v_snd_1298_ = lean_ctor_get(v___x_1296_, 1);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1300_ = v___x_1296_;
v_isShared_1301_ = v_isSharedCheck_1367_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_snd_1298_);
lean_inc(v_fst_1297_);
lean_dec(v___x_1296_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1367_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1302_; lean_object* v_stmts_1303_; lean_object* v_fresh_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1366_; 
v___x_1302_ = lean_st_ref_take(v_a_1279_);
v_stmts_1303_ = lean_ctor_get(v___x_1302_, 0);
v_fresh_1304_ = lean_ctor_get(v___x_1302_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1306_ = v___x_1302_;
v_isShared_1307_ = v_isSharedCheck_1366_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_fresh_1304_);
lean_inc(v_stmts_1303_);
lean_dec(v___x_1302_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1366_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v___x_1310_; 
v___x_1308_ = l_Array_append___redArg(v_stmts_1303_, v_fst_1297_);
lean_dec(v_fst_1297_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1308_);
v___x_1310_ = v___x_1306_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1308_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_fresh_1304_);
v___x_1310_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v_stmts_1313_; lean_object* v_fresh_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1364_; 
v___x_1311_ = lean_st_ref_set(v_a_1279_, v___x_1310_);
v___x_1312_ = lean_st_ref_take(v_a_1279_);
v_stmts_1313_ = lean_ctor_get(v___x_1312_, 0);
v_fresh_1314_ = lean_ctor_get(v___x_1312_, 1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1316_ = v___x_1312_;
v_isShared_1317_ = v_isSharedCheck_1364_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_fresh_1314_);
lean_inc(v_stmts_1313_);
lean_dec(v___x_1312_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1364_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1325_; 
v___x_1318_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1319_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_1283_, v_size_1284_, v___x_1287_);
v___x_1320_ = lean_unsigned_to_nat(2u);
v___x_1321_ = lean_mk_empty_array_with_capacity(v___x_1320_);
lean_inc(v_snd_1298_);
v___x_1322_ = lean_array_push(v___x_1321_, v_snd_1298_);
v___x_1323_ = lean_array_push(v___x_1322_, v___x_1319_);
if (v_isShared_1301_ == 0)
{
lean_ctor_set_tag(v___x_1300_, 3);
lean_ctor_set(v___x_1300_, 1, v___x_1323_);
lean_ctor_set(v___x_1300_, 0, v___x_1318_);
v___x_1325_ = v___x_1300_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1318_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1327_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set_tag(v___x_1292_, 3);
lean_ctor_set(v___x_1292_, 0, v___x_1325_);
v___x_1327_ = v___x_1292_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1328_; lean_object* v___x_1330_; 
v___x_1328_ = lean_array_push(v_stmts_1313_, v___x_1327_);
if (v_isShared_1317_ == 0)
{
lean_ctor_set(v___x_1316_, 0, v___x_1328_);
v___x_1330_ = v___x_1316_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1328_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v_fresh_1314_);
v___x_1330_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1359_; 
v___x_1331_ = lean_st_ref_set(v_a_1279_, v___x_1330_);
v___x_1332_ = lean_array_get_size(v_args_1277_);
v___x_1333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1287_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
lean_ctor_set(v___x_1333_, 2, v___x_1294_);
v___x_1334_ = lean_box(0);
lean_inc(v_snd_1298_);
v___x_1335_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1277_, v_snd_1298_, v___x_1333_, v___x_1334_, v___x_1287_, v_a_1279_);
lean_dec_ref_known(v___x_1333_, 3);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1359_ == 0)
{
lean_object* v_unused_1360_; 
v_unused_1360_ = lean_ctor_get(v___x_1335_, 0);
lean_dec(v_unused_1360_);
v___x_1337_ = v___x_1335_;
v_isShared_1338_ = v_isSharedCheck_1359_;
goto v_resetjp_1336_;
}
else
{
lean_dec(v___x_1335_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1359_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1339_; lean_object* v_stmts_1340_; lean_object* v_fresh_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1358_; 
v___x_1339_ = lean_st_ref_take(v_a_1279_);
v_stmts_1340_ = lean_ctor_get(v___x_1339_, 0);
v_fresh_1341_ = lean_ctor_get(v___x_1339_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1343_ = v___x_1339_;
v_isShared_1344_ = v_isSharedCheck_1358_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_fresh_1341_);
lean_inc(v_stmts_1340_);
lean_dec(v___x_1339_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1358_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
v___x_1345_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1275_);
v___x_1346_ = lean_mk_empty_array_with_capacity(v___x_1294_);
v___x_1347_ = lean_array_push(v___x_1346_, v___x_1345_);
v___x_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1348_, 0, v_snd_1298_);
v___x_1349_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1347_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v___x_1350_ = lean_array_push(v_stmts_1340_, v___x_1349_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1350_);
v___x_1352_ = v___x_1343_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_fresh_1341_);
v___x_1352_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1355_; 
v___x_1353_ = lean_st_ref_set(v_a_1279_, v___x_1352_);
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 0, v___x_1334_);
v___x_1355_ = v___x_1337_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v___x_1334_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
}
}
}
}
}
}
}
}
}
v___jp_1369_:
{
if (v___y_1370_ == 0)
{
lean_dec(v_ssize_1286_);
goto v___jp_1288_;
}
else
{
uint8_t v___x_1371_; 
v___x_1371_ = lean_nat_dec_eq(v_ssize_1286_, v___x_1287_);
lean_dec(v_ssize_1286_);
if (v___x_1371_ == 0)
{
goto v___jp_1288_;
}
else
{
lean_object* v___x_1372_; lean_object* v_stmts_1373_; lean_object* v_fresh_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1393_; 
lean_dec(v_size_1284_);
v___x_1372_ = lean_st_ref_take(v_a_1279_);
v_stmts_1373_ = lean_ctor_get(v___x_1372_, 0);
v_fresh_1374_ = lean_ctor_get(v___x_1372_, 1);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1376_ = v___x_1372_;
v_isShared_1377_ = v_isSharedCheck_1393_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_fresh_1374_);
lean_inc(v_stmts_1373_);
lean_dec(v___x_1372_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1393_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1378_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1275_);
v___x_1379_ = lean_unsigned_to_nat(1u);
v___x_1380_ = lean_mk_empty_array_with_capacity(v___x_1379_);
v___x_1381_ = lean_array_push(v___x_1380_, v___x_1378_);
v___x_1382_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_cidx_1283_);
v___x_1383_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1382_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
v___x_1385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1381_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_array_push(v_stmts_1373_, v___x_1385_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set(v___x_1376_, 0, v___x_1386_);
v___x_1388_ = v___x_1376_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1386_);
lean_ctor_set(v_reuseFailAlloc_1392_, 1, v_fresh_1374_);
v___x_1388_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1389_ = lean_st_ref_set(v_a_1279_, v___x_1388_);
v___x_1390_ = lean_box(0);
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
return v___x_1391_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor___boxed(lean_object* v_lhsId_1396_, lean_object* v_info_1397_, lean_object* v_args_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_1396_, v_info_1397_, v_args_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_);
lean_dec(v_a_1402_);
lean_dec_ref(v_a_1401_);
lean_dec(v_a_1400_);
lean_dec_ref(v_a_1399_);
lean_dec_ref(v_args_1398_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(lean_object* v_args_1405_, lean_object* v_snd_1406_, lean_object* v_range_1407_, lean_object* v_b_1408_, lean_object* v_i_1409_, lean_object* v_hs_1410_, lean_object* v_hl_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v___x_1417_; 
v___x_1417_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1405_, v_snd_1406_, v_range_1407_, v_b_1408_, v_i_1409_, v___y_1413_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___boxed(lean_object* v_args_1418_, lean_object* v_snd_1419_, lean_object* v_range_1420_, lean_object* v_b_1421_, lean_object* v_i_1422_, lean_object* v_hs_1423_, lean_object* v_hl_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(v_args_1418_, v_snd_1419_, v_range_1420_, v_b_1421_, v_i_1422_, v_hs_1423_, v_hl_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec_ref(v_range_1420_);
lean_dec_ref(v_args_1418_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(lean_object* v_args_1431_, lean_object* v_snd_1432_, lean_object* v_range_1433_, lean_object* v_b_1434_, lean_object* v_i_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v_stop_1438_; lean_object* v_step_1439_; uint8_t v___x_1440_; 
v_stop_1438_ = lean_ctor_get(v_range_1433_, 1);
v_step_1439_ = lean_ctor_get(v_range_1433_, 2);
v___x_1440_ = lean_nat_dec_lt(v_i_1435_, v_stop_1438_);
if (v___x_1440_ == 0)
{
lean_object* v___x_1441_; 
lean_dec(v_i_1435_);
lean_dec_ref(v_snd_1432_);
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_b_1434_);
return v___x_1441_;
}
else
{
lean_object* v___x_1442_; lean_object* v_stmts_1443_; lean_object* v_fresh_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1462_; 
v___x_1442_ = lean_st_ref_take(v___y_1436_);
v_stmts_1443_ = lean_ctor_get(v___x_1442_, 0);
v_fresh_1444_ = lean_ctor_get(v___x_1442_, 1);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1442_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1446_ = v___x_1442_;
v_isShared_1447_ = v_isSharedCheck_1462_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_fresh_1444_);
lean_inc(v_stmts_1443_);
lean_dec(v___x_1442_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1462_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1456_; 
v___x_1448_ = lean_box(0);
v___x_1449_ = lean_unsigned_to_nat(3u);
v___x_1450_ = lean_nat_add(v_i_1435_, v___x_1449_);
v___x_1451_ = lean_array_get_borrowed(v___x_1448_, v_args_1431_, v_i_1435_);
lean_inc(v___x_1451_);
v___x_1452_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_1451_);
lean_inc_ref(v_snd_1432_);
v___x_1453_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1432_, v___x_1450_, v___x_1452_);
lean_dec(v___x_1450_);
v___x_1454_ = lean_array_push(v_stmts_1443_, v___x_1453_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v___x_1454_);
v___x_1456_ = v___x_1446_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v___x_1454_);
lean_ctor_set(v_reuseFailAlloc_1461_, 1, v_fresh_1444_);
v___x_1456_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1457_ = lean_st_ref_set(v___y_1436_, v___x_1456_);
v___x_1458_ = lean_box(0);
v___x_1459_ = lean_nat_add(v_i_1435_, v_step_1439_);
lean_dec(v_i_1435_);
v_b_1434_ = v___x_1458_;
v_i_1435_ = v___x_1459_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg___boxed(lean_object* v_args_1463_, lean_object* v_snd_1464_, lean_object* v_range_1465_, lean_object* v_b_1466_, lean_object* v_i_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1463_, v_snd_1464_, v_range_1465_, v_b_1466_, v_i_1467_, v___y_1468_);
lean_dec(v___y_1468_);
lean_dec_ref(v_range_1465_);
lean_dec_ref(v_args_1463_);
return v_res_1470_;
}
}
static uint64_t _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0(void){
_start:
{
lean_object* v___x_1471_; uint64_t v___x_1472_; 
v___x_1471_ = lean_unsigned_to_nat(1723u);
v___x_1472_ = lean_uint64_of_nat(v___x_1471_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap(lean_object* v_lhsId_1473_, lean_object* v_fn_1474_, lean_object* v_args_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v___x_1481_; lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1610_; 
v___x_1481_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_1477_);
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1610_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1610_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v_nwords_1488_; lean_object* v___x_1489_; lean_object* v_fst_1490_; lean_object* v_snd_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1609_; 
v___x_1486_ = lean_array_get_size(v_args_1475_);
v___x_1487_ = lean_unsigned_to_nat(4u);
v_nwords_1488_ = lean_nat_add(v___x_1486_, v___x_1487_);
v___x_1489_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1488_, v_a_1482_);
v_fst_1490_ = lean_ctor_get(v___x_1489_, 0);
v_snd_1491_ = lean_ctor_get(v___x_1489_, 1);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1489_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1493_ = v___x_1489_;
v_isShared_1494_ = v_isSharedCheck_1609_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_snd_1491_);
lean_inc(v_fst_1490_);
lean_dec(v___x_1489_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1609_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v_stmts_1496_; lean_object* v_fresh_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1608_; 
v___x_1495_ = lean_st_ref_take(v_a_1477_);
v_stmts_1496_ = lean_ctor_get(v___x_1495_, 0);
v_fresh_1497_ = lean_ctor_get(v___x_1495_, 1);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1499_ = v___x_1495_;
v_isShared_1500_ = v_isSharedCheck_1608_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_fresh_1497_);
lean_inc(v_stmts_1496_);
lean_dec(v___x_1495_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1608_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1501_ = l_Array_append___redArg(v_stmts_1496_, v_fst_1490_);
lean_dec(v_fst_1490_);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v___x_1501_);
v___x_1503_ = v___x_1499_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v_fresh_1497_);
v___x_1503_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v_stmts_1506_; lean_object* v_fresh_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1606_; 
v___x_1504_ = lean_st_ref_set(v_a_1477_, v___x_1503_);
v___x_1505_ = lean_st_ref_take(v_a_1477_);
v_stmts_1506_ = lean_ctor_get(v___x_1505_, 0);
v_fresh_1507_ = lean_ctor_get(v___x_1505_, 1);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1509_ = v___x_1505_;
v_isShared_1510_ = v_isSharedCheck_1606_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_fresh_1507_);
lean_inc(v_stmts_1506_);
lean_dec(v___x_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1606_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1511_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1512_ = lean_unsigned_to_nat(245u);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___x_1512_, v___x_1486_, v___x_1513_);
v___x_1515_ = lean_unsigned_to_nat(2u);
v___x_1516_ = lean_mk_empty_array_with_capacity(v___x_1515_);
lean_inc(v_snd_1491_);
v___x_1517_ = lean_array_push(v___x_1516_, v_snd_1491_);
v___x_1518_ = lean_array_push(v___x_1517_, v___x_1514_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set_tag(v___x_1493_, 3);
lean_ctor_set(v___x_1493_, 1, v___x_1518_);
lean_ctor_set(v___x_1493_, 0, v___x_1511_);
v___x_1520_ = v___x_1493_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v___x_1511_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1522_; 
if (v_isShared_1485_ == 0)
{
lean_ctor_set_tag(v___x_1484_, 3);
lean_ctor_set(v___x_1484_, 0, v___x_1520_);
v___x_1522_ = v___x_1484_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
lean_object* v___x_1523_; lean_object* v___x_1525_; 
v___x_1523_ = lean_array_push(v_stmts_1506_, v___x_1522_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1523_);
v___x_1525_ = v___x_1509_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1523_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_fresh_1507_);
v___x_1525_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; uint64_t v___y_1529_; 
v___x_1526_ = lean_st_ref_set(v_a_1477_, v___x_1525_);
v___x_1527_ = lean_st_ref_take(v_a_1477_);
if (lean_obj_tag(v_fn_1474_) == 0)
{
uint64_t v___x_1601_; 
v___x_1601_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_1529_ = v___x_1601_;
goto v___jp_1528_;
}
else
{
uint64_t v_hash_1602_; 
v_hash_1602_ = lean_ctor_get_uint64(v_fn_1474_, sizeof(void*)*2);
v___y_1529_ = v_hash_1602_;
goto v___jp_1528_;
}
v___jp_1528_:
{
lean_object* v_stmts_1530_; lean_object* v_fresh_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1600_; 
v_stmts_1530_ = lean_ctor_get(v___x_1527_, 0);
v_fresh_1531_ = lean_ctor_get(v___x_1527_, 1);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1533_ = v___x_1527_;
v_isShared_1534_ = v_isSharedCheck_1600_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_fresh_1531_);
lean_inc(v_stmts_1530_);
lean_dec(v___x_1527_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1600_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___x_1535_ = lean_uint64_to_nat(v___y_1529_);
v___x_1536_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1535_);
lean_inc(v_snd_1491_);
v___x_1537_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1491_, v___x_1513_, v___x_1536_);
v___x_1538_ = lean_array_push(v_stmts_1530_, v___x_1537_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set(v___x_1533_, 0, v___x_1538_);
v___x_1540_ = v___x_1533_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_fresh_1531_);
v___x_1540_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v_stmts_1543_; lean_object* v_fresh_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1598_; 
v___x_1541_ = lean_st_ref_set(v_a_1477_, v___x_1540_);
v___x_1542_ = lean_st_ref_take(v_a_1477_);
v_stmts_1543_ = lean_ctor_get(v___x_1542_, 0);
v_fresh_1544_ = lean_ctor_get(v___x_1542_, 1);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1546_ = v___x_1542_;
v_isShared_1547_ = v_isSharedCheck_1598_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_fresh_1544_);
lean_inc(v_stmts_1543_);
lean_dec(v___x_1542_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1598_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1548_ = lean_unsigned_to_nat(1u);
v___x_1549_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
lean_inc(v_snd_1491_);
v___x_1550_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1491_, v___x_1548_, v___x_1549_);
v___x_1551_ = lean_array_push(v_stmts_1543_, v___x_1550_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v___x_1551_);
v___x_1553_ = v___x_1546_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_fresh_1544_);
v___x_1553_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v_stmts_1556_; lean_object* v_fresh_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1596_; 
v___x_1554_ = lean_st_ref_set(v_a_1477_, v___x_1553_);
v___x_1555_ = lean_st_ref_take(v_a_1477_);
v_stmts_1556_ = lean_ctor_get(v___x_1555_, 0);
v_fresh_1557_ = lean_ctor_get(v___x_1555_, 1);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1559_ = v___x_1555_;
v_isShared_1560_ = v_isSharedCheck_1596_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_fresh_1557_);
lean_inc(v_stmts_1556_);
lean_dec(v___x_1555_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1596_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1565_; 
v___x_1561_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1486_);
lean_inc(v_snd_1491_);
v___x_1562_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1491_, v___x_1515_, v___x_1561_);
v___x_1563_ = lean_array_push(v_stmts_1556_, v___x_1562_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 0, v___x_1563_);
v___x_1565_ = v___x_1559_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v_fresh_1557_);
v___x_1565_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1593_; 
v___x_1566_ = lean_st_ref_set(v_a_1477_, v___x_1565_);
v___x_1567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1513_);
lean_ctor_set(v___x_1567_, 1, v___x_1486_);
lean_ctor_set(v___x_1567_, 2, v___x_1548_);
v___x_1568_ = lean_box(0);
lean_inc(v_snd_1491_);
v___x_1569_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1475_, v_snd_1491_, v___x_1567_, v___x_1568_, v___x_1513_, v_a_1477_);
lean_dec_ref_known(v___x_1567_, 3);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; 
v_unused_1594_ = lean_ctor_get(v___x_1569_, 0);
lean_dec(v_unused_1594_);
v___x_1571_ = v___x_1569_;
v_isShared_1572_ = v_isSharedCheck_1593_;
goto v_resetjp_1570_;
}
else
{
lean_dec(v___x_1569_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1593_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1573_; lean_object* v_stmts_1574_; lean_object* v_fresh_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1592_; 
v___x_1573_ = lean_st_ref_take(v_a_1477_);
v_stmts_1574_ = lean_ctor_get(v___x_1573_, 0);
v_fresh_1575_ = lean_ctor_get(v___x_1573_, 1);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1577_ = v___x_1573_;
v_isShared_1578_ = v_isSharedCheck_1592_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_fresh_1575_);
lean_inc(v_stmts_1574_);
lean_dec(v___x_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1592_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1579_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1473_);
v___x_1580_ = lean_mk_empty_array_with_capacity(v___x_1548_);
v___x_1581_ = lean_array_push(v___x_1580_, v___x_1579_);
v___x_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1582_, 0, v_snd_1491_);
v___x_1583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_array_push(v_stmts_1574_, v___x_1583_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1584_);
v___x_1586_ = v___x_1577_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v_fresh_1575_);
v___x_1586_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; lean_object* v___x_1589_; 
v___x_1587_ = lean_st_ref_set(v_a_1477_, v___x_1586_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 0, v___x_1568_);
v___x_1589_ = v___x_1571_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1568_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap___boxed(lean_object* v_lhsId_1611_, lean_object* v_fn_1612_, lean_object* v_args_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_1611_, v_fn_1612_, v_args_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
lean_dec_ref(v_args_1613_);
lean_dec(v_fn_1612_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(lean_object* v_args_1620_, lean_object* v_snd_1621_, lean_object* v_range_1622_, lean_object* v_b_1623_, lean_object* v_i_1624_, lean_object* v_hs_1625_, lean_object* v_hl_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1620_, v_snd_1621_, v_range_1622_, v_b_1623_, v_i_1624_, v___y_1628_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___boxed(lean_object* v_args_1633_, lean_object* v_snd_1634_, lean_object* v_range_1635_, lean_object* v_b_1636_, lean_object* v_i_1637_, lean_object* v_hs_1638_, lean_object* v_hl_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v_res_1645_; 
v_res_1645_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(v_args_1633_, v_snd_1634_, v_range_1635_, v_b_1636_, v_i_1637_, v_hs_1638_, v_hl_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec(v___y_1641_);
lean_dec_ref(v___y_1640_);
lean_dec_ref(v_range_1635_);
lean_dec_ref(v_args_1633_);
return v_res_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(size_t v_sz_1646_, size_t v_i_1647_, lean_object* v_bs_1648_){
_start:
{
uint8_t v___x_1649_; 
v___x_1649_ = lean_usize_dec_lt(v_i_1647_, v_sz_1646_);
if (v___x_1649_ == 0)
{
return v_bs_1648_;
}
else
{
lean_object* v_v_1650_; lean_object* v___x_1651_; lean_object* v_bs_x27_1652_; lean_object* v___x_1653_; size_t v___x_1654_; size_t v___x_1655_; lean_object* v___x_1656_; 
v_v_1650_ = lean_array_uget(v_bs_1648_, v_i_1647_);
v___x_1651_ = lean_unsigned_to_nat(0u);
v_bs_x27_1652_ = lean_array_uset(v_bs_1648_, v_i_1647_, v___x_1651_);
v___x_1653_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_v_1650_);
v___x_1654_ = ((size_t)1ULL);
v___x_1655_ = lean_usize_add(v_i_1647_, v___x_1654_);
v___x_1656_ = lean_array_uset(v_bs_x27_1652_, v_i_1647_, v___x_1653_);
v_i_1647_ = v___x_1655_;
v_bs_1648_ = v___x_1656_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1___boxed(lean_object* v_sz_1658_, lean_object* v_i_1659_, lean_object* v_bs_1660_){
_start:
{
size_t v_sz_boxed_1661_; size_t v_i_boxed_1662_; lean_object* v_res_1663_; 
v_sz_boxed_1661_ = lean_unbox_usize(v_sz_1658_);
lean_dec(v_sz_1658_);
v_i_boxed_1662_ = lean_unbox_usize(v_i_1659_);
lean_dec(v_i_1659_);
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_boxed_1661_, v_i_boxed_1662_, v_bs_1660_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(size_t v_sz_1664_, size_t v_i_1665_, lean_object* v_bs_1666_){
_start:
{
uint8_t v___x_1667_; 
v___x_1667_ = lean_usize_dec_lt(v_i_1665_, v_sz_1664_);
if (v___x_1667_ == 0)
{
return v_bs_1666_;
}
else
{
lean_object* v_v_1668_; lean_object* v___x_1669_; lean_object* v_bs_x27_1670_; lean_object* v___x_1671_; size_t v___x_1672_; size_t v___x_1673_; lean_object* v___x_1674_; 
v_v_1668_ = lean_array_uget(v_bs_1666_, v_i_1665_);
v___x_1669_ = lean_unsigned_to_nat(0u);
v_bs_x27_1670_ = lean_array_uset(v_bs_1666_, v_i_1665_, v___x_1669_);
v___x_1671_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v_v_1668_);
v___x_1672_ = ((size_t)1ULL);
v___x_1673_ = lean_usize_add(v_i_1665_, v___x_1672_);
v___x_1674_ = lean_array_uset(v_bs_x27_1670_, v_i_1665_, v___x_1671_);
v_i_1665_ = v___x_1673_;
v_bs_1666_ = v___x_1674_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0___boxed(lean_object* v_sz_1676_, lean_object* v_i_1677_, lean_object* v_bs_1678_){
_start:
{
size_t v_sz_boxed_1679_; size_t v_i_boxed_1680_; lean_object* v_res_1681_; 
v_sz_boxed_1679_ = lean_unbox_usize(v_sz_1676_);
lean_dec(v_sz_1676_);
v_i_boxed_1680_ = lean_unbox_usize(v_i_1677_);
lean_dec(v_i_1677_);
v_res_1681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_boxed_1679_, v_i_boxed_1680_, v_bs_1678_);
return v_res_1681_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1(void){
_start:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_1684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
return v___x_1684_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8(void){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7));
v___x_1693_ = lean_string_utf8_byte_size(v___x_1692_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(lean_object* v_lhsId_1697_, lean_object* v_fn_1698_, lean_object* v_args_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_){
_start:
{
lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_st_ref_get(v_a_1701_);
lean_inc(v_fn_1698_);
v___x_1729_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1698_, v_a_1701_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_2004_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1732_ = v___x_1729_;
v_isShared_1733_ = v_isSharedCheck_2004_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___x_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_2004_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___y_1735_; lean_object* v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; uint8_t v___y_1860_; lean_object* v___y_1947_; uint8_t v___y_1948_; lean_object* v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; uint8_t v___y_1952_; lean_object* v___y_1956_; lean_object* v___y_1957_; uint8_t v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; uint8_t v___y_1961_; lean_object* v_env_1964_; lean_object* v___y_1966_; 
v_env_1964_ = lean_ctor_get(v___x_1728_, 0);
lean_inc_ref(v_env_1964_);
lean_dec(v___x_1728_);
if (lean_obj_tag(v_a_1730_) == 0)
{
size_t v_sz_1995_; size_t v___x_1996_; lean_object* v___x_1997_; 
v_sz_1995_ = lean_array_size(v_args_1699_);
v___x_1996_ = ((size_t)0ULL);
v___x_1997_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_1995_, v___x_1996_, v_args_1699_);
v___y_1966_ = v___x_1997_;
goto v___jp_1965_;
}
else
{
lean_object* v_val_1998_; lean_object* v_params_1999_; lean_object* v___x_2000_; size_t v_sz_2001_; size_t v___x_2002_; lean_object* v___x_2003_; 
v_val_1998_ = lean_ctor_get(v_a_1730_, 0);
lean_inc(v_val_1998_);
lean_dec_ref_known(v_a_1730_, 1);
v_params_1999_ = lean_ctor_get(v_val_1998_, 3);
lean_inc_ref(v_params_1999_);
lean_dec(v_val_1998_);
v___x_2000_ = l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(v_params_1999_, v_args_1699_);
lean_dec_ref(v_args_1699_);
lean_dec_ref(v_params_1999_);
v_sz_2001_ = lean_array_size(v___x_2000_);
v___x_2002_ = ((size_t)0ULL);
v___x_2003_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_2001_, v___x_2002_, v___x_2000_);
v___y_1966_ = v___x_2003_;
goto v___jp_1965_;
}
v___jp_1734_:
{
lean_object* v___x_1736_; lean_object* v_stmts_1737_; lean_object* v_fresh_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1759_; 
v___x_1736_ = lean_st_ref_take(v_a_1700_);
v_stmts_1737_ = lean_ctor_get(v___x_1736_, 0);
v_fresh_1738_ = lean_ctor_get(v___x_1736_, 1);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1740_ = v___x_1736_;
v_isShared_1741_ = v_isSharedCheck_1759_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_fresh_1738_);
lean_inc(v_stmts_1737_);
lean_dec(v___x_1736_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1759_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1742_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1697_);
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1743_);
v___x_1745_ = lean_array_push(v___x_1744_, v___x_1742_);
v___x_1746_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1698_);
v___x_1747_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
lean_ctor_set(v___x_1747_, 1, v___y_1735_);
v___x_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
v___x_1749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1745_);
lean_ctor_set(v___x_1749_, 1, v___x_1748_);
v___x_1750_ = lean_array_push(v_stmts_1737_, v___x_1749_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v___x_1750_);
v___x_1752_ = v___x_1740_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v_fresh_1738_);
v___x_1752_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1756_; 
v___x_1753_ = lean_st_ref_set(v_a_1700_, v___x_1752_);
v___x_1754_ = lean_box(0);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1754_);
v___x_1756_ = v___x_1732_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
v___jp_1760_:
{
lean_object* v___x_1764_; lean_object* v_stmts_1765_; lean_object* v_fresh_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1817_; 
v___x_1764_ = lean_st_ref_take(v_a_1700_);
v_stmts_1765_ = lean_ctor_get(v___x_1764_, 0);
v_fresh_1766_ = lean_ctor_get(v___x_1764_, 1);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1764_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1768_ = v___x_1764_;
v_isShared_1769_ = v_isSharedCheck_1817_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_fresh_1766_);
lean_inc(v_stmts_1765_);
lean_dec(v___x_1764_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1817_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1770_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___y_1761_);
lean_ctor_set(v___x_1770_, 1, v___y_1762_);
v___x_1771_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
v___x_1772_ = lean_array_push(v_stmts_1765_, v___x_1771_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1772_);
v___x_1774_ = v___x_1768_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1816_, 1, v_fresh_1766_);
v___x_1774_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v_stmts_1777_; lean_object* v_fresh_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1815_; 
v___x_1775_ = lean_st_ref_set(v_a_1700_, v___x_1774_);
v___x_1776_ = lean_st_ref_take(v_a_1700_);
v_stmts_1777_ = lean_ctor_get(v___x_1776_, 0);
v_fresh_1778_ = lean_ctor_get(v___x_1776_, 1);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1780_ = v___x_1776_;
v_isShared_1781_ = v_isSharedCheck_1815_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_fresh_1778_);
lean_inc(v_stmts_1777_);
lean_dec(v___x_1776_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1815_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1792_; 
v___x_1782_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___y_1763_);
v___x_1783_ = lean_unsigned_to_nat(2u);
v___x_1784_ = lean_mk_empty_array_with_capacity(v___x_1783_);
lean_inc_ref(v___x_1782_);
v___x_1785_ = lean_array_push(v___x_1784_, v___x_1782_);
v___x_1786_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_1787_ = lean_array_push(v___x_1785_, v___x_1782_);
v___x_1788_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1786_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1788_);
v___x_1790_ = lean_array_push(v_stmts_1777_, v___x_1789_);
if (v_isShared_1781_ == 0)
{
lean_ctor_set(v___x_1780_, 0, v___x_1790_);
v___x_1792_ = v___x_1780_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v___x_1790_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_fresh_1778_);
v___x_1792_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v_stmts_1795_; lean_object* v_fresh_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1813_; 
v___x_1793_ = lean_st_ref_set(v_a_1700_, v___x_1792_);
v___x_1794_ = lean_st_ref_take(v_a_1700_);
v_stmts_1795_ = lean_ctor_get(v___x_1794_, 0);
v_fresh_1796_ = lean_ctor_get(v___x_1794_, 1);
v_isSharedCheck_1813_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1813_ == 0)
{
v___x_1798_ = v___x_1794_;
v_isShared_1799_ = v_isSharedCheck_1813_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_fresh_1796_);
lean_inc(v_stmts_1795_);
lean_dec(v___x_1794_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1813_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1808_; 
v___x_1800_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1697_);
v___x_1801_ = lean_unsigned_to_nat(1u);
v___x_1802_ = lean_mk_empty_array_with_capacity(v___x_1801_);
v___x_1803_ = lean_array_push(v___x_1802_, v___x_1800_);
v___x_1804_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_1805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1803_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
v___x_1806_ = lean_array_push(v_stmts_1795_, v___x_1805_);
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1806_);
v___x_1808_ = v___x_1798_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1806_);
lean_ctor_set(v_reuseFailAlloc_1812_, 1, v_fresh_1796_);
v___x_1808_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1809_ = lean_st_ref_set(v_a_1700_, v___x_1808_);
v___x_1810_ = lean_box(0);
v___x_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
return v___x_1811_;
}
}
}
}
}
}
}
v___jp_1818_:
{
lean_object* v___x_1821_; lean_object* v_stmts_1822_; lean_object* v_fresh_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1854_; 
v___x_1821_ = lean_st_ref_take(v_a_1700_);
v_stmts_1822_ = lean_ctor_get(v___x_1821_, 0);
v_fresh_1823_ = lean_ctor_get(v___x_1821_, 1);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1825_ = v___x_1821_;
v_isShared_1826_ = v_isSharedCheck_1854_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_fresh_1823_);
lean_inc(v_stmts_1822_);
lean_dec(v___x_1821_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1854_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1831_; 
v___x_1827_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1827_, 0, v___y_1819_);
lean_ctor_set(v___x_1827_, 1, v___y_1820_);
v___x_1828_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
v___x_1829_ = lean_array_push(v_stmts_1822_, v___x_1828_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1829_);
v___x_1831_ = v___x_1825_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v___x_1829_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v_fresh_1823_);
v___x_1831_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v_stmts_1834_; lean_object* v_fresh_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1852_; 
v___x_1832_ = lean_st_ref_set(v_a_1700_, v___x_1831_);
v___x_1833_ = lean_st_ref_take(v_a_1700_);
v_stmts_1834_ = lean_ctor_get(v___x_1833_, 0);
v_fresh_1835_ = lean_ctor_get(v___x_1833_, 1);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1837_ = v___x_1833_;
v_isShared_1838_ = v_isSharedCheck_1852_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_fresh_1835_);
lean_inc(v_stmts_1834_);
lean_dec(v___x_1833_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1852_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1839_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1697_);
v___x_1840_ = lean_unsigned_to_nat(1u);
v___x_1841_ = lean_mk_empty_array_with_capacity(v___x_1840_);
v___x_1842_ = lean_array_push(v___x_1841_, v___x_1839_);
v___x_1843_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_1844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1842_);
lean_ctor_set(v___x_1844_, 1, v___x_1843_);
v___x_1845_ = lean_array_push(v_stmts_1834_, v___x_1844_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1845_);
v___x_1847_ = v___x_1837_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_fresh_1835_);
v___x_1847_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1848_ = lean_st_ref_set(v_a_1700_, v___x_1847_);
v___x_1849_ = lean_box(0);
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
return v___x_1850_;
}
}
}
}
}
v___jp_1855_:
{
if (v___y_1860_ == 0)
{
lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1861_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2));
v___x_1862_ = lean_string_dec_eq(v___y_1856_, v___x_1861_);
if (v___x_1862_ == 0)
{
lean_object* v___x_1863_; lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1945_; 
v___x_1863_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_1700_);
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1866_ = v___x_1863_;
v_isShared_1867_ = v_isSharedCheck_1945_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1863_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1945_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v_fst_1870_; lean_object* v_snd_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1944_; 
v___x_1868_ = lean_unsigned_to_nat(2u);
v___x_1869_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v___x_1868_, v_a_1864_);
v_fst_1870_ = lean_ctor_get(v___x_1869_, 0);
v_snd_1871_ = lean_ctor_get(v___x_1869_, 1);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1869_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1873_ = v___x_1869_;
v_isShared_1874_ = v_isSharedCheck_1944_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_snd_1871_);
lean_inc(v_fst_1870_);
lean_dec(v___x_1869_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1944_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v_stmts_1876_; lean_object* v_fresh_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1943_; 
v___x_1875_ = lean_st_ref_take(v_a_1700_);
v_stmts_1876_ = lean_ctor_get(v___x_1875_, 0);
v_fresh_1877_ = lean_ctor_get(v___x_1875_, 1);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1879_ = v___x_1875_;
v_isShared_1880_ = v_isSharedCheck_1943_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_fresh_1877_);
lean_inc(v_stmts_1876_);
lean_dec(v___x_1875_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1943_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1881_ = l_Array_append___redArg(v_stmts_1876_, v_fst_1870_);
lean_dec(v_fst_1870_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v___x_1881_);
v___x_1883_ = v___x_1879_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v_fresh_1877_);
v___x_1883_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v_stmts_1888_; lean_object* v_fresh_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1941_; 
v___x_1884_ = lean_st_ref_set(v_a_1700_, v___x_1883_);
v___x_1885_ = lean_unsigned_to_nat(1u);
lean_inc_n(v___y_1859_, 2);
v___x_1886_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___y_1859_, v___x_1885_, v___y_1859_);
v___x_1887_ = lean_st_ref_take(v_a_1700_);
v_stmts_1888_ = lean_ctor_get(v___x_1887_, 0);
v_fresh_1889_ = lean_ctor_get(v___x_1887_, 1);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1891_ = v___x_1887_;
v_isShared_1892_ = v_isSharedCheck_1941_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_fresh_1889_);
lean_inc(v_stmts_1888_);
lean_dec(v___x_1887_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1941_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1893_ = lean_mk_empty_array_with_capacity(v___x_1868_);
lean_inc(v_snd_1871_);
v___x_1894_ = lean_array_push(v___x_1893_, v_snd_1871_);
v___x_1895_ = lean_array_push(v___x_1894_, v___x_1886_);
lean_inc_ref(v___y_1858_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 3);
lean_ctor_set(v___x_1873_, 1, v___x_1895_);
lean_ctor_set(v___x_1873_, 0, v___y_1858_);
v___x_1897_ = v___x_1873_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___y_1858_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v___x_1898_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
v___x_1899_ = lean_array_push(v_stmts_1888_, v___x_1898_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v___x_1899_);
v___x_1901_ = v___x_1891_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1899_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v_fresh_1889_);
v___x_1901_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v_stmts_1904_; lean_object* v_fresh_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1938_; 
v___x_1902_ = lean_st_ref_set(v_a_1700_, v___x_1901_);
v___x_1903_ = lean_st_ref_take(v_a_1700_);
v_stmts_1904_ = lean_ctor_get(v___x_1903_, 0);
v_fresh_1905_ = lean_ctor_get(v___x_1903_, 1);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1907_ = v___x_1903_;
v_isShared_1908_ = v_isSharedCheck_1938_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_fresh_1905_);
lean_inc(v_stmts_1904_);
lean_dec(v___x_1903_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1938_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1914_; 
v___x_1909_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___y_1856_);
lean_ctor_set(v___x_1909_, 1, v___y_1857_);
v___x_1910_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1909_);
lean_inc(v_snd_1871_);
v___x_1911_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1871_, v___y_1859_, v___x_1910_);
lean_dec(v___y_1859_);
v___x_1912_ = lean_array_push(v_stmts_1904_, v___x_1911_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1912_);
v___x_1914_ = v___x_1907_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1912_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v_fresh_1905_);
v___x_1914_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v_stmts_1917_; lean_object* v_fresh_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1936_; 
v___x_1915_ = lean_st_ref_set(v_a_1700_, v___x_1914_);
v___x_1916_ = lean_st_ref_take(v_a_1700_);
v_stmts_1917_ = lean_ctor_get(v___x_1916_, 0);
v_fresh_1918_ = lean_ctor_get(v___x_1916_, 1);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1920_ = v___x_1916_;
v_isShared_1921_ = v_isSharedCheck_1936_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_fresh_1918_);
lean_inc(v_stmts_1917_);
lean_dec(v___x_1916_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1936_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1922_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1697_);
v___x_1923_ = lean_mk_empty_array_with_capacity(v___x_1885_);
v___x_1924_ = lean_array_push(v___x_1923_, v___x_1922_);
v___x_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1925_, 0, v_snd_1871_);
v___x_1926_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = lean_array_push(v_stmts_1917_, v___x_1926_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 0, v___x_1927_);
v___x_1929_ = v___x_1920_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1927_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v_fresh_1918_);
v___x_1929_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1933_; 
v___x_1930_ = lean_st_ref_set(v_a_1700_, v___x_1929_);
v___x_1931_ = lean_box(0);
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 0, v___x_1931_);
v___x_1933_ = v___x_1866_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1931_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
}
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
lean_dec(v___y_1859_);
v___y_1819_ = v___y_1856_;
v___y_1820_ = v___y_1857_;
goto v___jp_1818_;
}
}
else
{
lean_dec(v___y_1859_);
v___y_1819_ = v___y_1856_;
v___y_1820_ = v___y_1857_;
goto v___jp_1818_;
}
}
v___jp_1946_:
{
if (v___y_1952_ == 0)
{
lean_object* v___x_1953_; uint8_t v___x_1954_; 
v___x_1953_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3));
v___x_1954_ = lean_string_dec_eq(v___y_1947_, v___x_1953_);
v___y_1856_ = v___y_1947_;
v___y_1857_ = v___y_1949_;
v___y_1858_ = v___y_1950_;
v___y_1859_ = v___y_1951_;
v___y_1860_ = v___x_1954_;
goto v___jp_1855_;
}
else
{
v___y_1856_ = v___y_1947_;
v___y_1857_ = v___y_1949_;
v___y_1858_ = v___y_1950_;
v___y_1859_ = v___y_1951_;
v___y_1860_ = v___y_1948_;
goto v___jp_1855_;
}
}
v___jp_1955_:
{
if (v___y_1961_ == 0)
{
lean_object* v___x_1962_; uint8_t v___x_1963_; 
v___x_1962_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4));
v___x_1963_ = lean_string_dec_eq(v___y_1956_, v___x_1962_);
v___y_1947_ = v___y_1956_;
v___y_1948_ = v___y_1958_;
v___y_1949_ = v___y_1957_;
v___y_1950_ = v___y_1959_;
v___y_1951_ = v___y_1960_;
v___y_1952_ = v___x_1963_;
goto v___jp_1946_;
}
else
{
v___y_1947_ = v___y_1956_;
v___y_1948_ = v___y_1958_;
v___y_1949_ = v___y_1957_;
v___y_1950_ = v___y_1959_;
v___y_1951_ = v___y_1960_;
v___y_1952_ = v___y_1958_;
goto v___jp_1946_;
}
}
v___jp_1965_:
{
lean_object* v___x_1967_; 
lean_inc(v_fn_1698_);
v___x_1967_ = l_Lean_getExternAttrData_x3f(v_env_1964_, v_fn_1698_);
if (lean_obj_tag(v___x_1967_) == 0)
{
lean_del_object(v___x_1732_);
v___y_1704_ = v___y_1966_;
v___y_1705_ = v_a_1700_;
goto v___jp_1703_;
}
else
{
lean_object* v_val_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v_val_1968_ = lean_ctor_get(v___x_1967_, 0);
lean_inc(v_val_1968_);
lean_dec_ref_known(v___x_1967_, 1);
v___x_1969_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6));
v___x_1970_ = l_Lean_getExternEntryFor(v_val_1968_, v___x_1969_);
lean_dec(v_val_1968_);
if (lean_obj_tag(v___x_1970_) == 1)
{
lean_object* v_val_1971_; 
v_val_1971_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_val_1971_);
lean_dec_ref_known(v___x_1970_, 1);
if (lean_obj_tag(v_val_1971_) == 2)
{
lean_object* v_fn_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; uint8_t v___x_1976_; 
v_fn_1972_ = lean_ctor_get(v_val_1971_, 1);
lean_inc_ref(v_fn_1972_);
lean_dec_ref_known(v_val_1971_, 2);
v___x_1973_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7));
v___x_1974_ = lean_string_utf8_byte_size(v_fn_1972_);
v___x_1975_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8);
v___x_1976_ = lean_nat_dec_le(v___x_1975_, v___x_1974_);
if (v___x_1976_ == 0)
{
lean_dec_ref(v_fn_1972_);
v___y_1735_ = v___y_1966_;
goto v___jp_1734_;
}
else
{
lean_object* v___x_1977_; uint8_t v___x_1978_; 
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = lean_string_memcmp(v_fn_1972_, v___x_1973_, v___x_1977_, v___x_1977_, v___x_1975_);
if (v___x_1978_ == 0)
{
lean_dec_ref(v_fn_1972_);
v___y_1735_ = v___y_1966_;
goto v___jp_1734_;
}
else
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; size_t v_sz_1984_; size_t v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; uint8_t v___x_1988_; 
lean_del_object(v___x_1732_);
lean_dec(v_fn_1698_);
v___x_1979_ = lean_unsigned_to_nat(9u);
lean_inc_ref(v_fn_1972_);
v___x_1980_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1980_, 0, v_fn_1972_);
lean_ctor_set(v___x_1980_, 1, v___x_1977_);
lean_ctor_set(v___x_1980_, 2, v___x_1974_);
v___x_1981_ = l_String_Slice_Pos_nextn(v___x_1980_, v___x_1977_, v___x_1979_);
lean_dec_ref_known(v___x_1980_, 3);
v___x_1982_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1982_, 0, v_fn_1972_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
lean_ctor_set(v___x_1982_, 2, v___x_1974_);
v___x_1983_ = l_String_Slice_toString(v___x_1982_);
lean_dec_ref_known(v___x_1982_, 3);
v_sz_1984_ = lean_array_size(v___y_1966_);
v___x_1985_ = ((size_t)0ULL);
v___x_1986_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_1984_, v___x_1985_, v___y_1966_);
v___x_1987_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9));
v___x_1988_ = lean_string_dec_eq(v___x_1983_, v___x_1987_);
if (v___x_1988_ == 0)
{
lean_object* v___x_1989_; uint8_t v___x_1990_; 
v___x_1989_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10));
v___x_1990_ = lean_string_dec_eq(v___x_1983_, v___x_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; uint8_t v___x_1992_; 
v___x_1991_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1992_ = lean_string_dec_eq(v___x_1983_, v___x_1991_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11));
v___x_1994_ = lean_string_dec_eq(v___x_1983_, v___x_1993_);
v___y_1956_ = v___x_1983_;
v___y_1957_ = v___x_1986_;
v___y_1958_ = v___x_1978_;
v___y_1959_ = v___x_1991_;
v___y_1960_ = v___x_1977_;
v___y_1961_ = v___x_1994_;
goto v___jp_1955_;
}
else
{
v___y_1956_ = v___x_1983_;
v___y_1957_ = v___x_1986_;
v___y_1958_ = v___x_1978_;
v___y_1959_ = v___x_1991_;
v___y_1960_ = v___x_1977_;
v___y_1961_ = v___x_1978_;
goto v___jp_1955_;
}
}
else
{
v___y_1761_ = v___x_1983_;
v___y_1762_ = v___x_1986_;
v___y_1763_ = v___x_1977_;
goto v___jp_1760_;
}
}
else
{
v___y_1761_ = v___x_1983_;
v___y_1762_ = v___x_1986_;
v___y_1763_ = v___x_1977_;
goto v___jp_1760_;
}
}
}
}
else
{
lean_dec(v_val_1971_);
lean_del_object(v___x_1732_);
v___y_1704_ = v___y_1966_;
v___y_1705_ = v_a_1700_;
goto v___jp_1703_;
}
}
else
{
lean_dec(v___x_1970_);
lean_del_object(v___x_1732_);
v___y_1704_ = v___y_1966_;
v___y_1705_ = v_a_1700_;
goto v___jp_1703_;
}
}
}
}
}
else
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2012_; 
lean_dec(v___x_1728_);
lean_dec_ref(v_args_1699_);
lean_dec(v_fn_1698_);
lean_dec_ref(v_lhsId_1697_);
v_a_2005_ = lean_ctor_get(v___x_1729_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2007_ = v___x_1729_;
v_isShared_2008_ = v_isSharedCheck_2012_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_1729_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2012_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2010_; 
if (v_isShared_2008_ == 0)
{
v___x_2010_ = v___x_2007_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_a_2005_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
v___jp_1703_:
{
lean_object* v___x_1706_; lean_object* v_stmts_1707_; lean_object* v_fresh_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1727_; 
v___x_1706_ = lean_st_ref_take(v___y_1705_);
v_stmts_1707_ = lean_ctor_get(v___x_1706_, 0);
v_fresh_1708_ = lean_ctor_get(v___x_1706_, 1);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1710_ = v___x_1706_;
v_isShared_1711_ = v_isSharedCheck_1727_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_fresh_1708_);
lean_inc(v_stmts_1707_);
lean_dec(v___x_1706_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1727_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1712_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1697_);
v___x_1713_ = lean_unsigned_to_nat(1u);
v___x_1714_ = lean_mk_empty_array_with_capacity(v___x_1713_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1712_);
v___x_1716_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1698_);
v___x_1717_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
lean_ctor_set(v___x_1717_, 1, v___y_1704_);
v___x_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
v___x_1719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1715_);
lean_ctor_set(v___x_1719_, 1, v___x_1718_);
v___x_1720_ = lean_array_push(v_stmts_1707_, v___x_1719_);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v___x_1720_);
v___x_1722_ = v___x_1710_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1720_);
lean_ctor_set(v_reuseFailAlloc_1726_, 1, v_fresh_1708_);
v___x_1722_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1723_ = lean_st_ref_set(v___y_1705_, v___x_1722_);
v___x_1724_ = lean_box(0);
v___x_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
return v___x_1725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___boxed(lean_object* v_lhsId_2013_, lean_object* v_fn_2014_, lean_object* v_args_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2013_, v_fn_2014_, v_args_2015_, v_a_2016_, v_a_2017_);
lean_dec(v_a_2017_);
lean_dec(v_a_2016_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap(lean_object* v_lhsId_2020_, lean_object* v_fn_2021_, lean_object* v_args_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2020_, v_fn_2021_, v_args_2022_, v_a_2024_, v_a_2026_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___boxed(lean_object* v_lhsId_2029_, lean_object* v_fn_2030_, lean_object* v_args_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_Compiler_LCNF_EmitYul_emitFap(v_lhsId_2029_, v_fn_2030_, v_args_2031_, v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_);
lean_dec(v_a_2035_);
lean_dec_ref(v_a_2034_);
lean_dec(v_a_2033_);
lean_dec_ref(v_a_2032_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(lean_object* v_lhsId_2041_, lean_object* v_fvarId_2042_, lean_object* v_args_2043_, lean_object* v_a_2044_){
_start:
{
lean_object* v___y_2047_; lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; 
v___x_2076_ = lean_array_get_size(v_args_2043_);
v___x_2077_ = lean_unsigned_to_nat(1u);
v___x_2078_ = lean_nat_dec_eq(v___x_2076_, v___x_2077_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; uint8_t v___x_2080_; 
v___x_2079_ = lean_unsigned_to_nat(2u);
v___x_2080_ = lean_nat_dec_eq(v___x_2076_, v___x_2079_);
if (v___x_2080_ == 0)
{
lean_object* v___x_2081_; 
v___x_2081_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0));
v___y_2047_ = v___x_2081_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2082_; 
v___x_2082_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1));
v___y_2047_ = v___x_2082_;
goto v___jp_2046_;
}
}
else
{
lean_object* v___x_2083_; 
v___x_2083_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2));
v___y_2047_ = v___x_2083_;
goto v___jp_2046_;
}
v___jp_2046_:
{
lean_object* v___x_2048_; lean_object* v_stmts_2049_; lean_object* v_fresh_2050_; lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2075_; 
v___x_2048_ = lean_st_ref_take(v_a_2044_);
v_stmts_2049_ = lean_ctor_get(v___x_2048_, 0);
v_fresh_2050_ = lean_ctor_get(v___x_2048_, 1);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2052_ = v___x_2048_;
v_isShared_2053_ = v_isSharedCheck_2075_;
goto v_resetjp_2051_;
}
else
{
lean_inc(v_fresh_2050_);
lean_inc(v_stmts_2049_);
lean_dec(v___x_2048_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2075_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
size_t v_sz_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; size_t v___x_2060_; lean_object* v___x_2061_; lean_object* v_all_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
v_sz_2054_ = lean_array_size(v_args_2043_);
v___x_2055_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2042_);
v___x_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
v___x_2057_ = lean_unsigned_to_nat(1u);
v___x_2058_ = lean_mk_empty_array_with_capacity(v___x_2057_);
lean_inc_ref(v___x_2058_);
v___x_2059_ = lean_array_push(v___x_2058_, v___x_2056_);
v___x_2060_ = ((size_t)0ULL);
v___x_2061_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_2054_, v___x_2060_, v_args_2043_);
v_all_2062_ = l_Array_append___redArg(v___x_2059_, v___x_2061_);
lean_dec_ref(v___x_2061_);
v___x_2063_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2041_);
v___x_2064_ = lean_array_push(v___x_2058_, v___x_2063_);
lean_inc_ref(v___y_2047_);
v___x_2065_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2065_, 0, v___y_2047_);
lean_ctor_set(v___x_2065_, 1, v_all_2062_);
v___x_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
v___x_2067_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2064_);
lean_ctor_set(v___x_2067_, 1, v___x_2066_);
v___x_2068_ = lean_array_push(v_stmts_2049_, v___x_2067_);
if (v_isShared_2053_ == 0)
{
lean_ctor_set(v___x_2052_, 0, v___x_2068_);
v___x_2070_ = v___x_2052_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_fresh_2050_);
v___x_2070_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2071_ = lean_st_ref_set(v_a_2044_, v___x_2070_);
v___x_2072_ = lean_box(0);
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
return v___x_2073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___boxed(lean_object* v_lhsId_2084_, lean_object* v_fvarId_2085_, lean_object* v_args_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2084_, v_fvarId_2085_, v_args_2086_, v_a_2087_);
lean_dec(v_a_2087_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply(lean_object* v_lhsId_2090_, lean_object* v_fvarId_2091_, lean_object* v_args_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_){
_start:
{
lean_object* v___x_2098_; 
v___x_2098_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2090_, v_fvarId_2091_, v_args_2092_, v_a_2094_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___boxed(lean_object* v_lhsId_2099_, lean_object* v_fvarId_2100_, lean_object* v_args_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_Compiler_LCNF_EmitYul_emitApply(v_lhsId_2099_, v_fvarId_2100_, v_args_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
return v_res_2107_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0(void){
_start:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2108_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue(lean_object* v_lhs_2110_, lean_object* v_value_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_lhsId_2117_; lean_object* v_i_2119_; lean_object* v_fvarId_2120_; lean_object* v___y_2121_; 
v_lhsId_2117_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_lhs_2110_);
switch(lean_obj_tag(v_value_2111_))
{
case 0:
{
lean_object* v_value_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2189_; 
v_value_2145_ = lean_ctor_get(v_value_2111_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v_value_2111_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2147_ = v_value_2111_;
v_isShared_2148_ = v_isSharedCheck_2189_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_value_2145_);
lean_dec(v_value_2111_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2189_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
if (lean_obj_tag(v_value_2145_) == 1)
{
lean_object* v_val_2149_; lean_object* v___x_2150_; 
lean_del_object(v___x_2147_);
v_val_2149_ = lean_ctor_get(v_value_2145_, 0);
lean_inc_ref(v_val_2149_);
lean_dec_ref_known(v_value_2145_, 1);
v___x_2150_ = l_Lean_Compiler_LCNF_EmitYul_emitStringLit(v_lhsId_2117_, v_val_2149_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec_ref(v_val_2149_);
return v___x_2150_;
}
else
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_value_2145_, v_a_2114_, v_a_2115_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2180_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2154_ = v___x_2151_;
v_isShared_2155_ = v_isSharedCheck_2180_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2151_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2180_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v_stmts_2157_; lean_object* v_fresh_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2179_; 
v___x_2156_ = lean_st_ref_take(v_a_2113_);
v_stmts_2157_ = lean_ctor_get(v___x_2156_, 0);
v_fresh_2158_ = lean_ctor_get(v___x_2156_, 1);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2160_ = v___x_2156_;
v_isShared_2161_ = v_isSharedCheck_2179_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_fresh_2158_);
lean_inc(v_stmts_2157_);
lean_dec(v___x_2156_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2179_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2167_; 
v___x_2162_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2163_ = lean_unsigned_to_nat(1u);
v___x_2164_ = lean_mk_empty_array_with_capacity(v___x_2163_);
v___x_2165_ = lean_array_push(v___x_2164_, v___x_2162_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set_tag(v___x_2147_, 1);
lean_ctor_set(v___x_2147_, 0, v_a_2152_);
v___x_2167_ = v___x_2147_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2152_);
v___x_2167_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2171_; 
v___x_2168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2165_);
lean_ctor_set(v___x_2168_, 1, v___x_2167_);
v___x_2169_ = lean_array_push(v_stmts_2157_, v___x_2168_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 0, v___x_2169_);
v___x_2171_ = v___x_2160_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2169_);
lean_ctor_set(v_reuseFailAlloc_2177_, 1, v_fresh_2158_);
v___x_2171_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2172_ = lean_st_ref_set(v_a_2113_, v___x_2171_);
v___x_2173_ = lean_box(0);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2173_);
v___x_2175_ = v___x_2154_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_del_object(v___x_2147_);
lean_dec_ref(v_lhsId_2117_);
v_a_2181_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2151_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2151_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
}
}
case 1:
{
lean_object* v___x_2190_; lean_object* v_stmts_2191_; lean_object* v_fresh_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2209_; 
v___x_2190_ = lean_st_ref_take(v_a_2113_);
v_stmts_2191_ = lean_ctor_get(v___x_2190_, 0);
v_fresh_2192_ = lean_ctor_get(v___x_2190_, 1);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2194_ = v___x_2190_;
v_isShared_2195_ = v_isSharedCheck_2209_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_fresh_2192_);
lean_inc(v_stmts_2191_);
lean_dec(v___x_2190_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2209_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2204_; 
v___x_2196_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2197_ = lean_unsigned_to_nat(1u);
v___x_2198_ = lean_mk_empty_array_with_capacity(v___x_2197_);
v___x_2199_ = lean_array_push(v___x_2198_, v___x_2196_);
v___x_2200_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_2201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___x_2202_ = lean_array_push(v_stmts_2191_, v___x_2201_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 0, v___x_2202_);
v___x_2204_ = v___x_2194_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2202_);
lean_ctor_set(v_reuseFailAlloc_2208_, 1, v_fresh_2192_);
v___x_2204_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2205_ = lean_st_ref_set(v_a_2113_, v___x_2204_);
v___x_2206_ = lean_box(0);
v___x_2207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2206_);
return v___x_2207_;
}
}
}
case 4:
{
lean_object* v_fvarId_2210_; lean_object* v_args_2211_; lean_object* v___x_2212_; 
v_fvarId_2210_ = lean_ctor_get(v_value_2111_, 0);
lean_inc(v_fvarId_2210_);
v_args_2211_ = lean_ctor_get(v_value_2111_, 1);
lean_inc_ref(v_args_2211_);
lean_dec_ref_known(v_value_2111_, 2);
v___x_2212_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2117_, v_fvarId_2210_, v_args_2211_, v_a_2113_);
return v___x_2212_;
}
case 5:
{
lean_object* v_i_2213_; lean_object* v_args_2214_; lean_object* v___x_2215_; 
v_i_2213_ = lean_ctor_get(v_value_2111_, 0);
lean_inc_ref(v_i_2213_);
v_args_2214_ = lean_ctor_get(v_value_2111_, 1);
lean_inc_ref(v_args_2214_);
lean_dec_ref_known(v_value_2111_, 2);
v___x_2215_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_2117_, v_i_2213_, v_args_2214_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec_ref(v_args_2214_);
return v___x_2215_;
}
case 8:
{
lean_object* v_offset_2216_; lean_object* v_var_2217_; lean_object* v___x_2218_; lean_object* v_stmts_2219_; lean_object* v_fresh_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2249_; 
v_offset_2216_ = lean_ctor_get(v_value_2111_, 1);
lean_inc(v_offset_2216_);
v_var_2217_ = lean_ctor_get(v_value_2111_, 2);
lean_inc(v_var_2217_);
lean_dec_ref_known(v_value_2111_, 3);
v___x_2218_ = lean_st_ref_take(v_a_2113_);
v_stmts_2219_ = lean_ctor_get(v___x_2218_, 0);
v_fresh_2220_ = lean_ctor_get(v___x_2218_, 1);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2222_ = v___x_2218_;
v_isShared_2223_ = v_isSharedCheck_2249_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_fresh_2220_);
lean_inc(v_stmts_2219_);
lean_dec(v___x_2218_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2249_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v_addr_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2244_; 
v___x_2224_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2225_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_2217_);
v___x_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
v___x_2227_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2216_);
v___x_2228_ = lean_unsigned_to_nat(2u);
v___x_2229_ = lean_mk_empty_array_with_capacity(v___x_2228_);
v___x_2230_ = lean_array_push(v___x_2229_, v___x_2226_);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2227_);
v_addr_2232_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2232_, 0, v___x_2224_);
lean_ctor_set(v_addr_2232_, 1, v___x_2231_);
v___x_2233_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2234_ = lean_unsigned_to_nat(1u);
v___x_2235_ = lean_mk_empty_array_with_capacity(v___x_2234_);
lean_inc_ref(v___x_2235_);
v___x_2236_ = lean_array_push(v___x_2235_, v___x_2233_);
v___x_2237_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_2238_ = lean_array_push(v___x_2235_, v_addr_2232_);
v___x_2239_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2237_);
lean_ctor_set(v___x_2239_, 1, v___x_2238_);
v___x_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
v___x_2241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2236_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
v___x_2242_ = lean_array_push(v_stmts_2219_, v___x_2241_);
if (v_isShared_2223_ == 0)
{
lean_ctor_set(v___x_2222_, 0, v___x_2242_);
v___x_2244_ = v___x_2222_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v___x_2242_);
lean_ctor_set(v_reuseFailAlloc_2248_, 1, v_fresh_2220_);
v___x_2244_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = lean_st_ref_set(v_a_2113_, v___x_2244_);
v___x_2246_ = lean_box(0);
v___x_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
return v___x_2247_;
}
}
}
case 9:
{
lean_object* v_fn_2250_; lean_object* v_args_2251_; lean_object* v___x_2252_; 
v_fn_2250_ = lean_ctor_get(v_value_2111_, 0);
lean_inc(v_fn_2250_);
v_args_2251_ = lean_ctor_get(v_value_2111_, 1);
lean_inc_ref(v_args_2251_);
lean_dec_ref_known(v_value_2111_, 2);
v___x_2252_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2117_, v_fn_2250_, v_args_2251_, v_a_2113_, v_a_2115_);
return v___x_2252_;
}
case 10:
{
lean_object* v_fn_2253_; lean_object* v_args_2254_; lean_object* v___x_2255_; 
v_fn_2253_ = lean_ctor_get(v_value_2111_, 0);
lean_inc(v_fn_2253_);
v_args_2254_ = lean_ctor_get(v_value_2111_, 1);
lean_inc_ref(v_args_2254_);
lean_dec_ref_known(v_value_2111_, 2);
v___x_2255_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_2117_, v_fn_2253_, v_args_2254_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec_ref(v_args_2254_);
lean_dec(v_fn_2253_);
return v___x_2255_;
}
case 11:
{
lean_object* v_var_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2284_; 
v_var_2256_ = lean_ctor_get(v_value_2111_, 1);
v_isSharedCheck_2284_ = !lean_is_exclusive(v_value_2111_);
if (v_isSharedCheck_2284_ == 0)
{
lean_object* v_unused_2285_; 
v_unused_2285_ = lean_ctor_get(v_value_2111_, 0);
lean_dec(v_unused_2285_);
v___x_2258_ = v_value_2111_;
v_isShared_2259_ = v_isSharedCheck_2284_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_var_2256_);
lean_dec(v_value_2111_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2284_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v_stmts_2261_; lean_object* v_fresh_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2283_; 
v___x_2260_ = lean_st_ref_take(v_a_2113_);
v_stmts_2261_ = lean_ctor_get(v___x_2260_, 0);
v_fresh_2262_ = lean_ctor_get(v___x_2260_, 1);
v_isSharedCheck_2283_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2283_ == 0)
{
v___x_2264_ = v___x_2260_;
v_isShared_2265_ = v_isSharedCheck_2283_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_fresh_2262_);
lean_inc(v_stmts_2261_);
lean_dec(v___x_2260_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2283_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2274_; 
v___x_2266_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2267_ = lean_unsigned_to_nat(1u);
v___x_2268_ = lean_mk_empty_array_with_capacity(v___x_2267_);
v___x_2269_ = lean_array_push(v___x_2268_, v___x_2266_);
v___x_2270_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_2256_);
v___x_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
v___x_2272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set_tag(v___x_2258_, 1);
lean_ctor_set(v___x_2258_, 1, v___x_2272_);
lean_ctor_set(v___x_2258_, 0, v___x_2269_);
v___x_2274_ = v___x_2258_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2282_; 
v_reuseFailAlloc_2282_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2282_, 0, v___x_2269_);
lean_ctor_set(v_reuseFailAlloc_2282_, 1, v___x_2272_);
v___x_2274_ = v_reuseFailAlloc_2282_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
lean_object* v___x_2275_; lean_object* v___x_2277_; 
v___x_2275_ = lean_array_push(v_stmts_2261_, v___x_2274_);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 0, v___x_2275_);
v___x_2277_ = v___x_2264_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2281_, 1, v_fresh_2262_);
v___x_2277_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2278_ = lean_st_ref_set(v_a_2113_, v___x_2277_);
v___x_2279_ = lean_box(0);
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
return v___x_2280_;
}
}
}
}
}
case 12:
{
lean_object* v_i_2286_; lean_object* v_args_2287_; lean_object* v___x_2288_; 
v_i_2286_ = lean_ctor_get(v_value_2111_, 1);
lean_inc_ref(v_i_2286_);
v_args_2287_ = lean_ctor_get(v_value_2111_, 2);
lean_inc_ref(v_args_2287_);
lean_dec_ref_known(v_value_2111_, 3);
v___x_2288_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_2117_, v_i_2286_, v_args_2287_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
lean_dec_ref(v_args_2287_);
return v___x_2288_;
}
case 13:
{
lean_object* v_fvarId_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2318_; 
v_fvarId_2289_ = lean_ctor_get(v_value_2111_, 1);
v_isSharedCheck_2318_ = !lean_is_exclusive(v_value_2111_);
if (v_isSharedCheck_2318_ == 0)
{
lean_object* v_unused_2319_; 
v_unused_2319_ = lean_ctor_get(v_value_2111_, 0);
lean_dec(v_unused_2319_);
v___x_2291_ = v_value_2111_;
v_isShared_2292_ = v_isSharedCheck_2318_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_fvarId_2289_);
lean_dec(v_value_2111_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2318_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2293_; lean_object* v_stmts_2294_; lean_object* v_fresh_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2317_; 
v___x_2293_ = lean_st_ref_take(v_a_2113_);
v_stmts_2294_ = lean_ctor_get(v___x_2293_, 0);
v_fresh_2295_ = lean_ctor_get(v___x_2293_, 1);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2297_ = v___x_2293_;
v_isShared_2298_ = v_isSharedCheck_2317_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_fresh_2295_);
lean_inc(v_stmts_2294_);
lean_dec(v___x_2293_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2317_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2308_; 
v___x_2299_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2300_ = lean_unsigned_to_nat(1u);
v___x_2301_ = lean_mk_empty_array_with_capacity(v___x_2300_);
v___x_2302_ = lean_array_push(v___x_2301_, v___x_2299_);
v___x_2303_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2289_);
v___x_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
v___x_2305_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_2304_);
v___x_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
if (v_isShared_2292_ == 0)
{
lean_ctor_set_tag(v___x_2291_, 1);
lean_ctor_set(v___x_2291_, 1, v___x_2306_);
lean_ctor_set(v___x_2291_, 0, v___x_2302_);
v___x_2308_ = v___x_2291_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v___x_2302_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v___x_2306_);
v___x_2308_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
lean_object* v___x_2309_; lean_object* v___x_2311_; 
v___x_2309_ = lean_array_push(v_stmts_2294_, v___x_2308_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 0, v___x_2309_);
v___x_2311_ = v___x_2297_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2309_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_fresh_2295_);
v___x_2311_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2312_ = lean_st_ref_set(v_a_2113_, v___x_2311_);
v___x_2313_ = lean_box(0);
v___x_2314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
return v___x_2314_;
}
}
}
}
}
case 14:
{
lean_object* v_fvarId_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2349_; 
v_fvarId_2320_ = lean_ctor_get(v_value_2111_, 0);
v_isSharedCheck_2349_ = !lean_is_exclusive(v_value_2111_);
if (v_isSharedCheck_2349_ == 0)
{
v___x_2322_ = v_value_2111_;
v_isShared_2323_ = v_isSharedCheck_2349_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_fvarId_2320_);
lean_dec(v_value_2111_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2349_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2324_; lean_object* v_stmts_2325_; lean_object* v_fresh_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2348_; 
v___x_2324_ = lean_st_ref_take(v_a_2113_);
v_stmts_2325_ = lean_ctor_get(v___x_2324_, 0);
v_fresh_2326_ = lean_ctor_get(v___x_2324_, 1);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2324_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2328_ = v___x_2324_;
v_isShared_2329_ = v_isSharedCheck_2348_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_fresh_2326_);
lean_inc(v_stmts_2325_);
lean_dec(v___x_2324_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2348_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2336_; 
v___x_2330_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2331_ = lean_unsigned_to_nat(1u);
v___x_2332_ = lean_mk_empty_array_with_capacity(v___x_2331_);
v___x_2333_ = lean_array_push(v___x_2332_, v___x_2330_);
v___x_2334_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2320_);
if (v_isShared_2323_ == 0)
{
lean_ctor_set_tag(v___x_2322_, 1);
lean_ctor_set(v___x_2322_, 0, v___x_2334_);
v___x_2336_ = v___x_2322_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v___x_2334_);
v___x_2336_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2342_; 
v___x_2337_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_2336_);
v___x_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
v___x_2339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2333_);
lean_ctor_set(v___x_2339_, 1, v___x_2338_);
v___x_2340_ = lean_array_push(v_stmts_2325_, v___x_2339_);
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 0, v___x_2340_);
v___x_2342_ = v___x_2328_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v___x_2340_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_fresh_2326_);
v___x_2342_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2343_ = lean_st_ref_set(v_a_2113_, v___x_2342_);
v___x_2344_ = lean_box(0);
v___x_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2344_);
return v___x_2345_;
}
}
}
}
}
case 15:
{
lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2375_; 
v_isSharedCheck_2375_ = !lean_is_exclusive(v_value_2111_);
if (v_isSharedCheck_2375_ == 0)
{
lean_object* v_unused_2376_; 
v_unused_2376_ = lean_ctor_get(v_value_2111_, 0);
lean_dec(v_unused_2376_);
v___x_2351_ = v_value_2111_;
v_isShared_2352_ = v_isSharedCheck_2375_;
goto v_resetjp_2350_;
}
else
{
lean_dec(v_value_2111_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2375_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2353_; lean_object* v_stmts_2354_; lean_object* v_fresh_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2374_; 
v___x_2353_ = lean_st_ref_take(v_a_2113_);
v_stmts_2354_ = lean_ctor_get(v___x_2353_, 0);
v_fresh_2355_ = lean_ctor_get(v___x_2353_, 1);
v_isSharedCheck_2374_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2357_ = v___x_2353_;
v_isShared_2358_ = v_isSharedCheck_2374_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_fresh_2355_);
lean_inc(v_stmts_2354_);
lean_dec(v___x_2353_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2374_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2367_; 
v___x_2359_ = lean_unsigned_to_nat(1u);
v___x_2360_ = lean_mk_empty_array_with_capacity(v___x_2359_);
v___x_2361_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2362_ = lean_array_push(v___x_2360_, v___x_2361_);
v___x_2363_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0);
v___x_2364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2362_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
v___x_2365_ = lean_array_push(v_stmts_2354_, v___x_2364_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 0, v___x_2365_);
v___x_2367_ = v___x_2357_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2373_; 
v_reuseFailAlloc_2373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2373_, 0, v___x_2365_);
lean_ctor_set(v_reuseFailAlloc_2373_, 1, v_fresh_2355_);
v___x_2367_ = v_reuseFailAlloc_2373_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2371_; 
v___x_2368_ = lean_st_ref_set(v_a_2113_, v___x_2367_);
v___x_2369_ = lean_box(0);
if (v_isShared_2352_ == 0)
{
lean_ctor_set_tag(v___x_2351_, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2369_);
v___x_2371_ = v___x_2351_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2369_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
}
default: 
{
lean_object* v_i_2377_; lean_object* v_var_2378_; 
v_i_2377_ = lean_ctor_get(v_value_2111_, 0);
lean_inc(v_i_2377_);
v_var_2378_ = lean_ctor_get(v_value_2111_, 1);
lean_inc(v_var_2378_);
lean_dec(v_value_2111_);
v_i_2119_ = v_i_2377_;
v_fvarId_2120_ = v_var_2378_;
v___y_2121_ = v_a_2113_;
goto v___jp_2118_;
}
}
v___jp_2118_:
{
lean_object* v___x_2122_; lean_object* v_stmts_2123_; lean_object* v_fresh_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2144_; 
v___x_2122_ = lean_st_ref_take(v___y_2121_);
v_stmts_2123_ = lean_ctor_get(v___x_2122_, 0);
v_fresh_2124_ = lean_ctor_get(v___x_2122_, 1);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2126_ = v___x_2122_;
v_isShared_2127_ = v_isSharedCheck_2144_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_fresh_2124_);
lean_inc(v_stmts_2123_);
lean_dec(v___x_2122_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2144_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2139_; 
v___x_2128_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2117_);
v___x_2129_ = lean_unsigned_to_nat(1u);
v___x_2130_ = lean_mk_empty_array_with_capacity(v___x_2129_);
v___x_2131_ = lean_array_push(v___x_2130_, v___x_2128_);
v___x_2132_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2120_);
v___x_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
v___x_2134_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v___x_2133_, v_i_2119_);
lean_dec(v_i_2119_);
v___x_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
v___x_2136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2131_);
lean_ctor_set(v___x_2136_, 1, v___x_2135_);
v___x_2137_ = lean_array_push(v_stmts_2123_, v___x_2136_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 0, v___x_2137_);
v___x_2139_ = v___x_2126_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2143_, 1, v_fresh_2124_);
v___x_2139_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2140_ = lean_st_ref_set(v___y_2121_, v___x_2139_);
v___x_2141_ = lean_box(0);
v___x_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
return v___x_2142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue___boxed(lean_object* v_lhs_2379_, lean_object* v_value_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v_res_2386_; 
v_res_2386_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_lhs_2379_, v_value_2380_, v_a_2381_, v_a_2382_, v_a_2383_, v_a_2384_);
lean_dec(v_a_2384_);
lean_dec_ref(v_a_2383_);
lean_dec(v_a_2382_);
lean_dec_ref(v_a_2381_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(lean_object* v_params_2387_, lean_object* v_args_2388_, lean_object* v_range_2389_, lean_object* v_b_2390_, lean_object* v_i_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_stop_2394_; lean_object* v_step_2395_; uint8_t v___x_2396_; 
v_stop_2394_ = lean_ctor_get(v_range_2389_, 1);
v_step_2395_ = lean_ctor_get(v_range_2389_, 2);
v___x_2396_ = lean_nat_dec_lt(v_i_2391_, v_stop_2394_);
if (v___x_2396_ == 0)
{
lean_object* v___x_2397_; 
lean_dec(v_i_2391_);
v___x_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2397_, 0, v_b_2390_);
return v___x_2397_;
}
else
{
lean_object* v___x_2398_; lean_object* v_type_2399_; lean_object* v___x_2400_; uint8_t v___y_2405_; uint8_t v___x_2429_; 
v___x_2398_ = lean_array_fget_borrowed(v_params_2387_, v_i_2391_);
v_type_2399_ = lean_ctor_get(v___x_2398_, 2);
v___x_2400_ = lean_box(0);
v___x_2429_ = l_Lean_Expr_isVoid(v_type_2399_);
if (v___x_2429_ == 0)
{
uint8_t v___x_2430_; 
v___x_2430_ = l_Lean_Expr_isErased(v_type_2399_);
v___y_2405_ = v___x_2430_;
goto v___jp_2404_;
}
else
{
v___y_2405_ = v___x_2429_;
goto v___jp_2404_;
}
v___jp_2401_:
{
lean_object* v___x_2402_; 
v___x_2402_ = lean_nat_add(v_i_2391_, v_step_2395_);
lean_dec(v_i_2391_);
v_b_2390_ = v___x_2400_;
v_i_2391_ = v___x_2402_;
goto _start;
}
v___jp_2404_:
{
if (v___y_2405_ == 0)
{
lean_object* v___x_2406_; lean_object* v_fvarId_2407_; lean_object* v_stmts_2408_; lean_object* v_fresh_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2428_; 
v___x_2406_ = lean_st_ref_take(v___y_2392_);
v_fvarId_2407_ = lean_ctor_get(v___x_2398_, 0);
v_stmts_2408_ = lean_ctor_get(v___x_2406_, 0);
v_fresh_2409_ = lean_ctor_get(v___x_2406_, 1);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2411_ = v___x_2406_;
v_isShared_2412_ = v_isSharedCheck_2428_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_fresh_2409_);
lean_inc(v_stmts_2408_);
lean_dec(v___x_2406_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2428_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2413_ = lean_box(0);
v___x_2414_ = lean_array_get_borrowed(v___x_2413_, v_args_2388_, v_i_2391_);
lean_inc(v_fvarId_2407_);
v___x_2415_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2407_);
v___x_2416_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2415_);
v___x_2417_ = lean_unsigned_to_nat(1u);
v___x_2418_ = lean_mk_empty_array_with_capacity(v___x_2417_);
v___x_2419_ = lean_array_push(v___x_2418_, v___x_2416_);
lean_inc(v___x_2414_);
v___x_2420_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_2414_);
v___x_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
v___x_2422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2419_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_array_push(v_stmts_2408_, v___x_2422_);
if (v_isShared_2412_ == 0)
{
lean_ctor_set(v___x_2411_, 0, v___x_2423_);
v___x_2425_ = v___x_2411_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v___x_2423_);
lean_ctor_set(v_reuseFailAlloc_2427_, 1, v_fresh_2409_);
v___x_2425_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_st_ref_set(v___y_2392_, v___x_2425_);
goto v___jp_2401_;
}
}
}
else
{
goto v___jp_2401_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg___boxed(lean_object* v_params_2431_, lean_object* v_args_2432_, lean_object* v_range_2433_, lean_object* v_b_2434_, lean_object* v_i_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2431_, v_args_2432_, v_range_2433_, v_b_2434_, v_i_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec_ref(v_range_2433_);
lean_dec_ref(v_args_2432_);
lean_dec_ref(v_params_2431_);
return v_res_2438_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1(void){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0));
v___x_2444_ = l_Lean_stringToMessageData(v___x_2443_);
return v___x_2444_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2446_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2));
v___x_2447_ = l_Lean_stringToMessageData(v___x_2446_);
return v___x_2447_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5(void){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4));
v___x_2450_ = l_Lean_stringToMessageData(v___x_2449_);
return v___x_2450_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6));
v___x_2453_ = l_Lean_stringToMessageData(v___x_2452_);
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10(void){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2459_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2460_ = lean_unsigned_to_nat(2u);
v___x_2461_ = lean_mk_empty_array_with_capacity(v___x_2460_);
v___x_2462_ = lean_array_push(v___x_2461_, v___x_2459_);
return v___x_2462_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11(void){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2463_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2464_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_2465_ = lean_array_push(v___x_2464_, v___x_2463_);
return v___x_2465_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11);
v___x_2467_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_2468_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2467_);
lean_ctor_set(v___x_2468_, 1, v___x_2466_);
return v___x_2468_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12);
v___x_2470_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode(lean_object* v_code_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_){
_start:
{
switch(lean_obj_tag(v_code_2471_))
{
case 0:
{
lean_object* v_decl_2477_; lean_object* v_k_2478_; lean_object* v_fvarId_2479_; lean_object* v_value_2480_; lean_object* v___x_2481_; 
v_decl_2477_ = lean_ctor_get(v_code_2471_, 0);
lean_inc_ref(v_decl_2477_);
v_k_2478_ = lean_ctor_get(v_code_2471_, 1);
lean_inc_ref(v_k_2478_);
lean_dec_ref_known(v_code_2471_, 2);
v_fvarId_2479_ = lean_ctor_get(v_decl_2477_, 0);
lean_inc(v_fvarId_2479_);
v_value_2480_ = lean_ctor_get(v_decl_2477_, 3);
lean_inc(v_value_2480_);
lean_dec_ref(v_decl_2477_);
v___x_2481_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_fvarId_2479_, v_value_2480_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_dec_ref_known(v___x_2481_, 1);
v_code_2471_ = v_k_2478_;
goto _start;
}
else
{
lean_dec_ref(v_k_2478_);
return v___x_2481_;
}
}
case 3:
{
lean_object* v_fvarId_2483_; lean_object* v_args_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2540_; 
v_fvarId_2483_ = lean_ctor_get(v_code_2471_, 0);
v_args_2484_ = lean_ctor_get(v_code_2471_, 1);
v_isSharedCheck_2540_ = !lean_is_exclusive(v_code_2471_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2486_ = v_code_2471_;
v_isShared_2487_ = v_isSharedCheck_2540_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_args_2484_);
lean_inc(v_fvarId_2483_);
lean_dec(v_code_2471_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2540_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_2483_, v_a_2472_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v___x_2488_, 1);
if (lean_obj_tag(v_a_2489_) == 1)
{
lean_object* v_val_2490_; lean_object* v_params_2491_; lean_object* v_value_2492_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___y_2508_; lean_object* v___y_2509_; uint8_t v___x_2519_; 
v_val_2490_ = lean_ctor_get(v_a_2489_, 0);
lean_inc(v_val_2490_);
lean_dec_ref_known(v_a_2489_, 1);
v_params_2491_ = lean_ctor_get(v_val_2490_, 2);
lean_inc_ref(v_params_2491_);
v_value_2492_ = lean_ctor_get(v_val_2490_, 4);
lean_inc_ref(v_value_2492_);
lean_dec(v_val_2490_);
v___x_2519_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_fvarId_2483_, v_value_2492_);
if (v___x_2519_ == 0)
{
v___y_2506_ = v_a_2472_;
v___y_2507_ = v_a_2473_;
v___y_2508_ = v_a_2474_;
v___y_2509_ = v_a_2475_;
goto v___jp_2505_;
}
else
{
lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___x_2520_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3);
lean_inc(v_fvarId_2483_);
v___x_2521_ = l_Lean_MessageData_ofName(v_fvarId_2483_);
v___x_2522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2520_);
lean_ctor_set(v___x_2522_, 1, v___x_2521_);
v___x_2523_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5);
v___x_2524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2524_, v_a_2474_, v_a_2475_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_dec_ref_known(v___x_2525_, 1);
v___y_2506_ = v_a_2472_;
v___y_2507_ = v_a_2473_;
v___y_2508_ = v_a_2474_;
v___y_2509_ = v_a_2475_;
goto v___jp_2505_;
}
else
{
lean_dec_ref(v_value_2492_);
lean_dec_ref(v_params_2491_);
lean_del_object(v___x_2486_);
lean_dec_ref(v_args_2484_);
lean_dec(v_fvarId_2483_);
return v___x_2525_;
}
}
v___jp_2493_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2498_ = lean_unsigned_to_nat(0u);
v___x_2499_ = lean_array_get_size(v_params_2491_);
v___x_2500_ = lean_unsigned_to_nat(1u);
v___x_2501_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2498_);
lean_ctor_set(v___x_2501_, 1, v___x_2499_);
lean_ctor_set(v___x_2501_, 2, v___x_2500_);
v___x_2502_ = lean_box(0);
v___x_2503_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2491_, v_args_2484_, v___x_2501_, v___x_2502_, v___x_2498_, v___y_2495_);
lean_dec_ref_known(v___x_2501_, 3);
lean_dec_ref(v_args_2484_);
lean_dec_ref(v_params_2491_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_dec_ref_known(v___x_2503_, 1);
v_code_2471_ = v_value_2492_;
v_a_2472_ = v___y_2494_;
v_a_2473_ = v___y_2495_;
v_a_2474_ = v___y_2496_;
v_a_2475_ = v___y_2497_;
goto _start;
}
else
{
lean_dec_ref(v_value_2492_);
return v___x_2503_;
}
}
v___jp_2505_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; uint8_t v___x_2512_; 
v___x_2510_ = lean_array_get_size(v_args_2484_);
v___x_2511_ = lean_array_get_size(v_params_2491_);
v___x_2512_ = lean_nat_dec_eq(v___x_2510_, v___x_2511_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2516_; 
v___x_2513_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1);
v___x_2514_ = l_Lean_MessageData_ofName(v_fvarId_2483_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set_tag(v___x_2486_, 7);
lean_ctor_set(v___x_2486_, 1, v___x_2514_);
lean_ctor_set(v___x_2486_, 0, v___x_2513_);
v___x_2516_ = v___x_2486_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v___x_2513_);
lean_ctor_set(v_reuseFailAlloc_2518_, 1, v___x_2514_);
v___x_2516_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2516_, v___y_2508_, v___y_2509_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_dec_ref_known(v___x_2517_, 1);
v___y_2494_ = v___y_2506_;
v___y_2495_ = v___y_2507_;
v___y_2496_ = v___y_2508_;
v___y_2497_ = v___y_2509_;
goto v___jp_2493_;
}
else
{
lean_dec_ref(v_value_2492_);
lean_dec_ref(v_params_2491_);
lean_dec_ref(v_args_2484_);
return v___x_2517_;
}
}
}
else
{
lean_del_object(v___x_2486_);
lean_dec(v_fvarId_2483_);
v___y_2494_ = v___y_2506_;
v___y_2495_ = v___y_2507_;
v___y_2496_ = v___y_2508_;
v___y_2497_ = v___y_2509_;
goto v___jp_2493_;
}
}
}
else
{
lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2529_; 
lean_dec(v_a_2489_);
lean_dec_ref(v_args_2484_);
v___x_2526_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7);
v___x_2527_ = l_Lean_MessageData_ofName(v_fvarId_2483_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set_tag(v___x_2486_, 7);
lean_ctor_set(v___x_2486_, 1, v___x_2527_);
lean_ctor_set(v___x_2486_, 0, v___x_2526_);
v___x_2529_ = v___x_2486_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2526_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v___x_2527_);
v___x_2529_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
lean_object* v___x_2530_; 
v___x_2530_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2529_, v_a_2474_, v_a_2475_);
return v___x_2530_;
}
}
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
lean_del_object(v___x_2486_);
lean_dec_ref(v_args_2484_);
lean_dec(v_fvarId_2483_);
v_a_2532_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2488_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2488_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
}
}
case 4:
{
lean_object* v_cases_2541_; lean_object* v___x_2542_; 
v_cases_2541_ = lean_ctor_get(v_code_2471_, 0);
lean_inc_ref(v_cases_2541_);
lean_dec_ref_known(v_code_2471_, 1);
v___x_2542_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cases_2541_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_);
return v___x_2542_;
}
case 5:
{
lean_object* v_fvarId_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2580_; 
v_fvarId_2543_ = lean_ctor_get(v_code_2471_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v_code_2471_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2545_ = v_code_2471_;
v_isShared_2546_ = v_isSharedCheck_2580_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_fvarId_2543_);
lean_dec(v_code_2471_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2580_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2547_; lean_object* v_stmts_2548_; lean_object* v_fresh_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2579_; 
v___x_2547_ = lean_st_ref_take(v_a_2473_);
v_stmts_2548_ = lean_ctor_get(v___x_2547_, 0);
v_fresh_2549_ = lean_ctor_get(v___x_2547_, 1);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2547_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2551_ = v___x_2547_;
v_isShared_2552_ = v_isSharedCheck_2579_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_fresh_2549_);
lean_inc(v_stmts_2548_);
lean_dec(v___x_2547_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2579_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; 
v___x_2553_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9));
v___x_2554_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2543_);
if (v_isShared_2546_ == 0)
{
lean_ctor_set_tag(v___x_2545_, 1);
lean_ctor_set(v___x_2545_, 0, v___x_2554_);
v___x_2556_ = v___x_2545_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2554_);
v___x_2556_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2560_; 
v___x_2557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2553_);
lean_ctor_set(v___x_2557_, 1, v___x_2556_);
v___x_2558_ = lean_array_push(v_stmts_2548_, v___x_2557_);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 0, v___x_2558_);
v___x_2560_ = v___x_2551_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v___x_2558_);
lean_ctor_set(v_reuseFailAlloc_2577_, 1, v_fresh_2549_);
v___x_2560_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v_stmts_2563_; lean_object* v_fresh_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2576_; 
v___x_2561_ = lean_st_ref_set(v_a_2473_, v___x_2560_);
v___x_2562_ = lean_st_ref_take(v_a_2473_);
v_stmts_2563_ = lean_ctor_get(v___x_2562_, 0);
v_fresh_2564_ = lean_ctor_get(v___x_2562_, 1);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2562_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2566_ = v___x_2562_;
v_isShared_2567_ = v_isSharedCheck_2576_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_fresh_2564_);
lean_inc(v_stmts_2563_);
lean_dec(v___x_2562_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2576_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2571_; 
v___x_2568_ = lean_box(10);
v___x_2569_ = lean_array_push(v_stmts_2563_, v___x_2568_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v___x_2569_);
v___x_2571_ = v___x_2566_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v___x_2569_);
lean_ctor_set(v_reuseFailAlloc_2575_, 1, v_fresh_2564_);
v___x_2571_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2572_ = lean_st_ref_set(v_a_2473_, v___x_2571_);
v___x_2573_ = lean_box(0);
v___x_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
return v___x_2574_;
}
}
}
}
}
}
}
case 6:
{
lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2601_; 
v_isSharedCheck_2601_ = !lean_is_exclusive(v_code_2471_);
if (v_isSharedCheck_2601_ == 0)
{
lean_object* v_unused_2602_; 
v_unused_2602_ = lean_ctor_get(v_code_2471_, 0);
lean_dec(v_unused_2602_);
v___x_2582_ = v_code_2471_;
v_isShared_2583_ = v_isSharedCheck_2601_;
goto v_resetjp_2581_;
}
else
{
lean_dec(v_code_2471_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2601_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; lean_object* v_stmts_2585_; lean_object* v_fresh_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2600_; 
v___x_2584_ = lean_st_ref_take(v_a_2473_);
v_stmts_2585_ = lean_ctor_get(v___x_2584_, 0);
v_fresh_2586_ = lean_ctor_get(v___x_2584_, 1);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2588_ = v___x_2584_;
v_isShared_2589_ = v_isSharedCheck_2600_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_fresh_2586_);
lean_inc(v_stmts_2585_);
lean_dec(v___x_2584_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2600_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2593_; 
v___x_2590_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13);
v___x_2591_ = lean_array_push(v_stmts_2585_, v___x_2590_);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v___x_2591_);
v___x_2593_ = v___x_2588_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2591_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v_fresh_2586_);
v___x_2593_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2597_; 
v___x_2594_ = lean_st_ref_set(v_a_2473_, v___x_2593_);
v___x_2595_ = lean_box(0);
if (v_isShared_2583_ == 0)
{
lean_ctor_set_tag(v___x_2582_, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2595_);
v___x_2597_ = v___x_2582_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_2603_; lean_object* v_i_2604_; lean_object* v_y_2605_; lean_object* v_k_2606_; lean_object* v___x_2607_; lean_object* v_stmts_2608_; lean_object* v_fresh_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2623_; 
v_fvarId_2603_ = lean_ctor_get(v_code_2471_, 0);
lean_inc(v_fvarId_2603_);
v_i_2604_ = lean_ctor_get(v_code_2471_, 1);
lean_inc(v_i_2604_);
v_y_2605_ = lean_ctor_get(v_code_2471_, 2);
lean_inc(v_y_2605_);
v_k_2606_ = lean_ctor_get(v_code_2471_, 3);
lean_inc_ref(v_k_2606_);
lean_dec_ref_known(v_code_2471_, 4);
v___x_2607_ = lean_st_ref_take(v_a_2473_);
v_stmts_2608_ = lean_ctor_get(v___x_2607_, 0);
v_fresh_2609_ = lean_ctor_get(v___x_2607_, 1);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2611_ = v___x_2607_;
v_isShared_2612_ = v_isSharedCheck_2623_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_fresh_2609_);
lean_inc(v_stmts_2608_);
lean_dec(v___x_2607_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2623_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2619_; 
v___x_2613_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2603_);
v___x_2614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
v___x_2615_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_y_2605_);
v___x_2616_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2614_, v_i_2604_, v___x_2615_);
lean_dec(v_i_2604_);
v___x_2617_ = lean_array_push(v_stmts_2608_, v___x_2616_);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 0, v___x_2617_);
v___x_2619_ = v___x_2611_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2617_);
lean_ctor_set(v_reuseFailAlloc_2622_, 1, v_fresh_2609_);
v___x_2619_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
lean_object* v___x_2620_; 
v___x_2620_ = lean_st_ref_set(v_a_2473_, v___x_2619_);
v_code_2471_ = v_k_2606_;
goto _start;
}
}
}
case 8:
{
lean_object* v_fvarId_2624_; lean_object* v_i_2625_; lean_object* v_y_2626_; lean_object* v_k_2627_; lean_object* v___x_2628_; lean_object* v_stmts_2629_; lean_object* v_fresh_2630_; lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2645_; 
v_fvarId_2624_ = lean_ctor_get(v_code_2471_, 0);
lean_inc(v_fvarId_2624_);
v_i_2625_ = lean_ctor_get(v_code_2471_, 1);
lean_inc(v_i_2625_);
v_y_2626_ = lean_ctor_get(v_code_2471_, 2);
lean_inc(v_y_2626_);
v_k_2627_ = lean_ctor_get(v_code_2471_, 3);
lean_inc_ref(v_k_2627_);
lean_dec_ref_known(v_code_2471_, 4);
v___x_2628_ = lean_st_ref_take(v_a_2473_);
v_stmts_2629_ = lean_ctor_get(v___x_2628_, 0);
v_fresh_2630_ = lean_ctor_get(v___x_2628_, 1);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2632_ = v___x_2628_;
v_isShared_2633_ = v_isSharedCheck_2645_;
goto v_resetjp_2631_;
}
else
{
lean_inc(v_fresh_2630_);
lean_inc(v_stmts_2629_);
lean_dec(v___x_2628_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2645_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2634_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2624_);
v___x_2635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2634_);
v___x_2636_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2626_);
v___x_2637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2636_);
v___x_2638_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2635_, v_i_2625_, v___x_2637_);
lean_dec(v_i_2625_);
v___x_2639_ = lean_array_push(v_stmts_2629_, v___x_2638_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 0, v___x_2639_);
v___x_2641_ = v___x_2632_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v___x_2639_);
lean_ctor_set(v_reuseFailAlloc_2644_, 1, v_fresh_2630_);
v___x_2641_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_st_ref_set(v_a_2473_, v___x_2641_);
v_code_2471_ = v_k_2627_;
goto _start;
}
}
}
case 9:
{
lean_object* v_fvarId_2646_; lean_object* v_offset_2647_; lean_object* v_y_2648_; lean_object* v_k_2649_; lean_object* v___x_2650_; lean_object* v_stmts_2651_; lean_object* v_fresh_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2678_; 
v_fvarId_2646_ = lean_ctor_get(v_code_2471_, 0);
lean_inc(v_fvarId_2646_);
v_offset_2647_ = lean_ctor_get(v_code_2471_, 2);
lean_inc(v_offset_2647_);
v_y_2648_ = lean_ctor_get(v_code_2471_, 3);
lean_inc(v_y_2648_);
v_k_2649_ = lean_ctor_get(v_code_2471_, 5);
lean_inc_ref(v_k_2649_);
lean_dec_ref_known(v_code_2471_, 6);
v___x_2650_ = lean_st_ref_take(v_a_2473_);
v_stmts_2651_ = lean_ctor_get(v___x_2650_, 0);
v_fresh_2652_ = lean_ctor_get(v___x_2650_, 1);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2654_ = v___x_2650_;
v_isShared_2655_ = v_isSharedCheck_2678_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_fresh_2652_);
lean_inc(v_stmts_2651_);
lean_dec(v___x_2650_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2678_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v_addr_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2674_; 
v___x_2656_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2646_);
v___x_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
v___x_2658_ = lean_unsigned_to_nat(2u);
v___x_2659_ = lean_mk_empty_array_with_capacity(v___x_2658_);
lean_inc_ref(v___x_2659_);
v___x_2660_ = lean_array_push(v___x_2659_, v___x_2657_);
v___x_2661_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2662_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2647_);
v___x_2663_ = lean_array_push(v___x_2660_, v___x_2662_);
v_addr_2664_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2664_, 0, v___x_2661_);
lean_ctor_set(v_addr_2664_, 1, v___x_2663_);
v___x_2665_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2666_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2648_);
v___x_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2666_);
v___x_2668_ = lean_array_push(v___x_2659_, v_addr_2664_);
v___x_2669_ = lean_array_push(v___x_2668_, v___x_2667_);
v___x_2670_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2665_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2670_);
v___x_2672_ = lean_array_push(v_stmts_2651_, v___x_2671_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 0, v___x_2672_);
v___x_2674_ = v___x_2654_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2672_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v_fresh_2652_);
v___x_2674_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
lean_object* v___x_2675_; 
v___x_2675_ = lean_st_ref_set(v_a_2473_, v___x_2674_);
v_code_2471_ = v_k_2649_;
goto _start;
}
}
}
case 10:
{
lean_object* v_fvarId_2679_; lean_object* v_cidx_2680_; lean_object* v_k_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v_stmts_2685_; lean_object* v_fresh_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2705_; 
v_fvarId_2679_ = lean_ctor_get(v_code_2471_, 0);
lean_inc(v_fvarId_2679_);
v_cidx_2680_ = lean_ctor_get(v_code_2471_, 1);
lean_inc(v_cidx_2680_);
v_k_2681_ = lean_ctor_get(v_code_2471_, 2);
lean_inc_ref(v_k_2681_);
lean_dec_ref_known(v_code_2471_, 3);
v___x_2682_ = lean_unsigned_to_nat(0u);
v___x_2683_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_2680_, v___x_2682_, v___x_2682_);
v___x_2684_ = lean_st_ref_take(v_a_2473_);
v_stmts_2685_ = lean_ctor_get(v___x_2684_, 0);
v_fresh_2686_ = lean_ctor_get(v___x_2684_, 1);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2688_ = v___x_2684_;
v_isShared_2689_ = v_isSharedCheck_2705_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_fresh_2686_);
lean_inc(v_stmts_2685_);
lean_dec(v___x_2684_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2705_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2701_; 
v___x_2690_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2691_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2679_);
v___x_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2691_);
v___x_2693_ = lean_unsigned_to_nat(2u);
v___x_2694_ = lean_mk_empty_array_with_capacity(v___x_2693_);
v___x_2695_ = lean_array_push(v___x_2694_, v___x_2692_);
v___x_2696_ = lean_array_push(v___x_2695_, v___x_2683_);
v___x_2697_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2690_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2697_);
v___x_2699_ = lean_array_push(v_stmts_2685_, v___x_2698_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set(v___x_2688_, 0, v___x_2699_);
v___x_2701_ = v___x_2688_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2699_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_fresh_2686_);
v___x_2701_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
lean_object* v___x_2702_; 
v___x_2702_ = lean_st_ref_set(v_a_2473_, v___x_2701_);
v_code_2471_ = v_k_2681_;
goto _start;
}
}
}
case 11:
{
lean_object* v_k_2706_; 
v_k_2706_ = lean_ctor_get(v_code_2471_, 2);
lean_inc_ref(v_k_2706_);
lean_dec_ref_known(v_code_2471_, 3);
v_code_2471_ = v_k_2706_;
goto _start;
}
case 12:
{
lean_object* v_k_2708_; 
v_k_2708_ = lean_ctor_get(v_code_2471_, 3);
lean_inc_ref(v_k_2708_);
lean_dec_ref_known(v_code_2471_, 4);
v_code_2471_ = v_k_2708_;
goto _start;
}
default: 
{
lean_object* v_k_2710_; 
v_k_2710_ = lean_ctor_get(v_code_2471_, 1);
lean_inc_ref(v_k_2710_);
lean_dec_ref(v_code_2471_);
v_code_2471_ = v_k_2710_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed(lean_object* v_code_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_);
lean_dec(v_a_2716_);
lean_dec_ref(v_a_2715_);
lean_dec(v_a_2714_);
lean_dec_ref(v_a_2713_);
return v_res_2718_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0));
v___x_2721_ = l_Lean_stringToMessageData(v___x_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(lean_object* v_as_2722_, size_t v_sz_2723_, size_t v_i_2724_, lean_object* v_b_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v_c_2732_; uint8_t v___x_2737_; 
v___x_2737_ = lean_usize_dec_lt(v_i_2724_, v_sz_2723_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2738_, 0, v_b_2725_);
return v___x_2738_;
}
else
{
lean_object* v_a_2739_; lean_object* v___y_2741_; 
v_a_2739_ = lean_array_uget(v_as_2722_, v_i_2724_);
switch(lean_obj_tag(v_a_2739_))
{
case 0:
{
lean_object* v_code_2788_; 
v_code_2788_ = lean_ctor_get(v_a_2739_, 2);
lean_inc_ref(v_code_2788_);
v___y_2741_ = v_code_2788_;
goto v___jp_2740_;
}
case 1:
{
lean_object* v_code_2789_; 
v_code_2789_ = lean_ctor_get(v_a_2739_, 1);
lean_inc_ref(v_code_2789_);
v___y_2741_ = v_code_2789_;
goto v___jp_2740_;
}
default: 
{
lean_object* v_code_2790_; 
v_code_2790_ = lean_ctor_get(v_a_2739_, 0);
lean_inc_ref(v_code_2790_);
v___y_2741_ = v_code_2790_;
goto v___jp_2740_;
}
}
v___jp_2740_:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed), 6, 1);
lean_closure_set(v___x_2742_, 0, v___y_2741_);
v___x_2743_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___x_2742_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2743_) == 0)
{
switch(lean_obj_tag(v_a_2739_))
{
case 0:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; 
lean_dec_ref_known(v_a_2739_, 3);
lean_dec_ref_known(v___x_2743_, 1);
v___x_2744_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1);
v___x_2745_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2744_, v___y_2728_, v___y_2729_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v___x_2745_, 1);
v_c_2732_ = v_a_2746_;
goto v___jp_2731_;
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v_b_2725_);
v_a_2747_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2745_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2745_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
case 1:
{
lean_object* v_info_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2767_; 
v_info_2755_ = lean_ctor_get(v_a_2739_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v_a_2739_);
if (v_isSharedCheck_2767_ == 0)
{
lean_object* v_unused_2768_; 
v_unused_2768_ = lean_ctor_get(v_a_2739_, 1);
lean_dec(v_unused_2768_);
v___x_2757_ = v_a_2739_;
v_isShared_2758_ = v_isSharedCheck_2767_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_info_2755_);
lean_dec(v_a_2739_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2767_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v_a_2759_; lean_object* v_cidx_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2765_; 
v_a_2759_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2759_);
lean_dec_ref_known(v___x_2743_, 1);
v_cidx_2760_ = lean_ctor_get(v_info_2755_, 1);
lean_inc(v_cidx_2760_);
lean_dec_ref(v_info_2755_);
v___x_2761_ = l_Lean_Compiler_Yul_Literal_natLit(v_cidx_2760_);
v___x_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2761_);
v___x_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_a_2759_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 0);
lean_ctor_set(v___x_2757_, 1, v___x_2763_);
lean_ctor_set(v___x_2757_, 0, v___x_2762_);
v___x_2765_ = v___x_2757_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2762_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
v_c_2732_ = v___x_2765_;
goto v___jp_2731_;
}
}
}
default: 
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2778_; 
v_a_2769_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2769_);
lean_dec_ref_known(v___x_2743_, 1);
v_isSharedCheck_2778_ = !lean_is_exclusive(v_a_2739_);
if (v_isSharedCheck_2778_ == 0)
{
lean_object* v_unused_2779_; 
v_unused_2779_ = lean_ctor_get(v_a_2739_, 0);
lean_dec(v_unused_2779_);
v___x_2771_ = v_a_2739_;
v_isShared_2772_ = v_isSharedCheck_2778_;
goto v_resetjp_2770_;
}
else
{
lean_dec(v_a_2739_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2778_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2775_; 
v___x_2773_ = lean_box(0);
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
lean_ctor_set(v___x_2771_, 0, v_a_2769_);
v___x_2775_ = v___x_2771_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2769_);
v___x_2775_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2773_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v_c_2732_ = v___x_2776_;
goto v___jp_2731_;
}
}
}
}
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_a_2739_);
lean_dec_ref(v_b_2725_);
v_a_2780_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2743_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2743_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
v___jp_2731_:
{
lean_object* v___x_2733_; size_t v___x_2734_; size_t v___x_2735_; 
v___x_2733_ = lean_array_push(v_b_2725_, v_c_2732_);
v___x_2734_ = ((size_t)1ULL);
v___x_2735_ = lean_usize_add(v_i_2724_, v___x_2734_);
v_i_2724_ = v___x_2735_;
v_b_2725_ = v___x_2733_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases(lean_object* v_cs_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_){
_start:
{
lean_object* v_discr_2797_; lean_object* v_alts_2798_; lean_object* v_yulCases_2799_; size_t v_sz_2800_; size_t v___x_2801_; lean_object* v___x_2802_; 
v_discr_2797_ = lean_ctor_get(v_cs_2791_, 2);
lean_inc(v_discr_2797_);
v_alts_2798_ = lean_ctor_get(v_cs_2791_, 3);
lean_inc_ref(v_alts_2798_);
lean_dec_ref(v_cs_2791_);
v_yulCases_2799_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0));
v_sz_2800_ = lean_array_size(v_alts_2798_);
v___x_2801_ = ((size_t)0ULL);
v___x_2802_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_alts_2798_, v_sz_2800_, v___x_2801_, v_yulCases_2799_, v_a_2792_, v_a_2793_, v_a_2794_, v_a_2795_);
lean_dec_ref(v_alts_2798_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2831_; 
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2805_ = v___x_2802_;
v_isShared_2806_ = v_isSharedCheck_2831_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2831_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v_stmts_2808_; lean_object* v_fresh_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2830_; 
v___x_2807_ = lean_st_ref_take(v_a_2793_);
v_stmts_2808_ = lean_ctor_get(v___x_2807_, 0);
v_fresh_2809_ = lean_ctor_get(v___x_2807_, 1);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2811_ = v___x_2807_;
v_isShared_2812_ = v_isSharedCheck_2830_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_fresh_2809_);
lean_inc(v_stmts_2808_);
lean_dec(v___x_2807_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2830_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v_discrTag_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2823_; 
v___x_2813_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_2814_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_discr_2797_);
v___x_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2815_, 0, v___x_2814_);
v___x_2816_ = lean_unsigned_to_nat(1u);
v___x_2817_ = lean_mk_empty_array_with_capacity(v___x_2816_);
v___x_2818_ = lean_array_push(v___x_2817_, v___x_2815_);
v_discrTag_2819_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_discrTag_2819_, 0, v___x_2813_);
lean_ctor_set(v_discrTag_2819_, 1, v___x_2818_);
v___x_2820_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2820_, 0, v_discrTag_2819_);
lean_ctor_set(v___x_2820_, 1, v_a_2803_);
v___x_2821_ = lean_array_push(v_stmts_2808_, v___x_2820_);
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 0, v___x_2821_);
v___x_2823_ = v___x_2811_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2821_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_fresh_2809_);
v___x_2823_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2827_; 
v___x_2824_ = lean_st_ref_set(v_a_2793_, v___x_2823_);
v___x_2825_ = lean_box(0);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2825_);
v___x_2827_ = v___x_2805_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_dec(v_discr_2797_);
v_a_2832_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2802_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2802_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___boxed(lean_object* v_cs_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_, lean_object* v_a_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cs_2840_, v_a_2841_, v_a_2842_, v_a_2843_, v_a_2844_);
lean_dec(v_a_2844_);
lean_dec_ref(v_a_2843_);
lean_dec(v_a_2842_);
lean_dec_ref(v_a_2841_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___boxed(lean_object* v_as_2847_, lean_object* v_sz_2848_, lean_object* v_i_2849_, lean_object* v_b_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
size_t v_sz_boxed_2856_; size_t v_i_boxed_2857_; lean_object* v_res_2858_; 
v_sz_boxed_2856_ = lean_unbox_usize(v_sz_2848_);
lean_dec(v_sz_2848_);
v_i_boxed_2857_ = lean_unbox_usize(v_i_2849_);
lean_dec(v_i_2849_);
v_res_2858_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_as_2847_, v_sz_boxed_2856_, v_i_boxed_2857_, v_b_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec_ref(v_as_2847_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(lean_object* v_params_2859_, lean_object* v_args_2860_, lean_object* v_range_2861_, lean_object* v_b_2862_, lean_object* v_i_2863_, lean_object* v_hs_2864_, lean_object* v_hl_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v___x_2871_; 
v___x_2871_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2859_, v_args_2860_, v_range_2861_, v_b_2862_, v_i_2863_, v___y_2867_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___boxed(lean_object* v_params_2872_, lean_object* v_args_2873_, lean_object* v_range_2874_, lean_object* v_b_2875_, lean_object* v_i_2876_, lean_object* v_hs_2877_, lean_object* v_hl_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(v_params_2872_, v_args_2873_, v_range_2874_, v_b_2875_, v_i_2876_, v_hs_2877_, v_hl_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
lean_dec_ref(v_range_2874_);
lean_dec_ref(v_args_2873_);
lean_dec_ref(v_params_2872_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(lean_object* v_code_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2912_; 
v_isSharedCheck_2912_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v___x_2891_, 0);
lean_dec(v_unused_2913_);
v___x_2893_ = v___x_2891_;
v_isShared_2894_ = v_isSharedCheck_2912_;
goto v_resetjp_2892_;
}
else
{
lean_dec(v___x_2891_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2912_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v_stmts_2896_; lean_object* v_fresh_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2911_; 
v___x_2895_ = lean_st_ref_take(v___y_2887_);
v_stmts_2896_ = lean_ctor_get(v___x_2895_, 0);
v_fresh_2897_ = lean_ctor_get(v___x_2895_, 1);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2899_ = v___x_2895_;
v_isShared_2900_ = v_isSharedCheck_2911_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_fresh_2897_);
lean_inc(v_stmts_2896_);
lean_dec(v___x_2895_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2911_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2901_ = lean_box(10);
v___x_2902_ = lean_array_push(v_stmts_2896_, v___x_2901_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 0, v___x_2902_);
v___x_2904_ = v___x_2899_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v___x_2902_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v_fresh_2897_);
v___x_2904_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2905_ = lean_st_ref_set(v___y_2887_, v___x_2904_);
v___x_2906_ = lean_box(0);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2906_);
v___x_2908_ = v___x_2893_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___x_2906_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
else
{
return v___x_2891_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed(lean_object* v_code_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(v_code_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(lean_object* v_as_2921_, size_t v_i_2922_, size_t v_stop_2923_, lean_object* v_b_2924_){
_start:
{
lean_object* v___y_2926_; uint8_t v___x_2930_; 
v___x_2930_ = lean_usize_dec_eq(v_i_2922_, v_stop_2923_);
if (v___x_2930_ == 0)
{
lean_object* v___x_2931_; uint8_t v___y_2933_; lean_object* v_type_2935_; uint8_t v___x_2936_; 
v___x_2931_ = lean_array_uget_borrowed(v_as_2921_, v_i_2922_);
v_type_2935_ = lean_ctor_get(v___x_2931_, 2);
v___x_2936_ = l_Lean_Expr_isVoid(v_type_2935_);
if (v___x_2936_ == 0)
{
uint8_t v___x_2937_; 
v___x_2937_ = l_Lean_Expr_isErased(v_type_2935_);
v___y_2933_ = v___x_2937_;
goto v___jp_2932_;
}
else
{
v___y_2933_ = v___x_2936_;
goto v___jp_2932_;
}
v___jp_2932_:
{
if (v___y_2933_ == 0)
{
lean_object* v___x_2934_; 
lean_inc(v___x_2931_);
v___x_2934_ = lean_array_push(v_b_2924_, v___x_2931_);
v___y_2926_ = v___x_2934_;
goto v___jp_2925_;
}
else
{
v___y_2926_ = v_b_2924_;
goto v___jp_2925_;
}
}
}
else
{
return v_b_2924_;
}
v___jp_2925_:
{
size_t v___x_2927_; size_t v___x_2928_; 
v___x_2927_ = ((size_t)1ULL);
v___x_2928_ = lean_usize_add(v_i_2922_, v___x_2927_);
v_i_2922_ = v___x_2928_;
v_b_2924_ = v___y_2926_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1___boxed(lean_object* v_as_2938_, lean_object* v_i_2939_, lean_object* v_stop_2940_, lean_object* v_b_2941_){
_start:
{
size_t v_i_boxed_2942_; size_t v_stop_boxed_2943_; lean_object* v_res_2944_; 
v_i_boxed_2942_ = lean_unbox_usize(v_i_2939_);
lean_dec(v_i_2939_);
v_stop_boxed_2943_ = lean_unbox_usize(v_stop_2940_);
lean_dec(v_stop_2940_);
v_res_2944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_as_2938_, v_i_boxed_2942_, v_stop_boxed_2943_, v_b_2941_);
lean_dec_ref(v_as_2938_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(size_t v_sz_2945_, size_t v_i_2946_, lean_object* v_bs_2947_){
_start:
{
uint8_t v___x_2948_; 
v___x_2948_ = lean_usize_dec_lt(v_i_2946_, v_sz_2945_);
if (v___x_2948_ == 0)
{
return v_bs_2947_;
}
else
{
lean_object* v_v_2949_; lean_object* v_fvarId_2950_; lean_object* v___x_2951_; lean_object* v_bs_x27_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; size_t v___x_2955_; size_t v___x_2956_; lean_object* v___x_2957_; 
v_v_2949_ = lean_array_uget_borrowed(v_bs_2947_, v_i_2946_);
v_fvarId_2950_ = lean_ctor_get(v_v_2949_, 0);
lean_inc(v_fvarId_2950_);
v___x_2951_ = lean_unsigned_to_nat(0u);
v_bs_x27_2952_ = lean_array_uset(v_bs_2947_, v_i_2946_, v___x_2951_);
v___x_2953_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2950_);
v___x_2954_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2953_);
v___x_2955_ = ((size_t)1ULL);
v___x_2956_ = lean_usize_add(v_i_2946_, v___x_2955_);
v___x_2957_ = lean_array_uset(v_bs_x27_2952_, v_i_2946_, v___x_2954_);
v_i_2946_ = v___x_2956_;
v_bs_2947_ = v___x_2957_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0___boxed(lean_object* v_sz_2959_, lean_object* v_i_2960_, lean_object* v_bs_2961_){
_start:
{
size_t v_sz_boxed_2962_; size_t v_i_boxed_2963_; lean_object* v_res_2964_; 
v_sz_boxed_2962_ = lean_unbox_usize(v_sz_2959_);
lean_dec(v_sz_2959_);
v_i_boxed_2963_ = lean_unbox_usize(v_i_2960_);
lean_dec(v_i_2960_);
v_res_2964_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_boxed_2962_, v_i_boxed_2963_, v_bs_2961_);
return v_res_2964_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0(void){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
v___x_2965_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8));
v___x_2966_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2965_);
return v___x_2966_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1(void){
_start:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v_returnVars_2970_; 
v___x_2967_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0);
v___x_2968_ = lean_unsigned_to_nat(1u);
v___x_2969_ = lean_mk_empty_array_with_capacity(v___x_2968_);
v_returnVars_2970_ = lean_array_push(v___x_2969_, v___x_2967_);
return v_returnVars_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl(lean_object* v_decl_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_){
_start:
{
lean_object* v_value_2979_; 
v_value_2979_ = lean_ctor_get(v_decl_2973_, 1);
lean_inc_ref(v_value_2979_);
if (lean_obj_tag(v_value_2979_) == 0)
{
lean_object* v_toSignature_2980_; lean_object* v_code_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_3046_; 
v_toSignature_2980_ = lean_ctor_get(v_decl_2973_, 0);
lean_inc_ref(v_toSignature_2980_);
lean_dec_ref(v_decl_2973_);
v_code_2981_ = lean_ctor_get(v_value_2979_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_value_2979_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_2983_ = v_value_2979_;
v_isShared_2984_ = v_isSharedCheck_3046_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_code_2981_);
lean_dec(v_value_2979_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_3046_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v_name_2985_; lean_object* v_params_2986_; lean_object* v___f_2987_; lean_object* v_fnName_2988_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___y_3024_; lean_object* v___x_3037_; uint8_t v___x_3038_; 
v_name_2985_ = lean_ctor_get(v_toSignature_2980_, 0);
lean_inc_n(v_name_2985_, 2);
v_params_2986_ = lean_ctor_get(v_toSignature_2980_, 3);
lean_inc_ref(v_params_2986_);
lean_dec_ref(v_toSignature_2980_);
lean_inc_ref(v_code_2981_);
v___f_2987_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2987_, 0, v_code_2981_);
v_fnName_2988_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_name_2985_);
v___x_3021_ = lean_unsigned_to_nat(0u);
v___x_3022_ = lean_array_get_size(v_params_2986_);
v___x_3037_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2));
v___x_3038_ = lean_nat_dec_lt(v___x_3021_, v___x_3022_);
if (v___x_3038_ == 0)
{
v___y_3024_ = v___x_3037_;
goto v___jp_3023_;
}
else
{
uint8_t v___x_3039_; 
v___x_3039_ = lean_nat_dec_le(v___x_3022_, v___x_3022_);
if (v___x_3039_ == 0)
{
if (v___x_3038_ == 0)
{
v___y_3024_ = v___x_3037_;
goto v___jp_3023_;
}
else
{
size_t v___x_3040_; size_t v___x_3041_; lean_object* v___x_3042_; 
v___x_3040_ = ((size_t)0ULL);
v___x_3041_ = lean_usize_of_nat(v___x_3022_);
v___x_3042_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2986_, v___x_3040_, v___x_3041_, v___x_3037_);
v___y_3024_ = v___x_3042_;
goto v___jp_3023_;
}
}
else
{
size_t v___x_3043_; size_t v___x_3044_; lean_object* v___x_3045_; 
v___x_3043_ = ((size_t)0ULL);
v___x_3044_ = lean_usize_of_nat(v___x_3022_);
v___x_3045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2986_, v___x_3043_, v___x_3044_, v___x_3037_);
v___y_3024_ = v___x_3045_;
goto v___jp_3023_;
}
}
v___jp_2989_:
{
lean_object* v_localDecls_2994_; lean_object* v_otherModuleDecls_2995_; lean_object* v_modName_2996_; lean_object* v_fvarTypes_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v_localDecls_2994_ = lean_ctor_get(v_a_2974_, 0);
v_otherModuleDecls_2995_ = lean_ctor_get(v_a_2974_, 1);
v_modName_2996_ = lean_ctor_get(v_a_2974_, 2);
v_fvarTypes_2997_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v_code_2981_, v___y_2993_);
lean_inc(v_modName_2996_);
lean_inc_ref(v_otherModuleDecls_2995_);
lean_inc_ref(v_localDecls_2994_);
v___x_2998_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2998_, 0, v_localDecls_2994_);
lean_ctor_set(v___x_2998_, 1, v_otherModuleDecls_2995_);
lean_ctor_set(v___x_2998_, 2, v_modName_2996_);
lean_ctor_set(v___x_2998_, 3, v_name_2985_);
lean_ctor_set(v___x_2998_, 4, v_fvarTypes_2997_);
lean_ctor_set(v___x_2998_, 5, v___y_2990_);
v___x_2999_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___f_2987_, v___x_2998_, v_a_2975_, v_a_2976_, v_a_2977_);
lean_dec_ref_known(v___x_2998_, 6);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3012_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3002_ = v___x_2999_;
v_isShared_3003_ = v_isSharedCheck_3012_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2999_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3012_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v_a_3000_);
v___x_3005_ = v___x_2983_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3009_; 
lean_inc_ref(v___y_2992_);
v___x_3006_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3006_, 0, v_fnName_2988_);
lean_ctor_set(v___x_3006_, 1, v___y_2991_);
lean_ctor_set(v___x_3006_, 2, v___y_2992_);
lean_ctor_set(v___x_3006_, 3, v___x_3005_);
v___x_3007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 0, v___x_3007_);
v___x_3009_ = v___x_3002_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v___x_3007_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
lean_dec_ref(v___y_2991_);
lean_dec_ref(v_fnName_2988_);
lean_del_object(v___x_2983_);
v_a_3013_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v___x_2999_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_2999_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3018_; 
if (v_isShared_3016_ == 0)
{
v___x_3018_ = v___x_3015_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3013_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
v___jp_3023_:
{
size_t v_sz_3025_; size_t v___x_3026_; lean_object* v_paramNames_3027_; lean_object* v_returnVars_3028_; lean_object* v___x_3029_; lean_object* v_joinDecls_3030_; uint8_t v___x_3031_; 
v_sz_3025_ = lean_array_size(v___y_3024_);
v___x_3026_ = ((size_t)0ULL);
v_paramNames_3027_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_3025_, v___x_3026_, v___y_3024_);
v_returnVars_3028_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1);
v___x_3029_ = lean_box(1);
lean_inc_ref(v_code_2981_);
v_joinDecls_3030_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v_code_2981_, v___x_3029_);
v___x_3031_ = lean_nat_dec_lt(v___x_3021_, v___x_3022_);
if (v___x_3031_ == 0)
{
lean_dec_ref(v_params_2986_);
v___y_2990_ = v_joinDecls_3030_;
v___y_2991_ = v_paramNames_3027_;
v___y_2992_ = v_returnVars_3028_;
v___y_2993_ = v___x_3029_;
goto v___jp_2989_;
}
else
{
uint8_t v___x_3032_; 
v___x_3032_ = lean_nat_dec_le(v___x_3022_, v___x_3022_);
if (v___x_3032_ == 0)
{
if (v___x_3031_ == 0)
{
lean_dec_ref(v_params_2986_);
v___y_2990_ = v_joinDecls_3030_;
v___y_2991_ = v_paramNames_3027_;
v___y_2992_ = v_returnVars_3028_;
v___y_2993_ = v___x_3029_;
goto v___jp_2989_;
}
else
{
size_t v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = lean_usize_of_nat(v___x_3022_);
v___x_3034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2986_, v___x_3026_, v___x_3033_, v___x_3029_);
lean_dec_ref(v_params_2986_);
v___y_2990_ = v_joinDecls_3030_;
v___y_2991_ = v_paramNames_3027_;
v___y_2992_ = v_returnVars_3028_;
v___y_2993_ = v___x_3034_;
goto v___jp_2989_;
}
}
else
{
size_t v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = lean_usize_of_nat(v___x_3022_);
v___x_3036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2986_, v___x_3026_, v___x_3035_, v___x_3029_);
lean_dec_ref(v_params_2986_);
v___y_2990_ = v_joinDecls_3030_;
v___y_2991_ = v_paramNames_3027_;
v___y_2992_ = v_returnVars_3028_;
v___y_2993_ = v___x_3036_;
goto v___jp_2989_;
}
}
}
}
}
else
{
lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3054_; 
lean_dec_ref(v_decl_2973_);
v_isSharedCheck_3054_ = !lean_is_exclusive(v_value_2979_);
if (v_isSharedCheck_3054_ == 0)
{
lean_object* v_unused_3055_; 
v_unused_3055_ = lean_ctor_get(v_value_2979_, 0);
lean_dec(v_unused_3055_);
v___x_3048_ = v_value_2979_;
v_isShared_3049_ = v_isSharedCheck_3054_;
goto v_resetjp_3047_;
}
else
{
lean_dec(v_value_2979_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3054_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3050_; lean_object* v___x_3052_; 
v___x_3050_ = lean_box(0);
if (v_isShared_3049_ == 0)
{
lean_ctor_set_tag(v___x_3048_, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3050_);
v___x_3052_ = v___x_3048_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3053_; 
v_reuseFailAlloc_3053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3053_, 0, v___x_3050_);
v___x_3052_ = v_reuseFailAlloc_3053_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
return v___x_3052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___boxed(lean_object* v_decl_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_decl_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
lean_dec(v_a_3060_);
lean_dec_ref(v_a_3059_);
lean_dec(v_a_3058_);
lean_dec_ref(v_a_3057_);
return v_res_3062_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2(void){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1));
v___x_3066_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3065_);
return v___x_3066_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3(void){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3067_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2);
v___x_3068_ = lean_unsigned_to_nat(1u);
v___x_3069_ = lean_mk_empty_array_with_capacity(v___x_3068_);
v___x_3070_ = lean_array_push(v___x_3069_, v___x_3067_);
return v___x_3070_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4));
v___x_3073_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3072_);
return v___x_3073_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3074_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5);
v___x_3075_ = lean_unsigned_to_nat(1u);
v___x_3076_ = lean_mk_empty_array_with_capacity(v___x_3075_);
v___x_3077_ = lean_array_push(v___x_3076_, v___x_3074_);
return v___x_3077_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9(void){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3084_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8));
v___x_3085_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_3086_ = lean_array_push(v___x_3085_, v___x_3084_);
return v___x_3086_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10(void){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; 
v___x_3087_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9);
v___x_3088_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3089_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3088_);
lean_ctor_set(v___x_3089_, 1, v___x_3087_);
return v___x_3089_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11(void){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3090_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3091_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10);
v___x_3092_ = lean_unsigned_to_nat(2u);
v___x_3093_ = lean_mk_empty_array_with_capacity(v___x_3092_);
v___x_3094_ = lean_array_push(v___x_3093_, v___x_3091_);
v___x_3095_ = lean_array_push(v___x_3094_, v___x_3090_);
return v___x_3095_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12(void){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11);
v___x_3097_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3098_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
lean_ctor_set(v___x_3098_, 1, v___x_3096_);
return v___x_3098_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3099_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12);
v___x_3100_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3101_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3100_);
lean_ctor_set(v___x_3101_, 1, v___x_3099_);
return v___x_3101_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14(void){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3102_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13);
v___x_3103_ = lean_unsigned_to_nat(1u);
v___x_3104_ = lean_mk_empty_array_with_capacity(v___x_3103_);
v___x_3105_ = lean_array_push(v___x_3104_, v___x_3102_);
return v___x_3105_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15(void){
_start:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14);
v___x_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
return v___x_3107_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3108_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15);
v___x_3109_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3110_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3);
v___x_3111_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0));
v___x_3112_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
lean_ctor_set(v___x_3112_, 1, v___x_3110_);
lean_ctor_set(v___x_3112_, 2, v___x_3109_);
lean_ctor_set(v___x_3112_, 3, v___x_3108_);
return v___x_3112_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18));
v___x_3116_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3115_);
return v___x_3116_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3117_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19);
v___x_3118_ = lean_unsigned_to_nat(1u);
v___x_3119_ = lean_mk_empty_array_with_capacity(v___x_3118_);
v___x_3120_ = lean_array_push(v___x_3119_, v___x_3117_);
return v___x_3120_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22(void){
_start:
{
lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3123_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3124_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_3125_ = lean_array_push(v___x_3124_, v___x_3123_);
return v___x_3125_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23(void){
_start:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3126_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22);
v___x_3127_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_3128_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v___x_3126_);
return v___x_3128_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24(void){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3129_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23);
v___x_3130_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3131_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
lean_ctor_set(v___x_3131_, 1, v___x_3129_);
return v___x_3131_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25(void){
_start:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3132_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24);
v___x_3133_ = lean_unsigned_to_nat(1u);
v___x_3134_ = lean_mk_empty_array_with_capacity(v___x_3133_);
v___x_3135_ = lean_array_push(v___x_3134_, v___x_3132_);
return v___x_3135_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26(void){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25);
v___x_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27(void){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3138_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26);
v___x_3139_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3140_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_3141_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17));
v___x_3142_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
lean_ctor_set(v___x_3142_, 1, v___x_3140_);
lean_ctor_set(v___x_3142_, 2, v___x_3139_);
lean_ctor_set(v___x_3142_, 3, v___x_3138_);
return v___x_3142_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3145_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29));
v___x_3146_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3145_);
return v___x_3146_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32(void){
_start:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31));
v___x_3149_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3148_);
return v___x_3149_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3150_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32);
v___x_3151_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30);
v___x_3152_ = lean_unsigned_to_nat(2u);
v___x_3153_ = lean_mk_empty_array_with_capacity(v___x_3152_);
v___x_3154_ = lean_array_push(v___x_3153_, v___x_3151_);
v___x_3155_ = lean_array_push(v___x_3154_, v___x_3150_);
return v___x_3155_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35(void){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3157_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34));
v___x_3158_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3157_);
return v___x_3158_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3159_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3160_ = lean_unsigned_to_nat(1u);
v___x_3161_ = lean_mk_empty_array_with_capacity(v___x_3160_);
v___x_3162_ = lean_array_push(v___x_3161_, v___x_3159_);
return v___x_3162_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38(void){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37));
v___x_3165_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3164_);
return v___x_3165_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39(void){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3166_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38);
v___x_3167_ = lean_unsigned_to_nat(1u);
v___x_3168_ = lean_mk_empty_array_with_capacity(v___x_3167_);
v___x_3169_ = lean_array_push(v___x_3168_, v___x_3166_);
return v___x_3169_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3170_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_3171_ = lean_unsigned_to_nat(1u);
v___x_3172_ = lean_mk_empty_array_with_capacity(v___x_3171_);
v___x_3173_ = lean_array_push(v___x_3172_, v___x_3170_);
return v___x_3173_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3174_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40);
v___x_3175_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3176_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
lean_ctor_set(v___x_3176_, 1, v___x_3174_);
return v___x_3176_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42(void){
_start:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3177_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41);
v___x_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
return v___x_3178_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42);
v___x_3180_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39);
v___x_3181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3180_);
lean_ctor_set(v___x_3181_, 1, v___x_3179_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46(void){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3186_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3187_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_3188_ = lean_unsigned_to_nat(2u);
v___x_3189_ = lean_mk_empty_array_with_capacity(v___x_3188_);
v___x_3190_ = lean_array_push(v___x_3189_, v___x_3187_);
v___x_3191_ = lean_array_push(v___x_3190_, v___x_3186_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47(void){
_start:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3192_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46);
v___x_3193_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3194_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
lean_ctor_set(v___x_3194_, 1, v___x_3192_);
return v___x_3194_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3195_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3196_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47);
v___x_3197_ = lean_unsigned_to_nat(2u);
v___x_3198_ = lean_mk_empty_array_with_capacity(v___x_3197_);
v___x_3199_ = lean_array_push(v___x_3198_, v___x_3196_);
v___x_3200_ = lean_array_push(v___x_3199_, v___x_3195_);
return v___x_3200_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48);
v___x_3202_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3203_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
lean_ctor_set(v___x_3203_, 1, v___x_3201_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50(void){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3204_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44));
v___x_3205_ = lean_unsigned_to_nat(2u);
v___x_3206_ = lean_mk_empty_array_with_capacity(v___x_3205_);
v___x_3207_ = lean_array_push(v___x_3206_, v___x_3204_);
return v___x_3207_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51(void){
_start:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3208_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49);
v___x_3209_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_3210_ = lean_array_push(v___x_3209_, v___x_3208_);
return v___x_3210_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52(void){
_start:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3211_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51);
v___x_3212_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3213_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3212_);
lean_ctor_set(v___x_3213_, 1, v___x_3211_);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53(void){
_start:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3214_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52);
v___x_3215_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_3216_ = lean_unsigned_to_nat(2u);
v___x_3217_ = lean_mk_empty_array_with_capacity(v___x_3216_);
v___x_3218_ = lean_array_push(v___x_3217_, v___x_3215_);
v___x_3219_ = lean_array_push(v___x_3218_, v___x_3214_);
return v___x_3219_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53);
v___x_3221_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3222_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v___x_3220_);
return v___x_3222_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55(void){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3223_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54);
v___x_3224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3223_);
return v___x_3224_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57(void){
_start:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3227_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_3228_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0);
v___x_3229_ = lean_unsigned_to_nat(2u);
v___x_3230_ = lean_mk_empty_array_with_capacity(v___x_3229_);
v___x_3231_ = lean_array_push(v___x_3230_, v___x_3228_);
v___x_3232_ = lean_array_push(v___x_3231_, v___x_3227_);
return v___x_3232_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58(void){
_start:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57);
v___x_3234_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3235_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
lean_ctor_set(v___x_3235_, 1, v___x_3233_);
return v___x_3235_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59(void){
_start:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3236_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58);
v___x_3237_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56));
v___x_3238_ = lean_unsigned_to_nat(2u);
v___x_3239_ = lean_mk_empty_array_with_capacity(v___x_3238_);
v___x_3240_ = lean_array_push(v___x_3239_, v___x_3237_);
v___x_3241_ = lean_array_push(v___x_3240_, v___x_3236_);
return v___x_3241_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60(void){
_start:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3242_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59);
v___x_3243_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3244_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3244_, 0, v___x_3243_);
lean_ctor_set(v___x_3244_, 1, v___x_3242_);
return v___x_3244_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61(void){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3245_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6);
v___x_3246_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60);
v___x_3247_ = lean_unsigned_to_nat(2u);
v___x_3248_ = lean_mk_empty_array_with_capacity(v___x_3247_);
v___x_3249_ = lean_array_push(v___x_3248_, v___x_3246_);
v___x_3250_ = lean_array_push(v___x_3249_, v___x_3245_);
return v___x_3250_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v___x_3251_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61);
v___x_3252_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3253_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
lean_ctor_set(v___x_3253_, 1, v___x_3251_);
return v___x_3253_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63(void){
_start:
{
lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3254_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62);
v___x_3255_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_3256_ = lean_array_push(v___x_3255_, v___x_3254_);
return v___x_3256_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64(void){
_start:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3257_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63);
v___x_3258_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3259_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
lean_ctor_set(v___x_3259_, 1, v___x_3257_);
return v___x_3259_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65(void){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64);
v___x_3261_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3260_);
return v___x_3261_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68(void){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; 
v___x_3269_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67));
v___x_3270_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65);
v___x_3271_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55);
v___x_3272_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43);
v___x_3273_ = lean_unsigned_to_nat(4u);
v___x_3274_ = lean_mk_empty_array_with_capacity(v___x_3273_);
v___x_3275_ = lean_array_push(v___x_3274_, v___x_3272_);
v___x_3276_ = lean_array_push(v___x_3275_, v___x_3271_);
v___x_3277_ = lean_array_push(v___x_3276_, v___x_3270_);
v___x_3278_ = lean_array_push(v___x_3277_, v___x_3269_);
return v___x_3278_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69(void){
_start:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68);
v___x_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
return v___x_3280_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70(void){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3281_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69);
v___x_3282_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36);
v___x_3283_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33);
v___x_3284_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28));
v___x_3285_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
lean_ctor_set(v___x_3285_, 1, v___x_3283_);
lean_ctor_set(v___x_3285_, 2, v___x_3282_);
lean_ctor_set(v___x_3285_, 3, v___x_3281_);
return v___x_3285_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73(void){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72));
v___x_3289_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3288_);
return v___x_3289_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74(void){
_start:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3290_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3291_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3292_ = lean_unsigned_to_nat(2u);
v___x_3293_ = lean_mk_empty_array_with_capacity(v___x_3292_);
v___x_3294_ = lean_array_push(v___x_3293_, v___x_3291_);
v___x_3295_ = lean_array_push(v___x_3294_, v___x_3290_);
return v___x_3295_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76(void){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; 
v___x_3297_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75));
v___x_3298_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3297_);
return v___x_3298_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77(void){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3299_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3300_ = lean_unsigned_to_nat(1u);
v___x_3301_ = lean_mk_empty_array_with_capacity(v___x_3300_);
v___x_3302_ = lean_array_push(v___x_3301_, v___x_3299_);
return v___x_3302_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81(void){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3311_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3312_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80));
v___x_3313_ = lean_unsigned_to_nat(2u);
v___x_3314_ = lean_mk_empty_array_with_capacity(v___x_3313_);
v___x_3315_ = lean_array_push(v___x_3314_, v___x_3312_);
v___x_3316_ = lean_array_push(v___x_3315_, v___x_3311_);
return v___x_3316_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3317_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81);
v___x_3318_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3319_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3318_);
lean_ctor_set(v___x_3319_, 1, v___x_3317_);
return v___x_3319_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83(void){
_start:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3320_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3321_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82);
v___x_3322_ = lean_unsigned_to_nat(2u);
v___x_3323_ = lean_mk_empty_array_with_capacity(v___x_3322_);
v___x_3324_ = lean_array_push(v___x_3323_, v___x_3321_);
v___x_3325_ = lean_array_push(v___x_3324_, v___x_3320_);
return v___x_3325_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84(void){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3326_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83);
v___x_3327_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3328_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3327_);
lean_ctor_set(v___x_3328_, 1, v___x_3326_);
return v___x_3328_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85(void){
_start:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3329_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84);
v___x_3330_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79));
v___x_3331_ = lean_unsigned_to_nat(2u);
v___x_3332_ = lean_mk_empty_array_with_capacity(v___x_3331_);
v___x_3333_ = lean_array_push(v___x_3332_, v___x_3330_);
v___x_3334_ = lean_array_push(v___x_3333_, v___x_3329_);
return v___x_3334_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86(void){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3335_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85);
v___x_3336_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3337_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3336_);
lean_ctor_set(v___x_3337_, 1, v___x_3335_);
return v___x_3337_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87(void){
_start:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3338_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_3339_ = lean_unsigned_to_nat(1u);
v___x_3340_ = lean_mk_empty_array_with_capacity(v___x_3339_);
v___x_3341_ = lean_array_push(v___x_3340_, v___x_3338_);
return v___x_3341_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3342_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87);
v___x_3343_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3344_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3343_);
lean_ctor_set(v___x_3344_, 1, v___x_3342_);
return v___x_3344_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88);
v___x_3346_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78));
v___x_3347_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
lean_ctor_set(v___x_3347_, 1, v___x_3345_);
return v___x_3347_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3348_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89);
v___x_3349_ = lean_unsigned_to_nat(1u);
v___x_3350_ = lean_mk_empty_array_with_capacity(v___x_3349_);
v___x_3351_ = lean_array_push(v___x_3350_, v___x_3348_);
return v___x_3351_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91(void){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3352_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90);
v___x_3353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3352_);
return v___x_3353_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92(void){
_start:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3354_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91);
v___x_3355_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77);
v___x_3356_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74);
v___x_3357_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71));
v___x_3358_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3357_);
lean_ctor_set(v___x_3358_, 1, v___x_3356_);
lean_ctor_set(v___x_3358_, 2, v___x_3355_);
lean_ctor_set(v___x_3358_, 3, v___x_3354_);
return v___x_3358_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94(void){
_start:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; 
v___x_3360_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3361_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3362_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3363_ = lean_unsigned_to_nat(3u);
v___x_3364_ = lean_mk_empty_array_with_capacity(v___x_3363_);
v___x_3365_ = lean_array_push(v___x_3364_, v___x_3362_);
v___x_3366_ = lean_array_push(v___x_3365_, v___x_3361_);
v___x_3367_ = lean_array_push(v___x_3366_, v___x_3360_);
return v___x_3367_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97(void){
_start:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3372_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96));
v___x_3373_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_3374_ = lean_unsigned_to_nat(2u);
v___x_3375_ = lean_mk_empty_array_with_capacity(v___x_3374_);
v___x_3376_ = lean_array_push(v___x_3375_, v___x_3373_);
v___x_3377_ = lean_array_push(v___x_3376_, v___x_3372_);
return v___x_3377_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3378_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97);
v___x_3379_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3380_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3379_);
lean_ctor_set(v___x_3380_, 1, v___x_3378_);
return v___x_3380_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99(void){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98);
v___x_3382_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3381_);
return v___x_3382_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100(void){
_start:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3383_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99);
v___x_3384_ = lean_unsigned_to_nat(1u);
v___x_3385_ = lean_mk_empty_array_with_capacity(v___x_3384_);
v___x_3386_ = lean_array_push(v___x_3385_, v___x_3383_);
return v___x_3386_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101(void){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
return v___x_3388_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102(void){
_start:
{
lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3389_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101);
v___x_3390_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95));
v___x_3391_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94);
v___x_3392_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93));
v___x_3393_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
lean_ctor_set(v___x_3393_, 1, v___x_3391_);
lean_ctor_set(v___x_3393_, 2, v___x_3390_);
lean_ctor_set(v___x_3393_, 3, v___x_3389_);
return v___x_3393_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104(void){
_start:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103));
v___x_3396_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3395_);
return v___x_3396_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105(void){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3397_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104);
v___x_3398_ = lean_unsigned_to_nat(1u);
v___x_3399_ = lean_mk_empty_array_with_capacity(v___x_3398_);
v___x_3400_ = lean_array_push(v___x_3399_, v___x_3397_);
return v___x_3400_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110(void){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3413_ = lean_unsigned_to_nat(255u);
v___x_3414_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3413_);
return v___x_3414_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111(void){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3415_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110);
v___x_3416_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109));
v___x_3417_ = lean_unsigned_to_nat(2u);
v___x_3418_ = lean_mk_empty_array_with_capacity(v___x_3417_);
v___x_3419_ = lean_array_push(v___x_3418_, v___x_3416_);
v___x_3420_ = lean_array_push(v___x_3419_, v___x_3415_);
return v___x_3420_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112(void){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; 
v___x_3421_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111);
v___x_3422_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3423_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
lean_ctor_set(v___x_3423_, 1, v___x_3421_);
return v___x_3423_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113(void){
_start:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3424_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112);
v___x_3425_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106));
v___x_3426_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3425_);
lean_ctor_set(v___x_3426_, 1, v___x_3424_);
return v___x_3426_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114(void){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3427_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3428_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3429_ = lean_unsigned_to_nat(2u);
v___x_3430_ = lean_mk_empty_array_with_capacity(v___x_3429_);
v___x_3431_ = lean_array_push(v___x_3430_, v___x_3428_);
v___x_3432_ = lean_array_push(v___x_3431_, v___x_3427_);
return v___x_3432_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115(void){
_start:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3433_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114);
v___x_3434_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3435_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3434_);
lean_ctor_set(v___x_3435_, 1, v___x_3433_);
return v___x_3435_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116(void){
_start:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3436_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3437_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3436_);
return v___x_3437_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117(void){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3438_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116);
v___x_3439_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106));
v___x_3440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
lean_ctor_set(v___x_3440_, 1, v___x_3438_);
return v___x_3440_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118(void){
_start:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3441_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117);
v___x_3442_ = lean_unsigned_to_nat(1u);
v___x_3443_ = lean_mk_empty_array_with_capacity(v___x_3442_);
v___x_3444_ = lean_array_push(v___x_3443_, v___x_3441_);
return v___x_3444_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119(void){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3445_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118);
v___x_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
return v___x_3446_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120(void){
_start:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3447_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119);
v___x_3448_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115);
v___x_3449_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3448_);
lean_ctor_set(v___x_3449_, 1, v___x_3447_);
return v___x_3449_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121(void){
_start:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3450_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120);
v___x_3451_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113);
v___x_3452_ = lean_unsigned_to_nat(2u);
v___x_3453_ = lean_mk_empty_array_with_capacity(v___x_3452_);
v___x_3454_ = lean_array_push(v___x_3453_, v___x_3451_);
v___x_3455_ = lean_array_push(v___x_3454_, v___x_3450_);
return v___x_3455_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122(void){
_start:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3456_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121);
v___x_3457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
return v___x_3457_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123(void){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3458_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3459_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105);
v___x_3460_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_3461_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_3462_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3462_, 0, v___x_3461_);
lean_ctor_set(v___x_3462_, 1, v___x_3460_);
lean_ctor_set(v___x_3462_, 2, v___x_3459_);
lean_ctor_set(v___x_3462_, 3, v___x_3458_);
return v___x_3462_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126(void){
_start:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; 
v___x_3465_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125));
v___x_3466_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3465_);
return v___x_3466_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128(void){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3468_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127));
v___x_3469_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3468_);
return v___x_3469_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129(void){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3470_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128);
v___x_3471_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126);
v___x_3472_ = lean_unsigned_to_nat(2u);
v___x_3473_ = lean_mk_empty_array_with_capacity(v___x_3472_);
v___x_3474_ = lean_array_push(v___x_3473_, v___x_3471_);
v___x_3475_ = lean_array_push(v___x_3474_, v___x_3470_);
return v___x_3475_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131(void){
_start:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; 
v___x_3478_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130));
v___x_3479_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3478_);
return v___x_3479_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133(void){
_start:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3482_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132));
v___x_3483_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3482_);
return v___x_3483_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134(void){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3484_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3485_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3486_ = lean_unsigned_to_nat(2u);
v___x_3487_ = lean_mk_empty_array_with_capacity(v___x_3486_);
v___x_3488_ = lean_array_push(v___x_3487_, v___x_3485_);
v___x_3489_ = lean_array_push(v___x_3488_, v___x_3484_);
return v___x_3489_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135(void){
_start:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3491_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3492_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3491_);
lean_ctor_set(v___x_3492_, 1, v___x_3490_);
return v___x_3492_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136(void){
_start:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___x_3493_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135);
v___x_3494_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3493_);
return v___x_3494_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137(void){
_start:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3495_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3496_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3497_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
lean_ctor_set(v___x_3497_, 1, v___x_3495_);
return v___x_3497_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138(void){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3498_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137);
v___x_3499_ = lean_unsigned_to_nat(1u);
v___x_3500_ = lean_mk_empty_array_with_capacity(v___x_3499_);
v___x_3501_ = lean_array_push(v___x_3500_, v___x_3498_);
return v___x_3501_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139(void){
_start:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3502_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138);
v___x_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
return v___x_3503_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140(void){
_start:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3504_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139);
v___x_3505_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3506_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3507_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124));
v___x_3508_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
lean_ctor_set(v___x_3508_, 1, v___x_3506_);
lean_ctor_set(v___x_3508_, 2, v___x_3505_);
lean_ctor_set(v___x_3508_, 3, v___x_3504_);
return v___x_3508_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_3511_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
lean_ctor_set(v___x_3512_, 1, v___x_3510_);
return v___x_3512_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145(void){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3515_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3516_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144));
v___x_3517_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3516_);
lean_ctor_set(v___x_3517_, 1, v___x_3515_);
return v___x_3517_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3518_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145);
v___x_3519_ = lean_unsigned_to_nat(1u);
v___x_3520_ = lean_mk_empty_array_with_capacity(v___x_3519_);
v___x_3521_ = lean_array_push(v___x_3520_, v___x_3518_);
return v___x_3521_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147(void){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3522_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146);
v___x_3523_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143));
v___x_3524_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3523_);
lean_ctor_set(v___x_3524_, 1, v___x_3522_);
return v___x_3524_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149(void){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3526_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148));
v___x_3527_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3526_);
return v___x_3527_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150(void){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3528_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149);
v___x_3529_ = lean_unsigned_to_nat(1u);
v___x_3530_ = lean_mk_empty_array_with_capacity(v___x_3529_);
v___x_3531_ = lean_array_push(v___x_3530_, v___x_3528_);
return v___x_3531_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151(void){
_start:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3532_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
return v___x_3533_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152(void){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3534_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151);
v___x_3535_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150);
v___x_3536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
lean_ctor_set(v___x_3536_, 1, v___x_3534_);
return v___x_3536_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3538_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153));
v___x_3539_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3538_);
return v___x_3539_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155(void){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3540_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154);
v___x_3541_ = lean_unsigned_to_nat(1u);
v___x_3542_ = lean_mk_empty_array_with_capacity(v___x_3541_);
v___x_3543_ = lean_array_push(v___x_3542_, v___x_3540_);
return v___x_3543_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156(void){
_start:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
return v___x_3545_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157(void){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3546_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156);
v___x_3547_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155);
v___x_3548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3548_, 0, v___x_3547_);
lean_ctor_set(v___x_3548_, 1, v___x_3546_);
return v___x_3548_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163(void){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3563_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162));
v___x_3564_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3563_);
return v___x_3564_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164(void){
_start:
{
lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3565_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163);
v___x_3566_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3567_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
lean_ctor_set(v___x_3567_, 1, v___x_3565_);
return v___x_3567_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165(void){
_start:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3568_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164);
v___x_3569_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157);
v___x_3570_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152);
v___x_3571_ = lean_unsigned_to_nat(3u);
v___x_3572_ = lean_mk_empty_array_with_capacity(v___x_3571_);
v___x_3573_ = lean_array_push(v___x_3572_, v___x_3570_);
v___x_3574_ = lean_array_push(v___x_3573_, v___x_3569_);
v___x_3575_ = lean_array_push(v___x_3574_, v___x_3568_);
return v___x_3575_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166(void){
_start:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3576_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165);
v___x_3577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3576_);
return v___x_3577_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167(void){
_start:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3578_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166);
v___x_3579_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147);
v___x_3580_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3579_);
lean_ctor_set(v___x_3580_, 1, v___x_3578_);
return v___x_3580_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168(void){
_start:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3581_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142);
v___x_3582_ = lean_unsigned_to_nat(2u);
v___x_3583_ = lean_mk_empty_array_with_capacity(v___x_3582_);
v___x_3584_ = lean_array_push(v___x_3583_, v___x_3581_);
return v___x_3584_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169(void){
_start:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3585_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167);
v___x_3586_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3587_ = lean_array_push(v___x_3586_, v___x_3585_);
return v___x_3587_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170(void){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169);
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
return v___x_3589_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171(void){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3590_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3591_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3592_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3593_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141));
v___x_3594_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
lean_ctor_set(v___x_3594_, 1, v___x_3592_);
lean_ctor_set(v___x_3594_, 2, v___x_3591_);
lean_ctor_set(v___x_3594_, 3, v___x_3590_);
return v___x_3594_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173(void){
_start:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3596_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3597_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3598_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
lean_ctor_set(v___x_3598_, 1, v___x_3596_);
return v___x_3598_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174(void){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3599_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173);
v___x_3600_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3599_);
return v___x_3600_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175(void){
_start:
{
lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3601_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174);
v___x_3602_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3603_, 0, v___x_3602_);
lean_ctor_set(v___x_3603_, 1, v___x_3601_);
return v___x_3603_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176(void){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; 
v___x_3604_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175);
v___x_3605_ = lean_unsigned_to_nat(1u);
v___x_3606_ = lean_mk_empty_array_with_capacity(v___x_3605_);
v___x_3607_ = lean_array_push(v___x_3606_, v___x_3604_);
return v___x_3607_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177(void){
_start:
{
lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3608_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176);
v___x_3609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3608_);
return v___x_3609_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178(void){
_start:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3610_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177);
v___x_3611_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3612_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3613_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172));
v___x_3614_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
lean_ctor_set(v___x_3614_, 1, v___x_3612_);
lean_ctor_set(v___x_3614_, 2, v___x_3611_);
lean_ctor_set(v___x_3614_, 3, v___x_3610_);
return v___x_3614_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181(void){
_start:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3617_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3618_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180));
v___x_3619_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3618_);
lean_ctor_set(v___x_3619_, 1, v___x_3617_);
return v___x_3619_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182(void){
_start:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3620_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3621_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3620_);
return v___x_3621_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183(void){
_start:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3622_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182);
v___x_3623_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
lean_ctor_set(v___x_3624_, 1, v___x_3622_);
return v___x_3624_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184(void){
_start:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3625_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183);
v___x_3626_ = lean_unsigned_to_nat(1u);
v___x_3627_ = lean_mk_empty_array_with_capacity(v___x_3626_);
v___x_3628_ = lean_array_push(v___x_3627_, v___x_3625_);
return v___x_3628_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185(void){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___x_3629_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184);
v___x_3630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3629_);
return v___x_3630_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186(void){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3631_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3632_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181);
v___x_3633_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3633_, 0, v___x_3632_);
lean_ctor_set(v___x_3633_, 1, v___x_3631_);
return v___x_3633_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187(void){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3634_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186);
v___x_3635_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3636_ = lean_array_push(v___x_3635_, v___x_3634_);
return v___x_3636_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187);
v___x_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3638_, 0, v___x_3637_);
return v___x_3638_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189(void){
_start:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3639_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188);
v___x_3640_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3641_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3642_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179));
v___x_3643_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set(v___x_3643_, 1, v___x_3641_);
lean_ctor_set(v___x_3643_, 2, v___x_3640_);
lean_ctor_set(v___x_3643_, 3, v___x_3639_);
return v___x_3643_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192(void){
_start:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v___x_3646_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3647_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191));
v___x_3648_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3647_);
lean_ctor_set(v___x_3648_, 1, v___x_3646_);
return v___x_3648_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193(void){
_start:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3649_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192);
v___x_3650_ = lean_unsigned_to_nat(1u);
v___x_3651_ = lean_mk_empty_array_with_capacity(v___x_3650_);
v___x_3652_ = lean_array_push(v___x_3651_, v___x_3649_);
return v___x_3652_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194(void){
_start:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3653_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193);
v___x_3654_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143));
v___x_3655_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
lean_ctor_set(v___x_3655_, 1, v___x_3653_);
return v___x_3655_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195(void){
_start:
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3656_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3657_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194);
v___x_3658_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3657_);
lean_ctor_set(v___x_3658_, 1, v___x_3656_);
return v___x_3658_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196(void){
_start:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3659_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195);
v___x_3660_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3661_ = lean_array_push(v___x_3660_, v___x_3659_);
return v___x_3661_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197(void){
_start:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3662_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196);
v___x_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
return v___x_3663_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3664_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197);
v___x_3665_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3666_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3667_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190));
v___x_3668_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3667_);
lean_ctor_set(v___x_3668_, 1, v___x_3666_);
lean_ctor_set(v___x_3668_, 2, v___x_3665_);
lean_ctor_set(v___x_3668_, 3, v___x_3664_);
return v___x_3668_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200(void){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3670_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3671_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145);
v___x_3672_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3671_);
lean_ctor_set(v___x_3672_, 1, v___x_3670_);
return v___x_3672_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3673_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200);
v___x_3674_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3675_ = lean_array_push(v___x_3674_, v___x_3673_);
return v___x_3675_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202(void){
_start:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3676_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201);
v___x_3677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3676_);
return v___x_3677_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v___x_3678_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202);
v___x_3679_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3680_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3681_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199));
v___x_3682_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3681_);
lean_ctor_set(v___x_3682_, 1, v___x_3680_);
lean_ctor_set(v___x_3682_, 2, v___x_3679_);
lean_ctor_set(v___x_3682_, 3, v___x_3678_);
return v___x_3682_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207(void){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3691_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_3692_ = lean_unsigned_to_nat(2u);
v___x_3693_ = lean_mk_empty_array_with_capacity(v___x_3692_);
v___x_3694_ = lean_array_push(v___x_3693_, v___x_3691_);
v___x_3695_ = lean_array_push(v___x_3694_, v___x_3691_);
return v___x_3695_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208(void){
_start:
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3696_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207);
v___x_3697_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_3698_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3697_);
lean_ctor_set(v___x_3698_, 1, v___x_3696_);
return v___x_3698_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209(void){
_start:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3699_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208);
v___x_3700_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3700_, 0, v___x_3699_);
return v___x_3700_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210(void){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3701_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209);
v___x_3702_ = lean_unsigned_to_nat(1u);
v___x_3703_ = lean_mk_empty_array_with_capacity(v___x_3702_);
v___x_3704_ = lean_array_push(v___x_3703_, v___x_3701_);
return v___x_3704_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211(void){
_start:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3705_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210);
v___x_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
return v___x_3706_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212(void){
_start:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3707_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211);
v___x_3708_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206));
v___x_3709_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3708_);
lean_ctor_set(v___x_3709_, 1, v___x_3707_);
return v___x_3709_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214(void){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3712_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213));
v___x_3713_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
lean_ctor_set(v___x_3713_, 1, v___x_3711_);
return v___x_3713_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215(void){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214);
v___x_3715_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3714_);
return v___x_3715_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216(void){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3716_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215);
v___x_3717_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
lean_ctor_set(v___x_3718_, 1, v___x_3716_);
return v___x_3718_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217(void){
_start:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3719_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212);
v___x_3720_ = lean_unsigned_to_nat(2u);
v___x_3721_ = lean_mk_empty_array_with_capacity(v___x_3720_);
v___x_3722_ = lean_array_push(v___x_3721_, v___x_3719_);
return v___x_3722_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218(void){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3723_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216);
v___x_3724_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217);
v___x_3725_ = lean_array_push(v___x_3724_, v___x_3723_);
return v___x_3725_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219(void){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3726_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218);
v___x_3727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3726_);
return v___x_3727_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220(void){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3728_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219);
v___x_3729_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3730_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3731_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204));
v___x_3732_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v___x_3730_);
lean_ctor_set(v___x_3732_, 2, v___x_3729_);
lean_ctor_set(v___x_3732_, 3, v___x_3728_);
return v___x_3732_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223(void){
_start:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3735_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3736_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222));
v___x_3737_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3736_);
lean_ctor_set(v___x_3737_, 1, v___x_3735_);
return v___x_3737_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224(void){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3738_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223);
v___x_3739_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3738_);
return v___x_3739_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225(void){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3740_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224);
v___x_3741_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3742_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
lean_ctor_set(v___x_3742_, 1, v___x_3740_);
return v___x_3742_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3743_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225);
v___x_3744_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217);
v___x_3745_ = lean_array_push(v___x_3744_, v___x_3743_);
return v___x_3745_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227(void){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3746_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226);
v___x_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
return v___x_3747_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228(void){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3748_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227);
v___x_3749_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3750_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3751_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221));
v___x_3752_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3751_);
lean_ctor_set(v___x_3752_, 1, v___x_3750_);
lean_ctor_set(v___x_3752_, 2, v___x_3749_);
lean_ctor_set(v___x_3752_, 3, v___x_3748_);
return v___x_3752_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230(void){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3754_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3755_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3756_ = lean_unsigned_to_nat(2u);
v___x_3757_ = lean_mk_empty_array_with_capacity(v___x_3756_);
v___x_3758_ = lean_array_push(v___x_3757_, v___x_3755_);
v___x_3759_ = lean_array_push(v___x_3758_, v___x_3754_);
return v___x_3759_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231(void){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3760_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230);
v___x_3761_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_3762_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
lean_ctor_set(v___x_3762_, 1, v___x_3760_);
return v___x_3762_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231);
v___x_3764_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3763_);
return v___x_3764_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233(void){
_start:
{
lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3765_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232);
v___x_3766_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3767_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
lean_ctor_set(v___x_3767_, 1, v___x_3765_);
return v___x_3767_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234(void){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3768_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233);
v___x_3769_ = lean_unsigned_to_nat(1u);
v___x_3770_ = lean_mk_empty_array_with_capacity(v___x_3769_);
v___x_3771_ = lean_array_push(v___x_3770_, v___x_3768_);
return v___x_3771_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235(void){
_start:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234);
v___x_3773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
return v___x_3773_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236(void){
_start:
{
lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
v___x_3774_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235);
v___x_3775_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3776_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3777_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229));
v___x_3778_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3777_);
lean_ctor_set(v___x_3778_, 1, v___x_3776_);
lean_ctor_set(v___x_3778_, 2, v___x_3775_);
lean_ctor_set(v___x_3778_, 3, v___x_3774_);
return v___x_3778_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3780_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230);
v___x_3781_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3782_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
lean_ctor_set(v___x_3782_, 1, v___x_3780_);
return v___x_3782_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239(void){
_start:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3783_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238);
v___x_3784_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3783_);
return v___x_3784_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240(void){
_start:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; 
v___x_3785_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239);
v___x_3786_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3786_);
lean_ctor_set(v___x_3787_, 1, v___x_3785_);
return v___x_3787_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241(void){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v___x_3788_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240);
v___x_3789_ = lean_unsigned_to_nat(1u);
v___x_3790_ = lean_mk_empty_array_with_capacity(v___x_3789_);
v___x_3791_ = lean_array_push(v___x_3790_, v___x_3788_);
return v___x_3791_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242(void){
_start:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3792_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241);
v___x_3793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
return v___x_3793_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243(void){
_start:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3794_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242);
v___x_3795_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3796_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3797_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237));
v___x_3798_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3797_);
lean_ctor_set(v___x_3798_, 1, v___x_3796_);
lean_ctor_set(v___x_3798_, 2, v___x_3795_);
lean_ctor_set(v___x_3798_, 3, v___x_3794_);
return v___x_3798_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3801_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3802_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3801_);
lean_ctor_set(v___x_3802_, 1, v___x_3800_);
return v___x_3802_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245);
v___x_3804_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3803_);
return v___x_3804_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247(void){
_start:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3805_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246);
v___x_3806_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3807_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
lean_ctor_set(v___x_3807_, 1, v___x_3805_);
return v___x_3807_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248(void){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3808_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247);
v___x_3809_ = lean_unsigned_to_nat(1u);
v___x_3810_ = lean_mk_empty_array_with_capacity(v___x_3809_);
v___x_3811_ = lean_array_push(v___x_3810_, v___x_3808_);
return v___x_3811_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3812_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248);
v___x_3813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3812_);
return v___x_3813_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250(void){
_start:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3814_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249);
v___x_3815_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3816_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3817_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244));
v___x_3818_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3817_);
lean_ctor_set(v___x_3818_, 1, v___x_3816_);
lean_ctor_set(v___x_3818_, 2, v___x_3815_);
lean_ctor_set(v___x_3818_, 3, v___x_3814_);
return v___x_3818_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252(void){
_start:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
v___x_3820_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3821_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3822_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
lean_ctor_set(v___x_3822_, 1, v___x_3820_);
return v___x_3822_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253(void){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; 
v___x_3823_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252);
v___x_3824_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3823_);
return v___x_3824_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254(void){
_start:
{
lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; 
v___x_3825_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253);
v___x_3826_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3827_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3826_);
lean_ctor_set(v___x_3827_, 1, v___x_3825_);
return v___x_3827_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255(void){
_start:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3828_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254);
v___x_3829_ = lean_unsigned_to_nat(1u);
v___x_3830_ = lean_mk_empty_array_with_capacity(v___x_3829_);
v___x_3831_ = lean_array_push(v___x_3830_, v___x_3828_);
return v___x_3831_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256(void){
_start:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3832_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255);
v___x_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
return v___x_3833_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257(void){
_start:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3834_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256);
v___x_3835_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3836_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3837_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251));
v___x_3838_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3837_);
lean_ctor_set(v___x_3838_, 1, v___x_3836_);
lean_ctor_set(v___x_3838_, 2, v___x_3835_);
lean_ctor_set(v___x_3838_, 3, v___x_3834_);
return v___x_3838_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260(void){
_start:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; 
v___x_3841_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3842_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259));
v___x_3843_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3842_);
lean_ctor_set(v___x_3843_, 1, v___x_3841_);
return v___x_3843_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261(void){
_start:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
v___x_3844_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260);
v___x_3845_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3844_);
return v___x_3845_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262(void){
_start:
{
lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; 
v___x_3846_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261);
v___x_3847_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3848_, 0, v___x_3847_);
lean_ctor_set(v___x_3848_, 1, v___x_3846_);
return v___x_3848_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263(void){
_start:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3849_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262);
v___x_3850_ = lean_unsigned_to_nat(1u);
v___x_3851_ = lean_mk_empty_array_with_capacity(v___x_3850_);
v___x_3852_ = lean_array_push(v___x_3851_, v___x_3849_);
return v___x_3852_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264(void){
_start:
{
lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3853_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263);
v___x_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
return v___x_3854_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265(void){
_start:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3855_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264);
v___x_3856_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3857_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3858_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258));
v___x_3859_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
lean_ctor_set(v___x_3859_, 1, v___x_3857_);
lean_ctor_set(v___x_3859_, 2, v___x_3856_);
lean_ctor_set(v___x_3859_, 3, v___x_3855_);
return v___x_3859_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266(void){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3860_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265);
v___x_3861_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257);
v___x_3862_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250);
v___x_3863_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243);
v___x_3864_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236);
v___x_3865_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228);
v___x_3866_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220);
v___x_3867_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203);
v___x_3868_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198);
v___x_3869_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189);
v___x_3870_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178);
v___x_3871_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171);
v___x_3872_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140);
v___x_3873_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123);
v___x_3874_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102);
v___x_3875_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92);
v___x_3876_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70);
v___x_3877_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27);
v___x_3878_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16);
v___x_3879_ = lean_unsigned_to_nat(19u);
v___x_3880_ = lean_mk_empty_array_with_capacity(v___x_3879_);
v___x_3881_ = lean_array_push(v___x_3880_, v___x_3878_);
v___x_3882_ = lean_array_push(v___x_3881_, v___x_3877_);
v___x_3883_ = lean_array_push(v___x_3882_, v___x_3876_);
v___x_3884_ = lean_array_push(v___x_3883_, v___x_3875_);
v___x_3885_ = lean_array_push(v___x_3884_, v___x_3874_);
v___x_3886_ = lean_array_push(v___x_3885_, v___x_3873_);
v___x_3887_ = lean_array_push(v___x_3886_, v___x_3872_);
v___x_3888_ = lean_array_push(v___x_3887_, v___x_3871_);
v___x_3889_ = lean_array_push(v___x_3888_, v___x_3870_);
v___x_3890_ = lean_array_push(v___x_3889_, v___x_3869_);
v___x_3891_ = lean_array_push(v___x_3890_, v___x_3868_);
v___x_3892_ = lean_array_push(v___x_3891_, v___x_3867_);
v___x_3893_ = lean_array_push(v___x_3892_, v___x_3866_);
v___x_3894_ = lean_array_push(v___x_3893_, v___x_3865_);
v___x_3895_ = lean_array_push(v___x_3894_, v___x_3864_);
v___x_3896_ = lean_array_push(v___x_3895_, v___x_3863_);
v___x_3897_ = lean_array_push(v___x_3896_, v___x_3862_);
v___x_3898_ = lean_array_push(v___x_3897_, v___x_3861_);
v___x_3899_ = lean_array_push(v___x_3898_, v___x_3860_);
return v___x_3899_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers(void){
_start:
{
lean_object* v___x_3900_; 
v___x_3900_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266);
return v___x_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(lean_object* v_i_3902_){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; 
v___x_3903_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_3904_ = lean_unsigned_to_nat(4u);
v___x_3905_ = lean_unsigned_to_nat(32u);
v___x_3906_ = lean_nat_mul(v_i_3902_, v___x_3905_);
v___x_3907_ = lean_nat_add(v___x_3904_, v___x_3906_);
lean_dec(v___x_3906_);
v___x_3908_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3907_);
v___x_3909_ = lean_unsigned_to_nat(1u);
v___x_3910_ = lean_mk_empty_array_with_capacity(v___x_3909_);
v___x_3911_ = lean_array_push(v___x_3910_, v___x_3908_);
v___x_3912_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3912_, 0, v___x_3903_);
lean_ctor_set(v___x_3912_, 1, v___x_3911_);
v___x_3913_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3912_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___boxed(lean_object* v_i_3914_){
_start:
{
lean_object* v_res_3915_; 
v_res_3915_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_i_3914_);
lean_dec(v_i_3914_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(size_t v_sz_3916_, size_t v_i_3917_, lean_object* v_bs_3918_){
_start:
{
uint8_t v___x_3919_; 
v___x_3919_ = lean_usize_dec_lt(v_i_3917_, v_sz_3916_);
if (v___x_3919_ == 0)
{
return v_bs_3918_;
}
else
{
lean_object* v_v_3920_; lean_object* v___x_3921_; lean_object* v_bs_x27_3922_; lean_object* v___x_3923_; size_t v___x_3924_; size_t v___x_3925_; lean_object* v___x_3926_; 
v_v_3920_ = lean_array_uget(v_bs_3918_, v_i_3917_);
v___x_3921_ = lean_unsigned_to_nat(0u);
v_bs_x27_3922_ = lean_array_uset(v_bs_3918_, v_i_3917_, v___x_3921_);
v___x_3923_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_v_3920_);
lean_dec(v_v_3920_);
v___x_3924_ = ((size_t)1ULL);
v___x_3925_ = lean_usize_add(v_i_3917_, v___x_3924_);
v___x_3926_ = lean_array_uset(v_bs_x27_3922_, v_i_3917_, v___x_3923_);
v_i_3917_ = v___x_3925_;
v_bs_3918_ = v___x_3926_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0___boxed(lean_object* v_sz_3928_, lean_object* v_i_3929_, lean_object* v_bs_3930_){
_start:
{
size_t v_sz_boxed_3931_; size_t v_i_boxed_3932_; lean_object* v_res_3933_; 
v_sz_boxed_3931_ = lean_unbox_usize(v_sz_3928_);
lean_dec(v_sz_3928_);
v_i_boxed_3932_ = lean_unbox_usize(v_i_3929_);
lean_dec(v_i_3929_);
v_res_3933_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_boxed_3931_, v_i_boxed_3932_, v_bs_3930_);
return v_res_3933_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3936_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1));
v___x_3937_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3936_);
return v___x_3937_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3938_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2);
v___x_3939_ = lean_unsigned_to_nat(1u);
v___x_3940_ = lean_mk_empty_array_with_capacity(v___x_3939_);
v___x_3941_ = lean_array_push(v___x_3940_, v___x_3938_);
return v___x_3941_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3943_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207);
v___x_3944_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_3945_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
lean_ctor_set(v___x_3945_, 1, v___x_3943_);
return v___x_3945_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6(void){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3946_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5);
v___x_3947_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3946_);
return v___x_3947_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8(void){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3949_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7));
v___x_3950_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3949_);
return v___x_3950_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9(void){
_start:
{
lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3951_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8);
v___x_3952_ = lean_unsigned_to_nat(1u);
v___x_3953_ = lean_mk_empty_array_with_capacity(v___x_3952_);
v___x_3954_ = lean_array_push(v___x_3953_, v___x_3951_);
return v___x_3954_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11(void){
_start:
{
lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; 
v___x_3957_ = lean_unsigned_to_nat(0u);
v___x_3958_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10));
v___x_3959_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v___x_3958_, v___x_3957_);
return v___x_3959_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12(void){
_start:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; 
v___x_3960_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11);
v___x_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3960_);
return v___x_3961_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13(void){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3962_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12);
v___x_3963_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9);
v___x_3964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
lean_ctor_set(v___x_3964_, 1, v___x_3962_);
return v___x_3964_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15(void){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; 
v___x_3967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14));
v___x_3968_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3967_);
return v___x_3968_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16(void){
_start:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3969_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15);
v___x_3970_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_3971_ = lean_array_push(v___x_3970_, v___x_3969_);
return v___x_3971_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17(void){
_start:
{
lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3972_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16);
v___x_3973_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3974_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
lean_ctor_set(v___x_3974_, 1, v___x_3972_);
return v___x_3974_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18(void){
_start:
{
lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3975_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17);
v___x_3976_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
return v___x_3976_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19(void){
_start:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; 
v___x_3977_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3978_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_3979_ = lean_array_push(v___x_3978_, v___x_3977_);
return v___x_3979_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20(void){
_start:
{
lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; 
v___x_3980_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19);
v___x_3981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_3982_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3981_);
lean_ctor_set(v___x_3982_, 1, v___x_3980_);
return v___x_3982_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21(void){
_start:
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20);
v___x_3984_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3983_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(size_t v_sz_3985_, size_t v_i_3986_, lean_object* v_bs_3987_){
_start:
{
uint8_t v___x_3988_; 
v___x_3988_ = lean_usize_dec_lt(v_i_3986_, v_sz_3985_);
if (v___x_3988_ == 0)
{
return v_bs_3987_;
}
else
{
lean_object* v_v_3989_; lean_object* v_fnName_3990_; lean_object* v_argCount_3991_; uint8_t v_returnsValue_3992_; lean_object* v___x_3993_; lean_object* v_bs_x27_3994_; lean_object* v___y_3996_; lean_object* v___x_4008_; lean_object* v___x_4009_; size_t v_sz_4010_; size_t v___x_4011_; lean_object* v_argExprs_4012_; lean_object* v_callExpr_4013_; 
v_v_3989_ = lean_array_uget(v_bs_3987_, v_i_3986_);
v_fnName_3990_ = lean_ctor_get(v_v_3989_, 1);
v_argCount_3991_ = lean_ctor_get(v_v_3989_, 2);
v_returnsValue_3992_ = lean_ctor_get_uint8(v_v_3989_, sizeof(void*)*3);
v___x_3993_ = lean_unsigned_to_nat(0u);
v_bs_x27_3994_ = lean_array_uset(v_bs_3987_, v_i_3986_, v___x_3993_);
lean_inc(v_argCount_3991_);
v___x_4008_ = l_List_range(v_argCount_3991_);
v___x_4009_ = lean_array_mk(v___x_4008_);
v_sz_4010_ = lean_array_size(v___x_4009_);
v___x_4011_ = ((size_t)0ULL);
v_argExprs_4012_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_4010_, v___x_4011_, v___x_4009_);
lean_inc_ref(v_fnName_3990_);
v_callExpr_4013_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_callExpr_4013_, 0, v_fnName_3990_);
lean_ctor_set(v_callExpr_4013_, 1, v_argExprs_4012_);
if (v_returnsValue_3992_ == 0)
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4014_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4015_, 0, v_callExpr_4013_);
v___x_4016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4014_);
lean_ctor_set(v___x_4016_, 1, v___x_4015_);
v___x_4017_ = lean_unsigned_to_nat(2u);
v___x_4018_ = lean_mk_empty_array_with_capacity(v___x_4017_);
v___x_4019_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6);
v___x_4020_ = lean_array_push(v___x_4018_, v___x_4016_);
v___x_4021_ = lean_array_push(v___x_4020_, v___x_4019_);
v___y_3996_ = v___x_4021_;
goto v___jp_3995_;
}
else
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4022_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_4023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4023_, 0, v_callExpr_4013_);
v___x_4024_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4022_);
lean_ctor_set(v___x_4024_, 1, v___x_4023_);
v___x_4025_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13);
v___x_4026_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18);
v___x_4027_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21);
v___x_4028_ = lean_unsigned_to_nat(4u);
v___x_4029_ = lean_mk_empty_array_with_capacity(v___x_4028_);
v___x_4030_ = lean_array_push(v___x_4029_, v___x_4024_);
v___x_4031_ = lean_array_push(v___x_4030_, v___x_4025_);
v___x_4032_ = lean_array_push(v___x_4031_, v___x_4026_);
v___x_4033_ = lean_array_push(v___x_4032_, v___x_4027_);
v___y_3996_ = v___x_4033_;
goto v___jp_3995_;
}
v___jp_3995_:
{
lean_object* v_selector_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; size_t v___x_4004_; size_t v___x_4005_; lean_object* v___x_4006_; 
v_selector_3997_ = lean_ctor_get(v_v_3989_, 0);
lean_inc_ref(v_selector_3997_);
lean_dec(v_v_3989_);
v___x_3998_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0));
v___x_3999_ = lean_string_append(v___x_3998_, v_selector_3997_);
lean_dec_ref(v_selector_3997_);
v___x_4000_ = l_Lean_Compiler_Yul_Literal_hex(v___x_3999_);
v___x_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4001_, 0, v___x_4000_);
v___x_4002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4002_, 0, v___y_3996_);
v___x_4003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4003_, 0, v___x_4001_);
lean_ctor_set(v___x_4003_, 1, v___x_4002_);
v___x_4004_ = ((size_t)1ULL);
v___x_4005_ = lean_usize_add(v_i_3986_, v___x_4004_);
v___x_4006_ = lean_array_uset(v_bs_x27_3994_, v_i_3986_, v___x_4003_);
v_i_3986_ = v___x_4005_;
v_bs_3987_ = v___x_4006_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___boxed(lean_object* v_sz_4034_, lean_object* v_i_4035_, lean_object* v_bs_4036_){
_start:
{
size_t v_sz_boxed_4037_; size_t v_i_boxed_4038_; lean_object* v_res_4039_; 
v_sz_boxed_4037_ = lean_unbox_usize(v_sz_4034_);
lean_dec(v_sz_4034_);
v_i_boxed_4038_ = lean_unbox_usize(v_i_4035_);
lean_dec(v_i_4035_);
v_res_4039_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_boxed_4037_, v_i_boxed_4038_, v_bs_4036_);
return v_res_4039_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0(void){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4040_ = lean_unsigned_to_nat(224u);
v___x_4041_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_4040_);
return v___x_4041_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1(void){
_start:
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4042_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_4043_ = lean_unsigned_to_nat(1u);
v___x_4044_ = lean_mk_empty_array_with_capacity(v___x_4043_);
v___x_4045_ = lean_array_push(v___x_4044_, v___x_4042_);
return v___x_4045_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2(void){
_start:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4046_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1);
v___x_4047_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_4048_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4048_, 0, v___x_4047_);
lean_ctor_set(v___x_4048_, 1, v___x_4046_);
return v___x_4048_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3(void){
_start:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v___x_4049_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2);
v___x_4050_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0);
v___x_4051_ = lean_unsigned_to_nat(2u);
v___x_4052_ = lean_mk_empty_array_with_capacity(v___x_4051_);
v___x_4053_ = lean_array_push(v___x_4052_, v___x_4050_);
v___x_4054_ = lean_array_push(v___x_4053_, v___x_4049_);
return v___x_4054_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4(void){
_start:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v_selExpr_4057_; 
v___x_4055_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3);
v___x_4056_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v_selExpr_4057_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_selExpr_4057_, 0, v___x_4056_);
lean_ctor_set(v_selExpr_4057_, 1, v___x_4055_);
return v_selExpr_4057_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5(void){
_start:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4058_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209);
v___x_4059_ = lean_unsigned_to_nat(1u);
v___x_4060_ = lean_mk_empty_array_with_capacity(v___x_4059_);
v___x_4061_ = lean_array_push(v___x_4060_, v___x_4058_);
return v___x_4061_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6(void){
_start:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5);
v___x_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
return v___x_4063_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7(void){
_start:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v_defaultCase_4066_; 
v___x_4064_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6);
v___x_4065_ = lean_box(0);
v_defaultCase_4066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_defaultCase_4066_, 0, v___x_4065_);
lean_ctor_set(v_defaultCase_4066_, 1, v___x_4064_);
return v_defaultCase_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(lean_object* v_methods_4067_){
_start:
{
lean_object* v_selExpr_4068_; size_t v_sz_4069_; size_t v___x_4070_; lean_object* v_cases_4071_; lean_object* v_defaultCase_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; 
v_selExpr_4068_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4);
v_sz_4069_ = lean_array_size(v_methods_4067_);
v___x_4070_ = ((size_t)0ULL);
v_cases_4071_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_4069_, v___x_4070_, v_methods_4067_);
v_defaultCase_4072_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7);
v___x_4073_ = lean_array_push(v_cases_4071_, v_defaultCase_4072_);
v___x_4074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4074_, 0, v_selExpr_4068_);
lean_ctor_set(v___x_4074_, 1, v___x_4073_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(lean_object* v___y_4078_, lean_object* v_snd_4079_, lean_object* v_modName_4080_, lean_object* v_x_4081_, lean_object* v_x_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
if (lean_obj_tag(v_x_4081_) == 0)
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
lean_dec(v_modName_4080_);
lean_dec_ref(v_snd_4079_);
lean_dec_ref(v___y_4078_);
v___x_4086_ = l_List_reverse___redArg(v_x_4082_);
v___x_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4087_, 0, v___x_4086_);
return v___x_4087_;
}
else
{
lean_object* v_head_4088_; lean_object* v_tail_4089_; lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4118_; 
v_head_4088_ = lean_ctor_get(v_x_4081_, 0);
v_tail_4089_ = lean_ctor_get(v_x_4081_, 1);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_x_4081_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4091_ = v_x_4081_;
v_isShared_4092_ = v_isSharedCheck_4118_;
goto v_resetjp_4090_;
}
else
{
lean_inc(v_tail_4089_);
lean_inc(v_head_4088_);
lean_dec(v_x_4081_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4118_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
lean_object* v_a_4094_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4101_ = ((lean_object*)(l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0));
v___x_4102_ = lean_st_mk_ref(v___x_4101_);
v___x_4103_ = lean_box(1);
v___x_4104_ = lean_box(0);
lean_inc(v_modName_4080_);
lean_inc_ref(v_snd_4079_);
lean_inc_ref(v___y_4078_);
v___x_4105_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4105_, 0, v___y_4078_);
lean_ctor_set(v___x_4105_, 1, v_snd_4079_);
lean_ctor_set(v___x_4105_, 2, v_modName_4080_);
lean_ctor_set(v___x_4105_, 3, v___x_4104_);
lean_ctor_set(v___x_4105_, 4, v___x_4103_);
lean_ctor_set(v___x_4105_, 5, v___x_4103_);
v___x_4106_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_head_4088_, v___x_4105_, v___x_4102_, v___y_4083_, v___y_4084_);
lean_dec_ref_known(v___x_4105_, 6);
if (lean_obj_tag(v___x_4106_) == 0)
{
lean_object* v_a_4107_; lean_object* v___x_4108_; 
v_a_4107_ = lean_ctor_get(v___x_4106_, 0);
lean_inc(v_a_4107_);
lean_dec_ref_known(v___x_4106_, 1);
v___x_4108_ = lean_st_ref_get(v___x_4102_);
lean_dec(v___x_4102_);
lean_dec(v___x_4108_);
v_a_4094_ = v_a_4107_;
goto v___jp_4093_;
}
else
{
lean_dec(v___x_4102_);
if (lean_obj_tag(v___x_4106_) == 0)
{
lean_object* v_a_4109_; 
v_a_4109_ = lean_ctor_get(v___x_4106_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v___x_4106_, 1);
v_a_4094_ = v_a_4109_;
goto v___jp_4093_;
}
else
{
lean_object* v_a_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4117_; 
lean_del_object(v___x_4091_);
lean_dec(v_tail_4089_);
lean_dec(v_x_4082_);
lean_dec(v_modName_4080_);
lean_dec_ref(v_snd_4079_);
lean_dec_ref(v___y_4078_);
v_a_4110_ = lean_ctor_get(v___x_4106_, 0);
v_isSharedCheck_4117_ = !lean_is_exclusive(v___x_4106_);
if (v_isSharedCheck_4117_ == 0)
{
v___x_4112_ = v___x_4106_;
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_a_4110_);
lean_dec(v___x_4106_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4117_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v___x_4115_; 
if (v_isShared_4113_ == 0)
{
v___x_4115_ = v___x_4112_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v_a_4110_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
v___jp_4093_:
{
if (lean_obj_tag(v_a_4094_) == 0)
{
lean_del_object(v___x_4091_);
v_x_4081_ = v_tail_4089_;
goto _start;
}
else
{
lean_object* v_val_4096_; lean_object* v___x_4098_; 
v_val_4096_ = lean_ctor_get(v_a_4094_, 0);
lean_inc(v_val_4096_);
lean_dec_ref_known(v_a_4094_, 1);
if (v_isShared_4092_ == 0)
{
lean_ctor_set(v___x_4091_, 1, v_x_4082_);
lean_ctor_set(v___x_4091_, 0, v_val_4096_);
v___x_4098_ = v___x_4091_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_val_4096_);
lean_ctor_set(v_reuseFailAlloc_4100_, 1, v_x_4082_);
v___x_4098_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
v_x_4081_ = v_tail_4089_;
v_x_4082_ = v___x_4098_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___boxed(lean_object* v___y_4119_, lean_object* v_snd_4120_, lean_object* v_modName_4121_, lean_object* v_x_4122_, lean_object* v_x_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v_res_4127_; 
v_res_4127_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4119_, v_snd_4120_, v_modName_4121_, v_x_4122_, v_x_4123_, v___y_4124_, v___y_4125_);
lean_dec(v___y_4125_);
lean_dec_ref(v___y_4124_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(lean_object* v_msg_4128_){
_start:
{
lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4129_ = lean_unsigned_to_nat(0u);
v___x_4130_ = lean_panic_fn_borrowed(v___x_4129_, v_msg_4128_);
return v___x_4130_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; 
v___x_4134_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2));
v___x_4135_ = lean_unsigned_to_nat(11u);
v___x_4136_ = lean_unsigned_to_nat(163u);
v___x_4137_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1));
v___x_4138_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0));
v___x_4139_ = l_mkPanicMessageWithDecl(v___x_4138_, v___x_4137_, v___x_4136_, v___x_4135_, v___x_4134_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(lean_object* v_a_4140_, lean_object* v_x_4141_){
_start:
{
if (lean_obj_tag(v_x_4141_) == 0)
{
lean_object* v___x_4142_; lean_object* v___x_4143_; 
v___x_4142_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3);
v___x_4143_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(v___x_4142_);
return v___x_4143_;
}
else
{
lean_object* v_key_4144_; lean_object* v_value_4145_; lean_object* v_tail_4146_; uint8_t v___x_4147_; 
v_key_4144_ = lean_ctor_get(v_x_4141_, 0);
v_value_4145_ = lean_ctor_get(v_x_4141_, 1);
v_tail_4146_ = lean_ctor_get(v_x_4141_, 2);
v___x_4147_ = lean_name_eq(v_key_4144_, v_a_4140_);
if (v___x_4147_ == 0)
{
v_x_4141_ = v_tail_4146_;
goto _start;
}
else
{
lean_inc(v_value_4145_);
return v_value_4145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___boxed(lean_object* v_a_4149_, lean_object* v_x_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_4149_, v_x_4150_);
lean_dec(v_x_4150_);
lean_dec(v_a_4149_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(lean_object* v_m_4152_, lean_object* v_a_4153_){
_start:
{
lean_object* v_buckets_4154_; lean_object* v___x_4155_; uint64_t v___y_4157_; 
v_buckets_4154_ = lean_ctor_get(v_m_4152_, 1);
v___x_4155_ = lean_array_get_size(v_buckets_4154_);
if (lean_obj_tag(v_a_4153_) == 0)
{
uint64_t v___x_4171_; 
v___x_4171_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_4157_ = v___x_4171_;
goto v___jp_4156_;
}
else
{
uint64_t v_hash_4172_; 
v_hash_4172_ = lean_ctor_get_uint64(v_a_4153_, sizeof(void*)*2);
v___y_4157_ = v_hash_4172_;
goto v___jp_4156_;
}
v___jp_4156_:
{
uint64_t v___x_4158_; uint64_t v___x_4159_; uint64_t v_fold_4160_; uint64_t v___x_4161_; uint64_t v___x_4162_; uint64_t v___x_4163_; size_t v___x_4164_; size_t v___x_4165_; size_t v___x_4166_; size_t v___x_4167_; size_t v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4158_ = 32ULL;
v___x_4159_ = lean_uint64_shift_right(v___y_4157_, v___x_4158_);
v_fold_4160_ = lean_uint64_xor(v___y_4157_, v___x_4159_);
v___x_4161_ = 16ULL;
v___x_4162_ = lean_uint64_shift_right(v_fold_4160_, v___x_4161_);
v___x_4163_ = lean_uint64_xor(v_fold_4160_, v___x_4162_);
v___x_4164_ = lean_uint64_to_usize(v___x_4163_);
v___x_4165_ = lean_usize_of_nat(v___x_4155_);
v___x_4166_ = ((size_t)1ULL);
v___x_4167_ = lean_usize_sub(v___x_4165_, v___x_4166_);
v___x_4168_ = lean_usize_land(v___x_4164_, v___x_4167_);
v___x_4169_ = lean_array_uget_borrowed(v_buckets_4154_, v___x_4168_);
v___x_4170_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_4153_, v___x_4169_);
return v___x_4170_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1___boxed(lean_object* v_m_4173_, lean_object* v_a_4174_){
_start:
{
lean_object* v_res_4175_; 
v_res_4175_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v_m_4173_, v_a_4174_);
lean_dec(v_a_4174_);
lean_dec_ref(v_m_4173_);
return v_res_4175_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(lean_object* v___x_4176_, lean_object* v_l_4177_, lean_object* v_r_4178_){
_start:
{
lean_object* v_toSignature_4179_; lean_object* v_toSignature_4180_; lean_object* v_name_4181_; lean_object* v_name_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v_toSignature_4179_ = lean_ctor_get(v_l_4177_, 0);
v_toSignature_4180_ = lean_ctor_get(v_r_4178_, 0);
v_name_4181_ = lean_ctor_get(v_toSignature_4179_, 0);
v_name_4182_ = lean_ctor_get(v_toSignature_4180_, 0);
v___x_4183_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4176_, v_name_4181_);
v___x_4184_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4176_, v_name_4182_);
v___x_4185_ = lean_nat_dec_lt(v___x_4183_, v___x_4184_);
lean_dec(v___x_4184_);
lean_dec(v___x_4183_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0___boxed(lean_object* v___x_4186_, lean_object* v_l_4187_, lean_object* v_r_4188_){
_start:
{
uint8_t v_res_4189_; lean_object* v_r_4190_; 
v_res_4189_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4186_, v_l_4187_, v_r_4188_);
lean_dec_ref(v_r_4188_);
lean_dec_ref(v_l_4187_);
lean_dec_ref(v___x_4186_);
v_r_4190_ = lean_box(v_res_4189_);
return v_r_4190_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(lean_object* v___x_4191_, lean_object* v_hi_4192_, lean_object* v_pivot_4193_, lean_object* v_as_4194_, lean_object* v_i_4195_, lean_object* v_k_4196_){
_start:
{
uint8_t v___x_4197_; 
v___x_4197_ = lean_nat_dec_lt(v_k_4196_, v_hi_4192_);
if (v___x_4197_ == 0)
{
lean_object* v___x_4198_; lean_object* v___x_4199_; 
lean_dec(v_k_4196_);
v___x_4198_ = lean_array_fswap(v_as_4194_, v_i_4195_, v_hi_4192_);
v___x_4199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4199_, 0, v_i_4195_);
lean_ctor_set(v___x_4199_, 1, v___x_4198_);
return v___x_4199_;
}
else
{
lean_object* v___x_4200_; lean_object* v_toSignature_4201_; lean_object* v_toSignature_4202_; lean_object* v_name_4203_; lean_object* v_name_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; 
v___x_4200_ = lean_array_fget_borrowed(v_as_4194_, v_k_4196_);
v_toSignature_4201_ = lean_ctor_get(v___x_4200_, 0);
v_toSignature_4202_ = lean_ctor_get(v_pivot_4193_, 0);
v_name_4203_ = lean_ctor_get(v_toSignature_4201_, 0);
v_name_4204_ = lean_ctor_get(v_toSignature_4202_, 0);
v___x_4205_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4191_, v_name_4203_);
v___x_4206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4191_, v_name_4204_);
v___x_4207_ = lean_nat_dec_lt(v___x_4205_, v___x_4206_);
lean_dec(v___x_4206_);
lean_dec(v___x_4205_);
if (v___x_4207_ == 0)
{
lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4208_ = lean_unsigned_to_nat(1u);
v___x_4209_ = lean_nat_add(v_k_4196_, v___x_4208_);
lean_dec(v_k_4196_);
v_k_4196_ = v___x_4209_;
goto _start;
}
else
{
lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4211_ = lean_array_fswap(v_as_4194_, v_i_4195_, v_k_4196_);
v___x_4212_ = lean_unsigned_to_nat(1u);
v___x_4213_ = lean_nat_add(v_i_4195_, v___x_4212_);
lean_dec(v_i_4195_);
v___x_4214_ = lean_nat_add(v_k_4196_, v___x_4212_);
lean_dec(v_k_4196_);
v_as_4194_ = v___x_4211_;
v_i_4195_ = v___x_4213_;
v_k_4196_ = v___x_4214_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg___boxed(lean_object* v___x_4216_, lean_object* v_hi_4217_, lean_object* v_pivot_4218_, lean_object* v_as_4219_, lean_object* v_i_4220_, lean_object* v_k_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4216_, v_hi_4217_, v_pivot_4218_, v_as_4219_, v_i_4220_, v_k_4221_);
lean_dec_ref(v_pivot_4218_);
lean_dec(v_hi_4217_);
lean_dec_ref(v___x_4216_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(lean_object* v___x_4223_, lean_object* v_n_4224_, lean_object* v_as_4225_, lean_object* v_lo_4226_, lean_object* v_hi_4227_){
_start:
{
lean_object* v___y_4229_; uint8_t v___x_4239_; 
v___x_4239_ = lean_nat_dec_lt(v_lo_4226_, v_hi_4227_);
if (v___x_4239_ == 0)
{
lean_dec(v_lo_4226_);
return v_as_4225_;
}
else
{
lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v_mid_4242_; lean_object* v___y_4244_; lean_object* v___y_4250_; lean_object* v___x_4255_; lean_object* v___x_4256_; uint8_t v___x_4257_; 
v___x_4240_ = lean_nat_add(v_lo_4226_, v_hi_4227_);
v___x_4241_ = lean_unsigned_to_nat(1u);
v_mid_4242_ = lean_nat_shiftr(v___x_4240_, v___x_4241_);
lean_dec(v___x_4240_);
v___x_4255_ = lean_array_fget_borrowed(v_as_4225_, v_mid_4242_);
v___x_4256_ = lean_array_fget_borrowed(v_as_4225_, v_lo_4226_);
v___x_4257_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4223_, v___x_4255_, v___x_4256_);
if (v___x_4257_ == 0)
{
v___y_4250_ = v_as_4225_;
goto v___jp_4249_;
}
else
{
lean_object* v___x_4258_; 
v___x_4258_ = lean_array_fswap(v_as_4225_, v_lo_4226_, v_mid_4242_);
v___y_4250_ = v___x_4258_;
goto v___jp_4249_;
}
v___jp_4243_:
{
lean_object* v___x_4245_; lean_object* v___x_4246_; uint8_t v___x_4247_; 
v___x_4245_ = lean_array_fget_borrowed(v___y_4244_, v_mid_4242_);
v___x_4246_ = lean_array_fget_borrowed(v___y_4244_, v_hi_4227_);
v___x_4247_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4223_, v___x_4245_, v___x_4246_);
if (v___x_4247_ == 0)
{
lean_dec(v_mid_4242_);
v___y_4229_ = v___y_4244_;
goto v___jp_4228_;
}
else
{
lean_object* v___x_4248_; 
v___x_4248_ = lean_array_fswap(v___y_4244_, v_mid_4242_, v_hi_4227_);
lean_dec(v_mid_4242_);
v___y_4229_ = v___x_4248_;
goto v___jp_4228_;
}
}
v___jp_4249_:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; uint8_t v___x_4253_; 
v___x_4251_ = lean_array_fget_borrowed(v___y_4250_, v_hi_4227_);
v___x_4252_ = lean_array_fget_borrowed(v___y_4250_, v_lo_4226_);
v___x_4253_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4223_, v___x_4251_, v___x_4252_);
if (v___x_4253_ == 0)
{
v___y_4244_ = v___y_4250_;
goto v___jp_4243_;
}
else
{
lean_object* v___x_4254_; 
v___x_4254_ = lean_array_fswap(v___y_4250_, v_lo_4226_, v_hi_4227_);
v___y_4244_ = v___x_4254_;
goto v___jp_4243_;
}
}
}
v___jp_4228_:
{
lean_object* v_pivot_4230_; lean_object* v___x_4231_; lean_object* v_fst_4232_; lean_object* v_snd_4233_; uint8_t v___x_4234_; 
v_pivot_4230_ = lean_array_fget(v___y_4229_, v_hi_4227_);
lean_inc_n(v_lo_4226_, 2);
v___x_4231_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4223_, v_hi_4227_, v_pivot_4230_, v___y_4229_, v_lo_4226_, v_lo_4226_);
lean_dec(v_pivot_4230_);
v_fst_4232_ = lean_ctor_get(v___x_4231_, 0);
lean_inc(v_fst_4232_);
v_snd_4233_ = lean_ctor_get(v___x_4231_, 1);
lean_inc(v_snd_4233_);
lean_dec_ref(v___x_4231_);
v___x_4234_ = lean_nat_dec_le(v_hi_4227_, v_fst_4232_);
if (v___x_4234_ == 0)
{
lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v___x_4235_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4223_, v_n_4224_, v_snd_4233_, v_lo_4226_, v_fst_4232_);
v___x_4236_ = lean_unsigned_to_nat(1u);
v___x_4237_ = lean_nat_add(v_fst_4232_, v___x_4236_);
lean_dec(v_fst_4232_);
v_as_4225_ = v___x_4235_;
v_lo_4226_ = v___x_4237_;
goto _start;
}
else
{
lean_dec(v_fst_4232_);
lean_dec(v_lo_4226_);
return v_snd_4233_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___boxed(lean_object* v___x_4259_, lean_object* v_n_4260_, lean_object* v_as_4261_, lean_object* v_lo_4262_, lean_object* v_hi_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4259_, v_n_4260_, v_as_4261_, v_lo_4262_, v_hi_4263_);
lean_dec(v_hi_4263_);
lean_dec(v_n_4260_);
lean_dec_ref(v___x_4259_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(lean_object* v_modName_4268_, lean_object* v_decls_4269_, lean_object* v_a_4270_, lean_object* v_a_4271_){
_start:
{
lean_object* v___x_4273_; 
v___x_4273_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_decls_4269_, v_a_4270_, v_a_4271_);
if (lean_obj_tag(v___x_4273_) == 0)
{
lean_object* v_a_4274_; lean_object* v_fst_4275_; lean_object* v_snd_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___y_4280_; lean_object* v___x_4308_; uint8_t v___x_4309_; 
v_a_4274_ = lean_ctor_get(v___x_4273_, 0);
lean_inc(v_a_4274_);
lean_dec_ref_known(v___x_4273_, 1);
v_fst_4275_ = lean_ctor_get(v_a_4274_, 0);
lean_inc(v_fst_4275_);
v_snd_4276_ = lean_ctor_get(v_a_4274_, 1);
lean_inc(v_snd_4276_);
lean_dec(v_a_4274_);
v___x_4277_ = lean_st_ref_get(v_a_4271_);
v___x_4278_ = lean_unsigned_to_nat(0u);
v___x_4308_ = lean_array_get_size(v_fst_4275_);
v___x_4309_ = lean_nat_dec_eq(v___x_4308_, v___x_4278_);
if (v___x_4309_ == 0)
{
lean_object* v_env_4310_; lean_object* v___x_4311_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___y_4319_; uint8_t v___x_4321_; 
v_env_4310_ = lean_ctor_get(v___x_4277_, 0);
lean_inc_ref(v_env_4310_);
lean_dec(v___x_4277_);
v___x_4311_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_4310_, v_decls_4269_);
v___x_4316_ = lean_unsigned_to_nat(1u);
v___x_4317_ = lean_nat_sub(v___x_4308_, v___x_4316_);
v___x_4321_ = lean_nat_dec_le(v___x_4278_, v___x_4317_);
if (v___x_4321_ == 0)
{
lean_inc(v___x_4317_);
v___y_4319_ = v___x_4317_;
goto v___jp_4318_;
}
else
{
v___y_4319_ = v___x_4278_;
goto v___jp_4318_;
}
v___jp_4312_:
{
lean_object* v___x_4315_; 
v___x_4315_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4311_, v___x_4308_, v_fst_4275_, v___y_4313_, v___y_4314_);
lean_dec(v___y_4314_);
lean_dec_ref(v___x_4311_);
v___y_4280_ = v___x_4315_;
goto v___jp_4279_;
}
v___jp_4318_:
{
uint8_t v___x_4320_; 
v___x_4320_ = lean_nat_dec_le(v___y_4319_, v___x_4317_);
if (v___x_4320_ == 0)
{
lean_dec(v___x_4317_);
lean_inc(v___y_4319_);
v___y_4313_ = v___y_4319_;
v___y_4314_ = v___y_4319_;
goto v___jp_4312_;
}
else
{
v___y_4313_ = v___y_4319_;
v___y_4314_ = v___x_4317_;
goto v___jp_4312_;
}
}
}
else
{
lean_dec(v___x_4277_);
v___y_4280_ = v_fst_4275_;
goto v___jp_4279_;
}
v___jp_4279_:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; 
lean_inc_ref(v___y_4280_);
v___x_4281_ = lean_array_to_list(v___y_4280_);
v___x_4282_ = lean_box(0);
v___x_4283_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4280_, v_snd_4276_, v_modName_4268_, v___x_4281_, v___x_4282_, v_a_4270_, v_a_4271_);
if (lean_obj_tag(v___x_4283_) == 0)
{
lean_object* v_a_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4299_; 
v_a_4284_ = lean_ctor_get(v___x_4283_, 0);
v_isSharedCheck_4299_ = !lean_is_exclusive(v___x_4283_);
if (v_isSharedCheck_4299_ == 0)
{
v___x_4286_ = v___x_4283_;
v_isShared_4287_ = v_isSharedCheck_4299_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_a_4284_);
lean_dec(v___x_4283_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4299_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4297_; 
v___x_4288_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_4289_ = lean_array_mk(v_a_4284_);
v___x_4290_ = l_Array_append___redArg(v___x_4288_, v___x_4289_);
lean_dec_ref(v___x_4289_);
v___x_4291_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_4292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4292_, 0, v___x_4290_);
v___x_4293_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_4294_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4291_);
lean_ctor_set(v___x_4294_, 1, v___x_4292_);
lean_ctor_set(v___x_4294_, 2, v___x_4293_);
lean_ctor_set(v___x_4294_, 3, v___x_4293_);
v___x_4295_ = l_Lean_Compiler_Yul_Printer_render(v___x_4294_);
lean_dec_ref_known(v___x_4294_, 4);
if (v_isShared_4287_ == 0)
{
lean_ctor_set(v___x_4286_, 0, v___x_4295_);
v___x_4297_ = v___x_4286_;
goto v_reusejp_4296_;
}
else
{
lean_object* v_reuseFailAlloc_4298_; 
v_reuseFailAlloc_4298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4298_, 0, v___x_4295_);
v___x_4297_ = v_reuseFailAlloc_4298_;
goto v_reusejp_4296_;
}
v_reusejp_4296_:
{
return v___x_4297_;
}
}
}
else
{
lean_object* v_a_4300_; lean_object* v___x_4302_; uint8_t v_isShared_4303_; uint8_t v_isSharedCheck_4307_; 
v_a_4300_ = lean_ctor_get(v___x_4283_, 0);
v_isSharedCheck_4307_ = !lean_is_exclusive(v___x_4283_);
if (v_isSharedCheck_4307_ == 0)
{
v___x_4302_ = v___x_4283_;
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
else
{
lean_inc(v_a_4300_);
lean_dec(v___x_4283_);
v___x_4302_ = lean_box(0);
v_isShared_4303_ = v_isSharedCheck_4307_;
goto v_resetjp_4301_;
}
v_resetjp_4301_:
{
lean_object* v___x_4305_; 
if (v_isShared_4303_ == 0)
{
v___x_4305_ = v___x_4302_;
goto v_reusejp_4304_;
}
else
{
lean_object* v_reuseFailAlloc_4306_; 
v_reuseFailAlloc_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4306_, 0, v_a_4300_);
v___x_4305_ = v_reuseFailAlloc_4306_;
goto v_reusejp_4304_;
}
v_reusejp_4304_:
{
return v___x_4305_;
}
}
}
}
}
else
{
lean_object* v_a_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4329_; 
lean_dec(v_modName_4268_);
v_a_4322_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4329_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4329_ == 0)
{
v___x_4324_ = v___x_4273_;
v_isShared_4325_ = v_isSharedCheck_4329_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_a_4322_);
lean_dec(v___x_4273_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4329_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v___x_4327_; 
if (v_isShared_4325_ == 0)
{
v___x_4327_ = v___x_4324_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4328_; 
v_reuseFailAlloc_4328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4328_, 0, v_a_4322_);
v___x_4327_ = v_reuseFailAlloc_4328_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
return v___x_4327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___boxed(lean_object* v_modName_4330_, lean_object* v_decls_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_){
_start:
{
lean_object* v_res_4335_; 
v_res_4335_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_4330_, v_decls_4331_, v_a_4332_, v_a_4333_);
lean_dec(v_a_4333_);
lean_dec_ref(v_a_4332_);
lean_dec_ref(v_decls_4331_);
return v_res_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(lean_object* v___x_4336_, lean_object* v_n_4337_, lean_object* v_as_4338_, lean_object* v_lo_4339_, lean_object* v_hi_4340_, lean_object* v_w_4341_, lean_object* v_hlo_4342_, lean_object* v_hhi_4343_){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4336_, v_n_4337_, v_as_4338_, v_lo_4339_, v_hi_4340_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___boxed(lean_object* v___x_4345_, lean_object* v_n_4346_, lean_object* v_as_4347_, lean_object* v_lo_4348_, lean_object* v_hi_4349_, lean_object* v_w_4350_, lean_object* v_hlo_4351_, lean_object* v_hhi_4352_){
_start:
{
lean_object* v_res_4353_; 
v_res_4353_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(v___x_4345_, v_n_4346_, v_as_4347_, v_lo_4348_, v_hi_4349_, v_w_4350_, v_hlo_4351_, v_hhi_4352_);
lean_dec(v_hi_4349_);
lean_dec(v_n_4346_);
lean_dec_ref(v___x_4345_);
return v_res_4353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(lean_object* v___x_4354_, lean_object* v_n_4355_, lean_object* v_lo_4356_, lean_object* v_hi_4357_, lean_object* v_hhi_4358_, lean_object* v_pivot_4359_, lean_object* v_as_4360_, lean_object* v_i_4361_, lean_object* v_k_4362_, lean_object* v_ilo_4363_, lean_object* v_ik_4364_, lean_object* v_w_4365_){
_start:
{
lean_object* v___x_4366_; 
v___x_4366_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4354_, v_hi_4357_, v_pivot_4359_, v_as_4360_, v_i_4361_, v_k_4362_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___boxed(lean_object* v___x_4367_, lean_object* v_n_4368_, lean_object* v_lo_4369_, lean_object* v_hi_4370_, lean_object* v_hhi_4371_, lean_object* v_pivot_4372_, lean_object* v_as_4373_, lean_object* v_i_4374_, lean_object* v_k_4375_, lean_object* v_ilo_4376_, lean_object* v_ik_4377_, lean_object* v_w_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(v___x_4367_, v_n_4368_, v_lo_4369_, v_hi_4370_, v_hhi_4371_, v_pivot_4372_, v_as_4373_, v_i_4374_, v_k_4375_, v_ilo_4376_, v_ik_4377_, v_w_4378_);
lean_dec_ref(v_pivot_4372_);
lean_dec(v_hi_4370_);
lean_dec(v_lo_4369_);
lean_dec(v_n_4368_);
lean_dec_ref(v___x_4367_);
return v_res_4379_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0(void){
_start:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4380_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2);
v___x_4381_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_4382_ = lean_unsigned_to_nat(2u);
v___x_4383_ = lean_mk_empty_array_with_capacity(v___x_4382_);
v___x_4384_ = lean_array_push(v___x_4383_, v___x_4381_);
v___x_4385_ = lean_array_push(v___x_4384_, v___x_4380_);
return v___x_4385_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1(void){
_start:
{
lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4386_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0);
v___x_4387_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4388_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4388_, 0, v___x_4387_);
lean_ctor_set(v___x_4388_, 1, v___x_4386_);
return v___x_4388_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2(void){
_start:
{
lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4389_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1);
v___x_4390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4390_, 0, v___x_4389_);
return v___x_4390_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3(void){
_start:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4391_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2);
v___x_4392_ = lean_unsigned_to_nat(2u);
v___x_4393_ = lean_mk_empty_array_with_capacity(v___x_4392_);
v___x_4394_ = lean_array_push(v___x_4393_, v___x_4391_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract(lean_object* v_modName_4395_, lean_object* v_methods_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_){
_start:
{
lean_object* v___x_4400_; 
v___x_4400_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4398_);
if (lean_obj_tag(v___x_4400_) == 0)
{
lean_object* v_a_4401_; lean_object* v___x_4402_; 
v_a_4401_ = lean_ctor_get(v___x_4400_, 0);
lean_inc(v_a_4401_);
lean_dec_ref_known(v___x_4400_, 1);
v___x_4402_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_a_4401_, v_a_4397_, v_a_4398_);
lean_dec(v_a_4401_);
if (lean_obj_tag(v___x_4402_) == 0)
{
lean_object* v_a_4403_; lean_object* v_fst_4404_; lean_object* v_snd_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v_a_4403_ = lean_ctor_get(v___x_4402_, 0);
lean_inc(v_a_4403_);
lean_dec_ref_known(v___x_4402_, 1);
v_fst_4404_ = lean_ctor_get(v_a_4403_, 0);
lean_inc(v_fst_4404_);
v_snd_4405_ = lean_ctor_get(v_a_4403_, 1);
lean_inc(v_snd_4405_);
lean_dec(v_a_4403_);
v___x_4406_ = lean_st_ref_get(v_a_4398_);
v___x_4407_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4398_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; lean_object* v___x_4409_; lean_object* v___y_4411_; lean_object* v___x_4443_; uint8_t v___x_4444_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_a_4408_);
lean_dec_ref_known(v___x_4407_, 1);
v___x_4409_ = lean_unsigned_to_nat(0u);
v___x_4443_ = lean_array_get_size(v_fst_4404_);
v___x_4444_ = lean_nat_dec_eq(v___x_4443_, v___x_4409_);
if (v___x_4444_ == 0)
{
lean_object* v_env_4445_; lean_object* v___x_4446_; lean_object* v___y_4448_; lean_object* v___y_4449_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___y_4454_; uint8_t v___x_4456_; 
v_env_4445_ = lean_ctor_get(v___x_4406_, 0);
lean_inc_ref(v_env_4445_);
lean_dec(v___x_4406_);
v___x_4446_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_4445_, v_a_4408_);
lean_dec(v_a_4408_);
v___x_4451_ = lean_unsigned_to_nat(1u);
v___x_4452_ = lean_nat_sub(v___x_4443_, v___x_4451_);
v___x_4456_ = lean_nat_dec_le(v___x_4409_, v___x_4452_);
if (v___x_4456_ == 0)
{
lean_inc(v___x_4452_);
v___y_4454_ = v___x_4452_;
goto v___jp_4453_;
}
else
{
v___y_4454_ = v___x_4409_;
goto v___jp_4453_;
}
v___jp_4447_:
{
lean_object* v___x_4450_; 
v___x_4450_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4446_, v___x_4443_, v_fst_4404_, v___y_4448_, v___y_4449_);
lean_dec(v___y_4449_);
lean_dec_ref(v___x_4446_);
v___y_4411_ = v___x_4450_;
goto v___jp_4410_;
}
v___jp_4453_:
{
uint8_t v___x_4455_; 
v___x_4455_ = lean_nat_dec_le(v___y_4454_, v___x_4452_);
if (v___x_4455_ == 0)
{
lean_dec(v___x_4452_);
lean_inc(v___y_4454_);
v___y_4448_ = v___y_4454_;
v___y_4449_ = v___y_4454_;
goto v___jp_4447_;
}
else
{
v___y_4448_ = v___y_4454_;
v___y_4449_ = v___x_4452_;
goto v___jp_4447_;
}
}
}
else
{
lean_dec(v_a_4408_);
lean_dec(v___x_4406_);
v___y_4411_ = v_fst_4404_;
goto v___jp_4410_;
}
v___jp_4410_:
{
lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; 
lean_inc_ref(v___y_4411_);
v___x_4412_ = lean_array_to_list(v___y_4411_);
v___x_4413_ = lean_box(0);
v___x_4414_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4411_, v_snd_4405_, v_modName_4395_, v___x_4412_, v___x_4413_, v_a_4397_, v_a_4398_);
if (lean_obj_tag(v___x_4414_) == 0)
{
lean_object* v_a_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4434_; 
v_a_4415_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4417_ = v___x_4414_;
v_isShared_4418_ = v_isSharedCheck_4434_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_a_4415_);
lean_dec(v___x_4414_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4434_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; 
v___x_4419_ = l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(v_methods_4396_);
v___x_4420_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3);
v___x_4421_ = lean_array_push(v___x_4420_, v___x_4419_);
v___x_4422_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_4423_ = l_Array_append___redArg(v___x_4421_, v___x_4422_);
v___x_4424_ = lean_array_mk(v_a_4415_);
v___x_4425_ = l_Array_append___redArg(v___x_4423_, v___x_4424_);
lean_dec_ref(v___x_4424_);
v___x_4426_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_4427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4425_);
v___x_4428_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_4429_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4429_, 0, v___x_4426_);
lean_ctor_set(v___x_4429_, 1, v___x_4427_);
lean_ctor_set(v___x_4429_, 2, v___x_4428_);
lean_ctor_set(v___x_4429_, 3, v___x_4428_);
v___x_4430_ = l_Lean_Compiler_Yul_Printer_render(v___x_4429_);
lean_dec_ref_known(v___x_4429_, 4);
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 0, v___x_4430_);
v___x_4432_ = v___x_4417_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v___x_4430_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
return v___x_4432_;
}
}
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
lean_dec_ref(v_methods_4396_);
v_a_4435_ = lean_ctor_get(v___x_4414_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4414_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4414_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4414_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_dec(v___x_4406_);
lean_dec(v_snd_4405_);
lean_dec(v_fst_4404_);
lean_dec_ref(v_methods_4396_);
lean_dec(v_modName_4395_);
v_a_4457_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4407_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4407_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
else
{
lean_object* v_a_4465_; lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4472_; 
lean_dec_ref(v_methods_4396_);
lean_dec(v_modName_4395_);
v_a_4465_ = lean_ctor_get(v___x_4402_, 0);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___x_4402_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4467_ = v___x_4402_;
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_a_4465_);
lean_dec(v___x_4402_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v___x_4470_; 
if (v_isShared_4468_ == 0)
{
v___x_4470_ = v___x_4467_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_a_4465_);
v___x_4470_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
return v___x_4470_;
}
}
}
}
else
{
lean_object* v_a_4473_; lean_object* v___x_4475_; uint8_t v_isShared_4476_; uint8_t v_isSharedCheck_4480_; 
lean_dec_ref(v_methods_4396_);
lean_dec(v_modName_4395_);
v_a_4473_ = lean_ctor_get(v___x_4400_, 0);
v_isSharedCheck_4480_ = !lean_is_exclusive(v___x_4400_);
if (v_isSharedCheck_4480_ == 0)
{
v___x_4475_ = v___x_4400_;
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
else
{
lean_inc(v_a_4473_);
lean_dec(v___x_4400_);
v___x_4475_ = lean_box(0);
v_isShared_4476_ = v_isSharedCheck_4480_;
goto v_resetjp_4474_;
}
v_resetjp_4474_:
{
lean_object* v___x_4478_; 
if (v_isShared_4476_ == 0)
{
v___x_4478_ = v___x_4475_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4479_; 
v_reuseFailAlloc_4479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4479_, 0, v_a_4473_);
v___x_4478_ = v_reuseFailAlloc_4479_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
return v___x_4478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___boxed(lean_object* v_modName_4481_, lean_object* v_methods_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_){
_start:
{
lean_object* v_res_4486_; 
v_res_4486_ = l_Lean_Compiler_LCNF_EmitYul_emitYulContract(v_modName_4481_, v_methods_4482_, v_a_4483_, v_a_4484_);
lean_dec(v_a_4484_);
lean_dec_ref(v_a_4483_);
return v_res_4486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul(lean_object* v_modName_4487_, lean_object* v_a_4488_, lean_object* v_a_4489_){
_start:
{
lean_object* v___x_4491_; 
v___x_4491_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4489_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v_a_4492_; lean_object* v___x_4493_; 
v_a_4492_ = lean_ctor_get(v___x_4491_, 0);
lean_inc(v_a_4492_);
lean_dec_ref_known(v___x_4491_, 1);
v___x_4493_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_4487_, v_a_4492_, v_a_4488_, v_a_4489_);
lean_dec(v_a_4492_);
return v___x_4493_;
}
else
{
lean_object* v_a_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4501_; 
lean_dec(v_modName_4487_);
v_a_4494_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4496_ = v___x_4491_;
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_a_4494_);
lean_dec(v___x_4491_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4499_; 
if (v_isShared_4497_ == 0)
{
v___x_4499_ = v___x_4496_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_a_4494_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
return v___x_4499_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul___boxed(lean_object* v_modName_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_){
_start:
{
lean_object* v_res_4506_; 
v_res_4506_ = l_Lean_Compiler_LCNF_EmitYul_emitYul(v_modName_4502_, v_a_4503_, v_a_4504_);
lean_dec(v_a_4504_);
lean_dec_ref(v_a_4503_);
return v_res_4506_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NameMangling(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Yul_AST(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Yul_Printer(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitYul(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Yul_AST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Yul_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_EmitYul_sLeave = _init_l_Lean_Compiler_LCNF_EmitYul_sLeave();
lean_mark_persistent(l_Lean_Compiler_LCNF_EmitYul_sLeave);
l_Lean_Compiler_LCNF_EmitYul_freeMemPtrSlot = _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrSlot();
lean_mark_persistent(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrSlot);
l_Lean_Compiler_LCNF_EmitYul_leanBoxZero = _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero();
lean_mark_persistent(l_Lean_Compiler_LCNF_EmitYul_leanBoxZero);
l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr = _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr();
lean_mark_persistent(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr);
l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers = _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers();
lean_mark_persistent(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_EmitYul(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NameMangling(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Yul_AST(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Yul_Printer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_EmitYul(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NameMangling(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Yul_AST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Yul_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitYul(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_EmitYul(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_EmitYul(builtin);
}
#ifdef __cplusplus
}
#endif
