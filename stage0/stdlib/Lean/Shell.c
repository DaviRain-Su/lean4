// Lean compiler output
// Module: Lean.Shell
// Imports: import Lean.Elab.Frontend import Lean.Elab.ParseImportsFast import Lean.Server.Watchdog import Lean.Server.FileWorker import Lean.Compiler.LCNF.EmitC import Lean.Compiler.LCNF.EmitZig import Init.System.Platform import Lean.Compiler.Options
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_eprint___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_st_mk_ref(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Compiler_LCNF_emitC(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
uint32_t lean_internal_get_hardware_concurrency(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_toName(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Language_Lean_setOption(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Lean_version_specialDesc;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_versionStringCore;
extern uint8_t l_Lean_version_isRelease;
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* l_EmitZig_emitZig(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_System_Platform_target;
lean_object* lean_get_stdout();
lean_object* l_String_toName(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_load_dynlib(lean_object*);
lean_object* lean_load_plugin(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* l_Lean_printImportsJson(lean_object*);
lean_object* lean_io_exit(uint8_t);
lean_object* lean_display_cumulative_profiling_times();
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_moduleNameOfFileName(lean_object*, lean_object*);
lean_object* l_Lean_ModuleSetup_load(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
uint8_t l_String_Slice_beq(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImportSrcs(lean_object*, lean_object*);
lean_object* l_Lean_Elab_printImports(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* lean_get_stdin();
lean_object* l_IO_FS_Stream_readBinToEnd(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_IO_FS_Stream_lines(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Server_Watchdog_watchdogMain(lean_object*);
lean_object* l_Lean_Server_FileWorker_workerMain(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_getBuildDir();
lean_object* l_Lean_getLibDir(lean_object*);
lean_object* lean_decode_lossy_utf8(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object*);
uint32_t lean_eval_main(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_init_llvm();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object*);
lean_object* lean_emit_llvm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__0;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__1;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__2;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__3;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__4;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__5;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__6;
static const lean_string_object l___private_Lean_Shell_0__Lean_emitZig___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__7_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_emitZig___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__7_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__8_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_emitZig___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__9_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_emitZig___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__10_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__11;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__12;
static const lean_array_object l___private_Lean_Shell_0__Lean_emitZig___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_emitZig___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<emitZig>"};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__14_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__15;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_emitZig___closed__16;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_emitZig___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__17;
static const lean_string_object l___private_Lean_Shell_0__Lean_emitZig___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_emitZig___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_emitZig___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l___private_Lean_Shell_0__Lean_emitZig___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_emitZig___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitZig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitZig___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_internal_has_address_sanitizer(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object*);
uint8_t lean_internal_is_multi_thread(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object*);
uint8_t lean_internal_is_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object*);
lean_object* lean_internal_get_build_type(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object*);
lean_object* lean_internal_set_max_memory(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object*, lean_object*);
lean_object* lean_internal_get_default_max_memory(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object*);
lean_object* lean_internal_get_default_max_heartbeat(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object*);
lean_object* lean_internal_set_max_heartbeat(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object*, lean_object*);
uint8_t lean_internal_get_default_verbose(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object*);
lean_object* lean_internal_set_exit_on_panic(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object*, lean_object*);
lean_object* lean_internal_set_thread_stack_size(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object*, lean_object*);
lean_object* lean_internal_enable_debug(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__0_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__1;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__2_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__3;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "-pre"};
static const lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shortVersionString___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shortVersionString___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shortVersionString;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean (version "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__1_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__2;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__3_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__4;
static const lean_string_object l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_versionHeader___closed__5_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_versionHeader___closed__6;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__7;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_versionHeader___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_versionHeader;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_featuresString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_featuresString___closed__0;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_featuresString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[LLVM]"};
static const lean_object* l___private_Lean_Shell_0__Lean_featuresString___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_featuresString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_featuresString;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "      -D name=value      set a configuration option (see set_option command)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --plugin=file[=fn] load and initialize Lean shared library for registering linters etc."};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "      --load-dynlib=file load shared library to make its symbols available to the interpreter"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 88, .m_data = "      --setup=file       JSON file with module setup data (supersedes the file's header)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "      --json             report Lean output (e.g., messages) as JSON (one per line)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "  -E, --error=kind       report Lean messages of kind as errors"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "      --deps             just print dependencies of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "      --src-deps         just print dependency sources of a Lean input"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = "      --print-prefix     print the installation prefix for Lean and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "      --print-libdir     print the installation directory for Lean's built-in libraries and exit"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "      --profile          display elaboration/type checking time for each definition/theorem"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "      --stats            display environment statistics"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = "      --incr-save=file   EXPERIMENTAL: save a full incremental snapshot of post-elaboration state at end of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "      --incr-load=file   EXPERIMENTAL: reuse a snapshot saved by `--incr-(header-)save` at start of run"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "      --incr-header-save=file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "                         EXPERIMENTAL: like `--incr-save`, but save only the header (state after importing)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__15_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__16;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "      --debug=tag        enable assertions with the given tag"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Miscellaneous"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "  -h, --help             display this message"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "      --features         display features compiler provides (eg. LLVM support)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "  -v, --version          display version information"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "  -V, --short-version    display short version number"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "  -g, --githash          display the git commit hash number used to build this binary"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "      --run <file>       call the 'main' definition in the given file with the remaining arguments"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -o, --o=oname          create olean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "  -i, --i=iname          create ilean file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "  -c, --c=fname          name of the C output file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__27_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -b, --bc=fname         name of the LLVM bitcode file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__28 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__28_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "  -z, --zig=fname        name of the Zig output file"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "  -R, --root=dir         set package root directory from which the module name\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "                         of the input file is calculated\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "                         (default: current working directory)\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "  -t, --trust=num        trust level (default: max) 0 means do not trust any macro,\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "                         and type check all imported modules\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -q, --quiet            do not print verbose messages"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "  -M, --memory=num       maximum amount of memory that should be used by Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "                         (in megabytes)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "  -T, --timeout=num      maximum number of memory allocations per task"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "                         this is a deterministic way of interrupting long running tasks"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__39 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__40;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "  -j, --threads=num      number of threads used to process lean files"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__41 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__41_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "  -s, --tstack=num       thread stack size in Kb"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__42 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "      --server           start lean in server mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__43 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "      --worker           start lean in server-worker mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__44 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "max_memory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 81, 94, 214, 186, 212, 139, 105)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__5_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Shell"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__7_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__8_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 69, 169, 154, 100, 37, 235, 16)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__9_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(89, 66, 50, 199, 34, 209, 110, 139)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__10_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__6_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(60, 66, 221, 81, 125, 65, 65, 89)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "maxMemory"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__12_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(28, 55, 113, 152, 101, 101, 83, 88)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_maxMemory;
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(108, 201, 121, 146, 245, 42, 97, 81)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 41, 251, 70, 36, 12, 36, 182)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_timeout;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verbose"};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 17, 151, 162, 143, 207, 214, 14)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__11_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__0_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 79, 210, 200, 161, 113, 65, 201)}};
static const lean_object* l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_verbose;
lean_object* lean_internal_get_default_options(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultOptions___boxed(lean_object*);
uint32_t lean_internal_get_believer_trust_level(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultTrustLevel;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0;
LEAN_EXPORT uint32_t l___private_Lean_Shell_0__Lean_defaultNumThreads;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0;
static const lean_array_object l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2;
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "argument missing for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_checkOptArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "invalid -D parameter, argument must contain '='"};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__0_value)}};
static const lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_setConfigOption___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "error: expected numeric argument for option '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "error: argument value for '-"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Unknown command line option\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "H"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Z"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Y"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "E"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-l"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-p"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-t' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-t"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-t'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-T"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-T'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-M"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-M'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-R"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-s' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-s"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-s'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "z"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "error: argument value for '-j' is too large\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-j"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "error: expected numeric argument for option '-j'\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38_value;
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "#lang"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_shellMain___closed__0;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Zig code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__1 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__1_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "failed to create '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__2 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__2_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "LLVM code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__3 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__3_value;
static const lean_array_object l___private_Lean_Shell_0__Lean_shellMain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__4_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__5 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__5_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value),LEAN_SCALAR_PTR_LITERAL(37, 142, 62, 167, 41, 238, 22, 79)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean4"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__9_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__10;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__11;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown language '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__12_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Expected exactly one file name"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<stdin>"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__14_value;
LEAN_EXPORT lean_object* lean_shell_main(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_decodeLossyUTF8___boxed(lean_object* v_a_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_decode_lossy_utf8(v_a_2_);
lean_dec_ref(v_a_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object* v_env_8_, lean_object* v_opts_9_, lean_object* v_args_10_, lean_object* v_a_00___x40___internal___hyg_11_){
_start:
{
uint32_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = lean_eval_main(v_env_8_, v_opts_9_, v_args_10_);
lean_dec(v_args_10_);
lean_dec_ref(v_opts_9_);
lean_dec_ref(v_env_8_);
v_r_13_ = lean_box_uint32(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object* v_a_00___x40___internal___hyg_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lean_init_llvm();
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object* v_env_21_, lean_object* v_modName_22_, lean_object* v_filepath_23_, lean_object* v_a_00___x40___internal___hyg_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = lean_emit_llvm(v_env_21_, v_modName_22_, v_filepath_23_);
return v_res_25_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(lean_object* v_opts_26_, lean_object* v_opt_27_){
_start:
{
lean_object* v_name_28_; lean_object* v_defValue_29_; lean_object* v_map_30_; lean_object* v___x_31_; 
v_name_28_ = lean_ctor_get(v_opt_27_, 0);
v_defValue_29_ = lean_ctor_get(v_opt_27_, 1);
v_map_30_ = lean_ctor_get(v_opts_26_, 0);
v___x_31_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_30_, v_name_28_);
if (lean_obj_tag(v___x_31_) == 0)
{
uint8_t v___x_32_; 
v___x_32_ = lean_unbox(v_defValue_29_);
return v___x_32_;
}
else
{
lean_object* v_val_33_; 
v_val_33_ = lean_ctor_get(v___x_31_, 0);
lean_inc(v_val_33_);
lean_dec_ref_known(v___x_31_, 1);
if (lean_obj_tag(v_val_33_) == 1)
{
uint8_t v_v_34_; 
v_v_34_ = lean_ctor_get_uint8(v_val_33_, 0);
lean_dec_ref_known(v_val_33_, 0);
return v_v_34_;
}
else
{
uint8_t v___x_35_; 
lean_dec(v_val_33_);
v___x_35_ = lean_unbox(v_defValue_29_);
return v___x_35_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0___boxed(lean_object* v_opts_36_, lean_object* v_opt_37_){
_start:
{
uint8_t v_res_38_; lean_object* v_r_39_; 
v_res_38_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v_opts_36_, v_opt_37_);
lean_dec_ref(v_opt_37_);
lean_dec_ref(v_opts_36_);
v_r_39_ = lean_box(v_res_38_);
return v_r_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(lean_object* v_opts_40_, lean_object* v_opt_41_){
_start:
{
lean_object* v_name_42_; lean_object* v_defValue_43_; lean_object* v_map_44_; lean_object* v___x_45_; 
v_name_42_ = lean_ctor_get(v_opt_41_, 0);
v_defValue_43_ = lean_ctor_get(v_opt_41_, 1);
v_map_44_ = lean_ctor_get(v_opts_40_, 0);
v___x_45_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_44_, v_name_42_);
if (lean_obj_tag(v___x_45_) == 0)
{
lean_inc(v_defValue_43_);
return v_defValue_43_;
}
else
{
lean_object* v_val_46_; 
v_val_46_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_val_46_);
lean_dec_ref_known(v___x_45_, 1);
if (lean_obj_tag(v_val_46_) == 3)
{
lean_object* v_v_47_; 
v_v_47_ = lean_ctor_get(v_val_46_, 0);
lean_inc(v_v_47_);
lean_dec_ref_known(v_val_46_, 1);
return v_v_47_;
}
else
{
lean_dec(v_val_46_);
lean_inc(v_defValue_43_);
return v_defValue_43_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1___boxed(lean_object* v_opts_48_, lean_object* v_opt_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_opts_48_, v_opt_49_);
lean_dec_ref(v_opt_49_);
lean_dec_ref(v_opts_48_);
return v_res_50_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__0(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_51_ = lean_unsigned_to_nat(32u);
v___x_52_ = lean_mk_empty_array_with_capacity(v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1(void){
_start:
{
size_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_54_ = ((size_t)5ULL);
v___x_55_ = lean_unsigned_to_nat(0u);
v___x_56_ = lean_unsigned_to_nat(32u);
v___x_57_ = lean_mk_empty_array_with_capacity(v___x_56_);
v___x_58_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__0, &l___private_Lean_Shell_0__Lean_emitZig___closed__0_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__0);
v___x_59_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
lean_ctor_set(v___x_59_, 2, v___x_55_);
lean_ctor_set(v___x_59_, 3, v___x_55_);
lean_ctor_set_usize(v___x_59_, 4, v___x_54_);
return v___x_59_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__2(void){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_60_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__3(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__2, &l___private_Lean_Shell_0__Lean_emitZig___closed__2_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__2);
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__3, &l___private_Lean_Shell_0__Lean_emitZig___closed__3_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__3);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_65_ = l_Lean_NameSet_empty;
v___x_66_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__1, &l___private_Lean_Shell_0__Lean_emitZig___closed__1_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1);
v___x_67_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
lean_ctor_set(v___x_67_, 2, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6(void){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = l_Lean_firstFrontendMacroScope;
v___x_70_ = lean_nat_add(v___x_69_, v___x_68_);
return v___x_70_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11(void){
_start:
{
lean_object* v___x_81_; uint64_t v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__1, &l___private_Lean_Shell_0__Lean_emitZig___closed__1_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1);
v___x_82_ = 0ULL;
v___x_83_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_83_, 0, v___x_81_);
lean_ctor_set_uint64(v___x_83_, sizeof(void*)*1, v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; 
v___x_84_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__1, &l___private_Lean_Shell_0__Lean_emitZig___closed__1_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1);
v___x_85_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__3, &l___private_Lean_Shell_0__Lean_emitZig___closed__3_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__3);
v___x_86_ = 1;
v___x_87_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
lean_ctor_set(v___x_87_, 2, v___x_84_);
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*3, v___x_86_);
return v___x_87_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = l_Lean_Options_empty;
v___x_92_ = l_Lean_Core_getMaxHeartbeats(v___x_91_);
return v___x_92_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_emitZig___closed__16(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_93_ = l_Lean_diagnostics;
v___x_94_ = l_Lean_Options_empty;
v___x_95_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__17(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = l_Lean_maxRecDepth;
v___x_97_ = l_Lean_Options_empty;
v___x_98_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v___x_97_, v___x_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitZig(lean_object* v_mainModuleName_102_, lean_object* v_env_103_){
_start:
{
lean_object* v_a_106_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v_env_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v_fileName_138_; lean_object* v_fileMap_139_; lean_object* v_currRecDepth_140_; lean_object* v_ref_141_; lean_object* v_currNamespace_142_; lean_object* v_openDecls_143_; lean_object* v_initHeartbeats_144_; lean_object* v_maxHeartbeats_145_; lean_object* v_quotContext_146_; lean_object* v_currMacroScope_147_; lean_object* v_cancelTk_x3f_148_; uint8_t v_suppressElabErrors_149_; lean_object* v_inheritedTraceOptions_150_; lean_object* v___y_151_; uint8_t v___y_187_; uint8_t v___x_207_; 
v___x_109_ = lean_unsigned_to_nat(0u);
v___x_110_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__4, &l___private_Lean_Shell_0__Lean_emitZig___closed__4_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4);
v___x_111_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__5, &l___private_Lean_Shell_0__Lean_emitZig___closed__5_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5);
v___x_112_ = lean_io_get_num_heartbeats();
v___x_113_ = l_Lean_firstFrontendMacroScope;
v___x_114_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__6, &l___private_Lean_Shell_0__Lean_emitZig___closed__6_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6);
v___x_115_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__9));
v___x_116_ = lean_box(0);
v___x_117_ = lean_box(0);
v___x_118_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__10));
v___x_119_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__11, &l___private_Lean_Shell_0__Lean_emitZig___closed__11_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11);
v___x_120_ = 1;
v___x_121_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__12, &l___private_Lean_Shell_0__Lean_emitZig___closed__12_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12);
v___x_122_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__13));
v___x_123_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_123_, 0, v_env_103_);
lean_ctor_set(v___x_123_, 1, v___x_114_);
lean_ctor_set(v___x_123_, 2, v___x_115_);
lean_ctor_set(v___x_123_, 3, v___x_118_);
lean_ctor_set(v___x_123_, 4, v___x_119_);
lean_ctor_set(v___x_123_, 5, v___x_110_);
lean_ctor_set(v___x_123_, 6, v___x_111_);
lean_ctor_set(v___x_123_, 7, v___x_121_);
lean_ctor_set(v___x_123_, 8, v___x_122_);
v___x_124_ = lean_st_mk_ref(v___x_123_);
v___x_125_ = l_Lean_inheritedTraceOptions;
v___x_126_ = lean_st_ref_get(v___x_125_);
v___x_127_ = lean_st_ref_get(v___x_124_);
v_env_128_ = lean_ctor_get(v___x_127_, 0);
lean_inc_ref(v_env_128_);
lean_dec(v___x_127_);
v___x_129_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__14));
v___x_130_ = l_Lean_instInhabitedFileMap_default;
v___x_131_ = l_Lean_Options_empty;
v___x_132_ = lean_box(0);
v___x_133_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__15, &l___private_Lean_Shell_0__Lean_emitZig___closed__15_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15);
v___x_134_ = 0;
v___x_135_ = lean_box(0);
v___x_136_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__16, &l___private_Lean_Shell_0__Lean_emitZig___closed__16_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__16);
v___x_207_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_128_);
lean_dec_ref(v_env_128_);
if (v___x_207_ == 0)
{
if (v___x_136_ == 0)
{
lean_inc(v___x_124_);
v_fileName_138_ = v___x_129_;
v_fileMap_139_ = v___x_130_;
v_currRecDepth_140_ = v___x_109_;
v_ref_141_ = v___x_132_;
v_currNamespace_142_ = v___x_116_;
v_openDecls_143_ = v___x_117_;
v_initHeartbeats_144_ = v___x_112_;
v_maxHeartbeats_145_ = v___x_133_;
v_quotContext_146_ = v___x_116_;
v_currMacroScope_147_ = v___x_113_;
v_cancelTk_x3f_148_ = v___x_135_;
v_suppressElabErrors_149_ = v___x_134_;
v_inheritedTraceOptions_150_ = v___x_126_;
v___y_151_ = v___x_124_;
goto v___jp_137_;
}
else
{
v___y_187_ = v___x_207_;
goto v___jp_186_;
}
}
else
{
v___y_187_ = v___x_136_;
goto v___jp_186_;
}
v___jp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_mk_io_user_error(v_a_106_);
v___x_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
v___jp_137_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__17, &l___private_Lean_Shell_0__Lean_emitZig___closed__17_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__17);
lean_inc(v_cancelTk_x3f_148_);
lean_inc(v_currMacroScope_147_);
lean_inc(v_quotContext_146_);
lean_inc(v_maxHeartbeats_145_);
lean_inc(v_openDecls_143_);
lean_inc(v_currNamespace_142_);
lean_inc(v_ref_141_);
lean_inc_ref(v_fileMap_139_);
lean_inc_ref(v_fileName_138_);
v___x_153_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_153_, 0, v_fileName_138_);
lean_ctor_set(v___x_153_, 1, v_fileMap_139_);
lean_ctor_set(v___x_153_, 2, v___x_131_);
lean_ctor_set(v___x_153_, 3, v_currRecDepth_140_);
lean_ctor_set(v___x_153_, 4, v___x_152_);
lean_ctor_set(v___x_153_, 5, v_ref_141_);
lean_ctor_set(v___x_153_, 6, v_currNamespace_142_);
lean_ctor_set(v___x_153_, 7, v_openDecls_143_);
lean_ctor_set(v___x_153_, 8, v_initHeartbeats_144_);
lean_ctor_set(v___x_153_, 9, v_maxHeartbeats_145_);
lean_ctor_set(v___x_153_, 10, v_quotContext_146_);
lean_ctor_set(v___x_153_, 11, v_currMacroScope_147_);
lean_ctor_set(v___x_153_, 12, v_cancelTk_x3f_148_);
lean_ctor_set(v___x_153_, 13, v_inheritedTraceOptions_150_);
lean_ctor_set_uint8(v___x_153_, sizeof(void*)*14, v___x_136_);
lean_ctor_set_uint8(v___x_153_, sizeof(void*)*14 + 1, v_suppressElabErrors_149_);
v___x_154_ = l_EmitZig_emitZig(v_mainModuleName_102_, v___x_153_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref_known(v___x_153_, 14);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_163_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_163_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_163_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_163_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_159_ = lean_st_ref_get(v___x_124_);
lean_dec(v___x_124_);
lean_dec(v___x_159_);
if (v_isShared_158_ == 0)
{
v___x_161_ = v___x_157_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_155_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_185_; 
lean_dec(v___x_124_);
v_a_164_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_185_ == 0)
{
v___x_166_ = v___x_154_;
v_isShared_167_ = v_isSharedCheck_185_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_154_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_185_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
if (lean_obj_tag(v_a_164_) == 0)
{
lean_object* v_msg_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
v_msg_168_ = lean_ctor_get(v_a_164_, 1);
lean_inc_ref(v_msg_168_);
lean_dec_ref_known(v_a_164_, 2);
v___x_169_ = l_Lean_MessageData_toString(v_msg_168_);
v___x_170_ = lean_mk_io_user_error(v___x_169_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___x_170_);
v___x_172_ = v___x_166_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
else
{
lean_object* v_id_174_; lean_object* v___x_175_; 
lean_del_object(v___x_166_);
v_id_174_ = lean_ctor_get(v_a_164_, 0);
lean_inc(v_id_174_);
lean_dec_ref_known(v_a_164_, 2);
v___x_175_ = l_Lean_InternalExceptionId_getName(v_id_174_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
lean_dec(v_id_174_);
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref_known(v___x_175_, 1);
v___x_177_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__18));
v___x_178_ = l_Lean_Name_toString(v_a_176_, v___x_120_);
v___x_179_ = lean_string_append(v___x_177_, v___x_178_);
lean_dec_ref(v___x_178_);
v_a_106_ = v___x_179_;
goto v___jp_105_;
}
else
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
lean_dec_ref_known(v___x_175_, 1);
v___x_180_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__19));
v___x_181_ = l_Nat_reprFast(v_id_174_);
v___x_182_ = lean_string_append(v___x_180_, v___x_181_);
lean_dec_ref(v___x_181_);
v___x_183_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__20));
v___x_184_ = lean_string_append(v___x_182_, v___x_183_);
v_a_106_ = v___x_184_;
goto v___jp_105_;
}
}
}
}
}
v___jp_186_:
{
if (v___y_187_ == 0)
{
lean_object* v___x_188_; lean_object* v_env_189_; lean_object* v_nextMacroScope_190_; lean_object* v_ngen_191_; lean_object* v_auxDeclNGen_192_; lean_object* v_traceState_193_; lean_object* v_messages_194_; lean_object* v_infoState_195_; lean_object* v_snapshotTasks_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_205_; 
v___x_188_ = lean_st_ref_take(v___x_124_);
v_env_189_ = lean_ctor_get(v___x_188_, 0);
v_nextMacroScope_190_ = lean_ctor_get(v___x_188_, 1);
v_ngen_191_ = lean_ctor_get(v___x_188_, 2);
v_auxDeclNGen_192_ = lean_ctor_get(v___x_188_, 3);
v_traceState_193_ = lean_ctor_get(v___x_188_, 4);
v_messages_194_ = lean_ctor_get(v___x_188_, 6);
v_infoState_195_ = lean_ctor_get(v___x_188_, 7);
v_snapshotTasks_196_ = lean_ctor_get(v___x_188_, 8);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_188_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; 
v_unused_206_ = lean_ctor_get(v___x_188_, 5);
lean_dec(v_unused_206_);
v___x_198_ = v___x_188_;
v_isShared_199_ = v_isSharedCheck_205_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_snapshotTasks_196_);
lean_inc(v_infoState_195_);
lean_inc(v_messages_194_);
lean_inc(v_traceState_193_);
lean_inc(v_auxDeclNGen_192_);
lean_inc(v_ngen_191_);
lean_inc(v_nextMacroScope_190_);
lean_inc(v_env_189_);
lean_dec(v___x_188_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_205_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_202_; 
v___x_200_ = l_Lean_Kernel_enableDiag(v_env_189_, v___x_136_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 5, v___x_110_);
lean_ctor_set(v___x_198_, 0, v___x_200_);
v___x_202_ = v___x_198_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v_nextMacroScope_190_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v_ngen_191_);
lean_ctor_set(v_reuseFailAlloc_204_, 3, v_auxDeclNGen_192_);
lean_ctor_set(v_reuseFailAlloc_204_, 4, v_traceState_193_);
lean_ctor_set(v_reuseFailAlloc_204_, 5, v___x_110_);
lean_ctor_set(v_reuseFailAlloc_204_, 6, v_messages_194_);
lean_ctor_set(v_reuseFailAlloc_204_, 7, v_infoState_195_);
lean_ctor_set(v_reuseFailAlloc_204_, 8, v_snapshotTasks_196_);
v___x_202_ = v_reuseFailAlloc_204_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_203_; 
v___x_203_ = lean_st_ref_set(v___x_124_, v___x_202_);
lean_inc(v___x_124_);
v_fileName_138_ = v___x_129_;
v_fileMap_139_ = v___x_130_;
v_currRecDepth_140_ = v___x_109_;
v_ref_141_ = v___x_132_;
v_currNamespace_142_ = v___x_116_;
v_openDecls_143_ = v___x_117_;
v_initHeartbeats_144_ = v___x_112_;
v_maxHeartbeats_145_ = v___x_133_;
v_quotContext_146_ = v___x_116_;
v_currMacroScope_147_ = v___x_113_;
v_cancelTk_x3f_148_ = v___x_135_;
v_suppressElabErrors_149_ = v___x_134_;
v_inheritedTraceOptions_150_ = v___x_126_;
v___y_151_ = v___x_124_;
goto v___jp_137_;
}
}
}
else
{
lean_inc(v___x_124_);
v_fileName_138_ = v___x_129_;
v_fileMap_139_ = v___x_130_;
v_currRecDepth_140_ = v___x_109_;
v_ref_141_ = v___x_132_;
v_currNamespace_142_ = v___x_116_;
v_openDecls_143_ = v___x_117_;
v_initHeartbeats_144_ = v___x_112_;
v_maxHeartbeats_145_ = v___x_133_;
v_quotContext_146_ = v___x_116_;
v_currMacroScope_147_ = v___x_113_;
v_cancelTk_x3f_148_ = v___x_135_;
v_suppressElabErrors_149_ = v___x_134_;
v_inheritedTraceOptions_150_ = v___x_126_;
v___y_151_ = v___x_124_;
goto v___jp_137_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitZig___boxed(lean_object* v_mainModuleName_208_, lean_object* v_env_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_res_211_; 
v_res_211_ = l___private_Lean_Shell_0__Lean_emitZig(v_mainModuleName_208_, v_env_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object* v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_213_){
_start:
{
uint8_t v_res_214_; lean_object* v_r_215_; 
v_res_214_ = lean_internal_has_address_sanitizer(v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_213_);
v_r_215_ = lean_box(v_res_214_);
return v_r_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object* v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = lean_internal_is_multi_thread(v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_217_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object* v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = lean_internal_is_debug(v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_221_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object* v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = lean_internal_get_build_type(v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* v_max_229_, lean_object* v_a_00___x40___internal___hyg_230_){
_start:
{
size_t v_max_boxed_231_; lean_object* v_res_232_; 
v_max_boxed_231_ = lean_unbox_usize(v_max_229_);
lean_dec(v_max_229_);
v_res_232_ = lean_internal_set_max_memory(v_max_boxed_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = lean_internal_get_default_max_memory(v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object* v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = lean_internal_get_default_max_heartbeat(v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object* v_max_241_, lean_object* v_a_00___x40___internal___hyg_242_){
_start:
{
size_t v_max_boxed_243_; lean_object* v_res_244_; 
v_max_boxed_243_ = lean_unbox_usize(v_max_241_);
lean_dec(v_max_241_);
v_res_244_ = lean_internal_set_max_heartbeat(v_max_boxed_243_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object* v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = lean_internal_get_default_verbose(v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_246_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object* v_exit_251_, lean_object* v_a_00___x40___internal___hyg_252_){
_start:
{
uint8_t v_exit_boxed_253_; lean_object* v_res_254_; 
v_exit_boxed_253_ = lean_unbox(v_exit_251_);
v_res_254_ = lean_internal_set_exit_on_panic(v_exit_boxed_253_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object* v_sz_257_, lean_object* v_a_00___x40___internal___hyg_258_){
_start:
{
size_t v_sz_boxed_259_; lean_object* v_res_260_; 
v_sz_boxed_259_ = lean_unbox_usize(v_sz_257_);
lean_dec(v_sz_257_);
v_res_260_ = lean_internal_set_thread_stack_size(v_sz_boxed_259_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object* v_tag_263_, lean_object* v_a_00___x40___internal___hyg_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lean_internal_enable_debug(v_tag_263_);
lean_dec_ref(v_tag_263_);
return v_res_265_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_267_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_268_ = l_Lean_version_specialDesc;
v___x_269_ = lean_string_dec_eq(v___x_268_, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_271_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__2));
v___x_272_ = l_Lean_versionStringCore;
v___x_273_ = lean_string_append(v___x_272_, v___x_271_);
return v___x_273_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = l_Lean_version_specialDesc;
v___x_275_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__3, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3);
v___x_276_ = lean_string_append(v___x_275_, v___x_274_);
return v___x_276_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__5));
v___x_279_ = l_Lean_versionStringCore;
v___x_280_ = lean_string_append(v___x_279_, v___x_278_);
return v___x_280_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString(void){
_start:
{
uint8_t v___x_281_; 
v___x_281_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__1, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; 
v___x_282_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__4, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4);
return v___x_282_;
}
else
{
uint8_t v___x_283_; 
v___x_283_ = l_Lean_version_isRelease;
if (v___x_283_ == 0)
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__6, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6);
return v___x_284_;
}
else
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_versionStringCore;
return v___x_285_;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_box(0);
v___x_289_ = lean_internal_get_build_type(v___x_288_);
return v___x_289_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_292_ = l_Lean_githash;
v___x_293_ = lean_string_dec_eq(v___x_292_, v___x_291_);
return v___x_293_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_295_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_296_ = l_System_Platform_target;
v___x_297_ = lean_string_dec_eq(v___x_296_, v___x_295_);
return v___x_297_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7(void){
_start:
{
lean_object* v___x_298_; lean_object* v_ver_299_; lean_object* v___x_300_; 
v___x_298_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v_ver_299_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_300_ = lean_string_append(v_ver_299_, v___x_298_);
return v___x_300_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v_ver_303_; 
v___x_301_ = l_System_Platform_target;
v___x_302_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__7, &l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7);
v_ver_303_ = lean_string_append(v___x_302_, v___x_301_);
return v_ver_303_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader(void){
_start:
{
lean_object* v_ver_305_; lean_object* v_ver_315_; lean_object* v_ver_321_; uint8_t v___x_322_; 
v_ver_321_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_322_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__6, &l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6);
if (v___x_322_ == 0)
{
lean_object* v_ver_323_; 
v_ver_323_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__8, &l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8);
v_ver_315_ = v_ver_323_;
goto v___jp_314_;
}
else
{
v_ver_315_ = v_ver_321_;
goto v___jp_314_;
}
v___jp_304_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_306_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__0));
v___x_307_ = lean_string_append(v___x_306_, v_ver_305_);
lean_dec_ref(v_ver_305_);
v___x_308_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v___x_309_ = lean_string_append(v___x_307_, v___x_308_);
v___x_310_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__2, &l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2);
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
v___x_312_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__3));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
return v___x_313_;
}
v___jp_314_:
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = l_Lean_githash;
v___x_317_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__4, &l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v_ver_320_; 
v___x_318_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__5));
lean_inc_ref(v_ver_315_);
v___x_319_ = lean_string_append(v_ver_315_, v___x_318_);
v_ver_320_ = lean_string_append(v___x_319_, v___x_316_);
v_ver_305_ = v_ver_320_;
goto v___jp_304_;
}
else
{
lean_inc_ref(v_ver_315_);
v_ver_305_ = v_ver_315_;
goto v___jp_304_;
}
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0(void){
_start:
{
lean_object* v___x_324_; uint8_t v___x_325_; 
v___x_324_ = lean_box(0);
v___x_325_ = lean_internal_has_llvm_backend(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_featuresString(void){
_start:
{
uint8_t v___x_328_; 
v___x_328_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_featuresString___closed__0, &l___private_Lean_Shell_0__Lean_featuresString___closed__0_once, _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
v___x_329_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__1));
return v___x_329_;
}
else
{
lean_object* v___x_330_; 
v___x_330_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__2));
return v___x_330_;
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16(void){
_start:
{
lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_347_ = lean_box(0);
v___x_348_ = lean_internal_is_debug(v___x_347_);
return v___x_348_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40(void){
_start:
{
lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_372_ = lean_box(0);
v___x_373_ = lean_internal_is_multi_thread(v___x_372_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t v_useStderr_378_){
_start:
{
lean_object* v___y_381_; lean_object* v___y_385_; lean_object* v_out_420_; 
if (v_useStderr_378_ == 0)
{
lean_object* v___x_476_; 
v___x_476_ = lean_get_stdout();
v_out_420_ = v___x_476_;
goto v___jp_419_;
}
else
{
lean_object* v___x_477_; 
v___x_477_ = lean_get_stderr();
v_out_420_ = v___x_477_;
goto v___jp_419_;
}
v___jp_380_:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__0));
v___x_383_ = l_IO_FS_Stream_putStrLn(v___y_381_, v___x_382_);
return v___x_383_;
}
v___jp_384_:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__1));
lean_inc_ref(v___y_385_);
v___x_387_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_386_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref_known(v___x_387_, 1);
v___x_388_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__2));
lean_inc_ref(v___y_385_);
v___x_389_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; 
lean_dec_ref_known(v___x_389_, 1);
v___x_390_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__3));
lean_inc_ref(v___y_385_);
v___x_391_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_390_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref_known(v___x_391_, 1);
v___x_392_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__4));
lean_inc_ref(v___y_385_);
v___x_393_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_392_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec_ref_known(v___x_393_, 1);
v___x_394_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__5));
lean_inc_ref(v___y_385_);
v___x_395_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_394_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v___x_396_; lean_object* v___x_397_; 
lean_dec_ref_known(v___x_395_, 1);
v___x_396_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__6));
lean_inc_ref(v___y_385_);
v___x_397_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec_ref_known(v___x_397_, 1);
v___x_398_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__7));
lean_inc_ref(v___y_385_);
v___x_399_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_398_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec_ref_known(v___x_399_, 1);
v___x_400_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__8));
lean_inc_ref(v___y_385_);
v___x_401_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_402_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__9));
lean_inc_ref(v___y_385_);
v___x_403_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec_ref_known(v___x_403_, 1);
v___x_404_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__10));
lean_inc_ref(v___y_385_);
v___x_405_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref_known(v___x_405_, 1);
v___x_406_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__11));
lean_inc_ref(v___y_385_);
v___x_407_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref_known(v___x_407_, 1);
v___x_408_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__12));
lean_inc_ref(v___y_385_);
v___x_409_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec_ref_known(v___x_409_, 1);
v___x_410_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__13));
lean_inc_ref(v___y_385_);
v___x_411_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec_ref_known(v___x_411_, 1);
v___x_412_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__14));
lean_inc_ref(v___y_385_);
v___x_413_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec_ref_known(v___x_413_, 1);
v___x_414_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__15));
lean_inc_ref(v___y_385_);
v___x_415_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_414_);
if (lean_obj_tag(v___x_415_) == 0)
{
uint8_t v___x_416_; 
lean_dec_ref_known(v___x_415_, 1);
v___x_416_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_416_ == 0)
{
v___y_381_ = v___y_385_;
goto v___jp_380_;
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__17));
lean_inc_ref(v___y_385_);
v___x_418_ = l_IO_FS_Stream_putStrLn(v___y_385_, v___x_417_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_dec_ref_known(v___x_418_, 1);
v___y_381_ = v___y_385_;
goto v___jp_380_;
}
else
{
lean_dec_ref(v___y_385_);
return v___x_418_;
}
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_415_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_413_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_411_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_409_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_407_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_405_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_403_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_401_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_399_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_397_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_395_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_393_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_391_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_389_;
}
}
else
{
lean_dec_ref(v___y_385_);
return v___x_387_;
}
}
v___jp_419_:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(v_out_420_);
v___x_422_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_421_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref_known(v___x_422_, 1);
v___x_423_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__18));
lean_inc_ref(v_out_420_);
v___x_424_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec_ref_known(v___x_424_, 1);
v___x_425_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__19));
lean_inc_ref(v_out_420_);
v___x_426_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec_ref_known(v___x_426_, 1);
v___x_427_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__20));
lean_inc_ref(v_out_420_);
v___x_428_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v___x_429_; lean_object* v___x_430_; 
lean_dec_ref_known(v___x_428_, 1);
v___x_429_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__21));
lean_inc_ref(v_out_420_);
v___x_430_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec_ref_known(v___x_430_, 1);
v___x_431_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__22));
lean_inc_ref(v_out_420_);
v___x_432_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec_ref_known(v___x_432_, 1);
v___x_433_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__23));
lean_inc_ref(v_out_420_);
v___x_434_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_433_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec_ref_known(v___x_434_, 1);
v___x_435_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__24));
lean_inc_ref(v_out_420_);
v___x_436_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
lean_dec_ref_known(v___x_436_, 1);
v___x_437_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__25));
lean_inc_ref(v_out_420_);
v___x_438_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec_ref_known(v___x_438_, 1);
v___x_439_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__26));
lean_inc_ref(v_out_420_);
v___x_440_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; 
lean_dec_ref_known(v___x_440_, 1);
v___x_441_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__27));
lean_inc_ref(v_out_420_);
v___x_442_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec_ref_known(v___x_442_, 1);
v___x_443_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__28));
lean_inc_ref(v_out_420_);
v___x_444_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec_ref_known(v___x_444_, 1);
v___x_445_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__29));
lean_inc_ref(v_out_420_);
v___x_446_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_445_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref_known(v___x_446_, 1);
v___x_447_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__30));
lean_inc_ref(v_out_420_);
v___x_448_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec_ref_known(v___x_448_, 1);
v___x_449_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__31));
lean_inc_ref(v_out_420_);
v___x_450_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_449_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec_ref_known(v___x_450_, 1);
v___x_451_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__32));
lean_inc_ref(v_out_420_);
v___x_452_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v___x_453_; lean_object* v___x_454_; 
lean_dec_ref_known(v___x_452_, 1);
v___x_453_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__33));
lean_inc_ref(v_out_420_);
v___x_454_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec_ref_known(v___x_454_, 1);
v___x_455_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__34));
lean_inc_ref(v_out_420_);
v___x_456_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_455_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec_ref_known(v___x_456_, 1);
v___x_457_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__35));
lean_inc_ref(v_out_420_);
v___x_458_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; 
lean_dec_ref_known(v___x_458_, 1);
v___x_459_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__36));
lean_inc_ref(v_out_420_);
v___x_460_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec_ref_known(v___x_460_, 1);
v___x_461_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__37));
lean_inc_ref(v_out_420_);
v___x_462_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_461_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec_ref_known(v___x_462_, 1);
v___x_463_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__38));
lean_inc_ref(v_out_420_);
v___x_464_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref_known(v___x_464_, 1);
v___x_465_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__39));
lean_inc_ref(v_out_420_);
v___x_466_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
uint8_t v___x_467_; 
lean_dec_ref_known(v___x_466_, 1);
v___x_467_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_467_ == 0)
{
v___y_385_ = v_out_420_;
goto v___jp_384_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__41));
lean_inc_ref(v_out_420_);
v___x_469_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_470_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__42));
lean_inc_ref(v_out_420_);
v___x_471_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_470_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref_known(v___x_471_, 1);
v___x_472_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__43));
lean_inc_ref(v_out_420_);
v___x_473_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_472_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec_ref_known(v___x_473_, 1);
v___x_474_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__44));
lean_inc_ref(v_out_420_);
v___x_475_ = l_IO_FS_Stream_putStrLn(v_out_420_, v___x_474_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_dec_ref_known(v___x_475_, 1);
v___y_385_ = v_out_420_;
goto v___jp_384_;
}
else
{
lean_dec_ref(v_out_420_);
return v___x_475_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_473_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_471_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_469_;
}
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_466_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_464_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_462_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_460_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_458_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_456_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_454_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_452_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_450_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_448_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_446_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_444_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_442_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_440_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_438_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_436_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_434_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_432_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_430_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_428_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_426_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_424_;
}
}
else
{
lean_dec_ref(v_out_420_);
return v___x_422_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* v_useStderr_478_, lean_object* v_a_479_){
_start:
{
uint8_t v_useStderr_boxed_480_; lean_object* v_res_481_; 
v_useStderr_boxed_480_ = lean_unbox(v_useStderr_478_);
v_res_481_ = l___private_Lean_Shell_0__Lean_displayHelp(v_useStderr_boxed_480_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t v_x_482_){
_start:
{
switch(v_x_482_)
{
case 0:
{
lean_object* v___x_483_; 
v___x_483_ = lean_unsigned_to_nat(0u);
return v___x_483_;
}
case 1:
{
lean_object* v___x_484_; 
v___x_484_ = lean_unsigned_to_nat(1u);
return v___x_484_;
}
default: 
{
lean_object* v___x_485_; 
v___x_485_ = lean_unsigned_to_nat(2u);
return v___x_485_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object* v_x_486_){
_start:
{
uint8_t v_x_boxed_487_; lean_object* v_res_488_; 
v_x_boxed_487_ = lean_unbox(v_x_486_);
v_res_488_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_boxed_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t v_x_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object* v_x_491_){
_start:
{
uint8_t v_x_4__boxed_492_; lean_object* v_res_493_; 
v_x_4__boxed_492_ = lean_unbox(v_x_491_);
v_res_493_ = l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(v_x_4__boxed_492_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* v_k_494_){
_start:
{
lean_inc(v_k_494_);
return v_k_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* v_k_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(v_k_495_);
lean_dec(v_k_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* v_motive_497_, lean_object* v_ctorIdx_498_, uint8_t v_t_499_, lean_object* v_h_500_, lean_object* v_k_501_){
_start:
{
lean_inc(v_k_501_);
return v_k_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* v_motive_502_, lean_object* v_ctorIdx_503_, lean_object* v_t_504_, lean_object* v_h_505_, lean_object* v_k_506_){
_start:
{
uint8_t v_t_boxed_507_; lean_object* v_res_508_; 
v_t_boxed_507_ = lean_unbox(v_t_504_);
v_res_508_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(v_motive_502_, v_ctorIdx_503_, v_t_boxed_507_, v_h_505_, v_k_506_);
lean_dec(v_k_506_);
lean_dec(v_ctorIdx_503_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* v_frontend_509_){
_start:
{
lean_inc(v_frontend_509_);
return v_frontend_509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* v_frontend_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(v_frontend_510_);
lean_dec(v_frontend_510_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* v_motive_512_, uint8_t v_t_513_, lean_object* v_h_514_, lean_object* v_frontend_515_){
_start:
{
lean_inc(v_frontend_515_);
return v_frontend_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* v_motive_516_, lean_object* v_t_517_, lean_object* v_h_518_, lean_object* v_frontend_519_){
_start:
{
uint8_t v_t_boxed_520_; lean_object* v_res_521_; 
v_t_boxed_520_ = lean_unbox(v_t_517_);
v_res_521_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(v_motive_516_, v_t_boxed_520_, v_h_518_, v_frontend_519_);
lean_dec(v_frontend_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* v_watchdog_522_){
_start:
{
lean_inc(v_watchdog_522_);
return v_watchdog_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* v_watchdog_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(v_watchdog_523_);
lean_dec(v_watchdog_523_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* v_motive_525_, uint8_t v_t_526_, lean_object* v_h_527_, lean_object* v_watchdog_528_){
_start:
{
lean_inc(v_watchdog_528_);
return v_watchdog_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* v_motive_529_, lean_object* v_t_530_, lean_object* v_h_531_, lean_object* v_watchdog_532_){
_start:
{
uint8_t v_t_boxed_533_; lean_object* v_res_534_; 
v_t_boxed_533_ = lean_unbox(v_t_530_);
v_res_534_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(v_motive_529_, v_t_boxed_533_, v_h_531_, v_watchdog_532_);
lean_dec(v_watchdog_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* v_worker_535_){
_start:
{
lean_inc(v_worker_535_);
return v_worker_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* v_worker_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(v_worker_536_);
lean_dec(v_worker_536_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* v_motive_538_, uint8_t v_t_539_, lean_object* v_h_540_, lean_object* v_worker_541_){
_start:
{
lean_inc(v_worker_541_);
return v_worker_541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* v_motive_542_, lean_object* v_t_543_, lean_object* v_h_544_, lean_object* v_worker_545_){
_start:
{
uint8_t v_t_boxed_546_; lean_object* v_res_547_; 
v_t_boxed_546_ = lean_unbox(v_t_543_);
v_res_547_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(v_motive_542_, v_t_boxed_546_, v_h_544_, v_worker_545_);
lean_dec(v_worker_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object* v_name_548_, lean_object* v_decl_549_, lean_object* v_ref_550_){
_start:
{
lean_object* v_defValue_552_; lean_object* v_descr_553_; lean_object* v_deprecation_x3f_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_defValue_552_ = lean_ctor_get(v_decl_549_, 0);
v_descr_553_ = lean_ctor_get(v_decl_549_, 1);
v_deprecation_x3f_554_ = lean_ctor_get(v_decl_549_, 2);
lean_inc(v_defValue_552_);
v___x_555_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_555_, 0, v_defValue_552_);
lean_inc(v_deprecation_x3f_554_);
lean_inc_ref(v_descr_553_);
lean_inc_n(v_name_548_, 2);
v___x_556_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_556_, 0, v_name_548_);
lean_ctor_set(v___x_556_, 1, v_ref_550_);
lean_ctor_set(v___x_556_, 2, v___x_555_);
lean_ctor_set(v___x_556_, 3, v_descr_553_);
lean_ctor_set(v___x_556_, 4, v_deprecation_x3f_554_);
v___x_557_ = lean_register_option(v_name_548_, v___x_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_565_; 
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_565_ == 0)
{
lean_object* v_unused_566_; 
v_unused_566_ = lean_ctor_get(v___x_557_, 0);
lean_dec(v_unused_566_);
v___x_559_ = v___x_557_;
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
else
{
lean_dec(v___x_557_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_565_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; lean_object* v___x_563_; 
lean_inc(v_defValue_552_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_name_548_);
lean_ctor_set(v___x_561_, 1, v_defValue_552_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_561_);
v___x_563_ = v___x_559_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_561_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
lean_dec(v_name_548_);
v_a_567_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_557_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_557_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_575_, lean_object* v_decl_576_, lean_object* v_ref_577_, lean_object* v_a_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v_name_575_, v_decl_576_, v_ref_577_);
lean_dec_ref(v_decl_576_);
return v_res_579_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_box(0);
v___x_584_ = lean_internal_get_default_max_memory(v___x_583_);
return v___x_584_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_585_ = lean_box(0);
v___x_586_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_587_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_588_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_586_);
lean_ctor_set(v___x_588_, 2, v___x_585_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_612_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_613_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_614_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_615_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_612_, v___x_613_, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
return v_res_617_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_box(0);
v___x_622_ = lean_internal_get_default_max_heartbeat(v___x_621_);
return v___x_622_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_623_ = lean_box(0);
v___x_624_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_625_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_626_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
lean_ctor_set(v___x_626_, 2, v___x_623_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_631_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_632_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_633_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_634_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_631_, v___x_632_, v___x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object* v_a_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object* v_name_637_, lean_object* v_decl_638_, lean_object* v_ref_639_){
_start:
{
lean_object* v_defValue_641_; lean_object* v_descr_642_; lean_object* v_deprecation_x3f_643_; lean_object* v___x_644_; uint8_t v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_defValue_641_ = lean_ctor_get(v_decl_638_, 0);
v_descr_642_ = lean_ctor_get(v_decl_638_, 1);
v_deprecation_x3f_643_ = lean_ctor_get(v_decl_638_, 2);
v___x_644_ = lean_alloc_ctor(1, 0, 1);
v___x_645_ = lean_unbox(v_defValue_641_);
lean_ctor_set_uint8(v___x_644_, 0, v___x_645_);
lean_inc(v_deprecation_x3f_643_);
lean_inc_ref(v_descr_642_);
lean_inc_n(v_name_637_, 2);
v___x_646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_646_, 0, v_name_637_);
lean_ctor_set(v___x_646_, 1, v_ref_639_);
lean_ctor_set(v___x_646_, 2, v___x_644_);
lean_ctor_set(v___x_646_, 3, v_descr_642_);
lean_ctor_set(v___x_646_, 4, v_deprecation_x3f_643_);
v___x_647_ = lean_register_option(v_name_637_, v___x_646_);
if (lean_obj_tag(v___x_647_) == 0)
{
lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_655_; 
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; 
v_unused_656_ = lean_ctor_get(v___x_647_, 0);
lean_dec(v_unused_656_);
v___x_649_ = v___x_647_;
v_isShared_650_ = v_isSharedCheck_655_;
goto v_resetjp_648_;
}
else
{
lean_dec(v___x_647_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_655_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_651_; lean_object* v___x_653_; 
lean_inc(v_defValue_641_);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v_name_637_);
lean_ctor_set(v___x_651_, 1, v_defValue_641_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v___x_651_);
v___x_653_ = v___x_649_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
else
{
lean_object* v_a_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_664_; 
lean_dec(v_name_637_);
v_a_657_ = lean_ctor_get(v___x_647_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_664_ == 0)
{
v___x_659_ = v___x_647_;
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_a_657_);
lean_dec(v___x_647_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_664_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_662_; 
if (v_isShared_660_ == 0)
{
v___x_662_ = v___x_659_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_657_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_665_, lean_object* v_decl_666_, lean_object* v_ref_667_, lean_object* v_a_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v_name_665_, v_decl_666_, v_ref_667_);
lean_dec_ref(v_decl_666_);
return v_res_669_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_673_ = lean_box(0);
v___x_674_ = lean_internal_get_default_verbose(v___x_673_);
return v___x_674_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; uint8_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_675_ = lean_box(0);
v___x_676_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_677_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_678_ = lean_box(v___x_677_);
v___x_679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___x_676_);
lean_ctor_set(v___x_679_, 2, v___x_675_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_684_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_685_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_686_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_687_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v___x_684_, v___x_685_, v___x_686_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultOptions___boxed(lean_object* v_x_00___x40_Lean_Shell_2553953037____hygCtx___hyg_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = lean_internal_get_default_options(v_x_00___x40_Lean_Shell_2553953037____hygCtx___hyg_691_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object* v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_694_){
_start:
{
uint32_t v_res_695_; lean_object* v_r_696_; 
v_res_695_ = lean_internal_get_believer_trust_level(v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_694_);
v_r_696_ = lean_box_uint32(v_res_695_);
return v_r_696_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0(void){
_start:
{
lean_object* v___x_697_; uint32_t v___x_698_; 
v___x_697_ = lean_box(0);
v___x_698_ = lean_internal_get_believer_trust_level(v___x_697_);
return v___x_698_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1(void){
_start:
{
uint32_t v___x_699_; uint32_t v___x_700_; uint32_t v___x_701_; 
v___x_699_ = 1;
v___x_700_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0);
v___x_701_ = lean_uint32_add(v___x_700_, v___x_699_);
return v___x_701_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel(void){
_start:
{
uint32_t v___x_702_; 
v___x_702_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1);
return v___x_702_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0(void){
_start:
{
lean_object* v___x_703_; uint32_t v___x_704_; 
v___x_703_ = lean_box(0);
v___x_704_ = lean_internal_get_hardware_concurrency(v___x_703_);
return v___x_704_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads(void){
_start:
{
uint8_t v___x_705_; 
v___x_705_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_705_ == 0)
{
uint32_t v___x_706_; 
v___x_706_ = 0;
return v___x_706_;
}
else
{
uint32_t v___x_707_; 
v___x_707_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0, &l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0);
return v___x_707_;
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_box(0);
v___x_709_ = lean_internal_get_default_options(v___x_708_);
return v___x_709_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2(void){
_start:
{
lean_object* v___x_712_; uint32_t v___x_713_; uint32_t v___x_714_; lean_object* v___x_715_; uint8_t v___x_716_; uint8_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_712_ = lean_box(0);
v___x_713_ = l___private_Lean_Shell_0__Lean_defaultNumThreads;
v___x_714_ = l___private_Lean_Shell_0__Lean_defaultTrustLevel;
v___x_715_ = l_Lean_Options_empty;
v___x_716_ = 0;
v___x_717_ = 0;
v___x_718_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1));
v___x_719_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0);
v___x_720_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v___x_720_, 0, v___x_719_);
lean_ctor_set(v___x_720_, 1, v___x_718_);
lean_ctor_set(v___x_720_, 2, v___x_715_);
lean_ctor_set(v___x_720_, 3, v___x_712_);
lean_ctor_set(v___x_720_, 4, v___x_712_);
lean_ctor_set(v___x_720_, 5, v___x_712_);
lean_ctor_set(v___x_720_, 6, v___x_712_);
lean_ctor_set(v___x_720_, 7, v___x_712_);
lean_ctor_set(v___x_720_, 8, v___x_712_);
lean_ctor_set(v___x_720_, 9, v___x_712_);
lean_ctor_set(v___x_720_, 10, v___x_718_);
lean_ctor_set(v___x_720_, 11, v___x_712_);
lean_ctor_set(v___x_720_, 12, v___x_712_);
lean_ctor_set(v___x_720_, 13, v___x_712_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 8, v___x_717_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 9, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 10, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 11, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 12, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 13, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 14, v___x_716_);
lean_ctor_set_uint32(v___x_720_, sizeof(void*)*14, v___x_714_);
lean_ctor_set_uint32(v___x_720_, sizeof(void*)*14 + 4, v___x_713_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 15, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 16, v___x_716_);
lean_ctor_set_uint8(v___x_720_, sizeof(void*)*14 + 17, v___x_716_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object* v_x_721_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2);
return v___x_722_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object* v_opts_723_){
_start:
{
uint8_t v_run_724_; 
v_run_724_ = lean_ctor_get_uint8(v_opts_723_, sizeof(void*)*14 + 17);
lean_dec_ref(v_opts_723_);
return v_run_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object* v_opts_725_){
_start:
{
uint8_t v_res_726_; lean_object* v_r_727_; 
v_res_726_ = lean_shell_options_get_run(v_opts_725_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object* v_opts_728_){
_start:
{
lean_object* v_leanOpts_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v_leanOpts_729_ = lean_ctor_get(v_opts_728_, 0);
lean_inc_ref(v_leanOpts_729_);
lean_dec_ref(v_opts_728_);
v___x_730_ = l_Lean_profiler;
v___x_731_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v_leanOpts_729_, v___x_730_);
lean_dec_ref(v_leanOpts_729_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object* v_opts_732_){
_start:
{
uint8_t v_res_733_; lean_object* v_r_734_; 
v_res_733_ = lean_shell_options_get_profiler(v_opts_732_);
v_r_734_ = lean_box(v_res_733_);
return v_r_734_;
}
}
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object* v_opts_735_){
_start:
{
uint32_t v_numThreads_736_; 
v_numThreads_736_ = lean_ctor_get_uint32(v_opts_735_, sizeof(void*)*14 + 4);
lean_dec_ref(v_opts_735_);
return v_numThreads_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object* v_opts_737_){
_start:
{
uint32_t v_res_738_; lean_object* v_r_739_; 
v_res_738_ = lean_shell_options_get_num_threads(v_opts_737_);
v_r_739_ = lean_box_uint32(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object* v_optName_742_, lean_object* v_optArg_x3f_743_){
_start:
{
if (lean_obj_tag(v_optArg_x3f_743_) == 1)
{
lean_object* v_val_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
v_val_745_ = lean_ctor_get(v_optArg_x3f_743_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v_optArg_x3f_743_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v_optArg_x3f_743_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_val_745_);
lean_dec(v_optArg_x3f_743_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 0);
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_val_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
else
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
lean_dec(v_optArg_x3f_743_);
v___x_753_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__0));
v___x_754_ = lean_string_append(v___x_753_, v_optName_742_);
v___x_755_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_756_ = lean_string_append(v___x_754_, v___x_755_);
v___x_757_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object* v_optName_759_, lean_object* v_optArg_x3f_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l___private_Lean_Shell_0__Lean_checkOptArg(v_optName_759_, v_optArg_x3f_760_);
lean_dec_ref(v_optName_759_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object* v_o_766_, lean_object* v_k_767_, lean_object* v_v_768_){
_start:
{
lean_object* v_map_769_; uint8_t v_hasTrace_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_784_; 
v_map_769_ = lean_ctor_get(v_o_766_, 0);
v_hasTrace_770_ = lean_ctor_get_uint8(v_o_766_, sizeof(void*)*1);
v_isSharedCheck_784_ = !lean_is_exclusive(v_o_766_);
if (v_isSharedCheck_784_ == 0)
{
v___x_772_ = v_o_766_;
v_isShared_773_ = v_isSharedCheck_784_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_map_769_);
lean_dec(v_o_766_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_784_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_774_, 0, v_v_768_);
lean_inc(v_k_767_);
v___x_775_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_767_, v___x_774_, v_map_769_);
if (v_hasTrace_770_ == 0)
{
lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_779_; 
v___x_776_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_777_ = l_Lean_Name_isPrefixOf(v___x_776_, v_k_767_);
lean_dec(v_k_767_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_775_);
v___x_779_ = v___x_772_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_775_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_ctor_set_uint8(v___x_779_, sizeof(void*)*1, v___x_777_);
return v___x_779_;
}
}
else
{
lean_object* v___x_782_; 
lean_dec(v_k_767_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_775_);
v___x_782_ = v___x_772_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_775_);
lean_ctor_set_uint8(v_reuseFailAlloc_783_, sizeof(void*)*1, v_hasTrace_770_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object* v___x_785_, lean_object* v_arg_786_, lean_object* v_a_787_, lean_object* v_b_788_){
_start:
{
lean_object* v_startInclusive_789_; lean_object* v_endExclusive_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v_startInclusive_789_ = lean_ctor_get(v___x_785_, 1);
v_endExclusive_790_ = lean_ctor_get(v___x_785_, 2);
v___x_791_ = lean_nat_sub(v_endExclusive_790_, v_startInclusive_789_);
v___x_792_ = lean_nat_dec_eq(v_a_787_, v___x_791_);
lean_dec(v___x_791_);
if (v___x_792_ == 0)
{
uint32_t v___x_793_; uint32_t v___x_794_; uint8_t v___x_795_; 
v___x_793_ = lean_string_utf8_get_fast(v_arg_786_, v_a_787_);
v___x_794_ = 61;
v___x_795_ = lean_uint32_dec_eq(v___x_793_, v___x_794_);
if (v___x_795_ == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_box(0);
v___x_797_ = lean_string_utf8_next_fast(v_arg_786_, v_a_787_);
lean_dec(v_a_787_);
v_a_787_ = v___x_797_;
v_b_788_ = v___x_796_;
goto _start;
}
else
{
lean_object* v___x_799_; 
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v_a_787_);
return v___x_799_;
}
}
else
{
lean_dec(v_a_787_);
lean_inc(v_b_788_);
return v_b_788_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object* v___x_800_, lean_object* v_arg_801_, lean_object* v_a_802_, lean_object* v_b_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_800_, v_arg_801_, v_a_802_, v_b_803_);
lean_dec(v_b_803_);
lean_dec_ref(v_arg_801_);
lean_dec_ref(v___x_800_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object* v_opts_808_, lean_object* v_arg_809_){
_start:
{
lean_object* v___y_812_; lean_object* v_searcher_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_searcher_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = lean_string_utf8_byte_size(v_arg_809_);
lean_inc_ref(v_arg_809_);
v___x_845_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_845_, 0, v_arg_809_);
lean_ctor_set(v___x_845_, 1, v_searcher_843_);
lean_ctor_set(v___x_845_, 2, v___x_844_);
v___x_846_ = lean_box(0);
v___x_847_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_845_, v_arg_809_, v_searcher_843_, v___x_846_);
lean_dec_ref_known(v___x_845_, 3);
if (lean_obj_tag(v___x_847_) == 0)
{
v___y_812_ = v___x_844_;
goto v___jp_811_;
}
else
{
lean_object* v_val_848_; 
v_val_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_val_848_);
lean_dec_ref_known(v___x_847_, 1);
v___y_812_ = v_val_848_;
goto v___jp_811_;
}
v___jp_811_:
{
lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_813_ = lean_string_utf8_byte_size(v_arg_809_);
v___x_814_ = lean_nat_dec_eq(v___y_812_, v___x_813_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_832_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_832_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_832_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_832_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v_name_823_; lean_object* v_val_824_; lean_object* v___x_825_; 
v___x_820_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_812_);
lean_inc_ref(v_arg_809_);
v___x_821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_821_, 0, v_arg_809_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
lean_ctor_set(v___x_821_, 2, v___y_812_);
v___x_822_ = lean_string_utf8_next_fast(v_arg_809_, v___y_812_);
lean_dec(v___y_812_);
v_name_823_ = l_String_Slice_toName(v___x_821_);
lean_dec_ref_known(v___x_821_, 3);
v_val_824_ = lean_string_utf8_extract(v_arg_809_, v___x_822_, v___x_813_);
lean_dec_ref(v_arg_809_);
v___x_825_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_816_, v_name_823_);
lean_dec(v_a_816_);
if (lean_obj_tag(v___x_825_) == 1)
{
lean_object* v_val_826_; lean_object* v___x_827_; 
lean_del_object(v___x_818_);
v_val_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_val_826_);
lean_dec_ref_known(v___x_825_, 1);
v___x_827_ = l_Lean_Language_Lean_setOption(v_opts_808_, v_val_826_, v_name_823_, v_val_824_);
return v___x_827_;
}
else
{
lean_object* v___x_828_; lean_object* v___x_830_; 
lean_dec(v___x_825_);
v___x_828_ = l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(v_opts_808_, v_name_823_, v_val_824_);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_828_);
v___x_830_ = v___x_818_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v___y_812_);
lean_dec_ref(v_arg_809_);
lean_dec_ref(v_opts_808_);
v_a_833_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_815_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_815_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
else
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_dec(v___y_812_);
lean_dec_ref(v_arg_809_);
lean_dec_ref(v_opts_808_);
v___x_841_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_setConfigOption___closed__1));
v___x_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object* v_opts_849_, lean_object* v_arg_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_opts_849_, v_arg_850_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object* v___x_853_, lean_object* v_arg_854_, lean_object* v_inst_855_, lean_object* v_R_856_, lean_object* v_a_857_, lean_object* v_b_858_, lean_object* v_c_859_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_853_, v_arg_854_, v_a_857_, v_b_858_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object* v___x_861_, lean_object* v_arg_862_, lean_object* v_inst_863_, lean_object* v_R_864_, lean_object* v_a_865_, lean_object* v_b_866_, lean_object* v_c_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(v___x_861_, v_arg_862_, v_inst_863_, v_R_864_, v_a_865_, v_b_866_, v_c_867_);
lean_dec(v_b_866_);
lean_dec_ref(v_arg_862_);
lean_dec_ref(v___x_861_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object* v_msg_870_){
_start:
{
lean_object* v___f_872_; lean_object* v___x_873_; 
v___f_872_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_873_ = l_IO_eprint___redArg(v___f_872_, v_msg_870_);
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_881_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_881_ == 0)
{
v___x_876_ = v___x_873_;
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_a_874_);
lean_dec(v___x_873_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_881_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_879_; 
if (v_isShared_877_ == 0)
{
v___x_879_ = v___x_876_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v_a_874_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
return v___x_879_;
}
}
}
else
{
lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_889_; 
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v___x_873_, 0);
lean_dec(v_unused_890_);
v___x_883_ = v___x_873_;
v_isShared_884_ = v_isSharedCheck_889_;
goto v_resetjp_882_;
}
else
{
lean_dec(v___x_873_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_889_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_885_ = lean_box(0);
if (v_isShared_884_ == 0)
{
lean_ctor_set_tag(v___x_883_, 0);
lean_ctor_set(v___x_883_, 0, v___x_885_);
v___x_887_ = v___x_883_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object* v_msg_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(v_msg_891_);
return v_res_893_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_896_; lean_object* v___x_897_; 
v___x_896_ = 1;
v___x_897_ = lean_box_uint32(v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object* v_x_898_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_apply_1(v_x_898_, lean_box(0));
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_907_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_907_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_921_; lean_object* v___f_922_; lean_object* v___x_923_; 
v_a_916_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_907_, 1);
v___x_921_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_922_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_923_ = l_IO_eprint___redArg(v___f_922_, v___x_921_);
lean_dec_ref(v___x_923_);
goto v___jp_917_;
v___jp_917_:
{
lean_object* v___x_918_; lean_object* v___f_919_; lean_object* v___x_920_; 
v___x_918_ = lean_io_error_to_string(v_a_916_);
v___f_919_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_920_ = l_IO_eprint___redArg(v___f_919_, v___x_918_);
lean_dec_ref(v___x_920_);
goto v___jp_903_;
}
}
v___jp_900_:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
return v___x_902_;
}
v___jp_903_:
{
lean_object* v___x_904_; lean_object* v___f_905_; lean_object* v___x_906_; 
v___x_904_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_905_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_906_ = l_IO_eprint___redArg(v___f_905_, v___x_904_);
lean_dec_ref(v___x_906_);
goto v___jp_900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object* v_x_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(v_x_924_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object* v_00_u03b1_927_, lean_object* v_x_928_){
_start:
{
lean_object* v___x_937_; 
v___x_937_ = lean_apply_1(v_x_928_, lean_box(0));
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_937_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_951_; lean_object* v___f_952_; lean_object* v___x_953_; 
v_a_946_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_937_, 1);
v___x_951_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_952_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_953_ = l_IO_eprint___redArg(v___f_952_, v___x_951_);
lean_dec_ref(v___x_953_);
goto v___jp_947_;
v___jp_947_:
{
lean_object* v___x_948_; lean_object* v___f_949_; lean_object* v___x_950_; 
v___x_948_ = lean_io_error_to_string(v_a_946_);
v___f_949_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_950_ = l_IO_eprint___redArg(v___f_949_, v___x_948_);
lean_dec_ref(v___x_950_);
goto v___jp_933_;
}
}
v___jp_930_:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_932_, 0, v___x_931_);
return v___x_932_;
}
v___jp_933_:
{
lean_object* v___x_934_; lean_object* v___f_935_; lean_object* v___x_936_; 
v___x_934_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_935_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_936_ = l_IO_eprint___redArg(v___f_935_, v___x_934_);
lean_dec_ref(v___x_936_);
goto v___jp_930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object* v_00_u03b1_954_, lean_object* v_x_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(v_00_u03b1_954_, v_x_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object* v_opt_960_){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___f_969_; lean_object* v___x_970_; 
v___x_965_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0));
v___x_966_ = lean_string_append(v___x_965_, v_opt_960_);
v___x_967_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_968_ = lean_string_append(v___x_966_, v___x_967_);
v___f_969_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_970_ = l_IO_eprint___redArg(v___f_969_, v___x_968_);
lean_dec_ref(v___x_970_);
goto v___jp_962_;
v___jp_962_:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
return v___x_964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object* v_opt_971_, lean_object* v_a_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(v_opt_971_);
lean_dec_ref(v_opt_971_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object* v_opt_976_){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___f_985_; lean_object* v___x_986_; 
v___x_981_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0));
v___x_982_ = lean_string_append(v___x_981_, v_opt_976_);
v___x_983_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1));
v___x_984_ = lean_string_append(v___x_982_, v___x_983_);
v___f_985_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_986_ = l_IO_eprint___redArg(v___f_985_, v___x_984_);
lean_dec_ref(v___x_986_);
goto v___jp_978_;
v___jp_978_:
{
lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_979_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object* v_opt_987_, lean_object* v_a_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(v_opt_987_);
lean_dec_ref(v_opt_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object* v_s_990_){
_start:
{
lean_object* v___x_992_; lean_object* v_putStr_993_; lean_object* v___x_994_; 
v___x_992_ = lean_get_stderr();
v_putStr_993_ = lean_ctor_get(v___x_992_, 4);
lean_inc_ref(v_putStr_993_);
lean_dec_ref(v___x_992_);
v___x_994_ = lean_apply_2(v_putStr_993_, v_s_990_, lean_box(0));
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object* v_s_995_, lean_object* v_a_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_s_995_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object* v_s_998_){
_start:
{
lean_object* v___x_1000_; lean_object* v_putStr_1001_; lean_object* v___x_1002_; 
v___x_1000_ = lean_get_stdout();
v_putStr_1001_ = lean_ctor_get(v___x_1000_, 4);
lean_inc_ref(v_putStr_1001_);
lean_dec_ref(v___x_1000_);
v___x_1002_ = lean_apply_2(v_putStr_1001_, v_s_998_, lean_box(0));
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object* v_s_1003_, lean_object* v_a_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v_s_1003_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object* v_s_1006_){
_start:
{
uint32_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = 10;
v___x_1009_ = lean_string_push(v_s_1006_, v___x_1008_);
v___x_1010_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object* v_s_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v_s_1011_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object* v_o_1014_, lean_object* v_k_1015_, uint8_t v_v_1016_){
_start:
{
lean_object* v_map_1017_; uint8_t v_hasTrace_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1032_; 
v_map_1017_ = lean_ctor_get(v_o_1014_, 0);
v_hasTrace_1018_ = lean_ctor_get_uint8(v_o_1014_, sizeof(void*)*1);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_o_1014_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1020_ = v_o_1014_;
v_isShared_1021_ = v_isSharedCheck_1032_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_map_1017_);
lean_dec(v_o_1014_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1032_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1022_, 0, v_v_1016_);
lean_inc(v_k_1015_);
v___x_1023_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1015_, v___x_1022_, v_map_1017_);
if (v_hasTrace_1018_ == 0)
{
lean_object* v___x_1024_; uint8_t v___x_1025_; lean_object* v___x_1027_; 
v___x_1024_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1025_ = l_Lean_Name_isPrefixOf(v___x_1024_, v_k_1015_);
lean_dec(v_k_1015_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1023_);
v___x_1027_ = v___x_1020_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v___x_1023_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_ctor_set_uint8(v___x_1027_, sizeof(void*)*1, v___x_1025_);
return v___x_1027_;
}
}
else
{
lean_object* v___x_1030_; 
lean_dec(v_k_1015_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1023_);
v___x_1030_ = v___x_1020_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1023_);
lean_ctor_set_uint8(v_reuseFailAlloc_1031_, sizeof(void*)*1, v_hasTrace_1018_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object* v_o_1033_, lean_object* v_k_1034_, lean_object* v_v_1035_){
_start:
{
uint8_t v_v_boxed_1036_; lean_object* v_res_1037_; 
v_v_boxed_1036_ = lean_unbox(v_v_1035_);
v_res_1037_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_o_1033_, v_k_1034_, v_v_boxed_1036_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object* v_opts_1038_, lean_object* v_opt_1039_, uint8_t v_val_1040_){
_start:
{
lean_object* v_name_1041_; lean_object* v___x_1042_; 
v_name_1041_ = lean_ctor_get(v_opt_1039_, 0);
lean_inc(v_name_1041_);
lean_dec_ref(v_opt_1039_);
v___x_1042_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_opts_1038_, v_name_1041_, v_val_1040_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object* v_opts_1043_, lean_object* v_opt_1044_, lean_object* v_val_1045_){
_start:
{
uint8_t v_val_boxed_1046_; lean_object* v_res_1047_; 
v_val_boxed_1046_ = lean_unbox(v_val_1045_);
v_res_1047_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_opts_1043_, v_opt_1044_, v_val_boxed_1046_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object* v_o_1048_, lean_object* v_k_1049_, lean_object* v_v_1050_){
_start:
{
lean_object* v_map_1051_; uint8_t v_hasTrace_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1066_; 
v_map_1051_ = lean_ctor_get(v_o_1048_, 0);
v_hasTrace_1052_ = lean_ctor_get_uint8(v_o_1048_, sizeof(void*)*1);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_o_1048_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1054_ = v_o_1048_;
v_isShared_1055_ = v_isSharedCheck_1066_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_map_1051_);
lean_dec(v_o_1048_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1066_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1056_, 0, v_v_1050_);
lean_inc(v_k_1049_);
v___x_1057_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1049_, v___x_1056_, v_map_1051_);
if (v_hasTrace_1052_ == 0)
{
lean_object* v___x_1058_; uint8_t v___x_1059_; lean_object* v___x_1061_; 
v___x_1058_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1059_ = l_Lean_Name_isPrefixOf(v___x_1058_, v_k_1049_);
lean_dec(v_k_1049_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1061_ = v___x_1054_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1057_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_ctor_set_uint8(v___x_1061_, sizeof(void*)*1, v___x_1059_);
return v___x_1061_;
}
}
else
{
lean_object* v___x_1064_; 
lean_dec(v_k_1049_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1057_);
v___x_1064_ = v___x_1054_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1057_);
lean_ctor_set_uint8(v_reuseFailAlloc_1065_, sizeof(void*)*1, v_hasTrace_1052_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object* v_opts_1067_, lean_object* v_opt_1068_, lean_object* v_val_1069_){
_start:
{
lean_object* v_name_1070_; lean_object* v___x_1071_; 
v_name_1070_ = lean_ctor_get(v_opt_1068_, 0);
lean_inc(v_name_1070_);
lean_dec_ref(v_opt_1068_);
v___x_1071_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(v_opts_1067_, v_name_1070_, v_val_1069_);
return v___x_1071_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = l_System_Platform_numBits;
v___x_1101_ = lean_unsigned_to_nat(2u);
v___x_1102_ = lean_nat_pow(v___x_1101_, v___x_1100_);
return v___x_1102_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1(void){
_start:
{
uint32_t v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = 0;
v___x_1114_ = lean_box_uint32(v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object* v_opts_1115_, uint32_t v_opt_1116_, lean_object* v_optArg_x3f_1117_){
_start:
{
lean_object* v___y_1195_; lean_object* v___y_1223_; uint32_t v___x_1343_; uint8_t v___x_1344_; 
v___x_1343_ = 101;
v___x_1344_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1343_);
if (v___x_1344_ == 0)
{
uint32_t v___x_1345_; uint8_t v___x_1346_; 
v___x_1345_ = 106;
v___x_1346_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1345_);
if (v___x_1346_ == 0)
{
uint32_t v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = 118;
v___x_1348_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1347_);
if (v___x_1348_ == 0)
{
uint32_t v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = 86;
v___x_1350_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1349_);
if (v___x_1350_ == 0)
{
uint32_t v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = 103;
v___x_1352_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1351_);
if (v___x_1352_ == 0)
{
uint32_t v___x_1353_; uint8_t v___x_1354_; 
v___x_1353_ = 104;
v___x_1354_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1353_);
if (v___x_1354_ == 0)
{
uint32_t v___x_1355_; uint8_t v___x_1356_; 
v___x_1355_ = 102;
v___x_1356_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1355_);
if (v___x_1356_ == 0)
{
uint32_t v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = 99;
v___x_1358_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1357_);
if (v___x_1358_ == 0)
{
uint32_t v___x_1359_; uint8_t v___x_1360_; 
v___x_1359_ = 98;
v___x_1360_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1359_);
if (v___x_1360_ == 0)
{
uint32_t v___x_1361_; uint8_t v___x_1362_; 
v___x_1361_ = 122;
v___x_1362_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1361_);
if (v___x_1362_ == 0)
{
uint32_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1363_ = 115;
v___x_1364_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1363_);
if (v___x_1364_ == 0)
{
uint32_t v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = 73;
v___x_1366_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1365_);
if (v___x_1366_ == 0)
{
uint32_t v___x_1367_; uint8_t v___x_1368_; 
v___x_1367_ = 114;
v___x_1368_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1367_);
if (v___x_1368_ == 0)
{
uint32_t v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = 111;
v___x_1370_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1369_);
if (v___x_1370_ == 0)
{
uint32_t v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = 105;
v___x_1372_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1371_);
if (v___x_1372_ == 0)
{
uint32_t v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = 82;
v___x_1374_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1373_);
if (v___x_1374_ == 0)
{
uint32_t v___x_1375_; uint8_t v___x_1376_; 
v___x_1375_ = 77;
v___x_1376_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1375_);
if (v___x_1376_ == 0)
{
uint32_t v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = 84;
v___x_1378_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1377_);
if (v___x_1378_ == 0)
{
uint32_t v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = 116;
v___x_1380_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1379_);
if (v___x_1380_ == 0)
{
uint32_t v___x_1381_; uint8_t v___x_1382_; 
v___x_1381_ = 113;
v___x_1382_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1381_);
if (v___x_1382_ == 0)
{
uint32_t v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = 100;
v___x_1384_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1383_);
if (v___x_1384_ == 0)
{
uint32_t v___x_1385_; uint8_t v___x_1386_; 
v___x_1385_ = 79;
v___x_1386_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1385_);
if (v___x_1386_ == 0)
{
uint32_t v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = 78;
v___x_1388_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1387_);
if (v___x_1388_ == 0)
{
uint32_t v___x_1389_; uint8_t v___x_1390_; 
v___x_1389_ = 74;
v___x_1390_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1389_);
if (v___x_1390_ == 0)
{
uint32_t v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = 97;
v___x_1392_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1391_);
if (v___x_1392_ == 0)
{
uint32_t v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = 120;
v___x_1394_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1393_);
if (v___x_1394_ == 0)
{
uint32_t v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = 76;
v___x_1396_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1395_);
if (v___x_1396_ == 0)
{
uint32_t v___x_1397_; uint8_t v___x_1398_; 
v___x_1397_ = 68;
v___x_1398_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1397_);
if (v___x_1398_ == 0)
{
uint32_t v___x_1399_; uint8_t v___x_1400_; 
v___x_1399_ = 83;
v___x_1400_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1399_);
if (v___x_1400_ == 0)
{
uint32_t v___x_1401_; uint8_t v___x_1402_; 
v___x_1401_ = 87;
v___x_1402_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1401_);
if (v___x_1402_ == 0)
{
uint32_t v___x_1403_; uint8_t v___x_1404_; 
v___x_1403_ = 80;
v___x_1404_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1403_);
if (v___x_1404_ == 0)
{
uint32_t v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = 66;
v___x_1406_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1405_);
if (v___x_1406_ == 0)
{
uint32_t v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = 112;
v___x_1408_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1407_);
if (v___x_1408_ == 0)
{
uint32_t v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = 108;
v___x_1410_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1409_);
if (v___x_1410_ == 0)
{
uint32_t v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = 117;
v___x_1412_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1411_);
if (v___x_1412_ == 0)
{
uint32_t v___x_1413_; uint8_t v___x_1414_; 
v___x_1413_ = 69;
v___x_1414_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1413_);
if (v___x_1414_ == 0)
{
uint32_t v___x_1415_; uint8_t v___x_1416_; 
v___x_1415_ = 89;
v___x_1416_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1415_);
if (v___x_1416_ == 0)
{
uint32_t v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = 90;
v___x_1418_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1417_);
if (v___x_1418_ == 0)
{
uint32_t v___x_1419_; uint8_t v___x_1420_; 
v___x_1419_ = 72;
v___x_1420_ = lean_uint32_dec_eq(v_opt_1116_, v___x_1419_);
if (v___x_1420_ == 0)
{
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
goto v___jp_1241_;
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1));
v___x_1422_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1421_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1464_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1425_ = v___x_1422_;
v_isShared_1426_ = v_isSharedCheck_1464_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1422_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1464_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v_leanOpts_1427_; lean_object* v_forwardedArgs_1428_; uint8_t v_component_1429_; uint8_t v_printPrefix_1430_; uint8_t v_printLibDir_1431_; uint8_t v_useStdin_1432_; uint8_t v_onlyDeps_1433_; uint8_t v_onlySrcDeps_1434_; uint8_t v_depsJson_1435_; lean_object* v_opts_1436_; uint32_t v_trustLevel_1437_; uint32_t v_numThreads_1438_; lean_object* v_rootDir_x3f_1439_; lean_object* v_setupFileName_x3f_1440_; lean_object* v_oleanFileName_x3f_1441_; lean_object* v_ileanFileName_x3f_1442_; lean_object* v_cFileName_x3f_1443_; lean_object* v_bcFileName_x3f_1444_; lean_object* v_zigFileName_x3f_1445_; uint8_t v_jsonOutput_1446_; lean_object* v_errorOnKinds_1447_; uint8_t v_printStats_1448_; uint8_t v_run_1449_; lean_object* v_incrSaveFileName_x3f_1450_; lean_object* v_incrLoadFileName_x3f_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1462_; 
v_leanOpts_1427_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1428_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1429_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1430_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1431_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1432_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1433_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1434_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1435_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1436_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1437_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1438_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1439_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1440_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1441_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1442_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1443_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1444_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1445_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1446_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1447_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1448_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1449_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1450_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1451_ = lean_ctor_get(v_opts_1115_, 12);
v_isSharedCheck_1462_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1462_ == 0)
{
lean_object* v_unused_1463_; 
v_unused_1463_ = lean_ctor_get(v_opts_1115_, 13);
lean_dec(v_unused_1463_);
v___x_1453_ = v_opts_1115_;
v_isShared_1454_ = v_isSharedCheck_1462_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_incrLoadFileName_x3f_1451_);
lean_inc(v_incrSaveFileName_x3f_1450_);
lean_inc(v_errorOnKinds_1447_);
lean_inc(v_zigFileName_x3f_1445_);
lean_inc(v_bcFileName_x3f_1444_);
lean_inc(v_cFileName_x3f_1443_);
lean_inc(v_ileanFileName_x3f_1442_);
lean_inc(v_oleanFileName_x3f_1441_);
lean_inc(v_setupFileName_x3f_1440_);
lean_inc(v_rootDir_x3f_1439_);
lean_inc(v_opts_1436_);
lean_inc(v_forwardedArgs_1428_);
lean_inc(v_leanOpts_1427_);
lean_dec(v_opts_1115_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1462_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1457_; 
v___x_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1455_, 0, v_a_1423_);
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 13, v___x_1455_);
v___x_1457_ = v___x_1453_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_leanOpts_1427_);
lean_ctor_set(v_reuseFailAlloc_1461_, 1, v_forwardedArgs_1428_);
lean_ctor_set(v_reuseFailAlloc_1461_, 2, v_opts_1436_);
lean_ctor_set(v_reuseFailAlloc_1461_, 3, v_rootDir_x3f_1439_);
lean_ctor_set(v_reuseFailAlloc_1461_, 4, v_setupFileName_x3f_1440_);
lean_ctor_set(v_reuseFailAlloc_1461_, 5, v_oleanFileName_x3f_1441_);
lean_ctor_set(v_reuseFailAlloc_1461_, 6, v_ileanFileName_x3f_1442_);
lean_ctor_set(v_reuseFailAlloc_1461_, 7, v_cFileName_x3f_1443_);
lean_ctor_set(v_reuseFailAlloc_1461_, 8, v_bcFileName_x3f_1444_);
lean_ctor_set(v_reuseFailAlloc_1461_, 9, v_zigFileName_x3f_1445_);
lean_ctor_set(v_reuseFailAlloc_1461_, 10, v_errorOnKinds_1447_);
lean_ctor_set(v_reuseFailAlloc_1461_, 11, v_incrSaveFileName_x3f_1450_);
lean_ctor_set(v_reuseFailAlloc_1461_, 12, v_incrLoadFileName_x3f_1451_);
lean_ctor_set(v_reuseFailAlloc_1461_, 13, v___x_1455_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 8, v_component_1429_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 9, v_printPrefix_1430_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 10, v_printLibDir_1431_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 11, v_useStdin_1432_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 12, v_onlyDeps_1433_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 13, v_onlySrcDeps_1434_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 14, v_depsJson_1435_);
lean_ctor_set_uint32(v_reuseFailAlloc_1461_, sizeof(void*)*14, v_trustLevel_1437_);
lean_ctor_set_uint32(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 4, v_numThreads_1438_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 15, v_jsonOutput_1446_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 16, v_printStats_1448_);
lean_ctor_set_uint8(v_reuseFailAlloc_1461_, sizeof(void*)*14 + 17, v_run_1449_);
v___x_1457_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1459_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1457_);
v___x_1459_ = v___x_1425_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
lean_dec_ref(v_opts_1115_);
v_a_1465_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1469_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1470_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1469_);
lean_dec_ref(v___x_1470_);
goto v___jp_1466_;
v___jp_1466_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = lean_io_error_to_string(v_a_1465_);
v___x_1468_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1467_);
lean_dec_ref(v___x_1468_);
goto v___jp_1247_;
}
}
}
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1471_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2));
v___x_1472_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1471_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1514_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1475_ = v___x_1472_;
v_isShared_1476_ = v_isSharedCheck_1514_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_a_1473_);
lean_dec(v___x_1472_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1514_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v_leanOpts_1477_; lean_object* v_forwardedArgs_1478_; uint8_t v_component_1479_; uint8_t v_printPrefix_1480_; uint8_t v_printLibDir_1481_; uint8_t v_useStdin_1482_; uint8_t v_onlyDeps_1483_; uint8_t v_onlySrcDeps_1484_; uint8_t v_depsJson_1485_; lean_object* v_opts_1486_; uint32_t v_trustLevel_1487_; uint32_t v_numThreads_1488_; lean_object* v_rootDir_x3f_1489_; lean_object* v_setupFileName_x3f_1490_; lean_object* v_oleanFileName_x3f_1491_; lean_object* v_ileanFileName_x3f_1492_; lean_object* v_cFileName_x3f_1493_; lean_object* v_bcFileName_x3f_1494_; lean_object* v_zigFileName_x3f_1495_; uint8_t v_jsonOutput_1496_; lean_object* v_errorOnKinds_1497_; uint8_t v_printStats_1498_; uint8_t v_run_1499_; lean_object* v_incrSaveFileName_x3f_1500_; lean_object* v_incrHeaderSaveFileName_x3f_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1512_; 
v_leanOpts_1477_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1478_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1479_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1480_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1481_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1482_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1483_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1484_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1485_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1486_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1487_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1488_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1489_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1490_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1491_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1492_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1493_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1494_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1495_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1496_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1497_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1498_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1499_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1500_ = lean_ctor_get(v_opts_1115_, 11);
v_incrHeaderSaveFileName_x3f_1501_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; 
v_unused_1513_ = lean_ctor_get(v_opts_1115_, 12);
lean_dec(v_unused_1513_);
v___x_1503_ = v_opts_1115_;
v_isShared_1504_ = v_isSharedCheck_1512_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1501_);
lean_inc(v_incrSaveFileName_x3f_1500_);
lean_inc(v_errorOnKinds_1497_);
lean_inc(v_zigFileName_x3f_1495_);
lean_inc(v_bcFileName_x3f_1494_);
lean_inc(v_cFileName_x3f_1493_);
lean_inc(v_ileanFileName_x3f_1492_);
lean_inc(v_oleanFileName_x3f_1491_);
lean_inc(v_setupFileName_x3f_1490_);
lean_inc(v_rootDir_x3f_1489_);
lean_inc(v_opts_1486_);
lean_inc(v_forwardedArgs_1478_);
lean_inc(v_leanOpts_1477_);
lean_dec(v_opts_1115_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1512_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1505_; lean_object* v___x_1507_; 
v___x_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1505_, 0, v_a_1473_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 12, v___x_1505_);
v___x_1507_ = v___x_1503_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_leanOpts_1477_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_forwardedArgs_1478_);
lean_ctor_set(v_reuseFailAlloc_1511_, 2, v_opts_1486_);
lean_ctor_set(v_reuseFailAlloc_1511_, 3, v_rootDir_x3f_1489_);
lean_ctor_set(v_reuseFailAlloc_1511_, 4, v_setupFileName_x3f_1490_);
lean_ctor_set(v_reuseFailAlloc_1511_, 5, v_oleanFileName_x3f_1491_);
lean_ctor_set(v_reuseFailAlloc_1511_, 6, v_ileanFileName_x3f_1492_);
lean_ctor_set(v_reuseFailAlloc_1511_, 7, v_cFileName_x3f_1493_);
lean_ctor_set(v_reuseFailAlloc_1511_, 8, v_bcFileName_x3f_1494_);
lean_ctor_set(v_reuseFailAlloc_1511_, 9, v_zigFileName_x3f_1495_);
lean_ctor_set(v_reuseFailAlloc_1511_, 10, v_errorOnKinds_1497_);
lean_ctor_set(v_reuseFailAlloc_1511_, 11, v_incrSaveFileName_x3f_1500_);
lean_ctor_set(v_reuseFailAlloc_1511_, 12, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1511_, 13, v_incrHeaderSaveFileName_x3f_1501_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 8, v_component_1479_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 9, v_printPrefix_1480_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 10, v_printLibDir_1481_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 11, v_useStdin_1482_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 12, v_onlyDeps_1483_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 13, v_onlySrcDeps_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 14, v_depsJson_1485_);
lean_ctor_set_uint32(v_reuseFailAlloc_1511_, sizeof(void*)*14, v_trustLevel_1487_);
lean_ctor_set_uint32(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 4, v_numThreads_1488_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 15, v_jsonOutput_1496_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 16, v_printStats_1498_);
lean_ctor_set_uint8(v_reuseFailAlloc_1511_, sizeof(void*)*14 + 17, v_run_1499_);
v___x_1507_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
lean_object* v___x_1509_; 
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 0, v___x_1507_);
v___x_1509_ = v___x_1475_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
else
{
lean_object* v_a_1515_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
lean_dec_ref(v_opts_1115_);
v_a_1515_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1515_);
lean_dec_ref_known(v___x_1472_, 1);
v___x_1519_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1520_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1519_);
lean_dec_ref(v___x_1520_);
goto v___jp_1516_;
v___jp_1516_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = lean_io_error_to_string(v_a_1515_);
v___x_1518_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1517_);
lean_dec_ref(v___x_1518_);
goto v___jp_1213_;
}
}
}
}
else
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3));
v___x_1522_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1521_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1522_) == 0)
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1564_; 
v_a_1523_ = lean_ctor_get(v___x_1522_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1525_ = v___x_1522_;
v_isShared_1526_ = v_isSharedCheck_1564_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1522_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1564_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v_leanOpts_1527_; lean_object* v_forwardedArgs_1528_; uint8_t v_component_1529_; uint8_t v_printPrefix_1530_; uint8_t v_printLibDir_1531_; uint8_t v_useStdin_1532_; uint8_t v_onlyDeps_1533_; uint8_t v_onlySrcDeps_1534_; uint8_t v_depsJson_1535_; lean_object* v_opts_1536_; uint32_t v_trustLevel_1537_; uint32_t v_numThreads_1538_; lean_object* v_rootDir_x3f_1539_; lean_object* v_setupFileName_x3f_1540_; lean_object* v_oleanFileName_x3f_1541_; lean_object* v_ileanFileName_x3f_1542_; lean_object* v_cFileName_x3f_1543_; lean_object* v_bcFileName_x3f_1544_; lean_object* v_zigFileName_x3f_1545_; uint8_t v_jsonOutput_1546_; lean_object* v_errorOnKinds_1547_; uint8_t v_printStats_1548_; uint8_t v_run_1549_; lean_object* v_incrLoadFileName_x3f_1550_; lean_object* v_incrHeaderSaveFileName_x3f_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1562_; 
v_leanOpts_1527_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1528_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1529_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1530_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1531_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1532_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1533_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1534_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1535_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1536_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1537_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1538_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1539_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1540_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1541_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1542_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1543_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1544_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1545_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1546_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1547_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1548_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1549_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrLoadFileName_x3f_1550_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1551_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1562_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1562_ == 0)
{
lean_object* v_unused_1563_; 
v_unused_1563_ = lean_ctor_get(v_opts_1115_, 11);
lean_dec(v_unused_1563_);
v___x_1553_ = v_opts_1115_;
v_isShared_1554_ = v_isSharedCheck_1562_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1551_);
lean_inc(v_incrLoadFileName_x3f_1550_);
lean_inc(v_errorOnKinds_1547_);
lean_inc(v_zigFileName_x3f_1545_);
lean_inc(v_bcFileName_x3f_1544_);
lean_inc(v_cFileName_x3f_1543_);
lean_inc(v_ileanFileName_x3f_1542_);
lean_inc(v_oleanFileName_x3f_1541_);
lean_inc(v_setupFileName_x3f_1540_);
lean_inc(v_rootDir_x3f_1539_);
lean_inc(v_opts_1536_);
lean_inc(v_forwardedArgs_1528_);
lean_inc(v_leanOpts_1527_);
lean_dec(v_opts_1115_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1562_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1555_; lean_object* v___x_1557_; 
v___x_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1555_, 0, v_a_1523_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 11, v___x_1555_);
v___x_1557_ = v___x_1553_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_leanOpts_1527_);
lean_ctor_set(v_reuseFailAlloc_1561_, 1, v_forwardedArgs_1528_);
lean_ctor_set(v_reuseFailAlloc_1561_, 2, v_opts_1536_);
lean_ctor_set(v_reuseFailAlloc_1561_, 3, v_rootDir_x3f_1539_);
lean_ctor_set(v_reuseFailAlloc_1561_, 4, v_setupFileName_x3f_1540_);
lean_ctor_set(v_reuseFailAlloc_1561_, 5, v_oleanFileName_x3f_1541_);
lean_ctor_set(v_reuseFailAlloc_1561_, 6, v_ileanFileName_x3f_1542_);
lean_ctor_set(v_reuseFailAlloc_1561_, 7, v_cFileName_x3f_1543_);
lean_ctor_set(v_reuseFailAlloc_1561_, 8, v_bcFileName_x3f_1544_);
lean_ctor_set(v_reuseFailAlloc_1561_, 9, v_zigFileName_x3f_1545_);
lean_ctor_set(v_reuseFailAlloc_1561_, 10, v_errorOnKinds_1547_);
lean_ctor_set(v_reuseFailAlloc_1561_, 11, v___x_1555_);
lean_ctor_set(v_reuseFailAlloc_1561_, 12, v_incrLoadFileName_x3f_1550_);
lean_ctor_set(v_reuseFailAlloc_1561_, 13, v_incrHeaderSaveFileName_x3f_1551_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 8, v_component_1529_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 9, v_printPrefix_1530_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 10, v_printLibDir_1531_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 11, v_useStdin_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 12, v_onlyDeps_1533_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 13, v_onlySrcDeps_1534_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 14, v_depsJson_1535_);
lean_ctor_set_uint32(v_reuseFailAlloc_1561_, sizeof(void*)*14, v_trustLevel_1537_);
lean_ctor_set_uint32(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 4, v_numThreads_1538_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 15, v_jsonOutput_1546_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 16, v_printStats_1548_);
lean_ctor_set_uint8(v_reuseFailAlloc_1561_, sizeof(void*)*14 + 17, v_run_1549_);
v___x_1557_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1559_; 
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1557_);
v___x_1559_ = v___x_1525_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_dec_ref(v_opts_1115_);
v_a_1565_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1522_, 1);
v___x_1569_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1570_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1569_);
lean_dec_ref(v___x_1570_);
goto v___jp_1566_;
v___jp_1566_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; 
v___x_1567_ = lean_io_error_to_string(v_a_1565_);
v___x_1568_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1567_);
lean_dec_ref(v___x_1568_);
goto v___jp_1253_;
}
}
}
}
else
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4));
v___x_1572_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1571_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1615_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1575_ = v___x_1572_;
v_isShared_1576_ = v_isSharedCheck_1615_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1572_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1615_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v_leanOpts_1577_; lean_object* v_forwardedArgs_1578_; uint8_t v_component_1579_; uint8_t v_printPrefix_1580_; uint8_t v_printLibDir_1581_; uint8_t v_useStdin_1582_; uint8_t v_onlyDeps_1583_; uint8_t v_onlySrcDeps_1584_; uint8_t v_depsJson_1585_; lean_object* v_opts_1586_; uint32_t v_trustLevel_1587_; uint32_t v_numThreads_1588_; lean_object* v_rootDir_x3f_1589_; lean_object* v_setupFileName_x3f_1590_; lean_object* v_oleanFileName_x3f_1591_; lean_object* v_ileanFileName_x3f_1592_; lean_object* v_cFileName_x3f_1593_; lean_object* v_bcFileName_x3f_1594_; lean_object* v_zigFileName_x3f_1595_; uint8_t v_jsonOutput_1596_; lean_object* v_errorOnKinds_1597_; uint8_t v_printStats_1598_; uint8_t v_run_1599_; lean_object* v_incrSaveFileName_x3f_1600_; lean_object* v_incrLoadFileName_x3f_1601_; lean_object* v_incrHeaderSaveFileName_x3f_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1614_; 
v_leanOpts_1577_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1578_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1579_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1580_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1581_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1582_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1583_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1584_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1585_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1586_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1587_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1588_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1589_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1590_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1591_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1592_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1593_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1594_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1595_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1596_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1597_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1598_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1599_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1600_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1601_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1602_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1604_ = v_opts_1115_;
v_isShared_1605_ = v_isSharedCheck_1614_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1602_);
lean_inc(v_incrLoadFileName_x3f_1601_);
lean_inc(v_incrSaveFileName_x3f_1600_);
lean_inc(v_errorOnKinds_1597_);
lean_inc(v_zigFileName_x3f_1595_);
lean_inc(v_bcFileName_x3f_1594_);
lean_inc(v_cFileName_x3f_1593_);
lean_inc(v_ileanFileName_x3f_1592_);
lean_inc(v_oleanFileName_x3f_1591_);
lean_inc(v_setupFileName_x3f_1590_);
lean_inc(v_rootDir_x3f_1589_);
lean_inc(v_opts_1586_);
lean_inc(v_forwardedArgs_1578_);
lean_inc(v_leanOpts_1577_);
lean_dec(v_opts_1115_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1614_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1609_; 
v___x_1606_ = l_String_toName(v_a_1573_);
v___x_1607_ = lean_array_push(v_errorOnKinds_1597_, v___x_1606_);
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 10, v___x_1607_);
v___x_1609_ = v___x_1604_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v_leanOpts_1577_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_forwardedArgs_1578_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_opts_1586_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v_rootDir_x3f_1589_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v_setupFileName_x3f_1590_);
lean_ctor_set(v_reuseFailAlloc_1613_, 5, v_oleanFileName_x3f_1591_);
lean_ctor_set(v_reuseFailAlloc_1613_, 6, v_ileanFileName_x3f_1592_);
lean_ctor_set(v_reuseFailAlloc_1613_, 7, v_cFileName_x3f_1593_);
lean_ctor_set(v_reuseFailAlloc_1613_, 8, v_bcFileName_x3f_1594_);
lean_ctor_set(v_reuseFailAlloc_1613_, 9, v_zigFileName_x3f_1595_);
lean_ctor_set(v_reuseFailAlloc_1613_, 10, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1613_, 11, v_incrSaveFileName_x3f_1600_);
lean_ctor_set(v_reuseFailAlloc_1613_, 12, v_incrLoadFileName_x3f_1601_);
lean_ctor_set(v_reuseFailAlloc_1613_, 13, v_incrHeaderSaveFileName_x3f_1602_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 8, v_component_1579_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 9, v_printPrefix_1580_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 10, v_printLibDir_1581_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 11, v_useStdin_1582_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 12, v_onlyDeps_1583_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 13, v_onlySrcDeps_1584_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 14, v_depsJson_1585_);
lean_ctor_set_uint32(v_reuseFailAlloc_1613_, sizeof(void*)*14, v_trustLevel_1587_);
lean_ctor_set_uint32(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 4, v_numThreads_1588_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 15, v_jsonOutput_1596_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 16, v_printStats_1598_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*14 + 17, v_run_1599_);
v___x_1609_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
lean_object* v___x_1611_; 
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 0, v___x_1609_);
v___x_1611_ = v___x_1575_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v___x_1609_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
lean_dec_ref(v_opts_1115_);
v_a_1616_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1572_, 1);
v___x_1620_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1621_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1620_);
lean_dec_ref(v___x_1621_);
goto v___jp_1617_;
v___jp_1617_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; 
v___x_1618_ = lean_io_error_to_string(v_a_1616_);
v___x_1619_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1618_);
lean_dec_ref(v___x_1619_);
goto v___jp_1207_;
}
}
}
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5));
v___x_1623_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1622_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1665_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1665_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1665_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v_leanOpts_1628_; lean_object* v_forwardedArgs_1629_; uint8_t v_component_1630_; uint8_t v_printPrefix_1631_; uint8_t v_printLibDir_1632_; uint8_t v_useStdin_1633_; uint8_t v_onlyDeps_1634_; uint8_t v_onlySrcDeps_1635_; uint8_t v_depsJson_1636_; lean_object* v_opts_1637_; uint32_t v_trustLevel_1638_; uint32_t v_numThreads_1639_; lean_object* v_rootDir_x3f_1640_; lean_object* v_oleanFileName_x3f_1641_; lean_object* v_ileanFileName_x3f_1642_; lean_object* v_cFileName_x3f_1643_; lean_object* v_bcFileName_x3f_1644_; lean_object* v_zigFileName_x3f_1645_; uint8_t v_jsonOutput_1646_; lean_object* v_errorOnKinds_1647_; uint8_t v_printStats_1648_; uint8_t v_run_1649_; lean_object* v_incrSaveFileName_x3f_1650_; lean_object* v_incrLoadFileName_x3f_1651_; lean_object* v_incrHeaderSaveFileName_x3f_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1663_; 
v_leanOpts_1628_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1629_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1630_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1631_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1632_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1633_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1634_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1635_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1636_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1637_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1638_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1639_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1640_ = lean_ctor_get(v_opts_1115_, 3);
v_oleanFileName_x3f_1641_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1642_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1643_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1644_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1645_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1646_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1647_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1648_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1649_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1650_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1651_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1652_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1663_ == 0)
{
lean_object* v_unused_1664_; 
v_unused_1664_ = lean_ctor_get(v_opts_1115_, 4);
lean_dec(v_unused_1664_);
v___x_1654_ = v_opts_1115_;
v_isShared_1655_ = v_isSharedCheck_1663_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1652_);
lean_inc(v_incrLoadFileName_x3f_1651_);
lean_inc(v_incrSaveFileName_x3f_1650_);
lean_inc(v_errorOnKinds_1647_);
lean_inc(v_zigFileName_x3f_1645_);
lean_inc(v_bcFileName_x3f_1644_);
lean_inc(v_cFileName_x3f_1643_);
lean_inc(v_ileanFileName_x3f_1642_);
lean_inc(v_oleanFileName_x3f_1641_);
lean_inc(v_rootDir_x3f_1640_);
lean_inc(v_opts_1637_);
lean_inc(v_forwardedArgs_1629_);
lean_inc(v_leanOpts_1628_);
lean_dec(v_opts_1115_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1663_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1656_; lean_object* v___x_1658_; 
v___x_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1656_, 0, v_a_1624_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set(v___x_1654_, 4, v___x_1656_);
v___x_1658_ = v___x_1654_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_leanOpts_1628_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_forwardedArgs_1629_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v_opts_1637_);
lean_ctor_set(v_reuseFailAlloc_1662_, 3, v_rootDir_x3f_1640_);
lean_ctor_set(v_reuseFailAlloc_1662_, 4, v___x_1656_);
lean_ctor_set(v_reuseFailAlloc_1662_, 5, v_oleanFileName_x3f_1641_);
lean_ctor_set(v_reuseFailAlloc_1662_, 6, v_ileanFileName_x3f_1642_);
lean_ctor_set(v_reuseFailAlloc_1662_, 7, v_cFileName_x3f_1643_);
lean_ctor_set(v_reuseFailAlloc_1662_, 8, v_bcFileName_x3f_1644_);
lean_ctor_set(v_reuseFailAlloc_1662_, 9, v_zigFileName_x3f_1645_);
lean_ctor_set(v_reuseFailAlloc_1662_, 10, v_errorOnKinds_1647_);
lean_ctor_set(v_reuseFailAlloc_1662_, 11, v_incrSaveFileName_x3f_1650_);
lean_ctor_set(v_reuseFailAlloc_1662_, 12, v_incrLoadFileName_x3f_1651_);
lean_ctor_set(v_reuseFailAlloc_1662_, 13, v_incrHeaderSaveFileName_x3f_1652_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 8, v_component_1630_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 9, v_printPrefix_1631_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 10, v_printLibDir_1632_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 11, v_useStdin_1633_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 12, v_onlyDeps_1634_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 13, v_onlySrcDeps_1635_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 14, v_depsJson_1636_);
lean_ctor_set_uint32(v_reuseFailAlloc_1662_, sizeof(void*)*14, v_trustLevel_1638_);
lean_ctor_set_uint32(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 4, v_numThreads_1639_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 15, v_jsonOutput_1646_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 16, v_printStats_1648_);
lean_ctor_set_uint8(v_reuseFailAlloc_1662_, sizeof(void*)*14 + 17, v_run_1649_);
v___x_1658_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
lean_object* v___x_1660_; 
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1658_);
v___x_1660_ = v___x_1626_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
lean_dec_ref(v_opts_1115_);
v_a_1666_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1666_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1670_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1671_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1670_);
lean_dec_ref(v___x_1671_);
goto v___jp_1667_;
v___jp_1667_:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = lean_io_error_to_string(v_a_1666_);
v___x_1669_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1668_);
lean_dec_ref(v___x_1669_);
goto v___jp_1259_;
}
}
}
}
else
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6));
v___x_1673_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1672_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1675_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc_n(v_a_1674_, 2);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1675_ = lean_load_dynlib(v_a_1674_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1718_; 
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1675_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; 
v_unused_1719_ = lean_ctor_get(v___x_1675_, 0);
lean_dec(v_unused_1719_);
v___x_1677_ = v___x_1675_;
v_isShared_1678_ = v_isSharedCheck_1718_;
goto v_resetjp_1676_;
}
else
{
lean_dec(v___x_1675_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1718_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v_leanOpts_1679_; lean_object* v_forwardedArgs_1680_; uint8_t v_component_1681_; uint8_t v_printPrefix_1682_; uint8_t v_printLibDir_1683_; uint8_t v_useStdin_1684_; uint8_t v_onlyDeps_1685_; uint8_t v_onlySrcDeps_1686_; uint8_t v_depsJson_1687_; lean_object* v_opts_1688_; uint32_t v_trustLevel_1689_; uint32_t v_numThreads_1690_; lean_object* v_rootDir_x3f_1691_; lean_object* v_setupFileName_x3f_1692_; lean_object* v_oleanFileName_x3f_1693_; lean_object* v_ileanFileName_x3f_1694_; lean_object* v_cFileName_x3f_1695_; lean_object* v_bcFileName_x3f_1696_; lean_object* v_zigFileName_x3f_1697_; uint8_t v_jsonOutput_1698_; lean_object* v_errorOnKinds_1699_; uint8_t v_printStats_1700_; uint8_t v_run_1701_; lean_object* v_incrSaveFileName_x3f_1702_; lean_object* v_incrLoadFileName_x3f_1703_; lean_object* v_incrHeaderSaveFileName_x3f_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1717_; 
v_leanOpts_1679_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1680_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1681_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1682_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1683_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1684_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1685_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1686_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1687_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1688_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1689_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1690_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1691_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1692_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1693_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1694_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1695_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1696_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1697_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1698_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1699_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1700_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1701_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1702_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1703_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1704_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1706_ = v_opts_1115_;
v_isShared_1707_ = v_isSharedCheck_1717_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1704_);
lean_inc(v_incrLoadFileName_x3f_1703_);
lean_inc(v_incrSaveFileName_x3f_1702_);
lean_inc(v_errorOnKinds_1699_);
lean_inc(v_zigFileName_x3f_1697_);
lean_inc(v_bcFileName_x3f_1696_);
lean_inc(v_cFileName_x3f_1695_);
lean_inc(v_ileanFileName_x3f_1694_);
lean_inc(v_oleanFileName_x3f_1693_);
lean_inc(v_setupFileName_x3f_1692_);
lean_inc(v_rootDir_x3f_1691_);
lean_inc(v_opts_1688_);
lean_inc(v_forwardedArgs_1680_);
lean_inc(v_leanOpts_1679_);
lean_dec(v_opts_1115_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1717_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1712_; 
v___x_1708_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7));
v___x_1709_ = lean_string_append(v___x_1708_, v_a_1674_);
lean_dec(v_a_1674_);
v___x_1710_ = lean_array_push(v_forwardedArgs_1680_, v___x_1709_);
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 1, v___x_1710_);
v___x_1712_ = v___x_1706_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_leanOpts_1679_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v___x_1710_);
lean_ctor_set(v_reuseFailAlloc_1716_, 2, v_opts_1688_);
lean_ctor_set(v_reuseFailAlloc_1716_, 3, v_rootDir_x3f_1691_);
lean_ctor_set(v_reuseFailAlloc_1716_, 4, v_setupFileName_x3f_1692_);
lean_ctor_set(v_reuseFailAlloc_1716_, 5, v_oleanFileName_x3f_1693_);
lean_ctor_set(v_reuseFailAlloc_1716_, 6, v_ileanFileName_x3f_1694_);
lean_ctor_set(v_reuseFailAlloc_1716_, 7, v_cFileName_x3f_1695_);
lean_ctor_set(v_reuseFailAlloc_1716_, 8, v_bcFileName_x3f_1696_);
lean_ctor_set(v_reuseFailAlloc_1716_, 9, v_zigFileName_x3f_1697_);
lean_ctor_set(v_reuseFailAlloc_1716_, 10, v_errorOnKinds_1699_);
lean_ctor_set(v_reuseFailAlloc_1716_, 11, v_incrSaveFileName_x3f_1702_);
lean_ctor_set(v_reuseFailAlloc_1716_, 12, v_incrLoadFileName_x3f_1703_);
lean_ctor_set(v_reuseFailAlloc_1716_, 13, v_incrHeaderSaveFileName_x3f_1704_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 8, v_component_1681_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 9, v_printPrefix_1682_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 10, v_printLibDir_1683_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 11, v_useStdin_1684_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 12, v_onlyDeps_1685_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 13, v_onlySrcDeps_1686_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 14, v_depsJson_1687_);
lean_ctor_set_uint32(v_reuseFailAlloc_1716_, sizeof(void*)*14, v_trustLevel_1689_);
lean_ctor_set_uint32(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 4, v_numThreads_1690_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 15, v_jsonOutput_1698_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 16, v_printStats_1700_);
lean_ctor_set_uint8(v_reuseFailAlloc_1716_, sizeof(void*)*14 + 17, v_run_1701_);
v___x_1712_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1714_; 
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 0, v___x_1712_);
v___x_1714_ = v___x_1677_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
}
}
else
{
lean_object* v_a_1720_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_dec(v_a_1674_);
lean_dec_ref(v_opts_1115_);
v_a_1720_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1724_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1725_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1724_);
lean_dec_ref(v___x_1725_);
goto v___jp_1721_;
v___jp_1721_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = lean_io_error_to_string(v_a_1720_);
v___x_1723_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1722_);
lean_dec_ref(v___x_1723_);
goto v___jp_1201_;
}
}
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_dec_ref(v_opts_1115_);
v_a_1726_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1726_);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1730_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1731_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1730_);
lean_dec_ref(v___x_1731_);
goto v___jp_1727_;
v___jp_1727_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1728_ = lean_io_error_to_string(v_a_1726_);
v___x_1729_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1728_);
lean_dec_ref(v___x_1729_);
goto v___jp_1265_;
}
}
}
}
else
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8));
v___x_1733_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1732_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1807_; 
v_a_1734_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1736_ = v___x_1733_;
v_isShared_1737_ = v_isSharedCheck_1807_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_dec(v___x_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1807_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v_fst_1739_; lean_object* v_snd_1740_; lean_object* v___y_1790_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1801_ = lean_unsigned_to_nat(0u);
v___x_1802_ = lean_string_utf8_byte_size(v_a_1734_);
lean_inc(v_a_1734_);
v___x_1803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1803_, 0, v_a_1734_);
lean_ctor_set(v___x_1803_, 1, v___x_1801_);
lean_ctor_set(v___x_1803_, 2, v___x_1802_);
v___x_1804_ = lean_box(0);
v___x_1805_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1803_, v_a_1734_, v___x_1801_, v___x_1804_);
lean_dec_ref_known(v___x_1803_, 3);
if (lean_obj_tag(v___x_1805_) == 0)
{
v___y_1790_ = v___x_1802_;
goto v___jp_1789_;
}
else
{
lean_object* v_val_1806_; 
v_val_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_val_1806_);
lean_dec_ref_known(v___x_1805_, 1);
v___y_1790_ = v_val_1806_;
goto v___jp_1789_;
}
v___jp_1738_:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_load_plugin(v_fst_1739_, v_snd_1740_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1784_; 
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1741_);
if (v_isSharedCheck_1784_ == 0)
{
lean_object* v_unused_1785_; 
v_unused_1785_ = lean_ctor_get(v___x_1741_, 0);
lean_dec(v_unused_1785_);
v___x_1743_ = v___x_1741_;
v_isShared_1744_ = v_isSharedCheck_1784_;
goto v_resetjp_1742_;
}
else
{
lean_dec(v___x_1741_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1784_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v_leanOpts_1745_; lean_object* v_forwardedArgs_1746_; uint8_t v_component_1747_; uint8_t v_printPrefix_1748_; uint8_t v_printLibDir_1749_; uint8_t v_useStdin_1750_; uint8_t v_onlyDeps_1751_; uint8_t v_onlySrcDeps_1752_; uint8_t v_depsJson_1753_; lean_object* v_opts_1754_; uint32_t v_trustLevel_1755_; uint32_t v_numThreads_1756_; lean_object* v_rootDir_x3f_1757_; lean_object* v_setupFileName_x3f_1758_; lean_object* v_oleanFileName_x3f_1759_; lean_object* v_ileanFileName_x3f_1760_; lean_object* v_cFileName_x3f_1761_; lean_object* v_bcFileName_x3f_1762_; lean_object* v_zigFileName_x3f_1763_; uint8_t v_jsonOutput_1764_; lean_object* v_errorOnKinds_1765_; uint8_t v_printStats_1766_; uint8_t v_run_1767_; lean_object* v_incrSaveFileName_x3f_1768_; lean_object* v_incrLoadFileName_x3f_1769_; lean_object* v_incrHeaderSaveFileName_x3f_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1783_; 
v_leanOpts_1745_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1746_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1747_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1748_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1749_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1750_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1751_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1752_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1753_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1754_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1755_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1756_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1757_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1758_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1759_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1760_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1761_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1762_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1763_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1764_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1765_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1766_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1767_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1768_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1769_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1770_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1772_ = v_opts_1115_;
v_isShared_1773_ = v_isSharedCheck_1783_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1770_);
lean_inc(v_incrLoadFileName_x3f_1769_);
lean_inc(v_incrSaveFileName_x3f_1768_);
lean_inc(v_errorOnKinds_1765_);
lean_inc(v_zigFileName_x3f_1763_);
lean_inc(v_bcFileName_x3f_1762_);
lean_inc(v_cFileName_x3f_1761_);
lean_inc(v_ileanFileName_x3f_1760_);
lean_inc(v_oleanFileName_x3f_1759_);
lean_inc(v_setupFileName_x3f_1758_);
lean_inc(v_rootDir_x3f_1757_);
lean_inc(v_opts_1754_);
lean_inc(v_forwardedArgs_1746_);
lean_inc(v_leanOpts_1745_);
lean_dec(v_opts_1115_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1783_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1774_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9));
v___x_1775_ = lean_string_append(v___x_1774_, v_a_1734_);
lean_dec(v_a_1734_);
v___x_1776_ = lean_array_push(v_forwardedArgs_1746_, v___x_1775_);
if (v_isShared_1773_ == 0)
{
lean_ctor_set(v___x_1772_, 1, v___x_1776_);
v___x_1778_ = v___x_1772_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_leanOpts_1745_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v___x_1776_);
lean_ctor_set(v_reuseFailAlloc_1782_, 2, v_opts_1754_);
lean_ctor_set(v_reuseFailAlloc_1782_, 3, v_rootDir_x3f_1757_);
lean_ctor_set(v_reuseFailAlloc_1782_, 4, v_setupFileName_x3f_1758_);
lean_ctor_set(v_reuseFailAlloc_1782_, 5, v_oleanFileName_x3f_1759_);
lean_ctor_set(v_reuseFailAlloc_1782_, 6, v_ileanFileName_x3f_1760_);
lean_ctor_set(v_reuseFailAlloc_1782_, 7, v_cFileName_x3f_1761_);
lean_ctor_set(v_reuseFailAlloc_1782_, 8, v_bcFileName_x3f_1762_);
lean_ctor_set(v_reuseFailAlloc_1782_, 9, v_zigFileName_x3f_1763_);
lean_ctor_set(v_reuseFailAlloc_1782_, 10, v_errorOnKinds_1765_);
lean_ctor_set(v_reuseFailAlloc_1782_, 11, v_incrSaveFileName_x3f_1768_);
lean_ctor_set(v_reuseFailAlloc_1782_, 12, v_incrLoadFileName_x3f_1769_);
lean_ctor_set(v_reuseFailAlloc_1782_, 13, v_incrHeaderSaveFileName_x3f_1770_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 8, v_component_1747_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 9, v_printPrefix_1748_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 10, v_printLibDir_1749_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 11, v_useStdin_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 12, v_onlyDeps_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 13, v_onlySrcDeps_1752_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 14, v_depsJson_1753_);
lean_ctor_set_uint32(v_reuseFailAlloc_1782_, sizeof(void*)*14, v_trustLevel_1755_);
lean_ctor_set_uint32(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 4, v_numThreads_1756_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 15, v_jsonOutput_1764_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 16, v_printStats_1766_);
lean_ctor_set_uint8(v_reuseFailAlloc_1782_, sizeof(void*)*14 + 17, v_run_1767_);
v___x_1778_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
lean_object* v___x_1780_; 
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1778_);
v___x_1780_ = v___x_1743_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1778_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
else
{
lean_object* v_a_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_dec(v_a_1734_);
lean_dec_ref(v_opts_1115_);
v_a_1786_ = lean_ctor_get(v___x_1741_, 0);
lean_inc(v_a_1786_);
lean_dec_ref_known(v___x_1741_, 1);
v___x_1787_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1788_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1787_);
lean_dec_ref(v___x_1788_);
v___y_1195_ = v_a_1786_;
goto v___jp_1194_;
}
}
v___jp_1789_:
{
lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1791_ = lean_string_utf8_byte_size(v_a_1734_);
v___x_1792_ = lean_nat_dec_eq(v___y_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1798_; 
v___x_1793_ = lean_unsigned_to_nat(0u);
v___x_1794_ = lean_string_utf8_next_fast(v_a_1734_, v___y_1790_);
v___x_1795_ = lean_string_utf8_extract(v_a_1734_, v___x_1793_, v___y_1790_);
lean_dec(v___y_1790_);
v___x_1796_ = lean_string_utf8_extract(v_a_1734_, v___x_1794_, v___x_1791_);
if (v_isShared_1737_ == 0)
{
lean_ctor_set_tag(v___x_1736_, 1);
lean_ctor_set(v___x_1736_, 0, v___x_1796_);
v___x_1798_ = v___x_1736_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1796_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
v_fst_1739_ = v___x_1795_;
v_snd_1740_ = v___x_1798_;
goto v___jp_1738_;
}
}
else
{
lean_object* v___x_1800_; 
lean_dec(v___y_1790_);
lean_del_object(v___x_1736_);
v___x_1800_ = lean_box(0);
lean_inc(v_a_1734_);
v_fst_1739_ = v_a_1734_;
v_snd_1740_ = v___x_1800_;
goto v___jp_1738_;
}
}
}
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
lean_dec_ref(v_opts_1115_);
v_a_1808_ = lean_ctor_get(v___x_1733_, 0);
lean_inc(v_a_1808_);
lean_dec_ref_known(v___x_1733_, 1);
v___x_1812_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1813_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1812_);
lean_dec_ref(v___x_1813_);
goto v___jp_1809_;
v___jp_1809_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = lean_io_error_to_string(v_a_1808_);
v___x_1811_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1810_);
lean_dec_ref(v___x_1811_);
goto v___jp_1271_;
}
}
}
}
else
{
uint8_t v___x_1814_; 
v___x_1814_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_1814_ == 0)
{
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
goto v___jp_1241_;
}
else
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10));
v___x_1816_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1815_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1825_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1825_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1825_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1821_ = lean_internal_enable_debug(v_a_1817_);
lean_dec(v_a_1817_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v_opts_1115_);
v___x_1823_ = v___x_1819_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_opts_1115_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_dec_ref(v_opts_1115_);
v_a_1826_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1826_);
lean_dec_ref_known(v___x_1816_, 1);
v___x_1830_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1831_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1830_);
lean_dec_ref(v___x_1831_);
goto v___jp_1827_;
v___jp_1827_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1828_ = lean_io_error_to_string(v_a_1826_);
v___x_1829_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1828_);
lean_dec_ref(v___x_1829_);
goto v___jp_1185_;
}
}
}
}
}
else
{
lean_object* v_leanOpts_1832_; lean_object* v_forwardedArgs_1833_; uint8_t v_component_1834_; uint8_t v_printPrefix_1835_; uint8_t v_printLibDir_1836_; uint8_t v_useStdin_1837_; uint8_t v_onlyDeps_1838_; uint8_t v_onlySrcDeps_1839_; uint8_t v_depsJson_1840_; lean_object* v_opts_1841_; uint32_t v_trustLevel_1842_; uint32_t v_numThreads_1843_; lean_object* v_rootDir_x3f_1844_; lean_object* v_setupFileName_x3f_1845_; lean_object* v_oleanFileName_x3f_1846_; lean_object* v_ileanFileName_x3f_1847_; lean_object* v_cFileName_x3f_1848_; lean_object* v_bcFileName_x3f_1849_; lean_object* v_zigFileName_x3f_1850_; uint8_t v_jsonOutput_1851_; lean_object* v_errorOnKinds_1852_; uint8_t v_printStats_1853_; uint8_t v_run_1854_; lean_object* v_incrSaveFileName_x3f_1855_; lean_object* v_incrLoadFileName_x3f_1856_; lean_object* v_incrHeaderSaveFileName_x3f_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1867_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_1832_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1833_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1834_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1835_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1836_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1837_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1838_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1839_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1840_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1841_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1842_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1843_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1844_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1845_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1846_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1847_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1848_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1849_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1850_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1851_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1852_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1853_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1854_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1855_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1856_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1857_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1859_ = v_opts_1115_;
v_isShared_1860_ = v_isSharedCheck_1867_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1857_);
lean_inc(v_incrLoadFileName_x3f_1856_);
lean_inc(v_incrSaveFileName_x3f_1855_);
lean_inc(v_errorOnKinds_1852_);
lean_inc(v_zigFileName_x3f_1850_);
lean_inc(v_bcFileName_x3f_1849_);
lean_inc(v_cFileName_x3f_1848_);
lean_inc(v_ileanFileName_x3f_1847_);
lean_inc(v_oleanFileName_x3f_1846_);
lean_inc(v_setupFileName_x3f_1845_);
lean_inc(v_rootDir_x3f_1844_);
lean_inc(v_opts_1841_);
lean_inc(v_forwardedArgs_1833_);
lean_inc(v_leanOpts_1832_);
lean_dec(v_opts_1115_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1867_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1864_; 
v___x_1861_ = l_Lean_profiler;
v___x_1862_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_1832_, v___x_1861_, v___x_1404_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v___x_1862_);
v___x_1864_ = v___x_1859_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1866_, 1, v_forwardedArgs_1833_);
lean_ctor_set(v_reuseFailAlloc_1866_, 2, v_opts_1841_);
lean_ctor_set(v_reuseFailAlloc_1866_, 3, v_rootDir_x3f_1844_);
lean_ctor_set(v_reuseFailAlloc_1866_, 4, v_setupFileName_x3f_1845_);
lean_ctor_set(v_reuseFailAlloc_1866_, 5, v_oleanFileName_x3f_1846_);
lean_ctor_set(v_reuseFailAlloc_1866_, 6, v_ileanFileName_x3f_1847_);
lean_ctor_set(v_reuseFailAlloc_1866_, 7, v_cFileName_x3f_1848_);
lean_ctor_set(v_reuseFailAlloc_1866_, 8, v_bcFileName_x3f_1849_);
lean_ctor_set(v_reuseFailAlloc_1866_, 9, v_zigFileName_x3f_1850_);
lean_ctor_set(v_reuseFailAlloc_1866_, 10, v_errorOnKinds_1852_);
lean_ctor_set(v_reuseFailAlloc_1866_, 11, v_incrSaveFileName_x3f_1855_);
lean_ctor_set(v_reuseFailAlloc_1866_, 12, v_incrLoadFileName_x3f_1856_);
lean_ctor_set(v_reuseFailAlloc_1866_, 13, v_incrHeaderSaveFileName_x3f_1857_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 8, v_component_1834_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 9, v_printPrefix_1835_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 10, v_printLibDir_1836_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 11, v_useStdin_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 12, v_onlyDeps_1838_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 13, v_onlySrcDeps_1839_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 14, v_depsJson_1840_);
lean_ctor_set_uint32(v_reuseFailAlloc_1866_, sizeof(void*)*14, v_trustLevel_1842_);
lean_ctor_set_uint32(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 4, v_numThreads_1843_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 15, v_jsonOutput_1851_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 16, v_printStats_1853_);
lean_ctor_set_uint8(v_reuseFailAlloc_1866_, sizeof(void*)*14 + 17, v_run_1854_);
v___x_1864_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; 
v___x_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
return v___x_1865_;
}
}
}
}
else
{
lean_object* v_leanOpts_1868_; lean_object* v_forwardedArgs_1869_; uint8_t v_printPrefix_1870_; uint8_t v_printLibDir_1871_; uint8_t v_useStdin_1872_; uint8_t v_onlyDeps_1873_; uint8_t v_onlySrcDeps_1874_; uint8_t v_depsJson_1875_; lean_object* v_opts_1876_; uint32_t v_trustLevel_1877_; uint32_t v_numThreads_1878_; lean_object* v_rootDir_x3f_1879_; lean_object* v_setupFileName_x3f_1880_; lean_object* v_oleanFileName_x3f_1881_; lean_object* v_ileanFileName_x3f_1882_; lean_object* v_cFileName_x3f_1883_; lean_object* v_bcFileName_x3f_1884_; lean_object* v_zigFileName_x3f_1885_; uint8_t v_jsonOutput_1886_; lean_object* v_errorOnKinds_1887_; uint8_t v_printStats_1888_; uint8_t v_run_1889_; lean_object* v_incrSaveFileName_x3f_1890_; lean_object* v_incrLoadFileName_x3f_1891_; lean_object* v_incrHeaderSaveFileName_x3f_1892_; lean_object* v___x_1894_; uint8_t v_isShared_1895_; uint8_t v_isSharedCheck_1901_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_1868_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1869_ = lean_ctor_get(v_opts_1115_, 1);
v_printPrefix_1870_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1871_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1872_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1873_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1874_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1875_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1876_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1877_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1878_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1879_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1880_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1881_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1882_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1883_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1884_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1885_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1886_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1887_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1888_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1889_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1890_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1891_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1892_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1901_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1894_ = v_opts_1115_;
v_isShared_1895_ = v_isSharedCheck_1901_;
goto v_resetjp_1893_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1892_);
lean_inc(v_incrLoadFileName_x3f_1891_);
lean_inc(v_incrSaveFileName_x3f_1890_);
lean_inc(v_errorOnKinds_1887_);
lean_inc(v_zigFileName_x3f_1885_);
lean_inc(v_bcFileName_x3f_1884_);
lean_inc(v_cFileName_x3f_1883_);
lean_inc(v_ileanFileName_x3f_1882_);
lean_inc(v_oleanFileName_x3f_1881_);
lean_inc(v_setupFileName_x3f_1880_);
lean_inc(v_rootDir_x3f_1879_);
lean_inc(v_opts_1876_);
lean_inc(v_forwardedArgs_1869_);
lean_inc(v_leanOpts_1868_);
lean_dec(v_opts_1115_);
v___x_1894_ = lean_box(0);
v_isShared_1895_ = v_isSharedCheck_1901_;
goto v_resetjp_1893_;
}
v_resetjp_1893_:
{
uint8_t v___x_1896_; lean_object* v___x_1898_; 
v___x_1896_ = 2;
if (v_isShared_1895_ == 0)
{
v___x_1898_ = v___x_1894_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_leanOpts_1868_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v_forwardedArgs_1869_);
lean_ctor_set(v_reuseFailAlloc_1900_, 2, v_opts_1876_);
lean_ctor_set(v_reuseFailAlloc_1900_, 3, v_rootDir_x3f_1879_);
lean_ctor_set(v_reuseFailAlloc_1900_, 4, v_setupFileName_x3f_1880_);
lean_ctor_set(v_reuseFailAlloc_1900_, 5, v_oleanFileName_x3f_1881_);
lean_ctor_set(v_reuseFailAlloc_1900_, 6, v_ileanFileName_x3f_1882_);
lean_ctor_set(v_reuseFailAlloc_1900_, 7, v_cFileName_x3f_1883_);
lean_ctor_set(v_reuseFailAlloc_1900_, 8, v_bcFileName_x3f_1884_);
lean_ctor_set(v_reuseFailAlloc_1900_, 9, v_zigFileName_x3f_1885_);
lean_ctor_set(v_reuseFailAlloc_1900_, 10, v_errorOnKinds_1887_);
lean_ctor_set(v_reuseFailAlloc_1900_, 11, v_incrSaveFileName_x3f_1890_);
lean_ctor_set(v_reuseFailAlloc_1900_, 12, v_incrLoadFileName_x3f_1891_);
lean_ctor_set(v_reuseFailAlloc_1900_, 13, v_incrHeaderSaveFileName_x3f_1892_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 9, v_printPrefix_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 10, v_printLibDir_1871_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 11, v_useStdin_1872_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 12, v_onlyDeps_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 13, v_onlySrcDeps_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 14, v_depsJson_1875_);
lean_ctor_set_uint32(v_reuseFailAlloc_1900_, sizeof(void*)*14, v_trustLevel_1877_);
lean_ctor_set_uint32(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 4, v_numThreads_1878_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 15, v_jsonOutput_1886_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 16, v_printStats_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1900_, sizeof(void*)*14 + 17, v_run_1889_);
v___x_1898_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
lean_object* v___x_1899_; 
lean_ctor_set_uint8(v___x_1898_, sizeof(void*)*14 + 8, v___x_1896_);
v___x_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1898_);
return v___x_1899_;
}
}
}
}
else
{
lean_object* v_leanOpts_1902_; lean_object* v_forwardedArgs_1903_; uint8_t v_printPrefix_1904_; uint8_t v_printLibDir_1905_; uint8_t v_useStdin_1906_; uint8_t v_onlyDeps_1907_; uint8_t v_onlySrcDeps_1908_; uint8_t v_depsJson_1909_; lean_object* v_opts_1910_; uint32_t v_trustLevel_1911_; uint32_t v_numThreads_1912_; lean_object* v_rootDir_x3f_1913_; lean_object* v_setupFileName_x3f_1914_; lean_object* v_oleanFileName_x3f_1915_; lean_object* v_ileanFileName_x3f_1916_; lean_object* v_cFileName_x3f_1917_; lean_object* v_bcFileName_x3f_1918_; lean_object* v_zigFileName_x3f_1919_; uint8_t v_jsonOutput_1920_; lean_object* v_errorOnKinds_1921_; uint8_t v_printStats_1922_; uint8_t v_run_1923_; lean_object* v_incrSaveFileName_x3f_1924_; lean_object* v_incrLoadFileName_x3f_1925_; lean_object* v_incrHeaderSaveFileName_x3f_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1935_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_1902_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1903_ = lean_ctor_get(v_opts_1115_, 1);
v_printPrefix_1904_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1905_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1906_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1907_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1908_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1909_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1910_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1911_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1912_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1913_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1914_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1915_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1916_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1917_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1918_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1919_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1920_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1921_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1922_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1923_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1924_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1925_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1926_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1928_ = v_opts_1115_;
v_isShared_1929_ = v_isSharedCheck_1935_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1926_);
lean_inc(v_incrLoadFileName_x3f_1925_);
lean_inc(v_incrSaveFileName_x3f_1924_);
lean_inc(v_errorOnKinds_1921_);
lean_inc(v_zigFileName_x3f_1919_);
lean_inc(v_bcFileName_x3f_1918_);
lean_inc(v_cFileName_x3f_1917_);
lean_inc(v_ileanFileName_x3f_1916_);
lean_inc(v_oleanFileName_x3f_1915_);
lean_inc(v_setupFileName_x3f_1914_);
lean_inc(v_rootDir_x3f_1913_);
lean_inc(v_opts_1910_);
lean_inc(v_forwardedArgs_1903_);
lean_inc(v_leanOpts_1902_);
lean_dec(v_opts_1115_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1935_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
uint8_t v___x_1930_; lean_object* v___x_1932_; 
v___x_1930_ = 1;
if (v_isShared_1929_ == 0)
{
v___x_1932_ = v___x_1928_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_leanOpts_1902_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v_forwardedArgs_1903_);
lean_ctor_set(v_reuseFailAlloc_1934_, 2, v_opts_1910_);
lean_ctor_set(v_reuseFailAlloc_1934_, 3, v_rootDir_x3f_1913_);
lean_ctor_set(v_reuseFailAlloc_1934_, 4, v_setupFileName_x3f_1914_);
lean_ctor_set(v_reuseFailAlloc_1934_, 5, v_oleanFileName_x3f_1915_);
lean_ctor_set(v_reuseFailAlloc_1934_, 6, v_ileanFileName_x3f_1916_);
lean_ctor_set(v_reuseFailAlloc_1934_, 7, v_cFileName_x3f_1917_);
lean_ctor_set(v_reuseFailAlloc_1934_, 8, v_bcFileName_x3f_1918_);
lean_ctor_set(v_reuseFailAlloc_1934_, 9, v_zigFileName_x3f_1919_);
lean_ctor_set(v_reuseFailAlloc_1934_, 10, v_errorOnKinds_1921_);
lean_ctor_set(v_reuseFailAlloc_1934_, 11, v_incrSaveFileName_x3f_1924_);
lean_ctor_set(v_reuseFailAlloc_1934_, 12, v_incrLoadFileName_x3f_1925_);
lean_ctor_set(v_reuseFailAlloc_1934_, 13, v_incrHeaderSaveFileName_x3f_1926_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 9, v_printPrefix_1904_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 10, v_printLibDir_1905_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 11, v_useStdin_1906_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 12, v_onlyDeps_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 13, v_onlySrcDeps_1908_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 14, v_depsJson_1909_);
lean_ctor_set_uint32(v_reuseFailAlloc_1934_, sizeof(void*)*14, v_trustLevel_1911_);
lean_ctor_set_uint32(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 4, v_numThreads_1912_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 15, v_jsonOutput_1920_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 16, v_printStats_1922_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*14 + 17, v_run_1923_);
v___x_1932_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; 
lean_ctor_set_uint8(v___x_1932_, sizeof(void*)*14 + 8, v___x_1930_);
v___x_1933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1932_);
return v___x_1933_;
}
}
}
}
else
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11));
v___x_1937_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1936_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v_a_1938_; lean_object* v_leanOpts_1939_; lean_object* v_forwardedArgs_1940_; uint8_t v_component_1941_; uint8_t v_printPrefix_1942_; uint8_t v_printLibDir_1943_; uint8_t v_useStdin_1944_; uint8_t v_onlyDeps_1945_; uint8_t v_onlySrcDeps_1946_; uint8_t v_depsJson_1947_; lean_object* v_opts_1948_; uint32_t v_trustLevel_1949_; uint32_t v_numThreads_1950_; lean_object* v_rootDir_x3f_1951_; lean_object* v_setupFileName_x3f_1952_; lean_object* v_oleanFileName_x3f_1953_; lean_object* v_ileanFileName_x3f_1954_; lean_object* v_cFileName_x3f_1955_; lean_object* v_bcFileName_x3f_1956_; lean_object* v_zigFileName_x3f_1957_; uint8_t v_jsonOutput_1958_; lean_object* v_errorOnKinds_1959_; uint8_t v_printStats_1960_; uint8_t v_run_1961_; lean_object* v_incrSaveFileName_x3f_1962_; lean_object* v_incrLoadFileName_x3f_1963_; lean_object* v_incrHeaderSaveFileName_x3f_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1989_; 
v_a_1938_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_a_1938_);
lean_dec_ref_known(v___x_1937_, 1);
v_leanOpts_1939_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1940_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1941_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1942_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_1943_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_1944_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_1945_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1946_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_1947_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_1948_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_1949_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_1950_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1951_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_1952_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_1953_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_1954_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_1955_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_1956_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_1957_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_1958_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_1959_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_1960_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_1961_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1962_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_1963_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_1964_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1966_ = v_opts_1115_;
v_isShared_1967_ = v_isSharedCheck_1989_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1964_);
lean_inc(v_incrLoadFileName_x3f_1963_);
lean_inc(v_incrSaveFileName_x3f_1962_);
lean_inc(v_errorOnKinds_1959_);
lean_inc(v_zigFileName_x3f_1957_);
lean_inc(v_bcFileName_x3f_1956_);
lean_inc(v_cFileName_x3f_1955_);
lean_inc(v_ileanFileName_x3f_1954_);
lean_inc(v_oleanFileName_x3f_1953_);
lean_inc(v_setupFileName_x3f_1952_);
lean_inc(v_rootDir_x3f_1951_);
lean_inc(v_opts_1948_);
lean_inc(v_forwardedArgs_1940_);
lean_inc(v_leanOpts_1939_);
lean_dec(v_opts_1115_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1989_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1968_; 
lean_inc(v_a_1938_);
v___x_1968_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_leanOpts_1939_, v_a_1938_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1982_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1971_ = v___x_1968_;
v_isShared_1972_ = v_isSharedCheck_1982_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1968_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1982_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1977_; 
v___x_1973_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12));
v___x_1974_ = lean_string_append(v___x_1973_, v_a_1938_);
lean_dec(v_a_1938_);
v___x_1975_ = lean_array_push(v_forwardedArgs_1940_, v___x_1974_);
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 1, v___x_1975_);
lean_ctor_set(v___x_1966_, 0, v_a_1969_);
v___x_1977_ = v___x_1966_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1969_);
lean_ctor_set(v_reuseFailAlloc_1981_, 1, v___x_1975_);
lean_ctor_set(v_reuseFailAlloc_1981_, 2, v_opts_1948_);
lean_ctor_set(v_reuseFailAlloc_1981_, 3, v_rootDir_x3f_1951_);
lean_ctor_set(v_reuseFailAlloc_1981_, 4, v_setupFileName_x3f_1952_);
lean_ctor_set(v_reuseFailAlloc_1981_, 5, v_oleanFileName_x3f_1953_);
lean_ctor_set(v_reuseFailAlloc_1981_, 6, v_ileanFileName_x3f_1954_);
lean_ctor_set(v_reuseFailAlloc_1981_, 7, v_cFileName_x3f_1955_);
lean_ctor_set(v_reuseFailAlloc_1981_, 8, v_bcFileName_x3f_1956_);
lean_ctor_set(v_reuseFailAlloc_1981_, 9, v_zigFileName_x3f_1957_);
lean_ctor_set(v_reuseFailAlloc_1981_, 10, v_errorOnKinds_1959_);
lean_ctor_set(v_reuseFailAlloc_1981_, 11, v_incrSaveFileName_x3f_1962_);
lean_ctor_set(v_reuseFailAlloc_1981_, 12, v_incrLoadFileName_x3f_1963_);
lean_ctor_set(v_reuseFailAlloc_1981_, 13, v_incrHeaderSaveFileName_x3f_1964_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 8, v_component_1941_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 9, v_printPrefix_1942_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 10, v_printLibDir_1943_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 11, v_useStdin_1944_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 12, v_onlyDeps_1945_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 13, v_onlySrcDeps_1946_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 14, v_depsJson_1947_);
lean_ctor_set_uint32(v_reuseFailAlloc_1981_, sizeof(void*)*14, v_trustLevel_1949_);
lean_ctor_set_uint32(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 4, v_numThreads_1950_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 15, v_jsonOutput_1958_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 16, v_printStats_1960_);
lean_ctor_set_uint8(v_reuseFailAlloc_1981_, sizeof(void*)*14 + 17, v_run_1961_);
v___x_1977_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1979_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v___x_1977_);
v___x_1979_ = v___x_1971_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1987_; lean_object* v___x_1988_; 
lean_del_object(v___x_1966_);
lean_dec(v_incrHeaderSaveFileName_x3f_1964_);
lean_dec(v_incrLoadFileName_x3f_1963_);
lean_dec(v_incrSaveFileName_x3f_1962_);
lean_dec_ref(v_errorOnKinds_1959_);
lean_dec(v_zigFileName_x3f_1957_);
lean_dec(v_bcFileName_x3f_1956_);
lean_dec(v_cFileName_x3f_1955_);
lean_dec(v_ileanFileName_x3f_1954_);
lean_dec(v_oleanFileName_x3f_1953_);
lean_dec(v_setupFileName_x3f_1952_);
lean_dec(v_rootDir_x3f_1951_);
lean_dec_ref(v_opts_1948_);
lean_dec_ref(v_forwardedArgs_1940_);
lean_dec(v_a_1938_);
v_a_1983_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1983_);
lean_dec_ref_known(v___x_1968_, 1);
v___x_1987_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1988_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1987_);
lean_dec_ref(v___x_1988_);
goto v___jp_1984_;
v___jp_1984_:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = lean_io_error_to_string(v_a_1983_);
v___x_1986_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1985_);
lean_dec_ref(v___x_1986_);
goto v___jp_1277_;
}
}
}
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_dec_ref(v_opts_1115_);
v_a_1990_ = lean_ctor_get(v___x_1937_, 0);
lean_inc(v_a_1990_);
lean_dec_ref_known(v___x_1937_, 1);
v___x_1994_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1995_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1994_);
lean_dec_ref(v___x_1995_);
goto v___jp_1991_;
v___jp_1991_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = lean_io_error_to_string(v_a_1990_);
v___x_1993_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1992_);
lean_dec_ref(v___x_1993_);
goto v___jp_1179_;
}
}
}
}
else
{
lean_object* v_leanOpts_1996_; lean_object* v_forwardedArgs_1997_; uint8_t v_component_1998_; uint8_t v_printPrefix_1999_; uint8_t v_useStdin_2000_; uint8_t v_onlyDeps_2001_; uint8_t v_onlySrcDeps_2002_; uint8_t v_depsJson_2003_; lean_object* v_opts_2004_; uint32_t v_trustLevel_2005_; uint32_t v_numThreads_2006_; lean_object* v_rootDir_x3f_2007_; lean_object* v_setupFileName_x3f_2008_; lean_object* v_oleanFileName_x3f_2009_; lean_object* v_ileanFileName_x3f_2010_; lean_object* v_cFileName_x3f_2011_; lean_object* v_bcFileName_x3f_2012_; lean_object* v_zigFileName_x3f_2013_; uint8_t v_jsonOutput_2014_; lean_object* v_errorOnKinds_2015_; uint8_t v_printStats_2016_; uint8_t v_run_2017_; lean_object* v_incrSaveFileName_x3f_2018_; lean_object* v_incrLoadFileName_x3f_2019_; lean_object* v_incrHeaderSaveFileName_x3f_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_1996_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_1997_ = lean_ctor_get(v_opts_1115_, 1);
v_component_1998_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_1999_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_useStdin_2000_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2001_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2002_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2003_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2004_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2005_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2006_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2007_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2008_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2009_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2010_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2011_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2012_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2013_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2014_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2015_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2016_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2017_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2018_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2019_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2020_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2022_ = v_opts_1115_;
v_isShared_2023_ = v_isSharedCheck_2028_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2020_);
lean_inc(v_incrLoadFileName_x3f_2019_);
lean_inc(v_incrSaveFileName_x3f_2018_);
lean_inc(v_errorOnKinds_2015_);
lean_inc(v_zigFileName_x3f_2013_);
lean_inc(v_bcFileName_x3f_2012_);
lean_inc(v_cFileName_x3f_2011_);
lean_inc(v_ileanFileName_x3f_2010_);
lean_inc(v_oleanFileName_x3f_2009_);
lean_inc(v_setupFileName_x3f_2008_);
lean_inc(v_rootDir_x3f_2007_);
lean_inc(v_opts_2004_);
lean_inc(v_forwardedArgs_1997_);
lean_inc(v_leanOpts_1996_);
lean_dec(v_opts_1115_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2028_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_leanOpts_1996_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v_forwardedArgs_1997_);
lean_ctor_set(v_reuseFailAlloc_2027_, 2, v_opts_2004_);
lean_ctor_set(v_reuseFailAlloc_2027_, 3, v_rootDir_x3f_2007_);
lean_ctor_set(v_reuseFailAlloc_2027_, 4, v_setupFileName_x3f_2008_);
lean_ctor_set(v_reuseFailAlloc_2027_, 5, v_oleanFileName_x3f_2009_);
lean_ctor_set(v_reuseFailAlloc_2027_, 6, v_ileanFileName_x3f_2010_);
lean_ctor_set(v_reuseFailAlloc_2027_, 7, v_cFileName_x3f_2011_);
lean_ctor_set(v_reuseFailAlloc_2027_, 8, v_bcFileName_x3f_2012_);
lean_ctor_set(v_reuseFailAlloc_2027_, 9, v_zigFileName_x3f_2013_);
lean_ctor_set(v_reuseFailAlloc_2027_, 10, v_errorOnKinds_2015_);
lean_ctor_set(v_reuseFailAlloc_2027_, 11, v_incrSaveFileName_x3f_2018_);
lean_ctor_set(v_reuseFailAlloc_2027_, 12, v_incrLoadFileName_x3f_2019_);
lean_ctor_set(v_reuseFailAlloc_2027_, 13, v_incrHeaderSaveFileName_x3f_2020_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 8, v_component_1998_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 9, v_printPrefix_1999_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 11, v_useStdin_2000_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 12, v_onlyDeps_2001_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 13, v_onlySrcDeps_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 14, v_depsJson_2003_);
lean_ctor_set_uint32(v_reuseFailAlloc_2027_, sizeof(void*)*14, v_trustLevel_2005_);
lean_ctor_set_uint32(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 4, v_numThreads_2006_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 15, v_jsonOutput_2014_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 16, v_printStats_2016_);
lean_ctor_set_uint8(v_reuseFailAlloc_2027_, sizeof(void*)*14 + 17, v_run_2017_);
v___x_2025_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; 
lean_ctor_set_uint8(v___x_2025_, sizeof(void*)*14 + 10, v___x_1396_);
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
return v___x_2026_;
}
}
}
}
else
{
lean_object* v_leanOpts_2029_; lean_object* v_forwardedArgs_2030_; uint8_t v_component_2031_; uint8_t v_printLibDir_2032_; uint8_t v_useStdin_2033_; uint8_t v_onlyDeps_2034_; uint8_t v_onlySrcDeps_2035_; uint8_t v_depsJson_2036_; lean_object* v_opts_2037_; uint32_t v_trustLevel_2038_; uint32_t v_numThreads_2039_; lean_object* v_rootDir_x3f_2040_; lean_object* v_setupFileName_x3f_2041_; lean_object* v_oleanFileName_x3f_2042_; lean_object* v_ileanFileName_x3f_2043_; lean_object* v_cFileName_x3f_2044_; lean_object* v_bcFileName_x3f_2045_; lean_object* v_zigFileName_x3f_2046_; uint8_t v_jsonOutput_2047_; lean_object* v_errorOnKinds_2048_; uint8_t v_printStats_2049_; uint8_t v_run_2050_; lean_object* v_incrSaveFileName_x3f_2051_; lean_object* v_incrLoadFileName_x3f_2052_; lean_object* v_incrHeaderSaveFileName_x3f_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2061_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2029_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2030_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2031_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printLibDir_2032_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2033_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2034_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2035_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2036_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2037_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2038_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2039_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2040_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2041_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2042_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2043_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2044_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2045_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2046_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2047_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2048_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2049_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2050_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2051_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2052_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2053_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2055_ = v_opts_1115_;
v_isShared_2056_ = v_isSharedCheck_2061_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2053_);
lean_inc(v_incrLoadFileName_x3f_2052_);
lean_inc(v_incrSaveFileName_x3f_2051_);
lean_inc(v_errorOnKinds_2048_);
lean_inc(v_zigFileName_x3f_2046_);
lean_inc(v_bcFileName_x3f_2045_);
lean_inc(v_cFileName_x3f_2044_);
lean_inc(v_ileanFileName_x3f_2043_);
lean_inc(v_oleanFileName_x3f_2042_);
lean_inc(v_setupFileName_x3f_2041_);
lean_inc(v_rootDir_x3f_2040_);
lean_inc(v_opts_2037_);
lean_inc(v_forwardedArgs_2030_);
lean_inc(v_leanOpts_2029_);
lean_dec(v_opts_1115_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2061_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_leanOpts_2029_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_forwardedArgs_2030_);
lean_ctor_set(v_reuseFailAlloc_2060_, 2, v_opts_2037_);
lean_ctor_set(v_reuseFailAlloc_2060_, 3, v_rootDir_x3f_2040_);
lean_ctor_set(v_reuseFailAlloc_2060_, 4, v_setupFileName_x3f_2041_);
lean_ctor_set(v_reuseFailAlloc_2060_, 5, v_oleanFileName_x3f_2042_);
lean_ctor_set(v_reuseFailAlloc_2060_, 6, v_ileanFileName_x3f_2043_);
lean_ctor_set(v_reuseFailAlloc_2060_, 7, v_cFileName_x3f_2044_);
lean_ctor_set(v_reuseFailAlloc_2060_, 8, v_bcFileName_x3f_2045_);
lean_ctor_set(v_reuseFailAlloc_2060_, 9, v_zigFileName_x3f_2046_);
lean_ctor_set(v_reuseFailAlloc_2060_, 10, v_errorOnKinds_2048_);
lean_ctor_set(v_reuseFailAlloc_2060_, 11, v_incrSaveFileName_x3f_2051_);
lean_ctor_set(v_reuseFailAlloc_2060_, 12, v_incrLoadFileName_x3f_2052_);
lean_ctor_set(v_reuseFailAlloc_2060_, 13, v_incrHeaderSaveFileName_x3f_2053_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 8, v_component_2031_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 10, v_printLibDir_2032_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 11, v_useStdin_2033_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 12, v_onlyDeps_2034_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 13, v_onlySrcDeps_2035_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 14, v_depsJson_2036_);
lean_ctor_set_uint32(v_reuseFailAlloc_2060_, sizeof(void*)*14, v_trustLevel_2038_);
lean_ctor_set_uint32(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 4, v_numThreads_2039_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 15, v_jsonOutput_2047_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 16, v_printStats_2049_);
lean_ctor_set_uint8(v_reuseFailAlloc_2060_, sizeof(void*)*14 + 17, v_run_2050_);
v___x_2058_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; 
lean_ctor_set_uint8(v___x_2058_, sizeof(void*)*14 + 9, v___x_1394_);
v___x_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
return v___x_2059_;
}
}
}
}
else
{
lean_object* v_leanOpts_2062_; lean_object* v_forwardedArgs_2063_; uint8_t v_component_2064_; uint8_t v_printPrefix_2065_; uint8_t v_printLibDir_2066_; uint8_t v_useStdin_2067_; uint8_t v_onlyDeps_2068_; uint8_t v_onlySrcDeps_2069_; uint8_t v_depsJson_2070_; lean_object* v_opts_2071_; uint32_t v_trustLevel_2072_; uint32_t v_numThreads_2073_; lean_object* v_rootDir_x3f_2074_; lean_object* v_setupFileName_x3f_2075_; lean_object* v_oleanFileName_x3f_2076_; lean_object* v_ileanFileName_x3f_2077_; lean_object* v_cFileName_x3f_2078_; lean_object* v_bcFileName_x3f_2079_; lean_object* v_zigFileName_x3f_2080_; uint8_t v_jsonOutput_2081_; lean_object* v_errorOnKinds_2082_; uint8_t v_run_2083_; lean_object* v_incrSaveFileName_x3f_2084_; lean_object* v_incrLoadFileName_x3f_2085_; lean_object* v_incrHeaderSaveFileName_x3f_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2094_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2062_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2063_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2064_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2065_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2066_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2067_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2068_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2069_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2070_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2071_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2072_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2073_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2074_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2075_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2076_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2077_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2078_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2079_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2080_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2081_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2082_ = lean_ctor_get(v_opts_1115_, 10);
v_run_2083_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2084_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2085_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2086_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2094_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2088_ = v_opts_1115_;
v_isShared_2089_ = v_isSharedCheck_2094_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2086_);
lean_inc(v_incrLoadFileName_x3f_2085_);
lean_inc(v_incrSaveFileName_x3f_2084_);
lean_inc(v_errorOnKinds_2082_);
lean_inc(v_zigFileName_x3f_2080_);
lean_inc(v_bcFileName_x3f_2079_);
lean_inc(v_cFileName_x3f_2078_);
lean_inc(v_ileanFileName_x3f_2077_);
lean_inc(v_oleanFileName_x3f_2076_);
lean_inc(v_setupFileName_x3f_2075_);
lean_inc(v_rootDir_x3f_2074_);
lean_inc(v_opts_2071_);
lean_inc(v_forwardedArgs_2063_);
lean_inc(v_leanOpts_2062_);
lean_dec(v_opts_1115_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2094_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_leanOpts_2062_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v_forwardedArgs_2063_);
lean_ctor_set(v_reuseFailAlloc_2093_, 2, v_opts_2071_);
lean_ctor_set(v_reuseFailAlloc_2093_, 3, v_rootDir_x3f_2074_);
lean_ctor_set(v_reuseFailAlloc_2093_, 4, v_setupFileName_x3f_2075_);
lean_ctor_set(v_reuseFailAlloc_2093_, 5, v_oleanFileName_x3f_2076_);
lean_ctor_set(v_reuseFailAlloc_2093_, 6, v_ileanFileName_x3f_2077_);
lean_ctor_set(v_reuseFailAlloc_2093_, 7, v_cFileName_x3f_2078_);
lean_ctor_set(v_reuseFailAlloc_2093_, 8, v_bcFileName_x3f_2079_);
lean_ctor_set(v_reuseFailAlloc_2093_, 9, v_zigFileName_x3f_2080_);
lean_ctor_set(v_reuseFailAlloc_2093_, 10, v_errorOnKinds_2082_);
lean_ctor_set(v_reuseFailAlloc_2093_, 11, v_incrSaveFileName_x3f_2084_);
lean_ctor_set(v_reuseFailAlloc_2093_, 12, v_incrLoadFileName_x3f_2085_);
lean_ctor_set(v_reuseFailAlloc_2093_, 13, v_incrHeaderSaveFileName_x3f_2086_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 8, v_component_2064_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 9, v_printPrefix_2065_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 10, v_printLibDir_2066_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 11, v_useStdin_2067_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 12, v_onlyDeps_2068_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 13, v_onlySrcDeps_2069_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 14, v_depsJson_2070_);
lean_ctor_set_uint32(v_reuseFailAlloc_2093_, sizeof(void*)*14, v_trustLevel_2072_);
lean_ctor_set_uint32(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 4, v_numThreads_2073_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 15, v_jsonOutput_2081_);
lean_ctor_set_uint8(v_reuseFailAlloc_2093_, sizeof(void*)*14 + 17, v_run_2083_);
v___x_2091_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2092_; 
lean_ctor_set_uint8(v___x_2091_, sizeof(void*)*14 + 16, v___x_1392_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
return v___x_2092_;
}
}
}
}
else
{
lean_object* v_leanOpts_2095_; lean_object* v_forwardedArgs_2096_; uint8_t v_component_2097_; uint8_t v_printPrefix_2098_; uint8_t v_printLibDir_2099_; uint8_t v_useStdin_2100_; uint8_t v_onlyDeps_2101_; uint8_t v_onlySrcDeps_2102_; uint8_t v_depsJson_2103_; lean_object* v_opts_2104_; uint32_t v_trustLevel_2105_; uint32_t v_numThreads_2106_; lean_object* v_rootDir_x3f_2107_; lean_object* v_setupFileName_x3f_2108_; lean_object* v_oleanFileName_x3f_2109_; lean_object* v_ileanFileName_x3f_2110_; lean_object* v_cFileName_x3f_2111_; lean_object* v_bcFileName_x3f_2112_; lean_object* v_zigFileName_x3f_2113_; lean_object* v_errorOnKinds_2114_; uint8_t v_printStats_2115_; uint8_t v_run_2116_; lean_object* v_incrSaveFileName_x3f_2117_; lean_object* v_incrLoadFileName_x3f_2118_; lean_object* v_incrHeaderSaveFileName_x3f_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2127_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2095_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2096_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2097_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2098_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2099_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2100_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2101_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2102_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2103_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2104_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2105_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2106_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2107_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2108_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2109_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2110_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2111_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2112_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2113_ = lean_ctor_get(v_opts_1115_, 9);
v_errorOnKinds_2114_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2115_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2116_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2117_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2118_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2119_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2127_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2121_ = v_opts_1115_;
v_isShared_2122_ = v_isSharedCheck_2127_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2119_);
lean_inc(v_incrLoadFileName_x3f_2118_);
lean_inc(v_incrSaveFileName_x3f_2117_);
lean_inc(v_errorOnKinds_2114_);
lean_inc(v_zigFileName_x3f_2113_);
lean_inc(v_bcFileName_x3f_2112_);
lean_inc(v_cFileName_x3f_2111_);
lean_inc(v_ileanFileName_x3f_2110_);
lean_inc(v_oleanFileName_x3f_2109_);
lean_inc(v_setupFileName_x3f_2108_);
lean_inc(v_rootDir_x3f_2107_);
lean_inc(v_opts_2104_);
lean_inc(v_forwardedArgs_2096_);
lean_inc(v_leanOpts_2095_);
lean_dec(v_opts_1115_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2127_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_leanOpts_2095_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v_forwardedArgs_2096_);
lean_ctor_set(v_reuseFailAlloc_2126_, 2, v_opts_2104_);
lean_ctor_set(v_reuseFailAlloc_2126_, 3, v_rootDir_x3f_2107_);
lean_ctor_set(v_reuseFailAlloc_2126_, 4, v_setupFileName_x3f_2108_);
lean_ctor_set(v_reuseFailAlloc_2126_, 5, v_oleanFileName_x3f_2109_);
lean_ctor_set(v_reuseFailAlloc_2126_, 6, v_ileanFileName_x3f_2110_);
lean_ctor_set(v_reuseFailAlloc_2126_, 7, v_cFileName_x3f_2111_);
lean_ctor_set(v_reuseFailAlloc_2126_, 8, v_bcFileName_x3f_2112_);
lean_ctor_set(v_reuseFailAlloc_2126_, 9, v_zigFileName_x3f_2113_);
lean_ctor_set(v_reuseFailAlloc_2126_, 10, v_errorOnKinds_2114_);
lean_ctor_set(v_reuseFailAlloc_2126_, 11, v_incrSaveFileName_x3f_2117_);
lean_ctor_set(v_reuseFailAlloc_2126_, 12, v_incrLoadFileName_x3f_2118_);
lean_ctor_set(v_reuseFailAlloc_2126_, 13, v_incrHeaderSaveFileName_x3f_2119_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 8, v_component_2097_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 9, v_printPrefix_2098_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 10, v_printLibDir_2099_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 11, v_useStdin_2100_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 12, v_onlyDeps_2101_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 13, v_onlySrcDeps_2102_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 14, v_depsJson_2103_);
lean_ctor_set_uint32(v_reuseFailAlloc_2126_, sizeof(void*)*14, v_trustLevel_2105_);
lean_ctor_set_uint32(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 4, v_numThreads_2106_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 16, v_printStats_2115_);
lean_ctor_set_uint8(v_reuseFailAlloc_2126_, sizeof(void*)*14 + 17, v_run_2116_);
v___x_2124_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
lean_object* v___x_2125_; 
lean_ctor_set_uint8(v___x_2124_, sizeof(void*)*14 + 15, v___x_1390_);
v___x_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2124_);
return v___x_2125_;
}
}
}
}
else
{
lean_object* v_leanOpts_2128_; lean_object* v_forwardedArgs_2129_; uint8_t v_component_2130_; uint8_t v_printPrefix_2131_; uint8_t v_printLibDir_2132_; uint8_t v_useStdin_2133_; uint8_t v_onlySrcDeps_2134_; lean_object* v_opts_2135_; uint32_t v_trustLevel_2136_; uint32_t v_numThreads_2137_; lean_object* v_rootDir_x3f_2138_; lean_object* v_setupFileName_x3f_2139_; lean_object* v_oleanFileName_x3f_2140_; lean_object* v_ileanFileName_x3f_2141_; lean_object* v_cFileName_x3f_2142_; lean_object* v_bcFileName_x3f_2143_; lean_object* v_zigFileName_x3f_2144_; uint8_t v_jsonOutput_2145_; lean_object* v_errorOnKinds_2146_; uint8_t v_printStats_2147_; uint8_t v_run_2148_; lean_object* v_incrSaveFileName_x3f_2149_; lean_object* v_incrLoadFileName_x3f_2150_; lean_object* v_incrHeaderSaveFileName_x3f_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2159_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2128_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2129_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2130_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2131_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2132_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2133_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2134_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_opts_2135_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2136_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2137_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2138_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2139_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2140_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2141_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2142_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2143_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2144_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2145_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2146_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2147_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2148_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2149_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2150_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2151_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2153_ = v_opts_1115_;
v_isShared_2154_ = v_isSharedCheck_2159_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2151_);
lean_inc(v_incrLoadFileName_x3f_2150_);
lean_inc(v_incrSaveFileName_x3f_2149_);
lean_inc(v_errorOnKinds_2146_);
lean_inc(v_zigFileName_x3f_2144_);
lean_inc(v_bcFileName_x3f_2143_);
lean_inc(v_cFileName_x3f_2142_);
lean_inc(v_ileanFileName_x3f_2141_);
lean_inc(v_oleanFileName_x3f_2140_);
lean_inc(v_setupFileName_x3f_2139_);
lean_inc(v_rootDir_x3f_2138_);
lean_inc(v_opts_2135_);
lean_inc(v_forwardedArgs_2129_);
lean_inc(v_leanOpts_2128_);
lean_dec(v_opts_1115_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2159_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_leanOpts_2128_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_forwardedArgs_2129_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v_opts_2135_);
lean_ctor_set(v_reuseFailAlloc_2158_, 3, v_rootDir_x3f_2138_);
lean_ctor_set(v_reuseFailAlloc_2158_, 4, v_setupFileName_x3f_2139_);
lean_ctor_set(v_reuseFailAlloc_2158_, 5, v_oleanFileName_x3f_2140_);
lean_ctor_set(v_reuseFailAlloc_2158_, 6, v_ileanFileName_x3f_2141_);
lean_ctor_set(v_reuseFailAlloc_2158_, 7, v_cFileName_x3f_2142_);
lean_ctor_set(v_reuseFailAlloc_2158_, 8, v_bcFileName_x3f_2143_);
lean_ctor_set(v_reuseFailAlloc_2158_, 9, v_zigFileName_x3f_2144_);
lean_ctor_set(v_reuseFailAlloc_2158_, 10, v_errorOnKinds_2146_);
lean_ctor_set(v_reuseFailAlloc_2158_, 11, v_incrSaveFileName_x3f_2149_);
lean_ctor_set(v_reuseFailAlloc_2158_, 12, v_incrLoadFileName_x3f_2150_);
lean_ctor_set(v_reuseFailAlloc_2158_, 13, v_incrHeaderSaveFileName_x3f_2151_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 8, v_component_2130_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 9, v_printPrefix_2131_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 10, v_printLibDir_2132_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 11, v_useStdin_2133_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 13, v_onlySrcDeps_2134_);
lean_ctor_set_uint32(v_reuseFailAlloc_2158_, sizeof(void*)*14, v_trustLevel_2136_);
lean_ctor_set_uint32(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 4, v_numThreads_2137_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 15, v_jsonOutput_2145_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 16, v_printStats_2147_);
lean_ctor_set_uint8(v_reuseFailAlloc_2158_, sizeof(void*)*14 + 17, v_run_2148_);
v___x_2156_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; 
lean_ctor_set_uint8(v___x_2156_, sizeof(void*)*14 + 12, v___x_1388_);
lean_ctor_set_uint8(v___x_2156_, sizeof(void*)*14 + 14, v___x_1388_);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
return v___x_2157_;
}
}
}
}
else
{
lean_object* v_leanOpts_2160_; lean_object* v_forwardedArgs_2161_; uint8_t v_component_2162_; uint8_t v_printPrefix_2163_; uint8_t v_printLibDir_2164_; uint8_t v_useStdin_2165_; uint8_t v_onlyDeps_2166_; uint8_t v_depsJson_2167_; lean_object* v_opts_2168_; uint32_t v_trustLevel_2169_; uint32_t v_numThreads_2170_; lean_object* v_rootDir_x3f_2171_; lean_object* v_setupFileName_x3f_2172_; lean_object* v_oleanFileName_x3f_2173_; lean_object* v_ileanFileName_x3f_2174_; lean_object* v_cFileName_x3f_2175_; lean_object* v_bcFileName_x3f_2176_; lean_object* v_zigFileName_x3f_2177_; uint8_t v_jsonOutput_2178_; lean_object* v_errorOnKinds_2179_; uint8_t v_printStats_2180_; uint8_t v_run_2181_; lean_object* v_incrSaveFileName_x3f_2182_; lean_object* v_incrLoadFileName_x3f_2183_; lean_object* v_incrHeaderSaveFileName_x3f_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2192_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2160_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2161_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2162_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2163_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2164_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2165_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2166_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_depsJson_2167_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2168_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2169_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2170_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2171_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2172_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2173_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2174_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2175_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2176_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2177_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2178_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2179_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2180_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2181_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2182_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2183_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2184_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2192_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2186_ = v_opts_1115_;
v_isShared_2187_ = v_isSharedCheck_2192_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2184_);
lean_inc(v_incrLoadFileName_x3f_2183_);
lean_inc(v_incrSaveFileName_x3f_2182_);
lean_inc(v_errorOnKinds_2179_);
lean_inc(v_zigFileName_x3f_2177_);
lean_inc(v_bcFileName_x3f_2176_);
lean_inc(v_cFileName_x3f_2175_);
lean_inc(v_ileanFileName_x3f_2174_);
lean_inc(v_oleanFileName_x3f_2173_);
lean_inc(v_setupFileName_x3f_2172_);
lean_inc(v_rootDir_x3f_2171_);
lean_inc(v_opts_2168_);
lean_inc(v_forwardedArgs_2161_);
lean_inc(v_leanOpts_2160_);
lean_dec(v_opts_1115_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2192_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_leanOpts_2160_);
lean_ctor_set(v_reuseFailAlloc_2191_, 1, v_forwardedArgs_2161_);
lean_ctor_set(v_reuseFailAlloc_2191_, 2, v_opts_2168_);
lean_ctor_set(v_reuseFailAlloc_2191_, 3, v_rootDir_x3f_2171_);
lean_ctor_set(v_reuseFailAlloc_2191_, 4, v_setupFileName_x3f_2172_);
lean_ctor_set(v_reuseFailAlloc_2191_, 5, v_oleanFileName_x3f_2173_);
lean_ctor_set(v_reuseFailAlloc_2191_, 6, v_ileanFileName_x3f_2174_);
lean_ctor_set(v_reuseFailAlloc_2191_, 7, v_cFileName_x3f_2175_);
lean_ctor_set(v_reuseFailAlloc_2191_, 8, v_bcFileName_x3f_2176_);
lean_ctor_set(v_reuseFailAlloc_2191_, 9, v_zigFileName_x3f_2177_);
lean_ctor_set(v_reuseFailAlloc_2191_, 10, v_errorOnKinds_2179_);
lean_ctor_set(v_reuseFailAlloc_2191_, 11, v_incrSaveFileName_x3f_2182_);
lean_ctor_set(v_reuseFailAlloc_2191_, 12, v_incrLoadFileName_x3f_2183_);
lean_ctor_set(v_reuseFailAlloc_2191_, 13, v_incrHeaderSaveFileName_x3f_2184_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 8, v_component_2162_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 9, v_printPrefix_2163_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 10, v_printLibDir_2164_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 11, v_useStdin_2165_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 12, v_onlyDeps_2166_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 14, v_depsJson_2167_);
lean_ctor_set_uint32(v_reuseFailAlloc_2191_, sizeof(void*)*14, v_trustLevel_2169_);
lean_ctor_set_uint32(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 4, v_numThreads_2170_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 15, v_jsonOutput_2178_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 16, v_printStats_2180_);
lean_ctor_set_uint8(v_reuseFailAlloc_2191_, sizeof(void*)*14 + 17, v_run_2181_);
v___x_2189_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
lean_object* v___x_2190_; 
lean_ctor_set_uint8(v___x_2189_, sizeof(void*)*14 + 13, v___x_1386_);
v___x_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2189_);
return v___x_2190_;
}
}
}
}
else
{
lean_object* v_leanOpts_2193_; lean_object* v_forwardedArgs_2194_; uint8_t v_component_2195_; uint8_t v_printPrefix_2196_; uint8_t v_printLibDir_2197_; uint8_t v_useStdin_2198_; uint8_t v_onlySrcDeps_2199_; uint8_t v_depsJson_2200_; lean_object* v_opts_2201_; uint32_t v_trustLevel_2202_; uint32_t v_numThreads_2203_; lean_object* v_rootDir_x3f_2204_; lean_object* v_setupFileName_x3f_2205_; lean_object* v_oleanFileName_x3f_2206_; lean_object* v_ileanFileName_x3f_2207_; lean_object* v_cFileName_x3f_2208_; lean_object* v_bcFileName_x3f_2209_; lean_object* v_zigFileName_x3f_2210_; uint8_t v_jsonOutput_2211_; lean_object* v_errorOnKinds_2212_; uint8_t v_printStats_2213_; uint8_t v_run_2214_; lean_object* v_incrSaveFileName_x3f_2215_; lean_object* v_incrLoadFileName_x3f_2216_; lean_object* v_incrHeaderSaveFileName_x3f_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2225_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2193_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2194_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2195_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2196_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2197_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2198_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2199_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2200_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2201_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2202_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2203_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2204_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2205_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2206_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2207_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2208_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2209_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2210_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2211_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2212_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2213_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2214_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2215_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2216_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2217_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2225_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2219_ = v_opts_1115_;
v_isShared_2220_ = v_isSharedCheck_2225_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2217_);
lean_inc(v_incrLoadFileName_x3f_2216_);
lean_inc(v_incrSaveFileName_x3f_2215_);
lean_inc(v_errorOnKinds_2212_);
lean_inc(v_zigFileName_x3f_2210_);
lean_inc(v_bcFileName_x3f_2209_);
lean_inc(v_cFileName_x3f_2208_);
lean_inc(v_ileanFileName_x3f_2207_);
lean_inc(v_oleanFileName_x3f_2206_);
lean_inc(v_setupFileName_x3f_2205_);
lean_inc(v_rootDir_x3f_2204_);
lean_inc(v_opts_2201_);
lean_inc(v_forwardedArgs_2194_);
lean_inc(v_leanOpts_2193_);
lean_dec(v_opts_1115_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2225_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_leanOpts_2193_);
lean_ctor_set(v_reuseFailAlloc_2224_, 1, v_forwardedArgs_2194_);
lean_ctor_set(v_reuseFailAlloc_2224_, 2, v_opts_2201_);
lean_ctor_set(v_reuseFailAlloc_2224_, 3, v_rootDir_x3f_2204_);
lean_ctor_set(v_reuseFailAlloc_2224_, 4, v_setupFileName_x3f_2205_);
lean_ctor_set(v_reuseFailAlloc_2224_, 5, v_oleanFileName_x3f_2206_);
lean_ctor_set(v_reuseFailAlloc_2224_, 6, v_ileanFileName_x3f_2207_);
lean_ctor_set(v_reuseFailAlloc_2224_, 7, v_cFileName_x3f_2208_);
lean_ctor_set(v_reuseFailAlloc_2224_, 8, v_bcFileName_x3f_2209_);
lean_ctor_set(v_reuseFailAlloc_2224_, 9, v_zigFileName_x3f_2210_);
lean_ctor_set(v_reuseFailAlloc_2224_, 10, v_errorOnKinds_2212_);
lean_ctor_set(v_reuseFailAlloc_2224_, 11, v_incrSaveFileName_x3f_2215_);
lean_ctor_set(v_reuseFailAlloc_2224_, 12, v_incrLoadFileName_x3f_2216_);
lean_ctor_set(v_reuseFailAlloc_2224_, 13, v_incrHeaderSaveFileName_x3f_2217_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 8, v_component_2195_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 9, v_printPrefix_2196_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 10, v_printLibDir_2197_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 11, v_useStdin_2198_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 13, v_onlySrcDeps_2199_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 14, v_depsJson_2200_);
lean_ctor_set_uint32(v_reuseFailAlloc_2224_, sizeof(void*)*14, v_trustLevel_2202_);
lean_ctor_set_uint32(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 4, v_numThreads_2203_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 15, v_jsonOutput_2211_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 16, v_printStats_2213_);
lean_ctor_set_uint8(v_reuseFailAlloc_2224_, sizeof(void*)*14 + 17, v_run_2214_);
v___x_2222_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2223_; 
lean_ctor_set_uint8(v___x_2222_, sizeof(void*)*14 + 12, v___x_1384_);
v___x_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
return v___x_2223_;
}
}
}
}
else
{
lean_object* v_leanOpts_2226_; lean_object* v_forwardedArgs_2227_; uint8_t v_component_2228_; uint8_t v_printPrefix_2229_; uint8_t v_printLibDir_2230_; uint8_t v_useStdin_2231_; uint8_t v_onlyDeps_2232_; uint8_t v_onlySrcDeps_2233_; uint8_t v_depsJson_2234_; lean_object* v_opts_2235_; uint32_t v_trustLevel_2236_; uint32_t v_numThreads_2237_; lean_object* v_rootDir_x3f_2238_; lean_object* v_setupFileName_x3f_2239_; lean_object* v_oleanFileName_x3f_2240_; lean_object* v_ileanFileName_x3f_2241_; lean_object* v_cFileName_x3f_2242_; lean_object* v_bcFileName_x3f_2243_; lean_object* v_zigFileName_x3f_2244_; uint8_t v_jsonOutput_2245_; lean_object* v_errorOnKinds_2246_; uint8_t v_printStats_2247_; uint8_t v_run_2248_; lean_object* v_incrSaveFileName_x3f_2249_; lean_object* v_incrLoadFileName_x3f_2250_; lean_object* v_incrHeaderSaveFileName_x3f_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2261_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2226_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2227_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2228_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2229_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2230_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2231_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2232_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2233_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2234_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2235_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2236_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2237_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2238_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2239_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2240_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2241_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2242_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2243_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2244_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2245_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2246_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2247_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2248_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2249_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2250_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2251_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2253_ = v_opts_1115_;
v_isShared_2254_ = v_isSharedCheck_2261_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2251_);
lean_inc(v_incrLoadFileName_x3f_2250_);
lean_inc(v_incrSaveFileName_x3f_2249_);
lean_inc(v_errorOnKinds_2246_);
lean_inc(v_zigFileName_x3f_2244_);
lean_inc(v_bcFileName_x3f_2243_);
lean_inc(v_cFileName_x3f_2242_);
lean_inc(v_ileanFileName_x3f_2241_);
lean_inc(v_oleanFileName_x3f_2240_);
lean_inc(v_setupFileName_x3f_2239_);
lean_inc(v_rootDir_x3f_2238_);
lean_inc(v_opts_2235_);
lean_inc(v_forwardedArgs_2227_);
lean_inc(v_leanOpts_2226_);
lean_dec(v_opts_1115_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2261_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2258_; 
v___x_2255_ = l___private_Lean_Shell_0__Lean_verbose;
v___x_2256_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2226_, v___x_2255_, v___x_1380_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 0, v___x_2256_);
v___x_2258_ = v___x_2253_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2256_);
lean_ctor_set(v_reuseFailAlloc_2260_, 1, v_forwardedArgs_2227_);
lean_ctor_set(v_reuseFailAlloc_2260_, 2, v_opts_2235_);
lean_ctor_set(v_reuseFailAlloc_2260_, 3, v_rootDir_x3f_2238_);
lean_ctor_set(v_reuseFailAlloc_2260_, 4, v_setupFileName_x3f_2239_);
lean_ctor_set(v_reuseFailAlloc_2260_, 5, v_oleanFileName_x3f_2240_);
lean_ctor_set(v_reuseFailAlloc_2260_, 6, v_ileanFileName_x3f_2241_);
lean_ctor_set(v_reuseFailAlloc_2260_, 7, v_cFileName_x3f_2242_);
lean_ctor_set(v_reuseFailAlloc_2260_, 8, v_bcFileName_x3f_2243_);
lean_ctor_set(v_reuseFailAlloc_2260_, 9, v_zigFileName_x3f_2244_);
lean_ctor_set(v_reuseFailAlloc_2260_, 10, v_errorOnKinds_2246_);
lean_ctor_set(v_reuseFailAlloc_2260_, 11, v_incrSaveFileName_x3f_2249_);
lean_ctor_set(v_reuseFailAlloc_2260_, 12, v_incrLoadFileName_x3f_2250_);
lean_ctor_set(v_reuseFailAlloc_2260_, 13, v_incrHeaderSaveFileName_x3f_2251_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 8, v_component_2228_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 9, v_printPrefix_2229_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 10, v_printLibDir_2230_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 11, v_useStdin_2231_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 12, v_onlyDeps_2232_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 13, v_onlySrcDeps_2233_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 14, v_depsJson_2234_);
lean_ctor_set_uint32(v_reuseFailAlloc_2260_, sizeof(void*)*14, v_trustLevel_2236_);
lean_ctor_set_uint32(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 4, v_numThreads_2237_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 15, v_jsonOutput_2245_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 16, v_printStats_2247_);
lean_ctor_set_uint8(v_reuseFailAlloc_2260_, sizeof(void*)*14 + 17, v_run_2248_);
v___x_2258_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
return v___x_2259_;
}
}
}
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2262_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13));
v___x_2263_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2262_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2318_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2266_ = v___x_2263_;
v_isShared_2267_ = v_isSharedCheck_2318_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2263_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2318_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = lean_string_utf8_byte_size(v_a_2264_);
lean_inc(v_a_2264_);
v___x_2270_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2270_, 0, v_a_2264_);
lean_ctor_set(v___x_2270_, 1, v___x_2268_);
lean_ctor_set(v___x_2270_, 2, v___x_2269_);
v___x_2271_ = l_String_Slice_toNat_x3f(v___x_2270_);
lean_dec_ref_known(v___x_2270_, 3);
if (lean_obj_tag(v___x_2271_) == 1)
{
lean_object* v_val_2272_; lean_object* v___x_2273_; uint8_t v___x_2274_; 
v_val_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_val_2272_);
lean_dec_ref_known(v___x_2271_, 1);
v___x_2273_ = lean_cstr_to_nat("4294967296");
v___x_2274_ = lean_nat_dec_lt(v_val_2272_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; 
lean_dec(v_val_2272_);
lean_del_object(v___x_2266_);
lean_dec(v_a_2264_);
lean_dec_ref(v_opts_1115_);
v___x_2275_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14));
v___x_2276_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2275_);
lean_dec_ref(v___x_2276_);
goto v___jp_1280_;
}
else
{
lean_object* v_leanOpts_2277_; lean_object* v_forwardedArgs_2278_; uint8_t v_component_2279_; uint8_t v_printPrefix_2280_; uint8_t v_printLibDir_2281_; uint8_t v_useStdin_2282_; uint8_t v_onlyDeps_2283_; uint8_t v_onlySrcDeps_2284_; uint8_t v_depsJson_2285_; lean_object* v_opts_2286_; uint32_t v_numThreads_2287_; lean_object* v_rootDir_x3f_2288_; lean_object* v_setupFileName_x3f_2289_; lean_object* v_oleanFileName_x3f_2290_; lean_object* v_ileanFileName_x3f_2291_; lean_object* v_cFileName_x3f_2292_; lean_object* v_bcFileName_x3f_2293_; lean_object* v_zigFileName_x3f_2294_; uint8_t v_jsonOutput_2295_; lean_object* v_errorOnKinds_2296_; uint8_t v_printStats_2297_; uint8_t v_run_2298_; lean_object* v_incrSaveFileName_x3f_2299_; lean_object* v_incrLoadFileName_x3f_2300_; lean_object* v_incrHeaderSaveFileName_x3f_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2315_; 
v_leanOpts_2277_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2278_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2279_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2280_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2281_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2282_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2283_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2284_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2285_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2286_ = lean_ctor_get(v_opts_1115_, 2);
v_numThreads_2287_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2288_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2289_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2290_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2291_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2292_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2293_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2294_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2295_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2296_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2297_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2298_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2299_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2300_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2301_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2315_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2303_ = v_opts_1115_;
v_isShared_2304_ = v_isSharedCheck_2315_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2301_);
lean_inc(v_incrLoadFileName_x3f_2300_);
lean_inc(v_incrSaveFileName_x3f_2299_);
lean_inc(v_errorOnKinds_2296_);
lean_inc(v_zigFileName_x3f_2294_);
lean_inc(v_bcFileName_x3f_2293_);
lean_inc(v_cFileName_x3f_2292_);
lean_inc(v_ileanFileName_x3f_2291_);
lean_inc(v_oleanFileName_x3f_2290_);
lean_inc(v_setupFileName_x3f_2289_);
lean_inc(v_rootDir_x3f_2288_);
lean_inc(v_opts_2286_);
lean_inc(v_forwardedArgs_2278_);
lean_inc(v_leanOpts_2277_);
lean_dec(v_opts_1115_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2315_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
uint32_t v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2310_; 
v___x_2305_ = lean_uint32_of_nat(v_val_2272_);
lean_dec(v_val_2272_);
v___x_2306_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15));
v___x_2307_ = lean_string_append(v___x_2306_, v_a_2264_);
lean_dec(v_a_2264_);
v___x_2308_ = lean_array_push(v_forwardedArgs_2278_, v___x_2307_);
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 1, v___x_2308_);
v___x_2310_ = v___x_2303_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_leanOpts_2277_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v___x_2308_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_opts_2286_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_rootDir_x3f_2288_);
lean_ctor_set(v_reuseFailAlloc_2314_, 4, v_setupFileName_x3f_2289_);
lean_ctor_set(v_reuseFailAlloc_2314_, 5, v_oleanFileName_x3f_2290_);
lean_ctor_set(v_reuseFailAlloc_2314_, 6, v_ileanFileName_x3f_2291_);
lean_ctor_set(v_reuseFailAlloc_2314_, 7, v_cFileName_x3f_2292_);
lean_ctor_set(v_reuseFailAlloc_2314_, 8, v_bcFileName_x3f_2293_);
lean_ctor_set(v_reuseFailAlloc_2314_, 9, v_zigFileName_x3f_2294_);
lean_ctor_set(v_reuseFailAlloc_2314_, 10, v_errorOnKinds_2296_);
lean_ctor_set(v_reuseFailAlloc_2314_, 11, v_incrSaveFileName_x3f_2299_);
lean_ctor_set(v_reuseFailAlloc_2314_, 12, v_incrLoadFileName_x3f_2300_);
lean_ctor_set(v_reuseFailAlloc_2314_, 13, v_incrHeaderSaveFileName_x3f_2301_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 8, v_component_2279_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 9, v_printPrefix_2280_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 10, v_printLibDir_2281_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 11, v_useStdin_2282_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 12, v_onlyDeps_2283_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 13, v_onlySrcDeps_2284_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 14, v_depsJson_2285_);
lean_ctor_set_uint32(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 4, v_numThreads_2287_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 15, v_jsonOutput_2295_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 16, v_printStats_2297_);
lean_ctor_set_uint8(v_reuseFailAlloc_2314_, sizeof(void*)*14 + 17, v_run_2298_);
v___x_2310_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2312_; 
lean_ctor_set_uint32(v___x_2310_, sizeof(void*)*14, v___x_2305_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 0, v___x_2310_);
v___x_2312_ = v___x_2266_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
}
else
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
lean_dec(v___x_2271_);
lean_del_object(v___x_2266_);
lean_dec(v_a_2264_);
lean_dec_ref(v_opts_1115_);
v___x_2316_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16));
v___x_2317_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2316_);
lean_dec_ref(v___x_2317_);
goto v___jp_1283_;
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_dec_ref(v_opts_1115_);
v_a_2319_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2319_);
lean_dec_ref_known(v___x_2263_, 1);
v___x_2323_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2324_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2323_);
lean_dec_ref(v___x_2324_);
goto v___jp_2320_;
v___jp_2320_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = lean_io_error_to_string(v_a_2319_);
v___x_2322_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2321_);
lean_dec_ref(v___x_2322_);
goto v___jp_1289_;
}
}
}
}
else
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17));
v___x_2326_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2325_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2379_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2329_ = v___x_2326_;
v_isShared_2330_ = v_isSharedCheck_2379_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2326_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2379_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2331_ = lean_unsigned_to_nat(0u);
v___x_2332_ = lean_string_utf8_byte_size(v_a_2327_);
lean_inc(v_a_2327_);
v___x_2333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2333_, 0, v_a_2327_);
lean_ctor_set(v___x_2333_, 1, v___x_2331_);
lean_ctor_set(v___x_2333_, 2, v___x_2332_);
v___x_2334_ = l_String_Slice_toNat_x3f(v___x_2333_);
lean_dec_ref_known(v___x_2333_, 3);
if (lean_obj_tag(v___x_2334_) == 1)
{
lean_object* v_val_2335_; lean_object* v_leanOpts_2336_; lean_object* v_forwardedArgs_2337_; uint8_t v_component_2338_; uint8_t v_printPrefix_2339_; uint8_t v_printLibDir_2340_; uint8_t v_useStdin_2341_; uint8_t v_onlyDeps_2342_; uint8_t v_onlySrcDeps_2343_; uint8_t v_depsJson_2344_; lean_object* v_opts_2345_; uint32_t v_trustLevel_2346_; uint32_t v_numThreads_2347_; lean_object* v_rootDir_x3f_2348_; lean_object* v_setupFileName_x3f_2349_; lean_object* v_oleanFileName_x3f_2350_; lean_object* v_ileanFileName_x3f_2351_; lean_object* v_cFileName_x3f_2352_; lean_object* v_bcFileName_x3f_2353_; lean_object* v_zigFileName_x3f_2354_; uint8_t v_jsonOutput_2355_; lean_object* v_errorOnKinds_2356_; uint8_t v_printStats_2357_; uint8_t v_run_2358_; lean_object* v_incrSaveFileName_x3f_2359_; lean_object* v_incrLoadFileName_x3f_2360_; lean_object* v_incrHeaderSaveFileName_x3f_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2376_; 
v_val_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_val_2335_);
lean_dec_ref_known(v___x_2334_, 1);
v_leanOpts_2336_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2337_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2338_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2339_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2340_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2341_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2342_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2343_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2344_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2345_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2346_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2347_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2348_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2349_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2350_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2351_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2352_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2353_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2354_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2355_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2356_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2357_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2358_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2359_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2360_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2361_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2363_ = v_opts_1115_;
v_isShared_2364_ = v_isSharedCheck_2376_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2361_);
lean_inc(v_incrLoadFileName_x3f_2360_);
lean_inc(v_incrSaveFileName_x3f_2359_);
lean_inc(v_errorOnKinds_2356_);
lean_inc(v_zigFileName_x3f_2354_);
lean_inc(v_bcFileName_x3f_2353_);
lean_inc(v_cFileName_x3f_2352_);
lean_inc(v_ileanFileName_x3f_2351_);
lean_inc(v_oleanFileName_x3f_2350_);
lean_inc(v_setupFileName_x3f_2349_);
lean_inc(v_rootDir_x3f_2348_);
lean_inc(v_opts_2345_);
lean_inc(v_forwardedArgs_2337_);
lean_inc(v_leanOpts_2336_);
lean_dec(v_opts_1115_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2376_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2371_; 
v___x_2365_ = l___private_Lean_Shell_0__Lean_timeout;
v___x_2366_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2336_, v___x_2365_, v_val_2335_);
v___x_2367_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18));
v___x_2368_ = lean_string_append(v___x_2367_, v_a_2327_);
lean_dec(v_a_2327_);
v___x_2369_ = lean_array_push(v_forwardedArgs_2337_, v___x_2368_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 1, v___x_2369_);
lean_ctor_set(v___x_2363_, 0, v___x_2366_);
v___x_2371_ = v___x_2363_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2366_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2375_, 2, v_opts_2345_);
lean_ctor_set(v_reuseFailAlloc_2375_, 3, v_rootDir_x3f_2348_);
lean_ctor_set(v_reuseFailAlloc_2375_, 4, v_setupFileName_x3f_2349_);
lean_ctor_set(v_reuseFailAlloc_2375_, 5, v_oleanFileName_x3f_2350_);
lean_ctor_set(v_reuseFailAlloc_2375_, 6, v_ileanFileName_x3f_2351_);
lean_ctor_set(v_reuseFailAlloc_2375_, 7, v_cFileName_x3f_2352_);
lean_ctor_set(v_reuseFailAlloc_2375_, 8, v_bcFileName_x3f_2353_);
lean_ctor_set(v_reuseFailAlloc_2375_, 9, v_zigFileName_x3f_2354_);
lean_ctor_set(v_reuseFailAlloc_2375_, 10, v_errorOnKinds_2356_);
lean_ctor_set(v_reuseFailAlloc_2375_, 11, v_incrSaveFileName_x3f_2359_);
lean_ctor_set(v_reuseFailAlloc_2375_, 12, v_incrLoadFileName_x3f_2360_);
lean_ctor_set(v_reuseFailAlloc_2375_, 13, v_incrHeaderSaveFileName_x3f_2361_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 8, v_component_2338_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 9, v_printPrefix_2339_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 10, v_printLibDir_2340_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 11, v_useStdin_2341_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 12, v_onlyDeps_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 13, v_onlySrcDeps_2343_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 14, v_depsJson_2344_);
lean_ctor_set_uint32(v_reuseFailAlloc_2375_, sizeof(void*)*14, v_trustLevel_2346_);
lean_ctor_set_uint32(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 4, v_numThreads_2347_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 15, v_jsonOutput_2355_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 16, v_printStats_2357_);
lean_ctor_set_uint8(v_reuseFailAlloc_2375_, sizeof(void*)*14 + 17, v_run_2358_);
v___x_2371_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
lean_object* v___x_2373_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 0, v___x_2371_);
v___x_2373_ = v___x_2329_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v___x_2377_; lean_object* v___x_2378_; 
lean_dec(v___x_2334_);
lean_del_object(v___x_2329_);
lean_dec(v_a_2327_);
lean_dec_ref(v_opts_1115_);
v___x_2377_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19));
v___x_2378_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2377_);
lean_dec_ref(v___x_2378_);
goto v___jp_1173_;
}
}
}
else
{
lean_object* v_a_2380_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
lean_dec_ref(v_opts_1115_);
v_a_2380_ = lean_ctor_get(v___x_2326_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2326_, 1);
v___x_2384_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2385_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2384_);
lean_dec_ref(v___x_2385_);
goto v___jp_2381_;
v___jp_2381_:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2382_ = lean_io_error_to_string(v_a_2380_);
v___x_2383_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2382_);
lean_dec_ref(v___x_2383_);
goto v___jp_1170_;
}
}
}
}
else
{
lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2386_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20));
v___x_2387_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2386_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2387_) == 0)
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2440_; 
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2390_ = v___x_2387_;
v_isShared_2391_ = v_isSharedCheck_2440_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2387_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2440_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2392_ = lean_unsigned_to_nat(0u);
v___x_2393_ = lean_string_utf8_byte_size(v_a_2388_);
lean_inc(v_a_2388_);
v___x_2394_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2394_, 0, v_a_2388_);
lean_ctor_set(v___x_2394_, 1, v___x_2392_);
lean_ctor_set(v___x_2394_, 2, v___x_2393_);
v___x_2395_ = l_String_Slice_toNat_x3f(v___x_2394_);
lean_dec_ref_known(v___x_2394_, 3);
if (lean_obj_tag(v___x_2395_) == 1)
{
lean_object* v_val_2396_; lean_object* v_leanOpts_2397_; lean_object* v_forwardedArgs_2398_; uint8_t v_component_2399_; uint8_t v_printPrefix_2400_; uint8_t v_printLibDir_2401_; uint8_t v_useStdin_2402_; uint8_t v_onlyDeps_2403_; uint8_t v_onlySrcDeps_2404_; uint8_t v_depsJson_2405_; lean_object* v_opts_2406_; uint32_t v_trustLevel_2407_; uint32_t v_numThreads_2408_; lean_object* v_rootDir_x3f_2409_; lean_object* v_setupFileName_x3f_2410_; lean_object* v_oleanFileName_x3f_2411_; lean_object* v_ileanFileName_x3f_2412_; lean_object* v_cFileName_x3f_2413_; lean_object* v_bcFileName_x3f_2414_; lean_object* v_zigFileName_x3f_2415_; uint8_t v_jsonOutput_2416_; lean_object* v_errorOnKinds_2417_; uint8_t v_printStats_2418_; uint8_t v_run_2419_; lean_object* v_incrSaveFileName_x3f_2420_; lean_object* v_incrLoadFileName_x3f_2421_; lean_object* v_incrHeaderSaveFileName_x3f_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2437_; 
v_val_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_val_2396_);
lean_dec_ref_known(v___x_2395_, 1);
v_leanOpts_2397_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2398_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2399_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2400_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2401_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2402_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2403_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2404_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2405_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2406_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2407_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2408_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2409_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2410_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2411_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2412_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2413_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2414_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2415_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2416_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2417_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2418_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2419_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2420_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2421_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2422_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2424_ = v_opts_1115_;
v_isShared_2425_ = v_isSharedCheck_2437_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2422_);
lean_inc(v_incrLoadFileName_x3f_2421_);
lean_inc(v_incrSaveFileName_x3f_2420_);
lean_inc(v_errorOnKinds_2417_);
lean_inc(v_zigFileName_x3f_2415_);
lean_inc(v_bcFileName_x3f_2414_);
lean_inc(v_cFileName_x3f_2413_);
lean_inc(v_ileanFileName_x3f_2412_);
lean_inc(v_oleanFileName_x3f_2411_);
lean_inc(v_setupFileName_x3f_2410_);
lean_inc(v_rootDir_x3f_2409_);
lean_inc(v_opts_2406_);
lean_inc(v_forwardedArgs_2398_);
lean_inc(v_leanOpts_2397_);
lean_dec(v_opts_1115_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2437_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2426_ = l___private_Lean_Shell_0__Lean_maxMemory;
v___x_2427_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2397_, v___x_2426_, v_val_2396_);
v___x_2428_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21));
v___x_2429_ = lean_string_append(v___x_2428_, v_a_2388_);
lean_dec(v_a_2388_);
v___x_2430_ = lean_array_push(v_forwardedArgs_2398_, v___x_2429_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 1, v___x_2430_);
lean_ctor_set(v___x_2424_, 0, v___x_2427_);
v___x_2432_ = v___x_2424_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2427_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v___x_2430_);
lean_ctor_set(v_reuseFailAlloc_2436_, 2, v_opts_2406_);
lean_ctor_set(v_reuseFailAlloc_2436_, 3, v_rootDir_x3f_2409_);
lean_ctor_set(v_reuseFailAlloc_2436_, 4, v_setupFileName_x3f_2410_);
lean_ctor_set(v_reuseFailAlloc_2436_, 5, v_oleanFileName_x3f_2411_);
lean_ctor_set(v_reuseFailAlloc_2436_, 6, v_ileanFileName_x3f_2412_);
lean_ctor_set(v_reuseFailAlloc_2436_, 7, v_cFileName_x3f_2413_);
lean_ctor_set(v_reuseFailAlloc_2436_, 8, v_bcFileName_x3f_2414_);
lean_ctor_set(v_reuseFailAlloc_2436_, 9, v_zigFileName_x3f_2415_);
lean_ctor_set(v_reuseFailAlloc_2436_, 10, v_errorOnKinds_2417_);
lean_ctor_set(v_reuseFailAlloc_2436_, 11, v_incrSaveFileName_x3f_2420_);
lean_ctor_set(v_reuseFailAlloc_2436_, 12, v_incrLoadFileName_x3f_2421_);
lean_ctor_set(v_reuseFailAlloc_2436_, 13, v_incrHeaderSaveFileName_x3f_2422_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 8, v_component_2399_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 9, v_printPrefix_2400_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 10, v_printLibDir_2401_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 11, v_useStdin_2402_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 12, v_onlyDeps_2403_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 13, v_onlySrcDeps_2404_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 14, v_depsJson_2405_);
lean_ctor_set_uint32(v_reuseFailAlloc_2436_, sizeof(void*)*14, v_trustLevel_2407_);
lean_ctor_set_uint32(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 4, v_numThreads_2408_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 15, v_jsonOutput_2416_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 16, v_printStats_2418_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*14 + 17, v_run_2419_);
v___x_2432_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2434_; 
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 0, v___x_2432_);
v___x_2434_ = v___x_2390_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2432_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
else
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
lean_dec(v___x_2395_);
lean_del_object(v___x_2390_);
lean_dec(v_a_2388_);
lean_dec_ref(v_opts_1115_);
v___x_2438_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22));
v___x_2439_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2438_);
lean_dec_ref(v___x_2439_);
goto v___jp_1292_;
}
}
}
else
{
lean_object* v_a_2441_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
lean_dec_ref(v_opts_1115_);
v_a_2441_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2441_);
lean_dec_ref_known(v___x_2387_, 1);
v___x_2445_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2446_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2445_);
lean_dec_ref(v___x_2446_);
goto v___jp_2442_;
v___jp_2442_:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___x_2443_ = lean_io_error_to_string(v_a_2441_);
v___x_2444_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2443_);
lean_dec_ref(v___x_2444_);
goto v___jp_1298_;
}
}
}
}
else
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23));
v___x_2448_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2447_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2493_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2493_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2493_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v_leanOpts_2453_; lean_object* v_forwardedArgs_2454_; uint8_t v_component_2455_; uint8_t v_printPrefix_2456_; uint8_t v_printLibDir_2457_; uint8_t v_useStdin_2458_; uint8_t v_onlyDeps_2459_; uint8_t v_onlySrcDeps_2460_; uint8_t v_depsJson_2461_; lean_object* v_opts_2462_; uint32_t v_trustLevel_2463_; uint32_t v_numThreads_2464_; lean_object* v_setupFileName_x3f_2465_; lean_object* v_oleanFileName_x3f_2466_; lean_object* v_ileanFileName_x3f_2467_; lean_object* v_cFileName_x3f_2468_; lean_object* v_bcFileName_x3f_2469_; lean_object* v_zigFileName_x3f_2470_; uint8_t v_jsonOutput_2471_; lean_object* v_errorOnKinds_2472_; uint8_t v_printStats_2473_; uint8_t v_run_2474_; lean_object* v_incrSaveFileName_x3f_2475_; lean_object* v_incrLoadFileName_x3f_2476_; lean_object* v_incrHeaderSaveFileName_x3f_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2491_; 
v_leanOpts_2453_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2454_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2455_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2456_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2457_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2458_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2459_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2460_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2461_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2462_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2463_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2464_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_setupFileName_x3f_2465_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2466_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2467_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2468_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2469_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2470_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2471_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2472_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2473_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2474_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2475_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2476_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2477_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2491_ == 0)
{
lean_object* v_unused_2492_; 
v_unused_2492_ = lean_ctor_get(v_opts_1115_, 3);
lean_dec(v_unused_2492_);
v___x_2479_ = v_opts_1115_;
v_isShared_2480_ = v_isSharedCheck_2491_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2477_);
lean_inc(v_incrLoadFileName_x3f_2476_);
lean_inc(v_incrSaveFileName_x3f_2475_);
lean_inc(v_errorOnKinds_2472_);
lean_inc(v_zigFileName_x3f_2470_);
lean_inc(v_bcFileName_x3f_2469_);
lean_inc(v_cFileName_x3f_2468_);
lean_inc(v_ileanFileName_x3f_2467_);
lean_inc(v_oleanFileName_x3f_2466_);
lean_inc(v_setupFileName_x3f_2465_);
lean_inc(v_opts_2462_);
lean_inc(v_forwardedArgs_2454_);
lean_inc(v_leanOpts_2453_);
lean_dec(v_opts_1115_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2491_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
v___x_2481_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24));
v___x_2482_ = lean_string_append(v___x_2481_, v_a_2449_);
v___x_2483_ = lean_array_push(v_forwardedArgs_2454_, v___x_2482_);
v___x_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2484_, 0, v_a_2449_);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 3, v___x_2484_);
lean_ctor_set(v___x_2479_, 1, v___x_2483_);
v___x_2486_ = v___x_2479_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_leanOpts_2453_);
lean_ctor_set(v_reuseFailAlloc_2490_, 1, v___x_2483_);
lean_ctor_set(v_reuseFailAlloc_2490_, 2, v_opts_2462_);
lean_ctor_set(v_reuseFailAlloc_2490_, 3, v___x_2484_);
lean_ctor_set(v_reuseFailAlloc_2490_, 4, v_setupFileName_x3f_2465_);
lean_ctor_set(v_reuseFailAlloc_2490_, 5, v_oleanFileName_x3f_2466_);
lean_ctor_set(v_reuseFailAlloc_2490_, 6, v_ileanFileName_x3f_2467_);
lean_ctor_set(v_reuseFailAlloc_2490_, 7, v_cFileName_x3f_2468_);
lean_ctor_set(v_reuseFailAlloc_2490_, 8, v_bcFileName_x3f_2469_);
lean_ctor_set(v_reuseFailAlloc_2490_, 9, v_zigFileName_x3f_2470_);
lean_ctor_set(v_reuseFailAlloc_2490_, 10, v_errorOnKinds_2472_);
lean_ctor_set(v_reuseFailAlloc_2490_, 11, v_incrSaveFileName_x3f_2475_);
lean_ctor_set(v_reuseFailAlloc_2490_, 12, v_incrLoadFileName_x3f_2476_);
lean_ctor_set(v_reuseFailAlloc_2490_, 13, v_incrHeaderSaveFileName_x3f_2477_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 8, v_component_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 9, v_printPrefix_2456_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 10, v_printLibDir_2457_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 11, v_useStdin_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 12, v_onlyDeps_2459_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 13, v_onlySrcDeps_2460_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 14, v_depsJson_2461_);
lean_ctor_set_uint32(v_reuseFailAlloc_2490_, sizeof(void*)*14, v_trustLevel_2463_);
lean_ctor_set_uint32(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 4, v_numThreads_2464_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 15, v_jsonOutput_2471_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 16, v_printStats_2473_);
lean_ctor_set_uint8(v_reuseFailAlloc_2490_, sizeof(void*)*14 + 17, v_run_2474_);
v___x_2486_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2488_; 
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2486_);
v___x_2488_ = v___x_2451_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v___x_2486_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
lean_dec_ref(v_opts_1115_);
v_a_2494_ = lean_ctor_get(v___x_2448_, 0);
lean_inc(v_a_2494_);
lean_dec_ref_known(v___x_2448_, 1);
v___x_2498_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2499_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2498_);
lean_dec_ref(v___x_2499_);
goto v___jp_2495_;
v___jp_2495_:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = lean_io_error_to_string(v_a_2494_);
v___x_2497_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2496_);
lean_dec_ref(v___x_2497_);
goto v___jp_1164_;
}
}
}
}
else
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25));
v___x_2501_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2500_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2543_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2504_ = v___x_2501_;
v_isShared_2505_ = v_isSharedCheck_2543_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2501_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2543_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v_leanOpts_2506_; lean_object* v_forwardedArgs_2507_; uint8_t v_component_2508_; uint8_t v_printPrefix_2509_; uint8_t v_printLibDir_2510_; uint8_t v_useStdin_2511_; uint8_t v_onlyDeps_2512_; uint8_t v_onlySrcDeps_2513_; uint8_t v_depsJson_2514_; lean_object* v_opts_2515_; uint32_t v_trustLevel_2516_; uint32_t v_numThreads_2517_; lean_object* v_rootDir_x3f_2518_; lean_object* v_setupFileName_x3f_2519_; lean_object* v_oleanFileName_x3f_2520_; lean_object* v_cFileName_x3f_2521_; lean_object* v_bcFileName_x3f_2522_; lean_object* v_zigFileName_x3f_2523_; uint8_t v_jsonOutput_2524_; lean_object* v_errorOnKinds_2525_; uint8_t v_printStats_2526_; uint8_t v_run_2527_; lean_object* v_incrSaveFileName_x3f_2528_; lean_object* v_incrLoadFileName_x3f_2529_; lean_object* v_incrHeaderSaveFileName_x3f_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2541_; 
v_leanOpts_2506_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2507_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2508_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2509_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2510_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2511_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2512_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2513_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2514_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2515_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2516_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2517_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2518_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2519_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2520_ = lean_ctor_get(v_opts_1115_, 5);
v_cFileName_x3f_2521_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2522_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2523_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2524_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2525_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2526_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2527_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2528_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2529_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2530_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2541_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2541_ == 0)
{
lean_object* v_unused_2542_; 
v_unused_2542_ = lean_ctor_get(v_opts_1115_, 6);
lean_dec(v_unused_2542_);
v___x_2532_ = v_opts_1115_;
v_isShared_2533_ = v_isSharedCheck_2541_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2530_);
lean_inc(v_incrLoadFileName_x3f_2529_);
lean_inc(v_incrSaveFileName_x3f_2528_);
lean_inc(v_errorOnKinds_2525_);
lean_inc(v_zigFileName_x3f_2523_);
lean_inc(v_bcFileName_x3f_2522_);
lean_inc(v_cFileName_x3f_2521_);
lean_inc(v_oleanFileName_x3f_2520_);
lean_inc(v_setupFileName_x3f_2519_);
lean_inc(v_rootDir_x3f_2518_);
lean_inc(v_opts_2515_);
lean_inc(v_forwardedArgs_2507_);
lean_inc(v_leanOpts_2506_);
lean_dec(v_opts_1115_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2541_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2534_; lean_object* v___x_2536_; 
v___x_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2534_, 0, v_a_2502_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 6, v___x_2534_);
v___x_2536_ = v___x_2532_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_leanOpts_2506_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v_forwardedArgs_2507_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v_opts_2515_);
lean_ctor_set(v_reuseFailAlloc_2540_, 3, v_rootDir_x3f_2518_);
lean_ctor_set(v_reuseFailAlloc_2540_, 4, v_setupFileName_x3f_2519_);
lean_ctor_set(v_reuseFailAlloc_2540_, 5, v_oleanFileName_x3f_2520_);
lean_ctor_set(v_reuseFailAlloc_2540_, 6, v___x_2534_);
lean_ctor_set(v_reuseFailAlloc_2540_, 7, v_cFileName_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2540_, 8, v_bcFileName_x3f_2522_);
lean_ctor_set(v_reuseFailAlloc_2540_, 9, v_zigFileName_x3f_2523_);
lean_ctor_set(v_reuseFailAlloc_2540_, 10, v_errorOnKinds_2525_);
lean_ctor_set(v_reuseFailAlloc_2540_, 11, v_incrSaveFileName_x3f_2528_);
lean_ctor_set(v_reuseFailAlloc_2540_, 12, v_incrLoadFileName_x3f_2529_);
lean_ctor_set(v_reuseFailAlloc_2540_, 13, v_incrHeaderSaveFileName_x3f_2530_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 8, v_component_2508_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 9, v_printPrefix_2509_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 10, v_printLibDir_2510_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 11, v_useStdin_2511_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 12, v_onlyDeps_2512_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 13, v_onlySrcDeps_2513_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 14, v_depsJson_2514_);
lean_ctor_set_uint32(v_reuseFailAlloc_2540_, sizeof(void*)*14, v_trustLevel_2516_);
lean_ctor_set_uint32(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 4, v_numThreads_2517_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 15, v_jsonOutput_2524_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 16, v_printStats_2526_);
lean_ctor_set_uint8(v_reuseFailAlloc_2540_, sizeof(void*)*14 + 17, v_run_2527_);
v___x_2536_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
lean_object* v___x_2538_; 
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 0, v___x_2536_);
v___x_2538_ = v___x_2504_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
}
else
{
lean_object* v_a_2544_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
lean_dec_ref(v_opts_1115_);
v_a_2544_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2501_, 1);
v___x_2548_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2549_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2548_);
lean_dec_ref(v___x_2549_);
goto v___jp_2545_;
v___jp_2545_:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = lean_io_error_to_string(v_a_2544_);
v___x_2547_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2546_);
lean_dec_ref(v___x_2547_);
goto v___jp_1304_;
}
}
}
}
else
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26));
v___x_2551_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2550_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2593_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2554_ = v___x_2551_;
v_isShared_2555_ = v_isSharedCheck_2593_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2551_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2593_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v_leanOpts_2556_; lean_object* v_forwardedArgs_2557_; uint8_t v_component_2558_; uint8_t v_printPrefix_2559_; uint8_t v_printLibDir_2560_; uint8_t v_useStdin_2561_; uint8_t v_onlyDeps_2562_; uint8_t v_onlySrcDeps_2563_; uint8_t v_depsJson_2564_; lean_object* v_opts_2565_; uint32_t v_trustLevel_2566_; uint32_t v_numThreads_2567_; lean_object* v_rootDir_x3f_2568_; lean_object* v_setupFileName_x3f_2569_; lean_object* v_ileanFileName_x3f_2570_; lean_object* v_cFileName_x3f_2571_; lean_object* v_bcFileName_x3f_2572_; lean_object* v_zigFileName_x3f_2573_; uint8_t v_jsonOutput_2574_; lean_object* v_errorOnKinds_2575_; uint8_t v_printStats_2576_; uint8_t v_run_2577_; lean_object* v_incrSaveFileName_x3f_2578_; lean_object* v_incrLoadFileName_x3f_2579_; lean_object* v_incrHeaderSaveFileName_x3f_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2591_; 
v_leanOpts_2556_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2557_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2558_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2559_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2560_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2561_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2562_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2563_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2564_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2565_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2566_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2567_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2568_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2569_ = lean_ctor_get(v_opts_1115_, 4);
v_ileanFileName_x3f_2570_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2571_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2572_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2573_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2574_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2575_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2576_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2577_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2578_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2579_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2580_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2591_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2591_ == 0)
{
lean_object* v_unused_2592_; 
v_unused_2592_ = lean_ctor_get(v_opts_1115_, 5);
lean_dec(v_unused_2592_);
v___x_2582_ = v_opts_1115_;
v_isShared_2583_ = v_isSharedCheck_2591_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2580_);
lean_inc(v_incrLoadFileName_x3f_2579_);
lean_inc(v_incrSaveFileName_x3f_2578_);
lean_inc(v_errorOnKinds_2575_);
lean_inc(v_zigFileName_x3f_2573_);
lean_inc(v_bcFileName_x3f_2572_);
lean_inc(v_cFileName_x3f_2571_);
lean_inc(v_ileanFileName_x3f_2570_);
lean_inc(v_setupFileName_x3f_2569_);
lean_inc(v_rootDir_x3f_2568_);
lean_inc(v_opts_2565_);
lean_inc(v_forwardedArgs_2557_);
lean_inc(v_leanOpts_2556_);
lean_dec(v_opts_1115_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2591_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_a_2552_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 5, v___x_2584_);
v___x_2586_ = v___x_2582_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_leanOpts_2556_);
lean_ctor_set(v_reuseFailAlloc_2590_, 1, v_forwardedArgs_2557_);
lean_ctor_set(v_reuseFailAlloc_2590_, 2, v_opts_2565_);
lean_ctor_set(v_reuseFailAlloc_2590_, 3, v_rootDir_x3f_2568_);
lean_ctor_set(v_reuseFailAlloc_2590_, 4, v_setupFileName_x3f_2569_);
lean_ctor_set(v_reuseFailAlloc_2590_, 5, v___x_2584_);
lean_ctor_set(v_reuseFailAlloc_2590_, 6, v_ileanFileName_x3f_2570_);
lean_ctor_set(v_reuseFailAlloc_2590_, 7, v_cFileName_x3f_2571_);
lean_ctor_set(v_reuseFailAlloc_2590_, 8, v_bcFileName_x3f_2572_);
lean_ctor_set(v_reuseFailAlloc_2590_, 9, v_zigFileName_x3f_2573_);
lean_ctor_set(v_reuseFailAlloc_2590_, 10, v_errorOnKinds_2575_);
lean_ctor_set(v_reuseFailAlloc_2590_, 11, v_incrSaveFileName_x3f_2578_);
lean_ctor_set(v_reuseFailAlloc_2590_, 12, v_incrLoadFileName_x3f_2579_);
lean_ctor_set(v_reuseFailAlloc_2590_, 13, v_incrHeaderSaveFileName_x3f_2580_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 8, v_component_2558_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 9, v_printPrefix_2559_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 10, v_printLibDir_2560_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 11, v_useStdin_2561_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 12, v_onlyDeps_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 13, v_onlySrcDeps_2563_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 14, v_depsJson_2564_);
lean_ctor_set_uint32(v_reuseFailAlloc_2590_, sizeof(void*)*14, v_trustLevel_2566_);
lean_ctor_set_uint32(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 4, v_numThreads_2567_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 15, v_jsonOutput_2574_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 16, v_printStats_2576_);
lean_ctor_set_uint8(v_reuseFailAlloc_2590_, sizeof(void*)*14 + 17, v_run_2577_);
v___x_2586_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
lean_object* v___x_2588_; 
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v___x_2586_);
v___x_2588_ = v___x_2554_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v___x_2586_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_dec_ref(v_opts_1115_);
v_a_2594_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2598_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2599_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2598_);
lean_dec_ref(v___x_2599_);
goto v___jp_2595_;
v___jp_2595_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = lean_io_error_to_string(v_a_2594_);
v___x_2597_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2596_);
lean_dec_ref(v___x_2597_);
goto v___jp_1158_;
}
}
}
}
else
{
lean_object* v_leanOpts_2600_; lean_object* v_forwardedArgs_2601_; uint8_t v_component_2602_; uint8_t v_printPrefix_2603_; uint8_t v_printLibDir_2604_; uint8_t v_useStdin_2605_; uint8_t v_onlyDeps_2606_; uint8_t v_onlySrcDeps_2607_; uint8_t v_depsJson_2608_; lean_object* v_opts_2609_; uint32_t v_trustLevel_2610_; uint32_t v_numThreads_2611_; lean_object* v_rootDir_x3f_2612_; lean_object* v_setupFileName_x3f_2613_; lean_object* v_oleanFileName_x3f_2614_; lean_object* v_ileanFileName_x3f_2615_; lean_object* v_cFileName_x3f_2616_; lean_object* v_bcFileName_x3f_2617_; lean_object* v_zigFileName_x3f_2618_; uint8_t v_jsonOutput_2619_; lean_object* v_errorOnKinds_2620_; uint8_t v_printStats_2621_; lean_object* v_incrSaveFileName_x3f_2622_; lean_object* v_incrLoadFileName_x3f_2623_; lean_object* v_incrHeaderSaveFileName_x3f_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2634_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2600_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2601_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2602_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2603_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2604_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2605_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2606_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2607_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2608_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2609_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2610_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2611_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2612_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2613_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2614_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2615_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2616_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2617_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2618_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2619_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2620_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2621_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_incrSaveFileName_x3f_2622_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2623_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2624_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2626_ = v_opts_1115_;
v_isShared_2627_ = v_isSharedCheck_2634_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2624_);
lean_inc(v_incrLoadFileName_x3f_2623_);
lean_inc(v_incrSaveFileName_x3f_2622_);
lean_inc(v_errorOnKinds_2620_);
lean_inc(v_zigFileName_x3f_2618_);
lean_inc(v_bcFileName_x3f_2617_);
lean_inc(v_cFileName_x3f_2616_);
lean_inc(v_ileanFileName_x3f_2615_);
lean_inc(v_oleanFileName_x3f_2614_);
lean_inc(v_setupFileName_x3f_2613_);
lean_inc(v_rootDir_x3f_2612_);
lean_inc(v_opts_2609_);
lean_inc(v_forwardedArgs_2601_);
lean_inc(v_leanOpts_2600_);
lean_dec(v_opts_1115_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2634_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2631_; 
v___x_2628_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_2629_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2600_, v___x_2628_, v___x_1366_);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 0, v___x_2629_);
v___x_2631_ = v___x_2626_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2629_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_forwardedArgs_2601_);
lean_ctor_set(v_reuseFailAlloc_2633_, 2, v_opts_2609_);
lean_ctor_set(v_reuseFailAlloc_2633_, 3, v_rootDir_x3f_2612_);
lean_ctor_set(v_reuseFailAlloc_2633_, 4, v_setupFileName_x3f_2613_);
lean_ctor_set(v_reuseFailAlloc_2633_, 5, v_oleanFileName_x3f_2614_);
lean_ctor_set(v_reuseFailAlloc_2633_, 6, v_ileanFileName_x3f_2615_);
lean_ctor_set(v_reuseFailAlloc_2633_, 7, v_cFileName_x3f_2616_);
lean_ctor_set(v_reuseFailAlloc_2633_, 8, v_bcFileName_x3f_2617_);
lean_ctor_set(v_reuseFailAlloc_2633_, 9, v_zigFileName_x3f_2618_);
lean_ctor_set(v_reuseFailAlloc_2633_, 10, v_errorOnKinds_2620_);
lean_ctor_set(v_reuseFailAlloc_2633_, 11, v_incrSaveFileName_x3f_2622_);
lean_ctor_set(v_reuseFailAlloc_2633_, 12, v_incrLoadFileName_x3f_2623_);
lean_ctor_set(v_reuseFailAlloc_2633_, 13, v_incrHeaderSaveFileName_x3f_2624_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 8, v_component_2602_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 9, v_printPrefix_2603_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 10, v_printLibDir_2604_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 11, v_useStdin_2605_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 12, v_onlyDeps_2606_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 13, v_onlySrcDeps_2607_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 14, v_depsJson_2608_);
lean_ctor_set_uint32(v_reuseFailAlloc_2633_, sizeof(void*)*14, v_trustLevel_2610_);
lean_ctor_set_uint32(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 4, v_numThreads_2611_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 15, v_jsonOutput_2619_);
lean_ctor_set_uint8(v_reuseFailAlloc_2633_, sizeof(void*)*14 + 16, v_printStats_2621_);
v___x_2631_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
lean_object* v___x_2632_; 
lean_ctor_set_uint8(v___x_2631_, sizeof(void*)*14 + 17, v___x_1368_);
v___x_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
return v___x_2632_;
}
}
}
}
else
{
lean_object* v_leanOpts_2635_; lean_object* v_forwardedArgs_2636_; uint8_t v_component_2637_; uint8_t v_printPrefix_2638_; uint8_t v_printLibDir_2639_; uint8_t v_onlyDeps_2640_; uint8_t v_onlySrcDeps_2641_; uint8_t v_depsJson_2642_; lean_object* v_opts_2643_; uint32_t v_trustLevel_2644_; uint32_t v_numThreads_2645_; lean_object* v_rootDir_x3f_2646_; lean_object* v_setupFileName_x3f_2647_; lean_object* v_oleanFileName_x3f_2648_; lean_object* v_ileanFileName_x3f_2649_; lean_object* v_cFileName_x3f_2650_; lean_object* v_bcFileName_x3f_2651_; lean_object* v_zigFileName_x3f_2652_; uint8_t v_jsonOutput_2653_; lean_object* v_errorOnKinds_2654_; uint8_t v_printStats_2655_; uint8_t v_run_2656_; lean_object* v_incrSaveFileName_x3f_2657_; lean_object* v_incrLoadFileName_x3f_2658_; lean_object* v_incrHeaderSaveFileName_x3f_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2667_; 
lean_dec(v_optArg_x3f_1117_);
v_leanOpts_2635_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2636_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2637_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2638_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2639_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_onlyDeps_2640_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2641_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2642_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2643_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2644_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2645_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2646_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2647_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2648_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2649_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2650_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2651_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2652_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2653_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2654_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2655_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2656_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2657_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2658_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2659_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2667_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2661_ = v_opts_1115_;
v_isShared_2662_ = v_isSharedCheck_2667_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2659_);
lean_inc(v_incrLoadFileName_x3f_2658_);
lean_inc(v_incrSaveFileName_x3f_2657_);
lean_inc(v_errorOnKinds_2654_);
lean_inc(v_zigFileName_x3f_2652_);
lean_inc(v_bcFileName_x3f_2651_);
lean_inc(v_cFileName_x3f_2650_);
lean_inc(v_ileanFileName_x3f_2649_);
lean_inc(v_oleanFileName_x3f_2648_);
lean_inc(v_setupFileName_x3f_2647_);
lean_inc(v_rootDir_x3f_2646_);
lean_inc(v_opts_2643_);
lean_inc(v_forwardedArgs_2636_);
lean_inc(v_leanOpts_2635_);
lean_dec(v_opts_1115_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2667_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_leanOpts_2635_);
lean_ctor_set(v_reuseFailAlloc_2666_, 1, v_forwardedArgs_2636_);
lean_ctor_set(v_reuseFailAlloc_2666_, 2, v_opts_2643_);
lean_ctor_set(v_reuseFailAlloc_2666_, 3, v_rootDir_x3f_2646_);
lean_ctor_set(v_reuseFailAlloc_2666_, 4, v_setupFileName_x3f_2647_);
lean_ctor_set(v_reuseFailAlloc_2666_, 5, v_oleanFileName_x3f_2648_);
lean_ctor_set(v_reuseFailAlloc_2666_, 6, v_ileanFileName_x3f_2649_);
lean_ctor_set(v_reuseFailAlloc_2666_, 7, v_cFileName_x3f_2650_);
lean_ctor_set(v_reuseFailAlloc_2666_, 8, v_bcFileName_x3f_2651_);
lean_ctor_set(v_reuseFailAlloc_2666_, 9, v_zigFileName_x3f_2652_);
lean_ctor_set(v_reuseFailAlloc_2666_, 10, v_errorOnKinds_2654_);
lean_ctor_set(v_reuseFailAlloc_2666_, 11, v_incrSaveFileName_x3f_2657_);
lean_ctor_set(v_reuseFailAlloc_2666_, 12, v_incrLoadFileName_x3f_2658_);
lean_ctor_set(v_reuseFailAlloc_2666_, 13, v_incrHeaderSaveFileName_x3f_2659_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 8, v_component_2637_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 9, v_printPrefix_2638_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 10, v_printLibDir_2639_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 12, v_onlyDeps_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 13, v_onlySrcDeps_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 14, v_depsJson_2642_);
lean_ctor_set_uint32(v_reuseFailAlloc_2666_, sizeof(void*)*14, v_trustLevel_2644_);
lean_ctor_set_uint32(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 4, v_numThreads_2645_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 15, v_jsonOutput_2653_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 16, v_printStats_2655_);
lean_ctor_set_uint8(v_reuseFailAlloc_2666_, sizeof(void*)*14 + 17, v_run_2656_);
v___x_2664_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
lean_object* v___x_2665_; 
lean_ctor_set_uint8(v___x_2664_, sizeof(void*)*14 + 11, v___x_1366_);
v___x_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2664_);
return v___x_2665_;
}
}
}
}
else
{
lean_object* v___x_2668_; lean_object* v___x_2669_; 
v___x_2668_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27));
v___x_2669_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2668_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2732_; 
v_a_2670_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2672_ = v___x_2669_;
v_isShared_2673_ = v_isSharedCheck_2732_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2669_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2732_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; 
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = lean_string_utf8_byte_size(v_a_2670_);
lean_inc(v_a_2670_);
v___x_2676_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2676_, 0, v_a_2670_);
lean_ctor_set(v___x_2676_, 1, v___x_2674_);
lean_ctor_set(v___x_2676_, 2, v___x_2675_);
v___x_2677_ = l_String_Slice_toNat_x3f(v___x_2676_);
lean_dec_ref_known(v___x_2676_, 3);
if (lean_obj_tag(v___x_2677_) == 1)
{
lean_object* v_val_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; 
v_val_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_val_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v___x_2679_ = lean_unsigned_to_nat(4u);
v___x_2680_ = lean_unsigned_to_nat(2u);
v___x_2681_ = lean_nat_shiftr(v_val_2678_, v___x_2680_);
lean_dec(v_val_2678_);
v___x_2682_ = lean_nat_mul(v___x_2681_, v___x_2679_);
lean_dec(v___x_2681_);
v___x_2683_ = lean_unsigned_to_nat(1024u);
v___x_2684_ = lean_nat_mul(v___x_2682_, v___x_2683_);
lean_dec(v___x_2682_);
v___x_2685_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28, &l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once, _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28);
v___x_2686_ = lean_nat_dec_lt(v___x_2684_, v___x_2685_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
lean_dec(v___x_2684_);
lean_del_object(v___x_2672_);
lean_dec(v_a_2670_);
lean_dec_ref(v_opts_1115_);
v___x_2687_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29));
v___x_2688_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2687_);
lean_dec_ref(v___x_2688_);
goto v___jp_1307_;
}
else
{
size_t v___x_2689_; lean_object* v___x_2690_; lean_object* v_leanOpts_2691_; lean_object* v_forwardedArgs_2692_; uint8_t v_component_2693_; uint8_t v_printPrefix_2694_; uint8_t v_printLibDir_2695_; uint8_t v_useStdin_2696_; uint8_t v_onlyDeps_2697_; uint8_t v_onlySrcDeps_2698_; uint8_t v_depsJson_2699_; lean_object* v_opts_2700_; uint32_t v_trustLevel_2701_; uint32_t v_numThreads_2702_; lean_object* v_rootDir_x3f_2703_; lean_object* v_setupFileName_x3f_2704_; lean_object* v_oleanFileName_x3f_2705_; lean_object* v_ileanFileName_x3f_2706_; lean_object* v_cFileName_x3f_2707_; lean_object* v_bcFileName_x3f_2708_; lean_object* v_zigFileName_x3f_2709_; uint8_t v_jsonOutput_2710_; lean_object* v_errorOnKinds_2711_; uint8_t v_printStats_2712_; uint8_t v_run_2713_; lean_object* v_incrSaveFileName_x3f_2714_; lean_object* v_incrLoadFileName_x3f_2715_; lean_object* v_incrHeaderSaveFileName_x3f_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2729_; 
v___x_2689_ = lean_usize_of_nat(v___x_2684_);
lean_dec(v___x_2684_);
v___x_2690_ = lean_internal_set_thread_stack_size(v___x_2689_);
v_leanOpts_2691_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2692_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2693_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2694_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2695_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2696_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2697_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2698_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2699_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2700_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2701_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2702_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2703_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2704_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2705_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2706_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2707_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2708_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2709_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2710_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2711_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2712_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2713_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2714_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2715_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2716_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2729_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2729_ == 0)
{
v___x_2718_ = v_opts_1115_;
v_isShared_2719_ = v_isSharedCheck_2729_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2716_);
lean_inc(v_incrLoadFileName_x3f_2715_);
lean_inc(v_incrSaveFileName_x3f_2714_);
lean_inc(v_errorOnKinds_2711_);
lean_inc(v_zigFileName_x3f_2709_);
lean_inc(v_bcFileName_x3f_2708_);
lean_inc(v_cFileName_x3f_2707_);
lean_inc(v_ileanFileName_x3f_2706_);
lean_inc(v_oleanFileName_x3f_2705_);
lean_inc(v_setupFileName_x3f_2704_);
lean_inc(v_rootDir_x3f_2703_);
lean_inc(v_opts_2700_);
lean_inc(v_forwardedArgs_2692_);
lean_inc(v_leanOpts_2691_);
lean_dec(v_opts_1115_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2729_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2724_; 
v___x_2720_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30));
v___x_2721_ = lean_string_append(v___x_2720_, v_a_2670_);
lean_dec(v_a_2670_);
v___x_2722_ = lean_array_push(v_forwardedArgs_2692_, v___x_2721_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 1, v___x_2722_);
v___x_2724_ = v___x_2718_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_leanOpts_2691_);
lean_ctor_set(v_reuseFailAlloc_2728_, 1, v___x_2722_);
lean_ctor_set(v_reuseFailAlloc_2728_, 2, v_opts_2700_);
lean_ctor_set(v_reuseFailAlloc_2728_, 3, v_rootDir_x3f_2703_);
lean_ctor_set(v_reuseFailAlloc_2728_, 4, v_setupFileName_x3f_2704_);
lean_ctor_set(v_reuseFailAlloc_2728_, 5, v_oleanFileName_x3f_2705_);
lean_ctor_set(v_reuseFailAlloc_2728_, 6, v_ileanFileName_x3f_2706_);
lean_ctor_set(v_reuseFailAlloc_2728_, 7, v_cFileName_x3f_2707_);
lean_ctor_set(v_reuseFailAlloc_2728_, 8, v_bcFileName_x3f_2708_);
lean_ctor_set(v_reuseFailAlloc_2728_, 9, v_zigFileName_x3f_2709_);
lean_ctor_set(v_reuseFailAlloc_2728_, 10, v_errorOnKinds_2711_);
lean_ctor_set(v_reuseFailAlloc_2728_, 11, v_incrSaveFileName_x3f_2714_);
lean_ctor_set(v_reuseFailAlloc_2728_, 12, v_incrLoadFileName_x3f_2715_);
lean_ctor_set(v_reuseFailAlloc_2728_, 13, v_incrHeaderSaveFileName_x3f_2716_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 8, v_component_2693_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 9, v_printPrefix_2694_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 10, v_printLibDir_2695_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 11, v_useStdin_2696_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 12, v_onlyDeps_2697_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 13, v_onlySrcDeps_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 14, v_depsJson_2699_);
lean_ctor_set_uint32(v_reuseFailAlloc_2728_, sizeof(void*)*14, v_trustLevel_2701_);
lean_ctor_set_uint32(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 4, v_numThreads_2702_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 15, v_jsonOutput_2710_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 16, v_printStats_2712_);
lean_ctor_set_uint8(v_reuseFailAlloc_2728_, sizeof(void*)*14 + 17, v_run_2713_);
v___x_2724_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
lean_object* v___x_2726_; 
if (v_isShared_2673_ == 0)
{
lean_ctor_set(v___x_2672_, 0, v___x_2724_);
v___x_2726_ = v___x_2672_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
}
else
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
lean_dec(v___x_2677_);
lean_del_object(v___x_2672_);
lean_dec(v_a_2670_);
lean_dec_ref(v_opts_1115_);
v___x_2730_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31));
v___x_2731_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2730_);
lean_dec_ref(v___x_2731_);
goto v___jp_1310_;
}
}
}
else
{
lean_object* v_a_2733_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_dec_ref(v_opts_1115_);
v_a_2733_ = lean_ctor_get(v___x_2669_, 0);
lean_inc(v_a_2733_);
lean_dec_ref_known(v___x_2669_, 1);
v___x_2737_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2738_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2737_);
lean_dec_ref(v___x_2738_);
goto v___jp_2734_;
v___jp_2734_:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2735_ = lean_io_error_to_string(v_a_2733_);
v___x_2736_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2735_);
lean_dec_ref(v___x_2736_);
goto v___jp_1316_;
}
}
}
}
else
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32));
v___x_2740_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2739_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2740_) == 0)
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2782_; 
v_a_2741_ = lean_ctor_get(v___x_2740_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v___x_2740_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2743_ = v___x_2740_;
v_isShared_2744_ = v_isSharedCheck_2782_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2740_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2782_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v_leanOpts_2745_; lean_object* v_forwardedArgs_2746_; uint8_t v_component_2747_; uint8_t v_printPrefix_2748_; uint8_t v_printLibDir_2749_; uint8_t v_useStdin_2750_; uint8_t v_onlyDeps_2751_; uint8_t v_onlySrcDeps_2752_; uint8_t v_depsJson_2753_; lean_object* v_opts_2754_; uint32_t v_trustLevel_2755_; uint32_t v_numThreads_2756_; lean_object* v_rootDir_x3f_2757_; lean_object* v_setupFileName_x3f_2758_; lean_object* v_oleanFileName_x3f_2759_; lean_object* v_ileanFileName_x3f_2760_; lean_object* v_cFileName_x3f_2761_; lean_object* v_bcFileName_x3f_2762_; uint8_t v_jsonOutput_2763_; lean_object* v_errorOnKinds_2764_; uint8_t v_printStats_2765_; uint8_t v_run_2766_; lean_object* v_incrSaveFileName_x3f_2767_; lean_object* v_incrLoadFileName_x3f_2768_; lean_object* v_incrHeaderSaveFileName_x3f_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2780_; 
v_leanOpts_2745_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2746_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2747_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2748_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2749_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2750_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2751_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2752_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2753_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2754_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2755_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2756_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2757_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2758_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2759_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2760_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2761_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_2762_ = lean_ctor_get(v_opts_1115_, 8);
v_jsonOutput_2763_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2764_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2765_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2766_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2767_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2768_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2769_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2780_ == 0)
{
lean_object* v_unused_2781_; 
v_unused_2781_ = lean_ctor_get(v_opts_1115_, 9);
lean_dec(v_unused_2781_);
v___x_2771_ = v_opts_1115_;
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2769_);
lean_inc(v_incrLoadFileName_x3f_2768_);
lean_inc(v_incrSaveFileName_x3f_2767_);
lean_inc(v_errorOnKinds_2764_);
lean_inc(v_bcFileName_x3f_2762_);
lean_inc(v_cFileName_x3f_2761_);
lean_inc(v_ileanFileName_x3f_2760_);
lean_inc(v_oleanFileName_x3f_2759_);
lean_inc(v_setupFileName_x3f_2758_);
lean_inc(v_rootDir_x3f_2757_);
lean_inc(v_opts_2754_);
lean_inc(v_forwardedArgs_2746_);
lean_inc(v_leanOpts_2745_);
lean_dec(v_opts_1115_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2780_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2775_; 
v___x_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_a_2741_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 9, v___x_2773_);
v___x_2775_ = v___x_2771_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_leanOpts_2745_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v_forwardedArgs_2746_);
lean_ctor_set(v_reuseFailAlloc_2779_, 2, v_opts_2754_);
lean_ctor_set(v_reuseFailAlloc_2779_, 3, v_rootDir_x3f_2757_);
lean_ctor_set(v_reuseFailAlloc_2779_, 4, v_setupFileName_x3f_2758_);
lean_ctor_set(v_reuseFailAlloc_2779_, 5, v_oleanFileName_x3f_2759_);
lean_ctor_set(v_reuseFailAlloc_2779_, 6, v_ileanFileName_x3f_2760_);
lean_ctor_set(v_reuseFailAlloc_2779_, 7, v_cFileName_x3f_2761_);
lean_ctor_set(v_reuseFailAlloc_2779_, 8, v_bcFileName_x3f_2762_);
lean_ctor_set(v_reuseFailAlloc_2779_, 9, v___x_2773_);
lean_ctor_set(v_reuseFailAlloc_2779_, 10, v_errorOnKinds_2764_);
lean_ctor_set(v_reuseFailAlloc_2779_, 11, v_incrSaveFileName_x3f_2767_);
lean_ctor_set(v_reuseFailAlloc_2779_, 12, v_incrLoadFileName_x3f_2768_);
lean_ctor_set(v_reuseFailAlloc_2779_, 13, v_incrHeaderSaveFileName_x3f_2769_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 8, v_component_2747_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 9, v_printPrefix_2748_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 10, v_printLibDir_2749_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 11, v_useStdin_2750_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 12, v_onlyDeps_2751_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 13, v_onlySrcDeps_2752_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 14, v_depsJson_2753_);
lean_ctor_set_uint32(v_reuseFailAlloc_2779_, sizeof(void*)*14, v_trustLevel_2755_);
lean_ctor_set_uint32(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 4, v_numThreads_2756_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 15, v_jsonOutput_2763_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 16, v_printStats_2765_);
lean_ctor_set_uint8(v_reuseFailAlloc_2779_, sizeof(void*)*14 + 17, v_run_2766_);
v___x_2775_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
lean_object* v___x_2777_; 
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 0, v___x_2775_);
v___x_2777_ = v___x_2743_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v___x_2775_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
lean_dec_ref(v_opts_1115_);
v_a_2783_ = lean_ctor_get(v___x_2740_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v___x_2740_, 1);
v___x_2787_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2788_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2787_);
lean_dec_ref(v___x_2788_);
goto v___jp_2784_;
v___jp_2784_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2785_ = lean_io_error_to_string(v_a_2783_);
v___x_2786_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2785_);
lean_dec_ref(v___x_2786_);
goto v___jp_1152_;
}
}
}
}
else
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33));
v___x_2790_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2789_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2832_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2793_ = v___x_2790_;
v_isShared_2794_ = v_isSharedCheck_2832_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2790_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2832_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v_leanOpts_2795_; lean_object* v_forwardedArgs_2796_; uint8_t v_component_2797_; uint8_t v_printPrefix_2798_; uint8_t v_printLibDir_2799_; uint8_t v_useStdin_2800_; uint8_t v_onlyDeps_2801_; uint8_t v_onlySrcDeps_2802_; uint8_t v_depsJson_2803_; lean_object* v_opts_2804_; uint32_t v_trustLevel_2805_; uint32_t v_numThreads_2806_; lean_object* v_rootDir_x3f_2807_; lean_object* v_setupFileName_x3f_2808_; lean_object* v_oleanFileName_x3f_2809_; lean_object* v_ileanFileName_x3f_2810_; lean_object* v_cFileName_x3f_2811_; lean_object* v_zigFileName_x3f_2812_; uint8_t v_jsonOutput_2813_; lean_object* v_errorOnKinds_2814_; uint8_t v_printStats_2815_; uint8_t v_run_2816_; lean_object* v_incrSaveFileName_x3f_2817_; lean_object* v_incrLoadFileName_x3f_2818_; lean_object* v_incrHeaderSaveFileName_x3f_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2830_; 
v_leanOpts_2795_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2796_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2797_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2798_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2799_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2800_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2801_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2802_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2803_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2804_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2805_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2806_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2807_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2808_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2809_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2810_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_2811_ = lean_ctor_get(v_opts_1115_, 7);
v_zigFileName_x3f_2812_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2813_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2814_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2815_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2816_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2817_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2818_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2819_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; 
v_unused_2831_ = lean_ctor_get(v_opts_1115_, 8);
lean_dec(v_unused_2831_);
v___x_2821_ = v_opts_1115_;
v_isShared_2822_ = v_isSharedCheck_2830_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2819_);
lean_inc(v_incrLoadFileName_x3f_2818_);
lean_inc(v_incrSaveFileName_x3f_2817_);
lean_inc(v_errorOnKinds_2814_);
lean_inc(v_zigFileName_x3f_2812_);
lean_inc(v_cFileName_x3f_2811_);
lean_inc(v_ileanFileName_x3f_2810_);
lean_inc(v_oleanFileName_x3f_2809_);
lean_inc(v_setupFileName_x3f_2808_);
lean_inc(v_rootDir_x3f_2807_);
lean_inc(v_opts_2804_);
lean_inc(v_forwardedArgs_2796_);
lean_inc(v_leanOpts_2795_);
lean_dec(v_opts_1115_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2830_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2823_; lean_object* v___x_2825_; 
v___x_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2823_, 0, v_a_2791_);
if (v_isShared_2822_ == 0)
{
lean_ctor_set(v___x_2821_, 8, v___x_2823_);
v___x_2825_ = v___x_2821_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_leanOpts_2795_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_forwardedArgs_2796_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v_opts_2804_);
lean_ctor_set(v_reuseFailAlloc_2829_, 3, v_rootDir_x3f_2807_);
lean_ctor_set(v_reuseFailAlloc_2829_, 4, v_setupFileName_x3f_2808_);
lean_ctor_set(v_reuseFailAlloc_2829_, 5, v_oleanFileName_x3f_2809_);
lean_ctor_set(v_reuseFailAlloc_2829_, 6, v_ileanFileName_x3f_2810_);
lean_ctor_set(v_reuseFailAlloc_2829_, 7, v_cFileName_x3f_2811_);
lean_ctor_set(v_reuseFailAlloc_2829_, 8, v___x_2823_);
lean_ctor_set(v_reuseFailAlloc_2829_, 9, v_zigFileName_x3f_2812_);
lean_ctor_set(v_reuseFailAlloc_2829_, 10, v_errorOnKinds_2814_);
lean_ctor_set(v_reuseFailAlloc_2829_, 11, v_incrSaveFileName_x3f_2817_);
lean_ctor_set(v_reuseFailAlloc_2829_, 12, v_incrLoadFileName_x3f_2818_);
lean_ctor_set(v_reuseFailAlloc_2829_, 13, v_incrHeaderSaveFileName_x3f_2819_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 8, v_component_2797_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 9, v_printPrefix_2798_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 10, v_printLibDir_2799_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 11, v_useStdin_2800_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 12, v_onlyDeps_2801_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 13, v_onlySrcDeps_2802_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 14, v_depsJson_2803_);
lean_ctor_set_uint32(v_reuseFailAlloc_2829_, sizeof(void*)*14, v_trustLevel_2805_);
lean_ctor_set_uint32(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 4, v_numThreads_2806_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 15, v_jsonOutput_2813_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 16, v_printStats_2815_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*14 + 17, v_run_2816_);
v___x_2825_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
lean_object* v___x_2827_; 
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 0, v___x_2825_);
v___x_2827_ = v___x_2793_;
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
lean_object* v_a_2833_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
lean_dec_ref(v_opts_1115_);
v_a_2833_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2833_);
lean_dec_ref_known(v___x_2790_, 1);
v___x_2837_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2838_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2837_);
lean_dec_ref(v___x_2838_);
goto v___jp_2834_;
v___jp_2834_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lean_io_error_to_string(v_a_2833_);
v___x_2836_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2835_);
lean_dec_ref(v___x_2836_);
goto v___jp_1322_;
}
}
}
}
else
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
v___x_2839_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34));
v___x_2840_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2839_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2882_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2843_ = v___x_2840_;
v_isShared_2844_ = v_isSharedCheck_2882_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2840_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2882_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v_leanOpts_2845_; lean_object* v_forwardedArgs_2846_; uint8_t v_component_2847_; uint8_t v_printPrefix_2848_; uint8_t v_printLibDir_2849_; uint8_t v_useStdin_2850_; uint8_t v_onlyDeps_2851_; uint8_t v_onlySrcDeps_2852_; uint8_t v_depsJson_2853_; lean_object* v_opts_2854_; uint32_t v_trustLevel_2855_; uint32_t v_numThreads_2856_; lean_object* v_rootDir_x3f_2857_; lean_object* v_setupFileName_x3f_2858_; lean_object* v_oleanFileName_x3f_2859_; lean_object* v_ileanFileName_x3f_2860_; lean_object* v_bcFileName_x3f_2861_; lean_object* v_zigFileName_x3f_2862_; uint8_t v_jsonOutput_2863_; lean_object* v_errorOnKinds_2864_; uint8_t v_printStats_2865_; uint8_t v_run_2866_; lean_object* v_incrSaveFileName_x3f_2867_; lean_object* v_incrLoadFileName_x3f_2868_; lean_object* v_incrHeaderSaveFileName_x3f_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2880_; 
v_leanOpts_2845_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2846_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2847_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2848_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2849_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2850_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2851_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2852_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2853_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2854_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2855_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_numThreads_2856_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2857_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_2858_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_2859_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_2860_ = lean_ctor_get(v_opts_1115_, 6);
v_bcFileName_x3f_2861_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_2862_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_2863_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_2864_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_2865_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_2866_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2867_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_2868_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_2869_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_2880_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_2880_ == 0)
{
lean_object* v_unused_2881_; 
v_unused_2881_ = lean_ctor_get(v_opts_1115_, 7);
lean_dec(v_unused_2881_);
v___x_2871_ = v_opts_1115_;
v_isShared_2872_ = v_isSharedCheck_2880_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2869_);
lean_inc(v_incrLoadFileName_x3f_2868_);
lean_inc(v_incrSaveFileName_x3f_2867_);
lean_inc(v_errorOnKinds_2864_);
lean_inc(v_zigFileName_x3f_2862_);
lean_inc(v_bcFileName_x3f_2861_);
lean_inc(v_ileanFileName_x3f_2860_);
lean_inc(v_oleanFileName_x3f_2859_);
lean_inc(v_setupFileName_x3f_2858_);
lean_inc(v_rootDir_x3f_2857_);
lean_inc(v_opts_2854_);
lean_inc(v_forwardedArgs_2846_);
lean_inc(v_leanOpts_2845_);
lean_dec(v_opts_1115_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2880_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2873_; lean_object* v___x_2875_; 
v___x_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2873_, 0, v_a_2841_);
if (v_isShared_2872_ == 0)
{
lean_ctor_set(v___x_2871_, 7, v___x_2873_);
v___x_2875_ = v___x_2871_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_leanOpts_2845_);
lean_ctor_set(v_reuseFailAlloc_2879_, 1, v_forwardedArgs_2846_);
lean_ctor_set(v_reuseFailAlloc_2879_, 2, v_opts_2854_);
lean_ctor_set(v_reuseFailAlloc_2879_, 3, v_rootDir_x3f_2857_);
lean_ctor_set(v_reuseFailAlloc_2879_, 4, v_setupFileName_x3f_2858_);
lean_ctor_set(v_reuseFailAlloc_2879_, 5, v_oleanFileName_x3f_2859_);
lean_ctor_set(v_reuseFailAlloc_2879_, 6, v_ileanFileName_x3f_2860_);
lean_ctor_set(v_reuseFailAlloc_2879_, 7, v___x_2873_);
lean_ctor_set(v_reuseFailAlloc_2879_, 8, v_bcFileName_x3f_2861_);
lean_ctor_set(v_reuseFailAlloc_2879_, 9, v_zigFileName_x3f_2862_);
lean_ctor_set(v_reuseFailAlloc_2879_, 10, v_errorOnKinds_2864_);
lean_ctor_set(v_reuseFailAlloc_2879_, 11, v_incrSaveFileName_x3f_2867_);
lean_ctor_set(v_reuseFailAlloc_2879_, 12, v_incrLoadFileName_x3f_2868_);
lean_ctor_set(v_reuseFailAlloc_2879_, 13, v_incrHeaderSaveFileName_x3f_2869_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 8, v_component_2847_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 9, v_printPrefix_2848_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 10, v_printLibDir_2849_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 11, v_useStdin_2850_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 12, v_onlyDeps_2851_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 13, v_onlySrcDeps_2852_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 14, v_depsJson_2853_);
lean_ctor_set_uint32(v_reuseFailAlloc_2879_, sizeof(void*)*14, v_trustLevel_2855_);
lean_ctor_set_uint32(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 4, v_numThreads_2856_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 15, v_jsonOutput_2863_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 16, v_printStats_2865_);
lean_ctor_set_uint8(v_reuseFailAlloc_2879_, sizeof(void*)*14 + 17, v_run_2866_);
v___x_2875_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
lean_object* v___x_2877_; 
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 0, v___x_2875_);
v___x_2877_ = v___x_2843_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v___x_2875_);
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
}
else
{
lean_object* v_a_2883_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
lean_dec_ref(v_opts_1115_);
v_a_2883_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2883_);
lean_dec_ref_known(v___x_2840_, 1);
v___x_2887_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2888_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2887_);
lean_dec_ref(v___x_2888_);
goto v___jp_2884_;
v___jp_2884_:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = lean_io_error_to_string(v_a_2883_);
v___x_2886_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2885_);
lean_dec_ref(v___x_2886_);
goto v___jp_1146_;
}
}
}
}
else
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
v___x_2889_ = l___private_Lean_Shell_0__Lean_featuresString;
v___x_2890_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2889_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2898_; 
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2898_ == 0)
{
lean_object* v_unused_2899_; 
v_unused_2899_ = lean_ctor_get(v___x_2890_, 0);
lean_dec(v_unused_2899_);
v___x_2892_ = v___x_2890_;
v_isShared_2893_ = v_isSharedCheck_2898_;
goto v_resetjp_2891_;
}
else
{
lean_dec(v___x_2890_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2898_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2894_; lean_object* v___x_2896_; 
v___x_2894_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2893_ == 0)
{
lean_ctor_set_tag(v___x_2892_, 1);
lean_ctor_set(v___x_2892_, 0, v___x_2894_);
v___x_2896_ = v___x_2892_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v___x_2894_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v_a_2900_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2890_, 1);
v___x_2904_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2905_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2904_);
lean_dec_ref(v___x_2905_);
goto v___jp_2901_;
v___jp_2901_:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2902_ = lean_io_error_to_string(v_a_2900_);
v___x_2903_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2902_);
lean_dec_ref(v___x_2903_);
goto v___jp_1328_;
}
}
}
}
else
{
lean_object* v___x_2906_; 
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
v___x_2906_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1352_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2914_; 
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2906_);
if (v_isSharedCheck_2914_ == 0)
{
lean_object* v_unused_2915_; 
v_unused_2915_ = lean_ctor_get(v___x_2906_, 0);
lean_dec(v_unused_2915_);
v___x_2908_ = v___x_2906_;
v_isShared_2909_ = v_isSharedCheck_2914_;
goto v_resetjp_2907_;
}
else
{
lean_dec(v___x_2906_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2914_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2910_; lean_object* v___x_2912_; 
v___x_2910_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2909_ == 0)
{
lean_ctor_set_tag(v___x_2908_, 1);
lean_ctor_set(v___x_2908_, 0, v___x_2910_);
v___x_2912_ = v___x_2908_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2910_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v_a_2916_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2906_, 1);
v___x_2920_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2921_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2920_);
lean_dec_ref(v___x_2921_);
goto v___jp_2917_;
v___jp_2917_:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2918_ = lean_io_error_to_string(v_a_2916_);
v___x_2919_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2918_);
lean_dec_ref(v___x_2919_);
goto v___jp_1140_;
}
}
}
}
else
{
lean_object* v___x_2922_; lean_object* v___x_2923_; 
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
v___x_2922_ = l_Lean_githash;
v___x_2923_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2922_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2931_; 
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_2931_ == 0)
{
lean_object* v_unused_2932_; 
v_unused_2932_ = lean_ctor_get(v___x_2923_, 0);
lean_dec(v_unused_2932_);
v___x_2925_ = v___x_2923_;
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
else
{
lean_dec(v___x_2923_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2927_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2926_ == 0)
{
lean_ctor_set_tag(v___x_2925_, 1);
lean_ctor_set(v___x_2925_, 0, v___x_2927_);
v___x_2929_ = v___x_2925_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
else
{
lean_object* v_a_2933_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v_a_2933_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2933_);
lean_dec_ref_known(v___x_2923_, 1);
v___x_2937_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2938_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2937_);
lean_dec_ref(v___x_2938_);
goto v___jp_2934_;
v___jp_2934_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = lean_io_error_to_string(v_a_2933_);
v___x_2936_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2935_);
lean_dec_ref(v___x_2936_);
goto v___jp_1334_;
}
}
}
}
else
{
lean_object* v___x_2939_; lean_object* v___x_2940_; 
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
v___x_2939_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_2940_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2939_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2948_; 
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2948_ == 0)
{
lean_object* v_unused_2949_; 
v_unused_2949_ = lean_ctor_get(v___x_2940_, 0);
lean_dec(v_unused_2949_);
v___x_2942_ = v___x_2940_;
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
else
{
lean_dec(v___x_2940_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; lean_object* v___x_2946_; 
v___x_2944_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2943_ == 0)
{
lean_ctor_set_tag(v___x_2942_, 1);
lean_ctor_set(v___x_2942_, 0, v___x_2944_);
v___x_2946_ = v___x_2942_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2944_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
else
{
lean_object* v_a_2950_; lean_object* v___x_2954_; lean_object* v___x_2955_; 
v_a_2950_ = lean_ctor_get(v___x_2940_, 0);
lean_inc(v_a_2950_);
lean_dec_ref_known(v___x_2940_, 1);
v___x_2954_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2955_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2954_);
lean_dec_ref(v___x_2955_);
goto v___jp_2951_;
v___jp_2951_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = lean_io_error_to_string(v_a_2950_);
v___x_2953_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2952_);
lean_dec_ref(v___x_2953_);
goto v___jp_1134_;
}
}
}
}
else
{
lean_object* v___x_2956_; lean_object* v___x_2957_; 
lean_dec(v_optArg_x3f_1117_);
lean_dec_ref(v_opts_1115_);
v___x_2956_ = l___private_Lean_Shell_0__Lean_versionHeader;
v___x_2957_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2956_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2965_; 
v_isSharedCheck_2965_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2965_ == 0)
{
lean_object* v_unused_2966_; 
v_unused_2966_ = lean_ctor_get(v___x_2957_, 0);
lean_dec(v_unused_2966_);
v___x_2959_ = v___x_2957_;
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
else
{
lean_dec(v___x_2957_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2965_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2963_; 
v___x_2961_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2960_ == 0)
{
lean_ctor_set_tag(v___x_2959_, 1);
lean_ctor_set(v___x_2959_, 0, v___x_2961_);
v___x_2963_ = v___x_2959_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v___x_2961_);
v___x_2963_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
return v___x_2963_;
}
}
}
else
{
lean_object* v_a_2967_; lean_object* v___x_2971_; lean_object* v___x_2972_; 
v_a_2967_ = lean_ctor_get(v___x_2957_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2957_, 1);
v___x_2971_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2972_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2971_);
lean_dec_ref(v___x_2972_);
goto v___jp_2968_;
v___jp_2968_:
{
lean_object* v___x_2969_; lean_object* v___x_2970_; 
v___x_2969_ = lean_io_error_to_string(v_a_2967_);
v___x_2970_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2969_);
lean_dec_ref(v___x_2970_);
goto v___jp_1340_;
}
}
}
}
else
{
lean_object* v___x_2973_; lean_object* v___x_2974_; 
v___x_2973_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35));
v___x_2974_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2973_, v_optArg_x3f_1117_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___x_2977_; uint8_t v_isShared_2978_; uint8_t v_isSharedCheck_3029_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_2977_ = v___x_2974_;
v_isShared_2978_ = v_isSharedCheck_3029_;
goto v_resetjp_2976_;
}
else
{
lean_inc(v_a_2975_);
lean_dec(v___x_2974_);
v___x_2977_ = lean_box(0);
v_isShared_2978_ = v_isSharedCheck_3029_;
goto v_resetjp_2976_;
}
v_resetjp_2976_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2979_ = lean_unsigned_to_nat(0u);
v___x_2980_ = lean_string_utf8_byte_size(v_a_2975_);
lean_inc(v_a_2975_);
v___x_2981_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2981_, 0, v_a_2975_);
lean_ctor_set(v___x_2981_, 1, v___x_2979_);
lean_ctor_set(v___x_2981_, 2, v___x_2980_);
v___x_2982_ = l_String_Slice_toNat_x3f(v___x_2981_);
lean_dec_ref_known(v___x_2981_, 3);
if (lean_obj_tag(v___x_2982_) == 1)
{
lean_object* v_val_2983_; lean_object* v___x_2984_; uint8_t v___x_2985_; 
v_val_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_val_2983_);
lean_dec_ref_known(v___x_2982_, 1);
v___x_2984_ = lean_cstr_to_nat("4294967296");
v___x_2985_ = lean_nat_dec_lt(v_val_2983_, v___x_2984_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
lean_dec(v_val_2983_);
lean_del_object(v___x_2977_);
lean_dec(v_a_2975_);
lean_dec_ref(v_opts_1115_);
v___x_2986_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36));
v___x_2987_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2986_);
lean_dec_ref(v___x_2987_);
goto v___jp_1128_;
}
else
{
lean_object* v_leanOpts_2988_; lean_object* v_forwardedArgs_2989_; uint8_t v_component_2990_; uint8_t v_printPrefix_2991_; uint8_t v_printLibDir_2992_; uint8_t v_useStdin_2993_; uint8_t v_onlyDeps_2994_; uint8_t v_onlySrcDeps_2995_; uint8_t v_depsJson_2996_; lean_object* v_opts_2997_; uint32_t v_trustLevel_2998_; lean_object* v_rootDir_x3f_2999_; lean_object* v_setupFileName_x3f_3000_; lean_object* v_oleanFileName_x3f_3001_; lean_object* v_ileanFileName_x3f_3002_; lean_object* v_cFileName_x3f_3003_; lean_object* v_bcFileName_x3f_3004_; lean_object* v_zigFileName_x3f_3005_; uint8_t v_jsonOutput_3006_; lean_object* v_errorOnKinds_3007_; uint8_t v_printStats_3008_; uint8_t v_run_3009_; lean_object* v_incrSaveFileName_x3f_3010_; lean_object* v_incrLoadFileName_x3f_3011_; lean_object* v_incrHeaderSaveFileName_x3f_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3026_; 
v_leanOpts_2988_ = lean_ctor_get(v_opts_1115_, 0);
v_forwardedArgs_2989_ = lean_ctor_get(v_opts_1115_, 1);
v_component_2990_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 8);
v_printPrefix_2991_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 9);
v_printLibDir_2992_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 10);
v_useStdin_2993_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 11);
v_onlyDeps_2994_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2995_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 13);
v_depsJson_2996_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 14);
v_opts_2997_ = lean_ctor_get(v_opts_1115_, 2);
v_trustLevel_2998_ = lean_ctor_get_uint32(v_opts_1115_, sizeof(void*)*14);
v_rootDir_x3f_2999_ = lean_ctor_get(v_opts_1115_, 3);
v_setupFileName_x3f_3000_ = lean_ctor_get(v_opts_1115_, 4);
v_oleanFileName_x3f_3001_ = lean_ctor_get(v_opts_1115_, 5);
v_ileanFileName_x3f_3002_ = lean_ctor_get(v_opts_1115_, 6);
v_cFileName_x3f_3003_ = lean_ctor_get(v_opts_1115_, 7);
v_bcFileName_x3f_3004_ = lean_ctor_get(v_opts_1115_, 8);
v_zigFileName_x3f_3005_ = lean_ctor_get(v_opts_1115_, 9);
v_jsonOutput_3006_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 15);
v_errorOnKinds_3007_ = lean_ctor_get(v_opts_1115_, 10);
v_printStats_3008_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 16);
v_run_3009_ = lean_ctor_get_uint8(v_opts_1115_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3010_ = lean_ctor_get(v_opts_1115_, 11);
v_incrLoadFileName_x3f_3011_ = lean_ctor_get(v_opts_1115_, 12);
v_incrHeaderSaveFileName_x3f_3012_ = lean_ctor_get(v_opts_1115_, 13);
v_isSharedCheck_3026_ = !lean_is_exclusive(v_opts_1115_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3014_ = v_opts_1115_;
v_isShared_3015_ = v_isSharedCheck_3026_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3012_);
lean_inc(v_incrLoadFileName_x3f_3011_);
lean_inc(v_incrSaveFileName_x3f_3010_);
lean_inc(v_errorOnKinds_3007_);
lean_inc(v_zigFileName_x3f_3005_);
lean_inc(v_bcFileName_x3f_3004_);
lean_inc(v_cFileName_x3f_3003_);
lean_inc(v_ileanFileName_x3f_3002_);
lean_inc(v_oleanFileName_x3f_3001_);
lean_inc(v_setupFileName_x3f_3000_);
lean_inc(v_rootDir_x3f_2999_);
lean_inc(v_opts_2997_);
lean_inc(v_forwardedArgs_2989_);
lean_inc(v_leanOpts_2988_);
lean_dec(v_opts_1115_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3026_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
uint32_t v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3021_; 
v___x_3016_ = lean_uint32_of_nat(v_val_2983_);
lean_dec(v_val_2983_);
v___x_3017_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37));
v___x_3018_ = lean_string_append(v___x_3017_, v_a_2975_);
lean_dec(v_a_2975_);
v___x_3019_ = lean_array_push(v_forwardedArgs_2989_, v___x_3018_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 1, v___x_3019_);
v___x_3021_ = v___x_3014_;
goto v_reusejp_3020_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_leanOpts_2988_);
lean_ctor_set(v_reuseFailAlloc_3025_, 1, v___x_3019_);
lean_ctor_set(v_reuseFailAlloc_3025_, 2, v_opts_2997_);
lean_ctor_set(v_reuseFailAlloc_3025_, 3, v_rootDir_x3f_2999_);
lean_ctor_set(v_reuseFailAlloc_3025_, 4, v_setupFileName_x3f_3000_);
lean_ctor_set(v_reuseFailAlloc_3025_, 5, v_oleanFileName_x3f_3001_);
lean_ctor_set(v_reuseFailAlloc_3025_, 6, v_ileanFileName_x3f_3002_);
lean_ctor_set(v_reuseFailAlloc_3025_, 7, v_cFileName_x3f_3003_);
lean_ctor_set(v_reuseFailAlloc_3025_, 8, v_bcFileName_x3f_3004_);
lean_ctor_set(v_reuseFailAlloc_3025_, 9, v_zigFileName_x3f_3005_);
lean_ctor_set(v_reuseFailAlloc_3025_, 10, v_errorOnKinds_3007_);
lean_ctor_set(v_reuseFailAlloc_3025_, 11, v_incrSaveFileName_x3f_3010_);
lean_ctor_set(v_reuseFailAlloc_3025_, 12, v_incrLoadFileName_x3f_3011_);
lean_ctor_set(v_reuseFailAlloc_3025_, 13, v_incrHeaderSaveFileName_x3f_3012_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 8, v_component_2990_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 9, v_printPrefix_2991_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 10, v_printLibDir_2992_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 11, v_useStdin_2993_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 12, v_onlyDeps_2994_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 13, v_onlySrcDeps_2995_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 14, v_depsJson_2996_);
lean_ctor_set_uint32(v_reuseFailAlloc_3025_, sizeof(void*)*14, v_trustLevel_2998_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 15, v_jsonOutput_3006_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 16, v_printStats_3008_);
lean_ctor_set_uint8(v_reuseFailAlloc_3025_, sizeof(void*)*14 + 17, v_run_3009_);
v___x_3021_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3020_;
}
v_reusejp_3020_:
{
lean_object* v___x_3023_; 
lean_ctor_set_uint32(v___x_3021_, sizeof(void*)*14 + 4, v___x_3016_);
if (v_isShared_2978_ == 0)
{
lean_ctor_set(v___x_2977_, 0, v___x_3021_);
v___x_3023_ = v___x_2977_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3021_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
}
}
else
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
lean_dec(v___x_2982_);
lean_del_object(v___x_2977_);
lean_dec(v_a_2975_);
lean_dec_ref(v_opts_1115_);
v___x_3027_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38));
v___x_3028_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3027_);
lean_dec_ref(v___x_3028_);
goto v___jp_1125_;
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
lean_dec_ref(v_opts_1115_);
v_a_3030_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_3030_);
lean_dec_ref_known(v___x_2974_, 1);
v___x_3034_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3035_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3034_);
lean_dec_ref(v___x_3035_);
goto v___jp_3031_;
v___jp_3031_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = lean_io_error_to_string(v_a_3030_);
v___x_3033_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3032_);
lean_dec_ref(v___x_3033_);
goto v___jp_1122_;
}
}
}
}
else
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
lean_dec(v_optArg_x3f_1117_);
v___x_3036_ = lean_internal_set_exit_on_panic(v___x_1344_);
v___x_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_opts_1115_);
return v___x_3037_;
}
v___jp_1119_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1120_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
v___jp_1122_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1124_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1123_);
lean_dec_ref(v___x_1124_);
goto v___jp_1119_;
}
v___jp_1125_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
return v___x_1127_;
}
v___jp_1128_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
return v___x_1130_;
}
v___jp_1131_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
return v___x_1133_;
}
v___jp_1134_:
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
v___x_1135_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1136_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1135_);
lean_dec_ref(v___x_1136_);
goto v___jp_1131_;
}
v___jp_1137_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
return v___x_1139_;
}
v___jp_1140_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1142_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1141_);
lean_dec_ref(v___x_1142_);
goto v___jp_1137_;
}
v___jp_1143_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
v___jp_1146_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1148_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1147_);
lean_dec_ref(v___x_1148_);
goto v___jp_1143_;
}
v___jp_1149_:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1150_);
return v___x_1151_;
}
v___jp_1152_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1154_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1153_);
lean_dec_ref(v___x_1154_);
goto v___jp_1149_;
}
v___jp_1155_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
return v___x_1157_;
}
v___jp_1158_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1160_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1159_);
lean_dec_ref(v___x_1160_);
goto v___jp_1155_;
}
v___jp_1161_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
return v___x_1163_;
}
v___jp_1164_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1166_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1165_);
lean_dec_ref(v___x_1166_);
goto v___jp_1161_;
}
v___jp_1167_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
return v___x_1169_;
}
v___jp_1170_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1172_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1171_);
lean_dec_ref(v___x_1172_);
goto v___jp_1167_;
}
v___jp_1173_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
return v___x_1175_;
}
v___jp_1176_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
return v___x_1178_;
}
v___jp_1179_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; 
v___x_1180_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1181_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1180_);
lean_dec_ref(v___x_1181_);
goto v___jp_1176_;
}
v___jp_1182_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
v___jp_1185_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1187_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1186_);
lean_dec_ref(v___x_1187_);
goto v___jp_1182_;
}
v___jp_1188_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
v___jp_1191_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1193_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1192_);
lean_dec_ref(v___x_1193_);
goto v___jp_1188_;
}
v___jp_1194_:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = lean_io_error_to_string(v___y_1195_);
v___x_1197_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1196_);
lean_dec_ref(v___x_1197_);
goto v___jp_1191_;
}
v___jp_1198_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1200_, 0, v___x_1199_);
return v___x_1200_;
}
v___jp_1201_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1203_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1202_);
lean_dec_ref(v___x_1203_);
goto v___jp_1198_;
}
v___jp_1204_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
return v___x_1206_;
}
v___jp_1207_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1209_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1208_);
lean_dec_ref(v___x_1209_);
goto v___jp_1204_;
}
v___jp_1210_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
return v___x_1212_;
}
v___jp_1213_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1215_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1214_);
lean_dec_ref(v___x_1215_);
goto v___jp_1210_;
}
v___jp_1216_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
v___jp_1219_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1221_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1220_);
lean_dec_ref(v___x_1221_);
goto v___jp_1216_;
}
v___jp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = lean_io_error_to_string(v___y_1223_);
v___x_1225_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1224_);
lean_dec_ref(v___x_1225_);
goto v___jp_1219_;
}
v___jp_1226_:
{
uint8_t v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = 1;
v___x_1228_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1227_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1236_; 
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1236_ == 0)
{
lean_object* v_unused_1237_; 
v_unused_1237_ = lean_ctor_get(v___x_1228_, 0);
lean_dec(v_unused_1237_);
v___x_1230_ = v___x_1228_;
v_isShared_1231_ = v_isSharedCheck_1236_;
goto v_resetjp_1229_;
}
else
{
lean_dec(v___x_1228_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1236_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; lean_object* v___x_1234_; 
v___x_1232_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_1231_ == 0)
{
lean_ctor_set_tag(v___x_1230_, 1);
lean_ctor_set(v___x_1230_, 0, v___x_1232_);
v___x_1234_ = v___x_1230_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1232_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v_a_1238_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1238_);
lean_dec_ref_known(v___x_1228_, 1);
v___x_1239_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1240_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1239_);
lean_dec_ref(v___x_1240_);
v___y_1223_ = v_a_1238_;
goto v___jp_1222_;
}
}
v___jp_1241_:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0));
v___x_1243_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1242_);
lean_dec_ref(v___x_1243_);
goto v___jp_1226_;
}
v___jp_1244_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1245_);
return v___x_1246_;
}
v___jp_1247_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1249_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1248_);
lean_dec_ref(v___x_1249_);
goto v___jp_1244_;
}
v___jp_1250_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
return v___x_1252_;
}
v___jp_1253_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1255_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1254_);
lean_dec_ref(v___x_1255_);
goto v___jp_1250_;
}
v___jp_1256_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
v___jp_1259_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1261_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1260_);
lean_dec_ref(v___x_1261_);
goto v___jp_1256_;
}
v___jp_1262_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1263_);
return v___x_1264_;
}
v___jp_1265_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1267_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1266_);
lean_dec_ref(v___x_1267_);
goto v___jp_1262_;
}
v___jp_1268_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
return v___x_1270_;
}
v___jp_1271_:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1273_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1272_);
lean_dec_ref(v___x_1273_);
goto v___jp_1268_;
}
v___jp_1274_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
return v___x_1276_;
}
v___jp_1277_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1279_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1278_);
lean_dec_ref(v___x_1279_);
goto v___jp_1274_;
}
v___jp_1280_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
return v___x_1282_;
}
v___jp_1283_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; 
v___x_1284_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
return v___x_1285_;
}
v___jp_1286_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
return v___x_1288_;
}
v___jp_1289_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1291_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1290_);
lean_dec_ref(v___x_1291_);
goto v___jp_1286_;
}
v___jp_1292_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
v___jp_1295_:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
v___jp_1298_:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1300_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1299_);
lean_dec_ref(v___x_1300_);
goto v___jp_1295_;
}
v___jp_1301_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
v___jp_1304_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1306_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1305_);
lean_dec_ref(v___x_1306_);
goto v___jp_1301_;
}
v___jp_1307_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1309_, 0, v___x_1308_);
return v___x_1309_;
}
v___jp_1310_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1311_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1311_);
return v___x_1312_;
}
v___jp_1313_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
return v___x_1315_;
}
v___jp_1316_:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1318_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1317_);
lean_dec_ref(v___x_1318_);
goto v___jp_1313_;
}
v___jp_1319_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
v___jp_1322_:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1324_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1323_);
lean_dec_ref(v___x_1324_);
goto v___jp_1319_;
}
v___jp_1325_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
v___jp_1328_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1330_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1329_);
lean_dec_ref(v___x_1330_);
goto v___jp_1325_;
}
v___jp_1331_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1332_);
return v___x_1333_;
}
v___jp_1334_:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1336_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1335_);
lean_dec_ref(v___x_1336_);
goto v___jp_1331_;
}
v___jp_1337_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1339_, 0, v___x_1338_);
return v___x_1339_;
}
v___jp_1340_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1342_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1341_);
lean_dec_ref(v___x_1342_);
goto v___jp_1337_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object* v_opts_3038_, lean_object* v_opt_3039_, lean_object* v_optArg_x3f_3040_, lean_object* v_a_3041_){
_start:
{
uint32_t v_opt_boxed_3042_; lean_object* v_res_3043_; 
v_opt_boxed_3042_ = lean_unbox_uint32(v_opt_3039_);
lean_dec(v_opt_3039_);
v_res_3043_ = lean_shell_options_process(v_opts_3038_, v_opt_boxed_3042_, v_optArg_x3f_3040_);
return v_res_3043_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3045_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3046_ = lean_string_utf8_byte_size(v___x_3045_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(lean_object* v_s_3047_){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; uint8_t v___x_3051_; 
v___x_3048_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3049_ = lean_string_utf8_byte_size(v_s_3047_);
v___x_3050_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1);
v___x_3051_ = lean_nat_dec_le(v___x_3050_, v___x_3049_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; 
lean_dec_ref(v_s_3047_);
v___x_3052_ = lean_box(0);
return v___x_3052_;
}
else
{
lean_object* v___x_3053_; uint8_t v___x_3054_; 
v___x_3053_ = lean_unsigned_to_nat(0u);
v___x_3054_ = lean_string_memcmp(v_s_3047_, v___x_3048_, v___x_3053_, v___x_3053_, v___x_3050_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; 
lean_dec_ref(v_s_3047_);
v___x_3055_ = lean_box(0);
return v___x_3055_;
}
else
{
lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
lean_inc_ref(v_s_3047_);
v___x_3056_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3056_, 0, v_s_3047_);
lean_ctor_set(v___x_3056_, 1, v___x_3053_);
lean_ctor_set(v___x_3056_, 2, v___x_3049_);
v___x_3057_ = l_String_Slice_pos_x21(v___x_3056_, v___x_3050_);
lean_dec_ref_known(v___x_3056_, 3);
v___x_3058_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3058_, 0, v_s_3047_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
lean_ctor_set(v___x_3058_, 2, v___x_3049_);
v___x_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
return v___x_3059_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* v_s_3060_, lean_object* v_pat_3061_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v_s_3060_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* v_s_3063_, lean_object* v_pat_3064_){
_start:
{
lean_object* v_res_3065_; 
v_res_3065_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v_s_3063_, v_pat_3064_);
lean_dec_ref(v_pat_3064_);
return v_res_3065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* v_mainModuleName_3066_, lean_object* v_val_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v___x_3070_; 
v___x_3070_ = l___private_Lean_Shell_0__Lean_emitZig(v_mainModuleName_3066_, v_val_3067_);
if (lean_obj_tag(v___x_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v___x_3070_, 1);
v___x_3072_ = lean_string_to_utf8(v_a_3071_);
lean_dec(v_a_3071_);
v___x_3073_ = lean_io_prim_handle_write(v_a_3068_, v___x_3072_);
lean_dec_ref(v___x_3072_);
return v___x_3073_;
}
else
{
lean_object* v_a_3074_; lean_object* v___x_3076_; uint8_t v_isShared_3077_; uint8_t v_isSharedCheck_3081_; 
v_a_3074_ = lean_ctor_get(v___x_3070_, 0);
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3070_);
if (v_isSharedCheck_3081_ == 0)
{
v___x_3076_ = v___x_3070_;
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
else
{
lean_inc(v_a_3074_);
lean_dec(v___x_3070_);
v___x_3076_ = lean_box(0);
v_isShared_3077_ = v_isSharedCheck_3081_;
goto v_resetjp_3075_;
}
v_resetjp_3075_:
{
lean_object* v___x_3079_; 
if (v_isShared_3077_ == 0)
{
v___x_3079_ = v___x_3076_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v_a_3074_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* v_mainModuleName_3082_, lean_object* v_val_3083_, lean_object* v_a_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l___private_Lean_Shell_0__Lean_shellMain___lam__0(v_mainModuleName_3082_, v_val_3083_, v_a_3084_);
lean_dec(v_a_3084_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object* v___x_3087_, lean_object* v___x_3088_, lean_object* v_mainModuleName_3089_, lean_object* v_a_3090_, uint8_t v___x_3091_, lean_object* v___x_3092_, lean_object* v_fileName_3093_, lean_object* v___x_3094_, lean_object* v___x_3095_, lean_object* v___x_3096_, lean_object* v___x_3097_, lean_object* v___x_3098_, lean_object* v___x_3099_, lean_object* v___x_3100_, lean_object* v___x_3101_, uint8_t v_run_3102_){
_start:
{
lean_object* v_a_3105_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v_env_3113_; lean_object* v___x_3114_; uint8_t v___x_3115_; lean_object* v_fileName_3117_; lean_object* v_fileMap_3118_; lean_object* v_currRecDepth_3119_; lean_object* v_ref_3120_; lean_object* v_currNamespace_3121_; lean_object* v_openDecls_3122_; lean_object* v_initHeartbeats_3123_; lean_object* v_maxHeartbeats_3124_; lean_object* v_quotContext_3125_; lean_object* v_currMacroScope_3126_; lean_object* v_cancelTk_x3f_3127_; uint8_t v_suppressElabErrors_3128_; lean_object* v_inheritedTraceOptions_3129_; lean_object* v___y_3130_; uint8_t v___y_3162_; uint8_t v___x_3182_; 
v___x_3108_ = lean_io_get_num_heartbeats();
v___x_3109_ = lean_st_mk_ref(v___x_3087_);
v___x_3110_ = l_Lean_inheritedTraceOptions;
v___x_3111_ = lean_st_ref_get(v___x_3110_);
v___x_3112_ = lean_st_ref_get(v___x_3109_);
v_env_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc_ref(v_env_3113_);
lean_dec(v___x_3112_);
v___x_3114_ = l_Lean_diagnostics;
v___x_3115_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v___x_3088_, v___x_3114_);
v___x_3182_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3113_);
lean_dec_ref(v_env_3113_);
if (v___x_3182_ == 0)
{
if (v___x_3115_ == 0)
{
lean_dec_ref(v___x_3092_);
lean_inc(v___x_3109_);
lean_inc(v___x_3097_);
v_fileName_3117_ = v_fileName_3093_;
v_fileMap_3118_ = v___x_3094_;
v_currRecDepth_3119_ = v___x_3095_;
v_ref_3120_ = v___x_3096_;
v_currNamespace_3121_ = v___x_3097_;
v_openDecls_3122_ = v___x_3098_;
v_initHeartbeats_3123_ = v___x_3108_;
v_maxHeartbeats_3124_ = v___x_3099_;
v_quotContext_3125_ = v___x_3097_;
v_currMacroScope_3126_ = v___x_3100_;
v_cancelTk_x3f_3127_ = v___x_3101_;
v_suppressElabErrors_3128_ = v_run_3102_;
v_inheritedTraceOptions_3129_ = v___x_3111_;
v___y_3130_ = v___x_3109_;
goto v___jp_3116_;
}
else
{
v___y_3162_ = v___x_3182_;
goto v___jp_3161_;
}
}
else
{
v___y_3162_ = v___x_3115_;
goto v___jp_3161_;
}
v___jp_3104_:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = lean_mk_io_user_error(v_a_3105_);
v___x_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
return v___x_3107_;
}
v___jp_3116_:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3131_ = l_Lean_maxRecDepth;
v___x_3132_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v___x_3088_, v___x_3131_);
v___x_3133_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3133_, 0, v_fileName_3117_);
lean_ctor_set(v___x_3133_, 1, v_fileMap_3118_);
lean_ctor_set(v___x_3133_, 2, v___x_3088_);
lean_ctor_set(v___x_3133_, 3, v_currRecDepth_3119_);
lean_ctor_set(v___x_3133_, 4, v___x_3132_);
lean_ctor_set(v___x_3133_, 5, v_ref_3120_);
lean_ctor_set(v___x_3133_, 6, v_currNamespace_3121_);
lean_ctor_set(v___x_3133_, 7, v_openDecls_3122_);
lean_ctor_set(v___x_3133_, 8, v_initHeartbeats_3123_);
lean_ctor_set(v___x_3133_, 9, v_maxHeartbeats_3124_);
lean_ctor_set(v___x_3133_, 10, v_quotContext_3125_);
lean_ctor_set(v___x_3133_, 11, v_currMacroScope_3126_);
lean_ctor_set(v___x_3133_, 12, v_cancelTk_x3f_3127_);
lean_ctor_set(v___x_3133_, 13, v_inheritedTraceOptions_3129_);
lean_ctor_set_uint8(v___x_3133_, sizeof(void*)*14, v___x_3115_);
lean_ctor_set_uint8(v___x_3133_, sizeof(void*)*14 + 1, v_suppressElabErrors_3128_);
v___x_3134_ = l_Lean_Compiler_LCNF_emitC(v_mainModuleName_3089_, v___x_3133_, v___y_3130_);
lean_dec(v___y_3130_);
lean_dec_ref_known(v___x_3133_, 14);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3136_ = lean_st_ref_get(v___x_3109_);
lean_dec(v___x_3109_);
lean_dec(v___x_3136_);
v___x_3137_ = lean_string_to_utf8(v_a_3135_);
lean_dec(v_a_3135_);
v___x_3138_ = lean_io_prim_handle_write(v_a_3090_, v___x_3137_);
lean_dec_ref(v___x_3137_);
return v___x_3138_;
}
else
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3160_; 
lean_dec(v___x_3109_);
v_a_3139_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3141_ = v___x_3134_;
v_isShared_3142_ = v_isSharedCheck_3160_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3134_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3160_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
if (lean_obj_tag(v_a_3139_) == 0)
{
lean_object* v_msg_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3147_; 
v_msg_3143_ = lean_ctor_get(v_a_3139_, 1);
lean_inc_ref(v_msg_3143_);
lean_dec_ref_known(v_a_3139_, 2);
v___x_3144_ = l_Lean_MessageData_toString(v_msg_3143_);
v___x_3145_ = lean_mk_io_user_error(v___x_3144_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3145_);
v___x_3147_ = v___x_3141_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v___x_3145_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
else
{
lean_object* v_id_3149_; lean_object* v___x_3150_; 
lean_del_object(v___x_3141_);
v_id_3149_ = lean_ctor_get(v_a_3139_, 0);
lean_inc(v_id_3149_);
lean_dec_ref_known(v_a_3139_, 2);
v___x_3150_ = l_Lean_InternalExceptionId_getName(v_id_3149_);
if (lean_obj_tag(v___x_3150_) == 0)
{
lean_object* v_a_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; 
lean_dec(v_id_3149_);
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3151_);
lean_dec_ref_known(v___x_3150_, 1);
v___x_3152_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__18));
v___x_3153_ = l_Lean_Name_toString(v_a_3151_, v___x_3091_);
v___x_3154_ = lean_string_append(v___x_3152_, v___x_3153_);
lean_dec_ref(v___x_3153_);
v_a_3105_ = v___x_3154_;
goto v___jp_3104_;
}
else
{
lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
lean_dec_ref_known(v___x_3150_, 1);
v___x_3155_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__19));
v___x_3156_ = l_Nat_reprFast(v_id_3149_);
v___x_3157_ = lean_string_append(v___x_3155_, v___x_3156_);
lean_dec_ref(v___x_3156_);
v___x_3158_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__20));
v___x_3159_ = lean_string_append(v___x_3157_, v___x_3158_);
v_a_3105_ = v___x_3159_;
goto v___jp_3104_;
}
}
}
}
}
v___jp_3161_:
{
if (v___y_3162_ == 0)
{
lean_object* v___x_3163_; lean_object* v_env_3164_; lean_object* v_nextMacroScope_3165_; lean_object* v_ngen_3166_; lean_object* v_auxDeclNGen_3167_; lean_object* v_traceState_3168_; lean_object* v_messages_3169_; lean_object* v_infoState_3170_; lean_object* v_snapshotTasks_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3180_; 
v___x_3163_ = lean_st_ref_take(v___x_3109_);
v_env_3164_ = lean_ctor_get(v___x_3163_, 0);
v_nextMacroScope_3165_ = lean_ctor_get(v___x_3163_, 1);
v_ngen_3166_ = lean_ctor_get(v___x_3163_, 2);
v_auxDeclNGen_3167_ = lean_ctor_get(v___x_3163_, 3);
v_traceState_3168_ = lean_ctor_get(v___x_3163_, 4);
v_messages_3169_ = lean_ctor_get(v___x_3163_, 6);
v_infoState_3170_ = lean_ctor_get(v___x_3163_, 7);
v_snapshotTasks_3171_ = lean_ctor_get(v___x_3163_, 8);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; 
v_unused_3181_ = lean_ctor_get(v___x_3163_, 5);
lean_dec(v_unused_3181_);
v___x_3173_ = v___x_3163_;
v_isShared_3174_ = v_isSharedCheck_3180_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_snapshotTasks_3171_);
lean_inc(v_infoState_3170_);
lean_inc(v_messages_3169_);
lean_inc(v_traceState_3168_);
lean_inc(v_auxDeclNGen_3167_);
lean_inc(v_ngen_3166_);
lean_inc(v_nextMacroScope_3165_);
lean_inc(v_env_3164_);
lean_dec(v___x_3163_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3180_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3175_; lean_object* v___x_3177_; 
v___x_3175_ = l_Lean_Kernel_enableDiag(v_env_3164_, v___x_3115_);
if (v_isShared_3174_ == 0)
{
lean_ctor_set(v___x_3173_, 5, v___x_3092_);
lean_ctor_set(v___x_3173_, 0, v___x_3175_);
v___x_3177_ = v___x_3173_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3175_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_nextMacroScope_3165_);
lean_ctor_set(v_reuseFailAlloc_3179_, 2, v_ngen_3166_);
lean_ctor_set(v_reuseFailAlloc_3179_, 3, v_auxDeclNGen_3167_);
lean_ctor_set(v_reuseFailAlloc_3179_, 4, v_traceState_3168_);
lean_ctor_set(v_reuseFailAlloc_3179_, 5, v___x_3092_);
lean_ctor_set(v_reuseFailAlloc_3179_, 6, v_messages_3169_);
lean_ctor_set(v_reuseFailAlloc_3179_, 7, v_infoState_3170_);
lean_ctor_set(v_reuseFailAlloc_3179_, 8, v_snapshotTasks_3171_);
v___x_3177_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; 
v___x_3178_ = lean_st_ref_set(v___x_3109_, v___x_3177_);
lean_inc(v___x_3109_);
lean_inc(v___x_3097_);
v_fileName_3117_ = v_fileName_3093_;
v_fileMap_3118_ = v___x_3094_;
v_currRecDepth_3119_ = v___x_3095_;
v_ref_3120_ = v___x_3096_;
v_currNamespace_3121_ = v___x_3097_;
v_openDecls_3122_ = v___x_3098_;
v_initHeartbeats_3123_ = v___x_3108_;
v_maxHeartbeats_3124_ = v___x_3099_;
v_quotContext_3125_ = v___x_3097_;
v_currMacroScope_3126_ = v___x_3100_;
v_cancelTk_x3f_3127_ = v___x_3101_;
v_suppressElabErrors_3128_ = v_run_3102_;
v_inheritedTraceOptions_3129_ = v___x_3111_;
v___y_3130_ = v___x_3109_;
goto v___jp_3116_;
}
}
}
else
{
lean_dec_ref(v___x_3092_);
lean_inc(v___x_3109_);
lean_inc(v___x_3097_);
v_fileName_3117_ = v_fileName_3093_;
v_fileMap_3118_ = v___x_3094_;
v_currRecDepth_3119_ = v___x_3095_;
v_ref_3120_ = v___x_3096_;
v_currNamespace_3121_ = v___x_3097_;
v_openDecls_3122_ = v___x_3098_;
v_initHeartbeats_3123_ = v___x_3108_;
v_maxHeartbeats_3124_ = v___x_3099_;
v_quotContext_3125_ = v___x_3097_;
v_currMacroScope_3126_ = v___x_3100_;
v_cancelTk_x3f_3127_ = v___x_3101_;
v_suppressElabErrors_3128_ = v_run_3102_;
v_inheritedTraceOptions_3129_ = v___x_3111_;
v___y_3130_ = v___x_3109_;
goto v___jp_3116_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object** _args){
lean_object* v___x_3183_ = _args[0];
lean_object* v___x_3184_ = _args[1];
lean_object* v_mainModuleName_3185_ = _args[2];
lean_object* v_a_3186_ = _args[3];
lean_object* v___x_3187_ = _args[4];
lean_object* v___x_3188_ = _args[5];
lean_object* v_fileName_3189_ = _args[6];
lean_object* v___x_3190_ = _args[7];
lean_object* v___x_3191_ = _args[8];
lean_object* v___x_3192_ = _args[9];
lean_object* v___x_3193_ = _args[10];
lean_object* v___x_3194_ = _args[11];
lean_object* v___x_3195_ = _args[12];
lean_object* v___x_3196_ = _args[13];
lean_object* v___x_3197_ = _args[14];
lean_object* v_run_3198_ = _args[15];
lean_object* v___y_3199_ = _args[16];
_start:
{
uint8_t v___x_21072__boxed_3200_; uint8_t v_run_boxed_3201_; lean_object* v_res_3202_; 
v___x_21072__boxed_3200_ = lean_unbox(v___x_3187_);
v_run_boxed_3201_ = lean_unbox(v_run_3198_);
v_res_3202_ = l___private_Lean_Shell_0__Lean_shellMain___lam__1(v___x_3183_, v___x_3184_, v_mainModuleName_3185_, v_a_3186_, v___x_21072__boxed_3200_, v___x_3188_, v_fileName_3189_, v___x_3190_, v___x_3191_, v___x_3192_, v___x_3193_, v___x_3194_, v___x_3195_, v___x_3196_, v___x_3197_, v_run_boxed_3201_);
lean_dec(v_a_3186_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* v_s_3203_){
_start:
{
uint32_t v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3205_ = 10;
v___x_3206_ = lean_string_push(v_s_3203_, v___x_3205_);
v___x_3207_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3206_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* v_s_3208_, lean_object* v_a_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v_s_3208_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object* v_val_3211_, lean_object* v_a_3212_, lean_object* v_b_3213_){
_start:
{
lean_object* v_str_3214_; lean_object* v_startInclusive_3215_; lean_object* v_endExclusive_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v_str_3214_ = lean_ctor_get(v_val_3211_, 0);
v_startInclusive_3215_ = lean_ctor_get(v_val_3211_, 1);
v_endExclusive_3216_ = lean_ctor_get(v_val_3211_, 2);
v___x_3217_ = lean_nat_sub(v_endExclusive_3216_, v_startInclusive_3215_);
v___x_3218_ = lean_nat_dec_eq(v_a_3212_, v___x_3217_);
lean_dec(v___x_3217_);
if (v___x_3218_ == 0)
{
lean_object* v___x_3219_; uint32_t v___x_3220_; uint32_t v___x_3221_; uint8_t v___x_3222_; 
v___x_3219_ = lean_nat_add(v_startInclusive_3215_, v_a_3212_);
v___x_3220_ = lean_string_utf8_get_fast(v_str_3214_, v___x_3219_);
v___x_3221_ = 10;
v___x_3222_ = lean_uint32_dec_eq(v___x_3220_, v___x_3221_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_dec(v_a_3212_);
v___x_3223_ = lean_box(0);
v___x_3224_ = lean_string_utf8_next_fast(v_str_3214_, v___x_3219_);
lean_dec(v___x_3219_);
v___x_3225_ = lean_nat_sub(v___x_3224_, v_startInclusive_3215_);
v_a_3212_ = v___x_3225_;
v_b_3213_ = v___x_3223_;
goto _start;
}
else
{
lean_object* v___x_3227_; 
lean_dec(v___x_3219_);
v___x_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3227_, 0, v_a_3212_);
return v___x_3227_;
}
}
else
{
lean_dec(v_a_3212_);
lean_inc(v_b_3213_);
return v_b_3213_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___boxed(lean_object* v_val_3228_, lean_object* v_a_3229_, lean_object* v_b_3230_){
_start:
{
lean_object* v_res_3231_; 
v_res_3231_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3228_, v_a_3229_, v_b_3230_);
lean_dec(v_b_3230_);
lean_dec_ref(v_val_3228_);
return v_res_3231_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* v_s_3232_){
_start:
{
uint32_t v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3234_ = 10;
v___x_3235_ = lean_string_push(v_s_3232_, v___x_3234_);
v___x_3236_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_3235_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* v_s_3237_, lean_object* v_a_3238_){
_start:
{
lean_object* v_res_3239_; 
v_res_3239_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_s_3237_);
return v_res_3239_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0(void){
_start:
{
lean_object* v___x_3240_; uint8_t v___x_3241_; 
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_internal_has_address_sanitizer(v___x_3240_);
return v___x_3241_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10(void){
_start:
{
lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3256_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__9));
v___x_3257_ = lean_string_utf8_byte_size(v___x_3256_);
return v___x_3257_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11(void){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3258_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__10, &l___private_Lean_Shell_0__Lean_shellMain___closed__10_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10);
v___x_3259_ = lean_unsigned_to_nat(0u);
v___x_3260_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__9));
v___x_3261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3260_);
lean_ctor_set(v___x_3261_, 1, v___x_3259_);
lean_ctor_set(v___x_3261_, 2, v___x_3258_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* v_args_3265_, lean_object* v_opts_3266_){
_start:
{
lean_object* v_fns_3269_; lean_object* v___y_3295_; lean_object* v_leanOpts_3309_; lean_object* v_forwardedArgs_3310_; uint8_t v_component_3311_; uint8_t v_printPrefix_3312_; uint8_t v_printLibDir_3313_; uint8_t v_useStdin_3314_; uint8_t v_onlyDeps_3315_; uint8_t v_onlySrcDeps_3316_; uint8_t v_depsJson_3317_; uint32_t v_trustLevel_3318_; lean_object* v_rootDir_x3f_3319_; lean_object* v_setupFileName_x3f_3320_; lean_object* v_oleanFileName_x3f_3321_; lean_object* v_ileanFileName_x3f_3322_; lean_object* v_cFileName_x3f_3323_; lean_object* v_bcFileName_x3f_3324_; lean_object* v_zigFileName_x3f_3325_; uint8_t v_jsonOutput_3326_; lean_object* v_errorOnKinds_3327_; uint8_t v_printStats_3328_; uint8_t v_run_3329_; lean_object* v_incrSaveFileName_x3f_3330_; lean_object* v_incrLoadFileName_x3f_3331_; lean_object* v_incrHeaderSaveFileName_x3f_3332_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___y_3376_; lean_object* v___y_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; 
v_leanOpts_3309_ = lean_ctor_get(v_opts_3266_, 0);
lean_inc_ref(v_leanOpts_3309_);
v_forwardedArgs_3310_ = lean_ctor_get(v_opts_3266_, 1);
lean_inc_ref(v_forwardedArgs_3310_);
v_component_3311_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 8);
v_printPrefix_3312_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 9);
v_printLibDir_3313_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 10);
v_useStdin_3314_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 11);
v_onlyDeps_3315_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 12);
v_onlySrcDeps_3316_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 13);
v_depsJson_3317_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 14);
v_trustLevel_3318_ = lean_ctor_get_uint32(v_opts_3266_, sizeof(void*)*14);
v_rootDir_x3f_3319_ = lean_ctor_get(v_opts_3266_, 3);
lean_inc(v_rootDir_x3f_3319_);
v_setupFileName_x3f_3320_ = lean_ctor_get(v_opts_3266_, 4);
lean_inc(v_setupFileName_x3f_3320_);
v_oleanFileName_x3f_3321_ = lean_ctor_get(v_opts_3266_, 5);
lean_inc(v_oleanFileName_x3f_3321_);
v_ileanFileName_x3f_3322_ = lean_ctor_get(v_opts_3266_, 6);
lean_inc(v_ileanFileName_x3f_3322_);
v_cFileName_x3f_3323_ = lean_ctor_get(v_opts_3266_, 7);
lean_inc(v_cFileName_x3f_3323_);
v_bcFileName_x3f_3324_ = lean_ctor_get(v_opts_3266_, 8);
lean_inc(v_bcFileName_x3f_3324_);
v_zigFileName_x3f_3325_ = lean_ctor_get(v_opts_3266_, 9);
lean_inc(v_zigFileName_x3f_3325_);
v_jsonOutput_3326_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 15);
v_errorOnKinds_3327_ = lean_ctor_get(v_opts_3266_, 10);
lean_inc_ref(v_errorOnKinds_3327_);
v_printStats_3328_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 16);
v_run_3329_ = lean_ctor_get_uint8(v_opts_3266_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3330_ = lean_ctor_get(v_opts_3266_, 11);
lean_inc(v_incrSaveFileName_x3f_3330_);
v_incrLoadFileName_x3f_3331_ = lean_ctor_get(v_opts_3266_, 12);
lean_inc(v_incrLoadFileName_x3f_3331_);
v_incrHeaderSaveFileName_x3f_3332_ = lean_ctor_get(v_opts_3266_, 13);
lean_inc(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec_ref(v_opts_3266_);
if (v_printPrefix_3312_ == 0)
{
if (v_printLibDir_3313_ == 0)
{
uint8_t v___x_3403_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v_mainModuleName_3410_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v_contents_3511_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v_str_3541_; lean_object* v_startInclusive_3542_; lean_object* v_endExclusive_3543_; lean_object* v___y_3544_; lean_object* v___y_3575_; lean_object* v___y_3576_; lean_object* v___y_3577_; lean_object* v___y_3578_; lean_object* v___y_3641_; lean_object* v___y_3642_; lean_object* v_fileName_3643_; lean_object* v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3681_; lean_object* v___y_3682_; uint8_t v___y_3713_; lean_object* v_fst_3714_; lean_object* v_snd_3715_; uint8_t v___y_3717_; lean_object* v___x_3747_; lean_object* v_maxMemory_3748_; lean_object* v___x_3749_; uint8_t v___x_3750_; 
v___x_3403_ = 1;
v___x_3747_ = l___private_Lean_Shell_0__Lean_maxMemory;
v_maxMemory_3748_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_leanOpts_3309_, v___x_3747_);
v___x_3749_ = lean_unsigned_to_nat(0u);
v___x_3750_ = lean_nat_dec_eq(v_maxMemory_3748_, v___x_3749_);
if (v___x_3750_ == 0)
{
size_t v___x_3751_; size_t v___x_3752_; size_t v___x_3753_; size_t v___x_3754_; lean_object* v___x_3755_; 
v___x_3751_ = lean_usize_of_nat(v_maxMemory_3748_);
lean_dec(v_maxMemory_3748_);
v___x_3752_ = ((size_t)10ULL);
v___x_3753_ = lean_usize_shift_left(v___x_3751_, v___x_3752_);
v___x_3754_ = lean_usize_shift_left(v___x_3753_, v___x_3752_);
v___x_3755_ = lean_internal_set_max_memory(v___x_3754_);
goto v___jp_3738_;
}
else
{
lean_dec(v_maxMemory_3748_);
goto v___jp_3738_;
}
v___jp_3404_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3411_ = lean_unsigned_to_nat(0u);
v___x_3412_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
lean_inc(v_mainModuleName_3410_);
lean_inc_ref(v_leanOpts_3309_);
v___x_3413_ = l_Lean_Elab_runFrontend(v___y_3409_, v_leanOpts_3309_, v___y_3406_, v_mainModuleName_3410_, v_trustLevel_3318_, v_oleanFileName_x3f_3321_, v_ileanFileName_x3f_3322_, v_jsonOutput_3326_, v_errorOnKinds_3327_, v___x_3412_, v_printStats_3328_, v___y_3407_, v_incrSaveFileName_x3f_3330_, v_incrLoadFileName_x3f_3331_, v_incrHeaderSaveFileName_x3f_3332_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_ileanFileName_x3f_3322_);
if (lean_obj_tag(v___x_3413_) == 0)
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3481_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3416_ = v___x_3413_;
v_isShared_3417_ = v_isSharedCheck_3481_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3413_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3481_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
if (lean_obj_tag(v_a_3414_) == 1)
{
if (v_run_3329_ == 0)
{
lean_del_object(v___x_3416_);
lean_dec(v___y_3408_);
if (lean_obj_tag(v_cFileName_x3f_3323_) == 1)
{
lean_object* v_val_3418_; lean_object* v_val_3419_; uint8_t v___x_3420_; lean_object* v___x_3421_; 
v_val_3418_ = lean_ctor_get(v_a_3414_, 0);
lean_inc(v_val_3418_);
v_val_3419_ = lean_ctor_get(v_cFileName_x3f_3323_, 0);
lean_inc(v_val_3419_);
lean_dec_ref_known(v_cFileName_x3f_3323_, 1);
v___x_3420_ = 1;
v___x_3421_ = lean_io_prim_handle_mk(v_val_3419_, v___x_3420_);
if (lean_obj_tag(v___x_3421_) == 0)
{
lean_object* v_a_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___f_3442_; lean_object* v___x_3443_; 
lean_dec(v_val_3419_);
v_a_3422_ = lean_ctor_get(v___x_3421_, 0);
lean_inc(v_a_3422_);
lean_dec_ref_known(v___x_3421_, 1);
v___x_3423_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__5));
v___x_3424_ = l_Lean_instInhabitedFileMap_default;
v___x_3425_ = l_Lean_Options_empty;
v___x_3426_ = lean_box(0);
v___x_3427_ = lean_box(0);
v___x_3428_ = lean_box(0);
v___x_3429_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__15, &l___private_Lean_Shell_0__Lean_emitZig___closed__15_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15);
v___x_3430_ = l_Lean_firstFrontendMacroScope;
v___x_3431_ = lean_box(0);
v___x_3432_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__6, &l___private_Lean_Shell_0__Lean_emitZig___closed__6_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6);
v___x_3433_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__9));
v___x_3434_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__6));
v___x_3435_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__11, &l___private_Lean_Shell_0__Lean_emitZig___closed__11_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11);
v___x_3436_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__4, &l___private_Lean_Shell_0__Lean_emitZig___closed__4_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4);
v___x_3437_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__5, &l___private_Lean_Shell_0__Lean_emitZig___closed__5_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5);
v___x_3438_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__12, &l___private_Lean_Shell_0__Lean_emitZig___closed__12_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12);
lean_inc(v_val_3418_);
v___x_3439_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3439_, 0, v_val_3418_);
lean_ctor_set(v___x_3439_, 1, v___x_3432_);
lean_ctor_set(v___x_3439_, 2, v___x_3433_);
lean_ctor_set(v___x_3439_, 3, v___x_3434_);
lean_ctor_set(v___x_3439_, 4, v___x_3435_);
lean_ctor_set(v___x_3439_, 5, v___x_3436_);
lean_ctor_set(v___x_3439_, 6, v___x_3437_);
lean_ctor_set(v___x_3439_, 7, v___x_3438_);
lean_ctor_set(v___x_3439_, 8, v___x_3412_);
v___x_3440_ = lean_box(v___x_3403_);
v___x_3441_ = lean_box(v_run_3329_);
lean_inc(v_mainModuleName_3410_);
v___f_3442_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed), 17, 16);
lean_closure_set(v___f_3442_, 0, v___x_3439_);
lean_closure_set(v___f_3442_, 1, v___x_3425_);
lean_closure_set(v___f_3442_, 2, v_mainModuleName_3410_);
lean_closure_set(v___f_3442_, 3, v_a_3422_);
lean_closure_set(v___f_3442_, 4, v___x_3440_);
lean_closure_set(v___f_3442_, 5, v___x_3436_);
lean_closure_set(v___f_3442_, 6, v___y_3405_);
lean_closure_set(v___f_3442_, 7, v___x_3424_);
lean_closure_set(v___f_3442_, 8, v___x_3411_);
lean_closure_set(v___f_3442_, 9, v___x_3426_);
lean_closure_set(v___f_3442_, 10, v___x_3427_);
lean_closure_set(v___f_3442_, 11, v___x_3428_);
lean_closure_set(v___f_3442_, 12, v___x_3429_);
lean_closure_set(v___f_3442_, 13, v___x_3430_);
lean_closure_set(v___f_3442_, 14, v___x_3431_);
lean_closure_set(v___f_3442_, 15, v___x_3441_);
v___x_3443_ = l_Lean_profileitIOUnsafe___redArg(v___x_3423_, v_leanOpts_3309_, v___f_3442_, v___x_3427_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_dec_ref_known(v___x_3443_, 1);
lean_inc(v_mainModuleName_3410_);
lean_inc(v_val_3418_);
v___y_3376_ = v_val_3418_;
v___y_3377_ = v_mainModuleName_3410_;
v___y_3378_ = v_val_3418_;
v___y_3379_ = v_a_3414_;
v___y_3380_ = v_mainModuleName_3410_;
goto v___jp_3375_;
}
else
{
lean_object* v_a_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3451_; 
lean_dec(v_val_3418_);
lean_dec_ref_known(v_a_3414_, 1);
lean_dec(v_mainModuleName_3410_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3446_ = v___x_3443_;
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_a_3444_);
lean_dec(v___x_3443_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3449_; 
if (v_isShared_3447_ == 0)
{
v___x_3449_ = v___x_3446_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3444_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
else
{
lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
lean_dec_ref_known(v___x_3421_, 1);
lean_dec(v_val_3418_);
lean_dec_ref_known(v_a_3414_, 1);
lean_dec(v_mainModuleName_3410_);
lean_dec_ref(v___y_3405_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3452_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__2));
v___x_3453_ = lean_string_append(v___x_3452_, v_val_3419_);
lean_dec(v_val_3419_);
v___x_3454_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3455_ = lean_string_append(v___x_3453_, v___x_3454_);
v___x_3456_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3455_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3464_; 
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3464_ == 0)
{
lean_object* v_unused_3465_; 
v_unused_3465_ = lean_ctor_get(v___x_3456_, 0);
lean_dec(v_unused_3465_);
v___x_3458_ = v___x_3456_;
v_isShared_3459_ = v_isSharedCheck_3464_;
goto v_resetjp_3457_;
}
else
{
lean_dec(v___x_3456_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3464_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3460_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3459_ == 0)
{
lean_ctor_set(v___x_3458_, 0, v___x_3460_);
v___x_3462_ = v___x_3458_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3460_);
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
lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3473_; 
v_a_3466_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3473_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3468_ = v___x_3456_;
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_dec(v___x_3456_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3473_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3471_; 
if (v_isShared_3469_ == 0)
{
v___x_3471_ = v___x_3468_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v_a_3466_);
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
else
{
lean_object* v_val_3474_; 
lean_dec_ref(v___y_3405_);
lean_dec(v_cFileName_x3f_3323_);
v_val_3474_ = lean_ctor_get(v_a_3414_, 0);
lean_inc_n(v_val_3474_, 2);
lean_inc(v_mainModuleName_3410_);
v___y_3376_ = v_val_3474_;
v___y_3377_ = v_mainModuleName_3410_;
v___y_3378_ = v_val_3474_;
v___y_3379_ = v_a_3414_;
v___y_3380_ = v_mainModuleName_3410_;
goto v___jp_3375_;
}
}
else
{
lean_object* v_val_3475_; uint32_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
lean_dec(v_mainModuleName_3410_);
lean_dec_ref(v___y_3405_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
v_val_3475_ = lean_ctor_get(v_a_3414_, 0);
lean_inc(v_val_3475_);
lean_dec_ref_known(v_a_3414_, 1);
v___x_3476_ = lean_eval_main(v_val_3475_, v_leanOpts_3309_, v___y_3408_);
lean_dec(v___y_3408_);
lean_dec_ref(v_leanOpts_3309_);
lean_dec(v_val_3475_);
v___x_3477_ = lean_box_uint32(v___x_3476_);
if (v_isShared_3417_ == 0)
{
lean_ctor_set(v___x_3416_, 0, v___x_3477_);
v___x_3479_ = v___x_3416_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v___x_3477_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
}
else
{
lean_del_object(v___x_3416_);
lean_dec(v_mainModuleName_3410_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3405_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec_ref(v_leanOpts_3309_);
v___y_3295_ = v_a_3414_;
goto v___jp_3294_;
}
}
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec(v_mainModuleName_3410_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3405_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3482_ = lean_ctor_get(v___x_3413_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3413_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3413_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
v___jp_3490_:
{
if (lean_obj_tag(v___y_3496_) == 0)
{
lean_object* v_a_3497_; 
v_a_3497_ = lean_ctor_get(v___y_3496_, 0);
lean_inc(v_a_3497_);
lean_dec_ref_known(v___y_3496_, 1);
v___y_3405_ = v___y_3491_;
v___y_3406_ = v___y_3492_;
v___y_3407_ = v___y_3493_;
v___y_3408_ = v___y_3494_;
v___y_3409_ = v___y_3495_;
v_mainModuleName_3410_ = v_a_3497_;
goto v___jp_3404_;
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec_ref(v___y_3495_);
lean_dec(v___y_3494_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3498_ = lean_ctor_get(v___y_3496_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___y_3496_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___y_3496_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___y_3496_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
v___jp_3506_:
{
if (lean_obj_tag(v_setupFileName_x3f_3320_) == 0)
{
lean_object* v___x_3512_; 
v___x_3512_ = lean_box(0);
if (lean_obj_tag(v___y_3510_) == 1)
{
lean_object* v_val_3513_; lean_object* v___x_3514_; 
v_val_3513_ = lean_ctor_get(v___y_3510_, 0);
lean_inc(v_val_3513_);
lean_dec_ref_known(v___y_3510_, 1);
v___x_3514_ = l_Lean_moduleNameOfFileName(v_val_3513_, v_rootDir_x3f_3319_);
if (lean_obj_tag(v___x_3514_) == 0)
{
v___y_3491_ = v___y_3507_;
v___y_3492_ = v___y_3508_;
v___y_3493_ = v___x_3512_;
v___y_3494_ = v___y_3509_;
v___y_3495_ = v_contents_3511_;
v___y_3496_ = v___x_3514_;
goto v___jp_3490_;
}
else
{
if (lean_obj_tag(v_oleanFileName_x3f_3321_) == 0)
{
if (lean_obj_tag(v_cFileName_x3f_3323_) == 0)
{
if (lean_obj_tag(v_zigFileName_x3f_3325_) == 0)
{
lean_object* v___x_3515_; 
lean_dec_ref_known(v___x_3514_, 1);
v___x_3515_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___y_3405_ = v___y_3507_;
v___y_3406_ = v___y_3508_;
v___y_3407_ = v___x_3512_;
v___y_3408_ = v___y_3509_;
v___y_3409_ = v_contents_3511_;
v_mainModuleName_3410_ = v___x_3515_;
goto v___jp_3404_;
}
else
{
v___y_3491_ = v___y_3507_;
v___y_3492_ = v___y_3508_;
v___y_3493_ = v___x_3512_;
v___y_3494_ = v___y_3509_;
v___y_3495_ = v_contents_3511_;
v___y_3496_ = v___x_3514_;
goto v___jp_3490_;
}
}
else
{
v___y_3491_ = v___y_3507_;
v___y_3492_ = v___y_3508_;
v___y_3493_ = v___x_3512_;
v___y_3494_ = v___y_3509_;
v___y_3495_ = v_contents_3511_;
v___y_3496_ = v___x_3514_;
goto v___jp_3490_;
}
}
else
{
v___y_3491_ = v___y_3507_;
v___y_3492_ = v___y_3508_;
v___y_3493_ = v___x_3512_;
v___y_3494_ = v___y_3509_;
v___y_3495_ = v_contents_3511_;
v___y_3496_ = v___x_3514_;
goto v___jp_3490_;
}
}
}
else
{
lean_object* v___x_3516_; 
lean_dec(v___y_3510_);
lean_dec(v_rootDir_x3f_3319_);
v___x_3516_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___y_3405_ = v___y_3507_;
v___y_3406_ = v___y_3508_;
v___y_3407_ = v___x_3512_;
v___y_3408_ = v___y_3509_;
v___y_3409_ = v_contents_3511_;
v_mainModuleName_3410_ = v___x_3516_;
goto v___jp_3404_;
}
}
else
{
lean_object* v_val_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3535_; 
lean_dec(v___y_3510_);
lean_dec(v_rootDir_x3f_3319_);
v_val_3517_ = lean_ctor_get(v_setupFileName_x3f_3320_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v_setupFileName_x3f_3320_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3519_ = v_setupFileName_x3f_3320_;
v_isShared_3520_ = v_isSharedCheck_3535_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_val_3517_);
lean_dec(v_setupFileName_x3f_3320_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3535_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3521_; 
v___x_3521_ = l_Lean_ModuleSetup_load(v_val_3517_);
lean_dec(v_val_3517_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v_name_3523_; lean_object* v___x_3525_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
v_name_3523_ = lean_ctor_get(v_a_3522_, 0);
lean_inc(v_name_3523_);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v_a_3522_);
v___x_3525_ = v___x_3519_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_a_3522_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
v___y_3405_ = v___y_3507_;
v___y_3406_ = v___y_3508_;
v___y_3407_ = v___x_3525_;
v___y_3408_ = v___y_3509_;
v___y_3409_ = v_contents_3511_;
v_mainModuleName_3410_ = v_name_3523_;
goto v___jp_3404_;
}
}
else
{
lean_object* v_a_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3534_; 
lean_del_object(v___x_3519_);
lean_dec_ref(v_contents_3511_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3527_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3534_ == 0)
{
v___x_3529_ = v___x_3521_;
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_a_3527_);
lean_dec(v___x_3521_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3534_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3532_; 
if (v_isShared_3530_ == 0)
{
v___x_3532_ = v___x_3529_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v_a_3527_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
}
}
v___jp_3536_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; uint8_t v___x_3549_; 
v___x_3545_ = lean_nat_add(v_startInclusive_3542_, v___y_3544_);
lean_dec(v___y_3544_);
lean_inc(v___x_3545_);
lean_inc_ref(v_str_3541_);
v___x_3546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3546_, 0, v_str_3541_);
lean_ctor_set(v___x_3546_, 1, v_startInclusive_3542_);
lean_ctor_set(v___x_3546_, 2, v___x_3545_);
v___x_3547_ = l_String_Slice_trimAscii(v___x_3546_);
v___x_3548_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__11, &l___private_Lean_Shell_0__Lean_shellMain___closed__11_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11);
v___x_3549_ = l_String_Slice_beq(v___x_3547_, v___x_3548_);
if (v___x_3549_ == 0)
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
lean_dec(v___x_3545_);
lean_dec(v_endExclusive_3543_);
lean_dec_ref(v_str_3541_);
lean_dec(v___y_3540_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec_ref(v___y_3537_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3550_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__12));
v___x_3551_ = l_String_Slice_toString(v___x_3547_);
lean_dec_ref(v___x_3547_);
v___x_3552_ = lean_string_append(v___x_3550_, v___x_3551_);
lean_dec_ref(v___x_3551_);
v___x_3553_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_3554_ = lean_string_append(v___x_3552_, v___x_3553_);
v___x_3555_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3554_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v___x_3557_; uint8_t v_isShared_3558_; uint8_t v_isSharedCheck_3563_; 
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3563_ == 0)
{
lean_object* v_unused_3564_; 
v_unused_3564_ = lean_ctor_get(v___x_3555_, 0);
lean_dec(v_unused_3564_);
v___x_3557_ = v___x_3555_;
v_isShared_3558_ = v_isSharedCheck_3563_;
goto v_resetjp_3556_;
}
else
{
lean_dec(v___x_3555_);
v___x_3557_ = lean_box(0);
v_isShared_3558_ = v_isSharedCheck_3563_;
goto v_resetjp_3556_;
}
v_resetjp_3556_:
{
lean_object* v___x_3559_; lean_object* v___x_3561_; 
v___x_3559_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3558_ == 0)
{
lean_ctor_set(v___x_3557_, 0, v___x_3559_);
v___x_3561_ = v___x_3557_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v___x_3559_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
else
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
v_a_3565_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3555_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3555_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3565_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
else
{
lean_object* v___x_3573_; 
lean_dec_ref(v___x_3547_);
v___x_3573_ = lean_string_utf8_extract(v_str_3541_, v___x_3545_, v_endExclusive_3543_);
lean_dec(v_endExclusive_3543_);
lean_dec(v___x_3545_);
lean_dec_ref(v_str_3541_);
v___y_3507_ = v___y_3537_;
v___y_3508_ = v___y_3538_;
v___y_3509_ = v___y_3539_;
v___y_3510_ = v___y_3540_;
v_contents_3511_ = v___x_3573_;
goto v___jp_3506_;
}
}
v___jp_3574_:
{
if (lean_obj_tag(v___y_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3580_; 
v_a_3579_ = lean_ctor_get(v___y_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref_known(v___y_3578_, 1);
v___x_3580_ = lean_decode_lossy_utf8(v_a_3579_);
lean_dec(v_a_3579_);
if (v_onlyDeps_3315_ == 0)
{
if (v_onlySrcDeps_3316_ == 0)
{
lean_object* v___x_3581_; 
lean_inc_ref(v___x_3580_);
v___x_3581_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v___x_3580_);
if (lean_obj_tag(v___x_3581_) == 1)
{
lean_object* v_val_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
lean_dec_ref(v___x_3580_);
v_val_3582_ = lean_ctor_get(v___x_3581_, 0);
lean_inc(v_val_3582_);
lean_dec_ref_known(v___x_3581_, 1);
v___x_3583_ = lean_unsigned_to_nat(0u);
v___x_3584_ = lean_box(0);
v___x_3585_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3582_, v___x_3583_, v___x_3584_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_str_3586_; lean_object* v_startInclusive_3587_; lean_object* v_endExclusive_3588_; lean_object* v___x_3589_; 
v_str_3586_ = lean_ctor_get(v_val_3582_, 0);
lean_inc_ref(v_str_3586_);
v_startInclusive_3587_ = lean_ctor_get(v_val_3582_, 1);
lean_inc(v_startInclusive_3587_);
v_endExclusive_3588_ = lean_ctor_get(v_val_3582_, 2);
lean_inc(v_endExclusive_3588_);
lean_dec(v_val_3582_);
v___x_3589_ = lean_nat_sub(v_endExclusive_3588_, v_startInclusive_3587_);
lean_inc_ref(v___y_3575_);
v___y_3537_ = v___y_3575_;
v___y_3538_ = v___y_3575_;
v___y_3539_ = v___y_3576_;
v___y_3540_ = v___y_3577_;
v_str_3541_ = v_str_3586_;
v_startInclusive_3542_ = v_startInclusive_3587_;
v_endExclusive_3543_ = v_endExclusive_3588_;
v___y_3544_ = v___x_3589_;
goto v___jp_3536_;
}
else
{
lean_object* v_val_3590_; lean_object* v_str_3591_; lean_object* v_startInclusive_3592_; lean_object* v_endExclusive_3593_; 
v_val_3590_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_val_3590_);
lean_dec_ref_known(v___x_3585_, 1);
v_str_3591_ = lean_ctor_get(v_val_3582_, 0);
lean_inc_ref(v_str_3591_);
v_startInclusive_3592_ = lean_ctor_get(v_val_3582_, 1);
lean_inc(v_startInclusive_3592_);
v_endExclusive_3593_ = lean_ctor_get(v_val_3582_, 2);
lean_inc(v_endExclusive_3593_);
lean_dec(v_val_3582_);
lean_inc_ref(v___y_3575_);
v___y_3537_ = v___y_3575_;
v___y_3538_ = v___y_3575_;
v___y_3539_ = v___y_3576_;
v___y_3540_ = v___y_3577_;
v_str_3541_ = v_str_3591_;
v_startInclusive_3542_ = v_startInclusive_3592_;
v_endExclusive_3543_ = v_endExclusive_3593_;
v___y_3544_ = v_val_3590_;
goto v___jp_3536_;
}
}
else
{
lean_dec(v___x_3581_);
lean_inc_ref(v___y_3575_);
v___y_3507_ = v___y_3575_;
v___y_3508_ = v___y_3575_;
v___y_3509_ = v___y_3576_;
v___y_3510_ = v___y_3577_;
v_contents_3511_ = v___x_3580_;
goto v___jp_3506_;
}
}
else
{
lean_object* v___x_3594_; lean_object* v___x_3595_; 
lean_dec(v___y_3577_);
lean_dec(v___y_3576_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___y_3575_);
v___x_3595_ = l_Lean_Elab_printImportSrcs(v___x_3580_, v___x_3594_);
if (lean_obj_tag(v___x_3595_) == 0)
{
lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3603_; 
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3595_);
if (v_isSharedCheck_3603_ == 0)
{
lean_object* v_unused_3604_; 
v_unused_3604_ = lean_ctor_get(v___x_3595_, 0);
lean_dec(v_unused_3604_);
v___x_3597_ = v___x_3595_;
v_isShared_3598_ = v_isSharedCheck_3603_;
goto v_resetjp_3596_;
}
else
{
lean_dec(v___x_3595_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3603_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3599_; lean_object* v___x_3601_; 
v___x_3599_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 0, v___x_3599_);
v___x_3601_ = v___x_3597_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3607_; uint8_t v_isShared_3608_; uint8_t v_isSharedCheck_3612_; 
v_a_3605_ = lean_ctor_get(v___x_3595_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3595_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3607_ = v___x_3595_;
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
else
{
lean_inc(v_a_3605_);
lean_dec(v___x_3595_);
v___x_3607_ = lean_box(0);
v_isShared_3608_ = v_isSharedCheck_3612_;
goto v_resetjp_3606_;
}
v_resetjp_3606_:
{
lean_object* v___x_3610_; 
if (v_isShared_3608_ == 0)
{
v___x_3610_ = v___x_3607_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v_a_3605_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
}
else
{
lean_object* v___x_3613_; lean_object* v___x_3614_; 
lean_dec(v___y_3577_);
lean_dec(v___y_3576_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3613_, 0, v___y_3575_);
v___x_3614_ = l_Lean_Elab_printImports(v___x_3580_, v___x_3613_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3622_; 
v_isSharedCheck_3622_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3622_ == 0)
{
lean_object* v_unused_3623_; 
v_unused_3623_ = lean_ctor_get(v___x_3614_, 0);
lean_dec(v_unused_3623_);
v___x_3616_ = v___x_3614_;
v_isShared_3617_ = v_isSharedCheck_3622_;
goto v_resetjp_3615_;
}
else
{
lean_dec(v___x_3614_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3622_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v___x_3618_; lean_object* v___x_3620_; 
v___x_3618_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3617_ == 0)
{
lean_ctor_set(v___x_3616_, 0, v___x_3618_);
v___x_3620_ = v___x_3616_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3618_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
else
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3631_; 
v_a_3624_ = lean_ctor_get(v___x_3614_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v___x_3614_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3626_ = v___x_3614_;
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3614_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3631_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3629_; 
if (v_isShared_3627_ == 0)
{
v___x_3629_ = v___x_3626_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_a_3624_);
v___x_3629_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
return v___x_3629_;
}
}
}
}
}
else
{
lean_object* v_a_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3639_; 
lean_dec(v___y_3577_);
lean_dec(v___y_3576_);
lean_dec_ref(v___y_3575_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3632_ = lean_ctor_get(v___y_3578_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v___y_3578_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3634_ = v___y_3578_;
v_isShared_3635_ = v_isSharedCheck_3639_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_a_3632_);
lean_dec(v___y_3578_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3639_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3637_; 
if (v_isShared_3635_ == 0)
{
v___x_3637_ = v___x_3634_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v_a_3632_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
}
v___jp_3640_:
{
if (v_useStdin_3314_ == 0)
{
lean_object* v___x_3644_; 
v___x_3644_ = l_IO_FS_readBinFile(v_fileName_3643_);
v___y_3575_ = v_fileName_3643_;
v___y_3576_ = v___y_3641_;
v___y_3577_ = v___y_3642_;
v___y_3578_ = v___x_3644_;
goto v___jp_3574_;
}
else
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3645_ = lean_get_stdin();
v___x_3646_ = l_IO_FS_Stream_readBinToEnd(v___x_3645_);
v___y_3575_ = v_fileName_3643_;
v___y_3576_ = v___y_3641_;
v___y_3577_ = v___y_3642_;
v___y_3578_ = v___x_3646_;
goto v___jp_3574_;
}
}
v___jp_3647_:
{
if (lean_obj_tag(v___y_3649_) == 1)
{
lean_object* v_val_3650_; 
v_val_3650_ = lean_ctor_get(v___y_3649_, 0);
lean_inc(v_val_3650_);
v___y_3641_ = v___y_3648_;
v___y_3642_ = v___y_3649_;
v_fileName_3643_ = v_val_3650_;
goto v___jp_3640_;
}
else
{
if (v_useStdin_3314_ == 0)
{
lean_object* v___x_3651_; lean_object* v___x_3652_; 
lean_dec(v___y_3649_);
lean_dec(v___y_3648_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3651_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__13));
v___x_3652_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3651_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v___x_3653_; 
lean_dec_ref_known(v___x_3652_, 1);
v___x_3653_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3403_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3661_; 
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3661_ == 0)
{
lean_object* v_unused_3662_; 
v_unused_3662_ = lean_ctor_get(v___x_3653_, 0);
lean_dec(v_unused_3662_);
v___x_3655_ = v___x_3653_;
v_isShared_3656_ = v_isSharedCheck_3661_;
goto v_resetjp_3654_;
}
else
{
lean_dec(v___x_3653_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3661_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3657_; lean_object* v___x_3659_; 
v___x_3657_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 0, v___x_3657_);
v___x_3659_ = v___x_3655_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v___x_3657_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
v_a_3663_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3653_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3653_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
else
{
lean_object* v_a_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3678_; 
v_a_3671_ = lean_ctor_get(v___x_3652_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3673_ = v___x_3652_;
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_a_3671_);
lean_dec(v___x_3652_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3678_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3676_; 
if (v_isShared_3674_ == 0)
{
v___x_3676_ = v___x_3673_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v_a_3671_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
else
{
lean_object* v___x_3679_; 
v___x_3679_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__14));
v___y_3641_ = v___y_3648_;
v___y_3642_ = v___y_3649_;
v_fileName_3643_ = v___x_3679_;
goto v___jp_3640_;
}
}
}
v___jp_3680_:
{
uint8_t v___x_3683_; 
v___x_3683_ = l_List_isEmpty___redArg(v___y_3681_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v___x_3685_; 
lean_dec(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3684_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__13));
v___x_3685_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3684_);
if (lean_obj_tag(v___x_3685_) == 0)
{
lean_object* v___x_3686_; 
lean_dec_ref_known(v___x_3685_, 1);
v___x_3686_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3403_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3694_; 
v_isSharedCheck_3694_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3694_ == 0)
{
lean_object* v_unused_3695_; 
v_unused_3695_ = lean_ctor_get(v___x_3686_, 0);
lean_dec(v_unused_3695_);
v___x_3688_ = v___x_3686_;
v_isShared_3689_ = v_isSharedCheck_3694_;
goto v_resetjp_3687_;
}
else
{
lean_dec(v___x_3686_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3694_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3690_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 0, v___x_3690_);
v___x_3692_ = v___x_3688_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
v_a_3696_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3686_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3686_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3711_; 
v_a_3704_ = lean_ctor_get(v___x_3685_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3685_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3706_ = v___x_3685_;
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3685_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3709_; 
if (v_isShared_3707_ == 0)
{
v___x_3709_ = v___x_3706_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_a_3704_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
return v___x_3709_;
}
}
}
}
else
{
v___y_3648_ = v___y_3681_;
v___y_3649_ = v___y_3682_;
goto v___jp_3647_;
}
}
v___jp_3712_:
{
if (v_run_3329_ == 0)
{
v___y_3681_ = v_snd_3715_;
v___y_3682_ = v_fst_3714_;
goto v___jp_3680_;
}
else
{
if (v___y_3713_ == 0)
{
v___y_3648_ = v_snd_3715_;
v___y_3649_ = v_fst_3714_;
goto v___jp_3647_;
}
else
{
v___y_3681_ = v_snd_3715_;
v___y_3682_ = v_fst_3714_;
goto v___jp_3680_;
}
}
}
v___jp_3716_:
{
if (lean_obj_tag(v_args_3265_) == 0)
{
lean_object* v___x_3718_; 
v___x_3718_ = lean_box(0);
v___y_3713_ = v___y_3717_;
v_fst_3714_ = v___x_3718_;
v_snd_3715_ = v_args_3265_;
goto v___jp_3712_;
}
else
{
lean_object* v_head_3719_; lean_object* v_tail_3720_; lean_object* v___x_3721_; 
v_head_3719_ = lean_ctor_get(v_args_3265_, 0);
lean_inc(v_head_3719_);
v_tail_3720_ = lean_ctor_get(v_args_3265_, 1);
lean_inc(v_tail_3720_);
lean_dec_ref_known(v_args_3265_, 2);
v___x_3721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3721_, 0, v_head_3719_);
v___y_3713_ = v___y_3717_;
v_fst_3714_ = v___x_3721_;
v_snd_3715_ = v_tail_3720_;
goto v___jp_3712_;
}
}
v___jp_3722_:
{
switch(v_component_3311_)
{
case 0:
{
lean_dec_ref(v_forwardedArgs_3310_);
if (v_onlyDeps_3315_ == 0)
{
v___y_3717_ = v_onlyDeps_3315_;
goto v___jp_3716_;
}
else
{
if (v_depsJson_3317_ == 0)
{
v___y_3717_ = v_depsJson_3317_;
goto v___jp_3716_;
}
else
{
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
if (v_useStdin_3314_ == 0)
{
lean_object* v___x_3723_; 
v___x_3723_ = lean_array_mk(v_args_3265_);
v_fns_3269_ = v___x_3723_;
goto v___jp_3268_;
}
else
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
lean_dec(v_args_3265_);
v___x_3724_ = lean_get_stdin();
v___x_3725_ = l_IO_FS_Stream_lines(v___x_3724_);
if (lean_obj_tag(v___x_3725_) == 0)
{
lean_object* v_a_3726_; 
v_a_3726_ = lean_ctor_get(v___x_3725_, 0);
lean_inc(v_a_3726_);
lean_dec_ref_known(v___x_3725_, 1);
v_fns_3269_ = v_a_3726_;
goto v___jp_3268_;
}
else
{
lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3734_; 
v_a_3727_ = lean_ctor_get(v___x_3725_, 0);
v_isSharedCheck_3734_ = !lean_is_exclusive(v___x_3725_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3729_ = v___x_3725_;
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3725_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3734_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3732_; 
if (v_isShared_3730_ == 0)
{
v___x_3732_ = v___x_3729_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v_a_3727_);
v___x_3732_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
return v___x_3732_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_leanOpts_3309_);
lean_dec(v_args_3265_);
v___x_3735_ = lean_array_to_list(v_forwardedArgs_3310_);
v___x_3736_ = l_Lean_Server_Watchdog_watchdogMain(v___x_3735_);
return v___x_3736_;
}
default: 
{
lean_object* v___x_3737_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_forwardedArgs_3310_);
lean_dec(v_args_3265_);
v___x_3737_ = l_Lean_Server_FileWorker_workerMain(v_leanOpts_3309_);
return v___x_3737_;
}
}
}
v___jp_3738_:
{
lean_object* v___x_3739_; lean_object* v_timeout_3740_; lean_object* v___x_3741_; uint8_t v___x_3742_; 
v___x_3739_ = l___private_Lean_Shell_0__Lean_timeout;
v_timeout_3740_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_leanOpts_3309_, v___x_3739_);
v___x_3741_ = lean_unsigned_to_nat(0u);
v___x_3742_ = lean_nat_dec_eq(v_timeout_3740_, v___x_3741_);
if (v___x_3742_ == 0)
{
size_t v___x_3743_; size_t v___x_3744_; size_t v___x_3745_; lean_object* v___x_3746_; 
v___x_3743_ = lean_usize_of_nat(v_timeout_3740_);
lean_dec(v_timeout_3740_);
v___x_3744_ = ((size_t)1000ULL);
v___x_3745_ = lean_usize_mul(v___x_3743_, v___x_3744_);
v___x_3746_ = lean_internal_set_max_heartbeat(v___x_3745_);
goto v___jp_3722_;
}
else
{
lean_dec(v_timeout_3740_);
goto v___jp_3722_;
}
}
}
else
{
lean_object* v___x_3756_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_forwardedArgs_3310_);
lean_dec_ref(v_leanOpts_3309_);
lean_dec(v_args_3265_);
v___x_3756_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3758_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
v___x_3758_ = l_Lean_getLibDir(v_a_3757_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v_a_3759_; lean_object* v___x_3760_; 
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_a_3759_);
lean_dec_ref_known(v___x_3758_, 1);
v___x_3760_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_3759_);
if (lean_obj_tag(v___x_3760_) == 0)
{
lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3768_; 
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3768_ == 0)
{
lean_object* v_unused_3769_; 
v_unused_3769_ = lean_ctor_get(v___x_3760_, 0);
lean_dec(v_unused_3769_);
v___x_3762_ = v___x_3760_;
v_isShared_3763_ = v_isSharedCheck_3768_;
goto v_resetjp_3761_;
}
else
{
lean_dec(v___x_3760_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3768_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3764_; lean_object* v___x_3766_; 
v___x_3764_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 0, v___x_3764_);
v___x_3766_ = v___x_3762_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v___x_3764_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
else
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3777_; 
v_a_3770_ = lean_ctor_get(v___x_3760_, 0);
v_isSharedCheck_3777_ = !lean_is_exclusive(v___x_3760_);
if (v_isSharedCheck_3777_ == 0)
{
v___x_3772_ = v___x_3760_;
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3760_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3777_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3775_; 
if (v_isShared_3773_ == 0)
{
v___x_3775_ = v___x_3772_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3776_; 
v_reuseFailAlloc_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3776_, 0, v_a_3770_);
v___x_3775_ = v_reuseFailAlloc_3776_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
return v___x_3775_;
}
}
}
}
else
{
lean_object* v_a_3778_; lean_object* v___x_3780_; uint8_t v_isShared_3781_; uint8_t v_isSharedCheck_3785_; 
v_a_3778_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3785_ == 0)
{
v___x_3780_ = v___x_3758_;
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
else
{
lean_inc(v_a_3778_);
lean_dec(v___x_3758_);
v___x_3780_ = lean_box(0);
v_isShared_3781_ = v_isSharedCheck_3785_;
goto v_resetjp_3779_;
}
v_resetjp_3779_:
{
lean_object* v___x_3783_; 
if (v_isShared_3781_ == 0)
{
v___x_3783_ = v___x_3780_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_a_3778_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
}
else
{
lean_object* v_a_3786_; lean_object* v___x_3788_; uint8_t v_isShared_3789_; uint8_t v_isSharedCheck_3793_; 
v_a_3786_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3793_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3788_ = v___x_3756_;
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
else
{
lean_inc(v_a_3786_);
lean_dec(v___x_3756_);
v___x_3788_ = lean_box(0);
v_isShared_3789_ = v_isSharedCheck_3793_;
goto v_resetjp_3787_;
}
v_resetjp_3787_:
{
lean_object* v___x_3791_; 
if (v_isShared_3789_ == 0)
{
v___x_3791_ = v___x_3788_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v_a_3786_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
else
{
lean_object* v___x_3794_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3332_);
lean_dec(v_incrLoadFileName_x3f_3331_);
lean_dec(v_incrSaveFileName_x3f_3330_);
lean_dec_ref(v_errorOnKinds_3327_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec(v_bcFileName_x3f_3324_);
lean_dec(v_cFileName_x3f_3323_);
lean_dec(v_ileanFileName_x3f_3322_);
lean_dec(v_oleanFileName_x3f_3321_);
lean_dec(v_setupFileName_x3f_3320_);
lean_dec(v_rootDir_x3f_3319_);
lean_dec_ref(v_forwardedArgs_3310_);
lean_dec_ref(v_leanOpts_3309_);
lean_dec(v_args_3265_);
v___x_3794_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3796_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
lean_inc(v_a_3795_);
lean_dec_ref_known(v___x_3794_, 1);
v___x_3796_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_3795_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3804_; 
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3804_ == 0)
{
lean_object* v_unused_3805_; 
v_unused_3805_ = lean_ctor_get(v___x_3796_, 0);
lean_dec(v_unused_3805_);
v___x_3798_ = v___x_3796_;
v_isShared_3799_ = v_isSharedCheck_3804_;
goto v_resetjp_3797_;
}
else
{
lean_dec(v___x_3796_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3804_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3800_; lean_object* v___x_3802_; 
v___x_3800_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3799_ == 0)
{
lean_ctor_set(v___x_3798_, 0, v___x_3800_);
v___x_3802_ = v___x_3798_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v___x_3800_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; uint8_t v_isShared_3809_; uint8_t v_isSharedCheck_3813_; 
v_a_3806_ = lean_ctor_get(v___x_3796_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3796_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3808_ = v___x_3796_;
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
else
{
lean_inc(v_a_3806_);
lean_dec(v___x_3796_);
v___x_3808_ = lean_box(0);
v_isShared_3809_ = v_isSharedCheck_3813_;
goto v_resetjp_3807_;
}
v_resetjp_3807_:
{
lean_object* v___x_3811_; 
if (v_isShared_3809_ == 0)
{
v___x_3811_ = v___x_3808_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v_a_3806_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
v_a_3814_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3794_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3794_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
v___jp_3268_:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_printImportsJson(v_fns_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3278_; 
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3278_ == 0)
{
lean_object* v_unused_3279_; 
v_unused_3279_ = lean_ctor_get(v___x_3270_, 0);
lean_dec(v_unused_3279_);
v___x_3272_ = v___x_3270_;
v_isShared_3273_ = v_isSharedCheck_3278_;
goto v_resetjp_3271_;
}
else
{
lean_dec(v___x_3270_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3278_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3274_; lean_object* v___x_3276_; 
v___x_3274_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3274_);
v___x_3276_ = v___x_3272_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v___x_3274_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
v_a_3280_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3270_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3270_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
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
v___jp_3288_:
{
uint8_t v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = 0;
v___x_3290_ = lean_io_exit(v___x_3289_);
return v___x_3290_;
}
v___jp_3291_:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
return v___x_3293_;
}
v___jp_3294_:
{
lean_object* v___x_3296_; uint8_t v___x_3297_; 
v___x_3296_ = lean_display_cumulative_profiling_times();
v___x_3297_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__0, &l___private_Lean_Shell_0__Lean_shellMain___closed__0_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0);
if (v___x_3297_ == 0)
{
if (lean_obj_tag(v___y_3295_) == 0)
{
if (v___x_3297_ == 0)
{
uint8_t v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = 1;
v___x_3299_ = lean_io_exit(v___x_3298_);
return v___x_3299_;
}
else
{
goto v___jp_3288_;
}
}
else
{
lean_dec_ref_known(v___y_3295_, 1);
goto v___jp_3288_;
}
}
else
{
if (lean_obj_tag(v___y_3295_) == 0)
{
goto v___jp_3291_;
}
else
{
lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3307_; 
v_isSharedCheck_3307_ = !lean_is_exclusive(v___y_3295_);
if (v_isSharedCheck_3307_ == 0)
{
lean_object* v_unused_3308_; 
v_unused_3308_ = lean_ctor_get(v___y_3295_, 0);
lean_dec(v_unused_3308_);
v___x_3301_ = v___y_3295_;
v_isShared_3302_ = v_isSharedCheck_3307_;
goto v_resetjp_3300_;
}
else
{
lean_dec(v___y_3295_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3307_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
if (v___x_3297_ == 0)
{
lean_del_object(v___x_3301_);
goto v___jp_3291_;
}
else
{
lean_object* v___x_3303_; lean_object* v___x_3305_; 
v___x_3303_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3303_);
v___x_3305_ = v___x_3301_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v___x_3303_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
}
v___jp_3333_:
{
if (lean_obj_tag(v_zigFileName_x3f_3325_) == 1)
{
lean_object* v_val_3337_; uint8_t v___x_3338_; lean_object* v___x_3339_; 
v_val_3337_ = lean_ctor_get(v_zigFileName_x3f_3325_, 0);
lean_inc(v_val_3337_);
lean_dec_ref_known(v_zigFileName_x3f_3325_, 1);
v___x_3338_ = 1;
v___x_3339_ = lean_io_prim_handle_mk(v_val_3337_, v___x_3338_);
if (lean_obj_tag(v___x_3339_) == 0)
{
lean_object* v_a_3340_; lean_object* v___f_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
lean_dec(v_val_3337_);
v_a_3340_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_a_3340_);
lean_dec_ref_known(v___x_3339_, 1);
v___f_3341_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3341_, 0, v___y_3335_);
lean_closure_set(v___f_3341_, 1, v___y_3334_);
lean_closure_set(v___f_3341_, 2, v_a_3340_);
v___x_3342_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__1));
v___x_3343_ = lean_box(0);
v___x_3344_ = l_Lean_profileitIOUnsafe___redArg(v___x_3342_, v_leanOpts_3309_, v___f_3341_, v___x_3343_);
lean_dec_ref(v_leanOpts_3309_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_dec_ref_known(v___x_3344_, 1);
v___y_3295_ = v___y_3336_;
goto v___jp_3294_;
}
else
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3352_; 
lean_dec(v___y_3336_);
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3347_ = v___x_3344_;
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v___x_3344_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3352_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
return v___x_3350_;
}
}
}
}
else
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
lean_dec_ref_known(v___x_3339_, 1);
lean_dec(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec_ref(v_leanOpts_3309_);
v___x_3353_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__2));
v___x_3354_ = lean_string_append(v___x_3353_, v_val_3337_);
lean_dec(v_val_3337_);
v___x_3355_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3356_ = lean_string_append(v___x_3354_, v___x_3355_);
v___x_3357_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3356_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3365_; 
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3365_ == 0)
{
lean_object* v_unused_3366_; 
v_unused_3366_ = lean_ctor_get(v___x_3357_, 0);
lean_dec(v_unused_3366_);
v___x_3359_ = v___x_3357_;
v_isShared_3360_ = v_isSharedCheck_3365_;
goto v_resetjp_3358_;
}
else
{
lean_dec(v___x_3357_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3365_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3361_; lean_object* v___x_3363_; 
v___x_3361_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3360_ == 0)
{
lean_ctor_set(v___x_3359_, 0, v___x_3361_);
v___x_3363_ = v___x_3359_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3361_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
}
}
}
else
{
lean_object* v_a_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3374_; 
v_a_3367_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3369_ = v___x_3357_;
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_a_3367_);
lean_dec(v___x_3357_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
lean_object* v___x_3372_; 
if (v_isShared_3370_ == 0)
{
v___x_3372_ = v___x_3369_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_a_3367_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
}
else
{
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec_ref(v_leanOpts_3309_);
v___y_3295_ = v___y_3336_;
goto v___jp_3294_;
}
}
v___jp_3375_:
{
if (lean_obj_tag(v_bcFileName_x3f_3324_) == 1)
{
lean_object* v_val_3381_; lean_object* v___x_3382_; 
v_val_3381_ = lean_ctor_get(v_bcFileName_x3f_3324_, 0);
lean_inc(v_val_3381_);
lean_dec_ref_known(v_bcFileName_x3f_3324_, 1);
v___x_3382_ = lean_init_llvm();
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
lean_dec_ref_known(v___x_3382_, 1);
v___x_3383_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__3));
v___x_3384_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
lean_closure_set(v___x_3384_, 0, v___y_3378_);
lean_closure_set(v___x_3384_, 1, v___y_3380_);
lean_closure_set(v___x_3384_, 2, v_val_3381_);
v___x_3385_ = lean_box(0);
v___x_3386_ = l_Lean_profileitIOUnsafe___redArg(v___x_3383_, v_leanOpts_3309_, v___x_3384_, v___x_3385_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_dec_ref_known(v___x_3386_, 1);
v___y_3334_ = v___y_3376_;
v___y_3335_ = v___y_3377_;
v___y_3336_ = v___y_3379_;
goto v___jp_3333_;
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_dec(v___y_3379_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3386_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3386_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3402_; 
lean_dec(v_val_3381_);
lean_dec(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v_zigFileName_x3f_3325_);
lean_dec_ref(v_leanOpts_3309_);
v_a_3395_ = lean_ctor_get(v___x_3382_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3397_ = v___x_3382_;
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3382_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3400_; 
if (v_isShared_3398_ == 0)
{
v___x_3400_ = v___x_3397_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3395_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3378_);
lean_dec(v_bcFileName_x3f_3324_);
v___y_3334_ = v___y_3376_;
v___y_3335_ = v___y_3377_;
v___y_3336_ = v___y_3379_;
goto v___jp_3333_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object* v_args_3822_, lean_object* v_opts_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v_res_3825_; 
v_res_3825_ = lean_shell_main(v_args_3822_, v_opts_3823_);
return v_res_3825_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object* v_val_3826_, lean_object* v_inst_3827_, lean_object* v_R_3828_, lean_object* v_a_3829_, lean_object* v_b_3830_, lean_object* v_c_3831_){
_start:
{
lean_object* v___x_3832_; 
v___x_3832_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3826_, v_a_3829_, v_b_3830_);
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object* v_val_3833_, lean_object* v_inst_3834_, lean_object* v_R_3835_, lean_object* v_a_3836_, lean_object* v_b_3837_, lean_object* v_c_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(v_val_3833_, v_inst_3834_, v_R_3835_, v_a_3836_, v_b_3837_, v_c_3838_);
lean_dec(v_b_3837_);
lean_dec_ref(v_val_3833_);
return v_res_3839_;
}
}
lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitZig(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitZig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_shortVersionString = _init_l___private_Lean_Shell_0__Lean_shortVersionString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_shortVersionString);
l___private_Lean_Shell_0__Lean_versionHeader = _init_l___private_Lean_Shell_0__Lean_versionHeader();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_versionHeader);
l___private_Lean_Shell_0__Lean_featuresString = _init_l___private_Lean_Shell_0__Lean_featuresString();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_featuresString);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_maxMemory = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_maxMemory);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_timeout = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_timeout);
lean_dec_ref(res);
res = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Shell_0__Lean_verbose = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Shell_0__Lean_verbose);
lean_dec_ref(res);
l___private_Lean_Shell_0__Lean_defaultTrustLevel = _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel();
l___private_Lean_Shell_0__Lean_defaultNumThreads = _init_l___private_Lean_Shell_0__Lean_defaultNumThreads();
l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1);
l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1 = _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1();
lean_mark_persistent(l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_EmitZig(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Shell(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Watchdog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_FileWorker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_EmitZig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Shell(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Shell(builtin);
}
#ifdef __cplusplus
}
#endif
