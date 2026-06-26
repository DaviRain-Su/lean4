// Lean compiler output
// Module: Lake.Build.Actions
// Imports: public import Lake.Util.Log import Lake.Util.Proc import Lake.Util.FilePath import Lake.Util.IO import Init.Data.String.Search import Init.Data.String.TakeDrop import Init.System.Platform import Lean.CoreM import Lean.Compiler.Options
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_String_Slice_positions(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_io_getenv(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_System_SearchPath_toString(lean_object*);
lean_object* l_Lake_mkCmdLog(lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lake_splitCcCommand_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_splitCcCommand_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_splitCcCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_splitCcCommand___closed__0 = (const lean_object*)&l_Lake_splitCcCommand___closed__0_value;
static const lean_string_object l_Lake_splitCcCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "cc"};
static const lean_object* l_Lake_splitCcCommand___closed__1 = (const lean_object*)&l_Lake_splitCcCommand___closed__1_value;
static const lean_ctor_object l_Lake_splitCcCommand___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_splitCcCommand___closed__1_value),((lean_object*)&l_Lake_splitCcCommand___closed__0_value)}};
static const lean_object* l_Lake_splitCcCommand___closed__2 = (const lean_object*)&l_Lake_splitCcCommand___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_splitCcCommand(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_compileLeanModule___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean exited with code "};
static const lean_object* l_Lake_compileLeanModule___lam__0___closed__0 = (const lean_object*)&l_Lake_compileLeanModule___lam__0___closed__0_value;
static const lean_string_object l_Lake_compileLeanModule___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stderr:\n"};
static const lean_object* l_Lake_compileLeanModule___lam__0___closed__1 = (const lean_object*)&l_Lake_compileLeanModule___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdout:\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileLeanModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--setup"};
static const lean_object* l_Lake_compileLeanModule___closed__0 = (const lean_object*)&l_Lake_compileLeanModule___closed__0_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__1;
static const lean_string_object l_Lake_compileLeanModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--json"};
static const lean_object* l_Lake_compileLeanModule___closed__2 = (const lean_object*)&l_Lake_compileLeanModule___closed__2_value;
static const lean_ctor_object l_Lake_compileLeanModule___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_compileLeanModule___closed__3 = (const lean_object*)&l_Lake_compileLeanModule___closed__3_value;
static const lean_string_object l_Lake_compileLeanModule___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lake_compileLeanModule___closed__4 = (const lean_object*)&l_Lake_compileLeanModule___closed__4_value;
static const lean_string_object l_Lake_compileLeanModule___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_compileLeanModule___closed__5 = (const lean_object*)&l_Lake_compileLeanModule___closed__5_value;
static const lean_string_object l_Lake_compileLeanModule___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "failed to execute '"};
static const lean_object* l_Lake_compileLeanModule___closed__6 = (const lean_object*)&l_Lake_compileLeanModule___closed__6_value;
static const lean_string_object l_Lake_compileLeanModule___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "': "};
static const lean_object* l_Lake_compileLeanModule___closed__7 = (const lean_object*)&l_Lake_compileLeanModule___closed__7_value;
static const lean_string_object l_Lake_compileLeanModule___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-b"};
static const lean_object* l_Lake_compileLeanModule___closed__8 = (const lean_object*)&l_Lake_compileLeanModule___closed__8_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__9;
static const lean_string_object l_Lake_compileLeanModule___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-c"};
static const lean_object* l_Lake_compileLeanModule___closed__10 = (const lean_object*)&l_Lake_compileLeanModule___closed__10_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__11;
static const lean_string_object l_Lake_compileLeanModule___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-i"};
static const lean_object* l_Lake_compileLeanModule___closed__12 = (const lean_object*)&l_Lake_compileLeanModule___closed__12_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__13;
static const lean_string_object l_Lake_compileLeanModule___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l_Lake_compileLeanModule___closed__14 = (const lean_object*)&l_Lake_compileLeanModule___closed__14_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__15;
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_compileO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileO___closed__0;
static lean_once_cell_t l_Lake_compileO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileO___closed__1;
static const lean_array_object l_Lake_compileO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_compileO___closed__2 = (const lean_object*)&l_Lake_compileO___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_mkArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rsp"};
static const lean_object* l_Lake_mkArgs___closed__0 = (const lean_object*)&l_Lake_mkArgs___closed__0_value;
static const lean_string_object l_Lake_mkArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l_Lake_mkArgs___closed__1 = (const lean_object*)&l_Lake_mkArgs___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_compileStaticLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rcs"};
static const lean_object* l_Lake_compileStaticLib___closed__0 = (const lean_object*)&l_Lake_compileStaticLib___closed__0_value;
static const lean_array_object l_Lake_compileStaticLib___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_compileStaticLib___closed__0_value)}};
static const lean_object* l_Lake_compileStaticLib___closed__1 = (const lean_object*)&l_Lake_compileStaticLib___closed__1_value;
static const lean_string_object l_Lake_compileStaticLib___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--thin"};
static const lean_object* l_Lake_compileStaticLib___closed__2 = (const lean_object*)&l_Lake_compileStaticLib___closed__2_value;
static lean_once_cell_t l_Lake_compileStaticLib___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileStaticLib___closed__3;
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "LEAN_CC"};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0_value;
static const lean_string_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "MACOSX_DEPLOYMENT_TARGET"};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1_value;
static const lean_string_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "99.0"};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2_value;
static const lean_ctor_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2_value)}};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1_value),((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4_value;
static const lean_array_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4_value)}};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__5 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__5_value;
static const lean_string_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "zig"};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__6 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__6_value;
static lean_once_cell_t l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__7;
LEAN_EXPORT lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
LEAN_EXPORT lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___boxed(lean_object*);
static const lean_string_object l_Lake_compileSharedLib___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-shared"};
static const lean_object* l_Lake_compileSharedLib___closed__0 = (const lean_object*)&l_Lake_compileSharedLib___closed__0_value;
static lean_once_cell_t l_Lake_compileSharedLib___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileSharedLib___closed__1;
static lean_once_cell_t l_Lake_compileSharedLib___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileSharedLib___closed__2;
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-H"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_download___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "curl"};
static const lean_object* l_Lake_download___closed__0 = (const lean_object*)&l_Lake_download___closed__0_value;
static const lean_string_object l_Lake_download___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l_Lake_download___closed__1 = (const lean_object*)&l_Lake_download___closed__1_value;
static const lean_string_object l_Lake_download___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-S"};
static const lean_object* l_Lake_download___closed__2 = (const lean_object*)&l_Lake_download___closed__2_value;
static const lean_string_object l_Lake_download___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-f"};
static const lean_object* l_Lake_download___closed__3 = (const lean_object*)&l_Lake_download___closed__3_value;
static const lean_string_object l_Lake_download___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-L"};
static const lean_object* l_Lake_download___closed__4 = (const lean_object*)&l_Lake_download___closed__4_value;
static lean_once_cell_t l_Lake_download___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__5;
static lean_once_cell_t l_Lake_download___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__6;
static lean_once_cell_t l_Lake_download___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__7;
static lean_once_cell_t l_Lake_download___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_download___closed__8;
LEAN_EXPORT lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_untar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tar"};
static const lean_object* l_Lake_untar___closed__0 = (const lean_object*)&l_Lake_untar___closed__0_value;
static const lean_string_object l_Lake_untar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-C"};
static const lean_object* l_Lake_untar___closed__1 = (const lean_object*)&l_Lake_untar___closed__1_value;
static const lean_string_object l_Lake_untar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-xvv"};
static const lean_object* l_Lake_untar___closed__2 = (const lean_object*)&l_Lake_untar___closed__2_value;
static lean_once_cell_t l_Lake_untar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_untar___closed__3;
LEAN_EXPORT lean_object* l_Lake_untar(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "--exclude="};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_tar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_tar___closed__0 = (const lean_object*)&l_Lake_tar___closed__0_value;
static lean_once_cell_t l_Lake_tar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__1;
static const lean_string_object l_Lake_tar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "COPYFILE_DISABLE"};
static const lean_object* l_Lake_tar___closed__2 = (const lean_object*)&l_Lake_tar___closed__2_value;
static const lean_string_object l_Lake_tar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_tar___closed__3 = (const lean_object*)&l_Lake_tar___closed__3_value;
static const lean_ctor_object l_Lake_tar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_tar___closed__3_value)}};
static const lean_object* l_Lake_tar___closed__4 = (const lean_object*)&l_Lake_tar___closed__4_value;
static const lean_ctor_object l_Lake_tar___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_tar___closed__2_value),((lean_object*)&l_Lake_tar___closed__4_value)}};
static const lean_object* l_Lake_tar___closed__5 = (const lean_object*)&l_Lake_tar___closed__5_value;
static const lean_array_object l_Lake_tar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_tar___closed__5_value)}};
static const lean_object* l_Lake_tar___closed__6 = (const lean_object*)&l_Lake_tar___closed__6_value;
static const lean_string_object l_Lake_tar___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-cvv"};
static const lean_object* l_Lake_tar___closed__7 = (const lean_object*)&l_Lake_tar___closed__7_value;
static const lean_array_object l_Lake_tar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_tar___closed__7_value)}};
static const lean_object* l_Lake_tar___closed__8 = (const lean_object*)&l_Lake_tar___closed__8_value;
static const lean_string_object l_Lake_tar___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-z"};
static const lean_object* l_Lake_tar___closed__9 = (const lean_object*)&l_Lake_tar___closed__9_value;
static lean_once_cell_t l_Lake_tar___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__10;
LEAN_EXPORT lean_object* l_Lake_tar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0(lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0___closed__0));
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0___boxed(lean_object* v_s_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0(v_s_5_);
lean_dec_ref(v_s_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lake_splitCcCommand_spec__3(lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
if (lean_obj_tag(v_a_7_) == 0)
{
lean_object* v___x_9_; 
v___x_9_ = l_List_reverse___redArg(v_a_8_);
return v___x_9_;
}
else
{
lean_object* v_head_10_; lean_object* v_tail_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_23_; 
v_head_10_ = lean_ctor_get(v_a_7_, 0);
v_tail_11_ = lean_ctor_get(v_a_7_, 1);
v_isSharedCheck_23_ = !lean_is_exclusive(v_a_7_);
if (v_isSharedCheck_23_ == 0)
{
v___x_13_ = v_a_7_;
v_isShared_14_ = v_isSharedCheck_23_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_tail_11_);
lean_inc(v_head_10_);
lean_dec(v_a_7_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_23_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_15_ = lean_string_utf8_byte_size(v_head_10_);
v___x_16_ = lean_unsigned_to_nat(0u);
v___x_17_ = lean_nat_dec_eq(v___x_15_, v___x_16_);
if (v___x_17_ == 0)
{
lean_object* v___x_19_; 
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v_a_8_);
v___x_19_ = v___x_13_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_head_10_);
lean_ctor_set(v_reuseFailAlloc_21_, 1, v_a_8_);
v___x_19_ = v_reuseFailAlloc_21_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
v_a_7_ = v_tail_11_;
v_a_8_ = v___x_19_;
goto _start;
}
}
else
{
lean_del_object(v___x_13_);
lean_dec(v_head_10_);
v_a_7_ = v_tail_11_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lake_splitCcCommand_spec__2(lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
if (lean_obj_tag(v_a_24_) == 0)
{
lean_object* v___x_26_; 
v___x_26_ = l_List_reverse___redArg(v_a_25_);
return v___x_26_;
}
else
{
lean_object* v_head_27_; lean_object* v_tail_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_37_; 
v_head_27_ = lean_ctor_get(v_a_24_, 0);
v_tail_28_ = lean_ctor_get(v_a_24_, 1);
v_isSharedCheck_37_ = !lean_is_exclusive(v_a_24_);
if (v_isSharedCheck_37_ == 0)
{
v___x_30_ = v_a_24_;
v_isShared_31_ = v_isSharedCheck_37_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_tail_28_);
lean_inc(v_head_27_);
lean_dec(v_a_24_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_37_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_32_; lean_object* v___x_34_; 
v___x_32_ = l_String_Slice_toString(v_head_27_);
lean_dec(v_head_27_);
if (v_isShared_31_ == 0)
{
lean_ctor_set(v___x_30_, 1, v_a_25_);
lean_ctor_set(v___x_30_, 0, v___x_32_);
v___x_34_ = v___x_30_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_32_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v_a_25_);
v___x_34_ = v_reuseFailAlloc_36_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
v_a_24_ = v_tail_28_;
v_a_25_ = v___x_34_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg(lean_object* v_cc_38_, lean_object* v___x_39_, lean_object* v___x_40_, lean_object* v_a_41_, lean_object* v_b_42_){
_start:
{
lean_object* v_it_44_; lean_object* v_startInclusive_45_; lean_object* v_endExclusive_46_; 
if (lean_obj_tag(v_a_41_) == 0)
{
lean_object* v_currPos_50_; lean_object* v_searcher_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_77_; 
v_currPos_50_ = lean_ctor_get(v_a_41_, 0);
v_searcher_51_ = lean_ctor_get(v_a_41_, 1);
v_isSharedCheck_77_ = !lean_is_exclusive(v_a_41_);
if (v_isSharedCheck_77_ == 0)
{
v___x_53_ = v_a_41_;
v_isShared_54_ = v_isSharedCheck_77_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_searcher_51_);
lean_inc(v_currPos_50_);
lean_dec(v_a_41_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_77_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v_startInclusive_55_; lean_object* v_endExclusive_56_; lean_object* v___x_57_; uint8_t v___x_58_; 
v_startInclusive_55_ = lean_ctor_get(v___x_39_, 1);
v_endExclusive_56_ = lean_ctor_get(v___x_39_, 2);
v___x_57_ = lean_nat_sub(v_endExclusive_56_, v_startInclusive_55_);
v___x_58_ = lean_nat_dec_eq(v_searcher_51_, v___x_57_);
lean_dec(v___x_57_);
if (v___x_58_ == 0)
{
uint32_t v___x_59_; uint32_t v___x_60_; uint8_t v___x_61_; 
v___x_59_ = lean_string_utf8_get_fast(v_cc_38_, v_searcher_51_);
v___x_60_ = 32;
v___x_61_ = lean_uint32_dec_eq(v___x_59_, v___x_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_62_ = lean_string_utf8_next_fast(v_cc_38_, v_searcher_51_);
lean_dec(v_searcher_51_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 1, v___x_62_);
v___x_64_ = v___x_53_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v_currPos_50_);
lean_ctor_set(v_reuseFailAlloc_66_, 1, v___x_62_);
v___x_64_ = v_reuseFailAlloc_66_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
v_a_41_ = v___x_64_;
goto _start;
}
}
else
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v_slice_70_; lean_object* v_nextIt_72_; 
v___x_67_ = lean_string_utf8_next_fast(v_cc_38_, v_searcher_51_);
v___x_68_ = lean_nat_sub(v___x_67_, v_searcher_51_);
v___x_69_ = lean_nat_add(v_searcher_51_, v___x_68_);
lean_dec(v___x_68_);
v_slice_70_ = l_String_Slice_subslice_x21(v___x_39_, v_currPos_50_, v_searcher_51_);
lean_inc(v___x_69_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 1, v___x_69_);
lean_ctor_set(v___x_53_, 0, v___x_69_);
v_nextIt_72_ = v___x_53_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_69_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v___x_69_);
v_nextIt_72_ = v_reuseFailAlloc_75_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
lean_object* v_startInclusive_73_; lean_object* v_endExclusive_74_; 
v_startInclusive_73_ = lean_ctor_get(v_slice_70_, 0);
lean_inc(v_startInclusive_73_);
v_endExclusive_74_ = lean_ctor_get(v_slice_70_, 1);
lean_inc(v_endExclusive_74_);
lean_dec_ref(v_slice_70_);
v_it_44_ = v_nextIt_72_;
v_startInclusive_45_ = v_startInclusive_73_;
v_endExclusive_46_ = v_endExclusive_74_;
goto v___jp_43_;
}
}
}
else
{
lean_object* v___x_76_; 
lean_del_object(v___x_53_);
lean_dec(v_searcher_51_);
v___x_76_ = lean_box(1);
lean_inc(v___x_40_);
v_it_44_ = v___x_76_;
v_startInclusive_45_ = v_currPos_50_;
v_endExclusive_46_ = v___x_40_;
goto v___jp_43_;
}
}
}
else
{
lean_dec(v___x_40_);
lean_dec_ref(v_cc_38_);
return v_b_42_;
}
v___jp_43_:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
lean_inc_ref(v_cc_38_);
v___x_47_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_47_, 0, v_cc_38_);
lean_ctor_set(v___x_47_, 1, v_startInclusive_45_);
lean_ctor_set(v___x_47_, 2, v_endExclusive_46_);
v___x_48_ = lean_array_push(v_b_42_, v___x_47_);
v_a_41_ = v_it_44_;
v_b_42_ = v___x_48_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg___boxed(lean_object* v_cc_78_, lean_object* v___x_79_, lean_object* v___x_80_, lean_object* v_a_81_, lean_object* v_b_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg(v_cc_78_, v___x_79_, v___x_80_, v_a_81_, v_b_82_);
lean_dec_ref(v___x_79_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lake_splitCcCommand(lean_object* v_cc_90_){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v_parts_100_; 
v___x_91_ = lean_unsigned_to_nat(0u);
v___x_92_ = lean_string_utf8_byte_size(v_cc_90_);
lean_inc_ref(v_cc_90_);
v___x_93_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_93_, 0, v_cc_90_);
lean_ctor_set(v___x_93_, 1, v___x_91_);
lean_ctor_set(v___x_93_, 2, v___x_92_);
v___x_94_ = l_String_Slice_splitToSubslice___at___00Lake_splitCcCommand_spec__0(v___x_93_);
v___x_95_ = ((lean_object*)(l_Lake_splitCcCommand___closed__0));
v___x_96_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg(v_cc_90_, v___x_93_, v___x_92_, v___x_94_, v___x_95_);
lean_dec_ref_known(v___x_93_, 3);
v___x_97_ = lean_array_to_list(v___x_96_);
v___x_98_ = lean_box(0);
v___x_99_ = l_List_mapTR_loop___at___00Lake_splitCcCommand_spec__2(v___x_97_, v___x_98_);
v_parts_100_ = l_List_filterTR_loop___at___00Lake_splitCcCommand_spec__3(v___x_99_, v___x_98_);
if (lean_obj_tag(v_parts_100_) == 0)
{
lean_object* v___x_101_; 
v___x_101_ = ((lean_object*)(l_Lake_splitCcCommand___closed__2));
return v___x_101_;
}
else
{
lean_object* v_tail_102_; 
v_tail_102_ = lean_ctor_get(v_parts_100_, 1);
lean_inc(v_tail_102_);
if (lean_obj_tag(v_tail_102_) == 0)
{
lean_object* v_head_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_110_; 
v_head_103_ = lean_ctor_get(v_parts_100_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v_parts_100_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; 
v_unused_111_ = lean_ctor_get(v_parts_100_, 1);
lean_dec(v_unused_111_);
v___x_105_ = v_parts_100_;
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_head_103_);
lean_dec(v_parts_100_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_110_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_108_; 
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 0);
lean_ctor_set(v___x_105_, 1, v___x_95_);
v___x_108_ = v___x_105_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_head_103_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___x_95_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
else
{
lean_object* v_head_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_120_; 
v_head_112_ = lean_ctor_get(v_parts_100_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v_parts_100_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; 
v_unused_121_ = lean_ctor_get(v_parts_100_, 1);
lean_dec(v_unused_121_);
v___x_114_ = v_parts_100_;
v_isShared_115_ = v_isSharedCheck_120_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_head_112_);
lean_dec(v_parts_100_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_120_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_116_ = lean_array_mk(v_tail_102_);
if (v_isShared_115_ == 0)
{
lean_ctor_set_tag(v___x_114_, 0);
lean_ctor_set(v___x_114_, 1, v___x_116_);
v___x_118_ = v___x_114_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_head_112_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1(lean_object* v_cc_122_, lean_object* v___x_123_, lean_object* v___x_124_, lean_object* v_inst_125_, lean_object* v_R_126_, lean_object* v_a_127_, lean_object* v_b_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___redArg(v_cc_122_, v___x_123_, v___x_124_, v_a_127_, v_b_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1___boxed(lean_object* v_cc_130_, lean_object* v___x_131_, lean_object* v___x_132_, lean_object* v_inst_133_, lean_object* v_R_134_, lean_object* v_a_135_, lean_object* v_b_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_splitCcCommand_spec__1(v_cc_130_, v___x_131_, v___x_132_, v_inst_133_, v_R_134_, v_a_135_, v_b_136_);
lean_dec_ref(v___x_131_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(lean_object* v_s_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___closed__0));
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___boxed(lean_object* v_s_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(v_s_142_);
lean_dec_ref(v_s_142_);
return v_res_143_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(lean_object* v_opts_144_, lean_object* v_opt_145_){
_start:
{
lean_object* v_name_146_; lean_object* v_defValue_147_; lean_object* v_map_148_; lean_object* v___x_149_; 
v_name_146_ = lean_ctor_get(v_opt_145_, 0);
v_defValue_147_ = lean_ctor_get(v_opt_145_, 1);
v_map_148_ = lean_ctor_get(v_opts_144_, 0);
v___x_149_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_148_, v_name_146_);
if (lean_obj_tag(v___x_149_) == 0)
{
uint8_t v___x_150_; 
v___x_150_ = lean_unbox(v_defValue_147_);
return v___x_150_;
}
else
{
lean_object* v_val_151_; 
v_val_151_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_val_151_);
lean_dec_ref_known(v___x_149_, 1);
if (lean_obj_tag(v_val_151_) == 1)
{
uint8_t v_v_152_; 
v_v_152_ = lean_ctor_get_uint8(v_val_151_, 0);
lean_dec_ref_known(v_val_151_, 0);
return v_v_152_;
}
else
{
uint8_t v___x_153_; 
lean_dec(v_val_151_);
v___x_153_ = lean_unbox(v_defValue_147_);
return v___x_153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2___boxed(lean_object* v_opts_154_, lean_object* v_opt_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(v_opts_154_, v_opt_155_);
lean_dec_ref(v_opt_155_);
lean_dec_ref(v_opts_154_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t v_exitCode_160_, uint8_t v___y_161_, lean_object* v_ir_x3f_162_, lean_object* v_c_x3f_163_, lean_object* v_setupFile_164_, lean_object* v___x_165_, lean_object* v_leanir_166_, lean_object* v___x_167_, lean_object* v___x_168_, uint8_t v___x_169_, uint8_t v___x_170_, lean_object* v_olean_x3f_171_, lean_object* v_stderr_172_, lean_object* v_____r_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___y_177_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_185_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_243_ = lean_string_utf8_byte_size(v_stderr_172_);
v___x_244_ = lean_unsigned_to_nat(0u);
v___x_245_ = lean_nat_dec_eq(v___x_243_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_246_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__1));
v___x_247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_247_, 0, v_stderr_172_);
lean_ctor_set(v___x_247_, 1, v___x_244_);
lean_ctor_set(v___x_247_, 2, v___x_243_);
v___x_248_ = l_String_Slice_trimAscii(v___x_247_);
v___x_249_ = l_String_Slice_toString(v___x_248_);
lean_dec_ref(v___x_248_);
v___x_250_ = lean_string_append(v___x_246_, v___x_249_);
lean_dec_ref(v___x_249_);
v___x_251_ = 1;
v___x_252_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*1, v___x_251_);
v___x_253_ = lean_array_push(v___y_174_, v___x_252_);
v___y_185_ = v___x_253_;
goto v___jp_184_;
}
else
{
lean_dec_ref(v_stderr_172_);
v___y_185_ = v___y_174_;
goto v___jp_184_;
}
v___jp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_box(0);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
lean_ctor_set(v___x_179_, 1, v___y_177_);
return v___x_179_;
}
v___jp_180_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_183_, 0, v___y_181_);
lean_ctor_set(v___x_183_, 1, v___y_182_);
return v___x_183_;
}
v___jp_184_:
{
uint32_t v___x_186_; uint8_t v___x_187_; 
v___x_186_ = 0;
v___x_187_ = lean_uint32_dec_eq(v_exitCode_160_, v___x_186_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec_ref(v___x_168_);
lean_dec(v___x_167_);
lean_dec_ref(v_leanir_166_);
lean_dec_ref(v___x_165_);
lean_dec_ref(v_setupFile_164_);
lean_dec(v_c_x3f_163_);
lean_dec(v_ir_x3f_162_);
v___x_188_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__0));
v___x_189_ = lean_uint32_to_nat(v_exitCode_160_);
v___x_190_ = l_Nat_reprFast(v___x_189_);
v___x_191_ = lean_string_append(v___x_188_, v___x_190_);
lean_dec_ref(v___x_190_);
v___x_192_ = 3;
v___x_193_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set_uint8(v___x_193_, sizeof(void*)*1, v___x_192_);
v___x_194_ = lean_array_get_size(v___y_185_);
v___x_195_ = lean_array_push(v___y_185_, v___x_193_);
v___x_196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
return v___x_196_;
}
else
{
if (v___y_161_ == 0)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
lean_dec_ref(v___x_168_);
lean_dec(v___x_167_);
lean_dec_ref(v_leanir_166_);
lean_dec_ref(v___x_165_);
lean_dec_ref(v_setupFile_164_);
lean_dec(v_c_x3f_163_);
lean_dec(v_ir_x3f_162_);
v___x_197_ = lean_box(0);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v___y_185_);
return v___x_198_;
}
else
{
if (lean_obj_tag(v_ir_x3f_162_) == 1)
{
if (lean_obj_tag(v_c_x3f_163_) == 1)
{
lean_object* v_val_199_; lean_object* v_val_200_; lean_object* v___x_201_; 
v_val_199_ = lean_ctor_get(v_ir_x3f_162_, 0);
lean_inc_n(v_val_199_, 2);
lean_dec_ref_known(v_ir_x3f_162_, 1);
v_val_200_ = lean_ctor_get(v_c_x3f_163_, 0);
lean_inc(v_val_200_);
lean_dec_ref_known(v_c_x3f_163_, 1);
v___x_201_ = l_Lake_createParentDirs(v_val_199_);
if (lean_obj_tag(v___x_201_) == 0)
{
lean_object* v___x_202_; 
lean_dec_ref_known(v___x_201_, 1);
lean_inc(v_val_200_);
v___x_202_ = l_Lake_createParentDirs(v_val_200_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
lean_dec_ref_known(v___x_202_, 1);
v___x_203_ = lean_unsigned_to_nat(3u);
v___x_204_ = lean_mk_empty_array_with_capacity(v___x_203_);
v___x_205_ = lean_array_push(v___x_204_, v_setupFile_164_);
v___x_206_ = lean_array_push(v___x_205_, v_val_199_);
v___x_207_ = lean_array_push(v___x_206_, v_val_200_);
v___x_208_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_208_, 0, v___x_165_);
lean_ctor_set(v___x_208_, 1, v_leanir_166_);
lean_ctor_set(v___x_208_, 2, v___x_207_);
lean_ctor_set(v___x_208_, 3, v___x_167_);
lean_ctor_set(v___x_208_, 4, v___x_168_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*5, v___x_169_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*5 + 1, v___x_170_);
v___x_209_ = l_Lake_proc(v___x_208_, v___x_170_, v___y_185_);
if (lean_obj_tag(v___x_209_) == 0)
{
return v___x_209_;
}
else
{
if (lean_obj_tag(v_olean_x3f_171_) == 1)
{
lean_object* v_a_210_; lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_226_; 
v_a_210_ = lean_ctor_get(v___x_209_, 0);
v_a_211_ = lean_ctor_get(v___x_209_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_226_ == 0)
{
v___x_213_ = v___x_209_;
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_inc(v_a_210_);
lean_dec(v___x_209_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_val_215_; lean_object* v___x_216_; 
v_val_215_ = lean_ctor_get(v_olean_x3f_171_, 0);
v___x_216_ = l_Lake_removeFileIfExists(v_val_215_);
if (lean_obj_tag(v___x_216_) == 0)
{
lean_dec_ref_known(v___x_216_, 1);
lean_del_object(v___x_213_);
v___y_181_ = v_a_210_;
v___y_182_ = v_a_211_;
goto v___jp_180_;
}
else
{
lean_object* v_a_217_; lean_object* v___x_218_; uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
lean_dec(v_a_210_);
v_a_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc(v_a_217_);
lean_dec_ref_known(v___x_216_, 1);
v___x_218_ = lean_io_error_to_string(v_a_217_);
v___x_219_ = 3;
v___x_220_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_220_, 0, v___x_218_);
lean_ctor_set_uint8(v___x_220_, sizeof(void*)*1, v___x_219_);
v___x_221_ = lean_array_get_size(v_a_211_);
v___x_222_ = lean_array_push(v_a_211_, v___x_220_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___x_222_);
lean_ctor_set(v___x_213_, 0, v___x_221_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v_a_228_; 
v_a_227_ = lean_ctor_get(v___x_209_, 0);
lean_inc(v_a_227_);
v_a_228_ = lean_ctor_get(v___x_209_, 1);
lean_inc(v_a_228_);
lean_dec_ref_known(v___x_209_, 2);
v___y_181_ = v_a_227_;
v___y_182_ = v_a_228_;
goto v___jp_180_;
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v_val_200_);
lean_dec(v_val_199_);
lean_dec_ref(v___x_168_);
lean_dec(v___x_167_);
lean_dec_ref(v_leanir_166_);
lean_dec_ref(v___x_165_);
lean_dec_ref(v_setupFile_164_);
v_a_229_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_202_, 1);
v___x_230_ = lean_io_error_to_string(v_a_229_);
v___x_231_ = 3;
v___x_232_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set_uint8(v___x_232_, sizeof(void*)*1, v___x_231_);
v___x_233_ = lean_array_get_size(v___y_185_);
v___x_234_ = lean_array_push(v___y_185_, v___x_232_);
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_233_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
return v___x_235_;
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec(v_val_200_);
lean_dec(v_val_199_);
lean_dec_ref(v___x_168_);
lean_dec(v___x_167_);
lean_dec_ref(v_leanir_166_);
lean_dec_ref(v___x_165_);
lean_dec_ref(v_setupFile_164_);
v_a_236_ = lean_ctor_get(v___x_201_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_201_, 1);
v___x_237_ = lean_io_error_to_string(v_a_236_);
v___x_238_ = 3;
v___x_239_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___x_238_);
v___x_240_ = lean_array_get_size(v___y_185_);
v___x_241_ = lean_array_push(v___y_185_, v___x_239_);
v___x_242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
return v___x_242_;
}
}
else
{
lean_dec_ref_known(v_ir_x3f_162_, 1);
lean_dec_ref(v___x_168_);
lean_dec(v___x_167_);
lean_dec_ref(v_leanir_166_);
lean_dec_ref(v___x_165_);
lean_dec_ref(v_setupFile_164_);
lean_dec(v_c_x3f_163_);
v___y_177_ = v___y_185_;
goto v___jp_176_;
}
}
else
{
lean_dec_ref(v___x_168_);
lean_dec(v___x_167_);
lean_dec_ref(v_leanir_166_);
lean_dec_ref(v___x_165_);
lean_dec_ref(v_setupFile_164_);
lean_dec(v_c_x3f_163_);
lean_dec(v_ir_x3f_162_);
v___y_177_ = v___y_185_;
goto v___jp_176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object* v_exitCode_254_, lean_object* v___y_255_, lean_object* v_ir_x3f_256_, lean_object* v_c_x3f_257_, lean_object* v_setupFile_258_, lean_object* v___x_259_, lean_object* v_leanir_260_, lean_object* v___x_261_, lean_object* v___x_262_, lean_object* v___x_263_, lean_object* v___x_264_, lean_object* v_olean_x3f_265_, lean_object* v_stderr_266_, lean_object* v_____r_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
uint32_t v_exitCode_boxed_270_; uint8_t v___y_30472__boxed_271_; uint8_t v___x_30476__boxed_272_; uint8_t v___x_30477__boxed_273_; lean_object* v_res_274_; 
v_exitCode_boxed_270_ = lean_unbox_uint32(v_exitCode_254_);
lean_dec(v_exitCode_254_);
v___y_30472__boxed_271_ = lean_unbox(v___y_255_);
v___x_30476__boxed_272_ = lean_unbox(v___x_263_);
v___x_30477__boxed_273_ = lean_unbox(v___x_264_);
v_res_274_ = l_Lake_compileLeanModule___lam__0(v_exitCode_boxed_270_, v___y_30472__boxed_271_, v_ir_x3f_256_, v_c_x3f_257_, v_setupFile_258_, v___x_259_, v_leanir_260_, v___x_261_, v___x_262_, v___x_30476__boxed_272_, v___x_30477__boxed_273_, v_olean_x3f_265_, v_stderr_266_, v_____r_267_, v___y_268_);
lean_dec(v_olean_x3f_265_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(lean_object* v_a_275_, lean_object* v_b_276_, lean_object* v_relLeanFile_277_, lean_object* v_____r_278_, lean_object* v___y_279_){
_start:
{
lean_object* v_a_282_; lean_object* v_toBaseMessage_284_; uint8_t v_isSilent_285_; 
v_toBaseMessage_284_ = lean_ctor_get(v_a_275_, 0);
lean_inc_ref(v_toBaseMessage_284_);
v_isSilent_285_ = lean_ctor_get_uint8(v_toBaseMessage_284_, sizeof(void*)*5 + 2);
if (v_isSilent_285_ == 0)
{
lean_object* v_kind_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_310_; 
v_kind_286_ = lean_ctor_get(v_a_275_, 1);
v_isSharedCheck_310_ = !lean_is_exclusive(v_a_275_);
if (v_isSharedCheck_310_ == 0)
{
lean_object* v_unused_311_; 
v_unused_311_ = lean_ctor_get(v_a_275_, 0);
lean_dec(v_unused_311_);
v___x_288_ = v_a_275_;
v_isShared_289_ = v_isSharedCheck_310_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_kind_286_);
lean_dec(v_a_275_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_310_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v_pos_290_; lean_object* v_endPos_291_; uint8_t v_keepFullRange_292_; uint8_t v_severity_293_; lean_object* v_caption_294_; lean_object* v_data_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_308_; 
v_pos_290_ = lean_ctor_get(v_toBaseMessage_284_, 1);
v_endPos_291_ = lean_ctor_get(v_toBaseMessage_284_, 2);
v_keepFullRange_292_ = lean_ctor_get_uint8(v_toBaseMessage_284_, sizeof(void*)*5);
v_severity_293_ = lean_ctor_get_uint8(v_toBaseMessage_284_, sizeof(void*)*5 + 1);
v_caption_294_ = lean_ctor_get(v_toBaseMessage_284_, 3);
v_data_295_ = lean_ctor_get(v_toBaseMessage_284_, 4);
v_isSharedCheck_308_ = !lean_is_exclusive(v_toBaseMessage_284_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_toBaseMessage_284_, 0);
lean_dec(v_unused_309_);
v___x_297_ = v_toBaseMessage_284_;
v_isShared_298_ = v_isSharedCheck_308_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_data_295_);
lean_inc(v_caption_294_);
lean_inc(v_endPos_291_);
lean_inc(v_pos_290_);
lean_dec(v_toBaseMessage_284_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_308_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = l_Lake_mkRelPathString(v_relLeanFile_277_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_299_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v_pos_290_);
lean_ctor_set(v_reuseFailAlloc_307_, 2, v_endPos_291_);
lean_ctor_set(v_reuseFailAlloc_307_, 3, v_caption_294_);
lean_ctor_set(v_reuseFailAlloc_307_, 4, v_data_295_);
lean_ctor_set_uint8(v_reuseFailAlloc_307_, sizeof(void*)*5, v_keepFullRange_292_);
lean_ctor_set_uint8(v_reuseFailAlloc_307_, sizeof(void*)*5 + 1, v_severity_293_);
lean_ctor_set_uint8(v_reuseFailAlloc_307_, sizeof(void*)*5 + 2, v_isSilent_285_);
v___x_301_ = v_reuseFailAlloc_307_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_303_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 0, v___x_301_);
v___x_303_ = v___x_288_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v_kind_286_);
v___x_303_ = v_reuseFailAlloc_306_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = l_Lake_LogEntry_ofSerialMessage(v___x_303_);
v___x_305_ = lean_array_push(v___y_279_, v___x_304_);
v_a_282_ = v___x_305_;
goto v___jp_281_;
}
}
}
}
}
else
{
lean_dec_ref(v_toBaseMessage_284_);
lean_dec_ref(v_relLeanFile_277_);
lean_dec_ref(v_a_275_);
v_a_282_ = v___y_279_;
goto v___jp_281_;
}
v___jp_281_:
{
lean_object* v___x_283_; 
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v_b_276_);
lean_ctor_set(v___x_283_, 1, v_a_282_);
return v___x_283_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0___boxed(lean_object* v_a_312_, lean_object* v_b_313_, lean_object* v_relLeanFile_314_, lean_object* v_____r_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(v_a_312_, v_b_313_, v_relLeanFile_314_, v_____r_315_, v___y_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(lean_object* v_relLeanFile_321_, lean_object* v___x_322_, lean_object* v___x_323_, lean_object* v___x_324_, lean_object* v_a_325_, lean_object* v_b_326_, lean_object* v___y_327_){
_start:
{
lean_object* v___y_330_; lean_object* v___y_331_; uint8_t v___y_332_; lean_object* v___y_339_; lean_object* v___y_340_; lean_object* v___y_347_; lean_object* v___y_348_; lean_object* v_it_353_; lean_object* v_startInclusive_354_; lean_object* v_endExclusive_355_; 
if (lean_obj_tag(v_a_325_) == 0)
{
lean_object* v_currPos_373_; lean_object* v_searcher_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_400_; 
v_currPos_373_ = lean_ctor_get(v_a_325_, 0);
v_searcher_374_ = lean_ctor_get(v_a_325_, 1);
v_isSharedCheck_400_ = !lean_is_exclusive(v_a_325_);
if (v_isSharedCheck_400_ == 0)
{
v___x_376_ = v_a_325_;
v_isShared_377_ = v_isSharedCheck_400_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_searcher_374_);
lean_inc(v_currPos_373_);
lean_dec(v_a_325_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_400_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v_startInclusive_378_; lean_object* v_endExclusive_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v_startInclusive_378_ = lean_ctor_get(v___x_323_, 1);
v_endExclusive_379_ = lean_ctor_get(v___x_323_, 2);
v___x_380_ = lean_nat_sub(v_endExclusive_379_, v_startInclusive_378_);
v___x_381_ = lean_nat_dec_eq(v_searcher_374_, v___x_380_);
lean_dec(v___x_380_);
if (v___x_381_ == 0)
{
uint32_t v___x_382_; uint32_t v___x_383_; uint8_t v___x_384_; 
v___x_382_ = 10;
v___x_383_ = lean_string_utf8_get_fast(v___x_322_, v_searcher_374_);
v___x_384_ = lean_uint32_dec_eq(v___x_383_, v___x_382_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_387_; 
v___x_385_ = lean_string_utf8_next_fast(v___x_322_, v_searcher_374_);
lean_dec(v_searcher_374_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 1, v___x_385_);
v___x_387_ = v___x_376_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_currPos_373_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_385_);
v___x_387_ = v_reuseFailAlloc_389_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
v_a_325_ = v___x_387_;
goto _start;
}
}
else
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_slice_393_; lean_object* v_nextIt_395_; 
v___x_390_ = lean_string_utf8_next_fast(v___x_322_, v_searcher_374_);
v___x_391_ = lean_nat_sub(v___x_390_, v_searcher_374_);
v___x_392_ = lean_nat_add(v_searcher_374_, v___x_391_);
lean_dec(v___x_391_);
v_slice_393_ = l_String_Slice_subslice_x21(v___x_323_, v_currPos_373_, v_searcher_374_);
lean_inc(v___x_392_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 1, v___x_392_);
lean_ctor_set(v___x_376_, 0, v___x_392_);
v_nextIt_395_ = v___x_376_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_392_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v___x_392_);
v_nextIt_395_ = v_reuseFailAlloc_398_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v_startInclusive_396_; lean_object* v_endExclusive_397_; 
v_startInclusive_396_ = lean_ctor_get(v_slice_393_, 0);
lean_inc(v_startInclusive_396_);
v_endExclusive_397_ = lean_ctor_get(v_slice_393_, 1);
lean_inc(v_endExclusive_397_);
lean_dec_ref(v_slice_393_);
v_it_353_ = v_nextIt_395_;
v_startInclusive_354_ = v_startInclusive_396_;
v_endExclusive_355_ = v_endExclusive_397_;
goto v___jp_352_;
}
}
}
else
{
lean_object* v___x_399_; 
lean_del_object(v___x_376_);
lean_dec(v_searcher_374_);
v___x_399_ = lean_box(1);
lean_inc(v___x_324_);
v_it_353_ = v___x_399_;
v_startInclusive_354_ = v_currPos_373_;
v_endExclusive_355_ = v___x_324_;
goto v___jp_352_;
}
}
}
else
{
lean_object* v___x_401_; 
lean_dec(v___x_324_);
lean_dec_ref(v_relLeanFile_321_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v_b_326_);
lean_ctor_set(v___x_401_, 1, v___y_327_);
return v___x_401_;
}
v___jp_329_:
{
if (v___y_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = lean_string_append(v_b_326_, v___y_330_);
lean_dec_ref(v___y_330_);
v___x_334_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__0));
v___x_335_ = lean_string_append(v___x_333_, v___x_334_);
v_a_325_ = v___y_331_;
v_b_326_ = v___x_335_;
goto _start;
}
else
{
lean_dec_ref(v___y_330_);
v_a_325_ = v___y_331_;
goto _start;
}
}
v___jp_338_:
{
lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_341_ = lean_string_utf8_byte_size(v_b_326_);
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = lean_nat_dec_eq(v___x_341_, v___x_342_);
if (v___x_343_ == 0)
{
v___y_330_ = v___y_339_;
v___y_331_ = v___y_340_;
v___y_332_ = v___x_343_;
goto v___jp_329_;
}
else
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_string_utf8_byte_size(v___y_339_);
v___x_345_ = lean_nat_dec_eq(v___x_344_, v___x_342_);
v___y_330_ = v___y_339_;
v___y_331_ = v___y_340_;
v___y_332_ = v___x_345_;
goto v___jp_329_;
}
}
v___jp_346_:
{
if (lean_obj_tag(v___y_348_) == 0)
{
lean_object* v_a_349_; lean_object* v_a_350_; 
v_a_349_ = lean_ctor_get(v___y_348_, 0);
lean_inc(v_a_349_);
v_a_350_ = lean_ctor_get(v___y_348_, 1);
lean_inc(v_a_350_);
lean_dec_ref_known(v___y_348_, 2);
v_a_325_ = v___y_347_;
v_b_326_ = v_a_349_;
v___y_327_ = v_a_350_;
goto _start;
}
else
{
lean_dec(v___y_347_);
lean_dec(v___x_324_);
lean_dec_ref(v_relLeanFile_321_);
return v___y_348_;
}
}
v___jp_352_:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_string_utf8_extract(v___x_322_, v_startInclusive_354_, v_endExclusive_355_);
lean_dec(v_endExclusive_355_);
lean_dec(v_startInclusive_354_);
lean_inc_ref(v___x_356_);
v___x_357_ = l_Lean_Json_parse(v___x_356_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_dec_ref_known(v___x_357_, 1);
v___y_339_ = v___x_356_;
v___y_340_ = v_it_353_;
goto v___jp_338_;
}
else
{
lean_object* v_a_358_; lean_object* v___x_359_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
lean_inc(v_a_358_);
lean_dec_ref_known(v___x_357_, 1);
v___x_359_ = l_Lean_instFromJsonSerialMessage_fromJson(v_a_358_);
if (lean_obj_tag(v___x_359_) == 1)
{
lean_object* v_a_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
lean_dec_ref(v___x_356_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_360_);
lean_dec_ref_known(v___x_359_, 1);
v___x_361_ = lean_string_utf8_byte_size(v_b_326_);
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_nat_dec_eq(v___x_361_, v___x_362_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; lean_object* v___x_365_; uint8_t v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_364_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1));
v___x_365_ = lean_string_append(v___x_364_, v_b_326_);
v___x_366_ = 1;
v___x_367_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*1, v___x_366_);
v___x_368_ = lean_box(0);
v___x_369_ = lean_array_push(v___y_327_, v___x_367_);
lean_inc_ref(v_relLeanFile_321_);
v___x_370_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(v_a_360_, v_b_326_, v_relLeanFile_321_, v___x_368_, v___x_369_);
v___y_347_ = v_it_353_;
v___y_348_ = v___x_370_;
goto v___jp_346_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_box(0);
lean_inc_ref(v_relLeanFile_321_);
v___x_372_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(v_a_360_, v_b_326_, v_relLeanFile_321_, v___x_371_, v___y_327_);
v___y_347_ = v_it_353_;
v___y_348_ = v___x_372_;
goto v___jp_346_;
}
}
else
{
lean_dec_ref(v___x_359_);
v___y_339_ = v___x_356_;
v___y_340_ = v_it_353_;
goto v___jp_338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object* v_relLeanFile_402_, lean_object* v___x_403_, lean_object* v___x_404_, lean_object* v___x_405_, lean_object* v_a_406_, lean_object* v_b_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(v_relLeanFile_402_, v___x_403_, v___x_404_, v___x_405_, v_a_406_, v_b_407_, v___y_408_);
lean_dec_ref(v___x_404_);
lean_dec_ref(v___x_403_);
return v_res_410_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__1(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_412_ = ((lean_object*)(l_Lake_compileLeanModule___closed__0));
v___x_413_ = lean_unsigned_to_nat(2u);
v___x_414_ = lean_mk_empty_array_with_capacity(v___x_413_);
v___x_415_ = lean_array_push(v___x_414_, v___x_412_);
return v___x_415_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__9(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_424_ = ((lean_object*)(l_Lake_compileLeanModule___closed__8));
v___x_425_ = lean_unsigned_to_nat(2u);
v___x_426_ = lean_mk_empty_array_with_capacity(v___x_425_);
v___x_427_ = lean_array_push(v___x_426_, v___x_424_);
return v___x_427_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__11(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_429_ = ((lean_object*)(l_Lake_compileLeanModule___closed__10));
v___x_430_ = lean_unsigned_to_nat(2u);
v___x_431_ = lean_mk_empty_array_with_capacity(v___x_430_);
v___x_432_ = lean_array_push(v___x_431_, v___x_429_);
return v___x_432_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__13(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_434_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_435_ = lean_unsigned_to_nat(2u);
v___x_436_ = lean_mk_empty_array_with_capacity(v___x_435_);
v___x_437_ = lean_array_push(v___x_436_, v___x_434_);
return v___x_437_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__15(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_439_ = ((lean_object*)(l_Lake_compileLeanModule___closed__14));
v___x_440_ = lean_unsigned_to_nat(2u);
v___x_441_ = lean_mk_empty_array_with_capacity(v___x_440_);
v___x_442_ = lean_array_push(v___x_441_, v___x_439_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object* v_leanFile_443_, lean_object* v_relLeanFile_444_, lean_object* v_setup_445_, lean_object* v_setupFile_446_, lean_object* v_arts_447_, lean_object* v_leanArgs_448_, lean_object* v_leanPath_449_, lean_object* v_lean_450_, lean_object* v_leanir_451_, lean_object* v_a_452_){
_start:
{
lean_object* v___y_455_; lean_object* v_a_456_; lean_object* v___y_459_; lean_object* v___y_460_; lean_object* v_olean_x3f_462_; lean_object* v_ilean_x3f_463_; lean_object* v_ir_x3f_464_; lean_object* v_c_x3f_465_; lean_object* v_bc_x3f_466_; uint8_t v___y_468_; lean_object* v_args_469_; lean_object* v___y_470_; uint8_t v___y_558_; lean_object* v___y_559_; lean_object* v_args_560_; lean_object* v___y_574_; lean_object* v___y_575_; uint8_t v___y_576_; lean_object* v_args_590_; lean_object* v___y_591_; lean_object* v_args_598_; lean_object* v___y_599_; lean_object* v_args_612_; 
v_olean_x3f_462_ = lean_ctor_get(v_arts_447_, 1);
lean_inc(v_olean_x3f_462_);
v_ilean_x3f_463_ = lean_ctor_get(v_arts_447_, 4);
lean_inc(v_ilean_x3f_463_);
v_ir_x3f_464_ = lean_ctor_get(v_arts_447_, 6);
lean_inc(v_ir_x3f_464_);
v_c_x3f_465_ = lean_ctor_get(v_arts_447_, 7);
lean_inc(v_c_x3f_465_);
v_bc_x3f_466_ = lean_ctor_get(v_arts_447_, 8);
lean_inc(v_bc_x3f_466_);
lean_dec_ref(v_arts_447_);
v_args_612_ = lean_array_push(v_leanArgs_448_, v_leanFile_443_);
if (lean_obj_tag(v_olean_x3f_462_) == 1)
{
lean_object* v_val_613_; lean_object* v___x_614_; 
v_val_613_ = lean_ctor_get(v_olean_x3f_462_, 0);
lean_inc(v_val_613_);
v___x_614_ = l_Lake_createParentDirs(v_val_613_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec_ref_known(v___x_614_, 1);
v___x_615_ = lean_obj_once(&l_Lake_compileLeanModule___closed__15, &l_Lake_compileLeanModule___closed__15_once, _init_l_Lake_compileLeanModule___closed__15);
lean_inc(v_val_613_);
v___x_616_ = lean_array_push(v___x_615_, v_val_613_);
v___x_617_ = l_Array_append___redArg(v_args_612_, v___x_616_);
lean_dec_ref(v___x_616_);
v_args_598_ = v___x_617_;
v___y_599_ = v_a_452_;
goto v___jp_597_;
}
else
{
lean_object* v_a_618_; lean_object* v___x_619_; uint8_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec_ref_known(v_olean_x3f_462_, 1);
lean_dec_ref(v_args_612_);
lean_dec(v_bc_x3f_466_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_ilean_x3f_463_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_lean_450_);
lean_dec(v_leanPath_449_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_setup_445_);
lean_dec_ref(v_relLeanFile_444_);
v_a_618_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_614_, 1);
v___x_619_ = lean_io_error_to_string(v_a_618_);
v___x_620_ = 3;
v___x_621_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_621_, 0, v___x_619_);
lean_ctor_set_uint8(v___x_621_, sizeof(void*)*1, v___x_620_);
v___x_622_ = lean_array_get_size(v_a_452_);
v___x_623_ = lean_array_push(v_a_452_, v___x_621_);
v___x_624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
return v___x_624_;
}
}
else
{
v_args_598_ = v_args_612_;
v___y_599_ = v_a_452_;
goto v___jp_597_;
}
v___jp_454_:
{
lean_object* v___x_457_; 
v___x_457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_457_, 0, v___y_455_);
lean_ctor_set(v___x_457_, 1, v_a_456_);
return v___x_457_;
}
v___jp_458_:
{
if (lean_obj_tag(v___y_460_) == 0)
{
lean_dec(v___y_459_);
return v___y_460_;
}
else
{
lean_object* v_a_461_; 
v_a_461_ = lean_ctor_get(v___y_460_, 1);
lean_inc(v_a_461_);
lean_dec_ref_known(v___y_460_, 2);
v___y_455_ = v___y_459_;
v_a_456_ = v_a_461_;
goto v___jp_454_;
}
}
v___jp_467_:
{
lean_object* v___x_471_; 
lean_inc_ref(v_setupFile_446_);
v___x_471_ = l_Lake_createParentDirs(v_setupFile_446_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec_ref_known(v___x_471_, 1);
v___x_472_ = l_Lean_instToJsonModuleSetup_toJson(v_setup_445_);
v___x_473_ = lean_unsigned_to_nat(80u);
v___x_474_ = l_Lean_Json_pretty(v___x_472_, v___x_473_);
v___x_475_ = l_IO_FS_writeFile(v_setupFile_446_, v___x_474_);
lean_dec_ref(v___x_474_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_541_; 
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_541_ == 0)
{
lean_object* v_unused_542_; 
v_unused_542_ = lean_ctor_get(v___x_475_, 0);
lean_dec(v_unused_542_);
v___x_477_ = v___x_475_;
v_isShared_478_ = v_isSharedCheck_541_;
goto v_resetjp_476_;
}
else
{
lean_dec(v___x_475_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_541_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v___x_479_ = lean_obj_once(&l_Lake_compileLeanModule___closed__1, &l_Lake_compileLeanModule___closed__1_once, _init_l_Lake_compileLeanModule___closed__1);
lean_inc_ref(v_setupFile_446_);
v___x_480_ = lean_array_push(v___x_479_, v_setupFile_446_);
v___x_481_ = l_Array_append___redArg(v_args_469_, v___x_480_);
lean_dec_ref(v___x_480_);
v___x_482_ = ((lean_object*)(l_Lake_compileLeanModule___closed__2));
v___x_483_ = lean_array_push(v___x_481_, v___x_482_);
v___x_484_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_485_ = lean_box(0);
v___x_486_ = ((lean_object*)(l_Lake_compileLeanModule___closed__4));
v___x_487_ = l_System_SearchPath_toString(v_leanPath_449_);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 1);
lean_ctor_set(v___x_477_, 0, v___x_487_);
v___x_489_ = v___x_477_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_487_);
v___x_489_ = v_reuseFailAlloc_540_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_490_, 0, v___x_486_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = lean_unsigned_to_nat(1u);
v___x_492_ = lean_mk_empty_array_with_capacity(v___x_491_);
v___x_493_ = lean_array_push(v___x_492_, v___x_490_);
v___x_494_ = 1;
v___x_495_ = 0;
lean_inc_ref(v___x_493_);
lean_inc_ref(v_lean_450_);
v___x_496_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_496_, 0, v___x_484_);
lean_ctor_set(v___x_496_, 1, v_lean_450_);
lean_ctor_set(v___x_496_, 2, v___x_483_);
lean_ctor_set(v___x_496_, 3, v___x_485_);
lean_ctor_set(v___x_496_, 4, v___x_493_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*5, v___x_494_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*5 + 1, v___x_495_);
v___x_497_ = lean_array_get_size(v___y_470_);
lean_inc_ref(v___x_496_);
v___x_498_ = l_Lake_mkCmdLog(v___x_496_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = lean_array_push(v___y_470_, v___x_500_);
v___x_502_ = l_IO_Process_output(v___x_496_, v___x_485_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; uint32_t v_exitCode_504_; lean_object* v_stdout_505_; lean_object* v_stderr_506_; lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; 
lean_dec_ref(v_lean_450_);
v_a_503_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_503_);
lean_dec_ref_known(v___x_502_, 1);
v_exitCode_504_ = lean_ctor_get_uint32(v_a_503_, sizeof(void*)*2);
v_stdout_505_ = lean_ctor_get(v_a_503_, 0);
lean_inc_ref(v_stdout_505_);
v_stderr_506_ = lean_ctor_get(v_a_503_, 1);
lean_inc_ref(v_stderr_506_);
lean_dec(v_a_503_);
v___x_507_ = lean_string_utf8_byte_size(v_stdout_505_);
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = lean_nat_dec_eq(v___x_507_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_inc_ref(v_stdout_505_);
v___x_510_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_510_, 0, v_stdout_505_);
lean_ctor_set(v___x_510_, 1, v___x_508_);
lean_ctor_set(v___x_510_, 2, v___x_507_);
v___x_511_ = ((lean_object*)(l_Lake_compileLeanModule___closed__5));
v___x_512_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(v___x_510_);
v___x_513_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(v_relLeanFile_444_, v_stdout_505_, v___x_510_, v___x_507_, v___x_512_, v___x_511_, v___x_501_);
lean_dec_ref_known(v___x_510_, 3);
lean_dec_ref(v_stdout_505_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v_a_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
v_a_515_ = lean_ctor_get(v___x_513_, 1);
lean_inc(v_a_515_);
lean_dec_ref_known(v___x_513_, 2);
v___x_516_ = lean_string_utf8_byte_size(v_a_514_);
v___x_517_ = lean_nat_dec_eq(v___x_516_, v___x_508_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_518_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1));
v___x_519_ = lean_string_append(v___x_518_, v_a_514_);
lean_dec(v_a_514_);
v___x_520_ = 1;
v___x_521_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*1, v___x_520_);
v___x_522_ = lean_box(0);
v___x_523_ = lean_array_push(v_a_515_, v___x_521_);
v___x_524_ = l_Lake_compileLeanModule___lam__0(v_exitCode_504_, v___y_468_, v_ir_x3f_464_, v_c_x3f_465_, v_setupFile_446_, v___x_484_, v_leanir_451_, v___x_485_, v___x_493_, v___x_494_, v___x_495_, v_olean_x3f_462_, v_stderr_506_, v___x_522_, v___x_523_);
lean_dec(v_olean_x3f_462_);
v___y_459_ = v___x_497_;
v___y_460_ = v___x_524_;
goto v___jp_458_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec(v_a_514_);
v___x_525_ = lean_box(0);
v___x_526_ = l_Lake_compileLeanModule___lam__0(v_exitCode_504_, v___y_468_, v_ir_x3f_464_, v_c_x3f_465_, v_setupFile_446_, v___x_484_, v_leanir_451_, v___x_485_, v___x_493_, v___x_494_, v___x_495_, v_olean_x3f_462_, v_stderr_506_, v___x_525_, v_a_515_);
lean_dec(v_olean_x3f_462_);
v___y_459_ = v___x_497_;
v___y_460_ = v___x_526_;
goto v___jp_458_;
}
}
else
{
lean_object* v_a_527_; 
lean_dec_ref(v_stderr_506_);
lean_dec_ref(v___x_493_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_setupFile_446_);
v_a_527_ = lean_ctor_get(v___x_513_, 1);
lean_inc(v_a_527_);
lean_dec_ref_known(v___x_513_, 2);
v___y_455_ = v___x_497_;
v_a_456_ = v_a_527_;
goto v___jp_454_;
}
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v_stdout_505_);
lean_dec_ref(v_relLeanFile_444_);
v___x_528_ = lean_box(0);
v___x_529_ = l_Lake_compileLeanModule___lam__0(v_exitCode_504_, v___y_468_, v_ir_x3f_464_, v_c_x3f_465_, v_setupFile_446_, v___x_484_, v_leanir_451_, v___x_485_, v___x_493_, v___x_494_, v___x_495_, v_olean_x3f_462_, v_stderr_506_, v___x_528_, v___x_501_);
lean_dec(v_olean_x3f_462_);
v___y_459_ = v___x_497_;
v___y_460_ = v___x_529_;
goto v___jp_458_;
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
lean_dec_ref(v___x_493_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_relLeanFile_444_);
v_a_530_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_502_, 1);
v___x_531_ = ((lean_object*)(l_Lake_compileLeanModule___closed__6));
v___x_532_ = lean_string_append(v___x_531_, v_lean_450_);
lean_dec_ref(v_lean_450_);
v___x_533_ = ((lean_object*)(l_Lake_compileLeanModule___closed__7));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = lean_io_error_to_string(v_a_530_);
v___x_536_ = lean_string_append(v___x_534_, v___x_535_);
lean_dec_ref(v___x_535_);
v___x_537_ = 3;
v___x_538_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set_uint8(v___x_538_, sizeof(void*)*1, v___x_537_);
v___x_539_ = lean_array_push(v___x_501_, v___x_538_);
v___y_455_ = v___x_497_;
v_a_456_ = v___x_539_;
goto v___jp_454_;
}
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_544_; uint8_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
lean_dec_ref(v_args_469_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_lean_450_);
lean_dec(v_leanPath_449_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_relLeanFile_444_);
v_a_543_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_543_);
lean_dec_ref_known(v___x_475_, 1);
v___x_544_ = lean_io_error_to_string(v_a_543_);
v___x_545_ = 3;
v___x_546_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_546_, 0, v___x_544_);
lean_ctor_set_uint8(v___x_546_, sizeof(void*)*1, v___x_545_);
v___x_547_ = lean_array_get_size(v___y_470_);
v___x_548_ = lean_array_push(v___y_470_, v___x_546_);
v___x_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
return v___x_549_;
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_551_; uint8_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec_ref(v_args_469_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_lean_450_);
lean_dec(v_leanPath_449_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_setup_445_);
lean_dec_ref(v_relLeanFile_444_);
v_a_550_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_471_, 1);
v___x_551_ = lean_io_error_to_string(v_a_550_);
v___x_552_ = 3;
v___x_553_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_553_, 0, v___x_551_);
lean_ctor_set_uint8(v___x_553_, sizeof(void*)*1, v___x_552_);
v___x_554_ = lean_array_get_size(v___y_470_);
v___x_555_ = lean_array_push(v___y_470_, v___x_553_);
v___x_556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_556_, 0, v___x_554_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
return v___x_556_;
}
}
v___jp_557_:
{
if (lean_obj_tag(v_bc_x3f_466_) == 1)
{
lean_object* v_val_561_; lean_object* v___x_562_; 
v_val_561_ = lean_ctor_get(v_bc_x3f_466_, 0);
lean_inc_n(v_val_561_, 2);
lean_dec_ref_known(v_bc_x3f_466_, 1);
v___x_562_ = l_Lake_createParentDirs(v_val_561_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec_ref_known(v___x_562_, 1);
v___x_563_ = lean_obj_once(&l_Lake_compileLeanModule___closed__9, &l_Lake_compileLeanModule___closed__9_once, _init_l_Lake_compileLeanModule___closed__9);
v___x_564_ = lean_array_push(v___x_563_, v_val_561_);
v___x_565_ = l_Array_append___redArg(v_args_560_, v___x_564_);
lean_dec_ref(v___x_564_);
v___y_468_ = v___y_558_;
v_args_469_ = v___x_565_;
v___y_470_ = v___y_559_;
goto v___jp_467_;
}
else
{
lean_object* v_a_566_; lean_object* v___x_567_; uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
lean_dec(v_val_561_);
lean_dec_ref(v_args_560_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_lean_450_);
lean_dec(v_leanPath_449_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_setup_445_);
lean_dec_ref(v_relLeanFile_444_);
v_a_566_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_562_, 1);
v___x_567_ = lean_io_error_to_string(v_a_566_);
v___x_568_ = 3;
v___x_569_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_569_, 0, v___x_567_);
lean_ctor_set_uint8(v___x_569_, sizeof(void*)*1, v___x_568_);
v___x_570_ = lean_array_get_size(v___y_559_);
v___x_571_ = lean_array_push(v___y_559_, v___x_569_);
v___x_572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
return v___x_572_;
}
}
else
{
lean_dec(v_bc_x3f_466_);
v___y_468_ = v___y_558_;
v_args_469_ = v_args_560_;
v___y_470_ = v___y_559_;
goto v___jp_467_;
}
}
v___jp_573_:
{
if (lean_obj_tag(v_c_x3f_465_) == 1)
{
lean_object* v_val_577_; lean_object* v___x_578_; 
v_val_577_ = lean_ctor_get(v_c_x3f_465_, 0);
lean_inc(v_val_577_);
v___x_578_ = l_Lake_createParentDirs(v_val_577_);
if (lean_obj_tag(v___x_578_) == 0)
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
lean_dec_ref_known(v___x_578_, 1);
v___x_579_ = lean_obj_once(&l_Lake_compileLeanModule___closed__11, &l_Lake_compileLeanModule___closed__11_once, _init_l_Lake_compileLeanModule___closed__11);
lean_inc(v_val_577_);
v___x_580_ = lean_array_push(v___x_579_, v_val_577_);
v___x_581_ = l_Array_append___redArg(v___y_575_, v___x_580_);
lean_dec_ref(v___x_580_);
v___y_558_ = v___y_576_;
v___y_559_ = v___y_574_;
v_args_560_ = v___x_581_;
goto v___jp_557_;
}
else
{
lean_object* v_a_582_; lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec_ref_known(v_c_x3f_465_, 1);
lean_dec_ref(v___y_575_);
lean_dec(v_bc_x3f_466_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_lean_450_);
lean_dec(v_leanPath_449_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_setup_445_);
lean_dec_ref(v_relLeanFile_444_);
v_a_582_ = lean_ctor_get(v___x_578_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_578_, 1);
v___x_583_ = lean_io_error_to_string(v_a_582_);
v___x_584_ = 3;
v___x_585_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set_uint8(v___x_585_, sizeof(void*)*1, v___x_584_);
v___x_586_ = lean_array_get_size(v___y_574_);
v___x_587_ = lean_array_push(v___y_574_, v___x_585_);
v___x_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
return v___x_588_;
}
}
else
{
v___y_558_ = v___y_576_;
v___y_559_ = v___y_574_;
v_args_560_ = v___y_575_;
goto v___jp_557_;
}
}
v___jp_589_:
{
uint8_t v_isModule_592_; 
v_isModule_592_ = lean_ctor_get_uint8(v_setup_445_, sizeof(void*)*7);
if (v_isModule_592_ == 0)
{
v___y_574_ = v___y_591_;
v___y_575_ = v_args_590_;
v___y_576_ = v_isModule_592_;
goto v___jp_573_;
}
else
{
lean_object* v_options_593_; lean_object* v_opts_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_options_593_ = lean_ctor_get(v_setup_445_, 6);
lean_inc(v_options_593_);
v_opts_594_ = l_Lean_LeanOptions_toOptions(v_options_593_);
v___x_595_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_596_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(v_opts_594_, v___x_595_);
lean_dec_ref(v_opts_594_);
if (v___x_596_ == 0)
{
v___y_574_ = v___y_591_;
v___y_575_ = v_args_590_;
v___y_576_ = v___x_596_;
goto v___jp_573_;
}
else
{
v___y_558_ = v___x_596_;
v___y_559_ = v___y_591_;
v_args_560_ = v_args_590_;
goto v___jp_557_;
}
}
}
v___jp_597_:
{
if (lean_obj_tag(v_ilean_x3f_463_) == 1)
{
lean_object* v_val_600_; lean_object* v___x_601_; 
v_val_600_ = lean_ctor_get(v_ilean_x3f_463_, 0);
lean_inc_n(v_val_600_, 2);
lean_dec_ref_known(v_ilean_x3f_463_, 1);
v___x_601_ = l_Lake_createParentDirs(v_val_600_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec_ref_known(v___x_601_, 1);
v___x_602_ = lean_obj_once(&l_Lake_compileLeanModule___closed__13, &l_Lake_compileLeanModule___closed__13_once, _init_l_Lake_compileLeanModule___closed__13);
v___x_603_ = lean_array_push(v___x_602_, v_val_600_);
v___x_604_ = l_Array_append___redArg(v_args_598_, v___x_603_);
lean_dec_ref(v___x_603_);
v_args_590_ = v___x_604_;
v___y_591_ = v___y_599_;
goto v___jp_589_;
}
else
{
lean_object* v_a_605_; lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec(v_val_600_);
lean_dec_ref(v_args_598_);
lean_dec(v_bc_x3f_466_);
lean_dec(v_c_x3f_465_);
lean_dec(v_ir_x3f_464_);
lean_dec(v_olean_x3f_462_);
lean_dec_ref(v_leanir_451_);
lean_dec_ref(v_lean_450_);
lean_dec(v_leanPath_449_);
lean_dec_ref(v_setupFile_446_);
lean_dec_ref(v_setup_445_);
lean_dec_ref(v_relLeanFile_444_);
v_a_605_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_601_, 1);
v___x_606_ = lean_io_error_to_string(v_a_605_);
v___x_607_ = 3;
v___x_608_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set_uint8(v___x_608_, sizeof(void*)*1, v___x_607_);
v___x_609_ = lean_array_get_size(v___y_599_);
v___x_610_ = lean_array_push(v___y_599_, v___x_608_);
v___x_611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
return v___x_611_;
}
}
else
{
lean_dec(v_ilean_x3f_463_);
v_args_590_ = v_args_598_;
v___y_591_ = v___y_599_;
goto v___jp_589_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object* v_leanFile_625_, lean_object* v_relLeanFile_626_, lean_object* v_setup_627_, lean_object* v_setupFile_628_, lean_object* v_arts_629_, lean_object* v_leanArgs_630_, lean_object* v_leanPath_631_, lean_object* v_lean_632_, lean_object* v_leanir_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l_Lake_compileLeanModule(v_leanFile_625_, v_relLeanFile_626_, v_setup_627_, v_setupFile_628_, v_arts_629_, v_leanArgs_630_, v_leanPath_631_, v_lean_632_, v_leanir_633_, v_a_634_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1(lean_object* v_relLeanFile_637_, lean_object* v___x_638_, lean_object* v___x_639_, lean_object* v___x_640_, lean_object* v_inst_641_, lean_object* v_R_642_, lean_object* v_a_643_, lean_object* v_b_644_, lean_object* v_c_645_, lean_object* v___y_646_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(v_relLeanFile_637_, v___x_638_, v___x_639_, v___x_640_, v_a_643_, v_b_644_, v___y_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___boxed(lean_object* v_relLeanFile_649_, lean_object* v___x_650_, lean_object* v___x_651_, lean_object* v___x_652_, lean_object* v_inst_653_, lean_object* v_R_654_, lean_object* v_a_655_, lean_object* v_b_656_, lean_object* v_c_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1(v_relLeanFile_649_, v___x_650_, v___x_651_, v___x_652_, v_inst_653_, v_R_654_, v_a_655_, v_b_656_, v_c_657_, v___y_658_);
lean_dec_ref(v___x_651_);
lean_dec_ref(v___x_650_);
return v_res_660_;
}
}
static lean_object* _init_l_Lake_compileO___closed__0(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_661_ = ((lean_object*)(l_Lake_compileLeanModule___closed__10));
v___x_662_ = lean_unsigned_to_nat(4u);
v___x_663_ = lean_mk_empty_array_with_capacity(v___x_662_);
v___x_664_ = lean_array_push(v___x_663_, v___x_661_);
return v___x_664_;
}
}
static lean_object* _init_l_Lake_compileO___closed__1(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_665_ = ((lean_object*)(l_Lake_compileLeanModule___closed__14));
v___x_666_ = lean_obj_once(&l_Lake_compileO___closed__0, &l_Lake_compileO___closed__0_once, _init_l_Lake_compileO___closed__0);
v___x_667_ = lean_array_push(v___x_666_, v___x_665_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object* v_oFile_670_, lean_object* v_srcFile_671_, lean_object* v_moreArgs_672_, lean_object* v_compiler_673_, lean_object* v_a_674_){
_start:
{
lean_object* v___x_676_; 
lean_inc_ref(v_oFile_670_);
v___x_676_ = l_Lake_createParentDirs(v_oFile_670_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v___x_677_; lean_object* v_fst_678_; lean_object* v_snd_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec_ref_known(v___x_676_, 1);
v___x_677_ = l_Lake_splitCcCommand(v_compiler_673_);
v_fst_678_ = lean_ctor_get(v___x_677_, 0);
lean_inc(v_fst_678_);
v_snd_679_ = lean_ctor_get(v___x_677_, 1);
lean_inc(v_snd_679_);
lean_dec_ref(v___x_677_);
v___x_680_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_681_ = lean_obj_once(&l_Lake_compileO___closed__1, &l_Lake_compileO___closed__1_once, _init_l_Lake_compileO___closed__1);
v___x_682_ = lean_array_push(v___x_681_, v_oFile_670_);
v___x_683_ = lean_array_push(v___x_682_, v_srcFile_671_);
v___x_684_ = l_Array_append___redArg(v_snd_679_, v___x_683_);
lean_dec_ref(v___x_683_);
v___x_685_ = l_Array_append___redArg(v___x_684_, v_moreArgs_672_);
v___x_686_ = lean_box(0);
v___x_687_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_688_ = 1;
v___x_689_ = 0;
v___x_690_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_690_, 0, v___x_680_);
lean_ctor_set(v___x_690_, 1, v_fst_678_);
lean_ctor_set(v___x_690_, 2, v___x_685_);
lean_ctor_set(v___x_690_, 3, v___x_686_);
lean_ctor_set(v___x_690_, 4, v___x_687_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*5, v___x_688_);
lean_ctor_set_uint8(v___x_690_, sizeof(void*)*5 + 1, v___x_689_);
v___x_691_ = l_Lake_proc(v___x_690_, v___x_689_, v_a_674_);
return v___x_691_;
}
else
{
lean_object* v_a_692_; lean_object* v___x_693_; uint8_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec_ref(v_compiler_673_);
lean_dec_ref(v_srcFile_671_);
lean_dec_ref(v_oFile_670_);
v_a_692_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_692_);
lean_dec_ref_known(v___x_676_, 1);
v___x_693_ = lean_io_error_to_string(v_a_692_);
v___x_694_ = 3;
v___x_695_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set_uint8(v___x_695_, sizeof(void*)*1, v___x_694_);
v___x_696_ = lean_array_get_size(v_a_674_);
v___x_697_ = lean_array_push(v_a_674_, v___x_695_);
v___x_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_698_, 0, v___x_696_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object* v_oFile_699_, lean_object* v_srcFile_700_, lean_object* v_moreArgs_701_, lean_object* v_compiler_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lake_compileO(v_oFile_699_, v_srcFile_700_, v_moreArgs_701_, v_compiler_702_, v_a_703_);
lean_dec_ref(v_moreArgs_701_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object* v___x_706_, lean_object* v___y_707_, lean_object* v_a_708_, lean_object* v_b_709_){
_start:
{
lean_object* v_startInclusive_710_; lean_object* v_endExclusive_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_startInclusive_710_ = lean_ctor_get(v___x_706_, 1);
v_endExclusive_711_ = lean_ctor_get(v___x_706_, 2);
v___x_712_ = lean_nat_sub(v_endExclusive_711_, v_startInclusive_710_);
v___x_713_ = lean_nat_dec_eq(v_a_708_, v___x_712_);
lean_dec(v___x_712_);
if (v___x_713_ == 0)
{
uint32_t v___x_714_; lean_object* v___x_715_; uint32_t v___x_716_; uint8_t v___y_718_; uint8_t v___x_724_; 
v___x_714_ = lean_string_utf8_get_fast(v___y_707_, v_a_708_);
v___x_715_ = lean_string_utf8_next_fast(v___y_707_, v_a_708_);
lean_dec(v_a_708_);
v___x_716_ = 92;
v___x_724_ = lean_uint32_dec_eq(v___x_714_, v___x_716_);
if (v___x_724_ == 0)
{
uint32_t v___x_725_; uint8_t v___x_726_; 
v___x_725_ = 34;
v___x_726_ = lean_uint32_dec_eq(v___x_714_, v___x_725_);
v___y_718_ = v___x_726_;
goto v___jp_717_;
}
else
{
v___y_718_ = v___x_724_;
goto v___jp_717_;
}
v___jp_717_:
{
if (v___y_718_ == 0)
{
lean_object* v___x_719_; 
v___x_719_ = lean_string_push(v_b_709_, v___x_714_);
v_a_708_ = v___x_715_;
v_b_709_ = v___x_719_;
goto _start;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_721_ = lean_string_push(v_b_709_, v___x_716_);
v___x_722_ = lean_string_push(v___x_721_, v___x_714_);
v_a_708_ = v___x_715_;
v_b_709_ = v___x_722_;
goto _start;
}
}
}
else
{
lean_dec(v_a_708_);
return v_b_709_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object* v___x_727_, lean_object* v___y_728_, lean_object* v_a_729_, lean_object* v_b_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_727_, v___y_728_, v_a_729_, v_b_730_);
lean_dec_ref(v___y_728_);
lean_dec_ref(v___x_727_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object* v_a_734_, lean_object* v_as_735_, size_t v_i_736_, size_t v_stop_737_, lean_object* v_b_738_, lean_object* v___y_739_){
_start:
{
uint8_t v___x_741_; 
v___x_741_ = lean_usize_dec_eq(v_i_736_, v_stop_737_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_742_ = lean_array_uget_borrowed(v_as_735_, v_i_736_);
v___x_743_ = ((lean_object*)(l_Lake_compileLeanModule___closed__5));
v___x_744_ = lean_unsigned_to_nat(0u);
v___x_745_ = lean_string_utf8_byte_size(v___x_742_);
lean_inc(v___x_742_);
v___x_746_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_746_, 0, v___x_742_);
lean_ctor_set(v___x_746_, 1, v___x_744_);
lean_ctor_set(v___x_746_, 2, v___x_745_);
v___x_747_ = l_String_Slice_positions(v___x_746_);
v___x_748_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_746_, v___x_742_, v___x_747_, v___x_743_);
lean_dec_ref_known(v___x_746_, 3);
v___x_749_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0));
v___x_750_ = lean_string_append(v___x_749_, v___x_748_);
lean_dec_ref(v___x_748_);
v___x_751_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1));
v___x_752_ = lean_string_append(v___x_750_, v___x_751_);
v___x_753_ = lean_io_prim_handle_put_str(v_a_734_, v___x_752_);
lean_dec_ref(v___x_752_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; size_t v___x_755_; size_t v___x_756_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_753_, 1);
v___x_755_ = ((size_t)1ULL);
v___x_756_ = lean_usize_add(v_i_736_, v___x_755_);
v_i_736_ = v___x_756_;
v_b_738_ = v_a_754_;
goto _start;
}
else
{
lean_object* v_a_758_; lean_object* v___x_759_; uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_a_758_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_758_);
lean_dec_ref_known(v___x_753_, 1);
v___x_759_ = lean_io_error_to_string(v_a_758_);
v___x_760_ = 3;
v___x_761_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_761_, 0, v___x_759_);
lean_ctor_set_uint8(v___x_761_, sizeof(void*)*1, v___x_760_);
v___x_762_ = lean_array_get_size(v___y_739_);
v___x_763_ = lean_array_push(v___y_739_, v___x_761_);
v___x_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
return v___x_764_;
}
}
else
{
lean_object* v___x_765_; 
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v_b_738_);
lean_ctor_set(v___x_765_, 1, v___y_739_);
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object* v_a_766_, lean_object* v_as_767_, lean_object* v_i_768_, lean_object* v_stop_769_, lean_object* v_b_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
size_t v_i_boxed_773_; size_t v_stop_boxed_774_; lean_object* v_res_775_; 
v_i_boxed_773_ = lean_unbox_usize(v_i_768_);
lean_dec(v_i_768_);
v_stop_boxed_774_ = lean_unbox_usize(v_stop_769_);
lean_dec(v_stop_769_);
v_res_775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_766_, v_as_767_, v_i_boxed_773_, v_stop_boxed_774_, v_b_770_, v___y_771_);
lean_dec_ref(v_as_767_);
lean_dec(v_a_766_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object* v_basePath_778_, lean_object* v_args_779_, lean_object* v_a_780_){
_start:
{
lean_object* v___x_782_; lean_object* v_rspFile_783_; lean_object* v_a_785_; lean_object* v___y_793_; uint8_t v___x_804_; lean_object* v___x_805_; 
v___x_782_ = ((lean_object*)(l_Lake_mkArgs___closed__0));
v_rspFile_783_ = l_System_FilePath_addExtension(v_basePath_778_, v___x_782_);
v___x_804_ = 1;
v___x_805_ = lean_io_prim_handle_mk(v_rspFile_783_, v___x_804_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_805_, 1);
v___x_807_ = lean_unsigned_to_nat(0u);
v___x_808_ = lean_array_get_size(v_args_779_);
v___x_809_ = lean_nat_dec_lt(v___x_807_, v___x_808_);
if (v___x_809_ == 0)
{
lean_dec(v_a_806_);
v_a_785_ = v_a_780_;
goto v___jp_784_;
}
else
{
lean_object* v___x_810_; uint8_t v___x_811_; 
v___x_810_ = lean_box(0);
v___x_811_ = lean_nat_dec_le(v___x_808_, v___x_808_);
if (v___x_811_ == 0)
{
if (v___x_809_ == 0)
{
lean_dec(v_a_806_);
v_a_785_ = v_a_780_;
goto v___jp_784_;
}
else
{
size_t v___x_812_; size_t v___x_813_; lean_object* v___x_814_; 
v___x_812_ = ((size_t)0ULL);
v___x_813_ = lean_usize_of_nat(v___x_808_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_806_, v_args_779_, v___x_812_, v___x_813_, v___x_810_, v_a_780_);
lean_dec(v_a_806_);
v___y_793_ = v___x_814_;
goto v___jp_792_;
}
}
else
{
size_t v___x_815_; size_t v___x_816_; lean_object* v___x_817_; 
v___x_815_ = ((size_t)0ULL);
v___x_816_ = lean_usize_of_nat(v___x_808_);
v___x_817_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_806_, v_args_779_, v___x_815_, v___x_816_, v___x_810_, v_a_780_);
lean_dec(v_a_806_);
v___y_793_ = v___x_817_;
goto v___jp_792_;
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
lean_dec_ref(v_rspFile_783_);
v_a_818_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_805_, 1);
v___x_819_ = lean_io_error_to_string(v_a_818_);
v___x_820_ = 3;
v___x_821_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_821_, 0, v___x_819_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*1, v___x_820_);
v___x_822_ = lean_array_get_size(v_a_780_);
v___x_823_ = lean_array_push(v_a_780_, v___x_821_);
v___x_824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_822_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
return v___x_824_;
}
v___jp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_786_ = ((lean_object*)(l_Lake_mkArgs___closed__1));
v___x_787_ = lean_string_append(v___x_786_, v_rspFile_783_);
lean_dec_ref(v_rspFile_783_);
v___x_788_ = lean_unsigned_to_nat(1u);
v___x_789_ = lean_mk_empty_array_with_capacity(v___x_788_);
v___x_790_ = lean_array_push(v___x_789_, v___x_787_);
v___x_791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
lean_ctor_set(v___x_791_, 1, v_a_785_);
return v___x_791_;
}
v___jp_792_:
{
if (lean_obj_tag(v___y_793_) == 0)
{
lean_object* v_a_794_; 
v_a_794_ = lean_ctor_get(v___y_793_, 1);
lean_inc(v_a_794_);
lean_dec_ref_known(v___y_793_, 2);
v_a_785_ = v_a_794_;
goto v___jp_784_;
}
else
{
lean_object* v_a_795_; lean_object* v_a_796_; lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_803_; 
lean_dec_ref(v_rspFile_783_);
v_a_795_ = lean_ctor_get(v___y_793_, 0);
v_a_796_ = lean_ctor_get(v___y_793_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v___y_793_);
if (v_isSharedCheck_803_ == 0)
{
v___x_798_ = v___y_793_;
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
else
{
lean_inc(v_a_796_);
lean_inc(v_a_795_);
lean_dec(v___y_793_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_803_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_a_795_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_a_796_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object* v_basePath_825_, lean_object* v_args_826_, lean_object* v_a_827_, lean_object* v_a_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lake_mkArgs(v_basePath_825_, v_args_826_, v_a_827_);
lean_dec_ref(v_args_826_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object* v___x_830_, lean_object* v___y_831_, lean_object* v_inst_832_, lean_object* v_R_833_, lean_object* v_a_834_, lean_object* v_b_835_, lean_object* v_c_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_830_, v___y_831_, v_a_834_, v_b_835_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object* v___x_838_, lean_object* v___y_839_, lean_object* v_inst_840_, lean_object* v_R_841_, lean_object* v_a_842_, lean_object* v_b_843_, lean_object* v_c_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(v___x_838_, v___y_839_, v_inst_840_, v_R_841_, v_a_842_, v_b_843_, v_c_844_);
lean_dec_ref(v___y_839_);
lean_dec_ref(v___x_838_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t v_sz_846_, size_t v_i_847_, lean_object* v_bs_848_){
_start:
{
uint8_t v___x_849_; 
v___x_849_ = lean_usize_dec_lt(v_i_847_, v_sz_846_);
if (v___x_849_ == 0)
{
return v_bs_848_;
}
else
{
lean_object* v_v_850_; lean_object* v___x_851_; lean_object* v_bs_x27_852_; size_t v___x_853_; size_t v___x_854_; lean_object* v___x_855_; 
v_v_850_ = lean_array_uget(v_bs_848_, v_i_847_);
v___x_851_ = lean_unsigned_to_nat(0u);
v_bs_x27_852_ = lean_array_uset(v_bs_848_, v_i_847_, v___x_851_);
v___x_853_ = ((size_t)1ULL);
v___x_854_ = lean_usize_add(v_i_847_, v___x_853_);
v___x_855_ = lean_array_uset(v_bs_x27_852_, v_i_847_, v_v_850_);
v_i_847_ = v___x_854_;
v_bs_848_ = v___x_855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object* v_sz_857_, lean_object* v_i_858_, lean_object* v_bs_859_){
_start:
{
size_t v_sz_boxed_860_; size_t v_i_boxed_861_; lean_object* v_res_862_; 
v_sz_boxed_860_ = lean_unbox_usize(v_sz_857_);
lean_dec(v_sz_857_);
v_i_boxed_861_ = lean_unbox_usize(v_i_858_);
lean_dec(v_i_858_);
v_res_862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_boxed_860_, v_i_boxed_861_, v_bs_859_);
return v_res_862_;
}
}
static lean_object* _init_l_Lake_compileStaticLib___closed__3(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_869_ = ((lean_object*)(l_Lake_compileStaticLib___closed__2));
v___x_870_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_871_ = lean_array_push(v___x_870_, v___x_869_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object* v_libFile_872_, lean_object* v_oFiles_873_, lean_object* v_ar_874_, uint8_t v_thin_875_, lean_object* v_a_876_){
_start:
{
lean_object* v___x_878_; 
lean_inc_ref(v_libFile_872_);
v___x_878_ = l_Lake_createParentDirs(v_libFile_872_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v___x_879_; 
lean_dec_ref_known(v___x_878_, 1);
v___x_879_ = l_Lake_removeFileIfExists(v_libFile_872_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v___x_880_; uint8_t v___x_881_; lean_object* v___y_883_; 
lean_dec_ref_known(v___x_879_, 1);
v___x_880_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_881_ = 1;
if (v_thin_875_ == 0)
{
v___y_883_ = v___x_880_;
goto v___jp_882_;
}
else
{
lean_object* v___x_907_; 
v___x_907_ = lean_obj_once(&l_Lake_compileStaticLib___closed__3, &l_Lake_compileStaticLib___closed__3_once, _init_l_Lake_compileStaticLib___closed__3);
v___y_883_ = v___x_907_;
goto v___jp_882_;
}
v___jp_882_:
{
size_t v_sz_884_; size_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_sz_884_ = lean_array_size(v_oFiles_873_);
v___x_885_ = ((size_t)0ULL);
v___x_886_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_884_, v___x_885_, v_oFiles_873_);
lean_inc_ref(v_libFile_872_);
v___x_887_ = l_Lake_mkArgs(v_libFile_872_, v___x_886_, v_a_876_);
lean_dec_ref(v___x_886_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; uint8_t v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
v_a_889_ = lean_ctor_get(v___x_887_, 1);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_887_, 2);
lean_inc_ref(v___y_883_);
v___x_890_ = lean_array_push(v___y_883_, v_libFile_872_);
v___x_891_ = l_Array_append___redArg(v___x_890_, v_a_888_);
lean_dec(v_a_888_);
v___x_892_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_893_ = lean_box(0);
v___x_894_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_895_ = 0;
v___x_896_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_896_, 0, v___x_892_);
lean_ctor_set(v___x_896_, 1, v_ar_874_);
lean_ctor_set(v___x_896_, 2, v___x_891_);
lean_ctor_set(v___x_896_, 3, v___x_893_);
lean_ctor_set(v___x_896_, 4, v___x_894_);
lean_ctor_set_uint8(v___x_896_, sizeof(void*)*5, v___x_881_);
lean_ctor_set_uint8(v___x_896_, sizeof(void*)*5 + 1, v___x_895_);
v___x_897_ = l_Lake_proc(v___x_896_, v___x_895_, v_a_889_);
return v___x_897_;
}
else
{
lean_object* v_a_898_; lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec_ref(v_ar_874_);
lean_dec_ref(v_libFile_872_);
v_a_898_ = lean_ctor_get(v___x_887_, 0);
v_a_899_ = lean_ctor_get(v___x_887_, 1);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_887_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_inc(v_a_898_);
lean_dec(v___x_887_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_898_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
else
{
lean_object* v_a_908_; lean_object* v___x_909_; uint8_t v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec_ref(v_ar_874_);
lean_dec_ref(v_oFiles_873_);
lean_dec_ref(v_libFile_872_);
v_a_908_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v___x_879_, 1);
v___x_909_ = lean_io_error_to_string(v_a_908_);
v___x_910_ = 3;
v___x_911_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set_uint8(v___x_911_, sizeof(void*)*1, v___x_910_);
v___x_912_ = lean_array_get_size(v_a_876_);
v___x_913_ = lean_array_push(v_a_876_, v___x_911_);
v___x_914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
return v___x_914_;
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_916_; uint8_t v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
lean_dec_ref(v_ar_874_);
lean_dec_ref(v_oFiles_873_);
lean_dec_ref(v_libFile_872_);
v_a_915_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_878_, 1);
v___x_916_ = lean_io_error_to_string(v_a_915_);
v___x_917_ = 3;
v___x_918_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set_uint8(v___x_918_, sizeof(void*)*1, v___x_917_);
v___x_919_ = lean_array_get_size(v_a_876_);
v___x_920_ = lean_array_push(v_a_876_, v___x_918_);
v___x_921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_921_, 0, v___x_919_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
return v___x_921_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object* v_libFile_922_, lean_object* v_oFiles_923_, lean_object* v_ar_924_, lean_object* v_thin_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
uint8_t v_thin_boxed_928_; lean_object* v_res_929_; 
v_thin_boxed_928_ = lean_unbox(v_thin_925_);
v_res_929_ = l_Lake_compileStaticLib(v_libFile_922_, v_oFiles_923_, v_ar_924_, v_thin_boxed_928_, v_a_926_);
return v_res_929_;
}
}
static lean_object* _init_l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__7(void){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_943_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__6));
v___x_944_ = lean_string_utf8_byte_size(v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv(){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0));
v___x_947_ = lean_io_getenv(v___x_946_);
if (lean_obj_tag(v___x_947_) == 0)
{
goto v___jp_948_;
}
else
{
lean_object* v_val_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; 
v_val_953_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_val_953_);
lean_dec_ref_known(v___x_947_, 1);
v___x_954_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__6));
v___x_955_ = lean_string_utf8_byte_size(v_val_953_);
v___x_956_ = lean_obj_once(&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__7, &l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__7_once, _init_l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__7);
v___x_957_ = lean_nat_dec_le(v___x_956_, v___x_955_);
if (v___x_957_ == 0)
{
lean_dec(v_val_953_);
goto v___jp_948_;
}
else
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_unsigned_to_nat(0u);
v___x_959_ = lean_string_memcmp(v_val_953_, v___x_954_, v___x_958_, v___x_958_, v___x_956_);
lean_dec(v_val_953_);
if (v___x_959_ == 0)
{
goto v___jp_948_;
}
else
{
lean_object* v___x_960_; 
v___x_960_ = ((lean_object*)(l_Lake_compileO___closed__2));
return v___x_960_;
}
}
}
v___jp_948_:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1));
v___x_950_ = lean_io_getenv(v___x_949_);
if (lean_obj_tag(v___x_950_) == 0)
{
lean_object* v___x_951_; 
v___x_951_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__5));
return v___x_951_;
}
else
{
lean_object* v___x_952_; 
lean_dec_ref_known(v___x_950_, 1);
v___x_952_ = ((lean_object*)(l_Lake_compileO___closed__2));
return v___x_952_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___boxed(lean_object* v_a_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
return v_res_962_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__1(void){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_964_ = ((lean_object*)(l_Lake_compileSharedLib___closed__0));
v___x_965_ = lean_unsigned_to_nat(3u);
v___x_966_ = lean_mk_empty_array_with_capacity(v___x_965_);
v___x_967_ = lean_array_push(v___x_966_, v___x_964_);
return v___x_967_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__2(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = ((lean_object*)(l_Lake_compileLeanModule___closed__14));
v___x_969_ = lean_obj_once(&l_Lake_compileSharedLib___closed__1, &l_Lake_compileSharedLib___closed__1_once, _init_l_Lake_compileSharedLib___closed__1);
v___x_970_ = lean_array_push(v___x_969_, v___x_968_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object* v_libFile_971_, lean_object* v_linkArgs_972_, lean_object* v_linker_973_, lean_object* v_a_974_){
_start:
{
lean_object* v___x_976_; 
lean_inc_ref(v_libFile_971_);
v___x_976_ = l_Lake_createParentDirs(v_libFile_971_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v___x_977_; lean_object* v_fst_978_; lean_object* v_snd_979_; lean_object* v___x_980_; 
lean_dec_ref_known(v___x_976_, 1);
v___x_977_ = l_Lake_splitCcCommand(v_linker_973_);
v_fst_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_fst_978_);
v_snd_979_ = lean_ctor_get(v___x_977_, 1);
lean_inc(v_snd_979_);
lean_dec_ref(v___x_977_);
lean_inc_ref(v_libFile_971_);
v___x_980_ = l_Lake_mkArgs(v_libFile_971_, v_linkArgs_972_, v_a_974_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v_a_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; uint8_t v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
v_a_982_ = lean_ctor_get(v___x_980_, 1);
lean_inc(v_a_982_);
lean_dec_ref_known(v___x_980_, 2);
v___x_983_ = l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
v___x_984_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_985_ = lean_obj_once(&l_Lake_compileSharedLib___closed__2, &l_Lake_compileSharedLib___closed__2_once, _init_l_Lake_compileSharedLib___closed__2);
v___x_986_ = lean_array_push(v___x_985_, v_libFile_971_);
v___x_987_ = l_Array_append___redArg(v_snd_979_, v___x_986_);
lean_dec_ref(v___x_986_);
v___x_988_ = l_Array_append___redArg(v___x_987_, v_a_981_);
lean_dec(v_a_981_);
v___x_989_ = lean_box(0);
v___x_990_ = 1;
v___x_991_ = 0;
v___x_992_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_992_, 0, v___x_984_);
lean_ctor_set(v___x_992_, 1, v_fst_978_);
lean_ctor_set(v___x_992_, 2, v___x_988_);
lean_ctor_set(v___x_992_, 3, v___x_989_);
lean_ctor_set(v___x_992_, 4, v___x_983_);
lean_ctor_set_uint8(v___x_992_, sizeof(void*)*5, v___x_990_);
lean_ctor_set_uint8(v___x_992_, sizeof(void*)*5 + 1, v___x_991_);
v___x_993_ = l_Lake_proc(v___x_992_, v___x_991_, v_a_982_);
return v___x_993_;
}
else
{
lean_object* v_a_994_; lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec(v_snd_979_);
lean_dec(v_fst_978_);
lean_dec_ref(v_libFile_971_);
v_a_994_ = lean_ctor_get(v___x_980_, 0);
v_a_995_ = lean_ctor_get(v___x_980_, 1);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_980_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_inc(v_a_994_);
lean_dec(v___x_980_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_994_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
else
{
lean_object* v_a_1003_; lean_object* v___x_1004_; uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_dec_ref(v_linker_973_);
lean_dec_ref(v_libFile_971_);
v_a_1003_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_976_, 1);
v___x_1004_ = lean_io_error_to_string(v_a_1003_);
v___x_1005_ = 3;
v___x_1006_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set_uint8(v___x_1006_, sizeof(void*)*1, v___x_1005_);
v___x_1007_ = lean_array_get_size(v_a_974_);
v___x_1008_ = lean_array_push(v_a_974_, v___x_1006_);
v___x_1009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
return v___x_1009_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object* v_libFile_1010_, lean_object* v_linkArgs_1011_, lean_object* v_linker_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_Lake_compileSharedLib(v_libFile_1010_, v_linkArgs_1011_, v_linker_1012_, v_a_1013_);
lean_dec_ref(v_linkArgs_1011_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object* v_binFile_1016_, lean_object* v_linkArgs_1017_, lean_object* v_linker_1018_, lean_object* v_a_1019_){
_start:
{
lean_object* v___x_1021_; 
lean_inc_ref(v_binFile_1016_);
v___x_1021_ = l_Lake_createParentDirs(v_binFile_1016_);
if (lean_obj_tag(v___x_1021_) == 0)
{
lean_object* v___x_1022_; lean_object* v_fst_1023_; lean_object* v_snd_1024_; lean_object* v___x_1025_; 
lean_dec_ref_known(v___x_1021_, 1);
v___x_1022_ = l_Lake_splitCcCommand(v_linker_1018_);
v_fst_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc(v_fst_1023_);
v_snd_1024_ = lean_ctor_get(v___x_1022_, 1);
lean_inc(v_snd_1024_);
lean_dec_ref(v___x_1022_);
lean_inc_ref(v_binFile_1016_);
v___x_1025_ = l_Lake_mkArgs(v_binFile_1016_, v_linkArgs_1017_, v_a_1019_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v_a_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; uint8_t v___x_1037_; uint8_t v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
lean_inc(v_a_1026_);
v_a_1027_ = lean_ctor_get(v___x_1025_, 1);
lean_inc(v_a_1027_);
lean_dec_ref_known(v___x_1025_, 2);
v___x_1028_ = l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
v___x_1029_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_1030_ = lean_unsigned_to_nat(2u);
v___x_1031_ = lean_mk_empty_array_with_capacity(v___x_1030_);
lean_dec_ref(v___x_1031_);
v___x_1032_ = lean_obj_once(&l_Lake_compileLeanModule___closed__15, &l_Lake_compileLeanModule___closed__15_once, _init_l_Lake_compileLeanModule___closed__15);
v___x_1033_ = lean_array_push(v___x_1032_, v_binFile_1016_);
v___x_1034_ = l_Array_append___redArg(v_snd_1024_, v___x_1033_);
lean_dec_ref(v___x_1033_);
v___x_1035_ = l_Array_append___redArg(v___x_1034_, v_a_1026_);
lean_dec(v_a_1026_);
v___x_1036_ = lean_box(0);
v___x_1037_ = 1;
v___x_1038_ = 0;
v___x_1039_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1039_, 0, v___x_1029_);
lean_ctor_set(v___x_1039_, 1, v_fst_1023_);
lean_ctor_set(v___x_1039_, 2, v___x_1035_);
lean_ctor_set(v___x_1039_, 3, v___x_1036_);
lean_ctor_set(v___x_1039_, 4, v___x_1028_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*5, v___x_1037_);
lean_ctor_set_uint8(v___x_1039_, sizeof(void*)*5 + 1, v___x_1038_);
v___x_1040_ = l_Lake_proc(v___x_1039_, v___x_1038_, v_a_1027_);
return v___x_1040_;
}
else
{
lean_object* v_a_1041_; lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec(v_snd_1024_);
lean_dec(v_fst_1023_);
lean_dec_ref(v_binFile_1016_);
v_a_1041_ = lean_ctor_get(v___x_1025_, 0);
v_a_1042_ = lean_ctor_get(v___x_1025_, 1);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1025_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_inc(v_a_1041_);
lean_dec(v___x_1025_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1041_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
lean_dec_ref(v_linker_1018_);
lean_dec_ref(v_binFile_1016_);
v_a_1050_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1021_, 1);
v___x_1051_ = lean_io_error_to_string(v_a_1050_);
v___x_1052_ = 3;
v___x_1053_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1053_, 0, v___x_1051_);
lean_ctor_set_uint8(v___x_1053_, sizeof(void*)*1, v___x_1052_);
v___x_1054_ = lean_array_get_size(v_a_1019_);
v___x_1055_ = lean_array_push(v_a_1019_, v___x_1053_);
v___x_1056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1054_);
lean_ctor_set(v___x_1056_, 1, v___x_1055_);
return v___x_1056_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object* v_binFile_1057_, lean_object* v_linkArgs_1058_, lean_object* v_linker_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lake_compileExe(v_binFile_1057_, v_linkArgs_1058_, v_linker_1059_, v_a_1060_);
lean_dec_ref(v_linkArgs_1058_);
return v_res_1062_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0));
v___x_1065_ = lean_unsigned_to_nat(2u);
v___x_1066_ = lean_mk_empty_array_with_capacity(v___x_1065_);
v___x_1067_ = lean_array_push(v___x_1066_, v___x_1064_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object* v_as_1068_, size_t v_i_1069_, size_t v_stop_1070_, lean_object* v_b_1071_){
_start:
{
uint8_t v___x_1072_; 
v___x_1072_ = lean_usize_dec_eq(v_i_1069_, v_stop_1070_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; size_t v___x_1077_; size_t v___x_1078_; 
v___x_1073_ = lean_array_uget_borrowed(v_as_1068_, v_i_1069_);
v___x_1074_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1);
lean_inc(v___x_1073_);
v___x_1075_ = lean_array_push(v___x_1074_, v___x_1073_);
v___x_1076_ = l_Array_append___redArg(v_b_1071_, v___x_1075_);
lean_dec_ref(v___x_1075_);
v___x_1077_ = ((size_t)1ULL);
v___x_1078_ = lean_usize_add(v_i_1069_, v___x_1077_);
v_i_1069_ = v___x_1078_;
v_b_1071_ = v___x_1076_;
goto _start;
}
else
{
return v_b_1071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object* v_as_1080_, lean_object* v_i_1081_, lean_object* v_stop_1082_, lean_object* v_b_1083_){
_start:
{
size_t v_i_boxed_1084_; size_t v_stop_boxed_1085_; lean_object* v_res_1086_; 
v_i_boxed_1084_ = lean_unbox_usize(v_i_1081_);
lean_dec(v_i_1081_);
v_stop_boxed_1085_ = lean_unbox_usize(v_stop_1082_);
lean_dec(v_stop_1082_);
v_res_1086_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_as_1080_, v_i_boxed_1084_, v_stop_boxed_1085_, v_b_1083_);
lean_dec_ref(v_as_1080_);
return v_res_1086_;
}
}
static lean_object* _init_l_Lake_download___closed__5(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1092_ = ((lean_object*)(l_Lake_download___closed__1));
v___x_1093_ = lean_unsigned_to_nat(7u);
v___x_1094_ = lean_mk_empty_array_with_capacity(v___x_1093_);
v___x_1095_ = lean_array_push(v___x_1094_, v___x_1092_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lake_download___closed__6(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v___x_1096_ = ((lean_object*)(l_Lake_download___closed__2));
v___x_1097_ = lean_obj_once(&l_Lake_download___closed__5, &l_Lake_download___closed__5_once, _init_l_Lake_download___closed__5);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1096_);
return v___x_1098_;
}
}
static lean_object* _init_l_Lake_download___closed__7(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_1100_ = lean_obj_once(&l_Lake_download___closed__6, &l_Lake_download___closed__6_once, _init_l_Lake_download___closed__6);
v___x_1101_ = lean_array_push(v___x_1100_, v___x_1099_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lake_download___closed__8(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = ((lean_object*)(l_Lake_compileLeanModule___closed__14));
v___x_1103_ = lean_obj_once(&l_Lake_download___closed__7, &l_Lake_download___closed__7_once, _init_l_Lake_download___closed__7);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1102_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lake_download(lean_object* v_url_1105_, lean_object* v_file_1106_, lean_object* v_headers_1107_, lean_object* v_a_1108_){
_start:
{
lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1122_; uint8_t v___x_1138_; 
v___x_1138_ = l_System_FilePath_pathExists(v_file_1106_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
lean_inc_ref(v_file_1106_);
v___x_1139_ = l_Lake_createParentDirs(v_file_1106_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_dec_ref_known(v___x_1139_, 1);
v___y_1122_ = v_a_1108_;
goto v___jp_1121_;
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_dec_ref(v_file_1106_);
lean_dec_ref(v_url_1105_);
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1141_ = lean_io_error_to_string(v_a_1140_);
v___x_1142_ = 3;
v___x_1143_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set_uint8(v___x_1143_, sizeof(void*)*1, v___x_1142_);
v___x_1144_ = lean_array_get_size(v_a_1108_);
v___x_1145_ = lean_array_push(v_a_1108_, v___x_1143_);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
return v___x_1146_;
}
}
else
{
lean_object* v___x_1147_; 
v___x_1147_ = lean_io_remove_file(v_file_1106_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_dec_ref_known(v___x_1147_, 1);
v___y_1122_ = v_a_1108_;
goto v___jp_1121_;
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
lean_dec_ref(v_file_1106_);
lean_dec_ref(v_url_1105_);
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
v___x_1149_ = lean_io_error_to_string(v_a_1148_);
v___x_1150_ = 3;
v___x_1151_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set_uint8(v___x_1151_, sizeof(void*)*1, v___x_1150_);
v___x_1152_ = lean_array_get_size(v_a_1108_);
v___x_1153_ = lean_array_push(v_a_1108_, v___x_1151_);
v___x_1154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
return v___x_1154_;
}
}
v___jp_1110_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; uint8_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1113_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_1114_ = ((lean_object*)(l_Lake_download___closed__0));
v___x_1115_ = lean_box(0);
v___x_1116_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_1117_ = 1;
v___x_1118_ = 0;
v___x_1119_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1119_, 0, v___x_1113_);
lean_ctor_set(v___x_1119_, 1, v___x_1114_);
lean_ctor_set(v___x_1119_, 2, v___y_1112_);
lean_ctor_set(v___x_1119_, 3, v___x_1115_);
lean_ctor_set(v___x_1119_, 4, v___x_1116_);
lean_ctor_set_uint8(v___x_1119_, sizeof(void*)*5, v___x_1117_);
lean_ctor_set_uint8(v___x_1119_, sizeof(void*)*5 + 1, v___x_1118_);
v___x_1120_ = l_Lake_proc(v___x_1119_, v___x_1117_, v___y_1111_);
return v___x_1120_;
}
v___jp_1121_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1123_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_1124_ = lean_obj_once(&l_Lake_download___closed__8, &l_Lake_download___closed__8_once, _init_l_Lake_download___closed__8);
v___x_1125_ = lean_array_push(v___x_1124_, v_file_1106_);
v___x_1126_ = lean_array_push(v___x_1125_, v___x_1123_);
v___x_1127_ = lean_array_push(v___x_1126_, v_url_1105_);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = lean_array_get_size(v_headers_1107_);
v___x_1130_ = lean_nat_dec_lt(v___x_1128_, v___x_1129_);
if (v___x_1130_ == 0)
{
v___y_1111_ = v___y_1122_;
v___y_1112_ = v___x_1127_;
goto v___jp_1110_;
}
else
{
uint8_t v___x_1131_; 
v___x_1131_ = lean_nat_dec_le(v___x_1129_, v___x_1129_);
if (v___x_1131_ == 0)
{
if (v___x_1130_ == 0)
{
v___y_1111_ = v___y_1122_;
v___y_1112_ = v___x_1127_;
goto v___jp_1110_;
}
else
{
size_t v___x_1132_; size_t v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = ((size_t)0ULL);
v___x_1133_ = lean_usize_of_nat(v___x_1129_);
v___x_1134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_headers_1107_, v___x_1132_, v___x_1133_, v___x_1127_);
v___y_1111_ = v___y_1122_;
v___y_1112_ = v___x_1134_;
goto v___jp_1110_;
}
}
else
{
size_t v___x_1135_; size_t v___x_1136_; lean_object* v___x_1137_; 
v___x_1135_ = ((size_t)0ULL);
v___x_1136_ = lean_usize_of_nat(v___x_1129_);
v___x_1137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_headers_1107_, v___x_1135_, v___x_1136_, v___x_1127_);
v___y_1111_ = v___y_1122_;
v___y_1112_ = v___x_1137_;
goto v___jp_1110_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object* v_url_1155_, lean_object* v_file_1156_, lean_object* v_headers_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lake_download(v_url_1155_, v_file_1156_, v_headers_1157_, v_a_1158_);
lean_dec_ref(v_headers_1157_);
return v_res_1160_;
}
}
static lean_object* _init_l_Lake_untar___closed__3(void){
_start:
{
uint32_t v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1164_ = 122;
v___x_1165_ = ((lean_object*)(l_Lake_untar___closed__2));
v___x_1166_ = lean_string_push(v___x_1165_, v___x_1164_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lake_untar(lean_object* v_file_1167_, lean_object* v_dir_1168_, uint8_t v_gzip_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v___x_1172_; 
lean_inc_ref(v_dir_1168_);
v___x_1172_ = l_IO_FS_createDirAll(v_dir_1168_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_opts_1174_; lean_object* v___y_1175_; lean_object* v___x_1193_; 
lean_dec_ref_known(v___x_1172_, 1);
v___x_1193_ = ((lean_object*)(l_Lake_untar___closed__2));
if (v_gzip_1169_ == 0)
{
v_opts_1174_ = v___x_1193_;
v___y_1175_ = v_a_1170_;
goto v___jp_1173_;
}
else
{
lean_object* v___x_1194_; 
v___x_1194_ = lean_obj_once(&l_Lake_untar___closed__3, &l_Lake_untar___closed__3_once, _init_l_Lake_untar___closed__3);
v_opts_1174_ = v___x_1194_;
v___y_1175_ = v_a_1170_;
goto v___jp_1173_;
}
v___jp_1173_:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; uint8_t v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1176_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_1177_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1178_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_1179_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1180_ = lean_unsigned_to_nat(5u);
v___x_1181_ = lean_mk_empty_array_with_capacity(v___x_1180_);
lean_inc_ref(v_opts_1174_);
v___x_1182_ = lean_array_push(v___x_1181_, v_opts_1174_);
v___x_1183_ = lean_array_push(v___x_1182_, v___x_1178_);
v___x_1184_ = lean_array_push(v___x_1183_, v_file_1167_);
v___x_1185_ = lean_array_push(v___x_1184_, v___x_1179_);
v___x_1186_ = lean_array_push(v___x_1185_, v_dir_1168_);
v___x_1187_ = lean_box(0);
v___x_1188_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_1189_ = 1;
v___x_1190_ = 0;
v___x_1191_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1191_, 0, v___x_1176_);
lean_ctor_set(v___x_1191_, 1, v___x_1177_);
lean_ctor_set(v___x_1191_, 2, v___x_1186_);
lean_ctor_set(v___x_1191_, 3, v___x_1187_);
lean_ctor_set(v___x_1191_, 4, v___x_1188_);
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*5, v___x_1189_);
lean_ctor_set_uint8(v___x_1191_, sizeof(void*)*5 + 1, v___x_1190_);
v___x_1192_ = l_Lake_proc(v___x_1191_, v___x_1189_, v___y_1175_);
return v___x_1192_;
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
lean_dec_ref(v_dir_1168_);
lean_dec_ref(v_file_1167_);
v_a_1195_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1196_ = lean_io_error_to_string(v_a_1195_);
v___x_1197_ = 3;
v___x_1198_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set_uint8(v___x_1198_, sizeof(void*)*1, v___x_1197_);
v___x_1199_ = lean_array_get_size(v_a_1170_);
v___x_1200_ = lean_array_push(v_a_1170_, v___x_1198_);
v___x_1201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1199_);
lean_ctor_set(v___x_1201_, 1, v___x_1200_);
return v___x_1201_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object* v_file_1202_, lean_object* v_dir_1203_, lean_object* v_gzip_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_){
_start:
{
uint8_t v_gzip_boxed_1207_; lean_object* v_res_1208_; 
v_gzip_boxed_1207_ = lean_unbox(v_gzip_1204_);
v_res_1208_ = l_Lake_untar(v_file_1202_, v_dir_1203_, v_gzip_boxed_1207_, v_a_1205_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object* v_as_1210_, size_t v_sz_1211_, size_t v_i_1212_, lean_object* v_b_1213_, lean_object* v___y_1214_){
_start:
{
uint8_t v___x_1216_; 
v___x_1216_ = lean_usize_dec_lt(v_i_1212_, v_sz_1211_);
if (v___x_1216_ == 0)
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1217_, 0, v_b_1213_);
lean_ctor_set(v___x_1217_, 1, v___y_1214_);
return v___x_1217_;
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; size_t v___x_1222_; size_t v___x_1223_; 
v_a_1218_ = lean_array_uget_borrowed(v_as_1210_, v_i_1212_);
v___x_1219_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0));
v___x_1220_ = lean_string_append(v___x_1219_, v_a_1218_);
v___x_1221_ = lean_array_push(v_b_1213_, v___x_1220_);
v___x_1222_ = ((size_t)1ULL);
v___x_1223_ = lean_usize_add(v_i_1212_, v___x_1222_);
v_i_1212_ = v___x_1223_;
v_b_1213_ = v___x_1221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object* v_as_1225_, lean_object* v_sz_1226_, lean_object* v_i_1227_, lean_object* v_b_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
size_t v_sz_boxed_1231_; size_t v_i_boxed_1232_; lean_object* v_res_1233_; 
v_sz_boxed_1231_ = lean_unbox_usize(v_sz_1226_);
lean_dec(v_sz_1226_);
v_i_boxed_1232_ = lean_unbox_usize(v_i_1227_);
lean_dec(v_i_1227_);
v_res_1233_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_as_1225_, v_sz_boxed_1231_, v_i_boxed_1232_, v_b_1228_, v___y_1229_);
lean_dec_ref(v_as_1225_);
return v_res_1233_;
}
}
static lean_object* _init_l_Lake_tar___closed__1(void){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1235_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_1236_ = lean_unsigned_to_nat(5u);
v___x_1237_ = lean_mk_empty_array_with_capacity(v___x_1236_);
v___x_1238_ = lean_array_push(v___x_1237_, v___x_1235_);
return v___x_1238_;
}
}
static lean_object* _init_l_Lake_tar___closed__10(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1256_ = ((lean_object*)(l_Lake_tar___closed__9));
v___x_1257_ = ((lean_object*)(l_Lake_tar___closed__8));
v___x_1258_ = lean_array_push(v___x_1257_, v___x_1256_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lake_tar(lean_object* v_dir_1259_, lean_object* v_file_1260_, uint8_t v_gzip_1261_, lean_object* v_excludePaths_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v___y_1266_; uint8_t v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___x_1276_; 
lean_inc_ref(v_file_1260_);
v___x_1276_ = l_Lake_createParentDirs(v_file_1260_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_args_1278_; lean_object* v___y_1279_; lean_object* v___x_1309_; 
lean_dec_ref_known(v___x_1276_, 1);
v___x_1309_ = ((lean_object*)(l_Lake_tar___closed__8));
if (v_gzip_1261_ == 0)
{
v_args_1278_ = v___x_1309_;
v___y_1279_ = v_a_1263_;
goto v___jp_1277_;
}
else
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_obj_once(&l_Lake_tar___closed__10, &l_Lake_tar___closed__10_once, _init_l_Lake_tar___closed__10);
v_args_1278_ = v___x_1310_;
v___y_1279_ = v_a_1263_;
goto v___jp_1277_;
}
v___jp_1277_:
{
size_t v_sz_1280_; size_t v___x_1281_; lean_object* v___x_1282_; 
v_sz_1280_ = lean_array_size(v_excludePaths_1262_);
v___x_1281_ = ((size_t)0ULL);
lean_inc_ref(v_args_1278_);
v___x_1282_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_excludePaths_1262_, v_sz_1280_, v___x_1281_, v_args_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; uint8_t v___x_1297_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
v_a_1284_ = lean_ctor_get(v___x_1282_, 1);
lean_inc(v_a_1284_);
lean_dec_ref_known(v___x_1282_, 2);
v___x_1285_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_1286_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1287_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1288_ = ((lean_object*)(l_Lake_tar___closed__0));
v___x_1289_ = lean_obj_once(&l_Lake_tar___closed__1, &l_Lake_tar___closed__1_once, _init_l_Lake_tar___closed__1);
v___x_1290_ = lean_array_push(v___x_1289_, v_file_1260_);
v___x_1291_ = lean_array_push(v___x_1290_, v___x_1287_);
v___x_1292_ = lean_array_push(v___x_1291_, v_dir_1259_);
v___x_1293_ = lean_array_push(v___x_1292_, v___x_1288_);
v___x_1294_ = l_Array_append___redArg(v_a_1283_, v___x_1293_);
lean_dec_ref(v___x_1293_);
v___x_1295_ = lean_box(0);
v___x_1296_ = l_System_Platform_isOSX;
v___x_1297_ = 1;
if (v___x_1296_ == 0)
{
lean_object* v___x_1298_; 
v___x_1298_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_1266_ = v___x_1286_;
v___y_1267_ = v___x_1297_;
v___y_1268_ = v___x_1285_;
v___y_1269_ = v_a_1284_;
v___y_1270_ = v___x_1294_;
v___y_1271_ = v___x_1295_;
v___y_1272_ = v___x_1298_;
goto v___jp_1265_;
}
else
{
lean_object* v___x_1299_; 
v___x_1299_ = ((lean_object*)(l_Lake_tar___closed__6));
v___y_1266_ = v___x_1286_;
v___y_1267_ = v___x_1297_;
v___y_1268_ = v___x_1285_;
v___y_1269_ = v_a_1284_;
v___y_1270_ = v___x_1294_;
v___y_1271_ = v___x_1295_;
v___y_1272_ = v___x_1299_;
goto v___jp_1265_;
}
}
else
{
lean_object* v_a_1300_; lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v_file_1260_);
lean_dec_ref(v_dir_1259_);
v_a_1300_ = lean_ctor_get(v___x_1282_, 0);
v_a_1301_ = lean_ctor_get(v___x_1282_, 1);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1282_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_inc(v_a_1300_);
lean_dec(v___x_1282_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1300_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec_ref(v_file_1260_);
lean_dec_ref(v_dir_1259_);
v_a_1311_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1311_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1312_ = lean_io_error_to_string(v_a_1311_);
v___x_1313_ = 3;
v___x_1314_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set_uint8(v___x_1314_, sizeof(void*)*1, v___x_1313_);
v___x_1315_ = lean_array_get_size(v_a_1263_);
v___x_1316_ = lean_array_push(v_a_1263_, v___x_1314_);
v___x_1317_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
return v___x_1317_;
}
v___jp_1265_:
{
uint8_t v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = 0;
lean_inc_ref(v___y_1272_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1266_);
lean_inc_ref(v___y_1268_);
v___x_1274_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1274_, 0, v___y_1268_);
lean_ctor_set(v___x_1274_, 1, v___y_1266_);
lean_ctor_set(v___x_1274_, 2, v___y_1270_);
lean_ctor_set(v___x_1274_, 3, v___y_1271_);
lean_ctor_set(v___x_1274_, 4, v___y_1272_);
lean_ctor_set_uint8(v___x_1274_, sizeof(void*)*5, v___y_1267_);
lean_ctor_set_uint8(v___x_1274_, sizeof(void*)*5 + 1, v___x_1273_);
v___x_1275_ = l_Lake_proc(v___x_1274_, v___y_1267_, v___y_1269_);
return v___x_1275_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object* v_dir_1318_, lean_object* v_file_1319_, lean_object* v_gzip_1320_, lean_object* v_excludePaths_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_){
_start:
{
uint8_t v_gzip_boxed_1324_; lean_object* v_res_1325_; 
v_gzip_boxed_1324_ = lean_unbox(v_gzip_1320_);
v_res_1325_ = l_Lake_tar(v_dir_1318_, v_file_1319_, v_gzip_boxed_1324_, v_excludePaths_1321_, v_a_1322_);
lean_dec_ref(v_excludePaths_1321_);
return v_res_1325_;
}
}
lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Log(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
lean_object* initialize_Lake_Util_FilePath(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Actions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Actions(builtin);
}
#ifdef __cplusplus
}
#endif
