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
lean_object* l_Lean_Compiler_Yul_Literal_natLit(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mangle(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isVoid(lean_object*);
uint8_t l_Lean_Expr_isErased(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_collectUsedDecls(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_Yul_Literal_hex(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
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
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_alloc_ptr"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__4;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_allocN___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__7;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_allocN___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN___closed__8;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_argToExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "EmitYul: string literals not yet supported (need string runtime)"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lean_evm_"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "returnMem"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "revertMem"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sstore"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8_value;
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_add"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_sub"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "va"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vb"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_value;
static const lean_array_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_value),((lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148_value)}};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "f_Nat_mul"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162;
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decEq"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172;
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decLe"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "iszero"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180_value;
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_value;
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "f_Nat_decLt"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195;
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
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__9;
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
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__4;
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
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1(void){
_start:
{
lean_object* v_ptrName_188_; lean_object* v___x_189_; 
v_ptrName_188_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_allocN___closed__0));
v___x_189_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_ptrName_188_);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__2(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_190_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__1);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_mk_empty_array_with_capacity(v___x_191_);
v___x_193_ = lean_array_push(v___x_192_, v___x_190_);
return v___x_193_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__3(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr;
v___x_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__4(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v_decl_198_; 
v___x_196_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__3, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__3);
v___x_197_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__2, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__2);
v_decl_198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_decl_198_, 0, v___x_197_);
lean_ctor_set(v_decl_198_, 1, v___x_196_);
return v_decl_198_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__6(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_201_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_allocN___closed__5));
v___x_202_ = lean_unsigned_to_nat(2u);
v___x_203_ = lean_mk_empty_array_with_capacity(v___x_202_);
v___x_204_ = lean_array_push(v___x_203_, v___x_201_);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__7(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_205_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_206_ = lean_unsigned_to_nat(2u);
v___x_207_ = lean_mk_empty_array_with_capacity(v___x_206_);
v___x_208_ = lean_array_push(v___x_207_, v___x_205_);
return v___x_208_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__8(void){
_start:
{
lean_object* v_decl_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_decl_209_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__4, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__4);
v___x_210_ = lean_unsigned_to_nat(2u);
v___x_211_ = lean_mk_empty_array_with_capacity(v___x_210_);
v___x_212_ = lean_array_push(v___x_211_, v_decl_209_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_allocN(lean_object* v_nwords_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v_bump_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_214_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_215_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_216_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_allocN___closed__5));
v___x_217_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_218_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_nwords_213_);
v___x_219_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_220_ = lean_unsigned_to_nat(2u);
v___x_221_ = lean_mk_empty_array_with_capacity(v___x_220_);
v___x_222_ = lean_array_push(v___x_221_, v___x_218_);
v___x_223_ = lean_array_push(v___x_222_, v___x_219_);
v___x_224_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_217_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__6, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__6);
v___x_226_ = lean_array_push(v___x_225_, v___x_224_);
v___x_227_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_215_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__7, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__7);
v___x_229_ = lean_array_push(v___x_228_, v___x_227_);
v___x_230_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_214_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v_bump_231_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_bump_231_, 0, v___x_230_);
v___x_232_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_allocN___closed__8, &l_Lean_Compiler_LCNF_EmitYul_allocN___closed__8_once, _init_l_Lean_Compiler_LCNF_EmitYul_allocN___closed__8);
v___x_233_ = lean_array_push(v___x_232_, v_bump_231_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_216_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_argToExpr(lean_object* v_x_235_){
_start:
{
if (lean_obj_tag(v_x_235_) == 0)
{
lean_object* v___x_236_; 
v___x_236_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__1);
return v___x_236_;
}
else
{
lean_object* v_fvarId_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_245_; 
v_fvarId_237_ = lean_ctor_get(v_x_235_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_235_);
if (v_isSharedCheck_245_ == 0)
{
v___x_239_ = v_x_235_;
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_fvarId_237_);
lean_dec(v_x_235_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_245_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_241_; lean_object* v___x_243_; 
v___x_241_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_237_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_241_);
v___x_243_ = v___x_239_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_241_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg(lean_object* v_s_246_, lean_object* v_a_247_){
_start:
{
lean_object* v___x_249_; lean_object* v_stmts_250_; lean_object* v_fresh_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_262_; 
v___x_249_ = lean_st_ref_take(v_a_247_);
v_stmts_250_ = lean_ctor_get(v___x_249_, 0);
v_fresh_251_ = lean_ctor_get(v___x_249_, 1);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_262_ == 0)
{
v___x_253_ = v___x_249_;
v_isShared_254_ = v_isSharedCheck_262_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_fresh_251_);
lean_inc(v_stmts_250_);
lean_dec(v___x_249_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_262_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_255_ = lean_array_push(v_stmts_250_, v_s_246_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_255_);
v___x_257_ = v___x_253_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_fresh_251_);
v___x_257_ = v_reuseFailAlloc_261_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_258_ = lean_st_ref_set(v_a_247_, v___x_257_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___redArg___boxed(lean_object* v_s_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Compiler_LCNF_EmitYul_emit___redArg(v_s_263_, v_a_264_);
lean_dec(v_a_264_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit(lean_object* v_s_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___x_273_; lean_object* v_stmts_274_; lean_object* v_fresh_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_286_; 
v___x_273_ = lean_st_ref_take(v_a_269_);
v_stmts_274_ = lean_ctor_get(v___x_273_, 0);
v_fresh_275_ = lean_ctor_get(v___x_273_, 1);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_286_ == 0)
{
v___x_277_ = v___x_273_;
v_isShared_278_ = v_isSharedCheck_286_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_fresh_275_);
lean_inc(v_stmts_274_);
lean_dec(v___x_273_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_286_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_279_ = lean_array_push(v_stmts_274_, v_s_267_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_285_, 1, v_fresh_275_);
v___x_281_ = v_reuseFailAlloc_285_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_282_ = lean_st_ref_set(v_a_269_, v___x_281_);
v___x_283_ = lean_box(0);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emit___boxed(lean_object* v_s_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_Compiler_LCNF_EmitYul_emit(v_s_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg(lean_object* v_ss_294_, lean_object* v_a_295_){
_start:
{
lean_object* v___x_297_; lean_object* v_stmts_298_; lean_object* v_fresh_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_310_; 
v___x_297_ = lean_st_ref_take(v_a_295_);
v_stmts_298_ = lean_ctor_get(v___x_297_, 0);
v_fresh_299_ = lean_ctor_get(v___x_297_, 1);
v_isSharedCheck_310_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_310_ == 0)
{
v___x_301_ = v___x_297_;
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_fresh_299_);
lean_inc(v_stmts_298_);
lean_dec(v___x_297_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_310_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_303_ = l_Array_append___redArg(v_stmts_298_, v_ss_294_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_303_);
v___x_305_ = v___x_301_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v___x_303_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_fresh_299_);
v___x_305_ = v_reuseFailAlloc_309_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_st_ref_set(v_a_295_, v___x_305_);
v___x_307_ = lean_box(0);
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg___boxed(lean_object* v_ss_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Compiler_LCNF_EmitYul_emitMany___redArg(v_ss_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_ss_311_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany(lean_object* v_ss_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_321_; lean_object* v_stmts_322_; lean_object* v_fresh_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_334_; 
v___x_321_ = lean_st_ref_take(v_a_317_);
v_stmts_322_ = lean_ctor_get(v___x_321_, 0);
v_fresh_323_ = lean_ctor_get(v___x_321_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_334_ == 0)
{
v___x_325_ = v___x_321_;
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_fresh_323_);
lean_inc(v_stmts_322_);
lean_dec(v___x_321_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_334_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; lean_object* v___x_329_; 
v___x_327_ = l_Array_append___redArg(v_stmts_322_, v_ss_315_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_327_);
v___x_329_ = v___x_325_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_327_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_fresh_323_);
v___x_329_ = v_reuseFailAlloc_333_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = lean_st_ref_set(v_a_317_, v___x_329_);
v___x_331_ = lean_box(0);
v___x_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
return v___x_332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitMany___boxed(lean_object* v_ss_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lean_Compiler_LCNF_EmitYul_emitMany(v_ss_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_);
lean_dec(v_a_339_);
lean_dec_ref(v_a_338_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
lean_dec_ref(v_ss_335_);
return v_res_341_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_342_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__0);
v___x_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_344_, 0, v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
lean_ctor_set(v___x_347_, 2, v___x_346_);
lean_ctor_set(v___x_347_, 3, v___x_346_);
lean_ctor_set(v___x_347_, 4, v___x_345_);
lean_ctor_set(v___x_347_, 5, v___x_345_);
lean_ctor_set(v___x_347_, 6, v___x_345_);
lean_ctor_set(v___x_347_, 7, v___x_345_);
lean_ctor_set(v___x_347_, 8, v___x_345_);
lean_ctor_set(v___x_347_, 9, v___x_345_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_348_ = lean_unsigned_to_nat(32u);
v___x_349_ = lean_mk_empty_array_with_capacity(v___x_348_);
v___x_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_350_, 0, v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_351_ = ((size_t)5ULL);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = lean_unsigned_to_nat(32u);
v___x_354_ = lean_mk_empty_array_with_capacity(v___x_353_);
v___x_355_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__3);
v___x_356_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v___x_354_);
lean_ctor_set(v___x_356_, 2, v___x_352_);
lean_ctor_set(v___x_356_, 3, v___x_352_);
lean_ctor_set_usize(v___x_356_, 4, v___x_351_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_357_ = lean_box(1);
v___x_358_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__4);
v___x_359_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__1);
v___x_360_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_358_);
lean_ctor_set(v___x_360_, 2, v___x_357_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(lean_object* v_msgData_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v___x_365_; lean_object* v_env_366_; lean_object* v_options_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_365_ = lean_st_ref_get(v___y_363_);
v_env_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc_ref(v_env_366_);
lean_dec(v___x_365_);
v_options_367_ = lean_ctor_get(v___y_362_, 2);
v___x_368_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__2);
v___x_369_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_367_);
v___x_370_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_370_, 0, v_env_366_);
lean_ctor_set(v___x_370_, 1, v___x_368_);
lean_ctor_set(v___x_370_, 2, v___x_369_);
lean_ctor_set(v___x_370_, 3, v_options_367_);
v___x_371_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_371_, 0, v___x_370_);
lean_ctor_set(v___x_371_, 1, v_msgData_361_);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0___boxed(lean_object* v_msgData_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(v_msgData_373_, v___y_374_, v___y_375_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(lean_object* v_msg_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_ref_382_; lean_object* v___x_383_; lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_392_; 
v_ref_382_ = lean_ctor_get(v___y_379_, 5);
v___x_383_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0_spec__0(v_msg_378_, v___y_379_, v___y_380_);
v_a_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_392_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_388_; lean_object* v___x_390_; 
lean_inc(v_ref_382_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v_ref_382_);
lean_ctor_set(v___x_388_, 1, v_a_384_);
if (v_isShared_387_ == 0)
{
lean_ctor_set_tag(v___x_386_, 1);
lean_ctor_set(v___x_386_, 0, v___x_388_);
v___x_390_ = v___x_386_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_388_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg___boxed(lean_object* v_msg_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v_msg_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_397_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1(void){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__0));
v___x_400_ = l_Lean_stringToMessageData(v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType(lean_object* v_fvarId_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_fvarTypes_407_; lean_object* v___x_408_; 
v_fvarTypes_407_ = lean_ctor_get(v_a_402_, 4);
v___x_408_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_fvarTypes_407_, v_fvarId_401_);
if (lean_obj_tag(v___x_408_) == 1)
{
lean_object* v_val_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_416_; 
lean_dec(v_fvarId_401_);
v_val_409_ = lean_ctor_get(v___x_408_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_408_);
if (v_isSharedCheck_416_ == 0)
{
v___x_411_ = v___x_408_;
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_val_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_416_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_414_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set_tag(v___x_411_, 0);
v___x_414_ = v___x_411_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_val_409_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec(v___x_408_);
v___x_417_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1, &l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_getStoredType___closed__1);
v___x_418_ = l_Lean_MessageData_ofName(v_fvarId_401_);
v___x_419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_419_, 0, v___x_417_);
lean_ctor_set(v___x_419_, 1, v___x_418_);
v___x_420_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_419_, v_a_404_, v_a_405_);
return v___x_420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_getStoredType___boxed(lean_object* v_fvarId_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Lean_Compiler_LCNF_EmitYul_getStoredType(v_fvarId_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_);
lean_dec(v_a_425_);
lean_dec_ref(v_a_424_);
lean_dec(v_a_423_);
lean_dec_ref(v_a_422_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0(lean_object* v_00_u03b1_428_, lean_object* v_msg_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v_msg_429_, v___y_432_, v___y_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___boxed(lean_object* v_00_u03b1_436_, lean_object* v_msg_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0(v_00_u03b1_436_, v_msg_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(lean_object* v_fvarId_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_joinDecls_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v_joinDecls_447_ = lean_ctor_get(v_a_445_, 5);
v___x_448_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_joinDecls_447_, v_fvarId_444_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg___boxed(lean_object* v_fvarId_450_, lean_object* v_a_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_450_, v_a_451_);
lean_dec_ref(v_a_451_);
lean_dec(v_fvarId_450_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f(lean_object* v_fvarId_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_454_, v_a_455_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___boxed(lean_object* v_fvarId_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f(v_fvarId_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_);
lean_dec(v_a_465_);
lean_dec_ref(v_a_464_);
lean_dec(v_a_463_);
lean_dec_ref(v_a_462_);
lean_dec(v_fvarId_461_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(lean_object* v_args_468_, lean_object* v_ps_469_, lean_object* v_range_470_, lean_object* v_b_471_, lean_object* v_i_472_){
_start:
{
lean_object* v_stop_473_; lean_object* v_step_474_; lean_object* v_a_476_; uint8_t v___x_479_; 
v_stop_473_ = lean_ctor_get(v_range_470_, 1);
v_step_474_ = lean_ctor_get(v_range_470_, 2);
v___x_479_ = lean_nat_dec_lt(v_i_472_, v_stop_473_);
if (v___x_479_ == 0)
{
lean_dec(v_i_472_);
return v_b_471_;
}
else
{
lean_object* v_arg_480_; uint8_t v___y_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_arg_480_ = lean_array_fget_borrowed(v_args_468_, v_i_472_);
v___x_485_ = lean_array_get_size(v_ps_469_);
v___x_486_ = lean_nat_dec_lt(v_i_472_, v___x_485_);
if (v___x_486_ == 0)
{
goto v___jp_481_;
}
else
{
lean_object* v_p_487_; lean_object* v_type_488_; uint8_t v___x_489_; 
v_p_487_ = lean_array_fget_borrowed(v_ps_469_, v_i_472_);
v_type_488_ = lean_ctor_get(v_p_487_, 2);
v___x_489_ = l_Lean_Expr_isVoid(v_type_488_);
if (v___x_489_ == 0)
{
uint8_t v___x_490_; 
v___x_490_ = l_Lean_Expr_isErased(v_type_488_);
v___y_484_ = v___x_490_;
goto v___jp_483_;
}
else
{
v___y_484_ = v___x_489_;
goto v___jp_483_;
}
}
v___jp_481_:
{
lean_object* v_filtered_482_; 
lean_inc(v_arg_480_);
v_filtered_482_ = lean_array_push(v_b_471_, v_arg_480_);
v_a_476_ = v_filtered_482_;
goto v___jp_475_;
}
v___jp_483_:
{
if (v___y_484_ == 0)
{
goto v___jp_481_;
}
else
{
v_a_476_ = v_b_471_;
goto v___jp_475_;
}
}
}
v___jp_475_:
{
lean_object* v___x_477_; 
v___x_477_ = lean_nat_add(v_i_472_, v_step_474_);
lean_dec(v_i_472_);
v_b_471_ = v_a_476_;
v_i_472_ = v___x_477_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg___boxed(lean_object* v_args_491_, lean_object* v_ps_492_, lean_object* v_range_493_, lean_object* v_b_494_, lean_object* v_i_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(v_args_491_, v_ps_492_, v_range_493_, v_b_494_, v_i_495_);
lean_dec_ref(v_range_493_);
lean_dec_ref(v_ps_492_);
lean_dec_ref(v_args_491_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(lean_object* v_ps_499_, lean_object* v_args_500_){
_start:
{
lean_object* v___x_501_; lean_object* v_filtered_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_501_ = lean_unsigned_to_nat(0u);
v_filtered_502_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___closed__0));
v___x_503_ = lean_array_get_size(v_args_500_);
v___x_504_ = lean_unsigned_to_nat(1u);
v___x_505_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_505_, 0, v___x_501_);
lean_ctor_set(v___x_505_, 1, v___x_503_);
lean_ctor_set(v___x_505_, 2, v___x_504_);
v___x_506_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(v_args_500_, v_ps_499_, v___x_505_, v_filtered_502_, v___x_501_);
lean_dec_ref_known(v___x_505_, 3);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_runtimeArgs___boxed(lean_object* v_ps_507_, lean_object* v_args_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(v_ps_507_, v_args_508_);
lean_dec_ref(v_args_508_);
lean_dec_ref(v_ps_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0(lean_object* v_args_510_, lean_object* v_ps_511_, lean_object* v_range_512_, lean_object* v_b_513_, lean_object* v_i_514_, lean_object* v_hs_515_, lean_object* v_hl_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___redArg(v_args_510_, v_ps_511_, v_range_512_, v_b_513_, v_i_514_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0___boxed(lean_object* v_args_518_, lean_object* v_ps_519_, lean_object* v_range_520_, lean_object* v_b_521_, lean_object* v_i_522_, lean_object* v_hs_523_, lean_object* v_hl_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_runtimeArgs_spec__0(v_args_518_, v_ps_519_, v_range_520_, v_b_521_, v_i_522_, v_hs_523_, v_hl_524_);
lean_dec_ref(v_range_520_);
lean_dec_ref(v_ps_519_);
lean_dec_ref(v_args_518_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts(lean_object* v_act_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v_stmts_536_; lean_object* v_fresh_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_575_; 
v___x_534_ = lean_st_ref_get(v_a_530_);
v___x_535_ = lean_st_ref_take(v_a_530_);
lean_dec(v___x_535_);
v_stmts_536_ = lean_ctor_get(v___x_534_, 0);
v_fresh_537_ = lean_ctor_get(v___x_534_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_575_ == 0)
{
v___x_539_ = v___x_534_;
v_isShared_540_ = v_isSharedCheck_575_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_fresh_537_);
lean_inc(v_stmts_536_);
lean_dec(v___x_534_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_575_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_541_; lean_object* v___x_543_; 
v___x_541_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_captureStmts___closed__0));
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_541_);
v___x_543_ = v___x_539_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_541_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_fresh_537_);
v___x_543_ = v_reuseFailAlloc_574_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_st_ref_set(v_a_530_, v___x_543_);
lean_inc(v_a_532_);
lean_inc_ref(v_a_531_);
lean_inc(v_a_530_);
lean_inc_ref(v_a_529_);
v___x_545_ = lean_apply_5(v_act_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_, lean_box(0));
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_564_; 
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_564_ == 0)
{
lean_object* v_unused_565_; 
v_unused_565_ = lean_ctor_get(v___x_545_, 0);
lean_dec(v_unused_565_);
v___x_547_ = v___x_545_;
v_isShared_548_ = v_isSharedCheck_564_;
goto v_resetjp_546_;
}
else
{
lean_dec(v___x_545_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_564_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v_stmts_551_; lean_object* v_fresh_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_563_; 
v___x_549_ = lean_st_ref_get(v_a_530_);
v___x_550_ = lean_st_ref_take(v_a_530_);
lean_dec(v___x_550_);
v_stmts_551_ = lean_ctor_get(v___x_549_, 0);
v_fresh_552_ = lean_ctor_get(v___x_549_, 1);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_563_ == 0)
{
v___x_554_ = v___x_549_;
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_fresh_552_);
lean_inc(v_stmts_551_);
lean_dec(v___x_549_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_563_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v_stmts_536_);
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_stmts_536_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_fresh_552_);
v___x_557_ = v_reuseFailAlloc_562_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_558_ = lean_st_ref_set(v_a_530_, v___x_557_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v_stmts_551_);
v___x_560_ = v___x_547_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_stmts_551_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
else
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
lean_dec_ref(v_stmts_536_);
v_a_566_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_545_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_545_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_captureStmts___boxed(lean_object* v_act_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v_act_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec(v_a_578_);
lean_dec_ref(v_a_577_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(lean_object* v_code_583_, lean_object* v_acc_584_){
_start:
{
switch(lean_obj_tag(v_code_583_))
{
case 0:
{
lean_object* v_k_585_; 
v_k_585_ = lean_ctor_get(v_code_583_, 1);
lean_inc_ref(v_k_585_);
lean_dec_ref_known(v_code_583_, 2);
v_code_583_ = v_k_585_;
goto _start;
}
case 2:
{
lean_object* v_decl_587_; lean_object* v_k_588_; lean_object* v_fvarId_589_; lean_object* v_value_590_; lean_object* v_acc_591_; lean_object* v_acc_592_; 
v_decl_587_ = lean_ctor_get(v_code_583_, 0);
lean_inc_ref(v_decl_587_);
v_k_588_ = lean_ctor_get(v_code_583_, 1);
lean_inc_ref(v_k_588_);
lean_dec_ref_known(v_code_583_, 2);
v_fvarId_589_ = lean_ctor_get(v_decl_587_, 0);
lean_inc(v_fvarId_589_);
v_value_590_ = lean_ctor_get(v_decl_587_, 4);
lean_inc_ref(v_value_590_);
v_acc_591_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fvarId_589_, v_decl_587_, v_acc_584_);
v_acc_592_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v_value_590_, v_acc_591_);
v_code_583_ = v_k_588_;
v_acc_584_ = v_acc_592_;
goto _start;
}
case 4:
{
lean_object* v_cases_594_; lean_object* v_alts_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; 
v_cases_594_ = lean_ctor_get(v_code_583_, 0);
lean_inc_ref(v_cases_594_);
lean_dec_ref_known(v_code_583_, 1);
v_alts_595_ = lean_ctor_get(v_cases_594_, 3);
lean_inc_ref(v_alts_595_);
lean_dec_ref(v_cases_594_);
v___x_596_ = lean_unsigned_to_nat(0u);
v___x_597_ = lean_array_get_size(v_alts_595_);
v___x_598_ = lean_nat_dec_lt(v___x_596_, v___x_597_);
if (v___x_598_ == 0)
{
lean_dec_ref(v_alts_595_);
return v_acc_584_;
}
else
{
uint8_t v___x_599_; 
v___x_599_ = lean_nat_dec_le(v___x_597_, v___x_597_);
if (v___x_599_ == 0)
{
if (v___x_598_ == 0)
{
lean_dec_ref(v_alts_595_);
return v_acc_584_;
}
else
{
size_t v___x_600_; size_t v___x_601_; lean_object* v___x_602_; 
v___x_600_ = ((size_t)0ULL);
v___x_601_ = lean_usize_of_nat(v___x_597_);
v___x_602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(v_alts_595_, v___x_600_, v___x_601_, v_acc_584_);
lean_dec_ref(v_alts_595_);
return v___x_602_;
}
}
else
{
size_t v___x_603_; size_t v___x_604_; lean_object* v___x_605_; 
v___x_603_ = ((size_t)0ULL);
v___x_604_ = lean_usize_of_nat(v___x_597_);
v___x_605_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(v_alts_595_, v___x_603_, v___x_604_, v_acc_584_);
lean_dec_ref(v_alts_595_);
return v___x_605_;
}
}
}
case 7:
{
lean_object* v_k_606_; 
v_k_606_ = lean_ctor_get(v_code_583_, 3);
lean_inc_ref(v_k_606_);
lean_dec_ref_known(v_code_583_, 4);
v_code_583_ = v_k_606_;
goto _start;
}
case 8:
{
lean_object* v_k_608_; 
v_k_608_ = lean_ctor_get(v_code_583_, 3);
lean_inc_ref(v_k_608_);
lean_dec_ref_known(v_code_583_, 4);
v_code_583_ = v_k_608_;
goto _start;
}
case 9:
{
lean_object* v_k_610_; 
v_k_610_ = lean_ctor_get(v_code_583_, 5);
lean_inc_ref(v_k_610_);
lean_dec_ref_known(v_code_583_, 6);
v_code_583_ = v_k_610_;
goto _start;
}
case 10:
{
lean_object* v_k_612_; 
v_k_612_ = lean_ctor_get(v_code_583_, 2);
lean_inc_ref(v_k_612_);
lean_dec_ref_known(v_code_583_, 3);
v_code_583_ = v_k_612_;
goto _start;
}
case 11:
{
lean_object* v_k_614_; 
v_k_614_ = lean_ctor_get(v_code_583_, 2);
lean_inc_ref(v_k_614_);
lean_dec_ref_known(v_code_583_, 3);
v_code_583_ = v_k_614_;
goto _start;
}
case 12:
{
lean_object* v_k_616_; 
v_k_616_ = lean_ctor_get(v_code_583_, 3);
lean_inc_ref(v_k_616_);
lean_dec_ref_known(v_code_583_, 4);
v_code_583_ = v_k_616_;
goto _start;
}
case 13:
{
lean_object* v_k_618_; 
v_k_618_ = lean_ctor_get(v_code_583_, 1);
lean_inc_ref(v_k_618_);
lean_dec_ref_known(v_code_583_, 2);
v_code_583_ = v_k_618_;
goto _start;
}
default: 
{
lean_dec_ref(v_code_583_);
return v_acc_584_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(lean_object* v_as_620_, size_t v_i_621_, size_t v_stop_622_, lean_object* v_b_623_){
_start:
{
lean_object* v___y_625_; uint8_t v___x_630_; 
v___x_630_ = lean_usize_dec_eq(v_i_621_, v_stop_622_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
v___x_631_ = lean_array_uget_borrowed(v_as_620_, v_i_621_);
switch(lean_obj_tag(v___x_631_))
{
case 0:
{
lean_object* v_code_632_; 
v_code_632_ = lean_ctor_get(v___x_631_, 2);
lean_inc_ref(v_code_632_);
v___y_625_ = v_code_632_;
goto v___jp_624_;
}
case 1:
{
lean_object* v_code_633_; 
v_code_633_ = lean_ctor_get(v___x_631_, 1);
lean_inc_ref(v_code_633_);
v___y_625_ = v_code_633_;
goto v___jp_624_;
}
default: 
{
lean_object* v_code_634_; 
v_code_634_ = lean_ctor_get(v___x_631_, 0);
lean_inc_ref(v_code_634_);
v___y_625_ = v_code_634_;
goto v___jp_624_;
}
}
}
else
{
return v_b_623_;
}
v___jp_624_:
{
lean_object* v___x_626_; size_t v___x_627_; size_t v___x_628_; 
v___x_626_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v___y_625_, v_b_623_);
v___x_627_ = ((size_t)1ULL);
v___x_628_ = lean_usize_add(v_i_621_, v___x_627_);
v_i_621_ = v___x_628_;
v_b_623_ = v___x_626_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0___boxed(lean_object* v_as_635_, lean_object* v_i_636_, lean_object* v_stop_637_, lean_object* v_b_638_){
_start:
{
size_t v_i_boxed_639_; size_t v_stop_boxed_640_; lean_object* v_res_641_; 
v_i_boxed_639_ = lean_unbox_usize(v_i_636_);
lean_dec(v_i_636_);
v_stop_boxed_640_ = lean_unbox_usize(v_stop_637_);
lean_dec(v_stop_637_);
v_res_641_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectJoinDecls_spec__0(v_as_635_, v_i_boxed_639_, v_stop_boxed_640_, v_b_638_);
lean_dec_ref(v_as_635_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(lean_object* v_as_642_, size_t v_i_643_, size_t v_stop_644_, lean_object* v_b_645_){
_start:
{
uint8_t v___x_646_; 
v___x_646_ = lean_usize_dec_eq(v_i_643_, v_stop_644_);
if (v___x_646_ == 0)
{
lean_object* v___x_647_; lean_object* v_fvarId_648_; lean_object* v_type_649_; lean_object* v___x_650_; size_t v___x_651_; size_t v___x_652_; 
v___x_647_ = lean_array_uget_borrowed(v_as_642_, v_i_643_);
v_fvarId_648_ = lean_ctor_get(v___x_647_, 0);
v_type_649_ = lean_ctor_get(v___x_647_, 2);
lean_inc_ref(v_type_649_);
lean_inc(v_fvarId_648_);
v___x_650_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fvarId_648_, v_type_649_, v_b_645_);
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_643_, v___x_651_);
v_i_643_ = v___x_652_;
v_b_645_ = v___x_650_;
goto _start;
}
else
{
return v_b_645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0___boxed(lean_object* v_as_654_, lean_object* v_i_655_, lean_object* v_stop_656_, lean_object* v_b_657_){
_start:
{
size_t v_i_boxed_658_; size_t v_stop_boxed_659_; lean_object* v_res_660_; 
v_i_boxed_658_ = lean_unbox_usize(v_i_655_);
lean_dec(v_i_655_);
v_stop_boxed_659_ = lean_unbox_usize(v_stop_656_);
lean_dec(v_stop_656_);
v_res_660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_as_654_, v_i_boxed_658_, v_stop_boxed_659_, v_b_657_);
lean_dec_ref(v_as_654_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(lean_object* v_code_661_, lean_object* v_acc_662_){
_start:
{
switch(lean_obj_tag(v_code_661_))
{
case 0:
{
lean_object* v_decl_663_; lean_object* v_k_664_; lean_object* v_fvarId_665_; lean_object* v_type_666_; lean_object* v___x_667_; 
v_decl_663_ = lean_ctor_get(v_code_661_, 0);
lean_inc_ref(v_decl_663_);
v_k_664_ = lean_ctor_get(v_code_661_, 1);
lean_inc_ref(v_k_664_);
lean_dec_ref_known(v_code_661_, 2);
v_fvarId_665_ = lean_ctor_get(v_decl_663_, 0);
lean_inc(v_fvarId_665_);
v_type_666_ = lean_ctor_get(v_decl_663_, 2);
lean_inc_ref(v_type_666_);
lean_dec_ref(v_decl_663_);
v___x_667_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fvarId_665_, v_type_666_, v_acc_662_);
v_code_661_ = v_k_664_;
v_acc_662_ = v___x_667_;
goto _start;
}
case 2:
{
lean_object* v_decl_669_; lean_object* v_k_670_; lean_object* v_params_671_; lean_object* v_value_672_; lean_object* v___y_674_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v_decl_669_ = lean_ctor_get(v_code_661_, 0);
lean_inc_ref(v_decl_669_);
v_k_670_ = lean_ctor_get(v_code_661_, 1);
lean_inc_ref(v_k_670_);
lean_dec_ref_known(v_code_661_, 2);
v_params_671_ = lean_ctor_get(v_decl_669_, 2);
lean_inc_ref(v_params_671_);
v_value_672_ = lean_ctor_get(v_decl_669_, 4);
lean_inc_ref(v_value_672_);
lean_dec_ref(v_decl_669_);
v___x_677_ = lean_unsigned_to_nat(0u);
v___x_678_ = lean_array_get_size(v_params_671_);
v___x_679_ = lean_nat_dec_lt(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_dec_ref(v_params_671_);
v___y_674_ = v_acc_662_;
goto v___jp_673_;
}
else
{
uint8_t v___x_680_; 
v___x_680_ = lean_nat_dec_le(v___x_678_, v___x_678_);
if (v___x_680_ == 0)
{
if (v___x_679_ == 0)
{
lean_dec_ref(v_params_671_);
v___y_674_ = v_acc_662_;
goto v___jp_673_;
}
else
{
size_t v___x_681_; size_t v___x_682_; lean_object* v___x_683_; 
v___x_681_ = ((size_t)0ULL);
v___x_682_ = lean_usize_of_nat(v___x_678_);
v___x_683_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_671_, v___x_681_, v___x_682_, v_acc_662_);
lean_dec_ref(v_params_671_);
v___y_674_ = v___x_683_;
goto v___jp_673_;
}
}
else
{
size_t v___x_684_; size_t v___x_685_; lean_object* v___x_686_; 
v___x_684_ = ((size_t)0ULL);
v___x_685_ = lean_usize_of_nat(v___x_678_);
v___x_686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_671_, v___x_684_, v___x_685_, v_acc_662_);
lean_dec_ref(v_params_671_);
v___y_674_ = v___x_686_;
goto v___jp_673_;
}
}
v___jp_673_:
{
lean_object* v_acc_675_; 
v_acc_675_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v_value_672_, v___y_674_);
v_code_661_ = v_k_670_;
v_acc_662_ = v_acc_675_;
goto _start;
}
}
case 4:
{
lean_object* v_cases_687_; lean_object* v_alts_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v_cases_687_ = lean_ctor_get(v_code_661_, 0);
lean_inc_ref(v_cases_687_);
lean_dec_ref_known(v_code_661_, 1);
v_alts_688_ = lean_ctor_get(v_cases_687_, 3);
lean_inc_ref(v_alts_688_);
lean_dec_ref(v_cases_687_);
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = lean_array_get_size(v_alts_688_);
v___x_691_ = lean_nat_dec_lt(v___x_689_, v___x_690_);
if (v___x_691_ == 0)
{
lean_dec_ref(v_alts_688_);
return v_acc_662_;
}
else
{
uint8_t v___x_692_; 
v___x_692_ = lean_nat_dec_le(v___x_690_, v___x_690_);
if (v___x_692_ == 0)
{
if (v___x_691_ == 0)
{
lean_dec_ref(v_alts_688_);
return v_acc_662_;
}
else
{
size_t v___x_693_; size_t v___x_694_; lean_object* v___x_695_; 
v___x_693_ = ((size_t)0ULL);
v___x_694_ = lean_usize_of_nat(v___x_690_);
v___x_695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(v_alts_688_, v___x_693_, v___x_694_, v_acc_662_);
lean_dec_ref(v_alts_688_);
return v___x_695_;
}
}
else
{
size_t v___x_696_; size_t v___x_697_; lean_object* v___x_698_; 
v___x_696_ = ((size_t)0ULL);
v___x_697_ = lean_usize_of_nat(v___x_690_);
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(v_alts_688_, v___x_696_, v___x_697_, v_acc_662_);
lean_dec_ref(v_alts_688_);
return v___x_698_;
}
}
}
case 7:
{
lean_object* v_k_699_; 
v_k_699_ = lean_ctor_get(v_code_661_, 3);
lean_inc_ref(v_k_699_);
lean_dec_ref_known(v_code_661_, 4);
v_code_661_ = v_k_699_;
goto _start;
}
case 8:
{
lean_object* v_k_701_; 
v_k_701_ = lean_ctor_get(v_code_661_, 3);
lean_inc_ref(v_k_701_);
lean_dec_ref_known(v_code_661_, 4);
v_code_661_ = v_k_701_;
goto _start;
}
case 9:
{
lean_object* v_k_703_; 
v_k_703_ = lean_ctor_get(v_code_661_, 5);
lean_inc_ref(v_k_703_);
lean_dec_ref_known(v_code_661_, 6);
v_code_661_ = v_k_703_;
goto _start;
}
case 10:
{
lean_object* v_k_705_; 
v_k_705_ = lean_ctor_get(v_code_661_, 2);
lean_inc_ref(v_k_705_);
lean_dec_ref_known(v_code_661_, 3);
v_code_661_ = v_k_705_;
goto _start;
}
case 11:
{
lean_object* v_k_707_; 
v_k_707_ = lean_ctor_get(v_code_661_, 2);
lean_inc_ref(v_k_707_);
lean_dec_ref_known(v_code_661_, 3);
v_code_661_ = v_k_707_;
goto _start;
}
case 12:
{
lean_object* v_k_709_; 
v_k_709_ = lean_ctor_get(v_code_661_, 3);
lean_inc_ref(v_k_709_);
lean_dec_ref_known(v_code_661_, 4);
v_code_661_ = v_k_709_;
goto _start;
}
case 13:
{
lean_object* v_k_711_; 
v_k_711_ = lean_ctor_get(v_code_661_, 1);
lean_inc_ref(v_k_711_);
lean_dec_ref_known(v_code_661_, 2);
v_code_661_ = v_k_711_;
goto _start;
}
default: 
{
lean_dec_ref(v_code_661_);
return v_acc_662_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(lean_object* v_as_713_, size_t v_i_714_, size_t v_stop_715_, lean_object* v_b_716_){
_start:
{
lean_object* v___y_718_; uint8_t v___x_723_; 
v___x_723_ = lean_usize_dec_eq(v_i_714_, v_stop_715_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; 
v___x_724_ = lean_array_uget_borrowed(v_as_713_, v_i_714_);
switch(lean_obj_tag(v___x_724_))
{
case 0:
{
lean_object* v_code_725_; 
v_code_725_ = lean_ctor_get(v___x_724_, 2);
lean_inc_ref(v_code_725_);
v___y_718_ = v_code_725_;
goto v___jp_717_;
}
case 1:
{
lean_object* v_code_726_; 
v_code_726_ = lean_ctor_get(v___x_724_, 1);
lean_inc_ref(v_code_726_);
v___y_718_ = v_code_726_;
goto v___jp_717_;
}
default: 
{
lean_object* v_code_727_; 
v_code_727_ = lean_ctor_get(v___x_724_, 0);
lean_inc_ref(v_code_727_);
v___y_718_ = v_code_727_;
goto v___jp_717_;
}
}
}
else
{
return v_b_716_;
}
v___jp_717_:
{
lean_object* v___x_719_; size_t v___x_720_; size_t v___x_721_; 
v___x_719_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v___y_718_, v_b_716_);
v___x_720_ = ((size_t)1ULL);
v___x_721_ = lean_usize_add(v_i_714_, v___x_720_);
v_i_714_ = v___x_721_;
v_b_716_ = v___x_719_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1___boxed(lean_object* v_as_728_, lean_object* v_i_729_, lean_object* v_stop_730_, lean_object* v_b_731_){
_start:
{
size_t v_i_boxed_732_; size_t v_stop_boxed_733_; lean_object* v_res_734_; 
v_i_boxed_732_ = lean_unbox_usize(v_i_729_);
lean_dec(v_i_729_);
v_stop_boxed_733_ = lean_unbox_usize(v_stop_730_);
lean_dec(v_stop_730_);
v_res_734_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__1(v_as_728_, v_i_boxed_732_, v_stop_boxed_733_, v_b_731_);
lean_dec_ref(v_as_728_);
return v_res_734_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(lean_object* v_target_735_, lean_object* v_x_736_){
_start:
{
switch(lean_obj_tag(v_x_736_))
{
case 0:
{
lean_object* v_k_737_; 
v_k_737_ = lean_ctor_get(v_x_736_, 1);
v_x_736_ = v_k_737_;
goto _start;
}
case 2:
{
lean_object* v_decl_739_; lean_object* v_k_740_; lean_object* v_value_741_; uint8_t v___x_742_; 
v_decl_739_ = lean_ctor_get(v_x_736_, 0);
v_k_740_ = lean_ctor_get(v_x_736_, 1);
v_value_741_ = lean_ctor_get(v_decl_739_, 4);
v___x_742_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_target_735_, v_value_741_);
if (v___x_742_ == 0)
{
v_x_736_ = v_k_740_;
goto _start;
}
else
{
return v___x_742_;
}
}
case 3:
{
lean_object* v_fvarId_744_; uint8_t v___x_745_; 
v_fvarId_744_ = lean_ctor_get(v_x_736_, 0);
v___x_745_ = lean_name_eq(v_fvarId_744_, v_target_735_);
return v___x_745_;
}
case 4:
{
lean_object* v_cases_746_; lean_object* v_alts_747_; lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; 
v_cases_746_ = lean_ctor_get(v_x_736_, 0);
v_alts_747_ = lean_ctor_get(v_cases_746_, 3);
v___x_748_ = lean_unsigned_to_nat(0u);
v___x_749_ = lean_array_get_size(v_alts_747_);
v___x_750_ = lean_nat_dec_lt(v___x_748_, v___x_749_);
if (v___x_750_ == 0)
{
return v___x_750_;
}
else
{
if (v___x_750_ == 0)
{
return v___x_750_;
}
else
{
size_t v___x_751_; size_t v___x_752_; uint8_t v___x_753_; 
v___x_751_ = ((size_t)0ULL);
v___x_752_ = lean_usize_of_nat(v___x_749_);
v___x_753_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(v_target_735_, v_alts_747_, v___x_751_, v___x_752_);
return v___x_753_;
}
}
}
case 7:
{
lean_object* v_k_754_; 
v_k_754_ = lean_ctor_get(v_x_736_, 3);
v_x_736_ = v_k_754_;
goto _start;
}
case 8:
{
lean_object* v_k_756_; 
v_k_756_ = lean_ctor_get(v_x_736_, 3);
v_x_736_ = v_k_756_;
goto _start;
}
case 9:
{
lean_object* v_k_758_; 
v_k_758_ = lean_ctor_get(v_x_736_, 5);
v_x_736_ = v_k_758_;
goto _start;
}
case 10:
{
lean_object* v_k_760_; 
v_k_760_ = lean_ctor_get(v_x_736_, 2);
v_x_736_ = v_k_760_;
goto _start;
}
case 11:
{
lean_object* v_k_762_; 
v_k_762_ = lean_ctor_get(v_x_736_, 2);
v_x_736_ = v_k_762_;
goto _start;
}
case 12:
{
lean_object* v_k_764_; 
v_k_764_ = lean_ctor_get(v_x_736_, 3);
v_x_736_ = v_k_764_;
goto _start;
}
case 13:
{
lean_object* v_k_766_; 
v_k_766_ = lean_ctor_get(v_x_736_, 1);
v_x_736_ = v_k_766_;
goto _start;
}
default: 
{
uint8_t v___x_768_; 
v___x_768_ = 0;
return v___x_768_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(lean_object* v_target_769_, lean_object* v_as_770_, size_t v_i_771_, size_t v_stop_772_){
_start:
{
uint8_t v___x_773_; 
v___x_773_ = lean_usize_dec_eq(v_i_771_, v_stop_772_);
if (v___x_773_ == 0)
{
uint8_t v___x_774_; lean_object* v___y_776_; lean_object* v___x_781_; 
v___x_774_ = 1;
v___x_781_ = lean_array_uget_borrowed(v_as_770_, v_i_771_);
switch(lean_obj_tag(v___x_781_))
{
case 0:
{
lean_object* v_code_782_; 
v_code_782_ = lean_ctor_get(v___x_781_, 2);
v___y_776_ = v_code_782_;
goto v___jp_775_;
}
case 1:
{
lean_object* v_code_783_; 
v_code_783_ = lean_ctor_get(v___x_781_, 1);
v___y_776_ = v_code_783_;
goto v___jp_775_;
}
default: 
{
lean_object* v_code_784_; 
v_code_784_ = lean_ctor_get(v___x_781_, 0);
v___y_776_ = v_code_784_;
goto v___jp_775_;
}
}
v___jp_775_:
{
uint8_t v___x_777_; 
v___x_777_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_target_769_, v___y_776_);
if (v___x_777_ == 0)
{
size_t v___x_778_; size_t v___x_779_; 
v___x_778_ = ((size_t)1ULL);
v___x_779_ = lean_usize_add(v_i_771_, v___x_778_);
v_i_771_ = v___x_779_;
goto _start;
}
else
{
return v___x_774_;
}
}
}
else
{
uint8_t v___x_785_; 
v___x_785_ = 0;
return v___x_785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0___boxed(lean_object* v_target_786_, lean_object* v_as_787_, lean_object* v_i_788_, lean_object* v_stop_789_){
_start:
{
size_t v_i_boxed_790_; size_t v_stop_boxed_791_; uint8_t v_res_792_; lean_object* v_r_793_; 
v_i_boxed_790_ = lean_unbox_usize(v_i_788_);
lean_dec(v_i_788_);
v_stop_boxed_791_ = lean_unbox_usize(v_stop_789_);
lean_dec(v_stop_789_);
v_res_792_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo_spec__0(v_target_786_, v_as_787_, v_i_boxed_790_, v_stop_boxed_791_);
lean_dec_ref(v_as_787_);
lean_dec(v_target_786_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo___boxed(lean_object* v_target_794_, lean_object* v_x_795_){
_start:
{
uint8_t v_res_796_; lean_object* v_r_797_; 
v_res_796_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_target_794_, v_x_795_);
lean_dec_ref(v_x_795_);
lean_dec(v_target_794_);
v_r_797_ = lean_box(v_res_796_);
return v_r_797_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__0));
v___x_800_ = l_Lean_stringToMessageData(v___x_799_);
return v___x_800_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3(void){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__2));
v___x_803_ = l_Lean_stringToMessageData(v___x_802_);
return v___x_803_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__5(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__4));
v___x_806_ = l_Lean_stringToMessageData(v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(lean_object* v_x_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
uint64_t v_v_812_; 
switch(lean_obj_tag(v_x_807_))
{
case 0:
{
lean_object* v_val_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_838_; 
v_val_817_ = lean_ctor_get(v_x_807_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v_x_807_);
if (v_isSharedCheck_838_ == 0)
{
v___x_819_ = v_x_807_;
v_isShared_820_ = v_isSharedCheck_838_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_val_817_);
lean_dec(v_x_807_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_838_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
lean_object* v___x_821_; uint8_t v___x_822_; 
v___x_821_ = lean_cstr_to_nat("4294967296");
v___x_822_ = lean_nat_dec_lt(v_val_817_, v___x_821_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_823_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1);
v___x_824_ = l_Nat_reprFast(v_val_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set_tag(v___x_819_, 3);
lean_ctor_set(v___x_819_, 0, v___x_824_);
v___x_826_ = v___x_819_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_832_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_827_ = l_Lean_MessageData_ofFormat(v___x_826_);
v___x_828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_823_);
lean_ctor_set(v___x_828_, 1, v___x_827_);
v___x_829_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3);
v___x_830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_830_, v_a_808_, v_a_809_);
return v___x_831_;
}
}
else
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_833_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_val_817_);
v___x_834_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_833_);
if (v_isShared_820_ == 0)
{
lean_ctor_set(v___x_819_, 0, v___x_834_);
v___x_836_ = v___x_819_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
case 1:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
lean_dec_ref_known(v_x_807_, 1);
v___x_839_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__5, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__5);
v___x_840_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_839_, v_a_808_, v_a_809_);
return v___x_840_;
}
case 2:
{
uint8_t v_val_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_val_841_ = lean_ctor_get_uint8(v_x_807_, 0);
lean_dec_ref_known(v_x_807_, 0);
v___x_842_ = lean_uint8_to_nat(v_val_841_);
v___x_843_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_842_);
v___x_844_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_843_);
v___x_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
return v___x_845_;
}
case 3:
{
uint16_t v_val_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_val_846_ = lean_ctor_get_uint16(v_x_807_, 0);
lean_dec_ref_known(v_x_807_, 0);
v___x_847_ = lean_uint16_to_nat(v_val_846_);
v___x_848_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_847_);
v___x_849_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_848_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
case 4:
{
uint32_t v_val_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v_val_851_ = lean_ctor_get_uint32(v_x_807_, 0);
lean_dec_ref_known(v_x_807_, 0);
v___x_852_ = lean_uint32_to_nat(v_val_851_);
v___x_853_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_852_);
v___x_854_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_853_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
default: 
{
uint64_t v_val_856_; 
v_val_856_ = lean_ctor_get_uint64(v_x_807_, 0);
lean_dec_ref(v_x_807_);
v_v_812_ = v_val_856_;
goto v___jp_811_;
}
}
v___jp_811_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_813_ = lean_uint64_to_nat(v_v_812_);
v___x_814_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_813_);
v___x_815_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_814_);
v___x_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
return v___x_816_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___boxed(lean_object* v_x_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_x_857_, v_a_858_, v_a_859_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr(lean_object* v_x_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_x_862_, v_a_865_, v_a_866_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___boxed(lean_object* v_x_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr(v_x_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
lean_dec(v_a_873_);
lean_dec_ref(v_a_872_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(lean_object* v_args_876_, lean_object* v_snd_877_, lean_object* v_range_878_, lean_object* v_b_879_, lean_object* v_i_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_stop_883_; lean_object* v_step_884_; uint8_t v___x_885_; 
v_stop_883_ = lean_ctor_get(v_range_878_, 1);
v_step_884_ = lean_ctor_get(v_range_878_, 2);
v___x_885_ = lean_nat_dec_lt(v_i_880_, v_stop_883_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; 
lean_dec(v_i_880_);
lean_dec_ref(v_snd_877_);
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v_b_879_);
return v___x_886_;
}
else
{
lean_object* v___x_887_; lean_object* v_stmts_888_; lean_object* v_fresh_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_905_; 
v___x_887_ = lean_st_ref_take(v___y_881_);
v_stmts_888_ = lean_ctor_get(v___x_887_, 0);
v_fresh_889_ = lean_ctor_get(v___x_887_, 1);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_905_ == 0)
{
v___x_891_ = v___x_887_;
v_isShared_892_ = v_isSharedCheck_905_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_fresh_889_);
lean_inc(v_stmts_888_);
lean_dec(v___x_887_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_905_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; 
v___x_893_ = lean_box(0);
v___x_894_ = lean_array_get_borrowed(v___x_893_, v_args_876_, v_i_880_);
lean_inc(v___x_894_);
v___x_895_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_894_);
lean_inc_ref(v_snd_877_);
v___x_896_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_877_, v_i_880_, v___x_895_);
v___x_897_ = lean_array_push(v_stmts_888_, v___x_896_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_897_);
v___x_899_ = v___x_891_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_897_);
lean_ctor_set(v_reuseFailAlloc_904_, 1, v_fresh_889_);
v___x_899_ = v_reuseFailAlloc_904_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_900_ = lean_st_ref_set(v___y_881_, v___x_899_);
v___x_901_ = lean_box(0);
v___x_902_ = lean_nat_add(v_i_880_, v_step_884_);
lean_dec(v_i_880_);
v_b_879_ = v___x_901_;
v_i_880_ = v___x_902_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg___boxed(lean_object* v_args_906_, lean_object* v_snd_907_, lean_object* v_range_908_, lean_object* v_b_909_, lean_object* v_i_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_906_, v_snd_907_, v_range_908_, v_b_909_, v_i_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v_range_908_);
lean_dec_ref(v_args_906_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor(lean_object* v_lhsId_914_, lean_object* v_info_915_, lean_object* v_args_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_){
_start:
{
lean_object* v_cidx_922_; lean_object* v_size_923_; lean_object* v_usize_924_; lean_object* v_ssize_925_; lean_object* v___x_926_; uint8_t v___y_1001_; uint8_t v___x_1025_; 
v_cidx_922_ = lean_ctor_get(v_info_915_, 1);
lean_inc(v_cidx_922_);
v_size_923_ = lean_ctor_get(v_info_915_, 2);
lean_inc(v_size_923_);
v_usize_924_ = lean_ctor_get(v_info_915_, 3);
lean_inc(v_usize_924_);
v_ssize_925_ = lean_ctor_get(v_info_915_, 4);
lean_inc(v_ssize_925_);
lean_dec_ref(v_info_915_);
v___x_926_ = lean_unsigned_to_nat(0u);
v___x_1025_ = lean_nat_dec_eq(v_size_923_, v___x_926_);
if (v___x_1025_ == 0)
{
lean_dec(v_usize_924_);
v___y_1001_ = v___x_1025_;
goto v___jp_1000_;
}
else
{
uint8_t v___x_1026_; 
v___x_1026_ = lean_nat_dec_eq(v_usize_924_, v___x_926_);
lean_dec(v_usize_924_);
v___y_1001_ = v___x_1026_;
goto v___jp_1000_;
}
v___jp_927_:
{
lean_object* v___x_928_; lean_object* v_nwords_929_; lean_object* v___x_930_; lean_object* v_fst_931_; lean_object* v_snd_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_999_; 
v___x_928_ = lean_unsigned_to_nat(1u);
v_nwords_929_ = lean_nat_add(v_size_923_, v___x_928_);
v___x_930_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_929_);
v_fst_931_ = lean_ctor_get(v___x_930_, 0);
v_snd_932_ = lean_ctor_get(v___x_930_, 1);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_999_ == 0)
{
v___x_934_ = v___x_930_;
v_isShared_935_ = v_isSharedCheck_999_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_snd_932_);
lean_inc(v_fst_931_);
lean_dec(v___x_930_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_999_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v_stmts_937_; lean_object* v_fresh_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_998_; 
v___x_936_ = lean_st_ref_take(v_a_918_);
v_stmts_937_ = lean_ctor_get(v___x_936_, 0);
v_fresh_938_ = lean_ctor_get(v___x_936_, 1);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_998_ == 0)
{
v___x_940_ = v___x_936_;
v_isShared_941_ = v_isSharedCheck_998_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_fresh_938_);
lean_inc(v_stmts_937_);
lean_dec(v___x_936_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_998_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_942_; lean_object* v___x_944_; 
v___x_942_ = l_Array_append___redArg(v_stmts_937_, v_fst_931_);
lean_dec(v_fst_931_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 0, v___x_942_);
v___x_944_ = v___x_940_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_942_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v_fresh_938_);
v___x_944_ = v_reuseFailAlloc_997_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_stmts_947_; lean_object* v_fresh_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_996_; 
v___x_945_ = lean_st_ref_set(v_a_918_, v___x_944_);
v___x_946_ = lean_st_ref_take(v_a_918_);
v_stmts_947_ = lean_ctor_get(v___x_946_, 0);
v_fresh_948_ = lean_ctor_get(v___x_946_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_996_ == 0)
{
v___x_950_ = v___x_946_;
v_isShared_951_ = v_isSharedCheck_996_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_fresh_948_);
lean_inc(v_stmts_947_);
lean_dec(v___x_946_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_996_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_952_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_953_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_922_, v_size_923_, v___x_926_);
v___x_954_ = lean_unsigned_to_nat(2u);
v___x_955_ = lean_mk_empty_array_with_capacity(v___x_954_);
lean_inc(v_snd_932_);
v___x_956_ = lean_array_push(v___x_955_, v_snd_932_);
v___x_957_ = lean_array_push(v___x_956_, v___x_953_);
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 3);
lean_ctor_set(v___x_934_, 1, v___x_957_);
lean_ctor_set(v___x_934_, 0, v___x_952_);
v___x_959_ = v___x_934_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_995_, 1, v___x_957_);
v___x_959_ = v_reuseFailAlloc_995_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_960_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
v___x_961_ = lean_array_push(v_stmts_947_, v___x_960_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_961_);
v___x_963_ = v___x_950_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_961_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_fresh_948_);
v___x_963_ = v_reuseFailAlloc_994_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_992_; 
v___x_964_ = lean_st_ref_set(v_a_918_, v___x_963_);
v___x_965_ = lean_array_get_size(v_args_916_);
v___x_966_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_966_, 0, v___x_926_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
lean_ctor_set(v___x_966_, 2, v___x_928_);
v___x_967_ = lean_box(0);
lean_inc(v_snd_932_);
v___x_968_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_916_, v_snd_932_, v___x_966_, v___x_967_, v___x_926_, v_a_918_);
lean_dec_ref_known(v___x_966_, 3);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_992_ == 0)
{
lean_object* v_unused_993_; 
v_unused_993_ = lean_ctor_get(v___x_968_, 0);
lean_dec(v_unused_993_);
v___x_970_ = v___x_968_;
v_isShared_971_ = v_isSharedCheck_992_;
goto v_resetjp_969_;
}
else
{
lean_dec(v___x_968_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_992_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; lean_object* v_stmts_973_; lean_object* v_fresh_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_991_; 
v___x_972_ = lean_st_ref_take(v_a_918_);
v_stmts_973_ = lean_ctor_get(v___x_972_, 0);
v_fresh_974_ = lean_ctor_get(v___x_972_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_991_ == 0)
{
v___x_976_ = v___x_972_;
v_isShared_977_ = v_isSharedCheck_991_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_fresh_974_);
lean_inc(v_stmts_973_);
lean_dec(v___x_972_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_991_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_978_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_914_);
v___x_979_ = lean_mk_empty_array_with_capacity(v___x_928_);
v___x_980_ = lean_array_push(v___x_979_, v___x_978_);
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v_snd_932_);
v___x_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_array_push(v_stmts_973_, v___x_982_);
if (v_isShared_977_ == 0)
{
lean_ctor_set(v___x_976_, 0, v___x_983_);
v___x_985_ = v___x_976_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_983_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_fresh_974_);
v___x_985_ = v_reuseFailAlloc_990_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_986_ = lean_st_ref_set(v_a_918_, v___x_985_);
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v___x_967_);
v___x_988_ = v___x_970_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_967_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
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
v___jp_1000_:
{
if (v___y_1001_ == 0)
{
lean_dec(v_ssize_925_);
goto v___jp_927_;
}
else
{
uint8_t v___x_1002_; 
v___x_1002_ = lean_nat_dec_eq(v_ssize_925_, v___x_926_);
lean_dec(v_ssize_925_);
if (v___x_1002_ == 0)
{
goto v___jp_927_;
}
else
{
lean_object* v___x_1003_; lean_object* v_stmts_1004_; lean_object* v_fresh_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_size_923_);
v___x_1003_ = lean_st_ref_take(v_a_918_);
v_stmts_1004_ = lean_ctor_get(v___x_1003_, 0);
v_fresh_1005_ = lean_ctor_get(v___x_1003_, 1);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1007_ = v___x_1003_;
v_isShared_1008_ = v_isSharedCheck_1024_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_fresh_1005_);
lean_inc(v_stmts_1004_);
lean_dec(v___x_1003_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1024_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1009_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_914_);
v___x_1010_ = lean_unsigned_to_nat(1u);
v___x_1011_ = lean_mk_empty_array_with_capacity(v___x_1010_);
v___x_1012_ = lean_array_push(v___x_1011_, v___x_1009_);
v___x_1013_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_cidx_922_);
v___x_1014_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1013_);
v___x_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1014_);
v___x_1016_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1012_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = lean_array_push(v_stmts_1004_, v___x_1016_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1017_);
v___x_1019_ = v___x_1007_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_fresh_1005_);
v___x_1019_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1020_ = lean_st_ref_set(v_a_918_, v___x_1019_);
v___x_1021_ = lean_box(0);
v___x_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
return v___x_1022_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor___boxed(lean_object* v_lhsId_1027_, lean_object* v_info_1028_, lean_object* v_args_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_1027_, v_info_1028_, v_args_1029_, v_a_1030_, v_a_1031_, v_a_1032_, v_a_1033_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_a_1031_);
lean_dec_ref(v_a_1030_);
lean_dec_ref(v_args_1029_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(lean_object* v_args_1036_, lean_object* v_snd_1037_, lean_object* v_range_1038_, lean_object* v_b_1039_, lean_object* v_i_1040_, lean_object* v_hs_1041_, lean_object* v_hl_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
lean_object* v___x_1048_; 
v___x_1048_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1036_, v_snd_1037_, v_range_1038_, v_b_1039_, v_i_1040_, v___y_1044_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___boxed(lean_object* v_args_1049_, lean_object* v_snd_1050_, lean_object* v_range_1051_, lean_object* v_b_1052_, lean_object* v_i_1053_, lean_object* v_hs_1054_, lean_object* v_hl_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(v_args_1049_, v_snd_1050_, v_range_1051_, v_b_1052_, v_i_1053_, v_hs_1054_, v_hl_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_);
lean_dec(v___y_1059_);
lean_dec_ref(v___y_1058_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
lean_dec_ref(v_range_1051_);
lean_dec_ref(v_args_1049_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(lean_object* v_args_1062_, lean_object* v_snd_1063_, lean_object* v_range_1064_, lean_object* v_b_1065_, lean_object* v_i_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_stop_1069_; lean_object* v_step_1070_; uint8_t v___x_1071_; 
v_stop_1069_ = lean_ctor_get(v_range_1064_, 1);
v_step_1070_ = lean_ctor_get(v_range_1064_, 2);
v___x_1071_ = lean_nat_dec_lt(v_i_1066_, v_stop_1069_);
if (v___x_1071_ == 0)
{
lean_object* v___x_1072_; 
lean_dec(v_i_1066_);
lean_dec_ref(v_snd_1063_);
v___x_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1072_, 0, v_b_1065_);
return v___x_1072_;
}
else
{
lean_object* v___x_1073_; lean_object* v_stmts_1074_; lean_object* v_fresh_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1093_; 
v___x_1073_ = lean_st_ref_take(v___y_1067_);
v_stmts_1074_ = lean_ctor_get(v___x_1073_, 0);
v_fresh_1075_ = lean_ctor_get(v___x_1073_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1077_ = v___x_1073_;
v_isShared_1078_ = v_isSharedCheck_1093_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_fresh_1075_);
lean_inc(v_stmts_1074_);
lean_dec(v___x_1073_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1093_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1087_; 
v___x_1079_ = lean_box(0);
v___x_1080_ = lean_unsigned_to_nat(3u);
v___x_1081_ = lean_nat_add(v_i_1066_, v___x_1080_);
v___x_1082_ = lean_array_get_borrowed(v___x_1079_, v_args_1062_, v_i_1066_);
lean_inc(v___x_1082_);
v___x_1083_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_1082_);
lean_inc_ref(v_snd_1063_);
v___x_1084_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1063_, v___x_1081_, v___x_1083_);
lean_dec(v___x_1081_);
v___x_1085_ = lean_array_push(v_stmts_1074_, v___x_1084_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1085_);
v___x_1087_ = v___x_1077_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1085_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_fresh_1075_);
v___x_1087_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = lean_st_ref_set(v___y_1067_, v___x_1087_);
v___x_1089_ = lean_box(0);
v___x_1090_ = lean_nat_add(v_i_1066_, v_step_1070_);
lean_dec(v_i_1066_);
v_b_1065_ = v___x_1089_;
v_i_1066_ = v___x_1090_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg___boxed(lean_object* v_args_1094_, lean_object* v_snd_1095_, lean_object* v_range_1096_, lean_object* v_b_1097_, lean_object* v_i_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1094_, v_snd_1095_, v_range_1096_, v_b_1097_, v_i_1098_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v_range_1096_);
lean_dec_ref(v_args_1094_);
return v_res_1101_;
}
}
static uint64_t _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0(void){
_start:
{
lean_object* v___x_1102_; uint64_t v___x_1103_; 
v___x_1102_ = lean_unsigned_to_nat(1723u);
v___x_1103_ = lean_uint64_of_nat(v___x_1102_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap(lean_object* v_lhsId_1104_, lean_object* v_fn_1105_, lean_object* v_args_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v_nwords_1114_; lean_object* v___x_1115_; lean_object* v_fst_1116_; lean_object* v_snd_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1233_; 
v___x_1112_ = lean_array_get_size(v_args_1106_);
v___x_1113_ = lean_unsigned_to_nat(4u);
v_nwords_1114_ = lean_nat_add(v___x_1112_, v___x_1113_);
v___x_1115_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1114_);
v_fst_1116_ = lean_ctor_get(v___x_1115_, 0);
v_snd_1117_ = lean_ctor_get(v___x_1115_, 1);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1119_ = v___x_1115_;
v_isShared_1120_ = v_isSharedCheck_1233_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_snd_1117_);
lean_inc(v_fst_1116_);
lean_dec(v___x_1115_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1233_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v_stmts_1122_; lean_object* v_fresh_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1232_; 
v___x_1121_ = lean_st_ref_take(v_a_1108_);
v_stmts_1122_ = lean_ctor_get(v___x_1121_, 0);
v_fresh_1123_ = lean_ctor_get(v___x_1121_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1125_ = v___x_1121_;
v_isShared_1126_ = v_isSharedCheck_1232_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_fresh_1123_);
lean_inc(v_stmts_1122_);
lean_dec(v___x_1121_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1232_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1129_; 
v___x_1127_ = l_Array_append___redArg(v_stmts_1122_, v_fst_1116_);
lean_dec(v_fst_1116_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 0, v___x_1127_);
v___x_1129_ = v___x_1125_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v___x_1127_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_fresh_1123_);
v___x_1129_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v_stmts_1132_; lean_object* v_fresh_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1230_; 
v___x_1130_ = lean_st_ref_set(v_a_1108_, v___x_1129_);
v___x_1131_ = lean_st_ref_take(v_a_1108_);
v_stmts_1132_ = lean_ctor_get(v___x_1131_, 0);
v_fresh_1133_ = lean_ctor_get(v___x_1131_, 1);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1135_ = v___x_1131_;
v_isShared_1136_ = v_isSharedCheck_1230_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_fresh_1133_);
lean_inc(v_stmts_1132_);
lean_dec(v___x_1131_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1230_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1137_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1138_ = lean_unsigned_to_nat(245u);
v___x_1139_ = lean_unsigned_to_nat(0u);
v___x_1140_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___x_1138_, v___x_1112_, v___x_1139_);
v___x_1141_ = lean_unsigned_to_nat(2u);
v___x_1142_ = lean_mk_empty_array_with_capacity(v___x_1141_);
lean_inc(v_snd_1117_);
v___x_1143_ = lean_array_push(v___x_1142_, v_snd_1117_);
v___x_1144_ = lean_array_push(v___x_1143_, v___x_1140_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set_tag(v___x_1119_, 3);
lean_ctor_set(v___x_1119_, 1, v___x_1144_);
lean_ctor_set(v___x_1119_, 0, v___x_1137_);
v___x_1146_ = v___x_1119_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1137_);
lean_ctor_set(v_reuseFailAlloc_1229_, 1, v___x_1144_);
v___x_1146_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1147_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
v___x_1148_ = lean_array_push(v_stmts_1132_, v___x_1147_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1148_);
v___x_1150_ = v___x_1135_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1148_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_fresh_1133_);
v___x_1150_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; uint64_t v___y_1154_; 
v___x_1151_ = lean_st_ref_set(v_a_1108_, v___x_1150_);
v___x_1152_ = lean_st_ref_take(v_a_1108_);
if (lean_obj_tag(v_fn_1105_) == 0)
{
uint64_t v___x_1226_; 
v___x_1226_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_1154_ = v___x_1226_;
goto v___jp_1153_;
}
else
{
uint64_t v_hash_1227_; 
v_hash_1227_ = lean_ctor_get_uint64(v_fn_1105_, sizeof(void*)*2);
v___y_1154_ = v_hash_1227_;
goto v___jp_1153_;
}
v___jp_1153_:
{
lean_object* v_stmts_1155_; lean_object* v_fresh_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1225_; 
v_stmts_1155_ = lean_ctor_get(v___x_1152_, 0);
v_fresh_1156_ = lean_ctor_get(v___x_1152_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1158_ = v___x_1152_;
v_isShared_1159_ = v_isSharedCheck_1225_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_fresh_1156_);
lean_inc(v_stmts_1155_);
lean_dec(v___x_1152_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1225_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1160_ = lean_uint64_to_nat(v___y_1154_);
v___x_1161_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1160_);
lean_inc(v_snd_1117_);
v___x_1162_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1117_, v___x_1139_, v___x_1161_);
v___x_1163_ = lean_array_push(v_stmts_1155_, v___x_1162_);
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v___x_1163_);
v___x_1165_ = v___x_1158_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1163_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_fresh_1156_);
v___x_1165_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v_stmts_1168_; lean_object* v_fresh_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1223_; 
v___x_1166_ = lean_st_ref_set(v_a_1108_, v___x_1165_);
v___x_1167_ = lean_st_ref_take(v_a_1108_);
v_stmts_1168_ = lean_ctor_get(v___x_1167_, 0);
v_fresh_1169_ = lean_ctor_get(v___x_1167_, 1);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1171_ = v___x_1167_;
v_isShared_1172_ = v_isSharedCheck_1223_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_fresh_1169_);
lean_inc(v_stmts_1168_);
lean_dec(v___x_1167_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1223_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1178_; 
v___x_1173_ = lean_unsigned_to_nat(1u);
v___x_1174_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
lean_inc(v_snd_1117_);
v___x_1175_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1117_, v___x_1173_, v___x_1174_);
v___x_1176_ = lean_array_push(v_stmts_1168_, v___x_1175_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v___x_1176_);
v___x_1178_ = v___x_1171_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1176_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v_fresh_1169_);
v___x_1178_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_stmts_1181_; lean_object* v_fresh_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1221_; 
v___x_1179_ = lean_st_ref_set(v_a_1108_, v___x_1178_);
v___x_1180_ = lean_st_ref_take(v_a_1108_);
v_stmts_1181_ = lean_ctor_get(v___x_1180_, 0);
v_fresh_1182_ = lean_ctor_get(v___x_1180_, 1);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1184_ = v___x_1180_;
v_isShared_1185_ = v_isSharedCheck_1221_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_fresh_1182_);
lean_inc(v_stmts_1181_);
lean_dec(v___x_1180_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1221_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1186_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1112_);
lean_inc(v_snd_1117_);
v___x_1187_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1117_, v___x_1141_, v___x_1186_);
v___x_1188_ = lean_array_push(v_stmts_1181_, v___x_1187_);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 0, v___x_1188_);
v___x_1190_ = v___x_1184_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1188_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_fresh_1182_);
v___x_1190_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1218_; 
v___x_1191_ = lean_st_ref_set(v_a_1108_, v___x_1190_);
v___x_1192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1139_);
lean_ctor_set(v___x_1192_, 1, v___x_1112_);
lean_ctor_set(v___x_1192_, 2, v___x_1173_);
v___x_1193_ = lean_box(0);
lean_inc(v_snd_1117_);
v___x_1194_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1106_, v_snd_1117_, v___x_1192_, v___x_1193_, v___x_1139_, v_a_1108_);
lean_dec_ref_known(v___x_1192_, 3);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v___x_1194_, 0);
lean_dec(v_unused_1219_);
v___x_1196_ = v___x_1194_;
v_isShared_1197_ = v_isSharedCheck_1218_;
goto v_resetjp_1195_;
}
else
{
lean_dec(v___x_1194_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1218_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v_stmts_1199_; lean_object* v_fresh_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1217_; 
v___x_1198_ = lean_st_ref_take(v_a_1108_);
v_stmts_1199_ = lean_ctor_get(v___x_1198_, 0);
v_fresh_1200_ = lean_ctor_get(v___x_1198_, 1);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1202_ = v___x_1198_;
v_isShared_1203_ = v_isSharedCheck_1217_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_fresh_1200_);
lean_inc(v_stmts_1199_);
lean_dec(v___x_1198_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1217_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1211_; 
v___x_1204_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1104_);
v___x_1205_ = lean_mk_empty_array_with_capacity(v___x_1173_);
v___x_1206_ = lean_array_push(v___x_1205_, v___x_1204_);
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_snd_1117_);
v___x_1208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1206_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v___x_1209_ = lean_array_push(v_stmts_1199_, v___x_1208_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1209_);
v___x_1211_ = v___x_1202_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1209_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v_fresh_1200_);
v___x_1211_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1212_ = lean_st_ref_set(v_a_1108_, v___x_1211_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1193_);
v___x_1214_ = v___x_1196_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1193_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap___boxed(lean_object* v_lhsId_1234_, lean_object* v_fn_1235_, lean_object* v_args_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_1234_, v_fn_1235_, v_args_1236_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
lean_dec_ref(v_args_1236_);
lean_dec(v_fn_1235_);
return v_res_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(lean_object* v_args_1243_, lean_object* v_snd_1244_, lean_object* v_range_1245_, lean_object* v_b_1246_, lean_object* v_i_1247_, lean_object* v_hs_1248_, lean_object* v_hl_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1243_, v_snd_1244_, v_range_1245_, v_b_1246_, v_i_1247_, v___y_1251_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___boxed(lean_object* v_args_1256_, lean_object* v_snd_1257_, lean_object* v_range_1258_, lean_object* v_b_1259_, lean_object* v_i_1260_, lean_object* v_hs_1261_, lean_object* v_hl_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(v_args_1256_, v_snd_1257_, v_range_1258_, v_b_1259_, v_i_1260_, v_hs_1261_, v_hl_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
lean_dec(v___y_1264_);
lean_dec_ref(v___y_1263_);
lean_dec_ref(v_range_1258_);
lean_dec_ref(v_args_1256_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(size_t v_sz_1269_, size_t v_i_1270_, lean_object* v_bs_1271_){
_start:
{
uint8_t v___x_1272_; 
v___x_1272_ = lean_usize_dec_lt(v_i_1270_, v_sz_1269_);
if (v___x_1272_ == 0)
{
return v_bs_1271_;
}
else
{
lean_object* v_v_1273_; lean_object* v___x_1274_; lean_object* v_bs_x27_1275_; lean_object* v___x_1276_; size_t v___x_1277_; size_t v___x_1278_; lean_object* v___x_1279_; 
v_v_1273_ = lean_array_uget(v_bs_1271_, v_i_1270_);
v___x_1274_ = lean_unsigned_to_nat(0u);
v_bs_x27_1275_ = lean_array_uset(v_bs_1271_, v_i_1270_, v___x_1274_);
v___x_1276_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_v_1273_);
v___x_1277_ = ((size_t)1ULL);
v___x_1278_ = lean_usize_add(v_i_1270_, v___x_1277_);
v___x_1279_ = lean_array_uset(v_bs_x27_1275_, v_i_1270_, v___x_1276_);
v_i_1270_ = v___x_1278_;
v_bs_1271_ = v___x_1279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1___boxed(lean_object* v_sz_1281_, lean_object* v_i_1282_, lean_object* v_bs_1283_){
_start:
{
size_t v_sz_boxed_1284_; size_t v_i_boxed_1285_; lean_object* v_res_1286_; 
v_sz_boxed_1284_ = lean_unbox_usize(v_sz_1281_);
lean_dec(v_sz_1281_);
v_i_boxed_1285_ = lean_unbox_usize(v_i_1282_);
lean_dec(v_i_1282_);
v_res_1286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_boxed_1284_, v_i_boxed_1285_, v_bs_1283_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(size_t v_sz_1287_, size_t v_i_1288_, lean_object* v_bs_1289_){
_start:
{
uint8_t v___x_1290_; 
v___x_1290_ = lean_usize_dec_lt(v_i_1288_, v_sz_1287_);
if (v___x_1290_ == 0)
{
return v_bs_1289_;
}
else
{
lean_object* v_v_1291_; lean_object* v___x_1292_; lean_object* v_bs_x27_1293_; lean_object* v___x_1294_; size_t v___x_1295_; size_t v___x_1296_; lean_object* v___x_1297_; 
v_v_1291_ = lean_array_uget(v_bs_1289_, v_i_1288_);
v___x_1292_ = lean_unsigned_to_nat(0u);
v_bs_x27_1293_ = lean_array_uset(v_bs_1289_, v_i_1288_, v___x_1292_);
v___x_1294_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v_v_1291_);
v___x_1295_ = ((size_t)1ULL);
v___x_1296_ = lean_usize_add(v_i_1288_, v___x_1295_);
v___x_1297_ = lean_array_uset(v_bs_x27_1293_, v_i_1288_, v___x_1294_);
v_i_1288_ = v___x_1296_;
v_bs_1289_ = v___x_1297_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0___boxed(lean_object* v_sz_1299_, lean_object* v_i_1300_, lean_object* v_bs_1301_){
_start:
{
size_t v_sz_boxed_1302_; size_t v_i_boxed_1303_; lean_object* v_res_1304_; 
v_sz_boxed_1302_ = lean_unbox_usize(v_sz_1299_);
lean_dec(v_sz_1299_);
v_i_boxed_1303_ = lean_unbox_usize(v_i_1300_);
lean_dec(v_i_1300_);
v_res_1304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_boxed_1302_, v_i_boxed_1303_, v_bs_1301_);
return v_res_1304_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
return v___x_1306_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4));
v___x_1313_ = lean_string_utf8_byte_size(v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(lean_object* v_lhsId_1317_, lean_object* v_fn_1318_, lean_object* v_args_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = lean_st_ref_get(v_a_1321_);
lean_inc(v_fn_1318_);
v___x_1349_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1318_, v_a_1321_);
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1556_; 
v_a_1350_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1352_ = v___x_1349_;
v_isShared_1353_ = v_isSharedCheck_1556_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1349_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1556_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___y_1355_; lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1420_; lean_object* v_env_1475_; lean_object* v___y_1477_; 
v_env_1475_ = lean_ctor_get(v___x_1348_, 0);
lean_inc_ref(v_env_1475_);
lean_dec(v___x_1348_);
if (lean_obj_tag(v_a_1350_) == 0)
{
size_t v_sz_1547_; size_t v___x_1548_; lean_object* v___x_1549_; 
v_sz_1547_ = lean_array_size(v_args_1319_);
v___x_1548_ = ((size_t)0ULL);
v___x_1549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_1547_, v___x_1548_, v_args_1319_);
v___y_1477_ = v___x_1549_;
goto v___jp_1476_;
}
else
{
lean_object* v_val_1550_; lean_object* v_params_1551_; lean_object* v___x_1552_; size_t v_sz_1553_; size_t v___x_1554_; lean_object* v___x_1555_; 
v_val_1550_ = lean_ctor_get(v_a_1350_, 0);
lean_inc(v_val_1550_);
lean_dec_ref_known(v_a_1350_, 1);
v_params_1551_ = lean_ctor_get(v_val_1550_, 3);
lean_inc_ref(v_params_1551_);
lean_dec(v_val_1550_);
v___x_1552_ = l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(v_params_1551_, v_args_1319_);
lean_dec_ref(v_args_1319_);
lean_dec_ref(v_params_1551_);
v_sz_1553_ = lean_array_size(v___x_1552_);
v___x_1554_ = ((size_t)0ULL);
v___x_1555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_1553_, v___x_1554_, v___x_1552_);
v___y_1477_ = v___x_1555_;
goto v___jp_1476_;
}
v___jp_1354_:
{
lean_object* v___x_1356_; lean_object* v_stmts_1357_; lean_object* v_fresh_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1379_; 
v___x_1356_ = lean_st_ref_take(v_a_1320_);
v_stmts_1357_ = lean_ctor_get(v___x_1356_, 0);
v_fresh_1358_ = lean_ctor_get(v___x_1356_, 1);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1360_ = v___x_1356_;
v_isShared_1361_ = v_isSharedCheck_1379_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_fresh_1358_);
lean_inc(v_stmts_1357_);
lean_dec(v___x_1356_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1379_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1372_; 
v___x_1362_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1317_);
v___x_1363_ = lean_unsigned_to_nat(1u);
v___x_1364_ = lean_mk_empty_array_with_capacity(v___x_1363_);
v___x_1365_ = lean_array_push(v___x_1364_, v___x_1362_);
v___x_1366_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1318_);
v___x_1367_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
lean_ctor_set(v___x_1367_, 1, v___y_1355_);
v___x_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1367_);
v___x_1369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1365_);
lean_ctor_set(v___x_1369_, 1, v___x_1368_);
v___x_1370_ = lean_array_push(v_stmts_1357_, v___x_1369_);
if (v_isShared_1361_ == 0)
{
lean_ctor_set(v___x_1360_, 0, v___x_1370_);
v___x_1372_ = v___x_1360_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_fresh_1358_);
v___x_1372_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1373_ = lean_st_ref_set(v_a_1320_, v___x_1372_);
v___x_1374_ = lean_box(0);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 0, v___x_1374_);
v___x_1376_ = v___x_1352_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
v___jp_1380_:
{
lean_object* v___x_1383_; lean_object* v_stmts_1384_; lean_object* v_fresh_1385_; lean_object* v___x_1387_; uint8_t v_isShared_1388_; uint8_t v_isSharedCheck_1416_; 
v___x_1383_ = lean_st_ref_take(v_a_1320_);
v_stmts_1384_ = lean_ctor_get(v___x_1383_, 0);
v_fresh_1385_ = lean_ctor_get(v___x_1383_, 1);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1387_ = v___x_1383_;
v_isShared_1388_ = v_isSharedCheck_1416_;
goto v_resetjp_1386_;
}
else
{
lean_inc(v_fresh_1385_);
lean_inc(v_stmts_1384_);
lean_dec(v___x_1383_);
v___x_1387_ = lean_box(0);
v_isShared_1388_ = v_isSharedCheck_1416_;
goto v_resetjp_1386_;
}
v_resetjp_1386_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1393_; 
v___x_1389_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___y_1381_);
lean_ctor_set(v___x_1389_, 1, v___y_1382_);
v___x_1390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
v___x_1391_ = lean_array_push(v_stmts_1384_, v___x_1390_);
if (v_isShared_1388_ == 0)
{
lean_ctor_set(v___x_1387_, 0, v___x_1391_);
v___x_1393_ = v___x_1387_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1415_, 1, v_fresh_1385_);
v___x_1393_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v_stmts_1396_; lean_object* v_fresh_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1414_; 
v___x_1394_ = lean_st_ref_set(v_a_1320_, v___x_1393_);
v___x_1395_ = lean_st_ref_take(v_a_1320_);
v_stmts_1396_ = lean_ctor_get(v___x_1395_, 0);
v_fresh_1397_ = lean_ctor_get(v___x_1395_, 1);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1399_ = v___x_1395_;
v_isShared_1400_ = v_isSharedCheck_1414_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_fresh_1397_);
lean_inc(v_stmts_1396_);
lean_dec(v___x_1395_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1414_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1401_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1317_);
v___x_1402_ = lean_unsigned_to_nat(1u);
v___x_1403_ = lean_mk_empty_array_with_capacity(v___x_1402_);
v___x_1404_ = lean_array_push(v___x_1403_, v___x_1401_);
v___x_1405_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0);
v___x_1406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1404_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = lean_array_push(v_stmts_1396_, v___x_1406_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1407_);
v___x_1409_ = v___x_1399_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1407_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_fresh_1397_);
v___x_1409_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1410_ = lean_st_ref_set(v_a_1320_, v___x_1409_);
v___x_1411_ = lean_box(0);
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
return v___x_1412_;
}
}
}
}
}
v___jp_1417_:
{
lean_object* v___x_1421_; lean_object* v_stmts_1422_; lean_object* v_fresh_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1474_; 
v___x_1421_ = lean_st_ref_take(v_a_1320_);
v_stmts_1422_ = lean_ctor_get(v___x_1421_, 0);
v_fresh_1423_ = lean_ctor_get(v___x_1421_, 1);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1425_ = v___x_1421_;
v_isShared_1426_ = v_isSharedCheck_1474_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_fresh_1423_);
lean_inc(v_stmts_1422_);
lean_dec(v___x_1421_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1474_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1431_; 
v___x_1427_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1427_, 0, v___y_1418_);
lean_ctor_set(v___x_1427_, 1, v___y_1420_);
v___x_1428_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
v___x_1429_ = lean_array_push(v_stmts_1422_, v___x_1428_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1429_);
v___x_1431_ = v___x_1425_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_fresh_1423_);
v___x_1431_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v_stmts_1434_; lean_object* v_fresh_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1472_; 
v___x_1432_ = lean_st_ref_set(v_a_1320_, v___x_1431_);
v___x_1433_ = lean_st_ref_take(v_a_1320_);
v_stmts_1434_ = lean_ctor_get(v___x_1433_, 0);
v_fresh_1435_ = lean_ctor_get(v___x_1433_, 1);
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1472_ == 0)
{
v___x_1437_ = v___x_1433_;
v_isShared_1438_ = v_isSharedCheck_1472_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_fresh_1435_);
lean_inc(v_stmts_1434_);
lean_dec(v___x_1433_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1472_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1439_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___y_1419_);
v___x_1440_ = lean_unsigned_to_nat(2u);
v___x_1441_ = lean_mk_empty_array_with_capacity(v___x_1440_);
lean_inc_ref(v___x_1439_);
v___x_1442_ = lean_array_push(v___x_1441_, v___x_1439_);
v___x_1443_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1));
v___x_1444_ = lean_array_push(v___x_1442_, v___x_1439_);
v___x_1445_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
v___x_1446_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
v___x_1447_ = lean_array_push(v_stmts_1434_, v___x_1446_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1447_);
v___x_1449_ = v___x_1437_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v_fresh_1435_);
v___x_1449_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v_stmts_1452_; lean_object* v_fresh_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1470_; 
v___x_1450_ = lean_st_ref_set(v_a_1320_, v___x_1449_);
v___x_1451_ = lean_st_ref_take(v_a_1320_);
v_stmts_1452_ = lean_ctor_get(v___x_1451_, 0);
v_fresh_1453_ = lean_ctor_get(v___x_1451_, 1);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1455_ = v___x_1451_;
v_isShared_1456_ = v_isSharedCheck_1470_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_fresh_1453_);
lean_inc(v_stmts_1452_);
lean_dec(v___x_1451_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1470_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1457_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1317_);
v___x_1458_ = lean_unsigned_to_nat(1u);
v___x_1459_ = lean_mk_empty_array_with_capacity(v___x_1458_);
v___x_1460_ = lean_array_push(v___x_1459_, v___x_1457_);
v___x_1461_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0);
v___x_1462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1460_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = lean_array_push(v_stmts_1452_, v___x_1462_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v___x_1463_);
v___x_1465_ = v___x_1455_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1463_);
lean_ctor_set(v_reuseFailAlloc_1469_, 1, v_fresh_1453_);
v___x_1465_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1466_ = lean_st_ref_set(v_a_1320_, v___x_1465_);
v___x_1467_ = lean_box(0);
v___x_1468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1467_);
return v___x_1468_;
}
}
}
}
}
}
}
v___jp_1476_:
{
lean_object* v___x_1478_; 
lean_inc(v_fn_1318_);
v___x_1478_ = l_Lean_getExternAttrData_x3f(v_env_1475_, v_fn_1318_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_del_object(v___x_1352_);
v___y_1324_ = v___y_1477_;
v___y_1325_ = v_a_1320_;
goto v___jp_1323_;
}
else
{
lean_object* v_val_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1546_; 
v_val_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1546_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_val_1479_);
lean_dec(v___x_1478_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1546_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1483_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3));
v___x_1484_ = l_Lean_getExternEntryFor(v_val_1479_, v___x_1483_);
lean_dec(v_val_1479_);
if (lean_obj_tag(v___x_1484_) == 1)
{
lean_object* v_val_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1545_; 
v_val_1485_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1487_ = v___x_1484_;
v_isShared_1488_ = v_isSharedCheck_1545_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_val_1485_);
lean_dec(v___x_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1545_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
if (lean_obj_tag(v_val_1485_) == 2)
{
lean_object* v_fn_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1543_; 
v_fn_1489_ = lean_ctor_get(v_val_1485_, 1);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_val_1485_);
if (v_isSharedCheck_1543_ == 0)
{
lean_object* v_unused_1544_; 
v_unused_1544_ = lean_ctor_get(v_val_1485_, 0);
lean_dec(v_unused_1544_);
v___x_1491_ = v_val_1485_;
v_isShared_1492_ = v_isSharedCheck_1543_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_fn_1489_);
lean_dec(v_val_1485_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1543_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v___x_1493_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4));
v___x_1494_ = lean_string_utf8_byte_size(v_fn_1489_);
v___x_1495_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5);
v___x_1496_ = lean_nat_dec_le(v___x_1495_, v___x_1494_);
if (v___x_1496_ == 0)
{
lean_del_object(v___x_1491_);
lean_dec_ref(v_fn_1489_);
lean_del_object(v___x_1487_);
lean_del_object(v___x_1481_);
v___y_1355_ = v___y_1477_;
goto v___jp_1354_;
}
else
{
lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1497_ = lean_unsigned_to_nat(0u);
v___x_1498_ = lean_string_memcmp(v_fn_1489_, v___x_1493_, v___x_1497_, v___x_1497_, v___x_1495_);
if (v___x_1498_ == 0)
{
lean_del_object(v___x_1491_);
lean_dec_ref(v_fn_1489_);
lean_del_object(v___x_1487_);
lean_del_object(v___x_1481_);
v___y_1355_ = v___y_1477_;
goto v___jp_1354_;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; size_t v_sz_1504_; size_t v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
lean_del_object(v___x_1352_);
lean_dec(v_fn_1318_);
v___x_1499_ = lean_unsigned_to_nat(9u);
lean_inc_ref(v_fn_1489_);
v___x_1500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1500_, 0, v_fn_1489_);
lean_ctor_set(v___x_1500_, 1, v___x_1497_);
lean_ctor_set(v___x_1500_, 2, v___x_1494_);
v___x_1501_ = l_String_Slice_Pos_nextn(v___x_1500_, v___x_1497_, v___x_1499_);
lean_dec_ref_known(v___x_1500_, 3);
v___x_1502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1502_, 0, v_fn_1489_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
lean_ctor_set(v___x_1502_, 2, v___x_1494_);
v___x_1503_ = l_String_Slice_toString(v___x_1502_);
lean_dec_ref_known(v___x_1502_, 3);
v_sz_1504_ = lean_array_size(v___y_1477_);
v___x_1505_ = ((size_t)0ULL);
v___x_1506_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_1504_, v___x_1505_, v___y_1477_);
v___x_1507_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6));
v___x_1508_ = lean_string_dec_eq(v___x_1503_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1509_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7));
v___x_1510_ = lean_string_dec_eq(v___x_1503_, v___x_1509_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; uint8_t v___x_1512_; 
v___x_1511_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1512_ = lean_string_dec_eq(v___x_1503_, v___x_1511_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1513_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__8));
v___x_1514_ = lean_string_dec_eq(v___x_1503_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v_stmts_1516_; lean_object* v_fresh_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1542_; 
v___x_1515_ = lean_st_ref_take(v_a_1320_);
v_stmts_1516_ = lean_ctor_get(v___x_1515_, 0);
v_fresh_1517_ = lean_ctor_get(v___x_1515_, 1);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1519_ = v___x_1515_;
v_isShared_1520_ = v_isSharedCheck_1542_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_fresh_1517_);
lean_inc(v_stmts_1516_);
lean_dec(v___x_1515_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1542_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1521_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1317_);
v___x_1522_ = lean_unsigned_to_nat(1u);
v___x_1523_ = lean_mk_empty_array_with_capacity(v___x_1522_);
v___x_1524_ = lean_array_push(v___x_1523_, v___x_1521_);
if (v_isShared_1492_ == 0)
{
lean_ctor_set_tag(v___x_1491_, 3);
lean_ctor_set(v___x_1491_, 1, v___x_1506_);
lean_ctor_set(v___x_1491_, 0, v___x_1503_);
v___x_1526_ = v___x_1491_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1503_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v___x_1506_);
v___x_1526_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1527_; lean_object* v___x_1529_; 
v___x_1527_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1526_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 0, v___x_1527_);
v___x_1529_ = v___x_1487_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___x_1527_);
v___x_1529_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1533_; 
v___x_1530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1524_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = lean_array_push(v_stmts_1516_, v___x_1530_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1531_);
v___x_1533_ = v___x_1519_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1531_);
lean_ctor_set(v_reuseFailAlloc_1539_, 1, v_fresh_1517_);
v___x_1533_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1537_; 
v___x_1534_ = lean_st_ref_set(v_a_1320_, v___x_1533_);
v___x_1535_ = lean_box(0);
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1535_);
v___x_1537_ = v___x_1481_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1535_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1491_);
lean_del_object(v___x_1487_);
lean_del_object(v___x_1481_);
v___y_1381_ = v___x_1503_;
v___y_1382_ = v___x_1506_;
goto v___jp_1380_;
}
}
else
{
lean_del_object(v___x_1491_);
lean_del_object(v___x_1487_);
lean_del_object(v___x_1481_);
v___y_1381_ = v___x_1503_;
v___y_1382_ = v___x_1506_;
goto v___jp_1380_;
}
}
else
{
lean_del_object(v___x_1491_);
lean_del_object(v___x_1487_);
lean_del_object(v___x_1481_);
v___y_1418_ = v___x_1503_;
v___y_1419_ = v___x_1497_;
v___y_1420_ = v___x_1506_;
goto v___jp_1417_;
}
}
else
{
lean_del_object(v___x_1491_);
lean_del_object(v___x_1487_);
lean_del_object(v___x_1481_);
v___y_1418_ = v___x_1503_;
v___y_1419_ = v___x_1497_;
v___y_1420_ = v___x_1506_;
goto v___jp_1417_;
}
}
}
}
}
else
{
lean_del_object(v___x_1487_);
lean_dec(v_val_1485_);
lean_del_object(v___x_1481_);
lean_del_object(v___x_1352_);
v___y_1324_ = v___y_1477_;
v___y_1325_ = v_a_1320_;
goto v___jp_1323_;
}
}
}
else
{
lean_dec(v___x_1484_);
lean_del_object(v___x_1481_);
lean_del_object(v___x_1352_);
v___y_1324_ = v___y_1477_;
v___y_1325_ = v_a_1320_;
goto v___jp_1323_;
}
}
}
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec(v___x_1348_);
lean_dec_ref(v_args_1319_);
lean_dec(v_fn_1318_);
lean_dec_ref(v_lhsId_1317_);
v_a_1557_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1349_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1349_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
v___jp_1323_:
{
lean_object* v___x_1326_; lean_object* v_stmts_1327_; lean_object* v_fresh_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1347_; 
v___x_1326_ = lean_st_ref_take(v___y_1325_);
v_stmts_1327_ = lean_ctor_get(v___x_1326_, 0);
v_fresh_1328_ = lean_ctor_get(v___x_1326_, 1);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1330_ = v___x_1326_;
v_isShared_1331_ = v_isSharedCheck_1347_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_fresh_1328_);
lean_inc(v_stmts_1327_);
lean_dec(v___x_1326_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1347_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1342_; 
v___x_1332_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1317_);
v___x_1333_ = lean_unsigned_to_nat(1u);
v___x_1334_ = lean_mk_empty_array_with_capacity(v___x_1333_);
v___x_1335_ = lean_array_push(v___x_1334_, v___x_1332_);
v___x_1336_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1318_);
v___x_1337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1336_);
lean_ctor_set(v___x_1337_, 1, v___y_1324_);
v___x_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1338_, 0, v___x_1337_);
v___x_1339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1335_);
lean_ctor_set(v___x_1339_, 1, v___x_1338_);
v___x_1340_ = lean_array_push(v_stmts_1327_, v___x_1339_);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 0, v___x_1340_);
v___x_1342_ = v___x_1330_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1340_);
lean_ctor_set(v_reuseFailAlloc_1346_, 1, v_fresh_1328_);
v___x_1342_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1343_ = lean_st_ref_set(v___y_1325_, v___x_1342_);
v___x_1344_ = lean_box(0);
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1344_);
return v___x_1345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___boxed(lean_object* v_lhsId_1565_, lean_object* v_fn_1566_, lean_object* v_args_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_1565_, v_fn_1566_, v_args_1567_, v_a_1568_, v_a_1569_);
lean_dec(v_a_1569_);
lean_dec(v_a_1568_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap(lean_object* v_lhsId_1572_, lean_object* v_fn_1573_, lean_object* v_args_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_1572_, v_fn_1573_, v_args_1574_, v_a_1576_, v_a_1578_);
return v___x_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___boxed(lean_object* v_lhsId_1581_, lean_object* v_fn_1582_, lean_object* v_args_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_Compiler_LCNF_EmitYul_emitFap(v_lhsId_1581_, v_fn_1582_, v_args_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(lean_object* v_lhsId_1593_, lean_object* v_fvarId_1594_, lean_object* v_args_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v___y_1599_; lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1628_ = lean_array_get_size(v_args_1595_);
v___x_1629_ = lean_unsigned_to_nat(1u);
v___x_1630_ = lean_nat_dec_eq(v___x_1628_, v___x_1629_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1631_ = lean_unsigned_to_nat(2u);
v___x_1632_ = lean_nat_dec_eq(v___x_1628_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1633_; 
v___x_1633_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0));
v___y_1599_ = v___x_1633_;
goto v___jp_1598_;
}
else
{
lean_object* v___x_1634_; 
v___x_1634_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1));
v___y_1599_ = v___x_1634_;
goto v___jp_1598_;
}
}
else
{
lean_object* v___x_1635_; 
v___x_1635_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2));
v___y_1599_ = v___x_1635_;
goto v___jp_1598_;
}
v___jp_1598_:
{
lean_object* v___x_1600_; lean_object* v_stmts_1601_; lean_object* v_fresh_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1627_; 
v___x_1600_ = lean_st_ref_take(v_a_1596_);
v_stmts_1601_ = lean_ctor_get(v___x_1600_, 0);
v_fresh_1602_ = lean_ctor_get(v___x_1600_, 1);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1604_ = v___x_1600_;
v_isShared_1605_ = v_isSharedCheck_1627_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_fresh_1602_);
lean_inc(v_stmts_1601_);
lean_dec(v___x_1600_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1627_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
size_t v_sz_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; size_t v___x_1612_; lean_object* v___x_1613_; lean_object* v_all_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
v_sz_1606_ = lean_array_size(v_args_1595_);
v___x_1607_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_1594_);
v___x_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
v___x_1609_ = lean_unsigned_to_nat(1u);
v___x_1610_ = lean_mk_empty_array_with_capacity(v___x_1609_);
lean_inc_ref(v___x_1610_);
v___x_1611_ = lean_array_push(v___x_1610_, v___x_1608_);
v___x_1612_ = ((size_t)0ULL);
v___x_1613_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_1606_, v___x_1612_, v_args_1595_);
v_all_1614_ = l_Array_append___redArg(v___x_1611_, v___x_1613_);
lean_dec_ref(v___x_1613_);
v___x_1615_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1593_);
v___x_1616_ = lean_array_push(v___x_1610_, v___x_1615_);
lean_inc_ref(v___y_1599_);
v___x_1617_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___y_1599_);
lean_ctor_set(v___x_1617_, 1, v_all_1614_);
v___x_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1617_);
v___x_1619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1616_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = lean_array_push(v_stmts_1601_, v___x_1619_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 0, v___x_1620_);
v___x_1622_ = v___x_1604_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v_fresh_1602_);
v___x_1622_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1623_ = lean_st_ref_set(v_a_1596_, v___x_1622_);
v___x_1624_ = lean_box(0);
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
return v___x_1625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___boxed(lean_object* v_lhsId_1636_, lean_object* v_fvarId_1637_, lean_object* v_args_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_1636_, v_fvarId_1637_, v_args_1638_, v_a_1639_);
lean_dec(v_a_1639_);
return v_res_1641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply(lean_object* v_lhsId_1642_, lean_object* v_fvarId_1643_, lean_object* v_args_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_1642_, v_fvarId_1643_, v_args_1644_, v_a_1646_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___boxed(lean_object* v_lhsId_1651_, lean_object* v_fvarId_1652_, lean_object* v_args_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_Compiler_LCNF_EmitYul_emitApply(v_lhsId_1651_, v_fvarId_1652_, v_args_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_);
lean_dec(v_a_1657_);
lean_dec_ref(v_a_1656_);
lean_dec(v_a_1655_);
lean_dec_ref(v_a_1654_);
return v_res_1659_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue(lean_object* v_lhs_1662_, lean_object* v_value_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v_lhsId_1669_; lean_object* v_i_1671_; lean_object* v_fvarId_1672_; lean_object* v___y_1673_; 
v_lhsId_1669_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_lhs_1662_);
switch(lean_obj_tag(v_value_1663_))
{
case 0:
{
lean_object* v_value_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1739_; 
v_value_1697_ = lean_ctor_get(v_value_1663_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_value_1663_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1699_ = v_value_1663_;
v_isShared_1700_ = v_isSharedCheck_1739_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_value_1697_);
lean_dec(v_value_1663_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1739_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1701_; 
v___x_1701_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_value_1697_, v_a_1666_, v_a_1667_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1730_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1704_ = v___x_1701_;
v_isShared_1705_ = v_isSharedCheck_1730_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1701_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1730_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; lean_object* v_stmts_1707_; lean_object* v_fresh_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1729_; 
v___x_1706_ = lean_st_ref_take(v_a_1665_);
v_stmts_1707_ = lean_ctor_get(v___x_1706_, 0);
v_fresh_1708_ = lean_ctor_get(v___x_1706_, 1);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1710_ = v___x_1706_;
v_isShared_1711_ = v_isSharedCheck_1729_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_fresh_1708_);
lean_inc(v_stmts_1707_);
lean_dec(v___x_1706_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1729_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1717_; 
v___x_1712_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1713_ = lean_unsigned_to_nat(1u);
v___x_1714_ = lean_mk_empty_array_with_capacity(v___x_1713_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1712_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set_tag(v___x_1699_, 1);
lean_ctor_set(v___x_1699_, 0, v_a_1702_);
v___x_1717_ = v___x_1699_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1702_);
v___x_1717_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
v___x_1718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1715_);
lean_ctor_set(v___x_1718_, 1, v___x_1717_);
v___x_1719_ = lean_array_push(v_stmts_1707_, v___x_1718_);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v___x_1719_);
v___x_1721_ = v___x_1710_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1719_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_fresh_1708_);
v___x_1721_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1725_; 
v___x_1722_ = lean_st_ref_set(v_a_1665_, v___x_1721_);
v___x_1723_ = lean_box(0);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 0, v___x_1723_);
v___x_1725_ = v___x_1704_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1723_);
v___x_1725_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
return v___x_1725_;
}
}
}
}
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
lean_del_object(v___x_1699_);
lean_dec_ref(v_lhsId_1669_);
v_a_1731_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1701_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1701_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1740_; lean_object* v_stmts_1741_; lean_object* v_fresh_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1759_; 
v___x_1740_ = lean_st_ref_take(v_a_1665_);
v_stmts_1741_ = lean_ctor_get(v___x_1740_, 0);
v_fresh_1742_ = lean_ctor_get(v___x_1740_, 1);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1744_ = v___x_1740_;
v_isShared_1745_ = v_isSharedCheck_1759_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_fresh_1742_);
lean_inc(v_stmts_1741_);
lean_dec(v___x_1740_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1759_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1746_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1747_ = lean_unsigned_to_nat(1u);
v___x_1748_ = lean_mk_empty_array_with_capacity(v___x_1747_);
v___x_1749_ = lean_array_push(v___x_1748_, v___x_1746_);
v___x_1750_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0);
v___x_1751_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1749_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
v___x_1752_ = lean_array_push(v_stmts_1741_, v___x_1751_);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 0, v___x_1752_);
v___x_1754_ = v___x_1744_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1752_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v_fresh_1742_);
v___x_1754_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1755_ = lean_st_ref_set(v_a_1665_, v___x_1754_);
v___x_1756_ = lean_box(0);
v___x_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1756_);
return v___x_1757_;
}
}
}
case 4:
{
lean_object* v_fvarId_1760_; lean_object* v_args_1761_; lean_object* v___x_1762_; 
v_fvarId_1760_ = lean_ctor_get(v_value_1663_, 0);
lean_inc(v_fvarId_1760_);
v_args_1761_ = lean_ctor_get(v_value_1663_, 1);
lean_inc_ref(v_args_1761_);
lean_dec_ref_known(v_value_1663_, 2);
v___x_1762_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_1669_, v_fvarId_1760_, v_args_1761_, v_a_1665_);
return v___x_1762_;
}
case 5:
{
lean_object* v_i_1763_; lean_object* v_args_1764_; lean_object* v___x_1765_; 
v_i_1763_ = lean_ctor_get(v_value_1663_, 0);
lean_inc_ref(v_i_1763_);
v_args_1764_ = lean_ctor_get(v_value_1663_, 1);
lean_inc_ref(v_args_1764_);
lean_dec_ref_known(v_value_1663_, 2);
v___x_1765_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_1669_, v_i_1763_, v_args_1764_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
lean_dec_ref(v_args_1764_);
return v___x_1765_;
}
case 8:
{
lean_object* v_offset_1766_; lean_object* v_var_1767_; lean_object* v___x_1768_; lean_object* v_stmts_1769_; lean_object* v_fresh_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1799_; 
v_offset_1766_ = lean_ctor_get(v_value_1663_, 1);
lean_inc(v_offset_1766_);
v_var_1767_ = lean_ctor_get(v_value_1663_, 2);
lean_inc(v_var_1767_);
lean_dec_ref_known(v_value_1663_, 3);
v___x_1768_ = lean_st_ref_take(v_a_1665_);
v_stmts_1769_ = lean_ctor_get(v___x_1768_, 0);
v_fresh_1770_ = lean_ctor_get(v___x_1768_, 1);
v_isSharedCheck_1799_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1772_ = v___x_1768_;
v_isShared_1773_ = v_isSharedCheck_1799_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_fresh_1770_);
lean_inc(v_stmts_1769_);
lean_dec(v___x_1768_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1799_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v_addr_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1794_; 
v___x_1774_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_1775_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_1767_);
v___x_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
v___x_1777_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_1766_);
v___x_1778_ = lean_unsigned_to_nat(2u);
v___x_1779_ = lean_mk_empty_array_with_capacity(v___x_1778_);
v___x_1780_ = lean_array_push(v___x_1779_, v___x_1776_);
v___x_1781_ = lean_array_push(v___x_1780_, v___x_1777_);
v_addr_1782_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_1782_, 0, v___x_1774_);
lean_ctor_set(v_addr_1782_, 1, v___x_1781_);
v___x_1783_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1784_ = lean_unsigned_to_nat(1u);
v___x_1785_ = lean_mk_empty_array_with_capacity(v___x_1784_);
lean_inc_ref(v___x_1785_);
v___x_1786_ = lean_array_push(v___x_1785_, v___x_1783_);
v___x_1787_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_1788_ = lean_array_push(v___x_1785_, v_addr_1782_);
v___x_1789_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
v___x_1791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1786_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
v___x_1792_ = lean_array_push(v_stmts_1769_, v___x_1791_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 0, v___x_1792_);
v___x_1794_ = v___x_1772_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1792_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v_fresh_1770_);
v___x_1794_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1795_ = lean_st_ref_set(v_a_1665_, v___x_1794_);
v___x_1796_ = lean_box(0);
v___x_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
return v___x_1797_;
}
}
}
case 9:
{
lean_object* v_fn_1800_; lean_object* v_args_1801_; lean_object* v___x_1802_; 
v_fn_1800_ = lean_ctor_get(v_value_1663_, 0);
lean_inc(v_fn_1800_);
v_args_1801_ = lean_ctor_get(v_value_1663_, 1);
lean_inc_ref(v_args_1801_);
lean_dec_ref_known(v_value_1663_, 2);
v___x_1802_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_1669_, v_fn_1800_, v_args_1801_, v_a_1665_, v_a_1667_);
return v___x_1802_;
}
case 10:
{
lean_object* v_fn_1803_; lean_object* v_args_1804_; lean_object* v___x_1805_; 
v_fn_1803_ = lean_ctor_get(v_value_1663_, 0);
lean_inc(v_fn_1803_);
v_args_1804_ = lean_ctor_get(v_value_1663_, 1);
lean_inc_ref(v_args_1804_);
lean_dec_ref_known(v_value_1663_, 2);
v___x_1805_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_1669_, v_fn_1803_, v_args_1804_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
lean_dec_ref(v_args_1804_);
lean_dec(v_fn_1803_);
return v___x_1805_;
}
case 11:
{
lean_object* v_var_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1834_; 
v_var_1806_ = lean_ctor_get(v_value_1663_, 1);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_value_1663_);
if (v_isSharedCheck_1834_ == 0)
{
lean_object* v_unused_1835_; 
v_unused_1835_ = lean_ctor_get(v_value_1663_, 0);
lean_dec(v_unused_1835_);
v___x_1808_ = v_value_1663_;
v_isShared_1809_ = v_isSharedCheck_1834_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_var_1806_);
lean_dec(v_value_1663_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1834_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1810_; lean_object* v_stmts_1811_; lean_object* v_fresh_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1833_; 
v___x_1810_ = lean_st_ref_take(v_a_1665_);
v_stmts_1811_ = lean_ctor_get(v___x_1810_, 0);
v_fresh_1812_ = lean_ctor_get(v___x_1810_, 1);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1814_ = v___x_1810_;
v_isShared_1815_ = v_isSharedCheck_1833_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_fresh_1812_);
lean_inc(v_stmts_1811_);
lean_dec(v___x_1810_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1833_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1824_; 
v___x_1816_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1817_ = lean_unsigned_to_nat(1u);
v___x_1818_ = lean_mk_empty_array_with_capacity(v___x_1817_);
v___x_1819_ = lean_array_push(v___x_1818_, v___x_1816_);
v___x_1820_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_1806_);
v___x_1821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1820_);
v___x_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1821_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set_tag(v___x_1808_, 1);
lean_ctor_set(v___x_1808_, 1, v___x_1822_);
lean_ctor_set(v___x_1808_, 0, v___x_1819_);
v___x_1824_ = v___x_1808_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v___x_1819_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
lean_object* v___x_1825_; lean_object* v___x_1827_; 
v___x_1825_ = lean_array_push(v_stmts_1811_, v___x_1824_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v___x_1825_);
v___x_1827_ = v___x_1814_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1825_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_fresh_1812_);
v___x_1827_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1828_ = lean_st_ref_set(v_a_1665_, v___x_1827_);
v___x_1829_ = lean_box(0);
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
}
}
}
}
case 12:
{
lean_object* v_i_1836_; lean_object* v_args_1837_; lean_object* v___x_1838_; 
v_i_1836_ = lean_ctor_get(v_value_1663_, 1);
lean_inc_ref(v_i_1836_);
v_args_1837_ = lean_ctor_get(v_value_1663_, 2);
lean_inc_ref(v_args_1837_);
lean_dec_ref_known(v_value_1663_, 3);
v___x_1838_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_1669_, v_i_1836_, v_args_1837_, v_a_1664_, v_a_1665_, v_a_1666_, v_a_1667_);
lean_dec_ref(v_args_1837_);
return v___x_1838_;
}
case 13:
{
lean_object* v_fvarId_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1868_; 
v_fvarId_1839_ = lean_ctor_get(v_value_1663_, 1);
v_isSharedCheck_1868_ = !lean_is_exclusive(v_value_1663_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v_value_1663_, 0);
lean_dec(v_unused_1869_);
v___x_1841_ = v_value_1663_;
v_isShared_1842_ = v_isSharedCheck_1868_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_fvarId_1839_);
lean_dec(v_value_1663_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1868_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v_stmts_1844_; lean_object* v_fresh_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1867_; 
v___x_1843_ = lean_st_ref_take(v_a_1665_);
v_stmts_1844_ = lean_ctor_get(v___x_1843_, 0);
v_fresh_1845_ = lean_ctor_get(v___x_1843_, 1);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1847_ = v___x_1843_;
v_isShared_1848_ = v_isSharedCheck_1867_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_fresh_1845_);
lean_inc(v_stmts_1844_);
lean_dec(v___x_1843_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1867_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1849_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1850_ = lean_unsigned_to_nat(1u);
v___x_1851_ = lean_mk_empty_array_with_capacity(v___x_1850_);
v___x_1852_ = lean_array_push(v___x_1851_, v___x_1849_);
v___x_1853_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_1839_);
v___x_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
v___x_1855_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1854_);
v___x_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1856_, 0, v___x_1855_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set_tag(v___x_1841_, 1);
lean_ctor_set(v___x_1841_, 1, v___x_1856_);
lean_ctor_set(v___x_1841_, 0, v___x_1852_);
v___x_1858_ = v___x_1841_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1859_ = lean_array_push(v_stmts_1844_, v___x_1858_);
if (v_isShared_1848_ == 0)
{
lean_ctor_set(v___x_1847_, 0, v___x_1859_);
v___x_1861_ = v___x_1847_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v___x_1859_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v_fresh_1845_);
v___x_1861_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = lean_st_ref_set(v_a_1665_, v___x_1861_);
v___x_1863_ = lean_box(0);
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
}
}
}
}
case 14:
{
lean_object* v_fvarId_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1899_; 
v_fvarId_1870_ = lean_ctor_get(v_value_1663_, 0);
v_isSharedCheck_1899_ = !lean_is_exclusive(v_value_1663_);
if (v_isSharedCheck_1899_ == 0)
{
v___x_1872_ = v_value_1663_;
v_isShared_1873_ = v_isSharedCheck_1899_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_fvarId_1870_);
lean_dec(v_value_1663_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1899_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1874_; lean_object* v_stmts_1875_; lean_object* v_fresh_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1898_; 
v___x_1874_ = lean_st_ref_take(v_a_1665_);
v_stmts_1875_ = lean_ctor_get(v___x_1874_, 0);
v_fresh_1876_ = lean_ctor_get(v___x_1874_, 1);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1878_ = v___x_1874_;
v_isShared_1879_ = v_isSharedCheck_1898_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_fresh_1876_);
lean_inc(v_stmts_1875_);
lean_dec(v___x_1874_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1898_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1880_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1881_ = lean_unsigned_to_nat(1u);
v___x_1882_ = lean_mk_empty_array_with_capacity(v___x_1881_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1880_);
v___x_1884_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_1870_);
if (v_isShared_1873_ == 0)
{
lean_ctor_set_tag(v___x_1872_, 1);
lean_ctor_set(v___x_1872_, 0, v___x_1884_);
v___x_1886_ = v___x_1872_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1887_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_1886_);
v___x_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1887_);
v___x_1889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1883_);
lean_ctor_set(v___x_1889_, 1, v___x_1888_);
v___x_1890_ = lean_array_push(v_stmts_1875_, v___x_1889_);
if (v_isShared_1879_ == 0)
{
lean_ctor_set(v___x_1878_, 0, v___x_1890_);
v___x_1892_ = v___x_1878_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v_fresh_1876_);
v___x_1892_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1893_ = lean_st_ref_set(v_a_1665_, v___x_1892_);
v___x_1894_ = lean_box(0);
v___x_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
return v___x_1895_;
}
}
}
}
}
case 15:
{
lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1925_; 
v_isSharedCheck_1925_ = !lean_is_exclusive(v_value_1663_);
if (v_isSharedCheck_1925_ == 0)
{
lean_object* v_unused_1926_; 
v_unused_1926_ = lean_ctor_get(v_value_1663_, 0);
lean_dec(v_unused_1926_);
v___x_1901_ = v_value_1663_;
v_isShared_1902_ = v_isSharedCheck_1925_;
goto v_resetjp_1900_;
}
else
{
lean_dec(v_value_1663_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1925_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1903_; lean_object* v_stmts_1904_; lean_object* v_fresh_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1924_; 
v___x_1903_ = lean_st_ref_take(v_a_1665_);
v_stmts_1904_ = lean_ctor_get(v___x_1903_, 0);
v_fresh_1905_ = lean_ctor_get(v___x_1903_, 1);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1907_ = v___x_1903_;
v_isShared_1908_ = v_isSharedCheck_1924_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_fresh_1905_);
lean_inc(v_stmts_1904_);
lean_dec(v___x_1903_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1924_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1917_; 
v___x_1909_ = lean_unsigned_to_nat(1u);
v___x_1910_ = lean_mk_empty_array_with_capacity(v___x_1909_);
v___x_1911_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1912_ = lean_array_push(v___x_1910_, v___x_1911_);
v___x_1913_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0);
v___x_1914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1912_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = lean_array_push(v_stmts_1904_, v___x_1914_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 0, v___x_1915_);
v___x_1917_ = v___x_1907_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1915_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_fresh_1905_);
v___x_1917_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1921_; 
v___x_1918_ = lean_st_ref_set(v_a_1665_, v___x_1917_);
v___x_1919_ = lean_box(0);
if (v_isShared_1902_ == 0)
{
lean_ctor_set_tag(v___x_1901_, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1919_);
v___x_1921_ = v___x_1901_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1919_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
}
default: 
{
lean_object* v_i_1927_; lean_object* v_var_1928_; 
v_i_1927_ = lean_ctor_get(v_value_1663_, 0);
lean_inc(v_i_1927_);
v_var_1928_ = lean_ctor_get(v_value_1663_, 1);
lean_inc(v_var_1928_);
lean_dec(v_value_1663_);
v_i_1671_ = v_i_1927_;
v_fvarId_1672_ = v_var_1928_;
v___y_1673_ = v_a_1665_;
goto v___jp_1670_;
}
}
v___jp_1670_:
{
lean_object* v___x_1674_; lean_object* v_stmts_1675_; lean_object* v_fresh_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1696_; 
v___x_1674_ = lean_st_ref_take(v___y_1673_);
v_stmts_1675_ = lean_ctor_get(v___x_1674_, 0);
v_fresh_1676_ = lean_ctor_get(v___x_1674_, 1);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1678_ = v___x_1674_;
v_isShared_1679_ = v_isSharedCheck_1696_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_fresh_1676_);
lean_inc(v_stmts_1675_);
lean_dec(v___x_1674_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1696_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1691_; 
v___x_1680_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1669_);
v___x_1681_ = lean_unsigned_to_nat(1u);
v___x_1682_ = lean_mk_empty_array_with_capacity(v___x_1681_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1680_);
v___x_1684_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_1672_);
v___x_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1684_);
v___x_1686_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v___x_1685_, v_i_1671_);
lean_dec(v_i_1671_);
v___x_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
v___x_1688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1683_);
lean_ctor_set(v___x_1688_, 1, v___x_1687_);
v___x_1689_ = lean_array_push(v_stmts_1675_, v___x_1688_);
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v___x_1689_);
v___x_1691_ = v___x_1678_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1689_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v_fresh_1676_);
v___x_1691_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1692_ = lean_st_ref_set(v___y_1673_, v___x_1691_);
v___x_1693_ = lean_box(0);
v___x_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1693_);
return v___x_1694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue___boxed(lean_object* v_lhs_1929_, lean_object* v_value_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_lhs_1929_, v_value_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_);
lean_dec(v_a_1934_);
lean_dec_ref(v_a_1933_);
lean_dec(v_a_1932_);
lean_dec_ref(v_a_1931_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(lean_object* v_params_1937_, lean_object* v_args_1938_, lean_object* v_range_1939_, lean_object* v_b_1940_, lean_object* v_i_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_stop_1944_; lean_object* v_step_1945_; uint8_t v___x_1946_; 
v_stop_1944_ = lean_ctor_get(v_range_1939_, 1);
v_step_1945_ = lean_ctor_get(v_range_1939_, 2);
v___x_1946_ = lean_nat_dec_lt(v_i_1941_, v_stop_1944_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; 
lean_dec(v_i_1941_);
v___x_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1947_, 0, v_b_1940_);
return v___x_1947_;
}
else
{
lean_object* v___x_1948_; lean_object* v_type_1949_; lean_object* v___x_1950_; uint8_t v___y_1955_; uint8_t v___x_1979_; 
v___x_1948_ = lean_array_fget_borrowed(v_params_1937_, v_i_1941_);
v_type_1949_ = lean_ctor_get(v___x_1948_, 2);
v___x_1950_ = lean_box(0);
v___x_1979_ = l_Lean_Expr_isVoid(v_type_1949_);
if (v___x_1979_ == 0)
{
uint8_t v___x_1980_; 
v___x_1980_ = l_Lean_Expr_isErased(v_type_1949_);
v___y_1955_ = v___x_1980_;
goto v___jp_1954_;
}
else
{
v___y_1955_ = v___x_1979_;
goto v___jp_1954_;
}
v___jp_1951_:
{
lean_object* v___x_1952_; 
v___x_1952_ = lean_nat_add(v_i_1941_, v_step_1945_);
lean_dec(v_i_1941_);
v_b_1940_ = v___x_1950_;
v_i_1941_ = v___x_1952_;
goto _start;
}
v___jp_1954_:
{
if (v___y_1955_ == 0)
{
lean_object* v___x_1956_; lean_object* v_fvarId_1957_; lean_object* v_stmts_1958_; lean_object* v_fresh_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1978_; 
v___x_1956_ = lean_st_ref_take(v___y_1942_);
v_fvarId_1957_ = lean_ctor_get(v___x_1948_, 0);
v_stmts_1958_ = lean_ctor_get(v___x_1956_, 0);
v_fresh_1959_ = lean_ctor_get(v___x_1956_, 1);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1961_ = v___x_1956_;
v_isShared_1962_ = v_isSharedCheck_1978_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_fresh_1959_);
lean_inc(v_stmts_1958_);
lean_dec(v___x_1956_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1978_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1975_; 
v___x_1963_ = lean_box(0);
v___x_1964_ = lean_array_get_borrowed(v___x_1963_, v_args_1938_, v_i_1941_);
lean_inc(v_fvarId_1957_);
v___x_1965_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_1957_);
v___x_1966_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_1965_);
v___x_1967_ = lean_unsigned_to_nat(1u);
v___x_1968_ = lean_mk_empty_array_with_capacity(v___x_1967_);
v___x_1969_ = lean_array_push(v___x_1968_, v___x_1966_);
lean_inc(v___x_1964_);
v___x_1970_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_1964_);
v___x_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
v___x_1972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1969_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
v___x_1973_ = lean_array_push(v_stmts_1958_, v___x_1972_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1973_);
v___x_1975_ = v___x_1961_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v___x_1973_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_fresh_1959_);
v___x_1975_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
lean_object* v___x_1976_; 
v___x_1976_ = lean_st_ref_set(v___y_1942_, v___x_1975_);
goto v___jp_1951_;
}
}
}
else
{
goto v___jp_1951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg___boxed(lean_object* v_params_1981_, lean_object* v_args_1982_, lean_object* v_range_1983_, lean_object* v_b_1984_, lean_object* v_i_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_1981_, v_args_1982_, v_range_1983_, v_b_1984_, v_i_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v_range_1983_);
lean_dec_ref(v_args_1982_);
lean_dec_ref(v_params_1981_);
return v_res_1988_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1(void){
_start:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0));
v___x_1994_ = l_Lean_stringToMessageData(v___x_1993_);
return v___x_1994_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3(void){
_start:
{
lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1996_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2));
v___x_1997_ = l_Lean_stringToMessageData(v___x_1996_);
return v___x_1997_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1999_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4));
v___x_2000_ = l_Lean_stringToMessageData(v___x_1999_);
return v___x_2000_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7(void){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6));
v___x_2003_ = l_Lean_stringToMessageData(v___x_2002_);
return v___x_2003_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2009_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2010_ = lean_unsigned_to_nat(2u);
v___x_2011_ = lean_mk_empty_array_with_capacity(v___x_2010_);
v___x_2012_ = lean_array_push(v___x_2011_, v___x_2009_);
return v___x_2012_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11(void){
_start:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2013_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2014_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_2015_ = lean_array_push(v___x_2014_, v___x_2013_);
return v___x_2015_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12(void){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2016_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11);
v___x_2017_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1));
v___x_2018_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2017_);
lean_ctor_set(v___x_2018_, 1, v___x_2016_);
return v___x_2018_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12);
v___x_2020_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___x_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode(lean_object* v_code_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_){
_start:
{
switch(lean_obj_tag(v_code_2021_))
{
case 0:
{
lean_object* v_decl_2027_; lean_object* v_k_2028_; lean_object* v_fvarId_2029_; lean_object* v_value_2030_; lean_object* v___x_2031_; 
v_decl_2027_ = lean_ctor_get(v_code_2021_, 0);
lean_inc_ref(v_decl_2027_);
v_k_2028_ = lean_ctor_get(v_code_2021_, 1);
lean_inc_ref(v_k_2028_);
lean_dec_ref_known(v_code_2021_, 2);
v_fvarId_2029_ = lean_ctor_get(v_decl_2027_, 0);
lean_inc(v_fvarId_2029_);
v_value_2030_ = lean_ctor_get(v_decl_2027_, 3);
lean_inc(v_value_2030_);
lean_dec_ref(v_decl_2027_);
v___x_2031_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_fvarId_2029_, v_value_2030_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_);
if (lean_obj_tag(v___x_2031_) == 0)
{
lean_dec_ref_known(v___x_2031_, 1);
v_code_2021_ = v_k_2028_;
goto _start;
}
else
{
lean_dec_ref(v_k_2028_);
return v___x_2031_;
}
}
case 3:
{
lean_object* v_fvarId_2033_; lean_object* v_args_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2090_; 
v_fvarId_2033_ = lean_ctor_get(v_code_2021_, 0);
v_args_2034_ = lean_ctor_get(v_code_2021_, 1);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_code_2021_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2036_ = v_code_2021_;
v_isShared_2037_ = v_isSharedCheck_2090_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_args_2034_);
lean_inc(v_fvarId_2033_);
lean_dec(v_code_2021_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2090_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2038_; 
v___x_2038_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_2033_, v_a_2022_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
if (lean_obj_tag(v_a_2039_) == 1)
{
lean_object* v_val_2040_; lean_object* v_params_2041_; lean_object* v_value_2042_; lean_object* v___y_2044_; lean_object* v___y_2045_; lean_object* v___y_2046_; lean_object* v___y_2047_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___y_2059_; uint8_t v___x_2069_; 
v_val_2040_ = lean_ctor_get(v_a_2039_, 0);
lean_inc(v_val_2040_);
lean_dec_ref_known(v_a_2039_, 1);
v_params_2041_ = lean_ctor_get(v_val_2040_, 2);
lean_inc_ref(v_params_2041_);
v_value_2042_ = lean_ctor_get(v_val_2040_, 4);
lean_inc_ref(v_value_2042_);
lean_dec(v_val_2040_);
v___x_2069_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_fvarId_2033_, v_value_2042_);
if (v___x_2069_ == 0)
{
v___y_2056_ = v_a_2022_;
v___y_2057_ = v_a_2023_;
v___y_2058_ = v_a_2024_;
v___y_2059_ = v_a_2025_;
goto v___jp_2055_;
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2070_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3);
lean_inc(v_fvarId_2033_);
v___x_2071_ = l_Lean_MessageData_ofName(v_fvarId_2033_);
v___x_2072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2070_);
lean_ctor_set(v___x_2072_, 1, v___x_2071_);
v___x_2073_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5);
v___x_2074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2072_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2074_, v_a_2024_, v_a_2025_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_dec_ref_known(v___x_2075_, 1);
v___y_2056_ = v_a_2022_;
v___y_2057_ = v_a_2023_;
v___y_2058_ = v_a_2024_;
v___y_2059_ = v_a_2025_;
goto v___jp_2055_;
}
else
{
lean_dec_ref(v_value_2042_);
lean_dec_ref(v_params_2041_);
lean_del_object(v___x_2036_);
lean_dec_ref(v_args_2034_);
lean_dec(v_fvarId_2033_);
return v___x_2075_;
}
}
v___jp_2043_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2048_ = lean_unsigned_to_nat(0u);
v___x_2049_ = lean_array_get_size(v_params_2041_);
v___x_2050_ = lean_unsigned_to_nat(1u);
v___x_2051_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2048_);
lean_ctor_set(v___x_2051_, 1, v___x_2049_);
lean_ctor_set(v___x_2051_, 2, v___x_2050_);
v___x_2052_ = lean_box(0);
v___x_2053_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2041_, v_args_2034_, v___x_2051_, v___x_2052_, v___x_2048_, v___y_2045_);
lean_dec_ref_known(v___x_2051_, 3);
lean_dec_ref(v_args_2034_);
lean_dec_ref(v_params_2041_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_dec_ref_known(v___x_2053_, 1);
v_code_2021_ = v_value_2042_;
v_a_2022_ = v___y_2044_;
v_a_2023_ = v___y_2045_;
v_a_2024_ = v___y_2046_;
v_a_2025_ = v___y_2047_;
goto _start;
}
else
{
lean_dec_ref(v_value_2042_);
return v___x_2053_;
}
}
v___jp_2055_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; uint8_t v___x_2062_; 
v___x_2060_ = lean_array_get_size(v_args_2034_);
v___x_2061_ = lean_array_get_size(v_params_2041_);
v___x_2062_ = lean_nat_dec_eq(v___x_2060_, v___x_2061_);
if (v___x_2062_ == 0)
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2066_; 
v___x_2063_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1);
v___x_2064_ = l_Lean_MessageData_ofName(v_fvarId_2033_);
if (v_isShared_2037_ == 0)
{
lean_ctor_set_tag(v___x_2036_, 7);
lean_ctor_set(v___x_2036_, 1, v___x_2064_);
lean_ctor_set(v___x_2036_, 0, v___x_2063_);
v___x_2066_ = v___x_2036_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v___x_2064_);
v___x_2066_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2067_; 
v___x_2067_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2066_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_dec_ref_known(v___x_2067_, 1);
v___y_2044_ = v___y_2056_;
v___y_2045_ = v___y_2057_;
v___y_2046_ = v___y_2058_;
v___y_2047_ = v___y_2059_;
goto v___jp_2043_;
}
else
{
lean_dec_ref(v_value_2042_);
lean_dec_ref(v_params_2041_);
lean_dec_ref(v_args_2034_);
return v___x_2067_;
}
}
}
else
{
lean_del_object(v___x_2036_);
lean_dec(v_fvarId_2033_);
v___y_2044_ = v___y_2056_;
v___y_2045_ = v___y_2057_;
v___y_2046_ = v___y_2058_;
v___y_2047_ = v___y_2059_;
goto v___jp_2043_;
}
}
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2079_; 
lean_dec(v_a_2039_);
lean_dec_ref(v_args_2034_);
v___x_2076_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7);
v___x_2077_ = l_Lean_MessageData_ofName(v_fvarId_2033_);
if (v_isShared_2037_ == 0)
{
lean_ctor_set_tag(v___x_2036_, 7);
lean_ctor_set(v___x_2036_, 1, v___x_2077_);
lean_ctor_set(v___x_2036_, 0, v___x_2076_);
v___x_2079_ = v___x_2036_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2076_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2079_, v_a_2024_, v_a_2025_);
return v___x_2080_;
}
}
}
else
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2089_; 
lean_del_object(v___x_2036_);
lean_dec_ref(v_args_2034_);
lean_dec(v_fvarId_2033_);
v_a_2082_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2089_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2089_ == 0)
{
v___x_2084_ = v___x_2038_;
v_isShared_2085_ = v_isSharedCheck_2089_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2038_);
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
}
case 4:
{
lean_object* v_cases_2091_; lean_object* v___x_2092_; 
v_cases_2091_ = lean_ctor_get(v_code_2021_, 0);
lean_inc_ref(v_cases_2091_);
lean_dec_ref_known(v_code_2021_, 1);
v___x_2092_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cases_2091_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_);
return v___x_2092_;
}
case 5:
{
lean_object* v_fvarId_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2130_; 
v_fvarId_2093_ = lean_ctor_get(v_code_2021_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_code_2021_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2095_ = v_code_2021_;
v_isShared_2096_ = v_isSharedCheck_2130_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_fvarId_2093_);
lean_dec(v_code_2021_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2130_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v_stmts_2098_; lean_object* v_fresh_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2129_; 
v___x_2097_ = lean_st_ref_take(v_a_2023_);
v_stmts_2098_ = lean_ctor_get(v___x_2097_, 0);
v_fresh_2099_ = lean_ctor_get(v___x_2097_, 1);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2101_ = v___x_2097_;
v_isShared_2102_ = v_isSharedCheck_2129_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_fresh_2099_);
lean_inc(v_stmts_2098_);
lean_dec(v___x_2097_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2129_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2106_; 
v___x_2103_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9));
v___x_2104_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2093_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set_tag(v___x_2095_, 1);
lean_ctor_set(v___x_2095_, 0, v___x_2104_);
v___x_2106_ = v___x_2095_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2104_);
v___x_2106_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2107_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2103_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = lean_array_push(v_stmts_2098_, v___x_2107_);
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 0, v___x_2108_);
v___x_2110_ = v___x_2101_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2108_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v_fresh_2099_);
v___x_2110_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v_stmts_2113_; lean_object* v_fresh_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2126_; 
v___x_2111_ = lean_st_ref_set(v_a_2023_, v___x_2110_);
v___x_2112_ = lean_st_ref_take(v_a_2023_);
v_stmts_2113_ = lean_ctor_get(v___x_2112_, 0);
v_fresh_2114_ = lean_ctor_get(v___x_2112_, 1);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2116_ = v___x_2112_;
v_isShared_2117_ = v_isSharedCheck_2126_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_fresh_2114_);
lean_inc(v_stmts_2113_);
lean_dec(v___x_2112_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2126_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2121_; 
v___x_2118_ = lean_box(10);
v___x_2119_ = lean_array_push(v_stmts_2113_, v___x_2118_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2119_);
v___x_2121_ = v___x_2116_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2119_);
lean_ctor_set(v_reuseFailAlloc_2125_, 1, v_fresh_2114_);
v___x_2121_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_st_ref_set(v_a_2023_, v___x_2121_);
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
return v___x_2124_;
}
}
}
}
}
}
}
case 6:
{
lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2151_; 
v_isSharedCheck_2151_ = !lean_is_exclusive(v_code_2021_);
if (v_isSharedCheck_2151_ == 0)
{
lean_object* v_unused_2152_; 
v_unused_2152_ = lean_ctor_get(v_code_2021_, 0);
lean_dec(v_unused_2152_);
v___x_2132_ = v_code_2021_;
v_isShared_2133_ = v_isSharedCheck_2151_;
goto v_resetjp_2131_;
}
else
{
lean_dec(v_code_2021_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2151_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2134_; lean_object* v_stmts_2135_; lean_object* v_fresh_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2150_; 
v___x_2134_ = lean_st_ref_take(v_a_2023_);
v_stmts_2135_ = lean_ctor_get(v___x_2134_, 0);
v_fresh_2136_ = lean_ctor_get(v___x_2134_, 1);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2138_ = v___x_2134_;
v_isShared_2139_ = v_isSharedCheck_2150_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_fresh_2136_);
lean_inc(v_stmts_2135_);
lean_dec(v___x_2134_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2150_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2143_; 
v___x_2140_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13);
v___x_2141_ = lean_array_push(v_stmts_2135_, v___x_2140_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 0, v___x_2141_);
v___x_2143_ = v___x_2138_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v_fresh_2136_);
v___x_2143_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2147_; 
v___x_2144_ = lean_st_ref_set(v_a_2023_, v___x_2143_);
v___x_2145_ = lean_box(0);
if (v_isShared_2133_ == 0)
{
lean_ctor_set_tag(v___x_2132_, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2145_);
v___x_2147_ = v___x_2132_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_2153_; lean_object* v_i_2154_; lean_object* v_y_2155_; lean_object* v_k_2156_; lean_object* v___x_2157_; lean_object* v_stmts_2158_; lean_object* v_fresh_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2173_; 
v_fvarId_2153_ = lean_ctor_get(v_code_2021_, 0);
lean_inc(v_fvarId_2153_);
v_i_2154_ = lean_ctor_get(v_code_2021_, 1);
lean_inc(v_i_2154_);
v_y_2155_ = lean_ctor_get(v_code_2021_, 2);
lean_inc(v_y_2155_);
v_k_2156_ = lean_ctor_get(v_code_2021_, 3);
lean_inc_ref(v_k_2156_);
lean_dec_ref_known(v_code_2021_, 4);
v___x_2157_ = lean_st_ref_take(v_a_2023_);
v_stmts_2158_ = lean_ctor_get(v___x_2157_, 0);
v_fresh_2159_ = lean_ctor_get(v___x_2157_, 1);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2157_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2161_ = v___x_2157_;
v_isShared_2162_ = v_isSharedCheck_2173_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_fresh_2159_);
lean_inc(v_stmts_2158_);
lean_dec(v___x_2157_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2173_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2169_; 
v___x_2163_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2153_);
v___x_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2163_);
v___x_2165_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_y_2155_);
v___x_2166_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2164_, v_i_2154_, v___x_2165_);
lean_dec(v_i_2154_);
v___x_2167_ = lean_array_push(v_stmts_2158_, v___x_2166_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2167_);
v___x_2169_ = v___x_2161_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_fresh_2159_);
v___x_2169_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_st_ref_set(v_a_2023_, v___x_2169_);
v_code_2021_ = v_k_2156_;
goto _start;
}
}
}
case 8:
{
lean_object* v_fvarId_2174_; lean_object* v_i_2175_; lean_object* v_y_2176_; lean_object* v_k_2177_; lean_object* v___x_2178_; lean_object* v_stmts_2179_; lean_object* v_fresh_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2195_; 
v_fvarId_2174_ = lean_ctor_get(v_code_2021_, 0);
lean_inc(v_fvarId_2174_);
v_i_2175_ = lean_ctor_get(v_code_2021_, 1);
lean_inc(v_i_2175_);
v_y_2176_ = lean_ctor_get(v_code_2021_, 2);
lean_inc(v_y_2176_);
v_k_2177_ = lean_ctor_get(v_code_2021_, 3);
lean_inc_ref(v_k_2177_);
lean_dec_ref_known(v_code_2021_, 4);
v___x_2178_ = lean_st_ref_take(v_a_2023_);
v_stmts_2179_ = lean_ctor_get(v___x_2178_, 0);
v_fresh_2180_ = lean_ctor_get(v___x_2178_, 1);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2182_ = v___x_2178_;
v_isShared_2183_ = v_isSharedCheck_2195_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_fresh_2180_);
lean_inc(v_stmts_2179_);
lean_dec(v___x_2178_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2195_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2191_; 
v___x_2184_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2174_);
v___x_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
v___x_2186_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2176_);
v___x_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
v___x_2188_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2185_, v_i_2175_, v___x_2187_);
lean_dec(v_i_2175_);
v___x_2189_ = lean_array_push(v_stmts_2179_, v___x_2188_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v___x_2189_);
v___x_2191_ = v___x_2182_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v___x_2189_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v_fresh_2180_);
v___x_2191_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
lean_object* v___x_2192_; 
v___x_2192_ = lean_st_ref_set(v_a_2023_, v___x_2191_);
v_code_2021_ = v_k_2177_;
goto _start;
}
}
}
case 9:
{
lean_object* v_fvarId_2196_; lean_object* v_offset_2197_; lean_object* v_y_2198_; lean_object* v_k_2199_; lean_object* v___x_2200_; lean_object* v_stmts_2201_; lean_object* v_fresh_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2228_; 
v_fvarId_2196_ = lean_ctor_get(v_code_2021_, 0);
lean_inc(v_fvarId_2196_);
v_offset_2197_ = lean_ctor_get(v_code_2021_, 2);
lean_inc(v_offset_2197_);
v_y_2198_ = lean_ctor_get(v_code_2021_, 3);
lean_inc(v_y_2198_);
v_k_2199_ = lean_ctor_get(v_code_2021_, 5);
lean_inc_ref(v_k_2199_);
lean_dec_ref_known(v_code_2021_, 6);
v___x_2200_ = lean_st_ref_take(v_a_2023_);
v_stmts_2201_ = lean_ctor_get(v___x_2200_, 0);
v_fresh_2202_ = lean_ctor_get(v___x_2200_, 1);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2204_ = v___x_2200_;
v_isShared_2205_ = v_isSharedCheck_2228_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_fresh_2202_);
lean_inc(v_stmts_2201_);
lean_dec(v___x_2200_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2228_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v_addr_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2206_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2196_);
v___x_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2206_);
v___x_2208_ = lean_unsigned_to_nat(2u);
v___x_2209_ = lean_mk_empty_array_with_capacity(v___x_2208_);
lean_inc_ref(v___x_2209_);
v___x_2210_ = lean_array_push(v___x_2209_, v___x_2207_);
v___x_2211_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2212_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2197_);
v___x_2213_ = lean_array_push(v___x_2210_, v___x_2212_);
v_addr_2214_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2214_, 0, v___x_2211_);
lean_ctor_set(v_addr_2214_, 1, v___x_2213_);
v___x_2215_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2216_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2198_);
v___x_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2217_, 0, v___x_2216_);
v___x_2218_ = lean_array_push(v___x_2209_, v_addr_2214_);
v___x_2219_ = lean_array_push(v___x_2218_, v___x_2217_);
v___x_2220_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2220_, 0, v___x_2215_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
v___x_2221_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
v___x_2222_ = lean_array_push(v_stmts_2201_, v___x_2221_);
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v___x_2222_);
v___x_2224_ = v___x_2204_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_fresh_2202_);
v___x_2224_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2225_; 
v___x_2225_ = lean_st_ref_set(v_a_2023_, v___x_2224_);
v_code_2021_ = v_k_2199_;
goto _start;
}
}
}
case 10:
{
lean_object* v_fvarId_2229_; lean_object* v_cidx_2230_; lean_object* v_k_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v_stmts_2235_; lean_object* v_fresh_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2255_; 
v_fvarId_2229_ = lean_ctor_get(v_code_2021_, 0);
lean_inc(v_fvarId_2229_);
v_cidx_2230_ = lean_ctor_get(v_code_2021_, 1);
lean_inc(v_cidx_2230_);
v_k_2231_ = lean_ctor_get(v_code_2021_, 2);
lean_inc_ref(v_k_2231_);
lean_dec_ref_known(v_code_2021_, 3);
v___x_2232_ = lean_unsigned_to_nat(0u);
v___x_2233_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_2230_, v___x_2232_, v___x_2232_);
v___x_2234_ = lean_st_ref_take(v_a_2023_);
v_stmts_2235_ = lean_ctor_get(v___x_2234_, 0);
v_fresh_2236_ = lean_ctor_get(v___x_2234_, 1);
v_isSharedCheck_2255_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2238_ = v___x_2234_;
v_isShared_2239_ = v_isSharedCheck_2255_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_fresh_2236_);
lean_inc(v_stmts_2235_);
lean_dec(v___x_2234_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2255_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2251_; 
v___x_2240_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2241_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2229_);
v___x_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
v___x_2243_ = lean_unsigned_to_nat(2u);
v___x_2244_ = lean_mk_empty_array_with_capacity(v___x_2243_);
v___x_2245_ = lean_array_push(v___x_2244_, v___x_2242_);
v___x_2246_ = lean_array_push(v___x_2245_, v___x_2233_);
v___x_2247_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2240_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
v___x_2249_ = lean_array_push(v_stmts_2235_, v___x_2248_);
if (v_isShared_2239_ == 0)
{
lean_ctor_set(v___x_2238_, 0, v___x_2249_);
v___x_2251_ = v___x_2238_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v___x_2249_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v_fresh_2236_);
v___x_2251_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_st_ref_set(v_a_2023_, v___x_2251_);
v_code_2021_ = v_k_2231_;
goto _start;
}
}
}
case 11:
{
lean_object* v_k_2256_; 
v_k_2256_ = lean_ctor_get(v_code_2021_, 2);
lean_inc_ref(v_k_2256_);
lean_dec_ref_known(v_code_2021_, 3);
v_code_2021_ = v_k_2256_;
goto _start;
}
case 12:
{
lean_object* v_k_2258_; 
v_k_2258_ = lean_ctor_get(v_code_2021_, 3);
lean_inc_ref(v_k_2258_);
lean_dec_ref_known(v_code_2021_, 4);
v_code_2021_ = v_k_2258_;
goto _start;
}
default: 
{
lean_object* v_k_2260_; 
v_k_2260_ = lean_ctor_get(v_code_2021_, 1);
lean_inc_ref(v_k_2260_);
lean_dec_ref(v_code_2021_);
v_code_2021_ = v_k_2260_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed(lean_object* v_code_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2262_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_);
lean_dec(v_a_2266_);
lean_dec_ref(v_a_2265_);
lean_dec(v_a_2264_);
lean_dec_ref(v_a_2263_);
return v_res_2268_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0));
v___x_2271_ = l_Lean_stringToMessageData(v___x_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(lean_object* v_as_2272_, size_t v_sz_2273_, size_t v_i_2274_, lean_object* v_b_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_c_2282_; uint8_t v___x_2287_; 
v___x_2287_ = lean_usize_dec_lt(v_i_2274_, v_sz_2273_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2288_, 0, v_b_2275_);
return v___x_2288_;
}
else
{
lean_object* v_a_2289_; lean_object* v___y_2291_; 
v_a_2289_ = lean_array_uget(v_as_2272_, v_i_2274_);
switch(lean_obj_tag(v_a_2289_))
{
case 0:
{
lean_object* v_code_2338_; 
v_code_2338_ = lean_ctor_get(v_a_2289_, 2);
lean_inc_ref(v_code_2338_);
v___y_2291_ = v_code_2338_;
goto v___jp_2290_;
}
case 1:
{
lean_object* v_code_2339_; 
v_code_2339_ = lean_ctor_get(v_a_2289_, 1);
lean_inc_ref(v_code_2339_);
v___y_2291_ = v_code_2339_;
goto v___jp_2290_;
}
default: 
{
lean_object* v_code_2340_; 
v_code_2340_ = lean_ctor_get(v_a_2289_, 0);
lean_inc_ref(v_code_2340_);
v___y_2291_ = v_code_2340_;
goto v___jp_2290_;
}
}
v___jp_2290_:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed), 6, 1);
lean_closure_set(v___x_2292_, 0, v___y_2291_);
v___x_2293_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___x_2292_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
if (lean_obj_tag(v___x_2293_) == 0)
{
switch(lean_obj_tag(v_a_2289_))
{
case 0:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; 
lean_dec_ref_known(v_a_2289_, 3);
lean_dec_ref_known(v___x_2293_, 1);
v___x_2294_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1);
v___x_2295_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2294_, v___y_2278_, v___y_2279_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2295_, 1);
v_c_2282_ = v_a_2296_;
goto v___jp_2281_;
}
else
{
lean_object* v_a_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2304_; 
lean_dec_ref(v_b_2275_);
v_a_2297_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2299_ = v___x_2295_;
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_a_2297_);
lean_dec(v___x_2295_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2304_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2302_; 
if (v_isShared_2300_ == 0)
{
v___x_2302_ = v___x_2299_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_a_2297_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
case 1:
{
lean_object* v_info_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2317_; 
v_info_2305_ = lean_ctor_get(v_a_2289_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v_a_2289_);
if (v_isSharedCheck_2317_ == 0)
{
lean_object* v_unused_2318_; 
v_unused_2318_ = lean_ctor_get(v_a_2289_, 1);
lean_dec(v_unused_2318_);
v___x_2307_ = v_a_2289_;
v_isShared_2308_ = v_isSharedCheck_2317_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_info_2305_);
lean_dec(v_a_2289_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2317_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v_a_2309_; lean_object* v_cidx_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2315_; 
v_a_2309_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2293_, 1);
v_cidx_2310_ = lean_ctor_get(v_info_2305_, 1);
lean_inc(v_cidx_2310_);
lean_dec_ref(v_info_2305_);
v___x_2311_ = l_Lean_Compiler_Yul_Literal_natLit(v_cidx_2310_);
v___x_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v_a_2309_);
if (v_isShared_2308_ == 0)
{
lean_ctor_set_tag(v___x_2307_, 0);
lean_ctor_set(v___x_2307_, 1, v___x_2313_);
lean_ctor_set(v___x_2307_, 0, v___x_2312_);
v___x_2315_ = v___x_2307_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v___x_2312_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
v_c_2282_ = v___x_2315_;
goto v___jp_2281_;
}
}
}
default: 
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2328_; 
v_a_2319_ = lean_ctor_get(v___x_2293_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2293_, 1);
v_isSharedCheck_2328_ = !lean_is_exclusive(v_a_2289_);
if (v_isSharedCheck_2328_ == 0)
{
lean_object* v_unused_2329_; 
v_unused_2329_ = lean_ctor_get(v_a_2289_, 0);
lean_dec(v_unused_2329_);
v___x_2321_ = v_a_2289_;
v_isShared_2322_ = v_isSharedCheck_2328_;
goto v_resetjp_2320_;
}
else
{
lean_dec(v_a_2289_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2328_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2323_; lean_object* v___x_2325_; 
v___x_2323_ = lean_box(0);
if (v_isShared_2322_ == 0)
{
lean_ctor_set_tag(v___x_2321_, 0);
lean_ctor_set(v___x_2321_, 0, v_a_2319_);
v___x_2325_ = v___x_2321_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2319_);
v___x_2325_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v___x_2326_; 
v___x_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2323_);
lean_ctor_set(v___x_2326_, 1, v___x_2325_);
v_c_2282_ = v___x_2326_;
goto v___jp_2281_;
}
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec(v_a_2289_);
lean_dec_ref(v_b_2275_);
v_a_2330_ = lean_ctor_get(v___x_2293_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2293_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2293_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2293_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
v___jp_2281_:
{
lean_object* v___x_2283_; size_t v___x_2284_; size_t v___x_2285_; 
v___x_2283_ = lean_array_push(v_b_2275_, v_c_2282_);
v___x_2284_ = ((size_t)1ULL);
v___x_2285_ = lean_usize_add(v_i_2274_, v___x_2284_);
v_i_2274_ = v___x_2285_;
v_b_2275_ = v___x_2283_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases(lean_object* v_cs_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
lean_object* v_discr_2347_; lean_object* v_alts_2348_; lean_object* v_yulCases_2349_; size_t v_sz_2350_; size_t v___x_2351_; lean_object* v___x_2352_; 
v_discr_2347_ = lean_ctor_get(v_cs_2341_, 2);
lean_inc(v_discr_2347_);
v_alts_2348_ = lean_ctor_get(v_cs_2341_, 3);
lean_inc_ref(v_alts_2348_);
lean_dec_ref(v_cs_2341_);
v_yulCases_2349_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0));
v_sz_2350_ = lean_array_size(v_alts_2348_);
v___x_2351_ = ((size_t)0ULL);
v___x_2352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_alts_2348_, v_sz_2350_, v___x_2351_, v_yulCases_2349_, v_a_2342_, v_a_2343_, v_a_2344_, v_a_2345_);
lean_dec_ref(v_alts_2348_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2381_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2355_ = v___x_2352_;
v_isShared_2356_ = v_isSharedCheck_2381_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2352_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2381_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; lean_object* v_stmts_2358_; lean_object* v_fresh_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2380_; 
v___x_2357_ = lean_st_ref_take(v_a_2343_);
v_stmts_2358_ = lean_ctor_get(v___x_2357_, 0);
v_fresh_2359_ = lean_ctor_get(v___x_2357_, 1);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2357_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2361_ = v___x_2357_;
v_isShared_2362_ = v_isSharedCheck_2380_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_fresh_2359_);
lean_inc(v_stmts_2358_);
lean_dec(v___x_2357_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2380_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v_discrTag_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2363_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_2364_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_discr_2347_);
v___x_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
v___x_2366_ = lean_unsigned_to_nat(1u);
v___x_2367_ = lean_mk_empty_array_with_capacity(v___x_2366_);
v___x_2368_ = lean_array_push(v___x_2367_, v___x_2365_);
v_discrTag_2369_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_discrTag_2369_, 0, v___x_2363_);
lean_ctor_set(v_discrTag_2369_, 1, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2370_, 0, v_discrTag_2369_);
lean_ctor_set(v___x_2370_, 1, v_a_2353_);
v___x_2371_ = lean_array_push(v_stmts_2358_, v___x_2370_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2371_);
v___x_2373_ = v___x_2361_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2379_, 1, v_fresh_2359_);
v___x_2373_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2377_; 
v___x_2374_ = lean_st_ref_set(v_a_2343_, v___x_2373_);
v___x_2375_ = lean_box(0);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2375_);
v___x_2377_ = v___x_2355_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2375_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec(v_discr_2347_);
v_a_2382_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2352_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2352_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___boxed(lean_object* v_cs_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cs_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___boxed(lean_object* v_as_2397_, lean_object* v_sz_2398_, lean_object* v_i_2399_, lean_object* v_b_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
size_t v_sz_boxed_2406_; size_t v_i_boxed_2407_; lean_object* v_res_2408_; 
v_sz_boxed_2406_ = lean_unbox_usize(v_sz_2398_);
lean_dec(v_sz_2398_);
v_i_boxed_2407_ = lean_unbox_usize(v_i_2399_);
lean_dec(v_i_2399_);
v_res_2408_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_as_2397_, v_sz_boxed_2406_, v_i_boxed_2407_, v_b_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec_ref(v_as_2397_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(lean_object* v_params_2409_, lean_object* v_args_2410_, lean_object* v_range_2411_, lean_object* v_b_2412_, lean_object* v_i_2413_, lean_object* v_hs_2414_, lean_object* v_hl_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v___x_2421_; 
v___x_2421_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2409_, v_args_2410_, v_range_2411_, v_b_2412_, v_i_2413_, v___y_2417_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___boxed(lean_object* v_params_2422_, lean_object* v_args_2423_, lean_object* v_range_2424_, lean_object* v_b_2425_, lean_object* v_i_2426_, lean_object* v_hs_2427_, lean_object* v_hl_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(v_params_2422_, v_args_2423_, v_range_2424_, v_b_2425_, v_i_2426_, v_hs_2427_, v_hl_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec_ref(v_range_2424_);
lean_dec_ref(v_args_2423_);
lean_dec_ref(v_params_2422_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(lean_object* v_code_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2462_; 
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2462_ == 0)
{
lean_object* v_unused_2463_; 
v_unused_2463_ = lean_ctor_get(v___x_2441_, 0);
lean_dec(v_unused_2463_);
v___x_2443_ = v___x_2441_;
v_isShared_2444_ = v_isSharedCheck_2462_;
goto v_resetjp_2442_;
}
else
{
lean_dec(v___x_2441_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2462_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v_stmts_2446_; lean_object* v_fresh_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2461_; 
v___x_2445_ = lean_st_ref_take(v___y_2437_);
v_stmts_2446_ = lean_ctor_get(v___x_2445_, 0);
v_fresh_2447_ = lean_ctor_get(v___x_2445_, 1);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___x_2445_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2449_ = v___x_2445_;
v_isShared_2450_ = v_isSharedCheck_2461_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_fresh_2447_);
lean_inc(v_stmts_2446_);
lean_dec(v___x_2445_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2461_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2454_; 
v___x_2451_ = lean_box(10);
v___x_2452_ = lean_array_push(v_stmts_2446_, v___x_2451_);
if (v_isShared_2450_ == 0)
{
lean_ctor_set(v___x_2449_, 0, v___x_2452_);
v___x_2454_ = v___x_2449_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2460_, 1, v_fresh_2447_);
v___x_2454_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2458_; 
v___x_2455_ = lean_st_ref_set(v___y_2437_, v___x_2454_);
v___x_2456_ = lean_box(0);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v___x_2456_);
v___x_2458_ = v___x_2443_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v___x_2456_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
}
}
}
else
{
return v___x_2441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed(lean_object* v_code_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(v_code_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(lean_object* v_as_2471_, size_t v_i_2472_, size_t v_stop_2473_, lean_object* v_b_2474_){
_start:
{
lean_object* v___y_2476_; uint8_t v___x_2480_; 
v___x_2480_ = lean_usize_dec_eq(v_i_2472_, v_stop_2473_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; uint8_t v___y_2483_; lean_object* v_type_2485_; uint8_t v___x_2486_; 
v___x_2481_ = lean_array_uget_borrowed(v_as_2471_, v_i_2472_);
v_type_2485_ = lean_ctor_get(v___x_2481_, 2);
v___x_2486_ = l_Lean_Expr_isVoid(v_type_2485_);
if (v___x_2486_ == 0)
{
uint8_t v___x_2487_; 
v___x_2487_ = l_Lean_Expr_isErased(v_type_2485_);
v___y_2483_ = v___x_2487_;
goto v___jp_2482_;
}
else
{
v___y_2483_ = v___x_2486_;
goto v___jp_2482_;
}
v___jp_2482_:
{
if (v___y_2483_ == 0)
{
lean_object* v___x_2484_; 
lean_inc(v___x_2481_);
v___x_2484_ = lean_array_push(v_b_2474_, v___x_2481_);
v___y_2476_ = v___x_2484_;
goto v___jp_2475_;
}
else
{
v___y_2476_ = v_b_2474_;
goto v___jp_2475_;
}
}
}
else
{
return v_b_2474_;
}
v___jp_2475_:
{
size_t v___x_2477_; size_t v___x_2478_; 
v___x_2477_ = ((size_t)1ULL);
v___x_2478_ = lean_usize_add(v_i_2472_, v___x_2477_);
v_i_2472_ = v___x_2478_;
v_b_2474_ = v___y_2476_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1___boxed(lean_object* v_as_2488_, lean_object* v_i_2489_, lean_object* v_stop_2490_, lean_object* v_b_2491_){
_start:
{
size_t v_i_boxed_2492_; size_t v_stop_boxed_2493_; lean_object* v_res_2494_; 
v_i_boxed_2492_ = lean_unbox_usize(v_i_2489_);
lean_dec(v_i_2489_);
v_stop_boxed_2493_ = lean_unbox_usize(v_stop_2490_);
lean_dec(v_stop_2490_);
v_res_2494_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_as_2488_, v_i_boxed_2492_, v_stop_boxed_2493_, v_b_2491_);
lean_dec_ref(v_as_2488_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(size_t v_sz_2495_, size_t v_i_2496_, lean_object* v_bs_2497_){
_start:
{
uint8_t v___x_2498_; 
v___x_2498_ = lean_usize_dec_lt(v_i_2496_, v_sz_2495_);
if (v___x_2498_ == 0)
{
return v_bs_2497_;
}
else
{
lean_object* v_v_2499_; lean_object* v_fvarId_2500_; lean_object* v___x_2501_; lean_object* v_bs_x27_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; size_t v___x_2505_; size_t v___x_2506_; lean_object* v___x_2507_; 
v_v_2499_ = lean_array_uget_borrowed(v_bs_2497_, v_i_2496_);
v_fvarId_2500_ = lean_ctor_get(v_v_2499_, 0);
lean_inc(v_fvarId_2500_);
v___x_2501_ = lean_unsigned_to_nat(0u);
v_bs_x27_2502_ = lean_array_uset(v_bs_2497_, v_i_2496_, v___x_2501_);
v___x_2503_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2500_);
v___x_2504_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2503_);
v___x_2505_ = ((size_t)1ULL);
v___x_2506_ = lean_usize_add(v_i_2496_, v___x_2505_);
v___x_2507_ = lean_array_uset(v_bs_x27_2502_, v_i_2496_, v___x_2504_);
v_i_2496_ = v___x_2506_;
v_bs_2497_ = v___x_2507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0___boxed(lean_object* v_sz_2509_, lean_object* v_i_2510_, lean_object* v_bs_2511_){
_start:
{
size_t v_sz_boxed_2512_; size_t v_i_boxed_2513_; lean_object* v_res_2514_; 
v_sz_boxed_2512_ = lean_unbox_usize(v_sz_2509_);
lean_dec(v_sz_2509_);
v_i_boxed_2513_ = lean_unbox_usize(v_i_2510_);
lean_dec(v_i_2510_);
v_res_2514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_boxed_2512_, v_i_boxed_2513_, v_bs_2511_);
return v_res_2514_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8));
v___x_2516_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2515_);
return v___x_2516_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v_returnVars_2520_; 
v___x_2517_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0);
v___x_2518_ = lean_unsigned_to_nat(1u);
v___x_2519_ = lean_mk_empty_array_with_capacity(v___x_2518_);
v_returnVars_2520_ = lean_array_push(v___x_2519_, v___x_2517_);
return v_returnVars_2520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl(lean_object* v_decl_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_value_2529_; 
v_value_2529_ = lean_ctor_get(v_decl_2523_, 1);
lean_inc_ref(v_value_2529_);
if (lean_obj_tag(v_value_2529_) == 0)
{
lean_object* v_toSignature_2530_; lean_object* v_code_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2596_; 
v_toSignature_2530_ = lean_ctor_get(v_decl_2523_, 0);
lean_inc_ref(v_toSignature_2530_);
lean_dec_ref(v_decl_2523_);
v_code_2531_ = lean_ctor_get(v_value_2529_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v_value_2529_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2533_ = v_value_2529_;
v_isShared_2534_ = v_isSharedCheck_2596_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_code_2531_);
lean_dec(v_value_2529_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2596_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v_name_2535_; lean_object* v_params_2536_; lean_object* v___f_2537_; lean_object* v_fnName_2538_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___y_2574_; lean_object* v___x_2587_; uint8_t v___x_2588_; 
v_name_2535_ = lean_ctor_get(v_toSignature_2530_, 0);
lean_inc_n(v_name_2535_, 2);
v_params_2536_ = lean_ctor_get(v_toSignature_2530_, 3);
lean_inc_ref(v_params_2536_);
lean_dec_ref(v_toSignature_2530_);
lean_inc_ref(v_code_2531_);
v___f_2537_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2537_, 0, v_code_2531_);
v_fnName_2538_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_name_2535_);
v___x_2571_ = lean_unsigned_to_nat(0u);
v___x_2572_ = lean_array_get_size(v_params_2536_);
v___x_2587_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2));
v___x_2588_ = lean_nat_dec_lt(v___x_2571_, v___x_2572_);
if (v___x_2588_ == 0)
{
v___y_2574_ = v___x_2587_;
goto v___jp_2573_;
}
else
{
uint8_t v___x_2589_; 
v___x_2589_ = lean_nat_dec_le(v___x_2572_, v___x_2572_);
if (v___x_2589_ == 0)
{
if (v___x_2588_ == 0)
{
v___y_2574_ = v___x_2587_;
goto v___jp_2573_;
}
else
{
size_t v___x_2590_; size_t v___x_2591_; lean_object* v___x_2592_; 
v___x_2590_ = ((size_t)0ULL);
v___x_2591_ = lean_usize_of_nat(v___x_2572_);
v___x_2592_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2536_, v___x_2590_, v___x_2591_, v___x_2587_);
v___y_2574_ = v___x_2592_;
goto v___jp_2573_;
}
}
else
{
size_t v___x_2593_; size_t v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = ((size_t)0ULL);
v___x_2594_ = lean_usize_of_nat(v___x_2572_);
v___x_2595_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2536_, v___x_2593_, v___x_2594_, v___x_2587_);
v___y_2574_ = v___x_2595_;
goto v___jp_2573_;
}
}
v___jp_2539_:
{
lean_object* v_localDecls_2544_; lean_object* v_otherModuleDecls_2545_; lean_object* v_modName_2546_; lean_object* v_fvarTypes_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v_localDecls_2544_ = lean_ctor_get(v_a_2524_, 0);
v_otherModuleDecls_2545_ = lean_ctor_get(v_a_2524_, 1);
v_modName_2546_ = lean_ctor_get(v_a_2524_, 2);
v_fvarTypes_2547_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v_code_2531_, v___y_2543_);
lean_inc(v_modName_2546_);
lean_inc_ref(v_otherModuleDecls_2545_);
lean_inc_ref(v_localDecls_2544_);
v___x_2548_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2548_, 0, v_localDecls_2544_);
lean_ctor_set(v___x_2548_, 1, v_otherModuleDecls_2545_);
lean_ctor_set(v___x_2548_, 2, v_modName_2546_);
lean_ctor_set(v___x_2548_, 3, v_name_2535_);
lean_ctor_set(v___x_2548_, 4, v_fvarTypes_2547_);
lean_ctor_set(v___x_2548_, 5, v___y_2540_);
v___x_2549_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___f_2537_, v___x_2548_, v_a_2525_, v_a_2526_, v_a_2527_);
lean_dec_ref_known(v___x_2548_, 6);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2562_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2562_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2562_ == 0)
{
v___x_2552_ = v___x_2549_;
v_isShared_2553_ = v_isSharedCheck_2562_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2549_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2562_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v_a_2550_);
v___x_2555_ = v___x_2533_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2559_; 
lean_inc_ref(v___y_2542_);
v___x_2556_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2556_, 0, v_fnName_2538_);
lean_ctor_set(v___x_2556_, 1, v___y_2541_);
lean_ctor_set(v___x_2556_, 2, v___y_2542_);
lean_ctor_set(v___x_2556_, 3, v___x_2555_);
v___x_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
if (v_isShared_2553_ == 0)
{
lean_ctor_set(v___x_2552_, 0, v___x_2557_);
v___x_2559_ = v___x_2552_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2557_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
else
{
lean_object* v_a_2563_; lean_object* v___x_2565_; uint8_t v_isShared_2566_; uint8_t v_isSharedCheck_2570_; 
lean_dec_ref(v___y_2541_);
lean_dec_ref(v_fnName_2538_);
lean_del_object(v___x_2533_);
v_a_2563_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2565_ = v___x_2549_;
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
else
{
lean_inc(v_a_2563_);
lean_dec(v___x_2549_);
v___x_2565_ = lean_box(0);
v_isShared_2566_ = v_isSharedCheck_2570_;
goto v_resetjp_2564_;
}
v_resetjp_2564_:
{
lean_object* v___x_2568_; 
if (v_isShared_2566_ == 0)
{
v___x_2568_ = v___x_2565_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2563_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
}
v___jp_2573_:
{
size_t v_sz_2575_; size_t v___x_2576_; lean_object* v_paramNames_2577_; lean_object* v_returnVars_2578_; lean_object* v___x_2579_; lean_object* v_joinDecls_2580_; uint8_t v___x_2581_; 
v_sz_2575_ = lean_array_size(v___y_2574_);
v___x_2576_ = ((size_t)0ULL);
v_paramNames_2577_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_2575_, v___x_2576_, v___y_2574_);
v_returnVars_2578_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1);
v___x_2579_ = lean_box(1);
lean_inc_ref(v_code_2531_);
v_joinDecls_2580_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v_code_2531_, v___x_2579_);
v___x_2581_ = lean_nat_dec_lt(v___x_2571_, v___x_2572_);
if (v___x_2581_ == 0)
{
lean_dec_ref(v_params_2536_);
v___y_2540_ = v_joinDecls_2580_;
v___y_2541_ = v_paramNames_2577_;
v___y_2542_ = v_returnVars_2578_;
v___y_2543_ = v___x_2579_;
goto v___jp_2539_;
}
else
{
uint8_t v___x_2582_; 
v___x_2582_ = lean_nat_dec_le(v___x_2572_, v___x_2572_);
if (v___x_2582_ == 0)
{
if (v___x_2581_ == 0)
{
lean_dec_ref(v_params_2536_);
v___y_2540_ = v_joinDecls_2580_;
v___y_2541_ = v_paramNames_2577_;
v___y_2542_ = v_returnVars_2578_;
v___y_2543_ = v___x_2579_;
goto v___jp_2539_;
}
else
{
size_t v___x_2583_; lean_object* v___x_2584_; 
v___x_2583_ = lean_usize_of_nat(v___x_2572_);
v___x_2584_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2536_, v___x_2576_, v___x_2583_, v___x_2579_);
lean_dec_ref(v_params_2536_);
v___y_2540_ = v_joinDecls_2580_;
v___y_2541_ = v_paramNames_2577_;
v___y_2542_ = v_returnVars_2578_;
v___y_2543_ = v___x_2584_;
goto v___jp_2539_;
}
}
else
{
size_t v___x_2585_; lean_object* v___x_2586_; 
v___x_2585_ = lean_usize_of_nat(v___x_2572_);
v___x_2586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2536_, v___x_2576_, v___x_2585_, v___x_2579_);
lean_dec_ref(v_params_2536_);
v___y_2540_ = v_joinDecls_2580_;
v___y_2541_ = v_paramNames_2577_;
v___y_2542_ = v_returnVars_2578_;
v___y_2543_ = v___x_2586_;
goto v___jp_2539_;
}
}
}
}
}
else
{
lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v_decl_2523_);
v_isSharedCheck_2604_ = !lean_is_exclusive(v_value_2529_);
if (v_isSharedCheck_2604_ == 0)
{
lean_object* v_unused_2605_; 
v_unused_2605_ = lean_ctor_get(v_value_2529_, 0);
lean_dec(v_unused_2605_);
v___x_2598_ = v_value_2529_;
v_isShared_2599_ = v_isSharedCheck_2604_;
goto v_resetjp_2597_;
}
else
{
lean_dec(v_value_2529_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2604_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2600_; lean_object* v___x_2602_; 
v___x_2600_ = lean_box(0);
if (v_isShared_2599_ == 0)
{
lean_ctor_set_tag(v___x_2598_, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2600_);
v___x_2602_ = v___x_2598_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2600_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___boxed(lean_object* v_decl_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_decl_2606_, v_a_2607_, v_a_2608_, v_a_2609_, v_a_2610_);
lean_dec(v_a_2610_);
lean_dec_ref(v_a_2609_);
lean_dec(v_a_2608_);
lean_dec_ref(v_a_2607_);
return v_res_2612_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2(void){
_start:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1));
v___x_2616_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2615_);
return v___x_2616_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2617_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2);
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = lean_mk_empty_array_with_capacity(v___x_2618_);
v___x_2620_ = lean_array_push(v___x_2619_, v___x_2617_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4));
v___x_2623_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2622_);
return v___x_2623_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6(void){
_start:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2624_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5);
v___x_2625_ = lean_unsigned_to_nat(1u);
v___x_2626_ = lean_mk_empty_array_with_capacity(v___x_2625_);
v___x_2627_ = lean_array_push(v___x_2626_, v___x_2624_);
return v___x_2627_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2634_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8));
v___x_2635_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_2636_ = lean_array_push(v___x_2635_, v___x_2634_);
return v___x_2636_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9);
v___x_2638_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_2639_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2638_);
lean_ctor_set(v___x_2639_, 1, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2640_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_2641_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10);
v___x_2642_ = lean_unsigned_to_nat(2u);
v___x_2643_ = lean_mk_empty_array_with_capacity(v___x_2642_);
v___x_2644_ = lean_array_push(v___x_2643_, v___x_2641_);
v___x_2645_ = lean_array_push(v___x_2644_, v___x_2640_);
return v___x_2645_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2646_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11);
v___x_2647_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_2648_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2647_);
lean_ctor_set(v___x_2648_, 1, v___x_2646_);
return v___x_2648_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2649_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12);
v___x_2650_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_2651_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2650_);
lean_ctor_set(v___x_2651_, 1, v___x_2649_);
return v___x_2651_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14(void){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2652_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13);
v___x_2653_ = lean_unsigned_to_nat(1u);
v___x_2654_ = lean_mk_empty_array_with_capacity(v___x_2653_);
v___x_2655_ = lean_array_push(v___x_2654_, v___x_2652_);
return v___x_2655_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15(void){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14);
v___x_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
return v___x_2657_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2658_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15);
v___x_2659_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_2660_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3);
v___x_2661_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0));
v___x_2662_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
lean_ctor_set(v___x_2662_, 1, v___x_2660_);
lean_ctor_set(v___x_2662_, 2, v___x_2659_);
lean_ctor_set(v___x_2662_, 3, v___x_2658_);
return v___x_2662_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19(void){
_start:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; 
v___x_2665_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18));
v___x_2666_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2665_);
return v___x_2666_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20(void){
_start:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2667_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19);
v___x_2668_ = lean_unsigned_to_nat(1u);
v___x_2669_ = lean_mk_empty_array_with_capacity(v___x_2668_);
v___x_2670_ = lean_array_push(v___x_2669_, v___x_2667_);
return v___x_2670_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22(void){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2673_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_2674_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_2675_ = lean_array_push(v___x_2674_, v___x_2673_);
return v___x_2675_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23(void){
_start:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2676_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22);
v___x_2677_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_2678_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
lean_ctor_set(v___x_2678_, 1, v___x_2676_);
return v___x_2678_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24(void){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2679_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23);
v___x_2680_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_2681_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
lean_ctor_set(v___x_2681_, 1, v___x_2679_);
return v___x_2681_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25(void){
_start:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2682_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24);
v___x_2683_ = lean_unsigned_to_nat(1u);
v___x_2684_ = lean_mk_empty_array_with_capacity(v___x_2683_);
v___x_2685_ = lean_array_push(v___x_2684_, v___x_2682_);
return v___x_2685_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26(void){
_start:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25);
v___x_2687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
return v___x_2687_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27(void){
_start:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2688_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26);
v___x_2689_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_2690_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_2691_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17));
v___x_2692_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2691_);
lean_ctor_set(v___x_2692_, 1, v___x_2690_);
lean_ctor_set(v___x_2692_, 2, v___x_2689_);
lean_ctor_set(v___x_2692_, 3, v___x_2688_);
return v___x_2692_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30(void){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2695_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29));
v___x_2696_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2695_);
return v___x_2696_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32(void){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2698_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31));
v___x_2699_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2698_);
return v___x_2699_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33(void){
_start:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; 
v___x_2700_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32);
v___x_2701_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30);
v___x_2702_ = lean_unsigned_to_nat(2u);
v___x_2703_ = lean_mk_empty_array_with_capacity(v___x_2702_);
v___x_2704_ = lean_array_push(v___x_2703_, v___x_2701_);
v___x_2705_ = lean_array_push(v___x_2704_, v___x_2700_);
return v___x_2705_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35(void){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2707_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34));
v___x_2708_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2707_);
return v___x_2708_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36(void){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2709_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_2710_ = lean_unsigned_to_nat(1u);
v___x_2711_ = lean_mk_empty_array_with_capacity(v___x_2710_);
v___x_2712_ = lean_array_push(v___x_2711_, v___x_2709_);
return v___x_2712_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38(void){
_start:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2714_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37));
v___x_2715_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2714_);
return v___x_2715_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39(void){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2716_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38);
v___x_2717_ = lean_unsigned_to_nat(1u);
v___x_2718_ = lean_mk_empty_array_with_capacity(v___x_2717_);
v___x_2719_ = lean_array_push(v___x_2718_, v___x_2716_);
return v___x_2719_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; 
v___x_2720_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_2721_ = lean_unsigned_to_nat(1u);
v___x_2722_ = lean_mk_empty_array_with_capacity(v___x_2721_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2720_);
return v___x_2723_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41(void){
_start:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2724_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40);
v___x_2725_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_2726_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2725_);
lean_ctor_set(v___x_2726_, 1, v___x_2724_);
return v___x_2726_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42(void){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41);
v___x_2728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
return v___x_2728_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43(void){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2729_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42);
v___x_2730_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39);
v___x_2731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
lean_ctor_set(v___x_2731_, 1, v___x_2729_);
return v___x_2731_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2736_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_2737_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_2738_ = lean_unsigned_to_nat(2u);
v___x_2739_ = lean_mk_empty_array_with_capacity(v___x_2738_);
v___x_2740_ = lean_array_push(v___x_2739_, v___x_2737_);
v___x_2741_ = lean_array_push(v___x_2740_, v___x_2736_);
return v___x_2741_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47(void){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2742_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46);
v___x_2743_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2744_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2744_, 0, v___x_2743_);
lean_ctor_set(v___x_2744_, 1, v___x_2742_);
return v___x_2744_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48(void){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2745_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_2746_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47);
v___x_2747_ = lean_unsigned_to_nat(2u);
v___x_2748_ = lean_mk_empty_array_with_capacity(v___x_2747_);
v___x_2749_ = lean_array_push(v___x_2748_, v___x_2746_);
v___x_2750_ = lean_array_push(v___x_2749_, v___x_2745_);
return v___x_2750_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48);
v___x_2752_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_2753_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
lean_ctor_set(v___x_2753_, 1, v___x_2751_);
return v___x_2753_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2754_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44));
v___x_2755_ = lean_unsigned_to_nat(2u);
v___x_2756_ = lean_mk_empty_array_with_capacity(v___x_2755_);
v___x_2757_ = lean_array_push(v___x_2756_, v___x_2754_);
return v___x_2757_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51(void){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v___x_2758_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49);
v___x_2759_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_2760_ = lean_array_push(v___x_2759_, v___x_2758_);
return v___x_2760_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52(void){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; 
v___x_2761_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51);
v___x_2762_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2763_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2762_);
lean_ctor_set(v___x_2763_, 1, v___x_2761_);
return v___x_2763_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53(void){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2764_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52);
v___x_2765_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_2766_ = lean_unsigned_to_nat(2u);
v___x_2767_ = lean_mk_empty_array_with_capacity(v___x_2766_);
v___x_2768_ = lean_array_push(v___x_2767_, v___x_2765_);
v___x_2769_ = lean_array_push(v___x_2768_, v___x_2764_);
return v___x_2769_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2770_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53);
v___x_2771_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2772_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
lean_ctor_set(v___x_2772_, 1, v___x_2770_);
return v___x_2772_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55(void){
_start:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54);
v___x_2774_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
return v___x_2774_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57(void){
_start:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2777_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_2778_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0);
v___x_2779_ = lean_unsigned_to_nat(2u);
v___x_2780_ = lean_mk_empty_array_with_capacity(v___x_2779_);
v___x_2781_ = lean_array_push(v___x_2780_, v___x_2778_);
v___x_2782_ = lean_array_push(v___x_2781_, v___x_2777_);
return v___x_2782_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58(void){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2783_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57);
v___x_2784_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_2785_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2784_);
lean_ctor_set(v___x_2785_, 1, v___x_2783_);
return v___x_2785_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2786_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58);
v___x_2787_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56));
v___x_2788_ = lean_unsigned_to_nat(2u);
v___x_2789_ = lean_mk_empty_array_with_capacity(v___x_2788_);
v___x_2790_ = lean_array_push(v___x_2789_, v___x_2787_);
v___x_2791_ = lean_array_push(v___x_2790_, v___x_2786_);
return v___x_2791_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60(void){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2792_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59);
v___x_2793_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_2794_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
lean_ctor_set(v___x_2794_, 1, v___x_2792_);
return v___x_2794_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61(void){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2795_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6);
v___x_2796_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60);
v___x_2797_ = lean_unsigned_to_nat(2u);
v___x_2798_ = lean_mk_empty_array_with_capacity(v___x_2797_);
v___x_2799_ = lean_array_push(v___x_2798_, v___x_2796_);
v___x_2800_ = lean_array_push(v___x_2799_, v___x_2795_);
return v___x_2800_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62(void){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2801_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61);
v___x_2802_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_2803_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
lean_ctor_set(v___x_2803_, 1, v___x_2801_);
return v___x_2803_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2804_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62);
v___x_2805_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_2806_ = lean_array_push(v___x_2805_, v___x_2804_);
return v___x_2806_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64(void){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2807_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63);
v___x_2808_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2809_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2809_, 0, v___x_2808_);
lean_ctor_set(v___x_2809_, 1, v___x_2807_);
return v___x_2809_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65(void){
_start:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2810_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64);
v___x_2811_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2811_, 0, v___x_2810_);
return v___x_2811_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68(void){
_start:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2819_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67));
v___x_2820_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65);
v___x_2821_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55);
v___x_2822_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43);
v___x_2823_ = lean_unsigned_to_nat(4u);
v___x_2824_ = lean_mk_empty_array_with_capacity(v___x_2823_);
v___x_2825_ = lean_array_push(v___x_2824_, v___x_2822_);
v___x_2826_ = lean_array_push(v___x_2825_, v___x_2821_);
v___x_2827_ = lean_array_push(v___x_2826_, v___x_2820_);
v___x_2828_ = lean_array_push(v___x_2827_, v___x_2819_);
return v___x_2828_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69(void){
_start:
{
lean_object* v___x_2829_; lean_object* v___x_2830_; 
v___x_2829_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68);
v___x_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2830_, 0, v___x_2829_);
return v___x_2830_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70(void){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2831_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69);
v___x_2832_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36);
v___x_2833_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33);
v___x_2834_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28));
v___x_2835_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
lean_ctor_set(v___x_2835_, 1, v___x_2833_);
lean_ctor_set(v___x_2835_, 2, v___x_2832_);
lean_ctor_set(v___x_2835_, 3, v___x_2831_);
return v___x_2835_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73(void){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72));
v___x_2839_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2838_);
return v___x_2839_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74(void){
_start:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2840_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_2841_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_2842_ = lean_unsigned_to_nat(2u);
v___x_2843_ = lean_mk_empty_array_with_capacity(v___x_2842_);
v___x_2844_ = lean_array_push(v___x_2843_, v___x_2841_);
v___x_2845_ = lean_array_push(v___x_2844_, v___x_2840_);
return v___x_2845_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75));
v___x_2848_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2847_);
return v___x_2848_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77(void){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2849_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_2850_ = lean_unsigned_to_nat(1u);
v___x_2851_ = lean_mk_empty_array_with_capacity(v___x_2850_);
v___x_2852_ = lean_array_push(v___x_2851_, v___x_2849_);
return v___x_2852_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81(void){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2861_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_2862_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80));
v___x_2863_ = lean_unsigned_to_nat(2u);
v___x_2864_ = lean_mk_empty_array_with_capacity(v___x_2863_);
v___x_2865_ = lean_array_push(v___x_2864_, v___x_2862_);
v___x_2866_ = lean_array_push(v___x_2865_, v___x_2861_);
return v___x_2866_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82(void){
_start:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2867_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81);
v___x_2868_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2869_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
lean_ctor_set(v___x_2869_, 1, v___x_2867_);
return v___x_2869_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83(void){
_start:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2870_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_2871_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82);
v___x_2872_ = lean_unsigned_to_nat(2u);
v___x_2873_ = lean_mk_empty_array_with_capacity(v___x_2872_);
v___x_2874_ = lean_array_push(v___x_2873_, v___x_2871_);
v___x_2875_ = lean_array_push(v___x_2874_, v___x_2870_);
return v___x_2875_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84(void){
_start:
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2876_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83);
v___x_2877_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_2878_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2878_, 0, v___x_2877_);
lean_ctor_set(v___x_2878_, 1, v___x_2876_);
return v___x_2878_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85(void){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2879_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84);
v___x_2880_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79));
v___x_2881_ = lean_unsigned_to_nat(2u);
v___x_2882_ = lean_mk_empty_array_with_capacity(v___x_2881_);
v___x_2883_ = lean_array_push(v___x_2882_, v___x_2880_);
v___x_2884_ = lean_array_push(v___x_2883_, v___x_2879_);
return v___x_2884_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86(void){
_start:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2885_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85);
v___x_2886_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2887_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2887_, 0, v___x_2886_);
lean_ctor_set(v___x_2887_, 1, v___x_2885_);
return v___x_2887_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87(void){
_start:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2888_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_2889_ = lean_unsigned_to_nat(1u);
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2889_);
v___x_2891_ = lean_array_push(v___x_2890_, v___x_2888_);
return v___x_2891_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88(void){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2892_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87);
v___x_2893_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_2894_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
lean_ctor_set(v___x_2894_, 1, v___x_2892_);
return v___x_2894_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89(void){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2895_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88);
v___x_2896_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78));
v___x_2897_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2896_);
lean_ctor_set(v___x_2897_, 1, v___x_2895_);
return v___x_2897_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90(void){
_start:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v___x_2898_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89);
v___x_2899_ = lean_unsigned_to_nat(1u);
v___x_2900_ = lean_mk_empty_array_with_capacity(v___x_2899_);
v___x_2901_ = lean_array_push(v___x_2900_, v___x_2898_);
return v___x_2901_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91(void){
_start:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2902_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90);
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
return v___x_2903_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2904_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91);
v___x_2905_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77);
v___x_2906_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74);
v___x_2907_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71));
v___x_2908_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
lean_ctor_set(v___x_2908_, 1, v___x_2906_);
lean_ctor_set(v___x_2908_, 2, v___x_2905_);
lean_ctor_set(v___x_2908_, 3, v___x_2904_);
return v___x_2908_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94(void){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2910_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_2911_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_2912_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_2913_ = lean_unsigned_to_nat(3u);
v___x_2914_ = lean_mk_empty_array_with_capacity(v___x_2913_);
v___x_2915_ = lean_array_push(v___x_2914_, v___x_2912_);
v___x_2916_ = lean_array_push(v___x_2915_, v___x_2911_);
v___x_2917_ = lean_array_push(v___x_2916_, v___x_2910_);
return v___x_2917_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97(void){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2922_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96));
v___x_2923_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_2924_ = lean_unsigned_to_nat(2u);
v___x_2925_ = lean_mk_empty_array_with_capacity(v___x_2924_);
v___x_2926_ = lean_array_push(v___x_2925_, v___x_2923_);
v___x_2927_ = lean_array_push(v___x_2926_, v___x_2922_);
return v___x_2927_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98(void){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v___x_2928_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97);
v___x_2929_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2930_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2930_, 0, v___x_2929_);
lean_ctor_set(v___x_2930_, 1, v___x_2928_);
return v___x_2930_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99(void){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98);
v___x_2932_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
return v___x_2932_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100(void){
_start:
{
lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2933_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99);
v___x_2934_ = lean_unsigned_to_nat(1u);
v___x_2935_ = lean_mk_empty_array_with_capacity(v___x_2934_);
v___x_2936_ = lean_array_push(v___x_2935_, v___x_2933_);
return v___x_2936_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101(void){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100);
v___x_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
return v___x_2938_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102(void){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2939_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101);
v___x_2940_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95));
v___x_2941_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94);
v___x_2942_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93));
v___x_2943_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2942_);
lean_ctor_set(v___x_2943_, 1, v___x_2941_);
lean_ctor_set(v___x_2943_, 2, v___x_2940_);
lean_ctor_set(v___x_2943_, 3, v___x_2939_);
return v___x_2943_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104(void){
_start:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; 
v___x_2945_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103));
v___x_2946_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2945_);
return v___x_2946_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105(void){
_start:
{
lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2947_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104);
v___x_2948_ = lean_unsigned_to_nat(1u);
v___x_2949_ = lean_mk_empty_array_with_capacity(v___x_2948_);
v___x_2950_ = lean_array_push(v___x_2949_, v___x_2947_);
return v___x_2950_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110(void){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2963_ = lean_unsigned_to_nat(255u);
v___x_2964_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_2963_);
return v___x_2964_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111(void){
_start:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2965_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110);
v___x_2966_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109));
v___x_2967_ = lean_unsigned_to_nat(2u);
v___x_2968_ = lean_mk_empty_array_with_capacity(v___x_2967_);
v___x_2969_ = lean_array_push(v___x_2968_, v___x_2966_);
v___x_2970_ = lean_array_push(v___x_2969_, v___x_2965_);
return v___x_2970_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112(void){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2971_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111);
v___x_2972_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_2973_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2972_);
lean_ctor_set(v___x_2973_, 1, v___x_2971_);
return v___x_2973_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113(void){
_start:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2974_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112);
v___x_2975_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106));
v___x_2976_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
lean_ctor_set(v___x_2976_, 1, v___x_2974_);
return v___x_2976_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114(void){
_start:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2977_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113);
v___x_2978_ = lean_unsigned_to_nat(1u);
v___x_2979_ = lean_mk_empty_array_with_capacity(v___x_2978_);
v___x_2980_ = lean_array_push(v___x_2979_, v___x_2977_);
return v___x_2980_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115(void){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114);
v___x_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
return v___x_2982_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116(void){
_start:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2983_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115);
v___x_2984_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105);
v___x_2985_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_2986_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_2987_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
lean_ctor_set(v___x_2987_, 1, v___x_2985_);
lean_ctor_set(v___x_2987_, 2, v___x_2984_);
lean_ctor_set(v___x_2987_, 3, v___x_2983_);
return v___x_2987_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119(void){
_start:
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118));
v___x_2991_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2990_);
return v___x_2991_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121(void){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120));
v___x_2994_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2993_);
return v___x_2994_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122(void){
_start:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2995_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121);
v___x_2996_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119);
v___x_2997_ = lean_unsigned_to_nat(2u);
v___x_2998_ = lean_mk_empty_array_with_capacity(v___x_2997_);
v___x_2999_ = lean_array_push(v___x_2998_, v___x_2996_);
v___x_3000_ = lean_array_push(v___x_2999_, v___x_2995_);
return v___x_3000_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124(void){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123));
v___x_3004_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3003_);
return v___x_3004_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126(void){
_start:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3007_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125));
v___x_3008_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3007_);
return v___x_3008_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127(void){
_start:
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3009_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126);
v___x_3010_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124);
v___x_3011_ = lean_unsigned_to_nat(2u);
v___x_3012_ = lean_mk_empty_array_with_capacity(v___x_3011_);
v___x_3013_ = lean_array_push(v___x_3012_, v___x_3010_);
v___x_3014_ = lean_array_push(v___x_3013_, v___x_3009_);
return v___x_3014_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128(void){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v___x_3015_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3016_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3017_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
lean_ctor_set(v___x_3017_, 1, v___x_3015_);
return v___x_3017_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129(void){
_start:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128);
v___x_3019_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3018_);
return v___x_3019_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130(void){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3020_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3021_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3022_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3021_);
lean_ctor_set(v___x_3022_, 1, v___x_3020_);
return v___x_3022_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131(void){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3023_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130);
v___x_3024_ = lean_unsigned_to_nat(1u);
v___x_3025_ = lean_mk_empty_array_with_capacity(v___x_3024_);
v___x_3026_ = lean_array_push(v___x_3025_, v___x_3023_);
return v___x_3026_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
return v___x_3028_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3029_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132);
v___x_3030_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3031_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3032_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117));
v___x_3033_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
lean_ctor_set(v___x_3033_, 1, v___x_3031_);
lean_ctor_set(v___x_3033_, 2, v___x_3030_);
lean_ctor_set(v___x_3033_, 3, v___x_3029_);
return v___x_3033_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135));
v___x_3037_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3036_);
return v___x_3037_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137(void){
_start:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3038_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3039_ = lean_unsigned_to_nat(1u);
v___x_3040_ = lean_mk_empty_array_with_capacity(v___x_3039_);
v___x_3041_ = lean_array_push(v___x_3040_, v___x_3038_);
return v___x_3041_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138(void){
_start:
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124);
v___x_3043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
return v___x_3043_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139(void){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3044_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138);
v___x_3045_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137);
v___x_3046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set(v___x_3046_, 1, v___x_3044_);
return v___x_3046_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140));
v___x_3049_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3048_);
return v___x_3049_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142(void){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v___x_3050_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141);
v___x_3051_ = lean_unsigned_to_nat(1u);
v___x_3052_ = lean_mk_empty_array_with_capacity(v___x_3051_);
v___x_3053_ = lean_array_push(v___x_3052_, v___x_3050_);
return v___x_3053_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143(void){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126);
v___x_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
return v___x_3055_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3056_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143);
v___x_3057_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142);
v___x_3058_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3057_);
lean_ctor_set(v___x_3058_, 1, v___x_3056_);
return v___x_3058_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150(void){
_start:
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3073_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_3074_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3075_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
lean_ctor_set(v___x_3075_, 1, v___x_3073_);
return v___x_3075_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151(void){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3076_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150);
v___x_3077_ = lean_unsigned_to_nat(1u);
v___x_3078_ = lean_mk_empty_array_with_capacity(v___x_3077_);
v___x_3079_ = lean_array_push(v___x_3078_, v___x_3076_);
return v___x_3079_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152(void){
_start:
{
lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3080_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151);
v___x_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
return v___x_3081_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153(void){
_start:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3082_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152);
v___x_3083_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149));
v___x_3084_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3083_);
lean_ctor_set(v___x_3084_, 1, v___x_3082_);
return v___x_3084_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156(void){
_start:
{
lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3089_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155));
v___x_3090_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3089_);
return v___x_3090_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157(void){
_start:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3091_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156);
v___x_3092_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
lean_ctor_set(v___x_3093_, 1, v___x_3091_);
return v___x_3093_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158(void){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3094_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157);
v___x_3095_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153);
v___x_3096_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144);
v___x_3097_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139);
v___x_3098_ = lean_unsigned_to_nat(4u);
v___x_3099_ = lean_mk_empty_array_with_capacity(v___x_3098_);
v___x_3100_ = lean_array_push(v___x_3099_, v___x_3097_);
v___x_3101_ = lean_array_push(v___x_3100_, v___x_3096_);
v___x_3102_ = lean_array_push(v___x_3101_, v___x_3095_);
v___x_3103_ = lean_array_push(v___x_3102_, v___x_3094_);
return v___x_3103_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159(void){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3104_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__158);
v___x_3105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3105_, 0, v___x_3104_);
return v___x_3105_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160(void){
_start:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3106_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__159);
v___x_3107_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3108_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3109_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134));
v___x_3110_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_3108_);
lean_ctor_set(v___x_3110_, 2, v___x_3107_);
lean_ctor_set(v___x_3110_, 3, v___x_3106_);
return v___x_3110_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162(void){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3113_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
lean_ctor_set(v___x_3114_, 1, v___x_3112_);
return v___x_3114_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162);
v___x_3116_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3115_);
return v___x_3116_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3117_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163);
v___x_3118_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3119_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v___x_3117_);
return v___x_3119_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165(void){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3120_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164);
v___x_3121_ = lean_unsigned_to_nat(1u);
v___x_3122_ = lean_mk_empty_array_with_capacity(v___x_3121_);
v___x_3123_ = lean_array_push(v___x_3122_, v___x_3120_);
return v___x_3123_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166(void){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165);
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
return v___x_3125_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167(void){
_start:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3126_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166);
v___x_3127_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3128_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3129_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__161));
v___x_3130_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
lean_ctor_set(v___x_3130_, 1, v___x_3128_);
lean_ctor_set(v___x_3130_, 2, v___x_3127_);
lean_ctor_set(v___x_3130_, 3, v___x_3126_);
return v___x_3130_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170(void){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3133_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3134_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169));
v___x_3135_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
lean_ctor_set(v___x_3135_, 1, v___x_3133_);
return v___x_3135_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171(void){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3137_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3136_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172(void){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3138_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171);
v___x_3139_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3140_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
lean_ctor_set(v___x_3140_, 1, v___x_3138_);
return v___x_3140_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3141_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172);
v___x_3142_ = lean_unsigned_to_nat(1u);
v___x_3143_ = lean_mk_empty_array_with_capacity(v___x_3142_);
v___x_3144_ = lean_array_push(v___x_3143_, v___x_3141_);
return v___x_3144_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3145_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173);
v___x_3146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
return v___x_3146_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174);
v___x_3148_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3149_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
lean_ctor_set(v___x_3149_, 1, v___x_3147_);
return v___x_3149_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; 
v___x_3150_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150);
v___x_3151_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175);
v___x_3152_ = lean_unsigned_to_nat(2u);
v___x_3153_ = lean_mk_empty_array_with_capacity(v___x_3152_);
v___x_3154_ = lean_array_push(v___x_3153_, v___x_3151_);
v___x_3155_ = lean_array_push(v___x_3154_, v___x_3150_);
return v___x_3155_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176);
v___x_3157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3157_, 0, v___x_3156_);
return v___x_3157_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178(void){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3158_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177);
v___x_3159_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3160_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3161_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168));
v___x_3162_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
lean_ctor_set(v___x_3162_, 1, v___x_3160_);
lean_ctor_set(v___x_3162_, 2, v___x_3159_);
lean_ctor_set(v___x_3162_, 3, v___x_3158_);
return v___x_3162_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182(void){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3166_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3167_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181));
v___x_3168_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3167_);
lean_ctor_set(v___x_3168_, 1, v___x_3166_);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183(void){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3169_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182);
v___x_3170_ = lean_unsigned_to_nat(1u);
v___x_3171_ = lean_mk_empty_array_with_capacity(v___x_3170_);
v___x_3172_ = lean_array_push(v___x_3171_, v___x_3169_);
return v___x_3172_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183);
v___x_3174_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180));
v___x_3175_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3173_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185(void){
_start:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3176_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174);
v___x_3177_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184);
v___x_3178_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
lean_ctor_set(v___x_3178_, 1, v___x_3176_);
return v___x_3178_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186(void){
_start:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3179_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150);
v___x_3180_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3181_ = lean_unsigned_to_nat(2u);
v___x_3182_ = lean_mk_empty_array_with_capacity(v___x_3181_);
v___x_3183_ = lean_array_push(v___x_3182_, v___x_3180_);
v___x_3184_ = lean_array_push(v___x_3183_, v___x_3179_);
return v___x_3184_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3185_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186);
v___x_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
return v___x_3186_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188(void){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3187_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187);
v___x_3188_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3189_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3190_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179));
v___x_3191_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
lean_ctor_set(v___x_3191_, 1, v___x_3189_);
lean_ctor_set(v___x_3191_, 2, v___x_3188_);
lean_ctor_set(v___x_3191_, 3, v___x_3187_);
return v___x_3191_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3193_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127);
v___x_3194_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145));
v___x_3195_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
lean_ctor_set(v___x_3195_, 1, v___x_3193_);
return v___x_3195_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174);
v___x_3197_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190);
v___x_3198_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
lean_ctor_set(v___x_3198_, 1, v___x_3196_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3199_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150);
v___x_3200_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191);
v___x_3201_ = lean_unsigned_to_nat(2u);
v___x_3202_ = lean_mk_empty_array_with_capacity(v___x_3201_);
v___x_3203_ = lean_array_push(v___x_3202_, v___x_3200_);
v___x_3204_ = lean_array_push(v___x_3203_, v___x_3199_);
return v___x_3204_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192);
v___x_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3205_);
return v___x_3206_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194(void){
_start:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3207_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193);
v___x_3208_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3209_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3210_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189));
v___x_3211_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3211_, 0, v___x_3210_);
lean_ctor_set(v___x_3211_, 1, v___x_3209_);
lean_ctor_set(v___x_3211_, 2, v___x_3208_);
lean_ctor_set(v___x_3211_, 3, v___x_3207_);
return v___x_3211_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195(void){
_start:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3212_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194);
v___x_3213_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188);
v___x_3214_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178);
v___x_3215_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167);
v___x_3216_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__160);
v___x_3217_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3218_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116);
v___x_3219_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102);
v___x_3220_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92);
v___x_3221_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70);
v___x_3222_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27);
v___x_3223_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16);
v___x_3224_ = lean_unsigned_to_nat(12u);
v___x_3225_ = lean_mk_empty_array_with_capacity(v___x_3224_);
v___x_3226_ = lean_array_push(v___x_3225_, v___x_3223_);
v___x_3227_ = lean_array_push(v___x_3226_, v___x_3222_);
v___x_3228_ = lean_array_push(v___x_3227_, v___x_3221_);
v___x_3229_ = lean_array_push(v___x_3228_, v___x_3220_);
v___x_3230_ = lean_array_push(v___x_3229_, v___x_3219_);
v___x_3231_ = lean_array_push(v___x_3230_, v___x_3218_);
v___x_3232_ = lean_array_push(v___x_3231_, v___x_3217_);
v___x_3233_ = lean_array_push(v___x_3232_, v___x_3216_);
v___x_3234_ = lean_array_push(v___x_3233_, v___x_3215_);
v___x_3235_ = lean_array_push(v___x_3234_, v___x_3214_);
v___x_3236_ = lean_array_push(v___x_3235_, v___x_3213_);
v___x_3237_ = lean_array_push(v___x_3236_, v___x_3212_);
return v___x_3237_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers(void){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(lean_object* v_i_3240_){
_start:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3241_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_3242_ = lean_unsigned_to_nat(4u);
v___x_3243_ = lean_unsigned_to_nat(32u);
v___x_3244_ = lean_nat_mul(v_i_3240_, v___x_3243_);
v___x_3245_ = lean_nat_add(v___x_3242_, v___x_3244_);
lean_dec(v___x_3244_);
v___x_3246_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3245_);
v___x_3247_ = lean_unsigned_to_nat(1u);
v___x_3248_ = lean_mk_empty_array_with_capacity(v___x_3247_);
v___x_3249_ = lean_array_push(v___x_3248_, v___x_3246_);
v___x_3250_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3241_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___x_3251_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___boxed(lean_object* v_i_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_i_3252_);
lean_dec(v_i_3252_);
return v_res_3253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(size_t v_sz_3254_, size_t v_i_3255_, lean_object* v_bs_3256_){
_start:
{
uint8_t v___x_3257_; 
v___x_3257_ = lean_usize_dec_lt(v_i_3255_, v_sz_3254_);
if (v___x_3257_ == 0)
{
return v_bs_3256_;
}
else
{
lean_object* v_v_3258_; lean_object* v___x_3259_; lean_object* v_bs_x27_3260_; lean_object* v___x_3261_; size_t v___x_3262_; size_t v___x_3263_; lean_object* v___x_3264_; 
v_v_3258_ = lean_array_uget(v_bs_3256_, v_i_3255_);
v___x_3259_ = lean_unsigned_to_nat(0u);
v_bs_x27_3260_ = lean_array_uset(v_bs_3256_, v_i_3255_, v___x_3259_);
v___x_3261_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_v_3258_);
lean_dec(v_v_3258_);
v___x_3262_ = ((size_t)1ULL);
v___x_3263_ = lean_usize_add(v_i_3255_, v___x_3262_);
v___x_3264_ = lean_array_uset(v_bs_x27_3260_, v_i_3255_, v___x_3261_);
v_i_3255_ = v___x_3263_;
v_bs_3256_ = v___x_3264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0___boxed(lean_object* v_sz_3266_, lean_object* v_i_3267_, lean_object* v_bs_3268_){
_start:
{
size_t v_sz_boxed_3269_; size_t v_i_boxed_3270_; lean_object* v_res_3271_; 
v_sz_boxed_3269_ = lean_unbox_usize(v_sz_3266_);
lean_dec(v_sz_3266_);
v_i_boxed_3270_ = lean_unbox_usize(v_i_3267_);
lean_dec(v_i_3267_);
v_res_3271_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_boxed_3269_, v_i_boxed_3270_, v_bs_3268_);
return v_res_3271_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3274_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1));
v___x_3275_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3274_);
return v___x_3275_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3276_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2);
v___x_3277_ = lean_unsigned_to_nat(1u);
v___x_3278_ = lean_mk_empty_array_with_capacity(v___x_3277_);
v___x_3279_ = lean_array_push(v___x_3278_, v___x_3276_);
return v___x_3279_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3281_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_3282_ = lean_unsigned_to_nat(2u);
v___x_3283_ = lean_mk_empty_array_with_capacity(v___x_3282_);
v___x_3284_ = lean_array_push(v___x_3283_, v___x_3281_);
v___x_3285_ = lean_array_push(v___x_3284_, v___x_3281_);
return v___x_3285_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6(void){
_start:
{
lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; 
v___x_3286_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5);
v___x_3287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_3288_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3287_);
lean_ctor_set(v___x_3288_, 1, v___x_3286_);
return v___x_3288_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7(void){
_start:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6);
v___x_3290_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
return v___x_3290_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9(void){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8));
v___x_3294_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3293_);
return v___x_3294_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10(void){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3295_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9);
v___x_3296_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_3297_ = lean_array_push(v___x_3296_, v___x_3295_);
return v___x_3297_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11(void){
_start:
{
lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3298_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10);
v___x_3299_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3300_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
lean_ctor_set(v___x_3300_, 1, v___x_3298_);
return v___x_3300_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12(void){
_start:
{
lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11);
v___x_3302_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3301_);
return v___x_3302_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13(void){
_start:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3303_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3304_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_3305_ = lean_array_push(v___x_3304_, v___x_3303_);
return v___x_3305_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14(void){
_start:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3306_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13);
v___x_3307_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_3308_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3308_, 0, v___x_3307_);
lean_ctor_set(v___x_3308_, 1, v___x_3306_);
return v___x_3308_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15(void){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14);
v___x_3310_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(size_t v_sz_3311_, size_t v_i_3312_, lean_object* v_bs_3313_){
_start:
{
uint8_t v___x_3314_; 
v___x_3314_ = lean_usize_dec_lt(v_i_3312_, v_sz_3311_);
if (v___x_3314_ == 0)
{
return v_bs_3313_;
}
else
{
lean_object* v_v_3315_; lean_object* v_fnName_3316_; lean_object* v_argCount_3317_; uint8_t v_returnsValue_3318_; lean_object* v___x_3319_; lean_object* v_bs_x27_3320_; lean_object* v___y_3322_; lean_object* v___x_3334_; lean_object* v___x_3335_; size_t v_sz_3336_; size_t v___x_3337_; lean_object* v_argExprs_3338_; lean_object* v_callExpr_3339_; 
v_v_3315_ = lean_array_uget(v_bs_3313_, v_i_3312_);
v_fnName_3316_ = lean_ctor_get(v_v_3315_, 1);
v_argCount_3317_ = lean_ctor_get(v_v_3315_, 2);
v_returnsValue_3318_ = lean_ctor_get_uint8(v_v_3315_, sizeof(void*)*3);
v___x_3319_ = lean_unsigned_to_nat(0u);
v_bs_x27_3320_ = lean_array_uset(v_bs_3313_, v_i_3312_, v___x_3319_);
lean_inc(v_argCount_3317_);
v___x_3334_ = l_List_range(v_argCount_3317_);
v___x_3335_ = lean_array_mk(v___x_3334_);
v_sz_3336_ = lean_array_size(v___x_3335_);
v___x_3337_ = ((size_t)0ULL);
v_argExprs_3338_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_3336_, v___x_3337_, v___x_3335_);
lean_inc_ref(v_fnName_3316_);
v_callExpr_3339_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_callExpr_3339_, 0, v_fnName_3316_);
lean_ctor_set(v_callExpr_3339_, 1, v_argExprs_3338_);
if (v_returnsValue_3318_ == 0)
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3340_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3341_, 0, v_callExpr_3339_);
v___x_3342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3340_);
lean_ctor_set(v___x_3342_, 1, v___x_3341_);
v___x_3343_ = lean_unsigned_to_nat(2u);
v___x_3344_ = lean_mk_empty_array_with_capacity(v___x_3343_);
v___x_3345_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7);
v___x_3346_ = lean_array_push(v___x_3344_, v___x_3342_);
v___x_3347_ = lean_array_push(v___x_3346_, v___x_3345_);
v___y_3322_ = v___x_3347_;
goto v___jp_3321_;
}
else
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3348_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3349_, 0, v_callExpr_3339_);
v___x_3350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3348_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v___x_3351_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12);
v___x_3352_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__15);
v___x_3353_ = lean_unsigned_to_nat(3u);
v___x_3354_ = lean_mk_empty_array_with_capacity(v___x_3353_);
v___x_3355_ = lean_array_push(v___x_3354_, v___x_3350_);
v___x_3356_ = lean_array_push(v___x_3355_, v___x_3351_);
v___x_3357_ = lean_array_push(v___x_3356_, v___x_3352_);
v___y_3322_ = v___x_3357_;
goto v___jp_3321_;
}
v___jp_3321_:
{
lean_object* v_selector_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; size_t v___x_3330_; size_t v___x_3331_; lean_object* v___x_3332_; 
v_selector_3323_ = lean_ctor_get(v_v_3315_, 0);
lean_inc_ref(v_selector_3323_);
lean_dec(v_v_3315_);
v___x_3324_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0));
v___x_3325_ = lean_string_append(v___x_3324_, v_selector_3323_);
lean_dec_ref(v_selector_3323_);
v___x_3326_ = l_Lean_Compiler_Yul_Literal_hex(v___x_3325_);
v___x_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
v___x_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3328_, 0, v___y_3322_);
v___x_3329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3327_);
lean_ctor_set(v___x_3329_, 1, v___x_3328_);
v___x_3330_ = ((size_t)1ULL);
v___x_3331_ = lean_usize_add(v_i_3312_, v___x_3330_);
v___x_3332_ = lean_array_uset(v_bs_x27_3320_, v_i_3312_, v___x_3329_);
v_i_3312_ = v___x_3331_;
v_bs_3313_ = v___x_3332_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___boxed(lean_object* v_sz_3358_, lean_object* v_i_3359_, lean_object* v_bs_3360_){
_start:
{
size_t v_sz_boxed_3361_; size_t v_i_boxed_3362_; lean_object* v_res_3363_; 
v_sz_boxed_3361_ = lean_unbox_usize(v_sz_3358_);
lean_dec(v_sz_3358_);
v_i_boxed_3362_ = lean_unbox_usize(v_i_3359_);
lean_dec(v_i_3359_);
v_res_3363_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_boxed_3361_, v_i_boxed_3362_, v_bs_3360_);
return v_res_3363_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0(void){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = lean_unsigned_to_nat(224u);
v___x_3365_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3364_);
return v___x_3365_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1(void){
_start:
{
lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3366_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_3367_ = lean_unsigned_to_nat(1u);
v___x_3368_ = lean_mk_empty_array_with_capacity(v___x_3367_);
v___x_3369_ = lean_array_push(v___x_3368_, v___x_3366_);
return v___x_3369_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2(void){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3370_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1);
v___x_3371_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_3372_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
lean_ctor_set(v___x_3372_, 1, v___x_3370_);
return v___x_3372_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3(void){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; 
v___x_3373_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2);
v___x_3374_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0);
v___x_3375_ = lean_unsigned_to_nat(2u);
v___x_3376_ = lean_mk_empty_array_with_capacity(v___x_3375_);
v___x_3377_ = lean_array_push(v___x_3376_, v___x_3374_);
v___x_3378_ = lean_array_push(v___x_3377_, v___x_3373_);
return v___x_3378_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4(void){
_start:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v_selExpr_3381_; 
v___x_3379_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3);
v___x_3380_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v_selExpr_3381_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_selExpr_3381_, 0, v___x_3380_);
lean_ctor_set(v_selExpr_3381_, 1, v___x_3379_);
return v_selExpr_3381_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5);
v___x_3383_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1));
v___x_3384_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
lean_ctor_set(v___x_3384_, 1, v___x_3382_);
return v___x_3384_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6(void){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5);
v___x_3386_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3385_);
return v___x_3386_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7(void){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; 
v___x_3387_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6);
v___x_3388_ = lean_unsigned_to_nat(1u);
v___x_3389_ = lean_mk_empty_array_with_capacity(v___x_3388_);
v___x_3390_ = lean_array_push(v___x_3389_, v___x_3387_);
return v___x_3390_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__8(void){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7);
v___x_3392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3391_);
return v___x_3392_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__9(void){
_start:
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v_defaultCase_3395_; 
v___x_3393_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__8, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__8_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__8);
v___x_3394_ = lean_box(0);
v_defaultCase_3395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_defaultCase_3395_, 0, v___x_3394_);
lean_ctor_set(v_defaultCase_3395_, 1, v___x_3393_);
return v_defaultCase_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(lean_object* v_methods_3396_){
_start:
{
lean_object* v_selExpr_3397_; size_t v_sz_3398_; size_t v___x_3399_; lean_object* v_cases_3400_; lean_object* v_defaultCase_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v_selExpr_3397_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4);
v_sz_3398_ = lean_array_size(v_methods_3396_);
v___x_3399_ = ((size_t)0ULL);
v_cases_3400_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_3398_, v___x_3399_, v_methods_3396_);
v_defaultCase_3401_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__9, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__9_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__9);
v___x_3402_ = lean_array_push(v_cases_3400_, v_defaultCase_3401_);
v___x_3403_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3403_, 0, v_selExpr_3397_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
return v___x_3403_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(lean_object* v___y_3407_, lean_object* v_snd_3408_, lean_object* v_modName_3409_, lean_object* v_x_3410_, lean_object* v_x_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
if (lean_obj_tag(v_x_3410_) == 0)
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
lean_dec(v_modName_3409_);
lean_dec_ref(v_snd_3408_);
lean_dec_ref(v___y_3407_);
v___x_3415_ = l_List_reverse___redArg(v_x_3411_);
v___x_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
return v___x_3416_;
}
else
{
lean_object* v_head_3417_; lean_object* v_tail_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3447_; 
v_head_3417_ = lean_ctor_get(v_x_3410_, 0);
v_tail_3418_ = lean_ctor_get(v_x_3410_, 1);
v_isSharedCheck_3447_ = !lean_is_exclusive(v_x_3410_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3420_ = v_x_3410_;
v_isShared_3421_ = v_isSharedCheck_3447_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_tail_3418_);
lean_inc(v_head_3417_);
lean_dec(v_x_3410_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3447_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v_a_3423_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3430_ = ((lean_object*)(l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0));
v___x_3431_ = lean_st_mk_ref(v___x_3430_);
v___x_3432_ = lean_box(1);
v___x_3433_ = lean_box(0);
lean_inc(v_modName_3409_);
lean_inc_ref(v_snd_3408_);
lean_inc_ref(v___y_3407_);
v___x_3434_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3434_, 0, v___y_3407_);
lean_ctor_set(v___x_3434_, 1, v_snd_3408_);
lean_ctor_set(v___x_3434_, 2, v_modName_3409_);
lean_ctor_set(v___x_3434_, 3, v___x_3433_);
lean_ctor_set(v___x_3434_, 4, v___x_3432_);
lean_ctor_set(v___x_3434_, 5, v___x_3432_);
v___x_3435_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_head_3417_, v___x_3434_, v___x_3431_, v___y_3412_, v___y_3413_);
lean_dec_ref_known(v___x_3434_, 6);
if (lean_obj_tag(v___x_3435_) == 0)
{
lean_object* v_a_3436_; lean_object* v___x_3437_; 
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
lean_inc(v_a_3436_);
lean_dec_ref_known(v___x_3435_, 1);
v___x_3437_ = lean_st_ref_get(v___x_3431_);
lean_dec(v___x_3431_);
lean_dec(v___x_3437_);
v_a_3423_ = v_a_3436_;
goto v___jp_3422_;
}
else
{
lean_dec(v___x_3431_);
if (lean_obj_tag(v___x_3435_) == 0)
{
lean_object* v_a_3438_; 
v_a_3438_ = lean_ctor_get(v___x_3435_, 0);
lean_inc(v_a_3438_);
lean_dec_ref_known(v___x_3435_, 1);
v_a_3423_ = v_a_3438_;
goto v___jp_3422_;
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
lean_del_object(v___x_3420_);
lean_dec(v_tail_3418_);
lean_dec(v_x_3411_);
lean_dec(v_modName_3409_);
lean_dec_ref(v_snd_3408_);
lean_dec_ref(v___y_3407_);
v_a_3439_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3441_ = v___x_3435_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3435_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
v___jp_3422_:
{
if (lean_obj_tag(v_a_3423_) == 0)
{
lean_del_object(v___x_3420_);
v_x_3410_ = v_tail_3418_;
goto _start;
}
else
{
lean_object* v_val_3425_; lean_object* v___x_3427_; 
v_val_3425_ = lean_ctor_get(v_a_3423_, 0);
lean_inc(v_val_3425_);
lean_dec_ref_known(v_a_3423_, 1);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 1, v_x_3411_);
lean_ctor_set(v___x_3420_, 0, v_val_3425_);
v___x_3427_ = v___x_3420_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_val_3425_);
lean_ctor_set(v_reuseFailAlloc_3429_, 1, v_x_3411_);
v___x_3427_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
v_x_3410_ = v_tail_3418_;
v_x_3411_ = v___x_3427_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___boxed(lean_object* v___y_3448_, lean_object* v_snd_3449_, lean_object* v_modName_3450_, lean_object* v_x_3451_, lean_object* v_x_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_3448_, v_snd_3449_, v_modName_3450_, v_x_3451_, v_x_3452_, v___y_3453_, v___y_3454_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(lean_object* v_msg_3457_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = lean_panic_fn_borrowed(v___x_3458_, v_msg_3457_);
return v___x_3459_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3463_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2));
v___x_3464_ = lean_unsigned_to_nat(11u);
v___x_3465_ = lean_unsigned_to_nat(163u);
v___x_3466_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1));
v___x_3467_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0));
v___x_3468_ = l_mkPanicMessageWithDecl(v___x_3467_, v___x_3466_, v___x_3465_, v___x_3464_, v___x_3463_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(lean_object* v_a_3469_, lean_object* v_x_3470_){
_start:
{
if (lean_obj_tag(v_x_3470_) == 0)
{
lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3471_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3);
v___x_3472_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(v___x_3471_);
return v___x_3472_;
}
else
{
lean_object* v_key_3473_; lean_object* v_value_3474_; lean_object* v_tail_3475_; uint8_t v___x_3476_; 
v_key_3473_ = lean_ctor_get(v_x_3470_, 0);
v_value_3474_ = lean_ctor_get(v_x_3470_, 1);
v_tail_3475_ = lean_ctor_get(v_x_3470_, 2);
v___x_3476_ = lean_name_eq(v_key_3473_, v_a_3469_);
if (v___x_3476_ == 0)
{
v_x_3470_ = v_tail_3475_;
goto _start;
}
else
{
lean_inc(v_value_3474_);
return v_value_3474_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___boxed(lean_object* v_a_3478_, lean_object* v_x_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_3478_, v_x_3479_);
lean_dec(v_x_3479_);
lean_dec(v_a_3478_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(lean_object* v_m_3481_, lean_object* v_a_3482_){
_start:
{
lean_object* v_buckets_3483_; lean_object* v___x_3484_; uint64_t v___y_3486_; 
v_buckets_3483_ = lean_ctor_get(v_m_3481_, 1);
v___x_3484_ = lean_array_get_size(v_buckets_3483_);
if (lean_obj_tag(v_a_3482_) == 0)
{
uint64_t v___x_3500_; 
v___x_3500_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_3486_ = v___x_3500_;
goto v___jp_3485_;
}
else
{
uint64_t v_hash_3501_; 
v_hash_3501_ = lean_ctor_get_uint64(v_a_3482_, sizeof(void*)*2);
v___y_3486_ = v_hash_3501_;
goto v___jp_3485_;
}
v___jp_3485_:
{
uint64_t v___x_3487_; uint64_t v___x_3488_; uint64_t v_fold_3489_; uint64_t v___x_3490_; uint64_t v___x_3491_; uint64_t v___x_3492_; size_t v___x_3493_; size_t v___x_3494_; size_t v___x_3495_; size_t v___x_3496_; size_t v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3487_ = 32ULL;
v___x_3488_ = lean_uint64_shift_right(v___y_3486_, v___x_3487_);
v_fold_3489_ = lean_uint64_xor(v___y_3486_, v___x_3488_);
v___x_3490_ = 16ULL;
v___x_3491_ = lean_uint64_shift_right(v_fold_3489_, v___x_3490_);
v___x_3492_ = lean_uint64_xor(v_fold_3489_, v___x_3491_);
v___x_3493_ = lean_uint64_to_usize(v___x_3492_);
v___x_3494_ = lean_usize_of_nat(v___x_3484_);
v___x_3495_ = ((size_t)1ULL);
v___x_3496_ = lean_usize_sub(v___x_3494_, v___x_3495_);
v___x_3497_ = lean_usize_land(v___x_3493_, v___x_3496_);
v___x_3498_ = lean_array_uget_borrowed(v_buckets_3483_, v___x_3497_);
v___x_3499_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_3482_, v___x_3498_);
return v___x_3499_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1___boxed(lean_object* v_m_3502_, lean_object* v_a_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v_m_3502_, v_a_3503_);
lean_dec(v_a_3503_);
lean_dec_ref(v_m_3502_);
return v_res_3504_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(lean_object* v___x_3505_, lean_object* v_l_3506_, lean_object* v_r_3507_){
_start:
{
lean_object* v_toSignature_3508_; lean_object* v_toSignature_3509_; lean_object* v_name_3510_; lean_object* v_name_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; uint8_t v___x_3514_; 
v_toSignature_3508_ = lean_ctor_get(v_l_3506_, 0);
v_toSignature_3509_ = lean_ctor_get(v_r_3507_, 0);
v_name_3510_ = lean_ctor_get(v_toSignature_3508_, 0);
v_name_3511_ = lean_ctor_get(v_toSignature_3509_, 0);
v___x_3512_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_3505_, v_name_3510_);
v___x_3513_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_3505_, v_name_3511_);
v___x_3514_ = lean_nat_dec_lt(v___x_3512_, v___x_3513_);
lean_dec(v___x_3513_);
lean_dec(v___x_3512_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0___boxed(lean_object* v___x_3515_, lean_object* v_l_3516_, lean_object* v_r_3517_){
_start:
{
uint8_t v_res_3518_; lean_object* v_r_3519_; 
v_res_3518_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_3515_, v_l_3516_, v_r_3517_);
lean_dec_ref(v_r_3517_);
lean_dec_ref(v_l_3516_);
lean_dec_ref(v___x_3515_);
v_r_3519_ = lean_box(v_res_3518_);
return v_r_3519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(lean_object* v___x_3520_, lean_object* v_hi_3521_, lean_object* v_pivot_3522_, lean_object* v_as_3523_, lean_object* v_i_3524_, lean_object* v_k_3525_){
_start:
{
uint8_t v___x_3526_; 
v___x_3526_ = lean_nat_dec_lt(v_k_3525_, v_hi_3521_);
if (v___x_3526_ == 0)
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
lean_dec(v_k_3525_);
v___x_3527_ = lean_array_fswap(v_as_3523_, v_i_3524_, v_hi_3521_);
v___x_3528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3528_, 0, v_i_3524_);
lean_ctor_set(v___x_3528_, 1, v___x_3527_);
return v___x_3528_;
}
else
{
lean_object* v___x_3529_; lean_object* v_toSignature_3530_; lean_object* v_toSignature_3531_; lean_object* v_name_3532_; lean_object* v_name_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; uint8_t v___x_3536_; 
v___x_3529_ = lean_array_fget_borrowed(v_as_3523_, v_k_3525_);
v_toSignature_3530_ = lean_ctor_get(v___x_3529_, 0);
v_toSignature_3531_ = lean_ctor_get(v_pivot_3522_, 0);
v_name_3532_ = lean_ctor_get(v_toSignature_3530_, 0);
v_name_3533_ = lean_ctor_get(v_toSignature_3531_, 0);
v___x_3534_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_3520_, v_name_3532_);
v___x_3535_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_3520_, v_name_3533_);
v___x_3536_ = lean_nat_dec_lt(v___x_3534_, v___x_3535_);
lean_dec(v___x_3535_);
lean_dec(v___x_3534_);
if (v___x_3536_ == 0)
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = lean_unsigned_to_nat(1u);
v___x_3538_ = lean_nat_add(v_k_3525_, v___x_3537_);
lean_dec(v_k_3525_);
v_k_3525_ = v___x_3538_;
goto _start;
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3540_ = lean_array_fswap(v_as_3523_, v_i_3524_, v_k_3525_);
v___x_3541_ = lean_unsigned_to_nat(1u);
v___x_3542_ = lean_nat_add(v_i_3524_, v___x_3541_);
lean_dec(v_i_3524_);
v___x_3543_ = lean_nat_add(v_k_3525_, v___x_3541_);
lean_dec(v_k_3525_);
v_as_3523_ = v___x_3540_;
v_i_3524_ = v___x_3542_;
v_k_3525_ = v___x_3543_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg___boxed(lean_object* v___x_3545_, lean_object* v_hi_3546_, lean_object* v_pivot_3547_, lean_object* v_as_3548_, lean_object* v_i_3549_, lean_object* v_k_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_3545_, v_hi_3546_, v_pivot_3547_, v_as_3548_, v_i_3549_, v_k_3550_);
lean_dec_ref(v_pivot_3547_);
lean_dec(v_hi_3546_);
lean_dec_ref(v___x_3545_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(lean_object* v___x_3552_, lean_object* v_n_3553_, lean_object* v_as_3554_, lean_object* v_lo_3555_, lean_object* v_hi_3556_){
_start:
{
lean_object* v___y_3558_; uint8_t v___x_3568_; 
v___x_3568_ = lean_nat_dec_lt(v_lo_3555_, v_hi_3556_);
if (v___x_3568_ == 0)
{
lean_dec(v_lo_3555_);
return v_as_3554_;
}
else
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v_mid_3571_; lean_object* v___y_3573_; lean_object* v___y_3579_; lean_object* v___x_3584_; lean_object* v___x_3585_; uint8_t v___x_3586_; 
v___x_3569_ = lean_nat_add(v_lo_3555_, v_hi_3556_);
v___x_3570_ = lean_unsigned_to_nat(1u);
v_mid_3571_ = lean_nat_shiftr(v___x_3569_, v___x_3570_);
lean_dec(v___x_3569_);
v___x_3584_ = lean_array_fget_borrowed(v_as_3554_, v_mid_3571_);
v___x_3585_ = lean_array_fget_borrowed(v_as_3554_, v_lo_3555_);
v___x_3586_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_3552_, v___x_3584_, v___x_3585_);
if (v___x_3586_ == 0)
{
v___y_3579_ = v_as_3554_;
goto v___jp_3578_;
}
else
{
lean_object* v___x_3587_; 
v___x_3587_ = lean_array_fswap(v_as_3554_, v_lo_3555_, v_mid_3571_);
v___y_3579_ = v___x_3587_;
goto v___jp_3578_;
}
v___jp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; uint8_t v___x_3576_; 
v___x_3574_ = lean_array_fget_borrowed(v___y_3573_, v_mid_3571_);
v___x_3575_ = lean_array_fget_borrowed(v___y_3573_, v_hi_3556_);
v___x_3576_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_3552_, v___x_3574_, v___x_3575_);
if (v___x_3576_ == 0)
{
lean_dec(v_mid_3571_);
v___y_3558_ = v___y_3573_;
goto v___jp_3557_;
}
else
{
lean_object* v___x_3577_; 
v___x_3577_ = lean_array_fswap(v___y_3573_, v_mid_3571_, v_hi_3556_);
lean_dec(v_mid_3571_);
v___y_3558_ = v___x_3577_;
goto v___jp_3557_;
}
}
v___jp_3578_:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; uint8_t v___x_3582_; 
v___x_3580_ = lean_array_fget_borrowed(v___y_3579_, v_hi_3556_);
v___x_3581_ = lean_array_fget_borrowed(v___y_3579_, v_lo_3555_);
v___x_3582_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_3552_, v___x_3580_, v___x_3581_);
if (v___x_3582_ == 0)
{
v___y_3573_ = v___y_3579_;
goto v___jp_3572_;
}
else
{
lean_object* v___x_3583_; 
v___x_3583_ = lean_array_fswap(v___y_3579_, v_lo_3555_, v_hi_3556_);
v___y_3573_ = v___x_3583_;
goto v___jp_3572_;
}
}
}
v___jp_3557_:
{
lean_object* v_pivot_3559_; lean_object* v___x_3560_; lean_object* v_fst_3561_; lean_object* v_snd_3562_; uint8_t v___x_3563_; 
v_pivot_3559_ = lean_array_fget(v___y_3558_, v_hi_3556_);
lean_inc_n(v_lo_3555_, 2);
v___x_3560_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_3552_, v_hi_3556_, v_pivot_3559_, v___y_3558_, v_lo_3555_, v_lo_3555_);
lean_dec(v_pivot_3559_);
v_fst_3561_ = lean_ctor_get(v___x_3560_, 0);
lean_inc(v_fst_3561_);
v_snd_3562_ = lean_ctor_get(v___x_3560_, 1);
lean_inc(v_snd_3562_);
lean_dec_ref(v___x_3560_);
v___x_3563_ = lean_nat_dec_le(v_hi_3556_, v_fst_3561_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3564_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_3552_, v_n_3553_, v_snd_3562_, v_lo_3555_, v_fst_3561_);
v___x_3565_ = lean_unsigned_to_nat(1u);
v___x_3566_ = lean_nat_add(v_fst_3561_, v___x_3565_);
lean_dec(v_fst_3561_);
v_as_3554_ = v___x_3564_;
v_lo_3555_ = v___x_3566_;
goto _start;
}
else
{
lean_dec(v_fst_3561_);
lean_dec(v_lo_3555_);
return v_snd_3562_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___boxed(lean_object* v___x_3588_, lean_object* v_n_3589_, lean_object* v_as_3590_, lean_object* v_lo_3591_, lean_object* v_hi_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_3588_, v_n_3589_, v_as_3590_, v_lo_3591_, v_hi_3592_);
lean_dec(v_hi_3592_);
lean_dec(v_n_3589_);
lean_dec_ref(v___x_3588_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(lean_object* v_modName_3597_, lean_object* v_decls_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_){
_start:
{
lean_object* v___x_3602_; 
v___x_3602_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_decls_3598_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v_fst_3604_; lean_object* v_snd_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___y_3609_; lean_object* v___x_3637_; uint8_t v___x_3638_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v_fst_3604_ = lean_ctor_get(v_a_3603_, 0);
lean_inc(v_fst_3604_);
v_snd_3605_ = lean_ctor_get(v_a_3603_, 1);
lean_inc(v_snd_3605_);
lean_dec(v_a_3603_);
v___x_3606_ = lean_st_ref_get(v_a_3600_);
v___x_3607_ = lean_unsigned_to_nat(0u);
v___x_3637_ = lean_array_get_size(v_fst_3604_);
v___x_3638_ = lean_nat_dec_eq(v___x_3637_, v___x_3607_);
if (v___x_3638_ == 0)
{
lean_object* v_env_3639_; lean_object* v___x_3640_; lean_object* v___y_3642_; lean_object* v___y_3643_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___y_3648_; uint8_t v___x_3650_; 
v_env_3639_ = lean_ctor_get(v___x_3606_, 0);
lean_inc_ref(v_env_3639_);
lean_dec(v___x_3606_);
v___x_3640_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_3639_, v_decls_3598_);
v___x_3645_ = lean_unsigned_to_nat(1u);
v___x_3646_ = lean_nat_sub(v___x_3637_, v___x_3645_);
v___x_3650_ = lean_nat_dec_le(v___x_3607_, v___x_3646_);
if (v___x_3650_ == 0)
{
lean_inc(v___x_3646_);
v___y_3648_ = v___x_3646_;
goto v___jp_3647_;
}
else
{
v___y_3648_ = v___x_3607_;
goto v___jp_3647_;
}
v___jp_3641_:
{
lean_object* v___x_3644_; 
v___x_3644_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_3640_, v___x_3637_, v_fst_3604_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___x_3640_);
v___y_3609_ = v___x_3644_;
goto v___jp_3608_;
}
v___jp_3647_:
{
uint8_t v___x_3649_; 
v___x_3649_ = lean_nat_dec_le(v___y_3648_, v___x_3646_);
if (v___x_3649_ == 0)
{
lean_dec(v___x_3646_);
lean_inc(v___y_3648_);
v___y_3642_ = v___y_3648_;
v___y_3643_ = v___y_3648_;
goto v___jp_3641_;
}
else
{
v___y_3642_ = v___y_3648_;
v___y_3643_ = v___x_3646_;
goto v___jp_3641_;
}
}
}
else
{
lean_dec(v___x_3606_);
v___y_3609_ = v_fst_3604_;
goto v___jp_3608_;
}
v___jp_3608_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
lean_inc_ref(v___y_3609_);
v___x_3610_ = lean_array_to_list(v___y_3609_);
v___x_3611_ = lean_box(0);
v___x_3612_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_3609_, v_snd_3605_, v_modName_3597_, v___x_3610_, v___x_3611_, v_a_3599_, v_a_3600_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3628_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3615_ = v___x_3612_;
v_isShared_3616_ = v_isSharedCheck_3628_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3612_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3628_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3626_; 
v___x_3617_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_3618_ = lean_array_mk(v_a_3613_);
v___x_3619_ = l_Array_append___redArg(v___x_3617_, v___x_3618_);
lean_dec_ref(v___x_3618_);
v___x_3620_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3619_);
v___x_3622_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_3623_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3620_);
lean_ctor_set(v___x_3623_, 1, v___x_3621_);
lean_ctor_set(v___x_3623_, 2, v___x_3622_);
lean_ctor_set(v___x_3623_, 3, v___x_3622_);
v___x_3624_ = l_Lean_Compiler_Yul_Printer_render(v___x_3623_);
lean_dec_ref_known(v___x_3623_, 4);
if (v_isShared_3616_ == 0)
{
lean_ctor_set(v___x_3615_, 0, v___x_3624_);
v___x_3626_ = v___x_3615_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v___x_3624_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
v_a_3629_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3612_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3612_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_modName_3597_);
v_a_3651_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3602_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3602_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___boxed(lean_object* v_modName_3659_, lean_object* v_decls_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_){
_start:
{
lean_object* v_res_3664_; 
v_res_3664_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_3659_, v_decls_3660_, v_a_3661_, v_a_3662_);
lean_dec(v_a_3662_);
lean_dec_ref(v_a_3661_);
lean_dec_ref(v_decls_3660_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(lean_object* v___x_3665_, lean_object* v_n_3666_, lean_object* v_as_3667_, lean_object* v_lo_3668_, lean_object* v_hi_3669_, lean_object* v_w_3670_, lean_object* v_hlo_3671_, lean_object* v_hhi_3672_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_3665_, v_n_3666_, v_as_3667_, v_lo_3668_, v_hi_3669_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___boxed(lean_object* v___x_3674_, lean_object* v_n_3675_, lean_object* v_as_3676_, lean_object* v_lo_3677_, lean_object* v_hi_3678_, lean_object* v_w_3679_, lean_object* v_hlo_3680_, lean_object* v_hhi_3681_){
_start:
{
lean_object* v_res_3682_; 
v_res_3682_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(v___x_3674_, v_n_3675_, v_as_3676_, v_lo_3677_, v_hi_3678_, v_w_3679_, v_hlo_3680_, v_hhi_3681_);
lean_dec(v_hi_3678_);
lean_dec(v_n_3675_);
lean_dec_ref(v___x_3674_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(lean_object* v___x_3683_, lean_object* v_n_3684_, lean_object* v_lo_3685_, lean_object* v_hi_3686_, lean_object* v_hhi_3687_, lean_object* v_pivot_3688_, lean_object* v_as_3689_, lean_object* v_i_3690_, lean_object* v_k_3691_, lean_object* v_ilo_3692_, lean_object* v_ik_3693_, lean_object* v_w_3694_){
_start:
{
lean_object* v___x_3695_; 
v___x_3695_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_3683_, v_hi_3686_, v_pivot_3688_, v_as_3689_, v_i_3690_, v_k_3691_);
return v___x_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___boxed(lean_object* v___x_3696_, lean_object* v_n_3697_, lean_object* v_lo_3698_, lean_object* v_hi_3699_, lean_object* v_hhi_3700_, lean_object* v_pivot_3701_, lean_object* v_as_3702_, lean_object* v_i_3703_, lean_object* v_k_3704_, lean_object* v_ilo_3705_, lean_object* v_ik_3706_, lean_object* v_w_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(v___x_3696_, v_n_3697_, v_lo_3698_, v_hi_3699_, v_hhi_3700_, v_pivot_3701_, v_as_3702_, v_i_3703_, v_k_3704_, v_ilo_3705_, v_ik_3706_, v_w_3707_);
lean_dec_ref(v_pivot_3701_);
lean_dec(v_hi_3699_);
lean_dec(v_lo_3698_);
lean_dec(v_n_3697_);
lean_dec_ref(v___x_3696_);
return v_res_3708_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0(void){
_start:
{
lean_object* v___x_3709_; lean_object* v___x_3710_; 
v___x_3709_ = lean_unsigned_to_nat(128u);
v___x_3710_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3709_);
return v___x_3710_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1(void){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___x_3711_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0);
v___x_3712_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_3713_ = lean_unsigned_to_nat(2u);
v___x_3714_ = lean_mk_empty_array_with_capacity(v___x_3713_);
v___x_3715_ = lean_array_push(v___x_3714_, v___x_3712_);
v___x_3716_ = lean_array_push(v___x_3715_, v___x_3711_);
return v___x_3716_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2(void){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3717_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1);
v___x_3718_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3719_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
lean_ctor_set(v___x_3719_, 1, v___x_3717_);
return v___x_3719_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3(void){
_start:
{
lean_object* v___x_3720_; lean_object* v___x_3721_; 
v___x_3720_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2);
v___x_3721_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
return v___x_3721_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__4(void){
_start:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3722_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3);
v___x_3723_ = lean_unsigned_to_nat(2u);
v___x_3724_ = lean_mk_empty_array_with_capacity(v___x_3723_);
v___x_3725_ = lean_array_push(v___x_3724_, v___x_3722_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract(lean_object* v_modName_3726_, lean_object* v_methods_3727_, lean_object* v_a_3728_, lean_object* v_a_3729_){
_start:
{
lean_object* v___x_3731_; 
v___x_3731_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_3729_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v___x_3733_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
lean_dec_ref_known(v___x_3731_, 1);
v___x_3733_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_a_3732_, v_a_3728_, v_a_3729_);
lean_dec(v_a_3732_);
if (lean_obj_tag(v___x_3733_) == 0)
{
lean_object* v_a_3734_; lean_object* v_fst_3735_; lean_object* v_snd_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v_a_3734_ = lean_ctor_get(v___x_3733_, 0);
lean_inc(v_a_3734_);
lean_dec_ref_known(v___x_3733_, 1);
v_fst_3735_ = lean_ctor_get(v_a_3734_, 0);
lean_inc(v_fst_3735_);
v_snd_3736_ = lean_ctor_get(v_a_3734_, 1);
lean_inc(v_snd_3736_);
lean_dec(v_a_3734_);
v___x_3737_ = lean_st_ref_get(v_a_3729_);
v___x_3738_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_3729_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_object* v_a_3739_; lean_object* v___x_3740_; lean_object* v___y_3742_; lean_object* v___x_3774_; uint8_t v___x_3775_; 
v_a_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_a_3739_);
lean_dec_ref_known(v___x_3738_, 1);
v___x_3740_ = lean_unsigned_to_nat(0u);
v___x_3774_ = lean_array_get_size(v_fst_3735_);
v___x_3775_ = lean_nat_dec_eq(v___x_3774_, v___x_3740_);
if (v___x_3775_ == 0)
{
lean_object* v_env_3776_; lean_object* v___x_3777_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___y_3785_; uint8_t v___x_3787_; 
v_env_3776_ = lean_ctor_get(v___x_3737_, 0);
lean_inc_ref(v_env_3776_);
lean_dec(v___x_3737_);
v___x_3777_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_3776_, v_a_3739_);
lean_dec(v_a_3739_);
v___x_3782_ = lean_unsigned_to_nat(1u);
v___x_3783_ = lean_nat_sub(v___x_3774_, v___x_3782_);
v___x_3787_ = lean_nat_dec_le(v___x_3740_, v___x_3783_);
if (v___x_3787_ == 0)
{
lean_inc(v___x_3783_);
v___y_3785_ = v___x_3783_;
goto v___jp_3784_;
}
else
{
v___y_3785_ = v___x_3740_;
goto v___jp_3784_;
}
v___jp_3778_:
{
lean_object* v___x_3781_; 
v___x_3781_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_3777_, v___x_3774_, v_fst_3735_, v___y_3779_, v___y_3780_);
lean_dec(v___y_3780_);
lean_dec_ref(v___x_3777_);
v___y_3742_ = v___x_3781_;
goto v___jp_3741_;
}
v___jp_3784_:
{
uint8_t v___x_3786_; 
v___x_3786_ = lean_nat_dec_le(v___y_3785_, v___x_3783_);
if (v___x_3786_ == 0)
{
lean_dec(v___x_3783_);
lean_inc(v___y_3785_);
v___y_3779_ = v___y_3785_;
v___y_3780_ = v___y_3785_;
goto v___jp_3778_;
}
else
{
v___y_3779_ = v___y_3785_;
v___y_3780_ = v___x_3783_;
goto v___jp_3778_;
}
}
}
else
{
lean_dec(v_a_3739_);
lean_dec(v___x_3737_);
v___y_3742_ = v_fst_3735_;
goto v___jp_3741_;
}
v___jp_3741_:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
lean_inc_ref(v___y_3742_);
v___x_3743_ = lean_array_to_list(v___y_3742_);
v___x_3744_ = lean_box(0);
v___x_3745_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_3742_, v_snd_3736_, v_modName_3726_, v___x_3743_, v___x_3744_, v_a_3728_, v_a_3729_);
if (lean_obj_tag(v___x_3745_) == 0)
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3765_; 
v_a_3746_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3748_ = v___x_3745_;
v_isShared_3749_ = v_isSharedCheck_3765_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3745_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3765_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3763_; 
v___x_3750_ = l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(v_methods_3727_);
v___x_3751_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__4, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__4);
v___x_3752_ = lean_array_push(v___x_3751_, v___x_3750_);
v___x_3753_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_3754_ = l_Array_append___redArg(v___x_3752_, v___x_3753_);
v___x_3755_ = lean_array_mk(v_a_3746_);
v___x_3756_ = l_Array_append___redArg(v___x_3754_, v___x_3755_);
lean_dec_ref(v___x_3755_);
v___x_3757_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_3758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3756_);
v___x_3759_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_3760_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3757_);
lean_ctor_set(v___x_3760_, 1, v___x_3758_);
lean_ctor_set(v___x_3760_, 2, v___x_3759_);
lean_ctor_set(v___x_3760_, 3, v___x_3759_);
v___x_3761_ = l_Lean_Compiler_Yul_Printer_render(v___x_3760_);
lean_dec_ref_known(v___x_3760_, 4);
if (v_isShared_3749_ == 0)
{
lean_ctor_set(v___x_3748_, 0, v___x_3761_);
v___x_3763_ = v___x_3748_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v___x_3761_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
lean_dec_ref(v_methods_3727_);
v_a_3766_ = lean_ctor_get(v___x_3745_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3745_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3745_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3745_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_dec(v___x_3737_);
lean_dec(v_snd_3736_);
lean_dec(v_fst_3735_);
lean_dec_ref(v_methods_3727_);
lean_dec(v_modName_3726_);
v_a_3788_ = lean_ctor_get(v___x_3738_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3738_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3738_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3738_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec_ref(v_methods_3727_);
lean_dec(v_modName_3726_);
v_a_3796_ = lean_ctor_get(v___x_3733_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3733_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3733_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3733_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_dec_ref(v_methods_3727_);
lean_dec(v_modName_3726_);
v_a_3804_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3731_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3731_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___boxed(lean_object* v_modName_3812_, lean_object* v_methods_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lean_Compiler_LCNF_EmitYul_emitYulContract(v_modName_3812_, v_methods_3813_, v_a_3814_, v_a_3815_);
lean_dec(v_a_3815_);
lean_dec_ref(v_a_3814_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul(lean_object* v_modName_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_){
_start:
{
lean_object* v___x_3822_; 
v___x_3822_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_3820_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; lean_object* v___x_3824_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc(v_a_3823_);
lean_dec_ref_known(v___x_3822_, 1);
v___x_3824_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_3818_, v_a_3823_, v_a_3819_, v_a_3820_);
lean_dec(v_a_3823_);
return v___x_3824_;
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_dec(v_modName_3818_);
v_a_3825_ = lean_ctor_get(v___x_3822_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3822_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3822_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul___boxed(lean_object* v_modName_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_Lean_Compiler_LCNF_EmitYul_emitYul(v_modName_3833_, v_a_3834_, v_a_3835_);
lean_dec(v_a_3835_);
lean_dec_ref(v_a_3834_);
return v_res_3837_;
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
