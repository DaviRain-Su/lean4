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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "selfdestruct"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sstore"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lean_evm_"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "returnMem"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revertMem"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__12_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lean_ctor_set"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "and"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_add"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_sub"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "iszero"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "va"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vb"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_mul"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decEq"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decLe"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decLt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_div"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_mod"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mod"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "f_Nat_shiftRight"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "f_Nat_shiftLeft"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "f_Nat_land"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_lor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_xor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261_value;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__267_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__267;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__268_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "lean_array_get_size"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__268 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__268_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__271_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__271;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__273_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__273;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__275_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__275;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__276_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__276;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__277_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__277;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__278_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__278;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__279_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__279;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__280_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "lean_array_get_core"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__280 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__280_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__281_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__281;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__282_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__282;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__283_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__283;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__284_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__284;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__285_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__285;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__287_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__287;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__289_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__289;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__290_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__290;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__291_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__291;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__292_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__292;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__293_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__293;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__294_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__294;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__295_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "lean_array_set_core"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__295 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__295_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__296_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__296;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__297_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__297;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__298_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__298;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__299_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__299;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__300_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__300;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__301_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__301;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__302_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__302;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__303_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lean_array_push"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__303 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__303_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__305_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "sz"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__305 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__305_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__306_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__306;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__307_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__307;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__308_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__308;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__309_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__309;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__310_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__305_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__310 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__310_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__312_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__312;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__313_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__313;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__314_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__314;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__315_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__315;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__316_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__316;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__317_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__317;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__318_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__318;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__319_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__319;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__320_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__320;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__321_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__321;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__322_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__322;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__323_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__323;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__324_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__324 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__324_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__325_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__325;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__326_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__326;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__327_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__327;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__328_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lean_array_mk"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__328 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__328_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__329_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_mk_ptr"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__329 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__329_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__330_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__330;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__331_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__331;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__332_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__332;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__333_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__329_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__333 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__333_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__334_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__334;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__335_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__335;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__336_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__336;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__337_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__337;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__338_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__338;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__340_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__340;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__341_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__341;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__342_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__342;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__343_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__343;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__344_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__344;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__345_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__345;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__346_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__346;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__347_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__347;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__348_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__348;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__349_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__349;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__350_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__350;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__351_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__351;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__352_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__352;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__353_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__353;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__354_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__354;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__355_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__355;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__356_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__356;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__357_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__357;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__358_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__358;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__359_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__359;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__360_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__333_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__360 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__360_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__361_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__361;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__362_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__362;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__363_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__363;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__364_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "f_Array_mkEmpty"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__364 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__364_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__365_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__365;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__366_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__366;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__367_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__367 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__367_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__368_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__367_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__368 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__368_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__369_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__328_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__368_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__369 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__369_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__370_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__369_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__370 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__370_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__371_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__370_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__371 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__371_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__372_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__371_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__372 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__372_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__373_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__373;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__374_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "f_Array_push"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__374 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__374_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__375_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__375;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__376_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__376;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__377_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__377;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__378_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__378;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__379_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__379;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__380_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__380;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__381_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "f_Array_size"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__381 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__381_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__382_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__382 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__382_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__383_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__268_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__382_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__383 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__383_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__384_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__383_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__384 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__384_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__385_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__384_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__385 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__385_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__386_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__385_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__386 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__386_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__387_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__387;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__388_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "f_Array_get_x21InternalBorrowed"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__388 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__388_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__389_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_s"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__389 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__389_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__390_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__390;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__391_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__391;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__392_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__392;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__393_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__393;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__394_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__394;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__395_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__395;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__396_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__396;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__397_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__397;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__398_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__398;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__399_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__399;
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
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9));
v___x_1695_ = lean_string_utf8_byte_size(v___x_1694_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(lean_object* v_lhsId_1698_, lean_object* v_fn_1699_, lean_object* v_args_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_){
_start:
{
lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___x_1729_; lean_object* v___x_1730_; 
v___x_1729_ = lean_st_ref_get(v_a_1702_);
lean_inc(v_fn_1699_);
v___x_1730_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1699_, v_a_1702_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_2013_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_1733_ = v___x_1730_;
v_isShared_1734_ = v_isSharedCheck_2013_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1730_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_2013_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___y_1736_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; uint8_t v___y_1861_; lean_object* v___y_1948_; lean_object* v___y_1949_; uint8_t v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; uint8_t v___y_1953_; lean_object* v___y_1957_; lean_object* v___y_1958_; uint8_t v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; uint8_t v___y_1962_; lean_object* v___y_1966_; uint8_t v___y_1967_; lean_object* v___y_1968_; lean_object* v___y_1969_; uint8_t v___y_1970_; lean_object* v_env_1977_; lean_object* v___y_1979_; 
v_env_1977_ = lean_ctor_get(v___x_1729_, 0);
lean_inc_ref(v_env_1977_);
lean_dec(v___x_1729_);
if (lean_obj_tag(v_a_1731_) == 0)
{
size_t v_sz_2004_; size_t v___x_2005_; lean_object* v___x_2006_; 
v_sz_2004_ = lean_array_size(v_args_1700_);
v___x_2005_ = ((size_t)0ULL);
v___x_2006_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_2004_, v___x_2005_, v_args_1700_);
v___y_1979_ = v___x_2006_;
goto v___jp_1978_;
}
else
{
lean_object* v_val_2007_; lean_object* v_params_2008_; lean_object* v___x_2009_; size_t v_sz_2010_; size_t v___x_2011_; lean_object* v___x_2012_; 
v_val_2007_ = lean_ctor_get(v_a_1731_, 0);
lean_inc(v_val_2007_);
lean_dec_ref_known(v_a_1731_, 1);
v_params_2008_ = lean_ctor_get(v_val_2007_, 3);
lean_inc_ref(v_params_2008_);
lean_dec(v_val_2007_);
v___x_2009_ = l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(v_params_2008_, v_args_1700_);
lean_dec_ref(v_args_1700_);
lean_dec_ref(v_params_2008_);
v_sz_2010_ = lean_array_size(v___x_2009_);
v___x_2011_ = ((size_t)0ULL);
v___x_2012_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_2010_, v___x_2011_, v___x_2009_);
v___y_1979_ = v___x_2012_;
goto v___jp_1978_;
}
v___jp_1735_:
{
lean_object* v___x_1737_; lean_object* v_stmts_1738_; lean_object* v_fresh_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1760_; 
v___x_1737_ = lean_st_ref_take(v_a_1701_);
v_stmts_1738_ = lean_ctor_get(v___x_1737_, 0);
v_fresh_1739_ = lean_ctor_get(v___x_1737_, 1);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1737_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1741_ = v___x_1737_;
v_isShared_1742_ = v_isSharedCheck_1760_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_fresh_1739_);
lean_inc(v_stmts_1738_);
lean_dec(v___x_1737_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1760_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1743_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1698_);
v___x_1744_ = lean_unsigned_to_nat(1u);
v___x_1745_ = lean_mk_empty_array_with_capacity(v___x_1744_);
v___x_1746_ = lean_array_push(v___x_1745_, v___x_1743_);
v___x_1747_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1699_);
v___x_1748_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
lean_ctor_set(v___x_1748_, 1, v___y_1736_);
v___x_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
v___x_1750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1746_);
lean_ctor_set(v___x_1750_, 1, v___x_1749_);
v___x_1751_ = lean_array_push(v_stmts_1738_, v___x_1750_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 0, v___x_1751_);
v___x_1753_ = v___x_1741_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1759_, 1, v_fresh_1739_);
v___x_1753_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1757_; 
v___x_1754_ = lean_st_ref_set(v_a_1701_, v___x_1753_);
v___x_1755_ = lean_box(0);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 0, v___x_1755_);
v___x_1757_ = v___x_1733_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1755_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
v___jp_1761_:
{
lean_object* v___x_1765_; lean_object* v_stmts_1766_; lean_object* v_fresh_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1818_; 
v___x_1765_ = lean_st_ref_take(v_a_1701_);
v_stmts_1766_ = lean_ctor_get(v___x_1765_, 0);
v_fresh_1767_ = lean_ctor_get(v___x_1765_, 1);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1769_ = v___x_1765_;
v_isShared_1770_ = v_isSharedCheck_1818_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_fresh_1767_);
lean_inc(v_stmts_1766_);
lean_dec(v___x_1765_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1818_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
v___x_1771_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___y_1763_);
lean_ctor_set(v___x_1771_, 1, v___y_1762_);
v___x_1772_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
v___x_1773_ = lean_array_push(v_stmts_1766_, v___x_1772_);
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 0, v___x_1773_);
v___x_1775_ = v___x_1769_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v_fresh_1767_);
v___x_1775_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v_stmts_1778_; lean_object* v_fresh_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1816_; 
v___x_1776_ = lean_st_ref_set(v_a_1701_, v___x_1775_);
v___x_1777_ = lean_st_ref_take(v_a_1701_);
v_stmts_1778_ = lean_ctor_get(v___x_1777_, 0);
v_fresh_1779_ = lean_ctor_get(v___x_1777_, 1);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1777_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1781_ = v___x_1777_;
v_isShared_1782_ = v_isSharedCheck_1816_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_fresh_1779_);
lean_inc(v_stmts_1778_);
lean_dec(v___x_1777_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1816_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1783_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___y_1764_);
v___x_1784_ = lean_unsigned_to_nat(2u);
v___x_1785_ = lean_mk_empty_array_with_capacity(v___x_1784_);
lean_inc_ref(v___x_1783_);
v___x_1786_ = lean_array_push(v___x_1785_, v___x_1783_);
v___x_1787_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_1788_ = lean_array_push(v___x_1786_, v___x_1783_);
v___x_1789_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
v___x_1791_ = lean_array_push(v_stmts_1778_, v___x_1790_);
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 0, v___x_1791_);
v___x_1793_ = v___x_1781_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1791_);
lean_ctor_set(v_reuseFailAlloc_1815_, 1, v_fresh_1779_);
v___x_1793_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v_stmts_1796_; lean_object* v_fresh_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1814_; 
v___x_1794_ = lean_st_ref_set(v_a_1701_, v___x_1793_);
v___x_1795_ = lean_st_ref_take(v_a_1701_);
v_stmts_1796_ = lean_ctor_get(v___x_1795_, 0);
v_fresh_1797_ = lean_ctor_get(v___x_1795_, 1);
v_isSharedCheck_1814_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1814_ == 0)
{
v___x_1799_ = v___x_1795_;
v_isShared_1800_ = v_isSharedCheck_1814_;
goto v_resetjp_1798_;
}
else
{
lean_inc(v_fresh_1797_);
lean_inc(v_stmts_1796_);
lean_dec(v___x_1795_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1814_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1801_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1698_);
v___x_1802_ = lean_unsigned_to_nat(1u);
v___x_1803_ = lean_mk_empty_array_with_capacity(v___x_1802_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1801_);
v___x_1805_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_1806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1804_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = lean_array_push(v_stmts_1796_, v___x_1806_);
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 0, v___x_1807_);
v___x_1809_ = v___x_1799_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v___x_1807_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v_fresh_1797_);
v___x_1809_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1810_ = lean_st_ref_set(v_a_1701_, v___x_1809_);
v___x_1811_ = lean_box(0);
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
return v___x_1812_;
}
}
}
}
}
}
}
v___jp_1819_:
{
lean_object* v___x_1822_; lean_object* v_stmts_1823_; lean_object* v_fresh_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1855_; 
v___x_1822_ = lean_st_ref_take(v_a_1701_);
v_stmts_1823_ = lean_ctor_get(v___x_1822_, 0);
v_fresh_1824_ = lean_ctor_get(v___x_1822_, 1);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1822_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1826_ = v___x_1822_;
v_isShared_1827_ = v_isSharedCheck_1855_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_fresh_1824_);
lean_inc(v_stmts_1823_);
lean_dec(v___x_1822_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1855_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1828_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1828_, 0, v___y_1821_);
lean_ctor_set(v___x_1828_, 1, v___y_1820_);
v___x_1829_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
v___x_1830_ = lean_array_push(v_stmts_1823_, v___x_1829_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1830_);
v___x_1832_ = v___x_1826_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v_fresh_1824_);
v___x_1832_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v_stmts_1835_; lean_object* v_fresh_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1853_; 
v___x_1833_ = lean_st_ref_set(v_a_1701_, v___x_1832_);
v___x_1834_ = lean_st_ref_take(v_a_1701_);
v_stmts_1835_ = lean_ctor_get(v___x_1834_, 0);
v_fresh_1836_ = lean_ctor_get(v___x_1834_, 1);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1838_ = v___x_1834_;
v_isShared_1839_ = v_isSharedCheck_1853_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_fresh_1836_);
lean_inc(v_stmts_1835_);
lean_dec(v___x_1834_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1853_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1848_; 
v___x_1840_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1698_);
v___x_1841_ = lean_unsigned_to_nat(1u);
v___x_1842_ = lean_mk_empty_array_with_capacity(v___x_1841_);
v___x_1843_ = lean_array_push(v___x_1842_, v___x_1840_);
v___x_1844_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_1845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1843_);
lean_ctor_set(v___x_1845_, 1, v___x_1844_);
v___x_1846_ = lean_array_push(v_stmts_1835_, v___x_1845_);
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v___x_1846_);
v___x_1848_ = v___x_1838_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1846_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_fresh_1836_);
v___x_1848_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1849_ = lean_st_ref_set(v_a_1701_, v___x_1848_);
v___x_1850_ = lean_box(0);
v___x_1851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1851_, 0, v___x_1850_);
return v___x_1851_;
}
}
}
}
}
v___jp_1856_:
{
if (v___y_1861_ == 0)
{
lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1862_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2));
v___x_1863_ = lean_string_dec_eq(v___y_1859_, v___x_1862_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1864_; lean_object* v_a_1865_; lean_object* v___x_1867_; uint8_t v_isShared_1868_; uint8_t v_isSharedCheck_1946_; 
v___x_1864_ = l_Lean_Compiler_LCNF_EmitYul_freshName___redArg(v_a_1701_);
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1867_ = v___x_1864_;
v_isShared_1868_ = v_isSharedCheck_1946_;
goto v_resetjp_1866_;
}
else
{
lean_inc(v_a_1865_);
lean_dec(v___x_1864_);
v___x_1867_ = lean_box(0);
v_isShared_1868_ = v_isSharedCheck_1946_;
goto v_resetjp_1866_;
}
v_resetjp_1866_:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v_fst_1871_; lean_object* v_snd_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1945_; 
v___x_1869_ = lean_unsigned_to_nat(2u);
v___x_1870_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v___x_1869_, v_a_1865_);
v_fst_1871_ = lean_ctor_get(v___x_1870_, 0);
v_snd_1872_ = lean_ctor_get(v___x_1870_, 1);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1874_ = v___x_1870_;
v_isShared_1875_ = v_isSharedCheck_1945_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_snd_1872_);
lean_inc(v_fst_1871_);
lean_dec(v___x_1870_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1945_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1876_; lean_object* v_stmts_1877_; lean_object* v_fresh_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1944_; 
v___x_1876_ = lean_st_ref_take(v_a_1701_);
v_stmts_1877_ = lean_ctor_get(v___x_1876_, 0);
v_fresh_1878_ = lean_ctor_get(v___x_1876_, 1);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1876_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1880_ = v___x_1876_;
v_isShared_1881_ = v_isSharedCheck_1944_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_fresh_1878_);
lean_inc(v_stmts_1877_);
lean_dec(v___x_1876_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1944_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1884_; 
v___x_1882_ = l_Array_append___redArg(v_stmts_1877_, v_fst_1871_);
lean_dec(v_fst_1871_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 0, v___x_1882_);
v___x_1884_ = v___x_1880_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_fresh_1878_);
v___x_1884_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v_stmts_1889_; lean_object* v_fresh_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1942_; 
v___x_1885_ = lean_st_ref_set(v_a_1701_, v___x_1884_);
v___x_1886_ = lean_unsigned_to_nat(1u);
lean_inc_n(v___y_1860_, 2);
v___x_1887_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___y_1860_, v___x_1886_, v___y_1860_);
v___x_1888_ = lean_st_ref_take(v_a_1701_);
v_stmts_1889_ = lean_ctor_get(v___x_1888_, 0);
v_fresh_1890_ = lean_ctor_get(v___x_1888_, 1);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1892_ = v___x_1888_;
v_isShared_1893_ = v_isSharedCheck_1942_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_fresh_1890_);
lean_inc(v_stmts_1889_);
lean_dec(v___x_1888_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1942_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1898_; 
v___x_1894_ = lean_mk_empty_array_with_capacity(v___x_1869_);
lean_inc(v_snd_1872_);
v___x_1895_ = lean_array_push(v___x_1894_, v_snd_1872_);
v___x_1896_ = lean_array_push(v___x_1895_, v___x_1887_);
lean_inc_ref(v___y_1858_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set_tag(v___x_1874_, 3);
lean_ctor_set(v___x_1874_, 1, v___x_1896_);
lean_ctor_set(v___x_1874_, 0, v___y_1858_);
v___x_1898_ = v___x_1874_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___y_1858_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1899_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1898_);
v___x_1900_ = lean_array_push(v_stmts_1889_, v___x_1899_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 0, v___x_1900_);
v___x_1902_ = v___x_1892_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1900_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_fresh_1890_);
v___x_1902_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v_stmts_1905_; lean_object* v_fresh_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1939_; 
v___x_1903_ = lean_st_ref_set(v_a_1701_, v___x_1902_);
v___x_1904_ = lean_st_ref_take(v_a_1701_);
v_stmts_1905_ = lean_ctor_get(v___x_1904_, 0);
v_fresh_1906_ = lean_ctor_get(v___x_1904_, 1);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1908_ = v___x_1904_;
v_isShared_1909_ = v_isSharedCheck_1939_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_fresh_1906_);
lean_inc(v_stmts_1905_);
lean_dec(v___x_1904_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1939_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1915_; 
v___x_1910_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1910_, 0, v___y_1859_);
lean_ctor_set(v___x_1910_, 1, v___y_1857_);
v___x_1911_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1910_);
lean_inc(v_snd_1872_);
v___x_1912_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1872_, v___y_1860_, v___x_1911_);
lean_dec(v___y_1860_);
v___x_1913_ = lean_array_push(v_stmts_1905_, v___x_1912_);
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 0, v___x_1913_);
v___x_1915_ = v___x_1908_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v___x_1913_);
lean_ctor_set(v_reuseFailAlloc_1938_, 1, v_fresh_1906_);
v___x_1915_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v_stmts_1918_; lean_object* v_fresh_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1937_; 
v___x_1916_ = lean_st_ref_set(v_a_1701_, v___x_1915_);
v___x_1917_ = lean_st_ref_take(v_a_1701_);
v_stmts_1918_ = lean_ctor_get(v___x_1917_, 0);
v_fresh_1919_ = lean_ctor_get(v___x_1917_, 1);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1917_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1921_ = v___x_1917_;
v_isShared_1922_ = v_isSharedCheck_1937_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_fresh_1919_);
lean_inc(v_stmts_1918_);
lean_dec(v___x_1917_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1937_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1930_; 
v___x_1923_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1698_);
v___x_1924_ = lean_mk_empty_array_with_capacity(v___x_1886_);
v___x_1925_ = lean_array_push(v___x_1924_, v___x_1923_);
v___x_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1926_, 0, v_snd_1872_);
v___x_1927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1925_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_array_push(v_stmts_1918_, v___x_1927_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 0, v___x_1928_);
v___x_1930_ = v___x_1921_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1928_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_fresh_1919_);
v___x_1930_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1934_; 
v___x_1931_ = lean_st_ref_set(v_a_1701_, v___x_1930_);
v___x_1932_ = lean_box(0);
if (v_isShared_1868_ == 0)
{
lean_ctor_set(v___x_1867_, 0, v___x_1932_);
v___x_1934_ = v___x_1867_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1932_);
v___x_1934_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
return v___x_1934_;
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
lean_dec(v___y_1860_);
v___y_1820_ = v___y_1857_;
v___y_1821_ = v___y_1859_;
goto v___jp_1819_;
}
}
else
{
lean_dec(v___y_1860_);
v___y_1820_ = v___y_1857_;
v___y_1821_ = v___y_1859_;
goto v___jp_1819_;
}
}
v___jp_1947_:
{
if (v___y_1953_ == 0)
{
lean_object* v___x_1954_; uint8_t v___x_1955_; 
v___x_1954_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3));
v___x_1955_ = lean_string_dec_eq(v___y_1951_, v___x_1954_);
v___y_1857_ = v___y_1948_;
v___y_1858_ = v___y_1949_;
v___y_1859_ = v___y_1951_;
v___y_1860_ = v___y_1952_;
v___y_1861_ = v___x_1955_;
goto v___jp_1856_;
}
else
{
v___y_1857_ = v___y_1948_;
v___y_1858_ = v___y_1949_;
v___y_1859_ = v___y_1951_;
v___y_1860_ = v___y_1952_;
v___y_1861_ = v___y_1950_;
goto v___jp_1856_;
}
}
v___jp_1956_:
{
if (v___y_1962_ == 0)
{
lean_object* v___x_1963_; uint8_t v___x_1964_; 
v___x_1963_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4));
v___x_1964_ = lean_string_dec_eq(v___y_1960_, v___x_1963_);
v___y_1948_ = v___y_1957_;
v___y_1949_ = v___y_1958_;
v___y_1950_ = v___y_1959_;
v___y_1951_ = v___y_1960_;
v___y_1952_ = v___y_1961_;
v___y_1953_ = v___x_1964_;
goto v___jp_1947_;
}
else
{
v___y_1948_ = v___y_1957_;
v___y_1949_ = v___y_1958_;
v___y_1950_ = v___y_1959_;
v___y_1951_ = v___y_1960_;
v___y_1952_ = v___y_1961_;
v___y_1953_ = v___y_1959_;
goto v___jp_1947_;
}
}
v___jp_1965_:
{
if (v___y_1970_ == 0)
{
lean_object* v___x_1971_; uint8_t v___x_1972_; 
v___x_1971_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5));
v___x_1972_ = lean_string_dec_eq(v___y_1968_, v___x_1971_);
if (v___x_1972_ == 0)
{
lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1974_ = lean_string_dec_eq(v___y_1968_, v___x_1973_);
if (v___x_1974_ == 0)
{
lean_object* v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6));
v___x_1976_ = lean_string_dec_eq(v___y_1968_, v___x_1975_);
v___y_1957_ = v___y_1966_;
v___y_1958_ = v___x_1973_;
v___y_1959_ = v___y_1967_;
v___y_1960_ = v___y_1968_;
v___y_1961_ = v___y_1969_;
v___y_1962_ = v___x_1976_;
goto v___jp_1956_;
}
else
{
v___y_1957_ = v___y_1966_;
v___y_1958_ = v___x_1973_;
v___y_1959_ = v___y_1967_;
v___y_1960_ = v___y_1968_;
v___y_1961_ = v___y_1969_;
v___y_1962_ = v___y_1967_;
goto v___jp_1956_;
}
}
else
{
v___y_1762_ = v___y_1966_;
v___y_1763_ = v___y_1968_;
v___y_1764_ = v___y_1969_;
goto v___jp_1761_;
}
}
else
{
v___y_1762_ = v___y_1966_;
v___y_1763_ = v___y_1968_;
v___y_1764_ = v___y_1969_;
goto v___jp_1761_;
}
}
v___jp_1978_:
{
lean_object* v___x_1980_; 
lean_inc(v_fn_1699_);
v___x_1980_ = l_Lean_getExternAttrData_x3f(v_env_1977_, v_fn_1699_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_del_object(v___x_1733_);
v___y_1705_ = v___y_1979_;
v___y_1706_ = v_a_1701_;
goto v___jp_1704_;
}
else
{
lean_object* v_val_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v_val_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc(v_val_1981_);
lean_dec_ref_known(v___x_1980_, 1);
v___x_1982_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8));
v___x_1983_ = l_Lean_getExternEntryFor(v_val_1981_, v___x_1982_);
lean_dec(v_val_1981_);
if (lean_obj_tag(v___x_1983_) == 1)
{
lean_object* v_val_1984_; 
v_val_1984_ = lean_ctor_get(v___x_1983_, 0);
lean_inc(v_val_1984_);
lean_dec_ref_known(v___x_1983_, 1);
if (lean_obj_tag(v_val_1984_) == 2)
{
lean_object* v_fn_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; 
v_fn_1985_ = lean_ctor_get(v_val_1984_, 1);
lean_inc_ref(v_fn_1985_);
lean_dec_ref_known(v_val_1984_, 2);
v___x_1986_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__9));
v___x_1987_ = lean_string_utf8_byte_size(v_fn_1985_);
v___x_1988_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__10);
v___x_1989_ = lean_nat_dec_le(v___x_1988_, v___x_1987_);
if (v___x_1989_ == 0)
{
lean_dec_ref(v_fn_1985_);
v___y_1736_ = v___y_1979_;
goto v___jp_1735_;
}
else
{
lean_object* v___x_1990_; uint8_t v___x_1991_; 
v___x_1990_ = lean_unsigned_to_nat(0u);
v___x_1991_ = lean_string_memcmp(v_fn_1985_, v___x_1986_, v___x_1990_, v___x_1990_, v___x_1988_);
if (v___x_1991_ == 0)
{
lean_dec_ref(v_fn_1985_);
v___y_1736_ = v___y_1979_;
goto v___jp_1735_;
}
else
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; size_t v_sz_1997_; size_t v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; 
lean_del_object(v___x_1733_);
lean_dec(v_fn_1699_);
v___x_1992_ = lean_unsigned_to_nat(9u);
lean_inc_ref(v_fn_1985_);
v___x_1993_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1993_, 0, v_fn_1985_);
lean_ctor_set(v___x_1993_, 1, v___x_1990_);
lean_ctor_set(v___x_1993_, 2, v___x_1987_);
v___x_1994_ = l_String_Slice_Pos_nextn(v___x_1993_, v___x_1990_, v___x_1992_);
lean_dec_ref_known(v___x_1993_, 3);
v___x_1995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1995_, 0, v_fn_1985_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
lean_ctor_set(v___x_1995_, 2, v___x_1987_);
v___x_1996_ = l_String_Slice_toString(v___x_1995_);
lean_dec_ref_known(v___x_1995_, 3);
v_sz_1997_ = lean_array_size(v___y_1979_);
v___x_1998_ = ((size_t)0ULL);
v___x_1999_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_1997_, v___x_1998_, v___y_1979_);
v___x_2000_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__11));
v___x_2001_ = lean_string_dec_eq(v___x_1996_, v___x_2000_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; uint8_t v___x_2003_; 
v___x_2002_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__12));
v___x_2003_ = lean_string_dec_eq(v___x_1996_, v___x_2002_);
v___y_1966_ = v___x_1999_;
v___y_1967_ = v___x_1991_;
v___y_1968_ = v___x_1996_;
v___y_1969_ = v___x_1990_;
v___y_1970_ = v___x_2003_;
goto v___jp_1965_;
}
else
{
v___y_1966_ = v___x_1999_;
v___y_1967_ = v___x_1991_;
v___y_1968_ = v___x_1996_;
v___y_1969_ = v___x_1990_;
v___y_1970_ = v___x_1991_;
goto v___jp_1965_;
}
}
}
}
else
{
lean_dec(v_val_1984_);
lean_del_object(v___x_1733_);
v___y_1705_ = v___y_1979_;
v___y_1706_ = v_a_1701_;
goto v___jp_1704_;
}
}
else
{
lean_dec(v___x_1983_);
lean_del_object(v___x_1733_);
v___y_1705_ = v___y_1979_;
v___y_1706_ = v_a_1701_;
goto v___jp_1704_;
}
}
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2021_; 
lean_dec(v___x_1729_);
lean_dec_ref(v_args_1700_);
lean_dec(v_fn_1699_);
lean_dec_ref(v_lhsId_1698_);
v_a_2014_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2016_ = v___x_1730_;
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_1730_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2021_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2019_; 
if (v_isShared_2017_ == 0)
{
v___x_2019_ = v___x_2016_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_a_2014_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
}
v___jp_1704_:
{
lean_object* v___x_1707_; lean_object* v_stmts_1708_; lean_object* v_fresh_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1728_; 
v___x_1707_ = lean_st_ref_take(v___y_1706_);
v_stmts_1708_ = lean_ctor_get(v___x_1707_, 0);
v_fresh_1709_ = lean_ctor_get(v___x_1707_, 1);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1711_ = v___x_1707_;
v_isShared_1712_ = v_isSharedCheck_1728_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_fresh_1709_);
lean_inc(v_stmts_1708_);
lean_dec(v___x_1707_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1728_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
v___x_1713_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1698_);
v___x_1714_ = lean_unsigned_to_nat(1u);
v___x_1715_ = lean_mk_empty_array_with_capacity(v___x_1714_);
v___x_1716_ = lean_array_push(v___x_1715_, v___x_1713_);
v___x_1717_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1699_);
v___x_1718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
lean_ctor_set(v___x_1718_, 1, v___y_1705_);
v___x_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
v___x_1720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1716_);
lean_ctor_set(v___x_1720_, 1, v___x_1719_);
v___x_1721_ = lean_array_push(v_stmts_1708_, v___x_1720_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v___x_1721_);
v___x_1723_ = v___x_1711_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1721_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_fresh_1709_);
v___x_1723_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_st_ref_set(v___y_1706_, v___x_1723_);
v___x_1725_ = lean_box(0);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___boxed(lean_object* v_lhsId_2022_, lean_object* v_fn_2023_, lean_object* v_args_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2022_, v_fn_2023_, v_args_2024_, v_a_2025_, v_a_2026_);
lean_dec(v_a_2026_);
lean_dec(v_a_2025_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap(lean_object* v_lhsId_2029_, lean_object* v_fn_2030_, lean_object* v_args_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_){
_start:
{
lean_object* v___x_2037_; 
v___x_2037_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2029_, v_fn_2030_, v_args_2031_, v_a_2033_, v_a_2035_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___boxed(lean_object* v_lhsId_2038_, lean_object* v_fn_2039_, lean_object* v_args_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Lean_Compiler_LCNF_EmitYul_emitFap(v_lhsId_2038_, v_fn_2039_, v_args_2040_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_);
lean_dec(v_a_2044_);
lean_dec_ref(v_a_2043_);
lean_dec(v_a_2042_);
lean_dec_ref(v_a_2041_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(lean_object* v_lhsId_2050_, lean_object* v_fvarId_2051_, lean_object* v_args_2052_, lean_object* v_a_2053_){
_start:
{
lean_object* v___y_2056_; lean_object* v___x_2085_; lean_object* v___x_2086_; uint8_t v___x_2087_; 
v___x_2085_ = lean_array_get_size(v_args_2052_);
v___x_2086_ = lean_unsigned_to_nat(1u);
v___x_2087_ = lean_nat_dec_eq(v___x_2085_, v___x_2086_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2088_; uint8_t v___x_2089_; 
v___x_2088_ = lean_unsigned_to_nat(2u);
v___x_2089_ = lean_nat_dec_eq(v___x_2085_, v___x_2088_);
if (v___x_2089_ == 0)
{
lean_object* v___x_2090_; 
v___x_2090_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0));
v___y_2056_ = v___x_2090_;
goto v___jp_2055_;
}
else
{
lean_object* v___x_2091_; 
v___x_2091_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1));
v___y_2056_ = v___x_2091_;
goto v___jp_2055_;
}
}
else
{
lean_object* v___x_2092_; 
v___x_2092_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2));
v___y_2056_ = v___x_2092_;
goto v___jp_2055_;
}
v___jp_2055_:
{
lean_object* v___x_2057_; lean_object* v_stmts_2058_; lean_object* v_fresh_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2084_; 
v___x_2057_ = lean_st_ref_take(v_a_2053_);
v_stmts_2058_ = lean_ctor_get(v___x_2057_, 0);
v_fresh_2059_ = lean_ctor_get(v___x_2057_, 1);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2061_ = v___x_2057_;
v_isShared_2062_ = v_isSharedCheck_2084_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_fresh_2059_);
lean_inc(v_stmts_2058_);
lean_dec(v___x_2057_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2084_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
size_t v_sz_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; size_t v___x_2069_; lean_object* v___x_2070_; lean_object* v_all_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2079_; 
v_sz_2063_ = lean_array_size(v_args_2052_);
v___x_2064_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2051_);
v___x_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2065_, 0, v___x_2064_);
v___x_2066_ = lean_unsigned_to_nat(1u);
v___x_2067_ = lean_mk_empty_array_with_capacity(v___x_2066_);
lean_inc_ref(v___x_2067_);
v___x_2068_ = lean_array_push(v___x_2067_, v___x_2065_);
v___x_2069_ = ((size_t)0ULL);
v___x_2070_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_2063_, v___x_2069_, v_args_2052_);
v_all_2071_ = l_Array_append___redArg(v___x_2068_, v___x_2070_);
lean_dec_ref(v___x_2070_);
v___x_2072_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2050_);
v___x_2073_ = lean_array_push(v___x_2067_, v___x_2072_);
lean_inc_ref(v___y_2056_);
v___x_2074_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___y_2056_);
lean_ctor_set(v___x_2074_, 1, v_all_2071_);
v___x_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2074_);
v___x_2076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2073_);
lean_ctor_set(v___x_2076_, 1, v___x_2075_);
v___x_2077_ = lean_array_push(v_stmts_2058_, v___x_2076_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v___x_2077_);
v___x_2079_ = v___x_2061_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_2077_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_fresh_2059_);
v___x_2079_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2080_ = lean_st_ref_set(v_a_2053_, v___x_2079_);
v___x_2081_ = lean_box(0);
v___x_2082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___boxed(lean_object* v_lhsId_2093_, lean_object* v_fvarId_2094_, lean_object* v_args_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_){
_start:
{
lean_object* v_res_2098_; 
v_res_2098_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2093_, v_fvarId_2094_, v_args_2095_, v_a_2096_);
lean_dec(v_a_2096_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply(lean_object* v_lhsId_2099_, lean_object* v_fvarId_2100_, lean_object* v_args_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2099_, v_fvarId_2100_, v_args_2101_, v_a_2103_);
return v___x_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___boxed(lean_object* v_lhsId_2108_, lean_object* v_fvarId_2109_, lean_object* v_args_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_res_2116_; 
v_res_2116_ = l_Lean_Compiler_LCNF_EmitYul_emitApply(v_lhsId_2108_, v_fvarId_2109_, v_args_2110_, v_a_2111_, v_a_2112_, v_a_2113_, v_a_2114_);
lean_dec(v_a_2114_);
lean_dec_ref(v_a_2113_);
lean_dec(v_a_2112_);
lean_dec_ref(v_a_2111_);
return v_res_2116_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0(void){
_start:
{
lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2117_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue(lean_object* v_lhs_2119_, lean_object* v_value_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_){
_start:
{
lean_object* v_lhsId_2126_; lean_object* v_i_2128_; lean_object* v_fvarId_2129_; lean_object* v___y_2130_; 
v_lhsId_2126_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_lhs_2119_);
switch(lean_obj_tag(v_value_2120_))
{
case 0:
{
lean_object* v_value_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2198_; 
v_value_2154_ = lean_ctor_get(v_value_2120_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v_value_2120_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2156_ = v_value_2120_;
v_isShared_2157_ = v_isSharedCheck_2198_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_value_2154_);
lean_dec(v_value_2120_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2198_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
if (lean_obj_tag(v_value_2154_) == 1)
{
lean_object* v_val_2158_; lean_object* v___x_2159_; 
lean_del_object(v___x_2156_);
v_val_2158_ = lean_ctor_get(v_value_2154_, 0);
lean_inc_ref(v_val_2158_);
lean_dec_ref_known(v_value_2154_, 1);
v___x_2159_ = l_Lean_Compiler_LCNF_EmitYul_emitStringLit(v_lhsId_2126_, v_val_2158_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec_ref(v_val_2158_);
return v___x_2159_;
}
else
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_value_2154_, v_a_2123_, v_a_2124_);
if (lean_obj_tag(v___x_2160_) == 0)
{
lean_object* v_a_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2189_; 
v_a_2161_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2163_ = v___x_2160_;
v_isShared_2164_ = v_isSharedCheck_2189_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_a_2161_);
lean_dec(v___x_2160_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2189_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2165_; lean_object* v_stmts_2166_; lean_object* v_fresh_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2188_; 
v___x_2165_ = lean_st_ref_take(v_a_2122_);
v_stmts_2166_ = lean_ctor_get(v___x_2165_, 0);
v_fresh_2167_ = lean_ctor_get(v___x_2165_, 1);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2169_ = v___x_2165_;
v_isShared_2170_ = v_isSharedCheck_2188_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_fresh_2167_);
lean_inc(v_stmts_2166_);
lean_dec(v___x_2165_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2188_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2176_; 
v___x_2171_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2172_ = lean_unsigned_to_nat(1u);
v___x_2173_ = lean_mk_empty_array_with_capacity(v___x_2172_);
v___x_2174_ = lean_array_push(v___x_2173_, v___x_2171_);
if (v_isShared_2157_ == 0)
{
lean_ctor_set_tag(v___x_2156_, 1);
lean_ctor_set(v___x_2156_, 0, v_a_2161_);
v___x_2176_ = v___x_2156_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2161_);
v___x_2176_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2180_; 
v___x_2177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2174_);
lean_ctor_set(v___x_2177_, 1, v___x_2176_);
v___x_2178_ = lean_array_push(v_stmts_2166_, v___x_2177_);
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 0, v___x_2178_);
v___x_2180_ = v___x_2169_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2178_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v_fresh_2167_);
v___x_2180_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2184_; 
v___x_2181_ = lean_st_ref_set(v_a_2122_, v___x_2180_);
v___x_2182_ = lean_box(0);
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v___x_2182_);
v___x_2184_ = v___x_2163_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v___x_2182_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_del_object(v___x_2156_);
lean_dec_ref(v_lhsId_2126_);
v_a_2190_ = lean_ctor_get(v___x_2160_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2160_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2160_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2160_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
}
case 1:
{
lean_object* v___x_2199_; lean_object* v_stmts_2200_; lean_object* v_fresh_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2218_; 
v___x_2199_ = lean_st_ref_take(v_a_2122_);
v_stmts_2200_ = lean_ctor_get(v___x_2199_, 0);
v_fresh_2201_ = lean_ctor_get(v___x_2199_, 1);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2203_ = v___x_2199_;
v_isShared_2204_ = v_isSharedCheck_2218_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_fresh_2201_);
lean_inc(v_stmts_2200_);
lean_dec(v___x_2199_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2218_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2213_; 
v___x_2205_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2206_ = lean_unsigned_to_nat(1u);
v___x_2207_ = lean_mk_empty_array_with_capacity(v___x_2206_);
v___x_2208_ = lean_array_push(v___x_2207_, v___x_2205_);
v___x_2209_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_2210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2208_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
v___x_2211_ = lean_array_push(v_stmts_2200_, v___x_2210_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set(v___x_2203_, 0, v___x_2211_);
v___x_2213_ = v___x_2203_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2211_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v_fresh_2201_);
v___x_2213_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2214_ = lean_st_ref_set(v_a_2122_, v___x_2213_);
v___x_2215_ = lean_box(0);
v___x_2216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
return v___x_2216_;
}
}
}
case 4:
{
lean_object* v_fvarId_2219_; lean_object* v_args_2220_; lean_object* v___x_2221_; 
v_fvarId_2219_ = lean_ctor_get(v_value_2120_, 0);
lean_inc(v_fvarId_2219_);
v_args_2220_ = lean_ctor_get(v_value_2120_, 1);
lean_inc_ref(v_args_2220_);
lean_dec_ref_known(v_value_2120_, 2);
v___x_2221_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2126_, v_fvarId_2219_, v_args_2220_, v_a_2122_);
return v___x_2221_;
}
case 5:
{
lean_object* v_i_2222_; lean_object* v_args_2223_; lean_object* v___x_2224_; 
v_i_2222_ = lean_ctor_get(v_value_2120_, 0);
lean_inc_ref(v_i_2222_);
v_args_2223_ = lean_ctor_get(v_value_2120_, 1);
lean_inc_ref(v_args_2223_);
lean_dec_ref_known(v_value_2120_, 2);
v___x_2224_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_2126_, v_i_2222_, v_args_2223_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec_ref(v_args_2223_);
return v___x_2224_;
}
case 8:
{
lean_object* v_offset_2225_; lean_object* v_var_2226_; lean_object* v___x_2227_; lean_object* v_stmts_2228_; lean_object* v_fresh_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2258_; 
v_offset_2225_ = lean_ctor_get(v_value_2120_, 1);
lean_inc(v_offset_2225_);
v_var_2226_ = lean_ctor_get(v_value_2120_, 2);
lean_inc(v_var_2226_);
lean_dec_ref_known(v_value_2120_, 3);
v___x_2227_ = lean_st_ref_take(v_a_2122_);
v_stmts_2228_ = lean_ctor_get(v___x_2227_, 0);
v_fresh_2229_ = lean_ctor_get(v___x_2227_, 1);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2231_ = v___x_2227_;
v_isShared_2232_ = v_isSharedCheck_2258_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_fresh_2229_);
lean_inc(v_stmts_2228_);
lean_dec(v___x_2227_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2258_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v_addr_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2233_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2234_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_2226_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
v___x_2236_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2225_);
v___x_2237_ = lean_unsigned_to_nat(2u);
v___x_2238_ = lean_mk_empty_array_with_capacity(v___x_2237_);
v___x_2239_ = lean_array_push(v___x_2238_, v___x_2235_);
v___x_2240_ = lean_array_push(v___x_2239_, v___x_2236_);
v_addr_2241_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2241_, 0, v___x_2233_);
lean_ctor_set(v_addr_2241_, 1, v___x_2240_);
v___x_2242_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2243_ = lean_unsigned_to_nat(1u);
v___x_2244_ = lean_mk_empty_array_with_capacity(v___x_2243_);
lean_inc_ref(v___x_2244_);
v___x_2245_ = lean_array_push(v___x_2244_, v___x_2242_);
v___x_2246_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_2247_ = lean_array_push(v___x_2244_, v_addr_2241_);
v___x_2248_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2246_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
v___x_2249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2249_, 0, v___x_2248_);
v___x_2250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2245_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = lean_array_push(v_stmts_2228_, v___x_2250_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 0, v___x_2251_);
v___x_2253_ = v___x_2231_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_fresh_2229_);
v___x_2253_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2254_ = lean_st_ref_set(v_a_2122_, v___x_2253_);
v___x_2255_ = lean_box(0);
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
return v___x_2256_;
}
}
}
case 9:
{
lean_object* v_fn_2259_; lean_object* v_args_2260_; lean_object* v___x_2261_; 
v_fn_2259_ = lean_ctor_get(v_value_2120_, 0);
lean_inc(v_fn_2259_);
v_args_2260_ = lean_ctor_get(v_value_2120_, 1);
lean_inc_ref(v_args_2260_);
lean_dec_ref_known(v_value_2120_, 2);
v___x_2261_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2126_, v_fn_2259_, v_args_2260_, v_a_2122_, v_a_2124_);
return v___x_2261_;
}
case 10:
{
lean_object* v_fn_2262_; lean_object* v_args_2263_; lean_object* v___x_2264_; 
v_fn_2262_ = lean_ctor_get(v_value_2120_, 0);
lean_inc(v_fn_2262_);
v_args_2263_ = lean_ctor_get(v_value_2120_, 1);
lean_inc_ref(v_args_2263_);
lean_dec_ref_known(v_value_2120_, 2);
v___x_2264_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_2126_, v_fn_2262_, v_args_2263_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec_ref(v_args_2263_);
lean_dec(v_fn_2262_);
return v___x_2264_;
}
case 11:
{
lean_object* v_var_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2293_; 
v_var_2265_ = lean_ctor_get(v_value_2120_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_value_2120_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_value_2120_, 0);
lean_dec(v_unused_2294_);
v___x_2267_ = v_value_2120_;
v_isShared_2268_ = v_isSharedCheck_2293_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_var_2265_);
lean_dec(v_value_2120_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2293_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2269_; lean_object* v_stmts_2270_; lean_object* v_fresh_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2292_; 
v___x_2269_ = lean_st_ref_take(v_a_2122_);
v_stmts_2270_ = lean_ctor_get(v___x_2269_, 0);
v_fresh_2271_ = lean_ctor_get(v___x_2269_, 1);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2269_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2273_ = v___x_2269_;
v_isShared_2274_ = v_isSharedCheck_2292_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_fresh_2271_);
lean_inc(v_stmts_2270_);
lean_dec(v___x_2269_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2292_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2283_; 
v___x_2275_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2276_ = lean_unsigned_to_nat(1u);
v___x_2277_ = lean_mk_empty_array_with_capacity(v___x_2276_);
v___x_2278_ = lean_array_push(v___x_2277_, v___x_2275_);
v___x_2279_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_2265_);
v___x_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
v___x_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
if (v_isShared_2268_ == 0)
{
lean_ctor_set_tag(v___x_2267_, 1);
lean_ctor_set(v___x_2267_, 1, v___x_2281_);
lean_ctor_set(v___x_2267_, 0, v___x_2278_);
v___x_2283_ = v___x_2267_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v___x_2278_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v___x_2281_);
v___x_2283_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2284_ = lean_array_push(v_stmts_2270_, v___x_2283_);
if (v_isShared_2274_ == 0)
{
lean_ctor_set(v___x_2273_, 0, v___x_2284_);
v___x_2286_ = v___x_2273_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v___x_2284_);
lean_ctor_set(v_reuseFailAlloc_2290_, 1, v_fresh_2271_);
v___x_2286_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2287_ = lean_st_ref_set(v_a_2122_, v___x_2286_);
v___x_2288_ = lean_box(0);
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
return v___x_2289_;
}
}
}
}
}
case 12:
{
lean_object* v_i_2295_; lean_object* v_args_2296_; lean_object* v___x_2297_; 
v_i_2295_ = lean_ctor_get(v_value_2120_, 1);
lean_inc_ref(v_i_2295_);
v_args_2296_ = lean_ctor_get(v_value_2120_, 2);
lean_inc_ref(v_args_2296_);
lean_dec_ref_known(v_value_2120_, 3);
v___x_2297_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_2126_, v_i_2295_, v_args_2296_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec_ref(v_args_2296_);
return v___x_2297_;
}
case 13:
{
lean_object* v_fvarId_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2327_; 
v_fvarId_2298_ = lean_ctor_get(v_value_2120_, 1);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_value_2120_);
if (v_isSharedCheck_2327_ == 0)
{
lean_object* v_unused_2328_; 
v_unused_2328_ = lean_ctor_get(v_value_2120_, 0);
lean_dec(v_unused_2328_);
v___x_2300_ = v_value_2120_;
v_isShared_2301_ = v_isSharedCheck_2327_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_fvarId_2298_);
lean_dec(v_value_2120_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2327_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2302_; lean_object* v_stmts_2303_; lean_object* v_fresh_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2326_; 
v___x_2302_ = lean_st_ref_take(v_a_2122_);
v_stmts_2303_ = lean_ctor_get(v___x_2302_, 0);
v_fresh_2304_ = lean_ctor_get(v___x_2302_, 1);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2306_ = v___x_2302_;
v_isShared_2307_ = v_isSharedCheck_2326_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_fresh_2304_);
lean_inc(v_stmts_2303_);
lean_dec(v___x_2302_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2326_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2317_; 
v___x_2308_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2309_ = lean_unsigned_to_nat(1u);
v___x_2310_ = lean_mk_empty_array_with_capacity(v___x_2309_);
v___x_2311_ = lean_array_push(v___x_2310_, v___x_2308_);
v___x_2312_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2298_);
v___x_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
v___x_2314_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_2313_);
v___x_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
if (v_isShared_2301_ == 0)
{
lean_ctor_set_tag(v___x_2300_, 1);
lean_ctor_set(v___x_2300_, 1, v___x_2315_);
lean_ctor_set(v___x_2300_, 0, v___x_2311_);
v___x_2317_ = v___x_2300_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2311_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
lean_object* v___x_2318_; lean_object* v___x_2320_; 
v___x_2318_ = lean_array_push(v_stmts_2303_, v___x_2317_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v___x_2318_);
v___x_2320_ = v___x_2306_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2324_; 
v_reuseFailAlloc_2324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2324_, 0, v___x_2318_);
lean_ctor_set(v_reuseFailAlloc_2324_, 1, v_fresh_2304_);
v___x_2320_ = v_reuseFailAlloc_2324_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2321_ = lean_st_ref_set(v_a_2122_, v___x_2320_);
v___x_2322_ = lean_box(0);
v___x_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2322_);
return v___x_2323_;
}
}
}
}
}
case 14:
{
lean_object* v_fvarId_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2358_; 
v_fvarId_2329_ = lean_ctor_get(v_value_2120_, 0);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_value_2120_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2331_ = v_value_2120_;
v_isShared_2332_ = v_isSharedCheck_2358_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_fvarId_2329_);
lean_dec(v_value_2120_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2358_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2333_; lean_object* v_stmts_2334_; lean_object* v_fresh_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2357_; 
v___x_2333_ = lean_st_ref_take(v_a_2122_);
v_stmts_2334_ = lean_ctor_get(v___x_2333_, 0);
v_fresh_2335_ = lean_ctor_get(v___x_2333_, 1);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2337_ = v___x_2333_;
v_isShared_2338_ = v_isSharedCheck_2357_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_fresh_2335_);
lean_inc(v_stmts_2334_);
lean_dec(v___x_2333_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2357_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2345_; 
v___x_2339_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_mk_empty_array_with_capacity(v___x_2340_);
v___x_2342_ = lean_array_push(v___x_2341_, v___x_2339_);
v___x_2343_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2329_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set_tag(v___x_2331_, 1);
lean_ctor_set(v___x_2331_, 0, v___x_2343_);
v___x_2345_ = v___x_2331_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2343_);
v___x_2345_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2346_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_2345_);
v___x_2347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2346_);
v___x_2348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2342_);
lean_ctor_set(v___x_2348_, 1, v___x_2347_);
v___x_2349_ = lean_array_push(v_stmts_2334_, v___x_2348_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2349_);
v___x_2351_ = v___x_2337_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2349_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v_fresh_2335_);
v___x_2351_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2352_ = lean_st_ref_set(v_a_2122_, v___x_2351_);
v___x_2353_ = lean_box(0);
v___x_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
return v___x_2354_;
}
}
}
}
}
case 15:
{
lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2384_; 
v_isSharedCheck_2384_ = !lean_is_exclusive(v_value_2120_);
if (v_isSharedCheck_2384_ == 0)
{
lean_object* v_unused_2385_; 
v_unused_2385_ = lean_ctor_get(v_value_2120_, 0);
lean_dec(v_unused_2385_);
v___x_2360_ = v_value_2120_;
v_isShared_2361_ = v_isSharedCheck_2384_;
goto v_resetjp_2359_;
}
else
{
lean_dec(v_value_2120_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2384_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2362_; lean_object* v_stmts_2363_; lean_object* v_fresh_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2383_; 
v___x_2362_ = lean_st_ref_take(v_a_2122_);
v_stmts_2363_ = lean_ctor_get(v___x_2362_, 0);
v_fresh_2364_ = lean_ctor_get(v___x_2362_, 1);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2366_ = v___x_2362_;
v_isShared_2367_ = v_isSharedCheck_2383_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_fresh_2364_);
lean_inc(v_stmts_2363_);
lean_dec(v___x_2362_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2383_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2368_ = lean_unsigned_to_nat(1u);
v___x_2369_ = lean_mk_empty_array_with_capacity(v___x_2368_);
v___x_2370_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2371_ = lean_array_push(v___x_2369_, v___x_2370_);
v___x_2372_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0);
v___x_2373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2371_);
lean_ctor_set(v___x_2373_, 1, v___x_2372_);
v___x_2374_ = lean_array_push(v_stmts_2363_, v___x_2373_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2374_);
v___x_2376_ = v___x_2366_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2374_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v_fresh_2364_);
v___x_2376_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2377_ = lean_st_ref_set(v_a_2122_, v___x_2376_);
v___x_2378_ = lean_box(0);
if (v_isShared_2361_ == 0)
{
lean_ctor_set_tag(v___x_2360_, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2378_);
v___x_2380_ = v___x_2360_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2378_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
}
}
default: 
{
lean_object* v_i_2386_; lean_object* v_var_2387_; 
v_i_2386_ = lean_ctor_get(v_value_2120_, 0);
lean_inc(v_i_2386_);
v_var_2387_ = lean_ctor_get(v_value_2120_, 1);
lean_inc(v_var_2387_);
lean_dec(v_value_2120_);
v_i_2128_ = v_i_2386_;
v_fvarId_2129_ = v_var_2387_;
v___y_2130_ = v_a_2122_;
goto v___jp_2127_;
}
}
v___jp_2127_:
{
lean_object* v___x_2131_; lean_object* v_stmts_2132_; lean_object* v_fresh_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2153_; 
v___x_2131_ = lean_st_ref_take(v___y_2130_);
v_stmts_2132_ = lean_ctor_get(v___x_2131_, 0);
v_fresh_2133_ = lean_ctor_get(v___x_2131_, 1);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2131_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2135_ = v___x_2131_;
v_isShared_2136_ = v_isSharedCheck_2153_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_fresh_2133_);
lean_inc(v_stmts_2132_);
lean_dec(v___x_2131_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2153_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2148_; 
v___x_2137_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2126_);
v___x_2138_ = lean_unsigned_to_nat(1u);
v___x_2139_ = lean_mk_empty_array_with_capacity(v___x_2138_);
v___x_2140_ = lean_array_push(v___x_2139_, v___x_2137_);
v___x_2141_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2129_);
v___x_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
v___x_2143_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v___x_2142_, v_i_2128_);
lean_dec(v_i_2128_);
v___x_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
v___x_2145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2140_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = lean_array_push(v_stmts_2132_, v___x_2145_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set(v___x_2135_, 0, v___x_2146_);
v___x_2148_ = v___x_2135_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2146_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v_fresh_2133_);
v___x_2148_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2149_ = lean_st_ref_set(v___y_2130_, v___x_2148_);
v___x_2150_ = lean_box(0);
v___x_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
return v___x_2151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue___boxed(lean_object* v_lhs_2388_, lean_object* v_value_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_lhs_2388_, v_value_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec(v_a_2391_);
lean_dec_ref(v_a_2390_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(lean_object* v_params_2396_, lean_object* v_args_2397_, lean_object* v_range_2398_, lean_object* v_b_2399_, lean_object* v_i_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v_stop_2403_; lean_object* v_step_2404_; uint8_t v___x_2405_; 
v_stop_2403_ = lean_ctor_get(v_range_2398_, 1);
v_step_2404_ = lean_ctor_get(v_range_2398_, 2);
v___x_2405_ = lean_nat_dec_lt(v_i_2400_, v_stop_2403_);
if (v___x_2405_ == 0)
{
lean_object* v___x_2406_; 
lean_dec(v_i_2400_);
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_b_2399_);
return v___x_2406_;
}
else
{
lean_object* v___x_2407_; lean_object* v_type_2408_; lean_object* v___x_2409_; uint8_t v___y_2414_; uint8_t v___x_2438_; 
v___x_2407_ = lean_array_fget_borrowed(v_params_2396_, v_i_2400_);
v_type_2408_ = lean_ctor_get(v___x_2407_, 2);
v___x_2409_ = lean_box(0);
v___x_2438_ = l_Lean_Expr_isVoid(v_type_2408_);
if (v___x_2438_ == 0)
{
uint8_t v___x_2439_; 
v___x_2439_ = l_Lean_Expr_isErased(v_type_2408_);
v___y_2414_ = v___x_2439_;
goto v___jp_2413_;
}
else
{
v___y_2414_ = v___x_2438_;
goto v___jp_2413_;
}
v___jp_2410_:
{
lean_object* v___x_2411_; 
v___x_2411_ = lean_nat_add(v_i_2400_, v_step_2404_);
lean_dec(v_i_2400_);
v_b_2399_ = v___x_2409_;
v_i_2400_ = v___x_2411_;
goto _start;
}
v___jp_2413_:
{
if (v___y_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v_fvarId_2416_; lean_object* v_stmts_2417_; lean_object* v_fresh_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2437_; 
v___x_2415_ = lean_st_ref_take(v___y_2401_);
v_fvarId_2416_ = lean_ctor_get(v___x_2407_, 0);
v_stmts_2417_ = lean_ctor_get(v___x_2415_, 0);
v_fresh_2418_ = lean_ctor_get(v___x_2415_, 1);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2420_ = v___x_2415_;
v_isShared_2421_ = v_isSharedCheck_2437_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_fresh_2418_);
lean_inc(v_stmts_2417_);
lean_dec(v___x_2415_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2437_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2422_ = lean_box(0);
v___x_2423_ = lean_array_get_borrowed(v___x_2422_, v_args_2397_, v_i_2400_);
lean_inc(v_fvarId_2416_);
v___x_2424_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2416_);
v___x_2425_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2424_);
v___x_2426_ = lean_unsigned_to_nat(1u);
v___x_2427_ = lean_mk_empty_array_with_capacity(v___x_2426_);
v___x_2428_ = lean_array_push(v___x_2427_, v___x_2425_);
lean_inc(v___x_2423_);
v___x_2429_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_2423_);
v___x_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2429_);
v___x_2431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2428_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = lean_array_push(v_stmts_2417_, v___x_2431_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2432_);
v___x_2434_ = v___x_2420_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2432_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_fresh_2418_);
v___x_2434_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2435_; 
v___x_2435_ = lean_st_ref_set(v___y_2401_, v___x_2434_);
goto v___jp_2410_;
}
}
}
else
{
goto v___jp_2410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg___boxed(lean_object* v_params_2440_, lean_object* v_args_2441_, lean_object* v_range_2442_, lean_object* v_b_2443_, lean_object* v_i_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2440_, v_args_2441_, v_range_2442_, v_b_2443_, v_i_2444_, v___y_2445_);
lean_dec(v___y_2445_);
lean_dec_ref(v_range_2442_);
lean_dec_ref(v_args_2441_);
lean_dec_ref(v_params_2440_);
return v_res_2447_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0));
v___x_2453_ = l_Lean_stringToMessageData(v___x_2452_);
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2455_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2));
v___x_2456_ = l_Lean_stringToMessageData(v___x_2455_);
return v___x_2456_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4));
v___x_2459_ = l_Lean_stringToMessageData(v___x_2458_);
return v___x_2459_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6));
v___x_2462_ = l_Lean_stringToMessageData(v___x_2461_);
return v___x_2462_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10(void){
_start:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2468_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2469_ = lean_unsigned_to_nat(2u);
v___x_2470_ = lean_mk_empty_array_with_capacity(v___x_2469_);
v___x_2471_ = lean_array_push(v___x_2470_, v___x_2468_);
return v___x_2471_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2472_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2473_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_2474_ = lean_array_push(v___x_2473_, v___x_2472_);
return v___x_2474_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12(void){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2475_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11);
v___x_2476_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_2477_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
lean_ctor_set(v___x_2477_, 1, v___x_2475_);
return v___x_2477_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2478_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12);
v___x_2479_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2478_);
return v___x_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode(lean_object* v_code_2480_, lean_object* v_a_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_){
_start:
{
switch(lean_obj_tag(v_code_2480_))
{
case 0:
{
lean_object* v_decl_2486_; lean_object* v_k_2487_; lean_object* v_fvarId_2488_; lean_object* v_value_2489_; lean_object* v___x_2490_; 
v_decl_2486_ = lean_ctor_get(v_code_2480_, 0);
lean_inc_ref(v_decl_2486_);
v_k_2487_ = lean_ctor_get(v_code_2480_, 1);
lean_inc_ref(v_k_2487_);
lean_dec_ref_known(v_code_2480_, 2);
v_fvarId_2488_ = lean_ctor_get(v_decl_2486_, 0);
lean_inc(v_fvarId_2488_);
v_value_2489_ = lean_ctor_get(v_decl_2486_, 3);
lean_inc(v_value_2489_);
lean_dec_ref(v_decl_2486_);
v___x_2490_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_fvarId_2488_, v_value_2489_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_dec_ref_known(v___x_2490_, 1);
v_code_2480_ = v_k_2487_;
goto _start;
}
else
{
lean_dec_ref(v_k_2487_);
return v___x_2490_;
}
}
case 3:
{
lean_object* v_fvarId_2492_; lean_object* v_args_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2549_; 
v_fvarId_2492_ = lean_ctor_get(v_code_2480_, 0);
v_args_2493_ = lean_ctor_get(v_code_2480_, 1);
v_isSharedCheck_2549_ = !lean_is_exclusive(v_code_2480_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2495_ = v_code_2480_;
v_isShared_2496_ = v_isSharedCheck_2549_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_args_2493_);
lean_inc(v_fvarId_2492_);
lean_dec(v_code_2480_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2549_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
lean_object* v___x_2497_; 
v___x_2497_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_2492_, v_a_2481_);
if (lean_obj_tag(v___x_2497_) == 0)
{
lean_object* v_a_2498_; 
v_a_2498_ = lean_ctor_get(v___x_2497_, 0);
lean_inc(v_a_2498_);
lean_dec_ref_known(v___x_2497_, 1);
if (lean_obj_tag(v_a_2498_) == 1)
{
lean_object* v_val_2499_; lean_object* v_params_2500_; lean_object* v_value_2501_; lean_object* v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2505_; lean_object* v___y_2506_; lean_object* v___y_2515_; lean_object* v___y_2516_; lean_object* v___y_2517_; lean_object* v___y_2518_; uint8_t v___x_2528_; 
v_val_2499_ = lean_ctor_get(v_a_2498_, 0);
lean_inc(v_val_2499_);
lean_dec_ref_known(v_a_2498_, 1);
v_params_2500_ = lean_ctor_get(v_val_2499_, 2);
lean_inc_ref(v_params_2500_);
v_value_2501_ = lean_ctor_get(v_val_2499_, 4);
lean_inc_ref(v_value_2501_);
lean_dec(v_val_2499_);
v___x_2528_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_fvarId_2492_, v_value_2501_);
if (v___x_2528_ == 0)
{
v___y_2515_ = v_a_2481_;
v___y_2516_ = v_a_2482_;
v___y_2517_ = v_a_2483_;
v___y_2518_ = v_a_2484_;
goto v___jp_2514_;
}
else
{
lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2529_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3);
lean_inc(v_fvarId_2492_);
v___x_2530_ = l_Lean_MessageData_ofName(v_fvarId_2492_);
v___x_2531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2529_);
lean_ctor_set(v___x_2531_, 1, v___x_2530_);
v___x_2532_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5);
v___x_2533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2531_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
v___x_2534_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2533_, v_a_2483_, v_a_2484_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_dec_ref_known(v___x_2534_, 1);
v___y_2515_ = v_a_2481_;
v___y_2516_ = v_a_2482_;
v___y_2517_ = v_a_2483_;
v___y_2518_ = v_a_2484_;
goto v___jp_2514_;
}
else
{
lean_dec_ref(v_value_2501_);
lean_dec_ref(v_params_2500_);
lean_del_object(v___x_2495_);
lean_dec_ref(v_args_2493_);
lean_dec(v_fvarId_2492_);
return v___x_2534_;
}
}
v___jp_2502_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2507_ = lean_unsigned_to_nat(0u);
v___x_2508_ = lean_array_get_size(v_params_2500_);
v___x_2509_ = lean_unsigned_to_nat(1u);
v___x_2510_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2510_, 0, v___x_2507_);
lean_ctor_set(v___x_2510_, 1, v___x_2508_);
lean_ctor_set(v___x_2510_, 2, v___x_2509_);
v___x_2511_ = lean_box(0);
v___x_2512_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2500_, v_args_2493_, v___x_2510_, v___x_2511_, v___x_2507_, v___y_2504_);
lean_dec_ref_known(v___x_2510_, 3);
lean_dec_ref(v_args_2493_);
lean_dec_ref(v_params_2500_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_dec_ref_known(v___x_2512_, 1);
v_code_2480_ = v_value_2501_;
v_a_2481_ = v___y_2503_;
v_a_2482_ = v___y_2504_;
v_a_2483_ = v___y_2505_;
v_a_2484_ = v___y_2506_;
goto _start;
}
else
{
lean_dec_ref(v_value_2501_);
return v___x_2512_;
}
}
v___jp_2514_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; uint8_t v___x_2521_; 
v___x_2519_ = lean_array_get_size(v_args_2493_);
v___x_2520_ = lean_array_get_size(v_params_2500_);
v___x_2521_ = lean_nat_dec_eq(v___x_2519_, v___x_2520_);
if (v___x_2521_ == 0)
{
lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
v___x_2522_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1);
v___x_2523_ = l_Lean_MessageData_ofName(v_fvarId_2492_);
if (v_isShared_2496_ == 0)
{
lean_ctor_set_tag(v___x_2495_, 7);
lean_ctor_set(v___x_2495_, 1, v___x_2523_);
lean_ctor_set(v___x_2495_, 0, v___x_2522_);
v___x_2525_ = v___x_2495_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v___x_2522_);
lean_ctor_set(v_reuseFailAlloc_2527_, 1, v___x_2523_);
v___x_2525_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2525_, v___y_2517_, v___y_2518_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_dec_ref_known(v___x_2526_, 1);
v___y_2503_ = v___y_2515_;
v___y_2504_ = v___y_2516_;
v___y_2505_ = v___y_2517_;
v___y_2506_ = v___y_2518_;
goto v___jp_2502_;
}
else
{
lean_dec_ref(v_value_2501_);
lean_dec_ref(v_params_2500_);
lean_dec_ref(v_args_2493_);
return v___x_2526_;
}
}
}
else
{
lean_del_object(v___x_2495_);
lean_dec(v_fvarId_2492_);
v___y_2503_ = v___y_2515_;
v___y_2504_ = v___y_2516_;
v___y_2505_ = v___y_2517_;
v___y_2506_ = v___y_2518_;
goto v___jp_2502_;
}
}
}
else
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
lean_dec(v_a_2498_);
lean_dec_ref(v_args_2493_);
v___x_2535_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7);
v___x_2536_ = l_Lean_MessageData_ofName(v_fvarId_2492_);
if (v_isShared_2496_ == 0)
{
lean_ctor_set_tag(v___x_2495_, 7);
lean_ctor_set(v___x_2495_, 1, v___x_2536_);
lean_ctor_set(v___x_2495_, 0, v___x_2535_);
v___x_2538_ = v___x_2495_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2535_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2538_, v_a_2483_, v_a_2484_);
return v___x_2539_;
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_del_object(v___x_2495_);
lean_dec_ref(v_args_2493_);
lean_dec(v_fvarId_2492_);
v_a_2541_ = lean_ctor_get(v___x_2497_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2497_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2497_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2497_);
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
}
case 4:
{
lean_object* v_cases_2550_; lean_object* v___x_2551_; 
v_cases_2550_ = lean_ctor_get(v_code_2480_, 0);
lean_inc_ref(v_cases_2550_);
lean_dec_ref_known(v_code_2480_, 1);
v___x_2551_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cases_2550_, v_a_2481_, v_a_2482_, v_a_2483_, v_a_2484_);
return v___x_2551_;
}
case 5:
{
lean_object* v_fvarId_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2589_; 
v_fvarId_2552_ = lean_ctor_get(v_code_2480_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v_code_2480_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2554_ = v_code_2480_;
v_isShared_2555_ = v_isSharedCheck_2589_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_fvarId_2552_);
lean_dec(v_code_2480_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2589_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2556_; lean_object* v_stmts_2557_; lean_object* v_fresh_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2588_; 
v___x_2556_ = lean_st_ref_take(v_a_2482_);
v_stmts_2557_ = lean_ctor_get(v___x_2556_, 0);
v_fresh_2558_ = lean_ctor_get(v___x_2556_, 1);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2560_ = v___x_2556_;
v_isShared_2561_ = v_isSharedCheck_2588_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_fresh_2558_);
lean_inc(v_stmts_2557_);
lean_dec(v___x_2556_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2588_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2565_; 
v___x_2562_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9));
v___x_2563_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2552_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set_tag(v___x_2554_, 1);
lean_ctor_set(v___x_2554_, 0, v___x_2563_);
v___x_2565_ = v___x_2554_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2563_);
v___x_2565_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2569_; 
v___x_2566_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2562_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
v___x_2567_ = lean_array_push(v_stmts_2557_, v___x_2566_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v___x_2567_);
v___x_2569_ = v___x_2560_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v___x_2567_);
lean_ctor_set(v_reuseFailAlloc_2586_, 1, v_fresh_2558_);
v___x_2569_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v_stmts_2572_; lean_object* v_fresh_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2585_; 
v___x_2570_ = lean_st_ref_set(v_a_2482_, v___x_2569_);
v___x_2571_ = lean_st_ref_take(v_a_2482_);
v_stmts_2572_ = lean_ctor_get(v___x_2571_, 0);
v_fresh_2573_ = lean_ctor_get(v___x_2571_, 1);
v_isSharedCheck_2585_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2575_ = v___x_2571_;
v_isShared_2576_ = v_isSharedCheck_2585_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_fresh_2573_);
lean_inc(v_stmts_2572_);
lean_dec(v___x_2571_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2585_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2580_; 
v___x_2577_ = lean_box(10);
v___x_2578_ = lean_array_push(v_stmts_2572_, v___x_2577_);
if (v_isShared_2576_ == 0)
{
lean_ctor_set(v___x_2575_, 0, v___x_2578_);
v___x_2580_ = v___x_2575_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2578_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_fresh_2573_);
v___x_2580_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2581_ = lean_st_ref_set(v_a_2482_, v___x_2580_);
v___x_2582_ = lean_box(0);
v___x_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
return v___x_2583_;
}
}
}
}
}
}
}
case 6:
{
lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2610_; 
v_isSharedCheck_2610_ = !lean_is_exclusive(v_code_2480_);
if (v_isSharedCheck_2610_ == 0)
{
lean_object* v_unused_2611_; 
v_unused_2611_ = lean_ctor_get(v_code_2480_, 0);
lean_dec(v_unused_2611_);
v___x_2591_ = v_code_2480_;
v_isShared_2592_ = v_isSharedCheck_2610_;
goto v_resetjp_2590_;
}
else
{
lean_dec(v_code_2480_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2610_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2593_; lean_object* v_stmts_2594_; lean_object* v_fresh_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2609_; 
v___x_2593_ = lean_st_ref_take(v_a_2482_);
v_stmts_2594_ = lean_ctor_get(v___x_2593_, 0);
v_fresh_2595_ = lean_ctor_get(v___x_2593_, 1);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2597_ = v___x_2593_;
v_isShared_2598_ = v_isSharedCheck_2609_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_fresh_2595_);
lean_inc(v_stmts_2594_);
lean_dec(v___x_2593_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2609_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2602_; 
v___x_2599_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13);
v___x_2600_ = lean_array_push(v_stmts_2594_, v___x_2599_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 0, v___x_2600_);
v___x_2602_ = v___x_2597_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v___x_2600_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v_fresh_2595_);
v___x_2602_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2606_; 
v___x_2603_ = lean_st_ref_set(v_a_2482_, v___x_2602_);
v___x_2604_ = lean_box(0);
if (v_isShared_2592_ == 0)
{
lean_ctor_set_tag(v___x_2591_, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2604_);
v___x_2606_ = v___x_2591_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2604_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_2612_; lean_object* v_i_2613_; lean_object* v_y_2614_; lean_object* v_k_2615_; lean_object* v___x_2616_; lean_object* v_stmts_2617_; lean_object* v_fresh_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2632_; 
v_fvarId_2612_ = lean_ctor_get(v_code_2480_, 0);
lean_inc(v_fvarId_2612_);
v_i_2613_ = lean_ctor_get(v_code_2480_, 1);
lean_inc(v_i_2613_);
v_y_2614_ = lean_ctor_get(v_code_2480_, 2);
lean_inc(v_y_2614_);
v_k_2615_ = lean_ctor_get(v_code_2480_, 3);
lean_inc_ref(v_k_2615_);
lean_dec_ref_known(v_code_2480_, 4);
v___x_2616_ = lean_st_ref_take(v_a_2482_);
v_stmts_2617_ = lean_ctor_get(v___x_2616_, 0);
v_fresh_2618_ = lean_ctor_get(v___x_2616_, 1);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2620_ = v___x_2616_;
v_isShared_2621_ = v_isSharedCheck_2632_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_fresh_2618_);
lean_inc(v_stmts_2617_);
lean_dec(v___x_2616_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2632_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; 
v___x_2622_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2612_);
v___x_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
v___x_2624_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_y_2614_);
v___x_2625_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2623_, v_i_2613_, v___x_2624_);
lean_dec(v_i_2613_);
v___x_2626_ = lean_array_push(v_stmts_2617_, v___x_2625_);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v___x_2626_);
v___x_2628_ = v___x_2620_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v___x_2626_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_fresh_2618_);
v___x_2628_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
lean_object* v___x_2629_; 
v___x_2629_ = lean_st_ref_set(v_a_2482_, v___x_2628_);
v_code_2480_ = v_k_2615_;
goto _start;
}
}
}
case 8:
{
lean_object* v_fvarId_2633_; lean_object* v_i_2634_; lean_object* v_y_2635_; lean_object* v_k_2636_; lean_object* v___x_2637_; lean_object* v_stmts_2638_; lean_object* v_fresh_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2654_; 
v_fvarId_2633_ = lean_ctor_get(v_code_2480_, 0);
lean_inc(v_fvarId_2633_);
v_i_2634_ = lean_ctor_get(v_code_2480_, 1);
lean_inc(v_i_2634_);
v_y_2635_ = lean_ctor_get(v_code_2480_, 2);
lean_inc(v_y_2635_);
v_k_2636_ = lean_ctor_get(v_code_2480_, 3);
lean_inc_ref(v_k_2636_);
lean_dec_ref_known(v_code_2480_, 4);
v___x_2637_ = lean_st_ref_take(v_a_2482_);
v_stmts_2638_ = lean_ctor_get(v___x_2637_, 0);
v_fresh_2639_ = lean_ctor_get(v___x_2637_, 1);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2641_ = v___x_2637_;
v_isShared_2642_ = v_isSharedCheck_2654_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_fresh_2639_);
lean_inc(v_stmts_2638_);
lean_dec(v___x_2637_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2654_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2650_; 
v___x_2643_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2633_);
v___x_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
v___x_2645_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2635_);
v___x_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2645_);
v___x_2647_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2644_, v_i_2634_, v___x_2646_);
lean_dec(v_i_2634_);
v___x_2648_ = lean_array_push(v_stmts_2638_, v___x_2647_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 0, v___x_2648_);
v___x_2650_ = v___x_2641_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v___x_2648_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v_fresh_2639_);
v___x_2650_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
lean_object* v___x_2651_; 
v___x_2651_ = lean_st_ref_set(v_a_2482_, v___x_2650_);
v_code_2480_ = v_k_2636_;
goto _start;
}
}
}
case 9:
{
lean_object* v_fvarId_2655_; lean_object* v_offset_2656_; lean_object* v_y_2657_; lean_object* v_k_2658_; lean_object* v___x_2659_; lean_object* v_stmts_2660_; lean_object* v_fresh_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2687_; 
v_fvarId_2655_ = lean_ctor_get(v_code_2480_, 0);
lean_inc(v_fvarId_2655_);
v_offset_2656_ = lean_ctor_get(v_code_2480_, 2);
lean_inc(v_offset_2656_);
v_y_2657_ = lean_ctor_get(v_code_2480_, 3);
lean_inc(v_y_2657_);
v_k_2658_ = lean_ctor_get(v_code_2480_, 5);
lean_inc_ref(v_k_2658_);
lean_dec_ref_known(v_code_2480_, 6);
v___x_2659_ = lean_st_ref_take(v_a_2482_);
v_stmts_2660_ = lean_ctor_get(v___x_2659_, 0);
v_fresh_2661_ = lean_ctor_get(v___x_2659_, 1);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2663_ = v___x_2659_;
v_isShared_2664_ = v_isSharedCheck_2687_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_fresh_2661_);
lean_inc(v_stmts_2660_);
lean_dec(v___x_2659_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2687_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v_addr_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2683_; 
v___x_2665_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2655_);
v___x_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
v___x_2667_ = lean_unsigned_to_nat(2u);
v___x_2668_ = lean_mk_empty_array_with_capacity(v___x_2667_);
lean_inc_ref(v___x_2668_);
v___x_2669_ = lean_array_push(v___x_2668_, v___x_2666_);
v___x_2670_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2671_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2656_);
v___x_2672_ = lean_array_push(v___x_2669_, v___x_2671_);
v_addr_2673_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2673_, 0, v___x_2670_);
lean_ctor_set(v_addr_2673_, 1, v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2675_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2657_);
v___x_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
v___x_2677_ = lean_array_push(v___x_2668_, v_addr_2673_);
v___x_2678_ = lean_array_push(v___x_2677_, v___x_2676_);
v___x_2679_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2674_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2679_);
v___x_2681_ = lean_array_push(v_stmts_2660_, v___x_2680_);
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 0, v___x_2681_);
v___x_2683_ = v___x_2663_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v_fresh_2661_);
v___x_2683_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_st_ref_set(v_a_2482_, v___x_2683_);
v_code_2480_ = v_k_2658_;
goto _start;
}
}
}
case 10:
{
lean_object* v_fvarId_2688_; lean_object* v_cidx_2689_; lean_object* v_k_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v_stmts_2694_; lean_object* v_fresh_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2714_; 
v_fvarId_2688_ = lean_ctor_get(v_code_2480_, 0);
lean_inc(v_fvarId_2688_);
v_cidx_2689_ = lean_ctor_get(v_code_2480_, 1);
lean_inc(v_cidx_2689_);
v_k_2690_ = lean_ctor_get(v_code_2480_, 2);
lean_inc_ref(v_k_2690_);
lean_dec_ref_known(v_code_2480_, 3);
v___x_2691_ = lean_unsigned_to_nat(0u);
v___x_2692_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_2689_, v___x_2691_, v___x_2691_);
v___x_2693_ = lean_st_ref_take(v_a_2482_);
v_stmts_2694_ = lean_ctor_get(v___x_2693_, 0);
v_fresh_2695_ = lean_ctor_get(v___x_2693_, 1);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2714_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_fresh_2695_);
lean_inc(v_stmts_2694_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2714_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2710_; 
v___x_2699_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2700_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2688_);
v___x_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
v___x_2702_ = lean_unsigned_to_nat(2u);
v___x_2703_ = lean_mk_empty_array_with_capacity(v___x_2702_);
v___x_2704_ = lean_array_push(v___x_2703_, v___x_2701_);
v___x_2705_ = lean_array_push(v___x_2704_, v___x_2692_);
v___x_2706_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2699_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
v___x_2708_ = lean_array_push(v_stmts_2694_, v___x_2707_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2708_);
v___x_2710_ = v___x_2697_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v___x_2708_);
lean_ctor_set(v_reuseFailAlloc_2713_, 1, v_fresh_2695_);
v___x_2710_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_st_ref_set(v_a_2482_, v___x_2710_);
v_code_2480_ = v_k_2690_;
goto _start;
}
}
}
case 11:
{
lean_object* v_k_2715_; 
v_k_2715_ = lean_ctor_get(v_code_2480_, 2);
lean_inc_ref(v_k_2715_);
lean_dec_ref_known(v_code_2480_, 3);
v_code_2480_ = v_k_2715_;
goto _start;
}
case 12:
{
lean_object* v_k_2717_; 
v_k_2717_ = lean_ctor_get(v_code_2480_, 3);
lean_inc_ref(v_k_2717_);
lean_dec_ref_known(v_code_2480_, 4);
v_code_2480_ = v_k_2717_;
goto _start;
}
default: 
{
lean_object* v_k_2719_; 
v_k_2719_ = lean_ctor_get(v_code_2480_, 1);
lean_inc_ref(v_k_2719_);
lean_dec_ref(v_code_2480_);
v_code_2480_ = v_k_2719_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed(lean_object* v_code_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2721_, v_a_2722_, v_a_2723_, v_a_2724_, v_a_2725_);
lean_dec(v_a_2725_);
lean_dec_ref(v_a_2724_);
lean_dec(v_a_2723_);
lean_dec_ref(v_a_2722_);
return v_res_2727_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0));
v___x_2730_ = l_Lean_stringToMessageData(v___x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(lean_object* v_as_2731_, size_t v_sz_2732_, size_t v_i_2733_, lean_object* v_b_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v_c_2741_; uint8_t v___x_2746_; 
v___x_2746_ = lean_usize_dec_lt(v_i_2733_, v_sz_2732_);
if (v___x_2746_ == 0)
{
lean_object* v___x_2747_; 
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v_b_2734_);
return v___x_2747_;
}
else
{
lean_object* v_a_2748_; lean_object* v___y_2750_; 
v_a_2748_ = lean_array_uget(v_as_2731_, v_i_2733_);
switch(lean_obj_tag(v_a_2748_))
{
case 0:
{
lean_object* v_code_2797_; 
v_code_2797_ = lean_ctor_get(v_a_2748_, 2);
lean_inc_ref(v_code_2797_);
v___y_2750_ = v_code_2797_;
goto v___jp_2749_;
}
case 1:
{
lean_object* v_code_2798_; 
v_code_2798_ = lean_ctor_get(v_a_2748_, 1);
lean_inc_ref(v_code_2798_);
v___y_2750_ = v_code_2798_;
goto v___jp_2749_;
}
default: 
{
lean_object* v_code_2799_; 
v_code_2799_ = lean_ctor_get(v_a_2748_, 0);
lean_inc_ref(v_code_2799_);
v___y_2750_ = v_code_2799_;
goto v___jp_2749_;
}
}
v___jp_2749_:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed), 6, 1);
lean_closure_set(v___x_2751_, 0, v___y_2750_);
v___x_2752_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___x_2751_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2752_) == 0)
{
switch(lean_obj_tag(v_a_2748_))
{
case 0:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; 
lean_dec_ref_known(v_a_2748_, 3);
lean_dec_ref_known(v___x_2752_, 1);
v___x_2753_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1);
v___x_2754_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2753_, v___y_2737_, v___y_2738_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v___x_2754_, 1);
v_c_2741_ = v_a_2755_;
goto v___jp_2740_;
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec_ref(v_b_2734_);
v_a_2756_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2754_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2754_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
case 1:
{
lean_object* v_info_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2776_; 
v_info_2764_ = lean_ctor_get(v_a_2748_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v_a_2748_);
if (v_isSharedCheck_2776_ == 0)
{
lean_object* v_unused_2777_; 
v_unused_2777_ = lean_ctor_get(v_a_2748_, 1);
lean_dec(v_unused_2777_);
v___x_2766_ = v_a_2748_;
v_isShared_2767_ = v_isSharedCheck_2776_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_info_2764_);
lean_dec(v_a_2748_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2776_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v_a_2768_; lean_object* v_cidx_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2774_; 
v_a_2768_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2752_, 1);
v_cidx_2769_ = lean_ctor_get(v_info_2764_, 1);
lean_inc(v_cidx_2769_);
lean_dec_ref(v_info_2764_);
v___x_2770_ = l_Lean_Compiler_Yul_Literal_natLit(v_cidx_2769_);
v___x_2771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2770_);
v___x_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2772_, 0, v_a_2768_);
if (v_isShared_2767_ == 0)
{
lean_ctor_set_tag(v___x_2766_, 0);
lean_ctor_set(v___x_2766_, 1, v___x_2772_);
lean_ctor_set(v___x_2766_, 0, v___x_2771_);
v___x_2774_ = v___x_2766_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v___x_2771_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v___x_2772_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
v_c_2741_ = v___x_2774_;
goto v___jp_2740_;
}
}
}
default: 
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2787_; 
v_a_2778_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2752_, 1);
v_isSharedCheck_2787_ = !lean_is_exclusive(v_a_2748_);
if (v_isSharedCheck_2787_ == 0)
{
lean_object* v_unused_2788_; 
v_unused_2788_ = lean_ctor_get(v_a_2748_, 0);
lean_dec(v_unused_2788_);
v___x_2780_ = v_a_2748_;
v_isShared_2781_ = v_isSharedCheck_2787_;
goto v_resetjp_2779_;
}
else
{
lean_dec(v_a_2748_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2787_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2782_ = lean_box(0);
if (v_isShared_2781_ == 0)
{
lean_ctor_set_tag(v___x_2780_, 0);
lean_ctor_set(v___x_2780_, 0, v_a_2778_);
v___x_2784_ = v___x_2780_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2778_);
v___x_2784_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
lean_object* v___x_2785_; 
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2782_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v_c_2741_ = v___x_2785_;
goto v___jp_2740_;
}
}
}
}
}
else
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
lean_dec(v_a_2748_);
lean_dec_ref(v_b_2734_);
v_a_2789_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2752_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2752_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
}
}
v___jp_2740_:
{
lean_object* v___x_2742_; size_t v___x_2743_; size_t v___x_2744_; 
v___x_2742_ = lean_array_push(v_b_2734_, v_c_2741_);
v___x_2743_ = ((size_t)1ULL);
v___x_2744_ = lean_usize_add(v_i_2733_, v___x_2743_);
v_i_2733_ = v___x_2744_;
v_b_2734_ = v___x_2742_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases(lean_object* v_cs_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_){
_start:
{
lean_object* v_discr_2806_; lean_object* v_alts_2807_; lean_object* v_yulCases_2808_; size_t v_sz_2809_; size_t v___x_2810_; lean_object* v___x_2811_; 
v_discr_2806_ = lean_ctor_get(v_cs_2800_, 2);
lean_inc(v_discr_2806_);
v_alts_2807_ = lean_ctor_get(v_cs_2800_, 3);
lean_inc_ref(v_alts_2807_);
lean_dec_ref(v_cs_2800_);
v_yulCases_2808_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0));
v_sz_2809_ = lean_array_size(v_alts_2807_);
v___x_2810_ = ((size_t)0ULL);
v___x_2811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_alts_2807_, v_sz_2809_, v___x_2810_, v_yulCases_2808_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_);
lean_dec_ref(v_alts_2807_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2840_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2814_ = v___x_2811_;
v_isShared_2815_ = v_isSharedCheck_2840_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2811_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2840_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2816_; lean_object* v_stmts_2817_; lean_object* v_fresh_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2839_; 
v___x_2816_ = lean_st_ref_take(v_a_2802_);
v_stmts_2817_ = lean_ctor_get(v___x_2816_, 0);
v_fresh_2818_ = lean_ctor_get(v___x_2816_, 1);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2820_ = v___x_2816_;
v_isShared_2821_ = v_isSharedCheck_2839_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_fresh_2818_);
lean_inc(v_stmts_2817_);
lean_dec(v___x_2816_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2839_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v_discrTag_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2832_; 
v___x_2822_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_2823_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_discr_2806_);
v___x_2824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2824_, 0, v___x_2823_);
v___x_2825_ = lean_unsigned_to_nat(1u);
v___x_2826_ = lean_mk_empty_array_with_capacity(v___x_2825_);
v___x_2827_ = lean_array_push(v___x_2826_, v___x_2824_);
v_discrTag_2828_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_discrTag_2828_, 0, v___x_2822_);
lean_ctor_set(v_discrTag_2828_, 1, v___x_2827_);
v___x_2829_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2829_, 0, v_discrTag_2828_);
lean_ctor_set(v___x_2829_, 1, v_a_2812_);
v___x_2830_ = lean_array_push(v_stmts_2817_, v___x_2829_);
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 0, v___x_2830_);
v___x_2832_ = v___x_2820_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v___x_2830_);
lean_ctor_set(v_reuseFailAlloc_2838_, 1, v_fresh_2818_);
v___x_2832_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2836_; 
v___x_2833_ = lean_st_ref_set(v_a_2802_, v___x_2832_);
v___x_2834_ = lean_box(0);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v___x_2834_);
v___x_2836_ = v___x_2814_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2834_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec(v_discr_2806_);
v_a_2841_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2811_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2811_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___boxed(lean_object* v_cs_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_){
_start:
{
lean_object* v_res_2855_; 
v_res_2855_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cs_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_);
lean_dec(v_a_2853_);
lean_dec_ref(v_a_2852_);
lean_dec(v_a_2851_);
lean_dec_ref(v_a_2850_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___boxed(lean_object* v_as_2856_, lean_object* v_sz_2857_, lean_object* v_i_2858_, lean_object* v_b_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
size_t v_sz_boxed_2865_; size_t v_i_boxed_2866_; lean_object* v_res_2867_; 
v_sz_boxed_2865_ = lean_unbox_usize(v_sz_2857_);
lean_dec(v_sz_2857_);
v_i_boxed_2866_ = lean_unbox_usize(v_i_2858_);
lean_dec(v_i_2858_);
v_res_2867_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_as_2856_, v_sz_boxed_2865_, v_i_boxed_2866_, v_b_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v___y_2861_);
lean_dec_ref(v___y_2860_);
lean_dec_ref(v_as_2856_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(lean_object* v_params_2868_, lean_object* v_args_2869_, lean_object* v_range_2870_, lean_object* v_b_2871_, lean_object* v_i_2872_, lean_object* v_hs_2873_, lean_object* v_hl_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v___x_2880_; 
v___x_2880_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2868_, v_args_2869_, v_range_2870_, v_b_2871_, v_i_2872_, v___y_2876_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___boxed(lean_object* v_params_2881_, lean_object* v_args_2882_, lean_object* v_range_2883_, lean_object* v_b_2884_, lean_object* v_i_2885_, lean_object* v_hs_2886_, lean_object* v_hl_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(v_params_2881_, v_args_2882_, v_range_2883_, v_b_2884_, v_i_2885_, v_hs_2886_, v_hl_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
lean_dec_ref(v_range_2883_);
lean_dec_ref(v_args_2882_);
lean_dec_ref(v_params_2881_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(lean_object* v_code_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v___x_2900_; 
v___x_2900_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2921_; 
v_isSharedCheck_2921_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2921_ == 0)
{
lean_object* v_unused_2922_; 
v_unused_2922_ = lean_ctor_get(v___x_2900_, 0);
lean_dec(v_unused_2922_);
v___x_2902_ = v___x_2900_;
v_isShared_2903_ = v_isSharedCheck_2921_;
goto v_resetjp_2901_;
}
else
{
lean_dec(v___x_2900_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2921_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2904_; lean_object* v_stmts_2905_; lean_object* v_fresh_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2920_; 
v___x_2904_ = lean_st_ref_take(v___y_2896_);
v_stmts_2905_ = lean_ctor_get(v___x_2904_, 0);
v_fresh_2906_ = lean_ctor_get(v___x_2904_, 1);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2908_ = v___x_2904_;
v_isShared_2909_ = v_isSharedCheck_2920_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_fresh_2906_);
lean_inc(v_stmts_2905_);
lean_dec(v___x_2904_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2920_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2913_; 
v___x_2910_ = lean_box(10);
v___x_2911_ = lean_array_push(v_stmts_2905_, v___x_2910_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 0, v___x_2911_);
v___x_2913_ = v___x_2908_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v___x_2911_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_fresh_2906_);
v___x_2913_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2917_; 
v___x_2914_ = lean_st_ref_set(v___y_2896_, v___x_2913_);
v___x_2915_ = lean_box(0);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v___x_2915_);
v___x_2917_ = v___x_2902_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2915_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
}
else
{
return v___x_2900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed(lean_object* v_code_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(v_code_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(lean_object* v_as_2930_, size_t v_i_2931_, size_t v_stop_2932_, lean_object* v_b_2933_){
_start:
{
lean_object* v___y_2935_; uint8_t v___x_2939_; 
v___x_2939_ = lean_usize_dec_eq(v_i_2931_, v_stop_2932_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; uint8_t v___y_2942_; lean_object* v_type_2944_; uint8_t v___x_2945_; 
v___x_2940_ = lean_array_uget_borrowed(v_as_2930_, v_i_2931_);
v_type_2944_ = lean_ctor_get(v___x_2940_, 2);
v___x_2945_ = l_Lean_Expr_isVoid(v_type_2944_);
if (v___x_2945_ == 0)
{
uint8_t v___x_2946_; 
v___x_2946_ = l_Lean_Expr_isErased(v_type_2944_);
v___y_2942_ = v___x_2946_;
goto v___jp_2941_;
}
else
{
v___y_2942_ = v___x_2945_;
goto v___jp_2941_;
}
v___jp_2941_:
{
if (v___y_2942_ == 0)
{
lean_object* v___x_2943_; 
lean_inc(v___x_2940_);
v___x_2943_ = lean_array_push(v_b_2933_, v___x_2940_);
v___y_2935_ = v___x_2943_;
goto v___jp_2934_;
}
else
{
v___y_2935_ = v_b_2933_;
goto v___jp_2934_;
}
}
}
else
{
return v_b_2933_;
}
v___jp_2934_:
{
size_t v___x_2936_; size_t v___x_2937_; 
v___x_2936_ = ((size_t)1ULL);
v___x_2937_ = lean_usize_add(v_i_2931_, v___x_2936_);
v_i_2931_ = v___x_2937_;
v_b_2933_ = v___y_2935_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1___boxed(lean_object* v_as_2947_, lean_object* v_i_2948_, lean_object* v_stop_2949_, lean_object* v_b_2950_){
_start:
{
size_t v_i_boxed_2951_; size_t v_stop_boxed_2952_; lean_object* v_res_2953_; 
v_i_boxed_2951_ = lean_unbox_usize(v_i_2948_);
lean_dec(v_i_2948_);
v_stop_boxed_2952_ = lean_unbox_usize(v_stop_2949_);
lean_dec(v_stop_2949_);
v_res_2953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_as_2947_, v_i_boxed_2951_, v_stop_boxed_2952_, v_b_2950_);
lean_dec_ref(v_as_2947_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(size_t v_sz_2954_, size_t v_i_2955_, lean_object* v_bs_2956_){
_start:
{
uint8_t v___x_2957_; 
v___x_2957_ = lean_usize_dec_lt(v_i_2955_, v_sz_2954_);
if (v___x_2957_ == 0)
{
return v_bs_2956_;
}
else
{
lean_object* v_v_2958_; lean_object* v_fvarId_2959_; lean_object* v___x_2960_; lean_object* v_bs_x27_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; size_t v___x_2964_; size_t v___x_2965_; lean_object* v___x_2966_; 
v_v_2958_ = lean_array_uget_borrowed(v_bs_2956_, v_i_2955_);
v_fvarId_2959_ = lean_ctor_get(v_v_2958_, 0);
lean_inc(v_fvarId_2959_);
v___x_2960_ = lean_unsigned_to_nat(0u);
v_bs_x27_2961_ = lean_array_uset(v_bs_2956_, v_i_2955_, v___x_2960_);
v___x_2962_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2959_);
v___x_2963_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2962_);
v___x_2964_ = ((size_t)1ULL);
v___x_2965_ = lean_usize_add(v_i_2955_, v___x_2964_);
v___x_2966_ = lean_array_uset(v_bs_x27_2961_, v_i_2955_, v___x_2963_);
v_i_2955_ = v___x_2965_;
v_bs_2956_ = v___x_2966_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0___boxed(lean_object* v_sz_2968_, lean_object* v_i_2969_, lean_object* v_bs_2970_){
_start:
{
size_t v_sz_boxed_2971_; size_t v_i_boxed_2972_; lean_object* v_res_2973_; 
v_sz_boxed_2971_ = lean_unbox_usize(v_sz_2968_);
lean_dec(v_sz_2968_);
v_i_boxed_2972_ = lean_unbox_usize(v_i_2969_);
lean_dec(v_i_2969_);
v_res_2973_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_boxed_2971_, v_i_boxed_2972_, v_bs_2970_);
return v_res_2973_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0(void){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2974_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8));
v___x_2975_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2974_);
return v___x_2975_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1(void){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v_returnVars_2979_; 
v___x_2976_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0);
v___x_2977_ = lean_unsigned_to_nat(1u);
v___x_2978_ = lean_mk_empty_array_with_capacity(v___x_2977_);
v_returnVars_2979_ = lean_array_push(v___x_2978_, v___x_2976_);
return v_returnVars_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl(lean_object* v_decl_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_){
_start:
{
lean_object* v_value_2988_; 
v_value_2988_ = lean_ctor_get(v_decl_2982_, 1);
lean_inc_ref(v_value_2988_);
if (lean_obj_tag(v_value_2988_) == 0)
{
lean_object* v_toSignature_2989_; lean_object* v_code_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3055_; 
v_toSignature_2989_ = lean_ctor_get(v_decl_2982_, 0);
lean_inc_ref(v_toSignature_2989_);
lean_dec_ref(v_decl_2982_);
v_code_2990_ = lean_ctor_get(v_value_2988_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v_value_2988_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_2992_ = v_value_2988_;
v_isShared_2993_ = v_isSharedCheck_3055_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_code_2990_);
lean_dec(v_value_2988_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3055_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v_name_2994_; lean_object* v_params_2995_; lean_object* v___f_2996_; lean_object* v_fnName_2997_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___y_3033_; lean_object* v___x_3046_; uint8_t v___x_3047_; 
v_name_2994_ = lean_ctor_get(v_toSignature_2989_, 0);
lean_inc_n(v_name_2994_, 2);
v_params_2995_ = lean_ctor_get(v_toSignature_2989_, 3);
lean_inc_ref(v_params_2995_);
lean_dec_ref(v_toSignature_2989_);
lean_inc_ref(v_code_2990_);
v___f_2996_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2996_, 0, v_code_2990_);
v_fnName_2997_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_name_2994_);
v___x_3030_ = lean_unsigned_to_nat(0u);
v___x_3031_ = lean_array_get_size(v_params_2995_);
v___x_3046_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2));
v___x_3047_ = lean_nat_dec_lt(v___x_3030_, v___x_3031_);
if (v___x_3047_ == 0)
{
v___y_3033_ = v___x_3046_;
goto v___jp_3032_;
}
else
{
uint8_t v___x_3048_; 
v___x_3048_ = lean_nat_dec_le(v___x_3031_, v___x_3031_);
if (v___x_3048_ == 0)
{
if (v___x_3047_ == 0)
{
v___y_3033_ = v___x_3046_;
goto v___jp_3032_;
}
else
{
size_t v___x_3049_; size_t v___x_3050_; lean_object* v___x_3051_; 
v___x_3049_ = ((size_t)0ULL);
v___x_3050_ = lean_usize_of_nat(v___x_3031_);
v___x_3051_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2995_, v___x_3049_, v___x_3050_, v___x_3046_);
v___y_3033_ = v___x_3051_;
goto v___jp_3032_;
}
}
else
{
size_t v___x_3052_; size_t v___x_3053_; lean_object* v___x_3054_; 
v___x_3052_ = ((size_t)0ULL);
v___x_3053_ = lean_usize_of_nat(v___x_3031_);
v___x_3054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2995_, v___x_3052_, v___x_3053_, v___x_3046_);
v___y_3033_ = v___x_3054_;
goto v___jp_3032_;
}
}
v___jp_2998_:
{
lean_object* v_localDecls_3003_; lean_object* v_otherModuleDecls_3004_; lean_object* v_modName_3005_; lean_object* v_fvarTypes_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v_localDecls_3003_ = lean_ctor_get(v_a_2983_, 0);
v_otherModuleDecls_3004_ = lean_ctor_get(v_a_2983_, 1);
v_modName_3005_ = lean_ctor_get(v_a_2983_, 2);
v_fvarTypes_3006_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v_code_2990_, v___y_3002_);
lean_inc(v_modName_3005_);
lean_inc_ref(v_otherModuleDecls_3004_);
lean_inc_ref(v_localDecls_3003_);
v___x_3007_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3007_, 0, v_localDecls_3003_);
lean_ctor_set(v___x_3007_, 1, v_otherModuleDecls_3004_);
lean_ctor_set(v___x_3007_, 2, v_modName_3005_);
lean_ctor_set(v___x_3007_, 3, v_name_2994_);
lean_ctor_set(v___x_3007_, 4, v_fvarTypes_3006_);
lean_ctor_set(v___x_3007_, 5, v___y_2999_);
v___x_3008_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___f_2996_, v___x_3007_, v_a_2984_, v_a_2985_, v_a_2986_);
lean_dec_ref_known(v___x_3007_, 6);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3021_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3021_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3021_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3014_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 0, v_a_3009_);
v___x_3014_ = v___x_2992_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_3009_);
v___x_3014_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3018_; 
lean_inc_ref(v___y_3001_);
v___x_3015_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3015_, 0, v_fnName_2997_);
lean_ctor_set(v___x_3015_, 1, v___y_3000_);
lean_ctor_set(v___x_3015_, 2, v___y_3001_);
lean_ctor_set(v___x_3015_, 3, v___x_3014_);
v___x_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3015_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3016_);
v___x_3018_ = v___x_3011_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_3016_);
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
else
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3029_; 
lean_dec_ref(v___y_3000_);
lean_dec_ref(v_fnName_2997_);
lean_del_object(v___x_2992_);
v_a_3022_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3024_ = v___x_3008_;
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3008_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3029_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3027_; 
if (v_isShared_3025_ == 0)
{
v___x_3027_ = v___x_3024_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3022_);
v___x_3027_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
return v___x_3027_;
}
}
}
}
v___jp_3032_:
{
size_t v_sz_3034_; size_t v___x_3035_; lean_object* v_paramNames_3036_; lean_object* v_returnVars_3037_; lean_object* v___x_3038_; lean_object* v_joinDecls_3039_; uint8_t v___x_3040_; 
v_sz_3034_ = lean_array_size(v___y_3033_);
v___x_3035_ = ((size_t)0ULL);
v_paramNames_3036_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_3034_, v___x_3035_, v___y_3033_);
v_returnVars_3037_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1);
v___x_3038_ = lean_box(1);
lean_inc_ref(v_code_2990_);
v_joinDecls_3039_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v_code_2990_, v___x_3038_);
v___x_3040_ = lean_nat_dec_lt(v___x_3030_, v___x_3031_);
if (v___x_3040_ == 0)
{
lean_dec_ref(v_params_2995_);
v___y_2999_ = v_joinDecls_3039_;
v___y_3000_ = v_paramNames_3036_;
v___y_3001_ = v_returnVars_3037_;
v___y_3002_ = v___x_3038_;
goto v___jp_2998_;
}
else
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_nat_dec_le(v___x_3031_, v___x_3031_);
if (v___x_3041_ == 0)
{
if (v___x_3040_ == 0)
{
lean_dec_ref(v_params_2995_);
v___y_2999_ = v_joinDecls_3039_;
v___y_3000_ = v_paramNames_3036_;
v___y_3001_ = v_returnVars_3037_;
v___y_3002_ = v___x_3038_;
goto v___jp_2998_;
}
else
{
size_t v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_usize_of_nat(v___x_3031_);
v___x_3043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2995_, v___x_3035_, v___x_3042_, v___x_3038_);
lean_dec_ref(v_params_2995_);
v___y_2999_ = v_joinDecls_3039_;
v___y_3000_ = v_paramNames_3036_;
v___y_3001_ = v_returnVars_3037_;
v___y_3002_ = v___x_3043_;
goto v___jp_2998_;
}
}
else
{
size_t v___x_3044_; lean_object* v___x_3045_; 
v___x_3044_ = lean_usize_of_nat(v___x_3031_);
v___x_3045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2995_, v___x_3035_, v___x_3044_, v___x_3038_);
lean_dec_ref(v_params_2995_);
v___y_2999_ = v_joinDecls_3039_;
v___y_3000_ = v_paramNames_3036_;
v___y_3001_ = v_returnVars_3037_;
v___y_3002_ = v___x_3045_;
goto v___jp_2998_;
}
}
}
}
}
else
{
lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3063_; 
lean_dec_ref(v_decl_2982_);
v_isSharedCheck_3063_ = !lean_is_exclusive(v_value_2988_);
if (v_isSharedCheck_3063_ == 0)
{
lean_object* v_unused_3064_; 
v_unused_3064_ = lean_ctor_get(v_value_2988_, 0);
lean_dec(v_unused_3064_);
v___x_3057_ = v_value_2988_;
v_isShared_3058_ = v_isSharedCheck_3063_;
goto v_resetjp_3056_;
}
else
{
lean_dec(v_value_2988_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3063_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3059_; lean_object* v___x_3061_; 
v___x_3059_ = lean_box(0);
if (v_isShared_3058_ == 0)
{
lean_ctor_set_tag(v___x_3057_, 0);
lean_ctor_set(v___x_3057_, 0, v___x_3059_);
v___x_3061_ = v___x_3057_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3059_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___boxed(lean_object* v_decl_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_decl_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_);
lean_dec(v_a_3069_);
lean_dec_ref(v_a_3068_);
lean_dec(v_a_3067_);
lean_dec_ref(v_a_3066_);
return v_res_3071_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1));
v___x_3075_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3074_);
return v___x_3075_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3(void){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3076_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2);
v___x_3077_ = lean_unsigned_to_nat(1u);
v___x_3078_ = lean_mk_empty_array_with_capacity(v___x_3077_);
v___x_3079_ = lean_array_push(v___x_3078_, v___x_3076_);
return v___x_3079_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5(void){
_start:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; 
v___x_3081_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4));
v___x_3082_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3081_);
return v___x_3082_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6(void){
_start:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3083_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5);
v___x_3084_ = lean_unsigned_to_nat(1u);
v___x_3085_ = lean_mk_empty_array_with_capacity(v___x_3084_);
v___x_3086_ = lean_array_push(v___x_3085_, v___x_3083_);
return v___x_3086_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9(void){
_start:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3093_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8));
v___x_3094_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_3095_ = lean_array_push(v___x_3094_, v___x_3093_);
return v___x_3095_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10(void){
_start:
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3096_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9);
v___x_3097_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3098_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
lean_ctor_set(v___x_3098_, 1, v___x_3096_);
return v___x_3098_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3099_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3100_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10);
v___x_3101_ = lean_unsigned_to_nat(2u);
v___x_3102_ = lean_mk_empty_array_with_capacity(v___x_3101_);
v___x_3103_ = lean_array_push(v___x_3102_, v___x_3100_);
v___x_3104_ = lean_array_push(v___x_3103_, v___x_3099_);
return v___x_3104_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3105_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11);
v___x_3106_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3107_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
lean_ctor_set(v___x_3107_, 1, v___x_3105_);
return v___x_3107_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3108_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12);
v___x_3109_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3110_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_3108_);
return v___x_3110_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14(void){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3111_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13);
v___x_3112_ = lean_unsigned_to_nat(1u);
v___x_3113_ = lean_mk_empty_array_with_capacity(v___x_3112_);
v___x_3114_ = lean_array_push(v___x_3113_, v___x_3111_);
return v___x_3114_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14);
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
return v___x_3116_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3117_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15);
v___x_3118_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3119_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3);
v___x_3120_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0));
v___x_3121_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
lean_ctor_set(v___x_3121_, 1, v___x_3119_);
lean_ctor_set(v___x_3121_, 2, v___x_3118_);
lean_ctor_set(v___x_3121_, 3, v___x_3117_);
return v___x_3121_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19(void){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18));
v___x_3125_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3124_);
return v___x_3125_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20(void){
_start:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3126_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19);
v___x_3127_ = lean_unsigned_to_nat(1u);
v___x_3128_ = lean_mk_empty_array_with_capacity(v___x_3127_);
v___x_3129_ = lean_array_push(v___x_3128_, v___x_3126_);
return v___x_3129_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22(void){
_start:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3132_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3133_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_3134_ = lean_array_push(v___x_3133_, v___x_3132_);
return v___x_3134_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23(void){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3135_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22);
v___x_3136_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_3137_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3135_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24(void){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3138_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23);
v___x_3139_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3140_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v___x_3138_);
return v___x_3140_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3141_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24);
v___x_3142_ = lean_unsigned_to_nat(1u);
v___x_3143_ = lean_mk_empty_array_with_capacity(v___x_3142_);
v___x_3144_ = lean_array_push(v___x_3143_, v___x_3141_);
return v___x_3144_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3145_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25);
v___x_3146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
return v___x_3146_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3147_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26);
v___x_3148_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3149_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_3150_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17));
v___x_3151_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3150_);
lean_ctor_set(v___x_3151_, 1, v___x_3149_);
lean_ctor_set(v___x_3151_, 2, v___x_3148_);
lean_ctor_set(v___x_3151_, 3, v___x_3147_);
return v___x_3151_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30(void){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3154_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29));
v___x_3155_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3154_);
return v___x_3155_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32(void){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3157_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31));
v___x_3158_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3157_);
return v___x_3158_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3159_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32);
v___x_3160_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30);
v___x_3161_ = lean_unsigned_to_nat(2u);
v___x_3162_ = lean_mk_empty_array_with_capacity(v___x_3161_);
v___x_3163_ = lean_array_push(v___x_3162_, v___x_3160_);
v___x_3164_ = lean_array_push(v___x_3163_, v___x_3159_);
return v___x_3164_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35(void){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34));
v___x_3167_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3166_);
return v___x_3167_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36(void){
_start:
{
lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3168_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3169_ = lean_unsigned_to_nat(1u);
v___x_3170_ = lean_mk_empty_array_with_capacity(v___x_3169_);
v___x_3171_ = lean_array_push(v___x_3170_, v___x_3168_);
return v___x_3171_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3173_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37));
v___x_3174_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3173_);
return v___x_3174_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39(void){
_start:
{
lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3175_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38);
v___x_3176_ = lean_unsigned_to_nat(1u);
v___x_3177_ = lean_mk_empty_array_with_capacity(v___x_3176_);
v___x_3178_ = lean_array_push(v___x_3177_, v___x_3175_);
return v___x_3178_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3179_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_3180_ = lean_unsigned_to_nat(1u);
v___x_3181_ = lean_mk_empty_array_with_capacity(v___x_3180_);
v___x_3182_ = lean_array_push(v___x_3181_, v___x_3179_);
return v___x_3182_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41(void){
_start:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v___x_3183_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40);
v___x_3184_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3185_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
lean_ctor_set(v___x_3185_, 1, v___x_3183_);
return v___x_3185_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42(void){
_start:
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3186_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41);
v___x_3187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3186_);
return v___x_3187_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43(void){
_start:
{
lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42);
v___x_3189_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39);
v___x_3190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
lean_ctor_set(v___x_3190_, 1, v___x_3188_);
return v___x_3190_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3195_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3196_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_3197_ = lean_unsigned_to_nat(2u);
v___x_3198_ = lean_mk_empty_array_with_capacity(v___x_3197_);
v___x_3199_ = lean_array_push(v___x_3198_, v___x_3196_);
v___x_3200_ = lean_array_push(v___x_3199_, v___x_3195_);
return v___x_3200_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46);
v___x_3202_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3203_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
lean_ctor_set(v___x_3203_, 1, v___x_3201_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48(void){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3204_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3205_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47);
v___x_3206_ = lean_unsigned_to_nat(2u);
v___x_3207_ = lean_mk_empty_array_with_capacity(v___x_3206_);
v___x_3208_ = lean_array_push(v___x_3207_, v___x_3205_);
v___x_3209_ = lean_array_push(v___x_3208_, v___x_3204_);
return v___x_3209_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49(void){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48);
v___x_3211_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3212_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
lean_ctor_set(v___x_3212_, 1, v___x_3210_);
return v___x_3212_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50(void){
_start:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3213_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44));
v___x_3214_ = lean_unsigned_to_nat(2u);
v___x_3215_ = lean_mk_empty_array_with_capacity(v___x_3214_);
v___x_3216_ = lean_array_push(v___x_3215_, v___x_3213_);
return v___x_3216_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51(void){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3217_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49);
v___x_3218_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_3219_ = lean_array_push(v___x_3218_, v___x_3217_);
return v___x_3219_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51);
v___x_3221_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3222_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v___x_3220_);
return v___x_3222_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53(void){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3223_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52);
v___x_3224_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1);
v___x_3225_ = lean_array_push(v___x_3224_, v___x_3223_);
return v___x_3225_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54(void){
_start:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3226_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53);
v___x_3227_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3228_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3227_);
lean_ctor_set(v___x_3228_, 1, v___x_3226_);
return v___x_3228_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55(void){
_start:
{
lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3229_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54);
v___x_3230_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
return v___x_3230_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57(void){
_start:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3233_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_3234_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0);
v___x_3235_ = lean_unsigned_to_nat(2u);
v___x_3236_ = lean_mk_empty_array_with_capacity(v___x_3235_);
v___x_3237_ = lean_array_push(v___x_3236_, v___x_3234_);
v___x_3238_ = lean_array_push(v___x_3237_, v___x_3233_);
return v___x_3238_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58(void){
_start:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3239_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57);
v___x_3240_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3241_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
lean_ctor_set(v___x_3241_, 1, v___x_3239_);
return v___x_3241_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59(void){
_start:
{
lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3242_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58);
v___x_3243_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56));
v___x_3244_ = lean_unsigned_to_nat(2u);
v___x_3245_ = lean_mk_empty_array_with_capacity(v___x_3244_);
v___x_3246_ = lean_array_push(v___x_3245_, v___x_3243_);
v___x_3247_ = lean_array_push(v___x_3246_, v___x_3242_);
return v___x_3247_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60(void){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3248_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59);
v___x_3249_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3250_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3249_);
lean_ctor_set(v___x_3250_, 1, v___x_3248_);
return v___x_3250_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3251_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6);
v___x_3252_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60);
v___x_3253_ = lean_unsigned_to_nat(2u);
v___x_3254_ = lean_mk_empty_array_with_capacity(v___x_3253_);
v___x_3255_ = lean_array_push(v___x_3254_, v___x_3252_);
v___x_3256_ = lean_array_push(v___x_3255_, v___x_3251_);
return v___x_3256_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62(void){
_start:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3257_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61);
v___x_3258_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3259_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
lean_ctor_set(v___x_3259_, 1, v___x_3257_);
return v___x_3259_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63(void){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v___x_3260_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62);
v___x_3261_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_3262_ = lean_array_push(v___x_3261_, v___x_3260_);
return v___x_3262_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64(void){
_start:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3263_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63);
v___x_3264_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3265_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3264_);
lean_ctor_set(v___x_3265_, 1, v___x_3263_);
return v___x_3265_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65(void){
_start:
{
lean_object* v___x_3266_; lean_object* v___x_3267_; 
v___x_3266_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64);
v___x_3267_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3266_);
return v___x_3267_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68(void){
_start:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3275_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67));
v___x_3276_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65);
v___x_3277_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55);
v___x_3278_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43);
v___x_3279_ = lean_unsigned_to_nat(4u);
v___x_3280_ = lean_mk_empty_array_with_capacity(v___x_3279_);
v___x_3281_ = lean_array_push(v___x_3280_, v___x_3278_);
v___x_3282_ = lean_array_push(v___x_3281_, v___x_3277_);
v___x_3283_ = lean_array_push(v___x_3282_, v___x_3276_);
v___x_3284_ = lean_array_push(v___x_3283_, v___x_3275_);
return v___x_3284_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69(void){
_start:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3285_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68);
v___x_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3285_);
return v___x_3286_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70(void){
_start:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3287_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69);
v___x_3288_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36);
v___x_3289_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33);
v___x_3290_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28));
v___x_3291_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3290_);
lean_ctor_set(v___x_3291_, 1, v___x_3289_);
lean_ctor_set(v___x_3291_, 2, v___x_3288_);
lean_ctor_set(v___x_3291_, 3, v___x_3287_);
return v___x_3291_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73(void){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72));
v___x_3295_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3294_);
return v___x_3295_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74(void){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3296_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3297_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3298_ = lean_unsigned_to_nat(2u);
v___x_3299_ = lean_mk_empty_array_with_capacity(v___x_3298_);
v___x_3300_ = lean_array_push(v___x_3299_, v___x_3297_);
v___x_3301_ = lean_array_push(v___x_3300_, v___x_3296_);
return v___x_3301_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76(void){
_start:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3303_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75));
v___x_3304_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3303_);
return v___x_3304_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77(void){
_start:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3305_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3306_ = lean_unsigned_to_nat(1u);
v___x_3307_ = lean_mk_empty_array_with_capacity(v___x_3306_);
v___x_3308_ = lean_array_push(v___x_3307_, v___x_3305_);
return v___x_3308_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3317_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80));
v___x_3318_ = lean_unsigned_to_nat(2u);
v___x_3319_ = lean_mk_empty_array_with_capacity(v___x_3318_);
v___x_3320_ = lean_array_push(v___x_3319_, v___x_3317_);
return v___x_3320_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3322_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81);
v___x_3323_ = lean_array_push(v___x_3322_, v___x_3321_);
return v___x_3323_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83(void){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3324_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82);
v___x_3325_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3326_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
lean_ctor_set(v___x_3326_, 1, v___x_3324_);
return v___x_3326_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84(void){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3327_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3328_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83);
v___x_3329_ = lean_unsigned_to_nat(2u);
v___x_3330_ = lean_mk_empty_array_with_capacity(v___x_3329_);
v___x_3331_ = lean_array_push(v___x_3330_, v___x_3328_);
v___x_3332_ = lean_array_push(v___x_3331_, v___x_3327_);
return v___x_3332_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85(void){
_start:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3333_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84);
v___x_3334_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3335_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3335_, 0, v___x_3334_);
lean_ctor_set(v___x_3335_, 1, v___x_3333_);
return v___x_3335_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86(void){
_start:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3336_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85);
v___x_3337_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79));
v___x_3338_ = lean_unsigned_to_nat(2u);
v___x_3339_ = lean_mk_empty_array_with_capacity(v___x_3338_);
v___x_3340_ = lean_array_push(v___x_3339_, v___x_3337_);
v___x_3341_ = lean_array_push(v___x_3340_, v___x_3336_);
return v___x_3341_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3342_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_3343_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3344_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3343_);
lean_ctor_set(v___x_3344_, 1, v___x_3342_);
return v___x_3344_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3345_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87);
v___x_3346_ = lean_unsigned_to_nat(1u);
v___x_3347_ = lean_mk_empty_array_with_capacity(v___x_3346_);
v___x_3348_ = lean_array_push(v___x_3347_, v___x_3345_);
return v___x_3348_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89(void){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3349_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88);
v___x_3350_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3351_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
lean_ctor_set(v___x_3351_, 1, v___x_3349_);
return v___x_3351_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90(void){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3352_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89);
v___x_3353_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78));
v___x_3354_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3353_);
lean_ctor_set(v___x_3354_, 1, v___x_3352_);
return v___x_3354_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91(void){
_start:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3355_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90);
v___x_3356_ = lean_unsigned_to_nat(1u);
v___x_3357_ = lean_mk_empty_array_with_capacity(v___x_3356_);
v___x_3358_ = lean_array_push(v___x_3357_, v___x_3355_);
return v___x_3358_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92(void){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91);
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3361_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92);
v___x_3362_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77);
v___x_3363_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74);
v___x_3364_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71));
v___x_3365_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3364_);
lean_ctor_set(v___x_3365_, 1, v___x_3363_);
lean_ctor_set(v___x_3365_, 2, v___x_3362_);
lean_ctor_set(v___x_3365_, 3, v___x_3361_);
return v___x_3365_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95(void){
_start:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3367_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3368_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3369_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3370_ = lean_unsigned_to_nat(3u);
v___x_3371_ = lean_mk_empty_array_with_capacity(v___x_3370_);
v___x_3372_ = lean_array_push(v___x_3371_, v___x_3369_);
v___x_3373_ = lean_array_push(v___x_3372_, v___x_3368_);
v___x_3374_ = lean_array_push(v___x_3373_, v___x_3367_);
return v___x_3374_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3379_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97));
v___x_3380_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87);
v___x_3381_ = lean_unsigned_to_nat(2u);
v___x_3382_ = lean_mk_empty_array_with_capacity(v___x_3381_);
v___x_3383_ = lean_array_push(v___x_3382_, v___x_3380_);
v___x_3384_ = lean_array_push(v___x_3383_, v___x_3379_);
return v___x_3384_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99(void){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3385_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98);
v___x_3386_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3387_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3386_);
lean_ctor_set(v___x_3387_, 1, v___x_3385_);
return v___x_3387_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100(void){
_start:
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3388_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99);
v___x_3389_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3388_);
return v___x_3389_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101(void){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3390_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100);
v___x_3391_ = lean_unsigned_to_nat(1u);
v___x_3392_ = lean_mk_empty_array_with_capacity(v___x_3391_);
v___x_3393_ = lean_array_push(v___x_3392_, v___x_3390_);
return v___x_3393_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102(void){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101);
v___x_3395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3394_);
return v___x_3395_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103(void){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; 
v___x_3396_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102);
v___x_3397_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96));
v___x_3398_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95);
v___x_3399_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94));
v___x_3400_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
lean_ctor_set(v___x_3400_, 1, v___x_3398_);
lean_ctor_set(v___x_3400_, 2, v___x_3397_);
lean_ctor_set(v___x_3400_, 3, v___x_3396_);
return v___x_3400_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105(void){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3402_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104));
v___x_3403_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3402_);
return v___x_3403_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106(void){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3404_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105);
v___x_3405_ = lean_unsigned_to_nat(1u);
v___x_3406_ = lean_mk_empty_array_with_capacity(v___x_3405_);
v___x_3407_ = lean_array_push(v___x_3406_, v___x_3404_);
return v___x_3407_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111(void){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3420_ = lean_unsigned_to_nat(255u);
v___x_3421_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3420_);
return v___x_3421_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3422_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111);
v___x_3423_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110));
v___x_3424_ = lean_unsigned_to_nat(2u);
v___x_3425_ = lean_mk_empty_array_with_capacity(v___x_3424_);
v___x_3426_ = lean_array_push(v___x_3425_, v___x_3423_);
v___x_3427_ = lean_array_push(v___x_3426_, v___x_3422_);
return v___x_3427_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113(void){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3428_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112);
v___x_3429_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108));
v___x_3430_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3429_);
lean_ctor_set(v___x_3430_, 1, v___x_3428_);
return v___x_3430_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114(void){
_start:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3431_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113);
v___x_3432_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3432_);
lean_ctor_set(v___x_3433_, 1, v___x_3431_);
return v___x_3433_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115(void){
_start:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3434_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3435_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3436_ = lean_unsigned_to_nat(2u);
v___x_3437_ = lean_mk_empty_array_with_capacity(v___x_3436_);
v___x_3438_ = lean_array_push(v___x_3437_, v___x_3435_);
v___x_3439_ = lean_array_push(v___x_3438_, v___x_3434_);
return v___x_3439_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116(void){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3440_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115);
v___x_3441_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108));
v___x_3442_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3441_);
lean_ctor_set(v___x_3442_, 1, v___x_3440_);
return v___x_3442_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117(void){
_start:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3443_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3444_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3443_);
return v___x_3444_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118(void){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3445_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117);
v___x_3446_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3447_, 0, v___x_3446_);
lean_ctor_set(v___x_3447_, 1, v___x_3445_);
return v___x_3447_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119(void){
_start:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v___x_3448_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118);
v___x_3449_ = lean_unsigned_to_nat(1u);
v___x_3450_ = lean_mk_empty_array_with_capacity(v___x_3449_);
v___x_3451_ = lean_array_push(v___x_3450_, v___x_3448_);
return v___x_3451_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120(void){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3452_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119);
v___x_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3452_);
return v___x_3453_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121(void){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120);
v___x_3455_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116);
v___x_3456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3455_);
lean_ctor_set(v___x_3456_, 1, v___x_3454_);
return v___x_3456_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122(void){
_start:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3457_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121);
v___x_3458_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114);
v___x_3459_ = lean_unsigned_to_nat(2u);
v___x_3460_ = lean_mk_empty_array_with_capacity(v___x_3459_);
v___x_3461_ = lean_array_push(v___x_3460_, v___x_3458_);
v___x_3462_ = lean_array_push(v___x_3461_, v___x_3457_);
return v___x_3462_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123(void){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
return v___x_3464_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124(void){
_start:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3465_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123);
v___x_3466_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106);
v___x_3467_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_3468_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_3469_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3468_);
lean_ctor_set(v___x_3469_, 1, v___x_3467_);
lean_ctor_set(v___x_3469_, 2, v___x_3466_);
lean_ctor_set(v___x_3469_, 3, v___x_3465_);
return v___x_3469_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127(void){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3472_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126));
v___x_3473_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3472_);
return v___x_3473_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129(void){
_start:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3475_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128));
v___x_3476_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3475_);
return v___x_3476_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130(void){
_start:
{
lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3477_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3478_ = lean_unsigned_to_nat(2u);
v___x_3479_ = lean_mk_empty_array_with_capacity(v___x_3478_);
v___x_3480_ = lean_array_push(v___x_3479_, v___x_3477_);
return v___x_3480_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131(void){
_start:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3481_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3482_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130);
v___x_3483_ = lean_array_push(v___x_3482_, v___x_3481_);
return v___x_3483_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133(void){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3486_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132));
v___x_3487_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3486_);
return v___x_3487_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135(void){
_start:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3490_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134));
v___x_3491_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3490_);
return v___x_3491_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136(void){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v___x_3492_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135);
v___x_3493_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3494_ = lean_unsigned_to_nat(2u);
v___x_3495_ = lean_mk_empty_array_with_capacity(v___x_3494_);
v___x_3496_ = lean_array_push(v___x_3495_, v___x_3493_);
v___x_3497_ = lean_array_push(v___x_3496_, v___x_3492_);
return v___x_3497_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137(void){
_start:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; 
v___x_3498_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3499_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3500_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3499_);
lean_ctor_set(v___x_3500_, 1, v___x_3498_);
return v___x_3500_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138(void){
_start:
{
lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3501_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137);
v___x_3502_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3501_);
return v___x_3502_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139(void){
_start:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3503_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138);
v___x_3504_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3505_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
lean_ctor_set(v___x_3505_, 1, v___x_3503_);
return v___x_3505_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140(void){
_start:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3506_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139);
v___x_3507_ = lean_unsigned_to_nat(1u);
v___x_3508_ = lean_mk_empty_array_with_capacity(v___x_3507_);
v___x_3509_ = lean_array_push(v___x_3508_, v___x_3506_);
return v___x_3509_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3510_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140);
v___x_3511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3510_);
return v___x_3511_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142(void){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3512_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141);
v___x_3513_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3514_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3515_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125));
v___x_3516_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
lean_ctor_set(v___x_3516_, 1, v___x_3514_);
lean_ctor_set(v___x_3516_, 2, v___x_3513_);
lean_ctor_set(v___x_3516_, 3, v___x_3512_);
return v___x_3516_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144(void){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3518_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_3519_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3520_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
lean_ctor_set(v___x_3520_, 1, v___x_3518_);
return v___x_3520_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147(void){
_start:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3523_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3524_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146));
v___x_3525_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3524_);
lean_ctor_set(v___x_3525_, 1, v___x_3523_);
return v___x_3525_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148(void){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3526_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147);
v___x_3527_ = lean_unsigned_to_nat(1u);
v___x_3528_ = lean_mk_empty_array_with_capacity(v___x_3527_);
v___x_3529_ = lean_array_push(v___x_3528_, v___x_3526_);
return v___x_3529_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149(void){
_start:
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v___x_3530_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148);
v___x_3531_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145));
v___x_3532_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3531_);
lean_ctor_set(v___x_3532_, 1, v___x_3530_);
return v___x_3532_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151(void){
_start:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150));
v___x_3535_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3534_);
return v___x_3535_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152(void){
_start:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3536_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151);
v___x_3537_ = lean_unsigned_to_nat(1u);
v___x_3538_ = lean_mk_empty_array_with_capacity(v___x_3537_);
v___x_3539_ = lean_array_push(v___x_3538_, v___x_3536_);
return v___x_3539_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153(void){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
return v___x_3541_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154(void){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3542_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153);
v___x_3543_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152);
v___x_3544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3543_);
lean_ctor_set(v___x_3544_, 1, v___x_3542_);
return v___x_3544_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156(void){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155));
v___x_3547_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3546_);
return v___x_3547_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3548_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156);
v___x_3549_ = lean_unsigned_to_nat(1u);
v___x_3550_ = lean_mk_empty_array_with_capacity(v___x_3549_);
v___x_3551_ = lean_array_push(v___x_3550_, v___x_3548_);
return v___x_3551_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158(void){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3552_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135);
v___x_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3553_, 0, v___x_3552_);
return v___x_3553_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159(void){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3554_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158);
v___x_3555_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157);
v___x_3556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3556_, 0, v___x_3555_);
lean_ctor_set(v___x_3556_, 1, v___x_3554_);
return v___x_3556_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165(void){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164));
v___x_3572_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3571_);
return v___x_3572_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166(void){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3573_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165);
v___x_3574_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3575_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3574_);
lean_ctor_set(v___x_3575_, 1, v___x_3573_);
return v___x_3575_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167(void){
_start:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3576_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166);
v___x_3577_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159);
v___x_3578_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154);
v___x_3579_ = lean_unsigned_to_nat(3u);
v___x_3580_ = lean_mk_empty_array_with_capacity(v___x_3579_);
v___x_3581_ = lean_array_push(v___x_3580_, v___x_3578_);
v___x_3582_ = lean_array_push(v___x_3581_, v___x_3577_);
v___x_3583_ = lean_array_push(v___x_3582_, v___x_3576_);
return v___x_3583_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167);
v___x_3585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3584_);
return v___x_3585_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169(void){
_start:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3587_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149);
v___x_3588_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3588_, 0, v___x_3587_);
lean_ctor_set(v___x_3588_, 1, v___x_3586_);
return v___x_3588_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170(void){
_start:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3589_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144);
v___x_3590_ = lean_unsigned_to_nat(2u);
v___x_3591_ = lean_mk_empty_array_with_capacity(v___x_3590_);
v___x_3592_ = lean_array_push(v___x_3591_, v___x_3589_);
return v___x_3592_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171(void){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3593_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169);
v___x_3594_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3595_ = lean_array_push(v___x_3594_, v___x_3593_);
return v___x_3595_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172(void){
_start:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3596_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171);
v___x_3597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
return v___x_3597_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173(void){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3598_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172);
v___x_3599_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3600_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3601_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143));
v___x_3602_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3601_);
lean_ctor_set(v___x_3602_, 1, v___x_3600_);
lean_ctor_set(v___x_3602_, 2, v___x_3599_);
lean_ctor_set(v___x_3602_, 3, v___x_3598_);
return v___x_3602_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175(void){
_start:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3604_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3605_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3606_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3606_, 0, v___x_3605_);
lean_ctor_set(v___x_3606_, 1, v___x_3604_);
return v___x_3606_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176(void){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; 
v___x_3607_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175);
v___x_3608_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3607_);
return v___x_3608_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177(void){
_start:
{
lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___x_3609_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176);
v___x_3610_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3611_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
lean_ctor_set(v___x_3611_, 1, v___x_3609_);
return v___x_3611_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178(void){
_start:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3612_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177);
v___x_3613_ = lean_unsigned_to_nat(1u);
v___x_3614_ = lean_mk_empty_array_with_capacity(v___x_3613_);
v___x_3615_ = lean_array_push(v___x_3614_, v___x_3612_);
return v___x_3615_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179(void){
_start:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3616_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178);
v___x_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3617_, 0, v___x_3616_);
return v___x_3617_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180(void){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3618_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179);
v___x_3619_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3620_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3621_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174));
v___x_3622_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
lean_ctor_set(v___x_3622_, 1, v___x_3620_);
lean_ctor_set(v___x_3622_, 2, v___x_3619_);
lean_ctor_set(v___x_3622_, 3, v___x_3618_);
return v___x_3622_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183(void){
_start:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___x_3625_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3626_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182));
v___x_3627_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3626_);
lean_ctor_set(v___x_3627_, 1, v___x_3625_);
return v___x_3627_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184(void){
_start:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3628_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3629_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3628_);
return v___x_3629_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185(void){
_start:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3630_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184);
v___x_3631_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3632_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3631_);
lean_ctor_set(v___x_3632_, 1, v___x_3630_);
return v___x_3632_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186(void){
_start:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3633_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3634_ = lean_unsigned_to_nat(1u);
v___x_3635_ = lean_mk_empty_array_with_capacity(v___x_3634_);
v___x_3636_ = lean_array_push(v___x_3635_, v___x_3633_);
return v___x_3636_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186);
v___x_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3638_, 0, v___x_3637_);
return v___x_3638_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188(void){
_start:
{
lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; 
v___x_3639_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187);
v___x_3640_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183);
v___x_3641_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3640_);
lean_ctor_set(v___x_3641_, 1, v___x_3639_);
return v___x_3641_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189(void){
_start:
{
lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3642_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188);
v___x_3643_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3644_ = lean_array_push(v___x_3643_, v___x_3642_);
return v___x_3644_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190(void){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3645_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189);
v___x_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3645_);
return v___x_3646_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191(void){
_start:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
v___x_3647_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190);
v___x_3648_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3649_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3650_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181));
v___x_3651_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3650_);
lean_ctor_set(v___x_3651_, 1, v___x_3649_);
lean_ctor_set(v___x_3651_, 2, v___x_3648_);
lean_ctor_set(v___x_3651_, 3, v___x_3647_);
return v___x_3651_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194(void){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3654_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3655_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193));
v___x_3656_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3656_, 0, v___x_3655_);
lean_ctor_set(v___x_3656_, 1, v___x_3654_);
return v___x_3656_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195(void){
_start:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; 
v___x_3657_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194);
v___x_3658_ = lean_unsigned_to_nat(1u);
v___x_3659_ = lean_mk_empty_array_with_capacity(v___x_3658_);
v___x_3660_ = lean_array_push(v___x_3659_, v___x_3657_);
return v___x_3660_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196(void){
_start:
{
lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3661_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195);
v___x_3662_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145));
v___x_3663_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
lean_ctor_set(v___x_3663_, 1, v___x_3661_);
return v___x_3663_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v___x_3664_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187);
v___x_3665_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196);
v___x_3666_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3665_);
lean_ctor_set(v___x_3666_, 1, v___x_3664_);
return v___x_3666_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; 
v___x_3667_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197);
v___x_3668_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3669_ = lean_array_push(v___x_3668_, v___x_3667_);
return v___x_3669_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199(void){
_start:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3670_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198);
v___x_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3670_);
return v___x_3671_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200(void){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3672_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199);
v___x_3673_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3674_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3675_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192));
v___x_3676_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
lean_ctor_set(v___x_3676_, 1, v___x_3674_);
lean_ctor_set(v___x_3676_, 2, v___x_3673_);
lean_ctor_set(v___x_3676_, 3, v___x_3672_);
return v___x_3676_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202(void){
_start:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; 
v___x_3678_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187);
v___x_3679_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147);
v___x_3680_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3679_);
lean_ctor_set(v___x_3680_, 1, v___x_3678_);
return v___x_3680_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203(void){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202);
v___x_3682_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3683_ = lean_array_push(v___x_3682_, v___x_3681_);
return v___x_3683_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204(void){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3684_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203);
v___x_3685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3684_);
return v___x_3685_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205(void){
_start:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3686_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204);
v___x_3687_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3688_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3689_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201));
v___x_3690_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
lean_ctor_set(v___x_3690_, 1, v___x_3688_);
lean_ctor_set(v___x_3690_, 2, v___x_3687_);
lean_ctor_set(v___x_3690_, 3, v___x_3686_);
return v___x_3690_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209(void){
_start:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3699_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_3700_ = lean_unsigned_to_nat(2u);
v___x_3701_ = lean_mk_empty_array_with_capacity(v___x_3700_);
v___x_3702_ = lean_array_push(v___x_3701_, v___x_3699_);
v___x_3703_ = lean_array_push(v___x_3702_, v___x_3699_);
return v___x_3703_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210(void){
_start:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3704_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209);
v___x_3705_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_3706_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
lean_ctor_set(v___x_3706_, 1, v___x_3704_);
return v___x_3706_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211(void){
_start:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3707_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210);
v___x_3708_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
return v___x_3708_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212(void){
_start:
{
lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3709_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211);
v___x_3710_ = lean_unsigned_to_nat(1u);
v___x_3711_ = lean_mk_empty_array_with_capacity(v___x_3710_);
v___x_3712_ = lean_array_push(v___x_3711_, v___x_3709_);
return v___x_3712_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213(void){
_start:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; 
v___x_3713_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212);
v___x_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3714_, 0, v___x_3713_);
return v___x_3714_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214(void){
_start:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3715_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213);
v___x_3716_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208));
v___x_3717_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
lean_ctor_set(v___x_3717_, 1, v___x_3715_);
return v___x_3717_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216(void){
_start:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3719_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3720_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215));
v___x_3721_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
lean_ctor_set(v___x_3721_, 1, v___x_3719_);
return v___x_3721_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217(void){
_start:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; 
v___x_3722_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216);
v___x_3723_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3722_);
return v___x_3723_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218(void){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___x_3724_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217);
v___x_3725_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3726_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3725_);
lean_ctor_set(v___x_3726_, 1, v___x_3724_);
return v___x_3726_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219(void){
_start:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; 
v___x_3727_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214);
v___x_3728_ = lean_unsigned_to_nat(2u);
v___x_3729_ = lean_mk_empty_array_with_capacity(v___x_3728_);
v___x_3730_ = lean_array_push(v___x_3729_, v___x_3727_);
return v___x_3730_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220(void){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3731_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218);
v___x_3732_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219);
v___x_3733_ = lean_array_push(v___x_3732_, v___x_3731_);
return v___x_3733_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221(void){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3734_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220);
v___x_3735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3735_, 0, v___x_3734_);
return v___x_3735_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222(void){
_start:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3736_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221);
v___x_3737_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3738_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3739_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206));
v___x_3740_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3739_);
lean_ctor_set(v___x_3740_, 1, v___x_3738_);
lean_ctor_set(v___x_3740_, 2, v___x_3737_);
lean_ctor_set(v___x_3740_, 3, v___x_3736_);
return v___x_3740_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3743_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3744_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224));
v___x_3745_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
lean_ctor_set(v___x_3745_, 1, v___x_3743_);
return v___x_3745_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226(void){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3746_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225);
v___x_3747_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3746_);
return v___x_3747_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227(void){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3748_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226);
v___x_3749_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3750_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3749_);
lean_ctor_set(v___x_3750_, 1, v___x_3748_);
return v___x_3750_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228(void){
_start:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3751_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227);
v___x_3752_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219);
v___x_3753_ = lean_array_push(v___x_3752_, v___x_3751_);
return v___x_3753_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229(void){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3754_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228);
v___x_3755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3755_, 0, v___x_3754_);
return v___x_3755_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230(void){
_start:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3756_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229);
v___x_3757_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3758_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3759_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223));
v___x_3760_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
lean_ctor_set(v___x_3760_, 1, v___x_3758_);
lean_ctor_set(v___x_3760_, 2, v___x_3757_);
lean_ctor_set(v___x_3760_, 3, v___x_3756_);
return v___x_3760_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232(void){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3762_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3763_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135);
v___x_3764_ = lean_unsigned_to_nat(2u);
v___x_3765_ = lean_mk_empty_array_with_capacity(v___x_3764_);
v___x_3766_ = lean_array_push(v___x_3765_, v___x_3763_);
v___x_3767_ = lean_array_push(v___x_3766_, v___x_3762_);
return v___x_3767_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233(void){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3768_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232);
v___x_3769_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_3770_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
lean_ctor_set(v___x_3770_, 1, v___x_3768_);
return v___x_3770_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234(void){
_start:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3771_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233);
v___x_3772_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3771_);
return v___x_3772_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235(void){
_start:
{
lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___x_3773_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234);
v___x_3774_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3775_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3774_);
lean_ctor_set(v___x_3775_, 1, v___x_3773_);
return v___x_3775_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236(void){
_start:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3776_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235);
v___x_3777_ = lean_unsigned_to_nat(1u);
v___x_3778_ = lean_mk_empty_array_with_capacity(v___x_3777_);
v___x_3779_ = lean_array_push(v___x_3778_, v___x_3776_);
return v___x_3779_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3780_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236);
v___x_3781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3780_);
return v___x_3781_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238(void){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3782_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237);
v___x_3783_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3784_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3785_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231));
v___x_3786_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
lean_ctor_set(v___x_3786_, 1, v___x_3784_);
lean_ctor_set(v___x_3786_, 2, v___x_3783_);
lean_ctor_set(v___x_3786_, 3, v___x_3782_);
return v___x_3786_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240(void){
_start:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; 
v___x_3788_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232);
v___x_3789_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3790_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
lean_ctor_set(v___x_3790_, 1, v___x_3788_);
return v___x_3790_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241(void){
_start:
{
lean_object* v___x_3791_; lean_object* v___x_3792_; 
v___x_3791_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240);
v___x_3792_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3791_);
return v___x_3792_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242(void){
_start:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3793_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241);
v___x_3794_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3795_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
lean_ctor_set(v___x_3795_, 1, v___x_3793_);
return v___x_3795_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243(void){
_start:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3796_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242);
v___x_3797_ = lean_unsigned_to_nat(1u);
v___x_3798_ = lean_mk_empty_array_with_capacity(v___x_3797_);
v___x_3799_ = lean_array_push(v___x_3798_, v___x_3796_);
return v___x_3799_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243);
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
return v___x_3801_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245(void){
_start:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; 
v___x_3802_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244);
v___x_3803_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3804_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3805_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239));
v___x_3806_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3806_, 0, v___x_3805_);
lean_ctor_set(v___x_3806_, 1, v___x_3804_);
lean_ctor_set(v___x_3806_, 2, v___x_3803_);
lean_ctor_set(v___x_3806_, 3, v___x_3802_);
return v___x_3806_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247(void){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3808_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3809_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__108));
v___x_3810_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
lean_ctor_set(v___x_3810_, 1, v___x_3808_);
return v___x_3810_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248(void){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247);
v___x_3812_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3811_);
return v___x_3812_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249(void){
_start:
{
lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3813_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248);
v___x_3814_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3815_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3815_, 0, v___x_3814_);
lean_ctor_set(v___x_3815_, 1, v___x_3813_);
return v___x_3815_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250(void){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3816_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249);
v___x_3817_ = lean_unsigned_to_nat(1u);
v___x_3818_ = lean_mk_empty_array_with_capacity(v___x_3817_);
v___x_3819_ = lean_array_push(v___x_3818_, v___x_3816_);
return v___x_3819_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251(void){
_start:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3820_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250);
v___x_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3820_);
return v___x_3821_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3822_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251);
v___x_3823_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3824_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3825_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246));
v___x_3826_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3825_);
lean_ctor_set(v___x_3826_, 1, v___x_3824_);
lean_ctor_set(v___x_3826_, 2, v___x_3823_);
lean_ctor_set(v___x_3826_, 3, v___x_3822_);
return v___x_3826_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254(void){
_start:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
v___x_3828_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3829_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3830_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3829_);
lean_ctor_set(v___x_3830_, 1, v___x_3828_);
return v___x_3830_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255(void){
_start:
{
lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3831_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254);
v___x_3832_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3831_);
return v___x_3832_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256(void){
_start:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3833_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255);
v___x_3834_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3835_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3834_);
lean_ctor_set(v___x_3835_, 1, v___x_3833_);
return v___x_3835_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257(void){
_start:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; 
v___x_3836_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256);
v___x_3837_ = lean_unsigned_to_nat(1u);
v___x_3838_ = lean_mk_empty_array_with_capacity(v___x_3837_);
v___x_3839_ = lean_array_push(v___x_3838_, v___x_3836_);
return v___x_3839_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258(void){
_start:
{
lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3840_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257);
v___x_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3841_, 0, v___x_3840_);
return v___x_3841_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259(void){
_start:
{
lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3842_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258);
v___x_3843_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3844_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3845_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253));
v___x_3846_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
lean_ctor_set(v___x_3846_, 1, v___x_3844_);
lean_ctor_set(v___x_3846_, 2, v___x_3843_);
lean_ctor_set(v___x_3846_, 3, v___x_3842_);
return v___x_3846_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262(void){
_start:
{
lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3849_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3850_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261));
v___x_3851_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3850_);
lean_ctor_set(v___x_3851_, 1, v___x_3849_);
return v___x_3851_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263(void){
_start:
{
lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3852_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262);
v___x_3853_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3852_);
return v___x_3853_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264(void){
_start:
{
lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3854_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263);
v___x_3855_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3856_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3855_);
lean_ctor_set(v___x_3856_, 1, v___x_3854_);
return v___x_3856_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265(void){
_start:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
v___x_3857_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264);
v___x_3858_ = lean_unsigned_to_nat(1u);
v___x_3859_ = lean_mk_empty_array_with_capacity(v___x_3858_);
v___x_3860_ = lean_array_push(v___x_3859_, v___x_3857_);
return v___x_3860_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266(void){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3861_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265);
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
return v___x_3862_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__267(void){
_start:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; 
v___x_3863_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266);
v___x_3864_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3865_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3866_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260));
v___x_3867_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3866_);
lean_ctor_set(v___x_3867_, 1, v___x_3865_);
lean_ctor_set(v___x_3867_, 2, v___x_3864_);
lean_ctor_set(v___x_3867_, 3, v___x_3863_);
return v___x_3867_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269(void){
_start:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3869_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3870_ = lean_unsigned_to_nat(1u);
v___x_3871_ = lean_mk_empty_array_with_capacity(v___x_3870_);
v___x_3872_ = lean_array_push(v___x_3871_, v___x_3869_);
return v___x_3872_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270(void){
_start:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3873_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132));
v___x_3874_ = lean_unsigned_to_nat(2u);
v___x_3875_ = lean_mk_empty_array_with_capacity(v___x_3874_);
v___x_3876_ = lean_array_push(v___x_3875_, v___x_3873_);
return v___x_3876_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__271(void){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3877_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3878_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270);
v___x_3879_ = lean_array_push(v___x_3878_, v___x_3877_);
return v___x_3879_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272(void){
_start:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3880_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__271, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__271_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__271);
v___x_3881_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3882_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
lean_ctor_set(v___x_3882_, 1, v___x_3880_);
return v___x_3882_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__273(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3883_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272);
v___x_3884_ = lean_unsigned_to_nat(1u);
v___x_3885_ = lean_mk_empty_array_with_capacity(v___x_3884_);
v___x_3886_ = lean_array_push(v___x_3885_, v___x_3883_);
return v___x_3886_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274(void){
_start:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3887_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__273, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__273_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__273);
v___x_3888_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3889_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
lean_ctor_set(v___x_3889_, 1, v___x_3887_);
return v___x_3889_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__275(void){
_start:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; 
v___x_3890_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274);
v___x_3891_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3890_);
return v___x_3891_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__276(void){
_start:
{
lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3892_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__275, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__275_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__275);
v___x_3893_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3894_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3893_);
lean_ctor_set(v___x_3894_, 1, v___x_3892_);
return v___x_3894_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__277(void){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3895_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__276, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__276_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__276);
v___x_3896_ = lean_unsigned_to_nat(1u);
v___x_3897_ = lean_mk_empty_array_with_capacity(v___x_3896_);
v___x_3898_ = lean_array_push(v___x_3897_, v___x_3895_);
return v___x_3898_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__278(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; 
v___x_3899_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__277, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__277_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__277);
v___x_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3899_);
return v___x_3900_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__279(void){
_start:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3901_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__278, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__278_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__278);
v___x_3902_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3903_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269);
v___x_3904_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__268));
v___x_3905_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
lean_ctor_set(v___x_3905_, 1, v___x_3903_);
lean_ctor_set(v___x_3905_, 2, v___x_3902_);
lean_ctor_set(v___x_3905_, 3, v___x_3901_);
return v___x_3905_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__281(void){
_start:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3907_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3908_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130);
v___x_3909_ = lean_array_push(v___x_3908_, v___x_3907_);
return v___x_3909_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__282(void){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3910_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1);
v___x_3911_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270);
v___x_3912_ = lean_array_push(v___x_3911_, v___x_3910_);
return v___x_3912_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__283(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__282, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__282_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__282);
v___x_3914_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3915_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
lean_ctor_set(v___x_3915_, 1, v___x_3913_);
return v___x_3915_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__284(void){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; 
v___x_3916_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3917_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81);
v___x_3918_ = lean_array_push(v___x_3917_, v___x_3916_);
return v___x_3918_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__285(void){
_start:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3919_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__284, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__284_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__284);
v___x_3920_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3921_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3920_);
lean_ctor_set(v___x_3921_, 1, v___x_3919_);
return v___x_3921_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286(void){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3922_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__283, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__283_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__283);
v___x_3923_ = lean_unsigned_to_nat(2u);
v___x_3924_ = lean_mk_empty_array_with_capacity(v___x_3923_);
v___x_3925_ = lean_array_push(v___x_3924_, v___x_3922_);
return v___x_3925_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__287(void){
_start:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
v___x_3926_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__285, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__285_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__285);
v___x_3927_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286);
v___x_3928_ = lean_array_push(v___x_3927_, v___x_3926_);
return v___x_3928_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288(void){
_start:
{
lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; 
v___x_3929_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__287, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__287_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__287);
v___x_3930_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3931_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
lean_ctor_set(v___x_3931_, 1, v___x_3929_);
return v___x_3931_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__289(void){
_start:
{
lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; 
v___x_3932_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288);
v___x_3933_ = lean_unsigned_to_nat(1u);
v___x_3934_ = lean_mk_empty_array_with_capacity(v___x_3933_);
v___x_3935_ = lean_array_push(v___x_3934_, v___x_3932_);
return v___x_3935_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__290(void){
_start:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3936_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__289, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__289_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__289);
v___x_3937_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3938_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
lean_ctor_set(v___x_3938_, 1, v___x_3936_);
return v___x_3938_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__291(void){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__290, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__290_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__290);
v___x_3940_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3941_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
lean_ctor_set(v___x_3941_, 1, v___x_3939_);
return v___x_3941_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__292(void){
_start:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3942_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__291, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__291_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__291);
v___x_3943_ = lean_unsigned_to_nat(1u);
v___x_3944_ = lean_mk_empty_array_with_capacity(v___x_3943_);
v___x_3945_ = lean_array_push(v___x_3944_, v___x_3942_);
return v___x_3945_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__293(void){
_start:
{
lean_object* v___x_3946_; lean_object* v___x_3947_; 
v___x_3946_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__292, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__292_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__292);
v___x_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3946_);
return v___x_3947_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__294(void){
_start:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v___x_3948_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__293, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__293_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__293);
v___x_3949_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3950_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__281, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__281_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__281);
v___x_3951_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__280));
v___x_3952_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
lean_ctor_set(v___x_3952_, 1, v___x_3950_);
lean_ctor_set(v___x_3952_, 2, v___x_3949_);
lean_ctor_set(v___x_3952_, 3, v___x_3948_);
return v___x_3952_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__296(void){
_start:
{
lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; 
v___x_3954_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3955_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3956_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3957_ = lean_unsigned_to_nat(3u);
v___x_3958_ = lean_mk_empty_array_with_capacity(v___x_3957_);
v___x_3959_ = lean_array_push(v___x_3958_, v___x_3956_);
v___x_3960_ = lean_array_push(v___x_3959_, v___x_3955_);
v___x_3961_ = lean_array_push(v___x_3960_, v___x_3954_);
return v___x_3961_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__297(void){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3962_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97));
v___x_3963_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__288);
v___x_3964_ = lean_unsigned_to_nat(2u);
v___x_3965_ = lean_mk_empty_array_with_capacity(v___x_3964_);
v___x_3966_ = lean_array_push(v___x_3965_, v___x_3963_);
v___x_3967_ = lean_array_push(v___x_3966_, v___x_3962_);
return v___x_3967_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__298(void){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
v___x_3968_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__297, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__297_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__297);
v___x_3969_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3970_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3969_);
lean_ctor_set(v___x_3970_, 1, v___x_3968_);
return v___x_3970_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__299(void){
_start:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; 
v___x_3971_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__298, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__298_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__298);
v___x_3972_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3971_);
return v___x_3972_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__300(void){
_start:
{
lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; 
v___x_3973_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__299, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__299_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__299);
v___x_3974_ = lean_unsigned_to_nat(1u);
v___x_3975_ = lean_mk_empty_array_with_capacity(v___x_3974_);
v___x_3976_ = lean_array_push(v___x_3975_, v___x_3973_);
return v___x_3976_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__301(void){
_start:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3977_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__300, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__300_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__300);
v___x_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3977_);
return v___x_3978_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__302(void){
_start:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; 
v___x_3979_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__301, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__301_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__301);
v___x_3980_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96));
v___x_3981_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__296, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__296_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__296);
v___x_3982_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__295));
v___x_3983_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3983_, 0, v___x_3982_);
lean_ctor_set(v___x_3983_, 1, v___x_3981_);
lean_ctor_set(v___x_3983_, 2, v___x_3980_);
lean_ctor_set(v___x_3983_, 3, v___x_3979_);
return v___x_3983_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304(void){
_start:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3985_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3986_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130);
v___x_3987_ = lean_array_push(v___x_3986_, v___x_3985_);
return v___x_3987_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__306(void){
_start:
{
lean_object* v___x_3989_; lean_object* v___x_3990_; 
v___x_3989_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__305));
v___x_3990_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3989_);
return v___x_3990_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__307(void){
_start:
{
lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; 
v___x_3991_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__306, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__306_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__306);
v___x_3992_ = lean_unsigned_to_nat(1u);
v___x_3993_ = lean_mk_empty_array_with_capacity(v___x_3992_);
v___x_3994_ = lean_array_push(v___x_3993_, v___x_3991_);
return v___x_3994_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__308(void){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3995_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__274);
v___x_3996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3996_, 0, v___x_3995_);
return v___x_3996_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__309(void){
_start:
{
lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3997_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__308, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__308_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__308);
v___x_3998_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__307, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__307_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__307);
v___x_3999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3998_);
lean_ctor_set(v___x_3999_, 1, v___x_3997_);
return v___x_3999_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311(void){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4002_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__310));
v___x_4003_ = lean_unsigned_to_nat(2u);
v___x_4004_ = lean_mk_empty_array_with_capacity(v___x_4003_);
v___x_4005_ = lean_array_push(v___x_4004_, v___x_4002_);
return v___x_4005_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__312(void){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4006_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_4007_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311);
v___x_4008_ = lean_array_push(v___x_4007_, v___x_4006_);
return v___x_4008_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__313(void){
_start:
{
lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v___x_4009_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__312, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__312_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__312);
v___x_4010_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_4011_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4011_, 0, v___x_4010_);
lean_ctor_set(v___x_4011_, 1, v___x_4009_);
return v___x_4011_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__314(void){
_start:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4012_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__313, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__313_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__313);
v___x_4013_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__286);
v___x_4014_ = lean_array_push(v___x_4013_, v___x_4012_);
return v___x_4014_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__315(void){
_start:
{
lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4015_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__314, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__314_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__314);
v___x_4016_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_4017_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
lean_ctor_set(v___x_4017_, 1, v___x_4015_);
return v___x_4017_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__316(void){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4018_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97));
v___x_4019_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__315, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__315_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__315);
v___x_4020_ = lean_unsigned_to_nat(2u);
v___x_4021_ = lean_mk_empty_array_with_capacity(v___x_4020_);
v___x_4022_ = lean_array_push(v___x_4021_, v___x_4019_);
v___x_4023_ = lean_array_push(v___x_4022_, v___x_4018_);
return v___x_4023_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__317(void){
_start:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; 
v___x_4024_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__316, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__316_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__316);
v___x_4025_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4026_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4025_);
lean_ctor_set(v___x_4026_, 1, v___x_4024_);
return v___x_4026_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__318(void){
_start:
{
lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4027_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__317, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__317_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__317);
v___x_4028_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4028_, 0, v___x_4027_);
return v___x_4028_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__319(void){
_start:
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
v___x_4029_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_4030_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__311);
v___x_4031_ = lean_array_push(v___x_4030_, v___x_4029_);
return v___x_4031_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__320(void){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; 
v___x_4032_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__319, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__319_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__319);
v___x_4033_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_4034_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4033_);
lean_ctor_set(v___x_4034_, 1, v___x_4032_);
return v___x_4034_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__321(void){
_start:
{
lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4035_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__320, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__320_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__320);
v___x_4036_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__272);
v___x_4037_ = lean_unsigned_to_nat(2u);
v___x_4038_ = lean_mk_empty_array_with_capacity(v___x_4037_);
v___x_4039_ = lean_array_push(v___x_4038_, v___x_4036_);
v___x_4040_ = lean_array_push(v___x_4039_, v___x_4035_);
return v___x_4040_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__322(void){
_start:
{
lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4041_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__321, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__321_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__321);
v___x_4042_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4043_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
lean_ctor_set(v___x_4043_, 1, v___x_4041_);
return v___x_4043_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__323(void){
_start:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; 
v___x_4044_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__322, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__322_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__322);
v___x_4045_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4045_, 0, v___x_4044_);
return v___x_4045_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__325(void){
_start:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4049_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__324));
v___x_4050_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__323, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__323_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__323);
v___x_4051_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__318, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__318_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__318);
v___x_4052_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__309, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__309_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__309);
v___x_4053_ = lean_unsigned_to_nat(4u);
v___x_4054_ = lean_mk_empty_array_with_capacity(v___x_4053_);
v___x_4055_ = lean_array_push(v___x_4054_, v___x_4052_);
v___x_4056_ = lean_array_push(v___x_4055_, v___x_4051_);
v___x_4057_ = lean_array_push(v___x_4056_, v___x_4050_);
v___x_4058_ = lean_array_push(v___x_4057_, v___x_4049_);
return v___x_4058_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__326(void){
_start:
{
lean_object* v___x_4059_; lean_object* v___x_4060_; 
v___x_4059_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__325, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__325_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__325);
v___x_4060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4059_);
return v___x_4060_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__327(void){
_start:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4061_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__326, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__326_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__326);
v___x_4062_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_4063_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304);
v___x_4064_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__303));
v___x_4065_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
lean_ctor_set(v___x_4065_, 1, v___x_4063_);
lean_ctor_set(v___x_4065_, 2, v___x_4062_);
lean_ctor_set(v___x_4065_, 3, v___x_4061_);
return v___x_4065_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__330(void){
_start:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
v___x_4068_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__329));
v___x_4069_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_4068_);
return v___x_4069_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__331(void){
_start:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
v___x_4070_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__330, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__330_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__330);
v___x_4071_ = lean_unsigned_to_nat(1u);
v___x_4072_ = lean_mk_empty_array_with_capacity(v___x_4071_);
v___x_4073_ = lean_array_push(v___x_4072_, v___x_4070_);
return v___x_4073_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__332(void){
_start:
{
lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4074_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0);
v___x_4075_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__331, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__331_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__331);
v___x_4076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4076_, 0, v___x_4075_);
lean_ctor_set(v___x_4076_, 1, v___x_4074_);
return v___x_4076_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__334(void){
_start:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; 
v___x_4079_ = lean_unsigned_to_nat(3u);
v___x_4080_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_4079_);
return v___x_4080_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__335(void){
_start:
{
lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___x_4081_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__334, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__334_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__334);
v___x_4082_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8));
v___x_4083_ = lean_unsigned_to_nat(2u);
v___x_4084_ = lean_mk_empty_array_with_capacity(v___x_4083_);
v___x_4085_ = lean_array_push(v___x_4084_, v___x_4082_);
v___x_4086_ = lean_array_push(v___x_4085_, v___x_4081_);
return v___x_4086_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__336(void){
_start:
{
lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4087_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__335, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__335_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__335);
v___x_4088_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_4089_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
lean_ctor_set(v___x_4089_, 1, v___x_4087_);
return v___x_4089_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__337(void){
_start:
{
lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; 
v___x_4090_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_4091_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__336, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__336_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__336);
v___x_4092_ = lean_unsigned_to_nat(2u);
v___x_4093_ = lean_mk_empty_array_with_capacity(v___x_4092_);
v___x_4094_ = lean_array_push(v___x_4093_, v___x_4091_);
v___x_4095_ = lean_array_push(v___x_4094_, v___x_4090_);
return v___x_4095_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__338(void){
_start:
{
lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; 
v___x_4096_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__337, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__337_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__337);
v___x_4097_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_4098_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4097_);
lean_ctor_set(v___x_4098_, 1, v___x_4096_);
return v___x_4098_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339(void){
_start:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4099_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__333));
v___x_4100_ = lean_unsigned_to_nat(2u);
v___x_4101_ = lean_mk_empty_array_with_capacity(v___x_4100_);
v___x_4102_ = lean_array_push(v___x_4101_, v___x_4099_);
return v___x_4102_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__340(void){
_start:
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4103_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__338, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__338_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__338);
v___x_4104_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339);
v___x_4105_ = lean_array_push(v___x_4104_, v___x_4103_);
return v___x_4105_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__341(void){
_start:
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4106_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__340, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__340_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__340);
v___x_4107_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_4108_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
lean_ctor_set(v___x_4108_, 1, v___x_4106_);
return v___x_4108_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__342(void){
_start:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4109_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__341, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__341_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__341);
v___x_4110_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1);
v___x_4111_ = lean_array_push(v___x_4110_, v___x_4109_);
return v___x_4111_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__343(void){
_start:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4112_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__342, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__342_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__342);
v___x_4113_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4113_);
lean_ctor_set(v___x_4114_, 1, v___x_4112_);
return v___x_4114_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__344(void){
_start:
{
lean_object* v___x_4115_; lean_object* v___x_4116_; 
v___x_4115_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__343, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__343_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__343);
v___x_4116_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4115_);
return v___x_4116_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__345(void){
_start:
{
lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4117_ = lean_unsigned_to_nat(0u);
v___x_4118_ = lean_unsigned_to_nat(248u);
v___x_4119_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___x_4118_, v___x_4117_, v___x_4117_);
return v___x_4119_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__346(void){
_start:
{
lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4120_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__345, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__345_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__345);
v___x_4121_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339);
v___x_4122_ = lean_array_push(v___x_4121_, v___x_4120_);
return v___x_4122_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__347(void){
_start:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4123_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__346, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__346_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__346);
v___x_4124_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4125_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
lean_ctor_set(v___x_4125_, 1, v___x_4123_);
return v___x_4125_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__348(void){
_start:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4126_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__347, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__347_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__347);
v___x_4127_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
return v___x_4127_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__349(void){
_start:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
v___x_4128_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_4129_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339);
v___x_4130_ = lean_array_push(v___x_4129_, v___x_4128_);
return v___x_4130_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__350(void){
_start:
{
lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; 
v___x_4131_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__349, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__349_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__349);
v___x_4132_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_4133_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4133_, 0, v___x_4132_);
lean_ctor_set(v___x_4133_, 1, v___x_4131_);
return v___x_4133_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__351(void){
_start:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; 
v___x_4134_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_4135_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__350, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__350_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__350);
v___x_4136_ = lean_unsigned_to_nat(2u);
v___x_4137_ = lean_mk_empty_array_with_capacity(v___x_4136_);
v___x_4138_ = lean_array_push(v___x_4137_, v___x_4135_);
v___x_4139_ = lean_array_push(v___x_4138_, v___x_4134_);
return v___x_4139_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__352(void){
_start:
{
lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; 
v___x_4140_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__351, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__351_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__351);
v___x_4141_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4142_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4141_);
lean_ctor_set(v___x_4142_, 1, v___x_4140_);
return v___x_4142_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__353(void){
_start:
{
lean_object* v___x_4143_; lean_object* v___x_4144_; 
v___x_4143_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__352, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__352_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__352);
v___x_4144_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4143_);
return v___x_4144_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__354(void){
_start:
{
lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4145_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_4146_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__339);
v___x_4147_ = lean_array_push(v___x_4146_, v___x_4145_);
return v___x_4147_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__355(void){
_start:
{
lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4148_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__354, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__354_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__354);
v___x_4149_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_4150_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4149_);
lean_ctor_set(v___x_4150_, 1, v___x_4148_);
return v___x_4150_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__356(void){
_start:
{
lean_object* v___x_4151_; lean_object* v___x_4152_; 
v___x_4151_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8));
v___x_4152_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_4151_);
return v___x_4152_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__357(void){
_start:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v___x_4153_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__356, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__356_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__356);
v___x_4154_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__355, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__355_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__355);
v___x_4155_ = lean_unsigned_to_nat(2u);
v___x_4156_ = lean_mk_empty_array_with_capacity(v___x_4155_);
v___x_4157_ = lean_array_push(v___x_4156_, v___x_4154_);
v___x_4158_ = lean_array_push(v___x_4157_, v___x_4153_);
return v___x_4158_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__358(void){
_start:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4159_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__357, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__357_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__357);
v___x_4160_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4161_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4161_, 0, v___x_4160_);
lean_ctor_set(v___x_4161_, 1, v___x_4159_);
return v___x_4161_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__359(void){
_start:
{
lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___x_4162_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__358, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__358_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__358);
v___x_4163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4162_);
return v___x_4163_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__361(void){
_start:
{
lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v___x_4167_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__360));
v___x_4168_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__359, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__359_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__359);
v___x_4169_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__353, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__353_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__353);
v___x_4170_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__348, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__348_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__348);
v___x_4171_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__344, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__344_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__344);
v___x_4172_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__332, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__332_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__332);
v___x_4173_ = lean_unsigned_to_nat(6u);
v___x_4174_ = lean_mk_empty_array_with_capacity(v___x_4173_);
v___x_4175_ = lean_array_push(v___x_4174_, v___x_4172_);
v___x_4176_ = lean_array_push(v___x_4175_, v___x_4171_);
v___x_4177_ = lean_array_push(v___x_4176_, v___x_4170_);
v___x_4178_ = lean_array_push(v___x_4177_, v___x_4169_);
v___x_4179_ = lean_array_push(v___x_4178_, v___x_4168_);
v___x_4180_ = lean_array_push(v___x_4179_, v___x_4167_);
return v___x_4180_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__362(void){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__361, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__361_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__361);
v___x_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4182_, 0, v___x_4181_);
return v___x_4182_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__363(void){
_start:
{
lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; 
v___x_4183_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__362, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__362_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__362);
v___x_4184_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_4185_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3);
v___x_4186_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__328));
v___x_4187_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4186_);
lean_ctor_set(v___x_4187_, 1, v___x_4185_);
lean_ctor_set(v___x_4187_, 2, v___x_4184_);
lean_ctor_set(v___x_4187_, 3, v___x_4183_);
return v___x_4187_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__365(void){
_start:
{
lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4189_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7));
v___x_4190_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_4189_);
return v___x_4190_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__366(void){
_start:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; 
v___x_4191_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__365, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__365_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__365);
v___x_4192_ = lean_unsigned_to_nat(1u);
v___x_4193_ = lean_mk_empty_array_with_capacity(v___x_4192_);
v___x_4194_ = lean_array_push(v___x_4193_, v___x_4191_);
return v___x_4194_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__373(void){
_start:
{
lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; 
v___x_4213_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__372));
v___x_4214_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_4215_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__366, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__366_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__366);
v___x_4216_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__364));
v___x_4217_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4216_);
lean_ctor_set(v___x_4217_, 1, v___x_4215_);
lean_ctor_set(v___x_4217_, 2, v___x_4214_);
lean_ctor_set(v___x_4217_, 3, v___x_4213_);
return v___x_4217_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__375(void){
_start:
{
lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
v___x_4219_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97));
v___x_4220_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270);
v___x_4221_ = lean_array_push(v___x_4220_, v___x_4219_);
return v___x_4221_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__376(void){
_start:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; 
v___x_4222_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__375, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__375_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__375);
v___x_4223_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__303));
v___x_4224_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4223_);
lean_ctor_set(v___x_4224_, 1, v___x_4222_);
return v___x_4224_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__377(void){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4225_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__376, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__376_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__376);
v___x_4226_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_4227_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4226_);
lean_ctor_set(v___x_4227_, 1, v___x_4225_);
return v___x_4227_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__378(void){
_start:
{
lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; 
v___x_4228_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__377, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__377_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__377);
v___x_4229_ = lean_unsigned_to_nat(1u);
v___x_4230_ = lean_mk_empty_array_with_capacity(v___x_4229_);
v___x_4231_ = lean_array_push(v___x_4230_, v___x_4228_);
return v___x_4231_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__379(void){
_start:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4232_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__378, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__378_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__378);
v___x_4233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4233_, 0, v___x_4232_);
return v___x_4233_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__380(void){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4234_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__379, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__379_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__379);
v___x_4235_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_4236_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__304);
v___x_4237_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__374));
v___x_4238_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
lean_ctor_set(v___x_4238_, 1, v___x_4236_);
lean_ctor_set(v___x_4238_, 2, v___x_4235_);
lean_ctor_set(v___x_4238_, 3, v___x_4234_);
return v___x_4238_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__387(void){
_start:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4256_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__386));
v___x_4257_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_4258_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__269);
v___x_4259_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__381));
v___x_4260_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
lean_ctor_set(v___x_4260_, 1, v___x_4258_);
lean_ctor_set(v___x_4260_, 2, v___x_4257_);
lean_ctor_set(v___x_4260_, 3, v___x_4256_);
return v___x_4260_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__390(void){
_start:
{
lean_object* v___x_4263_; lean_object* v___x_4264_; 
v___x_4263_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__389));
v___x_4264_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_4263_);
return v___x_4264_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__391(void){
_start:
{
lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; 
v___x_4265_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_4266_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_4267_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__390, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__390_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__390);
v___x_4268_ = lean_unsigned_to_nat(3u);
v___x_4269_ = lean_mk_empty_array_with_capacity(v___x_4268_);
v___x_4270_ = lean_array_push(v___x_4269_, v___x_4267_);
v___x_4271_ = lean_array_push(v___x_4270_, v___x_4266_);
v___x_4272_ = lean_array_push(v___x_4271_, v___x_4265_);
return v___x_4272_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__392(void){
_start:
{
lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4273_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80));
v___x_4274_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_4273_);
return v___x_4274_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__393(void){
_start:
{
lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
v___x_4275_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__392, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__392_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__392);
v___x_4276_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__270);
v___x_4277_ = lean_array_push(v___x_4276_, v___x_4275_);
return v___x_4277_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__394(void){
_start:
{
lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; 
v___x_4278_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__393, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__393_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__393);
v___x_4279_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__280));
v___x_4280_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4279_);
lean_ctor_set(v___x_4280_, 1, v___x_4278_);
return v___x_4280_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__395(void){
_start:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; 
v___x_4281_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__394, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__394_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__394);
v___x_4282_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_4283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4283_, 0, v___x_4282_);
lean_ctor_set(v___x_4283_, 1, v___x_4281_);
return v___x_4283_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__396(void){
_start:
{
lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4284_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__395, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__395_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__395);
v___x_4285_ = lean_unsigned_to_nat(1u);
v___x_4286_ = lean_mk_empty_array_with_capacity(v___x_4285_);
v___x_4287_ = lean_array_push(v___x_4286_, v___x_4284_);
return v___x_4287_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__397(void){
_start:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; 
v___x_4288_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__396, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__396_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__396);
v___x_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4289_, 0, v___x_4288_);
return v___x_4289_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__398(void){
_start:
{
lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v___x_4290_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__397, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__397_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__397);
v___x_4291_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_4292_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__391, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__391_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__391);
v___x_4293_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__388));
v___x_4294_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_4294_, 0, v___x_4293_);
lean_ctor_set(v___x_4294_, 1, v___x_4292_);
lean_ctor_set(v___x_4294_, 2, v___x_4291_);
lean_ctor_set(v___x_4294_, 3, v___x_4290_);
return v___x_4294_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__399(void){
_start:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4295_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__398, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__398_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__398);
v___x_4296_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__387, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__387_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__387);
v___x_4297_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__380, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__380_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__380);
v___x_4298_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__373, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__373_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__373);
v___x_4299_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__363, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__363_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__363);
v___x_4300_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__327, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__327_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__327);
v___x_4301_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__302, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__302_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__302);
v___x_4302_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__294, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__294_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__294);
v___x_4303_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__279, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__279_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__279);
v___x_4304_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__267, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__267_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__267);
v___x_4305_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259);
v___x_4306_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252);
v___x_4307_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245);
v___x_4308_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238);
v___x_4309_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230);
v___x_4310_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222);
v___x_4311_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__205);
v___x_4312_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200);
v___x_4313_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191);
v___x_4314_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180);
v___x_4315_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173);
v___x_4316_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142);
v___x_4317_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124);
v___x_4318_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103);
v___x_4319_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93);
v___x_4320_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70);
v___x_4321_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27);
v___x_4322_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16);
v___x_4323_ = lean_unsigned_to_nat(28u);
v___x_4324_ = lean_mk_empty_array_with_capacity(v___x_4323_);
v___x_4325_ = lean_array_push(v___x_4324_, v___x_4322_);
v___x_4326_ = lean_array_push(v___x_4325_, v___x_4321_);
v___x_4327_ = lean_array_push(v___x_4326_, v___x_4320_);
v___x_4328_ = lean_array_push(v___x_4327_, v___x_4319_);
v___x_4329_ = lean_array_push(v___x_4328_, v___x_4318_);
v___x_4330_ = lean_array_push(v___x_4329_, v___x_4317_);
v___x_4331_ = lean_array_push(v___x_4330_, v___x_4316_);
v___x_4332_ = lean_array_push(v___x_4331_, v___x_4315_);
v___x_4333_ = lean_array_push(v___x_4332_, v___x_4314_);
v___x_4334_ = lean_array_push(v___x_4333_, v___x_4313_);
v___x_4335_ = lean_array_push(v___x_4334_, v___x_4312_);
v___x_4336_ = lean_array_push(v___x_4335_, v___x_4311_);
v___x_4337_ = lean_array_push(v___x_4336_, v___x_4310_);
v___x_4338_ = lean_array_push(v___x_4337_, v___x_4309_);
v___x_4339_ = lean_array_push(v___x_4338_, v___x_4308_);
v___x_4340_ = lean_array_push(v___x_4339_, v___x_4307_);
v___x_4341_ = lean_array_push(v___x_4340_, v___x_4306_);
v___x_4342_ = lean_array_push(v___x_4341_, v___x_4305_);
v___x_4343_ = lean_array_push(v___x_4342_, v___x_4304_);
v___x_4344_ = lean_array_push(v___x_4343_, v___x_4303_);
v___x_4345_ = lean_array_push(v___x_4344_, v___x_4302_);
v___x_4346_ = lean_array_push(v___x_4345_, v___x_4301_);
v___x_4347_ = lean_array_push(v___x_4346_, v___x_4300_);
v___x_4348_ = lean_array_push(v___x_4347_, v___x_4299_);
v___x_4349_ = lean_array_push(v___x_4348_, v___x_4298_);
v___x_4350_ = lean_array_push(v___x_4349_, v___x_4297_);
v___x_4351_ = lean_array_push(v___x_4350_, v___x_4296_);
v___x_4352_ = lean_array_push(v___x_4351_, v___x_4295_);
return v___x_4352_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers(void){
_start:
{
lean_object* v___x_4353_; 
v___x_4353_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__399, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__399_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__399);
return v___x_4353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(lean_object* v_i_4355_){
_start:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v___x_4356_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_4357_ = lean_unsigned_to_nat(4u);
v___x_4358_ = lean_unsigned_to_nat(32u);
v___x_4359_ = lean_nat_mul(v_i_4355_, v___x_4358_);
v___x_4360_ = lean_nat_add(v___x_4357_, v___x_4359_);
lean_dec(v___x_4359_);
v___x_4361_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_4360_);
v___x_4362_ = lean_unsigned_to_nat(1u);
v___x_4363_ = lean_mk_empty_array_with_capacity(v___x_4362_);
v___x_4364_ = lean_array_push(v___x_4363_, v___x_4361_);
v___x_4365_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4356_);
lean_ctor_set(v___x_4365_, 1, v___x_4364_);
v___x_4366_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_4365_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___boxed(lean_object* v_i_4367_){
_start:
{
lean_object* v_res_4368_; 
v_res_4368_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_i_4367_);
lean_dec(v_i_4367_);
return v_res_4368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(size_t v_sz_4369_, size_t v_i_4370_, lean_object* v_bs_4371_){
_start:
{
uint8_t v___x_4372_; 
v___x_4372_ = lean_usize_dec_lt(v_i_4370_, v_sz_4369_);
if (v___x_4372_ == 0)
{
return v_bs_4371_;
}
else
{
lean_object* v_v_4373_; lean_object* v___x_4374_; lean_object* v_bs_x27_4375_; lean_object* v___x_4376_; size_t v___x_4377_; size_t v___x_4378_; lean_object* v___x_4379_; 
v_v_4373_ = lean_array_uget(v_bs_4371_, v_i_4370_);
v___x_4374_ = lean_unsigned_to_nat(0u);
v_bs_x27_4375_ = lean_array_uset(v_bs_4371_, v_i_4370_, v___x_4374_);
v___x_4376_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_v_4373_);
lean_dec(v_v_4373_);
v___x_4377_ = ((size_t)1ULL);
v___x_4378_ = lean_usize_add(v_i_4370_, v___x_4377_);
v___x_4379_ = lean_array_uset(v_bs_x27_4375_, v_i_4370_, v___x_4376_);
v_i_4370_ = v___x_4378_;
v_bs_4371_ = v___x_4379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0___boxed(lean_object* v_sz_4381_, lean_object* v_i_4382_, lean_object* v_bs_4383_){
_start:
{
size_t v_sz_boxed_4384_; size_t v_i_boxed_4385_; lean_object* v_res_4386_; 
v_sz_boxed_4384_ = lean_unbox_usize(v_sz_4381_);
lean_dec(v_sz_4381_);
v_i_boxed_4385_ = lean_unbox_usize(v_i_4382_);
lean_dec(v_i_4382_);
v_res_4386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_boxed_4384_, v_i_boxed_4385_, v_bs_4383_);
return v_res_4386_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2(void){
_start:
{
lean_object* v___x_4389_; lean_object* v___x_4390_; 
v___x_4389_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1));
v___x_4390_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_4389_);
return v___x_4390_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3(void){
_start:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4391_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2);
v___x_4392_ = lean_unsigned_to_nat(1u);
v___x_4393_ = lean_mk_empty_array_with_capacity(v___x_4392_);
v___x_4394_ = lean_array_push(v___x_4393_, v___x_4391_);
return v___x_4394_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5(void){
_start:
{
lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4396_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209);
v___x_4397_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_4398_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4397_);
lean_ctor_set(v___x_4398_, 1, v___x_4396_);
return v___x_4398_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6(void){
_start:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; 
v___x_4399_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5);
v___x_4400_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4400_, 0, v___x_4399_);
return v___x_4400_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8(void){
_start:
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4402_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7));
v___x_4403_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_4402_);
return v___x_4403_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9(void){
_start:
{
lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4404_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8);
v___x_4405_ = lean_unsigned_to_nat(1u);
v___x_4406_ = lean_mk_empty_array_with_capacity(v___x_4405_);
v___x_4407_ = lean_array_push(v___x_4406_, v___x_4404_);
return v___x_4407_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11(void){
_start:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4410_ = lean_unsigned_to_nat(0u);
v___x_4411_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10));
v___x_4412_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v___x_4411_, v___x_4410_);
return v___x_4412_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12(void){
_start:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; 
v___x_4413_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11);
v___x_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4413_);
return v___x_4414_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13(void){
_start:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
v___x_4415_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12);
v___x_4416_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9);
v___x_4417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4416_);
lean_ctor_set(v___x_4417_, 1, v___x_4415_);
return v___x_4417_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15(void){
_start:
{
lean_object* v___x_4420_; lean_object* v___x_4421_; 
v___x_4420_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14));
v___x_4421_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_4420_);
return v___x_4421_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16(void){
_start:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4422_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15);
v___x_4423_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_4424_ = lean_array_push(v___x_4423_, v___x_4422_);
return v___x_4424_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17(void){
_start:
{
lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; 
v___x_4425_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__16);
v___x_4426_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4427_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
lean_ctor_set(v___x_4427_, 1, v___x_4425_);
return v___x_4427_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18(void){
_start:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4428_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__17);
v___x_4429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4429_, 0, v___x_4428_);
return v___x_4429_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19(void){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4430_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_4431_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_4432_ = lean_array_push(v___x_4431_, v___x_4430_);
return v___x_4432_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20(void){
_start:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v___x_4433_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__19);
v___x_4434_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_4435_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4435_, 0, v___x_4434_);
lean_ctor_set(v___x_4435_, 1, v___x_4433_);
return v___x_4435_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21(void){
_start:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4436_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__20);
v___x_4437_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4436_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(size_t v_sz_4438_, size_t v_i_4439_, lean_object* v_bs_4440_){
_start:
{
uint8_t v___x_4441_; 
v___x_4441_ = lean_usize_dec_lt(v_i_4439_, v_sz_4438_);
if (v___x_4441_ == 0)
{
return v_bs_4440_;
}
else
{
lean_object* v_v_4442_; lean_object* v_fnName_4443_; lean_object* v_argCount_4444_; uint8_t v_returnsValue_4445_; lean_object* v___x_4446_; lean_object* v_bs_x27_4447_; lean_object* v___y_4449_; lean_object* v___x_4461_; lean_object* v___x_4462_; size_t v_sz_4463_; size_t v___x_4464_; lean_object* v_argExprs_4465_; lean_object* v_callExpr_4466_; 
v_v_4442_ = lean_array_uget(v_bs_4440_, v_i_4439_);
v_fnName_4443_ = lean_ctor_get(v_v_4442_, 1);
v_argCount_4444_ = lean_ctor_get(v_v_4442_, 2);
v_returnsValue_4445_ = lean_ctor_get_uint8(v_v_4442_, sizeof(void*)*3);
v___x_4446_ = lean_unsigned_to_nat(0u);
v_bs_x27_4447_ = lean_array_uset(v_bs_4440_, v_i_4439_, v___x_4446_);
lean_inc(v_argCount_4444_);
v___x_4461_ = l_List_range(v_argCount_4444_);
v___x_4462_ = lean_array_mk(v___x_4461_);
v_sz_4463_ = lean_array_size(v___x_4462_);
v___x_4464_ = ((size_t)0ULL);
v_argExprs_4465_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_4463_, v___x_4464_, v___x_4462_);
lean_inc_ref(v_fnName_4443_);
v_callExpr_4466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_callExpr_4466_, 0, v_fnName_4443_);
lean_ctor_set(v_callExpr_4466_, 1, v_argExprs_4465_);
if (v_returnsValue_4445_ == 0)
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v___x_4467_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_4468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4468_, 0, v_callExpr_4466_);
v___x_4469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4467_);
lean_ctor_set(v___x_4469_, 1, v___x_4468_);
v___x_4470_ = lean_unsigned_to_nat(2u);
v___x_4471_ = lean_mk_empty_array_with_capacity(v___x_4470_);
v___x_4472_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6);
v___x_4473_ = lean_array_push(v___x_4471_, v___x_4469_);
v___x_4474_ = lean_array_push(v___x_4473_, v___x_4472_);
v___y_4449_ = v___x_4474_;
goto v___jp_4448_;
}
else
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4475_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_4476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4476_, 0, v_callExpr_4466_);
v___x_4477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4477_, 0, v___x_4475_);
lean_ctor_set(v___x_4477_, 1, v___x_4476_);
v___x_4478_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13);
v___x_4479_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__18);
v___x_4480_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__21);
v___x_4481_ = lean_unsigned_to_nat(4u);
v___x_4482_ = lean_mk_empty_array_with_capacity(v___x_4481_);
v___x_4483_ = lean_array_push(v___x_4482_, v___x_4477_);
v___x_4484_ = lean_array_push(v___x_4483_, v___x_4478_);
v___x_4485_ = lean_array_push(v___x_4484_, v___x_4479_);
v___x_4486_ = lean_array_push(v___x_4485_, v___x_4480_);
v___y_4449_ = v___x_4486_;
goto v___jp_4448_;
}
v___jp_4448_:
{
lean_object* v_selector_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; size_t v___x_4457_; size_t v___x_4458_; lean_object* v___x_4459_; 
v_selector_4450_ = lean_ctor_get(v_v_4442_, 0);
lean_inc_ref(v_selector_4450_);
lean_dec(v_v_4442_);
v___x_4451_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0));
v___x_4452_ = lean_string_append(v___x_4451_, v_selector_4450_);
lean_dec_ref(v_selector_4450_);
v___x_4453_ = l_Lean_Compiler_Yul_Literal_hex(v___x_4452_);
v___x_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4453_);
v___x_4455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4455_, 0, v___y_4449_);
v___x_4456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4456_, 0, v___x_4454_);
lean_ctor_set(v___x_4456_, 1, v___x_4455_);
v___x_4457_ = ((size_t)1ULL);
v___x_4458_ = lean_usize_add(v_i_4439_, v___x_4457_);
v___x_4459_ = lean_array_uset(v_bs_x27_4447_, v_i_4439_, v___x_4456_);
v_i_4439_ = v___x_4458_;
v_bs_4440_ = v___x_4459_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___boxed(lean_object* v_sz_4487_, lean_object* v_i_4488_, lean_object* v_bs_4489_){
_start:
{
size_t v_sz_boxed_4490_; size_t v_i_boxed_4491_; lean_object* v_res_4492_; 
v_sz_boxed_4490_ = lean_unbox_usize(v_sz_4487_);
lean_dec(v_sz_4487_);
v_i_boxed_4491_ = lean_unbox_usize(v_i_4488_);
lean_dec(v_i_4488_);
v_res_4492_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_boxed_4490_, v_i_boxed_4491_, v_bs_4489_);
return v_res_4492_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0(void){
_start:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; 
v___x_4493_ = lean_unsigned_to_nat(224u);
v___x_4494_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_4493_);
return v___x_4494_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1(void){
_start:
{
lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; 
v___x_4495_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_4496_ = lean_unsigned_to_nat(1u);
v___x_4497_ = lean_mk_empty_array_with_capacity(v___x_4496_);
v___x_4498_ = lean_array_push(v___x_4497_, v___x_4495_);
return v___x_4498_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2(void){
_start:
{
lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; 
v___x_4499_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1);
v___x_4500_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_4501_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4500_);
lean_ctor_set(v___x_4501_, 1, v___x_4499_);
return v___x_4501_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3(void){
_start:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4502_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2);
v___x_4503_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0);
v___x_4504_ = lean_unsigned_to_nat(2u);
v___x_4505_ = lean_mk_empty_array_with_capacity(v___x_4504_);
v___x_4506_ = lean_array_push(v___x_4505_, v___x_4503_);
v___x_4507_ = lean_array_push(v___x_4506_, v___x_4502_);
return v___x_4507_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4(void){
_start:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v_selExpr_4510_; 
v___x_4508_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3);
v___x_4509_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v_selExpr_4510_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_selExpr_4510_, 0, v___x_4509_);
lean_ctor_set(v_selExpr_4510_, 1, v___x_4508_);
return v_selExpr_4510_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5(void){
_start:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; 
v___x_4511_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211);
v___x_4512_ = lean_unsigned_to_nat(1u);
v___x_4513_ = lean_mk_empty_array_with_capacity(v___x_4512_);
v___x_4514_ = lean_array_push(v___x_4513_, v___x_4511_);
return v___x_4514_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6(void){
_start:
{
lean_object* v___x_4515_; lean_object* v___x_4516_; 
v___x_4515_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5);
v___x_4516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4516_, 0, v___x_4515_);
return v___x_4516_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7(void){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v_defaultCase_4519_; 
v___x_4517_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6);
v___x_4518_ = lean_box(0);
v_defaultCase_4519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_defaultCase_4519_, 0, v___x_4518_);
lean_ctor_set(v_defaultCase_4519_, 1, v___x_4517_);
return v_defaultCase_4519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(lean_object* v_methods_4520_){
_start:
{
lean_object* v_selExpr_4521_; size_t v_sz_4522_; size_t v___x_4523_; lean_object* v_cases_4524_; lean_object* v_defaultCase_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v_selExpr_4521_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4);
v_sz_4522_ = lean_array_size(v_methods_4520_);
v___x_4523_ = ((size_t)0ULL);
v_cases_4524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_4522_, v___x_4523_, v_methods_4520_);
v_defaultCase_4525_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7);
v___x_4526_ = lean_array_push(v_cases_4524_, v_defaultCase_4525_);
v___x_4527_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4527_, 0, v_selExpr_4521_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
return v___x_4527_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(lean_object* v___y_4531_, lean_object* v_snd_4532_, lean_object* v_modName_4533_, lean_object* v_x_4534_, lean_object* v_x_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_){
_start:
{
if (lean_obj_tag(v_x_4534_) == 0)
{
lean_object* v___x_4539_; lean_object* v___x_4540_; 
lean_dec(v_modName_4533_);
lean_dec_ref(v_snd_4532_);
lean_dec_ref(v___y_4531_);
v___x_4539_ = l_List_reverse___redArg(v_x_4535_);
v___x_4540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4539_);
return v___x_4540_;
}
else
{
lean_object* v_head_4541_; lean_object* v_tail_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4571_; 
v_head_4541_ = lean_ctor_get(v_x_4534_, 0);
v_tail_4542_ = lean_ctor_get(v_x_4534_, 1);
v_isSharedCheck_4571_ = !lean_is_exclusive(v_x_4534_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4544_ = v_x_4534_;
v_isShared_4545_ = v_isSharedCheck_4571_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_tail_4542_);
lean_inc(v_head_4541_);
lean_dec(v_x_4534_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4571_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v_a_4547_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; 
v___x_4554_ = ((lean_object*)(l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0));
v___x_4555_ = lean_st_mk_ref(v___x_4554_);
v___x_4556_ = lean_box(1);
v___x_4557_ = lean_box(0);
lean_inc(v_modName_4533_);
lean_inc_ref(v_snd_4532_);
lean_inc_ref(v___y_4531_);
v___x_4558_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4558_, 0, v___y_4531_);
lean_ctor_set(v___x_4558_, 1, v_snd_4532_);
lean_ctor_set(v___x_4558_, 2, v_modName_4533_);
lean_ctor_set(v___x_4558_, 3, v___x_4557_);
lean_ctor_set(v___x_4558_, 4, v___x_4556_);
lean_ctor_set(v___x_4558_, 5, v___x_4556_);
v___x_4559_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_head_4541_, v___x_4558_, v___x_4555_, v___y_4536_, v___y_4537_);
lean_dec_ref_known(v___x_4558_, 6);
if (lean_obj_tag(v___x_4559_) == 0)
{
lean_object* v_a_4560_; lean_object* v___x_4561_; 
v_a_4560_ = lean_ctor_get(v___x_4559_, 0);
lean_inc(v_a_4560_);
lean_dec_ref_known(v___x_4559_, 1);
v___x_4561_ = lean_st_ref_get(v___x_4555_);
lean_dec(v___x_4555_);
lean_dec(v___x_4561_);
v_a_4547_ = v_a_4560_;
goto v___jp_4546_;
}
else
{
lean_dec(v___x_4555_);
if (lean_obj_tag(v___x_4559_) == 0)
{
lean_object* v_a_4562_; 
v_a_4562_ = lean_ctor_get(v___x_4559_, 0);
lean_inc(v_a_4562_);
lean_dec_ref_known(v___x_4559_, 1);
v_a_4547_ = v_a_4562_;
goto v___jp_4546_;
}
else
{
lean_object* v_a_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4570_; 
lean_del_object(v___x_4544_);
lean_dec(v_tail_4542_);
lean_dec(v_x_4535_);
lean_dec(v_modName_4533_);
lean_dec_ref(v_snd_4532_);
lean_dec_ref(v___y_4531_);
v_a_4563_ = lean_ctor_get(v___x_4559_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4559_);
if (v_isSharedCheck_4570_ == 0)
{
v___x_4565_ = v___x_4559_;
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_a_4563_);
lean_dec(v___x_4559_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4570_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4568_; 
if (v_isShared_4566_ == 0)
{
v___x_4568_ = v___x_4565_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4569_; 
v_reuseFailAlloc_4569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4569_, 0, v_a_4563_);
v___x_4568_ = v_reuseFailAlloc_4569_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
return v___x_4568_;
}
}
}
}
v___jp_4546_:
{
if (lean_obj_tag(v_a_4547_) == 0)
{
lean_del_object(v___x_4544_);
v_x_4534_ = v_tail_4542_;
goto _start;
}
else
{
lean_object* v_val_4549_; lean_object* v___x_4551_; 
v_val_4549_ = lean_ctor_get(v_a_4547_, 0);
lean_inc(v_val_4549_);
lean_dec_ref_known(v_a_4547_, 1);
if (v_isShared_4545_ == 0)
{
lean_ctor_set(v___x_4544_, 1, v_x_4535_);
lean_ctor_set(v___x_4544_, 0, v_val_4549_);
v___x_4551_ = v___x_4544_;
goto v_reusejp_4550_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_val_4549_);
lean_ctor_set(v_reuseFailAlloc_4553_, 1, v_x_4535_);
v___x_4551_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4550_;
}
v_reusejp_4550_:
{
v_x_4534_ = v_tail_4542_;
v_x_4535_ = v___x_4551_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___boxed(lean_object* v___y_4572_, lean_object* v_snd_4573_, lean_object* v_modName_4574_, lean_object* v_x_4575_, lean_object* v_x_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_){
_start:
{
lean_object* v_res_4580_; 
v_res_4580_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4572_, v_snd_4573_, v_modName_4574_, v_x_4575_, v_x_4576_, v___y_4577_, v___y_4578_);
lean_dec(v___y_4578_);
lean_dec_ref(v___y_4577_);
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(lean_object* v_msg_4581_){
_start:
{
lean_object* v___x_4582_; lean_object* v___x_4583_; 
v___x_4582_ = lean_unsigned_to_nat(0u);
v___x_4583_ = lean_panic_fn_borrowed(v___x_4582_, v_msg_4581_);
return v___x_4583_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4587_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2));
v___x_4588_ = lean_unsigned_to_nat(11u);
v___x_4589_ = lean_unsigned_to_nat(163u);
v___x_4590_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1));
v___x_4591_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0));
v___x_4592_ = l_mkPanicMessageWithDecl(v___x_4591_, v___x_4590_, v___x_4589_, v___x_4588_, v___x_4587_);
return v___x_4592_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(lean_object* v_a_4593_, lean_object* v_x_4594_){
_start:
{
if (lean_obj_tag(v_x_4594_) == 0)
{
lean_object* v___x_4595_; lean_object* v___x_4596_; 
v___x_4595_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3);
v___x_4596_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(v___x_4595_);
return v___x_4596_;
}
else
{
lean_object* v_key_4597_; lean_object* v_value_4598_; lean_object* v_tail_4599_; uint8_t v___x_4600_; 
v_key_4597_ = lean_ctor_get(v_x_4594_, 0);
v_value_4598_ = lean_ctor_get(v_x_4594_, 1);
v_tail_4599_ = lean_ctor_get(v_x_4594_, 2);
v___x_4600_ = lean_name_eq(v_key_4597_, v_a_4593_);
if (v___x_4600_ == 0)
{
v_x_4594_ = v_tail_4599_;
goto _start;
}
else
{
lean_inc(v_value_4598_);
return v_value_4598_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___boxed(lean_object* v_a_4602_, lean_object* v_x_4603_){
_start:
{
lean_object* v_res_4604_; 
v_res_4604_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_4602_, v_x_4603_);
lean_dec(v_x_4603_);
lean_dec(v_a_4602_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(lean_object* v_m_4605_, lean_object* v_a_4606_){
_start:
{
lean_object* v_buckets_4607_; lean_object* v___x_4608_; uint64_t v___y_4610_; 
v_buckets_4607_ = lean_ctor_get(v_m_4605_, 1);
v___x_4608_ = lean_array_get_size(v_buckets_4607_);
if (lean_obj_tag(v_a_4606_) == 0)
{
uint64_t v___x_4624_; 
v___x_4624_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_4610_ = v___x_4624_;
goto v___jp_4609_;
}
else
{
uint64_t v_hash_4625_; 
v_hash_4625_ = lean_ctor_get_uint64(v_a_4606_, sizeof(void*)*2);
v___y_4610_ = v_hash_4625_;
goto v___jp_4609_;
}
v___jp_4609_:
{
uint64_t v___x_4611_; uint64_t v___x_4612_; uint64_t v_fold_4613_; uint64_t v___x_4614_; uint64_t v___x_4615_; uint64_t v___x_4616_; size_t v___x_4617_; size_t v___x_4618_; size_t v___x_4619_; size_t v___x_4620_; size_t v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4611_ = 32ULL;
v___x_4612_ = lean_uint64_shift_right(v___y_4610_, v___x_4611_);
v_fold_4613_ = lean_uint64_xor(v___y_4610_, v___x_4612_);
v___x_4614_ = 16ULL;
v___x_4615_ = lean_uint64_shift_right(v_fold_4613_, v___x_4614_);
v___x_4616_ = lean_uint64_xor(v_fold_4613_, v___x_4615_);
v___x_4617_ = lean_uint64_to_usize(v___x_4616_);
v___x_4618_ = lean_usize_of_nat(v___x_4608_);
v___x_4619_ = ((size_t)1ULL);
v___x_4620_ = lean_usize_sub(v___x_4618_, v___x_4619_);
v___x_4621_ = lean_usize_land(v___x_4617_, v___x_4620_);
v___x_4622_ = lean_array_uget_borrowed(v_buckets_4607_, v___x_4621_);
v___x_4623_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_4606_, v___x_4622_);
return v___x_4623_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1___boxed(lean_object* v_m_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v_m_4626_, v_a_4627_);
lean_dec(v_a_4627_);
lean_dec_ref(v_m_4626_);
return v_res_4628_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(lean_object* v___x_4629_, lean_object* v_l_4630_, lean_object* v_r_4631_){
_start:
{
lean_object* v_toSignature_4632_; lean_object* v_toSignature_4633_; lean_object* v_name_4634_; lean_object* v_name_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; uint8_t v___x_4638_; 
v_toSignature_4632_ = lean_ctor_get(v_l_4630_, 0);
v_toSignature_4633_ = lean_ctor_get(v_r_4631_, 0);
v_name_4634_ = lean_ctor_get(v_toSignature_4632_, 0);
v_name_4635_ = lean_ctor_get(v_toSignature_4633_, 0);
v___x_4636_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4629_, v_name_4634_);
v___x_4637_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4629_, v_name_4635_);
v___x_4638_ = lean_nat_dec_lt(v___x_4636_, v___x_4637_);
lean_dec(v___x_4637_);
lean_dec(v___x_4636_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0___boxed(lean_object* v___x_4639_, lean_object* v_l_4640_, lean_object* v_r_4641_){
_start:
{
uint8_t v_res_4642_; lean_object* v_r_4643_; 
v_res_4642_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4639_, v_l_4640_, v_r_4641_);
lean_dec_ref(v_r_4641_);
lean_dec_ref(v_l_4640_);
lean_dec_ref(v___x_4639_);
v_r_4643_ = lean_box(v_res_4642_);
return v_r_4643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(lean_object* v___x_4644_, lean_object* v_hi_4645_, lean_object* v_pivot_4646_, lean_object* v_as_4647_, lean_object* v_i_4648_, lean_object* v_k_4649_){
_start:
{
uint8_t v___x_4650_; 
v___x_4650_ = lean_nat_dec_lt(v_k_4649_, v_hi_4645_);
if (v___x_4650_ == 0)
{
lean_object* v___x_4651_; lean_object* v___x_4652_; 
lean_dec(v_k_4649_);
v___x_4651_ = lean_array_fswap(v_as_4647_, v_i_4648_, v_hi_4645_);
v___x_4652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4652_, 0, v_i_4648_);
lean_ctor_set(v___x_4652_, 1, v___x_4651_);
return v___x_4652_;
}
else
{
lean_object* v___x_4653_; lean_object* v_toSignature_4654_; lean_object* v_toSignature_4655_; lean_object* v_name_4656_; lean_object* v_name_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; uint8_t v___x_4660_; 
v___x_4653_ = lean_array_fget_borrowed(v_as_4647_, v_k_4649_);
v_toSignature_4654_ = lean_ctor_get(v___x_4653_, 0);
v_toSignature_4655_ = lean_ctor_get(v_pivot_4646_, 0);
v_name_4656_ = lean_ctor_get(v_toSignature_4654_, 0);
v_name_4657_ = lean_ctor_get(v_toSignature_4655_, 0);
v___x_4658_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4644_, v_name_4656_);
v___x_4659_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4644_, v_name_4657_);
v___x_4660_ = lean_nat_dec_lt(v___x_4658_, v___x_4659_);
lean_dec(v___x_4659_);
lean_dec(v___x_4658_);
if (v___x_4660_ == 0)
{
lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4661_ = lean_unsigned_to_nat(1u);
v___x_4662_ = lean_nat_add(v_k_4649_, v___x_4661_);
lean_dec(v_k_4649_);
v_k_4649_ = v___x_4662_;
goto _start;
}
else
{
lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___x_4664_ = lean_array_fswap(v_as_4647_, v_i_4648_, v_k_4649_);
v___x_4665_ = lean_unsigned_to_nat(1u);
v___x_4666_ = lean_nat_add(v_i_4648_, v___x_4665_);
lean_dec(v_i_4648_);
v___x_4667_ = lean_nat_add(v_k_4649_, v___x_4665_);
lean_dec(v_k_4649_);
v_as_4647_ = v___x_4664_;
v_i_4648_ = v___x_4666_;
v_k_4649_ = v___x_4667_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg___boxed(lean_object* v___x_4669_, lean_object* v_hi_4670_, lean_object* v_pivot_4671_, lean_object* v_as_4672_, lean_object* v_i_4673_, lean_object* v_k_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4669_, v_hi_4670_, v_pivot_4671_, v_as_4672_, v_i_4673_, v_k_4674_);
lean_dec_ref(v_pivot_4671_);
lean_dec(v_hi_4670_);
lean_dec_ref(v___x_4669_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(lean_object* v___x_4676_, lean_object* v_n_4677_, lean_object* v_as_4678_, lean_object* v_lo_4679_, lean_object* v_hi_4680_){
_start:
{
lean_object* v___y_4682_; uint8_t v___x_4692_; 
v___x_4692_ = lean_nat_dec_lt(v_lo_4679_, v_hi_4680_);
if (v___x_4692_ == 0)
{
lean_dec(v_lo_4679_);
return v_as_4678_;
}
else
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v_mid_4695_; lean_object* v___y_4697_; lean_object* v___y_4703_; lean_object* v___x_4708_; lean_object* v___x_4709_; uint8_t v___x_4710_; 
v___x_4693_ = lean_nat_add(v_lo_4679_, v_hi_4680_);
v___x_4694_ = lean_unsigned_to_nat(1u);
v_mid_4695_ = lean_nat_shiftr(v___x_4693_, v___x_4694_);
lean_dec(v___x_4693_);
v___x_4708_ = lean_array_fget_borrowed(v_as_4678_, v_mid_4695_);
v___x_4709_ = lean_array_fget_borrowed(v_as_4678_, v_lo_4679_);
v___x_4710_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4676_, v___x_4708_, v___x_4709_);
if (v___x_4710_ == 0)
{
v___y_4703_ = v_as_4678_;
goto v___jp_4702_;
}
else
{
lean_object* v___x_4711_; 
v___x_4711_ = lean_array_fswap(v_as_4678_, v_lo_4679_, v_mid_4695_);
v___y_4703_ = v___x_4711_;
goto v___jp_4702_;
}
v___jp_4696_:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; uint8_t v___x_4700_; 
v___x_4698_ = lean_array_fget_borrowed(v___y_4697_, v_mid_4695_);
v___x_4699_ = lean_array_fget_borrowed(v___y_4697_, v_hi_4680_);
v___x_4700_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4676_, v___x_4698_, v___x_4699_);
if (v___x_4700_ == 0)
{
lean_dec(v_mid_4695_);
v___y_4682_ = v___y_4697_;
goto v___jp_4681_;
}
else
{
lean_object* v___x_4701_; 
v___x_4701_ = lean_array_fswap(v___y_4697_, v_mid_4695_, v_hi_4680_);
lean_dec(v_mid_4695_);
v___y_4682_ = v___x_4701_;
goto v___jp_4681_;
}
}
v___jp_4702_:
{
lean_object* v___x_4704_; lean_object* v___x_4705_; uint8_t v___x_4706_; 
v___x_4704_ = lean_array_fget_borrowed(v___y_4703_, v_hi_4680_);
v___x_4705_ = lean_array_fget_borrowed(v___y_4703_, v_lo_4679_);
v___x_4706_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4676_, v___x_4704_, v___x_4705_);
if (v___x_4706_ == 0)
{
v___y_4697_ = v___y_4703_;
goto v___jp_4696_;
}
else
{
lean_object* v___x_4707_; 
v___x_4707_ = lean_array_fswap(v___y_4703_, v_lo_4679_, v_hi_4680_);
v___y_4697_ = v___x_4707_;
goto v___jp_4696_;
}
}
}
v___jp_4681_:
{
lean_object* v_pivot_4683_; lean_object* v___x_4684_; lean_object* v_fst_4685_; lean_object* v_snd_4686_; uint8_t v___x_4687_; 
v_pivot_4683_ = lean_array_fget(v___y_4682_, v_hi_4680_);
lean_inc_n(v_lo_4679_, 2);
v___x_4684_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4676_, v_hi_4680_, v_pivot_4683_, v___y_4682_, v_lo_4679_, v_lo_4679_);
lean_dec(v_pivot_4683_);
v_fst_4685_ = lean_ctor_get(v___x_4684_, 0);
lean_inc(v_fst_4685_);
v_snd_4686_ = lean_ctor_get(v___x_4684_, 1);
lean_inc(v_snd_4686_);
lean_dec_ref(v___x_4684_);
v___x_4687_ = lean_nat_dec_le(v_hi_4680_, v_fst_4685_);
if (v___x_4687_ == 0)
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4688_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4676_, v_n_4677_, v_snd_4686_, v_lo_4679_, v_fst_4685_);
v___x_4689_ = lean_unsigned_to_nat(1u);
v___x_4690_ = lean_nat_add(v_fst_4685_, v___x_4689_);
lean_dec(v_fst_4685_);
v_as_4678_ = v___x_4688_;
v_lo_4679_ = v___x_4690_;
goto _start;
}
else
{
lean_dec(v_fst_4685_);
lean_dec(v_lo_4679_);
return v_snd_4686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___boxed(lean_object* v___x_4712_, lean_object* v_n_4713_, lean_object* v_as_4714_, lean_object* v_lo_4715_, lean_object* v_hi_4716_){
_start:
{
lean_object* v_res_4717_; 
v_res_4717_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4712_, v_n_4713_, v_as_4714_, v_lo_4715_, v_hi_4716_);
lean_dec(v_hi_4716_);
lean_dec(v_n_4713_);
lean_dec_ref(v___x_4712_);
return v_res_4717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(lean_object* v_modName_4721_, lean_object* v_decls_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_){
_start:
{
lean_object* v___x_4726_; 
v___x_4726_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_decls_4722_, v_a_4723_, v_a_4724_);
if (lean_obj_tag(v___x_4726_) == 0)
{
lean_object* v_a_4727_; lean_object* v_fst_4728_; lean_object* v_snd_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___y_4733_; lean_object* v___x_4761_; uint8_t v___x_4762_; 
v_a_4727_ = lean_ctor_get(v___x_4726_, 0);
lean_inc(v_a_4727_);
lean_dec_ref_known(v___x_4726_, 1);
v_fst_4728_ = lean_ctor_get(v_a_4727_, 0);
lean_inc(v_fst_4728_);
v_snd_4729_ = lean_ctor_get(v_a_4727_, 1);
lean_inc(v_snd_4729_);
lean_dec(v_a_4727_);
v___x_4730_ = lean_st_ref_get(v_a_4724_);
v___x_4731_ = lean_unsigned_to_nat(0u);
v___x_4761_ = lean_array_get_size(v_fst_4728_);
v___x_4762_ = lean_nat_dec_eq(v___x_4761_, v___x_4731_);
if (v___x_4762_ == 0)
{
lean_object* v_env_4763_; lean_object* v___x_4764_; lean_object* v___y_4766_; lean_object* v___y_4767_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___y_4772_; uint8_t v___x_4774_; 
v_env_4763_ = lean_ctor_get(v___x_4730_, 0);
lean_inc_ref(v_env_4763_);
lean_dec(v___x_4730_);
v___x_4764_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_4763_, v_decls_4722_);
v___x_4769_ = lean_unsigned_to_nat(1u);
v___x_4770_ = lean_nat_sub(v___x_4761_, v___x_4769_);
v___x_4774_ = lean_nat_dec_le(v___x_4731_, v___x_4770_);
if (v___x_4774_ == 0)
{
lean_inc(v___x_4770_);
v___y_4772_ = v___x_4770_;
goto v___jp_4771_;
}
else
{
v___y_4772_ = v___x_4731_;
goto v___jp_4771_;
}
v___jp_4765_:
{
lean_object* v___x_4768_; 
v___x_4768_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4764_, v___x_4761_, v_fst_4728_, v___y_4766_, v___y_4767_);
lean_dec(v___y_4767_);
lean_dec_ref(v___x_4764_);
v___y_4733_ = v___x_4768_;
goto v___jp_4732_;
}
v___jp_4771_:
{
uint8_t v___x_4773_; 
v___x_4773_ = lean_nat_dec_le(v___y_4772_, v___x_4770_);
if (v___x_4773_ == 0)
{
lean_dec(v___x_4770_);
lean_inc(v___y_4772_);
v___y_4766_ = v___y_4772_;
v___y_4767_ = v___y_4772_;
goto v___jp_4765_;
}
else
{
v___y_4766_ = v___y_4772_;
v___y_4767_ = v___x_4770_;
goto v___jp_4765_;
}
}
}
else
{
lean_dec(v___x_4730_);
v___y_4733_ = v_fst_4728_;
goto v___jp_4732_;
}
v___jp_4732_:
{
lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; 
lean_inc_ref(v___y_4733_);
v___x_4734_ = lean_array_to_list(v___y_4733_);
v___x_4735_ = lean_box(0);
v___x_4736_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4733_, v_snd_4729_, v_modName_4721_, v___x_4734_, v___x_4735_, v_a_4723_, v_a_4724_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v_a_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4752_; 
v_a_4737_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4752_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4752_ == 0)
{
v___x_4739_ = v___x_4736_;
v_isShared_4740_ = v_isSharedCheck_4752_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_a_4737_);
lean_dec(v___x_4736_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4752_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4750_; 
v___x_4741_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_4742_ = lean_array_mk(v_a_4737_);
v___x_4743_ = l_Array_append___redArg(v___x_4741_, v___x_4742_);
lean_dec_ref(v___x_4742_);
v___x_4744_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_4745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4745_, 0, v___x_4743_);
v___x_4746_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_4747_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4744_);
lean_ctor_set(v___x_4747_, 1, v___x_4745_);
lean_ctor_set(v___x_4747_, 2, v___x_4746_);
lean_ctor_set(v___x_4747_, 3, v___x_4746_);
v___x_4748_ = l_Lean_Compiler_Yul_Printer_render(v___x_4747_);
lean_dec_ref_known(v___x_4747_, 4);
if (v_isShared_4740_ == 0)
{
lean_ctor_set(v___x_4739_, 0, v___x_4748_);
v___x_4750_ = v___x_4739_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v___x_4748_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
return v___x_4750_;
}
}
}
else
{
lean_object* v_a_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4760_; 
v_a_4753_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4760_ == 0)
{
v___x_4755_ = v___x_4736_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_a_4753_);
lean_dec(v___x_4736_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4758_; 
if (v_isShared_4756_ == 0)
{
v___x_4758_ = v___x_4755_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v_a_4753_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
return v___x_4758_;
}
}
}
}
}
else
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4782_; 
lean_dec(v_modName_4721_);
v_a_4775_ = lean_ctor_get(v___x_4726_, 0);
v_isSharedCheck_4782_ = !lean_is_exclusive(v___x_4726_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4777_ = v___x_4726_;
v_isShared_4778_ = v_isSharedCheck_4782_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v___x_4726_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4782_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4780_; 
if (v_isShared_4778_ == 0)
{
v___x_4780_ = v___x_4777_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4781_; 
v_reuseFailAlloc_4781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4781_, 0, v_a_4775_);
v___x_4780_ = v_reuseFailAlloc_4781_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
return v___x_4780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___boxed(lean_object* v_modName_4783_, lean_object* v_decls_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_){
_start:
{
lean_object* v_res_4788_; 
v_res_4788_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_4783_, v_decls_4784_, v_a_4785_, v_a_4786_);
lean_dec(v_a_4786_);
lean_dec_ref(v_a_4785_);
lean_dec_ref(v_decls_4784_);
return v_res_4788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(lean_object* v___x_4789_, lean_object* v_n_4790_, lean_object* v_as_4791_, lean_object* v_lo_4792_, lean_object* v_hi_4793_, lean_object* v_w_4794_, lean_object* v_hlo_4795_, lean_object* v_hhi_4796_){
_start:
{
lean_object* v___x_4797_; 
v___x_4797_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4789_, v_n_4790_, v_as_4791_, v_lo_4792_, v_hi_4793_);
return v___x_4797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___boxed(lean_object* v___x_4798_, lean_object* v_n_4799_, lean_object* v_as_4800_, lean_object* v_lo_4801_, lean_object* v_hi_4802_, lean_object* v_w_4803_, lean_object* v_hlo_4804_, lean_object* v_hhi_4805_){
_start:
{
lean_object* v_res_4806_; 
v_res_4806_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(v___x_4798_, v_n_4799_, v_as_4800_, v_lo_4801_, v_hi_4802_, v_w_4803_, v_hlo_4804_, v_hhi_4805_);
lean_dec(v_hi_4802_);
lean_dec(v_n_4799_);
lean_dec_ref(v___x_4798_);
return v_res_4806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(lean_object* v___x_4807_, lean_object* v_n_4808_, lean_object* v_lo_4809_, lean_object* v_hi_4810_, lean_object* v_hhi_4811_, lean_object* v_pivot_4812_, lean_object* v_as_4813_, lean_object* v_i_4814_, lean_object* v_k_4815_, lean_object* v_ilo_4816_, lean_object* v_ik_4817_, lean_object* v_w_4818_){
_start:
{
lean_object* v___x_4819_; 
v___x_4819_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4807_, v_hi_4810_, v_pivot_4812_, v_as_4813_, v_i_4814_, v_k_4815_);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___boxed(lean_object* v___x_4820_, lean_object* v_n_4821_, lean_object* v_lo_4822_, lean_object* v_hi_4823_, lean_object* v_hhi_4824_, lean_object* v_pivot_4825_, lean_object* v_as_4826_, lean_object* v_i_4827_, lean_object* v_k_4828_, lean_object* v_ilo_4829_, lean_object* v_ik_4830_, lean_object* v_w_4831_){
_start:
{
lean_object* v_res_4832_; 
v_res_4832_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(v___x_4820_, v_n_4821_, v_lo_4822_, v_hi_4823_, v_hhi_4824_, v_pivot_4825_, v_as_4826_, v_i_4827_, v_k_4828_, v_ilo_4829_, v_ik_4830_, v_w_4831_);
lean_dec_ref(v_pivot_4825_);
lean_dec(v_hi_4823_);
lean_dec(v_lo_4822_);
lean_dec(v_n_4821_);
lean_dec_ref(v___x_4820_);
return v_res_4832_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0(void){
_start:
{
lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4833_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2);
v___x_4834_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_4835_ = lean_unsigned_to_nat(2u);
v___x_4836_ = lean_mk_empty_array_with_capacity(v___x_4835_);
v___x_4837_ = lean_array_push(v___x_4836_, v___x_4834_);
v___x_4838_ = lean_array_push(v___x_4837_, v___x_4833_);
return v___x_4838_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1(void){
_start:
{
lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4839_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0);
v___x_4840_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4841_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4841_, 0, v___x_4840_);
lean_ctor_set(v___x_4841_, 1, v___x_4839_);
return v___x_4841_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2(void){
_start:
{
lean_object* v___x_4842_; lean_object* v___x_4843_; 
v___x_4842_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1);
v___x_4843_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4843_, 0, v___x_4842_);
return v___x_4843_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3(void){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; 
v___x_4844_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2);
v___x_4845_ = lean_unsigned_to_nat(2u);
v___x_4846_ = lean_mk_empty_array_with_capacity(v___x_4845_);
v___x_4847_ = lean_array_push(v___x_4846_, v___x_4844_);
return v___x_4847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract(lean_object* v_modName_4848_, lean_object* v_methods_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_){
_start:
{
lean_object* v___x_4853_; 
v___x_4853_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4851_);
if (lean_obj_tag(v___x_4853_) == 0)
{
lean_object* v_a_4854_; lean_object* v___x_4855_; 
v_a_4854_ = lean_ctor_get(v___x_4853_, 0);
lean_inc(v_a_4854_);
lean_dec_ref_known(v___x_4853_, 1);
v___x_4855_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_a_4854_, v_a_4850_, v_a_4851_);
lean_dec(v_a_4854_);
if (lean_obj_tag(v___x_4855_) == 0)
{
lean_object* v_a_4856_; lean_object* v_fst_4857_; lean_object* v_snd_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; 
v_a_4856_ = lean_ctor_get(v___x_4855_, 0);
lean_inc(v_a_4856_);
lean_dec_ref_known(v___x_4855_, 1);
v_fst_4857_ = lean_ctor_get(v_a_4856_, 0);
lean_inc(v_fst_4857_);
v_snd_4858_ = lean_ctor_get(v_a_4856_, 1);
lean_inc(v_snd_4858_);
lean_dec(v_a_4856_);
v___x_4859_ = lean_st_ref_get(v_a_4851_);
v___x_4860_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4851_);
if (lean_obj_tag(v___x_4860_) == 0)
{
lean_object* v_a_4861_; lean_object* v___x_4862_; lean_object* v___y_4864_; lean_object* v___x_4896_; uint8_t v___x_4897_; 
v_a_4861_ = lean_ctor_get(v___x_4860_, 0);
lean_inc(v_a_4861_);
lean_dec_ref_known(v___x_4860_, 1);
v___x_4862_ = lean_unsigned_to_nat(0u);
v___x_4896_ = lean_array_get_size(v_fst_4857_);
v___x_4897_ = lean_nat_dec_eq(v___x_4896_, v___x_4862_);
if (v___x_4897_ == 0)
{
lean_object* v_env_4898_; lean_object* v___x_4899_; lean_object* v___y_4901_; lean_object* v___y_4902_; lean_object* v___x_4904_; lean_object* v___x_4905_; lean_object* v___y_4907_; uint8_t v___x_4909_; 
v_env_4898_ = lean_ctor_get(v___x_4859_, 0);
lean_inc_ref(v_env_4898_);
lean_dec(v___x_4859_);
v___x_4899_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_4898_, v_a_4861_);
lean_dec(v_a_4861_);
v___x_4904_ = lean_unsigned_to_nat(1u);
v___x_4905_ = lean_nat_sub(v___x_4896_, v___x_4904_);
v___x_4909_ = lean_nat_dec_le(v___x_4862_, v___x_4905_);
if (v___x_4909_ == 0)
{
lean_inc(v___x_4905_);
v___y_4907_ = v___x_4905_;
goto v___jp_4906_;
}
else
{
v___y_4907_ = v___x_4862_;
goto v___jp_4906_;
}
v___jp_4900_:
{
lean_object* v___x_4903_; 
v___x_4903_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4899_, v___x_4896_, v_fst_4857_, v___y_4901_, v___y_4902_);
lean_dec(v___y_4902_);
lean_dec_ref(v___x_4899_);
v___y_4864_ = v___x_4903_;
goto v___jp_4863_;
}
v___jp_4906_:
{
uint8_t v___x_4908_; 
v___x_4908_ = lean_nat_dec_le(v___y_4907_, v___x_4905_);
if (v___x_4908_ == 0)
{
lean_dec(v___x_4905_);
lean_inc(v___y_4907_);
v___y_4901_ = v___y_4907_;
v___y_4902_ = v___y_4907_;
goto v___jp_4900_;
}
else
{
v___y_4901_ = v___y_4907_;
v___y_4902_ = v___x_4905_;
goto v___jp_4900_;
}
}
}
else
{
lean_dec(v_a_4861_);
lean_dec(v___x_4859_);
v___y_4864_ = v_fst_4857_;
goto v___jp_4863_;
}
v___jp_4863_:
{
lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; 
lean_inc_ref(v___y_4864_);
v___x_4865_ = lean_array_to_list(v___y_4864_);
v___x_4866_ = lean_box(0);
v___x_4867_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4864_, v_snd_4858_, v_modName_4848_, v___x_4865_, v___x_4866_, v_a_4850_, v_a_4851_);
if (lean_obj_tag(v___x_4867_) == 0)
{
lean_object* v_a_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_4887_; 
v_a_4868_ = lean_ctor_get(v___x_4867_, 0);
v_isSharedCheck_4887_ = !lean_is_exclusive(v___x_4867_);
if (v_isSharedCheck_4887_ == 0)
{
v___x_4870_ = v___x_4867_;
v_isShared_4871_ = v_isSharedCheck_4887_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_a_4868_);
lean_dec(v___x_4867_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_4887_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4885_; 
v___x_4872_ = l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(v_methods_4849_);
v___x_4873_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3);
v___x_4874_ = lean_array_push(v___x_4873_, v___x_4872_);
v___x_4875_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_4876_ = l_Array_append___redArg(v___x_4874_, v___x_4875_);
v___x_4877_ = lean_array_mk(v_a_4868_);
v___x_4878_ = l_Array_append___redArg(v___x_4876_, v___x_4877_);
lean_dec_ref(v___x_4877_);
v___x_4879_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_4880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4880_, 0, v___x_4878_);
v___x_4881_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_4882_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4882_, 0, v___x_4879_);
lean_ctor_set(v___x_4882_, 1, v___x_4880_);
lean_ctor_set(v___x_4882_, 2, v___x_4881_);
lean_ctor_set(v___x_4882_, 3, v___x_4881_);
v___x_4883_ = l_Lean_Compiler_Yul_Printer_render(v___x_4882_);
lean_dec_ref_known(v___x_4882_, 4);
if (v_isShared_4871_ == 0)
{
lean_ctor_set(v___x_4870_, 0, v___x_4883_);
v___x_4885_ = v___x_4870_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4886_; 
v_reuseFailAlloc_4886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4886_, 0, v___x_4883_);
v___x_4885_ = v_reuseFailAlloc_4886_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
return v___x_4885_;
}
}
}
else
{
lean_object* v_a_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4895_; 
lean_dec_ref(v_methods_4849_);
v_a_4888_ = lean_ctor_get(v___x_4867_, 0);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___x_4867_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4890_ = v___x_4867_;
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_a_4888_);
lean_dec(v___x_4867_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4893_; 
if (v_isShared_4891_ == 0)
{
v___x_4893_ = v___x_4890_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_a_4888_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
}
else
{
lean_object* v_a_4910_; lean_object* v___x_4912_; uint8_t v_isShared_4913_; uint8_t v_isSharedCheck_4917_; 
lean_dec(v___x_4859_);
lean_dec(v_snd_4858_);
lean_dec(v_fst_4857_);
lean_dec_ref(v_methods_4849_);
lean_dec(v_modName_4848_);
v_a_4910_ = lean_ctor_get(v___x_4860_, 0);
v_isSharedCheck_4917_ = !lean_is_exclusive(v___x_4860_);
if (v_isSharedCheck_4917_ == 0)
{
v___x_4912_ = v___x_4860_;
v_isShared_4913_ = v_isSharedCheck_4917_;
goto v_resetjp_4911_;
}
else
{
lean_inc(v_a_4910_);
lean_dec(v___x_4860_);
v___x_4912_ = lean_box(0);
v_isShared_4913_ = v_isSharedCheck_4917_;
goto v_resetjp_4911_;
}
v_resetjp_4911_:
{
lean_object* v___x_4915_; 
if (v_isShared_4913_ == 0)
{
v___x_4915_ = v___x_4912_;
goto v_reusejp_4914_;
}
else
{
lean_object* v_reuseFailAlloc_4916_; 
v_reuseFailAlloc_4916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4916_, 0, v_a_4910_);
v___x_4915_ = v_reuseFailAlloc_4916_;
goto v_reusejp_4914_;
}
v_reusejp_4914_:
{
return v___x_4915_;
}
}
}
}
else
{
lean_object* v_a_4918_; lean_object* v___x_4920_; uint8_t v_isShared_4921_; uint8_t v_isSharedCheck_4925_; 
lean_dec_ref(v_methods_4849_);
lean_dec(v_modName_4848_);
v_a_4918_ = lean_ctor_get(v___x_4855_, 0);
v_isSharedCheck_4925_ = !lean_is_exclusive(v___x_4855_);
if (v_isSharedCheck_4925_ == 0)
{
v___x_4920_ = v___x_4855_;
v_isShared_4921_ = v_isSharedCheck_4925_;
goto v_resetjp_4919_;
}
else
{
lean_inc(v_a_4918_);
lean_dec(v___x_4855_);
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
lean_dec_ref(v_methods_4849_);
lean_dec(v_modName_4848_);
v_a_4926_ = lean_ctor_get(v___x_4853_, 0);
v_isSharedCheck_4933_ = !lean_is_exclusive(v___x_4853_);
if (v_isSharedCheck_4933_ == 0)
{
v___x_4928_ = v___x_4853_;
v_isShared_4929_ = v_isSharedCheck_4933_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_a_4926_);
lean_dec(v___x_4853_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___boxed(lean_object* v_modName_4934_, lean_object* v_methods_4935_, lean_object* v_a_4936_, lean_object* v_a_4937_, lean_object* v_a_4938_){
_start:
{
lean_object* v_res_4939_; 
v_res_4939_ = l_Lean_Compiler_LCNF_EmitYul_emitYulContract(v_modName_4934_, v_methods_4935_, v_a_4936_, v_a_4937_);
lean_dec(v_a_4937_);
lean_dec_ref(v_a_4936_);
return v_res_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul(lean_object* v_modName_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_){
_start:
{
lean_object* v___x_4944_; 
v___x_4944_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4942_);
if (lean_obj_tag(v___x_4944_) == 0)
{
lean_object* v_a_4945_; lean_object* v___x_4946_; 
v_a_4945_ = lean_ctor_get(v___x_4944_, 0);
lean_inc(v_a_4945_);
lean_dec_ref_known(v___x_4944_, 1);
v___x_4946_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_4940_, v_a_4945_, v_a_4941_, v_a_4942_);
lean_dec(v_a_4945_);
return v___x_4946_;
}
else
{
lean_object* v_a_4947_; lean_object* v___x_4949_; uint8_t v_isShared_4950_; uint8_t v_isSharedCheck_4954_; 
lean_dec(v_modName_4940_);
v_a_4947_ = lean_ctor_get(v___x_4944_, 0);
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4944_);
if (v_isSharedCheck_4954_ == 0)
{
v___x_4949_ = v___x_4944_;
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
else
{
lean_inc(v_a_4947_);
lean_dec(v___x_4944_);
v___x_4949_ = lean_box(0);
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
v_resetjp_4948_:
{
lean_object* v___x_4952_; 
if (v_isShared_4950_ == 0)
{
v___x_4952_ = v___x_4949_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v_a_4947_);
v___x_4952_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
return v___x_4952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul___boxed(lean_object* v_modName_4955_, lean_object* v_a_4956_, lean_object* v_a_4957_, lean_object* v_a_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l_Lean_Compiler_LCNF_EmitYul_emitYul(v_modName_4955_, v_a_4956_, v_a_4957_);
lean_dec(v_a_4957_);
lean_dec_ref(v_a_4956_);
return v_res_4959_;
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
