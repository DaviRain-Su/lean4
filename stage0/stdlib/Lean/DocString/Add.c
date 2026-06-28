// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_document(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_block(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_doc_verso;
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Documentation comment has no source location, cannot parse"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__2 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__3 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value;
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__4 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__5 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__0 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__0_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringOfText___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringOfText___closed__1 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__1_value;
static const lean_closure_object l_Lean_versoDocStringOfText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__1_value)} };
static const lean_object* l_Lean_versoDocStringOfText___closed__2 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__2_value;
static const lean_array_object l_Lean_versoDocStringOfText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringOfText___closed__3 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__3_value;
static const lean_ctor_object l_Lean_versoDocStringOfText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value),((lean_object*)&l_Lean_versoDocStringOfText___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringOfText___closed__4 = (const lean_object*)&l_Lean_versoDocStringOfText___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_versoDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__0_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(13, 150, 193, 173, 39, 149, 4, 235)}};
static const lean_object* l_Lean_versoDocString___closed__0 = (const lean_object*)&l_Lean_versoDocString___closed__0_value;
static const lean_string_object l_Lean_versoDocString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l_Lean_versoDocString___closed__1 = (const lean_object*)&l_Lean_versoDocString___closed__1_value;
static const lean_string_object l_Lean_versoDocString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Syntax"};
static const lean_object* l_Lean_versoDocString___closed__2 = (const lean_object*)&l_Lean_versoDocString___closed__2_value;
static const lean_string_object l_Lean_versoDocString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "parseFailure"};
static const lean_object* l_Lean_versoDocString___closed__3 = (const lean_object*)&l_Lean_versoDocString___closed__3_value;
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_0),((lean_object*)&l_Lean_versoDocString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_1),((lean_object*)&l_Lean_versoDocString___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 108, 207, 58, 1, 109, 247, 255)}};
static const lean_ctor_object l_Lean_versoDocString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_versoDocString___closed__4_value_aux_2),((lean_object*)&l_Lean_versoDocString___closed__3_value),LEAN_SCALAR_PTR_LITERAL(229, 162, 159, 121, 181, 7, 46, 32)}};
static const lean_object* l_Lean_versoDocString___closed__4 = (const lean_object*)&l_Lean_versoDocString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_versoDocStringFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringFromString___closed__0 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__0_value;
static const lean_string_object l_Lean_versoDocStringFromString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_versoDocStringFromString___closed__1 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__1_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__2 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__2_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__2_value),((lean_object*)&l_Lean_versoDocStringFromString___closed__0_value)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__3 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration '"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is in an imported module"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Error adding module docs: "};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "Can't add Verso-format module docs because there is already Markdown-format content present."};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_makeDocStringVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__0 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__0_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static const lean_string_object l_Lean_makeDocStringVerso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is already in Verso format"};
static const lean_object* l_Lean_makeDocStringVerso___closed__2 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__2_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static const lean_string_object l_Lean_makeDocStringVerso___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "No documentation found for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__4 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__4_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static const lean_string_object l_Lean_makeDocStringVerso___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_makeDocStringVerso___closed__6 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__6_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_docstring_90_){
_start:
{
lean_object* v_toApplicative_91_; lean_object* v_toBind_92_; lean_object* v_toPure_93_; lean_object* v_str_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___y_100_; 
v_toApplicative_91_ = lean_ctor_get(v_inst_85_, 0);
v_toBind_92_ = lean_ctor_get(v_inst_85_, 1);
lean_inc(v_toBind_92_);
v_toPure_93_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_inc_n(v_toPure_93_, 2);
v_str_94_ = l_Lean_TSyntax_getDocString(v_docstring_90_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_docstring_90_, v___x_95_);
v___x_97_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_96_);
lean_dec(v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_98_, 0, v_toPure_93_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_box(0);
v___y_100_ = v___x_106_;
goto v___jp_99_;
}
else
{
lean_object* v_val_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_97_, 1);
v___x_108_ = 0;
v___x_109_ = l_Lean_SourceInfo_getPos_x3f(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
v___y_100_ = v___x_109_;
goto v___jp_99_;
}
v___jp_99_:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_toBind_92_);
lean_inc_ref(v_str_94_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_101_, 0, v_toPure_93_);
lean_closure_set(v___f_101_, 1, v___y_100_);
lean_closure_set(v___f_101_, 2, v_str_94_);
lean_closure_set(v___f_101_, 3, v_inst_85_);
lean_closure_set(v___f_101_, 4, v_inst_87_);
lean_closure_set(v___f_101_, 5, v_inst_88_);
lean_closure_set(v___f_101_, 6, v_inst_89_);
lean_closure_set(v___f_101_, 7, v_toBind_92_);
lean_closure_set(v___f_101_, 8, v___f_98_);
v___x_102_ = l_Lean_rewriteManualLinksCore(v_str_94_);
v___x_103_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, v___x_102_);
v___x_104_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_103_);
v___x_105_ = lean_apply_4(v_toBind_92_, lean_box(0), lean_box(0), v___x_104_, v___f_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_docstring_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_validateDocComment___redArg(v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_, v_docstring_115_);
lean_dec(v_docstring_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_docstring_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_validateDocComment___redArg(v_inst_118_, v_inst_119_, v_inst_120_, v_inst_121_, v_inst_122_, v_docstring_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_docstring_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_validateDocComment(v_m_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_, v_inst_130_, v_docstring_131_);
lean_dec(v_docstring_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object* v_toApplicative_133_, lean_object* v_____s_134_){
_start:
{
lean_object* v_toPure_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v_toPure_135_ = lean_ctor_get(v_toApplicative_133_, 1);
lean_inc(v_toPure_135_);
lean_dec_ref(v_toApplicative_133_);
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_2(v_toPure_135_, lean_box(0), v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object* v_toApplicative_138_, lean_object* v_____r_139_){
_start:
{
lean_object* v_toPure_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_toPure_140_ = lean_ctor_get(v_toApplicative_138_, 1);
lean_inc(v_toPure_140_);
lean_dec_ref(v_toApplicative_138_);
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_2(v_toPure_140_, lean_box(0), v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object* v_toApplicative_143_, lean_object* v___x_144_, lean_object* v_____r_145_){
_start:
{
lean_object* v_toPure_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_toPure_146_ = lean_ctor_get(v_toApplicative_143_, 1);
lean_inc(v_toPure_146_);
lean_dec_ref(v_toApplicative_143_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_144_);
v___x_148_ = lean_apply_2(v_toPure_146_, lean_box(0), v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object* v_text_150_, lean_object* v_fst_151_, lean_object* v_snd_152_, uint8_t v___x_153_, lean_object* v_logMessage_154_, lean_object* v_toBind_155_, lean_object* v___f_156_, lean_object* v_____do__lift_157_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_158_ = l_Lean_FileMap_toPosition(v_text_150_, v_fst_151_);
v___x_159_ = lean_box(0);
v___x_160_ = 2;
v___x_161_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_162_ = l_Lean_Parser_Error_toString(v_snd_152_);
v___x_163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___x_164_ = l_Lean_MessageData_ofFormat(v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_165_, 0, v_____do__lift_157_);
lean_ctor_set(v___x_165_, 1, v___x_158_);
lean_ctor_set(v___x_165_, 2, v___x_159_);
lean_ctor_set(v___x_165_, 3, v___x_161_);
lean_ctor_set(v___x_165_, 4, v___x_164_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5, v___x_153_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5 + 1, v___x_160_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5 + 2, v___x_153_);
v___x_166_ = lean_apply_1(v_logMessage_154_, v___x_165_);
v___x_167_ = lean_apply_4(v_toBind_155_, lean_box(0), lean_box(0), v___x_166_, v___f_156_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object* v_text_168_, lean_object* v_fst_169_, lean_object* v_snd_170_, lean_object* v___x_171_, lean_object* v_logMessage_172_, lean_object* v_toBind_173_, lean_object* v___f_174_, lean_object* v_____do__lift_175_){
_start:
{
uint8_t v___x_1932__boxed_176_; lean_object* v_res_177_; 
v___x_1932__boxed_176_ = lean_unbox(v___x_171_);
v_res_177_ = l_Lean_parseVersoDocString___redArg___lam__3(v_text_168_, v_fst_169_, v_snd_170_, v___x_1932__boxed_176_, v_logMessage_172_, v_toBind_173_, v___f_174_, v_____do__lift_175_);
lean_dec(v_fst_169_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object* v_text_178_, uint8_t v___x_179_, lean_object* v_logMessage_180_, lean_object* v_toBind_181_, lean_object* v___f_182_, lean_object* v_getFileName_183_, lean_object* v_a_184_, lean_object* v_x_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_snd_187_; lean_object* v_fst_188_; lean_object* v_snd_189_; lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
v_snd_187_ = lean_ctor_get(v_a_184_, 1);
lean_inc(v_snd_187_);
v_fst_188_ = lean_ctor_get(v_a_184_, 0);
lean_inc(v_fst_188_);
lean_dec_ref(v_a_184_);
v_snd_189_ = lean_ctor_get(v_snd_187_, 1);
lean_inc(v_snd_189_);
lean_dec(v_snd_187_);
v___x_190_ = lean_box(v___x_179_);
lean_inc(v_toBind_181_);
v___f_191_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_191_, 0, v_text_178_);
lean_closure_set(v___f_191_, 1, v_fst_188_);
lean_closure_set(v___f_191_, 2, v_snd_189_);
lean_closure_set(v___f_191_, 3, v___x_190_);
lean_closure_set(v___f_191_, 4, v_logMessage_180_);
lean_closure_set(v___f_191_, 5, v_toBind_181_);
lean_closure_set(v___f_191_, 6, v___f_182_);
v___x_192_ = lean_apply_4(v_toBind_181_, lean_box(0), lean_box(0), v_getFileName_183_, v___f_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object* v_text_193_, lean_object* v___x_194_, lean_object* v_logMessage_195_, lean_object* v_toBind_196_, lean_object* v___f_197_, lean_object* v_getFileName_198_, lean_object* v_a_199_, lean_object* v_x_200_, lean_object* v___y_201_){
_start:
{
uint8_t v___x_1966__boxed_202_; lean_object* v_res_203_; 
v___x_1966__boxed_202_ = lean_unbox(v___x_194_);
v_res_203_ = l_Lean_parseVersoDocString___redArg___lam__4(v_text_193_, v___x_1966__boxed_202_, v_logMessage_195_, v_toBind_196_, v___f_197_, v_getFileName_198_, v_a_199_, v_x_200_, v___y_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object* v_text_206_, lean_object* v_pos_207_, lean_object* v_source_208_, uint8_t v___x_209_, lean_object* v_logMessage_210_, lean_object* v_toBind_211_, lean_object* v___f_212_, lean_object* v_____do__lift_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint32_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_214_ = l_Lean_FileMap_toPosition(v_text_206_, v_pos_207_);
v___x_215_ = lean_box(0);
v___x_216_ = 2;
v___x_217_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_218_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_219_ = lean_string_utf8_get(v_source_208_, v_pos_207_);
v___x_220_ = lean_string_push(v___x_217_, v___x_219_);
v___x_221_ = lean_string_append(v___x_218_, v___x_220_);
lean_dec_ref(v___x_220_);
v___x_222_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_223_ = lean_string_append(v___x_221_, v___x_222_);
v___x_224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
v___x_225_ = l_Lean_MessageData_ofFormat(v___x_224_);
v___x_226_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_226_, 0, v_____do__lift_213_);
lean_ctor_set(v___x_226_, 1, v___x_214_);
lean_ctor_set(v___x_226_, 2, v___x_215_);
lean_ctor_set(v___x_226_, 3, v___x_217_);
lean_ctor_set(v___x_226_, 4, v___x_225_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5, v___x_209_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5 + 1, v___x_216_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5 + 2, v___x_209_);
v___x_227_ = lean_apply_1(v_logMessage_210_, v___x_226_);
v___x_228_ = lean_apply_4(v_toBind_211_, lean_box(0), lean_box(0), v___x_227_, v___f_212_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object* v_text_229_, lean_object* v_pos_230_, lean_object* v_source_231_, lean_object* v___x_232_, lean_object* v_logMessage_233_, lean_object* v_toBind_234_, lean_object* v___f_235_, lean_object* v_____do__lift_236_){
_start:
{
uint8_t v___x_1996__boxed_237_; lean_object* v_res_238_; 
v___x_1996__boxed_237_ = lean_unbox(v___x_232_);
v_res_238_ = l_Lean_parseVersoDocString___redArg___lam__5(v_text_229_, v_pos_230_, v_source_231_, v___x_1996__boxed_237_, v_logMessage_233_, v_toBind_234_, v___f_235_, v_____do__lift_236_);
lean_dec_ref(v_source_231_);
lean_dec(v_pos_230_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object* v_toApplicative_239_, lean_object* v_text_240_, lean_object* v_logMessage_241_, lean_object* v_toBind_242_, lean_object* v_getFileName_243_, lean_object* v_inst_244_, lean_object* v___f_245_, lean_object* v_ictx_246_, lean_object* v_source_247_, lean_object* v___f_248_, lean_object* v_env_249_, lean_object* v_____do__lift_250_, lean_object* v_____do__lift_251_, lean_object* v_val_252_, lean_object* v___y_253_, lean_object* v___x_254_, lean_object* v_____do__lift_255_){
_start:
{
lean_object* v___y_257_; lean_object* v_pmctx_280_; lean_object* v_blockCtxt_281_; lean_object* v___x_282_; lean_object* v_s_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_s_286_; uint8_t v___y_288_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
lean_inc_ref(v_env_249_);
v_pmctx_280_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_280_, 0, v_env_249_);
lean_ctor_set(v_pmctx_280_, 1, v_____do__lift_250_);
lean_ctor_set(v_pmctx_280_, 2, v_____do__lift_251_);
lean_ctor_set(v_pmctx_280_, 3, v_____do__lift_255_);
lean_inc(v_val_252_);
lean_inc_ref(v_text_240_);
v_blockCtxt_281_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_240_, v_val_252_, v___y_253_);
v___x_282_ = l_Lean_Parser_mkParserState(v_source_247_);
lean_inc_ref(v___x_282_);
v_s_283_ = l_Lean_Parser_ParserState_setPos(v___x_282_, v_val_252_);
v___x_284_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_284_, 0, v_blockCtxt_281_);
v___x_285_ = l_Lean_Parser_getTokenTable(v_env_249_);
lean_inc_ref(v___x_285_);
lean_inc_ref(v_pmctx_280_);
lean_inc_ref(v_ictx_246_);
v_s_286_ = l_Lean_Parser_ParserFn_run(v___x_284_, v_ictx_246_, v_pmctx_280_, v___x_285_, v_s_283_);
lean_inc_ref(v_s_286_);
v___x_298_ = l_Lean_Parser_ParserState_allErrors(v_s_286_);
v___x_299_ = lean_array_get_size(v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lean_nat_dec_eq(v___x_299_, v___x_300_);
if (v___x_301_ == 0)
{
v___y_288_ = v___x_301_;
goto v___jp_287_;
}
else
{
lean_object* v_pos_302_; uint8_t v___x_303_; 
v_pos_302_ = lean_ctor_get(v_s_286_, 2);
lean_inc(v_pos_302_);
v___x_303_ = l_Lean_Parser_InputContext_atEnd(v_ictx_246_, v_pos_302_);
lean_dec(v_pos_302_);
if (v___x_303_ == 0)
{
v___y_288_ = v___x_301_;
goto v___jp_287_;
}
else
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_282_);
lean_dec_ref_known(v_pmctx_280_, 4);
lean_dec(v___x_254_);
v___y_257_ = v_s_286_;
goto v___jp_256_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
lean_inc_ref(v___y_257_);
v___x_258_ = l_Lean_Parser_ParserState_allErrors(v___y_257_);
v___x_259_ = lean_array_get_size(v___x_258_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___f_263_; lean_object* v___x_264_; lean_object* v___f_265_; size_t v_sz_266_; size_t v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec_ref(v___y_257_);
lean_dec(v___f_248_);
lean_dec_ref(v_source_247_);
lean_dec_ref(v_ictx_246_);
v___x_262_ = lean_box(0);
v___f_263_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_263_, 0, v_toApplicative_239_);
lean_closure_set(v___f_263_, 1, v___x_262_);
v___x_264_ = lean_box(v___x_261_);
lean_inc(v_toBind_242_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__4___boxed), 9, 6);
lean_closure_set(v___f_265_, 0, v_text_240_);
lean_closure_set(v___f_265_, 1, v___x_264_);
lean_closure_set(v___f_265_, 2, v_logMessage_241_);
lean_closure_set(v___f_265_, 3, v_toBind_242_);
lean_closure_set(v___f_265_, 4, v___f_263_);
lean_closure_set(v___f_265_, 5, v_getFileName_243_);
v_sz_266_ = lean_array_size(v___x_258_);
v___x_267_ = ((size_t)0ULL);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_244_, v___x_258_, v___f_265_, v_sz_266_, v___x_267_, v___x_262_);
v___x_269_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v___x_268_, v___f_245_);
return v___x_269_;
}
else
{
lean_object* v_stxStack_270_; lean_object* v_pos_271_; uint8_t v___x_272_; 
lean_dec_ref(v___x_258_);
lean_dec(v___f_245_);
lean_dec_ref(v_inst_244_);
v_stxStack_270_ = lean_ctor_get(v___y_257_, 0);
lean_inc_ref(v_stxStack_270_);
v_pos_271_ = lean_ctor_get(v___y_257_, 2);
lean_inc(v_pos_271_);
lean_dec_ref(v___y_257_);
v___x_272_ = l_Lean_Parser_InputContext_atEnd(v_ictx_246_, v_pos_271_);
lean_dec_ref(v_ictx_246_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___f_274_; lean_object* v___x_275_; 
lean_dec_ref(v_stxStack_270_);
lean_dec_ref(v_toApplicative_239_);
v___x_273_ = lean_box(v___x_272_);
lean_inc(v_toBind_242_);
v___f_274_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_274_, 0, v_text_240_);
lean_closure_set(v___f_274_, 1, v_pos_271_);
lean_closure_set(v___f_274_, 2, v_source_247_);
lean_closure_set(v___f_274_, 3, v___x_273_);
lean_closure_set(v___f_274_, 4, v_logMessage_241_);
lean_closure_set(v___f_274_, 5, v_toBind_242_);
lean_closure_set(v___f_274_, 6, v___f_248_);
v___x_275_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v_getFileName_243_, v___f_274_);
return v___x_275_;
}
else
{
lean_object* v_toPure_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec(v_pos_271_);
lean_dec(v___f_248_);
lean_dec_ref(v_source_247_);
lean_dec(v_getFileName_243_);
lean_dec(v_toBind_242_);
lean_dec(v_logMessage_241_);
lean_dec_ref(v_text_240_);
v_toPure_276_ = lean_ctor_get(v_toApplicative_239_, 1);
lean_inc(v_toPure_276_);
lean_dec_ref(v_toApplicative_239_);
v___x_277_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_270_);
lean_dec_ref(v_stxStack_270_);
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
v___x_279_ = lean_apply_2(v_toPure_276_, lean_box(0), v___x_278_);
return v___x_279_;
}
}
}
v___jp_287_:
{
if (v___y_288_ == 0)
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_282_);
lean_dec_ref_known(v_pmctx_280_, 4);
lean_dec(v___x_254_);
v___y_257_ = v_s_286_;
goto v___jp_256_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v_pos_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_box(0);
v___x_291_ = lean_box(0);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_254_);
lean_ctor_set(v___x_292_, 1, v___x_289_);
v___x_293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_293_, 0, v___x_289_);
lean_ctor_set(v___x_293_, 1, v___x_290_);
lean_ctor_set(v___x_293_, 2, v___x_291_);
lean_ctor_set(v___x_293_, 3, v___x_292_);
lean_ctor_set(v___x_293_, 4, v___x_289_);
v_pos_294_ = lean_ctor_get(v_s_286_, 2);
lean_inc(v_pos_294_);
lean_dec_ref(v_s_286_);
v___x_295_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_295_, 0, v___x_293_);
v___x_296_ = l_Lean_Parser_ParserState_setPos(v___x_282_, v_pos_294_);
lean_inc_ref(v_ictx_246_);
v___x_297_ = l_Lean_Parser_ParserFn_run(v___x_295_, v_ictx_246_, v_pmctx_280_, v___x_285_, v___x_296_);
v___y_257_ = v___x_297_;
goto v___jp_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_toApplicative_304_ = _args[0];
lean_object* v_text_305_ = _args[1];
lean_object* v_logMessage_306_ = _args[2];
lean_object* v_toBind_307_ = _args[3];
lean_object* v_getFileName_308_ = _args[4];
lean_object* v_inst_309_ = _args[5];
lean_object* v___f_310_ = _args[6];
lean_object* v_ictx_311_ = _args[7];
lean_object* v_source_312_ = _args[8];
lean_object* v___f_313_ = _args[9];
lean_object* v_env_314_ = _args[10];
lean_object* v_____do__lift_315_ = _args[11];
lean_object* v_____do__lift_316_ = _args[12];
lean_object* v_val_317_ = _args[13];
lean_object* v___y_318_ = _args[14];
lean_object* v___x_319_ = _args[15];
lean_object* v_____do__lift_320_ = _args[16];
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_parseVersoDocString___redArg___lam__6(v_toApplicative_304_, v_text_305_, v_logMessage_306_, v_toBind_307_, v_getFileName_308_, v_inst_309_, v___f_310_, v_ictx_311_, v_source_312_, v___f_313_, v_env_314_, v_____do__lift_315_, v_____do__lift_316_, v_val_317_, v___y_318_, v___x_319_, v_____do__lift_320_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object* v_toApplicative_322_, lean_object* v_text_323_, lean_object* v_logMessage_324_, lean_object* v_toBind_325_, lean_object* v_getFileName_326_, lean_object* v_inst_327_, lean_object* v___f_328_, lean_object* v_ictx_329_, lean_object* v_source_330_, lean_object* v___f_331_, lean_object* v_env_332_, lean_object* v_____do__lift_333_, lean_object* v_val_334_, lean_object* v___y_335_, lean_object* v___x_336_, lean_object* v_getOpenDecls_337_, lean_object* v_____do__lift_338_){
_start:
{
lean_object* v___f_339_; lean_object* v___x_340_; 
lean_inc(v_toBind_325_);
v___f_339_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_339_, 0, v_toApplicative_322_);
lean_closure_set(v___f_339_, 1, v_text_323_);
lean_closure_set(v___f_339_, 2, v_logMessage_324_);
lean_closure_set(v___f_339_, 3, v_toBind_325_);
lean_closure_set(v___f_339_, 4, v_getFileName_326_);
lean_closure_set(v___f_339_, 5, v_inst_327_);
lean_closure_set(v___f_339_, 6, v___f_328_);
lean_closure_set(v___f_339_, 7, v_ictx_329_);
lean_closure_set(v___f_339_, 8, v_source_330_);
lean_closure_set(v___f_339_, 9, v___f_331_);
lean_closure_set(v___f_339_, 10, v_env_332_);
lean_closure_set(v___f_339_, 11, v_____do__lift_333_);
lean_closure_set(v___f_339_, 12, v_____do__lift_338_);
lean_closure_set(v___f_339_, 13, v_val_334_);
lean_closure_set(v___f_339_, 14, v___y_335_);
lean_closure_set(v___f_339_, 15, v___x_336_);
v___x_340_ = lean_apply_4(v_toBind_325_, lean_box(0), lean_box(0), v_getOpenDecls_337_, v___f_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_toApplicative_341_ = _args[0];
lean_object* v_text_342_ = _args[1];
lean_object* v_logMessage_343_ = _args[2];
lean_object* v_toBind_344_ = _args[3];
lean_object* v_getFileName_345_ = _args[4];
lean_object* v_inst_346_ = _args[5];
lean_object* v___f_347_ = _args[6];
lean_object* v_ictx_348_ = _args[7];
lean_object* v_source_349_ = _args[8];
lean_object* v___f_350_ = _args[9];
lean_object* v_env_351_ = _args[10];
lean_object* v_____do__lift_352_ = _args[11];
lean_object* v_val_353_ = _args[12];
lean_object* v___y_354_ = _args[13];
lean_object* v___x_355_ = _args[14];
lean_object* v_getOpenDecls_356_ = _args[15];
lean_object* v_____do__lift_357_ = _args[16];
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_parseVersoDocString___redArg___lam__7(v_toApplicative_341_, v_text_342_, v_logMessage_343_, v_toBind_344_, v_getFileName_345_, v_inst_346_, v___f_347_, v_ictx_348_, v_source_349_, v___f_350_, v_env_351_, v_____do__lift_352_, v_val_353_, v___y_354_, v___x_355_, v_getOpenDecls_356_, v_____do__lift_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object* v_inst_359_, lean_object* v_toApplicative_360_, lean_object* v_text_361_, lean_object* v_logMessage_362_, lean_object* v_toBind_363_, lean_object* v_getFileName_364_, lean_object* v_inst_365_, lean_object* v___f_366_, lean_object* v_ictx_367_, lean_object* v_source_368_, lean_object* v___f_369_, lean_object* v_env_370_, lean_object* v_val_371_, lean_object* v___y_372_, lean_object* v___x_373_, lean_object* v_____do__lift_374_){
_start:
{
lean_object* v_getCurrNamespace_375_; lean_object* v_getOpenDecls_376_; lean_object* v___f_377_; lean_object* v___x_378_; 
v_getCurrNamespace_375_ = lean_ctor_get(v_inst_359_, 0);
lean_inc(v_getCurrNamespace_375_);
v_getOpenDecls_376_ = lean_ctor_get(v_inst_359_, 1);
lean_inc(v_getOpenDecls_376_);
lean_dec_ref(v_inst_359_);
lean_inc(v_toBind_363_);
v___f_377_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__7___boxed), 17, 16);
lean_closure_set(v___f_377_, 0, v_toApplicative_360_);
lean_closure_set(v___f_377_, 1, v_text_361_);
lean_closure_set(v___f_377_, 2, v_logMessage_362_);
lean_closure_set(v___f_377_, 3, v_toBind_363_);
lean_closure_set(v___f_377_, 4, v_getFileName_364_);
lean_closure_set(v___f_377_, 5, v_inst_365_);
lean_closure_set(v___f_377_, 6, v___f_366_);
lean_closure_set(v___f_377_, 7, v_ictx_367_);
lean_closure_set(v___f_377_, 8, v_source_368_);
lean_closure_set(v___f_377_, 9, v___f_369_);
lean_closure_set(v___f_377_, 10, v_env_370_);
lean_closure_set(v___f_377_, 11, v_____do__lift_374_);
lean_closure_set(v___f_377_, 12, v_val_371_);
lean_closure_set(v___f_377_, 13, v___y_372_);
lean_closure_set(v___f_377_, 14, v___x_373_);
lean_closure_set(v___f_377_, 15, v_getOpenDecls_376_);
v___x_378_ = lean_apply_4(v_toBind_363_, lean_box(0), lean_box(0), v_getCurrNamespace_375_, v___f_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object* v_source_379_, lean_object* v_text_380_, lean_object* v___y_381_, lean_object* v_inst_382_, lean_object* v_toApplicative_383_, lean_object* v_logMessage_384_, lean_object* v_toBind_385_, lean_object* v_getFileName_386_, lean_object* v_inst_387_, lean_object* v___f_388_, lean_object* v___f_389_, lean_object* v_env_390_, lean_object* v_val_391_, lean_object* v___x_392_, lean_object* v_inst_393_, lean_object* v_____do__lift_394_){
_start:
{
lean_object* v_ictx_395_; lean_object* v___f_396_; lean_object* v___x_397_; 
lean_inc(v___y_381_);
lean_inc_ref(v_text_380_);
lean_inc_ref(v_source_379_);
v_ictx_395_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_395_, 0, v_source_379_);
lean_ctor_set(v_ictx_395_, 1, v_____do__lift_394_);
lean_ctor_set(v_ictx_395_, 2, v_text_380_);
lean_ctor_set(v_ictx_395_, 3, v___y_381_);
lean_inc(v_toBind_385_);
v___f_396_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__8), 16, 15);
lean_closure_set(v___f_396_, 0, v_inst_382_);
lean_closure_set(v___f_396_, 1, v_toApplicative_383_);
lean_closure_set(v___f_396_, 2, v_text_380_);
lean_closure_set(v___f_396_, 3, v_logMessage_384_);
lean_closure_set(v___f_396_, 4, v_toBind_385_);
lean_closure_set(v___f_396_, 5, v_getFileName_386_);
lean_closure_set(v___f_396_, 6, v_inst_387_);
lean_closure_set(v___f_396_, 7, v___f_388_);
lean_closure_set(v___f_396_, 8, v_ictx_395_);
lean_closure_set(v___f_396_, 9, v_source_379_);
lean_closure_set(v___f_396_, 10, v___f_389_);
lean_closure_set(v___f_396_, 11, v_env_390_);
lean_closure_set(v___f_396_, 12, v_val_391_);
lean_closure_set(v___f_396_, 13, v___y_381_);
lean_closure_set(v___f_396_, 14, v___x_392_);
v___x_397_ = lean_apply_4(v_toBind_385_, lean_box(0), lean_box(0), v_inst_393_, v___f_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object* v_inst_398_, lean_object* v_source_399_, lean_object* v_text_400_, lean_object* v___y_401_, lean_object* v_inst_402_, lean_object* v_toApplicative_403_, lean_object* v_toBind_404_, lean_object* v_inst_405_, lean_object* v___f_406_, lean_object* v___f_407_, lean_object* v_val_408_, lean_object* v___x_409_, lean_object* v_inst_410_, lean_object* v_env_411_){
_start:
{
lean_object* v_getFileName_412_; lean_object* v_logMessage_413_; lean_object* v___f_414_; lean_object* v___x_415_; 
v_getFileName_412_ = lean_ctor_get(v_inst_398_, 2);
lean_inc_n(v_getFileName_412_, 2);
v_logMessage_413_ = lean_ctor_get(v_inst_398_, 4);
lean_inc(v_logMessage_413_);
lean_dec_ref(v_inst_398_);
lean_inc(v_toBind_404_);
v___f_414_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__9), 16, 15);
lean_closure_set(v___f_414_, 0, v_source_399_);
lean_closure_set(v___f_414_, 1, v_text_400_);
lean_closure_set(v___f_414_, 2, v___y_401_);
lean_closure_set(v___f_414_, 3, v_inst_402_);
lean_closure_set(v___f_414_, 4, v_toApplicative_403_);
lean_closure_set(v___f_414_, 5, v_logMessage_413_);
lean_closure_set(v___f_414_, 6, v_toBind_404_);
lean_closure_set(v___f_414_, 7, v_getFileName_412_);
lean_closure_set(v___f_414_, 8, v_inst_405_);
lean_closure_set(v___f_414_, 9, v___f_406_);
lean_closure_set(v___f_414_, 10, v___f_407_);
lean_closure_set(v___f_414_, 11, v_env_411_);
lean_closure_set(v___f_414_, 12, v_val_408_);
lean_closure_set(v___f_414_, 13, v___x_409_);
lean_closure_set(v___f_414_, 14, v_inst_410_);
v___x_415_ = lean_apply_4(v_toBind_404_, lean_box(0), lean_box(0), v_getFileName_412_, v___f_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__11___closed__0));
v___x_418_ = l_Lean_stringToMessageData(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object* v_docComment_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_toApplicative_423_, lean_object* v_toBind_424_, lean_object* v_inst_425_, lean_object* v___f_426_, lean_object* v___f_427_, lean_object* v_inst_428_, lean_object* v_inst_429_, lean_object* v_text_430_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; lean_object* v___x_434_; 
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = l_Lean_Syntax_getArg(v_docComment_419_, v___x_431_);
v___x_433_ = 1;
v___x_434_ = l_Lean_Syntax_getPos_x3f(v___x_432_, v___x_433_);
if (lean_obj_tag(v___x_434_) == 1)
{
lean_object* v_val_435_; lean_object* v___x_436_; 
v_val_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_val_435_);
lean_dec_ref_known(v___x_434_, 1);
v___x_436_ = l_Lean_Syntax_getTailPos_x3f(v___x_432_, v___x_433_);
lean_dec(v___x_432_);
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_val_437_; lean_object* v_source_438_; lean_object* v___y_440_; lean_object* v___x_444_; lean_object* v_endPos_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
lean_dec_ref(v_inst_429_);
lean_dec(v_docComment_419_);
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref_known(v___x_436_, 1);
v_source_438_ = lean_ctor_get(v_text_430_, 0);
lean_inc_ref(v_source_438_);
v___x_444_ = lean_string_utf8_prev(v_source_438_, v_val_437_);
lean_dec(v_val_437_);
v_endPos_445_ = lean_string_utf8_prev(v_source_438_, v___x_444_);
lean_dec(v___x_444_);
v___x_446_ = lean_string_utf8_byte_size(v_source_438_);
v___x_447_ = lean_nat_dec_le(v_endPos_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec(v_endPos_445_);
v___y_440_ = v___x_446_;
goto v___jp_439_;
}
else
{
v___y_440_ = v_endPos_445_;
goto v___jp_439_;
}
v___jp_439_:
{
lean_object* v_getEnv_441_; lean_object* v___f_442_; lean_object* v___x_443_; 
v_getEnv_441_ = lean_ctor_get(v_inst_420_, 0);
lean_inc(v_getEnv_441_);
lean_dec_ref(v_inst_420_);
lean_inc(v_toBind_424_);
v___f_442_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__10), 14, 13);
lean_closure_set(v___f_442_, 0, v_inst_421_);
lean_closure_set(v___f_442_, 1, v_source_438_);
lean_closure_set(v___f_442_, 2, v_text_430_);
lean_closure_set(v___f_442_, 3, v___y_440_);
lean_closure_set(v___f_442_, 4, v_inst_422_);
lean_closure_set(v___f_442_, 5, v_toApplicative_423_);
lean_closure_set(v___f_442_, 6, v_toBind_424_);
lean_closure_set(v___f_442_, 7, v_inst_425_);
lean_closure_set(v___f_442_, 8, v___f_426_);
lean_closure_set(v___f_442_, 9, v___f_427_);
lean_closure_set(v___f_442_, 10, v_val_435_);
lean_closure_set(v___f_442_, 11, v___x_431_);
lean_closure_set(v___f_442_, 12, v_inst_428_);
v___x_443_ = lean_apply_4(v_toBind_424_, lean_box(0), lean_box(0), v_getEnv_441_, v___f_442_);
return v___x_443_;
}
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec(v___x_436_);
lean_dec(v_val_435_);
lean_dec_ref(v_text_430_);
lean_dec(v_inst_428_);
lean_dec(v___f_427_);
lean_dec(v___f_426_);
lean_dec(v_toBind_424_);
lean_dec_ref(v_toApplicative_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec_ref(v_inst_420_);
v___x_448_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_449_ = l_Lean_throwErrorAt___redArg(v_inst_425_, v_inst_429_, v_docComment_419_, v___x_448_);
return v___x_449_;
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v___x_434_);
lean_dec(v___x_432_);
lean_dec_ref(v_text_430_);
lean_dec(v_inst_428_);
lean_dec(v___f_427_);
lean_dec(v___f_426_);
lean_dec(v_toBind_424_);
lean_dec_ref(v_toApplicative_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec_ref(v_inst_420_);
v___x_450_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_451_ = l_Lean_throwErrorAt___redArg(v_inst_425_, v_inst_429_, v_docComment_419_, v___x_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_docComment_469_){
_start:
{
lean_object* v_toApplicative_470_; lean_object* v_toBind_471_; lean_object* v___f_472_; lean_object* v___f_473_; lean_object* v___f_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v_toApplicative_470_ = lean_ctor_get(v_inst_462_, 0);
lean_inc_ref_n(v_toApplicative_470_, 4);
v_toBind_471_ = lean_ctor_get(v_inst_462_, 1);
lean_inc_n(v_toBind_471_, 2);
v___f_472_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__0), 2, 1);
lean_closure_set(v___f_472_, 0, v_toApplicative_470_);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__1), 2, 1);
lean_closure_set(v___f_473_, 0, v_toApplicative_470_);
lean_inc_n(v_docComment_469_, 2);
v___f_474_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__11), 12, 11);
lean_closure_set(v___f_474_, 0, v_docComment_469_);
lean_closure_set(v___f_474_, 1, v_inst_465_);
lean_closure_set(v___f_474_, 2, v_inst_467_);
lean_closure_set(v___f_474_, 3, v_inst_468_);
lean_closure_set(v___f_474_, 4, v_toApplicative_470_);
lean_closure_set(v___f_474_, 5, v_toBind_471_);
lean_closure_set(v___f_474_, 6, v_inst_462_);
lean_closure_set(v___f_474_, 7, v___f_472_);
lean_closure_set(v___f_474_, 8, v___f_473_);
lean_closure_set(v___f_474_, 9, v_inst_466_);
lean_closure_set(v___f_474_, 10, v_inst_464_);
v___x_475_ = l_Lean_Syntax_getKind(v_docComment_469_);
v___x_476_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_477_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_478_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_479_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_480_ = lean_name_eq(v___x_475_, v___x_479_);
lean_dec(v___x_475_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
lean_dec_ref(v_toApplicative_470_);
lean_dec(v_docComment_469_);
v___x_481_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = l_Lean_Syntax_getArg(v_docComment_469_, v___x_482_);
lean_dec(v_docComment_469_);
if (lean_obj_tag(v___x_483_) == 1)
{
lean_object* v_kind_484_; 
v_kind_484_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_kind_484_);
if (lean_obj_tag(v_kind_484_) == 1)
{
lean_object* v_pre_485_; 
v_pre_485_ = lean_ctor_get(v_kind_484_, 0);
lean_inc(v_pre_485_);
if (lean_obj_tag(v_pre_485_) == 1)
{
lean_object* v_pre_486_; 
v_pre_486_ = lean_ctor_get(v_pre_485_, 0);
lean_inc(v_pre_486_);
if (lean_obj_tag(v_pre_486_) == 1)
{
lean_object* v_pre_487_; 
v_pre_487_ = lean_ctor_get(v_pre_486_, 0);
lean_inc(v_pre_487_);
if (lean_obj_tag(v_pre_487_) == 1)
{
lean_object* v_pre_488_; 
v_pre_488_ = lean_ctor_get(v_pre_487_, 0);
lean_inc(v_pre_488_);
if (lean_obj_tag(v_pre_488_) == 0)
{
lean_object* v_info_489_; lean_object* v_args_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_522_; 
v_info_489_ = lean_ctor_get(v___x_483_, 0);
v_args_490_ = lean_ctor_get(v___x_483_, 2);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; 
v_unused_523_ = lean_ctor_get(v___x_483_, 1);
lean_dec(v_unused_523_);
v___x_492_ = v___x_483_;
v_isShared_493_ = v_isSharedCheck_522_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_args_490_);
lean_inc(v_info_489_);
lean_dec(v___x_483_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_522_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v_str_494_; lean_object* v_str_495_; lean_object* v_str_496_; lean_object* v_str_497_; uint8_t v___x_498_; 
v_str_494_ = lean_ctor_get(v_kind_484_, 1);
lean_inc_ref(v_str_494_);
lean_dec_ref_known(v_kind_484_, 2);
v_str_495_ = lean_ctor_get(v_pre_485_, 1);
lean_inc_ref(v_str_495_);
lean_dec_ref_known(v_pre_485_, 2);
v_str_496_ = lean_ctor_get(v_pre_486_, 1);
lean_inc_ref(v_str_496_);
lean_dec_ref_known(v_pre_486_, 2);
v_str_497_ = lean_ctor_get(v_pre_487_, 1);
lean_inc_ref(v_str_497_);
lean_dec_ref_known(v_pre_487_, 2);
v___x_498_ = lean_string_dec_eq(v_str_497_, v___x_476_);
lean_dec_ref(v_str_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_dec_ref(v_str_496_);
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_499_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_499_;
}
else
{
uint8_t v___x_500_; 
v___x_500_ = lean_string_dec_eq(v_str_496_, v___x_477_);
lean_dec_ref(v_str_496_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; 
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_501_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_501_;
}
else
{
uint8_t v___x_502_; 
v___x_502_ = lean_string_dec_eq(v_str_495_, v___x_478_);
lean_dec_ref(v_str_495_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_503_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_505_ = lean_string_dec_eq(v_str_494_, v___x_504_);
lean_dec_ref(v_str_494_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; 
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_506_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_506_;
}
else
{
lean_dec_ref(v___f_474_);
lean_dec(v_toBind_471_);
lean_dec(v_inst_463_);
if (v___x_505_ == 0)
{
lean_object* v_toPure_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
v_toPure_507_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_inc(v_toPure_507_);
lean_dec_ref(v_toApplicative_470_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_apply_2(v_toPure_507_, lean_box(0), v___x_508_);
return v___x_509_;
}
else
{
lean_object* v_toPure_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v_toPure_510_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_inc(v_toPure_510_);
lean_dec_ref(v_toApplicative_470_);
v___x_511_ = l_Lean_Name_str___override(v_pre_488_, v___x_476_);
v___x_512_ = l_Lean_Name_str___override(v___x_511_, v___x_477_);
v___x_513_ = l_Lean_Name_str___override(v___x_512_, v___x_478_);
v___x_514_ = l_Lean_Name_str___override(v___x_513_, v___x_504_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 1, v___x_514_);
v___x_516_ = v___x_492_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_info_489_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_521_, 2, v_args_490_);
v___x_516_ = v_reuseFailAlloc_521_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = l_Lean_Syntax_getArg(v___x_516_, v___x_517_);
lean_dec_ref(v___x_516_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___x_520_ = lean_apply_2(v_toPure_510_, lean_box(0), v___x_519_);
return v___x_520_;
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
lean_object* v___x_524_; 
lean_dec_ref_known(v_pre_487_, 2);
lean_dec(v_pre_488_);
lean_dec_ref_known(v_pre_486_, 2);
lean_dec_ref_known(v_pre_485_, 2);
lean_dec_ref_known(v_kind_484_, 2);
lean_dec_ref_known(v___x_483_, 3);
lean_dec_ref(v_toApplicative_470_);
v___x_524_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_524_;
}
}
else
{
lean_object* v___x_525_; 
lean_dec(v_pre_487_);
lean_dec_ref_known(v_pre_486_, 2);
lean_dec_ref_known(v_pre_485_, 2);
lean_dec_ref_known(v_kind_484_, 2);
lean_dec_ref_known(v___x_483_, 3);
lean_dec_ref(v_toApplicative_470_);
v___x_525_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_525_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec(v_pre_486_);
lean_dec_ref_known(v_pre_485_, 2);
lean_dec_ref_known(v_kind_484_, 2);
lean_dec_ref_known(v___x_483_, 3);
lean_dec_ref(v_toApplicative_470_);
v___x_526_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_526_;
}
}
else
{
lean_object* v___x_527_; 
lean_dec(v_pre_485_);
lean_dec_ref_known(v_kind_484_, 2);
lean_dec_ref_known(v___x_483_, 3);
lean_dec_ref(v_toApplicative_470_);
v___x_527_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_527_;
}
}
else
{
lean_object* v___x_528_; 
lean_dec(v_kind_484_);
lean_dec_ref_known(v___x_483_, 3);
lean_dec_ref(v_toApplicative_470_);
v___x_528_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_528_;
}
}
else
{
lean_object* v___x_529_; 
lean_dec(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_529_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_m_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_inst_533_, lean_object* v_inst_534_, lean_object* v_inst_535_, lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_docComment_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_parseVersoDocString___redArg(v_inst_531_, v_inst_532_, v_inst_533_, v_inst_534_, v_inst_535_, v_inst_536_, v_inst_537_, v_docComment_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object* v___y_540_, lean_object* v_text_541_, lean_object* v_source_542_, lean_object* v_logMessage_543_, lean_object* v_____do__lift_544_){
_start:
{
lean_object* v_pos_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint32_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_pos_545_ = lean_ctor_get(v___y_540_, 2);
v___x_546_ = l_Lean_FileMap_toPosition(v_text_541_, v_pos_545_);
v___x_547_ = lean_box(0);
v___x_548_ = 0;
v___x_549_ = 2;
v___x_550_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_551_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_552_ = lean_string_utf8_get(v_source_542_, v_pos_545_);
v___x_553_ = lean_string_push(v___x_550_, v___x_552_);
v___x_554_ = lean_string_append(v___x_551_, v___x_553_);
lean_dec_ref(v___x_553_);
v___x_555_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_556_ = lean_string_append(v___x_554_, v___x_555_);
v___x_557_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
v___x_558_ = l_Lean_MessageData_ofFormat(v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_559_, 0, v_____do__lift_544_);
lean_ctor_set(v___x_559_, 1, v___x_546_);
lean_ctor_set(v___x_559_, 2, v___x_547_);
lean_ctor_set(v___x_559_, 3, v___x_550_);
lean_ctor_set(v___x_559_, 4, v___x_558_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5, v___x_548_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 1, v___x_549_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 2, v___x_548_);
v___x_560_ = lean_apply_1(v_logMessage_543_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object* v___y_561_, lean_object* v_text_562_, lean_object* v_source_563_, lean_object* v_logMessage_564_, lean_object* v_____do__lift_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_reportVersoParseFailure___redArg___lam__0(v___y_561_, v_text_562_, v_source_563_, v_logMessage_564_, v_____do__lift_565_);
lean_dec_ref(v_source_563_);
lean_dec_ref(v___y_561_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object* v_toPure_567_, lean_object* v_toBind_568_, lean_object* v_getFileName_569_, lean_object* v___f_570_, lean_object* v___x_571_, lean_object* v___x_572_, lean_object* v___y_573_, lean_object* v_ictx_574_, lean_object* v_____s_575_){
_start:
{
uint8_t v___y_580_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_582_ = lean_array_get_size(v___x_571_);
v___x_583_ = lean_nat_dec_eq(v___x_582_, v___x_572_);
if (v___x_583_ == 0)
{
v___y_580_ = v___x_583_;
goto v___jp_579_;
}
else
{
lean_object* v_pos_584_; uint8_t v___x_585_; 
v_pos_584_ = lean_ctor_get(v___y_573_, 2);
v___x_585_ = l_Lean_Parser_InputContext_atEnd(v_ictx_574_, v_pos_584_);
if (v___x_585_ == 0)
{
v___y_580_ = v___x_583_;
goto v___jp_579_;
}
else
{
lean_dec(v___f_570_);
lean_dec(v_getFileName_569_);
lean_dec(v_toBind_568_);
goto v___jp_576_;
}
}
v___jp_576_:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_box(0);
v___x_578_ = lean_apply_2(v_toPure_567_, lean_box(0), v___x_577_);
return v___x_578_;
}
v___jp_579_:
{
if (v___y_580_ == 0)
{
lean_dec(v___f_570_);
lean_dec(v_getFileName_569_);
lean_dec(v_toBind_568_);
goto v___jp_576_;
}
else
{
lean_object* v___x_581_; 
lean_dec(v_toPure_567_);
v___x_581_ = lean_apply_4(v_toBind_568_, lean_box(0), lean_box(0), v_getFileName_569_, v___f_570_);
return v___x_581_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object* v_toPure_586_, lean_object* v_toBind_587_, lean_object* v_getFileName_588_, lean_object* v___f_589_, lean_object* v___x_590_, lean_object* v___x_591_, lean_object* v___y_592_, lean_object* v_ictx_593_, lean_object* v_____s_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_reportVersoParseFailure___redArg___lam__1(v_toPure_586_, v_toBind_587_, v_getFileName_588_, v___f_589_, v___x_590_, v___x_591_, v___y_592_, v_ictx_593_, v_____s_594_);
lean_dec_ref(v_ictx_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___x_591_);
lean_dec_ref(v___x_590_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object* v___x_596_, lean_object* v_toPure_597_, lean_object* v_____r_598_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_596_);
v___x_600_ = lean_apply_2(v_toPure_597_, lean_box(0), v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object* v_text_601_, lean_object* v_fst_602_, lean_object* v_snd_603_, lean_object* v_logMessage_604_, lean_object* v_toBind_605_, lean_object* v___f_606_, lean_object* v_____do__lift_607_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; uint8_t v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_608_ = l_Lean_FileMap_toPosition(v_text_601_, v_fst_602_);
v___x_609_ = lean_box(0);
v___x_610_ = 0;
v___x_611_ = 2;
v___x_612_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_613_ = l_Lean_Parser_Error_toString(v_snd_603_);
v___x_614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
v___x_615_ = l_Lean_MessageData_ofFormat(v___x_614_);
v___x_616_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_616_, 0, v_____do__lift_607_);
lean_ctor_set(v___x_616_, 1, v___x_608_);
lean_ctor_set(v___x_616_, 2, v___x_609_);
lean_ctor_set(v___x_616_, 3, v___x_612_);
lean_ctor_set(v___x_616_, 4, v___x_615_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*5, v___x_610_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*5 + 1, v___x_611_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*5 + 2, v___x_610_);
v___x_617_ = lean_apply_1(v_logMessage_604_, v___x_616_);
v___x_618_ = lean_apply_4(v_toBind_605_, lean_box(0), lean_box(0), v___x_617_, v___f_606_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object* v_text_619_, lean_object* v_fst_620_, lean_object* v_snd_621_, lean_object* v_logMessage_622_, lean_object* v_toBind_623_, lean_object* v___f_624_, lean_object* v_____do__lift_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_reportVersoParseFailure___redArg___lam__3(v_text_619_, v_fst_620_, v_snd_621_, v_logMessage_622_, v_toBind_623_, v___f_624_, v_____do__lift_625_);
lean_dec(v_fst_620_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object* v_text_627_, lean_object* v_logMessage_628_, lean_object* v_toBind_629_, lean_object* v___f_630_, lean_object* v_getFileName_631_, lean_object* v_a_632_, lean_object* v_x_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_snd_635_; lean_object* v_fst_636_; lean_object* v_snd_637_; lean_object* v___f_638_; lean_object* v___x_639_; 
v_snd_635_ = lean_ctor_get(v_a_632_, 1);
lean_inc(v_snd_635_);
v_fst_636_ = lean_ctor_get(v_a_632_, 0);
lean_inc(v_fst_636_);
lean_dec_ref(v_a_632_);
v_snd_637_ = lean_ctor_get(v_snd_635_, 1);
lean_inc(v_snd_637_);
lean_dec(v_snd_635_);
lean_inc(v_toBind_629_);
v___f_638_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_638_, 0, v_text_627_);
lean_closure_set(v___f_638_, 1, v_fst_636_);
lean_closure_set(v___f_638_, 2, v_snd_637_);
lean_closure_set(v___f_638_, 3, v_logMessage_628_);
lean_closure_set(v___f_638_, 4, v_toBind_629_);
lean_closure_set(v___f_638_, 5, v___f_630_);
v___x_639_ = lean_apply_4(v_toBind_629_, lean_box(0), lean_box(0), v_getFileName_631_, v___f_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object* v_text_640_, lean_object* v_source_641_, lean_object* v_logMessage_642_, lean_object* v_toPure_643_, lean_object* v_toBind_644_, lean_object* v_getFileName_645_, lean_object* v___x_646_, lean_object* v_ictx_647_, lean_object* v_inst_648_, lean_object* v_env_649_, lean_object* v_____do__lift_650_, lean_object* v_____do__lift_651_, lean_object* v_val_652_, lean_object* v___y_653_, lean_object* v_____do__lift_654_){
_start:
{
lean_object* v___y_656_; lean_object* v_pmctx_667_; lean_object* v_blockCtxt_668_; lean_object* v___x_669_; lean_object* v_s_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v_s_673_; uint8_t v___y_675_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
lean_inc_ref(v_env_649_);
v_pmctx_667_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_667_, 0, v_env_649_);
lean_ctor_set(v_pmctx_667_, 1, v_____do__lift_650_);
lean_ctor_set(v_pmctx_667_, 2, v_____do__lift_651_);
lean_ctor_set(v_pmctx_667_, 3, v_____do__lift_654_);
lean_inc(v_val_652_);
lean_inc_ref(v_text_640_);
v_blockCtxt_668_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_640_, v_val_652_, v___y_653_);
v___x_669_ = l_Lean_Parser_mkParserState(v_source_641_);
lean_inc_ref(v___x_669_);
v_s_670_ = l_Lean_Parser_ParserState_setPos(v___x_669_, v_val_652_);
v___x_671_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_671_, 0, v_blockCtxt_668_);
v___x_672_ = l_Lean_Parser_getTokenTable(v_env_649_);
lean_inc_ref(v___x_672_);
lean_inc_ref(v_pmctx_667_);
lean_inc_ref(v_ictx_647_);
v_s_673_ = l_Lean_Parser_ParserFn_run(v___x_671_, v_ictx_647_, v_pmctx_667_, v___x_672_, v_s_670_);
lean_inc_ref(v_s_673_);
v___x_685_ = l_Lean_Parser_ParserState_allErrors(v_s_673_);
v___x_686_ = lean_array_get_size(v___x_685_);
lean_dec_ref(v___x_685_);
v___x_687_ = lean_nat_dec_eq(v___x_686_, v___x_646_);
if (v___x_687_ == 0)
{
v___y_675_ = v___x_687_;
goto v___jp_674_;
}
else
{
lean_object* v_pos_688_; uint8_t v___x_689_; 
v_pos_688_ = lean_ctor_get(v_s_673_, 2);
lean_inc(v_pos_688_);
v___x_689_ = l_Lean_Parser_InputContext_atEnd(v_ictx_647_, v_pos_688_);
lean_dec(v_pos_688_);
if (v___x_689_ == 0)
{
v___y_675_ = v___x_687_;
goto v___jp_674_;
}
else
{
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_669_);
lean_dec_ref_known(v_pmctx_667_, 4);
v___y_656_ = v_s_673_;
goto v___jp_655_;
}
}
v___jp_655_:
{
lean_object* v___f_657_; lean_object* v___x_658_; lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___f_661_; lean_object* v___f_662_; size_t v_sz_663_; size_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
lean_inc(v_logMessage_642_);
lean_inc_ref(v_text_640_);
lean_inc_ref_n(v___y_656_, 2);
v___f_657_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_657_, 0, v___y_656_);
lean_closure_set(v___f_657_, 1, v_text_640_);
lean_closure_set(v___f_657_, 2, v_source_641_);
lean_closure_set(v___f_657_, 3, v_logMessage_642_);
v___x_658_ = l_Lean_Parser_ParserState_allErrors(v___y_656_);
lean_inc_ref(v___x_658_);
lean_inc(v_getFileName_645_);
lean_inc_n(v_toBind_644_, 2);
lean_inc(v_toPure_643_);
v___f_659_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_659_, 0, v_toPure_643_);
lean_closure_set(v___f_659_, 1, v_toBind_644_);
lean_closure_set(v___f_659_, 2, v_getFileName_645_);
lean_closure_set(v___f_659_, 3, v___f_657_);
lean_closure_set(v___f_659_, 4, v___x_658_);
lean_closure_set(v___f_659_, 5, v___x_646_);
lean_closure_set(v___f_659_, 6, v___y_656_);
lean_closure_set(v___f_659_, 7, v_ictx_647_);
v___x_660_ = lean_box(0);
v___f_661_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__2), 3, 2);
lean_closure_set(v___f_661_, 0, v___x_660_);
lean_closure_set(v___f_661_, 1, v_toPure_643_);
v___f_662_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__4), 8, 5);
lean_closure_set(v___f_662_, 0, v_text_640_);
lean_closure_set(v___f_662_, 1, v_logMessage_642_);
lean_closure_set(v___f_662_, 2, v_toBind_644_);
lean_closure_set(v___f_662_, 3, v___f_661_);
lean_closure_set(v___f_662_, 4, v_getFileName_645_);
v_sz_663_ = lean_array_size(v___x_658_);
v___x_664_ = ((size_t)0ULL);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_648_, v___x_658_, v___f_662_, v_sz_663_, v___x_664_, v___x_660_);
v___x_666_ = lean_apply_4(v_toBind_644_, lean_box(0), lean_box(0), v___x_665_, v___f_659_);
return v___x_666_;
}
v___jp_674_:
{
if (v___y_675_ == 0)
{
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_669_);
lean_dec_ref_known(v_pmctx_667_, 4);
v___y_656_ = v_s_673_;
goto v___jp_655_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_pos_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_676_ = lean_box(0);
v___x_677_ = lean_box(0);
v___x_678_ = lean_unsigned_to_nat(1u);
lean_inc_n(v___x_646_, 3);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___x_646_);
v___x_680_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_680_, 0, v___x_646_);
lean_ctor_set(v___x_680_, 1, v___x_676_);
lean_ctor_set(v___x_680_, 2, v___x_677_);
lean_ctor_set(v___x_680_, 3, v___x_679_);
lean_ctor_set(v___x_680_, 4, v___x_646_);
v_pos_681_ = lean_ctor_get(v_s_673_, 2);
lean_inc(v_pos_681_);
lean_dec_ref(v_s_673_);
v___x_682_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_682_, 0, v___x_680_);
v___x_683_ = l_Lean_Parser_ParserState_setPos(v___x_669_, v_pos_681_);
lean_inc_ref(v_ictx_647_);
v___x_684_ = l_Lean_Parser_ParserFn_run(v___x_682_, v_ictx_647_, v_pmctx_667_, v___x_672_, v___x_683_);
v___y_656_ = v___x_684_;
goto v___jp_655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object* v_text_690_, lean_object* v_source_691_, lean_object* v_logMessage_692_, lean_object* v_toPure_693_, lean_object* v_toBind_694_, lean_object* v_getFileName_695_, lean_object* v___x_696_, lean_object* v_ictx_697_, lean_object* v_inst_698_, lean_object* v_env_699_, lean_object* v_____do__lift_700_, lean_object* v_val_701_, lean_object* v___y_702_, lean_object* v_getOpenDecls_703_, lean_object* v_____do__lift_704_){
_start:
{
lean_object* v___f_705_; lean_object* v___x_706_; 
lean_inc(v_toBind_694_);
v___f_705_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__5), 15, 14);
lean_closure_set(v___f_705_, 0, v_text_690_);
lean_closure_set(v___f_705_, 1, v_source_691_);
lean_closure_set(v___f_705_, 2, v_logMessage_692_);
lean_closure_set(v___f_705_, 3, v_toPure_693_);
lean_closure_set(v___f_705_, 4, v_toBind_694_);
lean_closure_set(v___f_705_, 5, v_getFileName_695_);
lean_closure_set(v___f_705_, 6, v___x_696_);
lean_closure_set(v___f_705_, 7, v_ictx_697_);
lean_closure_set(v___f_705_, 8, v_inst_698_);
lean_closure_set(v___f_705_, 9, v_env_699_);
lean_closure_set(v___f_705_, 10, v_____do__lift_700_);
lean_closure_set(v___f_705_, 11, v_____do__lift_704_);
lean_closure_set(v___f_705_, 12, v_val_701_);
lean_closure_set(v___f_705_, 13, v___y_702_);
v___x_706_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v_getOpenDecls_703_, v___f_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object* v_inst_707_, lean_object* v_text_708_, lean_object* v_source_709_, lean_object* v_logMessage_710_, lean_object* v_toPure_711_, lean_object* v_toBind_712_, lean_object* v_getFileName_713_, lean_object* v___x_714_, lean_object* v_ictx_715_, lean_object* v_inst_716_, lean_object* v_env_717_, lean_object* v_val_718_, lean_object* v___y_719_, lean_object* v_____do__lift_720_){
_start:
{
lean_object* v_getCurrNamespace_721_; lean_object* v_getOpenDecls_722_; lean_object* v___f_723_; lean_object* v___x_724_; 
v_getCurrNamespace_721_ = lean_ctor_get(v_inst_707_, 0);
lean_inc(v_getCurrNamespace_721_);
v_getOpenDecls_722_ = lean_ctor_get(v_inst_707_, 1);
lean_inc(v_getOpenDecls_722_);
lean_dec_ref(v_inst_707_);
lean_inc(v_toBind_712_);
v___f_723_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__6), 15, 14);
lean_closure_set(v___f_723_, 0, v_text_708_);
lean_closure_set(v___f_723_, 1, v_source_709_);
lean_closure_set(v___f_723_, 2, v_logMessage_710_);
lean_closure_set(v___f_723_, 3, v_toPure_711_);
lean_closure_set(v___f_723_, 4, v_toBind_712_);
lean_closure_set(v___f_723_, 5, v_getFileName_713_);
lean_closure_set(v___f_723_, 6, v___x_714_);
lean_closure_set(v___f_723_, 7, v_ictx_715_);
lean_closure_set(v___f_723_, 8, v_inst_716_);
lean_closure_set(v___f_723_, 9, v_env_717_);
lean_closure_set(v___f_723_, 10, v_____do__lift_720_);
lean_closure_set(v___f_723_, 11, v_val_718_);
lean_closure_set(v___f_723_, 12, v___y_719_);
lean_closure_set(v___f_723_, 13, v_getOpenDecls_722_);
v___x_724_ = lean_apply_4(v_toBind_712_, lean_box(0), lean_box(0), v_getCurrNamespace_721_, v___f_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object* v_source_725_, lean_object* v_text_726_, lean_object* v___y_727_, lean_object* v_inst_728_, lean_object* v_logMessage_729_, lean_object* v_toPure_730_, lean_object* v_toBind_731_, lean_object* v_getFileName_732_, lean_object* v___x_733_, lean_object* v_inst_734_, lean_object* v_env_735_, lean_object* v_val_736_, lean_object* v_inst_737_, lean_object* v_____do__lift_738_){
_start:
{
lean_object* v_ictx_739_; lean_object* v___f_740_; lean_object* v___x_741_; 
lean_inc(v___y_727_);
lean_inc_ref(v_text_726_);
lean_inc_ref(v_source_725_);
v_ictx_739_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_739_, 0, v_source_725_);
lean_ctor_set(v_ictx_739_, 1, v_____do__lift_738_);
lean_ctor_set(v_ictx_739_, 2, v_text_726_);
lean_ctor_set(v_ictx_739_, 3, v___y_727_);
lean_inc(v_toBind_731_);
v___f_740_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__7), 14, 13);
lean_closure_set(v___f_740_, 0, v_inst_728_);
lean_closure_set(v___f_740_, 1, v_text_726_);
lean_closure_set(v___f_740_, 2, v_source_725_);
lean_closure_set(v___f_740_, 3, v_logMessage_729_);
lean_closure_set(v___f_740_, 4, v_toPure_730_);
lean_closure_set(v___f_740_, 5, v_toBind_731_);
lean_closure_set(v___f_740_, 6, v_getFileName_732_);
lean_closure_set(v___f_740_, 7, v___x_733_);
lean_closure_set(v___f_740_, 8, v_ictx_739_);
lean_closure_set(v___f_740_, 9, v_inst_734_);
lean_closure_set(v___f_740_, 10, v_env_735_);
lean_closure_set(v___f_740_, 11, v_val_736_);
lean_closure_set(v___f_740_, 12, v___y_727_);
v___x_741_ = lean_apply_4(v_toBind_731_, lean_box(0), lean_box(0), v_inst_737_, v___f_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object* v_inst_742_, lean_object* v_source_743_, lean_object* v_text_744_, lean_object* v___y_745_, lean_object* v_inst_746_, lean_object* v_toPure_747_, lean_object* v_toBind_748_, lean_object* v___x_749_, lean_object* v_inst_750_, lean_object* v_val_751_, lean_object* v_inst_752_, lean_object* v_env_753_){
_start:
{
lean_object* v_getFileName_754_; lean_object* v_logMessage_755_; lean_object* v___f_756_; lean_object* v___x_757_; 
v_getFileName_754_ = lean_ctor_get(v_inst_742_, 2);
lean_inc_n(v_getFileName_754_, 2);
v_logMessage_755_ = lean_ctor_get(v_inst_742_, 4);
lean_inc(v_logMessage_755_);
lean_dec_ref(v_inst_742_);
lean_inc(v_toBind_748_);
v___f_756_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__8), 14, 13);
lean_closure_set(v___f_756_, 0, v_source_743_);
lean_closure_set(v___f_756_, 1, v_text_744_);
lean_closure_set(v___f_756_, 2, v___y_745_);
lean_closure_set(v___f_756_, 3, v_inst_746_);
lean_closure_set(v___f_756_, 4, v_logMessage_755_);
lean_closure_set(v___f_756_, 5, v_toPure_747_);
lean_closure_set(v___f_756_, 6, v_toBind_748_);
lean_closure_set(v___f_756_, 7, v_getFileName_754_);
lean_closure_set(v___f_756_, 8, v___x_749_);
lean_closure_set(v___f_756_, 9, v_inst_750_);
lean_closure_set(v___f_756_, 10, v_env_753_);
lean_closure_set(v___f_756_, 11, v_val_751_);
lean_closure_set(v___f_756_, 12, v_inst_752_);
v___x_757_ = lean_apply_4(v_toBind_748_, lean_box(0), lean_box(0), v_getFileName_754_, v___f_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__10(lean_object* v_inst_758_, lean_object* v_inst_759_, lean_object* v_inst_760_, lean_object* v_toPure_761_, lean_object* v_toBind_762_, lean_object* v___x_763_, lean_object* v_inst_764_, lean_object* v_val_765_, lean_object* v_inst_766_, lean_object* v_val_767_, lean_object* v_text_768_){
_start:
{
lean_object* v_source_769_; lean_object* v___y_771_; lean_object* v___x_775_; uint8_t v___x_776_; 
v_source_769_ = lean_ctor_get(v_text_768_, 0);
lean_inc_ref(v_source_769_);
v___x_775_ = lean_string_utf8_byte_size(v_source_769_);
v___x_776_ = lean_nat_dec_le(v_val_767_, v___x_775_);
if (v___x_776_ == 0)
{
lean_dec(v_val_767_);
v___y_771_ = v___x_775_;
goto v___jp_770_;
}
else
{
v___y_771_ = v_val_767_;
goto v___jp_770_;
}
v___jp_770_:
{
lean_object* v_getEnv_772_; lean_object* v___f_773_; lean_object* v___x_774_; 
v_getEnv_772_ = lean_ctor_get(v_inst_758_, 0);
lean_inc(v_getEnv_772_);
lean_dec_ref(v_inst_758_);
lean_inc(v_toBind_762_);
v___f_773_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__9), 12, 11);
lean_closure_set(v___f_773_, 0, v_inst_759_);
lean_closure_set(v___f_773_, 1, v_source_769_);
lean_closure_set(v___f_773_, 2, v_text_768_);
lean_closure_set(v___f_773_, 3, v___y_771_);
lean_closure_set(v___f_773_, 4, v_inst_760_);
lean_closure_set(v___f_773_, 5, v_toPure_761_);
lean_closure_set(v___f_773_, 6, v_toBind_762_);
lean_closure_set(v___f_773_, 7, v___x_763_);
lean_closure_set(v___f_773_, 8, v_inst_764_);
lean_closure_set(v___f_773_, 9, v_val_765_);
lean_closure_set(v___f_773_, 10, v_inst_766_);
v___x_774_ = lean_apply_4(v_toBind_762_, lean_box(0), lean_box(0), v_getEnv_772_, v___f_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object* v_inst_777_, lean_object* v_inst_778_, lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_inst_781_, lean_object* v_inst_782_, lean_object* v_parseFailure_783_){
_start:
{
lean_object* v_toApplicative_784_; lean_object* v_toBind_785_; lean_object* v_toPure_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; lean_object* v___x_790_; 
v_toApplicative_784_ = lean_ctor_get(v_inst_777_, 0);
v_toBind_785_ = lean_ctor_get(v_inst_777_, 1);
lean_inc(v_toBind_785_);
v_toPure_786_ = lean_ctor_get(v_toApplicative_784_, 1);
lean_inc(v_toPure_786_);
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l_Lean_Syntax_getArg(v_parseFailure_783_, v___x_787_);
v___x_789_ = 1;
v___x_790_ = l_Lean_Syntax_getPos_x3f(v___x_788_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 1)
{
lean_object* v_val_791_; lean_object* v___x_792_; 
v_val_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_val_791_);
lean_dec_ref_known(v___x_790_, 1);
v___x_792_ = l_Lean_Syntax_getTailPos_x3f(v___x_788_, v___x_789_);
lean_dec(v___x_788_);
if (lean_obj_tag(v___x_792_) == 1)
{
lean_object* v_val_793_; lean_object* v___f_794_; lean_object* v___x_795_; 
v_val_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_val_793_);
lean_dec_ref_known(v___x_792_, 1);
lean_inc(v_toBind_785_);
v___f_794_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__10), 11, 10);
lean_closure_set(v___f_794_, 0, v_inst_779_);
lean_closure_set(v___f_794_, 1, v_inst_781_);
lean_closure_set(v___f_794_, 2, v_inst_782_);
lean_closure_set(v___f_794_, 3, v_toPure_786_);
lean_closure_set(v___f_794_, 4, v_toBind_785_);
lean_closure_set(v___f_794_, 5, v___x_787_);
lean_closure_set(v___f_794_, 6, v_inst_777_);
lean_closure_set(v___f_794_, 7, v_val_791_);
lean_closure_set(v___f_794_, 8, v_inst_780_);
lean_closure_set(v___f_794_, 9, v_val_793_);
v___x_795_ = lean_apply_4(v_toBind_785_, lean_box(0), lean_box(0), v_inst_778_, v___f_794_);
return v___x_795_;
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v___x_792_);
lean_dec(v_val_791_);
lean_dec(v_toBind_785_);
lean_dec_ref(v_inst_782_);
lean_dec_ref(v_inst_781_);
lean_dec(v_inst_780_);
lean_dec_ref(v_inst_779_);
lean_dec(v_inst_778_);
lean_dec_ref(v_inst_777_);
v___x_796_ = lean_box(0);
v___x_797_ = lean_apply_2(v_toPure_786_, lean_box(0), v___x_796_);
return v___x_797_;
}
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; 
lean_dec(v___x_790_);
lean_dec(v___x_788_);
lean_dec(v_toBind_785_);
lean_dec_ref(v_inst_782_);
lean_dec_ref(v_inst_781_);
lean_dec(v_inst_780_);
lean_dec_ref(v_inst_779_);
lean_dec(v_inst_778_);
lean_dec_ref(v_inst_777_);
v___x_798_ = lean_box(0);
v___x_799_ = lean_apply_2(v_toPure_786_, lean_box(0), v___x_798_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object* v_inst_800_, lean_object* v_inst_801_, lean_object* v_inst_802_, lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_parseFailure_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_reportVersoParseFailure___redArg(v_inst_800_, v_inst_801_, v_inst_802_, v_inst_803_, v_inst_804_, v_inst_805_, v_parseFailure_806_);
lean_dec(v_parseFailure_806_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_m_808_, lean_object* v_inst_809_, lean_object* v_inst_810_, lean_object* v_inst_811_, lean_object* v_inst_812_, lean_object* v_inst_813_, lean_object* v_inst_814_, lean_object* v_inst_815_, lean_object* v_parseFailure_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_reportVersoParseFailure___redArg(v_inst_809_, v_inst_810_, v_inst_812_, v_inst_813_, v_inst_814_, v_inst_815_, v_parseFailure_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_m_818_, lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_inst_821_, lean_object* v_inst_822_, lean_object* v_inst_823_, lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_parseFailure_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_reportVersoParseFailure(v_m_818_, v_inst_819_, v_inst_820_, v_inst_821_, v_inst_822_, v_inst_823_, v_inst_824_, v_inst_825_, v_parseFailure_826_);
lean_dec(v_parseFailure_826_);
lean_dec_ref(v_inst_821_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(lean_object* v_fileMap_x3f_828_, lean_object* v_declName_829_, lean_object* v_binders_830_, lean_object* v___x_831_, uint8_t v___x_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
if (lean_obj_tag(v_fileMap_x3f_828_) == 0)
{
lean_object* v___x_840_; 
v___x_840_ = l_Lean_Doc_DocM_exec___redArg(v_declName_829_, v_binders_830_, v___x_831_, v___x_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_, v___y_838_);
return v___x_840_;
}
else
{
lean_object* v_val_841_; lean_object* v_fileName_842_; lean_object* v_options_843_; lean_object* v_currRecDepth_844_; lean_object* v_maxRecDepth_845_; lean_object* v_ref_846_; lean_object* v_currNamespace_847_; lean_object* v_openDecls_848_; lean_object* v_initHeartbeats_849_; lean_object* v_maxHeartbeats_850_; lean_object* v_quotContext_851_; lean_object* v_currMacroScope_852_; uint8_t v_diag_853_; lean_object* v_cancelTk_x3f_854_; uint8_t v_suppressElabErrors_855_; lean_object* v_inheritedTraceOptions_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v_val_841_ = lean_ctor_get(v_fileMap_x3f_828_, 0);
v_fileName_842_ = lean_ctor_get(v___y_837_, 0);
v_options_843_ = lean_ctor_get(v___y_837_, 2);
v_currRecDepth_844_ = lean_ctor_get(v___y_837_, 3);
v_maxRecDepth_845_ = lean_ctor_get(v___y_837_, 4);
v_ref_846_ = lean_ctor_get(v___y_837_, 5);
v_currNamespace_847_ = lean_ctor_get(v___y_837_, 6);
v_openDecls_848_ = lean_ctor_get(v___y_837_, 7);
v_initHeartbeats_849_ = lean_ctor_get(v___y_837_, 8);
v_maxHeartbeats_850_ = lean_ctor_get(v___y_837_, 9);
v_quotContext_851_ = lean_ctor_get(v___y_837_, 10);
v_currMacroScope_852_ = lean_ctor_get(v___y_837_, 11);
v_diag_853_ = lean_ctor_get_uint8(v___y_837_, sizeof(void*)*14);
v_cancelTk_x3f_854_ = lean_ctor_get(v___y_837_, 12);
v_suppressElabErrors_855_ = lean_ctor_get_uint8(v___y_837_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_856_ = lean_ctor_get(v___y_837_, 13);
lean_inc_ref(v_inheritedTraceOptions_856_);
lean_inc(v_cancelTk_x3f_854_);
lean_inc(v_currMacroScope_852_);
lean_inc(v_quotContext_851_);
lean_inc(v_maxHeartbeats_850_);
lean_inc(v_initHeartbeats_849_);
lean_inc(v_openDecls_848_);
lean_inc(v_currNamespace_847_);
lean_inc(v_ref_846_);
lean_inc(v_maxRecDepth_845_);
lean_inc(v_currRecDepth_844_);
lean_inc_ref(v_options_843_);
lean_inc(v_val_841_);
lean_inc_ref(v_fileName_842_);
v___x_857_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_857_, 0, v_fileName_842_);
lean_ctor_set(v___x_857_, 1, v_val_841_);
lean_ctor_set(v___x_857_, 2, v_options_843_);
lean_ctor_set(v___x_857_, 3, v_currRecDepth_844_);
lean_ctor_set(v___x_857_, 4, v_maxRecDepth_845_);
lean_ctor_set(v___x_857_, 5, v_ref_846_);
lean_ctor_set(v___x_857_, 6, v_currNamespace_847_);
lean_ctor_set(v___x_857_, 7, v_openDecls_848_);
lean_ctor_set(v___x_857_, 8, v_initHeartbeats_849_);
lean_ctor_set(v___x_857_, 9, v_maxHeartbeats_850_);
lean_ctor_set(v___x_857_, 10, v_quotContext_851_);
lean_ctor_set(v___x_857_, 11, v_currMacroScope_852_);
lean_ctor_set(v___x_857_, 12, v_cancelTk_x3f_854_);
lean_ctor_set(v___x_857_, 13, v_inheritedTraceOptions_856_);
lean_ctor_set_uint8(v___x_857_, sizeof(void*)*14, v_diag_853_);
lean_ctor_set_uint8(v___x_857_, sizeof(void*)*14 + 1, v_suppressElabErrors_855_);
v___x_858_ = l_Lean_Doc_DocM_exec___redArg(v_declName_829_, v_binders_830_, v___x_831_, v___x_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_, v___x_857_, v___y_838_);
lean_dec_ref_known(v___x_857_, 14);
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed(lean_object* v_fileMap_x3f_859_, lean_object* v_declName_860_, lean_object* v_binders_861_, lean_object* v___x_862_, lean_object* v___x_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
uint8_t v___x_9324__boxed_871_; lean_object* v_res_872_; 
v___x_9324__boxed_871_ = lean_unbox(v___x_863_);
v_res_872_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0(v_fileMap_x3f_859_, v_declName_860_, v_binders_861_, v___x_862_, v___x_9324__boxed_871_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v_fileMap_x3f_859_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(size_t v_sz_873_, size_t v_i_874_, lean_object* v_bs_875_){
_start:
{
uint8_t v___x_876_; 
v___x_876_ = lean_usize_dec_lt(v_i_874_, v_sz_873_);
if (v___x_876_ == 0)
{
return v_bs_875_;
}
else
{
lean_object* v_v_877_; lean_object* v___x_878_; lean_object* v_bs_x27_879_; size_t v___x_880_; size_t v___x_881_; lean_object* v___x_882_; 
v_v_877_ = lean_array_uget(v_bs_875_, v_i_874_);
v___x_878_ = lean_unsigned_to_nat(0u);
v_bs_x27_879_ = lean_array_uset(v_bs_875_, v_i_874_, v___x_878_);
v___x_880_ = ((size_t)1ULL);
v___x_881_ = lean_usize_add(v_i_874_, v___x_880_);
v___x_882_ = lean_array_uset(v_bs_x27_879_, v_i_874_, v_v_877_);
v_i_874_ = v___x_881_;
v_bs_875_ = v___x_882_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0___boxed(lean_object* v_sz_884_, lean_object* v_i_885_, lean_object* v_bs_886_){
_start:
{
size_t v_sz_boxed_887_; size_t v_i_boxed_888_; lean_object* v_res_889_; 
v_sz_boxed_887_ = lean_unbox_usize(v_sz_884_);
lean_dec(v_sz_884_);
v_i_boxed_888_ = lean_unbox_usize(v_i_885_);
lean_dec(v_i_885_);
v_res_889_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_boxed_887_, v_i_boxed_888_, v_bs_886_);
return v_res_889_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(lean_object* v_opts_890_, lean_object* v_opt_891_){
_start:
{
lean_object* v_name_892_; lean_object* v_defValue_893_; lean_object* v_map_894_; lean_object* v___x_895_; 
v_name_892_ = lean_ctor_get(v_opt_891_, 0);
v_defValue_893_ = lean_ctor_get(v_opt_891_, 1);
v_map_894_ = lean_ctor_get(v_opts_890_, 0);
v___x_895_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_894_, v_name_892_);
if (lean_obj_tag(v___x_895_) == 0)
{
uint8_t v___x_896_; 
v___x_896_ = lean_unbox(v_defValue_893_);
return v___x_896_;
}
else
{
lean_object* v_val_897_; 
v_val_897_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_val_897_);
lean_dec_ref_known(v___x_895_, 1);
if (lean_obj_tag(v_val_897_) == 1)
{
uint8_t v_v_898_; 
v_v_898_ = lean_ctor_get_uint8(v_val_897_, 0);
lean_dec_ref_known(v_val_897_, 0);
return v_v_898_;
}
else
{
uint8_t v___x_899_; 
lean_dec(v_val_897_);
v___x_899_ = lean_unbox(v_defValue_893_);
return v___x_899_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4___boxed(lean_object* v_opts_900_, lean_object* v_opt_901_){
_start:
{
uint8_t v_res_902_; lean_object* v_r_903_; 
v_res_902_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_opts_900_, v_opt_901_);
lean_dec_ref(v_opt_901_);
lean_dec_ref(v_opts_900_);
v_r_903_ = lean_box(v_res_902_);
return v_r_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(lean_object* v_msgData_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v___x_910_; lean_object* v_env_911_; lean_object* v___x_912_; lean_object* v_mctx_913_; lean_object* v_lctx_914_; lean_object* v_options_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_910_ = lean_st_ref_get(v___y_908_);
v_env_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc_ref(v_env_911_);
lean_dec(v___x_910_);
v___x_912_ = lean_st_ref_get(v___y_906_);
v_mctx_913_ = lean_ctor_get(v___x_912_, 0);
lean_inc_ref(v_mctx_913_);
lean_dec(v___x_912_);
v_lctx_914_ = lean_ctor_get(v___y_905_, 2);
v_options_915_ = lean_ctor_get(v___y_907_, 2);
lean_inc_ref(v_options_915_);
lean_inc_ref(v_lctx_914_);
v___x_916_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_916_, 0, v_env_911_);
lean_ctor_set(v___x_916_, 1, v_mctx_913_);
lean_ctor_set(v___x_916_, 2, v_lctx_914_);
lean_ctor_set(v___x_916_, 3, v_options_915_);
v___x_917_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
lean_ctor_set(v___x_917_, 1, v_msgData_904_);
v___x_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3___boxed(lean_object* v_msgData_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msgData_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
return v_res_925_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(uint8_t v___y_934_, uint8_t v_suppressElabErrors_935_, lean_object* v_x_936_){
_start:
{
if (lean_obj_tag(v_x_936_) == 1)
{
lean_object* v_pre_937_; 
v_pre_937_ = lean_ctor_get(v_x_936_, 0);
switch(lean_obj_tag(v_pre_937_))
{
case 1:
{
lean_object* v_pre_938_; 
v_pre_938_ = lean_ctor_get(v_pre_937_, 0);
switch(lean_obj_tag(v_pre_938_))
{
case 0:
{
lean_object* v_str_939_; lean_object* v_str_940_; lean_object* v___x_941_; uint8_t v___x_942_; 
v_str_939_ = lean_ctor_get(v_x_936_, 1);
v_str_940_ = lean_ctor_get(v_pre_937_, 1);
v___x_941_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_942_ = lean_string_dec_eq(v_str_940_, v___x_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_944_ = lean_string_dec_eq(v_str_940_, v___x_943_);
if (v___x_944_ == 0)
{
return v___y_934_;
}
else
{
lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_945_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_946_ = lean_string_dec_eq(v_str_939_, v___x_945_);
if (v___x_946_ == 0)
{
return v___y_934_;
}
else
{
return v_suppressElabErrors_935_;
}
}
}
else
{
lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_947_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_948_ = lean_string_dec_eq(v_str_939_, v___x_947_);
if (v___x_948_ == 0)
{
return v___y_934_;
}
else
{
return v_suppressElabErrors_935_;
}
}
}
case 1:
{
lean_object* v_pre_949_; 
v_pre_949_ = lean_ctor_get(v_pre_938_, 0);
if (lean_obj_tag(v_pre_949_) == 0)
{
lean_object* v_str_950_; lean_object* v_str_951_; lean_object* v_str_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
v_str_950_ = lean_ctor_get(v_x_936_, 1);
v_str_951_ = lean_ctor_get(v_pre_937_, 1);
v_str_952_ = lean_ctor_get(v_pre_938_, 1);
v___x_953_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_954_ = lean_string_dec_eq(v_str_952_, v___x_953_);
if (v___x_954_ == 0)
{
return v___y_934_;
}
else
{
lean_object* v___x_955_; uint8_t v___x_956_; 
v___x_955_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_956_ = lean_string_dec_eq(v_str_951_, v___x_955_);
if (v___x_956_ == 0)
{
return v___y_934_;
}
else
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_958_ = lean_string_dec_eq(v_str_950_, v___x_957_);
if (v___x_958_ == 0)
{
return v___y_934_;
}
else
{
return v_suppressElabErrors_935_;
}
}
}
}
else
{
return v___y_934_;
}
}
default: 
{
return v___y_934_;
}
}
}
case 0:
{
lean_object* v_str_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_str_959_ = lean_ctor_get(v_x_936_, 1);
v___x_960_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_961_ = lean_string_dec_eq(v_str_959_, v___x_960_);
if (v___x_961_ == 0)
{
return v___y_934_;
}
else
{
return v_suppressElabErrors_935_;
}
}
default: 
{
return v___y_934_;
}
}
}
else
{
return v___y_934_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed(lean_object* v___y_962_, lean_object* v_suppressElabErrors_963_, lean_object* v_x_964_){
_start:
{
uint8_t v___y_9421__boxed_965_; uint8_t v_suppressElabErrors_boxed_966_; uint8_t v_res_967_; lean_object* v_r_968_; 
v___y_9421__boxed_965_ = lean_unbox(v___y_962_);
v_suppressElabErrors_boxed_966_ = lean_unbox(v_suppressElabErrors_963_);
v_res_967_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0(v___y_9421__boxed_965_, v_suppressElabErrors_boxed_966_, v_x_964_);
lean_dec(v_x_964_);
v_r_968_ = lean_box(v_res_967_);
return v_r_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(lean_object* v_ref_969_, lean_object* v_msgData_970_, uint8_t v_severity_971_, uint8_t v_isSilent_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; uint8_t v___y_982_; lean_object* v___y_983_; lean_object* v___y_984_; uint8_t v___y_985_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_1015_; uint8_t v___y_1016_; lean_object* v___y_1017_; uint8_t v___y_1018_; lean_object* v___y_1019_; uint8_t v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1040_; lean_object* v___y_1041_; uint8_t v___y_1042_; lean_object* v___y_1043_; uint8_t v___y_1044_; uint8_t v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; uint8_t v___y_1054_; uint8_t v___y_1055_; lean_object* v___y_1056_; uint8_t v___y_1057_; uint8_t v___x_1062_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; uint8_t v___y_1067_; lean_object* v___y_1068_; uint8_t v___y_1069_; uint8_t v___y_1070_; uint8_t v___y_1072_; uint8_t v___x_1087_; 
v___x_1062_ = 2;
v___x_1087_ = l_Lean_instBEqMessageSeverity_beq(v_severity_971_, v___x_1062_);
if (v___x_1087_ == 0)
{
v___y_1072_ = v___x_1087_;
goto v___jp_1071_;
}
else
{
uint8_t v___x_1088_; 
lean_inc_ref(v_msgData_970_);
v___x_1088_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_970_);
v___y_1072_ = v___x_1088_;
goto v___jp_1071_;
}
v___jp_978_:
{
lean_object* v___x_988_; lean_object* v_currNamespace_989_; lean_object* v_openDecls_990_; lean_object* v_env_991_; lean_object* v_nextMacroScope_992_; lean_object* v_ngen_993_; lean_object* v_auxDeclNGen_994_; lean_object* v_traceState_995_; lean_object* v_cache_996_; lean_object* v_messages_997_; lean_object* v_infoState_998_; lean_object* v_snapshotTasks_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1013_; 
v___x_988_ = lean_st_ref_take(v___y_987_);
v_currNamespace_989_ = lean_ctor_get(v___y_986_, 6);
v_openDecls_990_ = lean_ctor_get(v___y_986_, 7);
v_env_991_ = lean_ctor_get(v___x_988_, 0);
v_nextMacroScope_992_ = lean_ctor_get(v___x_988_, 1);
v_ngen_993_ = lean_ctor_get(v___x_988_, 2);
v_auxDeclNGen_994_ = lean_ctor_get(v___x_988_, 3);
v_traceState_995_ = lean_ctor_get(v___x_988_, 4);
v_cache_996_ = lean_ctor_get(v___x_988_, 5);
v_messages_997_ = lean_ctor_get(v___x_988_, 6);
v_infoState_998_ = lean_ctor_get(v___x_988_, 7);
v_snapshotTasks_999_ = lean_ctor_get(v___x_988_, 8);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_988_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1001_ = v___x_988_;
v_isShared_1002_ = v_isSharedCheck_1013_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_snapshotTasks_999_);
lean_inc(v_infoState_998_);
lean_inc(v_messages_997_);
lean_inc(v_cache_996_);
lean_inc(v_traceState_995_);
lean_inc(v_auxDeclNGen_994_);
lean_inc(v_ngen_993_);
lean_inc(v_nextMacroScope_992_);
lean_inc(v_env_991_);
lean_dec(v___x_988_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1013_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1008_; 
lean_inc(v_openDecls_990_);
lean_inc(v_currNamespace_989_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v_currNamespace_989_);
lean_ctor_set(v___x_1003_, 1, v_openDecls_990_);
v___x_1004_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set(v___x_1004_, 1, v___y_980_);
lean_inc_ref(v___y_983_);
lean_inc_ref(v___y_984_);
v___x_1005_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1005_, 0, v___y_984_);
lean_ctor_set(v___x_1005_, 1, v___y_981_);
lean_ctor_set(v___x_1005_, 2, v___y_979_);
lean_ctor_set(v___x_1005_, 3, v___y_983_);
lean_ctor_set(v___x_1005_, 4, v___x_1004_);
lean_ctor_set_uint8(v___x_1005_, sizeof(void*)*5, v___y_985_);
lean_ctor_set_uint8(v___x_1005_, sizeof(void*)*5 + 1, v___y_982_);
lean_ctor_set_uint8(v___x_1005_, sizeof(void*)*5 + 2, v_isSilent_972_);
v___x_1006_ = l_Lean_MessageLog_add(v___x_1005_, v_messages_997_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 6, v___x_1006_);
v___x_1008_ = v___x_1001_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_env_991_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_nextMacroScope_992_);
lean_ctor_set(v_reuseFailAlloc_1012_, 2, v_ngen_993_);
lean_ctor_set(v_reuseFailAlloc_1012_, 3, v_auxDeclNGen_994_);
lean_ctor_set(v_reuseFailAlloc_1012_, 4, v_traceState_995_);
lean_ctor_set(v_reuseFailAlloc_1012_, 5, v_cache_996_);
lean_ctor_set(v_reuseFailAlloc_1012_, 6, v___x_1006_);
lean_ctor_set(v_reuseFailAlloc_1012_, 7, v_infoState_998_);
lean_ctor_set(v_reuseFailAlloc_1012_, 8, v_snapshotTasks_999_);
v___x_1008_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = lean_st_ref_set(v___y_987_, v___x_1008_);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1010_);
return v___x_1011_;
}
}
}
v___jp_1014_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1038_; 
v___x_1023_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_970_);
v___x_1024_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v___x_1023_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1027_ = v___x_1024_;
v_isShared_1028_ = v_isSharedCheck_1038_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1024_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1038_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_inc_ref_n(v___y_1021_, 2);
v___x_1029_ = l_Lean_FileMap_toPosition(v___y_1021_, v___y_1019_);
lean_dec(v___y_1019_);
v___x_1030_ = l_Lean_FileMap_toPosition(v___y_1021_, v___y_1022_);
lean_dec(v___y_1022_);
v___x_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
v___x_1032_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
if (v___y_1020_ == 0)
{
lean_del_object(v___x_1027_);
lean_dec_ref(v___y_1015_);
v___y_979_ = v___x_1031_;
v___y_980_ = v_a_1025_;
v___y_981_ = v___x_1029_;
v___y_982_ = v___y_1016_;
v___y_983_ = v___x_1032_;
v___y_984_ = v___y_1017_;
v___y_985_ = v___y_1018_;
v___y_986_ = v___y_975_;
v___y_987_ = v___y_976_;
goto v___jp_978_;
}
else
{
uint8_t v___x_1033_; 
lean_inc(v_a_1025_);
v___x_1033_ = l_Lean_MessageData_hasTag(v___y_1015_, v_a_1025_);
if (v___x_1033_ == 0)
{
lean_object* v___x_1034_; lean_object* v___x_1036_; 
lean_dec_ref_known(v___x_1031_, 1);
lean_dec_ref(v___x_1029_);
lean_dec(v_a_1025_);
v___x_1034_ = lean_box(0);
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v___x_1034_);
v___x_1036_ = v___x_1027_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
else
{
lean_del_object(v___x_1027_);
v___y_979_ = v___x_1031_;
v___y_980_ = v_a_1025_;
v___y_981_ = v___x_1029_;
v___y_982_ = v___y_1016_;
v___y_983_ = v___x_1032_;
v___y_984_ = v___y_1017_;
v___y_985_ = v___y_1018_;
v___y_986_ = v___y_975_;
v___y_987_ = v___y_976_;
goto v___jp_978_;
}
}
}
}
v___jp_1039_:
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lean_Syntax_getTailPos_x3f(v___y_1041_, v___y_1044_);
lean_dec(v___y_1041_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_inc(v___y_1047_);
v___y_1015_ = v___y_1040_;
v___y_1016_ = v___y_1042_;
v___y_1017_ = v___y_1043_;
v___y_1018_ = v___y_1044_;
v___y_1019_ = v___y_1047_;
v___y_1020_ = v___y_1045_;
v___y_1021_ = v___y_1046_;
v___y_1022_ = v___y_1047_;
goto v___jp_1014_;
}
else
{
lean_object* v_val_1049_; 
v_val_1049_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_val_1049_);
lean_dec_ref_known(v___x_1048_, 1);
v___y_1015_ = v___y_1040_;
v___y_1016_ = v___y_1042_;
v___y_1017_ = v___y_1043_;
v___y_1018_ = v___y_1044_;
v___y_1019_ = v___y_1047_;
v___y_1020_ = v___y_1045_;
v___y_1021_ = v___y_1046_;
v___y_1022_ = v_val_1049_;
goto v___jp_1014_;
}
}
v___jp_1050_:
{
lean_object* v_ref_1058_; lean_object* v___x_1059_; 
v_ref_1058_ = l_Lean_replaceRef(v_ref_969_, v___y_1052_);
v___x_1059_ = l_Lean_Syntax_getPos_x3f(v_ref_1058_, v___y_1054_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___y_1040_ = v___y_1051_;
v___y_1041_ = v_ref_1058_;
v___y_1042_ = v___y_1057_;
v___y_1043_ = v___y_1053_;
v___y_1044_ = v___y_1054_;
v___y_1045_ = v___y_1055_;
v___y_1046_ = v___y_1056_;
v___y_1047_ = v___x_1060_;
goto v___jp_1039_;
}
else
{
lean_object* v_val_1061_; 
v_val_1061_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_val_1061_);
lean_dec_ref_known(v___x_1059_, 1);
v___y_1040_ = v___y_1051_;
v___y_1041_ = v_ref_1058_;
v___y_1042_ = v___y_1057_;
v___y_1043_ = v___y_1053_;
v___y_1044_ = v___y_1054_;
v___y_1045_ = v___y_1055_;
v___y_1046_ = v___y_1056_;
v___y_1047_ = v_val_1061_;
goto v___jp_1039_;
}
}
v___jp_1063_:
{
if (v___y_1070_ == 0)
{
v___y_1051_ = v___y_1065_;
v___y_1052_ = v___y_1064_;
v___y_1053_ = v___y_1066_;
v___y_1054_ = v___y_1069_;
v___y_1055_ = v___y_1067_;
v___y_1056_ = v___y_1068_;
v___y_1057_ = v_severity_971_;
goto v___jp_1050_;
}
else
{
v___y_1051_ = v___y_1065_;
v___y_1052_ = v___y_1064_;
v___y_1053_ = v___y_1066_;
v___y_1054_ = v___y_1069_;
v___y_1055_ = v___y_1067_;
v___y_1056_ = v___y_1068_;
v___y_1057_ = v___x_1062_;
goto v___jp_1050_;
}
}
v___jp_1071_:
{
if (v___y_1072_ == 0)
{
lean_object* v_fileName_1073_; lean_object* v_fileMap_1074_; lean_object* v_options_1075_; lean_object* v_ref_1076_; uint8_t v_suppressElabErrors_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___f_1080_; uint8_t v___x_1081_; uint8_t v___x_1082_; 
v_fileName_1073_ = lean_ctor_get(v___y_975_, 0);
v_fileMap_1074_ = lean_ctor_get(v___y_975_, 1);
v_options_1075_ = lean_ctor_get(v___y_975_, 2);
v_ref_1076_ = lean_ctor_get(v___y_975_, 5);
v_suppressElabErrors_1077_ = lean_ctor_get_uint8(v___y_975_, sizeof(void*)*14 + 1);
v___x_1078_ = lean_box(v___y_1072_);
v___x_1079_ = lean_box(v_suppressElabErrors_1077_);
v___f_1080_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1080_, 0, v___x_1078_);
lean_closure_set(v___f_1080_, 1, v___x_1079_);
v___x_1081_ = 1;
v___x_1082_ = l_Lean_instBEqMessageSeverity_beq(v_severity_971_, v___x_1081_);
if (v___x_1082_ == 0)
{
v___y_1064_ = v_ref_1076_;
v___y_1065_ = v___f_1080_;
v___y_1066_ = v_fileName_1073_;
v___y_1067_ = v_suppressElabErrors_1077_;
v___y_1068_ = v_fileMap_1074_;
v___y_1069_ = v___y_1072_;
v___y_1070_ = v___x_1082_;
goto v___jp_1063_;
}
else
{
lean_object* v___x_1083_; uint8_t v___x_1084_; 
v___x_1083_ = l_Lean_warningAsError;
v___x_1084_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_1075_, v___x_1083_);
v___y_1064_ = v_ref_1076_;
v___y_1065_ = v___f_1080_;
v___y_1066_ = v_fileName_1073_;
v___y_1067_ = v_suppressElabErrors_1077_;
v___y_1068_ = v_fileMap_1074_;
v___y_1069_ = v___y_1072_;
v___y_1070_ = v___x_1084_;
goto v___jp_1063_;
}
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
lean_dec_ref(v_msgData_970_);
v___x_1085_ = lean_box(0);
v___x_1086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
return v___x_1086_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___boxed(lean_object* v_ref_1089_, lean_object* v_msgData_1090_, lean_object* v_severity_1091_, lean_object* v_isSilent_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
uint8_t v_severity_boxed_1098_; uint8_t v_isSilent_boxed_1099_; lean_object* v_res_1100_; 
v_severity_boxed_1098_ = lean_unbox(v_severity_1091_);
v_isSilent_boxed_1099_ = lean_unbox(v_isSilent_1092_);
v_res_1100_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1089_, v_msgData_1090_, v_severity_boxed_1098_, v_isSilent_boxed_1099_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v_ref_1089_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(lean_object* v_as_1101_, size_t v_sz_1102_, size_t v_i_1103_, lean_object* v_b_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
uint8_t v___x_1112_; 
v___x_1112_ = lean_usize_dec_lt(v_i_1103_, v_sz_1102_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_b_1104_);
return v___x_1113_;
}
else
{
lean_object* v_ref_1114_; lean_object* v_a_1115_; uint8_t v_severity_1116_; uint8_t v_isSilent_1117_; lean_object* v_data_1118_; lean_object* v___x_1119_; 
v_ref_1114_ = lean_ctor_get(v___y_1109_, 5);
v_a_1115_ = lean_array_uget_borrowed(v_as_1101_, v_i_1103_);
v_severity_1116_ = lean_ctor_get_uint8(v_a_1115_, sizeof(void*)*5 + 1);
v_isSilent_1117_ = lean_ctor_get_uint8(v_a_1115_, sizeof(void*)*5 + 2);
v_data_1118_ = lean_ctor_get(v_a_1115_, 4);
lean_inc(v_data_1118_);
v___x_1119_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1114_, v_data_1118_, v_severity_1116_, v_isSilent_1117_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v___x_1120_; size_t v___x_1121_; size_t v___x_1122_; 
lean_dec_ref_known(v___x_1119_, 1);
v___x_1120_ = lean_box(0);
v___x_1121_ = ((size_t)1ULL);
v___x_1122_ = lean_usize_add(v_i_1103_, v___x_1121_);
v_i_1103_ = v___x_1122_;
v_b_1104_ = v___x_1120_;
goto _start;
}
else
{
return v___x_1119_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3___boxed(lean_object* v_as_1124_, lean_object* v_sz_1125_, lean_object* v_i_1126_, lean_object* v_b_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
size_t v_sz_boxed_1135_; size_t v_i_boxed_1136_; lean_object* v_res_1137_; 
v_sz_boxed_1135_ = lean_unbox_usize(v_sz_1125_);
lean_dec(v_sz_1125_);
v_i_boxed_1136_ = lean_unbox_usize(v_i_1126_);
lean_dec(v_i_1126_);
v_res_1137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v_as_1124_, v_sz_boxed_1135_, v_i_boxed_1136_, v_b_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec_ref(v_as_1124_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(uint8_t v_flag_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v___x_1141_; lean_object* v_infoState_1142_; lean_object* v_env_1143_; lean_object* v_nextMacroScope_1144_; lean_object* v_ngen_1145_; lean_object* v_auxDeclNGen_1146_; lean_object* v_traceState_1147_; lean_object* v_cache_1148_; lean_object* v_messages_1149_; lean_object* v_snapshotTasks_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1170_; 
v___x_1141_ = lean_st_ref_take(v___y_1139_);
v_infoState_1142_ = lean_ctor_get(v___x_1141_, 7);
v_env_1143_ = lean_ctor_get(v___x_1141_, 0);
v_nextMacroScope_1144_ = lean_ctor_get(v___x_1141_, 1);
v_ngen_1145_ = lean_ctor_get(v___x_1141_, 2);
v_auxDeclNGen_1146_ = lean_ctor_get(v___x_1141_, 3);
v_traceState_1147_ = lean_ctor_get(v___x_1141_, 4);
v_cache_1148_ = lean_ctor_get(v___x_1141_, 5);
v_messages_1149_ = lean_ctor_get(v___x_1141_, 6);
v_snapshotTasks_1150_ = lean_ctor_get(v___x_1141_, 8);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1152_ = v___x_1141_;
v_isShared_1153_ = v_isSharedCheck_1170_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_snapshotTasks_1150_);
lean_inc(v_infoState_1142_);
lean_inc(v_messages_1149_);
lean_inc(v_cache_1148_);
lean_inc(v_traceState_1147_);
lean_inc(v_auxDeclNGen_1146_);
lean_inc(v_ngen_1145_);
lean_inc(v_nextMacroScope_1144_);
lean_inc(v_env_1143_);
lean_dec(v___x_1141_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1170_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v_assignment_1154_; lean_object* v_lazyAssignment_1155_; lean_object* v_trees_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1169_; 
v_assignment_1154_ = lean_ctor_get(v_infoState_1142_, 0);
v_lazyAssignment_1155_ = lean_ctor_get(v_infoState_1142_, 1);
v_trees_1156_ = lean_ctor_get(v_infoState_1142_, 2);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_infoState_1142_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1158_ = v_infoState_1142_;
v_isShared_1159_ = v_isSharedCheck_1169_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_trees_1156_);
lean_inc(v_lazyAssignment_1155_);
lean_inc(v_assignment_1154_);
lean_dec(v_infoState_1142_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1169_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_assignment_1154_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_lazyAssignment_1155_);
lean_ctor_set(v_reuseFailAlloc_1168_, 2, v_trees_1156_);
v___x_1161_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
lean_object* v___x_1163_; 
lean_ctor_set_uint8(v___x_1161_, sizeof(void*)*3, v_flag_1138_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 7, v___x_1161_);
v___x_1163_ = v___x_1152_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_env_1143_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_nextMacroScope_1144_);
lean_ctor_set(v_reuseFailAlloc_1167_, 2, v_ngen_1145_);
lean_ctor_set(v_reuseFailAlloc_1167_, 3, v_auxDeclNGen_1146_);
lean_ctor_set(v_reuseFailAlloc_1167_, 4, v_traceState_1147_);
lean_ctor_set(v_reuseFailAlloc_1167_, 5, v_cache_1148_);
lean_ctor_set(v_reuseFailAlloc_1167_, 6, v_messages_1149_);
lean_ctor_set(v_reuseFailAlloc_1167_, 7, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1167_, 8, v_snapshotTasks_1150_);
v___x_1163_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1164_ = lean_st_ref_set(v___y_1139_, v___x_1163_);
v___x_1165_ = lean_box(0);
v___x_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
return v___x_1166_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg___boxed(lean_object* v_flag_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
uint8_t v_flag_boxed_1174_; lean_object* v_res_1175_; 
v_flag_boxed_1174_ = lean_unbox(v_flag_1171_);
v_res_1175_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_boxed_1174_, v___y_1172_);
lean_dec(v___y_1172_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(uint8_t v_flag_1176_, lean_object* v_x_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_){
_start:
{
lean_object* v___x_1185_; lean_object* v_infoState_1186_; uint8_t v_enabled_1187_; lean_object* v_a_1189_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1185_ = lean_st_ref_get(v___y_1183_);
v_infoState_1186_ = lean_ctor_get(v___x_1185_, 7);
lean_inc_ref(v_infoState_1186_);
lean_dec(v___x_1185_);
v_enabled_1187_ = lean_ctor_get_uint8(v_infoState_1186_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1186_);
v___x_1199_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1176_, v___y_1183_);
lean_dec_ref(v___x_1199_);
lean_inc(v___y_1183_);
lean_inc_ref(v___y_1182_);
lean_inc(v___y_1181_);
lean_inc_ref(v___y_1180_);
lean_inc(v___y_1179_);
lean_inc_ref(v___y_1178_);
v___x_1200_ = lean_apply_7(v_x_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, lean_box(0));
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v___x_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1201_);
lean_dec_ref_known(v___x_1200_, 1);
v___x_1202_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1187_, v___y_1183_);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; 
v_unused_1210_ = lean_ctor_get(v___x_1202_, 0);
lean_dec(v_unused_1210_);
v___x_1204_ = v___x_1202_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_dec(v___x_1202_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v_a_1201_);
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1201_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
lean_object* v_a_1211_; 
v_a_1211_ = lean_ctor_get(v___x_1200_, 0);
lean_inc(v_a_1211_);
lean_dec_ref_known(v___x_1200_, 1);
v_a_1189_ = v_a_1211_;
goto v___jp_1188_;
}
v___jp_1188_:
{
lean_object* v___x_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
v___x_1190_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_enabled_1187_, v___y_1183_);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1197_ == 0)
{
lean_object* v_unused_1198_; 
v_unused_1198_ = lean_ctor_get(v___x_1190_, 0);
lean_dec(v_unused_1198_);
v___x_1192_ = v___x_1190_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_dec(v___x_1190_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
lean_ctor_set_tag(v___x_1192_, 1);
lean_ctor_set(v___x_1192_, 0, v_a_1189_);
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1189_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg___boxed(lean_object* v_flag_1212_, lean_object* v_x_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
uint8_t v_flag_boxed_1221_; lean_object* v_res_1222_; 
v_flag_boxed_1221_ = lean_unbox(v_flag_1212_);
v_res_1222_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_boxed_1221_, v_x_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(lean_object* v_declName_1223_, lean_object* v_binders_1224_, lean_object* v_blocks_1225_, lean_object* v_fileMap_x3f_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1232_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v_a_1235_; lean_object* v_a_1237_; size_t v_sz_1255_; size_t v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; lean_object* v___x_1260_; lean_object* v___y_1261_; uint8_t v___x_1262_; lean_object* v___x_1263_; 
v_a_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_a_1235_);
lean_dec_ref_known(v___x_1234_, 1);
v_sz_1255_ = lean_array_size(v_blocks_1225_);
v___x_1256_ = ((size_t)0ULL);
v___x_1257_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_1255_, v___x_1256_, v_blocks_1225_);
v___x_1258_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1258_, 0, v___x_1257_);
v___x_1259_ = 1;
v___x_1260_ = lean_box(v___x_1259_);
v___y_1261_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___lam__0___boxed), 12, 5);
lean_closure_set(v___y_1261_, 0, v_fileMap_x3f_1226_);
lean_closure_set(v___y_1261_, 1, v_declName_1223_);
lean_closure_set(v___y_1261_, 2, v_binders_1224_);
lean_closure_set(v___y_1261_, 3, v___x_1258_);
lean_closure_set(v___y_1261_, 4, v___x_1260_);
v___x_1262_ = 0;
v___x_1263_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v___x_1262_, v___y_1261_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1265_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1264_);
lean_dec_ref_known(v___x_1263_, 1);
v___x_1265_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_1232_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1267_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
v___x_1267_ = l_Lean_Core_setMessageLog___redArg(v_a_1235_, v_a_1232_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v___x_1268_; lean_object* v___x_1269_; size_t v_sz_1270_; lean_object* v___x_1271_; 
lean_dec_ref_known(v___x_1267_, 1);
v___x_1268_ = l_Lean_MessageLog_toArray(v_a_1266_);
lean_dec(v_a_1266_);
v___x_1269_ = lean_box(0);
v_sz_1270_ = lean_array_size(v___x_1268_);
v___x_1271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__3(v___x_1268_, v_sz_1270_, v___x_1256_, v___x_1269_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
lean_dec_ref(v___x_1268_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1278_; 
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1278_ == 0)
{
lean_object* v_unused_1279_; 
v_unused_1279_ = lean_ctor_get(v___x_1271_, 0);
lean_dec(v_unused_1279_);
v___x_1273_ = v___x_1271_;
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
else
{
lean_dec(v___x_1271_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1278_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 0, v_a_1264_);
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_a_1264_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1287_; 
lean_dec(v_a_1264_);
v_a_1280_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1282_ = v___x_1271_;
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_a_1280_);
lean_dec(v___x_1271_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1287_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1285_; 
if (v_isShared_1283_ == 0)
{
v___x_1285_ = v___x_1282_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v_a_1280_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
else
{
lean_object* v_a_1288_; lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1295_; 
lean_dec(v_a_1266_);
lean_dec(v_a_1264_);
v_a_1288_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1290_ = v___x_1267_;
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
else
{
lean_inc(v_a_1288_);
lean_dec(v___x_1267_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1295_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1293_; 
if (v_isShared_1291_ == 0)
{
v___x_1293_ = v___x_1290_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1288_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
}
}
else
{
lean_object* v_a_1296_; 
lean_dec(v_a_1264_);
v_a_1296_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1296_);
lean_dec_ref_known(v___x_1265_, 1);
v_a_1237_ = v_a_1296_;
goto v___jp_1236_;
}
}
else
{
lean_object* v_a_1297_; 
v_a_1297_ = lean_ctor_get(v___x_1263_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v___x_1263_, 1);
v_a_1237_ = v_a_1297_;
goto v___jp_1236_;
}
v___jp_1236_:
{
lean_object* v___x_1238_; 
v___x_1238_ = l_Lean_Core_setMessageLog___redArg(v_a_1235_, v_a_1232_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1245_ == 0)
{
lean_object* v_unused_1246_; 
v_unused_1246_ = lean_ctor_get(v___x_1238_, 0);
lean_dec(v_unused_1246_);
v___x_1240_ = v___x_1238_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_dec(v___x_1238_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 0, v_a_1237_);
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1237_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_dec_ref(v_a_1237_);
v_a_1247_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1238_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1238_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
else
{
lean_object* v_a_1298_; lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
lean_dec(v_fileMap_x3f_1226_);
lean_dec_ref(v_blocks_1225_);
lean_dec(v_binders_1224_);
lean_dec(v_declName_1223_);
v_a_1298_ = lean_ctor_get(v___x_1234_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1300_ = v___x_1234_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_inc(v_a_1298_);
lean_dec(v___x_1234_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1298_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Add_0__Lean_execVersoBlocks___boxed(lean_object* v_declName_1306_, lean_object* v_binders_1307_, lean_object* v_blocks_1308_, lean_object* v_fileMap_x3f_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1306_, v_binders_1307_, v_blocks_1308_, v_fileMap_x3f_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec_ref(v_a_1312_);
lean_dec(v_a_1311_);
lean_dec_ref(v_a_1310_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(uint8_t v_flag_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___redArg(v_flag_1318_, v___y_1324_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1___boxed(lean_object* v_flag_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
uint8_t v_flag_boxed_1335_; lean_object* v_res_1336_; 
v_flag_boxed_1335_ = lean_unbox(v_flag_1327_);
v_res_1336_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1_spec__1(v_flag_boxed_1335_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(lean_object* v_00_u03b1_1337_, uint8_t v_flag_1338_, lean_object* v_x_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___redArg(v_flag_1338_, v_x_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1___boxed(lean_object* v_00_u03b1_1348_, lean_object* v_flag_1349_, lean_object* v_x_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
uint8_t v_flag_boxed_1358_; lean_object* v_res_1359_; 
v_flag_boxed_1358_ = lean_unbox(v_flag_1349_);
v_res_1359_ = l_Lean_Elab_withEnableInfoTree___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__1(v_00_u03b1_1348_, v_flag_boxed_1358_, v_x_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(lean_object* v_ref_1360_, lean_object* v_msgData_1361_, uint8_t v_severity_1362_, uint8_t v_isSilent_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1360_, v_msgData_1361_, v_severity_1362_, v_isSilent_1363_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___boxed(lean_object* v_ref_1372_, lean_object* v_msgData_1373_, lean_object* v_severity_1374_, lean_object* v_isSilent_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
uint8_t v_severity_boxed_1383_; uint8_t v_isSilent_boxed_1384_; lean_object* v_res_1385_; 
v_severity_boxed_1383_ = lean_unbox(v_severity_1374_);
v_isSilent_boxed_1384_ = lean_unbox(v_isSilent_1375_);
v_res_1385_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2(v_ref_1372_, v_msgData_1373_, v_severity_boxed_1383_, v_isSilent_boxed_1384_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v_ref_1372_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(lean_object* v_msgData_1386_, uint8_t v_severity_1387_, uint8_t v_isSilent_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_ref_1394_; lean_object* v___x_1395_; 
v_ref_1394_ = lean_ctor_get(v___y_1391_, 5);
v___x_1395_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_1394_, v_msgData_1386_, v_severity_1387_, v_isSilent_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg___boxed(lean_object* v_msgData_1396_, lean_object* v_severity_1397_, lean_object* v_isSilent_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
uint8_t v_severity_boxed_1404_; uint8_t v_isSilent_boxed_1405_; lean_object* v_res_1406_; 
v_severity_boxed_1404_ = lean_unbox(v_severity_1397_);
v_isSilent_boxed_1405_ = lean_unbox(v_isSilent_1398_);
v_res_1406_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1396_, v_severity_boxed_1404_, v_isSilent_boxed_1405_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(lean_object* v_msgData_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
uint8_t v___x_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; 
v___x_1415_ = 2;
v___x_1416_ = 0;
v___x_1417_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1407_, v___x_1415_, v___x_1416_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0___boxed(lean_object* v_msgData_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v_msgData_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(lean_object* v_as_1427_, size_t v_sz_1428_, size_t v_i_1429_, lean_object* v_b_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
uint8_t v___x_1438_; 
v___x_1438_ = lean_usize_dec_lt(v_i_1429_, v_sz_1428_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1439_, 0, v_b_1430_);
return v___x_1439_;
}
else
{
lean_object* v_a_1440_; lean_object* v_snd_1441_; lean_object* v_snd_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_a_1440_ = lean_array_uget_borrowed(v_as_1427_, v_i_1429_);
v_snd_1441_ = lean_ctor_get(v_a_1440_, 1);
v_snd_1442_ = lean_ctor_get(v_snd_1441_, 1);
lean_inc(v_snd_1442_);
v___x_1443_ = l_Lean_Parser_Error_toString(v_snd_1442_);
v___x_1444_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
v___x_1445_ = l_Lean_MessageData_ofFormat(v___x_1444_);
v___x_1446_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_1445_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; 
lean_dec_ref_known(v___x_1446_, 1);
v___x_1447_ = lean_box(0);
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_add(v_i_1429_, v___x_1448_);
v_i_1429_ = v___x_1449_;
v_b_1430_ = v___x_1447_;
goto _start;
}
else
{
return v___x_1446_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1___boxed(lean_object* v_as_1451_, lean_object* v_sz_1452_, lean_object* v_i_1453_, lean_object* v_b_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
size_t v_sz_boxed_1462_; size_t v_i_boxed_1463_; lean_object* v_res_1464_; 
v_sz_boxed_1462_ = lean_unbox_usize(v_sz_1452_);
lean_dec(v_sz_1452_);
v_i_boxed_1463_ = lean_unbox_usize(v_i_1453_);
lean_dec(v_i_1453_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v_as_1451_, v_sz_boxed_1462_, v_i_boxed_1463_, v_b_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec_ref(v_as_1451_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText(lean_object* v_declName_1479_, lean_object* v_binders_1480_, lean_object* v_docComment_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v___x_1489_; lean_object* v_env_1490_; lean_object* v_fileName_1491_; lean_object* v_options_1492_; lean_object* v_currNamespace_1493_; lean_object* v_openDecls_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1489_ = lean_st_ref_get(v_a_1487_);
v_env_1490_ = lean_ctor_get(v___x_1489_, 0);
lean_inc_ref_n(v_env_1490_, 2);
lean_dec(v___x_1489_);
v_fileName_1491_ = lean_ctor_get(v_a_1486_, 0);
v_options_1492_ = lean_ctor_get(v_a_1486_, 2);
v_currNamespace_1493_ = lean_ctor_get(v_a_1486_, 6);
v_openDecls_1494_ = lean_ctor_get(v_a_1486_, 7);
v___x_1495_ = lean_string_utf8_byte_size(v_docComment_1481_);
lean_inc_ref_n(v_docComment_1481_, 2);
v___x_1496_ = l_Lean_FileMap_ofString(v_docComment_1481_);
lean_inc_ref(v___x_1496_);
lean_inc_ref(v_fileName_1491_);
v___x_1497_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1497_, 0, v_docComment_1481_);
lean_ctor_set(v___x_1497_, 1, v_fileName_1491_);
lean_ctor_set(v___x_1497_, 2, v___x_1496_);
lean_ctor_set(v___x_1497_, 3, v___x_1495_);
lean_inc(v_openDecls_1494_);
lean_inc(v_currNamespace_1493_);
lean_inc_ref(v_options_1492_);
v___x_1498_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1498_, 0, v_env_1490_);
lean_ctor_set(v___x_1498_, 1, v_options_1492_);
lean_ctor_set(v___x_1498_, 2, v_currNamespace_1493_);
lean_ctor_set(v___x_1498_, 3, v_openDecls_1494_);
v___x_1499_ = l_Lean_Parser_mkParserState(v_docComment_1481_);
lean_dec_ref(v_docComment_1481_);
v___x_1500_ = lean_unsigned_to_nat(0u);
v___x_1501_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__2));
v___x_1502_ = l_Lean_Parser_getTokenTable(v_env_1490_);
v___x_1503_ = l_Lean_Parser_ParserFn_run(v___x_1501_, v___x_1497_, v___x_1498_, v___x_1502_, v___x_1499_);
lean_inc_ref(v___x_1503_);
v___x_1504_ = l_Lean_Parser_ParserState_allErrors(v___x_1503_);
v___x_1505_ = lean_array_get_size(v___x_1504_);
v___x_1506_ = lean_nat_dec_eq(v___x_1505_, v___x_1500_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; size_t v_sz_1508_; size_t v___x_1509_; lean_object* v___x_1510_; 
lean_dec_ref(v___x_1503_);
lean_dec_ref(v___x_1496_);
lean_dec(v_binders_1480_);
lean_dec(v_declName_1479_);
v___x_1507_ = lean_box(0);
v_sz_1508_ = lean_array_size(v___x_1504_);
v___x_1509_ = ((size_t)0ULL);
v___x_1510_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringOfText_spec__1(v___x_1504_, v_sz_1508_, v___x_1509_, v___x_1507_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_);
lean_dec_ref(v___x_1504_);
if (lean_obj_tag(v___x_1510_) == 0)
{
lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1518_; 
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1518_ == 0)
{
lean_object* v_unused_1519_; 
v_unused_1519_ = lean_ctor_get(v___x_1510_, 0);
lean_dec(v_unused_1519_);
v___x_1512_ = v___x_1510_;
v_isShared_1513_ = v_isSharedCheck_1518_;
goto v_resetjp_1511_;
}
else
{
lean_dec(v___x_1510_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1518_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1516_; 
v___x_1514_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__4));
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1514_);
v___x_1516_ = v___x_1512_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v___x_1514_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_a_1520_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1510_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1510_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
else
{
lean_object* v_stxStack_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
lean_dec_ref(v___x_1504_);
v_stxStack_1528_ = lean_ctor_get(v___x_1503_, 0);
lean_inc_ref(v_stxStack_1528_);
lean_dec_ref(v___x_1503_);
v___x_1529_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1528_);
lean_dec_ref(v_stxStack_1528_);
v___x_1530_ = l_Lean_Syntax_getArgs(v___x_1529_);
lean_dec(v___x_1529_);
v___x_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1496_);
v___x_1532_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_1479_, v_binders_1480_, v___x_1530_, v___x_1531_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_);
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringOfText___boxed(lean_object* v_declName_1533_, lean_object* v_binders_1534_, lean_object* v_docComment_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lean_versoDocStringOfText(v_declName_1533_, v_binders_1534_, v_docComment_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_);
lean_dec(v_a_1541_);
lean_dec_ref(v_a_1540_);
lean_dec(v_a_1539_);
lean_dec_ref(v_a_1538_);
lean_dec(v_a_1537_);
lean_dec_ref(v_a_1536_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(lean_object* v_msgData_1544_, uint8_t v_severity_1545_, uint8_t v_isSilent_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; 
v___x_1554_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___redArg(v_msgData_1544_, v_severity_1545_, v_isSilent_1546_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0___boxed(lean_object* v_msgData_1555_, lean_object* v_severity_1556_, lean_object* v_isSilent_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_){
_start:
{
uint8_t v_severity_boxed_1565_; uint8_t v_isSilent_boxed_1566_; lean_object* v_res_1567_; 
v_severity_boxed_1565_ = lean_unbox(v_severity_1556_);
v_isSilent_boxed_1566_ = lean_unbox(v_isSilent_1557_);
v_res_1567_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringOfText_spec__0_spec__0(v_msgData_1555_, v_severity_boxed_1565_, v_isSilent_boxed_1566_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec_ref(v___y_1560_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t v_sz_1568_, size_t v_i_1569_, lean_object* v_bs_1570_){
_start:
{
uint8_t v___x_1571_; 
v___x_1571_ = lean_usize_dec_lt(v_i_1569_, v_sz_1568_);
if (v___x_1571_ == 0)
{
return v_bs_1570_;
}
else
{
lean_object* v_v_1572_; lean_object* v___x_1573_; lean_object* v_bs_x27_1574_; size_t v___x_1575_; size_t v___x_1576_; lean_object* v___x_1577_; 
v_v_1572_ = lean_array_uget(v_bs_1570_, v_i_1569_);
v___x_1573_ = lean_unsigned_to_nat(0u);
v_bs_x27_1574_ = lean_array_uset(v_bs_1570_, v_i_1569_, v___x_1573_);
v___x_1575_ = ((size_t)1ULL);
v___x_1576_ = lean_usize_add(v_i_1569_, v___x_1575_);
v___x_1577_ = lean_array_uset(v_bs_x27_1574_, v_i_1569_, v_v_1572_);
v_i_1569_ = v___x_1576_;
v_bs_1570_ = v___x_1577_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object* v_sz_1579_, lean_object* v_i_1580_, lean_object* v_bs_1581_){
_start:
{
size_t v_sz_boxed_1582_; size_t v_i_boxed_1583_; lean_object* v_res_1584_; 
v_sz_boxed_1582_ = lean_unbox_usize(v_sz_1579_);
lean_dec(v_sz_1579_);
v_i_boxed_1583_ = lean_unbox_usize(v_i_1580_);
lean_dec(v_i_1580_);
v_res_1584_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_boxed_1582_, v_i_boxed_1583_, v_bs_1581_);
return v_res_1584_;
}
}
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t v___x_1585_, uint8_t v_suppressElabErrors_1586_, lean_object* v_x_1587_){
_start:
{
if (lean_obj_tag(v_x_1587_) == 1)
{
lean_object* v_pre_1588_; 
v_pre_1588_ = lean_ctor_get(v_x_1587_, 0);
switch(lean_obj_tag(v_pre_1588_))
{
case 1:
{
lean_object* v_pre_1589_; 
v_pre_1589_ = lean_ctor_get(v_pre_1588_, 0);
switch(lean_obj_tag(v_pre_1589_))
{
case 0:
{
lean_object* v_str_1590_; lean_object* v_str_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v_str_1590_ = lean_ctor_get(v_x_1587_, 1);
v_str_1591_ = lean_ctor_get(v_pre_1588_, 1);
v___x_1592_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_1593_ = lean_string_dec_eq(v_str_1591_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1594_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_1595_ = lean_string_dec_eq(v_str_1591_, v___x_1594_);
if (v___x_1595_ == 0)
{
return v___x_1585_;
}
else
{
lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1596_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_1597_ = lean_string_dec_eq(v_str_1590_, v___x_1596_);
if (v___x_1597_ == 0)
{
return v___x_1585_;
}
else
{
return v_suppressElabErrors_1586_;
}
}
}
else
{
lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___x_1598_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_1599_ = lean_string_dec_eq(v_str_1590_, v___x_1598_);
if (v___x_1599_ == 0)
{
return v___x_1585_;
}
else
{
return v_suppressElabErrors_1586_;
}
}
}
case 1:
{
lean_object* v_pre_1600_; 
v_pre_1600_ = lean_ctor_get(v_pre_1589_, 0);
if (lean_obj_tag(v_pre_1600_) == 0)
{
lean_object* v_str_1601_; lean_object* v_str_1602_; lean_object* v_str_1603_; lean_object* v___x_1604_; uint8_t v___x_1605_; 
v_str_1601_ = lean_ctor_get(v_x_1587_, 1);
v_str_1602_ = lean_ctor_get(v_pre_1588_, 1);
v_str_1603_ = lean_ctor_get(v_pre_1589_, 1);
v___x_1604_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_1605_ = lean_string_dec_eq(v_str_1603_, v___x_1604_);
if (v___x_1605_ == 0)
{
return v___x_1585_;
}
else
{
lean_object* v___x_1606_; uint8_t v___x_1607_; 
v___x_1606_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_1607_ = lean_string_dec_eq(v_str_1602_, v___x_1606_);
if (v___x_1607_ == 0)
{
return v___x_1585_;
}
else
{
lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1608_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_1609_ = lean_string_dec_eq(v_str_1601_, v___x_1608_);
if (v___x_1609_ == 0)
{
return v___x_1585_;
}
else
{
return v_suppressElabErrors_1586_;
}
}
}
}
else
{
return v___x_1585_;
}
}
default: 
{
return v___x_1585_;
}
}
}
case 0:
{
lean_object* v_str_1610_; lean_object* v___x_1611_; uint8_t v___x_1612_; 
v_str_1610_ = lean_ctor_get(v_x_1587_, 1);
v___x_1611_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_1612_ = lean_string_dec_eq(v_str_1610_, v___x_1611_);
if (v___x_1612_ == 0)
{
return v___x_1585_;
}
else
{
return v_suppressElabErrors_1586_;
}
}
default: 
{
return v___x_1585_;
}
}
}
else
{
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object* v___x_1613_, lean_object* v_suppressElabErrors_1614_, lean_object* v_x_1615_){
_start:
{
uint8_t v___x_10722__boxed_1616_; uint8_t v_suppressElabErrors_boxed_1617_; uint8_t v_res_1618_; lean_object* v_r_1619_; 
v___x_10722__boxed_1616_ = lean_unbox(v___x_1613_);
v_suppressElabErrors_boxed_1617_ = lean_unbox(v_suppressElabErrors_1614_);
v_res_1618_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(v___x_10722__boxed_1616_, v_suppressElabErrors_boxed_1617_, v_x_1615_);
lean_dec(v_x_1615_);
v_r_1619_ = lean_box(v_res_1618_);
return v_r_1619_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t v___x_1620_, uint8_t v_suppressElabErrors_1621_, lean_object* v_x_1622_){
_start:
{
if (lean_obj_tag(v_x_1622_) == 1)
{
lean_object* v_pre_1623_; 
v_pre_1623_ = lean_ctor_get(v_x_1622_, 0);
switch(lean_obj_tag(v_pre_1623_))
{
case 1:
{
lean_object* v_pre_1624_; 
v_pre_1624_ = lean_ctor_get(v_pre_1623_, 0);
switch(lean_obj_tag(v_pre_1624_))
{
case 0:
{
lean_object* v_str_1625_; lean_object* v_str_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v_str_1625_ = lean_ctor_get(v_x_1622_, 1);
v_str_1626_ = lean_ctor_get(v_pre_1623_, 1);
v___x_1627_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__0));
v___x_1628_ = lean_string_dec_eq(v_str_1626_, v___x_1627_);
if (v___x_1628_ == 0)
{
lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1629_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__1));
v___x_1630_ = lean_string_dec_eq(v_str_1626_, v___x_1629_);
if (v___x_1630_ == 0)
{
return v___x_1620_;
}
else
{
lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1631_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__2));
v___x_1632_ = lean_string_dec_eq(v_str_1625_, v___x_1631_);
if (v___x_1632_ == 0)
{
return v___x_1620_;
}
else
{
return v_suppressElabErrors_1621_;
}
}
}
else
{
lean_object* v___x_1633_; uint8_t v___x_1634_; 
v___x_1633_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__3));
v___x_1634_ = lean_string_dec_eq(v_str_1625_, v___x_1633_);
if (v___x_1634_ == 0)
{
return v___x_1620_;
}
else
{
return v_suppressElabErrors_1621_;
}
}
}
case 1:
{
lean_object* v_pre_1635_; 
v_pre_1635_ = lean_ctor_get(v_pre_1624_, 0);
if (lean_obj_tag(v_pre_1635_) == 0)
{
lean_object* v_str_1636_; lean_object* v_str_1637_; lean_object* v_str_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v_str_1636_ = lean_ctor_get(v_x_1622_, 1);
v_str_1637_ = lean_ctor_get(v_pre_1623_, 1);
v_str_1638_ = lean_ctor_get(v_pre_1624_, 1);
v___x_1639_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__4));
v___x_1640_ = lean_string_dec_eq(v_str_1638_, v___x_1639_);
if (v___x_1640_ == 0)
{
return v___x_1620_;
}
else
{
lean_object* v___x_1641_; uint8_t v___x_1642_; 
v___x_1641_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__5));
v___x_1642_ = lean_string_dec_eq(v_str_1637_, v___x_1641_);
if (v___x_1642_ == 0)
{
return v___x_1620_;
}
else
{
lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1643_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__6));
v___x_1644_ = lean_string_dec_eq(v_str_1636_, v___x_1643_);
if (v___x_1644_ == 0)
{
return v___x_1620_;
}
else
{
return v_suppressElabErrors_1621_;
}
}
}
}
else
{
return v___x_1620_;
}
}
default: 
{
return v___x_1620_;
}
}
}
case 0:
{
lean_object* v_str_1645_; lean_object* v___x_1646_; uint8_t v___x_1647_; 
v_str_1645_ = lean_ctor_get(v_x_1622_, 1);
v___x_1646_ = ((lean_object*)(l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg___lam__0___closed__7));
v___x_1647_ = lean_string_dec_eq(v_str_1645_, v___x_1646_);
if (v___x_1647_ == 0)
{
return v___x_1620_;
}
else
{
return v_suppressElabErrors_1621_;
}
}
default: 
{
return v___x_1620_;
}
}
}
else
{
return v___x_1620_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v___x_1648_, lean_object* v_suppressElabErrors_1649_, lean_object* v_x_1650_){
_start:
{
uint8_t v___x_10786__boxed_1651_; uint8_t v_suppressElabErrors_boxed_1652_; uint8_t v_res_1653_; lean_object* v_r_1654_; 
v___x_10786__boxed_1651_ = lean_unbox(v___x_1648_);
v_suppressElabErrors_boxed_1652_ = lean_unbox(v_suppressElabErrors_1649_);
v_res_1653_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(v___x_10786__boxed_1651_, v_suppressElabErrors_boxed_1652_, v_x_1650_);
lean_dec(v_x_1650_);
v_r_1654_ = lean_box(v_res_1653_);
return v_r_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object* v___x_1655_, lean_object* v___x_1656_, lean_object* v_as_1657_, size_t v_sz_1658_, size_t v_i_1659_, lean_object* v_b_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_){
_start:
{
lean_object* v_a_1665_; uint8_t v___x_1669_; 
v___x_1669_ = lean_usize_dec_lt(v_i_1659_, v_sz_1658_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1670_; 
lean_dec_ref(v___x_1655_);
v___x_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1670_, 0, v_b_1660_);
return v___x_1670_;
}
else
{
lean_object* v_a_1671_; lean_object* v_snd_1672_; lean_object* v_fst_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1730_; 
v_a_1671_ = lean_array_uget(v_as_1657_, v_i_1659_);
v_snd_1672_ = lean_ctor_get(v_a_1671_, 1);
v_fst_1673_ = lean_ctor_get(v_a_1671_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v_a_1671_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1675_ = v_a_1671_;
v_isShared_1676_ = v_isSharedCheck_1730_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_snd_1672_);
lean_inc(v_fst_1673_);
lean_dec(v_a_1671_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1730_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v_snd_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1728_; 
v_snd_1677_ = lean_ctor_get(v_snd_1672_, 1);
v_isSharedCheck_1728_ = !lean_is_exclusive(v_snd_1672_);
if (v_isSharedCheck_1728_ == 0)
{
lean_object* v_unused_1729_; 
v_unused_1729_ = lean_ctor_get(v_snd_1672_, 0);
lean_dec(v_unused_1729_);
v___x_1679_ = v_snd_1672_;
v_isShared_1680_ = v_isSharedCheck_1728_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_snd_1677_);
lean_dec(v_snd_1672_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1728_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v_fileName_1681_; uint8_t v_suppressElabErrors_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; uint8_t v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___y_1694_; lean_object* v___y_1695_; 
v_fileName_1681_ = lean_ctor_get(v___y_1661_, 0);
v_suppressElabErrors_1682_ = lean_ctor_get_uint8(v___y_1661_, sizeof(void*)*14 + 1);
v___x_1683_ = lean_box(0);
v___x_1684_ = lean_unsigned_to_nat(0u);
v___x_1685_ = lean_nat_dec_eq(v___x_1656_, v___x_1684_);
lean_inc_ref(v___x_1655_);
v___x_1686_ = l_Lean_FileMap_toPosition(v___x_1655_, v_fst_1673_);
lean_dec(v_fst_1673_);
v___x_1687_ = lean_box(0);
v___x_1688_ = 2;
v___x_1689_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1690_ = l_Lean_Parser_Error_toString(v_snd_1677_);
v___x_1691_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___x_1692_ = l_Lean_MessageData_ofFormat(v___x_1691_);
if (v_suppressElabErrors_1682_ == 0)
{
v___y_1694_ = v___y_1661_;
v___y_1695_ = v___y_1662_;
goto v___jp_1693_;
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___f_1726_; uint8_t v___x_1727_; 
v___x_1724_ = lean_box(v___x_1685_);
v___x_1725_ = lean_box(v_suppressElabErrors_1682_);
v___f_1726_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1726_, 0, v___x_1724_);
lean_closure_set(v___f_1726_, 1, v___x_1725_);
lean_inc_ref(v___x_1692_);
v___x_1727_ = l_Lean_MessageData_hasTag(v___f_1726_, v___x_1692_);
if (v___x_1727_ == 0)
{
lean_dec_ref(v___x_1692_);
lean_dec_ref(v___x_1686_);
lean_del_object(v___x_1679_);
lean_del_object(v___x_1675_);
v_a_1665_ = v___x_1683_;
goto v___jp_1664_;
}
else
{
v___y_1694_ = v___y_1661_;
v___y_1695_ = v___y_1662_;
goto v___jp_1693_;
}
}
v___jp_1693_:
{
lean_object* v___x_1696_; lean_object* v_currNamespace_1697_; lean_object* v_openDecls_1698_; lean_object* v___x_1700_; 
v___x_1696_ = lean_st_ref_take(v___y_1695_);
v_currNamespace_1697_ = lean_ctor_get(v___y_1694_, 6);
v_openDecls_1698_ = lean_ctor_get(v___y_1694_, 7);
lean_inc(v_openDecls_1698_);
lean_inc(v_currNamespace_1697_);
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 1, v_openDecls_1698_);
lean_ctor_set(v___x_1679_, 0, v_currNamespace_1697_);
v___x_1700_ = v___x_1679_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_currNamespace_1697_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v_openDecls_1698_);
v___x_1700_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
lean_object* v___x_1702_; 
if (v_isShared_1676_ == 0)
{
lean_ctor_set_tag(v___x_1675_, 4);
lean_ctor_set(v___x_1675_, 1, v___x_1692_);
lean_ctor_set(v___x_1675_, 0, v___x_1700_);
v___x_1702_ = v___x_1675_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1700_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v___x_1692_);
v___x_1702_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
lean_object* v___x_1703_; lean_object* v_env_1704_; lean_object* v_nextMacroScope_1705_; lean_object* v_ngen_1706_; lean_object* v_auxDeclNGen_1707_; lean_object* v_traceState_1708_; lean_object* v_cache_1709_; lean_object* v_messages_1710_; lean_object* v_infoState_1711_; lean_object* v_snapshotTasks_1712_; lean_object* v___x_1714_; uint8_t v_isShared_1715_; uint8_t v_isSharedCheck_1721_; 
lean_inc_ref(v_fileName_1681_);
v___x_1703_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1703_, 0, v_fileName_1681_);
lean_ctor_set(v___x_1703_, 1, v___x_1686_);
lean_ctor_set(v___x_1703_, 2, v___x_1687_);
lean_ctor_set(v___x_1703_, 3, v___x_1689_);
lean_ctor_set(v___x_1703_, 4, v___x_1702_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*5, v___x_1685_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*5 + 1, v___x_1688_);
lean_ctor_set_uint8(v___x_1703_, sizeof(void*)*5 + 2, v___x_1685_);
v_env_1704_ = lean_ctor_get(v___x_1696_, 0);
v_nextMacroScope_1705_ = lean_ctor_get(v___x_1696_, 1);
v_ngen_1706_ = lean_ctor_get(v___x_1696_, 2);
v_auxDeclNGen_1707_ = lean_ctor_get(v___x_1696_, 3);
v_traceState_1708_ = lean_ctor_get(v___x_1696_, 4);
v_cache_1709_ = lean_ctor_get(v___x_1696_, 5);
v_messages_1710_ = lean_ctor_get(v___x_1696_, 6);
v_infoState_1711_ = lean_ctor_get(v___x_1696_, 7);
v_snapshotTasks_1712_ = lean_ctor_get(v___x_1696_, 8);
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1721_ == 0)
{
v___x_1714_ = v___x_1696_;
v_isShared_1715_ = v_isSharedCheck_1721_;
goto v_resetjp_1713_;
}
else
{
lean_inc(v_snapshotTasks_1712_);
lean_inc(v_infoState_1711_);
lean_inc(v_messages_1710_);
lean_inc(v_cache_1709_);
lean_inc(v_traceState_1708_);
lean_inc(v_auxDeclNGen_1707_);
lean_inc(v_ngen_1706_);
lean_inc(v_nextMacroScope_1705_);
lean_inc(v_env_1704_);
lean_dec(v___x_1696_);
v___x_1714_ = lean_box(0);
v_isShared_1715_ = v_isSharedCheck_1721_;
goto v_resetjp_1713_;
}
v_resetjp_1713_:
{
lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1716_ = l_Lean_MessageLog_add(v___x_1703_, v_messages_1710_);
if (v_isShared_1715_ == 0)
{
lean_ctor_set(v___x_1714_, 6, v___x_1716_);
v___x_1718_ = v___x_1714_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_env_1704_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_nextMacroScope_1705_);
lean_ctor_set(v_reuseFailAlloc_1720_, 2, v_ngen_1706_);
lean_ctor_set(v_reuseFailAlloc_1720_, 3, v_auxDeclNGen_1707_);
lean_ctor_set(v_reuseFailAlloc_1720_, 4, v_traceState_1708_);
lean_ctor_set(v_reuseFailAlloc_1720_, 5, v_cache_1709_);
lean_ctor_set(v_reuseFailAlloc_1720_, 6, v___x_1716_);
lean_ctor_set(v_reuseFailAlloc_1720_, 7, v_infoState_1711_);
lean_ctor_set(v_reuseFailAlloc_1720_, 8, v_snapshotTasks_1712_);
v___x_1718_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_st_ref_set(v___y_1695_, v___x_1718_);
v_a_1665_ = v___x_1683_;
goto v___jp_1664_;
}
}
}
}
}
}
}
}
v___jp_1664_:
{
size_t v___x_1666_; size_t v___x_1667_; 
v___x_1666_ = ((size_t)1ULL);
v___x_1667_ = lean_usize_add(v_i_1659_, v___x_1666_);
v_i_1659_ = v___x_1667_;
v_b_1660_ = v_a_1665_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object* v___x_1731_, lean_object* v___x_1732_, lean_object* v_as_1733_, lean_object* v_sz_1734_, lean_object* v_i_1735_, lean_object* v_b_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
size_t v_sz_boxed_1740_; size_t v_i_boxed_1741_; lean_object* v_res_1742_; 
v_sz_boxed_1740_ = lean_unbox_usize(v_sz_1734_);
lean_dec(v_sz_1734_);
v_i_boxed_1741_ = lean_unbox_usize(v_i_1735_);
lean_dec(v_i_1735_);
v_res_1742_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1731_, v___x_1732_, v_as_1733_, v_sz_boxed_1740_, v_i_boxed_1741_, v_b_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec_ref(v_as_1733_);
lean_dec(v___x_1732_);
return v_res_1742_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1743_ = lean_box(1);
v___x_1744_ = l_Lean_MessageData_ofFormat(v___x_1743_);
return v___x_1744_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__2));
v___x_1749_ = l_Lean_MessageData_ofFormat(v___x_1748_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(lean_object* v_x_1750_, lean_object* v_x_1751_){
_start:
{
if (lean_obj_tag(v_x_1751_) == 0)
{
return v_x_1750_;
}
else
{
lean_object* v_head_1752_; lean_object* v_tail_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1775_; 
v_head_1752_ = lean_ctor_get(v_x_1751_, 0);
v_tail_1753_ = lean_ctor_get(v_x_1751_, 1);
v_isSharedCheck_1775_ = !lean_is_exclusive(v_x_1751_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1755_ = v_x_1751_;
v_isShared_1756_ = v_isSharedCheck_1775_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_tail_1753_);
lean_inc(v_head_1752_);
lean_dec(v_x_1751_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1775_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v_before_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1773_; 
v_before_1757_ = lean_ctor_get(v_head_1752_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v_head_1752_);
if (v_isSharedCheck_1773_ == 0)
{
lean_object* v_unused_1774_; 
v_unused_1774_ = lean_ctor_get(v_head_1752_, 1);
lean_dec(v_unused_1774_);
v___x_1759_ = v_head_1752_;
v_isShared_1760_ = v_isSharedCheck_1773_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_before_1757_);
lean_dec(v_head_1752_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1773_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1761_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0);
if (v_isShared_1760_ == 0)
{
lean_ctor_set_tag(v___x_1759_, 7);
lean_ctor_set(v___x_1759_, 1, v___x_1761_);
lean_ctor_set(v___x_1759_, 0, v_x_1750_);
v___x_1763_ = v___x_1759_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_x_1750_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1764_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__3);
if (v_isShared_1756_ == 0)
{
lean_ctor_set_tag(v___x_1755_, 7);
lean_ctor_set(v___x_1755_, 1, v___x_1764_);
lean_ctor_set(v___x_1755_, 0, v___x_1763_);
v___x_1766_ = v___x_1755_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1763_);
lean_ctor_set(v_reuseFailAlloc_1771_, 1, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = l_Lean_MessageData_ofSyntax(v_before_1757_);
v___x_1768_ = l_Lean_indentD(v___x_1767_);
v___x_1769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1766_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v_x_1750_ = v___x_1769_;
v_x_1751_ = v_tail_1753_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__1));
v___x_1780_ = l_Lean_MessageData_ofFormat(v___x_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_msgData_1781_, lean_object* v_macroStack_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_options_1785_; lean_object* v___x_1786_; uint8_t v___x_1787_; 
v_options_1785_ = lean_ctor_get(v___y_1783_, 2);
v___x_1786_ = l_Lean_Elab_pp_macroStack;
v___x_1787_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_1785_, v___x_1786_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; 
lean_dec(v_macroStack_1782_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v_msgData_1781_);
return v___x_1788_;
}
else
{
if (lean_obj_tag(v_macroStack_1782_) == 0)
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v_msgData_1781_);
return v___x_1789_;
}
else
{
lean_object* v_head_1790_; lean_object* v_after_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1806_; 
v_head_1790_ = lean_ctor_get(v_macroStack_1782_, 0);
lean_inc(v_head_1790_);
v_after_1791_ = lean_ctor_get(v_head_1790_, 1);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_head_1790_);
if (v_isSharedCheck_1806_ == 0)
{
lean_object* v_unused_1807_; 
v_unused_1807_ = lean_ctor_get(v_head_1790_, 0);
lean_dec(v_unused_1807_);
v___x_1793_ = v_head_1790_;
v_isShared_1794_ = v_isSharedCheck_1806_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_after_1791_);
lean_dec(v_head_1790_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1806_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1795_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5___closed__0);
if (v_isShared_1794_ == 0)
{
lean_ctor_set_tag(v___x_1793_, 7);
lean_ctor_set(v___x_1793_, 1, v___x_1795_);
lean_ctor_set(v___x_1793_, 0, v_msgData_1781_);
v___x_1797_ = v___x_1793_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_msgData_1781_);
lean_ctor_set(v_reuseFailAlloc_1805_, 1, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v_msgData_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1798_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___closed__2);
v___x_1799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1797_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = l_Lean_MessageData_ofSyntax(v_after_1791_);
v___x_1801_ = l_Lean_indentD(v___x_1800_);
v_msgData_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1802_, 0, v___x_1799_);
lean_ctor_set(v_msgData_1802_, 1, v___x_1801_);
v___x_1803_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4_spec__5(v_msgData_1802_, v_macroStack_1782_);
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
return v___x_1804_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_msgData_1808_, lean_object* v_macroStack_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_msgData_1808_, v_macroStack_1809_, v___y_1810_);
lean_dec_ref(v___y_1810_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_ref_1821_; lean_object* v___x_1822_; lean_object* v_a_1823_; lean_object* v_macroStack_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1835_; 
v_ref_1821_ = lean_ctor_get(v___y_1818_, 5);
v___x_1822_ = l_Lean_addMessageContextFull___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__3(v_msg_1813_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
v_a_1823_ = lean_ctor_get(v___x_1822_, 0);
lean_inc(v_a_1823_);
lean_dec_ref(v___x_1822_);
v_macroStack_1824_ = lean_ctor_get(v___y_1814_, 1);
v___x_1825_ = l_Lean_Elab_getBetterRef(v_ref_1821_, v_macroStack_1824_);
lean_inc(v_macroStack_1824_);
v___x_1826_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_a_1823_, v_macroStack_1824_, v___y_1818_);
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1829_ = v___x_1826_;
v_isShared_1830_ = v_isSharedCheck_1835_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1826_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1835_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1831_; lean_object* v___x_1833_; 
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1825_);
lean_ctor_set(v___x_1831_, 1, v_a_1827_);
if (v_isShared_1830_ == 0)
{
lean_ctor_set_tag(v___x_1829_, 1);
lean_ctor_set(v___x_1829_, 0, v___x_1831_);
v___x_1833_ = v___x_1829_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1831_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object* v_ref_1845_, lean_object* v_msg_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_fileName_1854_; lean_object* v_fileMap_1855_; lean_object* v_options_1856_; lean_object* v_currRecDepth_1857_; lean_object* v_maxRecDepth_1858_; lean_object* v_ref_1859_; lean_object* v_currNamespace_1860_; lean_object* v_openDecls_1861_; lean_object* v_initHeartbeats_1862_; lean_object* v_maxHeartbeats_1863_; lean_object* v_quotContext_1864_; lean_object* v_currMacroScope_1865_; uint8_t v_diag_1866_; lean_object* v_cancelTk_x3f_1867_; uint8_t v_suppressElabErrors_1868_; lean_object* v_inheritedTraceOptions_1869_; lean_object* v_ref_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v_fileName_1854_ = lean_ctor_get(v___y_1851_, 0);
v_fileMap_1855_ = lean_ctor_get(v___y_1851_, 1);
v_options_1856_ = lean_ctor_get(v___y_1851_, 2);
v_currRecDepth_1857_ = lean_ctor_get(v___y_1851_, 3);
v_maxRecDepth_1858_ = lean_ctor_get(v___y_1851_, 4);
v_ref_1859_ = lean_ctor_get(v___y_1851_, 5);
v_currNamespace_1860_ = lean_ctor_get(v___y_1851_, 6);
v_openDecls_1861_ = lean_ctor_get(v___y_1851_, 7);
v_initHeartbeats_1862_ = lean_ctor_get(v___y_1851_, 8);
v_maxHeartbeats_1863_ = lean_ctor_get(v___y_1851_, 9);
v_quotContext_1864_ = lean_ctor_get(v___y_1851_, 10);
v_currMacroScope_1865_ = lean_ctor_get(v___y_1851_, 11);
v_diag_1866_ = lean_ctor_get_uint8(v___y_1851_, sizeof(void*)*14);
v_cancelTk_x3f_1867_ = lean_ctor_get(v___y_1851_, 12);
v_suppressElabErrors_1868_ = lean_ctor_get_uint8(v___y_1851_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1869_ = lean_ctor_get(v___y_1851_, 13);
v_ref_1870_ = l_Lean_replaceRef(v_ref_1845_, v_ref_1859_);
lean_inc_ref(v_inheritedTraceOptions_1869_);
lean_inc(v_cancelTk_x3f_1867_);
lean_inc(v_currMacroScope_1865_);
lean_inc(v_quotContext_1864_);
lean_inc(v_maxHeartbeats_1863_);
lean_inc(v_initHeartbeats_1862_);
lean_inc(v_openDecls_1861_);
lean_inc(v_currNamespace_1860_);
lean_inc(v_maxRecDepth_1858_);
lean_inc(v_currRecDepth_1857_);
lean_inc_ref(v_options_1856_);
lean_inc_ref(v_fileMap_1855_);
lean_inc_ref(v_fileName_1854_);
v___x_1871_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1871_, 0, v_fileName_1854_);
lean_ctor_set(v___x_1871_, 1, v_fileMap_1855_);
lean_ctor_set(v___x_1871_, 2, v_options_1856_);
lean_ctor_set(v___x_1871_, 3, v_currRecDepth_1857_);
lean_ctor_set(v___x_1871_, 4, v_maxRecDepth_1858_);
lean_ctor_set(v___x_1871_, 5, v_ref_1870_);
lean_ctor_set(v___x_1871_, 6, v_currNamespace_1860_);
lean_ctor_set(v___x_1871_, 7, v_openDecls_1861_);
lean_ctor_set(v___x_1871_, 8, v_initHeartbeats_1862_);
lean_ctor_set(v___x_1871_, 9, v_maxHeartbeats_1863_);
lean_ctor_set(v___x_1871_, 10, v_quotContext_1864_);
lean_ctor_set(v___x_1871_, 11, v_currMacroScope_1865_);
lean_ctor_set(v___x_1871_, 12, v_cancelTk_x3f_1867_);
lean_ctor_set(v___x_1871_, 13, v_inheritedTraceOptions_1869_);
lean_ctor_set_uint8(v___x_1871_, sizeof(void*)*14, v_diag_1866_);
lean_ctor_set_uint8(v___x_1871_, sizeof(void*)*14 + 1, v_suppressElabErrors_1868_);
v___x_1872_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___x_1871_, v___y_1852_);
lean_dec_ref_known(v___x_1871_, 14);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1873_, lean_object* v_msg_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1873_, v_msg_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_);
lean_dec(v___y_1880_);
lean_dec_ref(v___y_1879_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
lean_dec(v_ref_1873_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object* v_docComment_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v___y_1895_; uint8_t v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; uint8_t v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; uint8_t v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; uint8_t v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; uint8_t v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___y_1989_; uint8_t v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; lean_object* v___y_1994_; uint8_t v___y_1995_; lean_object* v___y_2006_; uint8_t v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; uint8_t v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; uint8_t v___x_2061_; 
lean_inc(v_docComment_1883_);
v___x_2056_ = l_Lean_Syntax_getKind(v_docComment_1883_);
v___x_2057_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_2058_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_2059_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_2060_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_2061_ = lean_name_eq(v___x_2056_, v___x_2060_);
lean_dec(v___x_2056_);
if (v___x_2061_ == 0)
{
goto v___jp_2033_;
}
else
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = lean_unsigned_to_nat(0u);
v___x_2063_ = l_Lean_Syntax_getArg(v_docComment_1883_, v___x_2062_);
if (lean_obj_tag(v___x_2063_) == 1)
{
lean_object* v_kind_2064_; 
v_kind_2064_ = lean_ctor_get(v___x_2063_, 1);
lean_inc(v_kind_2064_);
if (lean_obj_tag(v_kind_2064_) == 1)
{
lean_object* v_pre_2065_; 
v_pre_2065_ = lean_ctor_get(v_kind_2064_, 0);
lean_inc(v_pre_2065_);
if (lean_obj_tag(v_pre_2065_) == 1)
{
lean_object* v_pre_2066_; 
v_pre_2066_ = lean_ctor_get(v_pre_2065_, 0);
lean_inc(v_pre_2066_);
if (lean_obj_tag(v_pre_2066_) == 1)
{
lean_object* v_pre_2067_; 
v_pre_2067_ = lean_ctor_get(v_pre_2066_, 0);
lean_inc(v_pre_2067_);
if (lean_obj_tag(v_pre_2067_) == 1)
{
lean_object* v_pre_2068_; 
v_pre_2068_ = lean_ctor_get(v_pre_2067_, 0);
lean_inc(v_pre_2068_);
if (lean_obj_tag(v_pre_2068_) == 0)
{
lean_object* v_info_2069_; lean_object* v_args_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2096_; 
v_info_2069_ = lean_ctor_get(v___x_2063_, 0);
v_args_2070_ = lean_ctor_get(v___x_2063_, 2);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; 
v_unused_2097_ = lean_ctor_get(v___x_2063_, 1);
lean_dec(v_unused_2097_);
v___x_2072_ = v___x_2063_;
v_isShared_2073_ = v_isSharedCheck_2096_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_args_2070_);
lean_inc(v_info_2069_);
lean_dec(v___x_2063_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2096_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v_str_2074_; lean_object* v_str_2075_; lean_object* v_str_2076_; lean_object* v_str_2077_; uint8_t v___x_2078_; 
v_str_2074_ = lean_ctor_get(v_kind_2064_, 1);
lean_inc_ref(v_str_2074_);
lean_dec_ref_known(v_kind_2064_, 2);
v_str_2075_ = lean_ctor_get(v_pre_2065_, 1);
lean_inc_ref(v_str_2075_);
lean_dec_ref_known(v_pre_2065_, 2);
v_str_2076_ = lean_ctor_get(v_pre_2066_, 1);
lean_inc_ref(v_str_2076_);
lean_dec_ref_known(v_pre_2066_, 2);
v_str_2077_ = lean_ctor_get(v_pre_2067_, 1);
lean_inc_ref(v_str_2077_);
lean_dec_ref_known(v_pre_2067_, 2);
v___x_2078_ = lean_string_dec_eq(v_str_2077_, v___x_2057_);
lean_dec_ref(v_str_2077_);
if (v___x_2078_ == 0)
{
lean_dec_ref(v_str_2076_);
lean_dec_ref(v_str_2075_);
lean_dec_ref(v_str_2074_);
lean_del_object(v___x_2072_);
lean_dec_ref(v_args_2070_);
lean_dec(v_info_2069_);
goto v___jp_2033_;
}
else
{
uint8_t v___x_2079_; 
v___x_2079_ = lean_string_dec_eq(v_str_2076_, v___x_2058_);
lean_dec_ref(v_str_2076_);
if (v___x_2079_ == 0)
{
lean_dec_ref(v_str_2075_);
lean_dec_ref(v_str_2074_);
lean_del_object(v___x_2072_);
lean_dec_ref(v_args_2070_);
lean_dec(v_info_2069_);
goto v___jp_2033_;
}
else
{
uint8_t v___x_2080_; 
v___x_2080_ = lean_string_dec_eq(v_str_2075_, v___x_2059_);
lean_dec_ref(v_str_2075_);
if (v___x_2080_ == 0)
{
lean_dec_ref(v_str_2074_);
lean_del_object(v___x_2072_);
lean_dec_ref(v_args_2070_);
lean_dec(v_info_2069_);
goto v___jp_2033_;
}
else
{
lean_object* v___x_2081_; uint8_t v___x_2082_; 
v___x_2081_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_2082_ = lean_string_dec_eq(v_str_2074_, v___x_2081_);
lean_dec_ref(v_str_2074_);
if (v___x_2082_ == 0)
{
lean_del_object(v___x_2072_);
lean_dec_ref(v_args_2070_);
lean_dec(v_info_2069_);
goto v___jp_2033_;
}
else
{
lean_dec(v_docComment_1883_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
lean_del_object(v___x_2072_);
lean_dec_ref(v_args_2070_);
lean_dec(v_info_2069_);
v___x_2083_ = lean_box(0);
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
return v___x_2084_;
}
else
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2090_; 
v___x_2085_ = l_Lean_Name_str___override(v_pre_2068_, v___x_2057_);
v___x_2086_ = l_Lean_Name_str___override(v___x_2085_, v___x_2058_);
v___x_2087_ = l_Lean_Name_str___override(v___x_2086_, v___x_2059_);
v___x_2088_ = l_Lean_Name_str___override(v___x_2087_, v___x_2081_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 1, v___x_2088_);
v___x_2090_ = v___x_2072_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_info_2069_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v___x_2088_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_args_2070_);
v___x_2090_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2091_ = lean_unsigned_to_nat(1u);
v___x_2092_ = l_Lean_Syntax_getArg(v___x_2090_, v___x_2091_);
lean_dec_ref(v___x_2090_);
v___x_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
v___x_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
return v___x_2094_;
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
lean_dec_ref_known(v_pre_2067_, 2);
lean_dec(v_pre_2068_);
lean_dec_ref_known(v_pre_2066_, 2);
lean_dec_ref_known(v_pre_2065_, 2);
lean_dec_ref_known(v_kind_2064_, 2);
lean_dec_ref_known(v___x_2063_, 3);
goto v___jp_2033_;
}
}
else
{
lean_dec(v_pre_2067_);
lean_dec_ref_known(v_pre_2066_, 2);
lean_dec_ref_known(v_pre_2065_, 2);
lean_dec_ref_known(v_kind_2064_, 2);
lean_dec_ref_known(v___x_2063_, 3);
goto v___jp_2033_;
}
}
else
{
lean_dec_ref_known(v_pre_2065_, 2);
lean_dec(v_pre_2066_);
lean_dec_ref_known(v_kind_2064_, 2);
lean_dec_ref_known(v___x_2063_, 3);
goto v___jp_2033_;
}
}
else
{
lean_dec(v_pre_2065_);
lean_dec_ref_known(v_kind_2064_, 2);
lean_dec_ref_known(v___x_2063_, 3);
goto v___jp_2033_;
}
}
else
{
lean_dec_ref_known(v___x_2063_, 3);
lean_dec(v_kind_2064_);
goto v___jp_2033_;
}
}
else
{
lean_dec(v___x_2063_);
goto v___jp_2033_;
}
}
v___jp_1891_:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = lean_box(0);
v___x_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
return v___x_1893_;
}
v___jp_1894_:
{
lean_object* v___x_1904_; lean_object* v_currNamespace_1905_; lean_object* v_openDecls_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v_env_1910_; lean_object* v_nextMacroScope_1911_; lean_object* v_ngen_1912_; lean_object* v_auxDeclNGen_1913_; lean_object* v_traceState_1914_; lean_object* v_cache_1915_; lean_object* v_messages_1916_; lean_object* v_infoState_1917_; lean_object* v_snapshotTasks_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1927_; 
v___x_1904_ = lean_st_ref_take(v___y_1903_);
v_currNamespace_1905_ = lean_ctor_get(v___y_1902_, 6);
v_openDecls_1906_ = lean_ctor_get(v___y_1902_, 7);
lean_inc(v_openDecls_1906_);
lean_inc(v_currNamespace_1905_);
v___x_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1907_, 0, v_currNamespace_1905_);
lean_ctor_set(v___x_1907_, 1, v_openDecls_1906_);
v___x_1908_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v___y_1899_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1898_);
v___x_1909_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1909_, 0, v___y_1898_);
lean_ctor_set(v___x_1909_, 1, v___y_1897_);
lean_ctor_set(v___x_1909_, 2, v___y_1895_);
lean_ctor_set(v___x_1909_, 3, v___y_1900_);
lean_ctor_set(v___x_1909_, 4, v___x_1908_);
lean_ctor_set_uint8(v___x_1909_, sizeof(void*)*5, v___y_1901_);
lean_ctor_set_uint8(v___x_1909_, sizeof(void*)*5 + 1, v___y_1896_);
lean_ctor_set_uint8(v___x_1909_, sizeof(void*)*5 + 2, v___y_1901_);
v_env_1910_ = lean_ctor_get(v___x_1904_, 0);
v_nextMacroScope_1911_ = lean_ctor_get(v___x_1904_, 1);
v_ngen_1912_ = lean_ctor_get(v___x_1904_, 2);
v_auxDeclNGen_1913_ = lean_ctor_get(v___x_1904_, 3);
v_traceState_1914_ = lean_ctor_get(v___x_1904_, 4);
v_cache_1915_ = lean_ctor_get(v___x_1904_, 5);
v_messages_1916_ = lean_ctor_get(v___x_1904_, 6);
v_infoState_1917_ = lean_ctor_get(v___x_1904_, 7);
v_snapshotTasks_1918_ = lean_ctor_get(v___x_1904_, 8);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1920_ = v___x_1904_;
v_isShared_1921_ = v_isSharedCheck_1927_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_snapshotTasks_1918_);
lean_inc(v_infoState_1917_);
lean_inc(v_messages_1916_);
lean_inc(v_cache_1915_);
lean_inc(v_traceState_1914_);
lean_inc(v_auxDeclNGen_1913_);
lean_inc(v_ngen_1912_);
lean_inc(v_nextMacroScope_1911_);
lean_inc(v_env_1910_);
lean_dec(v___x_1904_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1927_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1922_ = l_Lean_MessageLog_add(v___x_1909_, v_messages_1916_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 6, v___x_1922_);
v___x_1924_ = v___x_1920_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_env_1910_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v_nextMacroScope_1911_);
lean_ctor_set(v_reuseFailAlloc_1926_, 2, v_ngen_1912_);
lean_ctor_set(v_reuseFailAlloc_1926_, 3, v_auxDeclNGen_1913_);
lean_ctor_set(v_reuseFailAlloc_1926_, 4, v_traceState_1914_);
lean_ctor_set(v_reuseFailAlloc_1926_, 5, v_cache_1915_);
lean_ctor_set(v_reuseFailAlloc_1926_, 6, v___x_1922_);
lean_ctor_set(v_reuseFailAlloc_1926_, 7, v_infoState_1917_);
lean_ctor_set(v_reuseFailAlloc_1926_, 8, v_snapshotTasks_1918_);
v___x_1924_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
lean_object* v___x_1925_; 
v___x_1925_ = lean_st_ref_set(v___y_1903_, v___x_1924_);
goto v___jp_1891_;
}
}
}
v___jp_1928_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; 
lean_inc_ref(v___y_1935_);
v___x_1936_ = l_Lean_Parser_ParserState_allErrors(v___y_1935_);
v___x_1937_ = lean_array_get_size(v___x_1936_);
v___x_1938_ = lean_unsigned_to_nat(0u);
v___x_1939_ = lean_nat_dec_eq(v___x_1937_, v___x_1938_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; size_t v_sz_1941_; size_t v___x_1942_; lean_object* v___x_1943_; 
lean_dec_ref(v___y_1935_);
lean_dec_ref(v___y_1934_);
v___x_1940_ = lean_box(0);
v_sz_1941_ = lean_array_size(v___x_1936_);
v___x_1942_ = ((size_t)0ULL);
lean_inc_ref(v___y_1931_);
v___x_1943_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___y_1931_, v___x_1937_, v___x_1936_, v_sz_1941_, v___x_1942_, v___x_1940_, v___y_1888_, v___y_1889_);
lean_dec_ref(v___x_1936_);
if (lean_obj_tag(v___x_1943_) == 0)
{
lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1951_; 
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1951_ == 0)
{
lean_object* v_unused_1952_; 
v_unused_1952_ = lean_ctor_get(v___x_1943_, 0);
lean_dec(v_unused_1952_);
v___x_1945_ = v___x_1943_;
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
else
{
lean_dec(v___x_1943_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_box(0);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v___x_1947_);
v___x_1949_ = v___x_1945_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
v_a_1953_ = lean_ctor_get(v___x_1943_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1943_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1943_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
else
{
lean_object* v_stxStack_1961_; lean_object* v_pos_1962_; uint8_t v___x_1963_; 
lean_dec_ref(v___x_1936_);
v_stxStack_1961_ = lean_ctor_get(v___y_1935_, 0);
lean_inc_ref(v_stxStack_1961_);
v_pos_1962_ = lean_ctor_get(v___y_1935_, 2);
lean_inc(v_pos_1962_);
lean_dec_ref(v___y_1935_);
v___x_1963_ = l_Lean_Parser_InputContext_atEnd(v___y_1934_, v_pos_1962_);
lean_dec_ref(v___y_1934_);
if (v___x_1963_ == 0)
{
lean_object* v___x_1964_; lean_object* v___x_1965_; uint8_t v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; uint32_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
lean_dec_ref(v_stxStack_1961_);
lean_inc_ref(v___y_1931_);
v___x_1964_ = l_Lean_FileMap_toPosition(v___y_1931_, v_pos_1962_);
v___x_1965_ = lean_box(0);
v___x_1966_ = 2;
v___x_1967_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1968_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_1969_ = lean_string_utf8_get(v___y_1930_, v_pos_1962_);
lean_dec(v_pos_1962_);
v___x_1970_ = lean_string_push(v___x_1967_, v___x_1969_);
v___x_1971_ = lean_string_append(v___x_1968_, v___x_1970_);
lean_dec_ref(v___x_1970_);
v___x_1972_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_1973_ = lean_string_append(v___x_1971_, v___x_1972_);
v___x_1974_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
v___x_1975_ = l_Lean_MessageData_ofFormat(v___x_1974_);
if (v___y_1933_ == 0)
{
v___y_1895_ = v___x_1965_;
v___y_1896_ = v___x_1966_;
v___y_1897_ = v___x_1964_;
v___y_1898_ = v___y_1932_;
v___y_1899_ = v___x_1975_;
v___y_1900_ = v___x_1967_;
v___y_1901_ = v___x_1963_;
v___y_1902_ = v___y_1888_;
v___y_1903_ = v___y_1889_;
goto v___jp_1894_;
}
else
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___f_1978_; uint8_t v___x_1979_; 
v___x_1976_ = lean_box(v___x_1963_);
v___x_1977_ = lean_box(v___y_1929_);
v___f_1978_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1978_, 0, v___x_1976_);
lean_closure_set(v___f_1978_, 1, v___x_1977_);
lean_inc_ref(v___x_1975_);
v___x_1979_ = l_Lean_MessageData_hasTag(v___f_1978_, v___x_1975_);
if (v___x_1979_ == 0)
{
lean_dec_ref(v___x_1975_);
lean_dec_ref(v___x_1964_);
goto v___jp_1891_;
}
else
{
v___y_1895_ = v___x_1965_;
v___y_1896_ = v___x_1966_;
v___y_1897_ = v___x_1964_;
v___y_1898_ = v___y_1932_;
v___y_1899_ = v___x_1975_;
v___y_1900_ = v___x_1967_;
v___y_1901_ = v___x_1963_;
v___y_1902_ = v___y_1888_;
v___y_1903_ = v___y_1889_;
goto v___jp_1894_;
}
}
}
else
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; 
lean_dec(v_pos_1962_);
v___x_1980_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1961_);
lean_dec_ref(v_stxStack_1961_);
v___x_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
v___x_1982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1981_);
return v___x_1982_;
}
}
}
v___jp_1983_:
{
if (v___y_1995_ == 0)
{
lean_dec_ref(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1988_);
v___y_1929_ = v___y_1984_;
v___y_1930_ = v___y_1985_;
v___y_1931_ = v___y_1986_;
v___y_1932_ = v___y_1987_;
v___y_1933_ = v___y_1990_;
v___y_1934_ = v___y_1989_;
v___y_1935_ = v___y_1991_;
goto v___jp_1928_;
}
else
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v_pos_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_1996_ = lean_unsigned_to_nat(0u);
v___x_1997_ = lean_box(0);
v___x_1998_ = lean_box(0);
v___x_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1999_, 0, v___y_1988_);
lean_ctor_set(v___x_1999_, 1, v___x_1996_);
v___x_2000_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1996_);
lean_ctor_set(v___x_2000_, 1, v___x_1997_);
lean_ctor_set(v___x_2000_, 2, v___x_1998_);
lean_ctor_set(v___x_2000_, 3, v___x_1999_);
lean_ctor_set(v___x_2000_, 4, v___x_1996_);
v_pos_2001_ = lean_ctor_get(v___y_1991_, 2);
lean_inc(v_pos_2001_);
lean_dec_ref(v___y_1991_);
v___x_2002_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_2002_, 0, v___x_2000_);
v___x_2003_ = l_Lean_Parser_ParserState_setPos(v___y_1993_, v_pos_2001_);
lean_inc_ref(v___y_1989_);
v___x_2004_ = l_Lean_Parser_ParserFn_run(v___x_2002_, v___y_1989_, v___y_1994_, v___y_1992_, v___x_2003_);
v___y_1929_ = v___y_1984_;
v___y_1930_ = v___y_1985_;
v___y_1931_ = v___y_1986_;
v___y_1932_ = v___y_1987_;
v___y_1933_ = v___y_1990_;
v___y_1934_ = v___y_1989_;
v___y_1935_ = v___x_2004_;
goto v___jp_1928_;
}
}
v___jp_2005_:
{
lean_object* v___x_2017_; lean_object* v_env_2018_; lean_object* v_ictx_2019_; lean_object* v_pmctx_2020_; lean_object* v_blockCtxt_2021_; lean_object* v___x_2022_; lean_object* v_s_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v_s_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; 
v___x_2017_ = lean_st_ref_get(v___y_1889_);
v_env_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc_ref_n(v_env_2018_, 2);
lean_dec(v___x_2017_);
lean_inc(v___y_2016_);
lean_inc_ref_n(v___y_2009_, 2);
lean_inc_ref(v___y_2010_);
lean_inc_ref(v___y_2006_);
v_ictx_2019_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_2019_, 0, v___y_2006_);
lean_ctor_set(v_ictx_2019_, 1, v___y_2010_);
lean_ctor_set(v_ictx_2019_, 2, v___y_2009_);
lean_ctor_set(v_ictx_2019_, 3, v___y_2016_);
lean_inc(v___y_2012_);
lean_inc(v___y_2014_);
lean_inc_ref(v___y_2015_);
v_pmctx_2020_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_2020_, 0, v_env_2018_);
lean_ctor_set(v_pmctx_2020_, 1, v___y_2015_);
lean_ctor_set(v_pmctx_2020_, 2, v___y_2014_);
lean_ctor_set(v_pmctx_2020_, 3, v___y_2012_);
lean_inc(v___y_2008_);
v_blockCtxt_2021_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v___y_2009_, v___y_2008_, v___y_2016_);
v___x_2022_ = l_Lean_Parser_mkParserState(v___y_2006_);
lean_inc_ref(v___x_2022_);
v_s_2023_ = l_Lean_Parser_ParserState_setPos(v___x_2022_, v___y_2008_);
v___x_2024_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_2024_, 0, v_blockCtxt_2021_);
v___x_2025_ = l_Lean_Parser_getTokenTable(v_env_2018_);
lean_inc_ref(v___x_2025_);
lean_inc_ref(v_pmctx_2020_);
lean_inc_ref(v_ictx_2019_);
v_s_2026_ = l_Lean_Parser_ParserFn_run(v___x_2024_, v_ictx_2019_, v_pmctx_2020_, v___x_2025_, v_s_2023_);
lean_inc_ref(v_s_2026_);
v___x_2027_ = l_Lean_Parser_ParserState_allErrors(v_s_2026_);
v___x_2028_ = lean_array_get_size(v___x_2027_);
lean_dec_ref(v___x_2027_);
v___x_2029_ = lean_unsigned_to_nat(0u);
v___x_2030_ = lean_nat_dec_eq(v___x_2028_, v___x_2029_);
if (v___x_2030_ == 0)
{
v___y_1984_ = v___y_2007_;
v___y_1985_ = v___y_2006_;
v___y_1986_ = v___y_2009_;
v___y_1987_ = v___y_2010_;
v___y_1988_ = v___y_2011_;
v___y_1989_ = v_ictx_2019_;
v___y_1990_ = v___y_2013_;
v___y_1991_ = v_s_2026_;
v___y_1992_ = v___x_2025_;
v___y_1993_ = v___x_2022_;
v___y_1994_ = v_pmctx_2020_;
v___y_1995_ = v___x_2030_;
goto v___jp_1983_;
}
else
{
lean_object* v_pos_2031_; uint8_t v___x_2032_; 
v_pos_2031_ = lean_ctor_get(v_s_2026_, 2);
lean_inc(v_pos_2031_);
v___x_2032_ = l_Lean_Parser_InputContext_atEnd(v_ictx_2019_, v_pos_2031_);
lean_dec(v_pos_2031_);
if (v___x_2032_ == 0)
{
v___y_1984_ = v___y_2007_;
v___y_1985_ = v___y_2006_;
v___y_1986_ = v___y_2009_;
v___y_1987_ = v___y_2010_;
v___y_1988_ = v___y_2011_;
v___y_1989_ = v_ictx_2019_;
v___y_1990_ = v___y_2013_;
v___y_1991_ = v_s_2026_;
v___y_1992_ = v___x_2025_;
v___y_1993_ = v___x_2022_;
v___y_1994_ = v_pmctx_2020_;
v___y_1995_ = v___x_2030_;
goto v___jp_1983_;
}
else
{
lean_dec_ref(v___x_2025_);
lean_dec_ref(v___x_2022_);
lean_dec_ref_known(v_pmctx_2020_, 4);
lean_dec(v___y_2011_);
v___y_1929_ = v___y_2007_;
v___y_1930_ = v___y_2006_;
v___y_1931_ = v___y_2009_;
v___y_1932_ = v___y_2010_;
v___y_1933_ = v___y_2013_;
v___y_1934_ = v_ictx_2019_;
v___y_1935_ = v_s_2026_;
goto v___jp_1928_;
}
}
}
v___jp_2033_:
{
lean_object* v_fileName_2034_; lean_object* v_fileMap_2035_; lean_object* v_options_2036_; lean_object* v_currNamespace_2037_; lean_object* v_openDecls_2038_; uint8_t v_suppressElabErrors_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; lean_object* v___x_2043_; 
v_fileName_2034_ = lean_ctor_get(v___y_1888_, 0);
v_fileMap_2035_ = lean_ctor_get(v___y_1888_, 1);
v_options_2036_ = lean_ctor_get(v___y_1888_, 2);
v_currNamespace_2037_ = lean_ctor_get(v___y_1888_, 6);
v_openDecls_2038_ = lean_ctor_get(v___y_1888_, 7);
v_suppressElabErrors_2039_ = lean_ctor_get_uint8(v___y_1888_, sizeof(void*)*14 + 1);
v___x_2040_ = lean_unsigned_to_nat(1u);
v___x_2041_ = l_Lean_Syntax_getArg(v_docComment_1883_, v___x_2040_);
v___x_2042_ = 1;
v___x_2043_ = l_Lean_Syntax_getPos_x3f(v___x_2041_, v___x_2042_);
if (lean_obj_tag(v___x_2043_) == 1)
{
lean_object* v_val_2044_; lean_object* v___x_2045_; 
v_val_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_val_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v___x_2045_ = l_Lean_Syntax_getTailPos_x3f(v___x_2041_, v___x_2042_);
lean_dec(v___x_2041_);
if (lean_obj_tag(v___x_2045_) == 1)
{
lean_object* v_val_2046_; lean_object* v_source_2047_; lean_object* v___x_2048_; lean_object* v_endPos_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; 
lean_dec(v_docComment_1883_);
v_val_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_val_2046_);
lean_dec_ref_known(v___x_2045_, 1);
v_source_2047_ = lean_ctor_get(v_fileMap_2035_, 0);
v___x_2048_ = lean_string_utf8_prev(v_source_2047_, v_val_2046_);
lean_dec(v_val_2046_);
v_endPos_2049_ = lean_string_utf8_prev(v_source_2047_, v___x_2048_);
lean_dec(v___x_2048_);
v___x_2050_ = lean_string_utf8_byte_size(v_source_2047_);
v___x_2051_ = lean_nat_dec_le(v_endPos_2049_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_dec(v_endPos_2049_);
v___y_2006_ = v_source_2047_;
v___y_2007_ = v_suppressElabErrors_2039_;
v___y_2008_ = v_val_2044_;
v___y_2009_ = v_fileMap_2035_;
v___y_2010_ = v_fileName_2034_;
v___y_2011_ = v___x_2040_;
v___y_2012_ = v_openDecls_2038_;
v___y_2013_ = v_suppressElabErrors_2039_;
v___y_2014_ = v_currNamespace_2037_;
v___y_2015_ = v_options_2036_;
v___y_2016_ = v___x_2050_;
goto v___jp_2005_;
}
else
{
v___y_2006_ = v_source_2047_;
v___y_2007_ = v_suppressElabErrors_2039_;
v___y_2008_ = v_val_2044_;
v___y_2009_ = v_fileMap_2035_;
v___y_2010_ = v_fileName_2034_;
v___y_2011_ = v___x_2040_;
v___y_2012_ = v_openDecls_2038_;
v___y_2013_ = v_suppressElabErrors_2039_;
v___y_2014_ = v_currNamespace_2037_;
v___y_2015_ = v_options_2036_;
v___y_2016_ = v_endPos_2049_;
goto v___jp_2005_;
}
}
else
{
lean_object* v___x_2052_; lean_object* v___x_2053_; 
lean_dec(v___x_2045_);
lean_dec(v_val_2044_);
v___x_2052_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_2053_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1883_, v___x_2052_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
lean_dec(v_docComment_1883_);
return v___x_2053_;
}
}
else
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
lean_dec(v___x_2043_);
lean_dec(v___x_2041_);
v___x_2054_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_2055_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1883_, v___x_2054_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
lean_dec(v_docComment_1883_);
return v___x_2055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object* v_docComment_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_2120_, lean_object* v_binders_2121_, lean_object* v_docComment_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v___x_2130_; lean_object* v_body_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; 
v___x_2130_ = lean_unsigned_to_nat(1u);
v_body_2131_ = l_Lean_Syntax_getArg(v_docComment_2122_, v___x_2130_);
v___x_2132_ = 1;
v___x_2133_ = l_Lean_Syntax_getPos_x3f(v_body_2131_, v___x_2132_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v___x_2134_; uint8_t v___x_2135_; 
v___x_2134_ = ((lean_object*)(l_Lean_versoDocString___closed__0));
lean_inc(v_body_2131_);
v___x_2135_ = l_Lean_Syntax_isOfKind(v_body_2131_, v___x_2134_);
if (v___x_2135_ == 0)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; 
lean_dec(v_body_2131_);
v___x_2136_ = l_Lean_TSyntax_getDocString(v_docComment_2122_);
lean_dec(v_docComment_2122_);
v___x_2137_ = l_Lean_versoDocStringOfText(v_declName_2120_, v_binders_2121_, v___x_2136_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
return v___x_2137_;
}
else
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; 
lean_dec(v_docComment_2122_);
v___x_2138_ = lean_unsigned_to_nat(0u);
v___x_2139_ = l_Lean_Syntax_getArg(v_body_2131_, v___x_2138_);
lean_dec(v_body_2131_);
v___x_2140_ = ((lean_object*)(l_Lean_versoDocString___closed__4));
lean_inc(v___x_2139_);
v___x_2141_ = l_Lean_Syntax_isOfKind(v___x_2139_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2142_ = l_Lean_Syntax_getArgs(v___x_2139_);
lean_dec(v___x_2139_);
v___x_2143_ = lean_box(0);
v___x_2144_ = l___private_Lean_DocString_Add_0__Lean_execVersoBlocks(v_declName_2120_, v_binders_2121_, v___x_2142_, v___x_2143_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
return v___x_2144_;
}
else
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2145_ = l_Lean_Syntax_getArg(v___x_2139_, v___x_2138_);
lean_dec(v___x_2139_);
v___x_2146_ = l_Lean_Syntax_getAtomVal(v___x_2145_);
lean_dec(v___x_2145_);
v___x_2147_ = l_Lean_versoDocStringOfText(v_declName_2120_, v_binders_2121_, v___x_2146_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
return v___x_2147_;
}
}
}
else
{
lean_object* v___x_2148_; 
lean_dec_ref_known(v___x_2133_, 1);
lean_dec(v_body_2131_);
v___x_2148_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2165_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2151_ = v___x_2148_;
v_isShared_2152_ = v_isSharedCheck_2165_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2165_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
if (lean_obj_tag(v_a_2149_) == 1)
{
lean_object* v_val_2153_; lean_object* v___x_2154_; size_t v_sz_2155_; size_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; 
lean_del_object(v___x_2151_);
v_val_2153_ = lean_ctor_get(v_a_2149_, 0);
lean_inc(v_val_2153_);
lean_dec_ref_known(v_a_2149_, 1);
v___x_2154_ = l_Lean_Syntax_getArgs(v_val_2153_);
lean_dec(v_val_2153_);
v_sz_2155_ = lean_array_size(v___x_2154_);
v___x_2156_ = ((size_t)0ULL);
v___x_2157_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_2155_, v___x_2156_, v___x_2154_);
v___x_2158_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_2158_, 0, v___x_2157_);
v___x_2159_ = 0;
v___x_2160_ = l_Lean_Doc_DocM_exec___redArg(v_declName_2120_, v_binders_2121_, v___x_2158_, v___x_2159_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
return v___x_2160_;
}
else
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
lean_dec(v_a_2149_);
lean_dec(v_binders_2121_);
lean_dec(v_declName_2120_);
v___x_2161_ = ((lean_object*)(l_Lean_versoDocStringOfText___closed__4));
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v___x_2161_);
v___x_2163_ = v___x_2151_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2161_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
else
{
lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
lean_dec(v_binders_2121_);
lean_dec(v_declName_2120_);
v_a_2166_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2168_ = v___x_2148_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_dec(v___x_2148_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2166_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_2174_, lean_object* v_binders_2175_, lean_object* v_docComment_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lean_versoDocString(v_declName_2174_, v_binders_2175_, v_docComment_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
lean_dec(v_a_2182_);
lean_dec_ref(v_a_2181_);
lean_dec(v_a_2180_);
lean_dec_ref(v_a_2179_);
lean_dec(v_a_2178_);
lean_dec_ref(v_a_2177_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object* v___x_2185_, lean_object* v___x_2186_, lean_object* v_as_2187_, size_t v_sz_2188_, size_t v_i_2189_, lean_object* v_b_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_2185_, v___x_2186_, v_as_2187_, v_sz_2188_, v_i_2189_, v_b_2190_, v___y_2195_, v___y_2196_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object* v___x_2199_, lean_object* v___x_2200_, lean_object* v_as_2201_, lean_object* v_sz_2202_, lean_object* v_i_2203_, lean_object* v_b_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
size_t v_sz_boxed_2212_; size_t v_i_boxed_2213_; lean_object* v_res_2214_; 
v_sz_boxed_2212_ = lean_unbox_usize(v_sz_2202_);
lean_dec(v_sz_2202_);
v_i_boxed_2213_ = lean_unbox_usize(v_i_2203_);
lean_dec(v_i_2203_);
v_res_2214_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(v___x_2199_, v___x_2200_, v_as_2201_, v_sz_boxed_2212_, v_i_boxed_2213_, v_b_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec_ref(v_as_2201_);
lean_dec(v___x_2200_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object* v_00_u03b1_2215_, lean_object* v_ref_2216_, lean_object* v_msg_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_2216_, v_msg_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2226_, lean_object* v_ref_2227_, lean_object* v_msg_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(v_00_u03b1_2226_, v_ref_2227_, v_msg_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v_ref_2227_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_2237_, lean_object* v_msg_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_2247_, lean_object* v_msg_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(v_00_u03b1_2247_, v_msg_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object* v_msgData_2257_, lean_object* v_macroStack_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___redArg(v_msgData_2257_, v_macroStack_2258_, v___y_2263_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_2267_, lean_object* v_macroStack_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msgData_2267_, v_macroStack_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_2277_, lean_object* v_doc_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v___x_2286_; lean_object* v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2294_; lean_object* v_env_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2286_ = lean_st_ref_get(v_a_2284_);
v_env_2301_ = lean_ctor_get(v___x_2286_, 0);
lean_inc_ref(v_env_2301_);
lean_dec(v___x_2286_);
v___x_2302_ = l_Lean_getMainVersoModuleDocs(v_env_2301_);
v___x_2303_ = l_Lean_VersoModuleDocs_terminalNesting(v___x_2302_);
lean_dec_ref(v___x_2302_);
if (lean_obj_tag(v___x_2303_) == 0)
{
v___y_2294_ = v___x_2303_;
goto v___jp_2293_;
}
else
{
lean_object* v_val_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2313_; 
v_val_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2313_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_val_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2313_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2311_; 
v___x_2308_ = lean_unsigned_to_nat(1u);
v___x_2309_ = lean_nat_add(v_val_2304_, v___x_2308_);
lean_dec(v_val_2304_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 0, v___x_2309_);
v___x_2311_ = v___x_2306_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
v___y_2294_ = v___x_2311_;
goto v___jp_2293_;
}
}
}
v___jp_2287_:
{
lean_object* v___x_2290_; uint8_t v___x_2291_; lean_object* v___x_2292_; 
v___x_2290_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_2290_, 0, v_range_2277_);
lean_closure_set(v___x_2290_, 1, v___y_2288_);
lean_closure_set(v___x_2290_, 2, v___y_2289_);
v___x_2291_ = 0;
v___x_2292_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_2290_, v___x_2291_, v_a_2279_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_);
return v___x_2292_;
}
v___jp_2293_:
{
lean_object* v___x_2295_; size_t v_sz_2296_; size_t v___x_2297_; lean_object* v___x_2298_; 
v___x_2295_ = l_Lean_Syntax_getArgs(v_doc_2278_);
v_sz_2296_ = lean_array_size(v___x_2295_);
v___x_2297_ = ((size_t)0ULL);
v___x_2298_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__0(v_sz_2296_, v___x_2297_, v___x_2295_);
if (lean_obj_tag(v___y_2294_) == 0)
{
lean_object* v___x_2299_; 
v___x_2299_ = lean_unsigned_to_nat(0u);
v___y_2288_ = v___x_2298_;
v___y_2289_ = v___x_2299_;
goto v___jp_2287_;
}
else
{
lean_object* v_val_2300_; 
v_val_2300_ = lean_ctor_get(v___y_2294_, 0);
lean_inc(v_val_2300_);
lean_dec_ref_known(v___y_2294_, 1);
v___y_2288_ = v___x_2298_;
v___y_2289_ = v_val_2300_;
goto v___jp_2287_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_2314_, lean_object* v_doc_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_versoModDocString(v_range_2314_, v_doc_2315_, v_a_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_, v_a_2321_);
lean_dec(v_a_2321_);
lean_dec_ref(v_a_2320_);
lean_dec(v_a_2319_);
lean_dec_ref(v_a_2318_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_doc_2315_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_2333_, lean_object* v_docComment_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__3));
v___x_2343_ = l_Lean_versoDocStringOfText(v_declName_2333_, v___x_2342_, v_docComment_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_2344_, lean_object* v_docComment_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lean_versoDocStringFromString(v_declName_2344_, v_docComment_2345_, v_a_2346_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec_ref(v_a_2348_);
lean_dec(v_a_2347_);
lean_dec_ref(v_a_2346_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_2354_, lean_object* v_declName_2355_, lean_object* v_env_2356_){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2357_ = l_Lean_docStringExt;
v___x_2358_ = l_String_removeLeadingSpaces(v_docString_2354_);
v___x_2359_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2357_, v_env_2356_, v_declName_2355_, v___x_2358_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_2360_, lean_object* v_modifyEnv_2361_, lean_object* v_docString_2362_){
_start:
{
lean_object* v___f_2363_; lean_object* v___x_2364_; 
v___f_2363_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2363_, 0, v_docString_2362_);
lean_closure_set(v___f_2363_, 1, v_declName_2360_);
v___x_2364_ = lean_apply_1(v_modifyEnv_2361_, v___f_2363_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_2365_, lean_object* v_inst_2366_, lean_object* v_docComment_2367_, lean_object* v_toBind_2368_, lean_object* v___f_2369_, lean_object* v_____r_2370_){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = l_Lean_getDocStringText___redArg(v_inst_2365_, v_inst_2366_, v_docComment_2367_);
v___x_2372_ = lean_apply_4(v_toBind_2368_, lean_box(0), lean_box(0), v___x_2371_, v___f_2369_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_2373_, lean_object* v_inst_2374_, lean_object* v_inst_2375_, lean_object* v_inst_2376_, lean_object* v_inst_2377_, lean_object* v_docComment_2378_, lean_object* v_toBind_2379_, lean_object* v___f_2380_, lean_object* v_____r_2381_){
_start:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2382_ = l_Lean_validateDocComment___redArg(v_inst_2373_, v_inst_2374_, v_inst_2375_, v_inst_2376_, v_inst_2377_, v_docComment_2378_);
v___x_2383_ = lean_apply_4(v_toBind_2379_, lean_box(0), lean_box(0), v___x_2382_, v___f_2380_);
return v___x_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_2384_, lean_object* v_inst_2385_, lean_object* v_inst_2386_, lean_object* v_inst_2387_, lean_object* v_inst_2388_, lean_object* v_docComment_2389_, lean_object* v_toBind_2390_, lean_object* v___f_2391_, lean_object* v_____r_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_2384_, v_inst_2385_, v_inst_2386_, v_inst_2387_, v_inst_2388_, v_docComment_2389_, v_toBind_2390_, v___f_2391_, v_____r_2392_);
lean_dec(v_docComment_2389_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_2394_, lean_object* v_____r_2395_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = lean_apply_1(v___f_2394_, v_____r_2395_);
return v___x_2396_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__0));
v___x_2399_ = l_Lean_stringToMessageData(v___x_2398_);
return v___x_2399_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__2));
v___x_2402_ = l_Lean_stringToMessageData(v___x_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v___f_2403_, lean_object* v_declName_2404_, uint8_t v___x_2405_, lean_object* v_inst_2406_, lean_object* v_inst_2407_, lean_object* v_toBind_2408_, lean_object* v___f_2409_, lean_object* v_____do__lift_2410_){
_start:
{
lean_object* v___x_2414_; 
v___x_2414_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2410_, v_declName_2404_);
if (lean_obj_tag(v___x_2414_) == 0)
{
lean_dec(v___f_2409_);
lean_dec(v_toBind_2408_);
lean_dec_ref(v_inst_2407_);
lean_dec_ref(v_inst_2406_);
lean_dec(v_declName_2404_);
goto v___jp_2411_;
}
else
{
lean_dec_ref_known(v___x_2414_, 1);
if (v___x_2405_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_dec(v___f_2403_);
v___x_2415_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2416_ = l_Lean_MessageData_ofConstName(v_declName_2404_, v___x_2405_);
v___x_2417_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2417_, 0, v___x_2415_);
lean_ctor_set(v___x_2417_, 1, v___x_2416_);
v___x_2418_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = l_Lean_throwError___redArg(v_inst_2406_, v_inst_2407_, v___x_2419_);
v___x_2421_ = lean_apply_4(v_toBind_2408_, lean_box(0), lean_box(0), v___x_2420_, v___f_2409_);
return v___x_2421_;
}
else
{
lean_dec(v___f_2409_);
lean_dec(v_toBind_2408_);
lean_dec_ref(v_inst_2407_);
lean_dec_ref(v_inst_2406_);
lean_dec(v_declName_2404_);
goto v___jp_2411_;
}
}
v___jp_2411_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2412_ = lean_box(0);
v___x_2413_ = lean_apply_1(v___f_2403_, v___x_2412_);
return v___x_2413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v___f_2422_, lean_object* v_declName_2423_, lean_object* v___x_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_toBind_2427_, lean_object* v___f_2428_, lean_object* v_____do__lift_2429_){
_start:
{
uint8_t v___x_390__boxed_2430_; lean_object* v_res_2431_; 
v___x_390__boxed_2430_ = lean_unbox(v___x_2424_);
v_res_2431_ = l_Lean_addMarkdownDocString___redArg___lam__5(v___f_2422_, v_declName_2423_, v___x_390__boxed_2430_, v_inst_2425_, v_inst_2426_, v_toBind_2427_, v___f_2428_, v_____do__lift_2429_);
lean_dec_ref(v_____do__lift_2429_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_2432_, lean_object* v_inst_2433_, lean_object* v_inst_2434_, lean_object* v_inst_2435_, lean_object* v_inst_2436_, lean_object* v_inst_2437_, lean_object* v_inst_2438_, lean_object* v_declName_2439_, lean_object* v_docComment_2440_){
_start:
{
uint8_t v___x_2441_; 
v___x_2441_ = l_Lean_Name_isAnonymous(v_declName_2439_);
if (v___x_2441_ == 0)
{
lean_object* v_toBind_2442_; lean_object* v_getEnv_2443_; lean_object* v_modifyEnv_2444_; lean_object* v___f_2445_; lean_object* v___f_2446_; lean_object* v___f_2447_; lean_object* v___f_2448_; lean_object* v___x_2449_; lean_object* v___f_2450_; lean_object* v___x_2451_; 
v_toBind_2442_ = lean_ctor_get(v_inst_2432_, 1);
lean_inc_n(v_toBind_2442_, 4);
v_getEnv_2443_ = lean_ctor_get(v_inst_2435_, 0);
lean_inc(v_getEnv_2443_);
v_modifyEnv_2444_ = lean_ctor_get(v_inst_2435_, 1);
lean_inc(v_modifyEnv_2444_);
lean_dec_ref(v_inst_2435_);
lean_inc(v_declName_2439_);
v___f_2445_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2445_, 0, v_declName_2439_);
lean_closure_set(v___f_2445_, 1, v_modifyEnv_2444_);
lean_inc(v_docComment_2440_);
lean_inc_ref(v_inst_2436_);
lean_inc_ref_n(v_inst_2432_, 2);
v___f_2446_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2446_, 0, v_inst_2432_);
lean_closure_set(v___f_2446_, 1, v_inst_2436_);
lean_closure_set(v___f_2446_, 2, v_docComment_2440_);
lean_closure_set(v___f_2446_, 3, v_toBind_2442_);
lean_closure_set(v___f_2446_, 4, v___f_2445_);
v___f_2447_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2447_, 0, v_inst_2432_);
lean_closure_set(v___f_2447_, 1, v_inst_2433_);
lean_closure_set(v___f_2447_, 2, v_inst_2437_);
lean_closure_set(v___f_2447_, 3, v_inst_2438_);
lean_closure_set(v___f_2447_, 4, v_inst_2434_);
lean_closure_set(v___f_2447_, 5, v_docComment_2440_);
lean_closure_set(v___f_2447_, 6, v_toBind_2442_);
lean_closure_set(v___f_2447_, 7, v___f_2446_);
lean_inc_ref(v___f_2447_);
v___f_2448_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2448_, 0, v___f_2447_);
v___x_2449_ = lean_box(v___x_2441_);
v___f_2450_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_2450_, 0, v___f_2447_);
lean_closure_set(v___f_2450_, 1, v_declName_2439_);
lean_closure_set(v___f_2450_, 2, v___x_2449_);
lean_closure_set(v___f_2450_, 3, v_inst_2432_);
lean_closure_set(v___f_2450_, 4, v_inst_2436_);
lean_closure_set(v___f_2450_, 5, v_toBind_2442_);
lean_closure_set(v___f_2450_, 6, v___f_2448_);
v___x_2451_ = lean_apply_4(v_toBind_2442_, lean_box(0), lean_box(0), v_getEnv_2443_, v___f_2450_);
return v___x_2451_;
}
else
{
lean_object* v_toApplicative_2452_; lean_object* v_toPure_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
lean_dec(v_docComment_2440_);
lean_dec(v_declName_2439_);
lean_dec(v_inst_2438_);
lean_dec_ref(v_inst_2437_);
lean_dec_ref(v_inst_2436_);
lean_dec_ref(v_inst_2435_);
lean_dec(v_inst_2434_);
lean_dec(v_inst_2433_);
v_toApplicative_2452_ = lean_ctor_get(v_inst_2432_, 0);
lean_inc_ref(v_toApplicative_2452_);
lean_dec_ref(v_inst_2432_);
v_toPure_2453_ = lean_ctor_get(v_toApplicative_2452_, 1);
lean_inc(v_toPure_2453_);
lean_dec_ref(v_toApplicative_2452_);
v___x_2454_ = lean_box(0);
v___x_2455_ = lean_apply_2(v_toPure_2453_, lean_box(0), v___x_2454_);
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_2456_, lean_object* v_inst_2457_, lean_object* v_inst_2458_, lean_object* v_inst_2459_, lean_object* v_inst_2460_, lean_object* v_inst_2461_, lean_object* v_inst_2462_, lean_object* v_inst_2463_, lean_object* v_declName_2464_, lean_object* v_docComment_2465_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Lean_addMarkdownDocString___redArg(v_inst_2457_, v_inst_2458_, v_inst_2459_, v_inst_2460_, v_inst_2461_, v_inst_2462_, v_inst_2463_, v_declName_2464_, v_docComment_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_declName_2467_, lean_object* v_docs_2468_, lean_object* v_env_2469_){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2470_ = l_Lean_versoDocStringExt;
v___x_2471_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2470_, v_env_2469_, v_declName_2467_, v_docs_2468_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_modifyEnv_2472_, lean_object* v___f_2473_, lean_object* v_____r_2474_){
_start:
{
lean_object* v___x_2475_; 
v___x_2475_ = lean_apply_1(v_modifyEnv_2472_, v___f_2473_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_declName_2478_, lean_object* v_modifyEnv_2479_, lean_object* v___f_2480_, uint8_t v___x_2481_, lean_object* v_inst_2482_, lean_object* v_inst_2483_, lean_object* v_toBind_2484_, lean_object* v___f_2485_, lean_object* v_____do__lift_2486_){
_start:
{
lean_object* v___x_2487_; 
v___x_2487_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2486_, v_declName_2478_);
if (lean_obj_tag(v___x_2487_) == 0)
{
lean_object* v___x_2488_; 
lean_dec(v___f_2485_);
lean_dec(v_toBind_2484_);
lean_dec_ref(v_inst_2483_);
lean_dec_ref(v_inst_2482_);
lean_dec(v_declName_2478_);
v___x_2488_ = lean_apply_1(v_modifyEnv_2479_, v___f_2480_);
return v___x_2488_;
}
else
{
lean_object* v___x_2490_; uint8_t v_isShared_2491_; uint8_t v_isSharedCheck_2505_; 
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2487_);
if (v_isSharedCheck_2505_ == 0)
{
lean_object* v_unused_2506_; 
v_unused_2506_ = lean_ctor_get(v___x_2487_, 0);
lean_dec(v_unused_2506_);
v___x_2490_ = v___x_2487_;
v_isShared_2491_ = v_isSharedCheck_2505_;
goto v_resetjp_2489_;
}
else
{
lean_dec(v___x_2487_);
v___x_2490_ = lean_box(0);
v_isShared_2491_ = v_isSharedCheck_2505_;
goto v_resetjp_2489_;
}
v_resetjp_2489_:
{
if (v___x_2481_ == 0)
{
lean_object* v___x_2492_; uint8_t v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2499_; 
lean_dec_ref(v___f_2480_);
lean_dec(v_modifyEnv_2479_);
v___x_2492_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2493_ = 1;
v___x_2494_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2478_, v___x_2493_);
v___x_2495_ = lean_string_append(v___x_2492_, v___x_2494_);
lean_dec_ref(v___x_2494_);
v___x_2496_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2497_ = lean_string_append(v___x_2495_, v___x_2496_);
if (v_isShared_2491_ == 0)
{
lean_ctor_set_tag(v___x_2490_, 3);
lean_ctor_set(v___x_2490_, 0, v___x_2497_);
v___x_2499_ = v___x_2490_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2497_);
v___x_2499_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2500_ = l_Lean_MessageData_ofFormat(v___x_2499_);
v___x_2501_ = l_Lean_throwError___redArg(v_inst_2482_, v_inst_2483_, v___x_2500_);
v___x_2502_ = lean_apply_4(v_toBind_2484_, lean_box(0), lean_box(0), v___x_2501_, v___f_2485_);
return v___x_2502_;
}
}
else
{
lean_object* v___x_2504_; 
lean_del_object(v___x_2490_);
lean_dec(v___f_2485_);
lean_dec(v_toBind_2484_);
lean_dec_ref(v_inst_2483_);
lean_dec_ref(v_inst_2482_);
lean_dec(v_declName_2478_);
v___x_2504_ = lean_apply_1(v_modifyEnv_2479_, v___f_2480_);
return v___x_2504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_2507_, lean_object* v_modifyEnv_2508_, lean_object* v___f_2509_, lean_object* v___x_2510_, lean_object* v_inst_2511_, lean_object* v_inst_2512_, lean_object* v_toBind_2513_, lean_object* v___f_2514_, lean_object* v_____do__lift_2515_){
_start:
{
uint8_t v___x_304__boxed_2516_; lean_object* v_res_2517_; 
v___x_304__boxed_2516_ = lean_unbox(v___x_2510_);
v_res_2517_ = l_Lean_addVersoDocStringCore___redArg___lam__2(v_declName_2507_, v_modifyEnv_2508_, v___f_2509_, v___x_304__boxed_2516_, v_inst_2511_, v_inst_2512_, v_toBind_2513_, v___f_2514_, v_____do__lift_2515_);
lean_dec_ref(v_____do__lift_2515_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_2518_, lean_object* v_inst_2519_, lean_object* v_inst_2520_, lean_object* v_declName_2521_, lean_object* v_docs_2522_){
_start:
{
uint8_t v___x_2523_; 
v___x_2523_ = l_Lean_Name_isAnonymous(v_declName_2521_);
if (v___x_2523_ == 0)
{
lean_object* v_toBind_2524_; lean_object* v_getEnv_2525_; lean_object* v_modifyEnv_2526_; lean_object* v___f_2527_; lean_object* v___f_2528_; lean_object* v___x_2529_; lean_object* v___f_2530_; lean_object* v___x_2531_; 
v_toBind_2524_ = lean_ctor_get(v_inst_2518_, 1);
lean_inc_n(v_toBind_2524_, 2);
v_getEnv_2525_ = lean_ctor_get(v_inst_2519_, 0);
lean_inc(v_getEnv_2525_);
v_modifyEnv_2526_ = lean_ctor_get(v_inst_2519_, 1);
lean_inc_n(v_modifyEnv_2526_, 2);
lean_dec_ref(v_inst_2519_);
lean_inc(v_declName_2521_);
v___f_2527_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2527_, 0, v_declName_2521_);
lean_closure_set(v___f_2527_, 1, v_docs_2522_);
lean_inc_ref(v___f_2527_);
v___f_2528_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2528_, 0, v_modifyEnv_2526_);
lean_closure_set(v___f_2528_, 1, v___f_2527_);
v___x_2529_ = lean_box(v___x_2523_);
v___f_2530_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2530_, 0, v_declName_2521_);
lean_closure_set(v___f_2530_, 1, v_modifyEnv_2526_);
lean_closure_set(v___f_2530_, 2, v___f_2527_);
lean_closure_set(v___f_2530_, 3, v___x_2529_);
lean_closure_set(v___f_2530_, 4, v_inst_2518_);
lean_closure_set(v___f_2530_, 5, v_inst_2520_);
lean_closure_set(v___f_2530_, 6, v_toBind_2524_);
lean_closure_set(v___f_2530_, 7, v___f_2528_);
v___x_2531_ = lean_apply_4(v_toBind_2524_, lean_box(0), lean_box(0), v_getEnv_2525_, v___f_2530_);
return v___x_2531_;
}
else
{
lean_object* v_toApplicative_2532_; lean_object* v_toPure_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
lean_dec_ref(v_docs_2522_);
lean_dec(v_declName_2521_);
lean_dec_ref(v_inst_2520_);
lean_dec_ref(v_inst_2519_);
v_toApplicative_2532_ = lean_ctor_get(v_inst_2518_, 0);
lean_inc_ref(v_toApplicative_2532_);
lean_dec_ref(v_inst_2518_);
v_toPure_2533_ = lean_ctor_get(v_toApplicative_2532_, 1);
lean_inc(v_toPure_2533_);
lean_dec_ref(v_toApplicative_2532_);
v___x_2534_ = lean_box(0);
v___x_2535_ = lean_apply_2(v_toPure_2533_, lean_box(0), v___x_2534_);
return v___x_2535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_2536_, lean_object* v_inst_2537_, lean_object* v_inst_2538_, lean_object* v_inst_2539_, lean_object* v_inst_2540_, lean_object* v_declName_2541_, lean_object* v_docs_2542_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lean_addVersoDocStringCore___redArg(v_inst_2537_, v_inst_2538_, v_inst_2540_, v_declName_2541_, v_docs_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_2544_, lean_object* v_inst_2545_, lean_object* v_inst_2546_, lean_object* v_inst_2547_, lean_object* v_inst_2548_, lean_object* v_declName_2549_, lean_object* v_docs_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_addVersoDocStringCore(v_m_2544_, v_inst_2545_, v_inst_2546_, v_inst_2547_, v_inst_2548_, v_declName_2549_, v_docs_2550_);
lean_dec(v_inst_2547_);
return v_res_2551_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0));
v___x_2554_ = l_Lean_stringToMessageData(v___x_2553_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_docs_2555_, lean_object* v_inst_2556_, lean_object* v_inst_2557_, lean_object* v_inst_2558_, lean_object* v_____do__lift_2559_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_2559_, v_docs_2555_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
lean_dec_ref(v_inst_2558_);
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref_known(v___x_2560_, 1);
v___x_2562_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_2563_ = l_Lean_stringToMessageData(v_a_2561_);
v___x_2564_ = l_Lean_indentD(v___x_2563_);
v___x_2565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2562_);
lean_ctor_set(v___x_2565_, 1, v___x_2564_);
v___x_2566_ = l_Lean_throwError___redArg(v_inst_2556_, v_inst_2557_, v___x_2565_);
return v___x_2566_;
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2568_; 
lean_dec_ref(v_inst_2557_);
lean_dec_ref(v_inst_2556_);
v_a_2567_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2567_);
lean_dec_ref_known(v___x_2560_, 1);
v___x_2568_ = l_Lean_setEnv___redArg(v_inst_2558_, v_a_2567_);
return v___x_2568_;
}
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0));
v___x_2571_ = l_Lean_stringToMessageData(v___x_2570_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_inst_2572_, lean_object* v_inst_2573_, lean_object* v_toBind_2574_, lean_object* v_getEnv_2575_, lean_object* v___f_2576_, lean_object* v_____do__lift_2577_){
_start:
{
lean_object* v___x_2578_; uint8_t v___x_2579_; 
v___x_2578_ = l_Lean_getMainModuleDoc(v_____do__lift_2577_);
v___x_2579_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_2578_);
lean_dec_ref(v___x_2578_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
lean_dec(v___f_2576_);
lean_dec(v_getEnv_2575_);
lean_dec(v_toBind_2574_);
v___x_2580_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_2581_ = l_Lean_throwError___redArg(v_inst_2572_, v_inst_2573_, v___x_2580_);
return v___x_2581_;
}
else
{
lean_object* v___x_2582_; 
lean_dec_ref(v_inst_2573_);
lean_dec_ref(v_inst_2572_);
v___x_2582_ = lean_apply_4(v_toBind_2574_, lean_box(0), lean_box(0), v_getEnv_2575_, v___f_2576_);
return v___x_2582_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_2583_, lean_object* v_inst_2584_, lean_object* v_inst_2585_, lean_object* v_docs_2586_){
_start:
{
lean_object* v_toBind_2587_; lean_object* v_getEnv_2588_; lean_object* v___f_2589_; lean_object* v___f_2590_; lean_object* v___x_2591_; 
v_toBind_2587_ = lean_ctor_get(v_inst_2583_, 1);
lean_inc_n(v_toBind_2587_, 2);
v_getEnv_2588_ = lean_ctor_get(v_inst_2584_, 0);
lean_inc_n(v_getEnv_2588_, 2);
lean_inc_ref(v_inst_2585_);
lean_inc_ref(v_inst_2583_);
v___f_2589_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2589_, 0, v_docs_2586_);
lean_closure_set(v___f_2589_, 1, v_inst_2583_);
lean_closure_set(v___f_2589_, 2, v_inst_2585_);
lean_closure_set(v___f_2589_, 3, v_inst_2584_);
v___f_2590_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1), 6, 5);
lean_closure_set(v___f_2590_, 0, v_inst_2583_);
lean_closure_set(v___f_2590_, 1, v_inst_2585_);
lean_closure_set(v___f_2590_, 2, v_toBind_2587_);
lean_closure_set(v___f_2590_, 3, v_getEnv_2588_);
lean_closure_set(v___f_2590_, 4, v___f_2589_);
v___x_2591_ = lean_apply_4(v_toBind_2587_, lean_box(0), lean_box(0), v_getEnv_2588_, v___f_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_2592_, lean_object* v_inst_2593_, lean_object* v_inst_2594_, lean_object* v_inst_2595_, lean_object* v_inst_2596_, lean_object* v_docs_2597_){
_start:
{
lean_object* v___x_2598_; 
v___x_2598_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_2593_, v_inst_2594_, v_inst_2596_, v_docs_2597_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_2599_, lean_object* v_inst_2600_, lean_object* v_inst_2601_, lean_object* v_inst_2602_, lean_object* v_inst_2603_, lean_object* v_docs_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lean_addVersoModDocStringCore(v_m_2599_, v_inst_2600_, v_inst_2601_, v_inst_2602_, v_inst_2603_, v_docs_2604_);
lean_dec(v_inst_2602_);
return v_res_2605_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2606_; 
v___x_2606_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2606_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
v___x_2607_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2607_);
return v___x_2608_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2609_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
return v___x_2610_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2611_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2612_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
lean_ctor_set(v___x_2612_, 2, v___x_2611_);
lean_ctor_set(v___x_2612_, 3, v___x_2611_);
lean_ctor_set(v___x_2612_, 4, v___x_2611_);
lean_ctor_set(v___x_2612_, 5, v___x_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2613_, lean_object* v_docs_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v___y_2623_; lean_object* v___y_2624_; uint8_t v___x_2663_; 
v___x_2663_ = l_Lean_Name_isAnonymous(v_declName_2613_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; lean_object* v_env_2665_; lean_object* v___x_2666_; 
v___x_2664_ = lean_st_ref_get(v___y_2620_);
v_env_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc_ref(v_env_2665_);
lean_dec(v___x_2664_);
v___x_2666_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2665_, v_declName_2613_);
lean_dec_ref(v_env_2665_);
if (lean_obj_tag(v___x_2666_) == 0)
{
v___y_2623_ = v___y_2618_;
v___y_2624_ = v___y_2620_;
goto v___jp_2622_;
}
else
{
lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2681_; 
v_isSharedCheck_2681_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2681_ == 0)
{
lean_object* v_unused_2682_; 
v_unused_2682_ = lean_ctor_get(v___x_2666_, 0);
lean_dec(v_unused_2682_);
v___x_2668_ = v___x_2666_;
v_isShared_2669_ = v_isSharedCheck_2681_;
goto v_resetjp_2667_;
}
else
{
lean_dec(v___x_2666_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2681_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
if (v___x_2663_ == 0)
{
lean_object* v___x_2670_; uint8_t v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
lean_dec_ref(v_docs_2614_);
v___x_2670_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2671_ = 1;
v___x_2672_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2613_, v___x_2671_);
v___x_2673_ = lean_string_append(v___x_2670_, v___x_2672_);
lean_dec_ref(v___x_2672_);
v___x_2674_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2675_ = lean_string_append(v___x_2673_, v___x_2674_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set_tag(v___x_2668_, 3);
lean_ctor_set(v___x_2668_, 0, v___x_2675_);
v___x_2677_ = v___x_2668_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2678_ = l_Lean_MessageData_ofFormat(v___x_2677_);
v___x_2679_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2678_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_);
return v___x_2679_;
}
}
else
{
lean_del_object(v___x_2668_);
v___y_2623_ = v___y_2618_;
v___y_2624_ = v___y_2620_;
goto v___jp_2622_;
}
}
}
}
else
{
lean_object* v___x_2683_; lean_object* v___x_2684_; 
lean_dec_ref(v_docs_2614_);
lean_dec(v_declName_2613_);
v___x_2683_ = lean_box(0);
v___x_2684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2683_);
return v___x_2684_;
}
v___jp_2622_:
{
lean_object* v___x_2625_; lean_object* v_env_2626_; lean_object* v_nextMacroScope_2627_; lean_object* v_ngen_2628_; lean_object* v_auxDeclNGen_2629_; lean_object* v_traceState_2630_; lean_object* v_messages_2631_; lean_object* v_infoState_2632_; lean_object* v_snapshotTasks_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2661_; 
v___x_2625_ = lean_st_ref_take(v___y_2624_);
v_env_2626_ = lean_ctor_get(v___x_2625_, 0);
v_nextMacroScope_2627_ = lean_ctor_get(v___x_2625_, 1);
v_ngen_2628_ = lean_ctor_get(v___x_2625_, 2);
v_auxDeclNGen_2629_ = lean_ctor_get(v___x_2625_, 3);
v_traceState_2630_ = lean_ctor_get(v___x_2625_, 4);
v_messages_2631_ = lean_ctor_get(v___x_2625_, 6);
v_infoState_2632_ = lean_ctor_get(v___x_2625_, 7);
v_snapshotTasks_2633_ = lean_ctor_get(v___x_2625_, 8);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2661_ == 0)
{
lean_object* v_unused_2662_; 
v_unused_2662_ = lean_ctor_get(v___x_2625_, 5);
lean_dec(v_unused_2662_);
v___x_2635_ = v___x_2625_;
v_isShared_2636_ = v_isSharedCheck_2661_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_snapshotTasks_2633_);
lean_inc(v_infoState_2632_);
lean_inc(v_messages_2631_);
lean_inc(v_traceState_2630_);
lean_inc(v_auxDeclNGen_2629_);
lean_inc(v_ngen_2628_);
lean_inc(v_nextMacroScope_2627_);
lean_inc(v_env_2626_);
lean_dec(v___x_2625_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2661_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2637_ = l_Lean_versoDocStringExt;
v___x_2638_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2637_, v_env_2626_, v_declName_2613_, v_docs_2614_);
v___x_2639_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 5, v___x_2639_);
lean_ctor_set(v___x_2635_, 0, v___x_2638_);
v___x_2641_ = v___x_2635_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2638_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v_nextMacroScope_2627_);
lean_ctor_set(v_reuseFailAlloc_2660_, 2, v_ngen_2628_);
lean_ctor_set(v_reuseFailAlloc_2660_, 3, v_auxDeclNGen_2629_);
lean_ctor_set(v_reuseFailAlloc_2660_, 4, v_traceState_2630_);
lean_ctor_set(v_reuseFailAlloc_2660_, 5, v___x_2639_);
lean_ctor_set(v_reuseFailAlloc_2660_, 6, v_messages_2631_);
lean_ctor_set(v_reuseFailAlloc_2660_, 7, v_infoState_2632_);
lean_ctor_set(v_reuseFailAlloc_2660_, 8, v_snapshotTasks_2633_);
v___x_2641_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v_mctx_2644_; lean_object* v_zetaDeltaFVarIds_2645_; lean_object* v_postponed_2646_; lean_object* v_diag_2647_; lean_object* v___x_2649_; uint8_t v_isShared_2650_; uint8_t v_isSharedCheck_2658_; 
v___x_2642_ = lean_st_ref_set(v___y_2624_, v___x_2641_);
v___x_2643_ = lean_st_ref_take(v___y_2623_);
v_mctx_2644_ = lean_ctor_get(v___x_2643_, 0);
v_zetaDeltaFVarIds_2645_ = lean_ctor_get(v___x_2643_, 2);
v_postponed_2646_ = lean_ctor_get(v___x_2643_, 3);
v_diag_2647_ = lean_ctor_get(v___x_2643_, 4);
v_isSharedCheck_2658_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2658_ == 0)
{
lean_object* v_unused_2659_; 
v_unused_2659_ = lean_ctor_get(v___x_2643_, 1);
lean_dec(v_unused_2659_);
v___x_2649_ = v___x_2643_;
v_isShared_2650_ = v_isSharedCheck_2658_;
goto v_resetjp_2648_;
}
else
{
lean_inc(v_diag_2647_);
lean_inc(v_postponed_2646_);
lean_inc(v_zetaDeltaFVarIds_2645_);
lean_inc(v_mctx_2644_);
lean_dec(v___x_2643_);
v___x_2649_ = lean_box(0);
v_isShared_2650_ = v_isSharedCheck_2658_;
goto v_resetjp_2648_;
}
v_resetjp_2648_:
{
lean_object* v___x_2651_; lean_object* v___x_2653_; 
v___x_2651_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2650_ == 0)
{
lean_ctor_set(v___x_2649_, 1, v___x_2651_);
v___x_2653_ = v___x_2649_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_mctx_2644_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v___x_2651_);
lean_ctor_set(v_reuseFailAlloc_2657_, 2, v_zetaDeltaFVarIds_2645_);
lean_ctor_set(v_reuseFailAlloc_2657_, 3, v_postponed_2646_);
lean_ctor_set(v_reuseFailAlloc_2657_, 4, v_diag_2647_);
v___x_2653_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2654_ = lean_st_ref_set(v___y_2623_, v___x_2653_);
v___x_2655_ = lean_box(0);
v___x_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
return v___x_2656_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2685_, lean_object* v_docs_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2685_, v_docs_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2695_, lean_object* v_binders_2696_, lean_object* v_docComment_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_){
_start:
{
lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___x_2732_; lean_object* v_env_2733_; lean_object* v___x_2734_; 
v___x_2732_ = lean_st_ref_get(v_a_2703_);
v_env_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc_ref(v_env_2733_);
lean_dec(v___x_2732_);
v___x_2734_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2733_, v_declName_2695_);
lean_dec_ref(v_env_2733_);
if (lean_obj_tag(v___x_2734_) == 0)
{
v___y_2706_ = v_a_2698_;
v___y_2707_ = v_a_2699_;
v___y_2708_ = v_a_2700_;
v___y_2709_ = v_a_2701_;
v___y_2710_ = v_a_2702_;
v___y_2711_ = v_a_2703_;
goto v___jp_2705_;
}
else
{
lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2749_; 
lean_dec(v_docComment_2697_);
lean_dec(v_binders_2696_);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2749_ == 0)
{
lean_object* v_unused_2750_; 
v_unused_2750_ = lean_ctor_get(v___x_2734_, 0);
lean_dec(v_unused_2750_);
v___x_2736_ = v___x_2734_;
v_isShared_2737_ = v_isSharedCheck_2749_;
goto v_resetjp_2735_;
}
else
{
lean_dec(v___x_2734_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2749_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2738_; uint8_t v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2745_; 
v___x_2738_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2739_ = 1;
v___x_2740_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2695_, v___x_2739_);
v___x_2741_ = lean_string_append(v___x_2738_, v___x_2740_);
lean_dec_ref(v___x_2740_);
v___x_2742_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2743_ = lean_string_append(v___x_2741_, v___x_2742_);
if (v_isShared_2737_ == 0)
{
lean_ctor_set_tag(v___x_2736_, 3);
lean_ctor_set(v___x_2736_, 0, v___x_2743_);
v___x_2745_ = v___x_2736_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2743_);
v___x_2745_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2746_ = l_Lean_MessageData_ofFormat(v___x_2745_);
v___x_2747_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2746_, v_a_2698_, v_a_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_);
return v___x_2747_;
}
}
}
v___jp_2705_:
{
lean_object* v___x_2712_; 
lean_inc(v_declName_2695_);
v___x_2712_ = l_Lean_versoDocString(v_declName_2695_, v_binders_2696_, v_docComment_2697_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v_a_2713_; lean_object* v_fst_2714_; lean_object* v_snd_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2723_; 
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc(v_a_2713_);
lean_dec_ref_known(v___x_2712_, 1);
v_fst_2714_ = lean_ctor_get(v_a_2713_, 0);
v_snd_2715_ = lean_ctor_get(v_a_2713_, 1);
v_isSharedCheck_2723_ = !lean_is_exclusive(v_a_2713_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2717_ = v_a_2713_;
v_isShared_2718_ = v_isSharedCheck_2723_;
goto v_resetjp_2716_;
}
else
{
lean_inc(v_snd_2715_);
lean_inc(v_fst_2714_);
lean_dec(v_a_2713_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2723_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2720_; 
if (v_isShared_2718_ == 0)
{
v___x_2720_ = v___x_2717_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_fst_2714_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_snd_2715_);
v___x_2720_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2695_, v___x_2720_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_);
return v___x_2721_;
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_declName_2695_);
v_a_2724_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2712_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2712_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2751_, lean_object* v_binders_2752_, lean_object* v_docComment_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lean_addVersoDocString(v_declName_2751_, v_binders_2752_, v_docComment_2753_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
lean_dec(v_a_2757_);
lean_dec_ref(v_a_2756_);
lean_dec(v_a_2755_);
lean_dec_ref(v_a_2754_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2762_, lean_object* v_docComment_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___x_2798_; lean_object* v_env_2799_; lean_object* v___x_2800_; 
v___x_2798_ = lean_st_ref_get(v_a_2769_);
v_env_2799_ = lean_ctor_get(v___x_2798_, 0);
lean_inc_ref(v_env_2799_);
lean_dec(v___x_2798_);
v___x_2800_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2799_, v_declName_2762_);
lean_dec_ref(v_env_2799_);
if (lean_obj_tag(v___x_2800_) == 0)
{
v___y_2772_ = v_a_2764_;
v___y_2773_ = v_a_2765_;
v___y_2774_ = v_a_2766_;
v___y_2775_ = v_a_2767_;
v___y_2776_ = v_a_2768_;
v___y_2777_ = v_a_2769_;
goto v___jp_2771_;
}
else
{
lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2815_; 
lean_dec_ref(v_docComment_2763_);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2815_ == 0)
{
lean_object* v_unused_2816_; 
v_unused_2816_ = lean_ctor_get(v___x_2800_, 0);
lean_dec(v_unused_2816_);
v___x_2802_ = v___x_2800_;
v_isShared_2803_ = v_isSharedCheck_2815_;
goto v_resetjp_2801_;
}
else
{
lean_dec(v___x_2800_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2815_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; uint8_t v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v___x_2804_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2805_ = 1;
v___x_2806_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2762_, v___x_2805_);
v___x_2807_ = lean_string_append(v___x_2804_, v___x_2806_);
lean_dec_ref(v___x_2806_);
v___x_2808_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2809_ = lean_string_append(v___x_2807_, v___x_2808_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set_tag(v___x_2802_, 3);
lean_ctor_set(v___x_2802_, 0, v___x_2809_);
v___x_2811_ = v___x_2802_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2809_);
v___x_2811_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = l_Lean_MessageData_ofFormat(v___x_2811_);
v___x_2813_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2812_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_);
return v___x_2813_;
}
}
}
v___jp_2771_:
{
lean_object* v___x_2778_; 
lean_inc(v_declName_2762_);
v___x_2778_ = l_Lean_versoDocStringFromString(v_declName_2762_, v_docComment_2763_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
if (lean_obj_tag(v___x_2778_) == 0)
{
lean_object* v_a_2779_; lean_object* v_fst_2780_; lean_object* v_snd_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2789_; 
v_a_2779_ = lean_ctor_get(v___x_2778_, 0);
lean_inc(v_a_2779_);
lean_dec_ref_known(v___x_2778_, 1);
v_fst_2780_ = lean_ctor_get(v_a_2779_, 0);
v_snd_2781_ = lean_ctor_get(v_a_2779_, 1);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_a_2779_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2783_ = v_a_2779_;
v_isShared_2784_ = v_isSharedCheck_2789_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_snd_2781_);
lean_inc(v_fst_2780_);
lean_dec(v_a_2779_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2789_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_fst_2780_);
lean_ctor_set(v_reuseFailAlloc_2788_, 1, v_snd_2781_);
v___x_2786_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2787_; 
v___x_2787_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2762_, v___x_2786_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
return v___x_2787_;
}
}
}
else
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_dec(v_declName_2762_);
v_a_2790_ = lean_ctor_get(v___x_2778_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2778_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2778_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2778_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_2817_, lean_object* v_docComment_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_addVersoDocStringFromString(v_declName_2817_, v_docComment_2818_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
lean_dec(v_a_2820_);
lean_dec_ref(v_a_2819_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2827_, lean_object* v_msgData_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v___x_2834_; uint8_t v___x_2835_; lean_object* v___x_2836_; 
v___x_2834_ = 2;
v___x_2835_ = 0;
v___x_2836_ = l_Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2___redArg(v_ref_2827_, v_msgData_2828_, v___x_2834_, v___x_2835_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2837_, lean_object* v_msgData_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2837_, v_msgData_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_);
lean_dec(v___y_2842_);
lean_dec_ref(v___y_2841_);
lean_dec(v___y_2840_);
lean_dec_ref(v___y_2839_);
lean_dec(v_ref_2837_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_2845_, lean_object* v_str_2846_, lean_object* v_as_2847_, size_t v_sz_2848_, size_t v_i_2849_, lean_object* v_b_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_a_2859_; uint8_t v___x_2863_; 
v___x_2863_ = lean_usize_dec_lt(v_i_2849_, v_sz_2848_);
if (v___x_2863_ == 0)
{
lean_object* v___x_2864_; 
v___x_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2864_, 0, v_b_2850_);
return v___x_2864_;
}
else
{
lean_object* v_a_2865_; lean_object* v_fst_2866_; lean_object* v_snd_2867_; lean_object* v_start_2868_; lean_object* v_stop_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2889_; 
v_a_2865_ = lean_array_uget_borrowed(v_as_2847_, v_i_2849_);
v_fst_2866_ = lean_ctor_get(v_a_2865_, 0);
lean_inc(v_fst_2866_);
v_snd_2867_ = lean_ctor_get(v_a_2865_, 1);
v_start_2868_ = lean_ctor_get(v_fst_2866_, 0);
v_stop_2869_ = lean_ctor_get(v_fst_2866_, 1);
v_isSharedCheck_2889_ = !lean_is_exclusive(v_fst_2866_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2871_ = v_fst_2866_;
v_isShared_2872_ = v_isSharedCheck_2889_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_stop_2869_);
lean_inc(v_start_2868_);
lean_dec(v_fst_2866_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2889_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; 
v___x_2873_ = lean_box(0);
if (lean_obj_tag(v___y_2845_) == 1)
{
lean_object* v_val_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2881_; 
v_val_2874_ = lean_ctor_get(v___y_2845_, 0);
v___x_2875_ = lean_nat_add(v_val_2874_, v_start_2868_);
v___x_2876_ = lean_nat_add(v_val_2874_, v_stop_2869_);
v___x_2877_ = 0;
v___x_2878_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2878_, 0, v___x_2875_);
lean_ctor_set(v___x_2878_, 1, v___x_2876_);
lean_ctor_set_uint8(v___x_2878_, sizeof(void*)*2, v___x_2877_);
v___x_2879_ = lean_string_utf8_extract(v_str_2846_, v_start_2868_, v_stop_2869_);
lean_dec(v_stop_2869_);
lean_dec(v_start_2868_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set_tag(v___x_2871_, 2);
lean_ctor_set(v___x_2871_, 1, v___x_2879_);
lean_ctor_set(v___x_2871_, 0, v___x_2878_);
v___x_2881_ = v___x_2871_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v___x_2878_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v___x_2879_);
v___x_2881_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; 
lean_inc(v_snd_2867_);
v___x_2882_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2882_, 0, v_snd_2867_);
v___x_2883_ = l_Lean_MessageData_ofFormat(v___x_2882_);
v___x_2884_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_2881_, v___x_2883_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
lean_dec_ref(v___x_2881_);
if (lean_obj_tag(v___x_2884_) == 0)
{
lean_dec_ref_known(v___x_2884_, 1);
v_a_2859_ = v___x_2873_;
goto v___jp_2858_;
}
else
{
return v___x_2884_;
}
}
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
lean_del_object(v___x_2871_);
lean_dec(v_stop_2869_);
lean_dec(v_start_2868_);
lean_inc(v_snd_2867_);
v___x_2886_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2886_, 0, v_snd_2867_);
v___x_2887_ = l_Lean_MessageData_ofFormat(v___x_2886_);
v___x_2888_ = l_Lean_logError___at___00Lean_versoDocStringOfText_spec__0(v___x_2887_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_dec_ref_known(v___x_2888_, 1);
v_a_2859_ = v___x_2873_;
goto v___jp_2858_;
}
else
{
return v___x_2888_;
}
}
}
}
v___jp_2858_:
{
size_t v___x_2860_; size_t v___x_2861_; 
v___x_2860_ = ((size_t)1ULL);
v___x_2861_ = lean_usize_add(v_i_2849_, v___x_2860_);
v_i_2849_ = v___x_2861_;
v_b_2850_ = v_a_2859_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_2890_, lean_object* v_str_2891_, lean_object* v_as_2892_, lean_object* v_sz_2893_, lean_object* v_i_2894_, lean_object* v_b_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_){
_start:
{
size_t v_sz_boxed_2903_; size_t v_i_boxed_2904_; lean_object* v_res_2905_; 
v_sz_boxed_2903_ = lean_unbox_usize(v_sz_2893_);
lean_dec(v_sz_2893_);
v_i_boxed_2904_ = lean_unbox_usize(v_i_2894_);
lean_dec(v_i_2894_);
v_res_2905_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2890_, v_str_2891_, v_as_2892_, v_sz_boxed_2903_, v_i_boxed_2904_, v_b_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec_ref(v_as_2892_);
lean_dec_ref(v_str_2891_);
lean_dec(v___y_2890_);
return v_res_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v_str_2914_; lean_object* v___y_2916_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v_str_2914_ = l_Lean_TSyntax_getDocString(v_docstring_2906_);
v___x_2931_ = lean_unsigned_to_nat(1u);
v___x_2932_ = l_Lean_Syntax_getArg(v_docstring_2906_, v___x_2931_);
v___x_2933_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_2932_);
lean_dec(v___x_2932_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_box(0);
v___y_2916_ = v___x_2934_;
goto v___jp_2915_;
}
else
{
lean_object* v_val_2935_; uint8_t v___x_2936_; lean_object* v___x_2937_; 
v_val_2935_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_val_2935_);
lean_dec_ref_known(v___x_2933_, 1);
v___x_2936_ = 0;
v___x_2937_ = l_Lean_SourceInfo_getPos_x3f(v_val_2935_, v___x_2936_);
lean_dec(v_val_2935_);
v___y_2916_ = v___x_2937_;
goto v___jp_2915_;
}
v___jp_2915_:
{
lean_object* v___x_2917_; lean_object* v_fst_2918_; lean_object* v___x_2919_; size_t v_sz_2920_; size_t v___x_2921_; lean_object* v___x_2922_; 
lean_inc_ref(v_str_2914_);
v___x_2917_ = l_Lean_rewriteManualLinksCore(v_str_2914_);
v_fst_2918_ = lean_ctor_get(v___x_2917_, 0);
lean_inc(v_fst_2918_);
lean_dec_ref(v___x_2917_);
v___x_2919_ = lean_box(0);
v_sz_2920_ = lean_array_size(v_fst_2918_);
v___x_2921_ = ((size_t)0ULL);
v___x_2922_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2916_, v_str_2914_, v_fst_2918_, v_sz_2920_, v___x_2921_, v___x_2919_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
lean_dec(v_fst_2918_);
lean_dec_ref(v_str_2914_);
lean_dec(v___y_2916_);
if (lean_obj_tag(v___x_2922_) == 0)
{
lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2929_ == 0)
{
lean_object* v_unused_2930_; 
v_unused_2930_ = lean_ctor_get(v___x_2922_, 0);
lean_dec(v_unused_2930_);
v___x_2924_ = v___x_2922_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_dec(v___x_2922_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v___x_2919_);
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2919_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
else
{
return v___x_2922_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v_docstring_2938_);
return v_res_2946_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2948_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0));
v___x_2949_ = l_Lean_stringToMessageData(v___x_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_val_2965_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2972_ = lean_unsigned_to_nat(1u);
v___x_2973_ = l_Lean_Syntax_getArg(v_stx_2950_, v___x_2972_);
switch(lean_obj_tag(v___x_2973_))
{
case 2:
{
lean_object* v_val_2974_; 
lean_dec(v_stx_2950_);
v_val_2974_ = lean_ctor_get(v___x_2973_, 1);
lean_inc_ref(v_val_2974_);
lean_dec_ref_known(v___x_2973_, 2);
v_val_2965_ = v_val_2974_;
goto v___jp_2964_;
}
case 1:
{
lean_object* v_kind_2975_; 
v_kind_2975_ = lean_ctor_get(v___x_2973_, 1);
lean_inc(v_kind_2975_);
if (lean_obj_tag(v_kind_2975_) == 1)
{
lean_object* v_pre_2976_; 
v_pre_2976_ = lean_ctor_get(v_kind_2975_, 0);
lean_inc(v_pre_2976_);
if (lean_obj_tag(v_pre_2976_) == 1)
{
lean_object* v_pre_2977_; 
v_pre_2977_ = lean_ctor_get(v_pre_2976_, 0);
lean_inc(v_pre_2977_);
if (lean_obj_tag(v_pre_2977_) == 1)
{
lean_object* v_pre_2978_; 
v_pre_2978_ = lean_ctor_get(v_pre_2977_, 0);
lean_inc(v_pre_2978_);
if (lean_obj_tag(v_pre_2978_) == 1)
{
lean_object* v_pre_2979_; 
v_pre_2979_ = lean_ctor_get(v_pre_2978_, 0);
if (lean_obj_tag(v_pre_2979_) == 0)
{
lean_object* v_str_2980_; lean_object* v_str_2981_; lean_object* v_str_2982_; lean_object* v_str_2983_; lean_object* v___x_2984_; uint8_t v___x_2985_; 
v_str_2980_ = lean_ctor_get(v_kind_2975_, 1);
lean_inc_ref(v_str_2980_);
lean_dec_ref_known(v_kind_2975_, 2);
v_str_2981_ = lean_ctor_get(v_pre_2976_, 1);
lean_inc_ref(v_str_2981_);
lean_dec_ref_known(v_pre_2976_, 2);
v_str_2982_ = lean_ctor_get(v_pre_2977_, 1);
lean_inc_ref(v_str_2982_);
lean_dec_ref_known(v_pre_2977_, 2);
v_str_2983_ = lean_ctor_get(v_pre_2978_, 1);
lean_inc_ref(v_str_2983_);
lean_dec_ref_known(v_pre_2978_, 2);
v___x_2984_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_2985_ = lean_string_dec_eq(v_str_2983_, v___x_2984_);
lean_dec_ref(v_str_2983_);
if (v___x_2985_ == 0)
{
lean_dec_ref(v_str_2982_);
lean_dec_ref(v_str_2981_);
lean_dec_ref(v_str_2980_);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
else
{
lean_object* v___x_2986_; uint8_t v___x_2987_; 
v___x_2986_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_2987_ = lean_string_dec_eq(v_str_2982_, v___x_2986_);
lean_dec_ref(v_str_2982_);
if (v___x_2987_ == 0)
{
lean_dec_ref(v_str_2981_);
lean_dec_ref(v_str_2980_);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
else
{
lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2988_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_2989_ = lean_string_dec_eq(v_str_2981_, v___x_2988_);
lean_dec_ref(v_str_2981_);
if (v___x_2989_ == 0)
{
lean_dec_ref(v_str_2980_);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
else
{
lean_object* v___x_2990_; uint8_t v___x_2991_; 
v___x_2990_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_2991_ = lean_string_dec_eq(v_str_2980_, v___x_2990_);
lean_dec_ref(v_str_2980_);
if (v___x_2991_ == 0)
{
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
else
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = lean_unsigned_to_nat(0u);
v___x_2993_ = l_Lean_Syntax_getArg(v___x_2973_, v___x_2992_);
lean_dec_ref_known(v___x_2973_, 3);
if (lean_obj_tag(v___x_2993_) == 2)
{
lean_object* v_val_2994_; 
lean_dec(v_stx_2950_);
v_val_2994_ = lean_ctor_get(v___x_2993_, 1);
lean_inc_ref(v_val_2994_);
lean_dec_ref_known(v___x_2993_, 2);
v_val_2965_ = v_val_2994_;
goto v___jp_2964_;
}
else
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
lean_dec(v___x_2993_);
v___x_2995_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2950_);
v___x_2996_ = l_Lean_MessageData_ofSyntax(v_stx_2950_);
v___x_2997_ = l_Lean_indentD(v___x_2996_);
v___x_2998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2995_);
lean_ctor_set(v___x_2998_, 1, v___x_2997_);
v___x_2999_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_2950_, v___x_2998_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec(v_stx_2950_);
return v___x_2999_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_2978_, 2);
lean_dec_ref_known(v_pre_2977_, 2);
lean_dec_ref_known(v_pre_2976_, 2);
lean_dec_ref_known(v_kind_2975_, 2);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
}
else
{
lean_dec(v_pre_2978_);
lean_dec_ref_known(v_pre_2977_, 2);
lean_dec_ref_known(v_pre_2976_, 2);
lean_dec_ref_known(v_kind_2975_, 2);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
}
else
{
lean_dec(v_pre_2977_);
lean_dec_ref_known(v_pre_2976_, 2);
lean_dec_ref_known(v_kind_2975_, 2);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
}
else
{
lean_dec_ref_known(v_kind_2975_, 2);
lean_dec(v_pre_2976_);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
}
else
{
lean_dec(v_kind_2975_);
lean_dec_ref_known(v___x_2973_, 3);
goto v___jp_2958_;
}
}
default: 
{
lean_dec(v___x_2973_);
goto v___jp_2958_;
}
}
v___jp_2958_:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2959_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2950_);
v___x_2960_ = l_Lean_MessageData_ofSyntax(v_stx_2950_);
v___x_2961_ = l_Lean_indentD(v___x_2960_);
v___x_2962_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2959_);
lean_ctor_set(v___x_2962_, 1, v___x_2961_);
v___x_2963_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_2950_, v___x_2962_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec(v_stx_2950_);
return v___x_2963_;
}
v___jp_2964_:
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2966_ = lean_unsigned_to_nat(0u);
v___x_2967_ = lean_string_utf8_byte_size(v_val_2965_);
v___x_2968_ = lean_unsigned_to_nat(2u);
v___x_2969_ = lean_nat_sub(v___x_2967_, v___x_2968_);
v___x_2970_ = lean_string_utf8_extract(v_val_2965_, v___x_2966_, v___x_2969_);
lean_dec(v___x_2969_);
lean_dec_ref(v_val_2965_);
v___x_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
return v___x_2971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_3009_, lean_object* v_docComment_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; uint8_t v___x_3081_; 
v___x_3081_ = l_Lean_Name_isAnonymous(v_declName_3009_);
if (v___x_3081_ == 0)
{
lean_object* v___x_3082_; lean_object* v_env_3083_; lean_object* v___x_3084_; 
v___x_3082_ = lean_st_ref_get(v___y_3016_);
v_env_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc_ref(v_env_3083_);
lean_dec(v___x_3082_);
v___x_3084_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3083_, v_declName_3009_);
lean_dec_ref(v_env_3083_);
if (lean_obj_tag(v___x_3084_) == 0)
{
v___y_3019_ = v___y_3011_;
v___y_3020_ = v___y_3012_;
v___y_3021_ = v___y_3013_;
v___y_3022_ = v___y_3014_;
v___y_3023_ = v___y_3015_;
v___y_3024_ = v___y_3016_;
goto v___jp_3018_;
}
else
{
lean_dec_ref_known(v___x_3084_, 1);
if (v___x_3081_ == 0)
{
lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_dec(v_docComment_3010_);
v___x_3085_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_3086_ = l_Lean_MessageData_ofConstName(v_declName_3009_, v___x_3081_);
v___x_3087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3085_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3089_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
return v___x_3090_;
}
else
{
v___y_3019_ = v___y_3011_;
v___y_3020_ = v___y_3012_;
v___y_3021_ = v___y_3013_;
v___y_3022_ = v___y_3014_;
v___y_3023_ = v___y_3015_;
v___y_3024_ = v___y_3016_;
goto v___jp_3018_;
}
}
}
else
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
lean_dec(v_docComment_3010_);
lean_dec(v_declName_3009_);
v___x_3091_ = lean_box(0);
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
return v___x_3092_;
}
v___jp_3018_:
{
lean_object* v___x_3025_; 
v___x_3025_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_3010_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
if (lean_obj_tag(v___x_3025_) == 0)
{
lean_object* v___x_3026_; 
lean_dec_ref_known(v___x_3025_, 1);
v___x_3026_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_3010_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
if (lean_obj_tag(v___x_3026_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3072_; 
v_a_3027_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3029_ = v___x_3026_;
v_isShared_3030_ = v_isSharedCheck_3072_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_3026_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3072_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3031_; lean_object* v_env_3032_; lean_object* v_nextMacroScope_3033_; lean_object* v_ngen_3034_; lean_object* v_auxDeclNGen_3035_; lean_object* v_traceState_3036_; lean_object* v_messages_3037_; lean_object* v_infoState_3038_; lean_object* v_snapshotTasks_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3070_; 
v___x_3031_ = lean_st_ref_take(v___y_3024_);
v_env_3032_ = lean_ctor_get(v___x_3031_, 0);
v_nextMacroScope_3033_ = lean_ctor_get(v___x_3031_, 1);
v_ngen_3034_ = lean_ctor_get(v___x_3031_, 2);
v_auxDeclNGen_3035_ = lean_ctor_get(v___x_3031_, 3);
v_traceState_3036_ = lean_ctor_get(v___x_3031_, 4);
v_messages_3037_ = lean_ctor_get(v___x_3031_, 6);
v_infoState_3038_ = lean_ctor_get(v___x_3031_, 7);
v_snapshotTasks_3039_ = lean_ctor_get(v___x_3031_, 8);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; 
v_unused_3071_ = lean_ctor_get(v___x_3031_, 5);
lean_dec(v_unused_3071_);
v___x_3041_ = v___x_3031_;
v_isShared_3042_ = v_isSharedCheck_3070_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_snapshotTasks_3039_);
lean_inc(v_infoState_3038_);
lean_inc(v_messages_3037_);
lean_inc(v_traceState_3036_);
lean_inc(v_auxDeclNGen_3035_);
lean_inc(v_ngen_3034_);
lean_inc(v_nextMacroScope_3033_);
lean_inc(v_env_3032_);
lean_dec(v___x_3031_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3070_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3043_ = l_Lean_docStringExt;
v___x_3044_ = l_String_removeLeadingSpaces(v_a_3027_);
v___x_3045_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3043_, v_env_3032_, v_declName_3009_, v___x_3044_);
v___x_3046_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 5, v___x_3046_);
lean_ctor_set(v___x_3041_, 0, v___x_3045_);
v___x_3048_ = v___x_3041_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3069_, 1, v_nextMacroScope_3033_);
lean_ctor_set(v_reuseFailAlloc_3069_, 2, v_ngen_3034_);
lean_ctor_set(v_reuseFailAlloc_3069_, 3, v_auxDeclNGen_3035_);
lean_ctor_set(v_reuseFailAlloc_3069_, 4, v_traceState_3036_);
lean_ctor_set(v_reuseFailAlloc_3069_, 5, v___x_3046_);
lean_ctor_set(v_reuseFailAlloc_3069_, 6, v_messages_3037_);
lean_ctor_set(v_reuseFailAlloc_3069_, 7, v_infoState_3038_);
lean_ctor_set(v_reuseFailAlloc_3069_, 8, v_snapshotTasks_3039_);
v___x_3048_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v_mctx_3051_; lean_object* v_zetaDeltaFVarIds_3052_; lean_object* v_postponed_3053_; lean_object* v_diag_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3067_; 
v___x_3049_ = lean_st_ref_set(v___y_3024_, v___x_3048_);
v___x_3050_ = lean_st_ref_take(v___y_3022_);
v_mctx_3051_ = lean_ctor_get(v___x_3050_, 0);
v_zetaDeltaFVarIds_3052_ = lean_ctor_get(v___x_3050_, 2);
v_postponed_3053_ = lean_ctor_get(v___x_3050_, 3);
v_diag_3054_ = lean_ctor_get(v___x_3050_, 4);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3050_);
if (v_isSharedCheck_3067_ == 0)
{
lean_object* v_unused_3068_; 
v_unused_3068_ = lean_ctor_get(v___x_3050_, 1);
lean_dec(v_unused_3068_);
v___x_3056_ = v___x_3050_;
v_isShared_3057_ = v_isSharedCheck_3067_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_diag_3054_);
lean_inc(v_postponed_3053_);
lean_inc(v_zetaDeltaFVarIds_3052_);
lean_inc(v_mctx_3051_);
lean_dec(v___x_3050_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3067_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3058_; lean_object* v___x_3060_; 
v___x_3058_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 1, v___x_3058_);
v___x_3060_ = v___x_3056_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_mctx_3051_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v___x_3058_);
lean_ctor_set(v_reuseFailAlloc_3066_, 2, v_zetaDeltaFVarIds_3052_);
lean_ctor_set(v_reuseFailAlloc_3066_, 3, v_postponed_3053_);
lean_ctor_set(v_reuseFailAlloc_3066_, 4, v_diag_3054_);
v___x_3060_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3064_; 
v___x_3061_ = lean_st_ref_set(v___y_3022_, v___x_3060_);
v___x_3062_ = lean_box(0);
if (v_isShared_3030_ == 0)
{
lean_ctor_set(v___x_3029_, 0, v___x_3062_);
v___x_3064_ = v___x_3029_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3062_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec(v_declName_3009_);
v_a_3073_ = lean_ctor_get(v___x_3026_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3026_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3026_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3026_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_dec(v_docComment_3010_);
lean_dec(v_declName_3009_);
return v___x_3025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_3093_, lean_object* v_docComment_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3093_, v_docComment_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_3103_, lean_object* v_declName_3104_, lean_object* v_binders_3105_, lean_object* v_docComment_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_, lean_object* v_a_3112_){
_start:
{
if (v_isVerso_3103_ == 0)
{
lean_object* v___x_3114_; 
lean_dec(v_binders_3105_);
v___x_3114_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3104_, v_docComment_3106_, v_a_3107_, v_a_3108_, v_a_3109_, v_a_3110_, v_a_3111_, v_a_3112_);
return v___x_3114_;
}
else
{
lean_object* v___x_3115_; 
v___x_3115_ = l_Lean_addVersoDocString(v_declName_3104_, v_binders_3105_, v_docComment_3106_, v_a_3107_, v_a_3108_, v_a_3109_, v_a_3110_, v_a_3111_, v_a_3112_);
return v___x_3115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_3116_, lean_object* v_declName_3117_, lean_object* v_binders_3118_, lean_object* v_docComment_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
uint8_t v_isVerso_boxed_3127_; lean_object* v_res_3128_; 
v_isVerso_boxed_3127_ = lean_unbox(v_isVerso_3116_);
v_res_3128_ = l_Lean_addDocStringOf(v_isVerso_boxed_3127_, v_declName_3117_, v_binders_3118_, v_docComment_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_);
lean_dec(v_a_3125_);
lean_dec_ref(v_a_3124_);
lean_dec(v_a_3123_);
lean_dec_ref(v_a_3122_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_3129_, lean_object* v_msgData_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3129_, v_msgData_3130_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_3139_, lean_object* v_msgData_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_3139_, v_msgData_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
lean_dec(v___y_3142_);
lean_dec_ref(v___y_3141_);
lean_dec(v_ref_3139_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object* v_k_3149_, lean_object* v_t_3150_){
_start:
{
if (lean_obj_tag(v_t_3150_) == 0)
{
lean_object* v_k_3151_; lean_object* v_v_3152_; lean_object* v_l_3153_; lean_object* v_r_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3808_; 
v_k_3151_ = lean_ctor_get(v_t_3150_, 1);
v_v_3152_ = lean_ctor_get(v_t_3150_, 2);
v_l_3153_ = lean_ctor_get(v_t_3150_, 3);
v_r_3154_ = lean_ctor_get(v_t_3150_, 4);
v_isSharedCheck_3808_ = !lean_is_exclusive(v_t_3150_);
if (v_isSharedCheck_3808_ == 0)
{
lean_object* v_unused_3809_; 
v_unused_3809_ = lean_ctor_get(v_t_3150_, 0);
lean_dec(v_unused_3809_);
v___x_3156_ = v_t_3150_;
v_isShared_3157_ = v_isSharedCheck_3808_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_r_3154_);
lean_inc(v_l_3153_);
lean_inc(v_v_3152_);
lean_inc(v_k_3151_);
lean_dec(v_t_3150_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3808_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
uint8_t v___x_3158_; 
v___x_3158_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3149_, v_k_3151_);
switch(v___x_3158_)
{
case 0:
{
lean_object* v_impl_3159_; lean_object* v___x_3160_; 
v_impl_3159_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3149_, v_l_3153_);
v___x_3160_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3159_) == 0)
{
if (lean_obj_tag(v_r_3154_) == 0)
{
lean_object* v_size_3161_; lean_object* v_size_3162_; lean_object* v_k_3163_; lean_object* v_v_3164_; lean_object* v_l_3165_; lean_object* v_r_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; uint8_t v___x_3169_; 
v_size_3161_ = lean_ctor_get(v_impl_3159_, 0);
lean_inc(v_size_3161_);
v_size_3162_ = lean_ctor_get(v_r_3154_, 0);
v_k_3163_ = lean_ctor_get(v_r_3154_, 1);
v_v_3164_ = lean_ctor_get(v_r_3154_, 2);
v_l_3165_ = lean_ctor_get(v_r_3154_, 3);
lean_inc(v_l_3165_);
v_r_3166_ = lean_ctor_get(v_r_3154_, 4);
v___x_3167_ = lean_unsigned_to_nat(3u);
v___x_3168_ = lean_nat_mul(v___x_3167_, v_size_3161_);
v___x_3169_ = lean_nat_dec_lt(v___x_3168_, v_size_3162_);
lean_dec(v___x_3168_);
if (v___x_3169_ == 0)
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3173_; 
lean_dec(v_l_3165_);
v___x_3170_ = lean_nat_add(v___x_3160_, v_size_3161_);
lean_dec(v_size_3161_);
v___x_3171_ = lean_nat_add(v___x_3170_, v_size_3162_);
lean_dec(v___x_3170_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 3, v_impl_3159_);
lean_ctor_set(v___x_3156_, 0, v___x_3171_);
v___x_3173_ = v___x_3156_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v___x_3171_);
lean_ctor_set(v_reuseFailAlloc_3174_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3174_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3174_, 3, v_impl_3159_);
lean_ctor_set(v_reuseFailAlloc_3174_, 4, v_r_3154_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
else
{
lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3238_; 
lean_inc(v_r_3166_);
lean_inc(v_v_3164_);
lean_inc(v_k_3163_);
lean_inc(v_size_3162_);
v_isSharedCheck_3238_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3238_ == 0)
{
lean_object* v_unused_3239_; lean_object* v_unused_3240_; lean_object* v_unused_3241_; lean_object* v_unused_3242_; lean_object* v_unused_3243_; 
v_unused_3239_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3239_);
v_unused_3240_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3240_);
v_unused_3241_ = lean_ctor_get(v_r_3154_, 2);
lean_dec(v_unused_3241_);
v_unused_3242_ = lean_ctor_get(v_r_3154_, 1);
lean_dec(v_unused_3242_);
v_unused_3243_ = lean_ctor_get(v_r_3154_, 0);
lean_dec(v_unused_3243_);
v___x_3176_ = v_r_3154_;
v_isShared_3177_ = v_isSharedCheck_3238_;
goto v_resetjp_3175_;
}
else
{
lean_dec(v_r_3154_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3238_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v_size_3178_; lean_object* v_k_3179_; lean_object* v_v_3180_; lean_object* v_l_3181_; lean_object* v_r_3182_; lean_object* v_size_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; uint8_t v___x_3186_; 
v_size_3178_ = lean_ctor_get(v_l_3165_, 0);
v_k_3179_ = lean_ctor_get(v_l_3165_, 1);
v_v_3180_ = lean_ctor_get(v_l_3165_, 2);
v_l_3181_ = lean_ctor_get(v_l_3165_, 3);
v_r_3182_ = lean_ctor_get(v_l_3165_, 4);
v_size_3183_ = lean_ctor_get(v_r_3166_, 0);
v___x_3184_ = lean_unsigned_to_nat(2u);
v___x_3185_ = lean_nat_mul(v___x_3184_, v_size_3183_);
v___x_3186_ = lean_nat_dec_lt(v_size_3178_, v___x_3185_);
lean_dec(v___x_3185_);
if (v___x_3186_ == 0)
{
lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3214_; 
lean_inc(v_r_3182_);
lean_inc(v_l_3181_);
lean_inc(v_v_3180_);
lean_inc(v_k_3179_);
v_isSharedCheck_3214_ = !lean_is_exclusive(v_l_3165_);
if (v_isSharedCheck_3214_ == 0)
{
lean_object* v_unused_3215_; lean_object* v_unused_3216_; lean_object* v_unused_3217_; lean_object* v_unused_3218_; lean_object* v_unused_3219_; 
v_unused_3215_ = lean_ctor_get(v_l_3165_, 4);
lean_dec(v_unused_3215_);
v_unused_3216_ = lean_ctor_get(v_l_3165_, 3);
lean_dec(v_unused_3216_);
v_unused_3217_ = lean_ctor_get(v_l_3165_, 2);
lean_dec(v_unused_3217_);
v_unused_3218_ = lean_ctor_get(v_l_3165_, 1);
lean_dec(v_unused_3218_);
v_unused_3219_ = lean_ctor_get(v_l_3165_, 0);
lean_dec(v_unused_3219_);
v___x_3188_ = v_l_3165_;
v_isShared_3189_ = v_isSharedCheck_3214_;
goto v_resetjp_3187_;
}
else
{
lean_dec(v_l_3165_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3214_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3204_; 
v___x_3190_ = lean_nat_add(v___x_3160_, v_size_3161_);
lean_dec(v_size_3161_);
v___x_3191_ = lean_nat_add(v___x_3190_, v_size_3162_);
lean_dec(v_size_3162_);
if (lean_obj_tag(v_l_3181_) == 0)
{
lean_object* v_size_3212_; 
v_size_3212_ = lean_ctor_get(v_l_3181_, 0);
lean_inc(v_size_3212_);
v___y_3204_ = v_size_3212_;
goto v___jp_3203_;
}
else
{
lean_object* v___x_3213_; 
v___x_3213_ = lean_unsigned_to_nat(0u);
v___y_3204_ = v___x_3213_;
goto v___jp_3203_;
}
v___jp_3192_:
{
lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3196_ = lean_nat_add(v___y_3194_, v___y_3195_);
lean_dec(v___y_3195_);
lean_dec(v___y_3194_);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 4, v_r_3166_);
lean_ctor_set(v___x_3188_, 3, v_r_3182_);
lean_ctor_set(v___x_3188_, 2, v_v_3164_);
lean_ctor_set(v___x_3188_, 1, v_k_3163_);
lean_ctor_set(v___x_3188_, 0, v___x_3196_);
v___x_3198_ = v___x_3188_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3196_);
lean_ctor_set(v_reuseFailAlloc_3202_, 1, v_k_3163_);
lean_ctor_set(v_reuseFailAlloc_3202_, 2, v_v_3164_);
lean_ctor_set(v_reuseFailAlloc_3202_, 3, v_r_3182_);
lean_ctor_set(v_reuseFailAlloc_3202_, 4, v_r_3166_);
v___x_3198_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
lean_object* v___x_3200_; 
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 4, v___x_3198_);
lean_ctor_set(v___x_3176_, 3, v___y_3193_);
lean_ctor_set(v___x_3176_, 2, v_v_3180_);
lean_ctor_set(v___x_3176_, 1, v_k_3179_);
lean_ctor_set(v___x_3176_, 0, v___x_3191_);
v___x_3200_ = v___x_3176_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v___x_3191_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v_k_3179_);
lean_ctor_set(v_reuseFailAlloc_3201_, 2, v_v_3180_);
lean_ctor_set(v_reuseFailAlloc_3201_, 3, v___y_3193_);
lean_ctor_set(v_reuseFailAlloc_3201_, 4, v___x_3198_);
v___x_3200_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
return v___x_3200_;
}
}
}
v___jp_3203_:
{
lean_object* v___x_3205_; lean_object* v___x_3207_; 
v___x_3205_ = lean_nat_add(v___x_3190_, v___y_3204_);
lean_dec(v___y_3204_);
lean_dec(v___x_3190_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_l_3181_);
lean_ctor_set(v___x_3156_, 3, v_impl_3159_);
lean_ctor_set(v___x_3156_, 0, v___x_3205_);
v___x_3207_ = v___x_3156_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3205_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3211_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3211_, 3, v_impl_3159_);
lean_ctor_set(v_reuseFailAlloc_3211_, 4, v_l_3181_);
v___x_3207_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3208_; 
v___x_3208_ = lean_nat_add(v___x_3160_, v_size_3183_);
if (lean_obj_tag(v_r_3182_) == 0)
{
lean_object* v_size_3209_; 
v_size_3209_ = lean_ctor_get(v_r_3182_, 0);
lean_inc(v_size_3209_);
v___y_3193_ = v___x_3207_;
v___y_3194_ = v___x_3208_;
v___y_3195_ = v_size_3209_;
goto v___jp_3192_;
}
else
{
lean_object* v___x_3210_; 
v___x_3210_ = lean_unsigned_to_nat(0u);
v___y_3193_ = v___x_3207_;
v___y_3194_ = v___x_3208_;
v___y_3195_ = v___x_3210_;
goto v___jp_3192_;
}
}
}
}
}
else
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3224_; 
lean_del_object(v___x_3156_);
v___x_3220_ = lean_nat_add(v___x_3160_, v_size_3161_);
lean_dec(v_size_3161_);
v___x_3221_ = lean_nat_add(v___x_3220_, v_size_3162_);
lean_dec(v_size_3162_);
v___x_3222_ = lean_nat_add(v___x_3220_, v_size_3178_);
lean_dec(v___x_3220_);
lean_inc_ref(v_impl_3159_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 4, v_l_3165_);
lean_ctor_set(v___x_3176_, 3, v_impl_3159_);
lean_ctor_set(v___x_3176_, 2, v_v_3152_);
lean_ctor_set(v___x_3176_, 1, v_k_3151_);
lean_ctor_set(v___x_3176_, 0, v___x_3222_);
v___x_3224_ = v___x_3176_;
goto v_reusejp_3223_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3222_);
lean_ctor_set(v_reuseFailAlloc_3237_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3237_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3237_, 3, v_impl_3159_);
lean_ctor_set(v_reuseFailAlloc_3237_, 4, v_l_3165_);
v___x_3224_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3223_;
}
v_reusejp_3223_:
{
lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3231_; 
v_isSharedCheck_3231_ = !lean_is_exclusive(v_impl_3159_);
if (v_isSharedCheck_3231_ == 0)
{
lean_object* v_unused_3232_; lean_object* v_unused_3233_; lean_object* v_unused_3234_; lean_object* v_unused_3235_; lean_object* v_unused_3236_; 
v_unused_3232_ = lean_ctor_get(v_impl_3159_, 4);
lean_dec(v_unused_3232_);
v_unused_3233_ = lean_ctor_get(v_impl_3159_, 3);
lean_dec(v_unused_3233_);
v_unused_3234_ = lean_ctor_get(v_impl_3159_, 2);
lean_dec(v_unused_3234_);
v_unused_3235_ = lean_ctor_get(v_impl_3159_, 1);
lean_dec(v_unused_3235_);
v_unused_3236_ = lean_ctor_get(v_impl_3159_, 0);
lean_dec(v_unused_3236_);
v___x_3226_ = v_impl_3159_;
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
else
{
lean_dec(v_impl_3159_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3231_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3229_; 
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 4, v_r_3166_);
lean_ctor_set(v___x_3226_, 3, v___x_3224_);
lean_ctor_set(v___x_3226_, 2, v_v_3164_);
lean_ctor_set(v___x_3226_, 1, v_k_3163_);
lean_ctor_set(v___x_3226_, 0, v___x_3221_);
v___x_3229_ = v___x_3226_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v___x_3221_);
lean_ctor_set(v_reuseFailAlloc_3230_, 1, v_k_3163_);
lean_ctor_set(v_reuseFailAlloc_3230_, 2, v_v_3164_);
lean_ctor_set(v_reuseFailAlloc_3230_, 3, v___x_3224_);
lean_ctor_set(v_reuseFailAlloc_3230_, 4, v_r_3166_);
v___x_3229_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
return v___x_3229_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3244_; lean_object* v___x_3245_; lean_object* v___x_3247_; 
v_size_3244_ = lean_ctor_get(v_impl_3159_, 0);
lean_inc(v_size_3244_);
v___x_3245_ = lean_nat_add(v___x_3160_, v_size_3244_);
lean_dec(v_size_3244_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 3, v_impl_3159_);
lean_ctor_set(v___x_3156_, 0, v___x_3245_);
v___x_3247_ = v___x_3156_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v___x_3245_);
lean_ctor_set(v_reuseFailAlloc_3248_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3248_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3248_, 3, v_impl_3159_);
lean_ctor_set(v_reuseFailAlloc_3248_, 4, v_r_3154_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
}
else
{
if (lean_obj_tag(v_r_3154_) == 0)
{
lean_object* v_l_3249_; 
v_l_3249_ = lean_ctor_get(v_r_3154_, 3);
lean_inc(v_l_3249_);
if (lean_obj_tag(v_l_3249_) == 0)
{
lean_object* v_r_3250_; 
v_r_3250_ = lean_ctor_get(v_r_3154_, 4);
lean_inc(v_r_3250_);
if (lean_obj_tag(v_r_3250_) == 0)
{
lean_object* v_size_3251_; lean_object* v_k_3252_; lean_object* v_v_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3266_; 
v_size_3251_ = lean_ctor_get(v_r_3154_, 0);
v_k_3252_ = lean_ctor_get(v_r_3154_, 1);
v_v_3253_ = lean_ctor_get(v_r_3154_, 2);
v_isSharedCheck_3266_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3266_ == 0)
{
lean_object* v_unused_3267_; lean_object* v_unused_3268_; 
v_unused_3267_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3267_);
v_unused_3268_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3268_);
v___x_3255_ = v_r_3154_;
v_isShared_3256_ = v_isSharedCheck_3266_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_v_3253_);
lean_inc(v_k_3252_);
lean_inc(v_size_3251_);
lean_dec(v_r_3154_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3266_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v_size_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3261_; 
v_size_3257_ = lean_ctor_get(v_l_3249_, 0);
v___x_3258_ = lean_nat_add(v___x_3160_, v_size_3251_);
lean_dec(v_size_3251_);
v___x_3259_ = lean_nat_add(v___x_3160_, v_size_3257_);
if (v_isShared_3256_ == 0)
{
lean_ctor_set(v___x_3255_, 4, v_l_3249_);
lean_ctor_set(v___x_3255_, 3, v_impl_3159_);
lean_ctor_set(v___x_3255_, 2, v_v_3152_);
lean_ctor_set(v___x_3255_, 1, v_k_3151_);
lean_ctor_set(v___x_3255_, 0, v___x_3259_);
v___x_3261_ = v___x_3255_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3265_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3265_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3265_, 3, v_impl_3159_);
lean_ctor_set(v_reuseFailAlloc_3265_, 4, v_l_3249_);
v___x_3261_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
lean_object* v___x_3263_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_r_3250_);
lean_ctor_set(v___x_3156_, 3, v___x_3261_);
lean_ctor_set(v___x_3156_, 2, v_v_3253_);
lean_ctor_set(v___x_3156_, 1, v_k_3252_);
lean_ctor_set(v___x_3156_, 0, v___x_3258_);
v___x_3263_ = v___x_3156_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v___x_3258_);
lean_ctor_set(v_reuseFailAlloc_3264_, 1, v_k_3252_);
lean_ctor_set(v_reuseFailAlloc_3264_, 2, v_v_3253_);
lean_ctor_set(v_reuseFailAlloc_3264_, 3, v___x_3261_);
lean_ctor_set(v_reuseFailAlloc_3264_, 4, v_r_3250_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
else
{
lean_object* v_k_3269_; lean_object* v_v_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3293_; 
v_k_3269_ = lean_ctor_get(v_r_3154_, 1);
v_v_3270_ = lean_ctor_get(v_r_3154_, 2);
v_isSharedCheck_3293_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3293_ == 0)
{
lean_object* v_unused_3294_; lean_object* v_unused_3295_; lean_object* v_unused_3296_; 
v_unused_3294_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3294_);
v_unused_3295_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3295_);
v_unused_3296_ = lean_ctor_get(v_r_3154_, 0);
lean_dec(v_unused_3296_);
v___x_3272_ = v_r_3154_;
v_isShared_3273_ = v_isSharedCheck_3293_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_v_3270_);
lean_inc(v_k_3269_);
lean_dec(v_r_3154_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3293_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v_k_3274_; lean_object* v_v_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3289_; 
v_k_3274_ = lean_ctor_get(v_l_3249_, 1);
v_v_3275_ = lean_ctor_get(v_l_3249_, 2);
v_isSharedCheck_3289_ = !lean_is_exclusive(v_l_3249_);
if (v_isSharedCheck_3289_ == 0)
{
lean_object* v_unused_3290_; lean_object* v_unused_3291_; lean_object* v_unused_3292_; 
v_unused_3290_ = lean_ctor_get(v_l_3249_, 4);
lean_dec(v_unused_3290_);
v_unused_3291_ = lean_ctor_get(v_l_3249_, 3);
lean_dec(v_unused_3291_);
v_unused_3292_ = lean_ctor_get(v_l_3249_, 0);
lean_dec(v_unused_3292_);
v___x_3277_ = v_l_3249_;
v_isShared_3278_ = v_isSharedCheck_3289_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_v_3275_);
lean_inc(v_k_3274_);
lean_dec(v_l_3249_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3289_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3279_; lean_object* v___x_3281_; 
v___x_3279_ = lean_unsigned_to_nat(3u);
if (v_isShared_3278_ == 0)
{
lean_ctor_set(v___x_3277_, 4, v_r_3250_);
lean_ctor_set(v___x_3277_, 3, v_r_3250_);
lean_ctor_set(v___x_3277_, 2, v_v_3152_);
lean_ctor_set(v___x_3277_, 1, v_k_3151_);
lean_ctor_set(v___x_3277_, 0, v___x_3160_);
v___x_3281_ = v___x_3277_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3288_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3288_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3288_, 3, v_r_3250_);
lean_ctor_set(v_reuseFailAlloc_3288_, 4, v_r_3250_);
v___x_3281_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
lean_object* v___x_3283_; 
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 3, v_r_3250_);
lean_ctor_set(v___x_3272_, 0, v___x_3160_);
v___x_3283_ = v___x_3272_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v_k_3269_);
lean_ctor_set(v_reuseFailAlloc_3287_, 2, v_v_3270_);
lean_ctor_set(v_reuseFailAlloc_3287_, 3, v_r_3250_);
lean_ctor_set(v_reuseFailAlloc_3287_, 4, v_r_3250_);
v___x_3283_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
lean_object* v___x_3285_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v___x_3283_);
lean_ctor_set(v___x_3156_, 3, v___x_3281_);
lean_ctor_set(v___x_3156_, 2, v_v_3275_);
lean_ctor_set(v___x_3156_, 1, v_k_3274_);
lean_ctor_set(v___x_3156_, 0, v___x_3279_);
v___x_3285_ = v___x_3156_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3279_);
lean_ctor_set(v_reuseFailAlloc_3286_, 1, v_k_3274_);
lean_ctor_set(v_reuseFailAlloc_3286_, 2, v_v_3275_);
lean_ctor_set(v_reuseFailAlloc_3286_, 3, v___x_3281_);
lean_ctor_set(v_reuseFailAlloc_3286_, 4, v___x_3283_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3297_; 
v_r_3297_ = lean_ctor_get(v_r_3154_, 4);
lean_inc(v_r_3297_);
if (lean_obj_tag(v_r_3297_) == 0)
{
lean_object* v_k_3298_; lean_object* v_v_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3310_; 
v_k_3298_ = lean_ctor_get(v_r_3154_, 1);
v_v_3299_ = lean_ctor_get(v_r_3154_, 2);
v_isSharedCheck_3310_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3310_ == 0)
{
lean_object* v_unused_3311_; lean_object* v_unused_3312_; lean_object* v_unused_3313_; 
v_unused_3311_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3311_);
v_unused_3312_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3312_);
v_unused_3313_ = lean_ctor_get(v_r_3154_, 0);
lean_dec(v_unused_3313_);
v___x_3301_ = v_r_3154_;
v_isShared_3302_ = v_isSharedCheck_3310_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_v_3299_);
lean_inc(v_k_3298_);
lean_dec(v_r_3154_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3310_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3303_; lean_object* v___x_3305_; 
v___x_3303_ = lean_unsigned_to_nat(3u);
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 4, v_l_3249_);
lean_ctor_set(v___x_3301_, 2, v_v_3152_);
lean_ctor_set(v___x_3301_, 1, v_k_3151_);
lean_ctor_set(v___x_3301_, 0, v___x_3160_);
v___x_3305_ = v___x_3301_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3309_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3309_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3309_, 3, v_l_3249_);
lean_ctor_set(v_reuseFailAlloc_3309_, 4, v_l_3249_);
v___x_3305_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
lean_object* v___x_3307_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_r_3297_);
lean_ctor_set(v___x_3156_, 3, v___x_3305_);
lean_ctor_set(v___x_3156_, 2, v_v_3299_);
lean_ctor_set(v___x_3156_, 1, v_k_3298_);
lean_ctor_set(v___x_3156_, 0, v___x_3303_);
v___x_3307_ = v___x_3156_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v___x_3303_);
lean_ctor_set(v_reuseFailAlloc_3308_, 1, v_k_3298_);
lean_ctor_set(v_reuseFailAlloc_3308_, 2, v_v_3299_);
lean_ctor_set(v_reuseFailAlloc_3308_, 3, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3308_, 4, v_r_3297_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
else
{
lean_object* v_size_3314_; lean_object* v_k_3315_; lean_object* v_v_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3327_; 
v_size_3314_ = lean_ctor_get(v_r_3154_, 0);
v_k_3315_ = lean_ctor_get(v_r_3154_, 1);
v_v_3316_ = lean_ctor_get(v_r_3154_, 2);
v_isSharedCheck_3327_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3327_ == 0)
{
lean_object* v_unused_3328_; lean_object* v_unused_3329_; 
v_unused_3328_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3328_);
v_unused_3329_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3329_);
v___x_3318_ = v_r_3154_;
v_isShared_3319_ = v_isSharedCheck_3327_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_v_3316_);
lean_inc(v_k_3315_);
lean_inc(v_size_3314_);
lean_dec(v_r_3154_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3327_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3321_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 3, v_r_3297_);
v___x_3321_ = v___x_3318_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_size_3314_);
lean_ctor_set(v_reuseFailAlloc_3326_, 1, v_k_3315_);
lean_ctor_set(v_reuseFailAlloc_3326_, 2, v_v_3316_);
lean_ctor_set(v_reuseFailAlloc_3326_, 3, v_r_3297_);
lean_ctor_set(v_reuseFailAlloc_3326_, 4, v_r_3297_);
v___x_3321_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
lean_object* v___x_3322_; lean_object* v___x_3324_; 
v___x_3322_ = lean_unsigned_to_nat(2u);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v___x_3321_);
lean_ctor_set(v___x_3156_, 3, v_r_3297_);
lean_ctor_set(v___x_3156_, 0, v___x_3322_);
v___x_3324_ = v___x_3156_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v___x_3322_);
lean_ctor_set(v_reuseFailAlloc_3325_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3325_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3325_, 3, v_r_3297_);
lean_ctor_set(v_reuseFailAlloc_3325_, 4, v___x_3321_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
}
}
else
{
lean_object* v___x_3331_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 3, v_r_3154_);
lean_ctor_set(v___x_3156_, 0, v___x_3160_);
v___x_3331_ = v___x_3156_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3332_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3332_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3332_, 3, v_r_3154_);
lean_ctor_set(v_reuseFailAlloc_3332_, 4, v_r_3154_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
}
case 1:
{
lean_del_object(v___x_3156_);
lean_dec(v_v_3152_);
lean_dec(v_k_3151_);
if (lean_obj_tag(v_l_3153_) == 0)
{
if (lean_obj_tag(v_r_3154_) == 0)
{
lean_object* v_size_3333_; lean_object* v_k_3334_; lean_object* v_v_3335_; lean_object* v_l_3336_; lean_object* v_r_3337_; lean_object* v_size_3338_; lean_object* v_k_3339_; lean_object* v_v_3340_; lean_object* v_l_3341_; lean_object* v_r_3342_; lean_object* v___x_3343_; uint8_t v___x_3344_; 
v_size_3333_ = lean_ctor_get(v_l_3153_, 0);
v_k_3334_ = lean_ctor_get(v_l_3153_, 1);
v_v_3335_ = lean_ctor_get(v_l_3153_, 2);
v_l_3336_ = lean_ctor_get(v_l_3153_, 3);
v_r_3337_ = lean_ctor_get(v_l_3153_, 4);
lean_inc(v_r_3337_);
v_size_3338_ = lean_ctor_get(v_r_3154_, 0);
v_k_3339_ = lean_ctor_get(v_r_3154_, 1);
v_v_3340_ = lean_ctor_get(v_r_3154_, 2);
v_l_3341_ = lean_ctor_get(v_r_3154_, 3);
lean_inc(v_l_3341_);
v_r_3342_ = lean_ctor_get(v_r_3154_, 4);
v___x_3343_ = lean_unsigned_to_nat(1u);
v___x_3344_ = lean_nat_dec_lt(v_size_3333_, v_size_3338_);
if (v___x_3344_ == 0)
{
lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3480_; 
lean_inc(v_l_3336_);
lean_inc(v_v_3335_);
lean_inc(v_k_3334_);
v_isSharedCheck_3480_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3480_ == 0)
{
lean_object* v_unused_3481_; lean_object* v_unused_3482_; lean_object* v_unused_3483_; lean_object* v_unused_3484_; lean_object* v_unused_3485_; 
v_unused_3481_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3481_);
v_unused_3482_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3482_);
v_unused_3483_ = lean_ctor_get(v_l_3153_, 2);
lean_dec(v_unused_3483_);
v_unused_3484_ = lean_ctor_get(v_l_3153_, 1);
lean_dec(v_unused_3484_);
v_unused_3485_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3485_);
v___x_3346_ = v_l_3153_;
v_isShared_3347_ = v_isSharedCheck_3480_;
goto v_resetjp_3345_;
}
else
{
lean_dec(v_l_3153_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3480_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3348_; lean_object* v_tree_3349_; 
v___x_3348_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_3334_, v_v_3335_, v_l_3336_, v_r_3337_);
v_tree_3349_ = lean_ctor_get(v___x_3348_, 2);
lean_inc(v_tree_3349_);
if (lean_obj_tag(v_tree_3349_) == 0)
{
lean_object* v_k_3350_; lean_object* v_v_3351_; lean_object* v_size_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; 
v_k_3350_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_k_3350_);
v_v_3351_ = lean_ctor_get(v___x_3348_, 1);
lean_inc(v_v_3351_);
lean_dec_ref(v___x_3348_);
v_size_3352_ = lean_ctor_get(v_tree_3349_, 0);
v___x_3353_ = lean_unsigned_to_nat(3u);
v___x_3354_ = lean_nat_mul(v___x_3353_, v_size_3352_);
v___x_3355_ = lean_nat_dec_lt(v___x_3354_, v_size_3338_);
lean_dec(v___x_3354_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3359_; 
lean_dec(v_l_3341_);
v___x_3356_ = lean_nat_add(v___x_3343_, v_size_3352_);
v___x_3357_ = lean_nat_add(v___x_3356_, v_size_3338_);
lean_dec(v___x_3356_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v_r_3154_);
lean_ctor_set(v___x_3346_, 3, v_tree_3349_);
lean_ctor_set(v___x_3346_, 2, v_v_3351_);
lean_ctor_set(v___x_3346_, 1, v_k_3350_);
lean_ctor_set(v___x_3346_, 0, v___x_3357_);
v___x_3359_ = v___x_3346_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3357_);
lean_ctor_set(v_reuseFailAlloc_3360_, 1, v_k_3350_);
lean_ctor_set(v_reuseFailAlloc_3360_, 2, v_v_3351_);
lean_ctor_set(v_reuseFailAlloc_3360_, 3, v_tree_3349_);
lean_ctor_set(v_reuseFailAlloc_3360_, 4, v_r_3154_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
else
{
lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3415_; 
lean_inc(v_r_3342_);
lean_inc(v_v_3340_);
lean_inc(v_k_3339_);
lean_inc(v_size_3338_);
v_isSharedCheck_3415_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3415_ == 0)
{
lean_object* v_unused_3416_; lean_object* v_unused_3417_; lean_object* v_unused_3418_; lean_object* v_unused_3419_; lean_object* v_unused_3420_; 
v_unused_3416_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3416_);
v_unused_3417_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3417_);
v_unused_3418_ = lean_ctor_get(v_r_3154_, 2);
lean_dec(v_unused_3418_);
v_unused_3419_ = lean_ctor_get(v_r_3154_, 1);
lean_dec(v_unused_3419_);
v_unused_3420_ = lean_ctor_get(v_r_3154_, 0);
lean_dec(v_unused_3420_);
v___x_3362_ = v_r_3154_;
v_isShared_3363_ = v_isSharedCheck_3415_;
goto v_resetjp_3361_;
}
else
{
lean_dec(v_r_3154_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3415_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v_size_3364_; lean_object* v_k_3365_; lean_object* v_v_3366_; lean_object* v_l_3367_; lean_object* v_r_3368_; lean_object* v_size_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; uint8_t v___x_3372_; 
v_size_3364_ = lean_ctor_get(v_l_3341_, 0);
v_k_3365_ = lean_ctor_get(v_l_3341_, 1);
v_v_3366_ = lean_ctor_get(v_l_3341_, 2);
v_l_3367_ = lean_ctor_get(v_l_3341_, 3);
v_r_3368_ = lean_ctor_get(v_l_3341_, 4);
v_size_3369_ = lean_ctor_get(v_r_3342_, 0);
v___x_3370_ = lean_unsigned_to_nat(2u);
v___x_3371_ = lean_nat_mul(v___x_3370_, v_size_3369_);
v___x_3372_ = lean_nat_dec_lt(v_size_3364_, v___x_3371_);
lean_dec(v___x_3371_);
if (v___x_3372_ == 0)
{
lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3400_; 
lean_inc(v_r_3368_);
lean_inc(v_l_3367_);
lean_inc(v_v_3366_);
lean_inc(v_k_3365_);
v_isSharedCheck_3400_ = !lean_is_exclusive(v_l_3341_);
if (v_isSharedCheck_3400_ == 0)
{
lean_object* v_unused_3401_; lean_object* v_unused_3402_; lean_object* v_unused_3403_; lean_object* v_unused_3404_; lean_object* v_unused_3405_; 
v_unused_3401_ = lean_ctor_get(v_l_3341_, 4);
lean_dec(v_unused_3401_);
v_unused_3402_ = lean_ctor_get(v_l_3341_, 3);
lean_dec(v_unused_3402_);
v_unused_3403_ = lean_ctor_get(v_l_3341_, 2);
lean_dec(v_unused_3403_);
v_unused_3404_ = lean_ctor_get(v_l_3341_, 1);
lean_dec(v_unused_3404_);
v_unused_3405_ = lean_ctor_get(v_l_3341_, 0);
lean_dec(v_unused_3405_);
v___x_3374_ = v_l_3341_;
v_isShared_3375_ = v_isSharedCheck_3400_;
goto v_resetjp_3373_;
}
else
{
lean_dec(v_l_3341_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3400_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3381_; lean_object* v___y_3390_; 
v___x_3376_ = lean_nat_add(v___x_3343_, v_size_3352_);
v___x_3377_ = lean_nat_add(v___x_3376_, v_size_3338_);
lean_dec(v_size_3338_);
if (lean_obj_tag(v_l_3367_) == 0)
{
lean_object* v_size_3398_; 
v_size_3398_ = lean_ctor_get(v_l_3367_, 0);
lean_inc(v_size_3398_);
v___y_3390_ = v_size_3398_;
goto v___jp_3389_;
}
else
{
lean_object* v___x_3399_; 
v___x_3399_ = lean_unsigned_to_nat(0u);
v___y_3390_ = v___x_3399_;
goto v___jp_3389_;
}
v___jp_3378_:
{
lean_object* v___x_3382_; lean_object* v___x_3384_; 
v___x_3382_ = lean_nat_add(v___y_3379_, v___y_3381_);
lean_dec(v___y_3381_);
lean_dec(v___y_3379_);
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 4, v_r_3342_);
lean_ctor_set(v___x_3374_, 3, v_r_3368_);
lean_ctor_set(v___x_3374_, 2, v_v_3340_);
lean_ctor_set(v___x_3374_, 1, v_k_3339_);
lean_ctor_set(v___x_3374_, 0, v___x_3382_);
v___x_3384_ = v___x_3374_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3388_; 
v_reuseFailAlloc_3388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3388_, 0, v___x_3382_);
lean_ctor_set(v_reuseFailAlloc_3388_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3388_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3388_, 3, v_r_3368_);
lean_ctor_set(v_reuseFailAlloc_3388_, 4, v_r_3342_);
v___x_3384_ = v_reuseFailAlloc_3388_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
lean_object* v___x_3386_; 
if (v_isShared_3363_ == 0)
{
lean_ctor_set(v___x_3362_, 4, v___x_3384_);
lean_ctor_set(v___x_3362_, 3, v___y_3380_);
lean_ctor_set(v___x_3362_, 2, v_v_3366_);
lean_ctor_set(v___x_3362_, 1, v_k_3365_);
lean_ctor_set(v___x_3362_, 0, v___x_3377_);
v___x_3386_ = v___x_3362_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v___x_3377_);
lean_ctor_set(v_reuseFailAlloc_3387_, 1, v_k_3365_);
lean_ctor_set(v_reuseFailAlloc_3387_, 2, v_v_3366_);
lean_ctor_set(v_reuseFailAlloc_3387_, 3, v___y_3380_);
lean_ctor_set(v_reuseFailAlloc_3387_, 4, v___x_3384_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
v___jp_3389_:
{
lean_object* v___x_3391_; lean_object* v___x_3393_; 
v___x_3391_ = lean_nat_add(v___x_3376_, v___y_3390_);
lean_dec(v___y_3390_);
lean_dec(v___x_3376_);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v_l_3367_);
lean_ctor_set(v___x_3346_, 3, v_tree_3349_);
lean_ctor_set(v___x_3346_, 2, v_v_3351_);
lean_ctor_set(v___x_3346_, 1, v_k_3350_);
lean_ctor_set(v___x_3346_, 0, v___x_3391_);
v___x_3393_ = v___x_3346_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3391_);
lean_ctor_set(v_reuseFailAlloc_3397_, 1, v_k_3350_);
lean_ctor_set(v_reuseFailAlloc_3397_, 2, v_v_3351_);
lean_ctor_set(v_reuseFailAlloc_3397_, 3, v_tree_3349_);
lean_ctor_set(v_reuseFailAlloc_3397_, 4, v_l_3367_);
v___x_3393_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
lean_object* v___x_3394_; 
v___x_3394_ = lean_nat_add(v___x_3343_, v_size_3369_);
if (lean_obj_tag(v_r_3368_) == 0)
{
lean_object* v_size_3395_; 
v_size_3395_ = lean_ctor_get(v_r_3368_, 0);
lean_inc(v_size_3395_);
v___y_3379_ = v___x_3394_;
v___y_3380_ = v___x_3393_;
v___y_3381_ = v_size_3395_;
goto v___jp_3378_;
}
else
{
lean_object* v___x_3396_; 
v___x_3396_ = lean_unsigned_to_nat(0u);
v___y_3379_ = v___x_3394_;
v___y_3380_ = v___x_3393_;
v___y_3381_ = v___x_3396_;
goto v___jp_3378_;
}
}
}
}
}
else
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3406_ = lean_nat_add(v___x_3343_, v_size_3352_);
v___x_3407_ = lean_nat_add(v___x_3406_, v_size_3338_);
lean_dec(v_size_3338_);
v___x_3408_ = lean_nat_add(v___x_3406_, v_size_3364_);
lean_dec(v___x_3406_);
if (v_isShared_3363_ == 0)
{
lean_ctor_set(v___x_3362_, 4, v_l_3341_);
lean_ctor_set(v___x_3362_, 3, v_tree_3349_);
lean_ctor_set(v___x_3362_, 2, v_v_3351_);
lean_ctor_set(v___x_3362_, 1, v_k_3350_);
lean_ctor_set(v___x_3362_, 0, v___x_3408_);
v___x_3410_ = v___x_3362_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3414_; 
v_reuseFailAlloc_3414_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3414_, 0, v___x_3408_);
lean_ctor_set(v_reuseFailAlloc_3414_, 1, v_k_3350_);
lean_ctor_set(v_reuseFailAlloc_3414_, 2, v_v_3351_);
lean_ctor_set(v_reuseFailAlloc_3414_, 3, v_tree_3349_);
lean_ctor_set(v_reuseFailAlloc_3414_, 4, v_l_3341_);
v___x_3410_ = v_reuseFailAlloc_3414_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3412_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v_r_3342_);
lean_ctor_set(v___x_3346_, 3, v___x_3410_);
lean_ctor_set(v___x_3346_, 2, v_v_3340_);
lean_ctor_set(v___x_3346_, 1, v_k_3339_);
lean_ctor_set(v___x_3346_, 0, v___x_3407_);
v___x_3412_ = v___x_3346_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3407_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3413_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3413_, 3, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3413_, 4, v_r_3342_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
}
}
else
{
lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3474_; 
lean_inc(v_r_3342_);
lean_inc(v_v_3340_);
lean_inc(v_k_3339_);
lean_inc(v_size_3338_);
v_isSharedCheck_3474_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3474_ == 0)
{
lean_object* v_unused_3475_; lean_object* v_unused_3476_; lean_object* v_unused_3477_; lean_object* v_unused_3478_; lean_object* v_unused_3479_; 
v_unused_3475_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3475_);
v_unused_3476_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3476_);
v_unused_3477_ = lean_ctor_get(v_r_3154_, 2);
lean_dec(v_unused_3477_);
v_unused_3478_ = lean_ctor_get(v_r_3154_, 1);
lean_dec(v_unused_3478_);
v_unused_3479_ = lean_ctor_get(v_r_3154_, 0);
lean_dec(v_unused_3479_);
v___x_3422_ = v_r_3154_;
v_isShared_3423_ = v_isSharedCheck_3474_;
goto v_resetjp_3421_;
}
else
{
lean_dec(v_r_3154_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3474_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
if (lean_obj_tag(v_l_3341_) == 0)
{
if (lean_obj_tag(v_r_3342_) == 0)
{
lean_object* v_k_3424_; lean_object* v_v_3425_; lean_object* v_size_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3430_; 
v_k_3424_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_k_3424_);
v_v_3425_ = lean_ctor_get(v___x_3348_, 1);
lean_inc(v_v_3425_);
lean_dec_ref(v___x_3348_);
v_size_3426_ = lean_ctor_get(v_l_3341_, 0);
v___x_3427_ = lean_nat_add(v___x_3343_, v_size_3338_);
lean_dec(v_size_3338_);
v___x_3428_ = lean_nat_add(v___x_3343_, v_size_3426_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 4, v_l_3341_);
lean_ctor_set(v___x_3422_, 3, v_tree_3349_);
lean_ctor_set(v___x_3422_, 2, v_v_3425_);
lean_ctor_set(v___x_3422_, 1, v_k_3424_);
lean_ctor_set(v___x_3422_, 0, v___x_3428_);
v___x_3430_ = v___x_3422_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v___x_3428_);
lean_ctor_set(v_reuseFailAlloc_3434_, 1, v_k_3424_);
lean_ctor_set(v_reuseFailAlloc_3434_, 2, v_v_3425_);
lean_ctor_set(v_reuseFailAlloc_3434_, 3, v_tree_3349_);
lean_ctor_set(v_reuseFailAlloc_3434_, 4, v_l_3341_);
v___x_3430_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
lean_object* v___x_3432_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v_r_3342_);
lean_ctor_set(v___x_3346_, 3, v___x_3430_);
lean_ctor_set(v___x_3346_, 2, v_v_3340_);
lean_ctor_set(v___x_3346_, 1, v_k_3339_);
lean_ctor_set(v___x_3346_, 0, v___x_3427_);
v___x_3432_ = v___x_3346_;
goto v_reusejp_3431_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v___x_3427_);
lean_ctor_set(v_reuseFailAlloc_3433_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3433_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3433_, 3, v___x_3430_);
lean_ctor_set(v_reuseFailAlloc_3433_, 4, v_r_3342_);
v___x_3432_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3431_;
}
v_reusejp_3431_:
{
return v___x_3432_;
}
}
}
else
{
lean_object* v_k_3435_; lean_object* v_v_3436_; lean_object* v_k_3437_; lean_object* v_v_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3452_; 
lean_dec(v_size_3338_);
v_k_3435_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_k_3435_);
v_v_3436_ = lean_ctor_get(v___x_3348_, 1);
lean_inc(v_v_3436_);
lean_dec_ref(v___x_3348_);
v_k_3437_ = lean_ctor_get(v_l_3341_, 1);
v_v_3438_ = lean_ctor_get(v_l_3341_, 2);
v_isSharedCheck_3452_ = !lean_is_exclusive(v_l_3341_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; lean_object* v_unused_3454_; lean_object* v_unused_3455_; 
v_unused_3453_ = lean_ctor_get(v_l_3341_, 4);
lean_dec(v_unused_3453_);
v_unused_3454_ = lean_ctor_get(v_l_3341_, 3);
lean_dec(v_unused_3454_);
v_unused_3455_ = lean_ctor_get(v_l_3341_, 0);
lean_dec(v_unused_3455_);
v___x_3440_ = v_l_3341_;
v_isShared_3441_ = v_isSharedCheck_3452_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_v_3438_);
lean_inc(v_k_3437_);
lean_dec(v_l_3341_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3452_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3442_; lean_object* v___x_3444_; 
v___x_3442_ = lean_unsigned_to_nat(3u);
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 4, v_r_3342_);
lean_ctor_set(v___x_3440_, 3, v_r_3342_);
lean_ctor_set(v___x_3440_, 2, v_v_3436_);
lean_ctor_set(v___x_3440_, 1, v_k_3435_);
lean_ctor_set(v___x_3440_, 0, v___x_3343_);
v___x_3444_ = v___x_3440_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v_k_3435_);
lean_ctor_set(v_reuseFailAlloc_3451_, 2, v_v_3436_);
lean_ctor_set(v_reuseFailAlloc_3451_, 3, v_r_3342_);
lean_ctor_set(v_reuseFailAlloc_3451_, 4, v_r_3342_);
v___x_3444_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
lean_object* v___x_3446_; 
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 3, v_r_3342_);
lean_ctor_set(v___x_3422_, 0, v___x_3343_);
v___x_3446_ = v___x_3422_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3450_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3450_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3450_, 3, v_r_3342_);
lean_ctor_set(v_reuseFailAlloc_3450_, 4, v_r_3342_);
v___x_3446_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3448_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v___x_3446_);
lean_ctor_set(v___x_3346_, 3, v___x_3444_);
lean_ctor_set(v___x_3346_, 2, v_v_3438_);
lean_ctor_set(v___x_3346_, 1, v_k_3437_);
lean_ctor_set(v___x_3346_, 0, v___x_3442_);
v___x_3448_ = v___x_3346_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3442_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v_k_3437_);
lean_ctor_set(v_reuseFailAlloc_3449_, 2, v_v_3438_);
lean_ctor_set(v_reuseFailAlloc_3449_, 3, v___x_3444_);
lean_ctor_set(v_reuseFailAlloc_3449_, 4, v___x_3446_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3342_) == 0)
{
lean_object* v_k_3456_; lean_object* v_v_3457_; lean_object* v___x_3458_; lean_object* v___x_3460_; 
lean_dec(v_size_3338_);
v_k_3456_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_k_3456_);
v_v_3457_ = lean_ctor_get(v___x_3348_, 1);
lean_inc(v_v_3457_);
lean_dec_ref(v___x_3348_);
v___x_3458_ = lean_unsigned_to_nat(3u);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 4, v_l_3341_);
lean_ctor_set(v___x_3422_, 2, v_v_3457_);
lean_ctor_set(v___x_3422_, 1, v_k_3456_);
lean_ctor_set(v___x_3422_, 0, v___x_3343_);
v___x_3460_ = v___x_3422_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_k_3456_);
lean_ctor_set(v_reuseFailAlloc_3464_, 2, v_v_3457_);
lean_ctor_set(v_reuseFailAlloc_3464_, 3, v_l_3341_);
lean_ctor_set(v_reuseFailAlloc_3464_, 4, v_l_3341_);
v___x_3460_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_object* v___x_3462_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v_r_3342_);
lean_ctor_set(v___x_3346_, 3, v___x_3460_);
lean_ctor_set(v___x_3346_, 2, v_v_3340_);
lean_ctor_set(v___x_3346_, 1, v_k_3339_);
lean_ctor_set(v___x_3346_, 0, v___x_3458_);
v___x_3462_ = v___x_3346_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3458_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3463_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3463_, 3, v___x_3460_);
lean_ctor_set(v_reuseFailAlloc_3463_, 4, v_r_3342_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
else
{
lean_object* v_k_3465_; lean_object* v_v_3466_; lean_object* v___x_3468_; 
v_k_3465_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_k_3465_);
v_v_3466_ = lean_ctor_get(v___x_3348_, 1);
lean_inc(v_v_3466_);
lean_dec_ref(v___x_3348_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 3, v_r_3342_);
v___x_3468_ = v___x_3422_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_size_3338_);
lean_ctor_set(v_reuseFailAlloc_3473_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3473_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3473_, 3, v_r_3342_);
lean_ctor_set(v_reuseFailAlloc_3473_, 4, v_r_3342_);
v___x_3468_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
lean_object* v___x_3469_; lean_object* v___x_3471_; 
v___x_3469_ = lean_unsigned_to_nat(2u);
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v___x_3468_);
lean_ctor_set(v___x_3346_, 3, v_r_3342_);
lean_ctor_set(v___x_3346_, 2, v_v_3466_);
lean_ctor_set(v___x_3346_, 1, v_k_3465_);
lean_ctor_set(v___x_3346_, 0, v___x_3469_);
v___x_3471_ = v___x_3346_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
lean_ctor_set(v_reuseFailAlloc_3472_, 1, v_k_3465_);
lean_ctor_set(v_reuseFailAlloc_3472_, 2, v_v_3466_);
lean_ctor_set(v_reuseFailAlloc_3472_, 3, v_r_3342_);
lean_ctor_set(v_reuseFailAlloc_3472_, 4, v___x_3468_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
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
lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3638_; 
lean_inc(v_r_3342_);
lean_inc(v_v_3340_);
lean_inc(v_k_3339_);
v_isSharedCheck_3638_ = !lean_is_exclusive(v_r_3154_);
if (v_isSharedCheck_3638_ == 0)
{
lean_object* v_unused_3639_; lean_object* v_unused_3640_; lean_object* v_unused_3641_; lean_object* v_unused_3642_; lean_object* v_unused_3643_; 
v_unused_3639_ = lean_ctor_get(v_r_3154_, 4);
lean_dec(v_unused_3639_);
v_unused_3640_ = lean_ctor_get(v_r_3154_, 3);
lean_dec(v_unused_3640_);
v_unused_3641_ = lean_ctor_get(v_r_3154_, 2);
lean_dec(v_unused_3641_);
v_unused_3642_ = lean_ctor_get(v_r_3154_, 1);
lean_dec(v_unused_3642_);
v_unused_3643_ = lean_ctor_get(v_r_3154_, 0);
lean_dec(v_unused_3643_);
v___x_3487_ = v_r_3154_;
v_isShared_3488_ = v_isSharedCheck_3638_;
goto v_resetjp_3486_;
}
else
{
lean_dec(v_r_3154_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3638_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; lean_object* v_tree_3490_; 
v___x_3489_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_3339_, v_v_3340_, v_l_3341_, v_r_3342_);
v_tree_3490_ = lean_ctor_get(v___x_3489_, 2);
lean_inc(v_tree_3490_);
if (lean_obj_tag(v_tree_3490_) == 0)
{
lean_object* v_k_3491_; lean_object* v_v_3492_; lean_object* v_size_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; uint8_t v___x_3496_; 
v_k_3491_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_k_3491_);
v_v_3492_ = lean_ctor_get(v___x_3489_, 1);
lean_inc(v_v_3492_);
lean_dec_ref(v___x_3489_);
v_size_3493_ = lean_ctor_get(v_tree_3490_, 0);
v___x_3494_ = lean_unsigned_to_nat(3u);
v___x_3495_ = lean_nat_mul(v___x_3494_, v_size_3493_);
v___x_3496_ = lean_nat_dec_lt(v___x_3495_, v_size_3333_);
lean_dec(v___x_3495_);
if (v___x_3496_ == 0)
{
lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3500_; 
lean_dec(v_r_3337_);
v___x_3497_ = lean_nat_add(v___x_3343_, v_size_3333_);
v___x_3498_ = lean_nat_add(v___x_3497_, v_size_3493_);
lean_dec(v___x_3497_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_tree_3490_);
lean_ctor_set(v___x_3487_, 3, v_l_3153_);
lean_ctor_set(v___x_3487_, 2, v_v_3492_);
lean_ctor_set(v___x_3487_, 1, v_k_3491_);
lean_ctor_set(v___x_3487_, 0, v___x_3498_);
v___x_3500_ = v___x_3487_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3498_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v_k_3491_);
lean_ctor_set(v_reuseFailAlloc_3501_, 2, v_v_3492_);
lean_ctor_set(v_reuseFailAlloc_3501_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3501_, 4, v_tree_3490_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
else
{
lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3567_; 
lean_inc(v_l_3336_);
lean_inc(v_v_3335_);
lean_inc(v_k_3334_);
lean_inc(v_size_3333_);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3567_ == 0)
{
lean_object* v_unused_3568_; lean_object* v_unused_3569_; lean_object* v_unused_3570_; lean_object* v_unused_3571_; lean_object* v_unused_3572_; 
v_unused_3568_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3568_);
v_unused_3569_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3569_);
v_unused_3570_ = lean_ctor_get(v_l_3153_, 2);
lean_dec(v_unused_3570_);
v_unused_3571_ = lean_ctor_get(v_l_3153_, 1);
lean_dec(v_unused_3571_);
v_unused_3572_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3572_);
v___x_3503_ = v_l_3153_;
v_isShared_3504_ = v_isSharedCheck_3567_;
goto v_resetjp_3502_;
}
else
{
lean_dec(v_l_3153_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3567_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v_size_3505_; lean_object* v_size_3506_; lean_object* v_k_3507_; lean_object* v_v_3508_; lean_object* v_l_3509_; lean_object* v_r_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; uint8_t v___x_3513_; 
v_size_3505_ = lean_ctor_get(v_l_3336_, 0);
v_size_3506_ = lean_ctor_get(v_r_3337_, 0);
v_k_3507_ = lean_ctor_get(v_r_3337_, 1);
v_v_3508_ = lean_ctor_get(v_r_3337_, 2);
v_l_3509_ = lean_ctor_get(v_r_3337_, 3);
v_r_3510_ = lean_ctor_get(v_r_3337_, 4);
v___x_3511_ = lean_unsigned_to_nat(2u);
v___x_3512_ = lean_nat_mul(v___x_3511_, v_size_3505_);
v___x_3513_ = lean_nat_dec_lt(v_size_3506_, v___x_3512_);
lean_dec(v___x_3512_);
if (v___x_3513_ == 0)
{
lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3551_; 
lean_inc(v_r_3510_);
lean_inc(v_l_3509_);
lean_inc(v_v_3508_);
lean_inc(v_k_3507_);
lean_del_object(v___x_3503_);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_r_3337_);
if (v_isSharedCheck_3551_ == 0)
{
lean_object* v_unused_3552_; lean_object* v_unused_3553_; lean_object* v_unused_3554_; lean_object* v_unused_3555_; lean_object* v_unused_3556_; 
v_unused_3552_ = lean_ctor_get(v_r_3337_, 4);
lean_dec(v_unused_3552_);
v_unused_3553_ = lean_ctor_get(v_r_3337_, 3);
lean_dec(v_unused_3553_);
v_unused_3554_ = lean_ctor_get(v_r_3337_, 2);
lean_dec(v_unused_3554_);
v_unused_3555_ = lean_ctor_get(v_r_3337_, 1);
lean_dec(v_unused_3555_);
v_unused_3556_ = lean_ctor_get(v_r_3337_, 0);
lean_dec(v_unused_3556_);
v___x_3515_ = v_r_3337_;
v_isShared_3516_ = v_isSharedCheck_3551_;
goto v_resetjp_3514_;
}
else
{
lean_dec(v_r_3337_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3551_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___x_3539_; lean_object* v___y_3541_; 
v___x_3517_ = lean_nat_add(v___x_3343_, v_size_3333_);
lean_dec(v_size_3333_);
v___x_3518_ = lean_nat_add(v___x_3517_, v_size_3493_);
lean_dec(v___x_3517_);
v___x_3539_ = lean_nat_add(v___x_3343_, v_size_3505_);
if (lean_obj_tag(v_l_3509_) == 0)
{
lean_object* v_size_3549_; 
v_size_3549_ = lean_ctor_get(v_l_3509_, 0);
lean_inc(v_size_3549_);
v___y_3541_ = v_size_3549_;
goto v___jp_3540_;
}
else
{
lean_object* v___x_3550_; 
v___x_3550_ = lean_unsigned_to_nat(0u);
v___y_3541_ = v___x_3550_;
goto v___jp_3540_;
}
v___jp_3519_:
{
lean_object* v___x_3523_; lean_object* v___x_3525_; 
v___x_3523_ = lean_nat_add(v___y_3520_, v___y_3522_);
lean_dec(v___y_3522_);
lean_dec(v___y_3520_);
lean_inc_ref(v_tree_3490_);
if (v_isShared_3516_ == 0)
{
lean_ctor_set(v___x_3515_, 4, v_tree_3490_);
lean_ctor_set(v___x_3515_, 3, v_r_3510_);
lean_ctor_set(v___x_3515_, 2, v_v_3492_);
lean_ctor_set(v___x_3515_, 1, v_k_3491_);
lean_ctor_set(v___x_3515_, 0, v___x_3523_);
v___x_3525_ = v___x_3515_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v___x_3523_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v_k_3491_);
lean_ctor_set(v_reuseFailAlloc_3538_, 2, v_v_3492_);
lean_ctor_set(v_reuseFailAlloc_3538_, 3, v_r_3510_);
lean_ctor_set(v_reuseFailAlloc_3538_, 4, v_tree_3490_);
v___x_3525_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3532_; 
v_isSharedCheck_3532_ = !lean_is_exclusive(v_tree_3490_);
if (v_isSharedCheck_3532_ == 0)
{
lean_object* v_unused_3533_; lean_object* v_unused_3534_; lean_object* v_unused_3535_; lean_object* v_unused_3536_; lean_object* v_unused_3537_; 
v_unused_3533_ = lean_ctor_get(v_tree_3490_, 4);
lean_dec(v_unused_3533_);
v_unused_3534_ = lean_ctor_get(v_tree_3490_, 3);
lean_dec(v_unused_3534_);
v_unused_3535_ = lean_ctor_get(v_tree_3490_, 2);
lean_dec(v_unused_3535_);
v_unused_3536_ = lean_ctor_get(v_tree_3490_, 1);
lean_dec(v_unused_3536_);
v_unused_3537_ = lean_ctor_get(v_tree_3490_, 0);
lean_dec(v_unused_3537_);
v___x_3527_ = v_tree_3490_;
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
else
{
lean_dec(v_tree_3490_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3532_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3530_; 
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 4, v___x_3525_);
lean_ctor_set(v___x_3527_, 3, v___y_3521_);
lean_ctor_set(v___x_3527_, 2, v_v_3508_);
lean_ctor_set(v___x_3527_, 1, v_k_3507_);
lean_ctor_set(v___x_3527_, 0, v___x_3518_);
v___x_3530_ = v___x_3527_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v_k_3507_);
lean_ctor_set(v_reuseFailAlloc_3531_, 2, v_v_3508_);
lean_ctor_set(v_reuseFailAlloc_3531_, 3, v___y_3521_);
lean_ctor_set(v_reuseFailAlloc_3531_, 4, v___x_3525_);
v___x_3530_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
return v___x_3530_;
}
}
}
}
v___jp_3540_:
{
lean_object* v___x_3542_; lean_object* v___x_3544_; 
v___x_3542_ = lean_nat_add(v___x_3539_, v___y_3541_);
lean_dec(v___y_3541_);
lean_dec(v___x_3539_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_l_3509_);
lean_ctor_set(v___x_3487_, 3, v_l_3336_);
lean_ctor_set(v___x_3487_, 2, v_v_3335_);
lean_ctor_set(v___x_3487_, 1, v_k_3334_);
lean_ctor_set(v___x_3487_, 0, v___x_3542_);
v___x_3544_ = v___x_3487_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v___x_3542_);
lean_ctor_set(v_reuseFailAlloc_3548_, 1, v_k_3334_);
lean_ctor_set(v_reuseFailAlloc_3548_, 2, v_v_3335_);
lean_ctor_set(v_reuseFailAlloc_3548_, 3, v_l_3336_);
lean_ctor_set(v_reuseFailAlloc_3548_, 4, v_l_3509_);
v___x_3544_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_nat_add(v___x_3343_, v_size_3493_);
if (lean_obj_tag(v_r_3510_) == 0)
{
lean_object* v_size_3546_; 
v_size_3546_ = lean_ctor_get(v_r_3510_, 0);
lean_inc(v_size_3546_);
v___y_3520_ = v___x_3545_;
v___y_3521_ = v___x_3544_;
v___y_3522_ = v_size_3546_;
goto v___jp_3519_;
}
else
{
lean_object* v___x_3547_; 
v___x_3547_ = lean_unsigned_to_nat(0u);
v___y_3520_ = v___x_3545_;
v___y_3521_ = v___x_3544_;
v___y_3522_ = v___x_3547_;
goto v___jp_3519_;
}
}
}
}
}
else
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3562_; 
v___x_3557_ = lean_nat_add(v___x_3343_, v_size_3333_);
lean_dec(v_size_3333_);
v___x_3558_ = lean_nat_add(v___x_3557_, v_size_3493_);
lean_dec(v___x_3557_);
v___x_3559_ = lean_nat_add(v___x_3343_, v_size_3493_);
v___x_3560_ = lean_nat_add(v___x_3559_, v_size_3506_);
lean_dec(v___x_3559_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_tree_3490_);
lean_ctor_set(v___x_3487_, 3, v_r_3337_);
lean_ctor_set(v___x_3487_, 2, v_v_3492_);
lean_ctor_set(v___x_3487_, 1, v_k_3491_);
lean_ctor_set(v___x_3487_, 0, v___x_3560_);
v___x_3562_ = v___x_3487_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v___x_3560_);
lean_ctor_set(v_reuseFailAlloc_3566_, 1, v_k_3491_);
lean_ctor_set(v_reuseFailAlloc_3566_, 2, v_v_3492_);
lean_ctor_set(v_reuseFailAlloc_3566_, 3, v_r_3337_);
lean_ctor_set(v_reuseFailAlloc_3566_, 4, v_tree_3490_);
v___x_3562_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
lean_object* v___x_3564_; 
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 4, v___x_3562_);
lean_ctor_set(v___x_3503_, 0, v___x_3558_);
v___x_3564_ = v___x_3503_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3558_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v_k_3334_);
lean_ctor_set(v_reuseFailAlloc_3565_, 2, v_v_3335_);
lean_ctor_set(v_reuseFailAlloc_3565_, 3, v_l_3336_);
lean_ctor_set(v_reuseFailAlloc_3565_, 4, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_3336_) == 0)
{
lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3596_; 
lean_inc_ref(v_l_3336_);
lean_inc(v_v_3335_);
lean_inc(v_k_3334_);
lean_inc(v_size_3333_);
v_isSharedCheck_3596_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3596_ == 0)
{
lean_object* v_unused_3597_; lean_object* v_unused_3598_; lean_object* v_unused_3599_; lean_object* v_unused_3600_; lean_object* v_unused_3601_; 
v_unused_3597_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3597_);
v_unused_3598_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3598_);
v_unused_3599_ = lean_ctor_get(v_l_3153_, 2);
lean_dec(v_unused_3599_);
v_unused_3600_ = lean_ctor_get(v_l_3153_, 1);
lean_dec(v_unused_3600_);
v_unused_3601_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3601_);
v___x_3574_ = v_l_3153_;
v_isShared_3575_ = v_isSharedCheck_3596_;
goto v_resetjp_3573_;
}
else
{
lean_dec(v_l_3153_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3596_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
if (lean_obj_tag(v_r_3337_) == 0)
{
lean_object* v_k_3576_; lean_object* v_v_3577_; lean_object* v_size_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
v_k_3576_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_k_3576_);
v_v_3577_ = lean_ctor_get(v___x_3489_, 1);
lean_inc(v_v_3577_);
lean_dec_ref(v___x_3489_);
v_size_3578_ = lean_ctor_get(v_r_3337_, 0);
v___x_3579_ = lean_nat_add(v___x_3343_, v_size_3333_);
lean_dec(v_size_3333_);
v___x_3580_ = lean_nat_add(v___x_3343_, v_size_3578_);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_tree_3490_);
lean_ctor_set(v___x_3487_, 3, v_r_3337_);
lean_ctor_set(v___x_3487_, 2, v_v_3577_);
lean_ctor_set(v___x_3487_, 1, v_k_3576_);
lean_ctor_set(v___x_3487_, 0, v___x_3580_);
v___x_3582_ = v___x_3487_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v_k_3576_);
lean_ctor_set(v_reuseFailAlloc_3586_, 2, v_v_3577_);
lean_ctor_set(v_reuseFailAlloc_3586_, 3, v_r_3337_);
lean_ctor_set(v_reuseFailAlloc_3586_, 4, v_tree_3490_);
v___x_3582_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
lean_object* v___x_3584_; 
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 4, v___x_3582_);
lean_ctor_set(v___x_3574_, 0, v___x_3579_);
v___x_3584_ = v___x_3574_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_k_3334_);
lean_ctor_set(v_reuseFailAlloc_3585_, 2, v_v_3335_);
lean_ctor_set(v_reuseFailAlloc_3585_, 3, v_l_3336_);
lean_ctor_set(v_reuseFailAlloc_3585_, 4, v___x_3582_);
v___x_3584_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
return v___x_3584_;
}
}
}
else
{
lean_object* v_k_3587_; lean_object* v_v_3588_; lean_object* v___x_3589_; lean_object* v___x_3591_; 
lean_dec(v_size_3333_);
v_k_3587_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_k_3587_);
v_v_3588_ = lean_ctor_get(v___x_3489_, 1);
lean_inc(v_v_3588_);
lean_dec_ref(v___x_3489_);
v___x_3589_ = lean_unsigned_to_nat(3u);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_r_3337_);
lean_ctor_set(v___x_3487_, 3, v_r_3337_);
lean_ctor_set(v___x_3487_, 2, v_v_3588_);
lean_ctor_set(v___x_3487_, 1, v_k_3587_);
lean_ctor_set(v___x_3487_, 0, v___x_3343_);
v___x_3591_ = v___x_3487_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3595_, 1, v_k_3587_);
lean_ctor_set(v_reuseFailAlloc_3595_, 2, v_v_3588_);
lean_ctor_set(v_reuseFailAlloc_3595_, 3, v_r_3337_);
lean_ctor_set(v_reuseFailAlloc_3595_, 4, v_r_3337_);
v___x_3591_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
lean_object* v___x_3593_; 
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 4, v___x_3591_);
lean_ctor_set(v___x_3574_, 0, v___x_3589_);
v___x_3593_ = v___x_3574_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3589_);
lean_ctor_set(v_reuseFailAlloc_3594_, 1, v_k_3334_);
lean_ctor_set(v_reuseFailAlloc_3594_, 2, v_v_3335_);
lean_ctor_set(v_reuseFailAlloc_3594_, 3, v_l_3336_);
lean_ctor_set(v_reuseFailAlloc_3594_, 4, v___x_3591_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3337_) == 0)
{
lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3626_; 
lean_inc(v_l_3336_);
lean_inc(v_v_3335_);
lean_inc(v_k_3334_);
v_isSharedCheck_3626_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3626_ == 0)
{
lean_object* v_unused_3627_; lean_object* v_unused_3628_; lean_object* v_unused_3629_; lean_object* v_unused_3630_; lean_object* v_unused_3631_; 
v_unused_3627_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3627_);
v_unused_3628_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3628_);
v_unused_3629_ = lean_ctor_get(v_l_3153_, 2);
lean_dec(v_unused_3629_);
v_unused_3630_ = lean_ctor_get(v_l_3153_, 1);
lean_dec(v_unused_3630_);
v_unused_3631_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3631_);
v___x_3603_ = v_l_3153_;
v_isShared_3604_ = v_isSharedCheck_3626_;
goto v_resetjp_3602_;
}
else
{
lean_dec(v_l_3153_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3626_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v_k_3605_; lean_object* v_v_3606_; lean_object* v_k_3607_; lean_object* v_v_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3622_; 
v_k_3605_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_k_3605_);
v_v_3606_ = lean_ctor_get(v___x_3489_, 1);
lean_inc(v_v_3606_);
lean_dec_ref(v___x_3489_);
v_k_3607_ = lean_ctor_get(v_r_3337_, 1);
v_v_3608_ = lean_ctor_get(v_r_3337_, 2);
v_isSharedCheck_3622_ = !lean_is_exclusive(v_r_3337_);
if (v_isSharedCheck_3622_ == 0)
{
lean_object* v_unused_3623_; lean_object* v_unused_3624_; lean_object* v_unused_3625_; 
v_unused_3623_ = lean_ctor_get(v_r_3337_, 4);
lean_dec(v_unused_3623_);
v_unused_3624_ = lean_ctor_get(v_r_3337_, 3);
lean_dec(v_unused_3624_);
v_unused_3625_ = lean_ctor_get(v_r_3337_, 0);
lean_dec(v_unused_3625_);
v___x_3610_ = v_r_3337_;
v_isShared_3611_ = v_isSharedCheck_3622_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_v_3608_);
lean_inc(v_k_3607_);
lean_dec(v_r_3337_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3622_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3612_; lean_object* v___x_3614_; 
v___x_3612_ = lean_unsigned_to_nat(3u);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 4, v_l_3336_);
lean_ctor_set(v___x_3610_, 3, v_l_3336_);
lean_ctor_set(v___x_3610_, 2, v_v_3335_);
lean_ctor_set(v___x_3610_, 1, v_k_3334_);
lean_ctor_set(v___x_3610_, 0, v___x_3343_);
v___x_3614_ = v___x_3610_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v_k_3334_);
lean_ctor_set(v_reuseFailAlloc_3621_, 2, v_v_3335_);
lean_ctor_set(v_reuseFailAlloc_3621_, 3, v_l_3336_);
lean_ctor_set(v_reuseFailAlloc_3621_, 4, v_l_3336_);
v___x_3614_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
lean_object* v___x_3616_; 
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_l_3336_);
lean_ctor_set(v___x_3487_, 3, v_l_3336_);
lean_ctor_set(v___x_3487_, 2, v_v_3606_);
lean_ctor_set(v___x_3487_, 1, v_k_3605_);
lean_ctor_set(v___x_3487_, 0, v___x_3343_);
v___x_3616_ = v___x_3487_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3620_, 1, v_k_3605_);
lean_ctor_set(v_reuseFailAlloc_3620_, 2, v_v_3606_);
lean_ctor_set(v_reuseFailAlloc_3620_, 3, v_l_3336_);
lean_ctor_set(v_reuseFailAlloc_3620_, 4, v_l_3336_);
v___x_3616_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
lean_object* v___x_3618_; 
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 4, v___x_3616_);
lean_ctor_set(v___x_3603_, 3, v___x_3614_);
lean_ctor_set(v___x_3603_, 2, v_v_3608_);
lean_ctor_set(v___x_3603_, 1, v_k_3607_);
lean_ctor_set(v___x_3603_, 0, v___x_3612_);
v___x_3618_ = v___x_3603_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v___x_3612_);
lean_ctor_set(v_reuseFailAlloc_3619_, 1, v_k_3607_);
lean_ctor_set(v_reuseFailAlloc_3619_, 2, v_v_3608_);
lean_ctor_set(v_reuseFailAlloc_3619_, 3, v___x_3614_);
lean_ctor_set(v_reuseFailAlloc_3619_, 4, v___x_3616_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
}
else
{
lean_object* v_k_3632_; lean_object* v_v_3633_; lean_object* v___x_3634_; lean_object* v___x_3636_; 
v_k_3632_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_k_3632_);
v_v_3633_ = lean_ctor_get(v___x_3489_, 1);
lean_inc(v_v_3633_);
lean_dec_ref(v___x_3489_);
v___x_3634_ = lean_unsigned_to_nat(2u);
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 4, v_r_3337_);
lean_ctor_set(v___x_3487_, 3, v_l_3153_);
lean_ctor_set(v___x_3487_, 2, v_v_3633_);
lean_ctor_set(v___x_3487_, 1, v_k_3632_);
lean_ctor_set(v___x_3487_, 0, v___x_3634_);
v___x_3636_ = v___x_3487_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v___x_3634_);
lean_ctor_set(v_reuseFailAlloc_3637_, 1, v_k_3632_);
lean_ctor_set(v_reuseFailAlloc_3637_, 2, v_v_3633_);
lean_ctor_set(v_reuseFailAlloc_3637_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3637_, 4, v_r_3337_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
}
}
}
else
{
return v_l_3153_;
}
}
else
{
return v_r_3154_;
}
}
default: 
{
lean_object* v_impl_3644_; lean_object* v___x_3645_; 
v_impl_3644_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3149_, v_r_3154_);
v___x_3645_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3644_) == 0)
{
if (lean_obj_tag(v_l_3153_) == 0)
{
lean_object* v_size_3646_; lean_object* v_size_3647_; lean_object* v_k_3648_; lean_object* v_v_3649_; lean_object* v_l_3650_; lean_object* v_r_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; 
v_size_3646_ = lean_ctor_get(v_impl_3644_, 0);
lean_inc(v_size_3646_);
v_size_3647_ = lean_ctor_get(v_l_3153_, 0);
v_k_3648_ = lean_ctor_get(v_l_3153_, 1);
v_v_3649_ = lean_ctor_get(v_l_3153_, 2);
v_l_3650_ = lean_ctor_get(v_l_3153_, 3);
v_r_3651_ = lean_ctor_get(v_l_3153_, 4);
lean_inc(v_r_3651_);
v___x_3652_ = lean_unsigned_to_nat(3u);
v___x_3653_ = lean_nat_mul(v___x_3652_, v_size_3646_);
v___x_3654_ = lean_nat_dec_lt(v___x_3653_, v_size_3647_);
lean_dec(v___x_3653_);
if (v___x_3654_ == 0)
{
lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3658_; 
lean_dec(v_r_3651_);
v___x_3655_ = lean_nat_add(v___x_3645_, v_size_3647_);
v___x_3656_ = lean_nat_add(v___x_3655_, v_size_3646_);
lean_dec(v_size_3646_);
lean_dec(v___x_3655_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_impl_3644_);
lean_ctor_set(v___x_3156_, 0, v___x_3656_);
v___x_3658_ = v___x_3156_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v___x_3656_);
lean_ctor_set(v_reuseFailAlloc_3659_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3659_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3659_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3659_, 4, v_impl_3644_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
else
{
lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3725_; 
lean_inc(v_l_3650_);
lean_inc(v_v_3649_);
lean_inc(v_k_3648_);
lean_inc(v_size_3647_);
v_isSharedCheck_3725_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3725_ == 0)
{
lean_object* v_unused_3726_; lean_object* v_unused_3727_; lean_object* v_unused_3728_; lean_object* v_unused_3729_; lean_object* v_unused_3730_; 
v_unused_3726_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3726_);
v_unused_3727_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3727_);
v_unused_3728_ = lean_ctor_get(v_l_3153_, 2);
lean_dec(v_unused_3728_);
v_unused_3729_ = lean_ctor_get(v_l_3153_, 1);
lean_dec(v_unused_3729_);
v_unused_3730_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3730_);
v___x_3661_ = v_l_3153_;
v_isShared_3662_ = v_isSharedCheck_3725_;
goto v_resetjp_3660_;
}
else
{
lean_dec(v_l_3153_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3725_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v_size_3663_; lean_object* v_size_3664_; lean_object* v_k_3665_; lean_object* v_v_3666_; lean_object* v_l_3667_; lean_object* v_r_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; uint8_t v___x_3671_; 
v_size_3663_ = lean_ctor_get(v_l_3650_, 0);
v_size_3664_ = lean_ctor_get(v_r_3651_, 0);
v_k_3665_ = lean_ctor_get(v_r_3651_, 1);
v_v_3666_ = lean_ctor_get(v_r_3651_, 2);
v_l_3667_ = lean_ctor_get(v_r_3651_, 3);
v_r_3668_ = lean_ctor_get(v_r_3651_, 4);
v___x_3669_ = lean_unsigned_to_nat(2u);
v___x_3670_ = lean_nat_mul(v___x_3669_, v_size_3663_);
v___x_3671_ = lean_nat_dec_lt(v_size_3664_, v___x_3670_);
lean_dec(v___x_3670_);
if (v___x_3671_ == 0)
{
lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3700_; 
lean_inc(v_r_3668_);
lean_inc(v_l_3667_);
lean_inc(v_v_3666_);
lean_inc(v_k_3665_);
v_isSharedCheck_3700_ = !lean_is_exclusive(v_r_3651_);
if (v_isSharedCheck_3700_ == 0)
{
lean_object* v_unused_3701_; lean_object* v_unused_3702_; lean_object* v_unused_3703_; lean_object* v_unused_3704_; lean_object* v_unused_3705_; 
v_unused_3701_ = lean_ctor_get(v_r_3651_, 4);
lean_dec(v_unused_3701_);
v_unused_3702_ = lean_ctor_get(v_r_3651_, 3);
lean_dec(v_unused_3702_);
v_unused_3703_ = lean_ctor_get(v_r_3651_, 2);
lean_dec(v_unused_3703_);
v_unused_3704_ = lean_ctor_get(v_r_3651_, 1);
lean_dec(v_unused_3704_);
v_unused_3705_ = lean_ctor_get(v_r_3651_, 0);
lean_dec(v_unused_3705_);
v___x_3673_ = v_r_3651_;
v_isShared_3674_ = v_isSharedCheck_3700_;
goto v_resetjp_3672_;
}
else
{
lean_dec(v_r_3651_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3700_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___x_3688_; lean_object* v___y_3690_; 
v___x_3675_ = lean_nat_add(v___x_3645_, v_size_3647_);
lean_dec(v_size_3647_);
v___x_3676_ = lean_nat_add(v___x_3675_, v_size_3646_);
lean_dec(v___x_3675_);
v___x_3688_ = lean_nat_add(v___x_3645_, v_size_3663_);
if (lean_obj_tag(v_l_3667_) == 0)
{
lean_object* v_size_3698_; 
v_size_3698_ = lean_ctor_get(v_l_3667_, 0);
lean_inc(v_size_3698_);
v___y_3690_ = v_size_3698_;
goto v___jp_3689_;
}
else
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_unsigned_to_nat(0u);
v___y_3690_ = v___x_3699_;
goto v___jp_3689_;
}
v___jp_3677_:
{
lean_object* v___x_3681_; lean_object* v___x_3683_; 
v___x_3681_ = lean_nat_add(v___y_3678_, v___y_3680_);
lean_dec(v___y_3680_);
lean_dec(v___y_3678_);
if (v_isShared_3674_ == 0)
{
lean_ctor_set(v___x_3673_, 4, v_impl_3644_);
lean_ctor_set(v___x_3673_, 3, v_r_3668_);
lean_ctor_set(v___x_3673_, 2, v_v_3152_);
lean_ctor_set(v___x_3673_, 1, v_k_3151_);
lean_ctor_set(v___x_3673_, 0, v___x_3681_);
v___x_3683_ = v___x_3673_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3681_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3687_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3687_, 3, v_r_3668_);
lean_ctor_set(v_reuseFailAlloc_3687_, 4, v_impl_3644_);
v___x_3683_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
lean_object* v___x_3685_; 
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 4, v___x_3683_);
lean_ctor_set(v___x_3661_, 3, v___y_3679_);
lean_ctor_set(v___x_3661_, 2, v_v_3666_);
lean_ctor_set(v___x_3661_, 1, v_k_3665_);
lean_ctor_set(v___x_3661_, 0, v___x_3676_);
v___x_3685_ = v___x_3661_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v___x_3676_);
lean_ctor_set(v_reuseFailAlloc_3686_, 1, v_k_3665_);
lean_ctor_set(v_reuseFailAlloc_3686_, 2, v_v_3666_);
lean_ctor_set(v_reuseFailAlloc_3686_, 3, v___y_3679_);
lean_ctor_set(v_reuseFailAlloc_3686_, 4, v___x_3683_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
v___jp_3689_:
{
lean_object* v___x_3691_; lean_object* v___x_3693_; 
v___x_3691_ = lean_nat_add(v___x_3688_, v___y_3690_);
lean_dec(v___y_3690_);
lean_dec(v___x_3688_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_l_3667_);
lean_ctor_set(v___x_3156_, 3, v_l_3650_);
lean_ctor_set(v___x_3156_, 2, v_v_3649_);
lean_ctor_set(v___x_3156_, 1, v_k_3648_);
lean_ctor_set(v___x_3156_, 0, v___x_3691_);
v___x_3693_ = v___x_3156_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v___x_3691_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v_k_3648_);
lean_ctor_set(v_reuseFailAlloc_3697_, 2, v_v_3649_);
lean_ctor_set(v_reuseFailAlloc_3697_, 3, v_l_3650_);
lean_ctor_set(v_reuseFailAlloc_3697_, 4, v_l_3667_);
v___x_3693_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
lean_object* v___x_3694_; 
v___x_3694_ = lean_nat_add(v___x_3645_, v_size_3646_);
lean_dec(v_size_3646_);
if (lean_obj_tag(v_r_3668_) == 0)
{
lean_object* v_size_3695_; 
v_size_3695_ = lean_ctor_get(v_r_3668_, 0);
lean_inc(v_size_3695_);
v___y_3678_ = v___x_3694_;
v___y_3679_ = v___x_3693_;
v___y_3680_ = v_size_3695_;
goto v___jp_3677_;
}
else
{
lean_object* v___x_3696_; 
v___x_3696_ = lean_unsigned_to_nat(0u);
v___y_3678_ = v___x_3694_;
v___y_3679_ = v___x_3693_;
v___y_3680_ = v___x_3696_;
goto v___jp_3677_;
}
}
}
}
}
else
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3711_; 
lean_del_object(v___x_3156_);
v___x_3706_ = lean_nat_add(v___x_3645_, v_size_3647_);
lean_dec(v_size_3647_);
v___x_3707_ = lean_nat_add(v___x_3706_, v_size_3646_);
lean_dec(v___x_3706_);
v___x_3708_ = lean_nat_add(v___x_3645_, v_size_3646_);
lean_dec(v_size_3646_);
v___x_3709_ = lean_nat_add(v___x_3708_, v_size_3664_);
lean_dec(v___x_3708_);
lean_inc_ref(v_impl_3644_);
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 4, v_impl_3644_);
lean_ctor_set(v___x_3661_, 3, v_r_3651_);
lean_ctor_set(v___x_3661_, 2, v_v_3152_);
lean_ctor_set(v___x_3661_, 1, v_k_3151_);
lean_ctor_set(v___x_3661_, 0, v___x_3709_);
v___x_3711_ = v___x_3661_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3709_);
lean_ctor_set(v_reuseFailAlloc_3724_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3724_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3724_, 3, v_r_3651_);
lean_ctor_set(v_reuseFailAlloc_3724_, 4, v_impl_3644_);
v___x_3711_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
v_isSharedCheck_3718_ = !lean_is_exclusive(v_impl_3644_);
if (v_isSharedCheck_3718_ == 0)
{
lean_object* v_unused_3719_; lean_object* v_unused_3720_; lean_object* v_unused_3721_; lean_object* v_unused_3722_; lean_object* v_unused_3723_; 
v_unused_3719_ = lean_ctor_get(v_impl_3644_, 4);
lean_dec(v_unused_3719_);
v_unused_3720_ = lean_ctor_get(v_impl_3644_, 3);
lean_dec(v_unused_3720_);
v_unused_3721_ = lean_ctor_get(v_impl_3644_, 2);
lean_dec(v_unused_3721_);
v_unused_3722_ = lean_ctor_get(v_impl_3644_, 1);
lean_dec(v_unused_3722_);
v_unused_3723_ = lean_ctor_get(v_impl_3644_, 0);
lean_dec(v_unused_3723_);
v___x_3713_ = v_impl_3644_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_dec(v_impl_3644_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 4, v___x_3711_);
lean_ctor_set(v___x_3713_, 3, v_l_3650_);
lean_ctor_set(v___x_3713_, 2, v_v_3649_);
lean_ctor_set(v___x_3713_, 1, v_k_3648_);
lean_ctor_set(v___x_3713_, 0, v___x_3707_);
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3707_);
lean_ctor_set(v_reuseFailAlloc_3717_, 1, v_k_3648_);
lean_ctor_set(v_reuseFailAlloc_3717_, 2, v_v_3649_);
lean_ctor_set(v_reuseFailAlloc_3717_, 3, v_l_3650_);
lean_ctor_set(v_reuseFailAlloc_3717_, 4, v___x_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3731_; lean_object* v___x_3732_; lean_object* v___x_3734_; 
v_size_3731_ = lean_ctor_get(v_impl_3644_, 0);
lean_inc(v_size_3731_);
v___x_3732_ = lean_nat_add(v___x_3645_, v_size_3731_);
lean_dec(v_size_3731_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_impl_3644_);
lean_ctor_set(v___x_3156_, 0, v___x_3732_);
v___x_3734_ = v___x_3156_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3732_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3735_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3735_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3735_, 4, v_impl_3644_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
else
{
if (lean_obj_tag(v_l_3153_) == 0)
{
lean_object* v_l_3736_; 
v_l_3736_ = lean_ctor_get(v_l_3153_, 3);
if (lean_obj_tag(v_l_3736_) == 0)
{
lean_object* v_r_3737_; 
lean_inc_ref(v_l_3736_);
v_r_3737_ = lean_ctor_get(v_l_3153_, 4);
lean_inc(v_r_3737_);
if (lean_obj_tag(v_r_3737_) == 0)
{
lean_object* v_size_3738_; lean_object* v_k_3739_; lean_object* v_v_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3753_; 
v_size_3738_ = lean_ctor_get(v_l_3153_, 0);
v_k_3739_ = lean_ctor_get(v_l_3153_, 1);
v_v_3740_ = lean_ctor_get(v_l_3153_, 2);
v_isSharedCheck_3753_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3753_ == 0)
{
lean_object* v_unused_3754_; lean_object* v_unused_3755_; 
v_unused_3754_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3754_);
v_unused_3755_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3755_);
v___x_3742_ = v_l_3153_;
v_isShared_3743_ = v_isSharedCheck_3753_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_v_3740_);
lean_inc(v_k_3739_);
lean_inc(v_size_3738_);
lean_dec(v_l_3153_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3753_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v_size_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3748_; 
v_size_3744_ = lean_ctor_get(v_r_3737_, 0);
v___x_3745_ = lean_nat_add(v___x_3645_, v_size_3738_);
lean_dec(v_size_3738_);
v___x_3746_ = lean_nat_add(v___x_3645_, v_size_3744_);
if (v_isShared_3743_ == 0)
{
lean_ctor_set(v___x_3742_, 4, v_impl_3644_);
lean_ctor_set(v___x_3742_, 3, v_r_3737_);
lean_ctor_set(v___x_3742_, 2, v_v_3152_);
lean_ctor_set(v___x_3742_, 1, v_k_3151_);
lean_ctor_set(v___x_3742_, 0, v___x_3746_);
v___x_3748_ = v___x_3742_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3752_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3752_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3752_, 3, v_r_3737_);
lean_ctor_set(v_reuseFailAlloc_3752_, 4, v_impl_3644_);
v___x_3748_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
lean_object* v___x_3750_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v___x_3748_);
lean_ctor_set(v___x_3156_, 3, v_l_3736_);
lean_ctor_set(v___x_3156_, 2, v_v_3740_);
lean_ctor_set(v___x_3156_, 1, v_k_3739_);
lean_ctor_set(v___x_3156_, 0, v___x_3745_);
v___x_3750_ = v___x_3156_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v___x_3745_);
lean_ctor_set(v_reuseFailAlloc_3751_, 1, v_k_3739_);
lean_ctor_set(v_reuseFailAlloc_3751_, 2, v_v_3740_);
lean_ctor_set(v_reuseFailAlloc_3751_, 3, v_l_3736_);
lean_ctor_set(v_reuseFailAlloc_3751_, 4, v___x_3748_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
}
else
{
lean_object* v_k_3756_; lean_object* v_v_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3768_; 
v_k_3756_ = lean_ctor_get(v_l_3153_, 1);
v_v_3757_ = lean_ctor_get(v_l_3153_, 2);
v_isSharedCheck_3768_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3768_ == 0)
{
lean_object* v_unused_3769_; lean_object* v_unused_3770_; lean_object* v_unused_3771_; 
v_unused_3769_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3769_);
v_unused_3770_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3770_);
v_unused_3771_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3771_);
v___x_3759_ = v_l_3153_;
v_isShared_3760_ = v_isSharedCheck_3768_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_v_3757_);
lean_inc(v_k_3756_);
lean_dec(v_l_3153_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3768_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3761_; lean_object* v___x_3763_; 
v___x_3761_ = lean_unsigned_to_nat(3u);
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 3, v_r_3737_);
lean_ctor_set(v___x_3759_, 2, v_v_3152_);
lean_ctor_set(v___x_3759_, 1, v_k_3151_);
lean_ctor_set(v___x_3759_, 0, v___x_3645_);
v___x_3763_ = v___x_3759_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v___x_3645_);
lean_ctor_set(v_reuseFailAlloc_3767_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3767_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3767_, 3, v_r_3737_);
lean_ctor_set(v_reuseFailAlloc_3767_, 4, v_r_3737_);
v___x_3763_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
lean_object* v___x_3765_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v___x_3763_);
lean_ctor_set(v___x_3156_, 3, v_l_3736_);
lean_ctor_set(v___x_3156_, 2, v_v_3757_);
lean_ctor_set(v___x_3156_, 1, v_k_3756_);
lean_ctor_set(v___x_3156_, 0, v___x_3761_);
v___x_3765_ = v___x_3156_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v___x_3761_);
lean_ctor_set(v_reuseFailAlloc_3766_, 1, v_k_3756_);
lean_ctor_set(v_reuseFailAlloc_3766_, 2, v_v_3757_);
lean_ctor_set(v_reuseFailAlloc_3766_, 3, v_l_3736_);
lean_ctor_set(v_reuseFailAlloc_3766_, 4, v___x_3763_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
}
else
{
lean_object* v_r_3772_; 
v_r_3772_ = lean_ctor_get(v_l_3153_, 4);
lean_inc(v_r_3772_);
if (lean_obj_tag(v_r_3772_) == 0)
{
lean_object* v_k_3773_; lean_object* v_v_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3797_; 
lean_inc(v_l_3736_);
v_k_3773_ = lean_ctor_get(v_l_3153_, 1);
v_v_3774_ = lean_ctor_get(v_l_3153_, 2);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3797_ == 0)
{
lean_object* v_unused_3798_; lean_object* v_unused_3799_; lean_object* v_unused_3800_; 
v_unused_3798_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3798_);
v_unused_3799_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3799_);
v_unused_3800_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3800_);
v___x_3776_ = v_l_3153_;
v_isShared_3777_ = v_isSharedCheck_3797_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_v_3774_);
lean_inc(v_k_3773_);
lean_dec(v_l_3153_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3797_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v_k_3778_; lean_object* v_v_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3793_; 
v_k_3778_ = lean_ctor_get(v_r_3772_, 1);
v_v_3779_ = lean_ctor_get(v_r_3772_, 2);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_r_3772_);
if (v_isSharedCheck_3793_ == 0)
{
lean_object* v_unused_3794_; lean_object* v_unused_3795_; lean_object* v_unused_3796_; 
v_unused_3794_ = lean_ctor_get(v_r_3772_, 4);
lean_dec(v_unused_3794_);
v_unused_3795_ = lean_ctor_get(v_r_3772_, 3);
lean_dec(v_unused_3795_);
v_unused_3796_ = lean_ctor_get(v_r_3772_, 0);
lean_dec(v_unused_3796_);
v___x_3781_ = v_r_3772_;
v_isShared_3782_ = v_isSharedCheck_3793_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_v_3779_);
lean_inc(v_k_3778_);
lean_dec(v_r_3772_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3793_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3783_ = lean_unsigned_to_nat(3u);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 4, v_l_3736_);
lean_ctor_set(v___x_3781_, 3, v_l_3736_);
lean_ctor_set(v___x_3781_, 2, v_v_3774_);
lean_ctor_set(v___x_3781_, 1, v_k_3773_);
lean_ctor_set(v___x_3781_, 0, v___x_3645_);
v___x_3785_ = v___x_3781_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v___x_3645_);
lean_ctor_set(v_reuseFailAlloc_3792_, 1, v_k_3773_);
lean_ctor_set(v_reuseFailAlloc_3792_, 2, v_v_3774_);
lean_ctor_set(v_reuseFailAlloc_3792_, 3, v_l_3736_);
lean_ctor_set(v_reuseFailAlloc_3792_, 4, v_l_3736_);
v___x_3785_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
lean_object* v___x_3787_; 
if (v_isShared_3777_ == 0)
{
lean_ctor_set(v___x_3776_, 4, v_l_3736_);
lean_ctor_set(v___x_3776_, 2, v_v_3152_);
lean_ctor_set(v___x_3776_, 1, v_k_3151_);
lean_ctor_set(v___x_3776_, 0, v___x_3645_);
v___x_3787_ = v___x_3776_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v___x_3645_);
lean_ctor_set(v_reuseFailAlloc_3791_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3791_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3791_, 3, v_l_3736_);
lean_ctor_set(v_reuseFailAlloc_3791_, 4, v_l_3736_);
v___x_3787_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3789_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v___x_3787_);
lean_ctor_set(v___x_3156_, 3, v___x_3785_);
lean_ctor_set(v___x_3156_, 2, v_v_3779_);
lean_ctor_set(v___x_3156_, 1, v_k_3778_);
lean_ctor_set(v___x_3156_, 0, v___x_3783_);
v___x_3789_ = v___x_3156_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v___x_3783_);
lean_ctor_set(v_reuseFailAlloc_3790_, 1, v_k_3778_);
lean_ctor_set(v_reuseFailAlloc_3790_, 2, v_v_3779_);
lean_ctor_set(v_reuseFailAlloc_3790_, 3, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3790_, 4, v___x_3787_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
}
}
}
}
else
{
lean_object* v___x_3801_; lean_object* v___x_3803_; 
v___x_3801_ = lean_unsigned_to_nat(2u);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_r_3772_);
lean_ctor_set(v___x_3156_, 0, v___x_3801_);
v___x_3803_ = v___x_3156_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3801_);
lean_ctor_set(v_reuseFailAlloc_3804_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3804_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3804_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3804_, 4, v_r_3772_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
else
{
lean_object* v___x_3806_; 
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 4, v_l_3153_);
lean_ctor_set(v___x_3156_, 0, v___x_3645_);
v___x_3806_ = v___x_3156_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___x_3645_);
lean_ctor_set(v_reuseFailAlloc_3807_, 1, v_k_3151_);
lean_ctor_set(v_reuseFailAlloc_3807_, 2, v_v_3152_);
lean_ctor_set(v_reuseFailAlloc_3807_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3807_, 4, v_l_3153_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
}
}
}
else
{
return v_t_3150_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object* v_k_3810_, lean_object* v_t_3811_){
_start:
{
lean_object* v_res_3812_; 
v_res_3812_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3810_, v_t_3811_);
lean_dec(v_k_3810_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_3813_, lean_object* v_x_3814_){
_start:
{
lean_object* v___x_3815_; 
v___x_3815_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_declName_3813_, v_x_3814_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_3816_, lean_object* v_x_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_3816_, v_x_3817_);
lean_dec(v_declName_3816_);
return v_res_3818_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3820_ = ((lean_object*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0));
v___x_3821_ = l_Lean_stringToMessageData(v___x_3820_);
return v___x_3821_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v___x_3830_; lean_object* v_env_3831_; lean_object* v___f_3832_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___x_3876_; 
v___x_3830_ = lean_st_ref_get(v___y_3828_);
v_env_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc_ref(v_env_3831_);
lean_dec(v___x_3830_);
lean_inc(v_declName_3822_);
v___f_3832_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3832_, 0, v_declName_3822_);
v___x_3876_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3831_, v_declName_3822_);
lean_dec_ref(v_env_3831_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_dec(v_declName_3822_);
v___y_3834_ = v___y_3826_;
v___y_3835_ = v___y_3828_;
goto v___jp_3833_;
}
else
{
uint8_t v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
lean_dec_ref_known(v___x_3876_, 1);
lean_dec_ref(v___f_3832_);
v___x_3877_ = 0;
v___x_3878_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_3879_ = l_Lean_MessageData_ofConstName(v_declName_3822_, v___x_3877_);
v___x_3880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
v___x_3881_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3880_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3882_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_);
return v___x_3883_;
}
v___jp_3833_:
{
lean_object* v___x_3836_; lean_object* v_env_3837_; lean_object* v_nextMacroScope_3838_; lean_object* v_ngen_3839_; lean_object* v_auxDeclNGen_3840_; lean_object* v_traceState_3841_; lean_object* v_messages_3842_; lean_object* v_infoState_3843_; lean_object* v_snapshotTasks_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3874_; 
v___x_3836_ = lean_st_ref_take(v___y_3835_);
v_env_3837_ = lean_ctor_get(v___x_3836_, 0);
v_nextMacroScope_3838_ = lean_ctor_get(v___x_3836_, 1);
v_ngen_3839_ = lean_ctor_get(v___x_3836_, 2);
v_auxDeclNGen_3840_ = lean_ctor_get(v___x_3836_, 3);
v_traceState_3841_ = lean_ctor_get(v___x_3836_, 4);
v_messages_3842_ = lean_ctor_get(v___x_3836_, 6);
v_infoState_3843_ = lean_ctor_get(v___x_3836_, 7);
v_snapshotTasks_3844_ = lean_ctor_get(v___x_3836_, 8);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3874_ == 0)
{
lean_object* v_unused_3875_; 
v_unused_3875_ = lean_ctor_get(v___x_3836_, 5);
lean_dec(v_unused_3875_);
v___x_3846_ = v___x_3836_;
v_isShared_3847_ = v_isSharedCheck_3874_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_snapshotTasks_3844_);
lean_inc(v_infoState_3843_);
lean_inc(v_messages_3842_);
lean_inc(v_traceState_3841_);
lean_inc(v_auxDeclNGen_3840_);
lean_inc(v_ngen_3839_);
lean_inc(v_nextMacroScope_3838_);
lean_inc(v_env_3837_);
lean_dec(v___x_3836_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3874_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3854_; 
v___x_3848_ = l_Lean_docStringExt;
v___x_3849_ = lean_box(2);
v___x_3850_ = lean_box(0);
v___x_3851_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_3848_, v_env_3837_, v___f_3832_, v___x_3849_, v___x_3850_);
v___x_3852_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3847_ == 0)
{
lean_ctor_set(v___x_3846_, 5, v___x_3852_);
lean_ctor_set(v___x_3846_, 0, v___x_3851_);
v___x_3854_ = v___x_3846_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3851_);
lean_ctor_set(v_reuseFailAlloc_3873_, 1, v_nextMacroScope_3838_);
lean_ctor_set(v_reuseFailAlloc_3873_, 2, v_ngen_3839_);
lean_ctor_set(v_reuseFailAlloc_3873_, 3, v_auxDeclNGen_3840_);
lean_ctor_set(v_reuseFailAlloc_3873_, 4, v_traceState_3841_);
lean_ctor_set(v_reuseFailAlloc_3873_, 5, v___x_3852_);
lean_ctor_set(v_reuseFailAlloc_3873_, 6, v_messages_3842_);
lean_ctor_set(v_reuseFailAlloc_3873_, 7, v_infoState_3843_);
lean_ctor_set(v_reuseFailAlloc_3873_, 8, v_snapshotTasks_3844_);
v___x_3854_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v_mctx_3857_; lean_object* v_zetaDeltaFVarIds_3858_; lean_object* v_postponed_3859_; lean_object* v_diag_3860_; lean_object* v___x_3862_; uint8_t v_isShared_3863_; uint8_t v_isSharedCheck_3871_; 
v___x_3855_ = lean_st_ref_set(v___y_3835_, v___x_3854_);
v___x_3856_ = lean_st_ref_take(v___y_3834_);
v_mctx_3857_ = lean_ctor_get(v___x_3856_, 0);
v_zetaDeltaFVarIds_3858_ = lean_ctor_get(v___x_3856_, 2);
v_postponed_3859_ = lean_ctor_get(v___x_3856_, 3);
v_diag_3860_ = lean_ctor_get(v___x_3856_, 4);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3871_ == 0)
{
lean_object* v_unused_3872_; 
v_unused_3872_ = lean_ctor_get(v___x_3856_, 1);
lean_dec(v_unused_3872_);
v___x_3862_ = v___x_3856_;
v_isShared_3863_ = v_isSharedCheck_3871_;
goto v_resetjp_3861_;
}
else
{
lean_inc(v_diag_3860_);
lean_inc(v_postponed_3859_);
lean_inc(v_zetaDeltaFVarIds_3858_);
lean_inc(v_mctx_3857_);
lean_dec(v___x_3856_);
v___x_3862_ = lean_box(0);
v_isShared_3863_ = v_isSharedCheck_3871_;
goto v_resetjp_3861_;
}
v_resetjp_3861_:
{
lean_object* v___x_3864_; lean_object* v___x_3866_; 
v___x_3864_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3863_ == 0)
{
lean_ctor_set(v___x_3862_, 1, v___x_3864_);
v___x_3866_ = v___x_3862_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_mctx_3857_);
lean_ctor_set(v_reuseFailAlloc_3870_, 1, v___x_3864_);
lean_ctor_set(v_reuseFailAlloc_3870_, 2, v_zetaDeltaFVarIds_3858_);
lean_ctor_set(v_reuseFailAlloc_3870_, 3, v_postponed_3859_);
lean_ctor_set(v_reuseFailAlloc_3870_, 4, v_diag_3860_);
v___x_3866_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3867_ = lean_st_ref_set(v___y_3834_, v___x_3866_);
v___x_3868_ = lean_box(0);
v___x_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3869_, 0, v___x_3868_);
return v___x_3869_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
lean_dec(v___y_3886_);
lean_dec_ref(v___y_3885_);
return v_res_3892_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__0));
v___x_3895_ = l_Lean_stringToMessageData(v___x_3894_);
return v___x_3895_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__2));
v___x_3898_ = l_Lean_stringToMessageData(v___x_3897_);
return v___x_3898_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_3900_; lean_object* v___x_3901_; 
v___x_3900_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__4));
v___x_3901_ = l_Lean_stringToMessageData(v___x_3900_);
return v___x_3901_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3903_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__6));
v___x_3904_ = l_Lean_stringToMessageData(v___x_3903_);
return v___x_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_){
_start:
{
lean_object* v___x_3913_; lean_object* v_env_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; 
v___x_3913_ = lean_st_ref_get(v_a_3911_);
v_env_3914_ = lean_ctor_get(v___x_3913_, 0);
lean_inc_ref(v_env_3914_);
lean_dec(v___x_3913_);
v___x_3915_ = 1;
lean_inc(v_declName_3905_);
v___x_3916_ = l_Lean_findInternalDocString_x3f(v_env_3914_, v_declName_3905_, v___x_3915_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_a_3917_);
lean_dec_ref_known(v___x_3916_, 1);
if (lean_obj_tag(v_a_3917_) == 1)
{
lean_object* v_val_3918_; 
v_val_3918_ = lean_ctor_get(v_a_3917_, 0);
lean_inc(v_val_3918_);
lean_dec_ref_known(v_a_3917_, 1);
if (lean_obj_tag(v_val_3918_) == 0)
{
lean_object* v_val_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3941_; 
v_val_3919_ = lean_ctor_get(v_val_3918_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v_val_3918_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3921_ = v_val_3918_;
v_isShared_3922_ = v_isSharedCheck_3941_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_val_3919_);
lean_dec(v_val_3918_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3941_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_Lean_removeBuiltinDocString(v_declName_3905_);
if (lean_obj_tag(v___x_3923_) == 0)
{
lean_object* v___x_3924_; 
lean_dec_ref_known(v___x_3923_, 1);
lean_del_object(v___x_3921_);
lean_inc(v_declName_3905_);
v___x_3924_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3905_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_, v_a_3911_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v___x_3925_; 
lean_dec_ref_known(v___x_3924_, 1);
v___x_3925_ = l_Lean_addVersoDocStringFromString(v_declName_3905_, v_val_3919_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_, v_a_3911_);
return v___x_3925_;
}
else
{
lean_dec(v_val_3919_);
lean_dec(v_declName_3905_);
return v___x_3924_;
}
}
else
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3940_; 
lean_dec(v_val_3919_);
lean_dec(v_declName_3905_);
v_a_3926_ = lean_ctor_get(v___x_3923_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3923_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3928_ = v___x_3923_;
v_isShared_3929_ = v_isSharedCheck_3940_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v___x_3923_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3940_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v_ref_3930_; lean_object* v___x_3931_; lean_object* v___x_3933_; 
v_ref_3930_ = lean_ctor_get(v_a_3910_, 5);
v___x_3931_ = lean_io_error_to_string(v_a_3926_);
if (v_isShared_3922_ == 0)
{
lean_ctor_set_tag(v___x_3921_, 3);
lean_ctor_set(v___x_3921_, 0, v___x_3931_);
v___x_3933_ = v___x_3921_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3931_);
v___x_3933_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3937_; 
v___x_3934_ = l_Lean_MessageData_ofFormat(v___x_3933_);
lean_inc(v_ref_3930_);
v___x_3935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3935_, 0, v_ref_3930_);
lean_ctor_set(v___x_3935_, 1, v___x_3934_);
if (v_isShared_3929_ == 0)
{
lean_ctor_set(v___x_3928_, 0, v___x_3935_);
v___x_3937_ = v___x_3928_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3935_);
v___x_3937_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
return v___x_3937_;
}
}
}
}
}
}
else
{
lean_object* v___x_3942_; uint8_t v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; 
lean_dec(v_val_3918_);
v___x_3942_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_3943_ = 0;
v___x_3944_ = l_Lean_MessageData_ofConstName(v_declName_3905_, v___x_3943_);
v___x_3945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3942_);
lean_ctor_set(v___x_3945_, 1, v___x_3944_);
v___x_3946_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_3947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3945_);
lean_ctor_set(v___x_3947_, 1, v___x_3946_);
v___x_3948_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3947_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_, v_a_3911_);
return v___x_3948_;
}
}
else
{
lean_object* v___x_3949_; uint8_t v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; 
lean_dec(v_a_3917_);
v___x_3949_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_3950_ = 0;
v___x_3951_ = l_Lean_MessageData_ofConstName(v_declName_3905_, v___x_3950_);
v___x_3952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3949_);
lean_ctor_set(v___x_3952_, 1, v___x_3951_);
v___x_3953_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_3954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3952_);
lean_ctor_set(v___x_3954_, 1, v___x_3953_);
v___x_3955_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3954_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_, v_a_3911_);
return v___x_3955_;
}
}
else
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3968_; 
lean_dec(v_declName_3905_);
v_a_3956_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3958_ = v___x_3916_;
v_isShared_3959_ = v_isSharedCheck_3968_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v___x_3916_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3968_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v_ref_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3966_; 
v_ref_3960_ = lean_ctor_get(v_a_3910_, 5);
v___x_3961_ = lean_io_error_to_string(v_a_3956_);
v___x_3962_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
v___x_3963_ = l_Lean_MessageData_ofFormat(v___x_3962_);
lean_inc(v_ref_3960_);
v___x_3964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3964_, 0, v_ref_3960_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
if (v_isShared_3959_ == 0)
{
lean_ctor_set(v___x_3958_, 0, v___x_3964_);
v___x_3966_ = v___x_3958_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_){
_start:
{
lean_object* v_res_3977_; 
v_res_3977_ = l_Lean_makeDocStringVerso(v_declName_3969_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_, v_a_3974_, v_a_3975_);
lean_dec(v_a_3975_);
lean_dec_ref(v_a_3974_);
lean_dec(v_a_3973_);
lean_dec_ref(v_a_3972_);
lean_dec(v_a_3971_);
lean_dec_ref(v_a_3970_);
return v_res_3977_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object* v_00_u03b2_3978_, lean_object* v_k_3979_, lean_object* v_t_3980_, lean_object* v_h_3981_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3979_, v_t_3980_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3983_, lean_object* v_k_3984_, lean_object* v_t_3985_, lean_object* v_h_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(v_00_u03b2_3983_, v_k_3984_, v_t_3985_, v_h_3986_);
lean_dec(v_k_3984_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_3988_, lean_object* v_binders_3989_, lean_object* v_docComment_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_){
_start:
{
lean_object* v_options_3998_; lean_object* v___x_3999_; uint8_t v___x_4000_; lean_object* v___x_4001_; 
v_options_3998_ = lean_ctor_get(v_a_3995_, 2);
v___x_3999_ = l_Lean_doc_verso;
v___x_4000_ = l_Lean_Option_get___at___00Lean_logAt___at___00__private_Lean_DocString_Add_0__Lean_execVersoBlocks_spec__2_spec__4(v_options_3998_, v___x_3999_);
v___x_4001_ = l_Lean_addDocStringOf(v___x_4000_, v_declName_3988_, v_binders_3989_, v_docComment_3990_, v_a_3991_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_);
return v___x_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_4002_, lean_object* v_binders_4003_, lean_object* v_docComment_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_){
_start:
{
lean_object* v_res_4012_; 
v_res_4012_ = l_Lean_addDocString(v_declName_4002_, v_binders_4003_, v_docComment_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_);
lean_dec(v_a_4010_);
lean_dec_ref(v_a_4009_);
lean_dec(v_a_4008_);
lean_dec_ref(v_a_4007_);
lean_dec(v_a_4006_);
lean_dec_ref(v_a_4005_);
return v_res_4012_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_4013_, lean_object* v_binders_4014_, lean_object* v_docString_x3f_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_, lean_object* v_a_4018_, lean_object* v_a_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_){
_start:
{
if (lean_obj_tag(v_docString_x3f_4015_) == 0)
{
lean_object* v___x_4023_; lean_object* v___x_4024_; 
lean_dec(v_binders_4014_);
lean_dec(v_declName_4013_);
v___x_4023_ = lean_box(0);
v___x_4024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4024_, 0, v___x_4023_);
return v___x_4024_;
}
else
{
lean_object* v_val_4025_; lean_object* v___x_4026_; 
v_val_4025_ = lean_ctor_get(v_docString_x3f_4015_, 0);
lean_inc(v_val_4025_);
lean_dec_ref_known(v_docString_x3f_4015_, 1);
v___x_4026_ = l_Lean_addDocString(v_declName_4013_, v_binders_4014_, v_val_4025_, v_a_4016_, v_a_4017_, v_a_4018_, v_a_4019_, v_a_4020_, v_a_4021_);
return v___x_4026_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_4027_, lean_object* v_binders_4028_, lean_object* v_docString_x3f_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_, lean_object* v_a_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_Lean_addDocString_x27(v_declName_4027_, v_binders_4028_, v_docString_x3f_4029_, v_a_4030_, v_a_4031_, v_a_4032_, v_a_4033_, v_a_4034_, v_a_4035_);
lean_dec(v_a_4035_);
lean_dec_ref(v_a_4034_);
lean_dec(v_a_4033_);
lean_dec_ref(v_a_4032_);
lean_dec(v_a_4031_);
lean_dec_ref(v_a_4030_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v___x_4042_; lean_object* v_nextMacroScope_4043_; lean_object* v_ngen_4044_; lean_object* v_auxDeclNGen_4045_; lean_object* v_traceState_4046_; lean_object* v_messages_4047_; lean_object* v_infoState_4048_; lean_object* v_snapshotTasks_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4075_; 
v___x_4042_ = lean_st_ref_take(v___y_4040_);
v_nextMacroScope_4043_ = lean_ctor_get(v___x_4042_, 1);
v_ngen_4044_ = lean_ctor_get(v___x_4042_, 2);
v_auxDeclNGen_4045_ = lean_ctor_get(v___x_4042_, 3);
v_traceState_4046_ = lean_ctor_get(v___x_4042_, 4);
v_messages_4047_ = lean_ctor_get(v___x_4042_, 6);
v_infoState_4048_ = lean_ctor_get(v___x_4042_, 7);
v_snapshotTasks_4049_ = lean_ctor_get(v___x_4042_, 8);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_4042_);
if (v_isSharedCheck_4075_ == 0)
{
lean_object* v_unused_4076_; lean_object* v_unused_4077_; 
v_unused_4076_ = lean_ctor_get(v___x_4042_, 5);
lean_dec(v_unused_4076_);
v_unused_4077_ = lean_ctor_get(v___x_4042_, 0);
lean_dec(v_unused_4077_);
v___x_4051_ = v___x_4042_;
v_isShared_4052_ = v_isSharedCheck_4075_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_snapshotTasks_4049_);
lean_inc(v_infoState_4048_);
lean_inc(v_messages_4047_);
lean_inc(v_traceState_4046_);
lean_inc(v_auxDeclNGen_4045_);
lean_inc(v_ngen_4044_);
lean_inc(v_nextMacroScope_4043_);
lean_dec(v___x_4042_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4075_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
lean_object* v___x_4053_; lean_object* v___x_4055_; 
v___x_4053_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_4052_ == 0)
{
lean_ctor_set(v___x_4051_, 5, v___x_4053_);
lean_ctor_set(v___x_4051_, 0, v_env_4038_);
v___x_4055_ = v___x_4051_;
goto v_reusejp_4054_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v_env_4038_);
lean_ctor_set(v_reuseFailAlloc_4074_, 1, v_nextMacroScope_4043_);
lean_ctor_set(v_reuseFailAlloc_4074_, 2, v_ngen_4044_);
lean_ctor_set(v_reuseFailAlloc_4074_, 3, v_auxDeclNGen_4045_);
lean_ctor_set(v_reuseFailAlloc_4074_, 4, v_traceState_4046_);
lean_ctor_set(v_reuseFailAlloc_4074_, 5, v___x_4053_);
lean_ctor_set(v_reuseFailAlloc_4074_, 6, v_messages_4047_);
lean_ctor_set(v_reuseFailAlloc_4074_, 7, v_infoState_4048_);
lean_ctor_set(v_reuseFailAlloc_4074_, 8, v_snapshotTasks_4049_);
v___x_4055_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4054_;
}
v_reusejp_4054_:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v_mctx_4058_; lean_object* v_zetaDeltaFVarIds_4059_; lean_object* v_postponed_4060_; lean_object* v_diag_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4072_; 
v___x_4056_ = lean_st_ref_set(v___y_4040_, v___x_4055_);
v___x_4057_ = lean_st_ref_take(v___y_4039_);
v_mctx_4058_ = lean_ctor_get(v___x_4057_, 0);
v_zetaDeltaFVarIds_4059_ = lean_ctor_get(v___x_4057_, 2);
v_postponed_4060_ = lean_ctor_get(v___x_4057_, 3);
v_diag_4061_ = lean_ctor_get(v___x_4057_, 4);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4072_ == 0)
{
lean_object* v_unused_4073_; 
v_unused_4073_ = lean_ctor_get(v___x_4057_, 1);
lean_dec(v_unused_4073_);
v___x_4063_ = v___x_4057_;
v_isShared_4064_ = v_isSharedCheck_4072_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_diag_4061_);
lean_inc(v_postponed_4060_);
lean_inc(v_zetaDeltaFVarIds_4059_);
lean_inc(v_mctx_4058_);
lean_dec(v___x_4057_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4072_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4065_; lean_object* v___x_4067_; 
v___x_4065_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_4064_ == 0)
{
lean_ctor_set(v___x_4063_, 1, v___x_4065_);
v___x_4067_ = v___x_4063_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_mctx_4058_);
lean_ctor_set(v_reuseFailAlloc_4071_, 1, v___x_4065_);
lean_ctor_set(v_reuseFailAlloc_4071_, 2, v_zetaDeltaFVarIds_4059_);
lean_ctor_set(v_reuseFailAlloc_4071_, 3, v_postponed_4060_);
lean_ctor_set(v_reuseFailAlloc_4071_, 4, v_diag_4061_);
v___x_4067_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
v___x_4068_ = lean_st_ref_set(v___y_4039_, v___x_4067_);
v___x_4069_ = lean_box(0);
v___x_4070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4069_);
return v___x_4070_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_res_4082_; 
v_res_4082_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_4078_, v___y_4079_, v___y_4080_);
lean_dec(v___y_4080_);
lean_dec(v___y_4079_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_){
_start:
{
lean_object* v___x_4091_; lean_object* v_env_4092_; lean_object* v___x_4093_; uint8_t v___x_4094_; 
v___x_4091_ = lean_st_ref_get(v___y_4089_);
v_env_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc_ref(v_env_4092_);
lean_dec(v___x_4091_);
v___x_4093_ = l_Lean_getMainModuleDoc(v_env_4092_);
v___x_4094_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_4093_);
lean_dec_ref(v___x_4093_);
if (v___x_4094_ == 0)
{
lean_object* v___x_4095_; lean_object* v___x_4096_; 
lean_dec_ref(v_docs_4083_);
v___x_4095_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_4096_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4095_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4096_;
}
else
{
lean_object* v___x_4097_; lean_object* v_env_4098_; lean_object* v___x_4099_; 
v___x_4097_ = lean_st_ref_get(v___y_4089_);
v_env_4098_ = lean_ctor_get(v___x_4097_, 0);
lean_inc_ref(v_env_4098_);
lean_dec(v___x_4097_);
v___x_4099_ = l_Lean_addVersoModuleDocSnippet(v_env_4098_, v_docs_4083_);
if (lean_obj_tag(v___x_4099_) == 0)
{
lean_object* v_a_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v_a_4100_ = lean_ctor_get(v___x_4099_, 0);
lean_inc(v_a_4100_);
lean_dec_ref_known(v___x_4099_, 1);
v___x_4101_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_4102_ = l_Lean_stringToMessageData(v_a_4100_);
v___x_4103_ = l_Lean_indentD(v___x_4102_);
v___x_4104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4101_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
v___x_4105_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4104_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
return v___x_4105_;
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4107_; 
v_a_4106_ = lean_ctor_get(v___x_4099_, 0);
lean_inc(v_a_4106_);
lean_dec_ref_known(v___x_4099_, 1);
v___x_4107_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_4106_, v___y_4087_, v___y_4089_);
return v___x_4107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_){
_start:
{
lean_object* v_res_4116_; 
v_res_4116_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec(v___y_4112_);
lean_dec_ref(v___y_4111_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
return v_res_4116_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_4117_, lean_object* v_docComment_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_, lean_object* v_a_4121_, lean_object* v_a_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v___x_4126_; 
v___x_4126_ = l_Lean_versoModDocString(v_range_4117_, v_docComment_4118_, v_a_4119_, v_a_4120_, v_a_4121_, v_a_4122_, v_a_4123_, v_a_4124_);
if (lean_obj_tag(v___x_4126_) == 0)
{
lean_object* v_a_4127_; lean_object* v___x_4128_; 
v_a_4127_ = lean_ctor_get(v___x_4126_, 0);
lean_inc(v_a_4127_);
lean_dec_ref_known(v___x_4126_, 1);
v___x_4128_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_a_4127_, v_a_4119_, v_a_4120_, v_a_4121_, v_a_4122_, v_a_4123_, v_a_4124_);
return v___x_4128_;
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
v_a_4129_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4126_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4126_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_4137_, lean_object* v_docComment_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_Lean_addVersoModDocString(v_range_4137_, v_docComment_4138_, v_a_4139_, v_a_4140_, v_a_4141_, v_a_4142_, v_a_4143_, v_a_4144_);
lean_dec(v_a_4144_);
lean_dec_ref(v_a_4143_);
lean_dec(v_a_4142_);
lean_dec_ref(v_a_4141_);
lean_dec(v_a_4140_);
lean_dec_ref(v_a_4139_);
lean_dec(v_docComment_4138_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v___x_4155_; 
v___x_4155_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_4147_, v___y_4151_, v___y_4153_);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_);
lean_dec(v___y_4162_);
lean_dec_ref(v___y_4161_);
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
return v_res_4164_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif
