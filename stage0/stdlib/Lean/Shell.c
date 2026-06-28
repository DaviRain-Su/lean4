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
lean_object* lean_internal_get_default_max_memory(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object*);
lean_object* lean_internal_set_max_memory(size_t);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object*, lean_object*);
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
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "      --stdin            take input from stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__30 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__30_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "  -R, --root=dir         set package root directory from which the module name\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__31 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__31_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "                         of the input file is calculated\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__32 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__32_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "                         (default: current working directory)\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__33 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__33_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "  -t, --trust=num        trust level (default: max) 0 means do not trust any macro,\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__34 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__34_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "                         and type check all imported modules\n"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__35 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__35_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "  -q, --quiet            do not print verbose messages"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__36 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__36_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "  -M, --memory=num       maximum amount of memory that should be used by Lean"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__37 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__37_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "                         (in megabytes)"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__38 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__38_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "  -T, --timeout=num      maximum number of memory allocations per task"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__39 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__39_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 88, .m_capacity = 88, .m_length = 87, .m_data = "                         this is a deterministic way of interrupting long running tasks"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__40 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__40_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_displayHelp___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Shell_0__Lean_displayHelp___closed__41;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "  -j, --threads=num      number of threads used to process lean files"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__42 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__42_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "  -s, --tstack=num       thread stack size in Kb"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__43 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__43_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "      --server           start lean in server mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__44 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__44_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_displayHelp___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "      --worker           start lean in server-worker mode"};
static const lean_object* l___private_Lean_Shell_0__Lean_displayHelp___closed__45 = (const lean_object*)&l___private_Lean_Shell_0__Lean_displayHelp___closed__45_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = lean_internal_get_default_max_memory(v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_228_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* v_max_232_, lean_object* v_a_00___x40___internal___hyg_233_){
_start:
{
size_t v_max_boxed_234_; lean_object* v_res_235_; 
v_max_boxed_234_ = lean_unbox_usize(v_max_232_);
lean_dec(v_max_232_);
v_res_235_ = lean_internal_set_max_memory(v_max_boxed_234_);
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
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__41(void){
_start:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_box(0);
v___x_374_ = lean_internal_is_multi_thread(v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t v_useStderr_379_){
_start:
{
lean_object* v___y_382_; lean_object* v___y_386_; lean_object* v_out_421_; 
if (v_useStderr_379_ == 0)
{
lean_object* v___x_479_; 
v___x_479_ = lean_get_stdout();
v_out_421_ = v___x_479_;
goto v___jp_420_;
}
else
{
lean_object* v___x_480_; 
v___x_480_ = lean_get_stderr();
v_out_421_ = v___x_480_;
goto v___jp_420_;
}
v___jp_381_:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__0));
v___x_384_ = l_IO_FS_Stream_putStrLn(v___y_382_, v___x_383_);
return v___x_384_;
}
v___jp_385_:
{
lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_387_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__1));
lean_inc_ref(v___y_386_);
v___x_388_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_387_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; 
lean_dec_ref_known(v___x_388_, 1);
v___x_389_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__2));
lean_inc_ref(v___y_386_);
v___x_390_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_389_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; 
lean_dec_ref_known(v___x_390_, 1);
v___x_391_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__3));
lean_inc_ref(v___y_386_);
v___x_392_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_391_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v___x_393_; lean_object* v___x_394_; 
lean_dec_ref_known(v___x_392_, 1);
v___x_393_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__4));
lean_inc_ref(v___y_386_);
v___x_394_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_393_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec_ref_known(v___x_394_, 1);
v___x_395_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__5));
lean_inc_ref(v___y_386_);
v___x_396_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_395_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; 
lean_dec_ref_known(v___x_396_, 1);
v___x_397_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__6));
lean_inc_ref(v___y_386_);
v___x_398_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; 
lean_dec_ref_known(v___x_398_, 1);
v___x_399_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__7));
lean_inc_ref(v___y_386_);
v___x_400_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_399_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v___x_401_; lean_object* v___x_402_; 
lean_dec_ref_known(v___x_400_, 1);
v___x_401_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__8));
lean_inc_ref(v___y_386_);
v___x_402_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_401_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec_ref_known(v___x_402_, 1);
v___x_403_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__9));
lean_inc_ref(v___y_386_);
v___x_404_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_403_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec_ref_known(v___x_404_, 1);
v___x_405_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__10));
lean_inc_ref(v___y_386_);
v___x_406_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_405_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v___x_407_; lean_object* v___x_408_; 
lean_dec_ref_known(v___x_406_, 1);
v___x_407_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__11));
lean_inc_ref(v___y_386_);
v___x_408_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_407_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; 
lean_dec_ref_known(v___x_408_, 1);
v___x_409_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__12));
lean_inc_ref(v___y_386_);
v___x_410_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_409_);
if (lean_obj_tag(v___x_410_) == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
lean_dec_ref_known(v___x_410_, 1);
v___x_411_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__13));
lean_inc_ref(v___y_386_);
v___x_412_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_411_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; 
lean_dec_ref_known(v___x_412_, 1);
v___x_413_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__14));
lean_inc_ref(v___y_386_);
v___x_414_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_413_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v___x_415_; lean_object* v___x_416_; 
lean_dec_ref_known(v___x_414_, 1);
v___x_415_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__15));
lean_inc_ref(v___y_386_);
v___x_416_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_415_);
if (lean_obj_tag(v___x_416_) == 0)
{
uint8_t v___x_417_; 
lean_dec_ref_known(v___x_416_, 1);
v___x_417_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_417_ == 0)
{
v___y_382_ = v___y_386_;
goto v___jp_381_;
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__17));
lean_inc_ref(v___y_386_);
v___x_419_ = l_IO_FS_Stream_putStrLn(v___y_386_, v___x_418_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_dec_ref_known(v___x_419_, 1);
v___y_382_ = v___y_386_;
goto v___jp_381_;
}
else
{
lean_dec_ref(v___y_386_);
return v___x_419_;
}
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_416_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_414_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_412_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_410_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_408_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_406_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_404_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_402_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_400_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_398_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_396_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_394_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_392_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_390_;
}
}
else
{
lean_dec_ref(v___y_386_);
return v___x_388_;
}
}
v___jp_420_:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(v_out_421_);
v___x_423_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_422_);
if (lean_obj_tag(v___x_423_) == 0)
{
lean_object* v___x_424_; lean_object* v___x_425_; 
lean_dec_ref_known(v___x_423_, 1);
v___x_424_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__18));
lean_inc_ref(v_out_421_);
v___x_425_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; 
lean_dec_ref_known(v___x_425_, 1);
v___x_426_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__19));
lean_inc_ref(v_out_421_);
v___x_427_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_426_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref_known(v___x_427_, 1);
v___x_428_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__20));
lean_inc_ref(v_out_421_);
v___x_429_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v___x_430_; lean_object* v___x_431_; 
lean_dec_ref_known(v___x_429_, 1);
v___x_430_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__21));
lean_inc_ref(v_out_421_);
v___x_431_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_430_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; 
lean_dec_ref_known(v___x_431_, 1);
v___x_432_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__22));
lean_inc_ref(v_out_421_);
v___x_433_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_432_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; 
lean_dec_ref_known(v___x_433_, 1);
v___x_434_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__23));
lean_inc_ref(v_out_421_);
v___x_435_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_434_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v___x_436_; lean_object* v___x_437_; 
lean_dec_ref_known(v___x_435_, 1);
v___x_436_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__24));
lean_inc_ref(v_out_421_);
v___x_437_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_436_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v___x_438_; lean_object* v___x_439_; 
lean_dec_ref_known(v___x_437_, 1);
v___x_438_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__25));
lean_inc_ref(v_out_421_);
v___x_439_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_438_);
if (lean_obj_tag(v___x_439_) == 0)
{
lean_object* v___x_440_; lean_object* v___x_441_; 
lean_dec_ref_known(v___x_439_, 1);
v___x_440_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__26));
lean_inc_ref(v_out_421_);
v___x_441_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_440_);
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v___x_442_; lean_object* v___x_443_; 
lean_dec_ref_known(v___x_441_, 1);
v___x_442_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__27));
lean_inc_ref(v_out_421_);
v___x_443_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_442_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; 
lean_dec_ref_known(v___x_443_, 1);
v___x_444_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__28));
lean_inc_ref(v_out_421_);
v___x_445_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_444_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec_ref_known(v___x_445_, 1);
v___x_446_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__29));
lean_inc_ref(v_out_421_);
v___x_447_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_446_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec_ref_known(v___x_447_, 1);
v___x_448_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__30));
lean_inc_ref(v_out_421_);
v___x_449_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_448_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec_ref_known(v___x_449_, 1);
v___x_450_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__31));
lean_inc_ref(v_out_421_);
v___x_451_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_450_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v___x_452_; lean_object* v___x_453_; 
lean_dec_ref_known(v___x_451_, 1);
v___x_452_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__32));
lean_inc_ref(v_out_421_);
v___x_453_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_452_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v___x_454_; lean_object* v___x_455_; 
lean_dec_ref_known(v___x_453_, 1);
v___x_454_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__33));
lean_inc_ref(v_out_421_);
v___x_455_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v___x_456_; lean_object* v___x_457_; 
lean_dec_ref_known(v___x_455_, 1);
v___x_456_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__34));
lean_inc_ref(v_out_421_);
v___x_457_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_456_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; 
lean_dec_ref_known(v___x_457_, 1);
v___x_458_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__35));
lean_inc_ref(v_out_421_);
v___x_459_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_458_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v___x_460_; lean_object* v___x_461_; 
lean_dec_ref_known(v___x_459_, 1);
v___x_460_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__36));
lean_inc_ref(v_out_421_);
v___x_461_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_460_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec_ref_known(v___x_461_, 1);
v___x_462_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__37));
lean_inc_ref(v_out_421_);
v___x_463_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec_ref_known(v___x_463_, 1);
v___x_464_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__38));
lean_inc_ref(v_out_421_);
v___x_465_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_464_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; 
lean_dec_ref_known(v___x_465_, 1);
v___x_466_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__39));
lean_inc_ref(v_out_421_);
v___x_467_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_466_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec_ref_known(v___x_467_, 1);
v___x_468_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__40));
lean_inc_ref(v_out_421_);
v___x_469_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
uint8_t v___x_470_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_470_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__41, &l___private_Lean_Shell_0__Lean_displayHelp___closed__41_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__41);
if (v___x_470_ == 0)
{
v___y_386_ = v_out_421_;
goto v___jp_385_;
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__42));
lean_inc_ref(v_out_421_);
v___x_472_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_471_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec_ref_known(v___x_472_, 1);
v___x_473_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__43));
lean_inc_ref(v_out_421_);
v___x_474_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec_ref_known(v___x_474_, 1);
v___x_475_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__44));
lean_inc_ref(v_out_421_);
v___x_476_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec_ref_known(v___x_476_, 1);
v___x_477_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__45));
lean_inc_ref(v_out_421_);
v___x_478_ = l_IO_FS_Stream_putStrLn(v_out_421_, v___x_477_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_dec_ref_known(v___x_478_, 1);
v___y_386_ = v_out_421_;
goto v___jp_385_;
}
else
{
lean_dec_ref(v_out_421_);
return v___x_478_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_476_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_474_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_472_;
}
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_469_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_467_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_465_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_463_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_461_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_459_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_457_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_455_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_453_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_451_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_449_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_447_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_445_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_443_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_441_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_439_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_437_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_435_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_433_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_431_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_429_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_427_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_425_;
}
}
else
{
lean_dec_ref(v_out_421_);
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* v_useStderr_481_, lean_object* v_a_482_){
_start:
{
uint8_t v_useStderr_boxed_483_; lean_object* v_res_484_; 
v_useStderr_boxed_483_ = lean_unbox(v_useStderr_481_);
v_res_484_ = l___private_Lean_Shell_0__Lean_displayHelp(v_useStderr_boxed_483_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t v_x_485_){
_start:
{
switch(v_x_485_)
{
case 0:
{
lean_object* v___x_486_; 
v___x_486_ = lean_unsigned_to_nat(0u);
return v___x_486_;
}
case 1:
{
lean_object* v___x_487_; 
v___x_487_ = lean_unsigned_to_nat(1u);
return v___x_487_;
}
default: 
{
lean_object* v___x_488_; 
v___x_488_ = lean_unsigned_to_nat(2u);
return v___x_488_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object* v_x_489_){
_start:
{
uint8_t v_x_boxed_490_; lean_object* v_res_491_; 
v_x_boxed_490_ = lean_unbox(v_x_489_);
v_res_491_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_boxed_490_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t v_x_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object* v_x_494_){
_start:
{
uint8_t v_x_4__boxed_495_; lean_object* v_res_496_; 
v_x_4__boxed_495_ = lean_unbox(v_x_494_);
v_res_496_ = l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(v_x_4__boxed_495_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* v_k_497_){
_start:
{
lean_inc(v_k_497_);
return v_k_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* v_k_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(v_k_498_);
lean_dec(v_k_498_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* v_motive_500_, lean_object* v_ctorIdx_501_, uint8_t v_t_502_, lean_object* v_h_503_, lean_object* v_k_504_){
_start:
{
lean_inc(v_k_504_);
return v_k_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* v_motive_505_, lean_object* v_ctorIdx_506_, lean_object* v_t_507_, lean_object* v_h_508_, lean_object* v_k_509_){
_start:
{
uint8_t v_t_boxed_510_; lean_object* v_res_511_; 
v_t_boxed_510_ = lean_unbox(v_t_507_);
v_res_511_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(v_motive_505_, v_ctorIdx_506_, v_t_boxed_510_, v_h_508_, v_k_509_);
lean_dec(v_k_509_);
lean_dec(v_ctorIdx_506_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* v_frontend_512_){
_start:
{
lean_inc(v_frontend_512_);
return v_frontend_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* v_frontend_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(v_frontend_513_);
lean_dec(v_frontend_513_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* v_motive_515_, uint8_t v_t_516_, lean_object* v_h_517_, lean_object* v_frontend_518_){
_start:
{
lean_inc(v_frontend_518_);
return v_frontend_518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* v_motive_519_, lean_object* v_t_520_, lean_object* v_h_521_, lean_object* v_frontend_522_){
_start:
{
uint8_t v_t_boxed_523_; lean_object* v_res_524_; 
v_t_boxed_523_ = lean_unbox(v_t_520_);
v_res_524_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(v_motive_519_, v_t_boxed_523_, v_h_521_, v_frontend_522_);
lean_dec(v_frontend_522_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* v_watchdog_525_){
_start:
{
lean_inc(v_watchdog_525_);
return v_watchdog_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* v_watchdog_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(v_watchdog_526_);
lean_dec(v_watchdog_526_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* v_motive_528_, uint8_t v_t_529_, lean_object* v_h_530_, lean_object* v_watchdog_531_){
_start:
{
lean_inc(v_watchdog_531_);
return v_watchdog_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* v_motive_532_, lean_object* v_t_533_, lean_object* v_h_534_, lean_object* v_watchdog_535_){
_start:
{
uint8_t v_t_boxed_536_; lean_object* v_res_537_; 
v_t_boxed_536_ = lean_unbox(v_t_533_);
v_res_537_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(v_motive_532_, v_t_boxed_536_, v_h_534_, v_watchdog_535_);
lean_dec(v_watchdog_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* v_worker_538_){
_start:
{
lean_inc(v_worker_538_);
return v_worker_538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* v_worker_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(v_worker_539_);
lean_dec(v_worker_539_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* v_motive_541_, uint8_t v_t_542_, lean_object* v_h_543_, lean_object* v_worker_544_){
_start:
{
lean_inc(v_worker_544_);
return v_worker_544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* v_motive_545_, lean_object* v_t_546_, lean_object* v_h_547_, lean_object* v_worker_548_){
_start:
{
uint8_t v_t_boxed_549_; lean_object* v_res_550_; 
v_t_boxed_549_ = lean_unbox(v_t_546_);
v_res_550_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(v_motive_545_, v_t_boxed_549_, v_h_547_, v_worker_548_);
lean_dec(v_worker_548_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object* v_name_551_, lean_object* v_decl_552_, lean_object* v_ref_553_){
_start:
{
lean_object* v_defValue_555_; lean_object* v_descr_556_; lean_object* v_deprecation_x3f_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_defValue_555_ = lean_ctor_get(v_decl_552_, 0);
v_descr_556_ = lean_ctor_get(v_decl_552_, 1);
v_deprecation_x3f_557_ = lean_ctor_get(v_decl_552_, 2);
lean_inc(v_defValue_555_);
v___x_558_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_558_, 0, v_defValue_555_);
lean_inc(v_deprecation_x3f_557_);
lean_inc_ref(v_descr_556_);
lean_inc_n(v_name_551_, 2);
v___x_559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_559_, 0, v_name_551_);
lean_ctor_set(v___x_559_, 1, v_ref_553_);
lean_ctor_set(v___x_559_, 2, v___x_558_);
lean_ctor_set(v___x_559_, 3, v_descr_556_);
lean_ctor_set(v___x_559_, 4, v_deprecation_x3f_557_);
v___x_560_ = lean_register_option(v_name_551_, v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_568_; 
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_568_ == 0)
{
lean_object* v_unused_569_; 
v_unused_569_ = lean_ctor_get(v___x_560_, 0);
lean_dec(v_unused_569_);
v___x_562_ = v___x_560_;
v_isShared_563_ = v_isSharedCheck_568_;
goto v_resetjp_561_;
}
else
{
lean_dec(v___x_560_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_568_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; lean_object* v___x_566_; 
lean_inc(v_defValue_555_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v_name_551_);
lean_ctor_set(v___x_564_, 1, v_defValue_555_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_564_);
v___x_566_ = v___x_562_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_564_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec(v_name_551_);
v_a_570_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_560_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_560_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_578_, lean_object* v_decl_579_, lean_object* v_ref_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v_name_578_, v_decl_579_, v_ref_580_);
lean_dec_ref(v_decl_579_);
return v_res_582_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_box(0);
v___x_587_ = lean_internal_get_default_max_memory(v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_588_ = lean_box(0);
v___x_589_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_590_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_591_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
lean_ctor_set(v___x_591_, 1, v___x_589_);
lean_ctor_set(v___x_591_, 2, v___x_588_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_615_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_616_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_617_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_618_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_615_, v___x_616_, v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object* v_a_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
return v_res_620_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_box(0);
v___x_625_ = lean_internal_get_default_max_heartbeat(v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_626_ = lean_box(0);
v___x_627_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_628_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_629_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v___x_627_);
lean_ctor_set(v___x_629_, 2, v___x_626_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_635_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_636_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_637_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_634_, v___x_635_, v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object* v_name_640_, lean_object* v_decl_641_, lean_object* v_ref_642_){
_start:
{
lean_object* v_defValue_644_; lean_object* v_descr_645_; lean_object* v_deprecation_x3f_646_; lean_object* v___x_647_; uint8_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_defValue_644_ = lean_ctor_get(v_decl_641_, 0);
v_descr_645_ = lean_ctor_get(v_decl_641_, 1);
v_deprecation_x3f_646_ = lean_ctor_get(v_decl_641_, 2);
v___x_647_ = lean_alloc_ctor(1, 0, 1);
v___x_648_ = lean_unbox(v_defValue_644_);
lean_ctor_set_uint8(v___x_647_, 0, v___x_648_);
lean_inc(v_deprecation_x3f_646_);
lean_inc_ref(v_descr_645_);
lean_inc_n(v_name_640_, 2);
v___x_649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_649_, 0, v_name_640_);
lean_ctor_set(v___x_649_, 1, v_ref_642_);
lean_ctor_set(v___x_649_, 2, v___x_647_);
lean_ctor_set(v___x_649_, 3, v_descr_645_);
lean_ctor_set(v___x_649_, 4, v_deprecation_x3f_646_);
v___x_650_ = lean_register_option(v_name_640_, v___x_649_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_658_; 
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_658_ == 0)
{
lean_object* v_unused_659_; 
v_unused_659_ = lean_ctor_get(v___x_650_, 0);
lean_dec(v_unused_659_);
v___x_652_ = v___x_650_;
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
else
{
lean_dec(v___x_650_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_654_; lean_object* v___x_656_; 
lean_inc(v_defValue_644_);
v___x_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_654_, 0, v_name_640_);
lean_ctor_set(v___x_654_, 1, v_defValue_644_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 0, v___x_654_);
v___x_656_ = v___x_652_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_654_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v_name_640_);
v_a_660_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_650_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_650_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_668_, lean_object* v_decl_669_, lean_object* v_ref_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v_name_668_, v_decl_669_, v_ref_670_);
lean_dec_ref(v_decl_669_);
return v_res_672_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_676_; uint8_t v___x_677_; 
v___x_676_ = lean_box(0);
v___x_677_ = lean_internal_get_default_verbose(v___x_676_);
return v___x_677_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_678_ = lean_box(0);
v___x_679_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_680_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_681_ = lean_box(v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
lean_ctor_set(v___x_682_, 1, v___x_679_);
lean_ctor_set(v___x_682_, 2, v___x_678_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_688_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_689_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_690_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v___x_687_, v___x_688_, v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object* v_a_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultOptions___boxed(lean_object* v_x_00___x40_Lean_Shell_2553953037____hygCtx___hyg_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = lean_internal_get_default_options(v_x_00___x40_Lean_Shell_2553953037____hygCtx___hyg_694_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object* v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_697_){
_start:
{
uint32_t v_res_698_; lean_object* v_r_699_; 
v_res_698_ = lean_internal_get_believer_trust_level(v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_697_);
v_r_699_ = lean_box_uint32(v_res_698_);
return v_r_699_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0(void){
_start:
{
lean_object* v___x_700_; uint32_t v___x_701_; 
v___x_700_ = lean_box(0);
v___x_701_ = lean_internal_get_believer_trust_level(v___x_700_);
return v___x_701_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1(void){
_start:
{
uint32_t v___x_702_; uint32_t v___x_703_; uint32_t v___x_704_; 
v___x_702_ = 1;
v___x_703_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0);
v___x_704_ = lean_uint32_add(v___x_703_, v___x_702_);
return v___x_704_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel(void){
_start:
{
uint32_t v___x_705_; 
v___x_705_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1);
return v___x_705_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0(void){
_start:
{
lean_object* v___x_706_; uint32_t v___x_707_; 
v___x_706_ = lean_box(0);
v___x_707_ = lean_internal_get_hardware_concurrency(v___x_706_);
return v___x_707_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads(void){
_start:
{
uint8_t v___x_708_; 
v___x_708_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__41, &l___private_Lean_Shell_0__Lean_displayHelp___closed__41_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__41);
if (v___x_708_ == 0)
{
uint32_t v___x_709_; 
v___x_709_ = 0;
return v___x_709_;
}
else
{
uint32_t v___x_710_; 
v___x_710_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0, &l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0);
return v___x_710_;
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0(void){
_start:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_box(0);
v___x_712_ = lean_internal_get_default_options(v___x_711_);
return v___x_712_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2(void){
_start:
{
lean_object* v___x_715_; uint32_t v___x_716_; uint32_t v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; uint8_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_715_ = lean_box(0);
v___x_716_ = l___private_Lean_Shell_0__Lean_defaultNumThreads;
v___x_717_ = l___private_Lean_Shell_0__Lean_defaultTrustLevel;
v___x_718_ = l_Lean_Options_empty;
v___x_719_ = 0;
v___x_720_ = 0;
v___x_721_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1));
v___x_722_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0);
v___x_723_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v___x_721_);
lean_ctor_set(v___x_723_, 2, v___x_718_);
lean_ctor_set(v___x_723_, 3, v___x_715_);
lean_ctor_set(v___x_723_, 4, v___x_715_);
lean_ctor_set(v___x_723_, 5, v___x_715_);
lean_ctor_set(v___x_723_, 6, v___x_715_);
lean_ctor_set(v___x_723_, 7, v___x_715_);
lean_ctor_set(v___x_723_, 8, v___x_715_);
lean_ctor_set(v___x_723_, 9, v___x_715_);
lean_ctor_set(v___x_723_, 10, v___x_721_);
lean_ctor_set(v___x_723_, 11, v___x_715_);
lean_ctor_set(v___x_723_, 12, v___x_715_);
lean_ctor_set(v___x_723_, 13, v___x_715_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 8, v___x_720_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 9, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 10, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 11, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 12, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 13, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 14, v___x_719_);
lean_ctor_set_uint32(v___x_723_, sizeof(void*)*14, v___x_717_);
lean_ctor_set_uint32(v___x_723_, sizeof(void*)*14 + 4, v___x_716_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 15, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 16, v___x_719_);
lean_ctor_set_uint8(v___x_723_, sizeof(void*)*14 + 17, v___x_719_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object* v_x_724_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2);
return v___x_725_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object* v_opts_726_){
_start:
{
uint8_t v_run_727_; 
v_run_727_ = lean_ctor_get_uint8(v_opts_726_, sizeof(void*)*14 + 17);
lean_dec_ref(v_opts_726_);
return v_run_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object* v_opts_728_){
_start:
{
uint8_t v_res_729_; lean_object* v_r_730_; 
v_res_729_ = lean_shell_options_get_run(v_opts_728_);
v_r_730_ = lean_box(v_res_729_);
return v_r_730_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object* v_opts_731_){
_start:
{
lean_object* v_leanOpts_732_; lean_object* v___x_733_; uint8_t v___x_734_; 
v_leanOpts_732_ = lean_ctor_get(v_opts_731_, 0);
lean_inc_ref(v_leanOpts_732_);
lean_dec_ref(v_opts_731_);
v___x_733_ = l_Lean_profiler;
v___x_734_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v_leanOpts_732_, v___x_733_);
lean_dec_ref(v_leanOpts_732_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object* v_opts_735_){
_start:
{
uint8_t v_res_736_; lean_object* v_r_737_; 
v_res_736_ = lean_shell_options_get_profiler(v_opts_735_);
v_r_737_ = lean_box(v_res_736_);
return v_r_737_;
}
}
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object* v_opts_738_){
_start:
{
uint32_t v_numThreads_739_; 
v_numThreads_739_ = lean_ctor_get_uint32(v_opts_738_, sizeof(void*)*14 + 4);
lean_dec_ref(v_opts_738_);
return v_numThreads_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object* v_opts_740_){
_start:
{
uint32_t v_res_741_; lean_object* v_r_742_; 
v_res_741_ = lean_shell_options_get_num_threads(v_opts_740_);
v_r_742_ = lean_box_uint32(v_res_741_);
return v_r_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object* v_optName_745_, lean_object* v_optArg_x3f_746_){
_start:
{
if (lean_obj_tag(v_optArg_x3f_746_) == 1)
{
lean_object* v_val_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_755_; 
v_val_748_ = lean_ctor_get(v_optArg_x3f_746_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v_optArg_x3f_746_);
if (v_isSharedCheck_755_ == 0)
{
v___x_750_ = v_optArg_x3f_746_;
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_val_748_);
lean_dec(v_optArg_x3f_746_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_755_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set_tag(v___x_750_, 0);
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v_val_748_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
else
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec(v_optArg_x3f_746_);
v___x_756_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__0));
v___x_757_ = lean_string_append(v___x_756_, v_optName_745_);
v___x_758_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_759_ = lean_string_append(v___x_757_, v___x_758_);
v___x_760_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
v___x_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object* v_optName_762_, lean_object* v_optArg_x3f_763_, lean_object* v_a_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l___private_Lean_Shell_0__Lean_checkOptArg(v_optName_762_, v_optArg_x3f_763_);
lean_dec_ref(v_optName_762_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object* v_o_769_, lean_object* v_k_770_, lean_object* v_v_771_){
_start:
{
lean_object* v_map_772_; uint8_t v_hasTrace_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_787_; 
v_map_772_ = lean_ctor_get(v_o_769_, 0);
v_hasTrace_773_ = lean_ctor_get_uint8(v_o_769_, sizeof(void*)*1);
v_isSharedCheck_787_ = !lean_is_exclusive(v_o_769_);
if (v_isSharedCheck_787_ == 0)
{
v___x_775_ = v_o_769_;
v_isShared_776_ = v_isSharedCheck_787_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_map_772_);
lean_dec(v_o_769_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_787_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v_v_771_);
lean_inc(v_k_770_);
v___x_778_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_770_, v___x_777_, v_map_772_);
if (v_hasTrace_773_ == 0)
{
lean_object* v___x_779_; uint8_t v___x_780_; lean_object* v___x_782_; 
v___x_779_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_780_ = l_Lean_Name_isPrefixOf(v___x_779_, v_k_770_);
lean_dec(v_k_770_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_778_);
v___x_782_ = v___x_775_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_778_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_ctor_set_uint8(v___x_782_, sizeof(void*)*1, v___x_780_);
return v___x_782_;
}
}
else
{
lean_object* v___x_785_; 
lean_dec(v_k_770_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 0, v___x_778_);
v___x_785_ = v___x_775_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_778_);
lean_ctor_set_uint8(v_reuseFailAlloc_786_, sizeof(void*)*1, v_hasTrace_773_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object* v___x_788_, lean_object* v_arg_789_, lean_object* v_a_790_, lean_object* v_b_791_){
_start:
{
lean_object* v_startInclusive_792_; lean_object* v_endExclusive_793_; lean_object* v___x_794_; uint8_t v___x_795_; 
v_startInclusive_792_ = lean_ctor_get(v___x_788_, 1);
v_endExclusive_793_ = lean_ctor_get(v___x_788_, 2);
v___x_794_ = lean_nat_sub(v_endExclusive_793_, v_startInclusive_792_);
v___x_795_ = lean_nat_dec_eq(v_a_790_, v___x_794_);
lean_dec(v___x_794_);
if (v___x_795_ == 0)
{
uint32_t v___x_796_; uint32_t v___x_797_; uint8_t v___x_798_; 
v___x_796_ = lean_string_utf8_get_fast(v_arg_789_, v_a_790_);
v___x_797_ = 61;
v___x_798_ = lean_uint32_dec_eq(v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_box(0);
v___x_800_ = lean_string_utf8_next_fast(v_arg_789_, v_a_790_);
lean_dec(v_a_790_);
v_a_790_ = v___x_800_;
v_b_791_ = v___x_799_;
goto _start;
}
else
{
lean_object* v___x_802_; 
v___x_802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_802_, 0, v_a_790_);
return v___x_802_;
}
}
else
{
lean_dec(v_a_790_);
lean_inc(v_b_791_);
return v_b_791_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object* v___x_803_, lean_object* v_arg_804_, lean_object* v_a_805_, lean_object* v_b_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_803_, v_arg_804_, v_a_805_, v_b_806_);
lean_dec(v_b_806_);
lean_dec_ref(v_arg_804_);
lean_dec_ref(v___x_803_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object* v_opts_811_, lean_object* v_arg_812_){
_start:
{
lean_object* v___y_815_; lean_object* v_searcher_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_searcher_846_ = lean_unsigned_to_nat(0u);
v___x_847_ = lean_string_utf8_byte_size(v_arg_812_);
lean_inc_ref(v_arg_812_);
v___x_848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_848_, 0, v_arg_812_);
lean_ctor_set(v___x_848_, 1, v_searcher_846_);
lean_ctor_set(v___x_848_, 2, v___x_847_);
v___x_849_ = lean_box(0);
v___x_850_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_848_, v_arg_812_, v_searcher_846_, v___x_849_);
lean_dec_ref_known(v___x_848_, 3);
if (lean_obj_tag(v___x_850_) == 0)
{
v___y_815_ = v___x_847_;
goto v___jp_814_;
}
else
{
lean_object* v_val_851_; 
v_val_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_val_851_);
lean_dec_ref_known(v___x_850_, 1);
v___y_815_ = v_val_851_;
goto v___jp_814_;
}
v___jp_814_:
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = lean_string_utf8_byte_size(v_arg_812_);
v___x_817_ = lean_nat_dec_eq(v___y_815_, v___x_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_835_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_835_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_835_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_835_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v_name_826_; lean_object* v_val_827_; lean_object* v___x_828_; 
v___x_823_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_815_);
lean_inc_ref(v_arg_812_);
v___x_824_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_824_, 0, v_arg_812_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
lean_ctor_set(v___x_824_, 2, v___y_815_);
v___x_825_ = lean_string_utf8_next_fast(v_arg_812_, v___y_815_);
lean_dec(v___y_815_);
v_name_826_ = l_String_Slice_toName(v___x_824_);
lean_dec_ref_known(v___x_824_, 3);
v_val_827_ = lean_string_utf8_extract(v_arg_812_, v___x_825_, v___x_816_);
lean_dec_ref(v_arg_812_);
v___x_828_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_819_, v_name_826_);
lean_dec(v_a_819_);
if (lean_obj_tag(v___x_828_) == 1)
{
lean_object* v_val_829_; lean_object* v___x_830_; 
lean_del_object(v___x_821_);
v_val_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_val_829_);
lean_dec_ref_known(v___x_828_, 1);
v___x_830_ = l_Lean_Language_Lean_setOption(v_opts_811_, v_val_829_, v_name_826_, v_val_827_);
return v___x_830_;
}
else
{
lean_object* v___x_831_; lean_object* v___x_833_; 
lean_dec(v___x_828_);
v___x_831_ = l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(v_opts_811_, v_name_826_, v_val_827_);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_831_);
v___x_833_ = v___x_821_;
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
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_dec(v___y_815_);
lean_dec_ref(v_arg_812_);
lean_dec_ref(v_opts_811_);
v_a_836_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_818_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_818_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
else
{
lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec(v___y_815_);
lean_dec_ref(v_arg_812_);
lean_dec_ref(v_opts_811_);
v___x_844_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_setConfigOption___closed__1));
v___x_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object* v_opts_852_, lean_object* v_arg_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_opts_852_, v_arg_853_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object* v___x_856_, lean_object* v_arg_857_, lean_object* v_inst_858_, lean_object* v_R_859_, lean_object* v_a_860_, lean_object* v_b_861_, lean_object* v_c_862_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_856_, v_arg_857_, v_a_860_, v_b_861_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object* v___x_864_, lean_object* v_arg_865_, lean_object* v_inst_866_, lean_object* v_R_867_, lean_object* v_a_868_, lean_object* v_b_869_, lean_object* v_c_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(v___x_864_, v_arg_865_, v_inst_866_, v_R_867_, v_a_868_, v_b_869_, v_c_870_);
lean_dec(v_b_869_);
lean_dec_ref(v_arg_865_);
lean_dec_ref(v___x_864_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object* v_msg_873_){
_start:
{
lean_object* v___f_875_; lean_object* v___x_876_; 
v___f_875_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_876_ = l_IO_eprint___redArg(v___f_875_, v_msg_873_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_876_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_876_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_892_; 
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_876_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v___x_876_, 0);
lean_dec(v_unused_893_);
v___x_886_ = v___x_876_;
v_isShared_887_ = v_isSharedCheck_892_;
goto v_resetjp_885_;
}
else
{
lean_dec(v___x_876_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_892_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_888_ = lean_box(0);
if (v_isShared_887_ == 0)
{
lean_ctor_set_tag(v___x_886_, 0);
lean_ctor_set(v___x_886_, 0, v___x_888_);
v___x_890_ = v___x_886_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object* v_msg_894_, lean_object* v_a_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(v_msg_894_);
return v_res_896_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_899_; lean_object* v___x_900_; 
v___x_899_ = 1;
v___x_900_ = lean_box_uint32(v___x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object* v_x_901_){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = lean_apply_1(v_x_901_, lean_box(0));
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_910_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_910_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
else
{
lean_object* v_a_919_; lean_object* v___x_924_; lean_object* v___f_925_; lean_object* v___x_926_; 
v_a_919_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_910_, 1);
v___x_924_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_925_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_926_ = l_IO_eprint___redArg(v___f_925_, v___x_924_);
lean_dec_ref(v___x_926_);
goto v___jp_920_;
v___jp_920_:
{
lean_object* v___x_921_; lean_object* v___f_922_; lean_object* v___x_923_; 
v___x_921_ = lean_io_error_to_string(v_a_919_);
v___f_922_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_923_ = l_IO_eprint___redArg(v___f_922_, v___x_921_);
lean_dec_ref(v___x_923_);
goto v___jp_906_;
}
}
v___jp_903_:
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
v___jp_906_:
{
lean_object* v___x_907_; lean_object* v___f_908_; lean_object* v___x_909_; 
v___x_907_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_908_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_909_ = l_IO_eprint___redArg(v___f_908_, v___x_907_);
lean_dec_ref(v___x_909_);
goto v___jp_903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object* v_x_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(v_x_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object* v_00_u03b1_930_, lean_object* v_x_931_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = lean_apply_1(v_x_931_, lean_box(0));
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_940_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_954_; lean_object* v___f_955_; lean_object* v___x_956_; 
v_a_949_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_940_, 1);
v___x_954_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_955_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_956_ = l_IO_eprint___redArg(v___f_955_, v___x_954_);
lean_dec_ref(v___x_956_);
goto v___jp_950_;
v___jp_950_:
{
lean_object* v___x_951_; lean_object* v___f_952_; lean_object* v___x_953_; 
v___x_951_ = lean_io_error_to_string(v_a_949_);
v___f_952_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_953_ = l_IO_eprint___redArg(v___f_952_, v___x_951_);
lean_dec_ref(v___x_953_);
goto v___jp_936_;
}
}
v___jp_933_:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
return v___x_935_;
}
v___jp_936_:
{
lean_object* v___x_937_; lean_object* v___f_938_; lean_object* v___x_939_; 
v___x_937_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_938_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_939_ = l_IO_eprint___redArg(v___f_938_, v___x_937_);
lean_dec_ref(v___x_939_);
goto v___jp_933_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object* v_00_u03b1_957_, lean_object* v_x_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(v_00_u03b1_957_, v_x_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object* v_opt_963_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___f_972_; lean_object* v___x_973_; 
v___x_968_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0));
v___x_969_ = lean_string_append(v___x_968_, v_opt_963_);
v___x_970_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_971_ = lean_string_append(v___x_969_, v___x_970_);
v___f_972_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_973_ = l_IO_eprint___redArg(v___f_972_, v___x_971_);
lean_dec_ref(v___x_973_);
goto v___jp_965_;
v___jp_965_:
{
lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_966_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
return v___x_967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object* v_opt_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(v_opt_974_);
lean_dec_ref(v_opt_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object* v_opt_979_){
_start:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___f_988_; lean_object* v___x_989_; 
v___x_984_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0));
v___x_985_ = lean_string_append(v___x_984_, v_opt_979_);
v___x_986_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1));
v___x_987_ = lean_string_append(v___x_985_, v___x_986_);
v___f_988_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_989_ = l_IO_eprint___redArg(v___f_988_, v___x_987_);
lean_dec_ref(v___x_989_);
goto v___jp_981_;
v___jp_981_:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
return v___x_983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object* v_opt_990_, lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(v_opt_990_);
lean_dec_ref(v_opt_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object* v_s_993_){
_start:
{
lean_object* v___x_995_; lean_object* v_putStr_996_; lean_object* v___x_997_; 
v___x_995_ = lean_get_stderr();
v_putStr_996_ = lean_ctor_get(v___x_995_, 4);
lean_inc_ref(v_putStr_996_);
lean_dec_ref(v___x_995_);
v___x_997_ = lean_apply_2(v_putStr_996_, v_s_993_, lean_box(0));
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object* v_s_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_s_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object* v_s_1001_){
_start:
{
lean_object* v___x_1003_; lean_object* v_putStr_1004_; lean_object* v___x_1005_; 
v___x_1003_ = lean_get_stdout();
v_putStr_1004_ = lean_ctor_get(v___x_1003_, 4);
lean_inc_ref(v_putStr_1004_);
lean_dec_ref(v___x_1003_);
v___x_1005_ = lean_apply_2(v_putStr_1004_, v_s_1001_, lean_box(0));
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object* v_s_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v_s_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object* v_s_1009_){
_start:
{
uint32_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = 10;
v___x_1012_ = lean_string_push(v_s_1009_, v___x_1011_);
v___x_1013_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_1012_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object* v_s_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v_s_1014_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object* v_o_1017_, lean_object* v_k_1018_, uint8_t v_v_1019_){
_start:
{
lean_object* v_map_1020_; uint8_t v_hasTrace_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1035_; 
v_map_1020_ = lean_ctor_get(v_o_1017_, 0);
v_hasTrace_1021_ = lean_ctor_get_uint8(v_o_1017_, sizeof(void*)*1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_o_1017_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1023_ = v_o_1017_;
v_isShared_1024_ = v_isSharedCheck_1035_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_map_1020_);
lean_dec(v_o_1017_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1035_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1025_, 0, v_v_1019_);
lean_inc(v_k_1018_);
v___x_1026_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1018_, v___x_1025_, v_map_1020_);
if (v_hasTrace_1021_ == 0)
{
lean_object* v___x_1027_; uint8_t v___x_1028_; lean_object* v___x_1030_; 
v___x_1027_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1028_ = l_Lean_Name_isPrefixOf(v___x_1027_, v_k_1018_);
lean_dec(v_k_1018_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1026_);
v___x_1030_ = v___x_1023_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1026_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_ctor_set_uint8(v___x_1030_, sizeof(void*)*1, v___x_1028_);
return v___x_1030_;
}
}
else
{
lean_object* v___x_1033_; 
lean_dec(v_k_1018_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1026_);
v___x_1033_ = v___x_1023_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1026_);
lean_ctor_set_uint8(v_reuseFailAlloc_1034_, sizeof(void*)*1, v_hasTrace_1021_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object* v_o_1036_, lean_object* v_k_1037_, lean_object* v_v_1038_){
_start:
{
uint8_t v_v_boxed_1039_; lean_object* v_res_1040_; 
v_v_boxed_1039_ = lean_unbox(v_v_1038_);
v_res_1040_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_o_1036_, v_k_1037_, v_v_boxed_1039_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object* v_opts_1041_, lean_object* v_opt_1042_, uint8_t v_val_1043_){
_start:
{
lean_object* v_name_1044_; lean_object* v___x_1045_; 
v_name_1044_ = lean_ctor_get(v_opt_1042_, 0);
lean_inc(v_name_1044_);
lean_dec_ref(v_opt_1042_);
v___x_1045_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_opts_1041_, v_name_1044_, v_val_1043_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object* v_opts_1046_, lean_object* v_opt_1047_, lean_object* v_val_1048_){
_start:
{
uint8_t v_val_boxed_1049_; lean_object* v_res_1050_; 
v_val_boxed_1049_ = lean_unbox(v_val_1048_);
v_res_1050_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_opts_1046_, v_opt_1047_, v_val_boxed_1049_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object* v_o_1051_, lean_object* v_k_1052_, lean_object* v_v_1053_){
_start:
{
lean_object* v_map_1054_; uint8_t v_hasTrace_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1069_; 
v_map_1054_ = lean_ctor_get(v_o_1051_, 0);
v_hasTrace_1055_ = lean_ctor_get_uint8(v_o_1051_, sizeof(void*)*1);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_o_1051_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1057_ = v_o_1051_;
v_isShared_1058_ = v_isSharedCheck_1069_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_map_1054_);
lean_dec(v_o_1051_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1069_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1059_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1059_, 0, v_v_1053_);
lean_inc(v_k_1052_);
v___x_1060_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1052_, v___x_1059_, v_map_1054_);
if (v_hasTrace_1055_ == 0)
{
lean_object* v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1064_; 
v___x_1061_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1062_ = l_Lean_Name_isPrefixOf(v___x_1061_, v_k_1052_);
lean_dec(v_k_1052_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1060_);
v___x_1064_ = v___x_1057_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1060_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
lean_ctor_set_uint8(v___x_1064_, sizeof(void*)*1, v___x_1062_);
return v___x_1064_;
}
}
else
{
lean_object* v___x_1067_; 
lean_dec(v_k_1052_);
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1060_);
v___x_1067_ = v___x_1057_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1068_, sizeof(void*)*1, v_hasTrace_1055_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object* v_opts_1070_, lean_object* v_opt_1071_, lean_object* v_val_1072_){
_start:
{
lean_object* v_name_1073_; lean_object* v___x_1074_; 
v_name_1073_ = lean_ctor_get(v_opt_1071_, 0);
lean_inc(v_name_1073_);
lean_dec_ref(v_opt_1071_);
v___x_1074_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(v_opts_1070_, v_name_1073_, v_val_1072_);
return v___x_1074_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1103_ = l_System_Platform_numBits;
v___x_1104_ = lean_unsigned_to_nat(2u);
v___x_1105_ = lean_nat_pow(v___x_1104_, v___x_1103_);
return v___x_1105_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1(void){
_start:
{
uint32_t v___x_1116_; lean_object* v___x_1117_; 
v___x_1116_ = 0;
v___x_1117_ = lean_box_uint32(v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object* v_opts_1118_, uint32_t v_opt_1119_, lean_object* v_optArg_x3f_1120_){
_start:
{
lean_object* v___y_1198_; lean_object* v___y_1226_; uint32_t v___x_1346_; uint8_t v___x_1347_; 
v___x_1346_ = 101;
v___x_1347_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1346_);
if (v___x_1347_ == 0)
{
uint32_t v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = 106;
v___x_1349_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1348_);
if (v___x_1349_ == 0)
{
uint32_t v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = 118;
v___x_1351_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1350_);
if (v___x_1351_ == 0)
{
uint32_t v___x_1352_; uint8_t v___x_1353_; 
v___x_1352_ = 86;
v___x_1353_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1352_);
if (v___x_1353_ == 0)
{
uint32_t v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = 103;
v___x_1355_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1354_);
if (v___x_1355_ == 0)
{
uint32_t v___x_1356_; uint8_t v___x_1357_; 
v___x_1356_ = 104;
v___x_1357_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1356_);
if (v___x_1357_ == 0)
{
uint32_t v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = 102;
v___x_1359_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1358_);
if (v___x_1359_ == 0)
{
uint32_t v___x_1360_; uint8_t v___x_1361_; 
v___x_1360_ = 99;
v___x_1361_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1360_);
if (v___x_1361_ == 0)
{
uint32_t v___x_1362_; uint8_t v___x_1363_; 
v___x_1362_ = 98;
v___x_1363_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1362_);
if (v___x_1363_ == 0)
{
uint32_t v___x_1364_; uint8_t v___x_1365_; 
v___x_1364_ = 122;
v___x_1365_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1364_);
if (v___x_1365_ == 0)
{
uint32_t v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = 115;
v___x_1367_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1366_);
if (v___x_1367_ == 0)
{
uint32_t v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = 73;
v___x_1369_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1368_);
if (v___x_1369_ == 0)
{
uint32_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = 114;
v___x_1371_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1370_);
if (v___x_1371_ == 0)
{
uint32_t v___x_1372_; uint8_t v___x_1373_; 
v___x_1372_ = 111;
v___x_1373_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1372_);
if (v___x_1373_ == 0)
{
uint32_t v___x_1374_; uint8_t v___x_1375_; 
v___x_1374_ = 105;
v___x_1375_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1374_);
if (v___x_1375_ == 0)
{
uint32_t v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = 82;
v___x_1377_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1376_);
if (v___x_1377_ == 0)
{
uint32_t v___x_1378_; uint8_t v___x_1379_; 
v___x_1378_ = 77;
v___x_1379_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1378_);
if (v___x_1379_ == 0)
{
uint32_t v___x_1380_; uint8_t v___x_1381_; 
v___x_1380_ = 84;
v___x_1381_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1380_);
if (v___x_1381_ == 0)
{
uint32_t v___x_1382_; uint8_t v___x_1383_; 
v___x_1382_ = 116;
v___x_1383_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1382_);
if (v___x_1383_ == 0)
{
uint32_t v___x_1384_; uint8_t v___x_1385_; 
v___x_1384_ = 113;
v___x_1385_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1384_);
if (v___x_1385_ == 0)
{
uint32_t v___x_1386_; uint8_t v___x_1387_; 
v___x_1386_ = 100;
v___x_1387_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1386_);
if (v___x_1387_ == 0)
{
uint32_t v___x_1388_; uint8_t v___x_1389_; 
v___x_1388_ = 79;
v___x_1389_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1388_);
if (v___x_1389_ == 0)
{
uint32_t v___x_1390_; uint8_t v___x_1391_; 
v___x_1390_ = 78;
v___x_1391_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1390_);
if (v___x_1391_ == 0)
{
uint32_t v___x_1392_; uint8_t v___x_1393_; 
v___x_1392_ = 74;
v___x_1393_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1392_);
if (v___x_1393_ == 0)
{
uint32_t v___x_1394_; uint8_t v___x_1395_; 
v___x_1394_ = 97;
v___x_1395_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1394_);
if (v___x_1395_ == 0)
{
uint32_t v___x_1396_; uint8_t v___x_1397_; 
v___x_1396_ = 120;
v___x_1397_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1396_);
if (v___x_1397_ == 0)
{
uint32_t v___x_1398_; uint8_t v___x_1399_; 
v___x_1398_ = 76;
v___x_1399_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1398_);
if (v___x_1399_ == 0)
{
uint32_t v___x_1400_; uint8_t v___x_1401_; 
v___x_1400_ = 68;
v___x_1401_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1400_);
if (v___x_1401_ == 0)
{
uint32_t v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = 83;
v___x_1403_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1402_);
if (v___x_1403_ == 0)
{
uint32_t v___x_1404_; uint8_t v___x_1405_; 
v___x_1404_ = 87;
v___x_1405_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1404_);
if (v___x_1405_ == 0)
{
uint32_t v___x_1406_; uint8_t v___x_1407_; 
v___x_1406_ = 80;
v___x_1407_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1406_);
if (v___x_1407_ == 0)
{
uint32_t v___x_1408_; uint8_t v___x_1409_; 
v___x_1408_ = 66;
v___x_1409_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1408_);
if (v___x_1409_ == 0)
{
uint32_t v___x_1410_; uint8_t v___x_1411_; 
v___x_1410_ = 112;
v___x_1411_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1410_);
if (v___x_1411_ == 0)
{
uint32_t v___x_1412_; uint8_t v___x_1413_; 
v___x_1412_ = 108;
v___x_1413_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1412_);
if (v___x_1413_ == 0)
{
uint32_t v___x_1414_; uint8_t v___x_1415_; 
v___x_1414_ = 117;
v___x_1415_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1414_);
if (v___x_1415_ == 0)
{
uint32_t v___x_1416_; uint8_t v___x_1417_; 
v___x_1416_ = 69;
v___x_1417_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1416_);
if (v___x_1417_ == 0)
{
uint32_t v___x_1418_; uint8_t v___x_1419_; 
v___x_1418_ = 89;
v___x_1419_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1418_);
if (v___x_1419_ == 0)
{
uint32_t v___x_1420_; uint8_t v___x_1421_; 
v___x_1420_ = 90;
v___x_1421_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1420_);
if (v___x_1421_ == 0)
{
uint32_t v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = 72;
v___x_1423_ = lean_uint32_dec_eq(v_opt_1119_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
goto v___jp_1244_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1));
v___x_1425_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1424_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1467_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1467_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1467_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v_leanOpts_1430_; lean_object* v_forwardedArgs_1431_; uint8_t v_component_1432_; uint8_t v_printPrefix_1433_; uint8_t v_printLibDir_1434_; uint8_t v_useStdin_1435_; uint8_t v_onlyDeps_1436_; uint8_t v_onlySrcDeps_1437_; uint8_t v_depsJson_1438_; lean_object* v_opts_1439_; uint32_t v_trustLevel_1440_; uint32_t v_numThreads_1441_; lean_object* v_rootDir_x3f_1442_; lean_object* v_setupFileName_x3f_1443_; lean_object* v_oleanFileName_x3f_1444_; lean_object* v_ileanFileName_x3f_1445_; lean_object* v_cFileName_x3f_1446_; lean_object* v_bcFileName_x3f_1447_; lean_object* v_zigFileName_x3f_1448_; uint8_t v_jsonOutput_1449_; lean_object* v_errorOnKinds_1450_; uint8_t v_printStats_1451_; uint8_t v_run_1452_; lean_object* v_incrSaveFileName_x3f_1453_; lean_object* v_incrLoadFileName_x3f_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1465_; 
v_leanOpts_1430_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1431_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1432_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1433_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1434_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1435_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1436_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1437_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1438_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1439_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1440_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1441_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1442_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1443_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1444_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1445_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1446_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1447_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1448_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1449_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1450_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1451_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1452_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1453_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1454_ = lean_ctor_get(v_opts_1118_, 12);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1465_ == 0)
{
lean_object* v_unused_1466_; 
v_unused_1466_ = lean_ctor_get(v_opts_1118_, 13);
lean_dec(v_unused_1466_);
v___x_1456_ = v_opts_1118_;
v_isShared_1457_ = v_isSharedCheck_1465_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_incrLoadFileName_x3f_1454_);
lean_inc(v_incrSaveFileName_x3f_1453_);
lean_inc(v_errorOnKinds_1450_);
lean_inc(v_zigFileName_x3f_1448_);
lean_inc(v_bcFileName_x3f_1447_);
lean_inc(v_cFileName_x3f_1446_);
lean_inc(v_ileanFileName_x3f_1445_);
lean_inc(v_oleanFileName_x3f_1444_);
lean_inc(v_setupFileName_x3f_1443_);
lean_inc(v_rootDir_x3f_1442_);
lean_inc(v_opts_1439_);
lean_inc(v_forwardedArgs_1431_);
lean_inc(v_leanOpts_1430_);
lean_dec(v_opts_1118_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1465_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_a_1426_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set(v___x_1456_, 13, v___x_1458_);
v___x_1460_ = v___x_1456_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_leanOpts_1430_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_forwardedArgs_1431_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v_opts_1439_);
lean_ctor_set(v_reuseFailAlloc_1464_, 3, v_rootDir_x3f_1442_);
lean_ctor_set(v_reuseFailAlloc_1464_, 4, v_setupFileName_x3f_1443_);
lean_ctor_set(v_reuseFailAlloc_1464_, 5, v_oleanFileName_x3f_1444_);
lean_ctor_set(v_reuseFailAlloc_1464_, 6, v_ileanFileName_x3f_1445_);
lean_ctor_set(v_reuseFailAlloc_1464_, 7, v_cFileName_x3f_1446_);
lean_ctor_set(v_reuseFailAlloc_1464_, 8, v_bcFileName_x3f_1447_);
lean_ctor_set(v_reuseFailAlloc_1464_, 9, v_zigFileName_x3f_1448_);
lean_ctor_set(v_reuseFailAlloc_1464_, 10, v_errorOnKinds_1450_);
lean_ctor_set(v_reuseFailAlloc_1464_, 11, v_incrSaveFileName_x3f_1453_);
lean_ctor_set(v_reuseFailAlloc_1464_, 12, v_incrLoadFileName_x3f_1454_);
lean_ctor_set(v_reuseFailAlloc_1464_, 13, v___x_1458_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 8, v_component_1432_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 9, v_printPrefix_1433_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 10, v_printLibDir_1434_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 11, v_useStdin_1435_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 12, v_onlyDeps_1436_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 13, v_onlySrcDeps_1437_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 14, v_depsJson_1438_);
lean_ctor_set_uint32(v_reuseFailAlloc_1464_, sizeof(void*)*14, v_trustLevel_1440_);
lean_ctor_set_uint32(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 4, v_numThreads_1441_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 15, v_jsonOutput_1449_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 16, v_printStats_1451_);
lean_ctor_set_uint8(v_reuseFailAlloc_1464_, sizeof(void*)*14 + 17, v_run_1452_);
v___x_1460_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1462_; 
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 0, v___x_1460_);
v___x_1462_ = v___x_1428_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1460_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
lean_dec_ref(v_opts_1118_);
v_a_1468_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v___x_1425_, 1);
v___x_1472_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1473_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1472_);
lean_dec_ref(v___x_1473_);
goto v___jp_1469_;
v___jp_1469_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = lean_io_error_to_string(v_a_1468_);
v___x_1471_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1470_);
lean_dec_ref(v___x_1471_);
goto v___jp_1250_;
}
}
}
}
else
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2));
v___x_1475_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1474_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1517_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1478_ = v___x_1475_;
v_isShared_1479_ = v_isSharedCheck_1517_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1475_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1517_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v_leanOpts_1480_; lean_object* v_forwardedArgs_1481_; uint8_t v_component_1482_; uint8_t v_printPrefix_1483_; uint8_t v_printLibDir_1484_; uint8_t v_useStdin_1485_; uint8_t v_onlyDeps_1486_; uint8_t v_onlySrcDeps_1487_; uint8_t v_depsJson_1488_; lean_object* v_opts_1489_; uint32_t v_trustLevel_1490_; uint32_t v_numThreads_1491_; lean_object* v_rootDir_x3f_1492_; lean_object* v_setupFileName_x3f_1493_; lean_object* v_oleanFileName_x3f_1494_; lean_object* v_ileanFileName_x3f_1495_; lean_object* v_cFileName_x3f_1496_; lean_object* v_bcFileName_x3f_1497_; lean_object* v_zigFileName_x3f_1498_; uint8_t v_jsonOutput_1499_; lean_object* v_errorOnKinds_1500_; uint8_t v_printStats_1501_; uint8_t v_run_1502_; lean_object* v_incrSaveFileName_x3f_1503_; lean_object* v_incrHeaderSaveFileName_x3f_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1515_; 
v_leanOpts_1480_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1481_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1482_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1483_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1484_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1485_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1486_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1487_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1488_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1489_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1490_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1491_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1492_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1493_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1494_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1495_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1496_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1497_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1498_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1499_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1500_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1501_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1502_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1503_ = lean_ctor_get(v_opts_1118_, 11);
v_incrHeaderSaveFileName_x3f_1504_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1515_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1515_ == 0)
{
lean_object* v_unused_1516_; 
v_unused_1516_ = lean_ctor_get(v_opts_1118_, 12);
lean_dec(v_unused_1516_);
v___x_1506_ = v_opts_1118_;
v_isShared_1507_ = v_isSharedCheck_1515_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1504_);
lean_inc(v_incrSaveFileName_x3f_1503_);
lean_inc(v_errorOnKinds_1500_);
lean_inc(v_zigFileName_x3f_1498_);
lean_inc(v_bcFileName_x3f_1497_);
lean_inc(v_cFileName_x3f_1496_);
lean_inc(v_ileanFileName_x3f_1495_);
lean_inc(v_oleanFileName_x3f_1494_);
lean_inc(v_setupFileName_x3f_1493_);
lean_inc(v_rootDir_x3f_1492_);
lean_inc(v_opts_1489_);
lean_inc(v_forwardedArgs_1481_);
lean_inc(v_leanOpts_1480_);
lean_dec(v_opts_1118_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1515_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; lean_object* v___x_1510_; 
v___x_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_a_1476_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 12, v___x_1508_);
v___x_1510_ = v___x_1506_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_leanOpts_1480_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_forwardedArgs_1481_);
lean_ctor_set(v_reuseFailAlloc_1514_, 2, v_opts_1489_);
lean_ctor_set(v_reuseFailAlloc_1514_, 3, v_rootDir_x3f_1492_);
lean_ctor_set(v_reuseFailAlloc_1514_, 4, v_setupFileName_x3f_1493_);
lean_ctor_set(v_reuseFailAlloc_1514_, 5, v_oleanFileName_x3f_1494_);
lean_ctor_set(v_reuseFailAlloc_1514_, 6, v_ileanFileName_x3f_1495_);
lean_ctor_set(v_reuseFailAlloc_1514_, 7, v_cFileName_x3f_1496_);
lean_ctor_set(v_reuseFailAlloc_1514_, 8, v_bcFileName_x3f_1497_);
lean_ctor_set(v_reuseFailAlloc_1514_, 9, v_zigFileName_x3f_1498_);
lean_ctor_set(v_reuseFailAlloc_1514_, 10, v_errorOnKinds_1500_);
lean_ctor_set(v_reuseFailAlloc_1514_, 11, v_incrSaveFileName_x3f_1503_);
lean_ctor_set(v_reuseFailAlloc_1514_, 12, v___x_1508_);
lean_ctor_set(v_reuseFailAlloc_1514_, 13, v_incrHeaderSaveFileName_x3f_1504_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 8, v_component_1482_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 9, v_printPrefix_1483_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 10, v_printLibDir_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 11, v_useStdin_1485_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 12, v_onlyDeps_1486_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 13, v_onlySrcDeps_1487_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 14, v_depsJson_1488_);
lean_ctor_set_uint32(v_reuseFailAlloc_1514_, sizeof(void*)*14, v_trustLevel_1490_);
lean_ctor_set_uint32(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 4, v_numThreads_1491_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 15, v_jsonOutput_1499_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 16, v_printStats_1501_);
lean_ctor_set_uint8(v_reuseFailAlloc_1514_, sizeof(void*)*14 + 17, v_run_1502_);
v___x_1510_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
lean_object* v___x_1512_; 
if (v_isShared_1479_ == 0)
{
lean_ctor_set(v___x_1478_, 0, v___x_1510_);
v___x_1512_ = v___x_1478_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
lean_dec_ref(v_opts_1118_);
v_a_1518_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1522_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1523_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1522_);
lean_dec_ref(v___x_1523_);
goto v___jp_1519_;
v___jp_1519_:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = lean_io_error_to_string(v_a_1518_);
v___x_1521_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1520_);
lean_dec_ref(v___x_1521_);
goto v___jp_1216_;
}
}
}
}
else
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3));
v___x_1525_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1524_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1567_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1528_ = v___x_1525_;
v_isShared_1529_ = v_isSharedCheck_1567_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1567_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v_leanOpts_1530_; lean_object* v_forwardedArgs_1531_; uint8_t v_component_1532_; uint8_t v_printPrefix_1533_; uint8_t v_printLibDir_1534_; uint8_t v_useStdin_1535_; uint8_t v_onlyDeps_1536_; uint8_t v_onlySrcDeps_1537_; uint8_t v_depsJson_1538_; lean_object* v_opts_1539_; uint32_t v_trustLevel_1540_; uint32_t v_numThreads_1541_; lean_object* v_rootDir_x3f_1542_; lean_object* v_setupFileName_x3f_1543_; lean_object* v_oleanFileName_x3f_1544_; lean_object* v_ileanFileName_x3f_1545_; lean_object* v_cFileName_x3f_1546_; lean_object* v_bcFileName_x3f_1547_; lean_object* v_zigFileName_x3f_1548_; uint8_t v_jsonOutput_1549_; lean_object* v_errorOnKinds_1550_; uint8_t v_printStats_1551_; uint8_t v_run_1552_; lean_object* v_incrLoadFileName_x3f_1553_; lean_object* v_incrHeaderSaveFileName_x3f_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1565_; 
v_leanOpts_1530_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1531_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1532_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1533_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1534_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1535_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1536_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1537_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1538_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1539_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1540_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1541_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1542_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1543_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1544_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1545_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1546_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1547_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1548_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1549_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1550_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1551_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1552_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrLoadFileName_x3f_1553_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1554_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1565_ == 0)
{
lean_object* v_unused_1566_; 
v_unused_1566_ = lean_ctor_get(v_opts_1118_, 11);
lean_dec(v_unused_1566_);
v___x_1556_ = v_opts_1118_;
v_isShared_1557_ = v_isSharedCheck_1565_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1554_);
lean_inc(v_incrLoadFileName_x3f_1553_);
lean_inc(v_errorOnKinds_1550_);
lean_inc(v_zigFileName_x3f_1548_);
lean_inc(v_bcFileName_x3f_1547_);
lean_inc(v_cFileName_x3f_1546_);
lean_inc(v_ileanFileName_x3f_1545_);
lean_inc(v_oleanFileName_x3f_1544_);
lean_inc(v_setupFileName_x3f_1543_);
lean_inc(v_rootDir_x3f_1542_);
lean_inc(v_opts_1539_);
lean_inc(v_forwardedArgs_1531_);
lean_inc(v_leanOpts_1530_);
lean_dec(v_opts_1118_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1565_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1558_; lean_object* v___x_1560_; 
v___x_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1558_, 0, v_a_1526_);
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 11, v___x_1558_);
v___x_1560_ = v___x_1556_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_leanOpts_1530_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_forwardedArgs_1531_);
lean_ctor_set(v_reuseFailAlloc_1564_, 2, v_opts_1539_);
lean_ctor_set(v_reuseFailAlloc_1564_, 3, v_rootDir_x3f_1542_);
lean_ctor_set(v_reuseFailAlloc_1564_, 4, v_setupFileName_x3f_1543_);
lean_ctor_set(v_reuseFailAlloc_1564_, 5, v_oleanFileName_x3f_1544_);
lean_ctor_set(v_reuseFailAlloc_1564_, 6, v_ileanFileName_x3f_1545_);
lean_ctor_set(v_reuseFailAlloc_1564_, 7, v_cFileName_x3f_1546_);
lean_ctor_set(v_reuseFailAlloc_1564_, 8, v_bcFileName_x3f_1547_);
lean_ctor_set(v_reuseFailAlloc_1564_, 9, v_zigFileName_x3f_1548_);
lean_ctor_set(v_reuseFailAlloc_1564_, 10, v_errorOnKinds_1550_);
lean_ctor_set(v_reuseFailAlloc_1564_, 11, v___x_1558_);
lean_ctor_set(v_reuseFailAlloc_1564_, 12, v_incrLoadFileName_x3f_1553_);
lean_ctor_set(v_reuseFailAlloc_1564_, 13, v_incrHeaderSaveFileName_x3f_1554_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 8, v_component_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 9, v_printPrefix_1533_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 10, v_printLibDir_1534_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 11, v_useStdin_1535_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 12, v_onlyDeps_1536_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 13, v_onlySrcDeps_1537_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 14, v_depsJson_1538_);
lean_ctor_set_uint32(v_reuseFailAlloc_1564_, sizeof(void*)*14, v_trustLevel_1540_);
lean_ctor_set_uint32(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 4, v_numThreads_1541_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 15, v_jsonOutput_1549_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 16, v_printStats_1551_);
lean_ctor_set_uint8(v_reuseFailAlloc_1564_, sizeof(void*)*14 + 17, v_run_1552_);
v___x_1560_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1562_; 
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v___x_1560_);
v___x_1562_ = v___x_1528_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1572_; lean_object* v___x_1573_; 
lean_dec_ref(v_opts_1118_);
v_a_1568_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1525_, 1);
v___x_1572_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1573_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1572_);
lean_dec_ref(v___x_1573_);
goto v___jp_1569_;
v___jp_1569_:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1570_ = lean_io_error_to_string(v_a_1568_);
v___x_1571_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1570_);
lean_dec_ref(v___x_1571_);
goto v___jp_1256_;
}
}
}
}
else
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4));
v___x_1575_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1574_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1575_) == 0)
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1618_; 
v_a_1576_ = lean_ctor_get(v___x_1575_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1578_ = v___x_1575_;
v_isShared_1579_ = v_isSharedCheck_1618_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1575_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1618_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v_leanOpts_1580_; lean_object* v_forwardedArgs_1581_; uint8_t v_component_1582_; uint8_t v_printPrefix_1583_; uint8_t v_printLibDir_1584_; uint8_t v_useStdin_1585_; uint8_t v_onlyDeps_1586_; uint8_t v_onlySrcDeps_1587_; uint8_t v_depsJson_1588_; lean_object* v_opts_1589_; uint32_t v_trustLevel_1590_; uint32_t v_numThreads_1591_; lean_object* v_rootDir_x3f_1592_; lean_object* v_setupFileName_x3f_1593_; lean_object* v_oleanFileName_x3f_1594_; lean_object* v_ileanFileName_x3f_1595_; lean_object* v_cFileName_x3f_1596_; lean_object* v_bcFileName_x3f_1597_; lean_object* v_zigFileName_x3f_1598_; uint8_t v_jsonOutput_1599_; lean_object* v_errorOnKinds_1600_; uint8_t v_printStats_1601_; uint8_t v_run_1602_; lean_object* v_incrSaveFileName_x3f_1603_; lean_object* v_incrLoadFileName_x3f_1604_; lean_object* v_incrHeaderSaveFileName_x3f_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1617_; 
v_leanOpts_1580_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1581_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1582_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1583_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1584_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1585_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1586_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1587_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1588_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1589_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1590_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1591_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1592_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1593_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1594_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1595_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1596_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1597_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1598_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1599_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1600_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1601_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1602_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1603_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1604_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1605_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1617_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1607_ = v_opts_1118_;
v_isShared_1608_ = v_isSharedCheck_1617_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1605_);
lean_inc(v_incrLoadFileName_x3f_1604_);
lean_inc(v_incrSaveFileName_x3f_1603_);
lean_inc(v_errorOnKinds_1600_);
lean_inc(v_zigFileName_x3f_1598_);
lean_inc(v_bcFileName_x3f_1597_);
lean_inc(v_cFileName_x3f_1596_);
lean_inc(v_ileanFileName_x3f_1595_);
lean_inc(v_oleanFileName_x3f_1594_);
lean_inc(v_setupFileName_x3f_1593_);
lean_inc(v_rootDir_x3f_1592_);
lean_inc(v_opts_1589_);
lean_inc(v_forwardedArgs_1581_);
lean_inc(v_leanOpts_1580_);
lean_dec(v_opts_1118_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1617_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1609_ = l_String_toName(v_a_1576_);
v___x_1610_ = lean_array_push(v_errorOnKinds_1600_, v___x_1609_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 10, v___x_1610_);
v___x_1612_ = v___x_1607_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_leanOpts_1580_);
lean_ctor_set(v_reuseFailAlloc_1616_, 1, v_forwardedArgs_1581_);
lean_ctor_set(v_reuseFailAlloc_1616_, 2, v_opts_1589_);
lean_ctor_set(v_reuseFailAlloc_1616_, 3, v_rootDir_x3f_1592_);
lean_ctor_set(v_reuseFailAlloc_1616_, 4, v_setupFileName_x3f_1593_);
lean_ctor_set(v_reuseFailAlloc_1616_, 5, v_oleanFileName_x3f_1594_);
lean_ctor_set(v_reuseFailAlloc_1616_, 6, v_ileanFileName_x3f_1595_);
lean_ctor_set(v_reuseFailAlloc_1616_, 7, v_cFileName_x3f_1596_);
lean_ctor_set(v_reuseFailAlloc_1616_, 8, v_bcFileName_x3f_1597_);
lean_ctor_set(v_reuseFailAlloc_1616_, 9, v_zigFileName_x3f_1598_);
lean_ctor_set(v_reuseFailAlloc_1616_, 10, v___x_1610_);
lean_ctor_set(v_reuseFailAlloc_1616_, 11, v_incrSaveFileName_x3f_1603_);
lean_ctor_set(v_reuseFailAlloc_1616_, 12, v_incrLoadFileName_x3f_1604_);
lean_ctor_set(v_reuseFailAlloc_1616_, 13, v_incrHeaderSaveFileName_x3f_1605_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 8, v_component_1582_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 9, v_printPrefix_1583_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 10, v_printLibDir_1584_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 11, v_useStdin_1585_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 12, v_onlyDeps_1586_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 13, v_onlySrcDeps_1587_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 14, v_depsJson_1588_);
lean_ctor_set_uint32(v_reuseFailAlloc_1616_, sizeof(void*)*14, v_trustLevel_1590_);
lean_ctor_set_uint32(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 4, v_numThreads_1591_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 15, v_jsonOutput_1599_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 16, v_printStats_1601_);
lean_ctor_set_uint8(v_reuseFailAlloc_1616_, sizeof(void*)*14 + 17, v_run_1602_);
v___x_1612_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
lean_object* v___x_1614_; 
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 0, v___x_1612_);
v___x_1614_ = v___x_1578_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1612_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
lean_dec_ref(v_opts_1118_);
v_a_1619_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_a_1619_);
lean_dec_ref_known(v___x_1575_, 1);
v___x_1623_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1624_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1623_);
lean_dec_ref(v___x_1624_);
goto v___jp_1620_;
v___jp_1620_:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; 
v___x_1621_ = lean_io_error_to_string(v_a_1619_);
v___x_1622_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1621_);
lean_dec_ref(v___x_1622_);
goto v___jp_1210_;
}
}
}
}
else
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5));
v___x_1626_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1625_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1668_; 
v_a_1627_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1629_ = v___x_1626_;
v_isShared_1630_ = v_isSharedCheck_1668_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1626_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1668_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v_leanOpts_1631_; lean_object* v_forwardedArgs_1632_; uint8_t v_component_1633_; uint8_t v_printPrefix_1634_; uint8_t v_printLibDir_1635_; uint8_t v_useStdin_1636_; uint8_t v_onlyDeps_1637_; uint8_t v_onlySrcDeps_1638_; uint8_t v_depsJson_1639_; lean_object* v_opts_1640_; uint32_t v_trustLevel_1641_; uint32_t v_numThreads_1642_; lean_object* v_rootDir_x3f_1643_; lean_object* v_oleanFileName_x3f_1644_; lean_object* v_ileanFileName_x3f_1645_; lean_object* v_cFileName_x3f_1646_; lean_object* v_bcFileName_x3f_1647_; lean_object* v_zigFileName_x3f_1648_; uint8_t v_jsonOutput_1649_; lean_object* v_errorOnKinds_1650_; uint8_t v_printStats_1651_; uint8_t v_run_1652_; lean_object* v_incrSaveFileName_x3f_1653_; lean_object* v_incrLoadFileName_x3f_1654_; lean_object* v_incrHeaderSaveFileName_x3f_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1666_; 
v_leanOpts_1631_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1632_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1633_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1634_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1635_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1636_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1637_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1638_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1639_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1640_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1641_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1642_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1643_ = lean_ctor_get(v_opts_1118_, 3);
v_oleanFileName_x3f_1644_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1645_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1646_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1647_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1648_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1649_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1650_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1651_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1652_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1653_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1654_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1655_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1666_ == 0)
{
lean_object* v_unused_1667_; 
v_unused_1667_ = lean_ctor_get(v_opts_1118_, 4);
lean_dec(v_unused_1667_);
v___x_1657_ = v_opts_1118_;
v_isShared_1658_ = v_isSharedCheck_1666_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1655_);
lean_inc(v_incrLoadFileName_x3f_1654_);
lean_inc(v_incrSaveFileName_x3f_1653_);
lean_inc(v_errorOnKinds_1650_);
lean_inc(v_zigFileName_x3f_1648_);
lean_inc(v_bcFileName_x3f_1647_);
lean_inc(v_cFileName_x3f_1646_);
lean_inc(v_ileanFileName_x3f_1645_);
lean_inc(v_oleanFileName_x3f_1644_);
lean_inc(v_rootDir_x3f_1643_);
lean_inc(v_opts_1640_);
lean_inc(v_forwardedArgs_1632_);
lean_inc(v_leanOpts_1631_);
lean_dec(v_opts_1118_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1666_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1659_; lean_object* v___x_1661_; 
v___x_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1659_, 0, v_a_1627_);
if (v_isShared_1658_ == 0)
{
lean_ctor_set(v___x_1657_, 4, v___x_1659_);
v___x_1661_ = v___x_1657_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_leanOpts_1631_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_forwardedArgs_1632_);
lean_ctor_set(v_reuseFailAlloc_1665_, 2, v_opts_1640_);
lean_ctor_set(v_reuseFailAlloc_1665_, 3, v_rootDir_x3f_1643_);
lean_ctor_set(v_reuseFailAlloc_1665_, 4, v___x_1659_);
lean_ctor_set(v_reuseFailAlloc_1665_, 5, v_oleanFileName_x3f_1644_);
lean_ctor_set(v_reuseFailAlloc_1665_, 6, v_ileanFileName_x3f_1645_);
lean_ctor_set(v_reuseFailAlloc_1665_, 7, v_cFileName_x3f_1646_);
lean_ctor_set(v_reuseFailAlloc_1665_, 8, v_bcFileName_x3f_1647_);
lean_ctor_set(v_reuseFailAlloc_1665_, 9, v_zigFileName_x3f_1648_);
lean_ctor_set(v_reuseFailAlloc_1665_, 10, v_errorOnKinds_1650_);
lean_ctor_set(v_reuseFailAlloc_1665_, 11, v_incrSaveFileName_x3f_1653_);
lean_ctor_set(v_reuseFailAlloc_1665_, 12, v_incrLoadFileName_x3f_1654_);
lean_ctor_set(v_reuseFailAlloc_1665_, 13, v_incrHeaderSaveFileName_x3f_1655_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 8, v_component_1633_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 9, v_printPrefix_1634_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 10, v_printLibDir_1635_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 11, v_useStdin_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 12, v_onlyDeps_1637_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 13, v_onlySrcDeps_1638_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 14, v_depsJson_1639_);
lean_ctor_set_uint32(v_reuseFailAlloc_1665_, sizeof(void*)*14, v_trustLevel_1641_);
lean_ctor_set_uint32(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 4, v_numThreads_1642_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 15, v_jsonOutput_1649_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 16, v_printStats_1651_);
lean_ctor_set_uint8(v_reuseFailAlloc_1665_, sizeof(void*)*14 + 17, v_run_1652_);
v___x_1661_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
lean_object* v___x_1663_; 
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 0, v___x_1661_);
v___x_1663_ = v___x_1629_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v___x_1661_);
v___x_1663_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
return v___x_1663_;
}
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
lean_dec_ref(v_opts_1118_);
v_a_1669_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_a_1669_);
lean_dec_ref_known(v___x_1626_, 1);
v___x_1673_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1674_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1673_);
lean_dec_ref(v___x_1674_);
goto v___jp_1670_;
v___jp_1670_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = lean_io_error_to_string(v_a_1669_);
v___x_1672_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1671_);
lean_dec_ref(v___x_1672_);
goto v___jp_1262_;
}
}
}
}
else
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1675_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6));
v___x_1676_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1675_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1678_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc_n(v_a_1677_, 2);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1678_ = lean_load_dynlib(v_a_1677_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1721_; 
v_isSharedCheck_1721_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; 
v_unused_1722_ = lean_ctor_get(v___x_1678_, 0);
lean_dec(v_unused_1722_);
v___x_1680_ = v___x_1678_;
v_isShared_1681_ = v_isSharedCheck_1721_;
goto v_resetjp_1679_;
}
else
{
lean_dec(v___x_1678_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1721_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v_leanOpts_1682_; lean_object* v_forwardedArgs_1683_; uint8_t v_component_1684_; uint8_t v_printPrefix_1685_; uint8_t v_printLibDir_1686_; uint8_t v_useStdin_1687_; uint8_t v_onlyDeps_1688_; uint8_t v_onlySrcDeps_1689_; uint8_t v_depsJson_1690_; lean_object* v_opts_1691_; uint32_t v_trustLevel_1692_; uint32_t v_numThreads_1693_; lean_object* v_rootDir_x3f_1694_; lean_object* v_setupFileName_x3f_1695_; lean_object* v_oleanFileName_x3f_1696_; lean_object* v_ileanFileName_x3f_1697_; lean_object* v_cFileName_x3f_1698_; lean_object* v_bcFileName_x3f_1699_; lean_object* v_zigFileName_x3f_1700_; uint8_t v_jsonOutput_1701_; lean_object* v_errorOnKinds_1702_; uint8_t v_printStats_1703_; uint8_t v_run_1704_; lean_object* v_incrSaveFileName_x3f_1705_; lean_object* v_incrLoadFileName_x3f_1706_; lean_object* v_incrHeaderSaveFileName_x3f_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1720_; 
v_leanOpts_1682_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1683_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1684_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1685_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1686_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1687_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1688_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1689_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1690_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1691_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1692_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1693_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1694_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1695_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1696_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1697_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1698_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1699_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1700_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1701_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1702_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1703_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1704_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1705_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1706_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1707_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1709_ = v_opts_1118_;
v_isShared_1710_ = v_isSharedCheck_1720_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1707_);
lean_inc(v_incrLoadFileName_x3f_1706_);
lean_inc(v_incrSaveFileName_x3f_1705_);
lean_inc(v_errorOnKinds_1702_);
lean_inc(v_zigFileName_x3f_1700_);
lean_inc(v_bcFileName_x3f_1699_);
lean_inc(v_cFileName_x3f_1698_);
lean_inc(v_ileanFileName_x3f_1697_);
lean_inc(v_oleanFileName_x3f_1696_);
lean_inc(v_setupFileName_x3f_1695_);
lean_inc(v_rootDir_x3f_1694_);
lean_inc(v_opts_1691_);
lean_inc(v_forwardedArgs_1683_);
lean_inc(v_leanOpts_1682_);
lean_dec(v_opts_1118_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1720_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1715_; 
v___x_1711_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7));
v___x_1712_ = lean_string_append(v___x_1711_, v_a_1677_);
lean_dec(v_a_1677_);
v___x_1713_ = lean_array_push(v_forwardedArgs_1683_, v___x_1712_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 1, v___x_1713_);
v___x_1715_ = v___x_1709_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_leanOpts_1682_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v___x_1713_);
lean_ctor_set(v_reuseFailAlloc_1719_, 2, v_opts_1691_);
lean_ctor_set(v_reuseFailAlloc_1719_, 3, v_rootDir_x3f_1694_);
lean_ctor_set(v_reuseFailAlloc_1719_, 4, v_setupFileName_x3f_1695_);
lean_ctor_set(v_reuseFailAlloc_1719_, 5, v_oleanFileName_x3f_1696_);
lean_ctor_set(v_reuseFailAlloc_1719_, 6, v_ileanFileName_x3f_1697_);
lean_ctor_set(v_reuseFailAlloc_1719_, 7, v_cFileName_x3f_1698_);
lean_ctor_set(v_reuseFailAlloc_1719_, 8, v_bcFileName_x3f_1699_);
lean_ctor_set(v_reuseFailAlloc_1719_, 9, v_zigFileName_x3f_1700_);
lean_ctor_set(v_reuseFailAlloc_1719_, 10, v_errorOnKinds_1702_);
lean_ctor_set(v_reuseFailAlloc_1719_, 11, v_incrSaveFileName_x3f_1705_);
lean_ctor_set(v_reuseFailAlloc_1719_, 12, v_incrLoadFileName_x3f_1706_);
lean_ctor_set(v_reuseFailAlloc_1719_, 13, v_incrHeaderSaveFileName_x3f_1707_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 8, v_component_1684_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 9, v_printPrefix_1685_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 10, v_printLibDir_1686_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 11, v_useStdin_1687_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 12, v_onlyDeps_1688_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 13, v_onlySrcDeps_1689_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 14, v_depsJson_1690_);
lean_ctor_set_uint32(v_reuseFailAlloc_1719_, sizeof(void*)*14, v_trustLevel_1692_);
lean_ctor_set_uint32(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 4, v_numThreads_1693_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 15, v_jsonOutput_1701_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 16, v_printStats_1703_);
lean_ctor_set_uint8(v_reuseFailAlloc_1719_, sizeof(void*)*14 + 17, v_run_1704_);
v___x_1715_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1717_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 0, v___x_1715_);
v___x_1717_ = v___x_1680_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
return v___x_1717_;
}
}
}
}
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
lean_dec(v_a_1677_);
lean_dec_ref(v_opts_1118_);
v_a_1723_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1723_);
lean_dec_ref_known(v___x_1678_, 1);
v___x_1727_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1728_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1727_);
lean_dec_ref(v___x_1728_);
goto v___jp_1724_;
v___jp_1724_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = lean_io_error_to_string(v_a_1723_);
v___x_1726_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1725_);
lean_dec_ref(v___x_1726_);
goto v___jp_1204_;
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec_ref(v_opts_1118_);
v_a_1729_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1733_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1734_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1733_);
lean_dec_ref(v___x_1734_);
goto v___jp_1730_;
v___jp_1730_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1731_ = lean_io_error_to_string(v_a_1729_);
v___x_1732_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1731_);
lean_dec_ref(v___x_1732_);
goto v___jp_1268_;
}
}
}
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8));
v___x_1736_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1735_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1810_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1739_ = v___x_1736_;
v_isShared_1740_ = v_isSharedCheck_1810_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1736_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1810_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v_fst_1742_; lean_object* v_snd_1743_; lean_object* v___y_1793_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1804_ = lean_unsigned_to_nat(0u);
v___x_1805_ = lean_string_utf8_byte_size(v_a_1737_);
lean_inc(v_a_1737_);
v___x_1806_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1806_, 0, v_a_1737_);
lean_ctor_set(v___x_1806_, 1, v___x_1804_);
lean_ctor_set(v___x_1806_, 2, v___x_1805_);
v___x_1807_ = lean_box(0);
v___x_1808_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1806_, v_a_1737_, v___x_1804_, v___x_1807_);
lean_dec_ref_known(v___x_1806_, 3);
if (lean_obj_tag(v___x_1808_) == 0)
{
v___y_1793_ = v___x_1805_;
goto v___jp_1792_;
}
else
{
lean_object* v_val_1809_; 
v_val_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_val_1809_);
lean_dec_ref_known(v___x_1808_, 1);
v___y_1793_ = v_val_1809_;
goto v___jp_1792_;
}
v___jp_1741_:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_load_plugin(v_fst_1742_, v_snd_1743_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1787_; 
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1744_);
if (v_isSharedCheck_1787_ == 0)
{
lean_object* v_unused_1788_; 
v_unused_1788_ = lean_ctor_get(v___x_1744_, 0);
lean_dec(v_unused_1788_);
v___x_1746_ = v___x_1744_;
v_isShared_1747_ = v_isSharedCheck_1787_;
goto v_resetjp_1745_;
}
else
{
lean_dec(v___x_1744_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1787_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v_leanOpts_1748_; lean_object* v_forwardedArgs_1749_; uint8_t v_component_1750_; uint8_t v_printPrefix_1751_; uint8_t v_printLibDir_1752_; uint8_t v_useStdin_1753_; uint8_t v_onlyDeps_1754_; uint8_t v_onlySrcDeps_1755_; uint8_t v_depsJson_1756_; lean_object* v_opts_1757_; uint32_t v_trustLevel_1758_; uint32_t v_numThreads_1759_; lean_object* v_rootDir_x3f_1760_; lean_object* v_setupFileName_x3f_1761_; lean_object* v_oleanFileName_x3f_1762_; lean_object* v_ileanFileName_x3f_1763_; lean_object* v_cFileName_x3f_1764_; lean_object* v_bcFileName_x3f_1765_; lean_object* v_zigFileName_x3f_1766_; uint8_t v_jsonOutput_1767_; lean_object* v_errorOnKinds_1768_; uint8_t v_printStats_1769_; uint8_t v_run_1770_; lean_object* v_incrSaveFileName_x3f_1771_; lean_object* v_incrLoadFileName_x3f_1772_; lean_object* v_incrHeaderSaveFileName_x3f_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1786_; 
v_leanOpts_1748_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1749_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1750_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1751_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1752_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1753_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1754_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1755_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1756_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1757_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1758_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1759_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1760_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1761_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1762_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1763_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1764_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1765_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1766_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1767_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1768_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1769_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1770_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1771_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1772_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1773_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1786_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1775_ = v_opts_1118_;
v_isShared_1776_ = v_isSharedCheck_1786_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1773_);
lean_inc(v_incrLoadFileName_x3f_1772_);
lean_inc(v_incrSaveFileName_x3f_1771_);
lean_inc(v_errorOnKinds_1768_);
lean_inc(v_zigFileName_x3f_1766_);
lean_inc(v_bcFileName_x3f_1765_);
lean_inc(v_cFileName_x3f_1764_);
lean_inc(v_ileanFileName_x3f_1763_);
lean_inc(v_oleanFileName_x3f_1762_);
lean_inc(v_setupFileName_x3f_1761_);
lean_inc(v_rootDir_x3f_1760_);
lean_inc(v_opts_1757_);
lean_inc(v_forwardedArgs_1749_);
lean_inc(v_leanOpts_1748_);
lean_dec(v_opts_1118_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1786_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1781_; 
v___x_1777_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9));
v___x_1778_ = lean_string_append(v___x_1777_, v_a_1737_);
lean_dec(v_a_1737_);
v___x_1779_ = lean_array_push(v_forwardedArgs_1749_, v___x_1778_);
if (v_isShared_1776_ == 0)
{
lean_ctor_set(v___x_1775_, 1, v___x_1779_);
v___x_1781_ = v___x_1775_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_leanOpts_1748_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v___x_1779_);
lean_ctor_set(v_reuseFailAlloc_1785_, 2, v_opts_1757_);
lean_ctor_set(v_reuseFailAlloc_1785_, 3, v_rootDir_x3f_1760_);
lean_ctor_set(v_reuseFailAlloc_1785_, 4, v_setupFileName_x3f_1761_);
lean_ctor_set(v_reuseFailAlloc_1785_, 5, v_oleanFileName_x3f_1762_);
lean_ctor_set(v_reuseFailAlloc_1785_, 6, v_ileanFileName_x3f_1763_);
lean_ctor_set(v_reuseFailAlloc_1785_, 7, v_cFileName_x3f_1764_);
lean_ctor_set(v_reuseFailAlloc_1785_, 8, v_bcFileName_x3f_1765_);
lean_ctor_set(v_reuseFailAlloc_1785_, 9, v_zigFileName_x3f_1766_);
lean_ctor_set(v_reuseFailAlloc_1785_, 10, v_errorOnKinds_1768_);
lean_ctor_set(v_reuseFailAlloc_1785_, 11, v_incrSaveFileName_x3f_1771_);
lean_ctor_set(v_reuseFailAlloc_1785_, 12, v_incrLoadFileName_x3f_1772_);
lean_ctor_set(v_reuseFailAlloc_1785_, 13, v_incrHeaderSaveFileName_x3f_1773_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 8, v_component_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 9, v_printPrefix_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 10, v_printLibDir_1752_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 11, v_useStdin_1753_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 12, v_onlyDeps_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 13, v_onlySrcDeps_1755_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 14, v_depsJson_1756_);
lean_ctor_set_uint32(v_reuseFailAlloc_1785_, sizeof(void*)*14, v_trustLevel_1758_);
lean_ctor_set_uint32(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 4, v_numThreads_1759_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 15, v_jsonOutput_1767_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 16, v_printStats_1769_);
lean_ctor_set_uint8(v_reuseFailAlloc_1785_, sizeof(void*)*14 + 17, v_run_1770_);
v___x_1781_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
lean_object* v___x_1783_; 
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___x_1781_);
v___x_1783_ = v___x_1746_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_dec(v_a_1737_);
lean_dec_ref(v_opts_1118_);
v_a_1789_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1744_, 1);
v___x_1790_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1791_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1790_);
lean_dec_ref(v___x_1791_);
v___y_1198_ = v_a_1789_;
goto v___jp_1197_;
}
}
v___jp_1792_:
{
lean_object* v___x_1794_; uint8_t v___x_1795_; 
v___x_1794_ = lean_string_utf8_byte_size(v_a_1737_);
v___x_1795_ = lean_nat_dec_eq(v___y_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1801_; 
v___x_1796_ = lean_unsigned_to_nat(0u);
v___x_1797_ = lean_string_utf8_next_fast(v_a_1737_, v___y_1793_);
v___x_1798_ = lean_string_utf8_extract(v_a_1737_, v___x_1796_, v___y_1793_);
lean_dec(v___y_1793_);
v___x_1799_ = lean_string_utf8_extract(v_a_1737_, v___x_1797_, v___x_1794_);
if (v_isShared_1740_ == 0)
{
lean_ctor_set_tag(v___x_1739_, 1);
lean_ctor_set(v___x_1739_, 0, v___x_1799_);
v___x_1801_ = v___x_1739_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1799_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
v_fst_1742_ = v___x_1798_;
v_snd_1743_ = v___x_1801_;
goto v___jp_1741_;
}
}
else
{
lean_object* v___x_1803_; 
lean_dec(v___y_1793_);
lean_del_object(v___x_1739_);
v___x_1803_ = lean_box(0);
lean_inc(v_a_1737_);
v_fst_1742_ = v_a_1737_;
v_snd_1743_ = v___x_1803_;
goto v___jp_1741_;
}
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
lean_dec_ref(v_opts_1118_);
v_a_1811_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_a_1811_);
lean_dec_ref_known(v___x_1736_, 1);
v___x_1815_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1816_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1815_);
lean_dec_ref(v___x_1816_);
goto v___jp_1812_;
v___jp_1812_:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1813_ = lean_io_error_to_string(v_a_1811_);
v___x_1814_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1813_);
lean_dec_ref(v___x_1814_);
goto v___jp_1274_;
}
}
}
}
else
{
uint8_t v___x_1817_; 
v___x_1817_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_1817_ == 0)
{
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
goto v___jp_1244_;
}
else
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10));
v___x_1819_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1818_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1819_) == 0)
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1828_; 
v_a_1820_ = lean_ctor_get(v___x_1819_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1822_ = v___x_1819_;
v_isShared_1823_ = v_isSharedCheck_1828_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1819_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1828_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1824_; lean_object* v___x_1826_; 
v___x_1824_ = lean_internal_enable_debug(v_a_1820_);
lean_dec(v_a_1820_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set(v___x_1822_, 0, v_opts_1118_);
v___x_1826_ = v___x_1822_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_opts_1118_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
lean_dec_ref(v_opts_1118_);
v_a_1829_ = lean_ctor_get(v___x_1819_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1819_, 1);
v___x_1833_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1834_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1833_);
lean_dec_ref(v___x_1834_);
goto v___jp_1830_;
v___jp_1830_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = lean_io_error_to_string(v_a_1829_);
v___x_1832_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1831_);
lean_dec_ref(v___x_1832_);
goto v___jp_1188_;
}
}
}
}
}
else
{
lean_object* v_leanOpts_1835_; lean_object* v_forwardedArgs_1836_; uint8_t v_component_1837_; uint8_t v_printPrefix_1838_; uint8_t v_printLibDir_1839_; uint8_t v_useStdin_1840_; uint8_t v_onlyDeps_1841_; uint8_t v_onlySrcDeps_1842_; uint8_t v_depsJson_1843_; lean_object* v_opts_1844_; uint32_t v_trustLevel_1845_; uint32_t v_numThreads_1846_; lean_object* v_rootDir_x3f_1847_; lean_object* v_setupFileName_x3f_1848_; lean_object* v_oleanFileName_x3f_1849_; lean_object* v_ileanFileName_x3f_1850_; lean_object* v_cFileName_x3f_1851_; lean_object* v_bcFileName_x3f_1852_; lean_object* v_zigFileName_x3f_1853_; uint8_t v_jsonOutput_1854_; lean_object* v_errorOnKinds_1855_; uint8_t v_printStats_1856_; uint8_t v_run_1857_; lean_object* v_incrSaveFileName_x3f_1858_; lean_object* v_incrLoadFileName_x3f_1859_; lean_object* v_incrHeaderSaveFileName_x3f_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1870_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_1835_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1836_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1837_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1838_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1839_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1840_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1841_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1842_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1843_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1844_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1845_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1846_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1847_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1848_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1849_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1850_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1851_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1852_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1853_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1854_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1855_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1856_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1857_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1858_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1859_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1860_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1862_ = v_opts_1118_;
v_isShared_1863_ = v_isSharedCheck_1870_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1860_);
lean_inc(v_incrLoadFileName_x3f_1859_);
lean_inc(v_incrSaveFileName_x3f_1858_);
lean_inc(v_errorOnKinds_1855_);
lean_inc(v_zigFileName_x3f_1853_);
lean_inc(v_bcFileName_x3f_1852_);
lean_inc(v_cFileName_x3f_1851_);
lean_inc(v_ileanFileName_x3f_1850_);
lean_inc(v_oleanFileName_x3f_1849_);
lean_inc(v_setupFileName_x3f_1848_);
lean_inc(v_rootDir_x3f_1847_);
lean_inc(v_opts_1844_);
lean_inc(v_forwardedArgs_1836_);
lean_inc(v_leanOpts_1835_);
lean_dec(v_opts_1118_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1870_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v___x_1864_ = l_Lean_profiler;
v___x_1865_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_1835_, v___x_1864_, v___x_1407_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1865_);
v___x_1867_ = v___x_1862_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v_forwardedArgs_1836_);
lean_ctor_set(v_reuseFailAlloc_1869_, 2, v_opts_1844_);
lean_ctor_set(v_reuseFailAlloc_1869_, 3, v_rootDir_x3f_1847_);
lean_ctor_set(v_reuseFailAlloc_1869_, 4, v_setupFileName_x3f_1848_);
lean_ctor_set(v_reuseFailAlloc_1869_, 5, v_oleanFileName_x3f_1849_);
lean_ctor_set(v_reuseFailAlloc_1869_, 6, v_ileanFileName_x3f_1850_);
lean_ctor_set(v_reuseFailAlloc_1869_, 7, v_cFileName_x3f_1851_);
lean_ctor_set(v_reuseFailAlloc_1869_, 8, v_bcFileName_x3f_1852_);
lean_ctor_set(v_reuseFailAlloc_1869_, 9, v_zigFileName_x3f_1853_);
lean_ctor_set(v_reuseFailAlloc_1869_, 10, v_errorOnKinds_1855_);
lean_ctor_set(v_reuseFailAlloc_1869_, 11, v_incrSaveFileName_x3f_1858_);
lean_ctor_set(v_reuseFailAlloc_1869_, 12, v_incrLoadFileName_x3f_1859_);
lean_ctor_set(v_reuseFailAlloc_1869_, 13, v_incrHeaderSaveFileName_x3f_1860_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 8, v_component_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 9, v_printPrefix_1838_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 10, v_printLibDir_1839_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 11, v_useStdin_1840_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 12, v_onlyDeps_1841_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 13, v_onlySrcDeps_1842_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 14, v_depsJson_1843_);
lean_ctor_set_uint32(v_reuseFailAlloc_1869_, sizeof(void*)*14, v_trustLevel_1845_);
lean_ctor_set_uint32(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 4, v_numThreads_1846_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 15, v_jsonOutput_1854_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 16, v_printStats_1856_);
lean_ctor_set_uint8(v_reuseFailAlloc_1869_, sizeof(void*)*14 + 17, v_run_1857_);
v___x_1867_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
}
}
}
else
{
lean_object* v_leanOpts_1871_; lean_object* v_forwardedArgs_1872_; uint8_t v_printPrefix_1873_; uint8_t v_printLibDir_1874_; uint8_t v_useStdin_1875_; uint8_t v_onlyDeps_1876_; uint8_t v_onlySrcDeps_1877_; uint8_t v_depsJson_1878_; lean_object* v_opts_1879_; uint32_t v_trustLevel_1880_; uint32_t v_numThreads_1881_; lean_object* v_rootDir_x3f_1882_; lean_object* v_setupFileName_x3f_1883_; lean_object* v_oleanFileName_x3f_1884_; lean_object* v_ileanFileName_x3f_1885_; lean_object* v_cFileName_x3f_1886_; lean_object* v_bcFileName_x3f_1887_; lean_object* v_zigFileName_x3f_1888_; uint8_t v_jsonOutput_1889_; lean_object* v_errorOnKinds_1890_; uint8_t v_printStats_1891_; uint8_t v_run_1892_; lean_object* v_incrSaveFileName_x3f_1893_; lean_object* v_incrLoadFileName_x3f_1894_; lean_object* v_incrHeaderSaveFileName_x3f_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_1871_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1872_ = lean_ctor_get(v_opts_1118_, 1);
v_printPrefix_1873_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1874_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1875_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1876_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1877_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1878_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1879_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1880_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1881_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1882_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1883_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1884_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1885_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1886_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1887_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1888_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1889_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1890_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1891_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1892_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1893_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1894_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1895_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1897_ = v_opts_1118_;
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1895_);
lean_inc(v_incrLoadFileName_x3f_1894_);
lean_inc(v_incrSaveFileName_x3f_1893_);
lean_inc(v_errorOnKinds_1890_);
lean_inc(v_zigFileName_x3f_1888_);
lean_inc(v_bcFileName_x3f_1887_);
lean_inc(v_cFileName_x3f_1886_);
lean_inc(v_ileanFileName_x3f_1885_);
lean_inc(v_oleanFileName_x3f_1884_);
lean_inc(v_setupFileName_x3f_1883_);
lean_inc(v_rootDir_x3f_1882_);
lean_inc(v_opts_1879_);
lean_inc(v_forwardedArgs_1872_);
lean_inc(v_leanOpts_1871_);
lean_dec(v_opts_1118_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1904_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
uint8_t v___x_1899_; lean_object* v___x_1901_; 
v___x_1899_ = 2;
if (v_isShared_1898_ == 0)
{
v___x_1901_ = v___x_1897_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_leanOpts_1871_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_forwardedArgs_1872_);
lean_ctor_set(v_reuseFailAlloc_1903_, 2, v_opts_1879_);
lean_ctor_set(v_reuseFailAlloc_1903_, 3, v_rootDir_x3f_1882_);
lean_ctor_set(v_reuseFailAlloc_1903_, 4, v_setupFileName_x3f_1883_);
lean_ctor_set(v_reuseFailAlloc_1903_, 5, v_oleanFileName_x3f_1884_);
lean_ctor_set(v_reuseFailAlloc_1903_, 6, v_ileanFileName_x3f_1885_);
lean_ctor_set(v_reuseFailAlloc_1903_, 7, v_cFileName_x3f_1886_);
lean_ctor_set(v_reuseFailAlloc_1903_, 8, v_bcFileName_x3f_1887_);
lean_ctor_set(v_reuseFailAlloc_1903_, 9, v_zigFileName_x3f_1888_);
lean_ctor_set(v_reuseFailAlloc_1903_, 10, v_errorOnKinds_1890_);
lean_ctor_set(v_reuseFailAlloc_1903_, 11, v_incrSaveFileName_x3f_1893_);
lean_ctor_set(v_reuseFailAlloc_1903_, 12, v_incrLoadFileName_x3f_1894_);
lean_ctor_set(v_reuseFailAlloc_1903_, 13, v_incrHeaderSaveFileName_x3f_1895_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 9, v_printPrefix_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 10, v_printLibDir_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 11, v_useStdin_1875_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 12, v_onlyDeps_1876_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 13, v_onlySrcDeps_1877_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 14, v_depsJson_1878_);
lean_ctor_set_uint32(v_reuseFailAlloc_1903_, sizeof(void*)*14, v_trustLevel_1880_);
lean_ctor_set_uint32(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 4, v_numThreads_1881_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 15, v_jsonOutput_1889_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 16, v_printStats_1891_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*14 + 17, v_run_1892_);
v___x_1901_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; 
lean_ctor_set_uint8(v___x_1901_, sizeof(void*)*14 + 8, v___x_1899_);
v___x_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
return v___x_1902_;
}
}
}
}
else
{
lean_object* v_leanOpts_1905_; lean_object* v_forwardedArgs_1906_; uint8_t v_printPrefix_1907_; uint8_t v_printLibDir_1908_; uint8_t v_useStdin_1909_; uint8_t v_onlyDeps_1910_; uint8_t v_onlySrcDeps_1911_; uint8_t v_depsJson_1912_; lean_object* v_opts_1913_; uint32_t v_trustLevel_1914_; uint32_t v_numThreads_1915_; lean_object* v_rootDir_x3f_1916_; lean_object* v_setupFileName_x3f_1917_; lean_object* v_oleanFileName_x3f_1918_; lean_object* v_ileanFileName_x3f_1919_; lean_object* v_cFileName_x3f_1920_; lean_object* v_bcFileName_x3f_1921_; lean_object* v_zigFileName_x3f_1922_; uint8_t v_jsonOutput_1923_; lean_object* v_errorOnKinds_1924_; uint8_t v_printStats_1925_; uint8_t v_run_1926_; lean_object* v_incrSaveFileName_x3f_1927_; lean_object* v_incrLoadFileName_x3f_1928_; lean_object* v_incrHeaderSaveFileName_x3f_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1938_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_1905_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1906_ = lean_ctor_get(v_opts_1118_, 1);
v_printPrefix_1907_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1908_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1909_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1910_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1911_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1912_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1913_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1914_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1915_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1916_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1917_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1918_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1919_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1920_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1921_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1922_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1923_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1924_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1925_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1926_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1927_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1928_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1929_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1931_ = v_opts_1118_;
v_isShared_1932_ = v_isSharedCheck_1938_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1929_);
lean_inc(v_incrLoadFileName_x3f_1928_);
lean_inc(v_incrSaveFileName_x3f_1927_);
lean_inc(v_errorOnKinds_1924_);
lean_inc(v_zigFileName_x3f_1922_);
lean_inc(v_bcFileName_x3f_1921_);
lean_inc(v_cFileName_x3f_1920_);
lean_inc(v_ileanFileName_x3f_1919_);
lean_inc(v_oleanFileName_x3f_1918_);
lean_inc(v_setupFileName_x3f_1917_);
lean_inc(v_rootDir_x3f_1916_);
lean_inc(v_opts_1913_);
lean_inc(v_forwardedArgs_1906_);
lean_inc(v_leanOpts_1905_);
lean_dec(v_opts_1118_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1938_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
uint8_t v___x_1933_; lean_object* v___x_1935_; 
v___x_1933_ = 1;
if (v_isShared_1932_ == 0)
{
v___x_1935_ = v___x_1931_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_leanOpts_1905_);
lean_ctor_set(v_reuseFailAlloc_1937_, 1, v_forwardedArgs_1906_);
lean_ctor_set(v_reuseFailAlloc_1937_, 2, v_opts_1913_);
lean_ctor_set(v_reuseFailAlloc_1937_, 3, v_rootDir_x3f_1916_);
lean_ctor_set(v_reuseFailAlloc_1937_, 4, v_setupFileName_x3f_1917_);
lean_ctor_set(v_reuseFailAlloc_1937_, 5, v_oleanFileName_x3f_1918_);
lean_ctor_set(v_reuseFailAlloc_1937_, 6, v_ileanFileName_x3f_1919_);
lean_ctor_set(v_reuseFailAlloc_1937_, 7, v_cFileName_x3f_1920_);
lean_ctor_set(v_reuseFailAlloc_1937_, 8, v_bcFileName_x3f_1921_);
lean_ctor_set(v_reuseFailAlloc_1937_, 9, v_zigFileName_x3f_1922_);
lean_ctor_set(v_reuseFailAlloc_1937_, 10, v_errorOnKinds_1924_);
lean_ctor_set(v_reuseFailAlloc_1937_, 11, v_incrSaveFileName_x3f_1927_);
lean_ctor_set(v_reuseFailAlloc_1937_, 12, v_incrLoadFileName_x3f_1928_);
lean_ctor_set(v_reuseFailAlloc_1937_, 13, v_incrHeaderSaveFileName_x3f_1929_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 9, v_printPrefix_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 10, v_printLibDir_1908_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 11, v_useStdin_1909_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 12, v_onlyDeps_1910_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 13, v_onlySrcDeps_1911_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 14, v_depsJson_1912_);
lean_ctor_set_uint32(v_reuseFailAlloc_1937_, sizeof(void*)*14, v_trustLevel_1914_);
lean_ctor_set_uint32(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 4, v_numThreads_1915_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 15, v_jsonOutput_1923_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 16, v_printStats_1925_);
lean_ctor_set_uint8(v_reuseFailAlloc_1937_, sizeof(void*)*14 + 17, v_run_1926_);
v___x_1935_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
lean_object* v___x_1936_; 
lean_ctor_set_uint8(v___x_1935_, sizeof(void*)*14 + 8, v___x_1933_);
v___x_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1935_);
return v___x_1936_;
}
}
}
}
else
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11));
v___x_1940_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1939_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v_leanOpts_1942_; lean_object* v_forwardedArgs_1943_; uint8_t v_component_1944_; uint8_t v_printPrefix_1945_; uint8_t v_printLibDir_1946_; uint8_t v_useStdin_1947_; uint8_t v_onlyDeps_1948_; uint8_t v_onlySrcDeps_1949_; uint8_t v_depsJson_1950_; lean_object* v_opts_1951_; uint32_t v_trustLevel_1952_; uint32_t v_numThreads_1953_; lean_object* v_rootDir_x3f_1954_; lean_object* v_setupFileName_x3f_1955_; lean_object* v_oleanFileName_x3f_1956_; lean_object* v_ileanFileName_x3f_1957_; lean_object* v_cFileName_x3f_1958_; lean_object* v_bcFileName_x3f_1959_; lean_object* v_zigFileName_x3f_1960_; uint8_t v_jsonOutput_1961_; lean_object* v_errorOnKinds_1962_; uint8_t v_printStats_1963_; uint8_t v_run_1964_; lean_object* v_incrSaveFileName_x3f_1965_; lean_object* v_incrLoadFileName_x3f_1966_; lean_object* v_incrHeaderSaveFileName_x3f_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1992_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v_leanOpts_1942_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_1943_ = lean_ctor_get(v_opts_1118_, 1);
v_component_1944_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_1945_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_1946_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_1947_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_1948_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1949_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_1950_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_1951_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_1952_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_1953_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1954_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_1955_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_1956_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_1957_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_1958_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_1959_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_1960_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_1961_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_1962_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_1963_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_1964_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1965_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_1966_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_1967_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_1992_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1969_ = v_opts_1118_;
v_isShared_1970_ = v_isSharedCheck_1992_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1967_);
lean_inc(v_incrLoadFileName_x3f_1966_);
lean_inc(v_incrSaveFileName_x3f_1965_);
lean_inc(v_errorOnKinds_1962_);
lean_inc(v_zigFileName_x3f_1960_);
lean_inc(v_bcFileName_x3f_1959_);
lean_inc(v_cFileName_x3f_1958_);
lean_inc(v_ileanFileName_x3f_1957_);
lean_inc(v_oleanFileName_x3f_1956_);
lean_inc(v_setupFileName_x3f_1955_);
lean_inc(v_rootDir_x3f_1954_);
lean_inc(v_opts_1951_);
lean_inc(v_forwardedArgs_1943_);
lean_inc(v_leanOpts_1942_);
lean_dec(v_opts_1118_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1992_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1971_; 
lean_inc(v_a_1941_);
v___x_1971_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_leanOpts_1942_, v_a_1941_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1985_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1974_ = v___x_1971_;
v_isShared_1975_ = v_isSharedCheck_1985_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1985_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1976_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12));
v___x_1977_ = lean_string_append(v___x_1976_, v_a_1941_);
lean_dec(v_a_1941_);
v___x_1978_ = lean_array_push(v_forwardedArgs_1943_, v___x_1977_);
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 1, v___x_1978_);
lean_ctor_set(v___x_1969_, 0, v_a_1972_);
v___x_1980_ = v___x_1969_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1972_);
lean_ctor_set(v_reuseFailAlloc_1984_, 1, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_1984_, 2, v_opts_1951_);
lean_ctor_set(v_reuseFailAlloc_1984_, 3, v_rootDir_x3f_1954_);
lean_ctor_set(v_reuseFailAlloc_1984_, 4, v_setupFileName_x3f_1955_);
lean_ctor_set(v_reuseFailAlloc_1984_, 5, v_oleanFileName_x3f_1956_);
lean_ctor_set(v_reuseFailAlloc_1984_, 6, v_ileanFileName_x3f_1957_);
lean_ctor_set(v_reuseFailAlloc_1984_, 7, v_cFileName_x3f_1958_);
lean_ctor_set(v_reuseFailAlloc_1984_, 8, v_bcFileName_x3f_1959_);
lean_ctor_set(v_reuseFailAlloc_1984_, 9, v_zigFileName_x3f_1960_);
lean_ctor_set(v_reuseFailAlloc_1984_, 10, v_errorOnKinds_1962_);
lean_ctor_set(v_reuseFailAlloc_1984_, 11, v_incrSaveFileName_x3f_1965_);
lean_ctor_set(v_reuseFailAlloc_1984_, 12, v_incrLoadFileName_x3f_1966_);
lean_ctor_set(v_reuseFailAlloc_1984_, 13, v_incrHeaderSaveFileName_x3f_1967_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 8, v_component_1944_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 9, v_printPrefix_1945_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 10, v_printLibDir_1946_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 11, v_useStdin_1947_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 12, v_onlyDeps_1948_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 13, v_onlySrcDeps_1949_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 14, v_depsJson_1950_);
lean_ctor_set_uint32(v_reuseFailAlloc_1984_, sizeof(void*)*14, v_trustLevel_1952_);
lean_ctor_set_uint32(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 4, v_numThreads_1953_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 15, v_jsonOutput_1961_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 16, v_printStats_1963_);
lean_ctor_set_uint8(v_reuseFailAlloc_1984_, sizeof(void*)*14 + 17, v_run_1964_);
v___x_1980_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
lean_object* v___x_1982_; 
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 0, v___x_1980_);
v___x_1982_ = v___x_1974_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1980_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
lean_del_object(v___x_1969_);
lean_dec(v_incrHeaderSaveFileName_x3f_1967_);
lean_dec(v_incrLoadFileName_x3f_1966_);
lean_dec(v_incrSaveFileName_x3f_1965_);
lean_dec_ref(v_errorOnKinds_1962_);
lean_dec(v_zigFileName_x3f_1960_);
lean_dec(v_bcFileName_x3f_1959_);
lean_dec(v_cFileName_x3f_1958_);
lean_dec(v_ileanFileName_x3f_1957_);
lean_dec(v_oleanFileName_x3f_1956_);
lean_dec(v_setupFileName_x3f_1955_);
lean_dec(v_rootDir_x3f_1954_);
lean_dec_ref(v_opts_1951_);
lean_dec_ref(v_forwardedArgs_1943_);
lean_dec(v_a_1941_);
v_a_1986_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1971_, 1);
v___x_1990_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1991_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1990_);
lean_dec_ref(v___x_1991_);
goto v___jp_1987_;
v___jp_1987_:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = lean_io_error_to_string(v_a_1986_);
v___x_1989_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1988_);
lean_dec_ref(v___x_1989_);
goto v___jp_1280_;
}
}
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
lean_dec_ref(v_opts_1118_);
v_a_1993_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1993_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1997_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1998_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1997_);
lean_dec_ref(v___x_1998_);
goto v___jp_1994_;
v___jp_1994_:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_io_error_to_string(v_a_1993_);
v___x_1996_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1995_);
lean_dec_ref(v___x_1996_);
goto v___jp_1182_;
}
}
}
}
else
{
lean_object* v_leanOpts_1999_; lean_object* v_forwardedArgs_2000_; uint8_t v_component_2001_; uint8_t v_printPrefix_2002_; uint8_t v_useStdin_2003_; uint8_t v_onlyDeps_2004_; uint8_t v_onlySrcDeps_2005_; uint8_t v_depsJson_2006_; lean_object* v_opts_2007_; uint32_t v_trustLevel_2008_; uint32_t v_numThreads_2009_; lean_object* v_rootDir_x3f_2010_; lean_object* v_setupFileName_x3f_2011_; lean_object* v_oleanFileName_x3f_2012_; lean_object* v_ileanFileName_x3f_2013_; lean_object* v_cFileName_x3f_2014_; lean_object* v_bcFileName_x3f_2015_; lean_object* v_zigFileName_x3f_2016_; uint8_t v_jsonOutput_2017_; lean_object* v_errorOnKinds_2018_; uint8_t v_printStats_2019_; uint8_t v_run_2020_; lean_object* v_incrSaveFileName_x3f_2021_; lean_object* v_incrLoadFileName_x3f_2022_; lean_object* v_incrHeaderSaveFileName_x3f_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2031_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_1999_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2000_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2001_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2002_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_useStdin_2003_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2004_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2005_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2006_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2007_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2008_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2009_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2010_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2011_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2012_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2013_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2014_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2015_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2016_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2017_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2018_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2019_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2020_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2021_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2022_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2023_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2031_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2025_ = v_opts_1118_;
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2023_);
lean_inc(v_incrLoadFileName_x3f_2022_);
lean_inc(v_incrSaveFileName_x3f_2021_);
lean_inc(v_errorOnKinds_2018_);
lean_inc(v_zigFileName_x3f_2016_);
lean_inc(v_bcFileName_x3f_2015_);
lean_inc(v_cFileName_x3f_2014_);
lean_inc(v_ileanFileName_x3f_2013_);
lean_inc(v_oleanFileName_x3f_2012_);
lean_inc(v_setupFileName_x3f_2011_);
lean_inc(v_rootDir_x3f_2010_);
lean_inc(v_opts_2007_);
lean_inc(v_forwardedArgs_2000_);
lean_inc(v_leanOpts_1999_);
lean_dec(v_opts_1118_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2031_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2028_; 
if (v_isShared_2026_ == 0)
{
v___x_2028_ = v___x_2025_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_leanOpts_1999_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v_forwardedArgs_2000_);
lean_ctor_set(v_reuseFailAlloc_2030_, 2, v_opts_2007_);
lean_ctor_set(v_reuseFailAlloc_2030_, 3, v_rootDir_x3f_2010_);
lean_ctor_set(v_reuseFailAlloc_2030_, 4, v_setupFileName_x3f_2011_);
lean_ctor_set(v_reuseFailAlloc_2030_, 5, v_oleanFileName_x3f_2012_);
lean_ctor_set(v_reuseFailAlloc_2030_, 6, v_ileanFileName_x3f_2013_);
lean_ctor_set(v_reuseFailAlloc_2030_, 7, v_cFileName_x3f_2014_);
lean_ctor_set(v_reuseFailAlloc_2030_, 8, v_bcFileName_x3f_2015_);
lean_ctor_set(v_reuseFailAlloc_2030_, 9, v_zigFileName_x3f_2016_);
lean_ctor_set(v_reuseFailAlloc_2030_, 10, v_errorOnKinds_2018_);
lean_ctor_set(v_reuseFailAlloc_2030_, 11, v_incrSaveFileName_x3f_2021_);
lean_ctor_set(v_reuseFailAlloc_2030_, 12, v_incrLoadFileName_x3f_2022_);
lean_ctor_set(v_reuseFailAlloc_2030_, 13, v_incrHeaderSaveFileName_x3f_2023_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 8, v_component_2001_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 9, v_printPrefix_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 11, v_useStdin_2003_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 12, v_onlyDeps_2004_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 13, v_onlySrcDeps_2005_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 14, v_depsJson_2006_);
lean_ctor_set_uint32(v_reuseFailAlloc_2030_, sizeof(void*)*14, v_trustLevel_2008_);
lean_ctor_set_uint32(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 4, v_numThreads_2009_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 15, v_jsonOutput_2017_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 16, v_printStats_2019_);
lean_ctor_set_uint8(v_reuseFailAlloc_2030_, sizeof(void*)*14 + 17, v_run_2020_);
v___x_2028_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2029_; 
lean_ctor_set_uint8(v___x_2028_, sizeof(void*)*14 + 10, v___x_1399_);
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
return v___x_2029_;
}
}
}
}
else
{
lean_object* v_leanOpts_2032_; lean_object* v_forwardedArgs_2033_; uint8_t v_component_2034_; uint8_t v_printLibDir_2035_; uint8_t v_useStdin_2036_; uint8_t v_onlyDeps_2037_; uint8_t v_onlySrcDeps_2038_; uint8_t v_depsJson_2039_; lean_object* v_opts_2040_; uint32_t v_trustLevel_2041_; uint32_t v_numThreads_2042_; lean_object* v_rootDir_x3f_2043_; lean_object* v_setupFileName_x3f_2044_; lean_object* v_oleanFileName_x3f_2045_; lean_object* v_ileanFileName_x3f_2046_; lean_object* v_cFileName_x3f_2047_; lean_object* v_bcFileName_x3f_2048_; lean_object* v_zigFileName_x3f_2049_; uint8_t v_jsonOutput_2050_; lean_object* v_errorOnKinds_2051_; uint8_t v_printStats_2052_; uint8_t v_run_2053_; lean_object* v_incrSaveFileName_x3f_2054_; lean_object* v_incrLoadFileName_x3f_2055_; lean_object* v_incrHeaderSaveFileName_x3f_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2064_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2032_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2033_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2034_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printLibDir_2035_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2036_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2037_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2038_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2039_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2040_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2041_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2042_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2043_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2044_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2045_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2046_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2047_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2048_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2049_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2050_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2051_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2052_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2053_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2054_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2055_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2056_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2058_ = v_opts_1118_;
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2056_);
lean_inc(v_incrLoadFileName_x3f_2055_);
lean_inc(v_incrSaveFileName_x3f_2054_);
lean_inc(v_errorOnKinds_2051_);
lean_inc(v_zigFileName_x3f_2049_);
lean_inc(v_bcFileName_x3f_2048_);
lean_inc(v_cFileName_x3f_2047_);
lean_inc(v_ileanFileName_x3f_2046_);
lean_inc(v_oleanFileName_x3f_2045_);
lean_inc(v_setupFileName_x3f_2044_);
lean_inc(v_rootDir_x3f_2043_);
lean_inc(v_opts_2040_);
lean_inc(v_forwardedArgs_2033_);
lean_inc(v_leanOpts_2032_);
lean_dec(v_opts_1118_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_leanOpts_2032_);
lean_ctor_set(v_reuseFailAlloc_2063_, 1, v_forwardedArgs_2033_);
lean_ctor_set(v_reuseFailAlloc_2063_, 2, v_opts_2040_);
lean_ctor_set(v_reuseFailAlloc_2063_, 3, v_rootDir_x3f_2043_);
lean_ctor_set(v_reuseFailAlloc_2063_, 4, v_setupFileName_x3f_2044_);
lean_ctor_set(v_reuseFailAlloc_2063_, 5, v_oleanFileName_x3f_2045_);
lean_ctor_set(v_reuseFailAlloc_2063_, 6, v_ileanFileName_x3f_2046_);
lean_ctor_set(v_reuseFailAlloc_2063_, 7, v_cFileName_x3f_2047_);
lean_ctor_set(v_reuseFailAlloc_2063_, 8, v_bcFileName_x3f_2048_);
lean_ctor_set(v_reuseFailAlloc_2063_, 9, v_zigFileName_x3f_2049_);
lean_ctor_set(v_reuseFailAlloc_2063_, 10, v_errorOnKinds_2051_);
lean_ctor_set(v_reuseFailAlloc_2063_, 11, v_incrSaveFileName_x3f_2054_);
lean_ctor_set(v_reuseFailAlloc_2063_, 12, v_incrLoadFileName_x3f_2055_);
lean_ctor_set(v_reuseFailAlloc_2063_, 13, v_incrHeaderSaveFileName_x3f_2056_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 8, v_component_2034_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 10, v_printLibDir_2035_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 11, v_useStdin_2036_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 12, v_onlyDeps_2037_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 13, v_onlySrcDeps_2038_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 14, v_depsJson_2039_);
lean_ctor_set_uint32(v_reuseFailAlloc_2063_, sizeof(void*)*14, v_trustLevel_2041_);
lean_ctor_set_uint32(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 4, v_numThreads_2042_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 15, v_jsonOutput_2050_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 16, v_printStats_2052_);
lean_ctor_set_uint8(v_reuseFailAlloc_2063_, sizeof(void*)*14 + 17, v_run_2053_);
v___x_2061_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
lean_object* v___x_2062_; 
lean_ctor_set_uint8(v___x_2061_, sizeof(void*)*14 + 9, v___x_1397_);
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
}
}
}
else
{
lean_object* v_leanOpts_2065_; lean_object* v_forwardedArgs_2066_; uint8_t v_component_2067_; uint8_t v_printPrefix_2068_; uint8_t v_printLibDir_2069_; uint8_t v_useStdin_2070_; uint8_t v_onlyDeps_2071_; uint8_t v_onlySrcDeps_2072_; uint8_t v_depsJson_2073_; lean_object* v_opts_2074_; uint32_t v_trustLevel_2075_; uint32_t v_numThreads_2076_; lean_object* v_rootDir_x3f_2077_; lean_object* v_setupFileName_x3f_2078_; lean_object* v_oleanFileName_x3f_2079_; lean_object* v_ileanFileName_x3f_2080_; lean_object* v_cFileName_x3f_2081_; lean_object* v_bcFileName_x3f_2082_; lean_object* v_zigFileName_x3f_2083_; uint8_t v_jsonOutput_2084_; lean_object* v_errorOnKinds_2085_; uint8_t v_run_2086_; lean_object* v_incrSaveFileName_x3f_2087_; lean_object* v_incrLoadFileName_x3f_2088_; lean_object* v_incrHeaderSaveFileName_x3f_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2097_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2065_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2066_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2067_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2068_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2069_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2070_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2071_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2072_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2073_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2074_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2075_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2076_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2077_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2078_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2079_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2080_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2081_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2082_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2083_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2084_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2085_ = lean_ctor_get(v_opts_1118_, 10);
v_run_2086_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2087_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2088_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2089_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2091_ = v_opts_1118_;
v_isShared_2092_ = v_isSharedCheck_2097_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2089_);
lean_inc(v_incrLoadFileName_x3f_2088_);
lean_inc(v_incrSaveFileName_x3f_2087_);
lean_inc(v_errorOnKinds_2085_);
lean_inc(v_zigFileName_x3f_2083_);
lean_inc(v_bcFileName_x3f_2082_);
lean_inc(v_cFileName_x3f_2081_);
lean_inc(v_ileanFileName_x3f_2080_);
lean_inc(v_oleanFileName_x3f_2079_);
lean_inc(v_setupFileName_x3f_2078_);
lean_inc(v_rootDir_x3f_2077_);
lean_inc(v_opts_2074_);
lean_inc(v_forwardedArgs_2066_);
lean_inc(v_leanOpts_2065_);
lean_dec(v_opts_1118_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2097_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_leanOpts_2065_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v_forwardedArgs_2066_);
lean_ctor_set(v_reuseFailAlloc_2096_, 2, v_opts_2074_);
lean_ctor_set(v_reuseFailAlloc_2096_, 3, v_rootDir_x3f_2077_);
lean_ctor_set(v_reuseFailAlloc_2096_, 4, v_setupFileName_x3f_2078_);
lean_ctor_set(v_reuseFailAlloc_2096_, 5, v_oleanFileName_x3f_2079_);
lean_ctor_set(v_reuseFailAlloc_2096_, 6, v_ileanFileName_x3f_2080_);
lean_ctor_set(v_reuseFailAlloc_2096_, 7, v_cFileName_x3f_2081_);
lean_ctor_set(v_reuseFailAlloc_2096_, 8, v_bcFileName_x3f_2082_);
lean_ctor_set(v_reuseFailAlloc_2096_, 9, v_zigFileName_x3f_2083_);
lean_ctor_set(v_reuseFailAlloc_2096_, 10, v_errorOnKinds_2085_);
lean_ctor_set(v_reuseFailAlloc_2096_, 11, v_incrSaveFileName_x3f_2087_);
lean_ctor_set(v_reuseFailAlloc_2096_, 12, v_incrLoadFileName_x3f_2088_);
lean_ctor_set(v_reuseFailAlloc_2096_, 13, v_incrHeaderSaveFileName_x3f_2089_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 8, v_component_2067_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 9, v_printPrefix_2068_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 10, v_printLibDir_2069_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 11, v_useStdin_2070_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 12, v_onlyDeps_2071_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 13, v_onlySrcDeps_2072_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 14, v_depsJson_2073_);
lean_ctor_set_uint32(v_reuseFailAlloc_2096_, sizeof(void*)*14, v_trustLevel_2075_);
lean_ctor_set_uint32(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 4, v_numThreads_2076_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 15, v_jsonOutput_2084_);
lean_ctor_set_uint8(v_reuseFailAlloc_2096_, sizeof(void*)*14 + 17, v_run_2086_);
v___x_2094_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
lean_object* v___x_2095_; 
lean_ctor_set_uint8(v___x_2094_, sizeof(void*)*14 + 16, v___x_1395_);
v___x_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
return v___x_2095_;
}
}
}
}
else
{
lean_object* v_leanOpts_2098_; lean_object* v_forwardedArgs_2099_; uint8_t v_component_2100_; uint8_t v_printPrefix_2101_; uint8_t v_printLibDir_2102_; uint8_t v_useStdin_2103_; uint8_t v_onlyDeps_2104_; uint8_t v_onlySrcDeps_2105_; uint8_t v_depsJson_2106_; lean_object* v_opts_2107_; uint32_t v_trustLevel_2108_; uint32_t v_numThreads_2109_; lean_object* v_rootDir_x3f_2110_; lean_object* v_setupFileName_x3f_2111_; lean_object* v_oleanFileName_x3f_2112_; lean_object* v_ileanFileName_x3f_2113_; lean_object* v_cFileName_x3f_2114_; lean_object* v_bcFileName_x3f_2115_; lean_object* v_zigFileName_x3f_2116_; lean_object* v_errorOnKinds_2117_; uint8_t v_printStats_2118_; uint8_t v_run_2119_; lean_object* v_incrSaveFileName_x3f_2120_; lean_object* v_incrLoadFileName_x3f_2121_; lean_object* v_incrHeaderSaveFileName_x3f_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2130_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2098_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2099_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2100_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2101_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2102_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2103_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2104_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2105_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2106_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2107_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2108_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2109_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2110_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2111_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2112_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2113_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2114_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2115_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2116_ = lean_ctor_get(v_opts_1118_, 9);
v_errorOnKinds_2117_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2118_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2119_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2120_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2121_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2122_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2124_ = v_opts_1118_;
v_isShared_2125_ = v_isSharedCheck_2130_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2122_);
lean_inc(v_incrLoadFileName_x3f_2121_);
lean_inc(v_incrSaveFileName_x3f_2120_);
lean_inc(v_errorOnKinds_2117_);
lean_inc(v_zigFileName_x3f_2116_);
lean_inc(v_bcFileName_x3f_2115_);
lean_inc(v_cFileName_x3f_2114_);
lean_inc(v_ileanFileName_x3f_2113_);
lean_inc(v_oleanFileName_x3f_2112_);
lean_inc(v_setupFileName_x3f_2111_);
lean_inc(v_rootDir_x3f_2110_);
lean_inc(v_opts_2107_);
lean_inc(v_forwardedArgs_2099_);
lean_inc(v_leanOpts_2098_);
lean_dec(v_opts_1118_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2130_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_leanOpts_2098_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v_forwardedArgs_2099_);
lean_ctor_set(v_reuseFailAlloc_2129_, 2, v_opts_2107_);
lean_ctor_set(v_reuseFailAlloc_2129_, 3, v_rootDir_x3f_2110_);
lean_ctor_set(v_reuseFailAlloc_2129_, 4, v_setupFileName_x3f_2111_);
lean_ctor_set(v_reuseFailAlloc_2129_, 5, v_oleanFileName_x3f_2112_);
lean_ctor_set(v_reuseFailAlloc_2129_, 6, v_ileanFileName_x3f_2113_);
lean_ctor_set(v_reuseFailAlloc_2129_, 7, v_cFileName_x3f_2114_);
lean_ctor_set(v_reuseFailAlloc_2129_, 8, v_bcFileName_x3f_2115_);
lean_ctor_set(v_reuseFailAlloc_2129_, 9, v_zigFileName_x3f_2116_);
lean_ctor_set(v_reuseFailAlloc_2129_, 10, v_errorOnKinds_2117_);
lean_ctor_set(v_reuseFailAlloc_2129_, 11, v_incrSaveFileName_x3f_2120_);
lean_ctor_set(v_reuseFailAlloc_2129_, 12, v_incrLoadFileName_x3f_2121_);
lean_ctor_set(v_reuseFailAlloc_2129_, 13, v_incrHeaderSaveFileName_x3f_2122_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 8, v_component_2100_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 9, v_printPrefix_2101_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 10, v_printLibDir_2102_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 11, v_useStdin_2103_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 12, v_onlyDeps_2104_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 13, v_onlySrcDeps_2105_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 14, v_depsJson_2106_);
lean_ctor_set_uint32(v_reuseFailAlloc_2129_, sizeof(void*)*14, v_trustLevel_2108_);
lean_ctor_set_uint32(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 4, v_numThreads_2109_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 16, v_printStats_2118_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*14 + 17, v_run_2119_);
v___x_2127_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2128_; 
lean_ctor_set_uint8(v___x_2127_, sizeof(void*)*14 + 15, v___x_1393_);
v___x_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
return v___x_2128_;
}
}
}
}
else
{
lean_object* v_leanOpts_2131_; lean_object* v_forwardedArgs_2132_; uint8_t v_component_2133_; uint8_t v_printPrefix_2134_; uint8_t v_printLibDir_2135_; uint8_t v_useStdin_2136_; uint8_t v_onlySrcDeps_2137_; lean_object* v_opts_2138_; uint32_t v_trustLevel_2139_; uint32_t v_numThreads_2140_; lean_object* v_rootDir_x3f_2141_; lean_object* v_setupFileName_x3f_2142_; lean_object* v_oleanFileName_x3f_2143_; lean_object* v_ileanFileName_x3f_2144_; lean_object* v_cFileName_x3f_2145_; lean_object* v_bcFileName_x3f_2146_; lean_object* v_zigFileName_x3f_2147_; uint8_t v_jsonOutput_2148_; lean_object* v_errorOnKinds_2149_; uint8_t v_printStats_2150_; uint8_t v_run_2151_; lean_object* v_incrSaveFileName_x3f_2152_; lean_object* v_incrLoadFileName_x3f_2153_; lean_object* v_incrHeaderSaveFileName_x3f_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2162_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2131_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2132_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2133_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2134_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2135_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2136_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2137_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_opts_2138_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2139_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2140_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2141_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2142_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2143_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2144_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2145_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2146_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2147_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2148_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2149_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2150_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2151_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2152_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2153_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2154_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2156_ = v_opts_1118_;
v_isShared_2157_ = v_isSharedCheck_2162_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2154_);
lean_inc(v_incrLoadFileName_x3f_2153_);
lean_inc(v_incrSaveFileName_x3f_2152_);
lean_inc(v_errorOnKinds_2149_);
lean_inc(v_zigFileName_x3f_2147_);
lean_inc(v_bcFileName_x3f_2146_);
lean_inc(v_cFileName_x3f_2145_);
lean_inc(v_ileanFileName_x3f_2144_);
lean_inc(v_oleanFileName_x3f_2143_);
lean_inc(v_setupFileName_x3f_2142_);
lean_inc(v_rootDir_x3f_2141_);
lean_inc(v_opts_2138_);
lean_inc(v_forwardedArgs_2132_);
lean_inc(v_leanOpts_2131_);
lean_dec(v_opts_1118_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2162_;
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
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_leanOpts_2131_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v_forwardedArgs_2132_);
lean_ctor_set(v_reuseFailAlloc_2161_, 2, v_opts_2138_);
lean_ctor_set(v_reuseFailAlloc_2161_, 3, v_rootDir_x3f_2141_);
lean_ctor_set(v_reuseFailAlloc_2161_, 4, v_setupFileName_x3f_2142_);
lean_ctor_set(v_reuseFailAlloc_2161_, 5, v_oleanFileName_x3f_2143_);
lean_ctor_set(v_reuseFailAlloc_2161_, 6, v_ileanFileName_x3f_2144_);
lean_ctor_set(v_reuseFailAlloc_2161_, 7, v_cFileName_x3f_2145_);
lean_ctor_set(v_reuseFailAlloc_2161_, 8, v_bcFileName_x3f_2146_);
lean_ctor_set(v_reuseFailAlloc_2161_, 9, v_zigFileName_x3f_2147_);
lean_ctor_set(v_reuseFailAlloc_2161_, 10, v_errorOnKinds_2149_);
lean_ctor_set(v_reuseFailAlloc_2161_, 11, v_incrSaveFileName_x3f_2152_);
lean_ctor_set(v_reuseFailAlloc_2161_, 12, v_incrLoadFileName_x3f_2153_);
lean_ctor_set(v_reuseFailAlloc_2161_, 13, v_incrHeaderSaveFileName_x3f_2154_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 8, v_component_2133_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 9, v_printPrefix_2134_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 10, v_printLibDir_2135_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 11, v_useStdin_2136_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 13, v_onlySrcDeps_2137_);
lean_ctor_set_uint32(v_reuseFailAlloc_2161_, sizeof(void*)*14, v_trustLevel_2139_);
lean_ctor_set_uint32(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 4, v_numThreads_2140_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 15, v_jsonOutput_2148_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 16, v_printStats_2150_);
lean_ctor_set_uint8(v_reuseFailAlloc_2161_, sizeof(void*)*14 + 17, v_run_2151_);
v___x_2159_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
lean_object* v___x_2160_; 
lean_ctor_set_uint8(v___x_2159_, sizeof(void*)*14 + 12, v___x_1391_);
lean_ctor_set_uint8(v___x_2159_, sizeof(void*)*14 + 14, v___x_1391_);
v___x_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
return v___x_2160_;
}
}
}
}
else
{
lean_object* v_leanOpts_2163_; lean_object* v_forwardedArgs_2164_; uint8_t v_component_2165_; uint8_t v_printPrefix_2166_; uint8_t v_printLibDir_2167_; uint8_t v_useStdin_2168_; uint8_t v_onlyDeps_2169_; uint8_t v_depsJson_2170_; lean_object* v_opts_2171_; uint32_t v_trustLevel_2172_; uint32_t v_numThreads_2173_; lean_object* v_rootDir_x3f_2174_; lean_object* v_setupFileName_x3f_2175_; lean_object* v_oleanFileName_x3f_2176_; lean_object* v_ileanFileName_x3f_2177_; lean_object* v_cFileName_x3f_2178_; lean_object* v_bcFileName_x3f_2179_; lean_object* v_zigFileName_x3f_2180_; uint8_t v_jsonOutput_2181_; lean_object* v_errorOnKinds_2182_; uint8_t v_printStats_2183_; uint8_t v_run_2184_; lean_object* v_incrSaveFileName_x3f_2185_; lean_object* v_incrLoadFileName_x3f_2186_; lean_object* v_incrHeaderSaveFileName_x3f_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2195_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2163_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2164_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2165_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2166_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2167_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2168_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2169_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_depsJson_2170_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2171_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2172_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2173_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2174_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2175_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2176_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2177_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2178_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2179_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2180_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2181_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2182_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2183_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2184_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2185_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2186_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2187_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2195_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2189_ = v_opts_1118_;
v_isShared_2190_ = v_isSharedCheck_2195_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2187_);
lean_inc(v_incrLoadFileName_x3f_2186_);
lean_inc(v_incrSaveFileName_x3f_2185_);
lean_inc(v_errorOnKinds_2182_);
lean_inc(v_zigFileName_x3f_2180_);
lean_inc(v_bcFileName_x3f_2179_);
lean_inc(v_cFileName_x3f_2178_);
lean_inc(v_ileanFileName_x3f_2177_);
lean_inc(v_oleanFileName_x3f_2176_);
lean_inc(v_setupFileName_x3f_2175_);
lean_inc(v_rootDir_x3f_2174_);
lean_inc(v_opts_2171_);
lean_inc(v_forwardedArgs_2164_);
lean_inc(v_leanOpts_2163_);
lean_dec(v_opts_1118_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2195_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2192_; 
if (v_isShared_2190_ == 0)
{
v___x_2192_ = v___x_2189_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_leanOpts_2163_);
lean_ctor_set(v_reuseFailAlloc_2194_, 1, v_forwardedArgs_2164_);
lean_ctor_set(v_reuseFailAlloc_2194_, 2, v_opts_2171_);
lean_ctor_set(v_reuseFailAlloc_2194_, 3, v_rootDir_x3f_2174_);
lean_ctor_set(v_reuseFailAlloc_2194_, 4, v_setupFileName_x3f_2175_);
lean_ctor_set(v_reuseFailAlloc_2194_, 5, v_oleanFileName_x3f_2176_);
lean_ctor_set(v_reuseFailAlloc_2194_, 6, v_ileanFileName_x3f_2177_);
lean_ctor_set(v_reuseFailAlloc_2194_, 7, v_cFileName_x3f_2178_);
lean_ctor_set(v_reuseFailAlloc_2194_, 8, v_bcFileName_x3f_2179_);
lean_ctor_set(v_reuseFailAlloc_2194_, 9, v_zigFileName_x3f_2180_);
lean_ctor_set(v_reuseFailAlloc_2194_, 10, v_errorOnKinds_2182_);
lean_ctor_set(v_reuseFailAlloc_2194_, 11, v_incrSaveFileName_x3f_2185_);
lean_ctor_set(v_reuseFailAlloc_2194_, 12, v_incrLoadFileName_x3f_2186_);
lean_ctor_set(v_reuseFailAlloc_2194_, 13, v_incrHeaderSaveFileName_x3f_2187_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 8, v_component_2165_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 9, v_printPrefix_2166_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 10, v_printLibDir_2167_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 11, v_useStdin_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 12, v_onlyDeps_2169_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 14, v_depsJson_2170_);
lean_ctor_set_uint32(v_reuseFailAlloc_2194_, sizeof(void*)*14, v_trustLevel_2172_);
lean_ctor_set_uint32(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 4, v_numThreads_2173_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 15, v_jsonOutput_2181_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 16, v_printStats_2183_);
lean_ctor_set_uint8(v_reuseFailAlloc_2194_, sizeof(void*)*14 + 17, v_run_2184_);
v___x_2192_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; 
lean_ctor_set_uint8(v___x_2192_, sizeof(void*)*14 + 13, v___x_1389_);
v___x_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2192_);
return v___x_2193_;
}
}
}
}
else
{
lean_object* v_leanOpts_2196_; lean_object* v_forwardedArgs_2197_; uint8_t v_component_2198_; uint8_t v_printPrefix_2199_; uint8_t v_printLibDir_2200_; uint8_t v_useStdin_2201_; uint8_t v_onlySrcDeps_2202_; uint8_t v_depsJson_2203_; lean_object* v_opts_2204_; uint32_t v_trustLevel_2205_; uint32_t v_numThreads_2206_; lean_object* v_rootDir_x3f_2207_; lean_object* v_setupFileName_x3f_2208_; lean_object* v_oleanFileName_x3f_2209_; lean_object* v_ileanFileName_x3f_2210_; lean_object* v_cFileName_x3f_2211_; lean_object* v_bcFileName_x3f_2212_; lean_object* v_zigFileName_x3f_2213_; uint8_t v_jsonOutput_2214_; lean_object* v_errorOnKinds_2215_; uint8_t v_printStats_2216_; uint8_t v_run_2217_; lean_object* v_incrSaveFileName_x3f_2218_; lean_object* v_incrLoadFileName_x3f_2219_; lean_object* v_incrHeaderSaveFileName_x3f_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2196_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2197_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2198_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2199_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2200_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2201_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2202_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2203_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2204_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2205_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2206_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2207_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2208_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2209_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2210_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2211_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2212_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2213_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2214_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2215_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2216_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2217_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2218_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2219_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2220_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2222_ = v_opts_1118_;
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2220_);
lean_inc(v_incrLoadFileName_x3f_2219_);
lean_inc(v_incrSaveFileName_x3f_2218_);
lean_inc(v_errorOnKinds_2215_);
lean_inc(v_zigFileName_x3f_2213_);
lean_inc(v_bcFileName_x3f_2212_);
lean_inc(v_cFileName_x3f_2211_);
lean_inc(v_ileanFileName_x3f_2210_);
lean_inc(v_oleanFileName_x3f_2209_);
lean_inc(v_setupFileName_x3f_2208_);
lean_inc(v_rootDir_x3f_2207_);
lean_inc(v_opts_2204_);
lean_inc(v_forwardedArgs_2197_);
lean_inc(v_leanOpts_2196_);
lean_dec(v_opts_1118_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2228_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_leanOpts_2196_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_forwardedArgs_2197_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_opts_2204_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v_rootDir_x3f_2207_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v_setupFileName_x3f_2208_);
lean_ctor_set(v_reuseFailAlloc_2227_, 5, v_oleanFileName_x3f_2209_);
lean_ctor_set(v_reuseFailAlloc_2227_, 6, v_ileanFileName_x3f_2210_);
lean_ctor_set(v_reuseFailAlloc_2227_, 7, v_cFileName_x3f_2211_);
lean_ctor_set(v_reuseFailAlloc_2227_, 8, v_bcFileName_x3f_2212_);
lean_ctor_set(v_reuseFailAlloc_2227_, 9, v_zigFileName_x3f_2213_);
lean_ctor_set(v_reuseFailAlloc_2227_, 10, v_errorOnKinds_2215_);
lean_ctor_set(v_reuseFailAlloc_2227_, 11, v_incrSaveFileName_x3f_2218_);
lean_ctor_set(v_reuseFailAlloc_2227_, 12, v_incrLoadFileName_x3f_2219_);
lean_ctor_set(v_reuseFailAlloc_2227_, 13, v_incrHeaderSaveFileName_x3f_2220_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 8, v_component_2198_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 9, v_printPrefix_2199_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 10, v_printLibDir_2200_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 11, v_useStdin_2201_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 13, v_onlySrcDeps_2202_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 14, v_depsJson_2203_);
lean_ctor_set_uint32(v_reuseFailAlloc_2227_, sizeof(void*)*14, v_trustLevel_2205_);
lean_ctor_set_uint32(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 4, v_numThreads_2206_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 15, v_jsonOutput_2214_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 16, v_printStats_2216_);
lean_ctor_set_uint8(v_reuseFailAlloc_2227_, sizeof(void*)*14 + 17, v_run_2217_);
v___x_2225_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
lean_object* v___x_2226_; 
lean_ctor_set_uint8(v___x_2225_, sizeof(void*)*14 + 12, v___x_1387_);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
}
}
else
{
lean_object* v_leanOpts_2229_; lean_object* v_forwardedArgs_2230_; uint8_t v_component_2231_; uint8_t v_printPrefix_2232_; uint8_t v_printLibDir_2233_; uint8_t v_useStdin_2234_; uint8_t v_onlyDeps_2235_; uint8_t v_onlySrcDeps_2236_; uint8_t v_depsJson_2237_; lean_object* v_opts_2238_; uint32_t v_trustLevel_2239_; uint32_t v_numThreads_2240_; lean_object* v_rootDir_x3f_2241_; lean_object* v_setupFileName_x3f_2242_; lean_object* v_oleanFileName_x3f_2243_; lean_object* v_ileanFileName_x3f_2244_; lean_object* v_cFileName_x3f_2245_; lean_object* v_bcFileName_x3f_2246_; lean_object* v_zigFileName_x3f_2247_; uint8_t v_jsonOutput_2248_; lean_object* v_errorOnKinds_2249_; uint8_t v_printStats_2250_; uint8_t v_run_2251_; lean_object* v_incrSaveFileName_x3f_2252_; lean_object* v_incrLoadFileName_x3f_2253_; lean_object* v_incrHeaderSaveFileName_x3f_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2264_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2229_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2230_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2231_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2232_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2233_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2234_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2235_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2236_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2237_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2238_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2239_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2240_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2241_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2242_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2243_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2244_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2245_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2246_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2247_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2248_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2249_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2250_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2251_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2252_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2253_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2254_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2256_ = v_opts_1118_;
v_isShared_2257_ = v_isSharedCheck_2264_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2254_);
lean_inc(v_incrLoadFileName_x3f_2253_);
lean_inc(v_incrSaveFileName_x3f_2252_);
lean_inc(v_errorOnKinds_2249_);
lean_inc(v_zigFileName_x3f_2247_);
lean_inc(v_bcFileName_x3f_2246_);
lean_inc(v_cFileName_x3f_2245_);
lean_inc(v_ileanFileName_x3f_2244_);
lean_inc(v_oleanFileName_x3f_2243_);
lean_inc(v_setupFileName_x3f_2242_);
lean_inc(v_rootDir_x3f_2241_);
lean_inc(v_opts_2238_);
lean_inc(v_forwardedArgs_2230_);
lean_inc(v_leanOpts_2229_);
lean_dec(v_opts_1118_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2264_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2261_; 
v___x_2258_ = l___private_Lean_Shell_0__Lean_verbose;
v___x_2259_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2229_, v___x_2258_, v___x_1383_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v___x_2259_);
v___x_2261_ = v___x_2256_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2259_);
lean_ctor_set(v_reuseFailAlloc_2263_, 1, v_forwardedArgs_2230_);
lean_ctor_set(v_reuseFailAlloc_2263_, 2, v_opts_2238_);
lean_ctor_set(v_reuseFailAlloc_2263_, 3, v_rootDir_x3f_2241_);
lean_ctor_set(v_reuseFailAlloc_2263_, 4, v_setupFileName_x3f_2242_);
lean_ctor_set(v_reuseFailAlloc_2263_, 5, v_oleanFileName_x3f_2243_);
lean_ctor_set(v_reuseFailAlloc_2263_, 6, v_ileanFileName_x3f_2244_);
lean_ctor_set(v_reuseFailAlloc_2263_, 7, v_cFileName_x3f_2245_);
lean_ctor_set(v_reuseFailAlloc_2263_, 8, v_bcFileName_x3f_2246_);
lean_ctor_set(v_reuseFailAlloc_2263_, 9, v_zigFileName_x3f_2247_);
lean_ctor_set(v_reuseFailAlloc_2263_, 10, v_errorOnKinds_2249_);
lean_ctor_set(v_reuseFailAlloc_2263_, 11, v_incrSaveFileName_x3f_2252_);
lean_ctor_set(v_reuseFailAlloc_2263_, 12, v_incrLoadFileName_x3f_2253_);
lean_ctor_set(v_reuseFailAlloc_2263_, 13, v_incrHeaderSaveFileName_x3f_2254_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 8, v_component_2231_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 9, v_printPrefix_2232_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 10, v_printLibDir_2233_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 11, v_useStdin_2234_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 12, v_onlyDeps_2235_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 13, v_onlySrcDeps_2236_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 14, v_depsJson_2237_);
lean_ctor_set_uint32(v_reuseFailAlloc_2263_, sizeof(void*)*14, v_trustLevel_2239_);
lean_ctor_set_uint32(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 4, v_numThreads_2240_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 15, v_jsonOutput_2248_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 16, v_printStats_2250_);
lean_ctor_set_uint8(v_reuseFailAlloc_2263_, sizeof(void*)*14 + 17, v_run_2251_);
v___x_2261_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
lean_object* v___x_2262_; 
v___x_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
return v___x_2262_;
}
}
}
}
else
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2265_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13));
v___x_2266_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2265_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2321_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2321_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2321_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2271_ = lean_unsigned_to_nat(0u);
v___x_2272_ = lean_string_utf8_byte_size(v_a_2267_);
lean_inc(v_a_2267_);
v___x_2273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2273_, 0, v_a_2267_);
lean_ctor_set(v___x_2273_, 1, v___x_2271_);
lean_ctor_set(v___x_2273_, 2, v___x_2272_);
v___x_2274_ = l_String_Slice_toNat_x3f(v___x_2273_);
lean_dec_ref_known(v___x_2273_, 3);
if (lean_obj_tag(v___x_2274_) == 1)
{
lean_object* v_val_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v_val_2275_ = lean_ctor_get(v___x_2274_, 0);
lean_inc(v_val_2275_);
lean_dec_ref_known(v___x_2274_, 1);
v___x_2276_ = lean_cstr_to_nat("4294967296");
v___x_2277_ = lean_nat_dec_lt(v_val_2275_, v___x_2276_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
lean_dec(v_val_2275_);
lean_del_object(v___x_2269_);
lean_dec(v_a_2267_);
lean_dec_ref(v_opts_1118_);
v___x_2278_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14));
v___x_2279_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2278_);
lean_dec_ref(v___x_2279_);
goto v___jp_1283_;
}
else
{
lean_object* v_leanOpts_2280_; lean_object* v_forwardedArgs_2281_; uint8_t v_component_2282_; uint8_t v_printPrefix_2283_; uint8_t v_printLibDir_2284_; uint8_t v_useStdin_2285_; uint8_t v_onlyDeps_2286_; uint8_t v_onlySrcDeps_2287_; uint8_t v_depsJson_2288_; lean_object* v_opts_2289_; uint32_t v_numThreads_2290_; lean_object* v_rootDir_x3f_2291_; lean_object* v_setupFileName_x3f_2292_; lean_object* v_oleanFileName_x3f_2293_; lean_object* v_ileanFileName_x3f_2294_; lean_object* v_cFileName_x3f_2295_; lean_object* v_bcFileName_x3f_2296_; lean_object* v_zigFileName_x3f_2297_; uint8_t v_jsonOutput_2298_; lean_object* v_errorOnKinds_2299_; uint8_t v_printStats_2300_; uint8_t v_run_2301_; lean_object* v_incrSaveFileName_x3f_2302_; lean_object* v_incrLoadFileName_x3f_2303_; lean_object* v_incrHeaderSaveFileName_x3f_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2318_; 
v_leanOpts_2280_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2281_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2282_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2283_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2284_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2285_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2286_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2287_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2288_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2289_ = lean_ctor_get(v_opts_1118_, 2);
v_numThreads_2290_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2291_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2292_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2293_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2294_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2295_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2296_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2297_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2298_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2299_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2300_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2301_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2302_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2303_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2304_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2318_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2306_ = v_opts_1118_;
v_isShared_2307_ = v_isSharedCheck_2318_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2304_);
lean_inc(v_incrLoadFileName_x3f_2303_);
lean_inc(v_incrSaveFileName_x3f_2302_);
lean_inc(v_errorOnKinds_2299_);
lean_inc(v_zigFileName_x3f_2297_);
lean_inc(v_bcFileName_x3f_2296_);
lean_inc(v_cFileName_x3f_2295_);
lean_inc(v_ileanFileName_x3f_2294_);
lean_inc(v_oleanFileName_x3f_2293_);
lean_inc(v_setupFileName_x3f_2292_);
lean_inc(v_rootDir_x3f_2291_);
lean_inc(v_opts_2289_);
lean_inc(v_forwardedArgs_2281_);
lean_inc(v_leanOpts_2280_);
lean_dec(v_opts_1118_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2318_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
uint32_t v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2313_; 
v___x_2308_ = lean_uint32_of_nat(v_val_2275_);
lean_dec(v_val_2275_);
v___x_2309_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15));
v___x_2310_ = lean_string_append(v___x_2309_, v_a_2267_);
lean_dec(v_a_2267_);
v___x_2311_ = lean_array_push(v_forwardedArgs_2281_, v___x_2310_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 1, v___x_2311_);
v___x_2313_ = v___x_2306_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_leanOpts_2280_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v___x_2311_);
lean_ctor_set(v_reuseFailAlloc_2317_, 2, v_opts_2289_);
lean_ctor_set(v_reuseFailAlloc_2317_, 3, v_rootDir_x3f_2291_);
lean_ctor_set(v_reuseFailAlloc_2317_, 4, v_setupFileName_x3f_2292_);
lean_ctor_set(v_reuseFailAlloc_2317_, 5, v_oleanFileName_x3f_2293_);
lean_ctor_set(v_reuseFailAlloc_2317_, 6, v_ileanFileName_x3f_2294_);
lean_ctor_set(v_reuseFailAlloc_2317_, 7, v_cFileName_x3f_2295_);
lean_ctor_set(v_reuseFailAlloc_2317_, 8, v_bcFileName_x3f_2296_);
lean_ctor_set(v_reuseFailAlloc_2317_, 9, v_zigFileName_x3f_2297_);
lean_ctor_set(v_reuseFailAlloc_2317_, 10, v_errorOnKinds_2299_);
lean_ctor_set(v_reuseFailAlloc_2317_, 11, v_incrSaveFileName_x3f_2302_);
lean_ctor_set(v_reuseFailAlloc_2317_, 12, v_incrLoadFileName_x3f_2303_);
lean_ctor_set(v_reuseFailAlloc_2317_, 13, v_incrHeaderSaveFileName_x3f_2304_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 8, v_component_2282_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 9, v_printPrefix_2283_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 10, v_printLibDir_2284_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 11, v_useStdin_2285_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 12, v_onlyDeps_2286_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 13, v_onlySrcDeps_2287_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 14, v_depsJson_2288_);
lean_ctor_set_uint32(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 4, v_numThreads_2290_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 15, v_jsonOutput_2298_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 16, v_printStats_2300_);
lean_ctor_set_uint8(v_reuseFailAlloc_2317_, sizeof(void*)*14 + 17, v_run_2301_);
v___x_2313_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
lean_object* v___x_2315_; 
lean_ctor_set_uint32(v___x_2313_, sizeof(void*)*14, v___x_2308_);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v___x_2313_);
v___x_2315_ = v___x_2269_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v___x_2313_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
}
else
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_dec(v___x_2274_);
lean_del_object(v___x_2269_);
lean_dec(v_a_2267_);
lean_dec_ref(v_opts_1118_);
v___x_2319_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16));
v___x_2320_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2319_);
lean_dec_ref(v___x_2320_);
goto v___jp_1286_;
}
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
lean_dec_ref(v_opts_1118_);
v_a_2322_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v___x_2266_, 1);
v___x_2326_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2327_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2326_);
lean_dec_ref(v___x_2327_);
goto v___jp_2323_;
v___jp_2323_:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = lean_io_error_to_string(v_a_2322_);
v___x_2325_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2324_);
lean_dec_ref(v___x_2325_);
goto v___jp_1292_;
}
}
}
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17));
v___x_2329_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2328_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2329_) == 0)
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2382_; 
v_a_2330_ = lean_ctor_get(v___x_2329_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2329_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2332_ = v___x_2329_;
v_isShared_2333_ = v_isSharedCheck_2382_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2329_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2382_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2334_ = lean_unsigned_to_nat(0u);
v___x_2335_ = lean_string_utf8_byte_size(v_a_2330_);
lean_inc(v_a_2330_);
v___x_2336_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2336_, 0, v_a_2330_);
lean_ctor_set(v___x_2336_, 1, v___x_2334_);
lean_ctor_set(v___x_2336_, 2, v___x_2335_);
v___x_2337_ = l_String_Slice_toNat_x3f(v___x_2336_);
lean_dec_ref_known(v___x_2336_, 3);
if (lean_obj_tag(v___x_2337_) == 1)
{
lean_object* v_val_2338_; lean_object* v_leanOpts_2339_; lean_object* v_forwardedArgs_2340_; uint8_t v_component_2341_; uint8_t v_printPrefix_2342_; uint8_t v_printLibDir_2343_; uint8_t v_useStdin_2344_; uint8_t v_onlyDeps_2345_; uint8_t v_onlySrcDeps_2346_; uint8_t v_depsJson_2347_; lean_object* v_opts_2348_; uint32_t v_trustLevel_2349_; uint32_t v_numThreads_2350_; lean_object* v_rootDir_x3f_2351_; lean_object* v_setupFileName_x3f_2352_; lean_object* v_oleanFileName_x3f_2353_; lean_object* v_ileanFileName_x3f_2354_; lean_object* v_cFileName_x3f_2355_; lean_object* v_bcFileName_x3f_2356_; lean_object* v_zigFileName_x3f_2357_; uint8_t v_jsonOutput_2358_; lean_object* v_errorOnKinds_2359_; uint8_t v_printStats_2360_; uint8_t v_run_2361_; lean_object* v_incrSaveFileName_x3f_2362_; lean_object* v_incrLoadFileName_x3f_2363_; lean_object* v_incrHeaderSaveFileName_x3f_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2379_; 
v_val_2338_ = lean_ctor_get(v___x_2337_, 0);
lean_inc(v_val_2338_);
lean_dec_ref_known(v___x_2337_, 1);
v_leanOpts_2339_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2340_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2341_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2342_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2343_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2344_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2345_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2346_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2347_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2348_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2349_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2350_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2351_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2352_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2353_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2354_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2355_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2356_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2357_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2358_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2359_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2360_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2361_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2362_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2363_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2364_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2379_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2366_ = v_opts_1118_;
v_isShared_2367_ = v_isSharedCheck_2379_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2364_);
lean_inc(v_incrLoadFileName_x3f_2363_);
lean_inc(v_incrSaveFileName_x3f_2362_);
lean_inc(v_errorOnKinds_2359_);
lean_inc(v_zigFileName_x3f_2357_);
lean_inc(v_bcFileName_x3f_2356_);
lean_inc(v_cFileName_x3f_2355_);
lean_inc(v_ileanFileName_x3f_2354_);
lean_inc(v_oleanFileName_x3f_2353_);
lean_inc(v_setupFileName_x3f_2352_);
lean_inc(v_rootDir_x3f_2351_);
lean_inc(v_opts_2348_);
lean_inc(v_forwardedArgs_2340_);
lean_inc(v_leanOpts_2339_);
lean_dec(v_opts_1118_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2379_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2374_; 
v___x_2368_ = l___private_Lean_Shell_0__Lean_timeout;
v___x_2369_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2339_, v___x_2368_, v_val_2338_);
v___x_2370_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18));
v___x_2371_ = lean_string_append(v___x_2370_, v_a_2330_);
lean_dec(v_a_2330_);
v___x_2372_ = lean_array_push(v_forwardedArgs_2340_, v___x_2371_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 1, v___x_2372_);
lean_ctor_set(v___x_2366_, 0, v___x_2369_);
v___x_2374_ = v___x_2366_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2378_, 1, v___x_2372_);
lean_ctor_set(v_reuseFailAlloc_2378_, 2, v_opts_2348_);
lean_ctor_set(v_reuseFailAlloc_2378_, 3, v_rootDir_x3f_2351_);
lean_ctor_set(v_reuseFailAlloc_2378_, 4, v_setupFileName_x3f_2352_);
lean_ctor_set(v_reuseFailAlloc_2378_, 5, v_oleanFileName_x3f_2353_);
lean_ctor_set(v_reuseFailAlloc_2378_, 6, v_ileanFileName_x3f_2354_);
lean_ctor_set(v_reuseFailAlloc_2378_, 7, v_cFileName_x3f_2355_);
lean_ctor_set(v_reuseFailAlloc_2378_, 8, v_bcFileName_x3f_2356_);
lean_ctor_set(v_reuseFailAlloc_2378_, 9, v_zigFileName_x3f_2357_);
lean_ctor_set(v_reuseFailAlloc_2378_, 10, v_errorOnKinds_2359_);
lean_ctor_set(v_reuseFailAlloc_2378_, 11, v_incrSaveFileName_x3f_2362_);
lean_ctor_set(v_reuseFailAlloc_2378_, 12, v_incrLoadFileName_x3f_2363_);
lean_ctor_set(v_reuseFailAlloc_2378_, 13, v_incrHeaderSaveFileName_x3f_2364_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 8, v_component_2341_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 9, v_printPrefix_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 10, v_printLibDir_2343_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 11, v_useStdin_2344_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 12, v_onlyDeps_2345_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 13, v_onlySrcDeps_2346_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 14, v_depsJson_2347_);
lean_ctor_set_uint32(v_reuseFailAlloc_2378_, sizeof(void*)*14, v_trustLevel_2349_);
lean_ctor_set_uint32(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 4, v_numThreads_2350_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 15, v_jsonOutput_2358_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 16, v_printStats_2360_);
lean_ctor_set_uint8(v_reuseFailAlloc_2378_, sizeof(void*)*14 + 17, v_run_2361_);
v___x_2374_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2376_; 
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 0, v___x_2374_);
v___x_2376_ = v___x_2332_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2374_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
else
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
lean_dec(v___x_2337_);
lean_del_object(v___x_2332_);
lean_dec(v_a_2330_);
lean_dec_ref(v_opts_1118_);
v___x_2380_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19));
v___x_2381_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2380_);
lean_dec_ref(v___x_2381_);
goto v___jp_1176_;
}
}
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2387_; lean_object* v___x_2388_; 
lean_dec_ref(v_opts_1118_);
v_a_2383_ = lean_ctor_get(v___x_2329_, 0);
lean_inc(v_a_2383_);
lean_dec_ref_known(v___x_2329_, 1);
v___x_2387_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2388_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2387_);
lean_dec_ref(v___x_2388_);
goto v___jp_2384_;
v___jp_2384_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = lean_io_error_to_string(v_a_2383_);
v___x_2386_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2385_);
lean_dec_ref(v___x_2386_);
goto v___jp_1173_;
}
}
}
}
else
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20));
v___x_2390_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2389_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2443_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2393_ = v___x_2390_;
v_isShared_2394_ = v_isSharedCheck_2443_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_a_2391_);
lean_dec(v___x_2390_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2443_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2395_ = lean_unsigned_to_nat(0u);
v___x_2396_ = lean_string_utf8_byte_size(v_a_2391_);
lean_inc(v_a_2391_);
v___x_2397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2397_, 0, v_a_2391_);
lean_ctor_set(v___x_2397_, 1, v___x_2395_);
lean_ctor_set(v___x_2397_, 2, v___x_2396_);
v___x_2398_ = l_String_Slice_toNat_x3f(v___x_2397_);
lean_dec_ref_known(v___x_2397_, 3);
if (lean_obj_tag(v___x_2398_) == 1)
{
lean_object* v_val_2399_; lean_object* v_leanOpts_2400_; lean_object* v_forwardedArgs_2401_; uint8_t v_component_2402_; uint8_t v_printPrefix_2403_; uint8_t v_printLibDir_2404_; uint8_t v_useStdin_2405_; uint8_t v_onlyDeps_2406_; uint8_t v_onlySrcDeps_2407_; uint8_t v_depsJson_2408_; lean_object* v_opts_2409_; uint32_t v_trustLevel_2410_; uint32_t v_numThreads_2411_; lean_object* v_rootDir_x3f_2412_; lean_object* v_setupFileName_x3f_2413_; lean_object* v_oleanFileName_x3f_2414_; lean_object* v_ileanFileName_x3f_2415_; lean_object* v_cFileName_x3f_2416_; lean_object* v_bcFileName_x3f_2417_; lean_object* v_zigFileName_x3f_2418_; uint8_t v_jsonOutput_2419_; lean_object* v_errorOnKinds_2420_; uint8_t v_printStats_2421_; uint8_t v_run_2422_; lean_object* v_incrSaveFileName_x3f_2423_; lean_object* v_incrLoadFileName_x3f_2424_; lean_object* v_incrHeaderSaveFileName_x3f_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2440_; 
v_val_2399_ = lean_ctor_get(v___x_2398_, 0);
lean_inc(v_val_2399_);
lean_dec_ref_known(v___x_2398_, 1);
v_leanOpts_2400_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2401_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2402_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2403_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2404_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2405_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2406_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2407_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2408_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2409_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2410_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2411_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2412_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2413_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2414_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2415_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2416_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2417_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2418_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2419_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2420_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2421_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2422_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2423_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2424_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2425_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2427_ = v_opts_1118_;
v_isShared_2428_ = v_isSharedCheck_2440_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2425_);
lean_inc(v_incrLoadFileName_x3f_2424_);
lean_inc(v_incrSaveFileName_x3f_2423_);
lean_inc(v_errorOnKinds_2420_);
lean_inc(v_zigFileName_x3f_2418_);
lean_inc(v_bcFileName_x3f_2417_);
lean_inc(v_cFileName_x3f_2416_);
lean_inc(v_ileanFileName_x3f_2415_);
lean_inc(v_oleanFileName_x3f_2414_);
lean_inc(v_setupFileName_x3f_2413_);
lean_inc(v_rootDir_x3f_2412_);
lean_inc(v_opts_2409_);
lean_inc(v_forwardedArgs_2401_);
lean_inc(v_leanOpts_2400_);
lean_dec(v_opts_1118_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2440_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2429_ = l___private_Lean_Shell_0__Lean_maxMemory;
v___x_2430_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2400_, v___x_2429_, v_val_2399_);
v___x_2431_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21));
v___x_2432_ = lean_string_append(v___x_2431_, v_a_2391_);
lean_dec(v_a_2391_);
v___x_2433_ = lean_array_push(v_forwardedArgs_2401_, v___x_2432_);
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 1, v___x_2433_);
lean_ctor_set(v___x_2427_, 0, v___x_2430_);
v___x_2435_ = v___x_2427_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2430_);
lean_ctor_set(v_reuseFailAlloc_2439_, 1, v___x_2433_);
lean_ctor_set(v_reuseFailAlloc_2439_, 2, v_opts_2409_);
lean_ctor_set(v_reuseFailAlloc_2439_, 3, v_rootDir_x3f_2412_);
lean_ctor_set(v_reuseFailAlloc_2439_, 4, v_setupFileName_x3f_2413_);
lean_ctor_set(v_reuseFailAlloc_2439_, 5, v_oleanFileName_x3f_2414_);
lean_ctor_set(v_reuseFailAlloc_2439_, 6, v_ileanFileName_x3f_2415_);
lean_ctor_set(v_reuseFailAlloc_2439_, 7, v_cFileName_x3f_2416_);
lean_ctor_set(v_reuseFailAlloc_2439_, 8, v_bcFileName_x3f_2417_);
lean_ctor_set(v_reuseFailAlloc_2439_, 9, v_zigFileName_x3f_2418_);
lean_ctor_set(v_reuseFailAlloc_2439_, 10, v_errorOnKinds_2420_);
lean_ctor_set(v_reuseFailAlloc_2439_, 11, v_incrSaveFileName_x3f_2423_);
lean_ctor_set(v_reuseFailAlloc_2439_, 12, v_incrLoadFileName_x3f_2424_);
lean_ctor_set(v_reuseFailAlloc_2439_, 13, v_incrHeaderSaveFileName_x3f_2425_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 8, v_component_2402_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 9, v_printPrefix_2403_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 10, v_printLibDir_2404_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 11, v_useStdin_2405_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 12, v_onlyDeps_2406_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 13, v_onlySrcDeps_2407_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 14, v_depsJson_2408_);
lean_ctor_set_uint32(v_reuseFailAlloc_2439_, sizeof(void*)*14, v_trustLevel_2410_);
lean_ctor_set_uint32(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 4, v_numThreads_2411_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 15, v_jsonOutput_2419_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 16, v_printStats_2421_);
lean_ctor_set_uint8(v_reuseFailAlloc_2439_, sizeof(void*)*14 + 17, v_run_2422_);
v___x_2435_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2437_; 
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 0, v___x_2435_);
v___x_2437_ = v___x_2393_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
else
{
lean_object* v___x_2441_; lean_object* v___x_2442_; 
lean_dec(v___x_2398_);
lean_del_object(v___x_2393_);
lean_dec(v_a_2391_);
lean_dec_ref(v_opts_1118_);
v___x_2441_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22));
v___x_2442_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2441_);
lean_dec_ref(v___x_2442_);
goto v___jp_1295_;
}
}
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
lean_dec_ref(v_opts_1118_);
v_a_2444_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2390_, 1);
v___x_2448_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2449_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2448_);
lean_dec_ref(v___x_2449_);
goto v___jp_2445_;
v___jp_2445_:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2446_ = lean_io_error_to_string(v_a_2444_);
v___x_2447_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2446_);
lean_dec_ref(v___x_2447_);
goto v___jp_1301_;
}
}
}
}
else
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23));
v___x_2451_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2450_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v___x_2454_; uint8_t v_isShared_2455_; uint8_t v_isSharedCheck_2496_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2454_ = v___x_2451_;
v_isShared_2455_ = v_isSharedCheck_2496_;
goto v_resetjp_2453_;
}
else
{
lean_inc(v_a_2452_);
lean_dec(v___x_2451_);
v___x_2454_ = lean_box(0);
v_isShared_2455_ = v_isSharedCheck_2496_;
goto v_resetjp_2453_;
}
v_resetjp_2453_:
{
lean_object* v_leanOpts_2456_; lean_object* v_forwardedArgs_2457_; uint8_t v_component_2458_; uint8_t v_printPrefix_2459_; uint8_t v_printLibDir_2460_; uint8_t v_useStdin_2461_; uint8_t v_onlyDeps_2462_; uint8_t v_onlySrcDeps_2463_; uint8_t v_depsJson_2464_; lean_object* v_opts_2465_; uint32_t v_trustLevel_2466_; uint32_t v_numThreads_2467_; lean_object* v_setupFileName_x3f_2468_; lean_object* v_oleanFileName_x3f_2469_; lean_object* v_ileanFileName_x3f_2470_; lean_object* v_cFileName_x3f_2471_; lean_object* v_bcFileName_x3f_2472_; lean_object* v_zigFileName_x3f_2473_; uint8_t v_jsonOutput_2474_; lean_object* v_errorOnKinds_2475_; uint8_t v_printStats_2476_; uint8_t v_run_2477_; lean_object* v_incrSaveFileName_x3f_2478_; lean_object* v_incrLoadFileName_x3f_2479_; lean_object* v_incrHeaderSaveFileName_x3f_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2494_; 
v_leanOpts_2456_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2457_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2458_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2459_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2460_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2461_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2462_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2463_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2464_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2465_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2466_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2467_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_setupFileName_x3f_2468_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2469_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2470_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2471_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2472_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2473_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2474_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2475_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2476_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2477_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2478_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2479_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2480_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v_opts_1118_, 3);
lean_dec(v_unused_2495_);
v___x_2482_ = v_opts_1118_;
v_isShared_2483_ = v_isSharedCheck_2494_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2480_);
lean_inc(v_incrLoadFileName_x3f_2479_);
lean_inc(v_incrSaveFileName_x3f_2478_);
lean_inc(v_errorOnKinds_2475_);
lean_inc(v_zigFileName_x3f_2473_);
lean_inc(v_bcFileName_x3f_2472_);
lean_inc(v_cFileName_x3f_2471_);
lean_inc(v_ileanFileName_x3f_2470_);
lean_inc(v_oleanFileName_x3f_2469_);
lean_inc(v_setupFileName_x3f_2468_);
lean_inc(v_opts_2465_);
lean_inc(v_forwardedArgs_2457_);
lean_inc(v_leanOpts_2456_);
lean_dec(v_opts_1118_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2494_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2489_; 
v___x_2484_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24));
v___x_2485_ = lean_string_append(v___x_2484_, v_a_2452_);
v___x_2486_ = lean_array_push(v_forwardedArgs_2457_, v___x_2485_);
v___x_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2487_, 0, v_a_2452_);
if (v_isShared_2483_ == 0)
{
lean_ctor_set(v___x_2482_, 3, v___x_2487_);
lean_ctor_set(v___x_2482_, 1, v___x_2486_);
v___x_2489_ = v___x_2482_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_leanOpts_2456_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v___x_2486_);
lean_ctor_set(v_reuseFailAlloc_2493_, 2, v_opts_2465_);
lean_ctor_set(v_reuseFailAlloc_2493_, 3, v___x_2487_);
lean_ctor_set(v_reuseFailAlloc_2493_, 4, v_setupFileName_x3f_2468_);
lean_ctor_set(v_reuseFailAlloc_2493_, 5, v_oleanFileName_x3f_2469_);
lean_ctor_set(v_reuseFailAlloc_2493_, 6, v_ileanFileName_x3f_2470_);
lean_ctor_set(v_reuseFailAlloc_2493_, 7, v_cFileName_x3f_2471_);
lean_ctor_set(v_reuseFailAlloc_2493_, 8, v_bcFileName_x3f_2472_);
lean_ctor_set(v_reuseFailAlloc_2493_, 9, v_zigFileName_x3f_2473_);
lean_ctor_set(v_reuseFailAlloc_2493_, 10, v_errorOnKinds_2475_);
lean_ctor_set(v_reuseFailAlloc_2493_, 11, v_incrSaveFileName_x3f_2478_);
lean_ctor_set(v_reuseFailAlloc_2493_, 12, v_incrLoadFileName_x3f_2479_);
lean_ctor_set(v_reuseFailAlloc_2493_, 13, v_incrHeaderSaveFileName_x3f_2480_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 8, v_component_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 9, v_printPrefix_2459_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 10, v_printLibDir_2460_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 11, v_useStdin_2461_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 12, v_onlyDeps_2462_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 13, v_onlySrcDeps_2463_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 14, v_depsJson_2464_);
lean_ctor_set_uint32(v_reuseFailAlloc_2493_, sizeof(void*)*14, v_trustLevel_2466_);
lean_ctor_set_uint32(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 4, v_numThreads_2467_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 15, v_jsonOutput_2474_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 16, v_printStats_2476_);
lean_ctor_set_uint8(v_reuseFailAlloc_2493_, sizeof(void*)*14 + 17, v_run_2477_);
v___x_2489_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
lean_object* v___x_2491_; 
if (v_isShared_2455_ == 0)
{
lean_ctor_set(v___x_2454_, 0, v___x_2489_);
v___x_2491_ = v___x_2454_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2489_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
}
else
{
lean_object* v_a_2497_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
lean_dec_ref(v_opts_1118_);
v_a_2497_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2497_);
lean_dec_ref_known(v___x_2451_, 1);
v___x_2501_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2502_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2501_);
lean_dec_ref(v___x_2502_);
goto v___jp_2498_;
v___jp_2498_:
{
lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2499_ = lean_io_error_to_string(v_a_2497_);
v___x_2500_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2499_);
lean_dec_ref(v___x_2500_);
goto v___jp_1167_;
}
}
}
}
else
{
lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2503_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25));
v___x_2504_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2503_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2546_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2546_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2546_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v_leanOpts_2509_; lean_object* v_forwardedArgs_2510_; uint8_t v_component_2511_; uint8_t v_printPrefix_2512_; uint8_t v_printLibDir_2513_; uint8_t v_useStdin_2514_; uint8_t v_onlyDeps_2515_; uint8_t v_onlySrcDeps_2516_; uint8_t v_depsJson_2517_; lean_object* v_opts_2518_; uint32_t v_trustLevel_2519_; uint32_t v_numThreads_2520_; lean_object* v_rootDir_x3f_2521_; lean_object* v_setupFileName_x3f_2522_; lean_object* v_oleanFileName_x3f_2523_; lean_object* v_cFileName_x3f_2524_; lean_object* v_bcFileName_x3f_2525_; lean_object* v_zigFileName_x3f_2526_; uint8_t v_jsonOutput_2527_; lean_object* v_errorOnKinds_2528_; uint8_t v_printStats_2529_; uint8_t v_run_2530_; lean_object* v_incrSaveFileName_x3f_2531_; lean_object* v_incrLoadFileName_x3f_2532_; lean_object* v_incrHeaderSaveFileName_x3f_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2544_; 
v_leanOpts_2509_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2510_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2511_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2512_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2513_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2514_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2515_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2516_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2517_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2518_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2519_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2520_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2521_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2522_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2523_ = lean_ctor_get(v_opts_1118_, 5);
v_cFileName_x3f_2524_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2525_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2526_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2527_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2528_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2529_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2530_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2531_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2532_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2533_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2544_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; 
v_unused_2545_ = lean_ctor_get(v_opts_1118_, 6);
lean_dec(v_unused_2545_);
v___x_2535_ = v_opts_1118_;
v_isShared_2536_ = v_isSharedCheck_2544_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2533_);
lean_inc(v_incrLoadFileName_x3f_2532_);
lean_inc(v_incrSaveFileName_x3f_2531_);
lean_inc(v_errorOnKinds_2528_);
lean_inc(v_zigFileName_x3f_2526_);
lean_inc(v_bcFileName_x3f_2525_);
lean_inc(v_cFileName_x3f_2524_);
lean_inc(v_oleanFileName_x3f_2523_);
lean_inc(v_setupFileName_x3f_2522_);
lean_inc(v_rootDir_x3f_2521_);
lean_inc(v_opts_2518_);
lean_inc(v_forwardedArgs_2510_);
lean_inc(v_leanOpts_2509_);
lean_dec(v_opts_1118_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2544_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
v___x_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2537_, 0, v_a_2505_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 6, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_leanOpts_2509_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v_forwardedArgs_2510_);
lean_ctor_set(v_reuseFailAlloc_2543_, 2, v_opts_2518_);
lean_ctor_set(v_reuseFailAlloc_2543_, 3, v_rootDir_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2543_, 4, v_setupFileName_x3f_2522_);
lean_ctor_set(v_reuseFailAlloc_2543_, 5, v_oleanFileName_x3f_2523_);
lean_ctor_set(v_reuseFailAlloc_2543_, 6, v___x_2537_);
lean_ctor_set(v_reuseFailAlloc_2543_, 7, v_cFileName_x3f_2524_);
lean_ctor_set(v_reuseFailAlloc_2543_, 8, v_bcFileName_x3f_2525_);
lean_ctor_set(v_reuseFailAlloc_2543_, 9, v_zigFileName_x3f_2526_);
lean_ctor_set(v_reuseFailAlloc_2543_, 10, v_errorOnKinds_2528_);
lean_ctor_set(v_reuseFailAlloc_2543_, 11, v_incrSaveFileName_x3f_2531_);
lean_ctor_set(v_reuseFailAlloc_2543_, 12, v_incrLoadFileName_x3f_2532_);
lean_ctor_set(v_reuseFailAlloc_2543_, 13, v_incrHeaderSaveFileName_x3f_2533_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 8, v_component_2511_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 9, v_printPrefix_2512_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 10, v_printLibDir_2513_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 11, v_useStdin_2514_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 12, v_onlyDeps_2515_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 13, v_onlySrcDeps_2516_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 14, v_depsJson_2517_);
lean_ctor_set_uint32(v_reuseFailAlloc_2543_, sizeof(void*)*14, v_trustLevel_2519_);
lean_ctor_set_uint32(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 4, v_numThreads_2520_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 15, v_jsonOutput_2527_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 16, v_printStats_2529_);
lean_ctor_set_uint8(v_reuseFailAlloc_2543_, sizeof(void*)*14 + 17, v_run_2530_);
v___x_2539_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
lean_object* v___x_2541_; 
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2539_);
v___x_2541_ = v___x_2507_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2539_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
}
else
{
lean_object* v_a_2547_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
lean_dec_ref(v_opts_1118_);
v_a_2547_ = lean_ctor_get(v___x_2504_, 0);
lean_inc(v_a_2547_);
lean_dec_ref_known(v___x_2504_, 1);
v___x_2551_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2552_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2551_);
lean_dec_ref(v___x_2552_);
goto v___jp_2548_;
v___jp_2548_:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2549_ = lean_io_error_to_string(v_a_2547_);
v___x_2550_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2549_);
lean_dec_ref(v___x_2550_);
goto v___jp_1307_;
}
}
}
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26));
v___x_2554_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2553_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2596_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2557_ = v___x_2554_;
v_isShared_2558_ = v_isSharedCheck_2596_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2554_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2596_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v_leanOpts_2559_; lean_object* v_forwardedArgs_2560_; uint8_t v_component_2561_; uint8_t v_printPrefix_2562_; uint8_t v_printLibDir_2563_; uint8_t v_useStdin_2564_; uint8_t v_onlyDeps_2565_; uint8_t v_onlySrcDeps_2566_; uint8_t v_depsJson_2567_; lean_object* v_opts_2568_; uint32_t v_trustLevel_2569_; uint32_t v_numThreads_2570_; lean_object* v_rootDir_x3f_2571_; lean_object* v_setupFileName_x3f_2572_; lean_object* v_ileanFileName_x3f_2573_; lean_object* v_cFileName_x3f_2574_; lean_object* v_bcFileName_x3f_2575_; lean_object* v_zigFileName_x3f_2576_; uint8_t v_jsonOutput_2577_; lean_object* v_errorOnKinds_2578_; uint8_t v_printStats_2579_; uint8_t v_run_2580_; lean_object* v_incrSaveFileName_x3f_2581_; lean_object* v_incrLoadFileName_x3f_2582_; lean_object* v_incrHeaderSaveFileName_x3f_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2594_; 
v_leanOpts_2559_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2560_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2561_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2562_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2563_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2564_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2565_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2566_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2567_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2568_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2569_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2570_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2571_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2572_ = lean_ctor_get(v_opts_1118_, 4);
v_ileanFileName_x3f_2573_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2574_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2575_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2576_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2577_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2578_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2579_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2580_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2581_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2582_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2583_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2594_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2594_ == 0)
{
lean_object* v_unused_2595_; 
v_unused_2595_ = lean_ctor_get(v_opts_1118_, 5);
lean_dec(v_unused_2595_);
v___x_2585_ = v_opts_1118_;
v_isShared_2586_ = v_isSharedCheck_2594_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2583_);
lean_inc(v_incrLoadFileName_x3f_2582_);
lean_inc(v_incrSaveFileName_x3f_2581_);
lean_inc(v_errorOnKinds_2578_);
lean_inc(v_zigFileName_x3f_2576_);
lean_inc(v_bcFileName_x3f_2575_);
lean_inc(v_cFileName_x3f_2574_);
lean_inc(v_ileanFileName_x3f_2573_);
lean_inc(v_setupFileName_x3f_2572_);
lean_inc(v_rootDir_x3f_2571_);
lean_inc(v_opts_2568_);
lean_inc(v_forwardedArgs_2560_);
lean_inc(v_leanOpts_2559_);
lean_dec(v_opts_1118_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2594_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2587_; lean_object* v___x_2589_; 
v___x_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2587_, 0, v_a_2555_);
if (v_isShared_2586_ == 0)
{
lean_ctor_set(v___x_2585_, 5, v___x_2587_);
v___x_2589_ = v___x_2585_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_leanOpts_2559_);
lean_ctor_set(v_reuseFailAlloc_2593_, 1, v_forwardedArgs_2560_);
lean_ctor_set(v_reuseFailAlloc_2593_, 2, v_opts_2568_);
lean_ctor_set(v_reuseFailAlloc_2593_, 3, v_rootDir_x3f_2571_);
lean_ctor_set(v_reuseFailAlloc_2593_, 4, v_setupFileName_x3f_2572_);
lean_ctor_set(v_reuseFailAlloc_2593_, 5, v___x_2587_);
lean_ctor_set(v_reuseFailAlloc_2593_, 6, v_ileanFileName_x3f_2573_);
lean_ctor_set(v_reuseFailAlloc_2593_, 7, v_cFileName_x3f_2574_);
lean_ctor_set(v_reuseFailAlloc_2593_, 8, v_bcFileName_x3f_2575_);
lean_ctor_set(v_reuseFailAlloc_2593_, 9, v_zigFileName_x3f_2576_);
lean_ctor_set(v_reuseFailAlloc_2593_, 10, v_errorOnKinds_2578_);
lean_ctor_set(v_reuseFailAlloc_2593_, 11, v_incrSaveFileName_x3f_2581_);
lean_ctor_set(v_reuseFailAlloc_2593_, 12, v_incrLoadFileName_x3f_2582_);
lean_ctor_set(v_reuseFailAlloc_2593_, 13, v_incrHeaderSaveFileName_x3f_2583_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 8, v_component_2561_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 9, v_printPrefix_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 10, v_printLibDir_2563_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 11, v_useStdin_2564_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 12, v_onlyDeps_2565_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 13, v_onlySrcDeps_2566_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 14, v_depsJson_2567_);
lean_ctor_set_uint32(v_reuseFailAlloc_2593_, sizeof(void*)*14, v_trustLevel_2569_);
lean_ctor_set_uint32(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 4, v_numThreads_2570_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 15, v_jsonOutput_2577_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 16, v_printStats_2579_);
lean_ctor_set_uint8(v_reuseFailAlloc_2593_, sizeof(void*)*14 + 17, v_run_2580_);
v___x_2589_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
lean_object* v___x_2591_; 
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v___x_2589_);
v___x_2591_ = v___x_2557_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v___x_2589_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
return v___x_2591_;
}
}
}
}
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
lean_dec_ref(v_opts_1118_);
v_a_2597_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2554_, 1);
v___x_2601_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2602_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2601_);
lean_dec_ref(v___x_2602_);
goto v___jp_2598_;
v___jp_2598_:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2599_ = lean_io_error_to_string(v_a_2597_);
v___x_2600_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2599_);
lean_dec_ref(v___x_2600_);
goto v___jp_1161_;
}
}
}
}
else
{
lean_object* v_leanOpts_2603_; lean_object* v_forwardedArgs_2604_; uint8_t v_component_2605_; uint8_t v_printPrefix_2606_; uint8_t v_printLibDir_2607_; uint8_t v_useStdin_2608_; uint8_t v_onlyDeps_2609_; uint8_t v_onlySrcDeps_2610_; uint8_t v_depsJson_2611_; lean_object* v_opts_2612_; uint32_t v_trustLevel_2613_; uint32_t v_numThreads_2614_; lean_object* v_rootDir_x3f_2615_; lean_object* v_setupFileName_x3f_2616_; lean_object* v_oleanFileName_x3f_2617_; lean_object* v_ileanFileName_x3f_2618_; lean_object* v_cFileName_x3f_2619_; lean_object* v_bcFileName_x3f_2620_; lean_object* v_zigFileName_x3f_2621_; uint8_t v_jsonOutput_2622_; lean_object* v_errorOnKinds_2623_; uint8_t v_printStats_2624_; lean_object* v_incrSaveFileName_x3f_2625_; lean_object* v_incrLoadFileName_x3f_2626_; lean_object* v_incrHeaderSaveFileName_x3f_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2637_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2603_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2604_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2605_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2606_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2607_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2608_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2609_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2610_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2611_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2612_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2613_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2614_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2615_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2616_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2617_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2618_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2619_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2620_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2621_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2622_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2623_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2624_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_incrSaveFileName_x3f_2625_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2626_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2627_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2629_ = v_opts_1118_;
v_isShared_2630_ = v_isSharedCheck_2637_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2627_);
lean_inc(v_incrLoadFileName_x3f_2626_);
lean_inc(v_incrSaveFileName_x3f_2625_);
lean_inc(v_errorOnKinds_2623_);
lean_inc(v_zigFileName_x3f_2621_);
lean_inc(v_bcFileName_x3f_2620_);
lean_inc(v_cFileName_x3f_2619_);
lean_inc(v_ileanFileName_x3f_2618_);
lean_inc(v_oleanFileName_x3f_2617_);
lean_inc(v_setupFileName_x3f_2616_);
lean_inc(v_rootDir_x3f_2615_);
lean_inc(v_opts_2612_);
lean_inc(v_forwardedArgs_2604_);
lean_inc(v_leanOpts_2603_);
lean_dec(v_opts_1118_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2637_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2634_; 
v___x_2631_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_2632_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2603_, v___x_2631_, v___x_1369_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set(v___x_2629_, 0, v___x_2632_);
v___x_2634_ = v___x_2629_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2632_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_forwardedArgs_2604_);
lean_ctor_set(v_reuseFailAlloc_2636_, 2, v_opts_2612_);
lean_ctor_set(v_reuseFailAlloc_2636_, 3, v_rootDir_x3f_2615_);
lean_ctor_set(v_reuseFailAlloc_2636_, 4, v_setupFileName_x3f_2616_);
lean_ctor_set(v_reuseFailAlloc_2636_, 5, v_oleanFileName_x3f_2617_);
lean_ctor_set(v_reuseFailAlloc_2636_, 6, v_ileanFileName_x3f_2618_);
lean_ctor_set(v_reuseFailAlloc_2636_, 7, v_cFileName_x3f_2619_);
lean_ctor_set(v_reuseFailAlloc_2636_, 8, v_bcFileName_x3f_2620_);
lean_ctor_set(v_reuseFailAlloc_2636_, 9, v_zigFileName_x3f_2621_);
lean_ctor_set(v_reuseFailAlloc_2636_, 10, v_errorOnKinds_2623_);
lean_ctor_set(v_reuseFailAlloc_2636_, 11, v_incrSaveFileName_x3f_2625_);
lean_ctor_set(v_reuseFailAlloc_2636_, 12, v_incrLoadFileName_x3f_2626_);
lean_ctor_set(v_reuseFailAlloc_2636_, 13, v_incrHeaderSaveFileName_x3f_2627_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 8, v_component_2605_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 9, v_printPrefix_2606_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 10, v_printLibDir_2607_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 11, v_useStdin_2608_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 12, v_onlyDeps_2609_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 13, v_onlySrcDeps_2610_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 14, v_depsJson_2611_);
lean_ctor_set_uint32(v_reuseFailAlloc_2636_, sizeof(void*)*14, v_trustLevel_2613_);
lean_ctor_set_uint32(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 4, v_numThreads_2614_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 15, v_jsonOutput_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2636_, sizeof(void*)*14 + 16, v_printStats_2624_);
v___x_2634_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2635_; 
lean_ctor_set_uint8(v___x_2634_, sizeof(void*)*14 + 17, v___x_1371_);
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2634_);
return v___x_2635_;
}
}
}
}
else
{
lean_object* v_leanOpts_2638_; lean_object* v_forwardedArgs_2639_; uint8_t v_component_2640_; uint8_t v_printPrefix_2641_; uint8_t v_printLibDir_2642_; uint8_t v_onlyDeps_2643_; uint8_t v_onlySrcDeps_2644_; uint8_t v_depsJson_2645_; lean_object* v_opts_2646_; uint32_t v_trustLevel_2647_; uint32_t v_numThreads_2648_; lean_object* v_rootDir_x3f_2649_; lean_object* v_setupFileName_x3f_2650_; lean_object* v_oleanFileName_x3f_2651_; lean_object* v_ileanFileName_x3f_2652_; lean_object* v_cFileName_x3f_2653_; lean_object* v_bcFileName_x3f_2654_; lean_object* v_zigFileName_x3f_2655_; uint8_t v_jsonOutput_2656_; lean_object* v_errorOnKinds_2657_; uint8_t v_printStats_2658_; uint8_t v_run_2659_; lean_object* v_incrSaveFileName_x3f_2660_; lean_object* v_incrLoadFileName_x3f_2661_; lean_object* v_incrHeaderSaveFileName_x3f_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2670_; 
lean_dec(v_optArg_x3f_1120_);
v_leanOpts_2638_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2639_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2640_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2641_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2642_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_onlyDeps_2643_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2644_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2645_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2646_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2647_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2648_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2649_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2650_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2651_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2652_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2653_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2654_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2655_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2656_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2657_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2658_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2659_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2660_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2661_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2662_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2664_ = v_opts_1118_;
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2662_);
lean_inc(v_incrLoadFileName_x3f_2661_);
lean_inc(v_incrSaveFileName_x3f_2660_);
lean_inc(v_errorOnKinds_2657_);
lean_inc(v_zigFileName_x3f_2655_);
lean_inc(v_bcFileName_x3f_2654_);
lean_inc(v_cFileName_x3f_2653_);
lean_inc(v_ileanFileName_x3f_2652_);
lean_inc(v_oleanFileName_x3f_2651_);
lean_inc(v_setupFileName_x3f_2650_);
lean_inc(v_rootDir_x3f_2649_);
lean_inc(v_opts_2646_);
lean_inc(v_forwardedArgs_2639_);
lean_inc(v_leanOpts_2638_);
lean_dec(v_opts_1118_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2670_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2669_; 
v_reuseFailAlloc_2669_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2669_, 0, v_leanOpts_2638_);
lean_ctor_set(v_reuseFailAlloc_2669_, 1, v_forwardedArgs_2639_);
lean_ctor_set(v_reuseFailAlloc_2669_, 2, v_opts_2646_);
lean_ctor_set(v_reuseFailAlloc_2669_, 3, v_rootDir_x3f_2649_);
lean_ctor_set(v_reuseFailAlloc_2669_, 4, v_setupFileName_x3f_2650_);
lean_ctor_set(v_reuseFailAlloc_2669_, 5, v_oleanFileName_x3f_2651_);
lean_ctor_set(v_reuseFailAlloc_2669_, 6, v_ileanFileName_x3f_2652_);
lean_ctor_set(v_reuseFailAlloc_2669_, 7, v_cFileName_x3f_2653_);
lean_ctor_set(v_reuseFailAlloc_2669_, 8, v_bcFileName_x3f_2654_);
lean_ctor_set(v_reuseFailAlloc_2669_, 9, v_zigFileName_x3f_2655_);
lean_ctor_set(v_reuseFailAlloc_2669_, 10, v_errorOnKinds_2657_);
lean_ctor_set(v_reuseFailAlloc_2669_, 11, v_incrSaveFileName_x3f_2660_);
lean_ctor_set(v_reuseFailAlloc_2669_, 12, v_incrLoadFileName_x3f_2661_);
lean_ctor_set(v_reuseFailAlloc_2669_, 13, v_incrHeaderSaveFileName_x3f_2662_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 8, v_component_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 9, v_printPrefix_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 10, v_printLibDir_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 12, v_onlyDeps_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 13, v_onlySrcDeps_2644_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 14, v_depsJson_2645_);
lean_ctor_set_uint32(v_reuseFailAlloc_2669_, sizeof(void*)*14, v_trustLevel_2647_);
lean_ctor_set_uint32(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 4, v_numThreads_2648_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 15, v_jsonOutput_2656_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 16, v_printStats_2658_);
lean_ctor_set_uint8(v_reuseFailAlloc_2669_, sizeof(void*)*14 + 17, v_run_2659_);
v___x_2667_ = v_reuseFailAlloc_2669_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
lean_object* v___x_2668_; 
lean_ctor_set_uint8(v___x_2667_, sizeof(void*)*14 + 11, v___x_1369_);
v___x_2668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
return v___x_2668_;
}
}
}
}
else
{
lean_object* v___x_2671_; lean_object* v___x_2672_; 
v___x_2671_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27));
v___x_2672_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2671_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2675_; uint8_t v_isShared_2676_; uint8_t v_isSharedCheck_2735_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2672_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2675_ = v___x_2672_;
v_isShared_2676_ = v_isSharedCheck_2735_;
goto v_resetjp_2674_;
}
else
{
lean_inc(v_a_2673_);
lean_dec(v___x_2672_);
v___x_2675_ = lean_box(0);
v_isShared_2676_ = v_isSharedCheck_2735_;
goto v_resetjp_2674_;
}
v_resetjp_2674_:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = lean_string_utf8_byte_size(v_a_2673_);
lean_inc(v_a_2673_);
v___x_2679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2679_, 0, v_a_2673_);
lean_ctor_set(v___x_2679_, 1, v___x_2677_);
lean_ctor_set(v___x_2679_, 2, v___x_2678_);
v___x_2680_ = l_String_Slice_toNat_x3f(v___x_2679_);
lean_dec_ref_known(v___x_2679_, 3);
if (lean_obj_tag(v___x_2680_) == 1)
{
lean_object* v_val_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; uint8_t v___x_2689_; 
v_val_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_val_2681_);
lean_dec_ref_known(v___x_2680_, 1);
v___x_2682_ = lean_unsigned_to_nat(4u);
v___x_2683_ = lean_unsigned_to_nat(2u);
v___x_2684_ = lean_nat_shiftr(v_val_2681_, v___x_2683_);
lean_dec(v_val_2681_);
v___x_2685_ = lean_nat_mul(v___x_2684_, v___x_2682_);
lean_dec(v___x_2684_);
v___x_2686_ = lean_unsigned_to_nat(1024u);
v___x_2687_ = lean_nat_mul(v___x_2685_, v___x_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28, &l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once, _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28);
v___x_2689_ = lean_nat_dec_lt(v___x_2687_, v___x_2688_);
if (v___x_2689_ == 0)
{
lean_object* v___x_2690_; lean_object* v___x_2691_; 
lean_dec(v___x_2687_);
lean_del_object(v___x_2675_);
lean_dec(v_a_2673_);
lean_dec_ref(v_opts_1118_);
v___x_2690_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29));
v___x_2691_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2690_);
lean_dec_ref(v___x_2691_);
goto v___jp_1310_;
}
else
{
size_t v___x_2692_; lean_object* v___x_2693_; lean_object* v_leanOpts_2694_; lean_object* v_forwardedArgs_2695_; uint8_t v_component_2696_; uint8_t v_printPrefix_2697_; uint8_t v_printLibDir_2698_; uint8_t v_useStdin_2699_; uint8_t v_onlyDeps_2700_; uint8_t v_onlySrcDeps_2701_; uint8_t v_depsJson_2702_; lean_object* v_opts_2703_; uint32_t v_trustLevel_2704_; uint32_t v_numThreads_2705_; lean_object* v_rootDir_x3f_2706_; lean_object* v_setupFileName_x3f_2707_; lean_object* v_oleanFileName_x3f_2708_; lean_object* v_ileanFileName_x3f_2709_; lean_object* v_cFileName_x3f_2710_; lean_object* v_bcFileName_x3f_2711_; lean_object* v_zigFileName_x3f_2712_; uint8_t v_jsonOutput_2713_; lean_object* v_errorOnKinds_2714_; uint8_t v_printStats_2715_; uint8_t v_run_2716_; lean_object* v_incrSaveFileName_x3f_2717_; lean_object* v_incrLoadFileName_x3f_2718_; lean_object* v_incrHeaderSaveFileName_x3f_2719_; lean_object* v___x_2721_; uint8_t v_isShared_2722_; uint8_t v_isSharedCheck_2732_; 
v___x_2692_ = lean_usize_of_nat(v___x_2687_);
lean_dec(v___x_2687_);
v___x_2693_ = lean_internal_set_thread_stack_size(v___x_2692_);
v_leanOpts_2694_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2695_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2696_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2697_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2698_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2699_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2700_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2701_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2702_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2703_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2704_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2705_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2706_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2707_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2708_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2709_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2710_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2711_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2712_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2713_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2714_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2715_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2716_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2717_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2718_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2719_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2732_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2721_ = v_opts_1118_;
v_isShared_2722_ = v_isSharedCheck_2732_;
goto v_resetjp_2720_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2719_);
lean_inc(v_incrLoadFileName_x3f_2718_);
lean_inc(v_incrSaveFileName_x3f_2717_);
lean_inc(v_errorOnKinds_2714_);
lean_inc(v_zigFileName_x3f_2712_);
lean_inc(v_bcFileName_x3f_2711_);
lean_inc(v_cFileName_x3f_2710_);
lean_inc(v_ileanFileName_x3f_2709_);
lean_inc(v_oleanFileName_x3f_2708_);
lean_inc(v_setupFileName_x3f_2707_);
lean_inc(v_rootDir_x3f_2706_);
lean_inc(v_opts_2703_);
lean_inc(v_forwardedArgs_2695_);
lean_inc(v_leanOpts_2694_);
lean_dec(v_opts_1118_);
v___x_2721_ = lean_box(0);
v_isShared_2722_ = v_isSharedCheck_2732_;
goto v_resetjp_2720_;
}
v_resetjp_2720_:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2727_; 
v___x_2723_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30));
v___x_2724_ = lean_string_append(v___x_2723_, v_a_2673_);
lean_dec(v_a_2673_);
v___x_2725_ = lean_array_push(v_forwardedArgs_2695_, v___x_2724_);
if (v_isShared_2722_ == 0)
{
lean_ctor_set(v___x_2721_, 1, v___x_2725_);
v___x_2727_ = v___x_2721_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_leanOpts_2694_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v___x_2725_);
lean_ctor_set(v_reuseFailAlloc_2731_, 2, v_opts_2703_);
lean_ctor_set(v_reuseFailAlloc_2731_, 3, v_rootDir_x3f_2706_);
lean_ctor_set(v_reuseFailAlloc_2731_, 4, v_setupFileName_x3f_2707_);
lean_ctor_set(v_reuseFailAlloc_2731_, 5, v_oleanFileName_x3f_2708_);
lean_ctor_set(v_reuseFailAlloc_2731_, 6, v_ileanFileName_x3f_2709_);
lean_ctor_set(v_reuseFailAlloc_2731_, 7, v_cFileName_x3f_2710_);
lean_ctor_set(v_reuseFailAlloc_2731_, 8, v_bcFileName_x3f_2711_);
lean_ctor_set(v_reuseFailAlloc_2731_, 9, v_zigFileName_x3f_2712_);
lean_ctor_set(v_reuseFailAlloc_2731_, 10, v_errorOnKinds_2714_);
lean_ctor_set(v_reuseFailAlloc_2731_, 11, v_incrSaveFileName_x3f_2717_);
lean_ctor_set(v_reuseFailAlloc_2731_, 12, v_incrLoadFileName_x3f_2718_);
lean_ctor_set(v_reuseFailAlloc_2731_, 13, v_incrHeaderSaveFileName_x3f_2719_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 8, v_component_2696_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 9, v_printPrefix_2697_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 10, v_printLibDir_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 11, v_useStdin_2699_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 12, v_onlyDeps_2700_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 13, v_onlySrcDeps_2701_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 14, v_depsJson_2702_);
lean_ctor_set_uint32(v_reuseFailAlloc_2731_, sizeof(void*)*14, v_trustLevel_2704_);
lean_ctor_set_uint32(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 4, v_numThreads_2705_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 15, v_jsonOutput_2713_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 16, v_printStats_2715_);
lean_ctor_set_uint8(v_reuseFailAlloc_2731_, sizeof(void*)*14 + 17, v_run_2716_);
v___x_2727_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
lean_object* v___x_2729_; 
if (v_isShared_2676_ == 0)
{
lean_ctor_set(v___x_2675_, 0, v___x_2727_);
v___x_2729_ = v___x_2675_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2727_);
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
else
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_dec(v___x_2680_);
lean_del_object(v___x_2675_);
lean_dec(v_a_2673_);
lean_dec_ref(v_opts_1118_);
v___x_2733_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31));
v___x_2734_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2733_);
lean_dec_ref(v___x_2734_);
goto v___jp_1313_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
lean_dec_ref(v_opts_1118_);
v_a_2736_ = lean_ctor_get(v___x_2672_, 0);
lean_inc(v_a_2736_);
lean_dec_ref_known(v___x_2672_, 1);
v___x_2740_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2741_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2740_);
lean_dec_ref(v___x_2741_);
goto v___jp_2737_;
v___jp_2737_:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2738_ = lean_io_error_to_string(v_a_2736_);
v___x_2739_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2738_);
lean_dec_ref(v___x_2739_);
goto v___jp_1319_;
}
}
}
}
else
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32));
v___x_2743_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2742_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2785_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2746_ = v___x_2743_;
v_isShared_2747_ = v_isSharedCheck_2785_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2743_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2785_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v_leanOpts_2748_; lean_object* v_forwardedArgs_2749_; uint8_t v_component_2750_; uint8_t v_printPrefix_2751_; uint8_t v_printLibDir_2752_; uint8_t v_useStdin_2753_; uint8_t v_onlyDeps_2754_; uint8_t v_onlySrcDeps_2755_; uint8_t v_depsJson_2756_; lean_object* v_opts_2757_; uint32_t v_trustLevel_2758_; uint32_t v_numThreads_2759_; lean_object* v_rootDir_x3f_2760_; lean_object* v_setupFileName_x3f_2761_; lean_object* v_oleanFileName_x3f_2762_; lean_object* v_ileanFileName_x3f_2763_; lean_object* v_cFileName_x3f_2764_; lean_object* v_bcFileName_x3f_2765_; uint8_t v_jsonOutput_2766_; lean_object* v_errorOnKinds_2767_; uint8_t v_printStats_2768_; uint8_t v_run_2769_; lean_object* v_incrSaveFileName_x3f_2770_; lean_object* v_incrLoadFileName_x3f_2771_; lean_object* v_incrHeaderSaveFileName_x3f_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2783_; 
v_leanOpts_2748_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2749_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2750_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2751_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2752_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2753_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2754_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2755_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2756_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2757_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2758_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2759_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2760_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2761_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2762_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2763_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2764_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_2765_ = lean_ctor_get(v_opts_1118_, 8);
v_jsonOutput_2766_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2767_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2768_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2769_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2770_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2771_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2772_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2783_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; 
v_unused_2784_ = lean_ctor_get(v_opts_1118_, 9);
lean_dec(v_unused_2784_);
v___x_2774_ = v_opts_1118_;
v_isShared_2775_ = v_isSharedCheck_2783_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2772_);
lean_inc(v_incrLoadFileName_x3f_2771_);
lean_inc(v_incrSaveFileName_x3f_2770_);
lean_inc(v_errorOnKinds_2767_);
lean_inc(v_bcFileName_x3f_2765_);
lean_inc(v_cFileName_x3f_2764_);
lean_inc(v_ileanFileName_x3f_2763_);
lean_inc(v_oleanFileName_x3f_2762_);
lean_inc(v_setupFileName_x3f_2761_);
lean_inc(v_rootDir_x3f_2760_);
lean_inc(v_opts_2757_);
lean_inc(v_forwardedArgs_2749_);
lean_inc(v_leanOpts_2748_);
lean_dec(v_opts_1118_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2783_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2776_; lean_object* v___x_2778_; 
v___x_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2776_, 0, v_a_2744_);
if (v_isShared_2775_ == 0)
{
lean_ctor_set(v___x_2774_, 9, v___x_2776_);
v___x_2778_ = v___x_2774_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_leanOpts_2748_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v_forwardedArgs_2749_);
lean_ctor_set(v_reuseFailAlloc_2782_, 2, v_opts_2757_);
lean_ctor_set(v_reuseFailAlloc_2782_, 3, v_rootDir_x3f_2760_);
lean_ctor_set(v_reuseFailAlloc_2782_, 4, v_setupFileName_x3f_2761_);
lean_ctor_set(v_reuseFailAlloc_2782_, 5, v_oleanFileName_x3f_2762_);
lean_ctor_set(v_reuseFailAlloc_2782_, 6, v_ileanFileName_x3f_2763_);
lean_ctor_set(v_reuseFailAlloc_2782_, 7, v_cFileName_x3f_2764_);
lean_ctor_set(v_reuseFailAlloc_2782_, 8, v_bcFileName_x3f_2765_);
lean_ctor_set(v_reuseFailAlloc_2782_, 9, v___x_2776_);
lean_ctor_set(v_reuseFailAlloc_2782_, 10, v_errorOnKinds_2767_);
lean_ctor_set(v_reuseFailAlloc_2782_, 11, v_incrSaveFileName_x3f_2770_);
lean_ctor_set(v_reuseFailAlloc_2782_, 12, v_incrLoadFileName_x3f_2771_);
lean_ctor_set(v_reuseFailAlloc_2782_, 13, v_incrHeaderSaveFileName_x3f_2772_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 8, v_component_2750_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 9, v_printPrefix_2751_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 10, v_printLibDir_2752_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 11, v_useStdin_2753_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 12, v_onlyDeps_2754_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 13, v_onlySrcDeps_2755_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 14, v_depsJson_2756_);
lean_ctor_set_uint32(v_reuseFailAlloc_2782_, sizeof(void*)*14, v_trustLevel_2758_);
lean_ctor_set_uint32(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 4, v_numThreads_2759_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 15, v_jsonOutput_2766_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 16, v_printStats_2768_);
lean_ctor_set_uint8(v_reuseFailAlloc_2782_, sizeof(void*)*14 + 17, v_run_2769_);
v___x_2778_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
lean_object* v___x_2780_; 
if (v_isShared_2747_ == 0)
{
lean_ctor_set(v___x_2746_, 0, v___x_2778_);
v___x_2780_ = v___x_2746_;
goto v_reusejp_2779_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v___x_2778_);
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
else
{
lean_object* v_a_2786_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
lean_dec_ref(v_opts_1118_);
v_a_2786_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___x_2743_, 1);
v___x_2790_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2791_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2790_);
lean_dec_ref(v___x_2791_);
goto v___jp_2787_;
v___jp_2787_:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = lean_io_error_to_string(v_a_2786_);
v___x_2789_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2788_);
lean_dec_ref(v___x_2789_);
goto v___jp_1155_;
}
}
}
}
else
{
lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2792_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33));
v___x_2793_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2792_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2835_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2796_ = v___x_2793_;
v_isShared_2797_ = v_isSharedCheck_2835_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2835_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v_leanOpts_2798_; lean_object* v_forwardedArgs_2799_; uint8_t v_component_2800_; uint8_t v_printPrefix_2801_; uint8_t v_printLibDir_2802_; uint8_t v_useStdin_2803_; uint8_t v_onlyDeps_2804_; uint8_t v_onlySrcDeps_2805_; uint8_t v_depsJson_2806_; lean_object* v_opts_2807_; uint32_t v_trustLevel_2808_; uint32_t v_numThreads_2809_; lean_object* v_rootDir_x3f_2810_; lean_object* v_setupFileName_x3f_2811_; lean_object* v_oleanFileName_x3f_2812_; lean_object* v_ileanFileName_x3f_2813_; lean_object* v_cFileName_x3f_2814_; lean_object* v_zigFileName_x3f_2815_; uint8_t v_jsonOutput_2816_; lean_object* v_errorOnKinds_2817_; uint8_t v_printStats_2818_; uint8_t v_run_2819_; lean_object* v_incrSaveFileName_x3f_2820_; lean_object* v_incrLoadFileName_x3f_2821_; lean_object* v_incrHeaderSaveFileName_x3f_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2833_; 
v_leanOpts_2798_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2799_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2800_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2801_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2802_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2803_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2804_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2805_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2806_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2807_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2808_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2809_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2810_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2811_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2812_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2813_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_2814_ = lean_ctor_get(v_opts_1118_, 7);
v_zigFileName_x3f_2815_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2816_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2817_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2818_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2819_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2820_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2821_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2822_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2833_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2833_ == 0)
{
lean_object* v_unused_2834_; 
v_unused_2834_ = lean_ctor_get(v_opts_1118_, 8);
lean_dec(v_unused_2834_);
v___x_2824_ = v_opts_1118_;
v_isShared_2825_ = v_isSharedCheck_2833_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2822_);
lean_inc(v_incrLoadFileName_x3f_2821_);
lean_inc(v_incrSaveFileName_x3f_2820_);
lean_inc(v_errorOnKinds_2817_);
lean_inc(v_zigFileName_x3f_2815_);
lean_inc(v_cFileName_x3f_2814_);
lean_inc(v_ileanFileName_x3f_2813_);
lean_inc(v_oleanFileName_x3f_2812_);
lean_inc(v_setupFileName_x3f_2811_);
lean_inc(v_rootDir_x3f_2810_);
lean_inc(v_opts_2807_);
lean_inc(v_forwardedArgs_2799_);
lean_inc(v_leanOpts_2798_);
lean_dec(v_opts_1118_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2833_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2826_, 0, v_a_2794_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 8, v___x_2826_);
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_leanOpts_2798_);
lean_ctor_set(v_reuseFailAlloc_2832_, 1, v_forwardedArgs_2799_);
lean_ctor_set(v_reuseFailAlloc_2832_, 2, v_opts_2807_);
lean_ctor_set(v_reuseFailAlloc_2832_, 3, v_rootDir_x3f_2810_);
lean_ctor_set(v_reuseFailAlloc_2832_, 4, v_setupFileName_x3f_2811_);
lean_ctor_set(v_reuseFailAlloc_2832_, 5, v_oleanFileName_x3f_2812_);
lean_ctor_set(v_reuseFailAlloc_2832_, 6, v_ileanFileName_x3f_2813_);
lean_ctor_set(v_reuseFailAlloc_2832_, 7, v_cFileName_x3f_2814_);
lean_ctor_set(v_reuseFailAlloc_2832_, 8, v___x_2826_);
lean_ctor_set(v_reuseFailAlloc_2832_, 9, v_zigFileName_x3f_2815_);
lean_ctor_set(v_reuseFailAlloc_2832_, 10, v_errorOnKinds_2817_);
lean_ctor_set(v_reuseFailAlloc_2832_, 11, v_incrSaveFileName_x3f_2820_);
lean_ctor_set(v_reuseFailAlloc_2832_, 12, v_incrLoadFileName_x3f_2821_);
lean_ctor_set(v_reuseFailAlloc_2832_, 13, v_incrHeaderSaveFileName_x3f_2822_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 8, v_component_2800_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 9, v_printPrefix_2801_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 10, v_printLibDir_2802_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 11, v_useStdin_2803_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 12, v_onlyDeps_2804_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 13, v_onlySrcDeps_2805_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 14, v_depsJson_2806_);
lean_ctor_set_uint32(v_reuseFailAlloc_2832_, sizeof(void*)*14, v_trustLevel_2808_);
lean_ctor_set_uint32(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 4, v_numThreads_2809_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 15, v_jsonOutput_2816_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 16, v_printStats_2818_);
lean_ctor_set_uint8(v_reuseFailAlloc_2832_, sizeof(void*)*14 + 17, v_run_2819_);
v___x_2828_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
lean_object* v___x_2830_; 
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v___x_2828_);
v___x_2830_ = v___x_2796_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2828_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
lean_dec_ref(v_opts_1118_);
v_a_2836_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2836_);
lean_dec_ref_known(v___x_2793_, 1);
v___x_2840_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2841_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2840_);
lean_dec_ref(v___x_2841_);
goto v___jp_2837_;
v___jp_2837_:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_io_error_to_string(v_a_2836_);
v___x_2839_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2838_);
lean_dec_ref(v___x_2839_);
goto v___jp_1325_;
}
}
}
}
else
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34));
v___x_2843_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2842_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2885_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2846_ = v___x_2843_;
v_isShared_2847_ = v_isSharedCheck_2885_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2843_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2885_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v_leanOpts_2848_; lean_object* v_forwardedArgs_2849_; uint8_t v_component_2850_; uint8_t v_printPrefix_2851_; uint8_t v_printLibDir_2852_; uint8_t v_useStdin_2853_; uint8_t v_onlyDeps_2854_; uint8_t v_onlySrcDeps_2855_; uint8_t v_depsJson_2856_; lean_object* v_opts_2857_; uint32_t v_trustLevel_2858_; uint32_t v_numThreads_2859_; lean_object* v_rootDir_x3f_2860_; lean_object* v_setupFileName_x3f_2861_; lean_object* v_oleanFileName_x3f_2862_; lean_object* v_ileanFileName_x3f_2863_; lean_object* v_bcFileName_x3f_2864_; lean_object* v_zigFileName_x3f_2865_; uint8_t v_jsonOutput_2866_; lean_object* v_errorOnKinds_2867_; uint8_t v_printStats_2868_; uint8_t v_run_2869_; lean_object* v_incrSaveFileName_x3f_2870_; lean_object* v_incrLoadFileName_x3f_2871_; lean_object* v_incrHeaderSaveFileName_x3f_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2883_; 
v_leanOpts_2848_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2849_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2850_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2851_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2852_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2853_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2854_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2855_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2856_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_2857_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_2858_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_numThreads_2859_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2860_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_2861_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_2862_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_2863_ = lean_ctor_get(v_opts_1118_, 6);
v_bcFileName_x3f_2864_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_2865_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_2866_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_2867_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_2868_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_2869_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2870_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_2871_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_2872_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_2883_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_2883_ == 0)
{
lean_object* v_unused_2884_; 
v_unused_2884_ = lean_ctor_get(v_opts_1118_, 7);
lean_dec(v_unused_2884_);
v___x_2874_ = v_opts_1118_;
v_isShared_2875_ = v_isSharedCheck_2883_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2872_);
lean_inc(v_incrLoadFileName_x3f_2871_);
lean_inc(v_incrSaveFileName_x3f_2870_);
lean_inc(v_errorOnKinds_2867_);
lean_inc(v_zigFileName_x3f_2865_);
lean_inc(v_bcFileName_x3f_2864_);
lean_inc(v_ileanFileName_x3f_2863_);
lean_inc(v_oleanFileName_x3f_2862_);
lean_inc(v_setupFileName_x3f_2861_);
lean_inc(v_rootDir_x3f_2860_);
lean_inc(v_opts_2857_);
lean_inc(v_forwardedArgs_2849_);
lean_inc(v_leanOpts_2848_);
lean_dec(v_opts_1118_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2883_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v___x_2876_; lean_object* v___x_2878_; 
v___x_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2876_, 0, v_a_2844_);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 7, v___x_2876_);
v___x_2878_ = v___x_2874_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_leanOpts_2848_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v_forwardedArgs_2849_);
lean_ctor_set(v_reuseFailAlloc_2882_, 2, v_opts_2857_);
lean_ctor_set(v_reuseFailAlloc_2882_, 3, v_rootDir_x3f_2860_);
lean_ctor_set(v_reuseFailAlloc_2882_, 4, v_setupFileName_x3f_2861_);
lean_ctor_set(v_reuseFailAlloc_2882_, 5, v_oleanFileName_x3f_2862_);
lean_ctor_set(v_reuseFailAlloc_2882_, 6, v_ileanFileName_x3f_2863_);
lean_ctor_set(v_reuseFailAlloc_2882_, 7, v___x_2876_);
lean_ctor_set(v_reuseFailAlloc_2882_, 8, v_bcFileName_x3f_2864_);
lean_ctor_set(v_reuseFailAlloc_2882_, 9, v_zigFileName_x3f_2865_);
lean_ctor_set(v_reuseFailAlloc_2882_, 10, v_errorOnKinds_2867_);
lean_ctor_set(v_reuseFailAlloc_2882_, 11, v_incrSaveFileName_x3f_2870_);
lean_ctor_set(v_reuseFailAlloc_2882_, 12, v_incrLoadFileName_x3f_2871_);
lean_ctor_set(v_reuseFailAlloc_2882_, 13, v_incrHeaderSaveFileName_x3f_2872_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 8, v_component_2850_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 9, v_printPrefix_2851_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 10, v_printLibDir_2852_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 11, v_useStdin_2853_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 12, v_onlyDeps_2854_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 13, v_onlySrcDeps_2855_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 14, v_depsJson_2856_);
lean_ctor_set_uint32(v_reuseFailAlloc_2882_, sizeof(void*)*14, v_trustLevel_2858_);
lean_ctor_set_uint32(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 4, v_numThreads_2859_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 15, v_jsonOutput_2866_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 16, v_printStats_2868_);
lean_ctor_set_uint8(v_reuseFailAlloc_2882_, sizeof(void*)*14 + 17, v_run_2869_);
v___x_2878_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
lean_object* v___x_2880_; 
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v___x_2878_);
v___x_2880_ = v___x_2846_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v___x_2878_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
lean_dec_ref(v_opts_1118_);
v_a_2886_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2886_);
lean_dec_ref_known(v___x_2843_, 1);
v___x_2890_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2891_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2890_);
lean_dec_ref(v___x_2891_);
goto v___jp_2887_;
v___jp_2887_:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2888_ = lean_io_error_to_string(v_a_2886_);
v___x_2889_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2888_);
lean_dec_ref(v___x_2889_);
goto v___jp_1149_;
}
}
}
}
else
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
v___x_2892_ = l___private_Lean_Shell_0__Lean_featuresString;
v___x_2893_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2892_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2901_; 
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_2901_ == 0)
{
lean_object* v_unused_2902_; 
v_unused_2902_ = lean_ctor_get(v___x_2893_, 0);
lean_dec(v_unused_2902_);
v___x_2895_ = v___x_2893_;
v_isShared_2896_ = v_isSharedCheck_2901_;
goto v_resetjp_2894_;
}
else
{
lean_dec(v___x_2893_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2901_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2897_; lean_object* v___x_2899_; 
v___x_2897_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2896_ == 0)
{
lean_ctor_set_tag(v___x_2895_, 1);
lean_ctor_set(v___x_2895_, 0, v___x_2897_);
v___x_2899_ = v___x_2895_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2897_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
else
{
lean_object* v_a_2903_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v_a_2903_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_a_2903_);
lean_dec_ref_known(v___x_2893_, 1);
v___x_2907_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2908_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2907_);
lean_dec_ref(v___x_2908_);
goto v___jp_2904_;
v___jp_2904_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = lean_io_error_to_string(v_a_2903_);
v___x_2906_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2905_);
lean_dec_ref(v___x_2906_);
goto v___jp_1331_;
}
}
}
}
else
{
lean_object* v___x_2909_; 
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
v___x_2909_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1355_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2917_; 
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2917_ == 0)
{
lean_object* v_unused_2918_; 
v_unused_2918_ = lean_ctor_get(v___x_2909_, 0);
lean_dec(v_unused_2918_);
v___x_2911_ = v___x_2909_;
v_isShared_2912_ = v_isSharedCheck_2917_;
goto v_resetjp_2910_;
}
else
{
lean_dec(v___x_2909_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2917_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2913_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2912_ == 0)
{
lean_ctor_set_tag(v___x_2911_, 1);
lean_ctor_set(v___x_2911_, 0, v___x_2913_);
v___x_2915_ = v___x_2911_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v___x_2913_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
}
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v_a_2919_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2909_, 1);
v___x_2923_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2924_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2923_);
lean_dec_ref(v___x_2924_);
goto v___jp_2920_;
v___jp_2920_:
{
lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2921_ = lean_io_error_to_string(v_a_2919_);
v___x_2922_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2921_);
lean_dec_ref(v___x_2922_);
goto v___jp_1143_;
}
}
}
}
else
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
v___x_2925_ = l_Lean_githash;
v___x_2926_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2925_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2934_; 
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2934_ == 0)
{
lean_object* v_unused_2935_; 
v_unused_2935_ = lean_ctor_get(v___x_2926_, 0);
lean_dec(v_unused_2935_);
v___x_2928_ = v___x_2926_;
v_isShared_2929_ = v_isSharedCheck_2934_;
goto v_resetjp_2927_;
}
else
{
lean_dec(v___x_2926_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2934_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2930_; lean_object* v___x_2932_; 
v___x_2930_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2929_ == 0)
{
lean_ctor_set_tag(v___x_2928_, 1);
lean_ctor_set(v___x_2928_, 0, v___x_2930_);
v___x_2932_ = v___x_2928_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v___x_2930_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v_a_2936_ = lean_ctor_get(v___x_2926_, 0);
lean_inc(v_a_2936_);
lean_dec_ref_known(v___x_2926_, 1);
v___x_2940_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2941_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2940_);
lean_dec_ref(v___x_2941_);
goto v___jp_2937_;
v___jp_2937_:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_io_error_to_string(v_a_2936_);
v___x_2939_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2938_);
lean_dec_ref(v___x_2939_);
goto v___jp_1337_;
}
}
}
}
else
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
v___x_2942_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_2943_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2942_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2951_; 
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2943_);
if (v_isSharedCheck_2951_ == 0)
{
lean_object* v_unused_2952_; 
v_unused_2952_ = lean_ctor_get(v___x_2943_, 0);
lean_dec(v_unused_2952_);
v___x_2945_ = v___x_2943_;
v_isShared_2946_ = v_isSharedCheck_2951_;
goto v_resetjp_2944_;
}
else
{
lean_dec(v___x_2943_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2951_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; lean_object* v___x_2949_; 
v___x_2947_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2946_ == 0)
{
lean_ctor_set_tag(v___x_2945_, 1);
lean_ctor_set(v___x_2945_, 0, v___x_2947_);
v___x_2949_ = v___x_2945_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v_a_2953_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_a_2953_);
lean_dec_ref_known(v___x_2943_, 1);
v___x_2957_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2958_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2957_);
lean_dec_ref(v___x_2958_);
goto v___jp_2954_;
v___jp_2954_:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2955_ = lean_io_error_to_string(v_a_2953_);
v___x_2956_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2955_);
lean_dec_ref(v___x_2956_);
goto v___jp_1137_;
}
}
}
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2960_; 
lean_dec(v_optArg_x3f_1120_);
lean_dec_ref(v_opts_1118_);
v___x_2959_ = l___private_Lean_Shell_0__Lean_versionHeader;
v___x_2960_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2959_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2968_; 
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2960_);
if (v_isSharedCheck_2968_ == 0)
{
lean_object* v_unused_2969_; 
v_unused_2969_ = lean_ctor_get(v___x_2960_, 0);
lean_dec(v_unused_2969_);
v___x_2962_ = v___x_2960_;
v_isShared_2963_ = v_isSharedCheck_2968_;
goto v_resetjp_2961_;
}
else
{
lean_dec(v___x_2960_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2968_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2964_; lean_object* v___x_2966_; 
v___x_2964_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2963_ == 0)
{
lean_ctor_set_tag(v___x_2962_, 1);
lean_ctor_set(v___x_2962_, 0, v___x_2964_);
v___x_2966_ = v___x_2962_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v___x_2964_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
else
{
lean_object* v_a_2970_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v_a_2970_ = lean_ctor_get(v___x_2960_, 0);
lean_inc(v_a_2970_);
lean_dec_ref_known(v___x_2960_, 1);
v___x_2974_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2975_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2974_);
lean_dec_ref(v___x_2975_);
goto v___jp_2971_;
v___jp_2971_:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2972_ = lean_io_error_to_string(v_a_2970_);
v___x_2973_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2972_);
lean_dec_ref(v___x_2973_);
goto v___jp_1343_;
}
}
}
}
else
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2976_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35));
v___x_2977_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2976_, v_optArg_x3f_1120_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_3032_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_2980_ = v___x_2977_;
v_isShared_2981_ = v_isSharedCheck_3032_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2977_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_3032_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2982_ = lean_unsigned_to_nat(0u);
v___x_2983_ = lean_string_utf8_byte_size(v_a_2978_);
lean_inc(v_a_2978_);
v___x_2984_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2984_, 0, v_a_2978_);
lean_ctor_set(v___x_2984_, 1, v___x_2982_);
lean_ctor_set(v___x_2984_, 2, v___x_2983_);
v___x_2985_ = l_String_Slice_toNat_x3f(v___x_2984_);
lean_dec_ref_known(v___x_2984_, 3);
if (lean_obj_tag(v___x_2985_) == 1)
{
lean_object* v_val_2986_; lean_object* v___x_2987_; uint8_t v___x_2988_; 
v_val_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_val_2986_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2987_ = lean_cstr_to_nat("4294967296");
v___x_2988_ = lean_nat_dec_lt(v_val_2986_, v___x_2987_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
lean_dec(v_val_2986_);
lean_del_object(v___x_2980_);
lean_dec(v_a_2978_);
lean_dec_ref(v_opts_1118_);
v___x_2989_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36));
v___x_2990_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2989_);
lean_dec_ref(v___x_2990_);
goto v___jp_1131_;
}
else
{
lean_object* v_leanOpts_2991_; lean_object* v_forwardedArgs_2992_; uint8_t v_component_2993_; uint8_t v_printPrefix_2994_; uint8_t v_printLibDir_2995_; uint8_t v_useStdin_2996_; uint8_t v_onlyDeps_2997_; uint8_t v_onlySrcDeps_2998_; uint8_t v_depsJson_2999_; lean_object* v_opts_3000_; uint32_t v_trustLevel_3001_; lean_object* v_rootDir_x3f_3002_; lean_object* v_setupFileName_x3f_3003_; lean_object* v_oleanFileName_x3f_3004_; lean_object* v_ileanFileName_x3f_3005_; lean_object* v_cFileName_x3f_3006_; lean_object* v_bcFileName_x3f_3007_; lean_object* v_zigFileName_x3f_3008_; uint8_t v_jsonOutput_3009_; lean_object* v_errorOnKinds_3010_; uint8_t v_printStats_3011_; uint8_t v_run_3012_; lean_object* v_incrSaveFileName_x3f_3013_; lean_object* v_incrLoadFileName_x3f_3014_; lean_object* v_incrHeaderSaveFileName_x3f_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3029_; 
v_leanOpts_2991_ = lean_ctor_get(v_opts_1118_, 0);
v_forwardedArgs_2992_ = lean_ctor_get(v_opts_1118_, 1);
v_component_2993_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 8);
v_printPrefix_2994_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 9);
v_printLibDir_2995_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 10);
v_useStdin_2996_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 11);
v_onlyDeps_2997_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2998_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 13);
v_depsJson_2999_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 14);
v_opts_3000_ = lean_ctor_get(v_opts_1118_, 2);
v_trustLevel_3001_ = lean_ctor_get_uint32(v_opts_1118_, sizeof(void*)*14);
v_rootDir_x3f_3002_ = lean_ctor_get(v_opts_1118_, 3);
v_setupFileName_x3f_3003_ = lean_ctor_get(v_opts_1118_, 4);
v_oleanFileName_x3f_3004_ = lean_ctor_get(v_opts_1118_, 5);
v_ileanFileName_x3f_3005_ = lean_ctor_get(v_opts_1118_, 6);
v_cFileName_x3f_3006_ = lean_ctor_get(v_opts_1118_, 7);
v_bcFileName_x3f_3007_ = lean_ctor_get(v_opts_1118_, 8);
v_zigFileName_x3f_3008_ = lean_ctor_get(v_opts_1118_, 9);
v_jsonOutput_3009_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 15);
v_errorOnKinds_3010_ = lean_ctor_get(v_opts_1118_, 10);
v_printStats_3011_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 16);
v_run_3012_ = lean_ctor_get_uint8(v_opts_1118_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3013_ = lean_ctor_get(v_opts_1118_, 11);
v_incrLoadFileName_x3f_3014_ = lean_ctor_get(v_opts_1118_, 12);
v_incrHeaderSaveFileName_x3f_3015_ = lean_ctor_get(v_opts_1118_, 13);
v_isSharedCheck_3029_ = !lean_is_exclusive(v_opts_1118_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3017_ = v_opts_1118_;
v_isShared_3018_ = v_isSharedCheck_3029_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3015_);
lean_inc(v_incrLoadFileName_x3f_3014_);
lean_inc(v_incrSaveFileName_x3f_3013_);
lean_inc(v_errorOnKinds_3010_);
lean_inc(v_zigFileName_x3f_3008_);
lean_inc(v_bcFileName_x3f_3007_);
lean_inc(v_cFileName_x3f_3006_);
lean_inc(v_ileanFileName_x3f_3005_);
lean_inc(v_oleanFileName_x3f_3004_);
lean_inc(v_setupFileName_x3f_3003_);
lean_inc(v_rootDir_x3f_3002_);
lean_inc(v_opts_3000_);
lean_inc(v_forwardedArgs_2992_);
lean_inc(v_leanOpts_2991_);
lean_dec(v_opts_1118_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3029_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
uint32_t v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3024_; 
v___x_3019_ = lean_uint32_of_nat(v_val_2986_);
lean_dec(v_val_2986_);
v___x_3020_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37));
v___x_3021_ = lean_string_append(v___x_3020_, v_a_2978_);
lean_dec(v_a_2978_);
v___x_3022_ = lean_array_push(v_forwardedArgs_2992_, v___x_3021_);
if (v_isShared_3018_ == 0)
{
lean_ctor_set(v___x_3017_, 1, v___x_3022_);
v___x_3024_ = v___x_3017_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_leanOpts_2991_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v___x_3022_);
lean_ctor_set(v_reuseFailAlloc_3028_, 2, v_opts_3000_);
lean_ctor_set(v_reuseFailAlloc_3028_, 3, v_rootDir_x3f_3002_);
lean_ctor_set(v_reuseFailAlloc_3028_, 4, v_setupFileName_x3f_3003_);
lean_ctor_set(v_reuseFailAlloc_3028_, 5, v_oleanFileName_x3f_3004_);
lean_ctor_set(v_reuseFailAlloc_3028_, 6, v_ileanFileName_x3f_3005_);
lean_ctor_set(v_reuseFailAlloc_3028_, 7, v_cFileName_x3f_3006_);
lean_ctor_set(v_reuseFailAlloc_3028_, 8, v_bcFileName_x3f_3007_);
lean_ctor_set(v_reuseFailAlloc_3028_, 9, v_zigFileName_x3f_3008_);
lean_ctor_set(v_reuseFailAlloc_3028_, 10, v_errorOnKinds_3010_);
lean_ctor_set(v_reuseFailAlloc_3028_, 11, v_incrSaveFileName_x3f_3013_);
lean_ctor_set(v_reuseFailAlloc_3028_, 12, v_incrLoadFileName_x3f_3014_);
lean_ctor_set(v_reuseFailAlloc_3028_, 13, v_incrHeaderSaveFileName_x3f_3015_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 8, v_component_2993_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 9, v_printPrefix_2994_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 10, v_printLibDir_2995_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 11, v_useStdin_2996_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 12, v_onlyDeps_2997_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 13, v_onlySrcDeps_2998_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 14, v_depsJson_2999_);
lean_ctor_set_uint32(v_reuseFailAlloc_3028_, sizeof(void*)*14, v_trustLevel_3001_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 15, v_jsonOutput_3009_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 16, v_printStats_3011_);
lean_ctor_set_uint8(v_reuseFailAlloc_3028_, sizeof(void*)*14 + 17, v_run_3012_);
v___x_3024_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3026_; 
lean_ctor_set_uint32(v___x_3024_, sizeof(void*)*14 + 4, v___x_3019_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 0, v___x_3024_);
v___x_3026_ = v___x_2980_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3024_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
else
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
lean_dec(v___x_2985_);
lean_del_object(v___x_2980_);
lean_dec(v_a_2978_);
lean_dec_ref(v_opts_1118_);
v___x_3030_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38));
v___x_3031_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3030_);
lean_dec_ref(v___x_3031_);
goto v___jp_1128_;
}
}
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
lean_dec_ref(v_opts_1118_);
v_a_3033_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___x_2977_, 1);
v___x_3037_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3038_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3037_);
lean_dec_ref(v___x_3038_);
goto v___jp_3034_;
v___jp_3034_:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = lean_io_error_to_string(v_a_3033_);
v___x_3036_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3035_);
lean_dec_ref(v___x_3036_);
goto v___jp_1125_;
}
}
}
}
else
{
lean_object* v___x_3039_; lean_object* v___x_3040_; 
lean_dec(v_optArg_x3f_1120_);
v___x_3039_ = lean_internal_set_exit_on_panic(v___x_1347_);
v___x_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_opts_1118_);
return v___x_3040_;
}
v___jp_1122_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
return v___x_1124_;
}
v___jp_1125_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1127_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1126_);
lean_dec_ref(v___x_1127_);
goto v___jp_1122_;
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
v___x_1135_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
v___jp_1137_:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1139_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1138_);
lean_dec_ref(v___x_1139_);
goto v___jp_1134_;
}
v___jp_1140_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
v___jp_1143_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1145_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1144_);
lean_dec_ref(v___x_1145_);
goto v___jp_1140_;
}
v___jp_1146_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
return v___x_1148_;
}
v___jp_1149_:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1150_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1151_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1150_);
lean_dec_ref(v___x_1151_);
goto v___jp_1146_;
}
v___jp_1152_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
return v___x_1154_;
}
v___jp_1155_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1156_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1157_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1156_);
lean_dec_ref(v___x_1157_);
goto v___jp_1152_;
}
v___jp_1158_:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
return v___x_1160_;
}
v___jp_1161_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1163_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1162_);
lean_dec_ref(v___x_1163_);
goto v___jp_1158_;
}
v___jp_1164_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; 
v___x_1165_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
return v___x_1166_;
}
v___jp_1167_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1169_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1168_);
lean_dec_ref(v___x_1169_);
goto v___jp_1164_;
}
v___jp_1170_:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; 
v___x_1171_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1171_);
return v___x_1172_;
}
v___jp_1173_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1174_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1175_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1174_);
lean_dec_ref(v___x_1175_);
goto v___jp_1170_;
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
v___x_1180_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
return v___x_1181_;
}
v___jp_1182_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1184_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1183_);
lean_dec_ref(v___x_1184_);
goto v___jp_1179_;
}
v___jp_1185_:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
return v___x_1187_;
}
v___jp_1188_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1189_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1190_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1189_);
lean_dec_ref(v___x_1190_);
goto v___jp_1185_;
}
v___jp_1191_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
return v___x_1193_;
}
v___jp_1194_:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1196_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1195_);
lean_dec_ref(v___x_1196_);
goto v___jp_1191_;
}
v___jp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1199_ = lean_io_error_to_string(v___y_1198_);
v___x_1200_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1199_);
lean_dec_ref(v___x_1200_);
goto v___jp_1194_;
}
v___jp_1201_:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
return v___x_1203_;
}
v___jp_1204_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1206_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1205_);
lean_dec_ref(v___x_1206_);
goto v___jp_1201_;
}
v___jp_1207_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
return v___x_1209_;
}
v___jp_1210_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1212_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1211_);
lean_dec_ref(v___x_1212_);
goto v___jp_1207_;
}
v___jp_1213_:
{
lean_object* v___x_1214_; lean_object* v___x_1215_; 
v___x_1214_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
return v___x_1215_;
}
v___jp_1216_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1218_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1217_);
lean_dec_ref(v___x_1218_);
goto v___jp_1213_;
}
v___jp_1219_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
return v___x_1221_;
}
v___jp_1222_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1224_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1223_);
lean_dec_ref(v___x_1224_);
goto v___jp_1219_;
}
v___jp_1225_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_io_error_to_string(v___y_1226_);
v___x_1228_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1227_);
lean_dec_ref(v___x_1228_);
goto v___jp_1222_;
}
v___jp_1229_:
{
uint8_t v___x_1230_; lean_object* v___x_1231_; 
v___x_1230_ = 1;
v___x_1231_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1230_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1239_; 
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1239_ == 0)
{
lean_object* v_unused_1240_; 
v_unused_1240_ = lean_ctor_get(v___x_1231_, 0);
lean_dec(v_unused_1240_);
v___x_1233_ = v___x_1231_;
v_isShared_1234_ = v_isSharedCheck_1239_;
goto v_resetjp_1232_;
}
else
{
lean_dec(v___x_1231_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1239_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_1234_ == 0)
{
lean_ctor_set_tag(v___x_1233_, 1);
lean_ctor_set(v___x_1233_, 0, v___x_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v___x_1235_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v_a_1241_ = lean_ctor_get(v___x_1231_, 0);
lean_inc(v_a_1241_);
lean_dec_ref_known(v___x_1231_, 1);
v___x_1242_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1243_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1242_);
lean_dec_ref(v___x_1243_);
v___y_1226_ = v_a_1241_;
goto v___jp_1225_;
}
}
v___jp_1244_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0));
v___x_1246_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1245_);
lean_dec_ref(v___x_1246_);
goto v___jp_1229_;
}
v___jp_1247_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
return v___x_1249_;
}
v___jp_1250_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1252_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1251_);
lean_dec_ref(v___x_1252_);
goto v___jp_1247_;
}
v___jp_1253_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
return v___x_1255_;
}
v___jp_1256_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1258_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1257_);
lean_dec_ref(v___x_1258_);
goto v___jp_1253_;
}
v___jp_1259_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
return v___x_1261_;
}
v___jp_1262_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1264_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1263_);
lean_dec_ref(v___x_1264_);
goto v___jp_1259_;
}
v___jp_1265_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
return v___x_1267_;
}
v___jp_1268_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1270_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1269_);
lean_dec_ref(v___x_1270_);
goto v___jp_1265_;
}
v___jp_1271_:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
return v___x_1273_;
}
v___jp_1274_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1276_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1275_);
lean_dec_ref(v___x_1276_);
goto v___jp_1271_;
}
v___jp_1277_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
v___jp_1280_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1282_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1281_);
lean_dec_ref(v___x_1282_);
goto v___jp_1277_;
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
v___x_1290_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
v___jp_1292_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1294_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1293_);
lean_dec_ref(v___x_1294_);
goto v___jp_1289_;
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
v___x_1299_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
return v___x_1300_;
}
v___jp_1301_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1303_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1302_);
lean_dec_ref(v___x_1303_);
goto v___jp_1298_;
}
v___jp_1304_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
return v___x_1306_;
}
v___jp_1307_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1309_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1308_);
lean_dec_ref(v___x_1309_);
goto v___jp_1304_;
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
v___x_1317_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
v___jp_1319_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1321_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1320_);
lean_dec_ref(v___x_1321_);
goto v___jp_1316_;
}
v___jp_1322_:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
return v___x_1324_;
}
v___jp_1325_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1327_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1326_);
lean_dec_ref(v___x_1327_);
goto v___jp_1322_;
}
v___jp_1328_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1329_);
return v___x_1330_;
}
v___jp_1331_:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1333_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1332_);
lean_dec_ref(v___x_1333_);
goto v___jp_1328_;
}
v___jp_1334_:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
v___jp_1337_:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1339_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1338_);
lean_dec_ref(v___x_1339_);
goto v___jp_1334_;
}
v___jp_1340_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
return v___x_1342_;
}
v___jp_1343_:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1345_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1344_);
lean_dec_ref(v___x_1345_);
goto v___jp_1340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object* v_opts_3041_, lean_object* v_opt_3042_, lean_object* v_optArg_x3f_3043_, lean_object* v_a_3044_){
_start:
{
uint32_t v_opt_boxed_3045_; lean_object* v_res_3046_; 
v_opt_boxed_3045_ = lean_unbox_uint32(v_opt_3042_);
lean_dec(v_opt_3042_);
v_res_3046_ = lean_shell_options_process(v_opts_3041_, v_opt_boxed_3045_, v_optArg_x3f_3043_);
return v_res_3046_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3049_ = lean_string_utf8_byte_size(v___x_3048_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(lean_object* v_s_3050_){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; uint8_t v___x_3054_; 
v___x_3051_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3052_ = lean_string_utf8_byte_size(v_s_3050_);
v___x_3053_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1);
v___x_3054_ = lean_nat_dec_le(v___x_3053_, v___x_3052_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; 
lean_dec_ref(v_s_3050_);
v___x_3055_ = lean_box(0);
return v___x_3055_;
}
else
{
lean_object* v___x_3056_; uint8_t v___x_3057_; 
v___x_3056_ = lean_unsigned_to_nat(0u);
v___x_3057_ = lean_string_memcmp(v_s_3050_, v___x_3051_, v___x_3056_, v___x_3056_, v___x_3053_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; 
lean_dec_ref(v_s_3050_);
v___x_3058_ = lean_box(0);
return v___x_3058_;
}
else
{
lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; 
lean_inc_ref(v_s_3050_);
v___x_3059_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3059_, 0, v_s_3050_);
lean_ctor_set(v___x_3059_, 1, v___x_3056_);
lean_ctor_set(v___x_3059_, 2, v___x_3052_);
v___x_3060_ = l_String_Slice_pos_x21(v___x_3059_, v___x_3053_);
lean_dec_ref_known(v___x_3059_, 3);
v___x_3061_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3061_, 0, v_s_3050_);
lean_ctor_set(v___x_3061_, 1, v___x_3060_);
lean_ctor_set(v___x_3061_, 2, v___x_3052_);
v___x_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
return v___x_3062_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* v_s_3063_, lean_object* v_pat_3064_){
_start:
{
lean_object* v___x_3065_; 
v___x_3065_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v_s_3063_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* v_s_3066_, lean_object* v_pat_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v_s_3066_, v_pat_3067_);
lean_dec_ref(v_pat_3067_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* v_mainModuleName_3069_, lean_object* v_val_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = l___private_Lean_Shell_0__Lean_emitZig(v_mainModuleName_3069_, v_val_3070_);
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v_a_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v_a_3074_ = lean_ctor_get(v___x_3073_, 0);
lean_inc(v_a_3074_);
lean_dec_ref_known(v___x_3073_, 1);
v___x_3075_ = lean_string_to_utf8(v_a_3074_);
lean_dec(v_a_3074_);
v___x_3076_ = lean_io_prim_handle_write(v_a_3071_, v___x_3075_);
lean_dec_ref(v___x_3075_);
return v___x_3076_;
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
v_a_3077_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3073_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3073_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* v_mainModuleName_3085_, lean_object* v_val_3086_, lean_object* v_a_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v_res_3089_; 
v_res_3089_ = l___private_Lean_Shell_0__Lean_shellMain___lam__0(v_mainModuleName_3085_, v_val_3086_, v_a_3087_);
lean_dec(v_a_3087_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object* v___x_3090_, lean_object* v___x_3091_, lean_object* v_mainModuleName_3092_, lean_object* v_a_3093_, uint8_t v___x_3094_, lean_object* v___x_3095_, lean_object* v_fileName_3096_, lean_object* v___x_3097_, lean_object* v___x_3098_, lean_object* v___x_3099_, lean_object* v___x_3100_, lean_object* v___x_3101_, lean_object* v___x_3102_, lean_object* v___x_3103_, lean_object* v___x_3104_, uint8_t v_run_3105_){
_start:
{
lean_object* v_a_3108_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v_env_3116_; lean_object* v___x_3117_; uint8_t v___x_3118_; lean_object* v_fileName_3120_; lean_object* v_fileMap_3121_; lean_object* v_currRecDepth_3122_; lean_object* v_ref_3123_; lean_object* v_currNamespace_3124_; lean_object* v_openDecls_3125_; lean_object* v_initHeartbeats_3126_; lean_object* v_maxHeartbeats_3127_; lean_object* v_quotContext_3128_; lean_object* v_currMacroScope_3129_; lean_object* v_cancelTk_x3f_3130_; uint8_t v_suppressElabErrors_3131_; lean_object* v_inheritedTraceOptions_3132_; lean_object* v___y_3133_; uint8_t v___y_3165_; uint8_t v___x_3185_; 
v___x_3111_ = lean_io_get_num_heartbeats();
v___x_3112_ = lean_st_mk_ref(v___x_3090_);
v___x_3113_ = l_Lean_inheritedTraceOptions;
v___x_3114_ = lean_st_ref_get(v___x_3113_);
v___x_3115_ = lean_st_ref_get(v___x_3112_);
v_env_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc_ref(v_env_3116_);
lean_dec(v___x_3115_);
v___x_3117_ = l_Lean_diagnostics;
v___x_3118_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v___x_3091_, v___x_3117_);
v___x_3185_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3116_);
lean_dec_ref(v_env_3116_);
if (v___x_3185_ == 0)
{
if (v___x_3118_ == 0)
{
lean_dec_ref(v___x_3095_);
lean_inc(v___x_3112_);
lean_inc(v___x_3100_);
v_fileName_3120_ = v_fileName_3096_;
v_fileMap_3121_ = v___x_3097_;
v_currRecDepth_3122_ = v___x_3098_;
v_ref_3123_ = v___x_3099_;
v_currNamespace_3124_ = v___x_3100_;
v_openDecls_3125_ = v___x_3101_;
v_initHeartbeats_3126_ = v___x_3111_;
v_maxHeartbeats_3127_ = v___x_3102_;
v_quotContext_3128_ = v___x_3100_;
v_currMacroScope_3129_ = v___x_3103_;
v_cancelTk_x3f_3130_ = v___x_3104_;
v_suppressElabErrors_3131_ = v_run_3105_;
v_inheritedTraceOptions_3132_ = v___x_3114_;
v___y_3133_ = v___x_3112_;
goto v___jp_3119_;
}
else
{
v___y_3165_ = v___x_3185_;
goto v___jp_3164_;
}
}
else
{
v___y_3165_ = v___x_3118_;
goto v___jp_3164_;
}
v___jp_3107_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = lean_mk_io_user_error(v_a_3108_);
v___x_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
return v___x_3110_;
}
v___jp_3119_:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3134_ = l_Lean_maxRecDepth;
v___x_3135_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v___x_3091_, v___x_3134_);
v___x_3136_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3136_, 0, v_fileName_3120_);
lean_ctor_set(v___x_3136_, 1, v_fileMap_3121_);
lean_ctor_set(v___x_3136_, 2, v___x_3091_);
lean_ctor_set(v___x_3136_, 3, v_currRecDepth_3122_);
lean_ctor_set(v___x_3136_, 4, v___x_3135_);
lean_ctor_set(v___x_3136_, 5, v_ref_3123_);
lean_ctor_set(v___x_3136_, 6, v_currNamespace_3124_);
lean_ctor_set(v___x_3136_, 7, v_openDecls_3125_);
lean_ctor_set(v___x_3136_, 8, v_initHeartbeats_3126_);
lean_ctor_set(v___x_3136_, 9, v_maxHeartbeats_3127_);
lean_ctor_set(v___x_3136_, 10, v_quotContext_3128_);
lean_ctor_set(v___x_3136_, 11, v_currMacroScope_3129_);
lean_ctor_set(v___x_3136_, 12, v_cancelTk_x3f_3130_);
lean_ctor_set(v___x_3136_, 13, v_inheritedTraceOptions_3132_);
lean_ctor_set_uint8(v___x_3136_, sizeof(void*)*14, v___x_3118_);
lean_ctor_set_uint8(v___x_3136_, sizeof(void*)*14 + 1, v_suppressElabErrors_3131_);
v___x_3137_ = l_Lean_Compiler_LCNF_emitC(v_mainModuleName_3092_, v___x_3136_, v___y_3133_);
lean_dec(v___y_3133_);
lean_dec_ref_known(v___x_3136_, 14);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
lean_dec_ref_known(v___x_3137_, 1);
v___x_3139_ = lean_st_ref_get(v___x_3112_);
lean_dec(v___x_3112_);
lean_dec(v___x_3139_);
v___x_3140_ = lean_string_to_utf8(v_a_3138_);
lean_dec(v_a_3138_);
v___x_3141_ = lean_io_prim_handle_write(v_a_3093_, v___x_3140_);
lean_dec_ref(v___x_3140_);
return v___x_3141_;
}
else
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3163_; 
lean_dec(v___x_3112_);
v_a_3142_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3144_ = v___x_3137_;
v_isShared_3145_ = v_isSharedCheck_3163_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3137_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3163_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
if (lean_obj_tag(v_a_3142_) == 0)
{
lean_object* v_msg_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3150_; 
v_msg_3146_ = lean_ctor_get(v_a_3142_, 1);
lean_inc_ref(v_msg_3146_);
lean_dec_ref_known(v_a_3142_, 2);
v___x_3147_ = l_Lean_MessageData_toString(v_msg_3146_);
v___x_3148_ = lean_mk_io_user_error(v___x_3147_);
if (v_isShared_3145_ == 0)
{
lean_ctor_set(v___x_3144_, 0, v___x_3148_);
v___x_3150_ = v___x_3144_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
else
{
lean_object* v_id_3152_; lean_object* v___x_3153_; 
lean_del_object(v___x_3144_);
v_id_3152_ = lean_ctor_get(v_a_3142_, 0);
lean_inc(v_id_3152_);
lean_dec_ref_known(v_a_3142_, 2);
v___x_3153_ = l_Lean_InternalExceptionId_getName(v_id_3152_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_object* v_a_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_dec(v_id_3152_);
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
lean_inc(v_a_3154_);
lean_dec_ref_known(v___x_3153_, 1);
v___x_3155_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__18));
v___x_3156_ = l_Lean_Name_toString(v_a_3154_, v___x_3094_);
v___x_3157_ = lean_string_append(v___x_3155_, v___x_3156_);
lean_dec_ref(v___x_3156_);
v_a_3108_ = v___x_3157_;
goto v___jp_3107_;
}
else
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
lean_dec_ref_known(v___x_3153_, 1);
v___x_3158_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__19));
v___x_3159_ = l_Nat_reprFast(v_id_3152_);
v___x_3160_ = lean_string_append(v___x_3158_, v___x_3159_);
lean_dec_ref(v___x_3159_);
v___x_3161_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__20));
v___x_3162_ = lean_string_append(v___x_3160_, v___x_3161_);
v_a_3108_ = v___x_3162_;
goto v___jp_3107_;
}
}
}
}
}
v___jp_3164_:
{
if (v___y_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v_env_3167_; lean_object* v_nextMacroScope_3168_; lean_object* v_ngen_3169_; lean_object* v_auxDeclNGen_3170_; lean_object* v_traceState_3171_; lean_object* v_messages_3172_; lean_object* v_infoState_3173_; lean_object* v_snapshotTasks_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3183_; 
v___x_3166_ = lean_st_ref_take(v___x_3112_);
v_env_3167_ = lean_ctor_get(v___x_3166_, 0);
v_nextMacroScope_3168_ = lean_ctor_get(v___x_3166_, 1);
v_ngen_3169_ = lean_ctor_get(v___x_3166_, 2);
v_auxDeclNGen_3170_ = lean_ctor_get(v___x_3166_, 3);
v_traceState_3171_ = lean_ctor_get(v___x_3166_, 4);
v_messages_3172_ = lean_ctor_get(v___x_3166_, 6);
v_infoState_3173_ = lean_ctor_get(v___x_3166_, 7);
v_snapshotTasks_3174_ = lean_ctor_get(v___x_3166_, 8);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3183_ == 0)
{
lean_object* v_unused_3184_; 
v_unused_3184_ = lean_ctor_get(v___x_3166_, 5);
lean_dec(v_unused_3184_);
v___x_3176_ = v___x_3166_;
v_isShared_3177_ = v_isSharedCheck_3183_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_snapshotTasks_3174_);
lean_inc(v_infoState_3173_);
lean_inc(v_messages_3172_);
lean_inc(v_traceState_3171_);
lean_inc(v_auxDeclNGen_3170_);
lean_inc(v_ngen_3169_);
lean_inc(v_nextMacroScope_3168_);
lean_inc(v_env_3167_);
lean_dec(v___x_3166_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3183_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3178_ = l_Lean_Kernel_enableDiag(v_env_3167_, v___x_3118_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 5, v___x_3095_);
lean_ctor_set(v___x_3176_, 0, v___x_3178_);
v___x_3180_ = v___x_3176_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3178_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_nextMacroScope_3168_);
lean_ctor_set(v_reuseFailAlloc_3182_, 2, v_ngen_3169_);
lean_ctor_set(v_reuseFailAlloc_3182_, 3, v_auxDeclNGen_3170_);
lean_ctor_set(v_reuseFailAlloc_3182_, 4, v_traceState_3171_);
lean_ctor_set(v_reuseFailAlloc_3182_, 5, v___x_3095_);
lean_ctor_set(v_reuseFailAlloc_3182_, 6, v_messages_3172_);
lean_ctor_set(v_reuseFailAlloc_3182_, 7, v_infoState_3173_);
lean_ctor_set(v_reuseFailAlloc_3182_, 8, v_snapshotTasks_3174_);
v___x_3180_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
lean_object* v___x_3181_; 
v___x_3181_ = lean_st_ref_set(v___x_3112_, v___x_3180_);
lean_inc(v___x_3112_);
lean_inc(v___x_3100_);
v_fileName_3120_ = v_fileName_3096_;
v_fileMap_3121_ = v___x_3097_;
v_currRecDepth_3122_ = v___x_3098_;
v_ref_3123_ = v___x_3099_;
v_currNamespace_3124_ = v___x_3100_;
v_openDecls_3125_ = v___x_3101_;
v_initHeartbeats_3126_ = v___x_3111_;
v_maxHeartbeats_3127_ = v___x_3102_;
v_quotContext_3128_ = v___x_3100_;
v_currMacroScope_3129_ = v___x_3103_;
v_cancelTk_x3f_3130_ = v___x_3104_;
v_suppressElabErrors_3131_ = v_run_3105_;
v_inheritedTraceOptions_3132_ = v___x_3114_;
v___y_3133_ = v___x_3112_;
goto v___jp_3119_;
}
}
}
else
{
lean_dec_ref(v___x_3095_);
lean_inc(v___x_3112_);
lean_inc(v___x_3100_);
v_fileName_3120_ = v_fileName_3096_;
v_fileMap_3121_ = v___x_3097_;
v_currRecDepth_3122_ = v___x_3098_;
v_ref_3123_ = v___x_3099_;
v_currNamespace_3124_ = v___x_3100_;
v_openDecls_3125_ = v___x_3101_;
v_initHeartbeats_3126_ = v___x_3111_;
v_maxHeartbeats_3127_ = v___x_3102_;
v_quotContext_3128_ = v___x_3100_;
v_currMacroScope_3129_ = v___x_3103_;
v_cancelTk_x3f_3130_ = v___x_3104_;
v_suppressElabErrors_3131_ = v_run_3105_;
v_inheritedTraceOptions_3132_ = v___x_3114_;
v___y_3133_ = v___x_3112_;
goto v___jp_3119_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object** _args){
lean_object* v___x_3186_ = _args[0];
lean_object* v___x_3187_ = _args[1];
lean_object* v_mainModuleName_3188_ = _args[2];
lean_object* v_a_3189_ = _args[3];
lean_object* v___x_3190_ = _args[4];
lean_object* v___x_3191_ = _args[5];
lean_object* v_fileName_3192_ = _args[6];
lean_object* v___x_3193_ = _args[7];
lean_object* v___x_3194_ = _args[8];
lean_object* v___x_3195_ = _args[9];
lean_object* v___x_3196_ = _args[10];
lean_object* v___x_3197_ = _args[11];
lean_object* v___x_3198_ = _args[12];
lean_object* v___x_3199_ = _args[13];
lean_object* v___x_3200_ = _args[14];
lean_object* v_run_3201_ = _args[15];
lean_object* v___y_3202_ = _args[16];
_start:
{
uint8_t v___x_21072__boxed_3203_; uint8_t v_run_boxed_3204_; lean_object* v_res_3205_; 
v___x_21072__boxed_3203_ = lean_unbox(v___x_3190_);
v_run_boxed_3204_ = lean_unbox(v_run_3201_);
v_res_3205_ = l___private_Lean_Shell_0__Lean_shellMain___lam__1(v___x_3186_, v___x_3187_, v_mainModuleName_3188_, v_a_3189_, v___x_21072__boxed_3203_, v___x_3191_, v_fileName_3192_, v___x_3193_, v___x_3194_, v___x_3195_, v___x_3196_, v___x_3197_, v___x_3198_, v___x_3199_, v___x_3200_, v_run_boxed_3204_);
lean_dec(v_a_3189_);
return v_res_3205_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* v_s_3206_){
_start:
{
uint32_t v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; 
v___x_3208_ = 10;
v___x_3209_ = lean_string_push(v_s_3206_, v___x_3208_);
v___x_3210_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3209_);
return v___x_3210_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* v_s_3211_, lean_object* v_a_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v_s_3211_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object* v_val_3214_, lean_object* v_a_3215_, lean_object* v_b_3216_){
_start:
{
lean_object* v_str_3217_; lean_object* v_startInclusive_3218_; lean_object* v_endExclusive_3219_; lean_object* v___x_3220_; uint8_t v___x_3221_; 
v_str_3217_ = lean_ctor_get(v_val_3214_, 0);
v_startInclusive_3218_ = lean_ctor_get(v_val_3214_, 1);
v_endExclusive_3219_ = lean_ctor_get(v_val_3214_, 2);
v___x_3220_ = lean_nat_sub(v_endExclusive_3219_, v_startInclusive_3218_);
v___x_3221_ = lean_nat_dec_eq(v_a_3215_, v___x_3220_);
lean_dec(v___x_3220_);
if (v___x_3221_ == 0)
{
lean_object* v___x_3222_; uint32_t v___x_3223_; uint32_t v___x_3224_; uint8_t v___x_3225_; 
v___x_3222_ = lean_nat_add(v_startInclusive_3218_, v_a_3215_);
v___x_3223_ = lean_string_utf8_get_fast(v_str_3217_, v___x_3222_);
v___x_3224_ = 10;
v___x_3225_ = lean_uint32_dec_eq(v___x_3223_, v___x_3224_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
lean_dec(v_a_3215_);
v___x_3226_ = lean_box(0);
v___x_3227_ = lean_string_utf8_next_fast(v_str_3217_, v___x_3222_);
lean_dec(v___x_3222_);
v___x_3228_ = lean_nat_sub(v___x_3227_, v_startInclusive_3218_);
v_a_3215_ = v___x_3228_;
v_b_3216_ = v___x_3226_;
goto _start;
}
else
{
lean_object* v___x_3230_; 
lean_dec(v___x_3222_);
v___x_3230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_a_3215_);
return v___x_3230_;
}
}
else
{
lean_dec(v_a_3215_);
lean_inc(v_b_3216_);
return v_b_3216_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___boxed(lean_object* v_val_3231_, lean_object* v_a_3232_, lean_object* v_b_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3231_, v_a_3232_, v_b_3233_);
lean_dec(v_b_3233_);
lean_dec_ref(v_val_3231_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* v_s_3235_){
_start:
{
uint32_t v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3237_ = 10;
v___x_3238_ = lean_string_push(v_s_3235_, v___x_3237_);
v___x_3239_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_3238_);
return v___x_3239_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* v_s_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_s_3240_);
return v_res_3242_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0(void){
_start:
{
lean_object* v___x_3243_; uint8_t v___x_3244_; 
v___x_3243_ = lean_box(0);
v___x_3244_ = lean_internal_has_address_sanitizer(v___x_3243_);
return v___x_3244_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10(void){
_start:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3259_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__9));
v___x_3260_ = lean_string_utf8_byte_size(v___x_3259_);
return v___x_3260_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11(void){
_start:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v___x_3261_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__10, &l___private_Lean_Shell_0__Lean_shellMain___closed__10_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__10);
v___x_3262_ = lean_unsigned_to_nat(0u);
v___x_3263_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__9));
v___x_3264_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3264_, 0, v___x_3263_);
lean_ctor_set(v___x_3264_, 1, v___x_3262_);
lean_ctor_set(v___x_3264_, 2, v___x_3261_);
return v___x_3264_;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* v_args_3268_, lean_object* v_opts_3269_){
_start:
{
lean_object* v_fns_3272_; lean_object* v___y_3298_; lean_object* v_leanOpts_3312_; lean_object* v_forwardedArgs_3313_; uint8_t v_component_3314_; uint8_t v_printPrefix_3315_; uint8_t v_printLibDir_3316_; uint8_t v_useStdin_3317_; uint8_t v_onlyDeps_3318_; uint8_t v_onlySrcDeps_3319_; uint8_t v_depsJson_3320_; uint32_t v_trustLevel_3321_; lean_object* v_rootDir_x3f_3322_; lean_object* v_setupFileName_x3f_3323_; lean_object* v_oleanFileName_x3f_3324_; lean_object* v_ileanFileName_x3f_3325_; lean_object* v_cFileName_x3f_3326_; lean_object* v_bcFileName_x3f_3327_; lean_object* v_zigFileName_x3f_3328_; uint8_t v_jsonOutput_3329_; lean_object* v_errorOnKinds_3330_; uint8_t v_printStats_3331_; uint8_t v_run_3332_; lean_object* v_incrSaveFileName_x3f_3333_; lean_object* v_incrLoadFileName_x3f_3334_; lean_object* v_incrHeaderSaveFileName_x3f_3335_; lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3381_; lean_object* v___y_3382_; lean_object* v___y_3383_; 
v_leanOpts_3312_ = lean_ctor_get(v_opts_3269_, 0);
lean_inc_ref(v_leanOpts_3312_);
v_forwardedArgs_3313_ = lean_ctor_get(v_opts_3269_, 1);
lean_inc_ref(v_forwardedArgs_3313_);
v_component_3314_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 8);
v_printPrefix_3315_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 9);
v_printLibDir_3316_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 10);
v_useStdin_3317_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 11);
v_onlyDeps_3318_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 12);
v_onlySrcDeps_3319_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 13);
v_depsJson_3320_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 14);
v_trustLevel_3321_ = lean_ctor_get_uint32(v_opts_3269_, sizeof(void*)*14);
v_rootDir_x3f_3322_ = lean_ctor_get(v_opts_3269_, 3);
lean_inc(v_rootDir_x3f_3322_);
v_setupFileName_x3f_3323_ = lean_ctor_get(v_opts_3269_, 4);
lean_inc(v_setupFileName_x3f_3323_);
v_oleanFileName_x3f_3324_ = lean_ctor_get(v_opts_3269_, 5);
lean_inc(v_oleanFileName_x3f_3324_);
v_ileanFileName_x3f_3325_ = lean_ctor_get(v_opts_3269_, 6);
lean_inc(v_ileanFileName_x3f_3325_);
v_cFileName_x3f_3326_ = lean_ctor_get(v_opts_3269_, 7);
lean_inc(v_cFileName_x3f_3326_);
v_bcFileName_x3f_3327_ = lean_ctor_get(v_opts_3269_, 8);
lean_inc(v_bcFileName_x3f_3327_);
v_zigFileName_x3f_3328_ = lean_ctor_get(v_opts_3269_, 9);
lean_inc(v_zigFileName_x3f_3328_);
v_jsonOutput_3329_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 15);
v_errorOnKinds_3330_ = lean_ctor_get(v_opts_3269_, 10);
lean_inc_ref(v_errorOnKinds_3330_);
v_printStats_3331_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 16);
v_run_3332_ = lean_ctor_get_uint8(v_opts_3269_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3333_ = lean_ctor_get(v_opts_3269_, 11);
lean_inc(v_incrSaveFileName_x3f_3333_);
v_incrLoadFileName_x3f_3334_ = lean_ctor_get(v_opts_3269_, 12);
lean_inc(v_incrLoadFileName_x3f_3334_);
v_incrHeaderSaveFileName_x3f_3335_ = lean_ctor_get(v_opts_3269_, 13);
lean_inc(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec_ref(v_opts_3269_);
if (v_printPrefix_3315_ == 0)
{
if (v_printLibDir_3316_ == 0)
{
uint8_t v___x_3406_; lean_object* v___y_3408_; lean_object* v___y_3409_; lean_object* v___y_3410_; lean_object* v___y_3411_; lean_object* v___y_3412_; lean_object* v_mainModuleName_3413_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v_contents_3514_; lean_object* v___y_3540_; lean_object* v_str_3541_; lean_object* v_startInclusive_3542_; lean_object* v_endExclusive_3543_; lean_object* v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3578_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v_fileName_3646_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3684_; lean_object* v___y_3685_; uint8_t v___y_3716_; lean_object* v_fst_3717_; lean_object* v_snd_3718_; uint8_t v___y_3720_; lean_object* v___x_3750_; lean_object* v_maxMemory_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
v___x_3406_ = 1;
v___x_3750_ = l___private_Lean_Shell_0__Lean_maxMemory;
v_maxMemory_3751_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_leanOpts_3312_, v___x_3750_);
v___x_3752_ = lean_unsigned_to_nat(0u);
v___x_3753_ = lean_nat_dec_eq(v_maxMemory_3751_, v___x_3752_);
if (v___x_3753_ == 0)
{
size_t v___x_3754_; size_t v___x_3755_; size_t v___x_3756_; size_t v___x_3757_; lean_object* v___x_3758_; 
v___x_3754_ = lean_usize_of_nat(v_maxMemory_3751_);
lean_dec(v_maxMemory_3751_);
v___x_3755_ = ((size_t)10ULL);
v___x_3756_ = lean_usize_shift_left(v___x_3754_, v___x_3755_);
v___x_3757_ = lean_usize_shift_left(v___x_3756_, v___x_3755_);
v___x_3758_ = lean_internal_set_max_memory(v___x_3757_);
goto v___jp_3741_;
}
else
{
lean_dec(v_maxMemory_3751_);
goto v___jp_3741_;
}
v___jp_3407_:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3414_ = lean_unsigned_to_nat(0u);
v___x_3415_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
lean_inc(v_mainModuleName_3413_);
lean_inc_ref(v_leanOpts_3312_);
v___x_3416_ = l_Lean_Elab_runFrontend(v___y_3411_, v_leanOpts_3312_, v___y_3409_, v_mainModuleName_3413_, v_trustLevel_3321_, v_oleanFileName_x3f_3324_, v_ileanFileName_x3f_3325_, v_jsonOutput_3329_, v_errorOnKinds_3330_, v___x_3415_, v_printStats_3331_, v___y_3410_, v_incrSaveFileName_x3f_3333_, v_incrLoadFileName_x3f_3334_, v_incrHeaderSaveFileName_x3f_3335_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_ileanFileName_x3f_3325_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3484_; 
v_a_3417_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3419_ = v___x_3416_;
v_isShared_3420_ = v_isSharedCheck_3484_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3416_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3484_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
if (lean_obj_tag(v_a_3417_) == 1)
{
if (v_run_3332_ == 0)
{
lean_del_object(v___x_3419_);
lean_dec(v___y_3412_);
if (lean_obj_tag(v_cFileName_x3f_3326_) == 1)
{
lean_object* v_val_3421_; lean_object* v_val_3422_; uint8_t v___x_3423_; lean_object* v___x_3424_; 
v_val_3421_ = lean_ctor_get(v_a_3417_, 0);
lean_inc(v_val_3421_);
v_val_3422_ = lean_ctor_get(v_cFileName_x3f_3326_, 0);
lean_inc(v_val_3422_);
lean_dec_ref_known(v_cFileName_x3f_3326_, 1);
v___x_3423_ = 1;
v___x_3424_ = lean_io_prim_handle_mk(v_val_3422_, v___x_3423_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___f_3445_; lean_object* v___x_3446_; 
lean_dec(v_val_3422_);
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v___x_3426_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__5));
v___x_3427_ = l_Lean_instInhabitedFileMap_default;
v___x_3428_ = l_Lean_Options_empty;
v___x_3429_ = lean_box(0);
v___x_3430_ = lean_box(0);
v___x_3431_ = lean_box(0);
v___x_3432_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__15, &l___private_Lean_Shell_0__Lean_emitZig___closed__15_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15);
v___x_3433_ = l_Lean_firstFrontendMacroScope;
v___x_3434_ = lean_box(0);
v___x_3435_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__6, &l___private_Lean_Shell_0__Lean_emitZig___closed__6_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6);
v___x_3436_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__9));
v___x_3437_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__6));
v___x_3438_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__11, &l___private_Lean_Shell_0__Lean_emitZig___closed__11_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11);
v___x_3439_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__4, &l___private_Lean_Shell_0__Lean_emitZig___closed__4_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4);
v___x_3440_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__5, &l___private_Lean_Shell_0__Lean_emitZig___closed__5_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5);
v___x_3441_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__12, &l___private_Lean_Shell_0__Lean_emitZig___closed__12_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12);
lean_inc(v_val_3421_);
v___x_3442_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3442_, 0, v_val_3421_);
lean_ctor_set(v___x_3442_, 1, v___x_3435_);
lean_ctor_set(v___x_3442_, 2, v___x_3436_);
lean_ctor_set(v___x_3442_, 3, v___x_3437_);
lean_ctor_set(v___x_3442_, 4, v___x_3438_);
lean_ctor_set(v___x_3442_, 5, v___x_3439_);
lean_ctor_set(v___x_3442_, 6, v___x_3440_);
lean_ctor_set(v___x_3442_, 7, v___x_3441_);
lean_ctor_set(v___x_3442_, 8, v___x_3415_);
v___x_3443_ = lean_box(v___x_3406_);
v___x_3444_ = lean_box(v_run_3332_);
lean_inc(v_mainModuleName_3413_);
v___f_3445_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed), 17, 16);
lean_closure_set(v___f_3445_, 0, v___x_3442_);
lean_closure_set(v___f_3445_, 1, v___x_3428_);
lean_closure_set(v___f_3445_, 2, v_mainModuleName_3413_);
lean_closure_set(v___f_3445_, 3, v_a_3425_);
lean_closure_set(v___f_3445_, 4, v___x_3443_);
lean_closure_set(v___f_3445_, 5, v___x_3439_);
lean_closure_set(v___f_3445_, 6, v___y_3408_);
lean_closure_set(v___f_3445_, 7, v___x_3427_);
lean_closure_set(v___f_3445_, 8, v___x_3414_);
lean_closure_set(v___f_3445_, 9, v___x_3429_);
lean_closure_set(v___f_3445_, 10, v___x_3430_);
lean_closure_set(v___f_3445_, 11, v___x_3431_);
lean_closure_set(v___f_3445_, 12, v___x_3432_);
lean_closure_set(v___f_3445_, 13, v___x_3433_);
lean_closure_set(v___f_3445_, 14, v___x_3434_);
lean_closure_set(v___f_3445_, 15, v___x_3444_);
v___x_3446_ = l_Lean_profileitIOUnsafe___redArg(v___x_3426_, v_leanOpts_3312_, v___f_3445_, v___x_3430_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_dec_ref_known(v___x_3446_, 1);
lean_inc(v_val_3421_);
lean_inc(v_mainModuleName_3413_);
v___y_3379_ = v_mainModuleName_3413_;
v___y_3380_ = v_val_3421_;
v___y_3381_ = v_mainModuleName_3413_;
v___y_3382_ = v_val_3421_;
v___y_3383_ = v_a_3417_;
goto v___jp_3378_;
}
else
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3454_; 
lean_dec(v_val_3421_);
lean_dec_ref_known(v_a_3417_, 1);
lean_dec(v_mainModuleName_3413_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3449_ = v___x_3446_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3446_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3452_; 
if (v_isShared_3450_ == 0)
{
v___x_3452_ = v___x_3449_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3447_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
}
else
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
lean_dec_ref_known(v___x_3424_, 1);
lean_dec(v_val_3421_);
lean_dec_ref_known(v_a_3417_, 1);
lean_dec(v_mainModuleName_3413_);
lean_dec_ref(v___y_3408_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3455_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__2));
v___x_3456_ = lean_string_append(v___x_3455_, v_val_3422_);
lean_dec(v_val_3422_);
v___x_3457_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3458_ = lean_string_append(v___x_3456_, v___x_3457_);
v___x_3459_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3458_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3467_; 
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3467_ == 0)
{
lean_object* v_unused_3468_; 
v_unused_3468_ = lean_ctor_get(v___x_3459_, 0);
lean_dec(v_unused_3468_);
v___x_3461_ = v___x_3459_;
v_isShared_3462_ = v_isSharedCheck_3467_;
goto v_resetjp_3460_;
}
else
{
lean_dec(v___x_3459_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3467_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3463_; lean_object* v___x_3465_; 
v___x_3463_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 0, v___x_3463_);
v___x_3465_ = v___x_3461_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3463_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
v_a_3469_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3459_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3459_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
else
{
lean_object* v_val_3477_; 
lean_dec_ref(v___y_3408_);
lean_dec(v_cFileName_x3f_3326_);
v_val_3477_ = lean_ctor_get(v_a_3417_, 0);
lean_inc_n(v_val_3477_, 2);
lean_inc(v_mainModuleName_3413_);
v___y_3379_ = v_mainModuleName_3413_;
v___y_3380_ = v_val_3477_;
v___y_3381_ = v_mainModuleName_3413_;
v___y_3382_ = v_val_3477_;
v___y_3383_ = v_a_3417_;
goto v___jp_3378_;
}
}
else
{
lean_object* v_val_3478_; uint32_t v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3482_; 
lean_dec(v_mainModuleName_3413_);
lean_dec_ref(v___y_3408_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
v_val_3478_ = lean_ctor_get(v_a_3417_, 0);
lean_inc(v_val_3478_);
lean_dec_ref_known(v_a_3417_, 1);
v___x_3479_ = lean_eval_main(v_val_3478_, v_leanOpts_3312_, v___y_3412_);
lean_dec(v___y_3412_);
lean_dec_ref(v_leanOpts_3312_);
lean_dec(v_val_3478_);
v___x_3480_ = lean_box_uint32(v___x_3479_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 0, v___x_3480_);
v___x_3482_ = v___x_3419_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v___x_3480_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
else
{
lean_del_object(v___x_3419_);
lean_dec(v_mainModuleName_3413_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3408_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec_ref(v_leanOpts_3312_);
v___y_3298_ = v_a_3417_;
goto v___jp_3297_;
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3492_; 
lean_dec(v_mainModuleName_3413_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3408_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3485_ = lean_ctor_get(v___x_3416_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3416_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3487_ = v___x_3416_;
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_a_3485_);
lean_dec(v___x_3416_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3492_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3490_; 
if (v_isShared_3488_ == 0)
{
v___x_3490_ = v___x_3487_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_a_3485_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
v___jp_3493_:
{
if (lean_obj_tag(v___y_3499_) == 0)
{
lean_object* v_a_3500_; 
v_a_3500_ = lean_ctor_get(v___y_3499_, 0);
lean_inc(v_a_3500_);
lean_dec_ref_known(v___y_3499_, 1);
v___y_3408_ = v___y_3494_;
v___y_3409_ = v___y_3495_;
v___y_3410_ = v___y_3497_;
v___y_3411_ = v___y_3496_;
v___y_3412_ = v___y_3498_;
v_mainModuleName_3413_ = v_a_3500_;
goto v___jp_3407_;
}
else
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3508_; 
lean_dec(v___y_3498_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec_ref(v___y_3494_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3501_ = lean_ctor_get(v___y_3499_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v___y_3499_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3503_ = v___y_3499_;
v_isShared_3504_ = v_isSharedCheck_3508_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___y_3499_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3508_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3506_; 
if (v_isShared_3504_ == 0)
{
v___x_3506_ = v___x_3503_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v_a_3501_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
}
v___jp_3509_:
{
if (lean_obj_tag(v_setupFileName_x3f_3323_) == 0)
{
lean_object* v___x_3515_; 
v___x_3515_ = lean_box(0);
if (lean_obj_tag(v___y_3512_) == 1)
{
lean_object* v_val_3516_; lean_object* v___x_3517_; 
v_val_3516_ = lean_ctor_get(v___y_3512_, 0);
lean_inc(v_val_3516_);
lean_dec_ref_known(v___y_3512_, 1);
v___x_3517_ = l_Lean_moduleNameOfFileName(v_val_3516_, v_rootDir_x3f_3322_);
if (lean_obj_tag(v___x_3517_) == 0)
{
v___y_3494_ = v___y_3510_;
v___y_3495_ = v___y_3511_;
v___y_3496_ = v_contents_3514_;
v___y_3497_ = v___x_3515_;
v___y_3498_ = v___y_3513_;
v___y_3499_ = v___x_3517_;
goto v___jp_3493_;
}
else
{
if (lean_obj_tag(v_oleanFileName_x3f_3324_) == 0)
{
if (lean_obj_tag(v_cFileName_x3f_3326_) == 0)
{
if (lean_obj_tag(v_zigFileName_x3f_3328_) == 0)
{
lean_object* v___x_3518_; 
lean_dec_ref_known(v___x_3517_, 1);
v___x_3518_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___y_3408_ = v___y_3510_;
v___y_3409_ = v___y_3511_;
v___y_3410_ = v___x_3515_;
v___y_3411_ = v_contents_3514_;
v___y_3412_ = v___y_3513_;
v_mainModuleName_3413_ = v___x_3518_;
goto v___jp_3407_;
}
else
{
v___y_3494_ = v___y_3510_;
v___y_3495_ = v___y_3511_;
v___y_3496_ = v_contents_3514_;
v___y_3497_ = v___x_3515_;
v___y_3498_ = v___y_3513_;
v___y_3499_ = v___x_3517_;
goto v___jp_3493_;
}
}
else
{
v___y_3494_ = v___y_3510_;
v___y_3495_ = v___y_3511_;
v___y_3496_ = v_contents_3514_;
v___y_3497_ = v___x_3515_;
v___y_3498_ = v___y_3513_;
v___y_3499_ = v___x_3517_;
goto v___jp_3493_;
}
}
else
{
v___y_3494_ = v___y_3510_;
v___y_3495_ = v___y_3511_;
v___y_3496_ = v_contents_3514_;
v___y_3497_ = v___x_3515_;
v___y_3498_ = v___y_3513_;
v___y_3499_ = v___x_3517_;
goto v___jp_3493_;
}
}
}
else
{
lean_object* v___x_3519_; 
lean_dec(v___y_3512_);
lean_dec(v_rootDir_x3f_3322_);
v___x_3519_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___y_3408_ = v___y_3510_;
v___y_3409_ = v___y_3511_;
v___y_3410_ = v___x_3515_;
v___y_3411_ = v_contents_3514_;
v___y_3412_ = v___y_3513_;
v_mainModuleName_3413_ = v___x_3519_;
goto v___jp_3407_;
}
}
else
{
lean_object* v_val_3520_; lean_object* v___x_3522_; uint8_t v_isShared_3523_; uint8_t v_isSharedCheck_3538_; 
lean_dec(v___y_3512_);
lean_dec(v_rootDir_x3f_3322_);
v_val_3520_ = lean_ctor_get(v_setupFileName_x3f_3323_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v_setupFileName_x3f_3323_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3522_ = v_setupFileName_x3f_3323_;
v_isShared_3523_ = v_isSharedCheck_3538_;
goto v_resetjp_3521_;
}
else
{
lean_inc(v_val_3520_);
lean_dec(v_setupFileName_x3f_3323_);
v___x_3522_ = lean_box(0);
v_isShared_3523_ = v_isSharedCheck_3538_;
goto v_resetjp_3521_;
}
v_resetjp_3521_:
{
lean_object* v___x_3524_; 
v___x_3524_ = l_Lean_ModuleSetup_load(v_val_3520_);
lean_dec(v_val_3520_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v_name_3526_; lean_object* v___x_3528_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3524_, 1);
v_name_3526_ = lean_ctor_get(v_a_3525_, 0);
lean_inc(v_name_3526_);
if (v_isShared_3523_ == 0)
{
lean_ctor_set(v___x_3522_, 0, v_a_3525_);
v___x_3528_ = v___x_3522_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3529_; 
v_reuseFailAlloc_3529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3529_, 0, v_a_3525_);
v___x_3528_ = v_reuseFailAlloc_3529_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
v___y_3408_ = v___y_3510_;
v___y_3409_ = v___y_3511_;
v___y_3410_ = v___x_3528_;
v___y_3411_ = v_contents_3514_;
v___y_3412_ = v___y_3513_;
v_mainModuleName_3413_ = v_name_3526_;
goto v___jp_3407_;
}
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_del_object(v___x_3522_);
lean_dec_ref(v_contents_3514_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3530_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3524_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3524_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
}
v___jp_3539_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; uint8_t v___x_3552_; 
v___x_3548_ = lean_nat_add(v_startInclusive_3542_, v___y_3547_);
lean_dec(v___y_3547_);
lean_inc(v___x_3548_);
lean_inc_ref(v_str_3541_);
v___x_3549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3549_, 0, v_str_3541_);
lean_ctor_set(v___x_3549_, 1, v_startInclusive_3542_);
lean_ctor_set(v___x_3549_, 2, v___x_3548_);
v___x_3550_ = l_String_Slice_trimAscii(v___x_3549_);
v___x_3551_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__11, &l___private_Lean_Shell_0__Lean_shellMain___closed__11_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__11);
v___x_3552_ = l_String_Slice_beq(v___x_3550_, v___x_3551_);
if (v___x_3552_ == 0)
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; 
lean_dec(v___x_3548_);
lean_dec(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v_endExclusive_3543_);
lean_dec_ref(v_str_3541_);
lean_dec_ref(v___y_3540_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3553_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__12));
v___x_3554_ = l_String_Slice_toString(v___x_3550_);
lean_dec_ref(v___x_3550_);
v___x_3555_ = lean_string_append(v___x_3553_, v___x_3554_);
lean_dec_ref(v___x_3554_);
v___x_3556_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_3557_ = lean_string_append(v___x_3555_, v___x_3556_);
v___x_3558_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3557_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3566_; 
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3566_ == 0)
{
lean_object* v_unused_3567_; 
v_unused_3567_ = lean_ctor_get(v___x_3558_, 0);
lean_dec(v_unused_3567_);
v___x_3560_ = v___x_3558_;
v_isShared_3561_ = v_isSharedCheck_3566_;
goto v_resetjp_3559_;
}
else
{
lean_dec(v___x_3558_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3566_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3562_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 0, v___x_3562_);
v___x_3564_ = v___x_3560_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
v_a_3568_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3558_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3558_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
else
{
lean_object* v___x_3576_; 
lean_dec_ref(v___x_3550_);
v___x_3576_ = lean_string_utf8_extract(v_str_3541_, v___x_3548_, v_endExclusive_3543_);
lean_dec(v_endExclusive_3543_);
lean_dec(v___x_3548_);
lean_dec_ref(v_str_3541_);
v___y_3510_ = v___y_3540_;
v___y_3511_ = v___y_3544_;
v___y_3512_ = v___y_3545_;
v___y_3513_ = v___y_3546_;
v_contents_3514_ = v___x_3576_;
goto v___jp_3509_;
}
}
v___jp_3577_:
{
if (lean_obj_tag(v___y_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3583_; 
v_a_3582_ = lean_ctor_get(v___y_3581_, 0);
lean_inc(v_a_3582_);
lean_dec_ref_known(v___y_3581_, 1);
v___x_3583_ = lean_decode_lossy_utf8(v_a_3582_);
lean_dec(v_a_3582_);
if (v_onlyDeps_3318_ == 0)
{
if (v_onlySrcDeps_3319_ == 0)
{
lean_object* v___x_3584_; 
lean_inc_ref(v___x_3583_);
v___x_3584_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v___x_3583_);
if (lean_obj_tag(v___x_3584_) == 1)
{
lean_object* v_val_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
lean_dec_ref(v___x_3583_);
v_val_3585_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_val_3585_);
lean_dec_ref_known(v___x_3584_, 1);
v___x_3586_ = lean_unsigned_to_nat(0u);
v___x_3587_ = lean_box(0);
v___x_3588_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3585_, v___x_3586_, v___x_3587_);
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v_str_3589_; lean_object* v_startInclusive_3590_; lean_object* v_endExclusive_3591_; lean_object* v___x_3592_; 
v_str_3589_ = lean_ctor_get(v_val_3585_, 0);
lean_inc_ref(v_str_3589_);
v_startInclusive_3590_ = lean_ctor_get(v_val_3585_, 1);
lean_inc(v_startInclusive_3590_);
v_endExclusive_3591_ = lean_ctor_get(v_val_3585_, 2);
lean_inc(v_endExclusive_3591_);
lean_dec(v_val_3585_);
v___x_3592_ = lean_nat_sub(v_endExclusive_3591_, v_startInclusive_3590_);
lean_inc_ref(v___y_3579_);
v___y_3540_ = v___y_3579_;
v_str_3541_ = v_str_3589_;
v_startInclusive_3542_ = v_startInclusive_3590_;
v_endExclusive_3543_ = v_endExclusive_3591_;
v___y_3544_ = v___y_3579_;
v___y_3545_ = v___y_3580_;
v___y_3546_ = v___y_3578_;
v___y_3547_ = v___x_3592_;
goto v___jp_3539_;
}
else
{
lean_object* v_val_3593_; lean_object* v_str_3594_; lean_object* v_startInclusive_3595_; lean_object* v_endExclusive_3596_; 
v_val_3593_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_val_3593_);
lean_dec_ref_known(v___x_3588_, 1);
v_str_3594_ = lean_ctor_get(v_val_3585_, 0);
lean_inc_ref(v_str_3594_);
v_startInclusive_3595_ = lean_ctor_get(v_val_3585_, 1);
lean_inc(v_startInclusive_3595_);
v_endExclusive_3596_ = lean_ctor_get(v_val_3585_, 2);
lean_inc(v_endExclusive_3596_);
lean_dec(v_val_3585_);
lean_inc_ref(v___y_3579_);
v___y_3540_ = v___y_3579_;
v_str_3541_ = v_str_3594_;
v_startInclusive_3542_ = v_startInclusive_3595_;
v_endExclusive_3543_ = v_endExclusive_3596_;
v___y_3544_ = v___y_3579_;
v___y_3545_ = v___y_3580_;
v___y_3546_ = v___y_3578_;
v___y_3547_ = v_val_3593_;
goto v___jp_3539_;
}
}
else
{
lean_dec(v___x_3584_);
lean_inc_ref(v___y_3579_);
v___y_3510_ = v___y_3579_;
v___y_3511_ = v___y_3579_;
v___y_3512_ = v___y_3580_;
v___y_3513_ = v___y_3578_;
v_contents_3514_ = v___x_3583_;
goto v___jp_3509_;
}
}
else
{
lean_object* v___x_3597_; lean_object* v___x_3598_; 
lean_dec(v___y_3580_);
lean_dec(v___y_3578_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___y_3579_);
v___x_3598_ = l_Lean_Elab_printImportSrcs(v___x_3583_, v___x_3597_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3606_; 
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3606_ == 0)
{
lean_object* v_unused_3607_; 
v_unused_3607_ = lean_ctor_get(v___x_3598_, 0);
lean_dec(v_unused_3607_);
v___x_3600_ = v___x_3598_;
v_isShared_3601_ = v_isSharedCheck_3606_;
goto v_resetjp_3599_;
}
else
{
lean_dec(v___x_3598_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3606_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3602_; lean_object* v___x_3604_; 
v___x_3602_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3601_ == 0)
{
lean_ctor_set(v___x_3600_, 0, v___x_3602_);
v___x_3604_ = v___x_3600_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v___x_3602_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
else
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3615_; 
v_a_3608_ = lean_ctor_get(v___x_3598_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3598_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3610_ = v___x_3598_;
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3598_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3615_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
lean_object* v___x_3613_; 
if (v_isShared_3611_ == 0)
{
v___x_3613_ = v___x_3610_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_a_3608_);
v___x_3613_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
return v___x_3613_;
}
}
}
}
}
else
{
lean_object* v___x_3616_; lean_object* v___x_3617_; 
lean_dec(v___y_3580_);
lean_dec(v___y_3578_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3616_, 0, v___y_3579_);
v___x_3617_ = l_Lean_Elab_printImports(v___x_3583_, v___x_3616_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3625_; 
v_isSharedCheck_3625_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3625_ == 0)
{
lean_object* v_unused_3626_; 
v_unused_3626_ = lean_ctor_get(v___x_3617_, 0);
lean_dec(v_unused_3626_);
v___x_3619_ = v___x_3617_;
v_isShared_3620_ = v_isSharedCheck_3625_;
goto v_resetjp_3618_;
}
else
{
lean_dec(v___x_3617_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3625_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3621_; lean_object* v___x_3623_; 
v___x_3621_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3620_ == 0)
{
lean_ctor_set(v___x_3619_, 0, v___x_3621_);
v___x_3623_ = v___x_3619_;
goto v_reusejp_3622_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v___x_3621_);
v___x_3623_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3622_;
}
v_reusejp_3622_:
{
return v___x_3623_;
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
v_a_3627_ = lean_ctor_get(v___x_3617_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3617_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3617_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3635_ = lean_ctor_get(v___y_3581_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___y_3581_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___y_3581_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___y_3581_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
v___jp_3643_:
{
if (v_useStdin_3317_ == 0)
{
lean_object* v___x_3647_; 
v___x_3647_ = l_IO_FS_readBinFile(v_fileName_3646_);
v___y_3578_ = v___y_3645_;
v___y_3579_ = v_fileName_3646_;
v___y_3580_ = v___y_3644_;
v___y_3581_ = v___x_3647_;
goto v___jp_3577_;
}
else
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = lean_get_stdin();
v___x_3649_ = l_IO_FS_Stream_readBinToEnd(v___x_3648_);
v___y_3578_ = v___y_3645_;
v___y_3579_ = v_fileName_3646_;
v___y_3580_ = v___y_3644_;
v___y_3581_ = v___x_3649_;
goto v___jp_3577_;
}
}
v___jp_3650_:
{
if (lean_obj_tag(v___y_3651_) == 1)
{
lean_object* v_val_3653_; 
v_val_3653_ = lean_ctor_get(v___y_3651_, 0);
lean_inc(v_val_3653_);
v___y_3644_ = v___y_3651_;
v___y_3645_ = v___y_3652_;
v_fileName_3646_ = v_val_3653_;
goto v___jp_3643_;
}
else
{
if (v_useStdin_3317_ == 0)
{
lean_object* v___x_3654_; lean_object* v___x_3655_; 
lean_dec(v___y_3652_);
lean_dec(v___y_3651_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3654_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__13));
v___x_3655_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3654_);
if (lean_obj_tag(v___x_3655_) == 0)
{
lean_object* v___x_3656_; 
lean_dec_ref_known(v___x_3655_, 1);
v___x_3656_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3406_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3664_; 
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3664_ == 0)
{
lean_object* v_unused_3665_; 
v_unused_3665_ = lean_ctor_get(v___x_3656_, 0);
lean_dec(v_unused_3665_);
v___x_3658_ = v___x_3656_;
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
else
{
lean_dec(v___x_3656_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3664_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3660_; lean_object* v___x_3662_; 
v___x_3660_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3659_ == 0)
{
lean_ctor_set(v___x_3658_, 0, v___x_3660_);
v___x_3662_ = v___x_3658_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v___x_3660_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
v_a_3666_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3656_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3656_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
v_a_3674_ = lean_ctor_get(v___x_3655_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3655_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3655_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3655_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
else
{
lean_object* v___x_3682_; 
v___x_3682_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__14));
v___y_3644_ = v___y_3651_;
v___y_3645_ = v___y_3652_;
v_fileName_3646_ = v___x_3682_;
goto v___jp_3643_;
}
}
}
v___jp_3683_:
{
uint8_t v___x_3686_; 
v___x_3686_ = l_List_isEmpty___redArg(v___y_3685_);
if (v___x_3686_ == 0)
{
lean_object* v___x_3687_; lean_object* v___x_3688_; 
lean_dec(v___y_3685_);
lean_dec(v___y_3684_);
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3687_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__13));
v___x_3688_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3687_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v___x_3689_; 
lean_dec_ref_known(v___x_3688_, 1);
v___x_3689_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3406_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3697_; 
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3697_ == 0)
{
lean_object* v_unused_3698_; 
v_unused_3698_ = lean_ctor_get(v___x_3689_, 0);
lean_dec(v_unused_3698_);
v___x_3691_ = v___x_3689_;
v_isShared_3692_ = v_isSharedCheck_3697_;
goto v_resetjp_3690_;
}
else
{
lean_dec(v___x_3689_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3697_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3693_; lean_object* v___x_3695_; 
v___x_3693_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3692_ == 0)
{
lean_ctor_set(v___x_3691_, 0, v___x_3693_);
v___x_3695_ = v___x_3691_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3693_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
v_a_3699_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3689_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3689_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
else
{
lean_object* v_a_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3714_; 
v_a_3707_ = lean_ctor_get(v___x_3688_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3709_ = v___x_3688_;
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_a_3707_);
lean_dec(v___x_3688_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_a_3707_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
return v___x_3712_;
}
}
}
}
else
{
v___y_3651_ = v___y_3684_;
v___y_3652_ = v___y_3685_;
goto v___jp_3650_;
}
}
v___jp_3715_:
{
if (v_run_3332_ == 0)
{
v___y_3684_ = v_fst_3717_;
v___y_3685_ = v_snd_3718_;
goto v___jp_3683_;
}
else
{
if (v___y_3716_ == 0)
{
v___y_3651_ = v_fst_3717_;
v___y_3652_ = v_snd_3718_;
goto v___jp_3650_;
}
else
{
v___y_3684_ = v_fst_3717_;
v___y_3685_ = v_snd_3718_;
goto v___jp_3683_;
}
}
}
v___jp_3719_:
{
if (lean_obj_tag(v_args_3268_) == 0)
{
lean_object* v___x_3721_; 
v___x_3721_ = lean_box(0);
v___y_3716_ = v___y_3720_;
v_fst_3717_ = v___x_3721_;
v_snd_3718_ = v_args_3268_;
goto v___jp_3715_;
}
else
{
lean_object* v_head_3722_; lean_object* v_tail_3723_; lean_object* v___x_3724_; 
v_head_3722_ = lean_ctor_get(v_args_3268_, 0);
lean_inc(v_head_3722_);
v_tail_3723_ = lean_ctor_get(v_args_3268_, 1);
lean_inc(v_tail_3723_);
lean_dec_ref_known(v_args_3268_, 2);
v___x_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3724_, 0, v_head_3722_);
v___y_3716_ = v___y_3720_;
v_fst_3717_ = v___x_3724_;
v_snd_3718_ = v_tail_3723_;
goto v___jp_3715_;
}
}
v___jp_3725_:
{
switch(v_component_3314_)
{
case 0:
{
lean_dec_ref(v_forwardedArgs_3313_);
if (v_onlyDeps_3318_ == 0)
{
v___y_3720_ = v_onlyDeps_3318_;
goto v___jp_3719_;
}
else
{
if (v_depsJson_3320_ == 0)
{
v___y_3720_ = v_depsJson_3320_;
goto v___jp_3719_;
}
else
{
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
if (v_useStdin_3317_ == 0)
{
lean_object* v___x_3726_; 
v___x_3726_ = lean_array_mk(v_args_3268_);
v_fns_3272_ = v___x_3726_;
goto v___jp_3271_;
}
else
{
lean_object* v___x_3727_; lean_object* v___x_3728_; 
lean_dec(v_args_3268_);
v___x_3727_ = lean_get_stdin();
v___x_3728_ = l_IO_FS_Stream_lines(v___x_3727_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref_known(v___x_3728_, 1);
v_fns_3272_ = v_a_3729_;
goto v___jp_3271_;
}
else
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
v_a_3730_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3728_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3728_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_leanOpts_3312_);
lean_dec(v_args_3268_);
v___x_3738_ = lean_array_to_list(v_forwardedArgs_3313_);
v___x_3739_ = l_Lean_Server_Watchdog_watchdogMain(v___x_3738_);
return v___x_3739_;
}
default: 
{
lean_object* v___x_3740_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_forwardedArgs_3313_);
lean_dec(v_args_3268_);
v___x_3740_ = l_Lean_Server_FileWorker_workerMain(v_leanOpts_3312_);
return v___x_3740_;
}
}
}
v___jp_3741_:
{
lean_object* v___x_3742_; lean_object* v_timeout_3743_; lean_object* v___x_3744_; uint8_t v___x_3745_; 
v___x_3742_ = l___private_Lean_Shell_0__Lean_timeout;
v_timeout_3743_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_leanOpts_3312_, v___x_3742_);
v___x_3744_ = lean_unsigned_to_nat(0u);
v___x_3745_ = lean_nat_dec_eq(v_timeout_3743_, v___x_3744_);
if (v___x_3745_ == 0)
{
size_t v___x_3746_; size_t v___x_3747_; size_t v___x_3748_; lean_object* v___x_3749_; 
v___x_3746_ = lean_usize_of_nat(v_timeout_3743_);
lean_dec(v_timeout_3743_);
v___x_3747_ = ((size_t)1000ULL);
v___x_3748_ = lean_usize_mul(v___x_3746_, v___x_3747_);
v___x_3749_ = lean_internal_set_max_heartbeat(v___x_3748_);
goto v___jp_3725_;
}
else
{
lean_dec(v_timeout_3743_);
goto v___jp_3725_;
}
}
}
else
{
lean_object* v___x_3759_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_forwardedArgs_3313_);
lean_dec_ref(v_leanOpts_3312_);
lean_dec(v_args_3268_);
v___x_3759_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_a_3760_; lean_object* v___x_3761_; 
v_a_3760_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3760_);
lean_dec_ref_known(v___x_3759_, 1);
v___x_3761_ = l_Lean_getLibDir(v_a_3760_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3763_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3761_, 1);
v___x_3763_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_3762_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3771_; 
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3771_ == 0)
{
lean_object* v_unused_3772_; 
v_unused_3772_ = lean_ctor_get(v___x_3763_, 0);
lean_dec(v_unused_3772_);
v___x_3765_ = v___x_3763_;
v_isShared_3766_ = v_isSharedCheck_3771_;
goto v_resetjp_3764_;
}
else
{
lean_dec(v___x_3763_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3771_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3767_; lean_object* v___x_3769_; 
v___x_3767_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 0, v___x_3767_);
v___x_3769_ = v___x_3765_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
else
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
v_a_3773_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3775_ = v___x_3763_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3763_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v_a_3773_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
v_a_3781_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3761_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3761_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
v_a_3789_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3759_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3759_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
}
else
{
lean_object* v___x_3797_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3335_);
lean_dec(v_incrLoadFileName_x3f_3334_);
lean_dec(v_incrSaveFileName_x3f_3333_);
lean_dec_ref(v_errorOnKinds_3330_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec(v_bcFileName_x3f_3327_);
lean_dec(v_cFileName_x3f_3326_);
lean_dec(v_ileanFileName_x3f_3325_);
lean_dec(v_oleanFileName_x3f_3324_);
lean_dec(v_setupFileName_x3f_3323_);
lean_dec(v_rootDir_x3f_3322_);
lean_dec_ref(v_forwardedArgs_3313_);
lean_dec_ref(v_leanOpts_3312_);
lean_dec(v_args_3268_);
v___x_3797_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3797_) == 0)
{
lean_object* v_a_3798_; lean_object* v___x_3799_; 
v_a_3798_ = lean_ctor_get(v___x_3797_, 0);
lean_inc(v_a_3798_);
lean_dec_ref_known(v___x_3797_, 1);
v___x_3799_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_3798_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3807_; 
v_isSharedCheck_3807_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3807_ == 0)
{
lean_object* v_unused_3808_; 
v_unused_3808_ = lean_ctor_get(v___x_3799_, 0);
lean_dec(v_unused_3808_);
v___x_3801_ = v___x_3799_;
v_isShared_3802_ = v_isSharedCheck_3807_;
goto v_resetjp_3800_;
}
else
{
lean_dec(v___x_3799_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3807_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3803_; lean_object* v___x_3805_; 
v___x_3803_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3803_);
v___x_3805_ = v___x_3801_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v___x_3803_);
v___x_3805_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
return v___x_3805_;
}
}
}
else
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3816_; 
v_a_3809_ = lean_ctor_get(v___x_3799_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3811_ = v___x_3799_;
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3799_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_a_3809_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
return v___x_3814_;
}
}
}
}
else
{
lean_object* v_a_3817_; lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
v_a_3817_ = lean_ctor_get(v___x_3797_, 0);
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3824_ == 0)
{
v___x_3819_ = v___x_3797_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_inc(v_a_3817_);
lean_dec(v___x_3797_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3817_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
}
v___jp_3271_:
{
lean_object* v___x_3273_; 
v___x_3273_ = l_Lean_printImportsJson(v_fns_3272_);
if (lean_obj_tag(v___x_3273_) == 0)
{
lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3281_; 
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3281_ == 0)
{
lean_object* v_unused_3282_; 
v_unused_3282_ = lean_ctor_get(v___x_3273_, 0);
lean_dec(v_unused_3282_);
v___x_3275_ = v___x_3273_;
v_isShared_3276_ = v_isSharedCheck_3281_;
goto v_resetjp_3274_;
}
else
{
lean_dec(v___x_3273_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3281_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3277_; lean_object* v___x_3279_; 
v___x_3277_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3276_ == 0)
{
lean_ctor_set(v___x_3275_, 0, v___x_3277_);
v___x_3279_ = v___x_3275_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v___x_3277_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
else
{
lean_object* v_a_3283_; lean_object* v___x_3285_; uint8_t v_isShared_3286_; uint8_t v_isSharedCheck_3290_; 
v_a_3283_ = lean_ctor_get(v___x_3273_, 0);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3273_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3285_ = v___x_3273_;
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
else
{
lean_inc(v_a_3283_);
lean_dec(v___x_3273_);
v___x_3285_ = lean_box(0);
v_isShared_3286_ = v_isSharedCheck_3290_;
goto v_resetjp_3284_;
}
v_resetjp_3284_:
{
lean_object* v___x_3288_; 
if (v_isShared_3286_ == 0)
{
v___x_3288_ = v___x_3285_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3289_; 
v_reuseFailAlloc_3289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3289_, 0, v_a_3283_);
v___x_3288_ = v_reuseFailAlloc_3289_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
return v___x_3288_;
}
}
}
}
v___jp_3291_:
{
uint8_t v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = 0;
v___x_3293_ = lean_io_exit(v___x_3292_);
return v___x_3293_;
}
v___jp_3294_:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3295_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3295_);
return v___x_3296_;
}
v___jp_3297_:
{
lean_object* v___x_3299_; uint8_t v___x_3300_; 
v___x_3299_ = lean_display_cumulative_profiling_times();
v___x_3300_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__0, &l___private_Lean_Shell_0__Lean_shellMain___closed__0_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0);
if (v___x_3300_ == 0)
{
if (lean_obj_tag(v___y_3298_) == 0)
{
if (v___x_3300_ == 0)
{
uint8_t v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = 1;
v___x_3302_ = lean_io_exit(v___x_3301_);
return v___x_3302_;
}
else
{
goto v___jp_3291_;
}
}
else
{
lean_dec_ref_known(v___y_3298_, 1);
goto v___jp_3291_;
}
}
else
{
if (lean_obj_tag(v___y_3298_) == 0)
{
goto v___jp_3294_;
}
else
{
lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3310_; 
v_isSharedCheck_3310_ = !lean_is_exclusive(v___y_3298_);
if (v_isSharedCheck_3310_ == 0)
{
lean_object* v_unused_3311_; 
v_unused_3311_ = lean_ctor_get(v___y_3298_, 0);
lean_dec(v_unused_3311_);
v___x_3304_ = v___y_3298_;
v_isShared_3305_ = v_isSharedCheck_3310_;
goto v_resetjp_3303_;
}
else
{
lean_dec(v___y_3298_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3310_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
if (v___x_3300_ == 0)
{
lean_del_object(v___x_3304_);
goto v___jp_3294_;
}
else
{
lean_object* v___x_3306_; lean_object* v___x_3308_; 
v___x_3306_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3305_ == 0)
{
lean_ctor_set_tag(v___x_3304_, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3306_);
v___x_3308_ = v___x_3304_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3306_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
}
}
v___jp_3336_:
{
if (lean_obj_tag(v_zigFileName_x3f_3328_) == 1)
{
lean_object* v_val_3340_; uint8_t v___x_3341_; lean_object* v___x_3342_; 
v_val_3340_ = lean_ctor_get(v_zigFileName_x3f_3328_, 0);
lean_inc(v_val_3340_);
lean_dec_ref_known(v_zigFileName_x3f_3328_, 1);
v___x_3341_ = 1;
v___x_3342_ = lean_io_prim_handle_mk(v_val_3340_, v___x_3341_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___f_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
lean_dec(v_val_3340_);
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
lean_inc(v_a_3343_);
lean_dec_ref_known(v___x_3342_, 1);
v___f_3344_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3344_, 0, v___y_3338_);
lean_closure_set(v___f_3344_, 1, v___y_3337_);
lean_closure_set(v___f_3344_, 2, v_a_3343_);
v___x_3345_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__1));
v___x_3346_ = lean_box(0);
v___x_3347_ = l_Lean_profileitIOUnsafe___redArg(v___x_3345_, v_leanOpts_3312_, v___f_3344_, v___x_3346_);
lean_dec_ref(v_leanOpts_3312_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_dec_ref_known(v___x_3347_, 1);
v___y_3298_ = v___y_3339_;
goto v___jp_3297_;
}
else
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3355_; 
lean_dec(v___y_3339_);
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3350_ = v___x_3347_;
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3347_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3355_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3353_; 
if (v_isShared_3351_ == 0)
{
v___x_3353_ = v___x_3350_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3348_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
else
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_dec_ref_known(v___x_3342_, 1);
lean_dec(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec_ref(v_leanOpts_3312_);
v___x_3356_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__2));
v___x_3357_ = lean_string_append(v___x_3356_, v_val_3340_);
lean_dec(v_val_3340_);
v___x_3358_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3359_ = lean_string_append(v___x_3357_, v___x_3358_);
v___x_3360_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3359_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3368_; 
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3368_ == 0)
{
lean_object* v_unused_3369_; 
v_unused_3369_ = lean_ctor_get(v___x_3360_, 0);
lean_dec(v_unused_3369_);
v___x_3362_ = v___x_3360_;
v_isShared_3363_ = v_isSharedCheck_3368_;
goto v_resetjp_3361_;
}
else
{
lean_dec(v___x_3360_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3368_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3364_; lean_object* v___x_3366_; 
v___x_3364_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3363_ == 0)
{
lean_ctor_set(v___x_3362_, 0, v___x_3364_);
v___x_3366_ = v___x_3362_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v___x_3364_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
v_a_3370_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3360_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3360_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
}
else
{
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec_ref(v_leanOpts_3312_);
v___y_3298_ = v___y_3339_;
goto v___jp_3297_;
}
}
v___jp_3378_:
{
if (lean_obj_tag(v_bcFileName_x3f_3327_) == 1)
{
lean_object* v_val_3384_; lean_object* v___x_3385_; 
v_val_3384_ = lean_ctor_get(v_bcFileName_x3f_3327_, 0);
lean_inc(v_val_3384_);
lean_dec_ref_known(v_bcFileName_x3f_3327_, 1);
v___x_3385_ = lean_init_llvm();
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
lean_dec_ref_known(v___x_3385_, 1);
v___x_3386_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__3));
v___x_3387_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
lean_closure_set(v___x_3387_, 0, v___y_3382_);
lean_closure_set(v___x_3387_, 1, v___y_3381_);
lean_closure_set(v___x_3387_, 2, v_val_3384_);
v___x_3388_ = lean_box(0);
v___x_3389_ = l_Lean_profileitIOUnsafe___redArg(v___x_3386_, v_leanOpts_3312_, v___x_3387_, v___x_3388_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_dec_ref_known(v___x_3389_, 1);
v___y_3337_ = v___y_3380_;
v___y_3338_ = v___y_3379_;
v___y_3339_ = v___y_3383_;
goto v___jp_3336_;
}
else
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3389_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3389_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
else
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3405_; 
lean_dec(v_val_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec(v_zigFileName_x3f_3328_);
lean_dec_ref(v_leanOpts_3312_);
v_a_3398_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3400_ = v___x_3385_;
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3385_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3403_; 
if (v_isShared_3401_ == 0)
{
v___x_3403_ = v___x_3400_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3398_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
return v___x_3403_;
}
}
}
}
else
{
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec(v_bcFileName_x3f_3327_);
v___y_3337_ = v___y_3380_;
v___y_3338_ = v___y_3379_;
v___y_3339_ = v___y_3383_;
goto v___jp_3336_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object* v_args_3825_, lean_object* v_opts_3826_, lean_object* v_a_3827_){
_start:
{
lean_object* v_res_3828_; 
v_res_3828_ = lean_shell_main(v_args_3825_, v_opts_3826_);
return v_res_3828_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object* v_val_3829_, lean_object* v_inst_3830_, lean_object* v_R_3831_, lean_object* v_a_3832_, lean_object* v_b_3833_, lean_object* v_c_3834_){
_start:
{
lean_object* v___x_3835_; 
v___x_3835_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3829_, v_a_3832_, v_b_3833_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object* v_val_3836_, lean_object* v_inst_3837_, lean_object* v_R_3838_, lean_object* v_a_3839_, lean_object* v_b_3840_, lean_object* v_c_3841_){
_start:
{
lean_object* v_res_3842_; 
v_res_3842_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(v_val_3836_, v_inst_3837_, v_R_3838_, v_a_3839_, v_b_3840_, v_c_3841_);
lean_dec(v_b_3840_);
lean_dec_ref(v_val_3836_);
return v_res_3842_;
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
