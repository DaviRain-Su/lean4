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
lean_object* lean_nat_add(lean_object*, lean_object*);
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
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log2"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log1"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "log0"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "sstore"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1;
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
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(lean_object* v_x_804_, lean_object* v_a_805_, lean_object* v_a_806_){
_start:
{
uint64_t v_v_809_; 
switch(lean_obj_tag(v_x_804_))
{
case 0:
{
lean_object* v_val_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_835_; 
v_val_814_ = lean_ctor_get(v_x_804_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v_x_804_);
if (v_isSharedCheck_835_ == 0)
{
v___x_816_ = v_x_804_;
v_isShared_817_ = v_isSharedCheck_835_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_val_814_);
lean_dec(v_x_804_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_835_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = lean_cstr_to_nat("4294967296");
v___x_819_ = lean_nat_dec_lt(v_val_814_, v___x_818_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_823_; 
v___x_820_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__1);
v___x_821_ = l_Nat_reprFast(v_val_814_);
if (v_isShared_817_ == 0)
{
lean_ctor_set_tag(v___x_816_, 3);
lean_ctor_set(v___x_816_, 0, v___x_821_);
v___x_823_ = v___x_816_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v___x_821_);
v___x_823_ = v_reuseFailAlloc_829_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_824_ = l_Lean_MessageData_ofFormat(v___x_823_);
v___x_825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_820_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3, &l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___closed__3);
v___x_827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_825_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_827_, v_a_805_, v_a_806_);
return v___x_828_;
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_830_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_val_814_);
v___x_831_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_830_);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 0, v___x_831_);
v___x_833_ = v___x_816_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
case 1:
{
lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_843_; 
v_isSharedCheck_843_ = !lean_is_exclusive(v_x_804_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v_x_804_, 0);
lean_dec(v_unused_844_);
v___x_837_ = v_x_804_;
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
else
{
lean_dec(v_x_804_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_843_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_839_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
if (v_isShared_838_ == 0)
{
lean_ctor_set_tag(v___x_837_, 0);
lean_ctor_set(v___x_837_, 0, v___x_839_);
v___x_841_ = v___x_837_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v___x_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
case 2:
{
uint8_t v_val_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_val_845_ = lean_ctor_get_uint8(v_x_804_, 0);
lean_dec_ref_known(v_x_804_, 0);
v___x_846_ = lean_uint8_to_nat(v_val_845_);
v___x_847_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_846_);
v___x_848_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_847_);
v___x_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
return v___x_849_;
}
case 3:
{
uint16_t v_val_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_val_850_ = lean_ctor_get_uint16(v_x_804_, 0);
lean_dec_ref_known(v_x_804_, 0);
v___x_851_ = lean_uint16_to_nat(v_val_850_);
v___x_852_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_851_);
v___x_853_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_852_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
case 4:
{
uint32_t v_val_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v_val_855_ = lean_ctor_get_uint32(v_x_804_, 0);
lean_dec_ref_known(v_x_804_, 0);
v___x_856_ = lean_uint32_to_nat(v_val_855_);
v___x_857_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_856_);
v___x_858_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_857_);
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_858_);
return v___x_859_;
}
default: 
{
uint64_t v_val_860_; 
v_val_860_ = lean_ctor_get_uint64(v_x_804_, 0);
lean_dec_ref(v_x_804_);
v_v_809_ = v_val_860_;
goto v___jp_808_;
}
}
v___jp_808_:
{
lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_810_ = lean_uint64_to_nat(v_v_809_);
v___x_811_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_810_);
v___x_812_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_811_);
v___x_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg___boxed(lean_object* v_x_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_x_861_, v_a_862_, v_a_863_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr(lean_object* v_x_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
lean_object* v___x_872_; 
v___x_872_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_x_866_, v_a_869_, v_a_870_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_litToExpr___boxed(lean_object* v_x_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr(v_x_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(lean_object* v___x_880_, lean_object* v_byteLen_881_, lean_object* v_bytes_882_, lean_object* v_range_883_, lean_object* v_b_884_, lean_object* v_i_885_){
_start:
{
lean_object* v_stop_887_; lean_object* v_step_888_; lean_object* v_a_890_; uint8_t v___x_893_; 
v_stop_887_ = lean_ctor_get(v_range_883_, 1);
v_step_888_ = lean_ctor_get(v_range_883_, 2);
v___x_893_ = lean_nat_dec_lt(v_i_885_, v_stop_887_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; 
lean_dec(v_i_885_);
v___x_894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_894_, 0, v_b_884_);
return v___x_894_;
}
else
{
lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_895_ = lean_nat_add(v___x_880_, v_i_885_);
v___x_896_ = lean_nat_dec_lt(v___x_895_, v_byteLen_881_);
if (v___x_896_ == 0)
{
lean_dec(v___x_895_);
v_a_890_ = v_b_884_;
goto v___jp_889_;
}
else
{
lean_object* v___x_897_; uint8_t v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_897_ = lean_unsigned_to_nat(31u);
v___x_898_ = lean_byte_array_get(v_bytes_882_, v___x_895_);
lean_dec(v___x_895_);
v___x_899_ = lean_uint8_to_nat(v___x_898_);
v___x_900_ = lean_nat_sub(v___x_897_, v_i_885_);
v___x_901_ = lean_unsigned_to_nat(8u);
v___x_902_ = lean_nat_mul(v___x_900_, v___x_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_unsigned_to_nat(2u);
v___x_904_ = lean_nat_pow(v___x_903_, v___x_902_);
lean_dec(v___x_902_);
v___x_905_ = lean_nat_mul(v___x_899_, v___x_904_);
lean_dec(v___x_904_);
v___x_906_ = lean_nat_add(v_b_884_, v___x_905_);
lean_dec(v___x_905_);
lean_dec(v_b_884_);
v_a_890_ = v___x_906_;
goto v___jp_889_;
}
}
v___jp_889_:
{
lean_object* v___x_891_; 
v___x_891_ = lean_nat_add(v_i_885_, v_step_888_);
lean_dec(v_i_885_);
v_b_884_ = v_a_890_;
v_i_885_ = v___x_891_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg___boxed(lean_object* v___x_907_, lean_object* v_byteLen_908_, lean_object* v_bytes_909_, lean_object* v_range_910_, lean_object* v_b_911_, lean_object* v_i_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(v___x_907_, v_byteLen_908_, v_bytes_909_, v_range_910_, v_b_911_, v_i_912_);
lean_dec_ref(v_range_910_);
lean_dec_ref(v_bytes_909_);
lean_dec(v_byteLen_908_);
lean_dec(v___x_907_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(lean_object* v_byteLen_919_, lean_object* v_bytes_920_, lean_object* v___x_921_, lean_object* v_range_922_, lean_object* v_b_923_, lean_object* v_i_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_stop_930_; lean_object* v_step_931_; uint8_t v___x_932_; 
v_stop_930_ = lean_ctor_get(v_range_922_, 1);
v_step_931_ = lean_ctor_get(v_range_922_, 2);
v___x_932_ = lean_nat_dec_lt(v_i_924_, v_stop_930_);
if (v___x_932_ == 0)
{
lean_object* v___x_933_; 
lean_dec(v_i_924_);
lean_dec_ref(v___x_921_);
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v_b_923_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_973_; 
v___x_934_ = lean_unsigned_to_nat(32u);
v___x_935_ = lean_unsigned_to_nat(0u);
v___x_936_ = lean_nat_mul(v_i_924_, v___x_934_);
v___x_937_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___closed__0));
v___x_938_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(v___x_936_, v_byteLen_919_, v_bytes_920_, v___x_937_, v___x_935_, v___x_935_);
v_a_939_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_973_ == 0)
{
v___x_941_ = v___x_938_;
v_isShared_942_ = v_isSharedCheck_973_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_938_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_973_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_943_; lean_object* v_stmts_944_; lean_object* v_fresh_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_972_; 
v___x_943_ = lean_st_ref_take(v___y_926_);
v_stmts_944_ = lean_ctor_get(v___x_943_, 0);
v_fresh_945_ = lean_ctor_get(v___x_943_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_972_ == 0)
{
v___x_947_ = v___x_943_;
v_isShared_948_ = v_isSharedCheck_972_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_fresh_945_);
lean_inc(v_stmts_944_);
lean_dec(v___x_943_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_972_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_962_; 
v___x_949_ = lean_unsigned_to_nat(2u);
v___x_950_ = lean_mk_empty_array_with_capacity(v___x_949_);
lean_inc_ref(v___x_921_);
lean_inc_ref(v___x_950_);
v___x_951_ = lean_array_push(v___x_950_, v___x_921_);
v___x_952_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_953_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_954_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_936_);
v___x_955_ = lean_array_push(v___x_951_, v___x_954_);
v___x_956_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_952_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_a_939_);
v___x_958_ = lean_array_push(v___x_950_, v___x_956_);
v___x_959_ = lean_array_push(v___x_958_, v___x_957_);
v___x_960_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_960_, 0, v___x_953_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 3);
lean_ctor_set(v___x_941_, 0, v___x_960_);
v___x_962_ = v___x_941_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_960_);
v___x_962_ = v_reuseFailAlloc_971_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_963_ = lean_array_push(v_stmts_944_, v___x_962_);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 0, v___x_963_);
v___x_965_ = v___x_947_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_963_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_fresh_945_);
v___x_965_ = v_reuseFailAlloc_970_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = lean_st_ref_set(v___y_926_, v___x_965_);
v___x_967_ = lean_box(0);
v___x_968_ = lean_nat_add(v_i_924_, v_step_931_);
lean_dec(v_i_924_);
v_b_923_ = v___x_967_;
v_i_924_ = v___x_968_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg___boxed(lean_object* v_byteLen_974_, lean_object* v_bytes_975_, lean_object* v___x_976_, lean_object* v_range_977_, lean_object* v_b_978_, lean_object* v_i_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(v_byteLen_974_, v_bytes_975_, v___x_976_, v_range_977_, v_b_978_, v_i_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec_ref(v_range_977_);
lean_dec_ref(v_bytes_975_);
lean_dec(v_byteLen_974_);
return v_res_985_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_986_ = lean_unsigned_to_nat(0u);
v___x_987_ = lean_unsigned_to_nat(249u);
v___x_988_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___x_987_, v___x_986_, v___x_986_);
return v___x_988_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_unsigned_to_nat(96u);
v___x_990_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_unsigned_to_nat(128u);
v___x_992_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit(lean_object* v_lhsId_993_, lean_object* v_s_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_){
_start:
{
lean_object* v_bytes_1000_; lean_object* v_byteLen_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v_dataWords_1005_; lean_object* v___x_1006_; lean_object* v_nwords_1007_; lean_object* v___x_1008_; lean_object* v_fst_1009_; lean_object* v_snd_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1142_; 
v_bytes_1000_ = lean_string_to_utf8(v_s_994_);
v_byteLen_1001_ = lean_byte_array_size(v_bytes_1000_);
v___x_1002_ = lean_unsigned_to_nat(31u);
v___x_1003_ = lean_nat_add(v_byteLen_1001_, v___x_1002_);
v___x_1004_ = lean_unsigned_to_nat(5u);
v_dataWords_1005_ = lean_nat_shiftr(v___x_1003_, v___x_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_unsigned_to_nat(4u);
v_nwords_1007_ = lean_nat_add(v___x_1006_, v_dataWords_1005_);
v___x_1008_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1007_);
v_fst_1009_ = lean_ctor_get(v___x_1008_, 0);
v_snd_1010_ = lean_ctor_get(v___x_1008_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1012_ = v___x_1008_;
v_isShared_1013_ = v_isSharedCheck_1142_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_snd_1010_);
lean_inc(v_fst_1009_);
lean_dec(v___x_1008_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1142_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1014_; lean_object* v_stmts_1015_; lean_object* v_fresh_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1141_; 
v___x_1014_ = lean_st_ref_take(v_a_996_);
v_stmts_1015_ = lean_ctor_get(v___x_1014_, 0);
v_fresh_1016_ = lean_ctor_get(v___x_1014_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1018_ = v___x_1014_;
v_isShared_1019_ = v_isSharedCheck_1141_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_fresh_1016_);
lean_inc(v_stmts_1015_);
lean_dec(v___x_1014_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1141_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1020_; lean_object* v___x_1022_; 
v___x_1020_ = l_Array_append___redArg(v_stmts_1015_, v_fst_1009_);
lean_dec(v_fst_1009_);
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1020_);
v___x_1022_ = v___x_1018_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1020_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_fresh_1016_);
v___x_1022_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v_stmts_1027_; lean_object* v_fresh_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1139_; 
v___x_1023_ = lean_st_ref_set(v_a_996_, v___x_1022_);
v___x_1024_ = lean_unsigned_to_nat(0u);
v___x_1025_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__0);
v___x_1026_ = lean_st_ref_take(v_a_996_);
v_stmts_1027_ = lean_ctor_get(v___x_1026_, 0);
v_fresh_1028_ = lean_ctor_get(v___x_1026_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1030_ = v___x_1026_;
v_isShared_1031_ = v_isSharedCheck_1139_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_fresh_1028_);
lean_inc(v_stmts_1027_);
lean_dec(v___x_1026_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1139_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1038_; 
v___x_1032_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1033_ = lean_unsigned_to_nat(2u);
v___x_1034_ = lean_mk_empty_array_with_capacity(v___x_1033_);
lean_inc(v_snd_1010_);
lean_inc_ref(v___x_1034_);
v___x_1035_ = lean_array_push(v___x_1034_, v_snd_1010_);
lean_inc_ref(v___x_1035_);
v___x_1036_ = lean_array_push(v___x_1035_, v___x_1025_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set_tag(v___x_1012_, 3);
lean_ctor_set(v___x_1012_, 1, v___x_1036_);
lean_ctor_set(v___x_1012_, 0, v___x_1032_);
v___x_1038_ = v___x_1012_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1039_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
v___x_1040_ = lean_array_push(v_stmts_1027_, v___x_1039_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1040_);
v___x_1042_ = v___x_1030_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_fresh_1028_);
v___x_1042_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v_stmts_1045_; lean_object* v_fresh_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1136_; 
v___x_1043_ = lean_st_ref_set(v_a_996_, v___x_1042_);
v___x_1044_ = lean_st_ref_take(v_a_996_);
v_stmts_1045_ = lean_ctor_get(v___x_1044_, 0);
v_fresh_1046_ = lean_ctor_get(v___x_1044_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1048_ = v___x_1044_;
v_isShared_1049_ = v_isSharedCheck_1136_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_fresh_1046_);
lean_inc(v_stmts_1045_);
lean_dec(v___x_1044_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1136_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1050_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_1051_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
lean_inc_ref(v___x_1035_);
v___x_1052_ = lean_array_push(v___x_1035_, v___x_1051_);
v___x_1053_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1050_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_byteLen_1001_);
lean_inc_ref(v___x_1034_);
v___x_1055_ = lean_array_push(v___x_1034_, v___x_1053_);
lean_inc_ref(v___x_1054_);
v___x_1056_ = lean_array_push(v___x_1055_, v___x_1054_);
v___x_1057_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1032_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
v___x_1059_ = lean_array_push(v_stmts_1045_, v___x_1058_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v___x_1059_);
v___x_1061_ = v___x_1048_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1059_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_fresh_1046_);
v___x_1061_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v_stmts_1064_; lean_object* v_fresh_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1134_; 
v___x_1062_ = lean_st_ref_set(v_a_996_, v___x_1061_);
v___x_1063_ = lean_st_ref_take(v_a_996_);
v_stmts_1064_ = lean_ctor_get(v___x_1063_, 0);
v_fresh_1065_ = lean_ctor_get(v___x_1063_, 1);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1067_ = v___x_1063_;
v_isShared_1068_ = v_isSharedCheck_1134_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_fresh_1065_);
lean_inc(v_stmts_1064_);
lean_dec(v___x_1063_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1134_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1069_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
lean_inc_ref(v___x_1035_);
v___x_1070_ = lean_array_push(v___x_1035_, v___x_1069_);
v___x_1071_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1050_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
lean_inc_ref(v___x_1034_);
v___x_1072_ = lean_array_push(v___x_1034_, v___x_1071_);
v___x_1073_ = lean_array_push(v___x_1072_, v___x_1054_);
v___x_1074_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1032_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
v___x_1076_ = lean_array_push(v_stmts_1064_, v___x_1075_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 0, v___x_1076_);
v___x_1078_ = v___x_1067_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_fresh_1065_);
v___x_1078_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v_stmts_1081_; lean_object* v_fresh_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1132_; 
v___x_1079_ = lean_st_ref_set(v_a_996_, v___x_1078_);
v___x_1080_ = lean_st_ref_take(v_a_996_);
v_stmts_1081_ = lean_ctor_get(v___x_1080_, 0);
v_fresh_1082_ = lean_ctor_get(v___x_1080_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1084_ = v___x_1080_;
v_isShared_1085_ = v_isSharedCheck_1132_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_fresh_1082_);
lean_inc(v_stmts_1081_);
lean_dec(v___x_1080_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1132_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1086_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__1);
lean_inc_ref(v___x_1035_);
v___x_1087_ = lean_array_push(v___x_1035_, v___x_1086_);
v___x_1088_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1050_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_string_length(v_s_994_);
v___x_1090_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1089_);
v___x_1091_ = lean_array_push(v___x_1034_, v___x_1088_);
v___x_1092_ = lean_array_push(v___x_1091_, v___x_1090_);
v___x_1093_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1032_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
v___x_1095_ = lean_array_push(v_stmts_1081_, v___x_1094_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1095_);
v___x_1097_ = v___x_1084_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v_fresh_1082_);
v___x_1097_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1098_ = lean_st_ref_set(v_a_996_, v___x_1097_);
v___x_1099_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2);
v___x_1100_ = lean_array_push(v___x_1035_, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1050_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = lean_unsigned_to_nat(1u);
v___x_1103_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1024_);
lean_ctor_set(v___x_1103_, 1, v_dataWords_1005_);
lean_ctor_set(v___x_1103_, 2, v___x_1102_);
v___x_1104_ = lean_box(0);
v___x_1105_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(v_byteLen_1001_, v_bytes_1000_, v___x_1101_, v___x_1103_, v___x_1104_, v___x_1024_, v_a_995_, v_a_996_, v_a_997_, v_a_998_);
lean_dec_ref_known(v___x_1103_, 3);
lean_dec_ref(v_bytes_1000_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1129_; 
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1129_ == 0)
{
lean_object* v_unused_1130_; 
v_unused_1130_ = lean_ctor_get(v___x_1105_, 0);
lean_dec(v_unused_1130_);
v___x_1107_ = v___x_1105_;
v_isShared_1108_ = v_isSharedCheck_1129_;
goto v_resetjp_1106_;
}
else
{
lean_dec(v___x_1105_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1129_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1109_; lean_object* v_stmts_1110_; lean_object* v_fresh_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1128_; 
v___x_1109_ = lean_st_ref_take(v_a_996_);
v_stmts_1110_ = lean_ctor_get(v___x_1109_, 0);
v_fresh_1111_ = lean_ctor_get(v___x_1109_, 1);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1113_ = v___x_1109_;
v_isShared_1114_ = v_isSharedCheck_1128_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_fresh_1111_);
lean_inc(v_stmts_1110_);
lean_dec(v___x_1109_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1128_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1122_; 
v___x_1115_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_993_);
v___x_1116_ = lean_mk_empty_array_with_capacity(v___x_1102_);
v___x_1117_ = lean_array_push(v___x_1116_, v___x_1115_);
v___x_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1118_, 0, v_snd_1010_);
v___x_1119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___x_1120_ = lean_array_push(v_stmts_1110_, v___x_1119_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 0, v___x_1120_);
v___x_1122_ = v___x_1113_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1120_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_fresh_1111_);
v___x_1122_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1123_ = lean_st_ref_set(v_a_996_, v___x_1122_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1104_);
v___x_1125_ = v___x_1107_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1104_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
}
else
{
lean_dec(v_snd_1010_);
lean_dec_ref(v_lhsId_993_);
return v___x_1105_;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitStringLit___boxed(lean_object* v_lhsId_1143_, lean_object* v_s_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_Compiler_LCNF_EmitYul_emitStringLit(v_lhsId_1143_, v_s_1144_, v_a_1145_, v_a_1146_, v_a_1147_, v_a_1148_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec_ref(v_s_1144_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0(lean_object* v___x_1151_, lean_object* v_byteLen_1152_, lean_object* v_bytes_1153_, lean_object* v_range_1154_, lean_object* v_b_1155_, lean_object* v_i_1156_, lean_object* v_hs_1157_, lean_object* v_hl_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___redArg(v___x_1151_, v_byteLen_1152_, v_bytes_1153_, v_range_1154_, v_b_1155_, v_i_1156_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0___boxed(lean_object* v___x_1165_, lean_object* v_byteLen_1166_, lean_object* v_bytes_1167_, lean_object* v_range_1168_, lean_object* v_b_1169_, lean_object* v_i_1170_, lean_object* v_hs_1171_, lean_object* v_hl_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__0(v___x_1165_, v_byteLen_1166_, v_bytes_1167_, v_range_1168_, v_b_1169_, v_i_1170_, v_hs_1171_, v_hl_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec_ref(v_range_1168_);
lean_dec_ref(v_bytes_1167_);
lean_dec(v_byteLen_1166_);
lean_dec(v___x_1165_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1(lean_object* v_byteLen_1179_, lean_object* v_bytes_1180_, lean_object* v___x_1181_, lean_object* v_range_1182_, lean_object* v_b_1183_, lean_object* v_i_1184_, lean_object* v_hs_1185_, lean_object* v_hl_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v___x_1192_; 
v___x_1192_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___redArg(v_byteLen_1179_, v_bytes_1180_, v___x_1181_, v_range_1182_, v_b_1183_, v_i_1184_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1___boxed(lean_object* v_byteLen_1193_, lean_object* v_bytes_1194_, lean_object* v___x_1195_, lean_object* v_range_1196_, lean_object* v_b_1197_, lean_object* v_i_1198_, lean_object* v_hs_1199_, lean_object* v_hl_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitStringLit_spec__1(v_byteLen_1193_, v_bytes_1194_, v___x_1195_, v_range_1196_, v_b_1197_, v_i_1198_, v_hs_1199_, v_hl_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec_ref(v_range_1196_);
lean_dec_ref(v_bytes_1194_);
lean_dec(v_byteLen_1193_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(lean_object* v_args_1207_, lean_object* v_snd_1208_, lean_object* v_range_1209_, lean_object* v_b_1210_, lean_object* v_i_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_stop_1214_; lean_object* v_step_1215_; uint8_t v___x_1216_; 
v_stop_1214_ = lean_ctor_get(v_range_1209_, 1);
v_step_1215_ = lean_ctor_get(v_range_1209_, 2);
v___x_1216_ = lean_nat_dec_lt(v_i_1211_, v_stop_1214_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
lean_dec(v_i_1211_);
lean_dec_ref(v_snd_1208_);
v___x_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1217_, 0, v_b_1210_);
return v___x_1217_;
}
else
{
lean_object* v___x_1218_; lean_object* v_stmts_1219_; lean_object* v_fresh_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1236_; 
v___x_1218_ = lean_st_ref_take(v___y_1212_);
v_stmts_1219_ = lean_ctor_get(v___x_1218_, 0);
v_fresh_1220_ = lean_ctor_get(v___x_1218_, 1);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1222_ = v___x_1218_;
v_isShared_1223_ = v_isSharedCheck_1236_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_fresh_1220_);
lean_inc(v_stmts_1219_);
lean_dec(v___x_1218_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1236_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1230_; 
v___x_1224_ = lean_box(0);
v___x_1225_ = lean_array_get_borrowed(v___x_1224_, v_args_1207_, v_i_1211_);
lean_inc(v___x_1225_);
v___x_1226_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_1225_);
lean_inc_ref(v_snd_1208_);
v___x_1227_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1208_, v_i_1211_, v___x_1226_);
v___x_1228_ = lean_array_push(v_stmts_1219_, v___x_1227_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v___x_1228_);
v___x_1230_ = v___x_1222_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1228_);
lean_ctor_set(v_reuseFailAlloc_1235_, 1, v_fresh_1220_);
v___x_1230_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1231_ = lean_st_ref_set(v___y_1212_, v___x_1230_);
v___x_1232_ = lean_box(0);
v___x_1233_ = lean_nat_add(v_i_1211_, v_step_1215_);
lean_dec(v_i_1211_);
v_b_1210_ = v___x_1232_;
v_i_1211_ = v___x_1233_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg___boxed(lean_object* v_args_1237_, lean_object* v_snd_1238_, lean_object* v_range_1239_, lean_object* v_b_1240_, lean_object* v_i_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1237_, v_snd_1238_, v_range_1239_, v_b_1240_, v_i_1241_, v___y_1242_);
lean_dec(v___y_1242_);
lean_dec_ref(v_range_1239_);
lean_dec_ref(v_args_1237_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor(lean_object* v_lhsId_1245_, lean_object* v_info_1246_, lean_object* v_args_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v_cidx_1253_; lean_object* v_size_1254_; lean_object* v_usize_1255_; lean_object* v_ssize_1256_; lean_object* v___x_1257_; uint8_t v___y_1332_; uint8_t v___x_1356_; 
v_cidx_1253_ = lean_ctor_get(v_info_1246_, 1);
lean_inc(v_cidx_1253_);
v_size_1254_ = lean_ctor_get(v_info_1246_, 2);
lean_inc(v_size_1254_);
v_usize_1255_ = lean_ctor_get(v_info_1246_, 3);
lean_inc(v_usize_1255_);
v_ssize_1256_ = lean_ctor_get(v_info_1246_, 4);
lean_inc(v_ssize_1256_);
lean_dec_ref(v_info_1246_);
v___x_1257_ = lean_unsigned_to_nat(0u);
v___x_1356_ = lean_nat_dec_eq(v_size_1254_, v___x_1257_);
if (v___x_1356_ == 0)
{
lean_dec(v_usize_1255_);
v___y_1332_ = v___x_1356_;
goto v___jp_1331_;
}
else
{
uint8_t v___x_1357_; 
v___x_1357_ = lean_nat_dec_eq(v_usize_1255_, v___x_1257_);
lean_dec(v_usize_1255_);
v___y_1332_ = v___x_1357_;
goto v___jp_1331_;
}
v___jp_1258_:
{
lean_object* v___x_1259_; lean_object* v_nwords_1260_; lean_object* v___x_1261_; lean_object* v_fst_1262_; lean_object* v_snd_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1330_; 
v___x_1259_ = lean_unsigned_to_nat(1u);
v_nwords_1260_ = lean_nat_add(v_size_1254_, v___x_1259_);
v___x_1261_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1260_);
v_fst_1262_ = lean_ctor_get(v___x_1261_, 0);
v_snd_1263_ = lean_ctor_get(v___x_1261_, 1);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1265_ = v___x_1261_;
v_isShared_1266_ = v_isSharedCheck_1330_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_snd_1263_);
lean_inc(v_fst_1262_);
lean_dec(v___x_1261_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1330_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v_stmts_1268_; lean_object* v_fresh_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1329_; 
v___x_1267_ = lean_st_ref_take(v_a_1249_);
v_stmts_1268_ = lean_ctor_get(v___x_1267_, 0);
v_fresh_1269_ = lean_ctor_get(v___x_1267_, 1);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1271_ = v___x_1267_;
v_isShared_1272_ = v_isSharedCheck_1329_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_fresh_1269_);
lean_inc(v_stmts_1268_);
lean_dec(v___x_1267_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1329_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1273_ = l_Array_append___redArg(v_stmts_1268_, v_fst_1262_);
lean_dec(v_fst_1262_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1273_);
v___x_1275_ = v___x_1271_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_fresh_1269_);
v___x_1275_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v_stmts_1278_; lean_object* v_fresh_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1327_; 
v___x_1276_ = lean_st_ref_set(v_a_1249_, v___x_1275_);
v___x_1277_ = lean_st_ref_take(v_a_1249_);
v_stmts_1278_ = lean_ctor_get(v___x_1277_, 0);
v_fresh_1279_ = lean_ctor_get(v___x_1277_, 1);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1281_ = v___x_1277_;
v_isShared_1282_ = v_isSharedCheck_1327_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_fresh_1279_);
lean_inc(v_stmts_1278_);
lean_dec(v___x_1277_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1327_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1290_; 
v___x_1283_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1284_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_1253_, v_size_1254_, v___x_1257_);
v___x_1285_ = lean_unsigned_to_nat(2u);
v___x_1286_ = lean_mk_empty_array_with_capacity(v___x_1285_);
lean_inc(v_snd_1263_);
v___x_1287_ = lean_array_push(v___x_1286_, v_snd_1263_);
v___x_1288_ = lean_array_push(v___x_1287_, v___x_1284_);
if (v_isShared_1266_ == 0)
{
lean_ctor_set_tag(v___x_1265_, 3);
lean_ctor_set(v___x_1265_, 1, v___x_1288_);
lean_ctor_set(v___x_1265_, 0, v___x_1283_);
v___x_1290_ = v___x_1265_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v___x_1288_);
v___x_1290_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1294_; 
v___x_1291_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
v___x_1292_ = lean_array_push(v_stmts_1278_, v___x_1291_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1292_);
v___x_1294_ = v___x_1281_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v___x_1292_);
lean_ctor_set(v_reuseFailAlloc_1325_, 1, v_fresh_1279_);
v___x_1294_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1323_; 
v___x_1295_ = lean_st_ref_set(v_a_1249_, v___x_1294_);
v___x_1296_ = lean_array_get_size(v_args_1247_);
v___x_1297_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1257_);
lean_ctor_set(v___x_1297_, 1, v___x_1296_);
lean_ctor_set(v___x_1297_, 2, v___x_1259_);
v___x_1298_ = lean_box(0);
lean_inc(v_snd_1263_);
v___x_1299_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1247_, v_snd_1263_, v___x_1297_, v___x_1298_, v___x_1257_, v_a_1249_);
lean_dec_ref_known(v___x_1297_, 3);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1323_ == 0)
{
lean_object* v_unused_1324_; 
v_unused_1324_ = lean_ctor_get(v___x_1299_, 0);
lean_dec(v_unused_1324_);
v___x_1301_ = v___x_1299_;
v_isShared_1302_ = v_isSharedCheck_1323_;
goto v_resetjp_1300_;
}
else
{
lean_dec(v___x_1299_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1323_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v_stmts_1304_; lean_object* v_fresh_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1322_; 
v___x_1303_ = lean_st_ref_take(v_a_1249_);
v_stmts_1304_ = lean_ctor_get(v___x_1303_, 0);
v_fresh_1305_ = lean_ctor_get(v___x_1303_, 1);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1322_ == 0)
{
v___x_1307_ = v___x_1303_;
v_isShared_1308_ = v_isSharedCheck_1322_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_fresh_1305_);
lean_inc(v_stmts_1304_);
lean_dec(v___x_1303_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1322_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1309_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1245_);
v___x_1310_ = lean_mk_empty_array_with_capacity(v___x_1259_);
v___x_1311_ = lean_array_push(v___x_1310_, v___x_1309_);
v___x_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1312_, 0, v_snd_1263_);
v___x_1313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1311_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_array_push(v_stmts_1304_, v___x_1313_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1314_);
v___x_1316_ = v___x_1307_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1314_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v_fresh_1305_);
v___x_1316_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = lean_st_ref_set(v_a_1249_, v___x_1316_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1298_);
v___x_1319_ = v___x_1301_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1298_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
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
v___jp_1331_:
{
if (v___y_1332_ == 0)
{
lean_dec(v_ssize_1256_);
goto v___jp_1258_;
}
else
{
uint8_t v___x_1333_; 
v___x_1333_ = lean_nat_dec_eq(v_ssize_1256_, v___x_1257_);
lean_dec(v_ssize_1256_);
if (v___x_1333_ == 0)
{
goto v___jp_1258_;
}
else
{
lean_object* v___x_1334_; lean_object* v_stmts_1335_; lean_object* v_fresh_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_size_1254_);
v___x_1334_ = lean_st_ref_take(v_a_1249_);
v_stmts_1335_ = lean_ctor_get(v___x_1334_, 0);
v_fresh_1336_ = lean_ctor_get(v___x_1334_, 1);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1334_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1338_ = v___x_1334_;
v_isShared_1339_ = v_isSharedCheck_1355_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_fresh_1336_);
lean_inc(v_stmts_1335_);
lean_dec(v___x_1334_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1355_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1340_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1245_);
v___x_1341_ = lean_unsigned_to_nat(1u);
v___x_1342_ = lean_mk_empty_array_with_capacity(v___x_1341_);
v___x_1343_ = lean_array_push(v___x_1342_, v___x_1340_);
v___x_1344_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_cidx_1253_);
v___x_1345_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1344_);
v___x_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
v___x_1347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1343_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = lean_array_push(v_stmts_1335_, v___x_1347_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1348_);
v___x_1350_ = v___x_1338_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v_fresh_1336_);
v___x_1350_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = lean_st_ref_set(v_a_1249_, v___x_1350_);
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
return v___x_1353_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCtor___boxed(lean_object* v_lhsId_1358_, lean_object* v_info_1359_, lean_object* v_args_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_1358_, v_info_1359_, v_args_1360_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_);
lean_dec(v_a_1364_);
lean_dec_ref(v_a_1363_);
lean_dec(v_a_1362_);
lean_dec_ref(v_a_1361_);
lean_dec_ref(v_args_1360_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(lean_object* v_args_1367_, lean_object* v_snd_1368_, lean_object* v_range_1369_, lean_object* v_b_1370_, lean_object* v_i_1371_, lean_object* v_hs_1372_, lean_object* v_hl_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___redArg(v_args_1367_, v_snd_1368_, v_range_1369_, v_b_1370_, v_i_1371_, v___y_1375_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0___boxed(lean_object* v_args_1380_, lean_object* v_snd_1381_, lean_object* v_range_1382_, lean_object* v_b_1383_, lean_object* v_i_1384_, lean_object* v_hs_1385_, lean_object* v_hl_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCtor_spec__0(v_args_1380_, v_snd_1381_, v_range_1382_, v_b_1383_, v_i_1384_, v_hs_1385_, v_hl_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec_ref(v_range_1382_);
lean_dec_ref(v_args_1380_);
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(lean_object* v_args_1393_, lean_object* v_snd_1394_, lean_object* v_range_1395_, lean_object* v_b_1396_, lean_object* v_i_1397_, lean_object* v___y_1398_){
_start:
{
lean_object* v_stop_1400_; lean_object* v_step_1401_; uint8_t v___x_1402_; 
v_stop_1400_ = lean_ctor_get(v_range_1395_, 1);
v_step_1401_ = lean_ctor_get(v_range_1395_, 2);
v___x_1402_ = lean_nat_dec_lt(v_i_1397_, v_stop_1400_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; 
lean_dec(v_i_1397_);
lean_dec_ref(v_snd_1394_);
v___x_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1403_, 0, v_b_1396_);
return v___x_1403_;
}
else
{
lean_object* v___x_1404_; lean_object* v_stmts_1405_; lean_object* v_fresh_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1424_; 
v___x_1404_ = lean_st_ref_take(v___y_1398_);
v_stmts_1405_ = lean_ctor_get(v___x_1404_, 0);
v_fresh_1406_ = lean_ctor_get(v___x_1404_, 1);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1408_ = v___x_1404_;
v_isShared_1409_ = v_isSharedCheck_1424_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_fresh_1406_);
lean_inc(v_stmts_1405_);
lean_dec(v___x_1404_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1424_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1410_ = lean_box(0);
v___x_1411_ = lean_unsigned_to_nat(3u);
v___x_1412_ = lean_nat_add(v_i_1397_, v___x_1411_);
v___x_1413_ = lean_array_get_borrowed(v___x_1410_, v_args_1393_, v_i_1397_);
lean_inc(v___x_1413_);
v___x_1414_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_1413_);
lean_inc_ref(v_snd_1394_);
v___x_1415_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1394_, v___x_1412_, v___x_1414_);
lean_dec(v___x_1412_);
v___x_1416_ = lean_array_push(v_stmts_1405_, v___x_1415_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set(v___x_1408_, 0, v___x_1416_);
v___x_1418_ = v___x_1408_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1416_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v_fresh_1406_);
v___x_1418_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_st_ref_set(v___y_1398_, v___x_1418_);
v___x_1420_ = lean_box(0);
v___x_1421_ = lean_nat_add(v_i_1397_, v_step_1401_);
lean_dec(v_i_1397_);
v_b_1396_ = v___x_1420_;
v_i_1397_ = v___x_1421_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg___boxed(lean_object* v_args_1425_, lean_object* v_snd_1426_, lean_object* v_range_1427_, lean_object* v_b_1428_, lean_object* v_i_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1425_, v_snd_1426_, v_range_1427_, v_b_1428_, v_i_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v_range_1427_);
lean_dec_ref(v_args_1425_);
return v_res_1432_;
}
}
static uint64_t _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0(void){
_start:
{
lean_object* v___x_1433_; uint64_t v___x_1434_; 
v___x_1433_ = lean_unsigned_to_nat(1723u);
v___x_1434_ = lean_uint64_of_nat(v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap(lean_object* v_lhsId_1435_, lean_object* v_fn_1436_, lean_object* v_args_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v_nwords_1445_; lean_object* v___x_1446_; lean_object* v_fst_1447_; lean_object* v_snd_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1564_; 
v___x_1443_ = lean_array_get_size(v_args_1437_);
v___x_1444_ = lean_unsigned_to_nat(4u);
v_nwords_1445_ = lean_nat_add(v___x_1443_, v___x_1444_);
v___x_1446_ = l_Lean_Compiler_LCNF_EmitYul_allocN(v_nwords_1445_);
v_fst_1447_ = lean_ctor_get(v___x_1446_, 0);
v_snd_1448_ = lean_ctor_get(v___x_1446_, 1);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1450_ = v___x_1446_;
v_isShared_1451_ = v_isSharedCheck_1564_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_snd_1448_);
lean_inc(v_fst_1447_);
lean_dec(v___x_1446_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1564_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; lean_object* v_stmts_1453_; lean_object* v_fresh_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1563_; 
v___x_1452_ = lean_st_ref_take(v_a_1439_);
v_stmts_1453_ = lean_ctor_get(v___x_1452_, 0);
v_fresh_1454_ = lean_ctor_get(v___x_1452_, 1);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1456_ = v___x_1452_;
v_isShared_1457_ = v_isSharedCheck_1563_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_fresh_1454_);
lean_inc(v_stmts_1453_);
lean_dec(v___x_1452_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1563_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = l_Array_append___redArg(v_stmts_1453_, v_fst_1447_);
lean_dec(v_fst_1447_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 0, v___x_1458_);
v___x_1460_ = v___x_1456_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1458_);
lean_ctor_set(v_reuseFailAlloc_1562_, 1, v_fresh_1454_);
v___x_1460_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v_stmts_1463_; lean_object* v_fresh_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1561_; 
v___x_1461_ = lean_st_ref_set(v_a_1439_, v___x_1460_);
v___x_1462_ = lean_st_ref_take(v_a_1439_);
v_stmts_1463_ = lean_ctor_get(v___x_1462_, 0);
v_fresh_1464_ = lean_ctor_get(v___x_1462_, 1);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1466_ = v___x_1462_;
v_isShared_1467_ = v_isSharedCheck_1561_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_fresh_1464_);
lean_inc(v_stmts_1463_);
lean_dec(v___x_1462_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1561_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1477_; 
v___x_1468_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1469_ = lean_unsigned_to_nat(245u);
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v___x_1469_, v___x_1443_, v___x_1470_);
v___x_1472_ = lean_unsigned_to_nat(2u);
v___x_1473_ = lean_mk_empty_array_with_capacity(v___x_1472_);
lean_inc(v_snd_1448_);
v___x_1474_ = lean_array_push(v___x_1473_, v_snd_1448_);
v___x_1475_ = lean_array_push(v___x_1474_, v___x_1471_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set_tag(v___x_1450_, 3);
lean_ctor_set(v___x_1450_, 1, v___x_1475_);
lean_ctor_set(v___x_1450_, 0, v___x_1468_);
v___x_1477_ = v___x_1450_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1468_);
lean_ctor_set(v_reuseFailAlloc_1560_, 1, v___x_1475_);
v___x_1477_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1478_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
v___x_1479_ = lean_array_push(v_stmts_1463_, v___x_1478_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1479_);
v___x_1481_ = v___x_1466_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1559_, 1, v_fresh_1464_);
v___x_1481_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; uint64_t v___y_1485_; 
v___x_1482_ = lean_st_ref_set(v_a_1439_, v___x_1481_);
v___x_1483_ = lean_st_ref_take(v_a_1439_);
if (lean_obj_tag(v_fn_1436_) == 0)
{
uint64_t v___x_1557_; 
v___x_1557_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_1485_ = v___x_1557_;
goto v___jp_1484_;
}
else
{
uint64_t v_hash_1558_; 
v_hash_1558_ = lean_ctor_get_uint64(v_fn_1436_, sizeof(void*)*2);
v___y_1485_ = v_hash_1558_;
goto v___jp_1484_;
}
v___jp_1484_:
{
lean_object* v_stmts_1486_; lean_object* v_fresh_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1556_; 
v_stmts_1486_ = lean_ctor_get(v___x_1483_, 0);
v_fresh_1487_ = lean_ctor_get(v___x_1483_, 1);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1489_ = v___x_1483_;
v_isShared_1490_ = v_isSharedCheck_1556_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_fresh_1487_);
lean_inc(v_stmts_1486_);
lean_dec(v___x_1483_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1556_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1491_ = lean_uint64_to_nat(v___y_1485_);
v___x_1492_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1491_);
lean_inc(v_snd_1448_);
v___x_1493_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1448_, v___x_1470_, v___x_1492_);
v___x_1494_ = lean_array_push(v_stmts_1486_, v___x_1493_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v___x_1494_);
v___x_1496_ = v___x_1489_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_fresh_1487_);
v___x_1496_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v_stmts_1499_; lean_object* v_fresh_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1554_; 
v___x_1497_ = lean_st_ref_set(v_a_1439_, v___x_1496_);
v___x_1498_ = lean_st_ref_take(v_a_1439_);
v_stmts_1499_ = lean_ctor_get(v___x_1498_, 0);
v_fresh_1500_ = lean_ctor_get(v___x_1498_, 1);
v_isSharedCheck_1554_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1502_ = v___x_1498_;
v_isShared_1503_ = v_isSharedCheck_1554_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_fresh_1500_);
lean_inc(v_stmts_1499_);
lean_dec(v___x_1498_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1554_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1504_ = lean_unsigned_to_nat(1u);
v___x_1505_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
lean_inc(v_snd_1448_);
v___x_1506_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1448_, v___x_1504_, v___x_1505_);
v___x_1507_ = lean_array_push(v_stmts_1499_, v___x_1506_);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 0, v___x_1507_);
v___x_1509_ = v___x_1502_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_fresh_1500_);
v___x_1509_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v_stmts_1512_; lean_object* v_fresh_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1552_; 
v___x_1510_ = lean_st_ref_set(v_a_1439_, v___x_1509_);
v___x_1511_ = lean_st_ref_take(v_a_1439_);
v_stmts_1512_ = lean_ctor_get(v___x_1511_, 0);
v_fresh_1513_ = lean_ctor_get(v___x_1511_, 1);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1511_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1515_ = v___x_1511_;
v_isShared_1516_ = v_isSharedCheck_1552_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_fresh_1513_);
lean_inc(v_stmts_1512_);
lean_dec(v___x_1511_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1552_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1521_; 
v___x_1517_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_1443_);
lean_inc(v_snd_1448_);
v___x_1518_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v_snd_1448_, v___x_1472_, v___x_1517_);
v___x_1519_ = lean_array_push(v_stmts_1512_, v___x_1518_);
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 0, v___x_1519_);
v___x_1521_ = v___x_1515_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v_fresh_1513_);
v___x_1521_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1549_; 
v___x_1522_ = lean_st_ref_set(v_a_1439_, v___x_1521_);
v___x_1523_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1470_);
lean_ctor_set(v___x_1523_, 1, v___x_1443_);
lean_ctor_set(v___x_1523_, 2, v___x_1504_);
v___x_1524_ = lean_box(0);
lean_inc(v_snd_1448_);
v___x_1525_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1437_, v_snd_1448_, v___x_1523_, v___x_1524_, v___x_1470_, v_a_1439_);
lean_dec_ref_known(v___x_1523_, 3);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1549_ == 0)
{
lean_object* v_unused_1550_; 
v_unused_1550_ = lean_ctor_get(v___x_1525_, 0);
lean_dec(v_unused_1550_);
v___x_1527_ = v___x_1525_;
v_isShared_1528_ = v_isSharedCheck_1549_;
goto v_resetjp_1526_;
}
else
{
lean_dec(v___x_1525_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1549_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v_stmts_1530_; lean_object* v_fresh_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1548_; 
v___x_1529_ = lean_st_ref_take(v_a_1439_);
v_stmts_1530_ = lean_ctor_get(v___x_1529_, 0);
v_fresh_1531_ = lean_ctor_get(v___x_1529_, 1);
v_isSharedCheck_1548_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1533_ = v___x_1529_;
v_isShared_1534_ = v_isSharedCheck_1548_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_fresh_1531_);
lean_inc(v_stmts_1530_);
lean_dec(v___x_1529_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1548_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1542_; 
v___x_1535_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1435_);
v___x_1536_ = lean_mk_empty_array_with_capacity(v___x_1504_);
v___x_1537_ = lean_array_push(v___x_1536_, v___x_1535_);
v___x_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1538_, 0, v_snd_1448_);
v___x_1539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1537_);
lean_ctor_set(v___x_1539_, 1, v___x_1538_);
v___x_1540_ = lean_array_push(v_stmts_1530_, v___x_1539_);
if (v_isShared_1534_ == 0)
{
lean_ctor_set(v___x_1533_, 0, v___x_1540_);
v___x_1542_ = v___x_1533_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1547_, 1, v_fresh_1531_);
v___x_1542_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1543_; lean_object* v___x_1545_; 
v___x_1543_ = lean_st_ref_set(v_a_1439_, v___x_1542_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1524_);
v___x_1545_ = v___x_1527_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1524_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitPap___boxed(lean_object* v_lhsId_1565_, lean_object* v_fn_1566_, lean_object* v_args_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_1565_, v_fn_1566_, v_args_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_);
lean_dec(v_a_1571_);
lean_dec_ref(v_a_1570_);
lean_dec(v_a_1569_);
lean_dec_ref(v_a_1568_);
lean_dec_ref(v_args_1567_);
lean_dec(v_fn_1566_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(lean_object* v_args_1574_, lean_object* v_snd_1575_, lean_object* v_range_1576_, lean_object* v_b_1577_, lean_object* v_i_1578_, lean_object* v_hs_1579_, lean_object* v_hl_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___redArg(v_args_1574_, v_snd_1575_, v_range_1576_, v_b_1577_, v_i_1578_, v___y_1582_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0___boxed(lean_object* v_args_1587_, lean_object* v_snd_1588_, lean_object* v_range_1589_, lean_object* v_b_1590_, lean_object* v_i_1591_, lean_object* v_hs_1592_, lean_object* v_hl_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v_res_1599_; 
v_res_1599_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitPap_spec__0(v_args_1587_, v_snd_1588_, v_range_1589_, v_b_1590_, v_i_1591_, v_hs_1592_, v_hl_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec_ref(v_range_1589_);
lean_dec_ref(v_args_1587_);
return v_res_1599_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0(lean_object* v___x_1601_, lean_object* v_00___1602_){
_start:
{
lean_object* v___x_1603_; uint8_t v___x_1604_; 
v___x_1603_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___closed__0));
v___x_1604_ = lean_string_dec_eq(v___x_1601_, v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___boxed(lean_object* v___x_1605_, lean_object* v_00___1606_){
_start:
{
uint8_t v_res_1607_; lean_object* v_r_1608_; 
v_res_1607_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0(v___x_1605_, v_00___1606_);
lean_dec_ref(v___x_1605_);
v_r_1608_ = lean_box(v_res_1607_);
return v_r_1608_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1(lean_object* v___x_1610_, lean_object* v_00___1611_){
_start:
{
lean_object* v___x_1612_; uint8_t v___x_1613_; 
v___x_1612_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___closed__0));
v___x_1613_ = lean_string_dec_eq(v___x_1610_, v___x_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___boxed(lean_object* v___x_1614_, lean_object* v_00___1615_){
_start:
{
uint8_t v_res_1616_; lean_object* v_r_1617_; 
v_res_1616_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1(v___x_1614_, v_00___1615_);
lean_dec_ref(v___x_1614_);
v_r_1617_ = lean_box(v_res_1616_);
return v_r_1617_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2(lean_object* v___x_1619_, lean_object* v_00___1620_){
_start:
{
lean_object* v___x_1621_; uint8_t v___x_1622_; 
v___x_1621_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___closed__0));
v___x_1622_ = lean_string_dec_eq(v___x_1619_, v___x_1621_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___boxed(lean_object* v___x_1623_, lean_object* v_00___1624_){
_start:
{
uint8_t v_res_1625_; lean_object* v_r_1626_; 
v_res_1625_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2(v___x_1623_, v_00___1624_);
lean_dec_ref(v___x_1623_);
v_r_1626_ = lean_box(v_res_1625_);
return v_r_1626_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3(lean_object* v___x_1628_, lean_object* v_00___1629_){
_start:
{
lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1630_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___closed__0));
v___x_1631_ = lean_string_dec_eq(v___x_1628_, v___x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___boxed(lean_object* v___x_1632_, lean_object* v_00___1633_){
_start:
{
uint8_t v_res_1634_; lean_object* v_r_1635_; 
v_res_1634_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3(v___x_1632_, v_00___1633_);
lean_dec_ref(v___x_1632_);
v_r_1635_ = lean_box(v_res_1634_);
return v_r_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(size_t v_sz_1636_, size_t v_i_1637_, lean_object* v_bs_1638_){
_start:
{
uint8_t v___x_1639_; 
v___x_1639_ = lean_usize_dec_lt(v_i_1637_, v_sz_1636_);
if (v___x_1639_ == 0)
{
return v_bs_1638_;
}
else
{
lean_object* v_v_1640_; lean_object* v___x_1641_; lean_object* v_bs_x27_1642_; lean_object* v___x_1643_; size_t v___x_1644_; size_t v___x_1645_; lean_object* v___x_1646_; 
v_v_1640_ = lean_array_uget(v_bs_1638_, v_i_1637_);
v___x_1641_ = lean_unsigned_to_nat(0u);
v_bs_x27_1642_ = lean_array_uset(v_bs_1638_, v_i_1637_, v___x_1641_);
v___x_1643_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_v_1640_);
v___x_1644_ = ((size_t)1ULL);
v___x_1645_ = lean_usize_add(v_i_1637_, v___x_1644_);
v___x_1646_ = lean_array_uset(v_bs_x27_1642_, v_i_1637_, v___x_1643_);
v_i_1637_ = v___x_1645_;
v_bs_1638_ = v___x_1646_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1___boxed(lean_object* v_sz_1648_, lean_object* v_i_1649_, lean_object* v_bs_1650_){
_start:
{
size_t v_sz_boxed_1651_; size_t v_i_boxed_1652_; lean_object* v_res_1653_; 
v_sz_boxed_1651_ = lean_unbox_usize(v_sz_1648_);
lean_dec(v_sz_1648_);
v_i_boxed_1652_ = lean_unbox_usize(v_i_1649_);
lean_dec(v_i_1649_);
v_res_1653_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_boxed_1651_, v_i_boxed_1652_, v_bs_1650_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(size_t v_sz_1654_, size_t v_i_1655_, lean_object* v_bs_1656_){
_start:
{
uint8_t v___x_1657_; 
v___x_1657_ = lean_usize_dec_lt(v_i_1655_, v_sz_1654_);
if (v___x_1657_ == 0)
{
return v_bs_1656_;
}
else
{
lean_object* v_v_1658_; lean_object* v___x_1659_; lean_object* v_bs_x27_1660_; lean_object* v___x_1661_; size_t v___x_1662_; size_t v___x_1663_; lean_object* v___x_1664_; 
v_v_1658_ = lean_array_uget(v_bs_1656_, v_i_1655_);
v___x_1659_ = lean_unsigned_to_nat(0u);
v_bs_x27_1660_ = lean_array_uset(v_bs_1656_, v_i_1655_, v___x_1659_);
v___x_1661_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v_v_1658_);
v___x_1662_ = ((size_t)1ULL);
v___x_1663_ = lean_usize_add(v_i_1655_, v___x_1662_);
v___x_1664_ = lean_array_uset(v_bs_x27_1660_, v_i_1655_, v___x_1661_);
v_i_1655_ = v___x_1663_;
v_bs_1656_ = v___x_1664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0___boxed(lean_object* v_sz_1666_, lean_object* v_i_1667_, lean_object* v_bs_1668_){
_start:
{
size_t v_sz_boxed_1669_; size_t v_i_boxed_1670_; lean_object* v_res_1671_; 
v_sz_boxed_1669_ = lean_unbox_usize(v_sz_1666_);
lean_dec(v_sz_1666_);
v_i_boxed_1670_ = lean_unbox_usize(v_i_1667_);
lean_dec(v_i_1667_);
v_res_1671_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_boxed_1669_, v_i_boxed_1670_, v_bs_1668_);
return v_res_1671_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1(void){
_start:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
return v___x_1674_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4));
v___x_1680_ = lean_string_utf8_byte_size(v___x_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(lean_object* v_lhsId_1683_, lean_object* v_fn_1684_, lean_object* v_args_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_){
_start:
{
lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = lean_st_ref_get(v_a_1687_);
lean_inc(v_fn_1684_);
v___x_1715_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1684_, v_a_1687_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1999_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1718_ = v___x_1715_;
v_isShared_1719_ = v_isSharedCheck_1999_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1715_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1999_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___y_1721_; lean_object* v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1781_; lean_object* v___y_1782_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; uint8_t v___y_1821_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; uint8_t v___y_1850_; lean_object* v___y_1851_; uint8_t v___y_1852_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; uint8_t v___y_1862_; uint8_t v___y_1863_; lean_object* v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; lean_object* v___y_1871_; lean_object* v___y_1872_; lean_object* v___y_1873_; uint8_t v___y_1874_; lean_object* v___y_1875_; uint8_t v___y_1876_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; uint8_t v___y_1891_; lean_object* v___y_1892_; uint8_t v___y_1893_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; uint8_t v___y_1905_; uint8_t v___y_1906_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; uint8_t v___y_1917_; lean_object* v___y_1918_; uint8_t v___y_1919_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; uint8_t v___y_1931_; uint8_t v___y_1932_; lean_object* v___y_1936_; lean_object* v_env_1959_; lean_object* v___y_1961_; 
v_env_1959_ = lean_ctor_get(v___x_1714_, 0);
lean_inc_ref(v_env_1959_);
lean_dec(v___x_1714_);
if (lean_obj_tag(v_a_1716_) == 0)
{
size_t v_sz_1990_; size_t v___x_1991_; lean_object* v___x_1992_; 
v_sz_1990_ = lean_array_size(v_args_1685_);
v___x_1991_ = ((size_t)0ULL);
v___x_1992_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_1990_, v___x_1991_, v_args_1685_);
v___y_1961_ = v___x_1992_;
goto v___jp_1960_;
}
else
{
lean_object* v_val_1993_; lean_object* v_params_1994_; lean_object* v___x_1995_; size_t v_sz_1996_; size_t v___x_1997_; lean_object* v___x_1998_; 
v_val_1993_ = lean_ctor_get(v_a_1716_, 0);
lean_inc(v_val_1993_);
lean_dec_ref_known(v_a_1716_, 1);
v_params_1994_ = lean_ctor_get(v_val_1993_, 3);
lean_inc_ref(v_params_1994_);
lean_dec(v_val_1993_);
v___x_1995_ = l_Lean_Compiler_LCNF_EmitYul_runtimeArgs(v_params_1994_, v_args_1685_);
lean_dec_ref(v_args_1685_);
lean_dec_ref(v_params_1994_);
v_sz_1996_ = lean_array_size(v___x_1995_);
v___x_1997_ = ((size_t)0ULL);
v___x_1998_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_1996_, v___x_1997_, v___x_1995_);
v___y_1961_ = v___x_1998_;
goto v___jp_1960_;
}
v___jp_1720_:
{
lean_object* v___x_1724_; lean_object* v_stmts_1725_; lean_object* v_fresh_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1779_; 
v___x_1724_ = lean_st_ref_take(v_a_1686_);
v_stmts_1725_ = lean_ctor_get(v___x_1724_, 0);
v_fresh_1726_ = lean_ctor_get(v___x_1724_, 1);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1728_ = v___x_1724_;
v_isShared_1729_ = v_isSharedCheck_1779_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_fresh_1726_);
lean_inc(v_stmts_1725_);
lean_dec(v___x_1724_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1779_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1734_; 
v___x_1730_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___y_1723_);
lean_ctor_set(v___x_1730_, 1, v___y_1722_);
v___x_1731_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1730_);
v___x_1732_ = lean_array_push(v_stmts_1725_, v___x_1731_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v___x_1732_);
v___x_1734_ = v___x_1728_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1732_);
lean_ctor_set(v_reuseFailAlloc_1778_, 1, v_fresh_1726_);
v___x_1734_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v_stmts_1737_; lean_object* v_fresh_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1777_; 
v___x_1735_ = lean_st_ref_set(v_a_1686_, v___x_1734_);
v___x_1736_ = lean_st_ref_take(v_a_1686_);
v_stmts_1737_ = lean_ctor_get(v___x_1736_, 0);
v_fresh_1738_ = lean_ctor_get(v___x_1736_, 1);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1740_ = v___x_1736_;
v_isShared_1741_ = v_isSharedCheck_1777_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_fresh_1738_);
lean_inc(v_stmts_1737_);
lean_dec(v___x_1736_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1777_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1742_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___y_1721_);
v___x_1743_ = lean_unsigned_to_nat(2u);
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1743_);
lean_inc_ref(v___x_1742_);
v___x_1745_ = lean_array_push(v___x_1744_, v___x_1742_);
v___x_1746_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_1747_ = lean_array_push(v___x_1745_, v___x_1742_);
v___x_1748_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1748_);
v___x_1750_ = lean_array_push(v_stmts_1737_, v___x_1749_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v___x_1750_);
v___x_1752_ = v___x_1740_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_fresh_1738_);
v___x_1752_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v_stmts_1755_; lean_object* v_fresh_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1775_; 
v___x_1753_ = lean_st_ref_set(v_a_1686_, v___x_1752_);
v___x_1754_ = lean_st_ref_take(v_a_1686_);
v_stmts_1755_ = lean_ctor_get(v___x_1754_, 0);
v_fresh_1756_ = lean_ctor_get(v___x_1754_, 1);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1758_ = v___x_1754_;
v_isShared_1759_ = v_isSharedCheck_1775_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_fresh_1756_);
lean_inc(v_stmts_1755_);
lean_dec(v___x_1754_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1775_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1768_; 
v___x_1760_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1683_);
v___x_1761_ = lean_unsigned_to_nat(1u);
v___x_1762_ = lean_mk_empty_array_with_capacity(v___x_1761_);
v___x_1763_ = lean_array_push(v___x_1762_, v___x_1760_);
v___x_1764_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_1765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1763_);
lean_ctor_set(v___x_1765_, 1, v___x_1764_);
v___x_1766_ = lean_array_push(v_stmts_1755_, v___x_1765_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 0, v___x_1766_);
v___x_1768_ = v___x_1758_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v___x_1766_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v_fresh_1756_);
v___x_1768_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1769_ = lean_st_ref_set(v_a_1686_, v___x_1768_);
v___x_1770_ = lean_box(0);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1770_);
v___x_1772_ = v___x_1718_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
}
}
}
}
v___jp_1780_:
{
lean_object* v___x_1783_; lean_object* v_stmts_1784_; lean_object* v_fresh_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1816_; 
v___x_1783_ = lean_st_ref_take(v_a_1686_);
v_stmts_1784_ = lean_ctor_get(v___x_1783_, 0);
v_fresh_1785_ = lean_ctor_get(v___x_1783_, 1);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1787_ = v___x_1783_;
v_isShared_1788_ = v_isSharedCheck_1816_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_fresh_1785_);
lean_inc(v_stmts_1784_);
lean_dec(v___x_1783_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1816_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1789_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___y_1782_);
lean_ctor_set(v___x_1789_, 1, v___y_1781_);
v___x_1790_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
v___x_1791_ = lean_array_push(v_stmts_1784_, v___x_1790_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1791_);
v___x_1793_ = v___x_1787_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1791_);
lean_ctor_set(v_reuseFailAlloc_1815_, 1, v_fresh_1785_);
v___x_1793_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v_stmts_1796_; lean_object* v_fresh_1797_; lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1814_; 
v___x_1794_ = lean_st_ref_set(v_a_1686_, v___x_1793_);
v___x_1795_ = lean_st_ref_take(v_a_1686_);
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
v___x_1801_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1683_);
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
v___x_1810_ = lean_st_ref_set(v_a_1686_, v___x_1809_);
v___x_1811_ = lean_box(0);
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
return v___x_1812_;
}
}
}
}
}
v___jp_1817_:
{
if (v___y_1821_ == 0)
{
lean_object* v___x_1822_; lean_object* v___x_1823_; uint8_t v___x_1824_; 
v___x_1822_ = lean_box(0);
v___x_1823_ = lean_apply_1(v___y_1818_, v___x_1822_);
v___x_1824_ = lean_unbox(v___x_1823_);
if (v___x_1824_ == 0)
{
lean_object* v___x_1825_; lean_object* v_stmts_1826_; lean_object* v_fresh_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1845_; 
v___x_1825_ = lean_st_ref_take(v_a_1686_);
v_stmts_1826_ = lean_ctor_get(v___x_1825_, 0);
v_fresh_1827_ = lean_ctor_get(v___x_1825_, 1);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1825_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1829_ = v___x_1825_;
v_isShared_1830_ = v_isSharedCheck_1845_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_fresh_1827_);
lean_inc(v_stmts_1826_);
lean_dec(v___x_1825_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1845_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1831_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1683_);
v___x_1832_ = lean_unsigned_to_nat(1u);
v___x_1833_ = lean_mk_empty_array_with_capacity(v___x_1832_);
v___x_1834_ = lean_array_push(v___x_1833_, v___x_1831_);
v___x_1835_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1835_, 0, v___y_1820_);
lean_ctor_set(v___x_1835_, 1, v___y_1819_);
v___x_1836_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_1835_);
v___x_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
v___x_1838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1834_);
lean_ctor_set(v___x_1838_, 1, v___x_1837_);
v___x_1839_ = lean_array_push(v_stmts_1826_, v___x_1838_);
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v___x_1839_);
v___x_1841_ = v___x_1829_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_fresh_1827_);
v___x_1841_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1842_ = lean_st_ref_set(v_a_1686_, v___x_1841_);
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1822_);
return v___x_1843_;
}
}
}
else
{
v___y_1781_ = v___y_1819_;
v___y_1782_ = v___y_1820_;
goto v___jp_1780_;
}
}
else
{
lean_dec_ref(v___y_1818_);
v___y_1781_ = v___y_1819_;
v___y_1782_ = v___y_1820_;
goto v___jp_1780_;
}
}
v___jp_1846_:
{
if (v___y_1852_ == 0)
{
lean_object* v___x_1853_; lean_object* v___x_1854_; uint8_t v___x_1855_; 
v___x_1853_ = lean_box(0);
v___x_1854_ = lean_apply_1(v___y_1851_, v___x_1853_);
v___x_1855_ = lean_unbox(v___x_1854_);
v___y_1818_ = v___y_1847_;
v___y_1819_ = v___y_1848_;
v___y_1820_ = v___y_1849_;
v___y_1821_ = v___x_1855_;
goto v___jp_1817_;
}
else
{
lean_dec_ref(v___y_1851_);
v___y_1818_ = v___y_1847_;
v___y_1819_ = v___y_1848_;
v___y_1820_ = v___y_1849_;
v___y_1821_ = v___y_1850_;
goto v___jp_1817_;
}
}
v___jp_1856_:
{
if (v___y_1863_ == 0)
{
lean_object* v___x_1864_; lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1864_ = lean_box(0);
v___x_1865_ = lean_apply_1(v___y_1857_, v___x_1864_);
v___x_1866_ = lean_unbox(v___x_1865_);
v___y_1847_ = v___y_1858_;
v___y_1848_ = v___y_1859_;
v___y_1849_ = v___y_1860_;
v___y_1850_ = v___y_1862_;
v___y_1851_ = v___y_1861_;
v___y_1852_ = v___x_1866_;
goto v___jp_1846_;
}
else
{
lean_dec_ref(v___y_1857_);
v___y_1847_ = v___y_1858_;
v___y_1848_ = v___y_1859_;
v___y_1849_ = v___y_1860_;
v___y_1850_ = v___y_1862_;
v___y_1851_ = v___y_1861_;
v___y_1852_ = v___y_1862_;
goto v___jp_1846_;
}
}
v___jp_1867_:
{
if (v___y_1876_ == 0)
{
lean_object* v___x_1877_; lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1877_ = lean_box(0);
lean_inc_ref(v___y_1871_);
v___x_1878_ = lean_apply_1(v___y_1871_, v___x_1877_);
v___x_1879_ = lean_unbox(v___x_1878_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1880_; uint8_t v___x_1881_; 
lean_dec(v___y_1870_);
lean_del_object(v___x_1718_);
v___x_1880_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1881_ = lean_string_dec_eq(v___y_1873_, v___x_1880_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; uint8_t v___x_1883_; 
v___x_1882_ = lean_apply_1(v___y_1868_, v___x_1877_);
v___x_1883_ = lean_unbox(v___x_1882_);
v___y_1857_ = v___y_1869_;
v___y_1858_ = v___y_1871_;
v___y_1859_ = v___y_1872_;
v___y_1860_ = v___y_1873_;
v___y_1861_ = v___y_1875_;
v___y_1862_ = v___y_1874_;
v___y_1863_ = v___x_1883_;
goto v___jp_1856_;
}
else
{
lean_dec_ref(v___y_1868_);
v___y_1857_ = v___y_1869_;
v___y_1858_ = v___y_1871_;
v___y_1859_ = v___y_1872_;
v___y_1860_ = v___y_1873_;
v___y_1861_ = v___y_1875_;
v___y_1862_ = v___y_1874_;
v___y_1863_ = v___y_1874_;
goto v___jp_1856_;
}
}
else
{
lean_dec_ref(v___y_1875_);
lean_dec_ref(v___y_1871_);
lean_dec_ref(v___y_1869_);
lean_dec_ref(v___y_1868_);
v___y_1721_ = v___y_1870_;
v___y_1722_ = v___y_1872_;
v___y_1723_ = v___y_1873_;
goto v___jp_1720_;
}
}
else
{
lean_dec_ref(v___y_1875_);
lean_dec_ref(v___y_1871_);
lean_dec_ref(v___y_1869_);
lean_dec_ref(v___y_1868_);
v___y_1721_ = v___y_1870_;
v___y_1722_ = v___y_1872_;
v___y_1723_ = v___y_1873_;
goto v___jp_1720_;
}
}
v___jp_1884_:
{
if (v___y_1893_ == 0)
{
lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; 
v___x_1894_ = lean_box(0);
lean_inc_ref(v___y_1892_);
v___x_1895_ = lean_apply_1(v___y_1892_, v___x_1894_);
v___x_1896_ = lean_unbox(v___x_1895_);
v___y_1868_ = v___y_1885_;
v___y_1869_ = v___y_1886_;
v___y_1870_ = v___y_1887_;
v___y_1871_ = v___y_1888_;
v___y_1872_ = v___y_1889_;
v___y_1873_ = v___y_1890_;
v___y_1874_ = v___y_1891_;
v___y_1875_ = v___y_1892_;
v___y_1876_ = v___x_1896_;
goto v___jp_1867_;
}
else
{
v___y_1868_ = v___y_1885_;
v___y_1869_ = v___y_1886_;
v___y_1870_ = v___y_1887_;
v___y_1871_ = v___y_1888_;
v___y_1872_ = v___y_1889_;
v___y_1873_ = v___y_1890_;
v___y_1874_ = v___y_1891_;
v___y_1875_ = v___y_1892_;
v___y_1876_ = v___y_1891_;
goto v___jp_1867_;
}
}
v___jp_1897_:
{
if (v___y_1906_ == 0)
{
lean_object* v___x_1907_; lean_object* v___x_1908_; uint8_t v___x_1909_; 
v___x_1907_ = lean_box(0);
lean_inc_ref(v___y_1899_);
v___x_1908_ = lean_apply_1(v___y_1899_, v___x_1907_);
v___x_1909_ = lean_unbox(v___x_1908_);
v___y_1885_ = v___y_1898_;
v___y_1886_ = v___y_1899_;
v___y_1887_ = v___y_1900_;
v___y_1888_ = v___y_1901_;
v___y_1889_ = v___y_1902_;
v___y_1890_ = v___y_1903_;
v___y_1891_ = v___y_1905_;
v___y_1892_ = v___y_1904_;
v___y_1893_ = v___x_1909_;
goto v___jp_1884_;
}
else
{
v___y_1885_ = v___y_1898_;
v___y_1886_ = v___y_1899_;
v___y_1887_ = v___y_1900_;
v___y_1888_ = v___y_1901_;
v___y_1889_ = v___y_1902_;
v___y_1890_ = v___y_1903_;
v___y_1891_ = v___y_1905_;
v___y_1892_ = v___y_1904_;
v___y_1893_ = v___y_1905_;
goto v___jp_1884_;
}
}
v___jp_1910_:
{
if (v___y_1919_ == 0)
{
lean_object* v___x_1920_; lean_object* v___x_1921_; uint8_t v___x_1922_; 
v___x_1920_ = lean_box(0);
lean_inc_ref(v___y_1911_);
v___x_1921_ = lean_apply_1(v___y_1911_, v___x_1920_);
v___x_1922_ = lean_unbox(v___x_1921_);
v___y_1898_ = v___y_1911_;
v___y_1899_ = v___y_1912_;
v___y_1900_ = v___y_1913_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v___y_1903_ = v___y_1916_;
v___y_1904_ = v___y_1918_;
v___y_1905_ = v___y_1917_;
v___y_1906_ = v___x_1922_;
goto v___jp_1897_;
}
else
{
v___y_1898_ = v___y_1911_;
v___y_1899_ = v___y_1912_;
v___y_1900_ = v___y_1913_;
v___y_1901_ = v___y_1914_;
v___y_1902_ = v___y_1915_;
v___y_1903_ = v___y_1916_;
v___y_1904_ = v___y_1918_;
v___y_1905_ = v___y_1917_;
v___y_1906_ = v___y_1917_;
goto v___jp_1897_;
}
}
v___jp_1923_:
{
if (v___y_1932_ == 0)
{
lean_object* v___x_1933_; uint8_t v___x_1934_; 
v___x_1933_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_1934_ = lean_string_dec_eq(v___y_1929_, v___x_1933_);
v___y_1911_ = v___y_1924_;
v___y_1912_ = v___y_1925_;
v___y_1913_ = v___y_1926_;
v___y_1914_ = v___y_1927_;
v___y_1915_ = v___y_1928_;
v___y_1916_ = v___y_1929_;
v___y_1917_ = v___y_1931_;
v___y_1918_ = v___y_1930_;
v___y_1919_ = v___x_1934_;
goto v___jp_1910_;
}
else
{
v___y_1911_ = v___y_1924_;
v___y_1912_ = v___y_1925_;
v___y_1913_ = v___y_1926_;
v___y_1914_ = v___y_1927_;
v___y_1915_ = v___y_1928_;
v___y_1916_ = v___y_1929_;
v___y_1917_ = v___y_1931_;
v___y_1918_ = v___y_1930_;
v___y_1919_ = v___y_1931_;
goto v___jp_1910_;
}
}
v___jp_1935_:
{
lean_object* v___x_1937_; lean_object* v_stmts_1938_; lean_object* v_fresh_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1958_; 
v___x_1937_ = lean_st_ref_take(v_a_1686_);
v_stmts_1938_ = lean_ctor_get(v___x_1937_, 0);
v_fresh_1939_ = lean_ctor_get(v___x_1937_, 1);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1941_ = v___x_1937_;
v_isShared_1942_ = v_isSharedCheck_1958_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_fresh_1939_);
lean_inc(v_stmts_1938_);
lean_dec(v___x_1937_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1958_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1953_; 
v___x_1943_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1683_);
v___x_1944_ = lean_unsigned_to_nat(1u);
v___x_1945_ = lean_mk_empty_array_with_capacity(v___x_1944_);
v___x_1946_ = lean_array_push(v___x_1945_, v___x_1943_);
v___x_1947_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1684_);
v___x_1948_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v___y_1936_);
v___x_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
v___x_1950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1946_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_array_push(v_stmts_1938_, v___x_1950_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v___x_1951_);
v___x_1953_ = v___x_1941_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v___x_1951_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_fresh_1939_);
v___x_1953_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1954_ = lean_st_ref_set(v_a_1686_, v___x_1953_);
v___x_1955_ = lean_box(0);
v___x_1956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1955_);
return v___x_1956_;
}
}
}
v___jp_1960_:
{
lean_object* v___x_1962_; 
lean_inc(v_fn_1684_);
v___x_1962_ = l_Lean_getExternAttrData_x3f(v_env_1959_, v_fn_1684_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_del_object(v___x_1718_);
v___y_1690_ = v___y_1961_;
v___y_1691_ = v_a_1686_;
goto v___jp_1689_;
}
else
{
lean_object* v_val_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v_val_1963_ = lean_ctor_get(v___x_1962_, 0);
lean_inc(v_val_1963_);
lean_dec_ref_known(v___x_1962_, 1);
v___x_1964_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__3));
v___x_1965_ = l_Lean_getExternEntryFor(v_val_1963_, v___x_1964_);
lean_dec(v_val_1963_);
if (lean_obj_tag(v___x_1965_) == 1)
{
lean_object* v_val_1966_; 
v_val_1966_ = lean_ctor_get(v___x_1965_, 0);
lean_inc(v_val_1966_);
lean_dec_ref_known(v___x_1965_, 1);
if (lean_obj_tag(v_val_1966_) == 2)
{
lean_object* v_fn_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v_fn_1967_ = lean_ctor_get(v_val_1966_, 1);
lean_inc_ref(v_fn_1967_);
lean_dec_ref_known(v_val_1966_, 2);
v___x_1968_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__4));
v___x_1969_ = lean_string_utf8_byte_size(v_fn_1967_);
v___x_1970_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__5);
v___x_1971_ = lean_nat_dec_le(v___x_1970_, v___x_1969_);
if (v___x_1971_ == 0)
{
lean_dec_ref(v_fn_1967_);
lean_del_object(v___x_1718_);
v___y_1936_ = v___y_1961_;
goto v___jp_1935_;
}
else
{
lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = lean_unsigned_to_nat(0u);
v___x_1973_ = lean_string_memcmp(v_fn_1967_, v___x_1968_, v___x_1972_, v___x_1972_, v___x_1970_);
if (v___x_1973_ == 0)
{
lean_dec_ref(v_fn_1967_);
lean_del_object(v___x_1718_);
v___y_1936_ = v___y_1961_;
goto v___jp_1935_;
}
else
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___f_1979_; lean_object* v___f_1980_; lean_object* v___f_1981_; lean_object* v___f_1982_; size_t v_sz_1983_; size_t v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
lean_dec(v_fn_1684_);
v___x_1974_ = lean_unsigned_to_nat(9u);
lean_inc_ref(v_fn_1967_);
v___x_1975_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1975_, 0, v_fn_1967_);
lean_ctor_set(v___x_1975_, 1, v___x_1972_);
lean_ctor_set(v___x_1975_, 2, v___x_1969_);
v___x_1976_ = l_String_Slice_Pos_nextn(v___x_1975_, v___x_1972_, v___x_1974_);
lean_dec_ref_known(v___x_1975_, 3);
v___x_1977_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1977_, 0, v_fn_1967_);
lean_ctor_set(v___x_1977_, 1, v___x_1976_);
lean_ctor_set(v___x_1977_, 2, v___x_1969_);
v___x_1978_ = l_String_Slice_toString(v___x_1977_);
lean_dec_ref_known(v___x_1977_, 3);
lean_inc_ref_n(v___x_1978_, 4);
v___f_1979_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1979_, 0, v___x_1978_);
v___f_1980_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1980_, 0, v___x_1978_);
v___f_1981_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1981_, 0, v___x_1978_);
v___f_1982_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_1982_, 0, v___x_1978_);
v_sz_1983_ = lean_array_size(v___y_1961_);
v___x_1984_ = ((size_t)0ULL);
v___x_1985_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__0(v_sz_1983_, v___x_1984_, v___y_1961_);
v___x_1986_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__6));
v___x_1987_ = lean_string_dec_eq(v___x_1978_, v___x_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; uint8_t v___x_1989_; 
v___x_1988_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__7));
v___x_1989_ = lean_string_dec_eq(v___x_1978_, v___x_1988_);
v___y_1924_ = v___f_1982_;
v___y_1925_ = v___f_1981_;
v___y_1926_ = v___x_1972_;
v___y_1927_ = v___f_1979_;
v___y_1928_ = v___x_1985_;
v___y_1929_ = v___x_1978_;
v___y_1930_ = v___f_1980_;
v___y_1931_ = v___x_1973_;
v___y_1932_ = v___x_1989_;
goto v___jp_1923_;
}
else
{
v___y_1924_ = v___f_1982_;
v___y_1925_ = v___f_1981_;
v___y_1926_ = v___x_1972_;
v___y_1927_ = v___f_1979_;
v___y_1928_ = v___x_1985_;
v___y_1929_ = v___x_1978_;
v___y_1930_ = v___f_1980_;
v___y_1931_ = v___x_1973_;
v___y_1932_ = v___x_1973_;
goto v___jp_1923_;
}
}
}
}
else
{
lean_dec(v_val_1966_);
lean_del_object(v___x_1718_);
v___y_1690_ = v___y_1961_;
v___y_1691_ = v_a_1686_;
goto v___jp_1689_;
}
}
else
{
lean_dec(v___x_1965_);
lean_del_object(v___x_1718_);
v___y_1690_ = v___y_1961_;
v___y_1691_ = v_a_1686_;
goto v___jp_1689_;
}
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_dec(v___x_1714_);
lean_dec_ref(v_args_1685_);
lean_dec(v_fn_1684_);
lean_dec_ref(v_lhsId_1683_);
v_a_2000_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1715_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1715_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
v___jp_1689_:
{
lean_object* v___x_1692_; lean_object* v_stmts_1693_; lean_object* v_fresh_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1713_; 
v___x_1692_ = lean_st_ref_take(v___y_1691_);
v_stmts_1693_ = lean_ctor_get(v___x_1692_, 0);
v_fresh_1694_ = lean_ctor_get(v___x_1692_, 1);
v_isSharedCheck_1713_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1696_ = v___x_1692_;
v_isShared_1697_ = v_isSharedCheck_1713_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_fresh_1694_);
lean_inc(v_stmts_1693_);
lean_dec(v___x_1692_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1713_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1698_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_1683_);
v___x_1699_ = lean_unsigned_to_nat(1u);
v___x_1700_ = lean_mk_empty_array_with_capacity(v___x_1699_);
v___x_1701_ = lean_array_push(v___x_1700_, v___x_1698_);
v___x_1702_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_fn_1684_);
v___x_1703_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v___y_1690_);
v___x_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
v___x_1705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1701_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_array_push(v_stmts_1693_, v___x_1705_);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 0, v___x_1706_);
v___x_1708_ = v___x_1696_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_fresh_1694_);
v___x_1708_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1709_ = lean_st_ref_set(v___y_1691_, v___x_1708_);
v___x_1710_ = lean_box(0);
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1710_);
return v___x_1711_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___boxed(lean_object* v_lhsId_2008_, lean_object* v_fn_2009_, lean_object* v_args_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2008_, v_fn_2009_, v_args_2010_, v_a_2011_, v_a_2012_);
lean_dec(v_a_2012_);
lean_dec(v_a_2011_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap(lean_object* v_lhsId_2015_, lean_object* v_fn_2016_, lean_object* v_args_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2015_, v_fn_2016_, v_args_2017_, v_a_2019_, v_a_2021_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitFap___boxed(lean_object* v_lhsId_2024_, lean_object* v_fn_2025_, lean_object* v_args_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_Compiler_LCNF_EmitYul_emitFap(v_lhsId_2024_, v_fn_2025_, v_args_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(lean_object* v_lhsId_2036_, lean_object* v_fvarId_2037_, lean_object* v_args_2038_, lean_object* v_a_2039_){
_start:
{
lean_object* v___y_2042_; lean_object* v___x_2071_; lean_object* v___x_2072_; uint8_t v___x_2073_; 
v___x_2071_ = lean_array_get_size(v_args_2038_);
v___x_2072_ = lean_unsigned_to_nat(1u);
v___x_2073_ = lean_nat_dec_eq(v___x_2071_, v___x_2072_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; uint8_t v___x_2075_; 
v___x_2074_ = lean_unsigned_to_nat(2u);
v___x_2075_ = lean_nat_dec_eq(v___x_2071_, v___x_2074_);
if (v___x_2075_ == 0)
{
lean_object* v___x_2076_; 
v___x_2076_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__0));
v___y_2042_ = v___x_2076_;
goto v___jp_2041_;
}
else
{
lean_object* v___x_2077_; 
v___x_2077_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__1));
v___y_2042_ = v___x_2077_;
goto v___jp_2041_;
}
}
else
{
lean_object* v___x_2078_; 
v___x_2078_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___closed__2));
v___y_2042_ = v___x_2078_;
goto v___jp_2041_;
}
v___jp_2041_:
{
lean_object* v___x_2043_; lean_object* v_stmts_2044_; lean_object* v_fresh_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2070_; 
v___x_2043_ = lean_st_ref_take(v_a_2039_);
v_stmts_2044_ = lean_ctor_get(v___x_2043_, 0);
v_fresh_2045_ = lean_ctor_get(v___x_2043_, 1);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2047_ = v___x_2043_;
v_isShared_2048_ = v_isSharedCheck_2070_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_fresh_2045_);
lean_inc(v_stmts_2044_);
lean_dec(v___x_2043_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2070_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
size_t v_sz_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; size_t v___x_2055_; lean_object* v___x_2056_; lean_object* v_all_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2065_; 
v_sz_2049_ = lean_array_size(v_args_2038_);
v___x_2050_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2037_);
v___x_2051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
v___x_2052_ = lean_unsigned_to_nat(1u);
v___x_2053_ = lean_mk_empty_array_with_capacity(v___x_2052_);
lean_inc_ref(v___x_2053_);
v___x_2054_ = lean_array_push(v___x_2053_, v___x_2051_);
v___x_2055_ = ((size_t)0ULL);
v___x_2056_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitFap_spec__1(v_sz_2049_, v___x_2055_, v_args_2038_);
v_all_2057_ = l_Array_append___redArg(v___x_2054_, v___x_2056_);
lean_dec_ref(v___x_2056_);
v___x_2058_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2036_);
v___x_2059_ = lean_array_push(v___x_2053_, v___x_2058_);
lean_inc_ref(v___y_2042_);
v___x_2060_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___y_2042_);
lean_ctor_set(v___x_2060_, 1, v_all_2057_);
v___x_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
v___x_2062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2059_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = lean_array_push(v_stmts_2044_, v___x_2062_);
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2063_);
v___x_2065_ = v___x_2047_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2063_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_fresh_2045_);
v___x_2065_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2066_ = lean_st_ref_set(v_a_2039_, v___x_2065_);
v___x_2067_ = lean_box(0);
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
return v___x_2068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg___boxed(lean_object* v_lhsId_2079_, lean_object* v_fvarId_2080_, lean_object* v_args_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_){
_start:
{
lean_object* v_res_2084_; 
v_res_2084_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2079_, v_fvarId_2080_, v_args_2081_, v_a_2082_);
lean_dec(v_a_2082_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply(lean_object* v_lhsId_2085_, lean_object* v_fvarId_2086_, lean_object* v_args_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2085_, v_fvarId_2086_, v_args_2087_, v_a_2089_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitApply___boxed(lean_object* v_lhsId_2094_, lean_object* v_fvarId_2095_, lean_object* v_args_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l_Lean_Compiler_LCNF_EmitYul_emitApply(v_lhsId_2094_, v_fvarId_2095_, v_args_2096_, v_a_2097_, v_a_2098_, v_a_2099_, v_a_2100_);
lean_dec(v_a_2100_);
lean_dec_ref(v_a_2099_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
return v_res_2102_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0(void){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2103_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue(lean_object* v_lhs_2105_, lean_object* v_value_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_lhsId_2112_; lean_object* v_i_2114_; lean_object* v_fvarId_2115_; lean_object* v___y_2116_; 
v_lhsId_2112_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_lhs_2105_);
switch(lean_obj_tag(v_value_2106_))
{
case 0:
{
lean_object* v_value_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2184_; 
v_value_2140_ = lean_ctor_get(v_value_2106_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_value_2106_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2142_ = v_value_2106_;
v_isShared_2143_ = v_isSharedCheck_2184_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_value_2140_);
lean_dec(v_value_2106_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2184_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
if (lean_obj_tag(v_value_2140_) == 1)
{
lean_object* v_val_2144_; lean_object* v___x_2145_; 
lean_del_object(v___x_2142_);
v_val_2144_ = lean_ctor_get(v_value_2140_, 0);
lean_inc_ref(v_val_2144_);
lean_dec_ref_known(v_value_2140_, 1);
v___x_2145_ = l_Lean_Compiler_LCNF_EmitYul_emitStringLit(v_lhsId_2112_, v_val_2144_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_);
lean_dec_ref(v_val_2144_);
return v___x_2145_;
}
else
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lean_Compiler_LCNF_EmitYul_litToExpr___redArg(v_value_2140_, v_a_2109_, v_a_2110_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2175_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2149_ = v___x_2146_;
v_isShared_2150_ = v_isSharedCheck_2175_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2146_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2175_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2151_; lean_object* v_stmts_2152_; lean_object* v_fresh_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2174_; 
v___x_2151_ = lean_st_ref_take(v_a_2108_);
v_stmts_2152_ = lean_ctor_get(v___x_2151_, 0);
v_fresh_2153_ = lean_ctor_get(v___x_2151_, 1);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2155_ = v___x_2151_;
v_isShared_2156_ = v_isSharedCheck_2174_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_fresh_2153_);
lean_inc(v_stmts_2152_);
lean_dec(v___x_2151_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2174_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2162_; 
v___x_2157_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2158_ = lean_unsigned_to_nat(1u);
v___x_2159_ = lean_mk_empty_array_with_capacity(v___x_2158_);
v___x_2160_ = lean_array_push(v___x_2159_, v___x_2157_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set_tag(v___x_2142_, 1);
lean_ctor_set(v___x_2142_, 0, v_a_2147_);
v___x_2162_ = v___x_2142_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2147_);
v___x_2162_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2160_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
v___x_2164_ = lean_array_push(v_stmts_2152_, v___x_2163_);
if (v_isShared_2156_ == 0)
{
lean_ctor_set(v___x_2155_, 0, v___x_2164_);
v___x_2166_ = v___x_2155_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2172_, 1, v_fresh_2153_);
v___x_2166_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2170_; 
v___x_2167_ = lean_st_ref_set(v_a_2108_, v___x_2166_);
v___x_2168_ = lean_box(0);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 0, v___x_2168_);
v___x_2170_ = v___x_2149_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_del_object(v___x_2142_);
lean_dec_ref(v_lhsId_2112_);
v_a_2176_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2146_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2146_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
}
}
case 1:
{
lean_object* v___x_2185_; lean_object* v_stmts_2186_; lean_object* v_fresh_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2204_; 
v___x_2185_ = lean_st_ref_take(v_a_2108_);
v_stmts_2186_ = lean_ctor_get(v___x_2185_, 0);
v_fresh_2187_ = lean_ctor_get(v___x_2185_, 1);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2185_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2189_ = v___x_2185_;
v_isShared_2190_ = v_isSharedCheck_2204_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_fresh_2187_);
lean_inc(v_stmts_2186_);
lean_dec(v___x_2185_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2204_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2199_; 
v___x_2191_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2192_ = lean_unsigned_to_nat(1u);
v___x_2193_ = lean_mk_empty_array_with_capacity(v___x_2192_);
v___x_2194_ = lean_array_push(v___x_2193_, v___x_2191_);
v___x_2195_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__1);
v___x_2196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = lean_array_push(v_stmts_2186_, v___x_2196_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v___x_2197_);
v___x_2199_ = v___x_2189_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2197_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v_fresh_2187_);
v___x_2199_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = lean_st_ref_set(v_a_2108_, v___x_2199_);
v___x_2201_ = lean_box(0);
v___x_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
return v___x_2202_;
}
}
}
case 4:
{
lean_object* v_fvarId_2205_; lean_object* v_args_2206_; lean_object* v___x_2207_; 
v_fvarId_2205_ = lean_ctor_get(v_value_2106_, 0);
lean_inc(v_fvarId_2205_);
v_args_2206_ = lean_ctor_get(v_value_2106_, 1);
lean_inc_ref(v_args_2206_);
lean_dec_ref_known(v_value_2106_, 2);
v___x_2207_ = l_Lean_Compiler_LCNF_EmitYul_emitApply___redArg(v_lhsId_2112_, v_fvarId_2205_, v_args_2206_, v_a_2108_);
return v___x_2207_;
}
case 5:
{
lean_object* v_i_2208_; lean_object* v_args_2209_; lean_object* v___x_2210_; 
v_i_2208_ = lean_ctor_get(v_value_2106_, 0);
lean_inc_ref(v_i_2208_);
v_args_2209_ = lean_ctor_get(v_value_2106_, 1);
lean_inc_ref(v_args_2209_);
lean_dec_ref_known(v_value_2106_, 2);
v___x_2210_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_2112_, v_i_2208_, v_args_2209_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_);
lean_dec_ref(v_args_2209_);
return v___x_2210_;
}
case 8:
{
lean_object* v_offset_2211_; lean_object* v_var_2212_; lean_object* v___x_2213_; lean_object* v_stmts_2214_; lean_object* v_fresh_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2244_; 
v_offset_2211_ = lean_ctor_get(v_value_2106_, 1);
lean_inc(v_offset_2211_);
v_var_2212_ = lean_ctor_get(v_value_2106_, 2);
lean_inc(v_var_2212_);
lean_dec_ref_known(v_value_2106_, 3);
v___x_2213_ = lean_st_ref_take(v_a_2108_);
v_stmts_2214_ = lean_ctor_get(v___x_2213_, 0);
v_fresh_2215_ = lean_ctor_get(v___x_2213_, 1);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2217_ = v___x_2213_;
v_isShared_2218_ = v_isSharedCheck_2244_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_fresh_2215_);
lean_inc(v_stmts_2214_);
lean_dec(v___x_2213_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2244_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v_addr_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2219_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2220_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_2212_);
v___x_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
v___x_2222_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2211_);
v___x_2223_ = lean_unsigned_to_nat(2u);
v___x_2224_ = lean_mk_empty_array_with_capacity(v___x_2223_);
v___x_2225_ = lean_array_push(v___x_2224_, v___x_2221_);
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2222_);
v_addr_2227_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2227_, 0, v___x_2219_);
lean_ctor_set(v_addr_2227_, 1, v___x_2226_);
v___x_2228_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2229_ = lean_unsigned_to_nat(1u);
v___x_2230_ = lean_mk_empty_array_with_capacity(v___x_2229_);
lean_inc_ref(v___x_2230_);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2228_);
v___x_2232_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_2233_ = lean_array_push(v___x_2230_, v_addr_2227_);
v___x_2234_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2232_);
lean_ctor_set(v___x_2234_, 1, v___x_2233_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
v___x_2236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2231_);
lean_ctor_set(v___x_2236_, 1, v___x_2235_);
v___x_2237_ = lean_array_push(v_stmts_2214_, v___x_2236_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v___x_2237_);
v___x_2239_ = v___x_2217_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v___x_2237_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v_fresh_2215_);
v___x_2239_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2240_ = lean_st_ref_set(v_a_2108_, v___x_2239_);
v___x_2241_ = lean_box(0);
v___x_2242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2241_);
return v___x_2242_;
}
}
}
case 9:
{
lean_object* v_fn_2245_; lean_object* v_args_2246_; lean_object* v___x_2247_; 
v_fn_2245_ = lean_ctor_get(v_value_2106_, 0);
lean_inc(v_fn_2245_);
v_args_2246_ = lean_ctor_get(v_value_2106_, 1);
lean_inc_ref(v_args_2246_);
lean_dec_ref_known(v_value_2106_, 2);
v___x_2247_ = l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg(v_lhsId_2112_, v_fn_2245_, v_args_2246_, v_a_2108_, v_a_2110_);
return v___x_2247_;
}
case 10:
{
lean_object* v_fn_2248_; lean_object* v_args_2249_; lean_object* v___x_2250_; 
v_fn_2248_ = lean_ctor_get(v_value_2106_, 0);
lean_inc(v_fn_2248_);
v_args_2249_ = lean_ctor_get(v_value_2106_, 1);
lean_inc_ref(v_args_2249_);
lean_dec_ref_known(v_value_2106_, 2);
v___x_2250_ = l_Lean_Compiler_LCNF_EmitYul_emitPap(v_lhsId_2112_, v_fn_2248_, v_args_2249_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_);
lean_dec_ref(v_args_2249_);
lean_dec(v_fn_2248_);
return v___x_2250_;
}
case 11:
{
lean_object* v_var_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2279_; 
v_var_2251_ = lean_ctor_get(v_value_2106_, 1);
v_isSharedCheck_2279_ = !lean_is_exclusive(v_value_2106_);
if (v_isSharedCheck_2279_ == 0)
{
lean_object* v_unused_2280_; 
v_unused_2280_ = lean_ctor_get(v_value_2106_, 0);
lean_dec(v_unused_2280_);
v___x_2253_ = v_value_2106_;
v_isShared_2254_ = v_isSharedCheck_2279_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_var_2251_);
lean_dec(v_value_2106_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2279_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2255_; lean_object* v_stmts_2256_; lean_object* v_fresh_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2278_; 
v___x_2255_ = lean_st_ref_take(v_a_2108_);
v_stmts_2256_ = lean_ctor_get(v___x_2255_, 0);
v_fresh_2257_ = lean_ctor_get(v___x_2255_, 1);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2259_ = v___x_2255_;
v_isShared_2260_ = v_isSharedCheck_2278_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_fresh_2257_);
lean_inc(v_stmts_2256_);
lean_dec(v___x_2255_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2278_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2261_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2262_ = lean_unsigned_to_nat(1u);
v___x_2263_ = lean_mk_empty_array_with_capacity(v___x_2262_);
v___x_2264_ = lean_array_push(v___x_2263_, v___x_2261_);
v___x_2265_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_var_2251_);
v___x_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
v___x_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set_tag(v___x_2253_, 1);
lean_ctor_set(v___x_2253_, 1, v___x_2267_);
lean_ctor_set(v___x_2253_, 0, v___x_2264_);
v___x_2269_ = v___x_2253_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v___x_2264_);
lean_ctor_set(v_reuseFailAlloc_2277_, 1, v___x_2267_);
v___x_2269_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; lean_object* v___x_2272_; 
v___x_2270_ = lean_array_push(v_stmts_2256_, v___x_2269_);
if (v_isShared_2260_ == 0)
{
lean_ctor_set(v___x_2259_, 0, v___x_2270_);
v___x_2272_ = v___x_2259_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2270_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v_fresh_2257_);
v___x_2272_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2273_ = lean_st_ref_set(v_a_2108_, v___x_2272_);
v___x_2274_ = lean_box(0);
v___x_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2274_);
return v___x_2275_;
}
}
}
}
}
case 12:
{
lean_object* v_i_2281_; lean_object* v_args_2282_; lean_object* v___x_2283_; 
v_i_2281_ = lean_ctor_get(v_value_2106_, 1);
lean_inc_ref(v_i_2281_);
v_args_2282_ = lean_ctor_get(v_value_2106_, 2);
lean_inc_ref(v_args_2282_);
lean_dec_ref_known(v_value_2106_, 3);
v___x_2283_ = l_Lean_Compiler_LCNF_EmitYul_emitCtor(v_lhsId_2112_, v_i_2281_, v_args_2282_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_);
lean_dec_ref(v_args_2282_);
return v___x_2283_;
}
case 13:
{
lean_object* v_fvarId_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2313_; 
v_fvarId_2284_ = lean_ctor_get(v_value_2106_, 1);
v_isSharedCheck_2313_ = !lean_is_exclusive(v_value_2106_);
if (v_isSharedCheck_2313_ == 0)
{
lean_object* v_unused_2314_; 
v_unused_2314_ = lean_ctor_get(v_value_2106_, 0);
lean_dec(v_unused_2314_);
v___x_2286_ = v_value_2106_;
v_isShared_2287_ = v_isSharedCheck_2313_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_fvarId_2284_);
lean_dec(v_value_2106_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2313_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2288_; lean_object* v_stmts_2289_; lean_object* v_fresh_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2312_; 
v___x_2288_ = lean_st_ref_take(v_a_2108_);
v_stmts_2289_ = lean_ctor_get(v___x_2288_, 0);
v_fresh_2290_ = lean_ctor_get(v___x_2288_, 1);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2292_ = v___x_2288_;
v_isShared_2293_ = v_isSharedCheck_2312_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_fresh_2290_);
lean_inc(v_stmts_2289_);
lean_dec(v___x_2288_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2312_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2303_; 
v___x_2294_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2295_ = lean_unsigned_to_nat(1u);
v___x_2296_ = lean_mk_empty_array_with_capacity(v___x_2295_);
v___x_2297_ = lean_array_push(v___x_2296_, v___x_2294_);
v___x_2298_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2284_);
v___x_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2298_);
v___x_2300_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_2299_);
v___x_2301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
if (v_isShared_2287_ == 0)
{
lean_ctor_set_tag(v___x_2286_, 1);
lean_ctor_set(v___x_2286_, 1, v___x_2301_);
lean_ctor_set(v___x_2286_, 0, v___x_2297_);
v___x_2303_ = v___x_2286_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v___x_2297_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v___x_2301_);
v___x_2303_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
lean_object* v___x_2304_; lean_object* v___x_2306_; 
v___x_2304_ = lean_array_push(v_stmts_2289_, v___x_2303_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v___x_2304_);
v___x_2306_ = v___x_2292_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2304_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v_fresh_2290_);
v___x_2306_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2307_ = lean_st_ref_set(v_a_2108_, v___x_2306_);
v___x_2308_ = lean_box(0);
v___x_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
return v___x_2309_;
}
}
}
}
}
case 14:
{
lean_object* v_fvarId_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2344_; 
v_fvarId_2315_ = lean_ctor_get(v_value_2106_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v_value_2106_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2317_ = v_value_2106_;
v_isShared_2318_ = v_isSharedCheck_2344_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_fvarId_2315_);
lean_dec(v_value_2106_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2344_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2319_; lean_object* v_stmts_2320_; lean_object* v_fresh_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2343_; 
v___x_2319_ = lean_st_ref_take(v_a_2108_);
v_stmts_2320_ = lean_ctor_get(v___x_2319_, 0);
v_fresh_2321_ = lean_ctor_get(v___x_2319_, 1);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2323_ = v___x_2319_;
v_isShared_2324_ = v_isSharedCheck_2343_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_fresh_2321_);
lean_inc(v_stmts_2320_);
lean_dec(v___x_2319_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2343_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2331_; 
v___x_2325_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2326_ = lean_unsigned_to_nat(1u);
v___x_2327_ = lean_mk_empty_array_with_capacity(v___x_2326_);
v___x_2328_ = lean_array_push(v___x_2327_, v___x_2325_);
v___x_2329_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2315_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set_tag(v___x_2317_, 1);
lean_ctor_set(v___x_2317_, 0, v___x_2329_);
v___x_2331_ = v___x_2317_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2337_; 
v___x_2332_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_2331_);
v___x_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
v___x_2334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2328_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = lean_array_push(v_stmts_2320_, v___x_2334_);
if (v_isShared_2324_ == 0)
{
lean_ctor_set(v___x_2323_, 0, v___x_2335_);
v___x_2337_ = v___x_2323_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v_fresh_2321_);
v___x_2337_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2338_ = lean_st_ref_set(v_a_2108_, v___x_2337_);
v___x_2339_ = lean_box(0);
v___x_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
return v___x_2340_;
}
}
}
}
}
case 15:
{
lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2370_; 
v_isSharedCheck_2370_ = !lean_is_exclusive(v_value_2106_);
if (v_isSharedCheck_2370_ == 0)
{
lean_object* v_unused_2371_; 
v_unused_2371_ = lean_ctor_get(v_value_2106_, 0);
lean_dec(v_unused_2371_);
v___x_2346_ = v_value_2106_;
v_isShared_2347_ = v_isSharedCheck_2370_;
goto v_resetjp_2345_;
}
else
{
lean_dec(v_value_2106_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2370_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; lean_object* v_stmts_2349_; lean_object* v_fresh_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2369_; 
v___x_2348_ = lean_st_ref_take(v_a_2108_);
v_stmts_2349_ = lean_ctor_get(v___x_2348_, 0);
v_fresh_2350_ = lean_ctor_get(v___x_2348_, 1);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2352_ = v___x_2348_;
v_isShared_2353_ = v_isSharedCheck_2369_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_fresh_2350_);
lean_inc(v_stmts_2349_);
lean_dec(v___x_2348_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2369_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2354_ = lean_unsigned_to_nat(1u);
v___x_2355_ = lean_mk_empty_array_with_capacity(v___x_2354_);
v___x_2356_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2357_ = lean_array_push(v___x_2355_, v___x_2356_);
v___x_2358_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitLetValue___closed__0);
v___x_2359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2357_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = lean_array_push(v_stmts_2349_, v___x_2359_);
if (v_isShared_2353_ == 0)
{
lean_ctor_set(v___x_2352_, 0, v___x_2360_);
v___x_2362_ = v___x_2352_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v_fresh_2350_);
v___x_2362_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2366_; 
v___x_2363_ = lean_st_ref_set(v_a_2108_, v___x_2362_);
v___x_2364_ = lean_box(0);
if (v_isShared_2347_ == 0)
{
lean_ctor_set_tag(v___x_2346_, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2364_);
v___x_2366_ = v___x_2346_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v___x_2364_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
default: 
{
lean_object* v_i_2372_; lean_object* v_var_2373_; 
v_i_2372_ = lean_ctor_get(v_value_2106_, 0);
lean_inc(v_i_2372_);
v_var_2373_ = lean_ctor_get(v_value_2106_, 1);
lean_inc(v_var_2373_);
lean_dec(v_value_2106_);
v_i_2114_ = v_i_2372_;
v_fvarId_2115_ = v_var_2373_;
v___y_2116_ = v_a_2108_;
goto v___jp_2113_;
}
}
v___jp_2113_:
{
lean_object* v___x_2117_; lean_object* v_stmts_2118_; lean_object* v_fresh_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2139_; 
v___x_2117_ = lean_st_ref_take(v___y_2116_);
v_stmts_2118_ = lean_ctor_get(v___x_2117_, 0);
v_fresh_2119_ = lean_ctor_get(v___x_2117_, 1);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2121_ = v___x_2117_;
v_isShared_2122_ = v_isSharedCheck_2139_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_fresh_2119_);
lean_inc(v_stmts_2118_);
lean_dec(v___x_2117_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2139_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2123_ = l_Lean_Compiler_LCNF_EmitYul_tn(v_lhsId_2112_);
v___x_2124_ = lean_unsigned_to_nat(1u);
v___x_2125_ = lean_mk_empty_array_with_capacity(v___x_2124_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2123_);
v___x_2127_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2115_);
v___x_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
v___x_2129_ = l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr(v___x_2128_, v_i_2114_);
lean_dec(v_i_2114_);
v___x_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2126_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_array_push(v_stmts_2118_, v___x_2131_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2132_);
v___x_2134_ = v___x_2121_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2132_);
lean_ctor_set(v_reuseFailAlloc_2138_, 1, v_fresh_2119_);
v___x_2134_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___x_2135_ = lean_st_ref_set(v___y_2116_, v___x_2134_);
v___x_2136_ = lean_box(0);
v___x_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
return v___x_2137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitLetValue___boxed(lean_object* v_lhs_2374_, lean_object* v_value_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_, lean_object* v_a_2379_, lean_object* v_a_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_lhs_2374_, v_value_2375_, v_a_2376_, v_a_2377_, v_a_2378_, v_a_2379_);
lean_dec(v_a_2379_);
lean_dec_ref(v_a_2378_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(lean_object* v_params_2382_, lean_object* v_args_2383_, lean_object* v_range_2384_, lean_object* v_b_2385_, lean_object* v_i_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v_stop_2389_; lean_object* v_step_2390_; uint8_t v___x_2391_; 
v_stop_2389_ = lean_ctor_get(v_range_2384_, 1);
v_step_2390_ = lean_ctor_get(v_range_2384_, 2);
v___x_2391_ = lean_nat_dec_lt(v_i_2386_, v_stop_2389_);
if (v___x_2391_ == 0)
{
lean_object* v___x_2392_; 
lean_dec(v_i_2386_);
v___x_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2392_, 0, v_b_2385_);
return v___x_2392_;
}
else
{
lean_object* v___x_2393_; lean_object* v_type_2394_; lean_object* v___x_2395_; uint8_t v___y_2400_; uint8_t v___x_2424_; 
v___x_2393_ = lean_array_fget_borrowed(v_params_2382_, v_i_2386_);
v_type_2394_ = lean_ctor_get(v___x_2393_, 2);
v___x_2395_ = lean_box(0);
v___x_2424_ = l_Lean_Expr_isVoid(v_type_2394_);
if (v___x_2424_ == 0)
{
uint8_t v___x_2425_; 
v___x_2425_ = l_Lean_Expr_isErased(v_type_2394_);
v___y_2400_ = v___x_2425_;
goto v___jp_2399_;
}
else
{
v___y_2400_ = v___x_2424_;
goto v___jp_2399_;
}
v___jp_2396_:
{
lean_object* v___x_2397_; 
v___x_2397_ = lean_nat_add(v_i_2386_, v_step_2390_);
lean_dec(v_i_2386_);
v_b_2385_ = v___x_2395_;
v_i_2386_ = v___x_2397_;
goto _start;
}
v___jp_2399_:
{
if (v___y_2400_ == 0)
{
lean_object* v___x_2401_; lean_object* v_fvarId_2402_; lean_object* v_stmts_2403_; lean_object* v_fresh_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2423_; 
v___x_2401_ = lean_st_ref_take(v___y_2387_);
v_fvarId_2402_ = lean_ctor_get(v___x_2393_, 0);
v_stmts_2403_ = lean_ctor_get(v___x_2401_, 0);
v_fresh_2404_ = lean_ctor_get(v___x_2401_, 1);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2406_ = v___x_2401_;
v_isShared_2407_ = v_isSharedCheck_2423_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_fresh_2404_);
lean_inc(v_stmts_2403_);
lean_dec(v___x_2401_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2423_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2420_; 
v___x_2408_ = lean_box(0);
v___x_2409_ = lean_array_get_borrowed(v___x_2408_, v_args_2383_, v_i_2386_);
lean_inc(v_fvarId_2402_);
v___x_2410_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2402_);
v___x_2411_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2410_);
v___x_2412_ = lean_unsigned_to_nat(1u);
v___x_2413_ = lean_mk_empty_array_with_capacity(v___x_2412_);
v___x_2414_ = lean_array_push(v___x_2413_, v___x_2411_);
lean_inc(v___x_2409_);
v___x_2415_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v___x_2409_);
v___x_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2416_, 0, v___x_2415_);
v___x_2417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2414_);
lean_ctor_set(v___x_2417_, 1, v___x_2416_);
v___x_2418_ = lean_array_push(v_stmts_2403_, v___x_2417_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___x_2418_);
v___x_2420_ = v___x_2406_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2418_);
lean_ctor_set(v_reuseFailAlloc_2422_, 1, v_fresh_2404_);
v___x_2420_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
lean_object* v___x_2421_; 
v___x_2421_ = lean_st_ref_set(v___y_2387_, v___x_2420_);
goto v___jp_2396_;
}
}
}
else
{
goto v___jp_2396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg___boxed(lean_object* v_params_2426_, lean_object* v_args_2427_, lean_object* v_range_2428_, lean_object* v_b_2429_, lean_object* v_i_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2426_, v_args_2427_, v_range_2428_, v_b_2429_, v_i_2430_, v___y_2431_);
lean_dec(v___y_2431_);
lean_dec_ref(v_range_2428_);
lean_dec_ref(v_args_2427_);
lean_dec_ref(v_params_2426_);
return v_res_2433_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__0));
v___x_2439_ = l_Lean_stringToMessageData(v___x_2438_);
return v___x_2439_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3(void){
_start:
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2441_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__2));
v___x_2442_ = l_Lean_stringToMessageData(v___x_2441_);
return v___x_2442_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__4));
v___x_2445_ = l_Lean_stringToMessageData(v___x_2444_);
return v___x_2445_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7(void){
_start:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__6));
v___x_2448_ = l_Lean_stringToMessageData(v___x_2447_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
v___x_2454_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2455_ = lean_unsigned_to_nat(2u);
v___x_2456_ = lean_mk_empty_array_with_capacity(v___x_2455_);
v___x_2457_ = lean_array_push(v___x_2456_, v___x_2454_);
return v___x_2457_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2458_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_2459_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_2460_ = lean_array_push(v___x_2459_, v___x_2458_);
return v___x_2460_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12(void){
_start:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2461_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__11);
v___x_2462_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_2463_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2462_);
lean_ctor_set(v___x_2463_, 1, v___x_2461_);
return v___x_2463_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13(void){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; 
v___x_2464_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__12);
v___x_2465_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode(lean_object* v_code_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_){
_start:
{
switch(lean_obj_tag(v_code_2466_))
{
case 0:
{
lean_object* v_decl_2472_; lean_object* v_k_2473_; lean_object* v_fvarId_2474_; lean_object* v_value_2475_; lean_object* v___x_2476_; 
v_decl_2472_ = lean_ctor_get(v_code_2466_, 0);
lean_inc_ref(v_decl_2472_);
v_k_2473_ = lean_ctor_get(v_code_2466_, 1);
lean_inc_ref(v_k_2473_);
lean_dec_ref_known(v_code_2466_, 2);
v_fvarId_2474_ = lean_ctor_get(v_decl_2472_, 0);
lean_inc(v_fvarId_2474_);
v_value_2475_ = lean_ctor_get(v_decl_2472_, 3);
lean_inc(v_value_2475_);
lean_dec_ref(v_decl_2472_);
v___x_2476_ = l_Lean_Compiler_LCNF_EmitYul_emitLetValue(v_fvarId_2474_, v_value_2475_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_);
if (lean_obj_tag(v___x_2476_) == 0)
{
lean_dec_ref_known(v___x_2476_, 1);
v_code_2466_ = v_k_2473_;
goto _start;
}
else
{
lean_dec_ref(v_k_2473_);
return v___x_2476_;
}
}
case 3:
{
lean_object* v_fvarId_2478_; lean_object* v_args_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2535_; 
v_fvarId_2478_ = lean_ctor_get(v_code_2466_, 0);
v_args_2479_ = lean_ctor_get(v_code_2466_, 1);
v_isSharedCheck_2535_ = !lean_is_exclusive(v_code_2466_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2481_ = v_code_2466_;
v_isShared_2482_ = v_isSharedCheck_2535_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_args_2479_);
lean_inc(v_fvarId_2478_);
lean_dec(v_code_2466_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2535_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; 
v___x_2483_ = l_Lean_Compiler_LCNF_EmitYul_findJoinDecl_x3f___redArg(v_fvarId_2478_, v_a_2467_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_object* v_a_2484_; 
v_a_2484_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_a_2484_);
lean_dec_ref_known(v___x_2483_, 1);
if (lean_obj_tag(v_a_2484_) == 1)
{
lean_object* v_val_2485_; lean_object* v_params_2486_; lean_object* v_value_2487_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2501_; lean_object* v___y_2502_; lean_object* v___y_2503_; lean_object* v___y_2504_; uint8_t v___x_2514_; 
v_val_2485_ = lean_ctor_get(v_a_2484_, 0);
lean_inc(v_val_2485_);
lean_dec_ref_known(v_a_2484_, 1);
v_params_2486_ = lean_ctor_get(v_val_2485_, 2);
lean_inc_ref(v_params_2486_);
v_value_2487_ = lean_ctor_get(v_val_2485_, 4);
lean_inc_ref(v_value_2487_);
lean_dec(v_val_2485_);
v___x_2514_ = l_Lean_Compiler_LCNF_EmitYul_codeContainsJmpTo(v_fvarId_2478_, v_value_2487_);
if (v___x_2514_ == 0)
{
v___y_2501_ = v_a_2467_;
v___y_2502_ = v_a_2468_;
v___y_2503_ = v_a_2469_;
v___y_2504_ = v_a_2470_;
goto v___jp_2500_;
}
else
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2515_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__3);
lean_inc(v_fvarId_2478_);
v___x_2516_ = l_Lean_MessageData_ofName(v_fvarId_2478_);
v___x_2517_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2515_);
lean_ctor_set(v___x_2517_, 1, v___x_2516_);
v___x_2518_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__5);
v___x_2519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2517_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2519_, v_a_2469_, v_a_2470_);
if (lean_obj_tag(v___x_2520_) == 0)
{
lean_dec_ref_known(v___x_2520_, 1);
v___y_2501_ = v_a_2467_;
v___y_2502_ = v_a_2468_;
v___y_2503_ = v_a_2469_;
v___y_2504_ = v_a_2470_;
goto v___jp_2500_;
}
else
{
lean_dec_ref(v_value_2487_);
lean_dec_ref(v_params_2486_);
lean_del_object(v___x_2481_);
lean_dec_ref(v_args_2479_);
lean_dec(v_fvarId_2478_);
return v___x_2520_;
}
}
v___jp_2488_:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___x_2493_ = lean_unsigned_to_nat(0u);
v___x_2494_ = lean_array_get_size(v_params_2486_);
v___x_2495_ = lean_unsigned_to_nat(1u);
v___x_2496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2493_);
lean_ctor_set(v___x_2496_, 1, v___x_2494_);
lean_ctor_set(v___x_2496_, 2, v___x_2495_);
v___x_2497_ = lean_box(0);
v___x_2498_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2486_, v_args_2479_, v___x_2496_, v___x_2497_, v___x_2493_, v___y_2490_);
lean_dec_ref_known(v___x_2496_, 3);
lean_dec_ref(v_args_2479_);
lean_dec_ref(v_params_2486_);
if (lean_obj_tag(v___x_2498_) == 0)
{
lean_dec_ref_known(v___x_2498_, 1);
v_code_2466_ = v_value_2487_;
v_a_2467_ = v___y_2489_;
v_a_2468_ = v___y_2490_;
v_a_2469_ = v___y_2491_;
v_a_2470_ = v___y_2492_;
goto _start;
}
else
{
lean_dec_ref(v_value_2487_);
return v___x_2498_;
}
}
v___jp_2500_:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; uint8_t v___x_2507_; 
v___x_2505_ = lean_array_get_size(v_args_2479_);
v___x_2506_ = lean_array_get_size(v_params_2486_);
v___x_2507_ = lean_nat_dec_eq(v___x_2505_, v___x_2506_);
if (v___x_2507_ == 0)
{
lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2511_; 
v___x_2508_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__1);
v___x_2509_ = l_Lean_MessageData_ofName(v_fvarId_2478_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set_tag(v___x_2481_, 7);
lean_ctor_set(v___x_2481_, 1, v___x_2509_);
lean_ctor_set(v___x_2481_, 0, v___x_2508_);
v___x_2511_ = v___x_2481_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2508_);
lean_ctor_set(v_reuseFailAlloc_2513_, 1, v___x_2509_);
v___x_2511_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2511_, v___y_2503_, v___y_2504_);
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_dec_ref_known(v___x_2512_, 1);
v___y_2489_ = v___y_2501_;
v___y_2490_ = v___y_2502_;
v___y_2491_ = v___y_2503_;
v___y_2492_ = v___y_2504_;
goto v___jp_2488_;
}
else
{
lean_dec_ref(v_value_2487_);
lean_dec_ref(v_params_2486_);
lean_dec_ref(v_args_2479_);
return v___x_2512_;
}
}
}
else
{
lean_del_object(v___x_2481_);
lean_dec(v_fvarId_2478_);
v___y_2489_ = v___y_2501_;
v___y_2490_ = v___y_2502_;
v___y_2491_ = v___y_2503_;
v___y_2492_ = v___y_2504_;
goto v___jp_2488_;
}
}
}
else
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2524_; 
lean_dec(v_a_2484_);
lean_dec_ref(v_args_2479_);
v___x_2521_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__7);
v___x_2522_ = l_Lean_MessageData_ofName(v_fvarId_2478_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set_tag(v___x_2481_, 7);
lean_ctor_set(v___x_2481_, 1, v___x_2522_);
lean_ctor_set(v___x_2481_, 0, v___x_2521_);
v___x_2524_ = v___x_2481_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2521_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v___x_2522_);
v___x_2524_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
lean_object* v___x_2525_; 
v___x_2525_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2524_, v_a_2469_, v_a_2470_);
return v___x_2525_;
}
}
}
else
{
lean_object* v_a_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_del_object(v___x_2481_);
lean_dec_ref(v_args_2479_);
lean_dec(v_fvarId_2478_);
v_a_2527_ = lean_ctor_get(v___x_2483_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2483_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_a_2527_);
lean_dec(v___x_2483_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_a_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
}
case 4:
{
lean_object* v_cases_2536_; lean_object* v___x_2537_; 
v_cases_2536_ = lean_ctor_get(v_code_2466_, 0);
lean_inc_ref(v_cases_2536_);
lean_dec_ref_known(v_code_2466_, 1);
v___x_2537_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cases_2536_, v_a_2467_, v_a_2468_, v_a_2469_, v_a_2470_);
return v___x_2537_;
}
case 5:
{
lean_object* v_fvarId_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2575_; 
v_fvarId_2538_ = lean_ctor_get(v_code_2466_, 0);
v_isSharedCheck_2575_ = !lean_is_exclusive(v_code_2466_);
if (v_isSharedCheck_2575_ == 0)
{
v___x_2540_ = v_code_2466_;
v_isShared_2541_ = v_isSharedCheck_2575_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_fvarId_2538_);
lean_dec(v_code_2466_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2575_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2542_; lean_object* v_stmts_2543_; lean_object* v_fresh_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2574_; 
v___x_2542_ = lean_st_ref_take(v_a_2468_);
v_stmts_2543_ = lean_ctor_get(v___x_2542_, 0);
v_fresh_2544_ = lean_ctor_get(v___x_2542_, 1);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2542_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2546_ = v___x_2542_;
v_isShared_2547_ = v_isSharedCheck_2574_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_fresh_2544_);
lean_inc(v_stmts_2543_);
lean_dec(v___x_2542_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2574_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2551_; 
v___x_2548_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__9));
v___x_2549_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2538_);
if (v_isShared_2541_ == 0)
{
lean_ctor_set_tag(v___x_2540_, 1);
lean_ctor_set(v___x_2540_, 0, v___x_2549_);
v___x_2551_ = v___x_2540_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v___x_2549_);
v___x_2551_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2552_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2548_);
lean_ctor_set(v___x_2552_, 1, v___x_2551_);
v___x_2553_ = lean_array_push(v_stmts_2543_, v___x_2552_);
if (v_isShared_2547_ == 0)
{
lean_ctor_set(v___x_2546_, 0, v___x_2553_);
v___x_2555_ = v___x_2546_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2572_, 1, v_fresh_2544_);
v___x_2555_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v_stmts_2558_; lean_object* v_fresh_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2571_; 
v___x_2556_ = lean_st_ref_set(v_a_2468_, v___x_2555_);
v___x_2557_ = lean_st_ref_take(v_a_2468_);
v_stmts_2558_ = lean_ctor_get(v___x_2557_, 0);
v_fresh_2559_ = lean_ctor_get(v___x_2557_, 1);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2561_ = v___x_2557_;
v_isShared_2562_ = v_isSharedCheck_2571_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_fresh_2559_);
lean_inc(v_stmts_2558_);
lean_dec(v___x_2557_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2571_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2566_; 
v___x_2563_ = lean_box(10);
v___x_2564_ = lean_array_push(v_stmts_2558_, v___x_2563_);
if (v_isShared_2562_ == 0)
{
lean_ctor_set(v___x_2561_, 0, v___x_2564_);
v___x_2566_ = v___x_2561_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v___x_2564_);
lean_ctor_set(v_reuseFailAlloc_2570_, 1, v_fresh_2559_);
v___x_2566_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2567_ = lean_st_ref_set(v_a_2468_, v___x_2566_);
v___x_2568_ = lean_box(0);
v___x_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
return v___x_2569_;
}
}
}
}
}
}
}
case 6:
{
lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2596_; 
v_isSharedCheck_2596_ = !lean_is_exclusive(v_code_2466_);
if (v_isSharedCheck_2596_ == 0)
{
lean_object* v_unused_2597_; 
v_unused_2597_ = lean_ctor_get(v_code_2466_, 0);
lean_dec(v_unused_2597_);
v___x_2577_ = v_code_2466_;
v_isShared_2578_ = v_isSharedCheck_2596_;
goto v_resetjp_2576_;
}
else
{
lean_dec(v_code_2466_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2596_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2579_; lean_object* v_stmts_2580_; lean_object* v_fresh_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2595_; 
v___x_2579_ = lean_st_ref_take(v_a_2468_);
v_stmts_2580_ = lean_ctor_get(v___x_2579_, 0);
v_fresh_2581_ = lean_ctor_get(v___x_2579_, 1);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2583_ = v___x_2579_;
v_isShared_2584_ = v_isSharedCheck_2595_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_fresh_2581_);
lean_inc(v_stmts_2580_);
lean_dec(v___x_2579_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2595_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2585_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__13);
v___x_2586_ = lean_array_push(v_stmts_2580_, v___x_2585_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v___x_2586_);
v___x_2588_ = v___x_2583_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2586_);
lean_ctor_set(v_reuseFailAlloc_2594_, 1, v_fresh_2581_);
v___x_2588_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2592_; 
v___x_2589_ = lean_st_ref_set(v_a_2468_, v___x_2588_);
v___x_2590_ = lean_box(0);
if (v_isShared_2578_ == 0)
{
lean_ctor_set_tag(v___x_2577_, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2590_);
v___x_2592_ = v___x_2577_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v___x_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_2598_; lean_object* v_i_2599_; lean_object* v_y_2600_; lean_object* v_k_2601_; lean_object* v___x_2602_; lean_object* v_stmts_2603_; lean_object* v_fresh_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2618_; 
v_fvarId_2598_ = lean_ctor_get(v_code_2466_, 0);
lean_inc(v_fvarId_2598_);
v_i_2599_ = lean_ctor_get(v_code_2466_, 1);
lean_inc(v_i_2599_);
v_y_2600_ = lean_ctor_get(v_code_2466_, 2);
lean_inc(v_y_2600_);
v_k_2601_ = lean_ctor_get(v_code_2466_, 3);
lean_inc_ref(v_k_2601_);
lean_dec_ref_known(v_code_2466_, 4);
v___x_2602_ = lean_st_ref_take(v_a_2468_);
v_stmts_2603_ = lean_ctor_get(v___x_2602_, 0);
v_fresh_2604_ = lean_ctor_get(v___x_2602_, 1);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2606_ = v___x_2602_;
v_isShared_2607_ = v_isSharedCheck_2618_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_fresh_2604_);
lean_inc(v_stmts_2603_);
lean_dec(v___x_2602_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2618_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2614_; 
v___x_2608_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2598_);
v___x_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2608_);
v___x_2610_ = l_Lean_Compiler_LCNF_EmitYul_argToExpr(v_y_2600_);
v___x_2611_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2609_, v_i_2599_, v___x_2610_);
lean_dec(v_i_2599_);
v___x_2612_ = lean_array_push(v_stmts_2603_, v___x_2611_);
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 0, v___x_2612_);
v___x_2614_ = v___x_2606_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2617_, 1, v_fresh_2604_);
v___x_2614_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_st_ref_set(v_a_2468_, v___x_2614_);
v_code_2466_ = v_k_2601_;
goto _start;
}
}
}
case 8:
{
lean_object* v_fvarId_2619_; lean_object* v_i_2620_; lean_object* v_y_2621_; lean_object* v_k_2622_; lean_object* v___x_2623_; lean_object* v_stmts_2624_; lean_object* v_fresh_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2640_; 
v_fvarId_2619_ = lean_ctor_get(v_code_2466_, 0);
lean_inc(v_fvarId_2619_);
v_i_2620_ = lean_ctor_get(v_code_2466_, 1);
lean_inc(v_i_2620_);
v_y_2621_ = lean_ctor_get(v_code_2466_, 2);
lean_inc(v_y_2621_);
v_k_2622_ = lean_ctor_get(v_code_2466_, 3);
lean_inc_ref(v_k_2622_);
lean_dec_ref_known(v_code_2466_, 4);
v___x_2623_ = lean_st_ref_take(v_a_2468_);
v_stmts_2624_ = lean_ctor_get(v___x_2623_, 0);
v_fresh_2625_ = lean_ctor_get(v___x_2623_, 1);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2627_ = v___x_2623_;
v_isShared_2628_ = v_isSharedCheck_2640_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_fresh_2625_);
lean_inc(v_stmts_2624_);
lean_dec(v___x_2623_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2640_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2636_; 
v___x_2629_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2619_);
v___x_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
v___x_2631_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2621_);
v___x_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
v___x_2633_ = l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt(v___x_2630_, v_i_2620_, v___x_2632_);
lean_dec(v_i_2620_);
v___x_2634_ = lean_array_push(v_stmts_2624_, v___x_2633_);
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 0, v___x_2634_);
v___x_2636_ = v___x_2627_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2634_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v_fresh_2625_);
v___x_2636_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
lean_object* v___x_2637_; 
v___x_2637_ = lean_st_ref_set(v_a_2468_, v___x_2636_);
v_code_2466_ = v_k_2622_;
goto _start;
}
}
}
case 9:
{
lean_object* v_fvarId_2641_; lean_object* v_offset_2642_; lean_object* v_y_2643_; lean_object* v_k_2644_; lean_object* v___x_2645_; lean_object* v_stmts_2646_; lean_object* v_fresh_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2673_; 
v_fvarId_2641_ = lean_ctor_get(v_code_2466_, 0);
lean_inc(v_fvarId_2641_);
v_offset_2642_ = lean_ctor_get(v_code_2466_, 2);
lean_inc(v_offset_2642_);
v_y_2643_ = lean_ctor_get(v_code_2466_, 3);
lean_inc(v_y_2643_);
v_k_2644_ = lean_ctor_get(v_code_2466_, 5);
lean_inc_ref(v_k_2644_);
lean_dec_ref_known(v_code_2466_, 6);
v___x_2645_ = lean_st_ref_take(v_a_2468_);
v_stmts_2646_ = lean_ctor_get(v___x_2645_, 0);
v_fresh_2647_ = lean_ctor_get(v___x_2645_, 1);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2649_ = v___x_2645_;
v_isShared_2650_ = v_isSharedCheck_2673_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_fresh_2647_);
lean_inc(v_stmts_2646_);
lean_dec(v___x_2645_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2673_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v_addr_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2669_; 
v___x_2651_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2641_);
v___x_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
v___x_2653_ = lean_unsigned_to_nat(2u);
v___x_2654_ = lean_mk_empty_array_with_capacity(v___x_2653_);
lean_inc_ref(v___x_2654_);
v___x_2655_ = lean_array_push(v___x_2654_, v___x_2652_);
v___x_2656_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_2657_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v_offset_2642_);
v___x_2658_ = lean_array_push(v___x_2655_, v___x_2657_);
v_addr_2659_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_addr_2659_, 0, v___x_2656_);
lean_ctor_set(v_addr_2659_, 1, v___x_2658_);
v___x_2660_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2661_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_y_2643_);
v___x_2662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
v___x_2663_ = lean_array_push(v___x_2654_, v_addr_2659_);
v___x_2664_ = lean_array_push(v___x_2663_, v___x_2662_);
v___x_2665_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2660_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2665_);
v___x_2667_ = lean_array_push(v_stmts_2646_, v___x_2666_);
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 0, v___x_2667_);
v___x_2669_ = v___x_2649_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2667_);
lean_ctor_set(v_reuseFailAlloc_2672_, 1, v_fresh_2647_);
v___x_2669_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_st_ref_set(v_a_2468_, v___x_2669_);
v_code_2466_ = v_k_2644_;
goto _start;
}
}
}
case 10:
{
lean_object* v_fvarId_2674_; lean_object* v_cidx_2675_; lean_object* v_k_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v_stmts_2680_; lean_object* v_fresh_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2700_; 
v_fvarId_2674_ = lean_ctor_get(v_code_2466_, 0);
lean_inc(v_fvarId_2674_);
v_cidx_2675_ = lean_ctor_get(v_code_2466_, 1);
lean_inc(v_cidx_2675_);
v_k_2676_ = lean_ctor_get(v_code_2466_, 2);
lean_inc_ref(v_k_2676_);
lean_dec_ref_known(v_code_2466_, 3);
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr(v_cidx_2675_, v___x_2677_, v___x_2677_);
v___x_2679_ = lean_st_ref_take(v_a_2468_);
v_stmts_2680_ = lean_ctor_get(v___x_2679_, 0);
v_fresh_2681_ = lean_ctor_get(v___x_2679_, 1);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2683_ = v___x_2679_;
v_isShared_2684_ = v_isSharedCheck_2700_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_fresh_2681_);
lean_inc(v_stmts_2680_);
lean_dec(v___x_2679_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2700_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2696_; 
v___x_2685_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_2686_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2674_);
v___x_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
v___x_2688_ = lean_unsigned_to_nat(2u);
v___x_2689_ = lean_mk_empty_array_with_capacity(v___x_2688_);
v___x_2690_ = lean_array_push(v___x_2689_, v___x_2687_);
v___x_2691_ = lean_array_push(v___x_2690_, v___x_2678_);
v___x_2692_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2685_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2692_);
v___x_2694_ = lean_array_push(v_stmts_2680_, v___x_2693_);
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 0, v___x_2694_);
v___x_2696_ = v___x_2683_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2694_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v_fresh_2681_);
v___x_2696_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
lean_object* v___x_2697_; 
v___x_2697_ = lean_st_ref_set(v_a_2468_, v___x_2696_);
v_code_2466_ = v_k_2676_;
goto _start;
}
}
}
case 11:
{
lean_object* v_k_2701_; 
v_k_2701_ = lean_ctor_get(v_code_2466_, 2);
lean_inc_ref(v_k_2701_);
lean_dec_ref_known(v_code_2466_, 3);
v_code_2466_ = v_k_2701_;
goto _start;
}
case 12:
{
lean_object* v_k_2703_; 
v_k_2703_ = lean_ctor_get(v_code_2466_, 3);
lean_inc_ref(v_k_2703_);
lean_dec_ref_known(v_code_2466_, 4);
v_code_2466_ = v_k_2703_;
goto _start;
}
default: 
{
lean_object* v_k_2705_; 
v_k_2705_ = lean_ctor_get(v_code_2466_, 1);
lean_inc_ref(v_k_2705_);
lean_dec_ref(v_code_2466_);
v_code_2466_ = v_k_2705_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed(lean_object* v_code_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2707_, v_a_2708_, v_a_2709_, v_a_2710_, v_a_2711_);
lean_dec(v_a_2711_);
lean_dec_ref(v_a_2710_);
lean_dec(v_a_2709_);
lean_dec_ref(v_a_2708_);
return v_res_2713_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__0));
v___x_2716_ = l_Lean_stringToMessageData(v___x_2715_);
return v___x_2716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(lean_object* v_as_2717_, size_t v_sz_2718_, size_t v_i_2719_, lean_object* v_b_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
lean_object* v_c_2727_; uint8_t v___x_2732_; 
v___x_2732_ = lean_usize_dec_lt(v_i_2719_, v_sz_2718_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; 
v___x_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2733_, 0, v_b_2720_);
return v___x_2733_;
}
else
{
lean_object* v_a_2734_; lean_object* v___y_2736_; 
v_a_2734_ = lean_array_uget(v_as_2717_, v_i_2719_);
switch(lean_obj_tag(v_a_2734_))
{
case 0:
{
lean_object* v_code_2783_; 
v_code_2783_ = lean_ctor_get(v_a_2734_, 2);
lean_inc_ref(v_code_2783_);
v___y_2736_ = v_code_2783_;
goto v___jp_2735_;
}
case 1:
{
lean_object* v_code_2784_; 
v_code_2784_ = lean_ctor_get(v_a_2734_, 1);
lean_inc_ref(v_code_2784_);
v___y_2736_ = v_code_2784_;
goto v___jp_2735_;
}
default: 
{
lean_object* v_code_2785_; 
v_code_2785_ = lean_ctor_get(v_a_2734_, 0);
lean_inc_ref(v_code_2785_);
v___y_2736_ = v_code_2785_;
goto v___jp_2735_;
}
}
v___jp_2735_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2737_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___boxed), 6, 1);
lean_closure_set(v___x_2737_, 0, v___y_2736_);
v___x_2738_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___x_2737_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
if (lean_obj_tag(v___x_2738_) == 0)
{
switch(lean_obj_tag(v_a_2734_))
{
case 0:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
lean_dec_ref_known(v_a_2734_, 3);
lean_dec_ref_known(v___x_2738_, 1);
v___x_2739_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___closed__1);
v___x_2740_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_EmitYul_getStoredType_spec__0___redArg(v___x_2739_, v___y_2723_, v___y_2724_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2741_);
lean_dec_ref_known(v___x_2740_, 1);
v_c_2727_ = v_a_2741_;
goto v___jp_2726_;
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec_ref(v_b_2720_);
v_a_2742_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2740_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2740_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
case 1:
{
lean_object* v_info_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2762_; 
v_info_2750_ = lean_ctor_get(v_a_2734_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v_a_2734_);
if (v_isSharedCheck_2762_ == 0)
{
lean_object* v_unused_2763_; 
v_unused_2763_ = lean_ctor_get(v_a_2734_, 1);
lean_dec(v_unused_2763_);
v___x_2752_ = v_a_2734_;
v_isShared_2753_ = v_isSharedCheck_2762_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_info_2750_);
lean_dec(v_a_2734_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2762_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v_a_2754_; lean_object* v_cidx_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2760_; 
v_a_2754_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2738_, 1);
v_cidx_2755_ = lean_ctor_get(v_info_2750_, 1);
lean_inc(v_cidx_2755_);
lean_dec_ref(v_info_2750_);
v___x_2756_ = l_Lean_Compiler_Yul_Literal_natLit(v_cidx_2755_);
v___x_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2756_);
v___x_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2758_, 0, v_a_2754_);
if (v_isShared_2753_ == 0)
{
lean_ctor_set_tag(v___x_2752_, 0);
lean_ctor_set(v___x_2752_, 1, v___x_2758_);
lean_ctor_set(v___x_2752_, 0, v___x_2757_);
v___x_2760_ = v___x_2752_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v___x_2757_);
lean_ctor_set(v_reuseFailAlloc_2761_, 1, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
v_c_2727_ = v___x_2760_;
goto v___jp_2726_;
}
}
}
default: 
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2773_; 
v_a_2764_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2764_);
lean_dec_ref_known(v___x_2738_, 1);
v_isSharedCheck_2773_ = !lean_is_exclusive(v_a_2734_);
if (v_isSharedCheck_2773_ == 0)
{
lean_object* v_unused_2774_; 
v_unused_2774_ = lean_ctor_get(v_a_2734_, 0);
lean_dec(v_unused_2774_);
v___x_2766_ = v_a_2734_;
v_isShared_2767_ = v_isSharedCheck_2773_;
goto v_resetjp_2765_;
}
else
{
lean_dec(v_a_2734_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2773_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2768_; lean_object* v___x_2770_; 
v___x_2768_ = lean_box(0);
if (v_isShared_2767_ == 0)
{
lean_ctor_set_tag(v___x_2766_, 0);
lean_ctor_set(v___x_2766_, 0, v_a_2764_);
v___x_2770_ = v___x_2766_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2764_);
v___x_2770_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2768_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
v_c_2727_ = v___x_2771_;
goto v___jp_2726_;
}
}
}
}
}
else
{
lean_object* v_a_2775_; lean_object* v___x_2777_; uint8_t v_isShared_2778_; uint8_t v_isSharedCheck_2782_; 
lean_dec(v_a_2734_);
lean_dec_ref(v_b_2720_);
v_a_2775_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2777_ = v___x_2738_;
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
else
{
lean_inc(v_a_2775_);
lean_dec(v___x_2738_);
v___x_2777_ = lean_box(0);
v_isShared_2778_ = v_isSharedCheck_2782_;
goto v_resetjp_2776_;
}
v_resetjp_2776_:
{
lean_object* v___x_2780_; 
if (v_isShared_2778_ == 0)
{
v___x_2780_ = v___x_2777_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_a_2775_);
v___x_2780_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2779_;
}
v_reusejp_2779_:
{
return v___x_2780_;
}
}
}
}
}
v___jp_2726_:
{
lean_object* v___x_2728_; size_t v___x_2729_; size_t v___x_2730_; 
v___x_2728_ = lean_array_push(v_b_2720_, v_c_2727_);
v___x_2729_ = ((size_t)1ULL);
v___x_2730_ = lean_usize_add(v_i_2719_, v___x_2729_);
v_i_2719_ = v___x_2730_;
v_b_2720_ = v___x_2728_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases(lean_object* v_cs_2786_, lean_object* v_a_2787_, lean_object* v_a_2788_, lean_object* v_a_2789_, lean_object* v_a_2790_){
_start:
{
lean_object* v_discr_2792_; lean_object* v_alts_2793_; lean_object* v_yulCases_2794_; size_t v_sz_2795_; size_t v___x_2796_; lean_object* v___x_2797_; 
v_discr_2792_ = lean_ctor_get(v_cs_2786_, 2);
lean_inc(v_discr_2792_);
v_alts_2793_ = lean_ctor_get(v_cs_2786_, 3);
lean_inc_ref(v_alts_2793_);
lean_dec_ref(v_cs_2786_);
v_yulCases_2794_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__0));
v_sz_2795_ = lean_array_size(v_alts_2793_);
v___x_2796_ = ((size_t)0ULL);
v___x_2797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_alts_2793_, v_sz_2795_, v___x_2796_, v_yulCases_2794_, v_a_2787_, v_a_2788_, v_a_2789_, v_a_2790_);
lean_dec_ref(v_alts_2793_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; uint8_t v_isShared_2801_; uint8_t v_isSharedCheck_2826_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2800_ = v___x_2797_;
v_isShared_2801_ = v_isSharedCheck_2826_;
goto v_resetjp_2799_;
}
else
{
lean_inc(v_a_2798_);
lean_dec(v___x_2797_);
v___x_2800_ = lean_box(0);
v_isShared_2801_ = v_isSharedCheck_2826_;
goto v_resetjp_2799_;
}
v_resetjp_2799_:
{
lean_object* v___x_2802_; lean_object* v_stmts_2803_; lean_object* v_fresh_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2825_; 
v___x_2802_ = lean_st_ref_take(v_a_2788_);
v_stmts_2803_ = lean_ctor_get(v___x_2802_, 0);
v_fresh_2804_ = lean_ctor_get(v___x_2802_, 1);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2806_ = v___x_2802_;
v_isShared_2807_ = v_isSharedCheck_2825_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_fresh_2804_);
lean_inc(v_stmts_2803_);
lean_dec(v___x_2802_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2825_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v_discrTag_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2818_; 
v___x_2808_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_2809_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_discr_2792_);
v___x_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2810_, 0, v___x_2809_);
v___x_2811_ = lean_unsigned_to_nat(1u);
v___x_2812_ = lean_mk_empty_array_with_capacity(v___x_2811_);
v___x_2813_ = lean_array_push(v___x_2812_, v___x_2810_);
v_discrTag_2814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_discrTag_2814_, 0, v___x_2808_);
lean_ctor_set(v_discrTag_2814_, 1, v___x_2813_);
v___x_2815_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2815_, 0, v_discrTag_2814_);
lean_ctor_set(v___x_2815_, 1, v_a_2798_);
v___x_2816_ = lean_array_push(v_stmts_2803_, v___x_2815_);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 0, v___x_2816_);
v___x_2818_ = v___x_2806_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2816_);
lean_ctor_set(v_reuseFailAlloc_2824_, 1, v_fresh_2804_);
v___x_2818_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2822_; 
v___x_2819_ = lean_st_ref_set(v_a_2788_, v___x_2818_);
v___x_2820_ = lean_box(0);
if (v_isShared_2801_ == 0)
{
lean_ctor_set(v___x_2800_, 0, v___x_2820_);
v___x_2822_ = v___x_2800_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v___x_2820_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_discr_2792_);
v_a_2827_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2797_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2797_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitCases___boxed(lean_object* v_cs_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lean_Compiler_LCNF_EmitYul_emitCases(v_cs_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
lean_dec(v_a_2839_);
lean_dec_ref(v_a_2838_);
lean_dec(v_a_2837_);
lean_dec_ref(v_a_2836_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2___boxed(lean_object* v_as_2842_, lean_object* v_sz_2843_, lean_object* v_i_2844_, lean_object* v_b_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
size_t v_sz_boxed_2851_; size_t v_i_boxed_2852_; lean_object* v_res_2853_; 
v_sz_boxed_2851_ = lean_unbox_usize(v_sz_2843_);
lean_dec(v_sz_2843_);
v_i_boxed_2852_ = lean_unbox_usize(v_i_2844_);
lean_dec(v_i_2844_);
v_res_2853_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCases_spec__2(v_as_2842_, v_sz_boxed_2851_, v_i_boxed_2852_, v_b_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec_ref(v_as_2842_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(lean_object* v_params_2854_, lean_object* v_args_2855_, lean_object* v_range_2856_, lean_object* v_b_2857_, lean_object* v_i_2858_, lean_object* v_hs_2859_, lean_object* v_hl_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v___x_2866_; 
v___x_2866_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___redArg(v_params_2854_, v_args_2855_, v_range_2856_, v_b_2857_, v_i_2858_, v___y_2862_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0___boxed(lean_object* v_params_2867_, lean_object* v_args_2868_, lean_object* v_range_2869_, lean_object* v_b_2870_, lean_object* v_i_2871_, lean_object* v_hs_2872_, lean_object* v_hl_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lean_Compiler_LCNF_EmitYul_emitCode_spec__0(v_params_2867_, v_args_2868_, v_range_2869_, v_b_2870_, v_i_2871_, v_hs_2872_, v_hl_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec_ref(v_range_2869_);
lean_dec_ref(v_args_2868_);
lean_dec_ref(v_params_2867_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(lean_object* v_code_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = l_Lean_Compiler_LCNF_EmitYul_emitCode(v_code_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2907_; 
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2907_ == 0)
{
lean_object* v_unused_2908_; 
v_unused_2908_ = lean_ctor_get(v___x_2886_, 0);
lean_dec(v_unused_2908_);
v___x_2888_ = v___x_2886_;
v_isShared_2889_ = v_isSharedCheck_2907_;
goto v_resetjp_2887_;
}
else
{
lean_dec(v___x_2886_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2907_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v___x_2890_; lean_object* v_stmts_2891_; lean_object* v_fresh_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2906_; 
v___x_2890_ = lean_st_ref_take(v___y_2882_);
v_stmts_2891_ = lean_ctor_get(v___x_2890_, 0);
v_fresh_2892_ = lean_ctor_get(v___x_2890_, 1);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2894_ = v___x_2890_;
v_isShared_2895_ = v_isSharedCheck_2906_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_fresh_2892_);
lean_inc(v_stmts_2891_);
lean_dec(v___x_2890_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2906_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2899_; 
v___x_2896_ = lean_box(10);
v___x_2897_ = lean_array_push(v_stmts_2891_, v___x_2896_);
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v___x_2897_);
v___x_2899_ = v___x_2894_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_2905_, 1, v_fresh_2892_);
v___x_2899_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2903_; 
v___x_2900_ = lean_st_ref_set(v___y_2882_, v___x_2899_);
v___x_2901_ = lean_box(0);
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 0, v___x_2901_);
v___x_2903_ = v___x_2888_;
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
}
else
{
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed(lean_object* v_code_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0(v_code_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(lean_object* v_as_2916_, size_t v_i_2917_, size_t v_stop_2918_, lean_object* v_b_2919_){
_start:
{
lean_object* v___y_2921_; uint8_t v___x_2925_; 
v___x_2925_ = lean_usize_dec_eq(v_i_2917_, v_stop_2918_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; uint8_t v___y_2928_; lean_object* v_type_2930_; uint8_t v___x_2931_; 
v___x_2926_ = lean_array_uget_borrowed(v_as_2916_, v_i_2917_);
v_type_2930_ = lean_ctor_get(v___x_2926_, 2);
v___x_2931_ = l_Lean_Expr_isVoid(v_type_2930_);
if (v___x_2931_ == 0)
{
uint8_t v___x_2932_; 
v___x_2932_ = l_Lean_Expr_isErased(v_type_2930_);
v___y_2928_ = v___x_2932_;
goto v___jp_2927_;
}
else
{
v___y_2928_ = v___x_2931_;
goto v___jp_2927_;
}
v___jp_2927_:
{
if (v___y_2928_ == 0)
{
lean_object* v___x_2929_; 
lean_inc(v___x_2926_);
v___x_2929_ = lean_array_push(v_b_2919_, v___x_2926_);
v___y_2921_ = v___x_2929_;
goto v___jp_2920_;
}
else
{
v___y_2921_ = v_b_2919_;
goto v___jp_2920_;
}
}
}
else
{
return v_b_2919_;
}
v___jp_2920_:
{
size_t v___x_2922_; size_t v___x_2923_; 
v___x_2922_ = ((size_t)1ULL);
v___x_2923_ = lean_usize_add(v_i_2917_, v___x_2922_);
v_i_2917_ = v___x_2923_;
v_b_2919_ = v___y_2921_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1___boxed(lean_object* v_as_2933_, lean_object* v_i_2934_, lean_object* v_stop_2935_, lean_object* v_b_2936_){
_start:
{
size_t v_i_boxed_2937_; size_t v_stop_boxed_2938_; lean_object* v_res_2939_; 
v_i_boxed_2937_ = lean_unbox_usize(v_i_2934_);
lean_dec(v_i_2934_);
v_stop_boxed_2938_ = lean_unbox_usize(v_stop_2935_);
lean_dec(v_stop_2935_);
v_res_2939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_as_2933_, v_i_boxed_2937_, v_stop_boxed_2938_, v_b_2936_);
lean_dec_ref(v_as_2933_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(size_t v_sz_2940_, size_t v_i_2941_, lean_object* v_bs_2942_){
_start:
{
uint8_t v___x_2943_; 
v___x_2943_ = lean_usize_dec_lt(v_i_2941_, v_sz_2940_);
if (v___x_2943_ == 0)
{
return v_bs_2942_;
}
else
{
lean_object* v_v_2944_; lean_object* v_fvarId_2945_; lean_object* v___x_2946_; lean_object* v_bs_x27_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; size_t v___x_2950_; size_t v___x_2951_; lean_object* v___x_2952_; 
v_v_2944_ = lean_array_uget_borrowed(v_bs_2942_, v_i_2941_);
v_fvarId_2945_ = lean_ctor_get(v_v_2944_, 0);
lean_inc(v_fvarId_2945_);
v___x_2946_ = lean_unsigned_to_nat(0u);
v_bs_x27_2947_ = lean_array_uset(v_bs_2942_, v_i_2941_, v___x_2946_);
v___x_2948_ = l_Lean_Compiler_LCNF_EmitYul_yulIdent(v_fvarId_2945_);
v___x_2949_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2948_);
v___x_2950_ = ((size_t)1ULL);
v___x_2951_ = lean_usize_add(v_i_2941_, v___x_2950_);
v___x_2952_ = lean_array_uset(v_bs_x27_2947_, v_i_2941_, v___x_2949_);
v_i_2941_ = v___x_2951_;
v_bs_2942_ = v___x_2952_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0___boxed(lean_object* v_sz_2954_, lean_object* v_i_2955_, lean_object* v_bs_2956_){
_start:
{
size_t v_sz_boxed_2957_; size_t v_i_boxed_2958_; lean_object* v_res_2959_; 
v_sz_boxed_2957_ = lean_unbox_usize(v_sz_2954_);
lean_dec(v_sz_2954_);
v_i_boxed_2958_ = lean_unbox_usize(v_i_2955_);
lean_dec(v_i_2955_);
v_res_2959_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_boxed_2957_, v_i_boxed_2958_, v_bs_2956_);
return v_res_2959_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2960_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__8));
v___x_2961_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_2960_);
return v___x_2961_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1(void){
_start:
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v_returnVars_2965_; 
v___x_2962_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__0);
v___x_2963_ = lean_unsigned_to_nat(1u);
v___x_2964_ = lean_mk_empty_array_with_capacity(v___x_2963_);
v_returnVars_2965_ = lean_array_push(v___x_2964_, v___x_2962_);
return v_returnVars_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl(lean_object* v_decl_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_){
_start:
{
lean_object* v_value_2974_; 
v_value_2974_ = lean_ctor_get(v_decl_2968_, 1);
lean_inc_ref(v_value_2974_);
if (lean_obj_tag(v_value_2974_) == 0)
{
lean_object* v_toSignature_2975_; lean_object* v_code_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_3041_; 
v_toSignature_2975_ = lean_ctor_get(v_decl_2968_, 0);
lean_inc_ref(v_toSignature_2975_);
lean_dec_ref(v_decl_2968_);
v_code_2976_ = lean_ctor_get(v_value_2974_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v_value_2974_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_2978_ = v_value_2974_;
v_isShared_2979_ = v_isSharedCheck_3041_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_code_2976_);
lean_dec(v_value_2974_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_3041_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v_name_2980_; lean_object* v_params_2981_; lean_object* v___f_2982_; lean_object* v_fnName_2983_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___y_3019_; lean_object* v___x_3032_; uint8_t v___x_3033_; 
v_name_2980_ = lean_ctor_get(v_toSignature_2975_, 0);
lean_inc_n(v_name_2980_, 2);
v_params_2981_ = lean_ctor_get(v_toSignature_2975_, 3);
lean_inc_ref(v_params_2981_);
lean_dec_ref(v_toSignature_2975_);
lean_inc_ref(v_code_2976_);
v___f_2982_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2982_, 0, v_code_2976_);
v_fnName_2983_ = l_Lean_Compiler_LCNF_EmitYul_yulFnName(v_name_2980_);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = lean_array_get_size(v_params_2981_);
v___x_3032_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__2));
v___x_3033_ = lean_nat_dec_lt(v___x_3016_, v___x_3017_);
if (v___x_3033_ == 0)
{
v___y_3019_ = v___x_3032_;
goto v___jp_3018_;
}
else
{
uint8_t v___x_3034_; 
v___x_3034_ = lean_nat_dec_le(v___x_3017_, v___x_3017_);
if (v___x_3034_ == 0)
{
if (v___x_3033_ == 0)
{
v___y_3019_ = v___x_3032_;
goto v___jp_3018_;
}
else
{
size_t v___x_3035_; size_t v___x_3036_; lean_object* v___x_3037_; 
v___x_3035_ = ((size_t)0ULL);
v___x_3036_ = lean_usize_of_nat(v___x_3017_);
v___x_3037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2981_, v___x_3035_, v___x_3036_, v___x_3032_);
v___y_3019_ = v___x_3037_;
goto v___jp_3018_;
}
}
else
{
size_t v___x_3038_; size_t v___x_3039_; lean_object* v___x_3040_; 
v___x_3038_ = ((size_t)0ULL);
v___x_3039_ = lean_usize_of_nat(v___x_3017_);
v___x_3040_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__1(v_params_2981_, v___x_3038_, v___x_3039_, v___x_3032_);
v___y_3019_ = v___x_3040_;
goto v___jp_3018_;
}
}
v___jp_2984_:
{
lean_object* v_localDecls_2989_; lean_object* v_otherModuleDecls_2990_; lean_object* v_modName_2991_; lean_object* v_fvarTypes_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v_localDecls_2989_ = lean_ctor_get(v_a_2969_, 0);
v_otherModuleDecls_2990_ = lean_ctor_get(v_a_2969_, 1);
v_modName_2991_ = lean_ctor_get(v_a_2969_, 2);
v_fvarTypes_2992_ = l_Lean_Compiler_LCNF_EmitYul_collectCodeTypes(v_code_2976_, v___y_2988_);
lean_inc(v_modName_2991_);
lean_inc_ref(v_otherModuleDecls_2990_);
lean_inc_ref(v_localDecls_2989_);
v___x_2993_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2993_, 0, v_localDecls_2989_);
lean_ctor_set(v___x_2993_, 1, v_otherModuleDecls_2990_);
lean_ctor_set(v___x_2993_, 2, v_modName_2991_);
lean_ctor_set(v___x_2993_, 3, v_name_2980_);
lean_ctor_set(v___x_2993_, 4, v_fvarTypes_2992_);
lean_ctor_set(v___x_2993_, 5, v___y_2985_);
v___x_2994_ = l_Lean_Compiler_LCNF_EmitYul_captureStmts(v___f_2982_, v___x_2993_, v_a_2970_, v_a_2971_, v_a_2972_);
lean_dec_ref_known(v___x_2993_, 6);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3007_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2997_ = v___x_2994_;
v_isShared_2998_ = v_isSharedCheck_3007_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2994_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3007_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v_a_2995_);
v___x_3000_ = v___x_2978_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3006_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3004_; 
lean_inc_ref(v___y_2987_);
v___x_3001_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3001_, 0, v_fnName_2983_);
lean_ctor_set(v___x_3001_, 1, v___y_2986_);
lean_ctor_set(v___x_3001_, 2, v___y_2987_);
lean_ctor_set(v___x_3001_, 3, v___x_3000_);
v___x_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3001_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 0, v___x_3002_);
v___x_3004_ = v___x_2997_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v___x_3002_);
v___x_3004_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
return v___x_3004_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v___y_2986_);
lean_dec_ref(v_fnName_2983_);
lean_del_object(v___x_2978_);
v_a_3008_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2994_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2994_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
v___jp_3018_:
{
size_t v_sz_3020_; size_t v___x_3021_; lean_object* v_paramNames_3022_; lean_object* v_returnVars_3023_; lean_object* v___x_3024_; lean_object* v_joinDecls_3025_; uint8_t v___x_3026_; 
v_sz_3020_ = lean_array_size(v___y_3019_);
v___x_3021_ = ((size_t)0ULL);
v_paramNames_3022_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_emitDecl_spec__0(v_sz_3020_, v___x_3021_, v___y_3019_);
v_returnVars_3023_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitDecl___closed__1);
v___x_3024_ = lean_box(1);
lean_inc_ref(v_code_2976_);
v_joinDecls_3025_ = l_Lean_Compiler_LCNF_EmitYul_collectJoinDecls(v_code_2976_, v___x_3024_);
v___x_3026_ = lean_nat_dec_lt(v___x_3016_, v___x_3017_);
if (v___x_3026_ == 0)
{
lean_dec_ref(v_params_2981_);
v___y_2985_ = v_joinDecls_3025_;
v___y_2986_ = v_paramNames_3022_;
v___y_2987_ = v_returnVars_3023_;
v___y_2988_ = v___x_3024_;
goto v___jp_2984_;
}
else
{
uint8_t v___x_3027_; 
v___x_3027_ = lean_nat_dec_le(v___x_3017_, v___x_3017_);
if (v___x_3027_ == 0)
{
if (v___x_3026_ == 0)
{
lean_dec_ref(v_params_2981_);
v___y_2985_ = v_joinDecls_3025_;
v___y_2986_ = v_paramNames_3022_;
v___y_2987_ = v_returnVars_3023_;
v___y_2988_ = v___x_3024_;
goto v___jp_2984_;
}
else
{
size_t v___x_3028_; lean_object* v___x_3029_; 
v___x_3028_ = lean_usize_of_nat(v___x_3017_);
v___x_3029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2981_, v___x_3021_, v___x_3028_, v___x_3024_);
lean_dec_ref(v_params_2981_);
v___y_2985_ = v_joinDecls_3025_;
v___y_2986_ = v_paramNames_3022_;
v___y_2987_ = v_returnVars_3023_;
v___y_2988_ = v___x_3029_;
goto v___jp_2984_;
}
}
else
{
size_t v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = lean_usize_of_nat(v___x_3017_);
v___x_3031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_EmitYul_collectCodeTypes_spec__0(v_params_2981_, v___x_3021_, v___x_3030_, v___x_3024_);
lean_dec_ref(v_params_2981_);
v___y_2985_ = v_joinDecls_3025_;
v___y_2986_ = v_paramNames_3022_;
v___y_2987_ = v_returnVars_3023_;
v___y_2988_ = v___x_3031_;
goto v___jp_2984_;
}
}
}
}
}
else
{
lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3049_; 
lean_dec_ref(v_decl_2968_);
v_isSharedCheck_3049_ = !lean_is_exclusive(v_value_2974_);
if (v_isSharedCheck_3049_ == 0)
{
lean_object* v_unused_3050_; 
v_unused_3050_ = lean_ctor_get(v_value_2974_, 0);
lean_dec(v_unused_3050_);
v___x_3043_ = v_value_2974_;
v_isShared_3044_ = v_isSharedCheck_3049_;
goto v_resetjp_3042_;
}
else
{
lean_dec(v_value_2974_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3049_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3047_; 
v___x_3045_ = lean_box(0);
if (v_isShared_3044_ == 0)
{
lean_ctor_set_tag(v___x_3043_, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3045_);
v___x_3047_ = v___x_3043_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3045_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitDecl___boxed(lean_object* v_decl_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_decl_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_);
lean_dec(v_a_3055_);
lean_dec_ref(v_a_3054_);
lean_dec(v_a_3053_);
lean_dec_ref(v_a_3052_);
return v_res_3057_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__1));
v___x_3061_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3060_);
return v___x_3061_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3(void){
_start:
{
lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v___x_3062_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__2);
v___x_3063_ = lean_unsigned_to_nat(1u);
v___x_3064_ = lean_mk_empty_array_with_capacity(v___x_3063_);
v___x_3065_ = lean_array_push(v___x_3064_, v___x_3062_);
return v___x_3065_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5(void){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3067_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__4));
v___x_3068_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3067_);
return v___x_3068_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6(void){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3069_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__5);
v___x_3070_ = lean_unsigned_to_nat(1u);
v___x_3071_ = lean_mk_empty_array_with_capacity(v___x_3070_);
v___x_3072_ = lean_array_push(v___x_3071_, v___x_3069_);
return v___x_3072_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9(void){
_start:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; 
v___x_3079_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__8));
v___x_3080_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_3081_ = lean_array_push(v___x_3080_, v___x_3079_);
return v___x_3081_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10(void){
_start:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
v___x_3082_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__9);
v___x_3083_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3084_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3083_);
lean_ctor_set(v___x_3084_, 1, v___x_3082_);
return v___x_3084_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11(void){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3085_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3086_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__10);
v___x_3087_ = lean_unsigned_to_nat(2u);
v___x_3088_ = lean_mk_empty_array_with_capacity(v___x_3087_);
v___x_3089_ = lean_array_push(v___x_3088_, v___x_3086_);
v___x_3090_ = lean_array_push(v___x_3089_, v___x_3085_);
return v___x_3090_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12(void){
_start:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3091_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__11);
v___x_3092_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3093_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
lean_ctor_set(v___x_3093_, 1, v___x_3091_);
return v___x_3093_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13(void){
_start:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3094_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__12);
v___x_3095_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set(v___x_3096_, 1, v___x_3094_);
return v___x_3096_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14(void){
_start:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3097_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__13);
v___x_3098_ = lean_unsigned_to_nat(1u);
v___x_3099_ = lean_mk_empty_array_with_capacity(v___x_3098_);
v___x_3100_ = lean_array_push(v___x_3099_, v___x_3097_);
return v___x_3100_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15(void){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__14);
v___x_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
return v___x_3102_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3103_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__15);
v___x_3104_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3105_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__3);
v___x_3106_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__0));
v___x_3107_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
lean_ctor_set(v___x_3107_, 1, v___x_3105_);
lean_ctor_set(v___x_3107_, 2, v___x_3104_);
lean_ctor_set(v___x_3107_, 3, v___x_3103_);
return v___x_3107_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19(void){
_start:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__18));
v___x_3111_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3110_);
return v___x_3111_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20(void){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3112_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__19);
v___x_3113_ = lean_unsigned_to_nat(1u);
v___x_3114_ = lean_mk_empty_array_with_capacity(v___x_3113_);
v___x_3115_ = lean_array_push(v___x_3114_, v___x_3112_);
return v___x_3115_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22(void){
_start:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3118_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3119_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__3);
v___x_3120_ = lean_array_push(v___x_3119_, v___x_3118_);
return v___x_3120_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3121_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__22);
v___x_3122_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_3123_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
lean_ctor_set(v___x_3123_, 1, v___x_3121_);
return v___x_3123_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24(void){
_start:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; 
v___x_3124_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__23);
v___x_3125_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3126_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
lean_ctor_set(v___x_3126_, 1, v___x_3124_);
return v___x_3126_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25(void){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3127_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__24);
v___x_3128_ = lean_unsigned_to_nat(1u);
v___x_3129_ = lean_mk_empty_array_with_capacity(v___x_3128_);
v___x_3130_ = lean_array_push(v___x_3129_, v___x_3127_);
return v___x_3130_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26(void){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3131_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__25);
v___x_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
return v___x_3132_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27(void){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3133_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__26);
v___x_3134_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3135_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_3136_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__17));
v___x_3137_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3136_);
lean_ctor_set(v___x_3137_, 1, v___x_3135_);
lean_ctor_set(v___x_3137_, 2, v___x_3134_);
lean_ctor_set(v___x_3137_, 3, v___x_3133_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30(void){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__29));
v___x_3141_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3140_);
return v___x_3141_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32(void){
_start:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3143_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__31));
v___x_3144_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3143_);
return v___x_3144_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___x_3145_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__32);
v___x_3146_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__30);
v___x_3147_ = lean_unsigned_to_nat(2u);
v___x_3148_ = lean_mk_empty_array_with_capacity(v___x_3147_);
v___x_3149_ = lean_array_push(v___x_3148_, v___x_3146_);
v___x_3150_ = lean_array_push(v___x_3149_, v___x_3145_);
return v___x_3150_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35(void){
_start:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; 
v___x_3152_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__34));
v___x_3153_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3152_);
return v___x_3153_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36(void){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3154_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3155_ = lean_unsigned_to_nat(1u);
v___x_3156_ = lean_mk_empty_array_with_capacity(v___x_3155_);
v___x_3157_ = lean_array_push(v___x_3156_, v___x_3154_);
return v___x_3157_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3159_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__37));
v___x_3160_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3159_);
return v___x_3160_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39(void){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3161_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__38);
v___x_3162_ = lean_unsigned_to_nat(1u);
v___x_3163_ = lean_mk_empty_array_with_capacity(v___x_3162_);
v___x_3164_ = lean_array_push(v___x_3163_, v___x_3161_);
return v___x_3164_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40(void){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3165_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_3166_ = lean_unsigned_to_nat(1u);
v___x_3167_ = lean_mk_empty_array_with_capacity(v___x_3166_);
v___x_3168_ = lean_array_push(v___x_3167_, v___x_3165_);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41(void){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3169_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__40);
v___x_3170_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3171_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
lean_ctor_set(v___x_3171_, 1, v___x_3169_);
return v___x_3171_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42(void){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3172_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__41);
v___x_3173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3172_);
return v___x_3173_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43(void){
_start:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___x_3174_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__42);
v___x_3175_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__39);
v___x_3176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3175_);
lean_ctor_set(v___x_3176_, 1, v___x_3174_);
return v___x_3176_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46(void){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
v___x_3181_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3182_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_3183_ = lean_unsigned_to_nat(2u);
v___x_3184_ = lean_mk_empty_array_with_capacity(v___x_3183_);
v___x_3185_ = lean_array_push(v___x_3184_, v___x_3182_);
v___x_3186_ = lean_array_push(v___x_3185_, v___x_3181_);
return v___x_3186_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47(void){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3187_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__46);
v___x_3188_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3189_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3188_);
lean_ctor_set(v___x_3189_, 1, v___x_3187_);
return v___x_3189_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48(void){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3190_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3191_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__47);
v___x_3192_ = lean_unsigned_to_nat(2u);
v___x_3193_ = lean_mk_empty_array_with_capacity(v___x_3192_);
v___x_3194_ = lean_array_push(v___x_3193_, v___x_3191_);
v___x_3195_ = lean_array_push(v___x_3194_, v___x_3190_);
return v___x_3195_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__48);
v___x_3197_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3198_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3198_, 0, v___x_3197_);
lean_ctor_set(v___x_3198_, 1, v___x_3196_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3199_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__44));
v___x_3200_ = lean_unsigned_to_nat(2u);
v___x_3201_ = lean_mk_empty_array_with_capacity(v___x_3200_);
v___x_3202_ = lean_array_push(v___x_3201_, v___x_3199_);
return v___x_3202_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51(void){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3203_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__49);
v___x_3204_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_3205_ = lean_array_push(v___x_3204_, v___x_3203_);
return v___x_3205_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3206_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__51);
v___x_3207_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3208_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
lean_ctor_set(v___x_3208_, 1, v___x_3206_);
return v___x_3208_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53(void){
_start:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3209_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__52);
v___x_3210_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_3211_ = lean_unsigned_to_nat(2u);
v___x_3212_ = lean_mk_empty_array_with_capacity(v___x_3211_);
v___x_3213_ = lean_array_push(v___x_3212_, v___x_3210_);
v___x_3214_ = lean_array_push(v___x_3213_, v___x_3209_);
return v___x_3214_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3215_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__53);
v___x_3216_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3217_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___x_3216_);
lean_ctor_set(v___x_3217_, 1, v___x_3215_);
return v___x_3217_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55(void){
_start:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3218_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__54);
v___x_3219_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
return v___x_3219_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57(void){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3222_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__45));
v___x_3223_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__0);
v___x_3224_ = lean_unsigned_to_nat(2u);
v___x_3225_ = lean_mk_empty_array_with_capacity(v___x_3224_);
v___x_3226_ = lean_array_push(v___x_3225_, v___x_3223_);
v___x_3227_ = lean_array_push(v___x_3226_, v___x_3222_);
return v___x_3227_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58(void){
_start:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3228_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__57);
v___x_3229_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3230_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
lean_ctor_set(v___x_3230_, 1, v___x_3228_);
return v___x_3230_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59(void){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3231_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__58);
v___x_3232_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__56));
v___x_3233_ = lean_unsigned_to_nat(2u);
v___x_3234_ = lean_mk_empty_array_with_capacity(v___x_3233_);
v___x_3235_ = lean_array_push(v___x_3234_, v___x_3232_);
v___x_3236_ = lean_array_push(v___x_3235_, v___x_3231_);
return v___x_3236_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60(void){
_start:
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3237_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__59);
v___x_3238_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3239_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3239_, 0, v___x_3238_);
lean_ctor_set(v___x_3239_, 1, v___x_3237_);
return v___x_3239_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61(void){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3240_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__6);
v___x_3241_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__60);
v___x_3242_ = lean_unsigned_to_nat(2u);
v___x_3243_ = lean_mk_empty_array_with_capacity(v___x_3242_);
v___x_3244_ = lean_array_push(v___x_3243_, v___x_3241_);
v___x_3245_ = lean_array_push(v___x_3244_, v___x_3240_);
return v___x_3245_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62(void){
_start:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3246_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__61);
v___x_3247_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3248_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3247_);
lean_ctor_set(v___x_3248_, 1, v___x_3246_);
return v___x_3248_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63(void){
_start:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3249_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__62);
v___x_3250_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__50);
v___x_3251_ = lean_array_push(v___x_3250_, v___x_3249_);
return v___x_3251_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64(void){
_start:
{
lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3252_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__63);
v___x_3253_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3254_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3254_, 0, v___x_3253_);
lean_ctor_set(v___x_3254_, 1, v___x_3252_);
return v___x_3254_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65(void){
_start:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3255_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__64);
v___x_3256_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3256_, 0, v___x_3255_);
return v___x_3256_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3264_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__67));
v___x_3265_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__65);
v___x_3266_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__55);
v___x_3267_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__43);
v___x_3268_ = lean_unsigned_to_nat(4u);
v___x_3269_ = lean_mk_empty_array_with_capacity(v___x_3268_);
v___x_3270_ = lean_array_push(v___x_3269_, v___x_3267_);
v___x_3271_ = lean_array_push(v___x_3270_, v___x_3266_);
v___x_3272_ = lean_array_push(v___x_3271_, v___x_3265_);
v___x_3273_ = lean_array_push(v___x_3272_, v___x_3264_);
return v___x_3273_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69(void){
_start:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3274_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__68);
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
return v___x_3275_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70(void){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3276_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__69);
v___x_3277_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__36);
v___x_3278_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__33);
v___x_3279_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__28));
v___x_3280_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
lean_ctor_set(v___x_3280_, 1, v___x_3278_);
lean_ctor_set(v___x_3280_, 2, v___x_3277_);
lean_ctor_set(v___x_3280_, 3, v___x_3276_);
return v___x_3280_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73(void){
_start:
{
lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3283_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__72));
v___x_3284_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3283_);
return v___x_3284_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74(void){
_start:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3285_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3286_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3287_ = lean_unsigned_to_nat(2u);
v___x_3288_ = lean_mk_empty_array_with_capacity(v___x_3287_);
v___x_3289_ = lean_array_push(v___x_3288_, v___x_3286_);
v___x_3290_ = lean_array_push(v___x_3289_, v___x_3285_);
return v___x_3290_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76(void){
_start:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__75));
v___x_3293_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3292_);
return v___x_3293_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77(void){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3294_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3295_ = lean_unsigned_to_nat(1u);
v___x_3296_ = lean_mk_empty_array_with_capacity(v___x_3295_);
v___x_3297_ = lean_array_push(v___x_3296_, v___x_3294_);
return v___x_3297_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81(void){
_start:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3306_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3307_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__80));
v___x_3308_ = lean_unsigned_to_nat(2u);
v___x_3309_ = lean_mk_empty_array_with_capacity(v___x_3308_);
v___x_3310_ = lean_array_push(v___x_3309_, v___x_3307_);
v___x_3311_ = lean_array_push(v___x_3310_, v___x_3306_);
return v___x_3311_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82(void){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3312_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__81);
v___x_3313_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3314_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3313_);
lean_ctor_set(v___x_3314_, 1, v___x_3312_);
return v___x_3314_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83(void){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
v___x_3315_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3316_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__82);
v___x_3317_ = lean_unsigned_to_nat(2u);
v___x_3318_ = lean_mk_empty_array_with_capacity(v___x_3317_);
v___x_3319_ = lean_array_push(v___x_3318_, v___x_3316_);
v___x_3320_ = lean_array_push(v___x_3319_, v___x_3315_);
return v___x_3320_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__83);
v___x_3322_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3323_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
lean_ctor_set(v___x_3323_, 1, v___x_3321_);
return v___x_3323_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85(void){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3324_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__84);
v___x_3325_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__79));
v___x_3326_ = lean_unsigned_to_nat(2u);
v___x_3327_ = lean_mk_empty_array_with_capacity(v___x_3326_);
v___x_3328_ = lean_array_push(v___x_3327_, v___x_3325_);
v___x_3329_ = lean_array_push(v___x_3328_, v___x_3324_);
return v___x_3329_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86(void){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v___x_3330_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__85);
v___x_3331_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3332_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
lean_ctor_set(v___x_3332_, 1, v___x_3330_);
return v___x_3332_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87(void){
_start:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3333_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_3334_ = lean_unsigned_to_nat(1u);
v___x_3335_ = lean_mk_empty_array_with_capacity(v___x_3334_);
v___x_3336_ = lean_array_push(v___x_3335_, v___x_3333_);
return v___x_3336_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__87);
v___x_3338_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__0));
v___x_3339_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3337_);
return v___x_3339_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89(void){
_start:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3340_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__88);
v___x_3341_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__78));
v___x_3342_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v___x_3340_);
return v___x_3342_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90(void){
_start:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3343_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__89);
v___x_3344_ = lean_unsigned_to_nat(1u);
v___x_3345_ = lean_mk_empty_array_with_capacity(v___x_3344_);
v___x_3346_ = lean_array_push(v___x_3345_, v___x_3343_);
return v___x_3346_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91(void){
_start:
{
lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3347_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__90);
v___x_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3347_);
return v___x_3348_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92(void){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3349_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__91);
v___x_3350_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__77);
v___x_3351_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__74);
v___x_3352_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__71));
v___x_3353_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3352_);
lean_ctor_set(v___x_3353_, 1, v___x_3351_);
lean_ctor_set(v___x_3353_, 2, v___x_3350_);
lean_ctor_set(v___x_3353_, 3, v___x_3349_);
return v___x_3353_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94(void){
_start:
{
lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3355_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__76);
v___x_3356_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__73);
v___x_3357_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__35);
v___x_3358_ = lean_unsigned_to_nat(3u);
v___x_3359_ = lean_mk_empty_array_with_capacity(v___x_3358_);
v___x_3360_ = lean_array_push(v___x_3359_, v___x_3357_);
v___x_3361_ = lean_array_push(v___x_3360_, v___x_3356_);
v___x_3362_ = lean_array_push(v___x_3361_, v___x_3355_);
return v___x_3362_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97(void){
_start:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3367_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__96));
v___x_3368_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__86);
v___x_3369_ = lean_unsigned_to_nat(2u);
v___x_3370_ = lean_mk_empty_array_with_capacity(v___x_3369_);
v___x_3371_ = lean_array_push(v___x_3370_, v___x_3368_);
v___x_3372_ = lean_array_push(v___x_3371_, v___x_3367_);
return v___x_3372_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98(void){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3373_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__97);
v___x_3374_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3375_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
lean_ctor_set(v___x_3375_, 1, v___x_3373_);
return v___x_3375_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99(void){
_start:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3376_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__98);
v___x_3377_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3377_, 0, v___x_3376_);
return v___x_3377_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
v___x_3378_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__99);
v___x_3379_ = lean_unsigned_to_nat(1u);
v___x_3380_ = lean_mk_empty_array_with_capacity(v___x_3379_);
v___x_3381_ = lean_array_push(v___x_3380_, v___x_3378_);
return v___x_3381_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101(void){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3382_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__100);
v___x_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3382_);
return v___x_3383_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102(void){
_start:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3384_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__101);
v___x_3385_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__95));
v___x_3386_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__94);
v___x_3387_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__93));
v___x_3388_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v___x_3386_);
lean_ctor_set(v___x_3388_, 2, v___x_3385_);
lean_ctor_set(v___x_3388_, 3, v___x_3384_);
return v___x_3388_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104(void){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3390_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__103));
v___x_3391_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3390_);
return v___x_3391_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105(void){
_start:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3392_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__104);
v___x_3393_ = lean_unsigned_to_nat(1u);
v___x_3394_ = lean_mk_empty_array_with_capacity(v___x_3393_);
v___x_3395_ = lean_array_push(v___x_3394_, v___x_3392_);
return v___x_3395_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110(void){
_start:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = lean_unsigned_to_nat(255u);
v___x_3409_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3408_);
return v___x_3409_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111(void){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
v___x_3410_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__110);
v___x_3411_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__109));
v___x_3412_ = lean_unsigned_to_nat(2u);
v___x_3413_ = lean_mk_empty_array_with_capacity(v___x_3412_);
v___x_3414_ = lean_array_push(v___x_3413_, v___x_3411_);
v___x_3415_ = lean_array_push(v___x_3414_, v___x_3410_);
return v___x_3415_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112(void){
_start:
{
lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
v___x_3416_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__111);
v___x_3417_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3418_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3418_, 0, v___x_3417_);
lean_ctor_set(v___x_3418_, 1, v___x_3416_);
return v___x_3418_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3419_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__112);
v___x_3420_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106));
v___x_3421_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
lean_ctor_set(v___x_3421_, 1, v___x_3419_);
return v___x_3421_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114(void){
_start:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3422_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3423_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3424_ = lean_unsigned_to_nat(2u);
v___x_3425_ = lean_mk_empty_array_with_capacity(v___x_3424_);
v___x_3426_ = lean_array_push(v___x_3425_, v___x_3423_);
v___x_3427_ = lean_array_push(v___x_3426_, v___x_3422_);
return v___x_3427_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115(void){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3428_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__114);
v___x_3429_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3430_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3429_);
lean_ctor_set(v___x_3430_, 1, v___x_3428_);
return v___x_3430_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116(void){
_start:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3431_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__21));
v___x_3432_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3431_);
return v___x_3432_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117(void){
_start:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3433_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__116);
v___x_3434_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__106));
v___x_3435_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3434_);
lean_ctor_set(v___x_3435_, 1, v___x_3433_);
return v___x_3435_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118(void){
_start:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3436_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__117);
v___x_3437_ = lean_unsigned_to_nat(1u);
v___x_3438_ = lean_mk_empty_array_with_capacity(v___x_3437_);
v___x_3439_ = lean_array_push(v___x_3438_, v___x_3436_);
return v___x_3439_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119(void){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; 
v___x_3440_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__118);
v___x_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
return v___x_3441_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120(void){
_start:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3442_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__119);
v___x_3443_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__115);
v___x_3444_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
lean_ctor_set(v___x_3444_, 1, v___x_3442_);
return v___x_3444_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121(void){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3445_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__120);
v___x_3446_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__113);
v___x_3447_ = lean_unsigned_to_nat(2u);
v___x_3448_ = lean_mk_empty_array_with_capacity(v___x_3447_);
v___x_3449_ = lean_array_push(v___x_3448_, v___x_3446_);
v___x_3450_ = lean_array_push(v___x_3449_, v___x_3445_);
return v___x_3450_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122(void){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3451_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__121);
v___x_3452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3451_);
return v___x_3452_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123(void){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3453_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__122);
v___x_3454_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__105);
v___x_3455_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__20);
v___x_3456_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitCases___closed__1));
v___x_3457_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
lean_ctor_set(v___x_3457_, 1, v___x_3455_);
lean_ctor_set(v___x_3457_, 2, v___x_3454_);
lean_ctor_set(v___x_3457_, 3, v___x_3453_);
return v___x_3457_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126(void){
_start:
{
lean_object* v___x_3460_; lean_object* v___x_3461_; 
v___x_3460_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__125));
v___x_3461_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3460_);
return v___x_3461_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128(void){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__127));
v___x_3464_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3463_);
return v___x_3464_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129(void){
_start:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3465_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__128);
v___x_3466_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__126);
v___x_3467_ = lean_unsigned_to_nat(2u);
v___x_3468_ = lean_mk_empty_array_with_capacity(v___x_3467_);
v___x_3469_ = lean_array_push(v___x_3468_, v___x_3466_);
v___x_3470_ = lean_array_push(v___x_3469_, v___x_3465_);
return v___x_3470_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131(void){
_start:
{
lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3473_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__130));
v___x_3474_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3473_);
return v___x_3474_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133(void){
_start:
{
lean_object* v___x_3477_; lean_object* v___x_3478_; 
v___x_3477_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__132));
v___x_3478_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3477_);
return v___x_3478_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134(void){
_start:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3479_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3480_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3481_ = lean_unsigned_to_nat(2u);
v___x_3482_ = lean_mk_empty_array_with_capacity(v___x_3481_);
v___x_3483_ = lean_array_push(v___x_3482_, v___x_3480_);
v___x_3484_ = lean_array_push(v___x_3483_, v___x_3479_);
return v___x_3484_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135(void){
_start:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3485_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3486_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__0));
v___x_3487_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3486_);
lean_ctor_set(v___x_3487_, 1, v___x_3485_);
return v___x_3487_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136(void){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3488_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__135);
v___x_3489_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3488_);
return v___x_3489_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137(void){
_start:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__136);
v___x_3491_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3492_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3491_);
lean_ctor_set(v___x_3492_, 1, v___x_3490_);
return v___x_3492_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138(void){
_start:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3493_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__137);
v___x_3494_ = lean_unsigned_to_nat(1u);
v___x_3495_ = lean_mk_empty_array_with_capacity(v___x_3494_);
v___x_3496_ = lean_array_push(v___x_3495_, v___x_3493_);
return v___x_3496_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139(void){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__138);
v___x_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3497_);
return v___x_3498_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140(void){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3499_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__139);
v___x_3500_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3501_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3502_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__124));
v___x_3503_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
lean_ctor_set(v___x_3503_, 1, v___x_3501_);
lean_ctor_set(v___x_3503_, 2, v___x_3500_);
lean_ctor_set(v___x_3503_, 3, v___x_3499_);
return v___x_3503_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142(void){
_start:
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3505_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxZero;
v___x_3506_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3507_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
lean_ctor_set(v___x_3507_, 1, v___x_3505_);
return v___x_3507_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145(void){
_start:
{
lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3511_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__144));
v___x_3512_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3511_);
lean_ctor_set(v___x_3512_, 1, v___x_3510_);
return v___x_3512_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146(void){
_start:
{
lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3513_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145);
v___x_3514_ = lean_unsigned_to_nat(1u);
v___x_3515_ = lean_mk_empty_array_with_capacity(v___x_3514_);
v___x_3516_ = lean_array_push(v___x_3515_, v___x_3513_);
return v___x_3516_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147(void){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__146);
v___x_3518_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143));
v___x_3519_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3518_);
lean_ctor_set(v___x_3519_, 1, v___x_3517_);
return v___x_3519_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149(void){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; 
v___x_3521_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__148));
v___x_3522_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3521_);
return v___x_3522_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150(void){
_start:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3523_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__149);
v___x_3524_ = lean_unsigned_to_nat(1u);
v___x_3525_ = lean_mk_empty_array_with_capacity(v___x_3524_);
v___x_3526_ = lean_array_push(v___x_3525_, v___x_3523_);
return v___x_3526_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151(void){
_start:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3527_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3528_, 0, v___x_3527_);
return v___x_3528_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152(void){
_start:
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3529_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__151);
v___x_3530_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__150);
v___x_3531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3530_);
lean_ctor_set(v___x_3531_, 1, v___x_3529_);
return v___x_3531_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154(void){
_start:
{
lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3533_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__153));
v___x_3534_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3533_);
return v___x_3534_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155(void){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3535_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__154);
v___x_3536_ = lean_unsigned_to_nat(1u);
v___x_3537_ = lean_mk_empty_array_with_capacity(v___x_3536_);
v___x_3538_ = lean_array_push(v___x_3537_, v___x_3535_);
return v___x_3538_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156(void){
_start:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3539_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
return v___x_3540_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157(void){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3541_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__156);
v___x_3542_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__155);
v___x_3543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
lean_ctor_set(v___x_3543_, 1, v___x_3541_);
return v___x_3543_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163(void){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; 
v___x_3558_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__162));
v___x_3559_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3558_);
return v___x_3559_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164(void){
_start:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3560_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__163);
v___x_3561_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
lean_ctor_set(v___x_3562_, 1, v___x_3560_);
return v___x_3562_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165(void){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3563_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__164);
v___x_3564_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__157);
v___x_3565_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__152);
v___x_3566_ = lean_unsigned_to_nat(3u);
v___x_3567_ = lean_mk_empty_array_with_capacity(v___x_3566_);
v___x_3568_ = lean_array_push(v___x_3567_, v___x_3565_);
v___x_3569_ = lean_array_push(v___x_3568_, v___x_3564_);
v___x_3570_ = lean_array_push(v___x_3569_, v___x_3563_);
return v___x_3570_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166(void){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; 
v___x_3571_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__165);
v___x_3572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3571_);
return v___x_3572_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167(void){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3573_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__166);
v___x_3574_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__147);
v___x_3575_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3574_);
lean_ctor_set(v___x_3575_, 1, v___x_3573_);
return v___x_3575_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168(void){
_start:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3576_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__142);
v___x_3577_ = lean_unsigned_to_nat(2u);
v___x_3578_ = lean_mk_empty_array_with_capacity(v___x_3577_);
v___x_3579_ = lean_array_push(v___x_3578_, v___x_3576_);
return v___x_3579_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169(void){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3580_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__167);
v___x_3581_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3582_ = lean_array_push(v___x_3581_, v___x_3580_);
return v___x_3582_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170(void){
_start:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3583_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__169);
v___x_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3584_, 0, v___x_3583_);
return v___x_3584_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171(void){
_start:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3585_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__170);
v___x_3586_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3587_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3588_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__141));
v___x_3589_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3588_);
lean_ctor_set(v___x_3589_, 1, v___x_3587_);
lean_ctor_set(v___x_3589_, 2, v___x_3586_);
lean_ctor_set(v___x_3589_, 3, v___x_3585_);
return v___x_3589_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173(void){
_start:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3591_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3592_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorGetExpr___closed__1));
v___x_3593_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3592_);
lean_ctor_set(v___x_3593_, 1, v___x_3591_);
return v___x_3593_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174(void){
_start:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3594_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__173);
v___x_3595_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3594_);
return v___x_3595_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175(void){
_start:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3596_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__174);
v___x_3597_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3598_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3597_);
lean_ctor_set(v___x_3598_, 1, v___x_3596_);
return v___x_3598_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176(void){
_start:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3599_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__175);
v___x_3600_ = lean_unsigned_to_nat(1u);
v___x_3601_ = lean_mk_empty_array_with_capacity(v___x_3600_);
v___x_3602_ = lean_array_push(v___x_3601_, v___x_3599_);
return v___x_3602_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177(void){
_start:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__176);
v___x_3604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
return v___x_3604_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178(void){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3605_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__177);
v___x_3606_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3607_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3608_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__172));
v___x_3609_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3608_);
lean_ctor_set(v___x_3609_, 1, v___x_3607_);
lean_ctor_set(v___x_3609_, 2, v___x_3606_);
lean_ctor_set(v___x_3609_, 3, v___x_3605_);
return v___x_3609_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181(void){
_start:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___x_3612_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3613_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__180));
v___x_3614_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
lean_ctor_set(v___x_3614_, 1, v___x_3612_);
return v___x_3614_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182(void){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3615_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2, &l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__2);
v___x_3616_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3615_);
return v___x_3616_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183(void){
_start:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3617_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__182);
v___x_3618_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3618_);
lean_ctor_set(v___x_3619_, 1, v___x_3617_);
return v___x_3619_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184(void){
_start:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; 
v___x_3620_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__183);
v___x_3621_ = lean_unsigned_to_nat(1u);
v___x_3622_ = lean_mk_empty_array_with_capacity(v___x_3621_);
v___x_3623_ = lean_array_push(v___x_3622_, v___x_3620_);
return v___x_3623_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185(void){
_start:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__184);
v___x_3625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3624_);
return v___x_3625_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186(void){
_start:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
v___x_3626_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3627_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__181);
v___x_3628_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
lean_ctor_set(v___x_3628_, 1, v___x_3626_);
return v___x_3628_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187(void){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3629_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__186);
v___x_3630_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3631_ = lean_array_push(v___x_3630_, v___x_3629_);
return v___x_3631_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188(void){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3632_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__187);
v___x_3633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3633_, 0, v___x_3632_);
return v___x_3633_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189(void){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3634_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__188);
v___x_3635_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3636_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3637_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__179));
v___x_3638_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3638_, 0, v___x_3637_);
lean_ctor_set(v___x_3638_, 1, v___x_3636_);
lean_ctor_set(v___x_3638_, 2, v___x_3635_);
lean_ctor_set(v___x_3638_, 3, v___x_3634_);
return v___x_3638_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192(void){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3641_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3642_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__191));
v___x_3643_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set(v___x_3643_, 1, v___x_3641_);
return v___x_3643_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193(void){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3644_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__192);
v___x_3645_ = lean_unsigned_to_nat(1u);
v___x_3646_ = lean_mk_empty_array_with_capacity(v___x_3645_);
v___x_3647_ = lean_array_push(v___x_3646_, v___x_3644_);
return v___x_3647_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194(void){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3648_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__193);
v___x_3649_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__143));
v___x_3650_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3649_);
lean_ctor_set(v___x_3650_, 1, v___x_3648_);
return v___x_3650_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195(void){
_start:
{
lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
v___x_3651_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3652_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__194);
v___x_3653_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3653_, 0, v___x_3652_);
lean_ctor_set(v___x_3653_, 1, v___x_3651_);
return v___x_3653_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196(void){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; 
v___x_3654_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__195);
v___x_3655_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3656_ = lean_array_push(v___x_3655_, v___x_3654_);
return v___x_3656_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197(void){
_start:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3657_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__196);
v___x_3658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3657_);
return v___x_3658_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198(void){
_start:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3659_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__197);
v___x_3660_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3661_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3662_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__190));
v___x_3663_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
lean_ctor_set(v___x_3663_, 1, v___x_3661_);
lean_ctor_set(v___x_3663_, 2, v___x_3660_);
lean_ctor_set(v___x_3663_, 3, v___x_3659_);
return v___x_3663_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200(void){
_start:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3665_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__185);
v___x_3666_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__145);
v___x_3667_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
lean_ctor_set(v___x_3667_, 1, v___x_3665_);
return v___x_3667_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201(void){
_start:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3668_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__200);
v___x_3669_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__168);
v___x_3670_ = lean_array_push(v___x_3669_, v___x_3668_);
return v___x_3670_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202(void){
_start:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3671_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__201);
v___x_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3671_);
return v___x_3672_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203(void){
_start:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3673_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__202);
v___x_3674_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3675_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3676_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__199));
v___x_3677_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3676_);
lean_ctor_set(v___x_3677_, 1, v___x_3675_);
lean_ctor_set(v___x_3677_, 2, v___x_3674_);
lean_ctor_set(v___x_3677_, 3, v___x_3673_);
return v___x_3677_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207(void){
_start:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3686_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_3687_ = lean_unsigned_to_nat(2u);
v___x_3688_ = lean_mk_empty_array_with_capacity(v___x_3687_);
v___x_3689_ = lean_array_push(v___x_3688_, v___x_3686_);
v___x_3690_ = lean_array_push(v___x_3689_, v___x_3686_);
return v___x_3690_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208(void){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; 
v___x_3691_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207);
v___x_3692_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitFap___redArg___closed__0));
v___x_3693_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
lean_ctor_set(v___x_3693_, 1, v___x_3691_);
return v___x_3693_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209(void){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3694_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__208);
v___x_3695_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
return v___x_3695_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210(void){
_start:
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; 
v___x_3696_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209);
v___x_3697_ = lean_unsigned_to_nat(1u);
v___x_3698_ = lean_mk_empty_array_with_capacity(v___x_3697_);
v___x_3699_ = lean_array_push(v___x_3698_, v___x_3696_);
return v___x_3699_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211(void){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3700_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__210);
v___x_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3701_, 0, v___x_3700_);
return v___x_3701_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212(void){
_start:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3702_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__211);
v___x_3703_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__206));
v___x_3704_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3703_);
lean_ctor_set(v___x_3704_, 1, v___x_3702_);
return v___x_3704_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214(void){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3706_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3707_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__213));
v___x_3708_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
lean_ctor_set(v___x_3708_, 1, v___x_3706_);
return v___x_3708_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215(void){
_start:
{
lean_object* v___x_3709_; lean_object* v___x_3710_; 
v___x_3709_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__214);
v___x_3710_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3709_);
return v___x_3710_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216(void){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__215);
v___x_3712_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3713_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3712_);
lean_ctor_set(v___x_3713_, 1, v___x_3711_);
return v___x_3713_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217(void){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3714_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__212);
v___x_3715_ = lean_unsigned_to_nat(2u);
v___x_3716_ = lean_mk_empty_array_with_capacity(v___x_3715_);
v___x_3717_ = lean_array_push(v___x_3716_, v___x_3714_);
return v___x_3717_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218(void){
_start:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
v___x_3718_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__216);
v___x_3719_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217);
v___x_3720_ = lean_array_push(v___x_3719_, v___x_3718_);
return v___x_3720_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219(void){
_start:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3721_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__218);
v___x_3722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
return v___x_3722_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220(void){
_start:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3723_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__219);
v___x_3724_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3725_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3726_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__204));
v___x_3727_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3727_, 0, v___x_3726_);
lean_ctor_set(v___x_3727_, 1, v___x_3725_);
lean_ctor_set(v___x_3727_, 2, v___x_3724_);
lean_ctor_set(v___x_3727_, 3, v___x_3723_);
return v___x_3727_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223(void){
_start:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3730_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3731_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__222));
v___x_3732_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v___x_3730_);
return v___x_3732_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224(void){
_start:
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3733_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__223);
v___x_3734_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3733_);
return v___x_3734_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225(void){
_start:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3735_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__224);
v___x_3736_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3737_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3737_, 0, v___x_3736_);
lean_ctor_set(v___x_3737_, 1, v___x_3735_);
return v___x_3737_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226(void){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__225);
v___x_3739_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__217);
v___x_3740_ = lean_array_push(v___x_3739_, v___x_3738_);
return v___x_3740_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227(void){
_start:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3741_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__226);
v___x_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
return v___x_3742_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3743_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__227);
v___x_3744_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3745_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3746_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__221));
v___x_3747_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
lean_ctor_set(v___x_3747_, 1, v___x_3745_);
lean_ctor_set(v___x_3747_, 2, v___x_3744_);
lean_ctor_set(v___x_3747_, 3, v___x_3743_);
return v___x_3747_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230(void){
_start:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3749_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__131);
v___x_3750_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__133);
v___x_3751_ = lean_unsigned_to_nat(2u);
v___x_3752_ = lean_mk_empty_array_with_capacity(v___x_3751_);
v___x_3753_ = lean_array_push(v___x_3752_, v___x_3750_);
v___x_3754_ = lean_array_push(v___x_3753_, v___x_3749_);
return v___x_3754_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231(void){
_start:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3755_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230);
v___x_3756_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v___x_3757_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3756_);
lean_ctor_set(v___x_3757_, 1, v___x_3755_);
return v___x_3757_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232(void){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3758_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__231);
v___x_3759_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3758_);
return v___x_3759_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233(void){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3760_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__232);
v___x_3761_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
lean_ctor_set(v___x_3762_, 1, v___x_3760_);
return v___x_3762_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; 
v___x_3763_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__233);
v___x_3764_ = lean_unsigned_to_nat(1u);
v___x_3765_ = lean_mk_empty_array_with_capacity(v___x_3764_);
v___x_3766_ = lean_array_push(v___x_3765_, v___x_3763_);
return v___x_3766_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235(void){
_start:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3767_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__234);
v___x_3768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3768_, 0, v___x_3767_);
return v___x_3768_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236(void){
_start:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3769_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__235);
v___x_3770_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3771_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3772_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__229));
v___x_3773_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
lean_ctor_set(v___x_3773_, 1, v___x_3771_);
lean_ctor_set(v___x_3773_, 2, v___x_3770_);
lean_ctor_set(v___x_3773_, 3, v___x_3769_);
return v___x_3773_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238(void){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3775_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__230);
v___x_3776_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__1));
v___x_3777_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3776_);
lean_ctor_set(v___x_3777_, 1, v___x_3775_);
return v___x_3777_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239(void){
_start:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3778_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__238);
v___x_3779_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3778_);
return v___x_3779_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; 
v___x_3780_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__239);
v___x_3781_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3782_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
lean_ctor_set(v___x_3782_, 1, v___x_3780_);
return v___x_3782_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241(void){
_start:
{
lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; 
v___x_3783_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__240);
v___x_3784_ = lean_unsigned_to_nat(1u);
v___x_3785_ = lean_mk_empty_array_with_capacity(v___x_3784_);
v___x_3786_ = lean_array_push(v___x_3785_, v___x_3783_);
return v___x_3786_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242(void){
_start:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3787_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__241);
v___x_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
return v___x_3788_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243(void){
_start:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v___x_3789_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__242);
v___x_3790_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3791_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3792_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__237));
v___x_3793_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
lean_ctor_set(v___x_3793_, 1, v___x_3791_);
lean_ctor_set(v___x_3793_, 2, v___x_3790_);
lean_ctor_set(v___x_3793_, 3, v___x_3789_);
return v___x_3793_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245(void){
_start:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3795_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3796_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__107));
v___x_3797_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___x_3796_);
lean_ctor_set(v___x_3797_, 1, v___x_3795_);
return v___x_3797_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246(void){
_start:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__245);
v___x_3799_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3798_);
return v___x_3799_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__246);
v___x_3801_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3802_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3801_);
lean_ctor_set(v___x_3802_, 1, v___x_3800_);
return v___x_3802_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248(void){
_start:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; 
v___x_3803_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__247);
v___x_3804_ = lean_unsigned_to_nat(1u);
v___x_3805_ = lean_mk_empty_array_with_capacity(v___x_3804_);
v___x_3806_ = lean_array_push(v___x_3805_, v___x_3803_);
return v___x_3806_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249(void){
_start:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3807_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__248);
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250(void){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3809_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__249);
v___x_3810_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3811_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3812_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__244));
v___x_3813_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3813_, 0, v___x_3812_);
lean_ctor_set(v___x_3813_, 1, v___x_3811_);
lean_ctor_set(v___x_3813_, 2, v___x_3810_);
lean_ctor_set(v___x_3813_, 3, v___x_3809_);
return v___x_3813_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252(void){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
v___x_3815_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3816_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr___closed__0));
v___x_3817_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3816_);
lean_ctor_set(v___x_3817_, 1, v___x_3815_);
return v___x_3817_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253(void){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; 
v___x_3818_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__252);
v___x_3819_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3818_);
return v___x_3819_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254(void){
_start:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
v___x_3820_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__253);
v___x_3821_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3822_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
lean_ctor_set(v___x_3822_, 1, v___x_3820_);
return v___x_3822_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255(void){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3823_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__254);
v___x_3824_ = lean_unsigned_to_nat(1u);
v___x_3825_ = lean_mk_empty_array_with_capacity(v___x_3824_);
v___x_3826_ = lean_array_push(v___x_3825_, v___x_3823_);
return v___x_3826_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256(void){
_start:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__255);
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3827_);
return v___x_3828_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257(void){
_start:
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3829_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__256);
v___x_3830_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3831_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3832_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__251));
v___x_3833_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
lean_ctor_set(v___x_3833_, 1, v___x_3831_);
lean_ctor_set(v___x_3833_, 2, v___x_3830_);
lean_ctor_set(v___x_3833_, 3, v___x_3829_);
return v___x_3833_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260(void){
_start:
{
lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3836_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__134);
v___x_3837_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__259));
v___x_3838_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3837_);
lean_ctor_set(v___x_3838_, 1, v___x_3836_);
return v___x_3838_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261(void){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__260);
v___x_3840_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3839_);
return v___x_3840_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262(void){
_start:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; 
v___x_3841_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__261);
v___x_3842_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__7));
v___x_3843_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3842_);
lean_ctor_set(v___x_3843_, 1, v___x_3841_);
return v___x_3843_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263(void){
_start:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; 
v___x_3844_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__262);
v___x_3845_ = lean_unsigned_to_nat(1u);
v___x_3846_ = lean_mk_empty_array_with_capacity(v___x_3845_);
v___x_3847_ = lean_array_push(v___x_3846_, v___x_3844_);
return v___x_3847_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264(void){
_start:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3848_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__263);
v___x_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
return v___x_3849_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265(void){
_start:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3850_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__264);
v___x_3851_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__6);
v___x_3852_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__129);
v___x_3853_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__258));
v___x_3854_ = lean_alloc_ctor(6, 4, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
lean_ctor_set(v___x_3854_, 1, v___x_3852_);
lean_ctor_set(v___x_3854_, 2, v___x_3851_);
lean_ctor_set(v___x_3854_, 3, v___x_3850_);
return v___x_3854_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266(void){
_start:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3855_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__265);
v___x_3856_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__257);
v___x_3857_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__250);
v___x_3858_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__243);
v___x_3859_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__236);
v___x_3860_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__228);
v___x_3861_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__220);
v___x_3862_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__203);
v___x_3863_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__198);
v___x_3864_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__189);
v___x_3865_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__178);
v___x_3866_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__171);
v___x_3867_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__140);
v___x_3868_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__123);
v___x_3869_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__102);
v___x_3870_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__92);
v___x_3871_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__70);
v___x_3872_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__27);
v___x_3873_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__16);
v___x_3874_ = lean_unsigned_to_nat(19u);
v___x_3875_ = lean_mk_empty_array_with_capacity(v___x_3874_);
v___x_3876_ = lean_array_push(v___x_3875_, v___x_3873_);
v___x_3877_ = lean_array_push(v___x_3876_, v___x_3872_);
v___x_3878_ = lean_array_push(v___x_3877_, v___x_3871_);
v___x_3879_ = lean_array_push(v___x_3878_, v___x_3870_);
v___x_3880_ = lean_array_push(v___x_3879_, v___x_3869_);
v___x_3881_ = lean_array_push(v___x_3880_, v___x_3868_);
v___x_3882_ = lean_array_push(v___x_3881_, v___x_3867_);
v___x_3883_ = lean_array_push(v___x_3882_, v___x_3866_);
v___x_3884_ = lean_array_push(v___x_3883_, v___x_3865_);
v___x_3885_ = lean_array_push(v___x_3884_, v___x_3864_);
v___x_3886_ = lean_array_push(v___x_3885_, v___x_3863_);
v___x_3887_ = lean_array_push(v___x_3886_, v___x_3862_);
v___x_3888_ = lean_array_push(v___x_3887_, v___x_3861_);
v___x_3889_ = lean_array_push(v___x_3888_, v___x_3860_);
v___x_3890_ = lean_array_push(v___x_3889_, v___x_3859_);
v___x_3891_ = lean_array_push(v___x_3890_, v___x_3858_);
v___x_3892_ = lean_array_push(v___x_3891_, v___x_3857_);
v___x_3893_ = lean_array_push(v___x_3892_, v___x_3856_);
v___x_3894_ = lean_array_push(v___x_3893_, v___x_3855_);
return v___x_3894_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers(void){
_start:
{
lean_object* v___x_3895_; 
v___x_3895_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__266);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(lean_object* v_i_3897_){
_start:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3898_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_3899_ = lean_unsigned_to_nat(4u);
v___x_3900_ = lean_unsigned_to_nat(32u);
v___x_3901_ = lean_nat_mul(v_i_3897_, v___x_3900_);
v___x_3902_ = lean_nat_add(v___x_3899_, v___x_3901_);
lean_dec(v___x_3901_);
v___x_3903_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_3902_);
v___x_3904_ = lean_unsigned_to_nat(1u);
v___x_3905_ = lean_mk_empty_array_with_capacity(v___x_3904_);
v___x_3906_ = lean_array_push(v___x_3905_, v___x_3903_);
v___x_3907_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3907_, 0, v___x_3898_);
lean_ctor_set(v___x_3907_, 1, v___x_3906_);
v___x_3908_ = l_Lean_Compiler_LCNF_EmitYul_leanBoxExpr(v___x_3907_);
return v___x_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___boxed(lean_object* v_i_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_i_3909_);
lean_dec(v_i_3909_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(size_t v_sz_3911_, size_t v_i_3912_, lean_object* v_bs_3913_){
_start:
{
uint8_t v___x_3914_; 
v___x_3914_ = lean_usize_dec_lt(v_i_3912_, v_sz_3911_);
if (v___x_3914_ == 0)
{
return v_bs_3913_;
}
else
{
lean_object* v_v_3915_; lean_object* v___x_3916_; lean_object* v_bs_x27_3917_; lean_object* v___x_3918_; size_t v___x_3919_; size_t v___x_3920_; lean_object* v___x_3921_; 
v_v_3915_ = lean_array_uget(v_bs_3913_, v_i_3912_);
v___x_3916_ = lean_unsigned_to_nat(0u);
v_bs_x27_3917_ = lean_array_uset(v_bs_3913_, v_i_3912_, v___x_3916_);
v___x_3918_ = l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr(v_v_3915_);
lean_dec(v_v_3915_);
v___x_3919_ = ((size_t)1ULL);
v___x_3920_ = lean_usize_add(v_i_3912_, v___x_3919_);
v___x_3921_ = lean_array_uset(v_bs_x27_3917_, v_i_3912_, v___x_3918_);
v_i_3912_ = v___x_3920_;
v_bs_3913_ = v___x_3921_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0___boxed(lean_object* v_sz_3923_, lean_object* v_i_3924_, lean_object* v_bs_3925_){
_start:
{
size_t v_sz_boxed_3926_; size_t v_i_boxed_3927_; lean_object* v_res_3928_; 
v_sz_boxed_3926_ = lean_unbox_usize(v_sz_3923_);
lean_dec(v_sz_3923_);
v_i_boxed_3927_ = lean_unbox_usize(v_i_3924_);
lean_dec(v_i_3924_);
v_res_3928_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_boxed_3926_, v_i_boxed_3927_, v_bs_3925_);
return v_res_3928_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3931_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__1));
v___x_3932_ = l_Lean_Compiler_LCNF_EmitYul_tn(v___x_3931_);
return v___x_3932_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___x_3933_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__2);
v___x_3934_ = lean_unsigned_to_nat(1u);
v___x_3935_ = lean_mk_empty_array_with_capacity(v___x_3934_);
v___x_3936_ = lean_array_push(v___x_3935_, v___x_3933_);
return v___x_3936_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5(void){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3938_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__207);
v___x_3939_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_3940_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3939_);
lean_ctor_set(v___x_3940_, 1, v___x_3938_);
return v___x_3940_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6(void){
_start:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; 
v___x_3941_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__5);
v___x_3942_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3941_);
return v___x_3942_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8(void){
_start:
{
lean_object* v___x_3945_; lean_object* v___x_3946_; 
v___x_3945_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__7));
v___x_3946_ = l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr(v___x_3945_);
return v___x_3946_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9(void){
_start:
{
lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3947_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__8);
v___x_3948_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_3949_ = lean_array_push(v___x_3948_, v___x_3947_);
return v___x_3949_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10(void){
_start:
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; 
v___x_3950_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__9);
v___x_3951_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_3952_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3951_);
lean_ctor_set(v___x_3952_, 1, v___x_3950_);
return v___x_3952_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11(void){
_start:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__10);
v___x_3954_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
return v___x_3954_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12(void){
_start:
{
lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3955_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4, &l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_ctorHeaderExpr___closed__4);
v___x_3956_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10, &l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitCode___closed__10);
v___x_3957_ = lean_array_push(v___x_3956_, v___x_3955_);
return v___x_3957_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13(void){
_start:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3958_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__12);
v___x_3959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__4));
v___x_3960_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
lean_ctor_set(v___x_3960_, 1, v___x_3958_);
return v___x_3960_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14(void){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__13);
v___x_3962_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(size_t v_sz_3963_, size_t v_i_3964_, lean_object* v_bs_3965_){
_start:
{
uint8_t v___x_3966_; 
v___x_3966_ = lean_usize_dec_lt(v_i_3964_, v_sz_3963_);
if (v___x_3966_ == 0)
{
return v_bs_3965_;
}
else
{
lean_object* v_v_3967_; lean_object* v_fnName_3968_; lean_object* v_argCount_3969_; uint8_t v_returnsValue_3970_; lean_object* v___x_3971_; lean_object* v_bs_x27_3972_; lean_object* v___y_3974_; lean_object* v___x_3986_; lean_object* v___x_3987_; size_t v_sz_3988_; size_t v___x_3989_; lean_object* v_argExprs_3990_; lean_object* v_callExpr_3991_; 
v_v_3967_ = lean_array_uget(v_bs_3965_, v_i_3964_);
v_fnName_3968_ = lean_ctor_get(v_v_3967_, 1);
v_argCount_3969_ = lean_ctor_get(v_v_3967_, 2);
v_returnsValue_3970_ = lean_ctor_get_uint8(v_v_3967_, sizeof(void*)*3);
v___x_3971_ = lean_unsigned_to_nat(0u);
v_bs_x27_3972_ = lean_array_uset(v_bs_3965_, v_i_3964_, v___x_3971_);
lean_inc(v_argCount_3969_);
v___x_3986_ = l_List_range(v_argCount_3969_);
v___x_3987_ = lean_array_mk(v___x_3986_);
v_sz_3988_ = lean_array_size(v___x_3987_);
v___x_3989_ = ((size_t)0ULL);
v_argExprs_3990_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__0(v_sz_3988_, v___x_3989_, v___x_3987_);
lean_inc_ref(v_fnName_3968_);
v_callExpr_3991_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_callExpr_3991_, 0, v_fnName_3968_);
lean_ctor_set(v_callExpr_3991_, 1, v_argExprs_3990_);
if (v_returnsValue_3970_ == 0)
{
lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3992_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3993_, 0, v_callExpr_3991_);
v___x_3994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3992_);
lean_ctor_set(v___x_3994_, 1, v___x_3993_);
v___x_3995_ = lean_unsigned_to_nat(2u);
v___x_3996_ = lean_mk_empty_array_with_capacity(v___x_3995_);
v___x_3997_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__6);
v___x_3998_ = lean_array_push(v___x_3996_, v___x_3994_);
v___x_3999_ = lean_array_push(v___x_3998_, v___x_3997_);
v___y_3974_ = v___x_3999_;
goto v___jp_3973_;
}
else
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4000_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__3);
v___x_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4001_, 0, v_callExpr_3991_);
v___x_4002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4002_, 0, v___x_4000_);
lean_ctor_set(v___x_4002_, 1, v___x_4001_);
v___x_4003_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__11);
v___x_4004_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__14);
v___x_4005_ = lean_unsigned_to_nat(3u);
v___x_4006_ = lean_mk_empty_array_with_capacity(v___x_4005_);
v___x_4007_ = lean_array_push(v___x_4006_, v___x_4002_);
v___x_4008_ = lean_array_push(v___x_4007_, v___x_4003_);
v___x_4009_ = lean_array_push(v___x_4008_, v___x_4004_);
v___y_3974_ = v___x_4009_;
goto v___jp_3973_;
}
v___jp_3973_:
{
lean_object* v_selector_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; size_t v___x_3982_; size_t v___x_3983_; lean_object* v___x_3984_; 
v_selector_3975_ = lean_ctor_get(v_v_3967_, 0);
lean_inc_ref(v_selector_3975_);
lean_dec(v_v_3967_);
v___x_3976_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___closed__0));
v___x_3977_ = lean_string_append(v___x_3976_, v_selector_3975_);
lean_dec_ref(v_selector_3975_);
v___x_3978_ = l_Lean_Compiler_Yul_Literal_hex(v___x_3977_);
v___x_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3979_, 0, v___x_3978_);
v___x_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3980_, 0, v___y_3974_);
v___x_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3979_);
lean_ctor_set(v___x_3981_, 1, v___x_3980_);
v___x_3982_ = ((size_t)1ULL);
v___x_3983_ = lean_usize_add(v_i_3964_, v___x_3982_);
v___x_3984_ = lean_array_uset(v_bs_x27_3972_, v_i_3964_, v___x_3981_);
v_i_3964_ = v___x_3983_;
v_bs_3965_ = v___x_3984_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1___boxed(lean_object* v_sz_4010_, lean_object* v_i_4011_, lean_object* v_bs_4012_){
_start:
{
size_t v_sz_boxed_4013_; size_t v_i_boxed_4014_; lean_object* v_res_4015_; 
v_sz_boxed_4013_ = lean_unbox_usize(v_sz_4010_);
lean_dec(v_sz_4010_);
v_i_boxed_4014_ = lean_unbox_usize(v_i_4011_);
lean_dec(v_i_4011_);
v_res_4015_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_boxed_4013_, v_i_boxed_4014_, v_bs_4012_);
return v_res_4015_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0(void){
_start:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4016_ = lean_unsigned_to_nat(224u);
v___x_4017_ = l_Lean_Compiler_LCNF_EmitYul_yNum(v___x_4016_);
return v___x_4017_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1(void){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4018_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0, &l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_leanBoxZero___closed__0);
v___x_4019_ = lean_unsigned_to_nat(1u);
v___x_4020_ = lean_mk_empty_array_with_capacity(v___x_4019_);
v___x_4021_ = lean_array_push(v___x_4020_, v___x_4018_);
return v___x_4021_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2(void){
_start:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; 
v___x_4022_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__1);
v___x_4023_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_calldataArgExpr___closed__0));
v___x_4024_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4023_);
lean_ctor_set(v___x_4024_, 1, v___x_4022_);
return v___x_4024_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3(void){
_start:
{
lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4025_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__2);
v___x_4026_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__0);
v___x_4027_ = lean_unsigned_to_nat(2u);
v___x_4028_ = lean_mk_empty_array_with_capacity(v___x_4027_);
v___x_4029_ = lean_array_push(v___x_4028_, v___x_4026_);
v___x_4030_ = lean_array_push(v___x_4029_, v___x_4025_);
return v___x_4030_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4(void){
_start:
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v_selExpr_4033_; 
v___x_4031_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__3);
v___x_4032_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_leanUnboxExpr___closed__0));
v_selExpr_4033_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_selExpr_4033_, 0, v___x_4032_);
lean_ctor_set(v_selExpr_4033_, 1, v___x_4031_);
return v_selExpr_4033_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5(void){
_start:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4034_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209, &l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209_once, _init_l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers___closed__209);
v___x_4035_ = lean_unsigned_to_nat(1u);
v___x_4036_ = lean_mk_empty_array_with_capacity(v___x_4035_);
v___x_4037_ = lean_array_push(v___x_4036_, v___x_4034_);
return v___x_4037_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6(void){
_start:
{
lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4038_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__5);
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4038_);
return v___x_4039_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7(void){
_start:
{
lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v_defaultCase_4042_; 
v___x_4040_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__6);
v___x_4041_ = lean_box(0);
v_defaultCase_4042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_defaultCase_4042_, 0, v___x_4041_);
lean_ctor_set(v_defaultCase_4042_, 1, v___x_4040_);
return v_defaultCase_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(lean_object* v_methods_4043_){
_start:
{
lean_object* v_selExpr_4044_; size_t v_sz_4045_; size_t v___x_4046_; lean_object* v_cases_4047_; lean_object* v_defaultCase_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; 
v_selExpr_4044_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__4);
v_sz_4045_ = lean_array_size(v_methods_4043_);
v___x_4046_ = ((size_t)0ULL);
v_cases_4047_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_EmitYul_dispatchBlock_spec__1(v_sz_4045_, v___x_4046_, v_methods_4043_);
v_defaultCase_4048_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7, &l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7_once, _init_l_Lean_Compiler_LCNF_EmitYul_dispatchBlock___closed__7);
v___x_4049_ = lean_array_push(v_cases_4047_, v_defaultCase_4048_);
v___x_4050_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4050_, 0, v_selExpr_4044_);
lean_ctor_set(v___x_4050_, 1, v___x_4049_);
return v___x_4050_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(lean_object* v___y_4054_, lean_object* v_snd_4055_, lean_object* v_modName_4056_, lean_object* v_x_4057_, lean_object* v_x_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_){
_start:
{
if (lean_obj_tag(v_x_4057_) == 0)
{
lean_object* v___x_4062_; lean_object* v___x_4063_; 
lean_dec(v_modName_4056_);
lean_dec_ref(v_snd_4055_);
lean_dec_ref(v___y_4054_);
v___x_4062_ = l_List_reverse___redArg(v_x_4058_);
v___x_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4062_);
return v___x_4063_;
}
else
{
lean_object* v_head_4064_; lean_object* v_tail_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4094_; 
v_head_4064_ = lean_ctor_get(v_x_4057_, 0);
v_tail_4065_ = lean_ctor_get(v_x_4057_, 1);
v_isSharedCheck_4094_ = !lean_is_exclusive(v_x_4057_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4067_ = v_x_4057_;
v_isShared_4068_ = v_isSharedCheck_4094_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_tail_4065_);
lean_inc(v_head_4064_);
lean_dec(v_x_4057_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4094_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v_a_4070_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; 
v___x_4077_ = ((lean_object*)(l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___closed__0));
v___x_4078_ = lean_st_mk_ref(v___x_4077_);
v___x_4079_ = lean_box(1);
v___x_4080_ = lean_box(0);
lean_inc(v_modName_4056_);
lean_inc_ref(v_snd_4055_);
lean_inc_ref(v___y_4054_);
v___x_4081_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4081_, 0, v___y_4054_);
lean_ctor_set(v___x_4081_, 1, v_snd_4055_);
lean_ctor_set(v___x_4081_, 2, v_modName_4056_);
lean_ctor_set(v___x_4081_, 3, v___x_4080_);
lean_ctor_set(v___x_4081_, 4, v___x_4079_);
lean_ctor_set(v___x_4081_, 5, v___x_4079_);
v___x_4082_ = l_Lean_Compiler_LCNF_EmitYul_emitDecl(v_head_4064_, v___x_4081_, v___x_4078_, v___y_4059_, v___y_4060_);
lean_dec_ref_known(v___x_4081_, 6);
if (lean_obj_tag(v___x_4082_) == 0)
{
lean_object* v_a_4083_; lean_object* v___x_4084_; 
v_a_4083_ = lean_ctor_get(v___x_4082_, 0);
lean_inc(v_a_4083_);
lean_dec_ref_known(v___x_4082_, 1);
v___x_4084_ = lean_st_ref_get(v___x_4078_);
lean_dec(v___x_4078_);
lean_dec(v___x_4084_);
v_a_4070_ = v_a_4083_;
goto v___jp_4069_;
}
else
{
lean_dec(v___x_4078_);
if (lean_obj_tag(v___x_4082_) == 0)
{
lean_object* v_a_4085_; 
v_a_4085_ = lean_ctor_get(v___x_4082_, 0);
lean_inc(v_a_4085_);
lean_dec_ref_known(v___x_4082_, 1);
v_a_4070_ = v_a_4085_;
goto v___jp_4069_;
}
else
{
lean_object* v_a_4086_; lean_object* v___x_4088_; uint8_t v_isShared_4089_; uint8_t v_isSharedCheck_4093_; 
lean_del_object(v___x_4067_);
lean_dec(v_tail_4065_);
lean_dec(v_x_4058_);
lean_dec(v_modName_4056_);
lean_dec_ref(v_snd_4055_);
lean_dec_ref(v___y_4054_);
v_a_4086_ = lean_ctor_get(v___x_4082_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4082_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4088_ = v___x_4082_;
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
else
{
lean_inc(v_a_4086_);
lean_dec(v___x_4082_);
v___x_4088_ = lean_box(0);
v_isShared_4089_ = v_isSharedCheck_4093_;
goto v_resetjp_4087_;
}
v_resetjp_4087_:
{
lean_object* v___x_4091_; 
if (v_isShared_4089_ == 0)
{
v___x_4091_ = v___x_4088_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4086_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
v___jp_4069_:
{
if (lean_obj_tag(v_a_4070_) == 0)
{
lean_del_object(v___x_4067_);
v_x_4057_ = v_tail_4065_;
goto _start;
}
else
{
lean_object* v_val_4072_; lean_object* v___x_4074_; 
v_val_4072_ = lean_ctor_get(v_a_4070_, 0);
lean_inc(v_val_4072_);
lean_dec_ref_known(v_a_4070_, 1);
if (v_isShared_4068_ == 0)
{
lean_ctor_set(v___x_4067_, 1, v_x_4058_);
lean_ctor_set(v___x_4067_, 0, v_val_4072_);
v___x_4074_ = v___x_4067_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v_val_4072_);
lean_ctor_set(v_reuseFailAlloc_4076_, 1, v_x_4058_);
v___x_4074_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
v_x_4057_ = v_tail_4065_;
v_x_4058_ = v___x_4074_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0___boxed(lean_object* v___y_4095_, lean_object* v_snd_4096_, lean_object* v_modName_4097_, lean_object* v_x_4098_, lean_object* v_x_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4095_, v_snd_4096_, v_modName_4097_, v_x_4098_, v_x_4099_, v___y_4100_, v___y_4101_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(lean_object* v_msg_4104_){
_start:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
v___x_4105_ = lean_unsigned_to_nat(0u);
v___x_4106_ = lean_panic_fn_borrowed(v___x_4105_, v_msg_4104_);
return v___x_4106_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4110_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__2));
v___x_4111_ = lean_unsigned_to_nat(11u);
v___x_4112_ = lean_unsigned_to_nat(163u);
v___x_4113_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__1));
v___x_4114_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__0));
v___x_4115_ = l_mkPanicMessageWithDecl(v___x_4114_, v___x_4113_, v___x_4112_, v___x_4111_, v___x_4110_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(lean_object* v_a_4116_, lean_object* v_x_4117_){
_start:
{
if (lean_obj_tag(v_x_4117_) == 0)
{
lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4118_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___closed__3);
v___x_4119_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1_spec__2(v___x_4118_);
return v___x_4119_;
}
else
{
lean_object* v_key_4120_; lean_object* v_value_4121_; lean_object* v_tail_4122_; uint8_t v___x_4123_; 
v_key_4120_ = lean_ctor_get(v_x_4117_, 0);
v_value_4121_ = lean_ctor_get(v_x_4117_, 1);
v_tail_4122_ = lean_ctor_get(v_x_4117_, 2);
v___x_4123_ = lean_name_eq(v_key_4120_, v_a_4116_);
if (v___x_4123_ == 0)
{
v_x_4117_ = v_tail_4122_;
goto _start;
}
else
{
lean_inc(v_value_4121_);
return v_value_4121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1___boxed(lean_object* v_a_4125_, lean_object* v_x_4126_){
_start:
{
lean_object* v_res_4127_; 
v_res_4127_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_4125_, v_x_4126_);
lean_dec(v_x_4126_);
lean_dec(v_a_4125_);
return v_res_4127_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(lean_object* v_m_4128_, lean_object* v_a_4129_){
_start:
{
lean_object* v_buckets_4130_; lean_object* v___x_4131_; uint64_t v___y_4133_; 
v_buckets_4130_ = lean_ctor_get(v_m_4128_, 1);
v___x_4131_ = lean_array_get_size(v_buckets_4130_);
if (lean_obj_tag(v_a_4129_) == 0)
{
uint64_t v___x_4147_; 
v___x_4147_ = lean_uint64_once(&l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitPap___closed__0);
v___y_4133_ = v___x_4147_;
goto v___jp_4132_;
}
else
{
uint64_t v_hash_4148_; 
v_hash_4148_ = lean_ctor_get_uint64(v_a_4129_, sizeof(void*)*2);
v___y_4133_ = v_hash_4148_;
goto v___jp_4132_;
}
v___jp_4132_:
{
uint64_t v___x_4134_; uint64_t v___x_4135_; uint64_t v_fold_4136_; uint64_t v___x_4137_; uint64_t v___x_4138_; uint64_t v___x_4139_; size_t v___x_4140_; size_t v___x_4141_; size_t v___x_4142_; size_t v___x_4143_; size_t v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; 
v___x_4134_ = 32ULL;
v___x_4135_ = lean_uint64_shift_right(v___y_4133_, v___x_4134_);
v_fold_4136_ = lean_uint64_xor(v___y_4133_, v___x_4135_);
v___x_4137_ = 16ULL;
v___x_4138_ = lean_uint64_shift_right(v_fold_4136_, v___x_4137_);
v___x_4139_ = lean_uint64_xor(v_fold_4136_, v___x_4138_);
v___x_4140_ = lean_uint64_to_usize(v___x_4139_);
v___x_4141_ = lean_usize_of_nat(v___x_4131_);
v___x_4142_ = ((size_t)1ULL);
v___x_4143_ = lean_usize_sub(v___x_4141_, v___x_4142_);
v___x_4144_ = lean_usize_land(v___x_4140_, v___x_4143_);
v___x_4145_ = lean_array_uget_borrowed(v_buckets_4130_, v___x_4144_);
v___x_4146_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1_spec__1(v_a_4129_, v___x_4145_);
return v___x_4146_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1___boxed(lean_object* v_m_4149_, lean_object* v_a_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v_m_4149_, v_a_4150_);
lean_dec(v_a_4150_);
lean_dec_ref(v_m_4149_);
return v_res_4151_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(lean_object* v___x_4152_, lean_object* v_l_4153_, lean_object* v_r_4154_){
_start:
{
lean_object* v_toSignature_4155_; lean_object* v_toSignature_4156_; lean_object* v_name_4157_; lean_object* v_name_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; uint8_t v___x_4161_; 
v_toSignature_4155_ = lean_ctor_get(v_l_4153_, 0);
v_toSignature_4156_ = lean_ctor_get(v_r_4154_, 0);
v_name_4157_ = lean_ctor_get(v_toSignature_4155_, 0);
v_name_4158_ = lean_ctor_get(v_toSignature_4156_, 0);
v___x_4159_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4152_, v_name_4157_);
v___x_4160_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4152_, v_name_4158_);
v___x_4161_ = lean_nat_dec_lt(v___x_4159_, v___x_4160_);
lean_dec(v___x_4160_);
lean_dec(v___x_4159_);
return v___x_4161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0___boxed(lean_object* v___x_4162_, lean_object* v_l_4163_, lean_object* v_r_4164_){
_start:
{
uint8_t v_res_4165_; lean_object* v_r_4166_; 
v_res_4165_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4162_, v_l_4163_, v_r_4164_);
lean_dec_ref(v_r_4164_);
lean_dec_ref(v_l_4163_);
lean_dec_ref(v___x_4162_);
v_r_4166_ = lean_box(v_res_4165_);
return v_r_4166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(lean_object* v___x_4167_, lean_object* v_hi_4168_, lean_object* v_pivot_4169_, lean_object* v_as_4170_, lean_object* v_i_4171_, lean_object* v_k_4172_){
_start:
{
uint8_t v___x_4173_; 
v___x_4173_ = lean_nat_dec_lt(v_k_4172_, v_hi_4168_);
if (v___x_4173_ == 0)
{
lean_object* v___x_4174_; lean_object* v___x_4175_; 
lean_dec(v_k_4172_);
v___x_4174_ = lean_array_fswap(v_as_4170_, v_i_4171_, v_hi_4168_);
v___x_4175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4175_, 0, v_i_4171_);
lean_ctor_set(v___x_4175_, 1, v___x_4174_);
return v___x_4175_;
}
else
{
lean_object* v___x_4176_; lean_object* v_toSignature_4177_; lean_object* v_toSignature_4178_; lean_object* v_name_4179_; lean_object* v_name_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; uint8_t v___x_4183_; 
v___x_4176_ = lean_array_fget_borrowed(v_as_4170_, v_k_4172_);
v_toSignature_4177_ = lean_ctor_get(v___x_4176_, 0);
v_toSignature_4178_ = lean_ctor_get(v_pivot_4169_, 0);
v_name_4179_ = lean_ctor_get(v_toSignature_4177_, 0);
v_name_4180_ = lean_ctor_get(v_toSignature_4178_, 0);
v___x_4181_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4167_, v_name_4179_);
v___x_4182_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__1(v___x_4167_, v_name_4180_);
v___x_4183_ = lean_nat_dec_lt(v___x_4181_, v___x_4182_);
lean_dec(v___x_4182_);
lean_dec(v___x_4181_);
if (v___x_4183_ == 0)
{
lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4184_ = lean_unsigned_to_nat(1u);
v___x_4185_ = lean_nat_add(v_k_4172_, v___x_4184_);
lean_dec(v_k_4172_);
v_k_4172_ = v___x_4185_;
goto _start;
}
else
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4187_ = lean_array_fswap(v_as_4170_, v_i_4171_, v_k_4172_);
v___x_4188_ = lean_unsigned_to_nat(1u);
v___x_4189_ = lean_nat_add(v_i_4171_, v___x_4188_);
lean_dec(v_i_4171_);
v___x_4190_ = lean_nat_add(v_k_4172_, v___x_4188_);
lean_dec(v_k_4172_);
v_as_4170_ = v___x_4187_;
v_i_4171_ = v___x_4189_;
v_k_4172_ = v___x_4190_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg___boxed(lean_object* v___x_4192_, lean_object* v_hi_4193_, lean_object* v_pivot_4194_, lean_object* v_as_4195_, lean_object* v_i_4196_, lean_object* v_k_4197_){
_start:
{
lean_object* v_res_4198_; 
v_res_4198_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4192_, v_hi_4193_, v_pivot_4194_, v_as_4195_, v_i_4196_, v_k_4197_);
lean_dec_ref(v_pivot_4194_);
lean_dec(v_hi_4193_);
lean_dec_ref(v___x_4192_);
return v_res_4198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(lean_object* v___x_4199_, lean_object* v_n_4200_, lean_object* v_as_4201_, lean_object* v_lo_4202_, lean_object* v_hi_4203_){
_start:
{
lean_object* v___y_4205_; uint8_t v___x_4215_; 
v___x_4215_ = lean_nat_dec_lt(v_lo_4202_, v_hi_4203_);
if (v___x_4215_ == 0)
{
lean_dec(v_lo_4202_);
return v_as_4201_;
}
else
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v_mid_4218_; lean_object* v___y_4220_; lean_object* v___y_4226_; lean_object* v___x_4231_; lean_object* v___x_4232_; uint8_t v___x_4233_; 
v___x_4216_ = lean_nat_add(v_lo_4202_, v_hi_4203_);
v___x_4217_ = lean_unsigned_to_nat(1u);
v_mid_4218_ = lean_nat_shiftr(v___x_4216_, v___x_4217_);
lean_dec(v___x_4216_);
v___x_4231_ = lean_array_fget_borrowed(v_as_4201_, v_mid_4218_);
v___x_4232_ = lean_array_fget_borrowed(v_as_4201_, v_lo_4202_);
v___x_4233_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4199_, v___x_4231_, v___x_4232_);
if (v___x_4233_ == 0)
{
v___y_4226_ = v_as_4201_;
goto v___jp_4225_;
}
else
{
lean_object* v___x_4234_; 
v___x_4234_ = lean_array_fswap(v_as_4201_, v_lo_4202_, v_mid_4218_);
v___y_4226_ = v___x_4234_;
goto v___jp_4225_;
}
v___jp_4219_:
{
lean_object* v___x_4221_; lean_object* v___x_4222_; uint8_t v___x_4223_; 
v___x_4221_ = lean_array_fget_borrowed(v___y_4220_, v_mid_4218_);
v___x_4222_ = lean_array_fget_borrowed(v___y_4220_, v_hi_4203_);
v___x_4223_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4199_, v___x_4221_, v___x_4222_);
if (v___x_4223_ == 0)
{
lean_dec(v_mid_4218_);
v___y_4205_ = v___y_4220_;
goto v___jp_4204_;
}
else
{
lean_object* v___x_4224_; 
v___x_4224_ = lean_array_fswap(v___y_4220_, v_mid_4218_, v_hi_4203_);
lean_dec(v_mid_4218_);
v___y_4205_ = v___x_4224_;
goto v___jp_4204_;
}
}
v___jp_4225_:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; uint8_t v___x_4229_; 
v___x_4227_ = lean_array_fget_borrowed(v___y_4226_, v_hi_4203_);
v___x_4228_ = lean_array_fget_borrowed(v___y_4226_, v_lo_4202_);
v___x_4229_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___lam__0(v___x_4199_, v___x_4227_, v___x_4228_);
if (v___x_4229_ == 0)
{
v___y_4220_ = v___y_4226_;
goto v___jp_4219_;
}
else
{
lean_object* v___x_4230_; 
v___x_4230_ = lean_array_fswap(v___y_4226_, v_lo_4202_, v_hi_4203_);
v___y_4220_ = v___x_4230_;
goto v___jp_4219_;
}
}
}
v___jp_4204_:
{
lean_object* v_pivot_4206_; lean_object* v___x_4207_; lean_object* v_fst_4208_; lean_object* v_snd_4209_; uint8_t v___x_4210_; 
v_pivot_4206_ = lean_array_fget(v___y_4205_, v_hi_4203_);
lean_inc_n(v_lo_4202_, 2);
v___x_4207_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4199_, v_hi_4203_, v_pivot_4206_, v___y_4205_, v_lo_4202_, v_lo_4202_);
lean_dec(v_pivot_4206_);
v_fst_4208_ = lean_ctor_get(v___x_4207_, 0);
lean_inc(v_fst_4208_);
v_snd_4209_ = lean_ctor_get(v___x_4207_, 1);
lean_inc(v_snd_4209_);
lean_dec_ref(v___x_4207_);
v___x_4210_ = lean_nat_dec_le(v_hi_4203_, v_fst_4208_);
if (v___x_4210_ == 0)
{
lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4211_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4199_, v_n_4200_, v_snd_4209_, v_lo_4202_, v_fst_4208_);
v___x_4212_ = lean_unsigned_to_nat(1u);
v___x_4213_ = lean_nat_add(v_fst_4208_, v___x_4212_);
lean_dec(v_fst_4208_);
v_as_4201_ = v___x_4211_;
v_lo_4202_ = v___x_4213_;
goto _start;
}
else
{
lean_dec(v_fst_4208_);
lean_dec(v_lo_4202_);
return v_snd_4209_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg___boxed(lean_object* v___x_4235_, lean_object* v_n_4236_, lean_object* v_as_4237_, lean_object* v_lo_4238_, lean_object* v_hi_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4235_, v_n_4236_, v_as_4237_, v_lo_4238_, v_hi_4239_);
lean_dec(v_hi_4239_);
lean_dec(v_n_4236_);
lean_dec_ref(v___x_4235_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(lean_object* v_modName_4244_, lean_object* v_decls_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_){
_start:
{
lean_object* v___x_4249_; 
v___x_4249_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_decls_4245_, v_a_4246_, v_a_4247_);
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4250_; lean_object* v_fst_4251_; lean_object* v_snd_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___y_4256_; lean_object* v___x_4284_; uint8_t v___x_4285_; 
v_a_4250_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v___x_4249_, 1);
v_fst_4251_ = lean_ctor_get(v_a_4250_, 0);
lean_inc(v_fst_4251_);
v_snd_4252_ = lean_ctor_get(v_a_4250_, 1);
lean_inc(v_snd_4252_);
lean_dec(v_a_4250_);
v___x_4253_ = lean_st_ref_get(v_a_4247_);
v___x_4254_ = lean_unsigned_to_nat(0u);
v___x_4284_ = lean_array_get_size(v_fst_4251_);
v___x_4285_ = lean_nat_dec_eq(v___x_4284_, v___x_4254_);
if (v___x_4285_ == 0)
{
lean_object* v_env_4286_; lean_object* v___x_4287_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___y_4295_; uint8_t v___x_4297_; 
v_env_4286_ = lean_ctor_get(v___x_4253_, 0);
lean_inc_ref(v_env_4286_);
lean_dec(v___x_4253_);
v___x_4287_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_4286_, v_decls_4245_);
v___x_4292_ = lean_unsigned_to_nat(1u);
v___x_4293_ = lean_nat_sub(v___x_4284_, v___x_4292_);
v___x_4297_ = lean_nat_dec_le(v___x_4254_, v___x_4293_);
if (v___x_4297_ == 0)
{
lean_inc(v___x_4293_);
v___y_4295_ = v___x_4293_;
goto v___jp_4294_;
}
else
{
v___y_4295_ = v___x_4254_;
goto v___jp_4294_;
}
v___jp_4288_:
{
lean_object* v___x_4291_; 
v___x_4291_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4287_, v___x_4284_, v_fst_4251_, v___y_4289_, v___y_4290_);
lean_dec(v___y_4290_);
lean_dec_ref(v___x_4287_);
v___y_4256_ = v___x_4291_;
goto v___jp_4255_;
}
v___jp_4294_:
{
uint8_t v___x_4296_; 
v___x_4296_ = lean_nat_dec_le(v___y_4295_, v___x_4293_);
if (v___x_4296_ == 0)
{
lean_dec(v___x_4293_);
lean_inc(v___y_4295_);
v___y_4289_ = v___y_4295_;
v___y_4290_ = v___y_4295_;
goto v___jp_4288_;
}
else
{
v___y_4289_ = v___y_4295_;
v___y_4290_ = v___x_4293_;
goto v___jp_4288_;
}
}
}
else
{
lean_dec(v___x_4253_);
v___y_4256_ = v_fst_4251_;
goto v___jp_4255_;
}
v___jp_4255_:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
lean_inc_ref(v___y_4256_);
v___x_4257_ = lean_array_to_list(v___y_4256_);
v___x_4258_ = lean_box(0);
v___x_4259_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4256_, v_snd_4252_, v_modName_4244_, v___x_4257_, v___x_4258_, v_a_4246_, v_a_4247_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4275_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4262_ = v___x_4259_;
v_isShared_4263_ = v_isSharedCheck_4275_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4259_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4275_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4273_; 
v___x_4264_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_4265_ = lean_array_mk(v_a_4260_);
v___x_4266_ = l_Array_append___redArg(v___x_4264_, v___x_4265_);
lean_dec_ref(v___x_4265_);
v___x_4267_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_4268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4266_);
v___x_4269_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_4270_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4267_);
lean_ctor_set(v___x_4270_, 1, v___x_4268_);
lean_ctor_set(v___x_4270_, 2, v___x_4269_);
lean_ctor_set(v___x_4270_, 3, v___x_4269_);
v___x_4271_ = l_Lean_Compiler_Yul_Printer_render(v___x_4270_);
lean_dec_ref_known(v___x_4270_, 4);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4271_);
v___x_4273_ = v___x_4262_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v___x_4271_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
}
else
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4283_; 
v_a_4276_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4283_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4283_ == 0)
{
v___x_4278_ = v___x_4259_;
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___x_4259_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4281_; 
if (v_isShared_4279_ == 0)
{
v___x_4281_ = v___x_4278_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v_a_4276_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
}
}
}
else
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4305_; 
lean_dec(v_modName_4244_);
v_a_4298_ = lean_ctor_get(v___x_4249_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v___x_4249_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4300_ = v___x_4249_;
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v___x_4249_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4303_; 
if (v_isShared_4301_ == 0)
{
v___x_4303_ = v___x_4300_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v_a_4298_);
v___x_4303_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
return v___x_4303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___boxed(lean_object* v_modName_4306_, lean_object* v_decls_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_){
_start:
{
lean_object* v_res_4311_; 
v_res_4311_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_4306_, v_decls_4307_, v_a_4308_, v_a_4309_);
lean_dec(v_a_4309_);
lean_dec_ref(v_a_4308_);
lean_dec_ref(v_decls_4307_);
return v_res_4311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(lean_object* v___x_4312_, lean_object* v_n_4313_, lean_object* v_as_4314_, lean_object* v_lo_4315_, lean_object* v_hi_4316_, lean_object* v_w_4317_, lean_object* v_hlo_4318_, lean_object* v_hhi_4319_){
_start:
{
lean_object* v___x_4320_; 
v___x_4320_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4312_, v_n_4313_, v_as_4314_, v_lo_4315_, v_hi_4316_);
return v___x_4320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___boxed(lean_object* v___x_4321_, lean_object* v_n_4322_, lean_object* v_as_4323_, lean_object* v_lo_4324_, lean_object* v_hi_4325_, lean_object* v_w_4326_, lean_object* v_hlo_4327_, lean_object* v_hhi_4328_){
_start:
{
lean_object* v_res_4329_; 
v_res_4329_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2(v___x_4321_, v_n_4322_, v_as_4323_, v_lo_4324_, v_hi_4325_, v_w_4326_, v_hlo_4327_, v_hhi_4328_);
lean_dec(v_hi_4325_);
lean_dec(v_n_4322_);
lean_dec_ref(v___x_4321_);
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(lean_object* v___x_4330_, lean_object* v_n_4331_, lean_object* v_lo_4332_, lean_object* v_hi_4333_, lean_object* v_hhi_4334_, lean_object* v_pivot_4335_, lean_object* v_as_4336_, lean_object* v_i_4337_, lean_object* v_k_4338_, lean_object* v_ilo_4339_, lean_object* v_ik_4340_, lean_object* v_w_4341_){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___redArg(v___x_4330_, v_hi_4333_, v_pivot_4335_, v_as_4336_, v_i_4337_, v_k_4338_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3___boxed(lean_object* v___x_4343_, lean_object* v_n_4344_, lean_object* v_lo_4345_, lean_object* v_hi_4346_, lean_object* v_hhi_4347_, lean_object* v_pivot_4348_, lean_object* v_as_4349_, lean_object* v_i_4350_, lean_object* v_k_4351_, lean_object* v_ilo_4352_, lean_object* v_ik_4353_, lean_object* v_w_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2_spec__3(v___x_4343_, v_n_4344_, v_lo_4345_, v_hi_4346_, v_hhi_4347_, v_pivot_4348_, v_as_4349_, v_i_4350_, v_k_4351_, v_ilo_4352_, v_ik_4353_, v_w_4354_);
lean_dec_ref(v_pivot_4348_);
lean_dec(v_hi_4346_);
lean_dec(v_lo_4345_);
lean_dec(v_n_4344_);
lean_dec_ref(v___x_4343_);
return v_res_4355_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0(void){
_start:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4356_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitStringLit___closed__2);
v___x_4357_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1, &l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_freeMemPtrExpr___closed__1);
v___x_4358_ = lean_unsigned_to_nat(2u);
v___x_4359_ = lean_mk_empty_array_with_capacity(v___x_4358_);
v___x_4360_ = lean_array_push(v___x_4359_, v___x_4357_);
v___x_4361_ = lean_array_push(v___x_4360_, v___x_4356_);
return v___x_4361_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__0);
v___x_4363_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_ctorSetStmt___closed__0));
v___x_4364_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4364_, 0, v___x_4363_);
lean_ctor_set(v___x_4364_, 1, v___x_4362_);
return v___x_4364_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2(void){
_start:
{
lean_object* v___x_4365_; lean_object* v___x_4366_; 
v___x_4365_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__1);
v___x_4366_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4366_, 0, v___x_4365_);
return v___x_4366_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3(void){
_start:
{
lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4367_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__2);
v___x_4368_ = lean_unsigned_to_nat(2u);
v___x_4369_ = lean_mk_empty_array_with_capacity(v___x_4368_);
v___x_4370_ = lean_array_push(v___x_4369_, v___x_4367_);
return v___x_4370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract(lean_object* v_modName_4371_, lean_object* v_methods_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_){
_start:
{
lean_object* v___x_4376_; 
v___x_4376_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4374_);
if (lean_obj_tag(v___x_4376_) == 0)
{
lean_object* v_a_4377_; lean_object* v___x_4378_; 
v_a_4377_ = lean_ctor_get(v___x_4376_, 0);
lean_inc(v_a_4377_);
lean_dec_ref_known(v___x_4376_, 1);
v___x_4378_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_a_4377_, v_a_4373_, v_a_4374_);
lean_dec(v_a_4377_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v_fst_4380_; lean_object* v_snd_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref_known(v___x_4378_, 1);
v_fst_4380_ = lean_ctor_get(v_a_4379_, 0);
lean_inc(v_fst_4380_);
v_snd_4381_ = lean_ctor_get(v_a_4379_, 1);
lean_inc(v_snd_4381_);
lean_dec(v_a_4379_);
v___x_4382_ = lean_st_ref_get(v_a_4374_);
v___x_4383_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4374_);
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4384_; lean_object* v___x_4385_; lean_object* v___y_4387_; lean_object* v___x_4419_; uint8_t v___x_4420_; 
v_a_4384_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4384_);
lean_dec_ref_known(v___x_4383_, 1);
v___x_4385_ = lean_unsigned_to_nat(0u);
v___x_4419_ = lean_array_get_size(v_fst_4380_);
v___x_4420_ = lean_nat_dec_eq(v___x_4419_, v___x_4385_);
if (v___x_4420_ == 0)
{
lean_object* v_env_4421_; lean_object* v___x_4422_; lean_object* v___y_4424_; lean_object* v___y_4425_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___y_4430_; uint8_t v___x_4432_; 
v_env_4421_ = lean_ctor_get(v___x_4382_, 0);
lean_inc_ref(v_env_4421_);
lean_dec(v___x_4382_);
v___x_4422_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_4421_, v_a_4384_);
lean_dec(v_a_4384_);
v___x_4427_ = lean_unsigned_to_nat(1u);
v___x_4428_ = lean_nat_sub(v___x_4419_, v___x_4427_);
v___x_4432_ = lean_nat_dec_le(v___x_4385_, v___x_4428_);
if (v___x_4432_ == 0)
{
lean_inc(v___x_4428_);
v___y_4430_ = v___x_4428_;
goto v___jp_4429_;
}
else
{
v___y_4430_ = v___x_4385_;
goto v___jp_4429_;
}
v___jp_4423_:
{
lean_object* v___x_4426_; 
v___x_4426_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__2___redArg(v___x_4422_, v___x_4419_, v_fst_4380_, v___y_4424_, v___y_4425_);
lean_dec(v___y_4425_);
lean_dec_ref(v___x_4422_);
v___y_4387_ = v___x_4426_;
goto v___jp_4386_;
}
v___jp_4429_:
{
uint8_t v___x_4431_; 
v___x_4431_ = lean_nat_dec_le(v___y_4430_, v___x_4428_);
if (v___x_4431_ == 0)
{
lean_dec(v___x_4428_);
lean_inc(v___y_4430_);
v___y_4424_ = v___y_4430_;
v___y_4425_ = v___y_4430_;
goto v___jp_4423_;
}
else
{
v___y_4424_ = v___y_4430_;
v___y_4425_ = v___x_4428_;
goto v___jp_4423_;
}
}
}
else
{
lean_dec(v_a_4384_);
lean_dec(v___x_4382_);
v___y_4387_ = v_fst_4380_;
goto v___jp_4386_;
}
v___jp_4386_:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; 
lean_inc_ref(v___y_4387_);
v___x_4388_ = lean_array_to_list(v___y_4387_);
v___x_4389_ = lean_box(0);
v___x_4390_ = l_List_filterMapM_loop___at___00Lean_Compiler_LCNF_EmitYul_emitYulForDecls_spec__0(v___y_4387_, v_snd_4381_, v_modName_4371_, v___x_4388_, v___x_4389_, v_a_4373_, v_a_4374_);
if (lean_obj_tag(v___x_4390_) == 0)
{
lean_object* v_a_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4410_; 
v_a_4391_ = lean_ctor_get(v___x_4390_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4390_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4393_ = v___x_4390_;
v_isShared_4394_ = v_isSharedCheck_4410_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_a_4391_);
lean_dec(v___x_4390_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4410_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4408_; 
v___x_4395_ = l_Lean_Compiler_LCNF_EmitYul_dispatchBlock(v_methods_4372_);
v___x_4396_ = lean_obj_once(&l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3, &l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3_once, _init_l_Lean_Compiler_LCNF_EmitYul_emitYulContract___closed__3);
v___x_4397_ = lean_array_push(v___x_4396_, v___x_4395_);
v___x_4398_ = l_Lean_Compiler_LCNF_EmitYul_runtimeHelpers;
v___x_4399_ = l_Array_append___redArg(v___x_4397_, v___x_4398_);
v___x_4400_ = lean_array_mk(v_a_4391_);
v___x_4401_ = l_Array_append___redArg(v___x_4399_, v___x_4400_);
lean_dec_ref(v___x_4400_);
v___x_4402_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__0));
v___x_4403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4401_);
v___x_4404_ = ((lean_object*)(l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls___closed__1));
v___x_4405_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4405_, 0, v___x_4402_);
lean_ctor_set(v___x_4405_, 1, v___x_4403_);
lean_ctor_set(v___x_4405_, 2, v___x_4404_);
lean_ctor_set(v___x_4405_, 3, v___x_4404_);
v___x_4406_ = l_Lean_Compiler_Yul_Printer_render(v___x_4405_);
lean_dec_ref_known(v___x_4405_, 4);
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 0, v___x_4406_);
v___x_4408_ = v___x_4393_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v___x_4406_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
else
{
lean_object* v_a_4411_; lean_object* v___x_4413_; uint8_t v_isShared_4414_; uint8_t v_isSharedCheck_4418_; 
lean_dec_ref(v_methods_4372_);
v_a_4411_ = lean_ctor_get(v___x_4390_, 0);
v_isSharedCheck_4418_ = !lean_is_exclusive(v___x_4390_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4413_ = v___x_4390_;
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
else
{
lean_inc(v_a_4411_);
lean_dec(v___x_4390_);
v___x_4413_ = lean_box(0);
v_isShared_4414_ = v_isSharedCheck_4418_;
goto v_resetjp_4412_;
}
v_resetjp_4412_:
{
lean_object* v___x_4416_; 
if (v_isShared_4414_ == 0)
{
v___x_4416_ = v___x_4413_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_a_4411_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
}
}
}
else
{
lean_object* v_a_4433_; lean_object* v___x_4435_; uint8_t v_isShared_4436_; uint8_t v_isSharedCheck_4440_; 
lean_dec(v___x_4382_);
lean_dec(v_snd_4381_);
lean_dec(v_fst_4380_);
lean_dec_ref(v_methods_4372_);
lean_dec(v_modName_4371_);
v_a_4433_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4440_ == 0)
{
v___x_4435_ = v___x_4383_;
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
else
{
lean_inc(v_a_4433_);
lean_dec(v___x_4383_);
v___x_4435_ = lean_box(0);
v_isShared_4436_ = v_isSharedCheck_4440_;
goto v_resetjp_4434_;
}
v_resetjp_4434_:
{
lean_object* v___x_4438_; 
if (v_isShared_4436_ == 0)
{
v___x_4438_ = v___x_4435_;
goto v_reusejp_4437_;
}
else
{
lean_object* v_reuseFailAlloc_4439_; 
v_reuseFailAlloc_4439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4439_, 0, v_a_4433_);
v___x_4438_ = v_reuseFailAlloc_4439_;
goto v_reusejp_4437_;
}
v_reusejp_4437_:
{
return v___x_4438_;
}
}
}
}
else
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4448_; 
lean_dec_ref(v_methods_4372_);
lean_dec(v_modName_4371_);
v_a_4441_ = lean_ctor_get(v___x_4378_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4378_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4443_ = v___x_4378_;
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4378_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4446_; 
if (v_isShared_4444_ == 0)
{
v___x_4446_ = v___x_4443_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v_a_4441_);
v___x_4446_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
return v___x_4446_;
}
}
}
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_dec_ref(v_methods_4372_);
lean_dec(v_modName_4371_);
v_a_4449_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4376_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4376_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYulContract___boxed(lean_object* v_modName_4457_, lean_object* v_methods_4458_, lean_object* v_a_4459_, lean_object* v_a_4460_, lean_object* v_a_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l_Lean_Compiler_LCNF_EmitYul_emitYulContract(v_modName_4457_, v_methods_4458_, v_a_4459_, v_a_4460_);
lean_dec(v_a_4460_);
lean_dec_ref(v_a_4459_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul(lean_object* v_modName_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_){
_start:
{
lean_object* v___x_4467_; 
v___x_4467_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_4465_);
if (lean_obj_tag(v___x_4467_) == 0)
{
lean_object* v_a_4468_; lean_object* v___x_4469_; 
v_a_4468_ = lean_ctor_get(v___x_4467_, 0);
lean_inc(v_a_4468_);
lean_dec_ref_known(v___x_4467_, 1);
v___x_4469_ = l_Lean_Compiler_LCNF_EmitYul_emitYulForDecls(v_modName_4463_, v_a_4468_, v_a_4464_, v_a_4465_);
lean_dec(v_a_4468_);
return v___x_4469_;
}
else
{
lean_object* v_a_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4477_; 
lean_dec(v_modName_4463_);
v_a_4470_ = lean_ctor_get(v___x_4467_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4467_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4472_ = v___x_4467_;
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_a_4470_);
lean_dec(v___x_4467_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4475_; 
if (v_isShared_4473_ == 0)
{
v___x_4475_ = v___x_4472_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4470_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_EmitYul_emitYul___boxed(lean_object* v_modName_4478_, lean_object* v_a_4479_, lean_object* v_a_4480_, lean_object* v_a_4481_){
_start:
{
lean_object* v_res_4482_; 
v_res_4482_ = l_Lean_Compiler_LCNF_EmitYul_emitYul(v_modName_4478_, v_a_4479_, v_a_4480_);
lean_dec(v_a_4480_);
lean_dec_ref(v_a_4479_);
return v_res_4482_;
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
