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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_String_Slice_positions(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern uint8_t l_System_Platform_isOSX;
lean_object* lean_io_getenv(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_array_size(lean_object*);
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
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_createDirAll(lean_object*);
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
static const lean_string_object l_Lake_compileLeanModule___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".zig"};
static const lean_object* l_Lake_compileLeanModule___closed__12 = (const lean_object*)&l_Lake_compileLeanModule___closed__12_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__13;
static const lean_string_object l_Lake_compileLeanModule___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-z"};
static const lean_object* l_Lake_compileLeanModule___closed__14 = (const lean_object*)&l_Lake_compileLeanModule___closed__14_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__15;
static const lean_string_object l_Lake_compileLeanModule___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-i"};
static const lean_object* l_Lake_compileLeanModule___closed__16 = (const lean_object*)&l_Lake_compileLeanModule___closed__16_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__17;
static const lean_string_object l_Lake_compileLeanModule___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l_Lake_compileLeanModule___closed__18 = (const lean_object*)&l_Lake_compileLeanModule___closed__18_value;
static lean_once_cell_t l_Lake_compileLeanModule___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_compileLeanModule___closed__19;
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
static const lean_string_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "MACOSX_DEPLOYMENT_TARGET"};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0_value;
static const lean_string_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "99.0"};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2_value;
static const lean_ctor_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0_value),((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__2_value)}};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3_value;
static const lean_array_object l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4 = (const lean_object*)&l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4_value;
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
static lean_once_cell_t l_Lake_tar___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_tar___closed__9;
LEAN_EXPORT lean_object* l_Lake_tar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___closed__0));
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0___boxed(lean_object* v_s_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(v_s_5_);
lean_dec_ref(v_s_5_);
return v_res_6_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(lean_object* v_opts_7_, lean_object* v_opt_8_){
_start:
{
lean_object* v_name_9_; lean_object* v_defValue_10_; lean_object* v_map_11_; lean_object* v___x_12_; 
v_name_9_ = lean_ctor_get(v_opt_8_, 0);
v_defValue_10_ = lean_ctor_get(v_opt_8_, 1);
v_map_11_ = lean_ctor_get(v_opts_7_, 0);
v___x_12_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_11_, v_name_9_);
if (lean_obj_tag(v___x_12_) == 0)
{
uint8_t v___x_13_; 
v___x_13_ = lean_unbox(v_defValue_10_);
return v___x_13_;
}
else
{
lean_object* v_val_14_; 
v_val_14_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_val_14_);
lean_dec_ref_known(v___x_12_, 1);
if (lean_obj_tag(v_val_14_) == 1)
{
uint8_t v_v_15_; 
v_v_15_ = lean_ctor_get_uint8(v_val_14_, 0);
lean_dec_ref_known(v_val_14_, 0);
return v_v_15_;
}
else
{
uint8_t v___x_16_; 
lean_dec(v_val_14_);
v___x_16_ = lean_unbox(v_defValue_10_);
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2___boxed(lean_object* v_opts_17_, lean_object* v_opt_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(v_opts_17_, v_opt_18_);
lean_dec_ref(v_opt_18_);
lean_dec_ref(v_opts_17_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0(uint32_t v_exitCode_23_, uint8_t v___y_24_, lean_object* v_ir_x3f_25_, lean_object* v_c_x3f_26_, lean_object* v_setupFile_27_, lean_object* v___x_28_, lean_object* v_leanir_29_, lean_object* v___x_30_, lean_object* v___x_31_, uint8_t v___x_32_, uint8_t v___x_33_, lean_object* v_olean_x3f_34_, lean_object* v_stderr_35_, lean_object* v_____r_36_, lean_object* v___y_37_){
_start:
{
lean_object* v___y_40_; lean_object* v___y_44_; lean_object* v___y_45_; lean_object* v___y_48_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_106_ = lean_string_utf8_byte_size(v_stderr_35_);
v___x_107_ = lean_unsigned_to_nat(0u);
v___x_108_ = lean_nat_dec_eq(v___x_106_, v___x_107_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_109_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__1));
v___x_110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_110_, 0, v_stderr_35_);
lean_ctor_set(v___x_110_, 1, v___x_107_);
lean_ctor_set(v___x_110_, 2, v___x_106_);
v___x_111_ = l_String_Slice_trimAscii(v___x_110_);
v___x_112_ = l_String_Slice_toString(v___x_111_);
lean_dec_ref(v___x_111_);
v___x_113_ = lean_string_append(v___x_109_, v___x_112_);
lean_dec_ref(v___x_112_);
v___x_114_ = 1;
v___x_115_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set_uint8(v___x_115_, sizeof(void*)*1, v___x_114_);
v___x_116_ = lean_array_push(v___y_37_, v___x_115_);
v___y_48_ = v___x_116_;
goto v___jp_47_;
}
else
{
lean_dec_ref(v_stderr_35_);
v___y_48_ = v___y_37_;
goto v___jp_47_;
}
v___jp_39_:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_box(0);
v___x_42_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set(v___x_42_, 1, v___y_40_);
return v___x_42_;
}
v___jp_43_:
{
lean_object* v___x_46_; 
v___x_46_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_46_, 0, v___y_44_);
lean_ctor_set(v___x_46_, 1, v___y_45_);
return v___x_46_;
}
v___jp_47_:
{
uint32_t v___x_49_; uint8_t v___x_50_; 
v___x_49_ = 0;
v___x_50_ = lean_uint32_dec_eq(v_exitCode_23_, v___x_49_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
lean_dec_ref(v___x_31_);
lean_dec(v___x_30_);
lean_dec_ref(v_leanir_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_setupFile_27_);
lean_dec(v_c_x3f_26_);
lean_dec(v_ir_x3f_25_);
v___x_51_ = ((lean_object*)(l_Lake_compileLeanModule___lam__0___closed__0));
v___x_52_ = lean_uint32_to_nat(v_exitCode_23_);
v___x_53_ = l_Nat_reprFast(v___x_52_);
v___x_54_ = lean_string_append(v___x_51_, v___x_53_);
lean_dec_ref(v___x_53_);
v___x_55_ = 3;
v___x_56_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set_uint8(v___x_56_, sizeof(void*)*1, v___x_55_);
v___x_57_ = lean_array_get_size(v___y_48_);
v___x_58_ = lean_array_push(v___y_48_, v___x_56_);
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
return v___x_59_;
}
else
{
if (v___y_24_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec_ref(v___x_31_);
lean_dec(v___x_30_);
lean_dec_ref(v_leanir_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_setupFile_27_);
lean_dec(v_c_x3f_26_);
lean_dec(v_ir_x3f_25_);
v___x_60_ = lean_box(0);
v___x_61_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___y_48_);
return v___x_61_;
}
else
{
if (lean_obj_tag(v_ir_x3f_25_) == 1)
{
if (lean_obj_tag(v_c_x3f_26_) == 1)
{
lean_object* v_val_62_; lean_object* v_val_63_; lean_object* v___x_64_; 
v_val_62_ = lean_ctor_get(v_ir_x3f_25_, 0);
lean_inc_n(v_val_62_, 2);
lean_dec_ref_known(v_ir_x3f_25_, 1);
v_val_63_ = lean_ctor_get(v_c_x3f_26_, 0);
lean_inc(v_val_63_);
lean_dec_ref_known(v_c_x3f_26_, 1);
v___x_64_ = l_Lake_createParentDirs(v_val_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v___x_65_; 
lean_dec_ref_known(v___x_64_, 1);
lean_inc(v_val_63_);
v___x_65_ = l_Lake_createParentDirs(v_val_63_);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
lean_dec_ref_known(v___x_65_, 1);
v___x_66_ = lean_unsigned_to_nat(3u);
v___x_67_ = lean_mk_empty_array_with_capacity(v___x_66_);
v___x_68_ = lean_array_push(v___x_67_, v_setupFile_27_);
v___x_69_ = lean_array_push(v___x_68_, v_val_62_);
v___x_70_ = lean_array_push(v___x_69_, v_val_63_);
v___x_71_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_71_, 0, v___x_28_);
lean_ctor_set(v___x_71_, 1, v_leanir_29_);
lean_ctor_set(v___x_71_, 2, v___x_70_);
lean_ctor_set(v___x_71_, 3, v___x_30_);
lean_ctor_set(v___x_71_, 4, v___x_31_);
lean_ctor_set_uint8(v___x_71_, sizeof(void*)*5, v___x_32_);
lean_ctor_set_uint8(v___x_71_, sizeof(void*)*5 + 1, v___x_33_);
v___x_72_ = l_Lake_proc(v___x_71_, v___x_33_, v___y_48_);
if (lean_obj_tag(v___x_72_) == 0)
{
return v___x_72_;
}
else
{
if (lean_obj_tag(v_olean_x3f_34_) == 1)
{
lean_object* v_a_73_; lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_89_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
v_a_74_ = lean_ctor_get(v___x_72_, 1);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_89_ == 0)
{
v___x_76_ = v___x_72_;
v_isShared_77_ = v_isSharedCheck_89_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_inc(v_a_73_);
lean_dec(v___x_72_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_89_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v_val_78_; lean_object* v___x_79_; 
v_val_78_ = lean_ctor_get(v_olean_x3f_34_, 0);
v___x_79_ = l_Lake_removeFileIfExists(v_val_78_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_dec_ref_known(v___x_79_, 1);
lean_del_object(v___x_76_);
v___y_44_ = v_a_73_;
v___y_45_ = v_a_74_;
goto v___jp_43_;
}
else
{
lean_object* v_a_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
lean_dec(v_a_73_);
v_a_80_ = lean_ctor_get(v___x_79_, 0);
lean_inc(v_a_80_);
lean_dec_ref_known(v___x_79_, 1);
v___x_81_ = lean_io_error_to_string(v_a_80_);
v___x_82_ = 3;
v___x_83_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*1, v___x_82_);
v___x_84_ = lean_array_get_size(v_a_74_);
v___x_85_ = lean_array_push(v_a_74_, v___x_83_);
if (v_isShared_77_ == 0)
{
lean_ctor_set(v___x_76_, 1, v___x_85_);
lean_ctor_set(v___x_76_, 0, v___x_84_);
v___x_87_ = v___x_76_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
else
{
lean_object* v_a_90_; lean_object* v_a_91_; 
v_a_90_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_90_);
v_a_91_ = lean_ctor_get(v___x_72_, 1);
lean_inc(v_a_91_);
lean_dec_ref_known(v___x_72_, 2);
v___y_44_ = v_a_90_;
v___y_45_ = v_a_91_;
goto v___jp_43_;
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_93_; uint8_t v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
lean_dec(v_val_63_);
lean_dec(v_val_62_);
lean_dec_ref(v___x_31_);
lean_dec(v___x_30_);
lean_dec_ref(v_leanir_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_setupFile_27_);
v_a_92_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_92_);
lean_dec_ref_known(v___x_65_, 1);
v___x_93_ = lean_io_error_to_string(v_a_92_);
v___x_94_ = 3;
v___x_95_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_95_, sizeof(void*)*1, v___x_94_);
v___x_96_ = lean_array_get_size(v___y_48_);
v___x_97_ = lean_array_push(v___y_48_, v___x_95_);
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_96_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
return v___x_98_;
}
}
else
{
lean_object* v_a_99_; lean_object* v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v_val_63_);
lean_dec(v_val_62_);
lean_dec_ref(v___x_31_);
lean_dec(v___x_30_);
lean_dec_ref(v_leanir_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_setupFile_27_);
v_a_99_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_99_);
lean_dec_ref_known(v___x_64_, 1);
v___x_100_ = lean_io_error_to_string(v_a_99_);
v___x_101_ = 3;
v___x_102_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_101_);
v___x_103_ = lean_array_get_size(v___y_48_);
v___x_104_ = lean_array_push(v___y_48_, v___x_102_);
v___x_105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_103_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
return v___x_105_;
}
}
else
{
lean_dec_ref_known(v_ir_x3f_25_, 1);
lean_dec_ref(v___x_31_);
lean_dec(v___x_30_);
lean_dec_ref(v_leanir_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_setupFile_27_);
lean_dec(v_c_x3f_26_);
v___y_40_ = v___y_48_;
goto v___jp_39_;
}
}
else
{
lean_dec_ref(v___x_31_);
lean_dec(v___x_30_);
lean_dec_ref(v_leanir_29_);
lean_dec_ref(v___x_28_);
lean_dec_ref(v_setupFile_27_);
lean_dec(v_c_x3f_26_);
lean_dec(v_ir_x3f_25_);
v___y_40_ = v___y_48_;
goto v___jp_39_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___lam__0___boxed(lean_object* v_exitCode_117_, lean_object* v___y_118_, lean_object* v_ir_x3f_119_, lean_object* v_c_x3f_120_, lean_object* v_setupFile_121_, lean_object* v___x_122_, lean_object* v_leanir_123_, lean_object* v___x_124_, lean_object* v___x_125_, lean_object* v___x_126_, lean_object* v___x_127_, lean_object* v_olean_x3f_128_, lean_object* v_stderr_129_, lean_object* v_____r_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
uint32_t v_exitCode_boxed_133_; uint8_t v___y_30947__boxed_134_; uint8_t v___x_30951__boxed_135_; uint8_t v___x_30952__boxed_136_; lean_object* v_res_137_; 
v_exitCode_boxed_133_ = lean_unbox_uint32(v_exitCode_117_);
lean_dec(v_exitCode_117_);
v___y_30947__boxed_134_ = lean_unbox(v___y_118_);
v___x_30951__boxed_135_ = lean_unbox(v___x_126_);
v___x_30952__boxed_136_ = lean_unbox(v___x_127_);
v_res_137_ = l_Lake_compileLeanModule___lam__0(v_exitCode_boxed_133_, v___y_30947__boxed_134_, v_ir_x3f_119_, v_c_x3f_120_, v_setupFile_121_, v___x_122_, v_leanir_123_, v___x_124_, v___x_125_, v___x_30951__boxed_135_, v___x_30952__boxed_136_, v_olean_x3f_128_, v_stderr_129_, v_____r_130_, v___y_131_);
lean_dec(v_olean_x3f_128_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(lean_object* v_a_138_, lean_object* v_b_139_, lean_object* v_relLeanFile_140_, lean_object* v_____r_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_a_145_; lean_object* v_toBaseMessage_147_; uint8_t v_isSilent_148_; 
v_toBaseMessage_147_ = lean_ctor_get(v_a_138_, 0);
lean_inc_ref(v_toBaseMessage_147_);
v_isSilent_148_ = lean_ctor_get_uint8(v_toBaseMessage_147_, sizeof(void*)*5 + 2);
if (v_isSilent_148_ == 0)
{
lean_object* v_kind_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_173_; 
v_kind_149_ = lean_ctor_get(v_a_138_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_a_138_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v_a_138_, 0);
lean_dec(v_unused_174_);
v___x_151_ = v_a_138_;
v_isShared_152_ = v_isSharedCheck_173_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_kind_149_);
lean_dec(v_a_138_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_173_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v_pos_153_; lean_object* v_endPos_154_; uint8_t v_keepFullRange_155_; uint8_t v_severity_156_; lean_object* v_caption_157_; lean_object* v_data_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_171_; 
v_pos_153_ = lean_ctor_get(v_toBaseMessage_147_, 1);
v_endPos_154_ = lean_ctor_get(v_toBaseMessage_147_, 2);
v_keepFullRange_155_ = lean_ctor_get_uint8(v_toBaseMessage_147_, sizeof(void*)*5);
v_severity_156_ = lean_ctor_get_uint8(v_toBaseMessage_147_, sizeof(void*)*5 + 1);
v_caption_157_ = lean_ctor_get(v_toBaseMessage_147_, 3);
v_data_158_ = lean_ctor_get(v_toBaseMessage_147_, 4);
v_isSharedCheck_171_ = !lean_is_exclusive(v_toBaseMessage_147_);
if (v_isSharedCheck_171_ == 0)
{
lean_object* v_unused_172_; 
v_unused_172_ = lean_ctor_get(v_toBaseMessage_147_, 0);
lean_dec(v_unused_172_);
v___x_160_ = v_toBaseMessage_147_;
v_isShared_161_ = v_isSharedCheck_171_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_data_158_);
lean_inc(v_caption_157_);
lean_inc(v_endPos_154_);
lean_inc(v_pos_153_);
lean_dec(v_toBaseMessage_147_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_171_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = l_Lake_mkRelPathString(v_relLeanFile_140_);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 0, v___x_162_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v_pos_153_);
lean_ctor_set(v_reuseFailAlloc_170_, 2, v_endPos_154_);
lean_ctor_set(v_reuseFailAlloc_170_, 3, v_caption_157_);
lean_ctor_set(v_reuseFailAlloc_170_, 4, v_data_158_);
lean_ctor_set_uint8(v_reuseFailAlloc_170_, sizeof(void*)*5, v_keepFullRange_155_);
lean_ctor_set_uint8(v_reuseFailAlloc_170_, sizeof(void*)*5 + 1, v_severity_156_);
lean_ctor_set_uint8(v_reuseFailAlloc_170_, sizeof(void*)*5 + 2, v_isSilent_148_);
v___x_164_ = v_reuseFailAlloc_170_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_166_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_164_);
v___x_166_ = v___x_151_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v_kind_149_);
v___x_166_ = v_reuseFailAlloc_169_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_167_ = l_Lake_LogEntry_ofSerialMessage(v___x_166_);
v___x_168_ = lean_array_push(v___y_142_, v___x_167_);
v_a_145_ = v___x_168_;
goto v___jp_144_;
}
}
}
}
}
else
{
lean_dec_ref(v_toBaseMessage_147_);
lean_dec_ref(v_relLeanFile_140_);
lean_dec_ref(v_a_138_);
v_a_145_ = v___y_142_;
goto v___jp_144_;
}
v___jp_144_:
{
lean_object* v___x_146_; 
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v_b_139_);
lean_ctor_set(v___x_146_, 1, v_a_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0___boxed(lean_object* v_a_175_, lean_object* v_b_176_, lean_object* v_relLeanFile_177_, lean_object* v_____r_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(v_a_175_, v_b_176_, v_relLeanFile_177_, v_____r_178_, v___y_179_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(lean_object* v_relLeanFile_184_, lean_object* v___x_185_, lean_object* v___x_186_, lean_object* v___x_187_, lean_object* v_a_188_, lean_object* v_b_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___y_193_; lean_object* v___y_194_; uint8_t v___y_195_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_210_; lean_object* v___y_211_; lean_object* v_it_216_; lean_object* v_startInclusive_217_; lean_object* v_endExclusive_218_; 
if (lean_obj_tag(v_a_188_) == 0)
{
lean_object* v_currPos_236_; lean_object* v_searcher_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_263_; 
v_currPos_236_ = lean_ctor_get(v_a_188_, 0);
v_searcher_237_ = lean_ctor_get(v_a_188_, 1);
v_isSharedCheck_263_ = !lean_is_exclusive(v_a_188_);
if (v_isSharedCheck_263_ == 0)
{
v___x_239_ = v_a_188_;
v_isShared_240_ = v_isSharedCheck_263_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_searcher_237_);
lean_inc(v_currPos_236_);
lean_dec(v_a_188_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_263_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v_startInclusive_241_; lean_object* v_endExclusive_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v_startInclusive_241_ = lean_ctor_get(v___x_186_, 1);
v_endExclusive_242_ = lean_ctor_get(v___x_186_, 2);
v___x_243_ = lean_nat_sub(v_endExclusive_242_, v_startInclusive_241_);
v___x_244_ = lean_nat_dec_eq(v_searcher_237_, v___x_243_);
lean_dec(v___x_243_);
if (v___x_244_ == 0)
{
uint32_t v___x_245_; uint32_t v___x_246_; uint8_t v___x_247_; 
v___x_245_ = 10;
v___x_246_ = lean_string_utf8_get_fast(v___x_185_, v_searcher_237_);
v___x_247_ = lean_uint32_dec_eq(v___x_246_, v___x_245_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; lean_object* v___x_250_; 
v___x_248_ = lean_string_utf8_next_fast(v___x_185_, v_searcher_237_);
lean_dec(v_searcher_237_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v___x_248_);
v___x_250_ = v___x_239_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_currPos_236_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v___x_248_);
v___x_250_ = v_reuseFailAlloc_252_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
v_a_188_ = v___x_250_;
goto _start;
}
}
else
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v_slice_256_; lean_object* v_nextIt_258_; 
v___x_253_ = lean_string_utf8_next_fast(v___x_185_, v_searcher_237_);
v___x_254_ = lean_nat_sub(v___x_253_, v_searcher_237_);
v___x_255_ = lean_nat_add(v_searcher_237_, v___x_254_);
lean_dec(v___x_254_);
v_slice_256_ = l_String_Slice_subslice_x21(v___x_186_, v_currPos_236_, v_searcher_237_);
lean_inc(v___x_255_);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v___x_255_);
lean_ctor_set(v___x_239_, 0, v___x_255_);
v_nextIt_258_ = v___x_239_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_255_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_255_);
v_nextIt_258_ = v_reuseFailAlloc_261_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v_startInclusive_259_; lean_object* v_endExclusive_260_; 
v_startInclusive_259_ = lean_ctor_get(v_slice_256_, 0);
lean_inc(v_startInclusive_259_);
v_endExclusive_260_ = lean_ctor_get(v_slice_256_, 1);
lean_inc(v_endExclusive_260_);
lean_dec_ref(v_slice_256_);
v_it_216_ = v_nextIt_258_;
v_startInclusive_217_ = v_startInclusive_259_;
v_endExclusive_218_ = v_endExclusive_260_;
goto v___jp_215_;
}
}
}
else
{
lean_object* v___x_262_; 
lean_del_object(v___x_239_);
lean_dec(v_searcher_237_);
v___x_262_ = lean_box(1);
lean_inc(v___x_187_);
v_it_216_ = v___x_262_;
v_startInclusive_217_ = v_currPos_236_;
v_endExclusive_218_ = v___x_187_;
goto v___jp_215_;
}
}
}
else
{
lean_object* v___x_264_; 
lean_dec(v___x_187_);
lean_dec_ref(v_relLeanFile_184_);
v___x_264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_264_, 0, v_b_189_);
lean_ctor_set(v___x_264_, 1, v___y_190_);
return v___x_264_;
}
v___jp_192_:
{
if (v___y_195_ == 0)
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = lean_string_append(v_b_189_, v___y_193_);
lean_dec_ref(v___y_193_);
v___x_197_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__0));
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
v_a_188_ = v___y_194_;
v_b_189_ = v___x_198_;
goto _start;
}
else
{
lean_dec_ref(v___y_193_);
v_a_188_ = v___y_194_;
goto _start;
}
}
v___jp_201_:
{
lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_204_ = lean_string_utf8_byte_size(v_b_189_);
v___x_205_ = lean_unsigned_to_nat(0u);
v___x_206_ = lean_nat_dec_eq(v___x_204_, v___x_205_);
if (v___x_206_ == 0)
{
v___y_193_ = v___y_202_;
v___y_194_ = v___y_203_;
v___y_195_ = v___x_206_;
goto v___jp_192_;
}
else
{
lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_string_utf8_byte_size(v___y_202_);
v___x_208_ = lean_nat_dec_eq(v___x_207_, v___x_205_);
v___y_193_ = v___y_202_;
v___y_194_ = v___y_203_;
v___y_195_ = v___x_208_;
goto v___jp_192_;
}
}
v___jp_209_:
{
if (lean_obj_tag(v___y_211_) == 0)
{
lean_object* v_a_212_; lean_object* v_a_213_; 
v_a_212_ = lean_ctor_get(v___y_211_, 0);
lean_inc(v_a_212_);
v_a_213_ = lean_ctor_get(v___y_211_, 1);
lean_inc(v_a_213_);
lean_dec_ref_known(v___y_211_, 2);
v_a_188_ = v___y_210_;
v_b_189_ = v_a_212_;
v___y_190_ = v_a_213_;
goto _start;
}
else
{
lean_dec(v___y_210_);
lean_dec(v___x_187_);
lean_dec_ref(v_relLeanFile_184_);
return v___y_211_;
}
}
v___jp_215_:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_string_utf8_extract(v___x_185_, v_startInclusive_217_, v_endExclusive_218_);
lean_dec(v_endExclusive_218_);
lean_dec(v_startInclusive_217_);
lean_inc_ref(v___x_219_);
v___x_220_ = l_Lean_Json_parse(v___x_219_);
if (lean_obj_tag(v___x_220_) == 0)
{
lean_dec_ref_known(v___x_220_, 1);
v___y_202_ = v___x_219_;
v___y_203_ = v_it_216_;
goto v___jp_201_;
}
else
{
lean_object* v_a_221_; lean_object* v___x_222_; 
v_a_221_ = lean_ctor_get(v___x_220_, 0);
lean_inc(v_a_221_);
lean_dec_ref_known(v___x_220_, 1);
v___x_222_ = l_Lean_instFromJsonSerialMessage_fromJson(v_a_221_);
if (lean_obj_tag(v___x_222_) == 1)
{
lean_object* v_a_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
lean_dec_ref(v___x_219_);
v_a_223_ = lean_ctor_get(v___x_222_, 0);
lean_inc(v_a_223_);
lean_dec_ref_known(v___x_222_, 1);
v___x_224_ = lean_string_utf8_byte_size(v_b_189_);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_nat_dec_eq(v___x_224_, v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_227_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1));
v___x_228_ = lean_string_append(v___x_227_, v_b_189_);
v___x_229_ = 1;
v___x_230_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*1, v___x_229_);
v___x_231_ = lean_box(0);
v___x_232_ = lean_array_push(v___y_190_, v___x_230_);
lean_inc_ref(v_relLeanFile_184_);
v___x_233_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(v_a_223_, v_b_189_, v_relLeanFile_184_, v___x_231_, v___x_232_);
v___y_210_ = v_it_216_;
v___y_211_ = v___x_233_;
goto v___jp_209_;
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_234_ = lean_box(0);
lean_inc_ref(v_relLeanFile_184_);
v___x_235_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___lam__0(v_a_223_, v_b_189_, v_relLeanFile_184_, v___x_234_, v___y_190_);
v___y_210_ = v_it_216_;
v___y_211_ = v___x_235_;
goto v___jp_209_;
}
}
else
{
lean_dec_ref(v___x_222_);
v___y_202_ = v___x_219_;
v___y_203_ = v_it_216_;
goto v___jp_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___boxed(lean_object* v_relLeanFile_265_, lean_object* v___x_266_, lean_object* v___x_267_, lean_object* v___x_268_, lean_object* v_a_269_, lean_object* v_b_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(v_relLeanFile_265_, v___x_266_, v___x_267_, v___x_268_, v_a_269_, v_b_270_, v___y_271_);
lean_dec_ref(v___x_267_);
lean_dec_ref(v___x_266_);
return v_res_273_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__1(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_275_ = ((lean_object*)(l_Lake_compileLeanModule___closed__0));
v___x_276_ = lean_unsigned_to_nat(2u);
v___x_277_ = lean_mk_empty_array_with_capacity(v___x_276_);
v___x_278_ = lean_array_push(v___x_277_, v___x_275_);
return v___x_278_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__9(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_287_ = ((lean_object*)(l_Lake_compileLeanModule___closed__8));
v___x_288_ = lean_unsigned_to_nat(2u);
v___x_289_ = lean_mk_empty_array_with_capacity(v___x_288_);
v___x_290_ = lean_array_push(v___x_289_, v___x_287_);
return v___x_290_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__11(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_292_ = ((lean_object*)(l_Lake_compileLeanModule___closed__10));
v___x_293_ = lean_unsigned_to_nat(2u);
v___x_294_ = lean_mk_empty_array_with_capacity(v___x_293_);
v___x_295_ = lean_array_push(v___x_294_, v___x_292_);
return v___x_295_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__13(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_298_ = lean_string_utf8_byte_size(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__15(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_300_ = ((lean_object*)(l_Lake_compileLeanModule___closed__14));
v___x_301_ = lean_unsigned_to_nat(2u);
v___x_302_ = lean_mk_empty_array_with_capacity(v___x_301_);
v___x_303_ = lean_array_push(v___x_302_, v___x_300_);
return v___x_303_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__17(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_305_ = ((lean_object*)(l_Lake_compileLeanModule___closed__16));
v___x_306_ = lean_unsigned_to_nat(2u);
v___x_307_ = lean_mk_empty_array_with_capacity(v___x_306_);
v___x_308_ = lean_array_push(v___x_307_, v___x_305_);
return v___x_308_;
}
}
static lean_object* _init_l_Lake_compileLeanModule___closed__19(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = ((lean_object*)(l_Lake_compileLeanModule___closed__18));
v___x_311_ = lean_unsigned_to_nat(2u);
v___x_312_ = lean_mk_empty_array_with_capacity(v___x_311_);
v___x_313_ = lean_array_push(v___x_312_, v___x_310_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule(lean_object* v_leanFile_314_, lean_object* v_relLeanFile_315_, lean_object* v_setup_316_, lean_object* v_setupFile_317_, lean_object* v_arts_318_, lean_object* v_leanArgs_319_, lean_object* v_leanPath_320_, lean_object* v_lean_321_, lean_object* v_leanir_322_, lean_object* v_a_323_){
_start:
{
lean_object* v___y_326_; lean_object* v_a_327_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v_olean_x3f_333_; lean_object* v_ilean_x3f_334_; lean_object* v_ir_x3f_335_; lean_object* v_c_x3f_336_; lean_object* v_bc_x3f_337_; uint8_t v___y_339_; lean_object* v_args_340_; lean_object* v___y_341_; uint8_t v___y_429_; lean_object* v_args_430_; lean_object* v___y_431_; uint8_t v___y_445_; lean_object* v___y_446_; lean_object* v___y_447_; lean_object* v___y_448_; lean_object* v___y_453_; lean_object* v___y_454_; uint8_t v___y_455_; lean_object* v_args_476_; lean_object* v___y_477_; lean_object* v_args_484_; lean_object* v___y_485_; lean_object* v_args_498_; 
v_olean_x3f_333_ = lean_ctor_get(v_arts_318_, 1);
lean_inc(v_olean_x3f_333_);
v_ilean_x3f_334_ = lean_ctor_get(v_arts_318_, 4);
lean_inc(v_ilean_x3f_334_);
v_ir_x3f_335_ = lean_ctor_get(v_arts_318_, 5);
lean_inc(v_ir_x3f_335_);
v_c_x3f_336_ = lean_ctor_get(v_arts_318_, 6);
lean_inc(v_c_x3f_336_);
v_bc_x3f_337_ = lean_ctor_get(v_arts_318_, 7);
lean_inc(v_bc_x3f_337_);
lean_dec_ref(v_arts_318_);
v_args_498_ = lean_array_push(v_leanArgs_319_, v_leanFile_314_);
if (lean_obj_tag(v_olean_x3f_333_) == 1)
{
lean_object* v_val_499_; lean_object* v___x_500_; 
v_val_499_ = lean_ctor_get(v_olean_x3f_333_, 0);
lean_inc(v_val_499_);
v___x_500_ = l_Lake_createParentDirs(v_val_499_);
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec_ref_known(v___x_500_, 1);
v___x_501_ = lean_obj_once(&l_Lake_compileLeanModule___closed__19, &l_Lake_compileLeanModule___closed__19_once, _init_l_Lake_compileLeanModule___closed__19);
lean_inc(v_val_499_);
v___x_502_ = lean_array_push(v___x_501_, v_val_499_);
v___x_503_ = l_Array_append___redArg(v_args_498_, v___x_502_);
lean_dec_ref(v___x_502_);
v_args_484_ = v___x_503_;
v___y_485_ = v_a_323_;
goto v___jp_483_;
}
else
{
lean_object* v_a_504_; lean_object* v___x_505_; uint8_t v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
lean_dec_ref_known(v_olean_x3f_333_, 1);
lean_dec_ref(v_args_498_);
lean_dec(v_bc_x3f_337_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_ilean_x3f_334_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_lean_321_);
lean_dec(v_leanPath_320_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_setup_316_);
lean_dec_ref(v_relLeanFile_315_);
v_a_504_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_500_, 1);
v___x_505_ = lean_io_error_to_string(v_a_504_);
v___x_506_ = 3;
v___x_507_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_507_, 0, v___x_505_);
lean_ctor_set_uint8(v___x_507_, sizeof(void*)*1, v___x_506_);
v___x_508_ = lean_array_get_size(v_a_323_);
v___x_509_ = lean_array_push(v_a_323_, v___x_507_);
v___x_510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
return v___x_510_;
}
}
else
{
v_args_484_ = v_args_498_;
v___y_485_ = v_a_323_;
goto v___jp_483_;
}
v___jp_325_:
{
lean_object* v___x_328_; 
v___x_328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_328_, 0, v___y_326_);
lean_ctor_set(v___x_328_, 1, v_a_327_);
return v___x_328_;
}
v___jp_329_:
{
if (lean_obj_tag(v___y_331_) == 0)
{
lean_dec(v___y_330_);
return v___y_331_;
}
else
{
lean_object* v_a_332_; 
v_a_332_ = lean_ctor_get(v___y_331_, 1);
lean_inc(v_a_332_);
lean_dec_ref_known(v___y_331_, 2);
v___y_326_ = v___y_330_;
v_a_327_ = v_a_332_;
goto v___jp_325_;
}
}
v___jp_338_:
{
lean_object* v___x_342_; 
lean_inc_ref(v_setupFile_317_);
v___x_342_ = l_Lake_createParentDirs(v_setupFile_317_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
lean_dec_ref_known(v___x_342_, 1);
v___x_343_ = l_Lean_instToJsonModuleSetup_toJson(v_setup_316_);
v___x_344_ = lean_unsigned_to_nat(80u);
v___x_345_ = l_Lean_Json_pretty(v___x_343_, v___x_344_);
v___x_346_ = l_IO_FS_writeFile(v_setupFile_317_, v___x_345_);
lean_dec_ref(v___x_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_412_; 
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_412_ == 0)
{
lean_object* v_unused_413_; 
v_unused_413_ = lean_ctor_get(v___x_346_, 0);
lean_dec(v_unused_413_);
v___x_348_ = v___x_346_;
v_isShared_349_ = v_isSharedCheck_412_;
goto v_resetjp_347_;
}
else
{
lean_dec(v___x_346_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_412_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_350_ = lean_obj_once(&l_Lake_compileLeanModule___closed__1, &l_Lake_compileLeanModule___closed__1_once, _init_l_Lake_compileLeanModule___closed__1);
lean_inc_ref(v_setupFile_317_);
v___x_351_ = lean_array_push(v___x_350_, v_setupFile_317_);
v___x_352_ = l_Array_append___redArg(v_args_340_, v___x_351_);
lean_dec_ref(v___x_351_);
v___x_353_ = ((lean_object*)(l_Lake_compileLeanModule___closed__2));
v___x_354_ = lean_array_push(v___x_352_, v___x_353_);
v___x_355_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_356_ = lean_box(0);
v___x_357_ = ((lean_object*)(l_Lake_compileLeanModule___closed__4));
v___x_358_ = l_System_SearchPath_toString(v_leanPath_320_);
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 1);
lean_ctor_set(v___x_348_, 0, v___x_358_);
v___x_360_ = v___x_348_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_358_);
v___x_360_ = v_reuseFailAlloc_411_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; uint8_t v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_357_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = lean_mk_empty_array_with_capacity(v___x_362_);
v___x_364_ = lean_array_push(v___x_363_, v___x_361_);
v___x_365_ = 1;
v___x_366_ = 0;
lean_inc_ref(v___x_364_);
lean_inc_ref(v_lean_321_);
v___x_367_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_367_, 0, v___x_355_);
lean_ctor_set(v___x_367_, 1, v_lean_321_);
lean_ctor_set(v___x_367_, 2, v___x_354_);
lean_ctor_set(v___x_367_, 3, v___x_356_);
lean_ctor_set(v___x_367_, 4, v___x_364_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*5, v___x_365_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*5 + 1, v___x_366_);
v___x_368_ = lean_array_get_size(v___y_341_);
lean_inc_ref(v___x_367_);
v___x_369_ = l_Lake_mkCmdLog(v___x_367_);
v___x_370_ = 0;
v___x_371_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_371_, 0, v___x_369_);
lean_ctor_set_uint8(v___x_371_, sizeof(void*)*1, v___x_370_);
v___x_372_ = lean_array_push(v___y_341_, v___x_371_);
v___x_373_ = l_IO_Process_output(v___x_367_, v___x_356_);
if (lean_obj_tag(v___x_373_) == 0)
{
lean_object* v_a_374_; uint32_t v_exitCode_375_; lean_object* v_stdout_376_; lean_object* v_stderr_377_; lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; 
lean_dec_ref(v_lean_321_);
v_a_374_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_374_);
lean_dec_ref_known(v___x_373_, 1);
v_exitCode_375_ = lean_ctor_get_uint32(v_a_374_, sizeof(void*)*2);
v_stdout_376_ = lean_ctor_get(v_a_374_, 0);
lean_inc_ref(v_stdout_376_);
v_stderr_377_ = lean_ctor_get(v_a_374_, 1);
lean_inc_ref(v_stderr_377_);
lean_dec(v_a_374_);
v___x_378_ = lean_string_utf8_byte_size(v_stdout_376_);
v___x_379_ = lean_unsigned_to_nat(0u);
v___x_380_ = lean_nat_dec_eq(v___x_378_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
lean_inc_ref(v_stdout_376_);
v___x_381_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_381_, 0, v_stdout_376_);
lean_ctor_set(v___x_381_, 1, v___x_379_);
lean_ctor_set(v___x_381_, 2, v___x_378_);
v___x_382_ = ((lean_object*)(l_Lake_compileLeanModule___closed__5));
v___x_383_ = l_String_Slice_splitToSubslice___at___00Lake_compileLeanModule_spec__0(v___x_381_);
v___x_384_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(v_relLeanFile_315_, v_stdout_376_, v___x_381_, v___x_378_, v___x_383_, v___x_382_, v___x_372_);
lean_dec_ref_known(v___x_381_, 3);
lean_dec_ref(v_stdout_376_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v_a_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
v_a_386_ = lean_ctor_get(v___x_384_, 1);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_384_, 2);
v___x_387_ = lean_string_utf8_byte_size(v_a_385_);
v___x_388_ = lean_nat_dec_eq(v___x_387_, v___x_379_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_389_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg___closed__1));
v___x_390_ = lean_string_append(v___x_389_, v_a_385_);
lean_dec(v_a_385_);
v___x_391_ = 1;
v___x_392_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*1, v___x_391_);
v___x_393_ = lean_box(0);
v___x_394_ = lean_array_push(v_a_386_, v___x_392_);
v___x_395_ = l_Lake_compileLeanModule___lam__0(v_exitCode_375_, v___y_339_, v_ir_x3f_335_, v_c_x3f_336_, v_setupFile_317_, v___x_355_, v_leanir_322_, v___x_356_, v___x_364_, v___x_365_, v___x_366_, v_olean_x3f_333_, v_stderr_377_, v___x_393_, v___x_394_);
lean_dec(v_olean_x3f_333_);
v___y_330_ = v___x_368_;
v___y_331_ = v___x_395_;
goto v___jp_329_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; 
lean_dec(v_a_385_);
v___x_396_ = lean_box(0);
v___x_397_ = l_Lake_compileLeanModule___lam__0(v_exitCode_375_, v___y_339_, v_ir_x3f_335_, v_c_x3f_336_, v_setupFile_317_, v___x_355_, v_leanir_322_, v___x_356_, v___x_364_, v___x_365_, v___x_366_, v_olean_x3f_333_, v_stderr_377_, v___x_396_, v_a_386_);
lean_dec(v_olean_x3f_333_);
v___y_330_ = v___x_368_;
v___y_331_ = v___x_397_;
goto v___jp_329_;
}
}
else
{
lean_object* v_a_398_; 
lean_dec_ref(v_stderr_377_);
lean_dec_ref(v___x_364_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_setupFile_317_);
v_a_398_ = lean_ctor_get(v___x_384_, 1);
lean_inc(v_a_398_);
lean_dec_ref_known(v___x_384_, 2);
v___y_326_ = v___x_368_;
v_a_327_ = v_a_398_;
goto v___jp_325_;
}
}
else
{
lean_object* v___x_399_; lean_object* v___x_400_; 
lean_dec_ref(v_stdout_376_);
lean_dec_ref(v_relLeanFile_315_);
v___x_399_ = lean_box(0);
v___x_400_ = l_Lake_compileLeanModule___lam__0(v_exitCode_375_, v___y_339_, v_ir_x3f_335_, v_c_x3f_336_, v_setupFile_317_, v___x_355_, v_leanir_322_, v___x_356_, v___x_364_, v___x_365_, v___x_366_, v_olean_x3f_333_, v_stderr_377_, v___x_399_, v___x_372_);
lean_dec(v_olean_x3f_333_);
v___y_330_ = v___x_368_;
v___y_331_ = v___x_400_;
goto v___jp_329_;
}
}
else
{
lean_object* v_a_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec_ref(v___x_364_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_relLeanFile_315_);
v_a_401_ = lean_ctor_get(v___x_373_, 0);
lean_inc(v_a_401_);
lean_dec_ref_known(v___x_373_, 1);
v___x_402_ = ((lean_object*)(l_Lake_compileLeanModule___closed__6));
v___x_403_ = lean_string_append(v___x_402_, v_lean_321_);
lean_dec_ref(v_lean_321_);
v___x_404_ = ((lean_object*)(l_Lake_compileLeanModule___closed__7));
v___x_405_ = lean_string_append(v___x_403_, v___x_404_);
v___x_406_ = lean_io_error_to_string(v_a_401_);
v___x_407_ = lean_string_append(v___x_405_, v___x_406_);
lean_dec_ref(v___x_406_);
v___x_408_ = 3;
v___x_409_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*1, v___x_408_);
v___x_410_ = lean_array_push(v___x_372_, v___x_409_);
v___y_326_ = v___x_368_;
v_a_327_ = v___x_410_;
goto v___jp_325_;
}
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_415_; uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
lean_dec_ref(v_args_340_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_lean_321_);
lean_dec(v_leanPath_320_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_relLeanFile_315_);
v_a_414_ = lean_ctor_get(v___x_346_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_346_, 1);
v___x_415_ = lean_io_error_to_string(v_a_414_);
v___x_416_ = 3;
v___x_417_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_417_, 0, v___x_415_);
lean_ctor_set_uint8(v___x_417_, sizeof(void*)*1, v___x_416_);
v___x_418_ = lean_array_get_size(v___y_341_);
v___x_419_ = lean_array_push(v___y_341_, v___x_417_);
v___x_420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_420_, 0, v___x_418_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
return v___x_420_;
}
}
else
{
lean_object* v_a_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
lean_dec_ref(v_args_340_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_lean_321_);
lean_dec(v_leanPath_320_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_setup_316_);
lean_dec_ref(v_relLeanFile_315_);
v_a_421_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_421_);
lean_dec_ref_known(v___x_342_, 1);
v___x_422_ = lean_io_error_to_string(v_a_421_);
v___x_423_ = 3;
v___x_424_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set_uint8(v___x_424_, sizeof(void*)*1, v___x_423_);
v___x_425_ = lean_array_get_size(v___y_341_);
v___x_426_ = lean_array_push(v___y_341_, v___x_424_);
v___x_427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_425_);
lean_ctor_set(v___x_427_, 1, v___x_426_);
return v___x_427_;
}
}
v___jp_428_:
{
if (lean_obj_tag(v_bc_x3f_337_) == 1)
{
lean_object* v_val_432_; lean_object* v___x_433_; 
v_val_432_ = lean_ctor_get(v_bc_x3f_337_, 0);
lean_inc_n(v_val_432_, 2);
lean_dec_ref_known(v_bc_x3f_337_, 1);
v___x_433_ = l_Lake_createParentDirs(v_val_432_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec_ref_known(v___x_433_, 1);
v___x_434_ = lean_obj_once(&l_Lake_compileLeanModule___closed__9, &l_Lake_compileLeanModule___closed__9_once, _init_l_Lake_compileLeanModule___closed__9);
v___x_435_ = lean_array_push(v___x_434_, v_val_432_);
v___x_436_ = l_Array_append___redArg(v_args_430_, v___x_435_);
lean_dec_ref(v___x_435_);
v___y_339_ = v___y_429_;
v_args_340_ = v___x_436_;
v___y_341_ = v___y_431_;
goto v___jp_338_;
}
else
{
lean_object* v_a_437_; lean_object* v___x_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
lean_dec(v_val_432_);
lean_dec_ref(v_args_430_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_lean_321_);
lean_dec(v_leanPath_320_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_setup_316_);
lean_dec_ref(v_relLeanFile_315_);
v_a_437_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___x_433_, 1);
v___x_438_ = lean_io_error_to_string(v_a_437_);
v___x_439_ = 3;
v___x_440_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_440_, 0, v___x_438_);
lean_ctor_set_uint8(v___x_440_, sizeof(void*)*1, v___x_439_);
v___x_441_ = lean_array_get_size(v___y_431_);
v___x_442_ = lean_array_push(v___y_431_, v___x_440_);
v___x_443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
return v___x_443_;
}
}
else
{
lean_dec(v_bc_x3f_337_);
v___y_339_ = v___y_429_;
v_args_340_ = v_args_430_;
v___y_341_ = v___y_431_;
goto v___jp_338_;
}
}
v___jp_444_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_obj_once(&l_Lake_compileLeanModule___closed__11, &l_Lake_compileLeanModule___closed__11_once, _init_l_Lake_compileLeanModule___closed__11);
v___x_450_ = lean_array_push(v___x_449_, v___y_448_);
v___x_451_ = l_Array_append___redArg(v___y_446_, v___x_450_);
lean_dec_ref(v___x_450_);
v___y_429_ = v___y_445_;
v_args_430_ = v___x_451_;
v___y_431_ = v___y_447_;
goto v___jp_428_;
}
v___jp_452_:
{
if (lean_obj_tag(v_c_x3f_336_) == 1)
{
lean_object* v_val_456_; lean_object* v___x_457_; 
v_val_456_ = lean_ctor_get(v_c_x3f_336_, 0);
lean_inc(v_val_456_);
v___x_457_ = l_Lake_createParentDirs(v_val_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
lean_dec_ref_known(v___x_457_, 1);
v___x_458_ = ((lean_object*)(l_Lake_compileLeanModule___closed__12));
v___x_459_ = lean_string_utf8_byte_size(v_val_456_);
v___x_460_ = lean_obj_once(&l_Lake_compileLeanModule___closed__13, &l_Lake_compileLeanModule___closed__13_once, _init_l_Lake_compileLeanModule___closed__13);
v___x_461_ = lean_nat_dec_le(v___x_460_, v___x_459_);
if (v___x_461_ == 0)
{
lean_inc(v_val_456_);
v___y_445_ = v___y_455_;
v___y_446_ = v___y_453_;
v___y_447_ = v___y_454_;
v___y_448_ = v_val_456_;
goto v___jp_444_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = lean_nat_sub(v___x_459_, v___x_460_);
v___x_464_ = lean_string_memcmp(v_val_456_, v___x_458_, v___x_463_, v___x_462_, v___x_460_);
lean_dec(v___x_463_);
if (v___x_464_ == 0)
{
lean_inc(v_val_456_);
v___y_445_ = v___y_455_;
v___y_446_ = v___y_453_;
v___y_447_ = v___y_454_;
v___y_448_ = v_val_456_;
goto v___jp_444_;
}
else
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = lean_obj_once(&l_Lake_compileLeanModule___closed__15, &l_Lake_compileLeanModule___closed__15_once, _init_l_Lake_compileLeanModule___closed__15);
lean_inc(v_val_456_);
v___x_466_ = lean_array_push(v___x_465_, v_val_456_);
v___x_467_ = l_Array_append___redArg(v___y_453_, v___x_466_);
lean_dec_ref(v___x_466_);
v___y_429_ = v___y_455_;
v_args_430_ = v___x_467_;
v___y_431_ = v___y_454_;
goto v___jp_428_;
}
}
}
else
{
lean_object* v_a_468_; lean_object* v___x_469_; uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec_ref_known(v_c_x3f_336_, 1);
lean_dec_ref(v___y_453_);
lean_dec(v_bc_x3f_337_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_lean_321_);
lean_dec(v_leanPath_320_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_setup_316_);
lean_dec_ref(v_relLeanFile_315_);
v_a_468_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_457_, 1);
v___x_469_ = lean_io_error_to_string(v_a_468_);
v___x_470_ = 3;
v___x_471_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set_uint8(v___x_471_, sizeof(void*)*1, v___x_470_);
v___x_472_ = lean_array_get_size(v___y_454_);
v___x_473_ = lean_array_push(v___y_454_, v___x_471_);
v___x_474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
return v___x_474_;
}
}
else
{
v___y_429_ = v___y_455_;
v_args_430_ = v___y_453_;
v___y_431_ = v___y_454_;
goto v___jp_428_;
}
}
v___jp_475_:
{
uint8_t v_isModule_478_; 
v_isModule_478_ = lean_ctor_get_uint8(v_setup_316_, sizeof(void*)*7);
if (v_isModule_478_ == 0)
{
v___y_453_ = v_args_476_;
v___y_454_ = v___y_477_;
v___y_455_ = v_isModule_478_;
goto v___jp_452_;
}
else
{
lean_object* v_options_479_; lean_object* v_opts_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_options_479_ = lean_ctor_get(v_setup_316_, 6);
lean_inc(v_options_479_);
v_opts_480_ = l_Lean_LeanOptions_toOptions(v_options_479_);
v___x_481_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_482_ = l_Lean_Option_get___at___00Lake_compileLeanModule_spec__2(v_opts_480_, v___x_481_);
lean_dec_ref(v_opts_480_);
if (v___x_482_ == 0)
{
v___y_453_ = v_args_476_;
v___y_454_ = v___y_477_;
v___y_455_ = v___x_482_;
goto v___jp_452_;
}
else
{
v___y_429_ = v___x_482_;
v_args_430_ = v_args_476_;
v___y_431_ = v___y_477_;
goto v___jp_428_;
}
}
}
v___jp_483_:
{
if (lean_obj_tag(v_ilean_x3f_334_) == 1)
{
lean_object* v_val_486_; lean_object* v___x_487_; 
v_val_486_ = lean_ctor_get(v_ilean_x3f_334_, 0);
lean_inc_n(v_val_486_, 2);
lean_dec_ref_known(v_ilean_x3f_334_, 1);
v___x_487_ = l_Lake_createParentDirs(v_val_486_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref_known(v___x_487_, 1);
v___x_488_ = lean_obj_once(&l_Lake_compileLeanModule___closed__17, &l_Lake_compileLeanModule___closed__17_once, _init_l_Lake_compileLeanModule___closed__17);
v___x_489_ = lean_array_push(v___x_488_, v_val_486_);
v___x_490_ = l_Array_append___redArg(v_args_484_, v___x_489_);
lean_dec_ref(v___x_489_);
v_args_476_ = v___x_490_;
v___y_477_ = v___y_485_;
goto v___jp_475_;
}
else
{
lean_object* v_a_491_; lean_object* v___x_492_; uint8_t v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
lean_dec(v_val_486_);
lean_dec_ref(v_args_484_);
lean_dec(v_bc_x3f_337_);
lean_dec(v_c_x3f_336_);
lean_dec(v_ir_x3f_335_);
lean_dec(v_olean_x3f_333_);
lean_dec_ref(v_leanir_322_);
lean_dec_ref(v_lean_321_);
lean_dec(v_leanPath_320_);
lean_dec_ref(v_setupFile_317_);
lean_dec_ref(v_setup_316_);
lean_dec_ref(v_relLeanFile_315_);
v_a_491_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_487_, 1);
v___x_492_ = lean_io_error_to_string(v_a_491_);
v___x_493_ = 3;
v___x_494_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set_uint8(v___x_494_, sizeof(void*)*1, v___x_493_);
v___x_495_ = lean_array_get_size(v___y_485_);
v___x_496_ = lean_array_push(v___y_485_, v___x_494_);
v___x_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
return v___x_497_;
}
}
else
{
lean_dec(v_ilean_x3f_334_);
v_args_476_ = v_args_484_;
v___y_477_ = v___y_485_;
goto v___jp_475_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileLeanModule___boxed(lean_object* v_leanFile_511_, lean_object* v_relLeanFile_512_, lean_object* v_setup_513_, lean_object* v_setupFile_514_, lean_object* v_arts_515_, lean_object* v_leanArgs_516_, lean_object* v_leanPath_517_, lean_object* v_lean_518_, lean_object* v_leanir_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lake_compileLeanModule(v_leanFile_511_, v_relLeanFile_512_, v_setup_513_, v_setupFile_514_, v_arts_515_, v_leanArgs_516_, v_leanPath_517_, v_lean_518_, v_leanir_519_, v_a_520_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1(lean_object* v_relLeanFile_523_, lean_object* v___x_524_, lean_object* v___x_525_, lean_object* v___x_526_, lean_object* v_inst_527_, lean_object* v_R_528_, lean_object* v_a_529_, lean_object* v_b_530_, lean_object* v_c_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___redArg(v_relLeanFile_523_, v___x_524_, v___x_525_, v___x_526_, v_a_529_, v_b_530_, v___y_532_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1___boxed(lean_object* v_relLeanFile_535_, lean_object* v___x_536_, lean_object* v___x_537_, lean_object* v___x_538_, lean_object* v_inst_539_, lean_object* v_R_540_, lean_object* v_a_541_, lean_object* v_b_542_, lean_object* v_c_543_, lean_object* v___y_544_, lean_object* v___y_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_WellFounded_opaqueFix_u2083___at___00Lake_compileLeanModule_spec__1(v_relLeanFile_535_, v___x_536_, v___x_537_, v___x_538_, v_inst_539_, v_R_540_, v_a_541_, v_b_542_, v_c_543_, v___y_544_);
lean_dec_ref(v___x_537_);
lean_dec_ref(v___x_536_);
return v_res_546_;
}
}
static lean_object* _init_l_Lake_compileO___closed__0(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_547_ = ((lean_object*)(l_Lake_compileLeanModule___closed__10));
v___x_548_ = lean_unsigned_to_nat(4u);
v___x_549_ = lean_mk_empty_array_with_capacity(v___x_548_);
v___x_550_ = lean_array_push(v___x_549_, v___x_547_);
return v___x_550_;
}
}
static lean_object* _init_l_Lake_compileO___closed__1(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_551_ = ((lean_object*)(l_Lake_compileLeanModule___closed__18));
v___x_552_ = lean_obj_once(&l_Lake_compileO___closed__0, &l_Lake_compileO___closed__0_once, _init_l_Lake_compileO___closed__0);
v___x_553_ = lean_array_push(v___x_552_, v___x_551_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileO(lean_object* v_oFile_556_, lean_object* v_srcFile_557_, lean_object* v_moreArgs_558_, lean_object* v_compiler_559_, lean_object* v_a_560_){
_start:
{
lean_object* v___x_562_; 
lean_inc_ref(v_oFile_556_);
v___x_562_ = l_Lake_createParentDirs(v_oFile_556_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; uint8_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec_ref_known(v___x_562_, 1);
v___x_563_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_564_ = lean_obj_once(&l_Lake_compileO___closed__1, &l_Lake_compileO___closed__1_once, _init_l_Lake_compileO___closed__1);
v___x_565_ = lean_array_push(v___x_564_, v_oFile_556_);
v___x_566_ = lean_array_push(v___x_565_, v_srcFile_557_);
v___x_567_ = l_Array_append___redArg(v___x_566_, v_moreArgs_558_);
v___x_568_ = lean_box(0);
v___x_569_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_570_ = 1;
v___x_571_ = 0;
v___x_572_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_572_, 0, v___x_563_);
lean_ctor_set(v___x_572_, 1, v_compiler_559_);
lean_ctor_set(v___x_572_, 2, v___x_567_);
lean_ctor_set(v___x_572_, 3, v___x_568_);
lean_ctor_set(v___x_572_, 4, v___x_569_);
lean_ctor_set_uint8(v___x_572_, sizeof(void*)*5, v___x_570_);
lean_ctor_set_uint8(v___x_572_, sizeof(void*)*5 + 1, v___x_571_);
v___x_573_ = l_Lake_proc(v___x_572_, v___x_571_, v_a_560_);
return v___x_573_;
}
else
{
lean_object* v_a_574_; lean_object* v___x_575_; uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
lean_dec_ref(v_compiler_559_);
lean_dec_ref(v_srcFile_557_);
lean_dec_ref(v_oFile_556_);
v_a_574_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_562_, 1);
v___x_575_ = lean_io_error_to_string(v_a_574_);
v___x_576_ = 3;
v___x_577_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_577_, 0, v___x_575_);
lean_ctor_set_uint8(v___x_577_, sizeof(void*)*1, v___x_576_);
v___x_578_ = lean_array_get_size(v_a_560_);
v___x_579_ = lean_array_push(v_a_560_, v___x_577_);
v___x_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_578_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
return v___x_580_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileO___boxed(lean_object* v_oFile_581_, lean_object* v_srcFile_582_, lean_object* v_moreArgs_583_, lean_object* v_compiler_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lake_compileO(v_oFile_581_, v_srcFile_582_, v_moreArgs_583_, v_compiler_584_, v_a_585_);
lean_dec_ref(v_moreArgs_583_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(lean_object* v___x_588_, lean_object* v___y_589_, lean_object* v_a_590_, lean_object* v_b_591_){
_start:
{
lean_object* v_startInclusive_592_; lean_object* v_endExclusive_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v_startInclusive_592_ = lean_ctor_get(v___x_588_, 1);
v_endExclusive_593_ = lean_ctor_get(v___x_588_, 2);
v___x_594_ = lean_nat_sub(v_endExclusive_593_, v_startInclusive_592_);
v___x_595_ = lean_nat_dec_eq(v_a_590_, v___x_594_);
lean_dec(v___x_594_);
if (v___x_595_ == 0)
{
uint32_t v___x_596_; lean_object* v___x_597_; uint32_t v___x_598_; uint8_t v___y_600_; uint8_t v___x_606_; 
v___x_596_ = lean_string_utf8_get_fast(v___y_589_, v_a_590_);
v___x_597_ = lean_string_utf8_next_fast(v___y_589_, v_a_590_);
lean_dec(v_a_590_);
v___x_598_ = 92;
v___x_606_ = lean_uint32_dec_eq(v___x_596_, v___x_598_);
if (v___x_606_ == 0)
{
uint32_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = 34;
v___x_608_ = lean_uint32_dec_eq(v___x_596_, v___x_607_);
v___y_600_ = v___x_608_;
goto v___jp_599_;
}
else
{
v___y_600_ = v___x_606_;
goto v___jp_599_;
}
v___jp_599_:
{
if (v___y_600_ == 0)
{
lean_object* v___x_601_; 
v___x_601_ = lean_string_push(v_b_591_, v___x_596_);
v_a_590_ = v___x_597_;
v_b_591_ = v___x_601_;
goto _start;
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_string_push(v_b_591_, v___x_598_);
v___x_604_ = lean_string_push(v___x_603_, v___x_596_);
v_a_590_ = v___x_597_;
v_b_591_ = v___x_604_;
goto _start;
}
}
}
else
{
lean_dec(v_a_590_);
return v_b_591_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg___boxed(lean_object* v___x_609_, lean_object* v___y_610_, lean_object* v_a_611_, lean_object* v_b_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_609_, v___y_610_, v_a_611_, v_b_612_);
lean_dec_ref(v___y_610_);
lean_dec_ref(v___x_609_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(lean_object* v_a_616_, lean_object* v_as_617_, size_t v_i_618_, size_t v_stop_619_, lean_object* v_b_620_, lean_object* v___y_621_){
_start:
{
uint8_t v___x_623_; 
v___x_623_ = lean_usize_dec_eq(v_i_618_, v_stop_619_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_624_ = lean_array_uget_borrowed(v_as_617_, v_i_618_);
v___x_625_ = ((lean_object*)(l_Lake_compileLeanModule___closed__5));
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = lean_string_utf8_byte_size(v___x_624_);
lean_inc(v___x_624_);
v___x_628_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_628_, 0, v___x_624_);
lean_ctor_set(v___x_628_, 1, v___x_626_);
lean_ctor_set(v___x_628_, 2, v___x_627_);
v___x_629_ = l_String_Slice_positions(v___x_628_);
v___x_630_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_628_, v___x_624_, v___x_629_, v___x_625_);
lean_dec_ref_known(v___x_628_, 3);
v___x_631_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__0));
v___x_632_ = lean_string_append(v___x_631_, v___x_630_);
lean_dec_ref(v___x_630_);
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___closed__1));
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
v___x_635_ = lean_io_prim_handle_put_str(v_a_616_, v___x_634_);
lean_dec_ref(v___x_634_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; size_t v___x_637_; size_t v___x_638_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
v___x_637_ = ((size_t)1ULL);
v___x_638_ = lean_usize_add(v_i_618_, v___x_637_);
v_i_618_ = v___x_638_;
v_b_620_ = v_a_636_;
goto _start;
}
else
{
lean_object* v_a_640_; lean_object* v___x_641_; uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_a_640_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_635_, 1);
v___x_641_ = lean_io_error_to_string(v_a_640_);
v___x_642_ = 3;
v___x_643_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set_uint8(v___x_643_, sizeof(void*)*1, v___x_642_);
v___x_644_ = lean_array_get_size(v___y_621_);
v___x_645_ = lean_array_push(v___y_621_, v___x_643_);
v___x_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v_b_620_);
lean_ctor_set(v___x_647_, 1, v___y_621_);
return v___x_647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1___boxed(lean_object* v_a_648_, lean_object* v_as_649_, lean_object* v_i_650_, lean_object* v_stop_651_, lean_object* v_b_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
size_t v_i_boxed_655_; size_t v_stop_boxed_656_; lean_object* v_res_657_; 
v_i_boxed_655_ = lean_unbox_usize(v_i_650_);
lean_dec(v_i_650_);
v_stop_boxed_656_ = lean_unbox_usize(v_stop_651_);
lean_dec(v_stop_651_);
v_res_657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_648_, v_as_649_, v_i_boxed_655_, v_stop_boxed_656_, v_b_652_, v___y_653_);
lean_dec_ref(v_as_649_);
lean_dec(v_a_648_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs(lean_object* v_basePath_660_, lean_object* v_args_661_, lean_object* v_a_662_){
_start:
{
lean_object* v___x_664_; lean_object* v_rspFile_665_; lean_object* v_a_667_; lean_object* v___y_675_; uint8_t v___x_686_; lean_object* v___x_687_; 
v___x_664_ = ((lean_object*)(l_Lake_mkArgs___closed__0));
v_rspFile_665_ = l_System_FilePath_addExtension(v_basePath_660_, v___x_664_);
v___x_686_ = 1;
v___x_687_ = lean_io_prim_handle_mk(v_rspFile_665_, v___x_686_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = lean_unsigned_to_nat(0u);
v___x_690_ = lean_array_get_size(v_args_661_);
v___x_691_ = lean_nat_dec_lt(v___x_689_, v___x_690_);
if (v___x_691_ == 0)
{
lean_dec(v_a_688_);
v_a_667_ = v_a_662_;
goto v___jp_666_;
}
else
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = lean_box(0);
v___x_693_ = lean_nat_dec_le(v___x_690_, v___x_690_);
if (v___x_693_ == 0)
{
if (v___x_691_ == 0)
{
lean_dec(v_a_688_);
v_a_667_ = v_a_662_;
goto v___jp_666_;
}
else
{
size_t v___x_694_; size_t v___x_695_; lean_object* v___x_696_; 
v___x_694_ = ((size_t)0ULL);
v___x_695_ = lean_usize_of_nat(v___x_690_);
v___x_696_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_688_, v_args_661_, v___x_694_, v___x_695_, v___x_692_, v_a_662_);
lean_dec(v_a_688_);
v___y_675_ = v___x_696_;
goto v___jp_674_;
}
}
else
{
size_t v___x_697_; size_t v___x_698_; lean_object* v___x_699_; 
v___x_697_ = ((size_t)0ULL);
v___x_698_ = lean_usize_of_nat(v___x_690_);
v___x_699_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_mkArgs_spec__1(v_a_688_, v_args_661_, v___x_697_, v___x_698_, v___x_692_, v_a_662_);
lean_dec(v_a_688_);
v___y_675_ = v___x_699_;
goto v___jp_674_;
}
}
}
else
{
lean_object* v_a_700_; lean_object* v___x_701_; uint8_t v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
lean_dec_ref(v_rspFile_665_);
v_a_700_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_700_);
lean_dec_ref_known(v___x_687_, 1);
v___x_701_ = lean_io_error_to_string(v_a_700_);
v___x_702_ = 3;
v___x_703_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_703_, 0, v___x_701_);
lean_ctor_set_uint8(v___x_703_, sizeof(void*)*1, v___x_702_);
v___x_704_ = lean_array_get_size(v_a_662_);
v___x_705_ = lean_array_push(v_a_662_, v___x_703_);
v___x_706_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_706_, 0, v___x_704_);
lean_ctor_set(v___x_706_, 1, v___x_705_);
return v___x_706_;
}
v___jp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_668_ = ((lean_object*)(l_Lake_mkArgs___closed__1));
v___x_669_ = lean_string_append(v___x_668_, v_rspFile_665_);
lean_dec_ref(v_rspFile_665_);
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_mk_empty_array_with_capacity(v___x_670_);
v___x_672_ = lean_array_push(v___x_671_, v___x_669_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v_a_667_);
return v___x_673_;
}
v___jp_674_:
{
if (lean_obj_tag(v___y_675_) == 0)
{
lean_object* v_a_676_; 
v_a_676_ = lean_ctor_get(v___y_675_, 1);
lean_inc(v_a_676_);
lean_dec_ref_known(v___y_675_, 2);
v_a_667_ = v_a_676_;
goto v___jp_666_;
}
else
{
lean_object* v_a_677_; lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v_rspFile_665_);
v_a_677_ = lean_ctor_get(v___y_675_, 0);
v_a_678_ = lean_ctor_get(v___y_675_, 1);
v_isSharedCheck_685_ = !lean_is_exclusive(v___y_675_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___y_675_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_inc(v_a_677_);
lean_dec(v___y_675_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_677_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mkArgs___boxed(lean_object* v_basePath_707_, lean_object* v_args_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lake_mkArgs(v_basePath_707_, v_args_708_, v_a_709_);
lean_dec_ref(v_args_708_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(lean_object* v___x_712_, lean_object* v___y_713_, lean_object* v_inst_714_, lean_object* v_R_715_, lean_object* v_a_716_, lean_object* v_b_717_, lean_object* v_c_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___redArg(v___x_712_, v___y_713_, v_a_716_, v_b_717_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0___boxed(lean_object* v___x_720_, lean_object* v___y_721_, lean_object* v_inst_722_, lean_object* v_R_723_, lean_object* v_a_724_, lean_object* v_b_725_, lean_object* v_c_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_WellFounded_opaqueFix_u2083___at___00Lake_mkArgs_spec__0(v___x_720_, v___y_721_, v_inst_722_, v_R_723_, v_a_724_, v_b_725_, v_c_726_);
lean_dec_ref(v___y_721_);
lean_dec_ref(v___x_720_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(size_t v_sz_728_, size_t v_i_729_, lean_object* v_bs_730_){
_start:
{
uint8_t v___x_731_; 
v___x_731_ = lean_usize_dec_lt(v_i_729_, v_sz_728_);
if (v___x_731_ == 0)
{
return v_bs_730_;
}
else
{
lean_object* v_v_732_; lean_object* v___x_733_; lean_object* v_bs_x27_734_; size_t v___x_735_; size_t v___x_736_; lean_object* v___x_737_; 
v_v_732_ = lean_array_uget(v_bs_730_, v_i_729_);
v___x_733_ = lean_unsigned_to_nat(0u);
v_bs_x27_734_ = lean_array_uset(v_bs_730_, v_i_729_, v___x_733_);
v___x_735_ = ((size_t)1ULL);
v___x_736_ = lean_usize_add(v_i_729_, v___x_735_);
v___x_737_ = lean_array_uset(v_bs_x27_734_, v_i_729_, v_v_732_);
v_i_729_ = v___x_736_;
v_bs_730_ = v___x_737_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0___boxed(lean_object* v_sz_739_, lean_object* v_i_740_, lean_object* v_bs_741_){
_start:
{
size_t v_sz_boxed_742_; size_t v_i_boxed_743_; lean_object* v_res_744_; 
v_sz_boxed_742_ = lean_unbox_usize(v_sz_739_);
lean_dec(v_sz_739_);
v_i_boxed_743_ = lean_unbox_usize(v_i_740_);
lean_dec(v_i_740_);
v_res_744_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_boxed_742_, v_i_boxed_743_, v_bs_741_);
return v_res_744_;
}
}
static lean_object* _init_l_Lake_compileStaticLib___closed__3(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_751_ = ((lean_object*)(l_Lake_compileStaticLib___closed__2));
v___x_752_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_753_ = lean_array_push(v___x_752_, v___x_751_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib(lean_object* v_libFile_754_, lean_object* v_oFiles_755_, lean_object* v_ar_756_, uint8_t v_thin_757_, lean_object* v_a_758_){
_start:
{
lean_object* v___x_760_; 
lean_inc_ref(v_libFile_754_);
v___x_760_ = l_Lake_createParentDirs(v_libFile_754_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v___x_761_; 
lean_dec_ref_known(v___x_760_, 1);
v___x_761_ = l_Lake_removeFileIfExists(v_libFile_754_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v___y_765_; 
lean_dec_ref_known(v___x_761_, 1);
v___x_762_ = ((lean_object*)(l_Lake_compileStaticLib___closed__1));
v___x_763_ = 1;
if (v_thin_757_ == 0)
{
v___y_765_ = v___x_762_;
goto v___jp_764_;
}
else
{
lean_object* v___x_789_; 
v___x_789_ = lean_obj_once(&l_Lake_compileStaticLib___closed__3, &l_Lake_compileStaticLib___closed__3_once, _init_l_Lake_compileStaticLib___closed__3);
v___y_765_ = v___x_789_;
goto v___jp_764_;
}
v___jp_764_:
{
size_t v_sz_766_; size_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_sz_766_ = lean_array_size(v_oFiles_755_);
v___x_767_ = ((size_t)0ULL);
v___x_768_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_compileStaticLib_spec__0(v_sz_766_, v___x_767_, v_oFiles_755_);
lean_inc_ref(v_libFile_754_);
v___x_769_ = l_Lake_mkArgs(v_libFile_754_, v___x_768_, v_a_758_);
lean_dec_ref(v___x_768_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v_a_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
v_a_771_ = lean_ctor_get(v___x_769_, 1);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_769_, 2);
lean_inc_ref(v___y_765_);
v___x_772_ = lean_array_push(v___y_765_, v_libFile_754_);
v___x_773_ = l_Array_append___redArg(v___x_772_, v_a_770_);
lean_dec(v_a_770_);
v___x_774_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_775_ = lean_box(0);
v___x_776_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_777_ = 0;
v___x_778_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_778_, 0, v___x_774_);
lean_ctor_set(v___x_778_, 1, v_ar_756_);
lean_ctor_set(v___x_778_, 2, v___x_773_);
lean_ctor_set(v___x_778_, 3, v___x_775_);
lean_ctor_set(v___x_778_, 4, v___x_776_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*5, v___x_763_);
lean_ctor_set_uint8(v___x_778_, sizeof(void*)*5 + 1, v___x_777_);
v___x_779_ = l_Lake_proc(v___x_778_, v___x_777_, v_a_771_);
return v___x_779_;
}
else
{
lean_object* v_a_780_; lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec_ref(v_ar_756_);
lean_dec_ref(v_libFile_754_);
v_a_780_ = lean_ctor_get(v___x_769_, 0);
v_a_781_ = lean_ctor_get(v___x_769_, 1);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_769_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_inc(v_a_780_);
lean_dec(v___x_769_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_780_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_791_; uint8_t v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
lean_dec_ref(v_ar_756_);
lean_dec_ref(v_oFiles_755_);
lean_dec_ref(v_libFile_754_);
v_a_790_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_a_790_);
lean_dec_ref_known(v___x_761_, 1);
v___x_791_ = lean_io_error_to_string(v_a_790_);
v___x_792_ = 3;
v___x_793_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_793_, 0, v___x_791_);
lean_ctor_set_uint8(v___x_793_, sizeof(void*)*1, v___x_792_);
v___x_794_ = lean_array_get_size(v_a_758_);
v___x_795_ = lean_array_push(v_a_758_, v___x_793_);
v___x_796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_794_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
return v___x_796_;
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
lean_dec_ref(v_ar_756_);
lean_dec_ref(v_oFiles_755_);
lean_dec_ref(v_libFile_754_);
v_a_797_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_760_, 1);
v___x_798_ = lean_io_error_to_string(v_a_797_);
v___x_799_ = 3;
v___x_800_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_800_, 0, v___x_798_);
lean_ctor_set_uint8(v___x_800_, sizeof(void*)*1, v___x_799_);
v___x_801_ = lean_array_get_size(v_a_758_);
v___x_802_ = lean_array_push(v_a_758_, v___x_800_);
v___x_803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
return v___x_803_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileStaticLib___boxed(lean_object* v_libFile_804_, lean_object* v_oFiles_805_, lean_object* v_ar_806_, lean_object* v_thin_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
uint8_t v_thin_boxed_810_; lean_object* v_res_811_; 
v_thin_boxed_810_ = lean_unbox(v_thin_807_);
v_res_811_ = l_Lake_compileStaticLib(v_libFile_804_, v_oFiles_805_, v_ar_806_, v_thin_boxed_810_, v_a_808_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv(){
_start:
{
uint8_t v___x_824_; 
v___x_824_ = l_System_Platform_isOSX;
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
v___x_825_ = ((lean_object*)(l_Lake_compileO___closed__2));
return v___x_825_;
}
else
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__0));
v___x_827_ = lean_io_getenv(v___x_826_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v___x_828_; 
v___x_828_ = ((lean_object*)(l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___closed__4));
return v___x_828_;
}
else
{
lean_object* v___x_829_; 
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = ((lean_object*)(l_Lake_compileO___closed__2));
return v___x_829_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv___boxed(lean_object* v_a_830_){
_start:
{
lean_object* v_res_831_; 
v_res_831_ = l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
return v_res_831_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__1(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = ((lean_object*)(l_Lake_compileSharedLib___closed__0));
v___x_834_ = lean_unsigned_to_nat(3u);
v___x_835_ = lean_mk_empty_array_with_capacity(v___x_834_);
v___x_836_ = lean_array_push(v___x_835_, v___x_833_);
return v___x_836_;
}
}
static lean_object* _init_l_Lake_compileSharedLib___closed__2(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = ((lean_object*)(l_Lake_compileLeanModule___closed__18));
v___x_838_ = lean_obj_once(&l_Lake_compileSharedLib___closed__1, &l_Lake_compileSharedLib___closed__1_once, _init_l_Lake_compileSharedLib___closed__1);
v___x_839_ = lean_array_push(v___x_838_, v___x_837_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib(lean_object* v_libFile_840_, lean_object* v_linkArgs_841_, lean_object* v_linker_842_, lean_object* v_a_843_){
_start:
{
lean_object* v___x_845_; 
lean_inc_ref(v_libFile_840_);
v___x_845_ = l_Lake_createParentDirs(v_libFile_840_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v___x_846_; 
lean_dec_ref_known(v___x_845_, 1);
lean_inc_ref(v_libFile_840_);
v___x_846_ = l_Lake_mkArgs(v_libFile_840_, v_linkArgs_841_, v_a_843_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v_a_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
v_a_848_ = lean_ctor_get(v___x_846_, 1);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_846_, 2);
v___x_849_ = l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
v___x_850_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_851_ = lean_obj_once(&l_Lake_compileSharedLib___closed__2, &l_Lake_compileSharedLib___closed__2_once, _init_l_Lake_compileSharedLib___closed__2);
v___x_852_ = lean_array_push(v___x_851_, v_libFile_840_);
v___x_853_ = l_Array_append___redArg(v___x_852_, v_a_847_);
lean_dec(v_a_847_);
v___x_854_ = lean_box(0);
v___x_855_ = 1;
v___x_856_ = 0;
v___x_857_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_857_, 0, v___x_850_);
lean_ctor_set(v___x_857_, 1, v_linker_842_);
lean_ctor_set(v___x_857_, 2, v___x_853_);
lean_ctor_set(v___x_857_, 3, v___x_854_);
lean_ctor_set(v___x_857_, 4, v___x_849_);
lean_ctor_set_uint8(v___x_857_, sizeof(void*)*5, v___x_855_);
lean_ctor_set_uint8(v___x_857_, sizeof(void*)*5 + 1, v___x_856_);
v___x_858_ = l_Lake_proc(v___x_857_, v___x_856_, v_a_848_);
return v___x_858_;
}
else
{
lean_object* v_a_859_; lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_dec_ref(v_linker_842_);
lean_dec_ref(v_libFile_840_);
v_a_859_ = lean_ctor_get(v___x_846_, 0);
v_a_860_ = lean_ctor_get(v___x_846_, 1);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_846_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_inc(v_a_859_);
lean_dec(v___x_846_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_859_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
else
{
lean_object* v_a_868_; lean_object* v___x_869_; uint8_t v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec_ref(v_linker_842_);
lean_dec_ref(v_libFile_840_);
v_a_868_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_845_, 1);
v___x_869_ = lean_io_error_to_string(v_a_868_);
v___x_870_ = 3;
v___x_871_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_871_, 0, v___x_869_);
lean_ctor_set_uint8(v___x_871_, sizeof(void*)*1, v___x_870_);
v___x_872_ = lean_array_get_size(v_a_843_);
v___x_873_ = lean_array_push(v_a_843_, v___x_871_);
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_872_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
return v___x_874_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileSharedLib___boxed(lean_object* v_libFile_875_, lean_object* v_linkArgs_876_, lean_object* v_linker_877_, lean_object* v_a_878_, lean_object* v_a_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lake_compileSharedLib(v_libFile_875_, v_linkArgs_876_, v_linker_877_, v_a_878_);
lean_dec_ref(v_linkArgs_876_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe(lean_object* v_binFile_881_, lean_object* v_linkArgs_882_, lean_object* v_linker_883_, lean_object* v_a_884_){
_start:
{
lean_object* v___x_886_; 
lean_inc_ref(v_binFile_881_);
v___x_886_ = l_Lake_createParentDirs(v_binFile_881_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v___x_887_; 
lean_dec_ref_known(v___x_886_, 1);
lean_inc_ref(v_binFile_881_);
v___x_887_ = l_Lake_mkArgs(v_binFile_881_, v_linkArgs_882_, v_a_884_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; uint8_t v___x_898_; uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
v_a_889_ = lean_ctor_get(v___x_887_, 1);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_887_, 2);
v___x_890_ = l___private_Lake_Build_Actions_0__Lake_getMacOSXDeploymentEnv();
v___x_891_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_892_ = lean_unsigned_to_nat(2u);
v___x_893_ = lean_mk_empty_array_with_capacity(v___x_892_);
lean_dec_ref(v___x_893_);
v___x_894_ = lean_obj_once(&l_Lake_compileLeanModule___closed__19, &l_Lake_compileLeanModule___closed__19_once, _init_l_Lake_compileLeanModule___closed__19);
v___x_895_ = lean_array_push(v___x_894_, v_binFile_881_);
v___x_896_ = l_Array_append___redArg(v___x_895_, v_a_888_);
lean_dec(v_a_888_);
v___x_897_ = lean_box(0);
v___x_898_ = 1;
v___x_899_ = 0;
v___x_900_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_900_, 0, v___x_891_);
lean_ctor_set(v___x_900_, 1, v_linker_883_);
lean_ctor_set(v___x_900_, 2, v___x_896_);
lean_ctor_set(v___x_900_, 3, v___x_897_);
lean_ctor_set(v___x_900_, 4, v___x_890_);
lean_ctor_set_uint8(v___x_900_, sizeof(void*)*5, v___x_898_);
lean_ctor_set_uint8(v___x_900_, sizeof(void*)*5 + 1, v___x_899_);
v___x_901_ = l_Lake_proc(v___x_900_, v___x_899_, v_a_889_);
return v___x_901_;
}
else
{
lean_object* v_a_902_; lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v_linker_883_);
lean_dec_ref(v_binFile_881_);
v_a_902_ = lean_ctor_get(v___x_887_, 0);
v_a_903_ = lean_ctor_get(v___x_887_, 1);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_887_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_inc(v_a_902_);
lean_dec(v___x_887_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_902_);
lean_ctor_set(v_reuseFailAlloc_909_, 1, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_912_; uint8_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
lean_dec_ref(v_linker_883_);
lean_dec_ref(v_binFile_881_);
v_a_911_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_886_, 1);
v___x_912_ = lean_io_error_to_string(v_a_911_);
v___x_913_ = 3;
v___x_914_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set_uint8(v___x_914_, sizeof(void*)*1, v___x_913_);
v___x_915_ = lean_array_get_size(v_a_884_);
v___x_916_ = lean_array_push(v_a_884_, v___x_914_);
v___x_917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
return v___x_917_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_compileExe___boxed(lean_object* v_binFile_918_, lean_object* v_linkArgs_919_, lean_object* v_linker_920_, lean_object* v_a_921_, lean_object* v_a_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lake_compileExe(v_binFile_918_, v_linkArgs_919_, v_linker_920_, v_a_921_);
lean_dec_ref(v_linkArgs_919_);
return v_res_923_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__0));
v___x_926_ = lean_unsigned_to_nat(2u);
v___x_927_ = lean_mk_empty_array_with_capacity(v___x_926_);
v___x_928_ = lean_array_push(v___x_927_, v___x_925_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(lean_object* v_as_929_, size_t v_i_930_, size_t v_stop_931_, lean_object* v_b_932_){
_start:
{
uint8_t v___x_933_; 
v___x_933_ = lean_usize_dec_eq(v_i_930_, v_stop_931_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; size_t v___x_938_; size_t v___x_939_; 
v___x_934_ = lean_array_uget_borrowed(v_as_929_, v_i_930_);
v___x_935_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___closed__1);
lean_inc(v___x_934_);
v___x_936_ = lean_array_push(v___x_935_, v___x_934_);
v___x_937_ = l_Array_append___redArg(v_b_932_, v___x_936_);
lean_dec_ref(v___x_936_);
v___x_938_ = ((size_t)1ULL);
v___x_939_ = lean_usize_add(v_i_930_, v___x_938_);
v_i_930_ = v___x_939_;
v_b_932_ = v___x_937_;
goto _start;
}
else
{
return v_b_932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0___boxed(lean_object* v_as_941_, lean_object* v_i_942_, lean_object* v_stop_943_, lean_object* v_b_944_){
_start:
{
size_t v_i_boxed_945_; size_t v_stop_boxed_946_; lean_object* v_res_947_; 
v_i_boxed_945_ = lean_unbox_usize(v_i_942_);
lean_dec(v_i_942_);
v_stop_boxed_946_ = lean_unbox_usize(v_stop_943_);
lean_dec(v_stop_943_);
v_res_947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_as_941_, v_i_boxed_945_, v_stop_boxed_946_, v_b_944_);
lean_dec_ref(v_as_941_);
return v_res_947_;
}
}
static lean_object* _init_l_Lake_download___closed__5(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_953_ = ((lean_object*)(l_Lake_download___closed__1));
v___x_954_ = lean_unsigned_to_nat(7u);
v___x_955_ = lean_mk_empty_array_with_capacity(v___x_954_);
v___x_956_ = lean_array_push(v___x_955_, v___x_953_);
return v___x_956_;
}
}
static lean_object* _init_l_Lake_download___closed__6(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_957_ = ((lean_object*)(l_Lake_download___closed__2));
v___x_958_ = lean_obj_once(&l_Lake_download___closed__5, &l_Lake_download___closed__5_once, _init_l_Lake_download___closed__5);
v___x_959_ = lean_array_push(v___x_958_, v___x_957_);
return v___x_959_;
}
}
static lean_object* _init_l_Lake_download___closed__7(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_960_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_961_ = lean_obj_once(&l_Lake_download___closed__6, &l_Lake_download___closed__6_once, _init_l_Lake_download___closed__6);
v___x_962_ = lean_array_push(v___x_961_, v___x_960_);
return v___x_962_;
}
}
static lean_object* _init_l_Lake_download___closed__8(void){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_963_ = ((lean_object*)(l_Lake_compileLeanModule___closed__18));
v___x_964_ = lean_obj_once(&l_Lake_download___closed__7, &l_Lake_download___closed__7_once, _init_l_Lake_download___closed__7);
v___x_965_ = lean_array_push(v___x_964_, v___x_963_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lake_download(lean_object* v_url_966_, lean_object* v_file_967_, lean_object* v_headers_968_, lean_object* v_a_969_){
_start:
{
lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_983_; uint8_t v___x_999_; 
v___x_999_ = l_System_FilePath_pathExists(v_file_967_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; 
lean_inc_ref(v_file_967_);
v___x_1000_ = l_Lake_createParentDirs(v_file_967_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_dec_ref_known(v___x_1000_, 1);
v___y_983_ = v_a_969_;
goto v___jp_982_;
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec_ref(v_file_967_);
lean_dec_ref(v_url_966_);
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v___x_1000_, 1);
v___x_1002_ = lean_io_error_to_string(v_a_1001_);
v___x_1003_ = 3;
v___x_1004_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1004_, 0, v___x_1002_);
lean_ctor_set_uint8(v___x_1004_, sizeof(void*)*1, v___x_1003_);
v___x_1005_ = lean_array_get_size(v_a_969_);
v___x_1006_ = lean_array_push(v_a_969_, v___x_1004_);
v___x_1007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1007_, 0, v___x_1005_);
lean_ctor_set(v___x_1007_, 1, v___x_1006_);
return v___x_1007_;
}
}
else
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_io_remove_file(v_file_967_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_dec_ref_known(v___x_1008_, 1);
v___y_983_ = v_a_969_;
goto v___jp_982_;
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_dec_ref(v_file_967_);
lean_dec_ref(v_url_966_);
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1010_ = lean_io_error_to_string(v_a_1009_);
v___x_1011_ = 3;
v___x_1012_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set_uint8(v___x_1012_, sizeof(void*)*1, v___x_1011_);
v___x_1013_ = lean_array_get_size(v_a_969_);
v___x_1014_ = lean_array_push(v_a_969_, v___x_1012_);
v___x_1015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
return v___x_1015_;
}
}
v___jp_971_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_974_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_975_ = ((lean_object*)(l_Lake_download___closed__0));
v___x_976_ = lean_box(0);
v___x_977_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_978_ = 1;
v___x_979_ = 0;
v___x_980_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_980_, 0, v___x_974_);
lean_ctor_set(v___x_980_, 1, v___x_975_);
lean_ctor_set(v___x_980_, 2, v___y_973_);
lean_ctor_set(v___x_980_, 3, v___x_976_);
lean_ctor_set(v___x_980_, 4, v___x_977_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*5, v___x_978_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*5 + 1, v___x_979_);
v___x_981_ = l_Lake_proc(v___x_980_, v___x_978_, v___y_972_);
return v___x_981_;
}
v___jp_982_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; uint8_t v___x_991_; 
v___x_984_ = ((lean_object*)(l_Lake_download___closed__4));
v___x_985_ = lean_obj_once(&l_Lake_download___closed__8, &l_Lake_download___closed__8_once, _init_l_Lake_download___closed__8);
v___x_986_ = lean_array_push(v___x_985_, v_file_967_);
v___x_987_ = lean_array_push(v___x_986_, v___x_984_);
v___x_988_ = lean_array_push(v___x_987_, v_url_966_);
v___x_989_ = lean_unsigned_to_nat(0u);
v___x_990_ = lean_array_get_size(v_headers_968_);
v___x_991_ = lean_nat_dec_lt(v___x_989_, v___x_990_);
if (v___x_991_ == 0)
{
v___y_972_ = v___y_983_;
v___y_973_ = v___x_988_;
goto v___jp_971_;
}
else
{
uint8_t v___x_992_; 
v___x_992_ = lean_nat_dec_le(v___x_990_, v___x_990_);
if (v___x_992_ == 0)
{
if (v___x_991_ == 0)
{
v___y_972_ = v___y_983_;
v___y_973_ = v___x_988_;
goto v___jp_971_;
}
else
{
size_t v___x_993_; size_t v___x_994_; lean_object* v___x_995_; 
v___x_993_ = ((size_t)0ULL);
v___x_994_ = lean_usize_of_nat(v___x_990_);
v___x_995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_headers_968_, v___x_993_, v___x_994_, v___x_988_);
v___y_972_ = v___y_983_;
v___y_973_ = v___x_995_;
goto v___jp_971_;
}
}
else
{
size_t v___x_996_; size_t v___x_997_; lean_object* v___x_998_; 
v___x_996_ = ((size_t)0ULL);
v___x_997_ = lean_usize_of_nat(v___x_990_);
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_download_spec__0(v_headers_968_, v___x_996_, v___x_997_, v___x_988_);
v___y_972_ = v___y_983_;
v___y_973_ = v___x_998_;
goto v___jp_971_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_download___boxed(lean_object* v_url_1016_, lean_object* v_file_1017_, lean_object* v_headers_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lake_download(v_url_1016_, v_file_1017_, v_headers_1018_, v_a_1019_);
lean_dec_ref(v_headers_1018_);
return v_res_1021_;
}
}
static lean_object* _init_l_Lake_untar___closed__3(void){
_start:
{
uint32_t v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = 122;
v___x_1026_ = ((lean_object*)(l_Lake_untar___closed__2));
v___x_1027_ = lean_string_push(v___x_1026_, v___x_1025_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_Lake_untar(lean_object* v_file_1028_, lean_object* v_dir_1029_, uint8_t v_gzip_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v___x_1033_; 
lean_inc_ref(v_dir_1029_);
v___x_1033_ = l_IO_FS_createDirAll(v_dir_1029_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_opts_1035_; lean_object* v___y_1036_; lean_object* v___x_1054_; 
lean_dec_ref_known(v___x_1033_, 1);
v___x_1054_ = ((lean_object*)(l_Lake_untar___closed__2));
if (v_gzip_1030_ == 0)
{
v_opts_1035_ = v___x_1054_;
v___y_1036_ = v_a_1031_;
goto v___jp_1034_;
}
else
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_obj_once(&l_Lake_untar___closed__3, &l_Lake_untar___closed__3_once, _init_l_Lake_untar___closed__3);
v_opts_1035_ = v___x_1055_;
v___y_1036_ = v_a_1031_;
goto v___jp_1034_;
}
v___jp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; uint8_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1037_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_1038_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1039_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_1040_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1041_ = lean_unsigned_to_nat(5u);
v___x_1042_ = lean_mk_empty_array_with_capacity(v___x_1041_);
lean_inc_ref(v_opts_1035_);
v___x_1043_ = lean_array_push(v___x_1042_, v_opts_1035_);
v___x_1044_ = lean_array_push(v___x_1043_, v___x_1039_);
v___x_1045_ = lean_array_push(v___x_1044_, v_file_1028_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1040_);
v___x_1047_ = lean_array_push(v___x_1046_, v_dir_1029_);
v___x_1048_ = lean_box(0);
v___x_1049_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___x_1050_ = 1;
v___x_1051_ = 0;
v___x_1052_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1052_, 0, v___x_1037_);
lean_ctor_set(v___x_1052_, 1, v___x_1038_);
lean_ctor_set(v___x_1052_, 2, v___x_1047_);
lean_ctor_set(v___x_1052_, 3, v___x_1048_);
lean_ctor_set(v___x_1052_, 4, v___x_1049_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*5, v___x_1050_);
lean_ctor_set_uint8(v___x_1052_, sizeof(void*)*5 + 1, v___x_1051_);
v___x_1053_ = l_Lake_proc(v___x_1052_, v___x_1050_, v___y_1036_);
return v___x_1053_;
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1057_; uint8_t v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
lean_dec_ref(v_dir_1029_);
lean_dec_ref(v_file_1028_);
v_a_1056_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1057_ = lean_io_error_to_string(v_a_1056_);
v___x_1058_ = 3;
v___x_1059_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1059_, 0, v___x_1057_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*1, v___x_1058_);
v___x_1060_ = lean_array_get_size(v_a_1031_);
v___x_1061_ = lean_array_push(v_a_1031_, v___x_1059_);
v___x_1062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
return v___x_1062_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_untar___boxed(lean_object* v_file_1063_, lean_object* v_dir_1064_, lean_object* v_gzip_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
uint8_t v_gzip_boxed_1068_; lean_object* v_res_1069_; 
v_gzip_boxed_1068_ = lean_unbox(v_gzip_1065_);
v_res_1069_ = l_Lake_untar(v_file_1063_, v_dir_1064_, v_gzip_boxed_1068_, v_a_1066_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(lean_object* v_as_1071_, size_t v_sz_1072_, size_t v_i_1073_, lean_object* v_b_1074_, lean_object* v___y_1075_){
_start:
{
uint8_t v___x_1077_; 
v___x_1077_ = lean_usize_dec_lt(v_i_1073_, v_sz_1072_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v_b_1074_);
lean_ctor_set(v___x_1078_, 1, v___y_1075_);
return v___x_1078_;
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; size_t v___x_1083_; size_t v___x_1084_; 
v_a_1079_ = lean_array_uget_borrowed(v_as_1071_, v_i_1073_);
v___x_1080_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___closed__0));
v___x_1081_ = lean_string_append(v___x_1080_, v_a_1079_);
v___x_1082_ = lean_array_push(v_b_1074_, v___x_1081_);
v___x_1083_ = ((size_t)1ULL);
v___x_1084_ = lean_usize_add(v_i_1073_, v___x_1083_);
v_i_1073_ = v___x_1084_;
v_b_1074_ = v___x_1082_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0___boxed(lean_object* v_as_1086_, lean_object* v_sz_1087_, lean_object* v_i_1088_, lean_object* v_b_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
size_t v_sz_boxed_1092_; size_t v_i_boxed_1093_; lean_object* v_res_1094_; 
v_sz_boxed_1092_ = lean_unbox_usize(v_sz_1087_);
lean_dec(v_sz_1087_);
v_i_boxed_1093_ = lean_unbox_usize(v_i_1088_);
lean_dec(v_i_1088_);
v_res_1094_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_as_1086_, v_sz_boxed_1092_, v_i_boxed_1093_, v_b_1089_, v___y_1090_);
lean_dec_ref(v_as_1086_);
return v_res_1094_;
}
}
static lean_object* _init_l_Lake_tar___closed__1(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1096_ = ((lean_object*)(l_Lake_download___closed__3));
v___x_1097_ = lean_unsigned_to_nat(5u);
v___x_1098_ = lean_mk_empty_array_with_capacity(v___x_1097_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1096_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lake_tar___closed__9(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = ((lean_object*)(l_Lake_compileLeanModule___closed__14));
v___x_1117_ = ((lean_object*)(l_Lake_tar___closed__8));
v___x_1118_ = lean_array_push(v___x_1117_, v___x_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lake_tar(lean_object* v_dir_1119_, lean_object* v_file_1120_, uint8_t v_gzip_1121_, lean_object* v_excludePaths_1122_, lean_object* v_a_1123_){
_start:
{
lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; uint8_t v___y_1131_; lean_object* v___y_1132_; lean_object* v___x_1136_; 
lean_inc_ref(v_file_1120_);
v___x_1136_ = l_Lake_createParentDirs(v_file_1120_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_args_1138_; lean_object* v___y_1139_; lean_object* v___x_1169_; 
lean_dec_ref_known(v___x_1136_, 1);
v___x_1169_ = ((lean_object*)(l_Lake_tar___closed__8));
if (v_gzip_1121_ == 0)
{
v_args_1138_ = v___x_1169_;
v___y_1139_ = v_a_1123_;
goto v___jp_1137_;
}
else
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_obj_once(&l_Lake_tar___closed__9, &l_Lake_tar___closed__9_once, _init_l_Lake_tar___closed__9);
v_args_1138_ = v___x_1170_;
v___y_1139_ = v_a_1123_;
goto v___jp_1137_;
}
v___jp_1137_:
{
size_t v_sz_1140_; size_t v___x_1141_; lean_object* v___x_1142_; 
v_sz_1140_ = lean_array_size(v_excludePaths_1122_);
v___x_1141_ = ((size_t)0ULL);
lean_inc_ref(v_args_1138_);
v___x_1142_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_tar_spec__0(v_excludePaths_1122_, v_sz_1140_, v___x_1141_, v_args_1138_, v___y_1139_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v_a_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; uint8_t v___x_1157_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
v_a_1144_ = lean_ctor_get(v___x_1142_, 1);
lean_inc(v_a_1144_);
lean_dec_ref_known(v___x_1142_, 2);
v___x_1145_ = ((lean_object*)(l_Lake_compileLeanModule___closed__3));
v___x_1146_ = ((lean_object*)(l_Lake_untar___closed__0));
v___x_1147_ = ((lean_object*)(l_Lake_untar___closed__1));
v___x_1148_ = ((lean_object*)(l_Lake_tar___closed__0));
v___x_1149_ = lean_obj_once(&l_Lake_tar___closed__1, &l_Lake_tar___closed__1_once, _init_l_Lake_tar___closed__1);
v___x_1150_ = lean_array_push(v___x_1149_, v_file_1120_);
v___x_1151_ = lean_array_push(v___x_1150_, v___x_1147_);
v___x_1152_ = lean_array_push(v___x_1151_, v_dir_1119_);
v___x_1153_ = lean_array_push(v___x_1152_, v___x_1148_);
v___x_1154_ = l_Array_append___redArg(v_a_1143_, v___x_1153_);
lean_dec_ref(v___x_1153_);
v___x_1155_ = lean_box(0);
v___x_1156_ = l_System_Platform_isOSX;
v___x_1157_ = 1;
if (v___x_1156_ == 0)
{
lean_object* v___x_1158_; 
v___x_1158_ = ((lean_object*)(l_Lake_compileO___closed__2));
v___y_1126_ = v_a_1144_;
v___y_1127_ = v___x_1145_;
v___y_1128_ = v___x_1155_;
v___y_1129_ = v___x_1154_;
v___y_1130_ = v___x_1146_;
v___y_1131_ = v___x_1157_;
v___y_1132_ = v___x_1158_;
goto v___jp_1125_;
}
else
{
lean_object* v___x_1159_; 
v___x_1159_ = ((lean_object*)(l_Lake_tar___closed__6));
v___y_1126_ = v_a_1144_;
v___y_1127_ = v___x_1145_;
v___y_1128_ = v___x_1155_;
v___y_1129_ = v___x_1154_;
v___y_1130_ = v___x_1146_;
v___y_1131_ = v___x_1157_;
v___y_1132_ = v___x_1159_;
goto v___jp_1125_;
}
}
else
{
lean_object* v_a_1160_; lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec_ref(v_file_1120_);
lean_dec_ref(v_dir_1119_);
v_a_1160_ = lean_ctor_get(v___x_1142_, 0);
v_a_1161_ = lean_ctor_get(v___x_1142_, 1);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1142_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_inc(v_a_1160_);
lean_dec(v___x_1142_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1160_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_dec_ref(v_file_1120_);
lean_dec_ref(v_dir_1119_);
v_a_1171_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1171_);
lean_dec_ref_known(v___x_1136_, 1);
v___x_1172_ = lean_io_error_to_string(v_a_1171_);
v___x_1173_ = 3;
v___x_1174_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*1, v___x_1173_);
v___x_1175_ = lean_array_get_size(v_a_1123_);
v___x_1176_ = lean_array_push(v_a_1123_, v___x_1174_);
v___x_1177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
return v___x_1177_;
}
v___jp_1125_:
{
uint8_t v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = 0;
lean_inc_ref(v___y_1132_);
lean_inc(v___y_1128_);
lean_inc_ref(v___y_1130_);
lean_inc_ref(v___y_1127_);
v___x_1134_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1134_, 0, v___y_1127_);
lean_ctor_set(v___x_1134_, 1, v___y_1130_);
lean_ctor_set(v___x_1134_, 2, v___y_1129_);
lean_ctor_set(v___x_1134_, 3, v___y_1128_);
lean_ctor_set(v___x_1134_, 4, v___y_1132_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*5, v___y_1131_);
lean_ctor_set_uint8(v___x_1134_, sizeof(void*)*5 + 1, v___x_1133_);
v___x_1135_ = l_Lake_proc(v___x_1134_, v___y_1131_, v___y_1126_);
return v___x_1135_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_tar___boxed(lean_object* v_dir_1178_, lean_object* v_file_1179_, lean_object* v_gzip_1180_, lean_object* v_excludePaths_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_){
_start:
{
uint8_t v_gzip_boxed_1184_; lean_object* v_res_1185_; 
v_gzip_boxed_1184_ = lean_unbox(v_gzip_1180_);
v_res_1185_ = l_Lake_tar(v_dir_1178_, v_file_1179_, v_gzip_boxed_1184_, v_excludePaths_1181_, v_a_1182_);
lean_dec_ref(v_excludePaths_1181_);
return v_res_1185_;
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
