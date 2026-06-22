// Lean compiler output
// Module: Lean.Shell
// Imports: import Lean.Elab.Frontend import Lean.Elab.ParseImportsFast import Lean.Server.Watchdog import Lean.Server.FileWorker import Lean.Compiler.LCNF.EmitC import Lean.Compiler.LCNF.EmitZig import Lean.Compiler.IR import Init.System.Platform import Lean.Compiler.Options
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
lean_object* l_Lean_compileDecls(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_IR_findEnvDecl(lean_object*, lean_object*);
lean_object* l_Lean_Elab_runFrontend(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_async;
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
uint32_t lean_eval_main_decl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "missing IR for `main` after compileDecls"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__4 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__4_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__5;
static const lean_array_object l___private_Lean_Shell_0__Lean_shellMain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__6 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__6_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "C code generation"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__7 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__7_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__8 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__8_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "main"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__9 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__9_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__9_value),LEAN_SCALAR_PTR_LITERAL(167, 14, 67, 68, 149, 142, 182, 10)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__10 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__10_value;
static const lean_array_object l___private_Lean_Shell_0__Lean_shellMain___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__10_value)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__11 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__11_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_stdin"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__12 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__12_value;
static const lean_ctor_object l___private_Lean_Shell_0__Lean_shellMain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__12_value),LEAN_SCALAR_PTR_LITERAL(37, 142, 62, 167, 41, 238, 22, 79)}};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__13 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__13_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lean4"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__14 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__14_value;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__15;
static lean_once_cell_t l___private_Lean_Shell_0__Lean_shellMain___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__16;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown language '"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__17 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__17_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Expected exactly one file name"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__18 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__18_value;
static const lean_string_object l___private_Lean_Shell_0__Lean_shellMain___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<stdin>"};
static const lean_object* l___private_Lean_Shell_0__Lean_shellMain___closed__19 = (const lean_object*)&l___private_Lean_Shell_0__Lean_shellMain___closed__19_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_runMain___boxed(lean_object* v_env_9_, lean_object* v_opts_10_, lean_object* v_args_11_, lean_object* v_decl_12_, lean_object* v_a_00___x40___internal___hyg_13_){
_start:
{
uint32_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = lean_eval_main_decl(v_env_9_, v_opts_10_, v_args_11_, v_decl_12_);
lean_dec_ref(v_decl_12_);
lean_dec(v_args_11_);
lean_dec_ref(v_opts_10_);
lean_dec_ref(v_env_9_);
v_r_15_ = lean_box_uint32(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initLLVM___boxed(lean_object* v_a_00___x40___internal___hyg_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = lean_init_llvm();
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitLLVM___boxed(lean_object* v_env_23_, lean_object* v_modName_24_, lean_object* v_filepath_25_, lean_object* v_a_00___x40___internal___hyg_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = lean_emit_llvm(v_env_23_, v_modName_24_, v_filepath_25_);
return v_res_27_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(lean_object* v_opts_28_, lean_object* v_opt_29_){
_start:
{
lean_object* v_name_30_; lean_object* v_defValue_31_; lean_object* v_map_32_; lean_object* v___x_33_; 
v_name_30_ = lean_ctor_get(v_opt_29_, 0);
v_defValue_31_ = lean_ctor_get(v_opt_29_, 1);
v_map_32_ = lean_ctor_get(v_opts_28_, 0);
v___x_33_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_32_, v_name_30_);
if (lean_obj_tag(v___x_33_) == 0)
{
uint8_t v___x_34_; 
v___x_34_ = lean_unbox(v_defValue_31_);
return v___x_34_;
}
else
{
lean_object* v_val_35_; 
v_val_35_ = lean_ctor_get(v___x_33_, 0);
lean_inc(v_val_35_);
lean_dec_ref_known(v___x_33_, 1);
if (lean_obj_tag(v_val_35_) == 1)
{
uint8_t v_v_36_; 
v_v_36_ = lean_ctor_get_uint8(v_val_35_, 0);
lean_dec_ref_known(v_val_35_, 0);
return v_v_36_;
}
else
{
uint8_t v___x_37_; 
lean_dec(v_val_35_);
v___x_37_ = lean_unbox(v_defValue_31_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0___boxed(lean_object* v_opts_38_, lean_object* v_opt_39_){
_start:
{
uint8_t v_res_40_; lean_object* v_r_41_; 
v_res_40_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v_opts_38_, v_opt_39_);
lean_dec_ref(v_opt_39_);
lean_dec_ref(v_opts_38_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(lean_object* v_opts_42_, lean_object* v_opt_43_){
_start:
{
lean_object* v_name_44_; lean_object* v_defValue_45_; lean_object* v_map_46_; lean_object* v___x_47_; 
v_name_44_ = lean_ctor_get(v_opt_43_, 0);
v_defValue_45_ = lean_ctor_get(v_opt_43_, 1);
v_map_46_ = lean_ctor_get(v_opts_42_, 0);
v___x_47_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_46_, v_name_44_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_inc(v_defValue_45_);
return v_defValue_45_;
}
else
{
lean_object* v_val_48_; 
v_val_48_ = lean_ctor_get(v___x_47_, 0);
lean_inc(v_val_48_);
lean_dec_ref_known(v___x_47_, 1);
if (lean_obj_tag(v_val_48_) == 3)
{
lean_object* v_v_49_; 
v_v_49_ = lean_ctor_get(v_val_48_, 0);
lean_inc(v_v_49_);
lean_dec_ref_known(v_val_48_, 1);
return v_v_49_;
}
else
{
lean_dec(v_val_48_);
lean_inc(v_defValue_45_);
return v_defValue_45_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1___boxed(lean_object* v_opts_50_, lean_object* v_opt_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_opts_50_, v_opt_51_);
lean_dec_ref(v_opt_51_);
lean_dec_ref(v_opts_50_);
return v_res_52_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__0(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = lean_unsigned_to_nat(32u);
v___x_54_ = lean_mk_empty_array_with_capacity(v___x_53_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1(void){
_start:
{
size_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_56_ = ((size_t)5ULL);
v___x_57_ = lean_unsigned_to_nat(0u);
v___x_58_ = lean_unsigned_to_nat(32u);
v___x_59_ = lean_mk_empty_array_with_capacity(v___x_58_);
v___x_60_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__0, &l___private_Lean_Shell_0__Lean_emitZig___closed__0_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__0);
v___x_61_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___x_59_);
lean_ctor_set(v___x_61_, 2, v___x_57_);
lean_ctor_set(v___x_61_, 3, v___x_57_);
lean_ctor_set_usize(v___x_61_, 4, v___x_56_);
return v___x_61_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__2(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_62_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__2, &l___private_Lean_Shell_0__Lean_emitZig___closed__2_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__2);
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__3, &l___private_Lean_Shell_0__Lean_emitZig___closed__3_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__3);
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_67_ = l_Lean_NameSet_empty;
v___x_68_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__1, &l___private_Lean_Shell_0__Lean_emitZig___closed__1_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1);
v___x_69_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
lean_ctor_set(v___x_69_, 2, v___x_67_);
return v___x_69_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = lean_unsigned_to_nat(1u);
v___x_71_ = l_Lean_firstFrontendMacroScope;
v___x_72_ = lean_nat_add(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11(void){
_start:
{
lean_object* v___x_83_; uint64_t v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__1, &l___private_Lean_Shell_0__Lean_emitZig___closed__1_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1);
v___x_84_ = 0ULL;
v___x_85_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set_uint64(v___x_85_, sizeof(void*)*1, v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; lean_object* v___x_89_; 
v___x_86_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__1, &l___private_Lean_Shell_0__Lean_emitZig___closed__1_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__1);
v___x_87_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__3, &l___private_Lean_Shell_0__Lean_emitZig___closed__3_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__3);
v___x_88_ = 1;
v___x_89_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set(v___x_89_, 1, v___x_87_);
lean_ctor_set(v___x_89_, 2, v___x_86_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*3, v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_93_ = l_Lean_Options_empty;
v___x_94_ = l_Lean_Core_getMaxHeartbeats(v___x_93_);
return v___x_94_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_emitZig___closed__16(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_95_ = l_Lean_diagnostics;
v___x_96_ = l_Lean_Options_empty;
v___x_97_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v___x_96_, v___x_95_);
return v___x_97_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_emitZig___closed__17(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_98_ = l_Lean_maxRecDepth;
v___x_99_ = l_Lean_Options_empty;
v___x_100_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v___x_99_, v___x_98_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitZig(lean_object* v_mainModuleName_104_, lean_object* v_env_105_){
_start:
{
lean_object* v_a_108_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v_env_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; lean_object* v_fileName_140_; lean_object* v_fileMap_141_; lean_object* v_currRecDepth_142_; lean_object* v_ref_143_; lean_object* v_currNamespace_144_; lean_object* v_openDecls_145_; lean_object* v_initHeartbeats_146_; lean_object* v_maxHeartbeats_147_; lean_object* v_quotContext_148_; lean_object* v_currMacroScope_149_; lean_object* v_cancelTk_x3f_150_; uint8_t v_suppressElabErrors_151_; lean_object* v_inheritedTraceOptions_152_; lean_object* v___y_153_; uint8_t v___y_189_; uint8_t v___x_209_; 
v___x_111_ = lean_unsigned_to_nat(0u);
v___x_112_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__4, &l___private_Lean_Shell_0__Lean_emitZig___closed__4_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4);
v___x_113_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__5, &l___private_Lean_Shell_0__Lean_emitZig___closed__5_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5);
v___x_114_ = lean_io_get_num_heartbeats();
v___x_115_ = l_Lean_firstFrontendMacroScope;
v___x_116_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__6, &l___private_Lean_Shell_0__Lean_emitZig___closed__6_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6);
v___x_117_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__9));
v___x_118_ = lean_box(0);
v___x_119_ = lean_box(0);
v___x_120_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__10));
v___x_121_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__11, &l___private_Lean_Shell_0__Lean_emitZig___closed__11_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11);
v___x_122_ = 1;
v___x_123_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__12, &l___private_Lean_Shell_0__Lean_emitZig___closed__12_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12);
v___x_124_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__13));
v___x_125_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_125_, 0, v_env_105_);
lean_ctor_set(v___x_125_, 1, v___x_116_);
lean_ctor_set(v___x_125_, 2, v___x_117_);
lean_ctor_set(v___x_125_, 3, v___x_120_);
lean_ctor_set(v___x_125_, 4, v___x_121_);
lean_ctor_set(v___x_125_, 5, v___x_112_);
lean_ctor_set(v___x_125_, 6, v___x_113_);
lean_ctor_set(v___x_125_, 7, v___x_123_);
lean_ctor_set(v___x_125_, 8, v___x_124_);
v___x_126_ = lean_st_mk_ref(v___x_125_);
v___x_127_ = l_Lean_inheritedTraceOptions;
v___x_128_ = lean_st_ref_get(v___x_127_);
v___x_129_ = lean_st_ref_get(v___x_126_);
v_env_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc_ref(v_env_130_);
lean_dec(v___x_129_);
v___x_131_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__14));
v___x_132_ = l_Lean_instInhabitedFileMap_default;
v___x_133_ = l_Lean_Options_empty;
v___x_134_ = lean_box(0);
v___x_135_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__15, &l___private_Lean_Shell_0__Lean_emitZig___closed__15_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15);
v___x_136_ = 0;
v___x_137_ = lean_box(0);
v___x_138_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__16, &l___private_Lean_Shell_0__Lean_emitZig___closed__16_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__16);
v___x_209_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_130_);
lean_dec_ref(v_env_130_);
if (v___x_209_ == 0)
{
if (v___x_138_ == 0)
{
lean_inc(v___x_126_);
v_fileName_140_ = v___x_131_;
v_fileMap_141_ = v___x_132_;
v_currRecDepth_142_ = v___x_111_;
v_ref_143_ = v___x_134_;
v_currNamespace_144_ = v___x_118_;
v_openDecls_145_ = v___x_119_;
v_initHeartbeats_146_ = v___x_114_;
v_maxHeartbeats_147_ = v___x_135_;
v_quotContext_148_ = v___x_118_;
v_currMacroScope_149_ = v___x_115_;
v_cancelTk_x3f_150_ = v___x_137_;
v_suppressElabErrors_151_ = v___x_136_;
v_inheritedTraceOptions_152_ = v___x_128_;
v___y_153_ = v___x_126_;
goto v___jp_139_;
}
else
{
v___y_189_ = v___x_209_;
goto v___jp_188_;
}
}
else
{
v___y_189_ = v___x_138_;
goto v___jp_188_;
}
v___jp_107_:
{
lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_109_ = lean_mk_io_user_error(v_a_108_);
v___x_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
v___jp_139_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_154_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__17, &l___private_Lean_Shell_0__Lean_emitZig___closed__17_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__17);
lean_inc(v_cancelTk_x3f_150_);
lean_inc(v_currMacroScope_149_);
lean_inc(v_quotContext_148_);
lean_inc(v_maxHeartbeats_147_);
lean_inc(v_openDecls_145_);
lean_inc(v_currNamespace_144_);
lean_inc(v_ref_143_);
lean_inc_ref(v_fileMap_141_);
lean_inc_ref(v_fileName_140_);
v___x_155_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_155_, 0, v_fileName_140_);
lean_ctor_set(v___x_155_, 1, v_fileMap_141_);
lean_ctor_set(v___x_155_, 2, v___x_133_);
lean_ctor_set(v___x_155_, 3, v_currRecDepth_142_);
lean_ctor_set(v___x_155_, 4, v___x_154_);
lean_ctor_set(v___x_155_, 5, v_ref_143_);
lean_ctor_set(v___x_155_, 6, v_currNamespace_144_);
lean_ctor_set(v___x_155_, 7, v_openDecls_145_);
lean_ctor_set(v___x_155_, 8, v_initHeartbeats_146_);
lean_ctor_set(v___x_155_, 9, v_maxHeartbeats_147_);
lean_ctor_set(v___x_155_, 10, v_quotContext_148_);
lean_ctor_set(v___x_155_, 11, v_currMacroScope_149_);
lean_ctor_set(v___x_155_, 12, v_cancelTk_x3f_150_);
lean_ctor_set(v___x_155_, 13, v_inheritedTraceOptions_152_);
lean_ctor_set_uint8(v___x_155_, sizeof(void*)*14, v___x_138_);
lean_ctor_set_uint8(v___x_155_, sizeof(void*)*14 + 1, v_suppressElabErrors_151_);
v___x_156_ = l_EmitZig_emitZig(v_mainModuleName_104_, v___x_155_, v___y_153_);
lean_dec(v___y_153_);
lean_dec_ref_known(v___x_155_, 14);
if (lean_obj_tag(v___x_156_) == 0)
{
lean_object* v_a_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_165_; 
v_a_157_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_165_ == 0)
{
v___x_159_ = v___x_156_;
v_isShared_160_ = v_isSharedCheck_165_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_a_157_);
lean_dec(v___x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_165_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v___x_163_; 
v___x_161_ = lean_st_ref_get(v___x_126_);
lean_dec(v___x_126_);
lean_dec(v___x_161_);
if (v_isShared_160_ == 0)
{
v___x_163_ = v___x_159_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_a_157_);
v___x_163_ = v_reuseFailAlloc_164_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
return v___x_163_;
}
}
}
else
{
lean_object* v_a_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_187_; 
lean_dec(v___x_126_);
v_a_166_ = lean_ctor_get(v___x_156_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_156_);
if (v_isSharedCheck_187_ == 0)
{
v___x_168_ = v___x_156_;
v_isShared_169_ = v_isSharedCheck_187_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_a_166_);
lean_dec(v___x_156_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_187_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
if (lean_obj_tag(v_a_166_) == 0)
{
lean_object* v_msg_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
v_msg_170_ = lean_ctor_get(v_a_166_, 1);
lean_inc_ref(v_msg_170_);
lean_dec_ref_known(v_a_166_, 2);
v___x_171_ = l_Lean_MessageData_toString(v_msg_170_);
v___x_172_ = lean_mk_io_user_error(v___x_171_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 0, v___x_172_);
v___x_174_ = v___x_168_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
else
{
lean_object* v_id_176_; lean_object* v___x_177_; 
lean_del_object(v___x_168_);
v_id_176_ = lean_ctor_get(v_a_166_, 0);
lean_inc(v_id_176_);
lean_dec_ref_known(v_a_166_, 2);
v___x_177_ = l_Lean_InternalExceptionId_getName(v_id_176_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec(v_id_176_);
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
v___x_179_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__18));
v___x_180_ = l_Lean_Name_toString(v_a_178_, v___x_122_);
v___x_181_ = lean_string_append(v___x_179_, v___x_180_);
lean_dec_ref(v___x_180_);
v_a_108_ = v___x_181_;
goto v___jp_107_;
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec_ref_known(v___x_177_, 1);
v___x_182_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__19));
v___x_183_ = l_Nat_reprFast(v_id_176_);
v___x_184_ = lean_string_append(v___x_182_, v___x_183_);
lean_dec_ref(v___x_183_);
v___x_185_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__20));
v___x_186_ = lean_string_append(v___x_184_, v___x_185_);
v_a_108_ = v___x_186_;
goto v___jp_107_;
}
}
}
}
}
v___jp_188_:
{
if (v___y_189_ == 0)
{
lean_object* v___x_190_; lean_object* v_env_191_; lean_object* v_nextMacroScope_192_; lean_object* v_ngen_193_; lean_object* v_auxDeclNGen_194_; lean_object* v_traceState_195_; lean_object* v_messages_196_; lean_object* v_infoState_197_; lean_object* v_snapshotTasks_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_207_; 
v___x_190_ = lean_st_ref_take(v___x_126_);
v_env_191_ = lean_ctor_get(v___x_190_, 0);
v_nextMacroScope_192_ = lean_ctor_get(v___x_190_, 1);
v_ngen_193_ = lean_ctor_get(v___x_190_, 2);
v_auxDeclNGen_194_ = lean_ctor_get(v___x_190_, 3);
v_traceState_195_ = lean_ctor_get(v___x_190_, 4);
v_messages_196_ = lean_ctor_get(v___x_190_, 6);
v_infoState_197_ = lean_ctor_get(v___x_190_, 7);
v_snapshotTasks_198_ = lean_ctor_get(v___x_190_, 8);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_190_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; 
v_unused_208_ = lean_ctor_get(v___x_190_, 5);
lean_dec(v_unused_208_);
v___x_200_ = v___x_190_;
v_isShared_201_ = v_isSharedCheck_207_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_snapshotTasks_198_);
lean_inc(v_infoState_197_);
lean_inc(v_messages_196_);
lean_inc(v_traceState_195_);
lean_inc(v_auxDeclNGen_194_);
lean_inc(v_ngen_193_);
lean_inc(v_nextMacroScope_192_);
lean_inc(v_env_191_);
lean_dec(v___x_190_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_207_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_202_ = l_Lean_Kernel_enableDiag(v_env_191_, v___x_138_);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 5, v___x_112_);
lean_ctor_set(v___x_200_, 0, v___x_202_);
v___x_204_ = v___x_200_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_nextMacroScope_192_);
lean_ctor_set(v_reuseFailAlloc_206_, 2, v_ngen_193_);
lean_ctor_set(v_reuseFailAlloc_206_, 3, v_auxDeclNGen_194_);
lean_ctor_set(v_reuseFailAlloc_206_, 4, v_traceState_195_);
lean_ctor_set(v_reuseFailAlloc_206_, 5, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_206_, 6, v_messages_196_);
lean_ctor_set(v_reuseFailAlloc_206_, 7, v_infoState_197_);
lean_ctor_set(v_reuseFailAlloc_206_, 8, v_snapshotTasks_198_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
lean_object* v___x_205_; 
v___x_205_ = lean_st_ref_set(v___x_126_, v___x_204_);
lean_inc(v___x_126_);
v_fileName_140_ = v___x_131_;
v_fileMap_141_ = v___x_132_;
v_currRecDepth_142_ = v___x_111_;
v_ref_143_ = v___x_134_;
v_currNamespace_144_ = v___x_118_;
v_openDecls_145_ = v___x_119_;
v_initHeartbeats_146_ = v___x_114_;
v_maxHeartbeats_147_ = v___x_135_;
v_quotContext_148_ = v___x_118_;
v_currMacroScope_149_ = v___x_115_;
v_cancelTk_x3f_150_ = v___x_137_;
v_suppressElabErrors_151_ = v___x_136_;
v_inheritedTraceOptions_152_ = v___x_128_;
v___y_153_ = v___x_126_;
goto v___jp_139_;
}
}
}
else
{
lean_inc(v___x_126_);
v_fileName_140_ = v___x_131_;
v_fileMap_141_ = v___x_132_;
v_currRecDepth_142_ = v___x_111_;
v_ref_143_ = v___x_134_;
v_currNamespace_144_ = v___x_118_;
v_openDecls_145_ = v___x_119_;
v_initHeartbeats_146_ = v___x_114_;
v_maxHeartbeats_147_ = v___x_135_;
v_quotContext_148_ = v___x_118_;
v_currMacroScope_149_ = v___x_115_;
v_cancelTk_x3f_150_ = v___x_137_;
v_suppressElabErrors_151_ = v___x_136_;
v_inheritedTraceOptions_152_ = v___x_128_;
v___y_153_ = v___x_126_;
goto v___jp_139_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_emitZig___boxed(lean_object* v_mainModuleName_210_, lean_object* v_env_211_, lean_object* v_a_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l___private_Lean_Shell_0__Lean_emitZig(v_mainModuleName_210_, v_env_211_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_hasAddressSanitizer___boxed(lean_object* v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lean_internal_has_address_sanitizer(v_x_00___x40_Lean_Shell_2339721992____hygCtx___hyg_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isMultiThread___boxed(lean_object* v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_219_){
_start:
{
uint8_t v_res_220_; lean_object* v_r_221_; 
v_res_220_ = lean_internal_is_multi_thread(v_x_00___x40_Lean_Shell_3295292909____hygCtx___hyg_219_);
v_r_221_ = lean_box(v_res_220_);
return v_r_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_isDebug___boxed(lean_object* v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = lean_internal_is_debug(v_x_00___x40_Lean_Shell_97005966____hygCtx___hyg_223_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBuildType___boxed(lean_object* v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = lean_internal_get_build_type(v_x_00___x40_Lean_Shell_1721435280____hygCtx___hyg_227_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxMemory___boxed(lean_object* v_max_231_, lean_object* v_a_00___x40___internal___hyg_232_){
_start:
{
size_t v_max_boxed_233_; lean_object* v_res_234_; 
v_max_boxed_233_ = lean_unbox_usize(v_max_231_);
lean_dec(v_max_231_);
v_res_234_ = lean_internal_set_max_memory(v_max_boxed_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxMemory___boxed(lean_object* v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = lean_internal_get_default_max_memory(v_x_00___x40_Lean_Shell_1091001955____hygCtx___hyg_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultMaxHeartbeat___boxed(lean_object* v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = lean_internal_get_default_max_heartbeat(v_x_00___x40_Lean_Shell_2736094960____hygCtx___hyg_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setMaxHeartbeat___boxed(lean_object* v_max_243_, lean_object* v_a_00___x40___internal___hyg_244_){
_start:
{
size_t v_max_boxed_245_; lean_object* v_res_246_; 
v_max_boxed_245_ = lean_unbox_usize(v_max_243_);
lean_dec(v_max_243_);
v_res_246_ = lean_internal_set_max_heartbeat(v_max_boxed_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultVerbose___boxed(lean_object* v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_248_){
_start:
{
uint8_t v_res_249_; lean_object* v_r_250_; 
v_res_249_ = lean_internal_get_default_verbose(v_x_00___x40_Lean_Shell_28281146____hygCtx___hyg_248_);
v_r_250_ = lean_box(v_res_249_);
return v_r_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setExitOnPanic___boxed(lean_object* v_exit_253_, lean_object* v_a_00___x40___internal___hyg_254_){
_start:
{
uint8_t v_exit_boxed_255_; lean_object* v_res_256_; 
v_exit_boxed_255_ = lean_unbox(v_exit_253_);
v_res_256_ = lean_internal_set_exit_on_panic(v_exit_boxed_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_setThreadStackSize___boxed(lean_object* v_sz_259_, lean_object* v_a_00___x40___internal___hyg_260_){
_start:
{
size_t v_sz_boxed_261_; lean_object* v_res_262_; 
v_sz_boxed_261_ = lean_unbox_usize(v_sz_259_);
lean_dec(v_sz_259_);
v_res_262_ = lean_internal_set_thread_stack_size(v_sz_boxed_261_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_enableDebug___boxed(lean_object* v_tag_265_, lean_object* v_a_00___x40___internal___hyg_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = lean_internal_enable_debug(v_tag_265_);
lean_dec_ref(v_tag_265_);
return v_res_267_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_269_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_270_ = l_Lean_version_specialDesc;
v___x_271_ = lean_string_dec_eq(v___x_270_, v___x_269_);
return v___x_271_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__2));
v___x_274_ = l_Lean_versionStringCore;
v___x_275_ = lean_string_append(v___x_274_, v___x_273_);
return v___x_275_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_276_ = l_Lean_version_specialDesc;
v___x_277_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__3, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__3_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__3);
v___x_278_ = lean_string_append(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_280_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__5));
v___x_281_ = l_Lean_versionStringCore;
v___x_282_ = lean_string_append(v___x_281_, v___x_280_);
return v___x_282_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shortVersionString(void){
_start:
{
uint8_t v___x_283_; 
v___x_283_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__1, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__1_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__1);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__4, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__4_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__4);
return v___x_284_;
}
else
{
uint8_t v___x_285_; 
v___x_285_ = l_Lean_version_isRelease;
if (v___x_285_ == 0)
{
lean_object* v___x_286_; 
v___x_286_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shortVersionString___closed__6, &l___private_Lean_Shell_0__Lean_shortVersionString___closed__6_once, _init_l___private_Lean_Shell_0__Lean_shortVersionString___closed__6);
return v___x_286_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_versionStringCore;
return v___x_287_;
}
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_box(0);
v___x_291_ = lean_internal_get_build_type(v___x_290_);
return v___x_291_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_293_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_294_ = l_Lean_githash;
v___x_295_ = lean_string_dec_eq(v___x_294_, v___x_293_);
return v___x_295_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v___x_297_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_298_ = l_System_Platform_target;
v___x_299_ = lean_string_dec_eq(v___x_298_, v___x_297_);
return v___x_299_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7(void){
_start:
{
lean_object* v___x_300_; lean_object* v_ver_301_; lean_object* v___x_302_; 
v___x_300_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v_ver_301_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_302_ = lean_string_append(v_ver_301_, v___x_300_);
return v___x_302_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v_ver_305_; 
v___x_303_ = l_System_Platform_target;
v___x_304_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__7, &l___private_Lean_Shell_0__Lean_versionHeader___closed__7_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__7);
v_ver_305_ = lean_string_append(v___x_304_, v___x_303_);
return v_ver_305_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_versionHeader(void){
_start:
{
lean_object* v_ver_307_; lean_object* v_ver_317_; lean_object* v_ver_323_; uint8_t v___x_324_; 
v_ver_323_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_324_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__6, &l___private_Lean_Shell_0__Lean_versionHeader___closed__6_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__6);
if (v___x_324_ == 0)
{
lean_object* v_ver_325_; 
v_ver_325_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__8, &l___private_Lean_Shell_0__Lean_versionHeader___closed__8_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__8);
v_ver_317_ = v_ver_325_;
goto v___jp_316_;
}
else
{
v_ver_317_ = v_ver_323_;
goto v___jp_316_;
}
v___jp_306_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_308_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__0));
v___x_309_ = lean_string_append(v___x_308_, v_ver_307_);
lean_dec_ref(v_ver_307_);
v___x_310_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__1));
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
v___x_312_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__2, &l___private_Lean_Shell_0__Lean_versionHeader___closed__2_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__2);
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
v___x_314_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__3));
v___x_315_ = lean_string_append(v___x_313_, v___x_314_);
return v___x_315_;
}
v___jp_316_:
{
lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_318_ = l_Lean_githash;
v___x_319_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_versionHeader___closed__4, &l___private_Lean_Shell_0__Lean_versionHeader___closed__4_once, _init_l___private_Lean_Shell_0__Lean_versionHeader___closed__4);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v_ver_322_; 
v___x_320_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_versionHeader___closed__5));
lean_inc_ref(v_ver_317_);
v___x_321_ = lean_string_append(v_ver_317_, v___x_320_);
v_ver_322_ = lean_string_append(v___x_321_, v___x_318_);
v_ver_307_ = v_ver_322_;
goto v___jp_306_;
}
else
{
lean_inc_ref(v_ver_317_);
v_ver_307_ = v_ver_317_;
goto v___jp_306_;
}
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0(void){
_start:
{
lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_326_ = lean_box(0);
v___x_327_ = lean_internal_has_llvm_backend(v___x_326_);
return v___x_327_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_featuresString(void){
_start:
{
uint8_t v___x_330_; 
v___x_330_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_featuresString___closed__0, &l___private_Lean_Shell_0__Lean_featuresString___closed__0_once, _init_l___private_Lean_Shell_0__Lean_featuresString___closed__0);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
v___x_331_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__1));
return v___x_331_;
}
else
{
lean_object* v___x_332_; 
v___x_332_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_featuresString___closed__2));
return v___x_332_;
}
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16(void){
_start:
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = lean_box(0);
v___x_350_ = lean_internal_is_debug(v___x_349_);
return v___x_350_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40(void){
_start:
{
lean_object* v___x_374_; uint8_t v___x_375_; 
v___x_374_ = lean_box(0);
v___x_375_ = lean_internal_is_multi_thread(v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp(uint8_t v_useStderr_380_){
_start:
{
lean_object* v___y_383_; lean_object* v___y_387_; lean_object* v_out_422_; 
if (v_useStderr_380_ == 0)
{
lean_object* v___x_478_; 
v___x_478_ = lean_get_stdout();
v_out_422_ = v___x_478_;
goto v___jp_421_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = lean_get_stderr();
v_out_422_ = v___x_479_;
goto v___jp_421_;
}
v___jp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__0));
v___x_385_ = l_IO_FS_Stream_putStrLn(v___y_383_, v___x_384_);
return v___x_385_;
}
v___jp_386_:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__1));
lean_inc_ref(v___y_387_);
v___x_389_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; 
lean_dec_ref_known(v___x_389_, 1);
v___x_390_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__2));
lean_inc_ref(v___y_387_);
v___x_391_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_390_);
if (lean_obj_tag(v___x_391_) == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; 
lean_dec_ref_known(v___x_391_, 1);
v___x_392_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__3));
lean_inc_ref(v___y_387_);
v___x_393_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_392_);
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v___x_394_; lean_object* v___x_395_; 
lean_dec_ref_known(v___x_393_, 1);
v___x_394_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__4));
lean_inc_ref(v___y_387_);
v___x_395_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_394_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v___x_396_; lean_object* v___x_397_; 
lean_dec_ref_known(v___x_395_, 1);
v___x_396_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__5));
lean_inc_ref(v___y_387_);
v___x_397_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; 
lean_dec_ref_known(v___x_397_, 1);
v___x_398_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__6));
lean_inc_ref(v___y_387_);
v___x_399_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_398_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; 
lean_dec_ref_known(v___x_399_, 1);
v___x_400_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__7));
lean_inc_ref(v___y_387_);
v___x_401_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec_ref_known(v___x_401_, 1);
v___x_402_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__8));
lean_inc_ref(v___y_387_);
v___x_403_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v___x_404_; lean_object* v___x_405_; 
lean_dec_ref_known(v___x_403_, 1);
v___x_404_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__9));
lean_inc_ref(v___y_387_);
v___x_405_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_404_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; lean_object* v___x_407_; 
lean_dec_ref_known(v___x_405_, 1);
v___x_406_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__10));
lean_inc_ref(v___y_387_);
v___x_407_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_dec_ref_known(v___x_407_, 1);
v___x_408_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__11));
lean_inc_ref(v___y_387_);
v___x_409_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_408_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
lean_dec_ref_known(v___x_409_, 1);
v___x_410_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__12));
lean_inc_ref(v___y_387_);
v___x_411_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec_ref_known(v___x_411_, 1);
v___x_412_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__13));
lean_inc_ref(v___y_387_);
v___x_413_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_412_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v___x_414_; lean_object* v___x_415_; 
lean_dec_ref_known(v___x_413_, 1);
v___x_414_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__14));
lean_inc_ref(v___y_387_);
v___x_415_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_414_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; 
lean_dec_ref_known(v___x_415_, 1);
v___x_416_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__15));
lean_inc_ref(v___y_387_);
v___x_417_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
uint8_t v___x_418_; 
lean_dec_ref_known(v___x_417_, 1);
v___x_418_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_418_ == 0)
{
v___y_383_ = v___y_387_;
goto v___jp_382_;
}
else
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__17));
lean_inc_ref(v___y_387_);
v___x_420_ = l_IO_FS_Stream_putStrLn(v___y_387_, v___x_419_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_dec_ref_known(v___x_420_, 1);
v___y_383_ = v___y_387_;
goto v___jp_382_;
}
else
{
lean_dec_ref(v___y_387_);
return v___x_420_;
}
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_417_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_415_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_413_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_411_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_409_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_407_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_405_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_403_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_401_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_399_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_397_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_395_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_393_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_391_;
}
}
else
{
lean_dec_ref(v___y_387_);
return v___x_389_;
}
}
v___jp_421_:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = l___private_Lean_Shell_0__Lean_versionHeader;
lean_inc_ref(v_out_422_);
v___x_424_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec_ref_known(v___x_424_, 1);
v___x_425_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__18));
lean_inc_ref(v_out_422_);
v___x_426_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_425_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec_ref_known(v___x_426_, 1);
v___x_427_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__19));
lean_inc_ref(v_out_422_);
v___x_428_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v___x_429_; lean_object* v___x_430_; 
lean_dec_ref_known(v___x_428_, 1);
v___x_429_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__20));
lean_inc_ref(v_out_422_);
v___x_430_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec_ref_known(v___x_430_, 1);
v___x_431_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__21));
lean_inc_ref(v_out_422_);
v___x_432_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec_ref_known(v___x_432_, 1);
v___x_433_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__22));
lean_inc_ref(v_out_422_);
v___x_434_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_433_);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec_ref_known(v___x_434_, 1);
v___x_435_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__23));
lean_inc_ref(v_out_422_);
v___x_436_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
lean_dec_ref_known(v___x_436_, 1);
v___x_437_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__24));
lean_inc_ref(v_out_422_);
v___x_438_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec_ref_known(v___x_438_, 1);
v___x_439_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__25));
lean_inc_ref(v_out_422_);
v___x_440_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; 
lean_dec_ref_known(v___x_440_, 1);
v___x_441_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__26));
lean_inc_ref(v_out_422_);
v___x_442_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec_ref_known(v___x_442_, 1);
v___x_443_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__27));
lean_inc_ref(v_out_422_);
v___x_444_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_dec_ref_known(v___x_444_, 1);
v___x_445_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__28));
lean_inc_ref(v_out_422_);
v___x_446_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_445_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref_known(v___x_446_, 1);
v___x_447_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__29));
lean_inc_ref(v_out_422_);
v___x_448_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_447_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec_ref_known(v___x_448_, 1);
v___x_449_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__30));
lean_inc_ref(v_out_422_);
v___x_450_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_449_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_dec_ref_known(v___x_450_, 1);
v___x_451_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__31));
lean_inc_ref(v_out_422_);
v___x_452_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v___x_453_; lean_object* v___x_454_; 
lean_dec_ref_known(v___x_452_, 1);
v___x_453_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__32));
lean_inc_ref(v_out_422_);
v___x_454_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec_ref_known(v___x_454_, 1);
v___x_455_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__33));
lean_inc_ref(v_out_422_);
v___x_456_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_455_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_dec_ref_known(v___x_456_, 1);
v___x_457_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__34));
lean_inc_ref(v_out_422_);
v___x_458_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; 
lean_dec_ref_known(v___x_458_, 1);
v___x_459_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__35));
lean_inc_ref(v_out_422_);
v___x_460_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
lean_dec_ref_known(v___x_460_, 1);
v___x_461_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__36));
lean_inc_ref(v_out_422_);
v___x_462_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_461_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec_ref_known(v___x_462_, 1);
v___x_463_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__37));
lean_inc_ref(v_out_422_);
v___x_464_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref_known(v___x_464_, 1);
v___x_465_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__38));
lean_inc_ref(v_out_422_);
v___x_466_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec_ref_known(v___x_466_, 1);
v___x_467_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__39));
lean_inc_ref(v_out_422_);
v___x_468_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
uint8_t v___x_469_; 
lean_dec_ref_known(v___x_468_, 1);
v___x_469_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_469_ == 0)
{
v___y_387_ = v_out_422_;
goto v___jp_386_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__41));
lean_inc_ref(v_out_422_);
v___x_471_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_470_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref_known(v___x_471_, 1);
v___x_472_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__42));
lean_inc_ref(v_out_422_);
v___x_473_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_472_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; 
lean_dec_ref_known(v___x_473_, 1);
v___x_474_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__43));
lean_inc_ref(v_out_422_);
v___x_475_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_474_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; 
lean_dec_ref_known(v___x_475_, 1);
v___x_476_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_displayHelp___closed__44));
lean_inc_ref(v_out_422_);
v___x_477_ = l_IO_FS_Stream_putStrLn(v_out_422_, v___x_476_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_dec_ref_known(v___x_477_, 1);
v___y_387_ = v_out_422_;
goto v___jp_386_;
}
else
{
lean_dec_ref(v_out_422_);
return v___x_477_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_475_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_473_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_471_;
}
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_468_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_466_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_464_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_462_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_460_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_458_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_456_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_454_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_452_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_450_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_448_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_446_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_444_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_442_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_440_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_438_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_436_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_434_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_432_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_430_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_428_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_426_;
}
}
else
{
lean_dec_ref(v_out_422_);
return v___x_424_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_displayHelp___boxed(lean_object* v_useStderr_480_, lean_object* v_a_481_){
_start:
{
uint8_t v_useStderr_boxed_482_; lean_object* v_res_483_; 
v_useStderr_boxed_482_ = lean_unbox(v_useStderr_480_);
v_res_483_ = l___private_Lean_Shell_0__Lean_displayHelp(v_useStderr_boxed_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(uint8_t v_x_484_){
_start:
{
switch(v_x_484_)
{
case 0:
{
lean_object* v___x_485_; 
v___x_485_ = lean_unsigned_to_nat(0u);
return v___x_485_;
}
case 1:
{
lean_object* v___x_486_; 
v___x_486_ = lean_unsigned_to_nat(1u);
return v___x_486_;
}
default: 
{
lean_object* v___x_487_; 
v___x_487_ = lean_unsigned_to_nat(2u);
return v___x_487_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx___boxed(lean_object* v_x_488_){
_start:
{
uint8_t v_x_boxed_489_; lean_object* v_res_490_; 
v_x_boxed_489_ = lean_unbox(v_x_488_);
v_res_490_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_boxed_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(uint8_t v_x_491_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorIdx(v_x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx___boxed(lean_object* v_x_493_){
_start:
{
uint8_t v_x_4__boxed_494_; lean_object* v_res_495_; 
v_x_4__boxed_494_ = lean_unbox(v_x_493_);
v_res_495_ = l___private_Lean_Shell_0__Lean_ShellComponent_toCtorIdx(v_x_4__boxed_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(lean_object* v_k_496_){
_start:
{
lean_inc(v_k_496_);
return v_k_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg___boxed(lean_object* v_k_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___redArg(v_k_497_);
lean_dec(v_k_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(lean_object* v_motive_499_, lean_object* v_ctorIdx_500_, uint8_t v_t_501_, lean_object* v_h_502_, lean_object* v_k_503_){
_start:
{
lean_inc(v_k_503_);
return v_k_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim___boxed(lean_object* v_motive_504_, lean_object* v_ctorIdx_505_, lean_object* v_t_506_, lean_object* v_h_507_, lean_object* v_k_508_){
_start:
{
uint8_t v_t_boxed_509_; lean_object* v_res_510_; 
v_t_boxed_509_ = lean_unbox(v_t_506_);
v_res_510_ = l___private_Lean_Shell_0__Lean_ShellComponent_ctorElim(v_motive_504_, v_ctorIdx_505_, v_t_boxed_509_, v_h_507_, v_k_508_);
lean_dec(v_k_508_);
lean_dec(v_ctorIdx_505_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(lean_object* v_frontend_511_){
_start:
{
lean_inc(v_frontend_511_);
return v_frontend_511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg___boxed(lean_object* v_frontend_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___redArg(v_frontend_512_);
lean_dec(v_frontend_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(lean_object* v_motive_514_, uint8_t v_t_515_, lean_object* v_h_516_, lean_object* v_frontend_517_){
_start:
{
lean_inc(v_frontend_517_);
return v_frontend_517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim___boxed(lean_object* v_motive_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_frontend_521_){
_start:
{
uint8_t v_t_boxed_522_; lean_object* v_res_523_; 
v_t_boxed_522_ = lean_unbox(v_t_519_);
v_res_523_ = l___private_Lean_Shell_0__Lean_ShellComponent_frontend_elim(v_motive_518_, v_t_boxed_522_, v_h_520_, v_frontend_521_);
lean_dec(v_frontend_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(lean_object* v_watchdog_524_){
_start:
{
lean_inc(v_watchdog_524_);
return v_watchdog_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg___boxed(lean_object* v_watchdog_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___redArg(v_watchdog_525_);
lean_dec(v_watchdog_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(lean_object* v_motive_527_, uint8_t v_t_528_, lean_object* v_h_529_, lean_object* v_watchdog_530_){
_start:
{
lean_inc(v_watchdog_530_);
return v_watchdog_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim___boxed(lean_object* v_motive_531_, lean_object* v_t_532_, lean_object* v_h_533_, lean_object* v_watchdog_534_){
_start:
{
uint8_t v_t_boxed_535_; lean_object* v_res_536_; 
v_t_boxed_535_ = lean_unbox(v_t_532_);
v_res_536_ = l___private_Lean_Shell_0__Lean_ShellComponent_watchdog_elim(v_motive_531_, v_t_boxed_535_, v_h_533_, v_watchdog_534_);
lean_dec(v_watchdog_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(lean_object* v_worker_537_){
_start:
{
lean_inc(v_worker_537_);
return v_worker_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg___boxed(lean_object* v_worker_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___redArg(v_worker_538_);
lean_dec(v_worker_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(lean_object* v_motive_540_, uint8_t v_t_541_, lean_object* v_h_542_, lean_object* v_worker_543_){
_start:
{
lean_inc(v_worker_543_);
return v_worker_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim___boxed(lean_object* v_motive_544_, lean_object* v_t_545_, lean_object* v_h_546_, lean_object* v_worker_547_){
_start:
{
uint8_t v_t_boxed_548_; lean_object* v_res_549_; 
v_t_boxed_548_ = lean_unbox(v_t_545_);
v_res_549_ = l___private_Lean_Shell_0__Lean_ShellComponent_worker_elim(v_motive_544_, v_t_boxed_548_, v_h_546_, v_worker_547_);
lean_dec(v_worker_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(lean_object* v_name_550_, lean_object* v_decl_551_, lean_object* v_ref_552_){
_start:
{
lean_object* v_defValue_554_; lean_object* v_descr_555_; lean_object* v_deprecation_x3f_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v_defValue_554_ = lean_ctor_get(v_decl_551_, 0);
v_descr_555_ = lean_ctor_get(v_decl_551_, 1);
v_deprecation_x3f_556_ = lean_ctor_get(v_decl_551_, 2);
lean_inc(v_defValue_554_);
v___x_557_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_557_, 0, v_defValue_554_);
lean_inc(v_deprecation_x3f_556_);
lean_inc_ref(v_descr_555_);
lean_inc_n(v_name_550_, 2);
v___x_558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_558_, 0, v_name_550_);
lean_ctor_set(v___x_558_, 1, v_ref_552_);
lean_ctor_set(v___x_558_, 2, v___x_557_);
lean_ctor_set(v___x_558_, 3, v_descr_555_);
lean_ctor_set(v___x_558_, 4, v_deprecation_x3f_556_);
v___x_559_ = lean_register_option(v_name_550_, v___x_558_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_567_; 
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_567_ == 0)
{
lean_object* v_unused_568_; 
v_unused_568_ = lean_ctor_get(v___x_559_, 0);
lean_dec(v_unused_568_);
v___x_561_ = v___x_559_;
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
else
{
lean_dec(v___x_559_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_565_; 
lean_inc(v_defValue_554_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v_name_550_);
lean_ctor_set(v___x_563_, 1, v_defValue_554_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_565_ = v___x_561_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_dec(v_name_550_);
v_a_569_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_559_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_559_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_577_, lean_object* v_decl_578_, lean_object* v_ref_579_, lean_object* v_a_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v_name_577_, v_decl_578_, v_ref_579_);
lean_dec_ref(v_decl_578_);
return v_res_581_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = lean_box(0);
v___x_586_ = lean_internal_get_default_max_memory(v___x_585_);
return v___x_586_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_587_ = lean_box(0);
v___x_588_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_589_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set(v___x_590_, 1, v___x_588_);
lean_ctor_set(v___x_590_, 2, v___x_587_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_614_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_615_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_);
v___x_616_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__13_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_));
v___x_617_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_614_, v___x_615_, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2____boxed(lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2_();
return v_res_619_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = lean_box(0);
v___x_624_ = lean_internal_get_default_max_heartbeat(v___x_623_);
return v___x_624_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_625_ = lean_box(0);
v___x_626_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_627_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_628_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v___x_626_);
lean_ctor_set(v___x_628_, 2, v___x_625_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_633_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_634_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_);
v___x_635_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_));
v___x_636_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_3125322801____hygCtx___hyg_2__spec__0(v___x_633_, v___x_634_, v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2____boxed(lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1197438456____hygCtx___hyg_2_();
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(lean_object* v_name_639_, lean_object* v_decl_640_, lean_object* v_ref_641_){
_start:
{
lean_object* v_defValue_643_; lean_object* v_descr_644_; lean_object* v_deprecation_x3f_645_; lean_object* v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_defValue_643_ = lean_ctor_get(v_decl_640_, 0);
v_descr_644_ = lean_ctor_get(v_decl_640_, 1);
v_deprecation_x3f_645_ = lean_ctor_get(v_decl_640_, 2);
v___x_646_ = lean_alloc_ctor(1, 0, 1);
v___x_647_ = lean_unbox(v_defValue_643_);
lean_ctor_set_uint8(v___x_646_, 0, v___x_647_);
lean_inc(v_deprecation_x3f_645_);
lean_inc_ref(v_descr_644_);
lean_inc_n(v_name_639_, 2);
v___x_648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_648_, 0, v_name_639_);
lean_ctor_set(v___x_648_, 1, v_ref_641_);
lean_ctor_set(v___x_648_, 2, v___x_646_);
lean_ctor_set(v___x_648_, 3, v_descr_644_);
lean_ctor_set(v___x_648_, 4, v_deprecation_x3f_645_);
v___x_649_ = lean_register_option(v_name_639_, v___x_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_657_; 
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_657_ == 0)
{
lean_object* v_unused_658_; 
v_unused_658_ = lean_ctor_get(v___x_649_, 0);
lean_dec(v_unused_658_);
v___x_651_ = v___x_649_;
v_isShared_652_ = v_isSharedCheck_657_;
goto v_resetjp_650_;
}
else
{
lean_dec(v___x_649_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_657_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_653_; lean_object* v___x_655_; 
lean_inc(v_defValue_643_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v_name_639_);
lean_ctor_set(v___x_653_, 1, v_defValue_643_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_653_);
v___x_655_ = v___x_651_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
lean_dec(v_name_639_);
v_a_659_ = lean_ctor_get(v___x_649_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_649_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_649_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0___boxed(lean_object* v_name_667_, lean_object* v_decl_668_, lean_object* v_ref_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v_name_667_, v_decl_668_, v_ref_669_);
lean_dec_ref(v_decl_668_);
return v_res_671_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_675_; uint8_t v___x_676_; 
v___x_675_ = lean_box(0);
v___x_676_ = lean_internal_get_default_verbose(v___x_675_);
return v___x_676_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_677_ = lean_box(0);
v___x_678_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shortVersionString___closed__0));
v___x_679_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__2_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_680_ = lean_box(v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___x_678_);
lean_ctor_set(v___x_681_, 2, v___x_677_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__1_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_687_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_, &l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__once, _init_l___private_Lean_Shell_0__Lean_initFn___closed__3_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_);
v___x_688_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_initFn___closed__4_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_));
v___x_689_ = l_Lean_Option_register___at___00__private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2__spec__0(v___x_686_, v___x_687_, v___x_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2____boxed(lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l___private_Lean_Shell_0__Lean_initFn_00___x40_Lean_Shell_1212703299____hygCtx___hyg_2_();
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getDefaultOptions___boxed(lean_object* v_x_00___x40_Lean_Shell_2553953037____hygCtx___hyg_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = lean_internal_get_default_options(v_x_00___x40_Lean_Shell_2553953037____hygCtx___hyg_693_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_Internal_getBelieverTrustLevel___boxed(lean_object* v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_696_){
_start:
{
uint32_t v_res_697_; lean_object* v_r_698_; 
v_res_697_ = lean_internal_get_believer_trust_level(v_x_00___x40_Lean_Shell_1075205639____hygCtx___hyg_696_);
v_r_698_ = lean_box_uint32(v_res_697_);
return v_r_698_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0(void){
_start:
{
lean_object* v___x_699_; uint32_t v___x_700_; 
v___x_699_ = lean_box(0);
v___x_700_ = lean_internal_get_believer_trust_level(v___x_699_);
return v___x_700_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1(void){
_start:
{
uint32_t v___x_701_; uint32_t v___x_702_; uint32_t v___x_703_; 
v___x_701_ = 1;
v___x_702_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__0);
v___x_703_ = lean_uint32_add(v___x_702_, v___x_701_);
return v___x_703_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel(void){
_start:
{
uint32_t v___x_704_; 
v___x_704_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1, &l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1_once, _init_l___private_Lean_Shell_0__Lean_defaultTrustLevel___closed__1);
return v___x_704_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0(void){
_start:
{
lean_object* v___x_705_; uint32_t v___x_706_; 
v___x_705_ = lean_box(0);
v___x_706_ = lean_internal_get_hardware_concurrency(v___x_705_);
return v___x_706_;
}
}
static uint32_t _init_l___private_Lean_Shell_0__Lean_defaultNumThreads(void){
_start:
{
uint8_t v___x_707_; 
v___x_707_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__40, &l___private_Lean_Shell_0__Lean_displayHelp___closed__40_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__40);
if (v___x_707_ == 0)
{
uint32_t v___x_708_; 
v___x_708_ = 0;
return v___x_708_;
}
else
{
uint32_t v___x_709_; 
v___x_709_ = lean_uint32_once(&l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0, &l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0_once, _init_l___private_Lean_Shell_0__Lean_defaultNumThreads___closed__0);
return v___x_709_;
}
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = lean_box(0);
v___x_711_ = lean_internal_get_default_options(v___x_710_);
return v___x_711_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2(void){
_start:
{
lean_object* v___x_714_; uint32_t v___x_715_; uint32_t v___x_716_; lean_object* v___x_717_; uint8_t v___x_718_; uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_714_ = lean_box(0);
v___x_715_ = l___private_Lean_Shell_0__Lean_defaultNumThreads;
v___x_716_ = l___private_Lean_Shell_0__Lean_defaultTrustLevel;
v___x_717_ = l_Lean_Options_empty;
v___x_718_ = 0;
v___x_719_ = 0;
v___x_720_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_mkShellOptions___closed__1));
v___x_721_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__0);
v___x_722_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v___x_722_, 0, v___x_721_);
lean_ctor_set(v___x_722_, 1, v___x_720_);
lean_ctor_set(v___x_722_, 2, v___x_717_);
lean_ctor_set(v___x_722_, 3, v___x_714_);
lean_ctor_set(v___x_722_, 4, v___x_714_);
lean_ctor_set(v___x_722_, 5, v___x_714_);
lean_ctor_set(v___x_722_, 6, v___x_714_);
lean_ctor_set(v___x_722_, 7, v___x_714_);
lean_ctor_set(v___x_722_, 8, v___x_714_);
lean_ctor_set(v___x_722_, 9, v___x_714_);
lean_ctor_set(v___x_722_, 10, v___x_720_);
lean_ctor_set(v___x_722_, 11, v___x_714_);
lean_ctor_set(v___x_722_, 12, v___x_714_);
lean_ctor_set(v___x_722_, 13, v___x_714_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 8, v___x_719_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 9, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 10, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 11, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 12, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 13, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 14, v___x_718_);
lean_ctor_set_uint32(v___x_722_, sizeof(void*)*14, v___x_716_);
lean_ctor_set_uint32(v___x_722_, sizeof(void*)*14 + 4, v___x_715_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 15, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 16, v___x_718_);
lean_ctor_set_uint8(v___x_722_, sizeof(void*)*14 + 17, v___x_718_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_mk(lean_object* v_x_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2, &l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2_once, _init_l___private_Lean_Shell_0__Lean_mkShellOptions___closed__2);
return v___x_724_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_run(lean_object* v_opts_725_){
_start:
{
uint8_t v_run_726_; 
v_run_726_ = lean_ctor_get_uint8(v_opts_725_, sizeof(void*)*14 + 17);
lean_dec_ref(v_opts_725_);
return v_run_726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getRun___boxed(lean_object* v_opts_727_){
_start:
{
uint8_t v_res_728_; lean_object* v_r_729_; 
v_res_728_ = lean_shell_options_get_run(v_opts_727_);
v_r_729_ = lean_box(v_res_728_);
return v_r_729_;
}
}
LEAN_EXPORT uint8_t lean_shell_options_get_profiler(lean_object* v_opts_730_){
_start:
{
lean_object* v_leanOpts_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v_leanOpts_731_ = lean_ctor_get(v_opts_730_, 0);
lean_inc_ref(v_leanOpts_731_);
lean_dec_ref(v_opts_730_);
v___x_732_ = l_Lean_profiler;
v___x_733_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v_leanOpts_731_, v___x_732_);
lean_dec_ref(v_leanOpts_731_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getProfiler___boxed(lean_object* v_opts_734_){
_start:
{
uint8_t v_res_735_; lean_object* v_r_736_; 
v_res_735_ = lean_shell_options_get_profiler(v_opts_734_);
v_r_736_ = lean_box(v_res_735_);
return v_r_736_;
}
}
LEAN_EXPORT uint32_t lean_shell_options_get_num_threads(lean_object* v_opts_737_){
_start:
{
uint32_t v_numThreads_738_; 
v_numThreads_738_ = lean_ctor_get_uint32(v_opts_737_, sizeof(void*)*14 + 4);
lean_dec_ref(v_opts_737_);
return v_numThreads_738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_getNumThreads___boxed(lean_object* v_opts_739_){
_start:
{
uint32_t v_res_740_; lean_object* v_r_741_; 
v_res_740_ = lean_shell_options_get_num_threads(v_opts_739_);
v_r_741_ = lean_box_uint32(v_res_740_);
return v_r_741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg(lean_object* v_optName_744_, lean_object* v_optArg_x3f_745_){
_start:
{
if (lean_obj_tag(v_optArg_x3f_745_) == 1)
{
lean_object* v_val_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
v_val_747_ = lean_ctor_get(v_optArg_x3f_745_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v_optArg_x3f_745_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v_optArg_x3f_745_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_val_747_);
lean_dec(v_optArg_x3f_745_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 0);
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_val_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
lean_dec(v_optArg_x3f_745_);
v___x_755_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__0));
v___x_756_ = lean_string_append(v___x_755_, v_optName_744_);
v___x_757_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_758_ = lean_string_append(v___x_756_, v___x_757_);
v___x_759_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
v___x_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_760_, 0, v___x_759_);
return v___x_760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_checkOptArg___boxed(lean_object* v_optName_761_, lean_object* v_optArg_x3f_762_, lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l___private_Lean_Shell_0__Lean_checkOptArg(v_optName_761_, v_optArg_x3f_762_);
lean_dec_ref(v_optName_761_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(lean_object* v_o_768_, lean_object* v_k_769_, lean_object* v_v_770_){
_start:
{
lean_object* v_map_771_; uint8_t v_hasTrace_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_786_; 
v_map_771_ = lean_ctor_get(v_o_768_, 0);
v_hasTrace_772_ = lean_ctor_get_uint8(v_o_768_, sizeof(void*)*1);
v_isSharedCheck_786_ = !lean_is_exclusive(v_o_768_);
if (v_isSharedCheck_786_ == 0)
{
v___x_774_ = v_o_768_;
v_isShared_775_ = v_isSharedCheck_786_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_map_771_);
lean_dec(v_o_768_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_786_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v_v_770_);
lean_inc(v_k_769_);
v___x_777_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_769_, v___x_776_, v_map_771_);
if (v_hasTrace_772_ == 0)
{
lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_781_; 
v___x_778_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_779_ = l_Lean_Name_isPrefixOf(v___x_778_, v_k_769_);
lean_dec(v_k_769_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_777_);
v___x_781_ = v___x_774_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_777_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*1, v___x_779_);
return v___x_781_;
}
}
else
{
lean_object* v___x_784_; 
lean_dec(v_k_769_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_777_);
v___x_784_ = v___x_774_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_777_);
lean_ctor_set_uint8(v_reuseFailAlloc_785_, sizeof(void*)*1, v_hasTrace_772_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(lean_object* v___x_787_, lean_object* v_arg_788_, lean_object* v_a_789_, lean_object* v_b_790_){
_start:
{
lean_object* v_startInclusive_791_; lean_object* v_endExclusive_792_; lean_object* v___x_793_; uint8_t v___x_794_; 
v_startInclusive_791_ = lean_ctor_get(v___x_787_, 1);
v_endExclusive_792_ = lean_ctor_get(v___x_787_, 2);
v___x_793_ = lean_nat_sub(v_endExclusive_792_, v_startInclusive_791_);
v___x_794_ = lean_nat_dec_eq(v_a_789_, v___x_793_);
lean_dec(v___x_793_);
if (v___x_794_ == 0)
{
uint32_t v___x_795_; uint32_t v___x_796_; uint8_t v___x_797_; 
v___x_795_ = lean_string_utf8_get_fast(v_arg_788_, v_a_789_);
v___x_796_ = 61;
v___x_797_ = lean_uint32_dec_eq(v___x_795_, v___x_796_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_box(0);
v___x_799_ = lean_string_utf8_next_fast(v_arg_788_, v_a_789_);
lean_dec(v_a_789_);
v_a_789_ = v___x_799_;
v_b_790_ = v___x_798_;
goto _start;
}
else
{
lean_object* v___x_801_; 
v___x_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_801_, 0, v_a_789_);
return v___x_801_;
}
}
else
{
lean_dec(v_a_789_);
lean_inc(v_b_790_);
return v_b_790_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg___boxed(lean_object* v___x_802_, lean_object* v_arg_803_, lean_object* v_a_804_, lean_object* v_b_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_802_, v_arg_803_, v_a_804_, v_b_805_);
lean_dec(v_b_805_);
lean_dec_ref(v_arg_803_);
lean_dec_ref(v___x_802_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption(lean_object* v_opts_810_, lean_object* v_arg_811_){
_start:
{
lean_object* v___y_814_; lean_object* v_searcher_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_searcher_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = lean_string_utf8_byte_size(v_arg_811_);
lean_inc_ref(v_arg_811_);
v___x_847_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_847_, 0, v_arg_811_);
lean_ctor_set(v___x_847_, 1, v_searcher_845_);
lean_ctor_set(v___x_847_, 2, v___x_846_);
v___x_848_ = lean_box(0);
v___x_849_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_847_, v_arg_811_, v_searcher_845_, v___x_848_);
lean_dec_ref_known(v___x_847_, 3);
if (lean_obj_tag(v___x_849_) == 0)
{
v___y_814_ = v___x_846_;
goto v___jp_813_;
}
else
{
lean_object* v_val_850_; 
v_val_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_val_850_);
lean_dec_ref_known(v___x_849_, 1);
v___y_814_ = v_val_850_;
goto v___jp_813_;
}
v___jp_813_:
{
lean_object* v___x_815_; uint8_t v___x_816_; 
v___x_815_ = lean_string_utf8_byte_size(v_arg_811_);
v___x_816_ = lean_nat_dec_eq(v___y_814_, v___x_815_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_834_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_834_ == 0)
{
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_834_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_834_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v_name_825_; lean_object* v_val_826_; lean_object* v___x_827_; 
v___x_822_ = lean_unsigned_to_nat(0u);
lean_inc(v___y_814_);
lean_inc_ref(v_arg_811_);
v___x_823_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_823_, 0, v_arg_811_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
lean_ctor_set(v___x_823_, 2, v___y_814_);
v___x_824_ = lean_string_utf8_next_fast(v_arg_811_, v___y_814_);
lean_dec(v___y_814_);
v_name_825_ = l_String_Slice_toName(v___x_823_);
lean_dec_ref_known(v___x_823_, 3);
v_val_826_ = lean_string_utf8_extract(v_arg_811_, v___x_824_, v___x_815_);
lean_dec_ref(v_arg_811_);
v___x_827_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_818_, v_name_825_);
lean_dec(v_a_818_);
if (lean_obj_tag(v___x_827_) == 1)
{
lean_object* v_val_828_; lean_object* v___x_829_; 
lean_del_object(v___x_820_);
v_val_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = l_Lean_Language_Lean_setOption(v_opts_810_, v_val_828_, v_name_825_, v_val_826_);
return v___x_829_;
}
else
{
lean_object* v___x_830_; lean_object* v___x_832_; 
lean_dec(v___x_827_);
v___x_830_ = l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0(v_opts_810_, v_name_825_, v_val_826_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_830_);
v___x_832_ = v___x_820_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
else
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v___y_814_);
lean_dec_ref(v_arg_811_);
lean_dec_ref(v_opts_810_);
v_a_835_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_817_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_817_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
else
{
lean_object* v___x_843_; lean_object* v___x_844_; 
lean_dec(v___y_814_);
lean_dec_ref(v_arg_811_);
lean_dec_ref(v_opts_810_);
v___x_843_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_setConfigOption___closed__1));
v___x_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
return v___x_844_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_setConfigOption___boxed(lean_object* v_opts_851_, lean_object* v_arg_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_opts_851_, v_arg_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(lean_object* v___x_855_, lean_object* v_arg_856_, lean_object* v_inst_857_, lean_object* v_R_858_, lean_object* v_a_859_, lean_object* v_b_860_, lean_object* v_c_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_855_, v_arg_856_, v_a_859_, v_b_860_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___boxed(lean_object* v___x_863_, lean_object* v_arg_864_, lean_object* v_inst_865_, lean_object* v_R_866_, lean_object* v_a_867_, lean_object* v_b_868_, lean_object* v_c_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1(v___x_863_, v_arg_864_, v_inst_865_, v_R_866_, v_a_867_, v_b_868_, v_c_869_);
lean_dec(v_b_868_);
lean_dec_ref(v_arg_864_);
lean_dec_ref(v___x_863_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(lean_object* v_msg_872_){
_start:
{
lean_object* v___f_874_; lean_object* v___x_875_; 
v___f_874_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_875_ = l_IO_eprint___redArg(v___f_874_, v_msg_872_);
if (lean_obj_tag(v___x_875_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
v_a_876_ = lean_ctor_get(v___x_875_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_875_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_875_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
else
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_891_; 
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_875_);
if (v_isSharedCheck_891_ == 0)
{
lean_object* v_unused_892_; 
v_unused_892_ = lean_ctor_get(v___x_875_, 0);
lean_dec(v_unused_892_);
v___x_885_ = v___x_875_;
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
else
{
lean_dec(v___x_875_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_891_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_889_; 
v___x_887_ = lean_box(0);
if (v_isShared_886_ == 0)
{
lean_ctor_set_tag(v___x_885_, 0);
lean_ctor_set(v___x_885_, 0, v___x_887_);
v___x_889_ = v___x_885_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___boxed(lean_object* v_msg_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint(v_msg_893_);
return v_res_895_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_898_; lean_object* v___x_899_; 
v___x_898_ = 1;
v___x_899_ = lean_box_uint32(v___x_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(lean_object* v_x_900_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = lean_apply_1(v_x_900_, lean_box(0));
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_909_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_909_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_923_; lean_object* v___f_924_; lean_object* v___x_925_; 
v_a_918_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_918_);
lean_dec_ref_known(v___x_909_, 1);
v___x_923_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_924_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_925_ = l_IO_eprint___redArg(v___f_924_, v___x_923_);
lean_dec_ref(v___x_925_);
goto v___jp_919_;
v___jp_919_:
{
lean_object* v___x_920_; lean_object* v___f_921_; lean_object* v___x_922_; 
v___x_920_ = lean_io_error_to_string(v_a_918_);
v___f_921_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_922_ = l_IO_eprint___redArg(v___f_921_, v___x_920_);
lean_dec_ref(v___x_922_);
goto v___jp_905_;
}
}
v___jp_902_:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
v___jp_905_:
{
lean_object* v___x_906_; lean_object* v___f_907_; lean_object* v___x_908_; 
v___x_906_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_907_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_908_ = l_IO_eprint___redArg(v___f_907_, v___x_906_);
lean_dec_ref(v___x_908_);
goto v___jp_902_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed(lean_object* v_x_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg(v_x_926_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(lean_object* v_00_u03b1_929_, lean_object* v_x_930_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = lean_apply_1(v_x_930_, lean_box(0));
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_953_; lean_object* v___f_954_; lean_object* v___x_955_; 
v_a_948_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_939_, 1);
v___x_953_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___f_954_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_955_ = l_IO_eprint___redArg(v___f_954_, v___x_953_);
lean_dec_ref(v___x_955_);
goto v___jp_949_;
v___jp_949_:
{
lean_object* v___x_950_; lean_object* v___f_951_; lean_object* v___x_952_; 
v___x_950_ = lean_io_error_to_string(v_a_948_);
v___f_951_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_952_ = l_IO_eprint___redArg(v___f_951_, v___x_950_);
lean_dec_ref(v___x_952_);
goto v___jp_935_;
}
}
v___jp_932_:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
v___jp_935_:
{
lean_object* v___x_936_; lean_object* v___f_937_; lean_object* v___x_938_; 
v___x_936_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___f_937_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_938_ = l_IO_eprint___redArg(v___f_937_, v___x_936_);
lean_dec_ref(v___x_938_);
goto v___jp_932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___boxed(lean_object* v_00_u03b1_956_, lean_object* v_x_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO(v_00_u03b1_956_, v_x_957_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(lean_object* v_opt_962_){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___f_971_; lean_object* v___x_972_; 
v___x_967_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__0));
v___x_968_ = lean_string_append(v___x_967_, v_opt_962_);
v___x_969_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_970_ = lean_string_append(v___x_968_, v___x_969_);
v___f_971_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_972_ = l_IO_eprint___redArg(v___f_971_, v___x_970_);
lean_dec_ref(v___x_972_);
goto v___jp_964_;
v___jp_964_:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
return v___x_966_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___boxed(lean_object* v_opt_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric(v_opt_973_);
lean_dec_ref(v_opt_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(lean_object* v_opt_978_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___f_987_; lean_object* v___x_988_; 
v___x_983_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__0));
v___x_984_ = lean_string_append(v___x_983_, v_opt_978_);
v___x_985_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___closed__1));
v___x_986_ = lean_string_append(v___x_984_, v___x_985_);
v___f_987_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_eprint___closed__0));
v___x_988_ = l_IO_eprint___redArg(v___f_987_, v___x_986_);
lean_dec_ref(v___x_988_);
goto v___jp_980_;
v___jp_980_:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge___boxed(lean_object* v_opt_989_, lean_object* v_a_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_throwTooLarge(v_opt_989_);
lean_dec_ref(v_opt_989_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(lean_object* v_s_992_){
_start:
{
lean_object* v___x_994_; lean_object* v_putStr_995_; lean_object* v___x_996_; 
v___x_994_ = lean_get_stderr();
v_putStr_995_ = lean_ctor_get(v___x_994_, 4);
lean_inc_ref(v_putStr_995_);
lean_dec_ref(v___x_994_);
v___x_996_ = lean_apply_2(v_putStr_995_, v_s_992_, lean_box(0));
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0___boxed(lean_object* v_s_997_, lean_object* v_a_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v_s_997_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(lean_object* v_s_1000_){
_start:
{
lean_object* v___x_1002_; lean_object* v_putStr_1003_; lean_object* v___x_1004_; 
v___x_1002_ = lean_get_stdout();
v_putStr_1003_ = lean_ctor_get(v___x_1002_, 4);
lean_inc_ref(v_putStr_1003_);
lean_dec_ref(v___x_1002_);
v___x_1004_ = lean_apply_2(v_putStr_1003_, v_s_1000_, lean_box(0));
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5___boxed(lean_object* v_s_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v_s_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(lean_object* v_s_1008_){
_start:
{
uint32_t v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = 10;
v___x_1011_ = lean_string_push(v_s_1008_, v___x_1010_);
v___x_1012_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3___boxed(lean_object* v_s_1013_, lean_object* v_a_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v_s_1013_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(lean_object* v_o_1016_, lean_object* v_k_1017_, uint8_t v_v_1018_){
_start:
{
lean_object* v_map_1019_; uint8_t v_hasTrace_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1034_; 
v_map_1019_ = lean_ctor_get(v_o_1016_, 0);
v_hasTrace_1020_ = lean_ctor_get_uint8(v_o_1016_, sizeof(void*)*1);
v_isSharedCheck_1034_ = !lean_is_exclusive(v_o_1016_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1022_ = v_o_1016_;
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_map_1019_);
lean_dec(v_o_1016_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1024_, 0, v_v_1018_);
lean_inc(v_k_1017_);
v___x_1025_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1017_, v___x_1024_, v_map_1019_);
if (v_hasTrace_1020_ == 0)
{
lean_object* v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1029_; 
v___x_1026_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1027_ = l_Lean_Name_isPrefixOf(v___x_1026_, v_k_1017_);
lean_dec(v_k_1017_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1025_);
v___x_1029_ = v___x_1022_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_1025_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*1, v___x_1027_);
return v___x_1029_;
}
}
else
{
lean_object* v___x_1032_; 
lean_dec(v_k_1017_);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 0, v___x_1025_);
v___x_1032_ = v___x_1022_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1025_);
lean_ctor_set_uint8(v_reuseFailAlloc_1033_, sizeof(void*)*1, v_hasTrace_1020_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1___boxed(lean_object* v_o_1035_, lean_object* v_k_1036_, lean_object* v_v_1037_){
_start:
{
uint8_t v_v_boxed_1038_; lean_object* v_res_1039_; 
v_v_boxed_1038_ = lean_unbox(v_v_1037_);
v_res_1039_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_o_1035_, v_k_1036_, v_v_boxed_1038_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(lean_object* v_opts_1040_, lean_object* v_opt_1041_, uint8_t v_val_1042_){
_start:
{
lean_object* v_name_1043_; lean_object* v___x_1044_; 
v_name_1043_ = lean_ctor_get(v_opt_1041_, 0);
lean_inc(v_name_1043_);
lean_dec_ref(v_opt_1041_);
v___x_1044_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1_spec__1(v_opts_1040_, v_name_1043_, v_val_1042_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1___boxed(lean_object* v_opts_1045_, lean_object* v_opt_1046_, lean_object* v_val_1047_){
_start:
{
uint8_t v_val_boxed_1048_; lean_object* v_res_1049_; 
v_val_boxed_1048_ = lean_unbox(v_val_1047_);
v_res_1049_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_opts_1045_, v_opt_1046_, v_val_boxed_1048_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(lean_object* v_o_1050_, lean_object* v_k_1051_, lean_object* v_v_1052_){
_start:
{
lean_object* v_map_1053_; uint8_t v_hasTrace_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1068_; 
v_map_1053_ = lean_ctor_get(v_o_1050_, 0);
v_hasTrace_1054_ = lean_ctor_get_uint8(v_o_1050_, sizeof(void*)*1);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_o_1050_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1056_ = v_o_1050_;
v_isShared_1057_ = v_isSharedCheck_1068_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_map_1053_);
lean_dec(v_o_1050_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1068_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1058_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1058_, 0, v_v_1052_);
lean_inc(v_k_1051_);
v___x_1059_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1051_, v___x_1058_, v_map_1053_);
if (v_hasTrace_1054_ == 0)
{
lean_object* v___x_1060_; uint8_t v___x_1061_; lean_object* v___x_1063_; 
v___x_1060_ = ((lean_object*)(l_Lean_Options_set___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__0___closed__1));
v___x_1061_ = l_Lean_Name_isPrefixOf(v___x_1060_, v_k_1051_);
lean_dec(v_k_1051_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1059_);
v___x_1063_ = v___x_1056_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1059_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_ctor_set_uint8(v___x_1063_, sizeof(void*)*1, v___x_1061_);
return v___x_1063_;
}
}
else
{
lean_object* v___x_1066_; 
lean_dec(v_k_1051_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1059_);
v___x_1066_ = v___x_1056_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1067_, sizeof(void*)*1, v_hasTrace_1054_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(lean_object* v_opts_1069_, lean_object* v_opt_1070_, lean_object* v_val_1071_){
_start:
{
lean_object* v_name_1072_; lean_object* v___x_1073_; 
v_name_1072_ = lean_ctor_get(v_opt_1070_, 0);
lean_inc(v_name_1072_);
lean_dec_ref(v_opt_1070_);
v___x_1073_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2_spec__3(v_opts_1069_, v_name_1072_, v_val_1071_);
return v___x_1073_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28(void){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = l_System_Platform_numBits;
v___x_1103_ = lean_unsigned_to_nat(2u);
v___x_1104_ = lean_nat_pow(v___x_1103_, v___x_1102_);
return v___x_1104_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1(void){
_start:
{
uint32_t v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = 0;
v___x_1116_ = lean_box_uint32(v___x_1115_);
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* lean_shell_options_process(lean_object* v_opts_1117_, uint32_t v_opt_1118_, lean_object* v_optArg_x3f_1119_){
_start:
{
lean_object* v___y_1197_; lean_object* v___y_1225_; uint32_t v___x_1345_; uint8_t v___x_1346_; 
v___x_1345_ = 101;
v___x_1346_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1345_);
if (v___x_1346_ == 0)
{
uint32_t v___x_1347_; uint8_t v___x_1348_; 
v___x_1347_ = 106;
v___x_1348_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1347_);
if (v___x_1348_ == 0)
{
uint32_t v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = 118;
v___x_1350_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1349_);
if (v___x_1350_ == 0)
{
uint32_t v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = 86;
v___x_1352_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1351_);
if (v___x_1352_ == 0)
{
uint32_t v___x_1353_; uint8_t v___x_1354_; 
v___x_1353_ = 103;
v___x_1354_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1353_);
if (v___x_1354_ == 0)
{
uint32_t v___x_1355_; uint8_t v___x_1356_; 
v___x_1355_ = 104;
v___x_1356_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1355_);
if (v___x_1356_ == 0)
{
uint32_t v___x_1357_; uint8_t v___x_1358_; 
v___x_1357_ = 102;
v___x_1358_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1357_);
if (v___x_1358_ == 0)
{
uint32_t v___x_1359_; uint8_t v___x_1360_; 
v___x_1359_ = 99;
v___x_1360_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1359_);
if (v___x_1360_ == 0)
{
uint32_t v___x_1361_; uint8_t v___x_1362_; 
v___x_1361_ = 98;
v___x_1362_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1361_);
if (v___x_1362_ == 0)
{
uint32_t v___x_1363_; uint8_t v___x_1364_; 
v___x_1363_ = 122;
v___x_1364_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1363_);
if (v___x_1364_ == 0)
{
uint32_t v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = 115;
v___x_1366_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1365_);
if (v___x_1366_ == 0)
{
uint32_t v___x_1367_; uint8_t v___x_1368_; 
v___x_1367_ = 73;
v___x_1368_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1367_);
if (v___x_1368_ == 0)
{
uint32_t v___x_1369_; uint8_t v___x_1370_; 
v___x_1369_ = 114;
v___x_1370_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1369_);
if (v___x_1370_ == 0)
{
uint32_t v___x_1371_; uint8_t v___x_1372_; 
v___x_1371_ = 111;
v___x_1372_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1371_);
if (v___x_1372_ == 0)
{
uint32_t v___x_1373_; uint8_t v___x_1374_; 
v___x_1373_ = 105;
v___x_1374_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1373_);
if (v___x_1374_ == 0)
{
uint32_t v___x_1375_; uint8_t v___x_1376_; 
v___x_1375_ = 82;
v___x_1376_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1375_);
if (v___x_1376_ == 0)
{
uint32_t v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = 77;
v___x_1378_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1377_);
if (v___x_1378_ == 0)
{
uint32_t v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = 84;
v___x_1380_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1379_);
if (v___x_1380_ == 0)
{
uint32_t v___x_1381_; uint8_t v___x_1382_; 
v___x_1381_ = 116;
v___x_1382_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1381_);
if (v___x_1382_ == 0)
{
uint32_t v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = 113;
v___x_1384_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1383_);
if (v___x_1384_ == 0)
{
uint32_t v___x_1385_; uint8_t v___x_1386_; 
v___x_1385_ = 100;
v___x_1386_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1385_);
if (v___x_1386_ == 0)
{
uint32_t v___x_1387_; uint8_t v___x_1388_; 
v___x_1387_ = 79;
v___x_1388_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1387_);
if (v___x_1388_ == 0)
{
uint32_t v___x_1389_; uint8_t v___x_1390_; 
v___x_1389_ = 78;
v___x_1390_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1389_);
if (v___x_1390_ == 0)
{
uint32_t v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = 74;
v___x_1392_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1391_);
if (v___x_1392_ == 0)
{
uint32_t v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = 97;
v___x_1394_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1393_);
if (v___x_1394_ == 0)
{
uint32_t v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = 120;
v___x_1396_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1395_);
if (v___x_1396_ == 0)
{
uint32_t v___x_1397_; uint8_t v___x_1398_; 
v___x_1397_ = 76;
v___x_1398_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1397_);
if (v___x_1398_ == 0)
{
uint32_t v___x_1399_; uint8_t v___x_1400_; 
v___x_1399_ = 68;
v___x_1400_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1399_);
if (v___x_1400_ == 0)
{
uint32_t v___x_1401_; uint8_t v___x_1402_; 
v___x_1401_ = 83;
v___x_1402_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1401_);
if (v___x_1402_ == 0)
{
uint32_t v___x_1403_; uint8_t v___x_1404_; 
v___x_1403_ = 87;
v___x_1404_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1403_);
if (v___x_1404_ == 0)
{
uint32_t v___x_1405_; uint8_t v___x_1406_; 
v___x_1405_ = 80;
v___x_1406_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1405_);
if (v___x_1406_ == 0)
{
uint32_t v___x_1407_; uint8_t v___x_1408_; 
v___x_1407_ = 66;
v___x_1408_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1407_);
if (v___x_1408_ == 0)
{
uint32_t v___x_1409_; uint8_t v___x_1410_; 
v___x_1409_ = 112;
v___x_1410_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1409_);
if (v___x_1410_ == 0)
{
uint32_t v___x_1411_; uint8_t v___x_1412_; 
v___x_1411_ = 108;
v___x_1412_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1411_);
if (v___x_1412_ == 0)
{
uint32_t v___x_1413_; uint8_t v___x_1414_; 
v___x_1413_ = 117;
v___x_1414_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1413_);
if (v___x_1414_ == 0)
{
uint32_t v___x_1415_; uint8_t v___x_1416_; 
v___x_1415_ = 69;
v___x_1416_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1415_);
if (v___x_1416_ == 0)
{
uint32_t v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = 89;
v___x_1418_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1417_);
if (v___x_1418_ == 0)
{
uint32_t v___x_1419_; uint8_t v___x_1420_; 
v___x_1419_ = 90;
v___x_1420_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1419_);
if (v___x_1420_ == 0)
{
uint32_t v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = 72;
v___x_1422_ = lean_uint32_dec_eq(v_opt_1118_, v___x_1421_);
if (v___x_1422_ == 0)
{
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
goto v___jp_1243_;
}
else
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__1));
v___x_1424_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1423_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1466_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1466_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1466_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v_leanOpts_1429_; lean_object* v_forwardedArgs_1430_; uint8_t v_component_1431_; uint8_t v_printPrefix_1432_; uint8_t v_printLibDir_1433_; uint8_t v_useStdin_1434_; uint8_t v_onlyDeps_1435_; uint8_t v_onlySrcDeps_1436_; uint8_t v_depsJson_1437_; lean_object* v_opts_1438_; uint32_t v_trustLevel_1439_; uint32_t v_numThreads_1440_; lean_object* v_rootDir_x3f_1441_; lean_object* v_setupFileName_x3f_1442_; lean_object* v_oleanFileName_x3f_1443_; lean_object* v_ileanFileName_x3f_1444_; lean_object* v_cFileName_x3f_1445_; lean_object* v_bcFileName_x3f_1446_; lean_object* v_zigFileName_x3f_1447_; uint8_t v_jsonOutput_1448_; lean_object* v_errorOnKinds_1449_; uint8_t v_printStats_1450_; uint8_t v_run_1451_; lean_object* v_incrSaveFileName_x3f_1452_; lean_object* v_incrLoadFileName_x3f_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1464_; 
v_leanOpts_1429_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1430_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1431_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1432_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1433_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1434_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1435_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1436_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1437_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1438_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1439_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1440_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1441_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1442_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1443_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1444_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1445_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1446_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1447_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1448_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1449_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1450_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1451_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1452_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1453_ = lean_ctor_get(v_opts_1117_, 12);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1464_ == 0)
{
lean_object* v_unused_1465_; 
v_unused_1465_ = lean_ctor_get(v_opts_1117_, 13);
lean_dec(v_unused_1465_);
v___x_1455_ = v_opts_1117_;
v_isShared_1456_ = v_isSharedCheck_1464_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_incrLoadFileName_x3f_1453_);
lean_inc(v_incrSaveFileName_x3f_1452_);
lean_inc(v_errorOnKinds_1449_);
lean_inc(v_zigFileName_x3f_1447_);
lean_inc(v_bcFileName_x3f_1446_);
lean_inc(v_cFileName_x3f_1445_);
lean_inc(v_ileanFileName_x3f_1444_);
lean_inc(v_oleanFileName_x3f_1443_);
lean_inc(v_setupFileName_x3f_1442_);
lean_inc(v_rootDir_x3f_1441_);
lean_inc(v_opts_1438_);
lean_inc(v_forwardedArgs_1430_);
lean_inc(v_leanOpts_1429_);
lean_dec(v_opts_1117_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1464_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1457_, 0, v_a_1425_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 13, v___x_1457_);
v___x_1459_ = v___x_1455_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_leanOpts_1429_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v_forwardedArgs_1430_);
lean_ctor_set(v_reuseFailAlloc_1463_, 2, v_opts_1438_);
lean_ctor_set(v_reuseFailAlloc_1463_, 3, v_rootDir_x3f_1441_);
lean_ctor_set(v_reuseFailAlloc_1463_, 4, v_setupFileName_x3f_1442_);
lean_ctor_set(v_reuseFailAlloc_1463_, 5, v_oleanFileName_x3f_1443_);
lean_ctor_set(v_reuseFailAlloc_1463_, 6, v_ileanFileName_x3f_1444_);
lean_ctor_set(v_reuseFailAlloc_1463_, 7, v_cFileName_x3f_1445_);
lean_ctor_set(v_reuseFailAlloc_1463_, 8, v_bcFileName_x3f_1446_);
lean_ctor_set(v_reuseFailAlloc_1463_, 9, v_zigFileName_x3f_1447_);
lean_ctor_set(v_reuseFailAlloc_1463_, 10, v_errorOnKinds_1449_);
lean_ctor_set(v_reuseFailAlloc_1463_, 11, v_incrSaveFileName_x3f_1452_);
lean_ctor_set(v_reuseFailAlloc_1463_, 12, v_incrLoadFileName_x3f_1453_);
lean_ctor_set(v_reuseFailAlloc_1463_, 13, v___x_1457_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 8, v_component_1431_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 9, v_printPrefix_1432_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 10, v_printLibDir_1433_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 11, v_useStdin_1434_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 12, v_onlyDeps_1435_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 13, v_onlySrcDeps_1436_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 14, v_depsJson_1437_);
lean_ctor_set_uint32(v_reuseFailAlloc_1463_, sizeof(void*)*14, v_trustLevel_1439_);
lean_ctor_set_uint32(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 4, v_numThreads_1440_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 15, v_jsonOutput_1448_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 16, v_printStats_1450_);
lean_ctor_set_uint8(v_reuseFailAlloc_1463_, sizeof(void*)*14 + 17, v_run_1451_);
v___x_1459_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
lean_object* v___x_1461_; 
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1459_);
v___x_1461_ = v___x_1427_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1459_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
lean_dec_ref(v_opts_1117_);
v_a_1467_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1424_, 1);
v___x_1471_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1472_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1471_);
lean_dec_ref(v___x_1472_);
goto v___jp_1468_;
v___jp_1468_:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = lean_io_error_to_string(v_a_1467_);
v___x_1470_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1469_);
lean_dec_ref(v___x_1470_);
goto v___jp_1249_;
}
}
}
}
else
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
v___x_1473_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__2));
v___x_1474_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1473_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1516_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1477_ = v___x_1474_;
v_isShared_1478_ = v_isSharedCheck_1516_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1474_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1516_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v_leanOpts_1479_; lean_object* v_forwardedArgs_1480_; uint8_t v_component_1481_; uint8_t v_printPrefix_1482_; uint8_t v_printLibDir_1483_; uint8_t v_useStdin_1484_; uint8_t v_onlyDeps_1485_; uint8_t v_onlySrcDeps_1486_; uint8_t v_depsJson_1487_; lean_object* v_opts_1488_; uint32_t v_trustLevel_1489_; uint32_t v_numThreads_1490_; lean_object* v_rootDir_x3f_1491_; lean_object* v_setupFileName_x3f_1492_; lean_object* v_oleanFileName_x3f_1493_; lean_object* v_ileanFileName_x3f_1494_; lean_object* v_cFileName_x3f_1495_; lean_object* v_bcFileName_x3f_1496_; lean_object* v_zigFileName_x3f_1497_; uint8_t v_jsonOutput_1498_; lean_object* v_errorOnKinds_1499_; uint8_t v_printStats_1500_; uint8_t v_run_1501_; lean_object* v_incrSaveFileName_x3f_1502_; lean_object* v_incrHeaderSaveFileName_x3f_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1514_; 
v_leanOpts_1479_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1480_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1481_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1482_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1483_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1484_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1485_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1486_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1487_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1488_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1489_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1490_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1491_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1492_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1493_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1494_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1495_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1496_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1497_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1498_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1499_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1500_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1501_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1502_ = lean_ctor_get(v_opts_1117_, 11);
v_incrHeaderSaveFileName_x3f_1503_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1514_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v_opts_1117_, 12);
lean_dec(v_unused_1515_);
v___x_1505_ = v_opts_1117_;
v_isShared_1506_ = v_isSharedCheck_1514_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1503_);
lean_inc(v_incrSaveFileName_x3f_1502_);
lean_inc(v_errorOnKinds_1499_);
lean_inc(v_zigFileName_x3f_1497_);
lean_inc(v_bcFileName_x3f_1496_);
lean_inc(v_cFileName_x3f_1495_);
lean_inc(v_ileanFileName_x3f_1494_);
lean_inc(v_oleanFileName_x3f_1493_);
lean_inc(v_setupFileName_x3f_1492_);
lean_inc(v_rootDir_x3f_1491_);
lean_inc(v_opts_1488_);
lean_inc(v_forwardedArgs_1480_);
lean_inc(v_leanOpts_1479_);
lean_dec(v_opts_1117_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1514_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1507_, 0, v_a_1475_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 12, v___x_1507_);
v___x_1509_ = v___x_1505_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v_leanOpts_1479_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v_forwardedArgs_1480_);
lean_ctor_set(v_reuseFailAlloc_1513_, 2, v_opts_1488_);
lean_ctor_set(v_reuseFailAlloc_1513_, 3, v_rootDir_x3f_1491_);
lean_ctor_set(v_reuseFailAlloc_1513_, 4, v_setupFileName_x3f_1492_);
lean_ctor_set(v_reuseFailAlloc_1513_, 5, v_oleanFileName_x3f_1493_);
lean_ctor_set(v_reuseFailAlloc_1513_, 6, v_ileanFileName_x3f_1494_);
lean_ctor_set(v_reuseFailAlloc_1513_, 7, v_cFileName_x3f_1495_);
lean_ctor_set(v_reuseFailAlloc_1513_, 8, v_bcFileName_x3f_1496_);
lean_ctor_set(v_reuseFailAlloc_1513_, 9, v_zigFileName_x3f_1497_);
lean_ctor_set(v_reuseFailAlloc_1513_, 10, v_errorOnKinds_1499_);
lean_ctor_set(v_reuseFailAlloc_1513_, 11, v_incrSaveFileName_x3f_1502_);
lean_ctor_set(v_reuseFailAlloc_1513_, 12, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1513_, 13, v_incrHeaderSaveFileName_x3f_1503_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 8, v_component_1481_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 9, v_printPrefix_1482_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 10, v_printLibDir_1483_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 11, v_useStdin_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 12, v_onlyDeps_1485_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 13, v_onlySrcDeps_1486_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 14, v_depsJson_1487_);
lean_ctor_set_uint32(v_reuseFailAlloc_1513_, sizeof(void*)*14, v_trustLevel_1489_);
lean_ctor_set_uint32(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 4, v_numThreads_1490_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 15, v_jsonOutput_1498_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 16, v_printStats_1500_);
lean_ctor_set_uint8(v_reuseFailAlloc_1513_, sizeof(void*)*14 + 17, v_run_1501_);
v___x_1509_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1511_; 
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1509_);
v___x_1511_ = v___x_1477_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
}
else
{
lean_object* v_a_1517_; lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_dec_ref(v_opts_1117_);
v_a_1517_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1517_);
lean_dec_ref_known(v___x_1474_, 1);
v___x_1521_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1522_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1521_);
lean_dec_ref(v___x_1522_);
goto v___jp_1518_;
v___jp_1518_:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_io_error_to_string(v_a_1517_);
v___x_1520_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1519_);
lean_dec_ref(v___x_1520_);
goto v___jp_1215_;
}
}
}
}
else
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__3));
v___x_1524_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1523_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1566_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1527_ = v___x_1524_;
v_isShared_1528_ = v_isSharedCheck_1566_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1524_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1566_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v_leanOpts_1529_; lean_object* v_forwardedArgs_1530_; uint8_t v_component_1531_; uint8_t v_printPrefix_1532_; uint8_t v_printLibDir_1533_; uint8_t v_useStdin_1534_; uint8_t v_onlyDeps_1535_; uint8_t v_onlySrcDeps_1536_; uint8_t v_depsJson_1537_; lean_object* v_opts_1538_; uint32_t v_trustLevel_1539_; uint32_t v_numThreads_1540_; lean_object* v_rootDir_x3f_1541_; lean_object* v_setupFileName_x3f_1542_; lean_object* v_oleanFileName_x3f_1543_; lean_object* v_ileanFileName_x3f_1544_; lean_object* v_cFileName_x3f_1545_; lean_object* v_bcFileName_x3f_1546_; lean_object* v_zigFileName_x3f_1547_; uint8_t v_jsonOutput_1548_; lean_object* v_errorOnKinds_1549_; uint8_t v_printStats_1550_; uint8_t v_run_1551_; lean_object* v_incrLoadFileName_x3f_1552_; lean_object* v_incrHeaderSaveFileName_x3f_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1564_; 
v_leanOpts_1529_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1530_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1531_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1532_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1533_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1534_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1535_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1536_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1537_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1538_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1539_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1540_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1541_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1542_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1543_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1544_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1545_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1546_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1547_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1548_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1549_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1550_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1551_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrLoadFileName_x3f_1552_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1553_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1564_ == 0)
{
lean_object* v_unused_1565_; 
v_unused_1565_ = lean_ctor_get(v_opts_1117_, 11);
lean_dec(v_unused_1565_);
v___x_1555_ = v_opts_1117_;
v_isShared_1556_ = v_isSharedCheck_1564_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1553_);
lean_inc(v_incrLoadFileName_x3f_1552_);
lean_inc(v_errorOnKinds_1549_);
lean_inc(v_zigFileName_x3f_1547_);
lean_inc(v_bcFileName_x3f_1546_);
lean_inc(v_cFileName_x3f_1545_);
lean_inc(v_ileanFileName_x3f_1544_);
lean_inc(v_oleanFileName_x3f_1543_);
lean_inc(v_setupFileName_x3f_1542_);
lean_inc(v_rootDir_x3f_1541_);
lean_inc(v_opts_1538_);
lean_inc(v_forwardedArgs_1530_);
lean_inc(v_leanOpts_1529_);
lean_dec(v_opts_1117_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1564_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; lean_object* v___x_1559_; 
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v_a_1525_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 11, v___x_1557_);
v___x_1559_ = v___x_1555_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_leanOpts_1529_);
lean_ctor_set(v_reuseFailAlloc_1563_, 1, v_forwardedArgs_1530_);
lean_ctor_set(v_reuseFailAlloc_1563_, 2, v_opts_1538_);
lean_ctor_set(v_reuseFailAlloc_1563_, 3, v_rootDir_x3f_1541_);
lean_ctor_set(v_reuseFailAlloc_1563_, 4, v_setupFileName_x3f_1542_);
lean_ctor_set(v_reuseFailAlloc_1563_, 5, v_oleanFileName_x3f_1543_);
lean_ctor_set(v_reuseFailAlloc_1563_, 6, v_ileanFileName_x3f_1544_);
lean_ctor_set(v_reuseFailAlloc_1563_, 7, v_cFileName_x3f_1545_);
lean_ctor_set(v_reuseFailAlloc_1563_, 8, v_bcFileName_x3f_1546_);
lean_ctor_set(v_reuseFailAlloc_1563_, 9, v_zigFileName_x3f_1547_);
lean_ctor_set(v_reuseFailAlloc_1563_, 10, v_errorOnKinds_1549_);
lean_ctor_set(v_reuseFailAlloc_1563_, 11, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1563_, 12, v_incrLoadFileName_x3f_1552_);
lean_ctor_set(v_reuseFailAlloc_1563_, 13, v_incrHeaderSaveFileName_x3f_1553_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 8, v_component_1531_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 9, v_printPrefix_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 10, v_printLibDir_1533_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 11, v_useStdin_1534_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 12, v_onlyDeps_1535_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 13, v_onlySrcDeps_1536_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 14, v_depsJson_1537_);
lean_ctor_set_uint32(v_reuseFailAlloc_1563_, sizeof(void*)*14, v_trustLevel_1539_);
lean_ctor_set_uint32(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 4, v_numThreads_1540_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 15, v_jsonOutput_1548_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 16, v_printStats_1550_);
lean_ctor_set_uint8(v_reuseFailAlloc_1563_, sizeof(void*)*14 + 17, v_run_1551_);
v___x_1559_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
lean_object* v___x_1561_; 
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1559_);
v___x_1561_ = v___x_1527_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v___x_1559_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
lean_dec_ref(v_opts_1117_);
v_a_1567_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1524_, 1);
v___x_1571_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1572_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1571_);
lean_dec_ref(v___x_1572_);
goto v___jp_1568_;
v___jp_1568_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_io_error_to_string(v_a_1567_);
v___x_1570_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1569_);
lean_dec_ref(v___x_1570_);
goto v___jp_1255_;
}
}
}
}
else
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__4));
v___x_1574_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1573_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1574_) == 0)
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1617_; 
v_a_1575_ = lean_ctor_get(v___x_1574_, 0);
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1574_);
if (v_isSharedCheck_1617_ == 0)
{
v___x_1577_ = v___x_1574_;
v_isShared_1578_ = v_isSharedCheck_1617_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1574_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1617_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v_leanOpts_1579_; lean_object* v_forwardedArgs_1580_; uint8_t v_component_1581_; uint8_t v_printPrefix_1582_; uint8_t v_printLibDir_1583_; uint8_t v_useStdin_1584_; uint8_t v_onlyDeps_1585_; uint8_t v_onlySrcDeps_1586_; uint8_t v_depsJson_1587_; lean_object* v_opts_1588_; uint32_t v_trustLevel_1589_; uint32_t v_numThreads_1590_; lean_object* v_rootDir_x3f_1591_; lean_object* v_setupFileName_x3f_1592_; lean_object* v_oleanFileName_x3f_1593_; lean_object* v_ileanFileName_x3f_1594_; lean_object* v_cFileName_x3f_1595_; lean_object* v_bcFileName_x3f_1596_; lean_object* v_zigFileName_x3f_1597_; uint8_t v_jsonOutput_1598_; lean_object* v_errorOnKinds_1599_; uint8_t v_printStats_1600_; uint8_t v_run_1601_; lean_object* v_incrSaveFileName_x3f_1602_; lean_object* v_incrLoadFileName_x3f_1603_; lean_object* v_incrHeaderSaveFileName_x3f_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1616_; 
v_leanOpts_1579_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1580_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1581_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1582_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1583_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1584_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1585_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1586_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1587_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1588_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1589_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1590_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1591_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1592_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1593_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1594_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1595_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1596_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1597_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1598_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1599_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1600_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1601_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1602_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1603_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1604_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1606_ = v_opts_1117_;
v_isShared_1607_ = v_isSharedCheck_1616_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1604_);
lean_inc(v_incrLoadFileName_x3f_1603_);
lean_inc(v_incrSaveFileName_x3f_1602_);
lean_inc(v_errorOnKinds_1599_);
lean_inc(v_zigFileName_x3f_1597_);
lean_inc(v_bcFileName_x3f_1596_);
lean_inc(v_cFileName_x3f_1595_);
lean_inc(v_ileanFileName_x3f_1594_);
lean_inc(v_oleanFileName_x3f_1593_);
lean_inc(v_setupFileName_x3f_1592_);
lean_inc(v_rootDir_x3f_1591_);
lean_inc(v_opts_1588_);
lean_inc(v_forwardedArgs_1580_);
lean_inc(v_leanOpts_1579_);
lean_dec(v_opts_1117_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1616_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1611_; 
v___x_1608_ = l_String_toName(v_a_1575_);
v___x_1609_ = lean_array_push(v_errorOnKinds_1599_, v___x_1608_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 10, v___x_1609_);
v___x_1611_ = v___x_1606_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_leanOpts_1579_);
lean_ctor_set(v_reuseFailAlloc_1615_, 1, v_forwardedArgs_1580_);
lean_ctor_set(v_reuseFailAlloc_1615_, 2, v_opts_1588_);
lean_ctor_set(v_reuseFailAlloc_1615_, 3, v_rootDir_x3f_1591_);
lean_ctor_set(v_reuseFailAlloc_1615_, 4, v_setupFileName_x3f_1592_);
lean_ctor_set(v_reuseFailAlloc_1615_, 5, v_oleanFileName_x3f_1593_);
lean_ctor_set(v_reuseFailAlloc_1615_, 6, v_ileanFileName_x3f_1594_);
lean_ctor_set(v_reuseFailAlloc_1615_, 7, v_cFileName_x3f_1595_);
lean_ctor_set(v_reuseFailAlloc_1615_, 8, v_bcFileName_x3f_1596_);
lean_ctor_set(v_reuseFailAlloc_1615_, 9, v_zigFileName_x3f_1597_);
lean_ctor_set(v_reuseFailAlloc_1615_, 10, v___x_1609_);
lean_ctor_set(v_reuseFailAlloc_1615_, 11, v_incrSaveFileName_x3f_1602_);
lean_ctor_set(v_reuseFailAlloc_1615_, 12, v_incrLoadFileName_x3f_1603_);
lean_ctor_set(v_reuseFailAlloc_1615_, 13, v_incrHeaderSaveFileName_x3f_1604_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 8, v_component_1581_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 9, v_printPrefix_1582_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 10, v_printLibDir_1583_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 11, v_useStdin_1584_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 12, v_onlyDeps_1585_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 13, v_onlySrcDeps_1586_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 14, v_depsJson_1587_);
lean_ctor_set_uint32(v_reuseFailAlloc_1615_, sizeof(void*)*14, v_trustLevel_1589_);
lean_ctor_set_uint32(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 4, v_numThreads_1590_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 15, v_jsonOutput_1598_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 16, v_printStats_1600_);
lean_ctor_set_uint8(v_reuseFailAlloc_1615_, sizeof(void*)*14 + 17, v_run_1601_);
v___x_1611_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v___x_1613_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1611_);
v___x_1613_ = v___x_1577_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1611_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
lean_dec_ref(v_opts_1117_);
v_a_1618_ = lean_ctor_get(v___x_1574_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1574_, 1);
v___x_1622_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1623_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1622_);
lean_dec_ref(v___x_1623_);
goto v___jp_1619_;
v___jp_1619_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = lean_io_error_to_string(v_a_1618_);
v___x_1621_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1620_);
lean_dec_ref(v___x_1621_);
goto v___jp_1209_;
}
}
}
}
else
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__5));
v___x_1625_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1624_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1667_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1628_ = v___x_1625_;
v_isShared_1629_ = v_isSharedCheck_1667_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1667_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v_leanOpts_1630_; lean_object* v_forwardedArgs_1631_; uint8_t v_component_1632_; uint8_t v_printPrefix_1633_; uint8_t v_printLibDir_1634_; uint8_t v_useStdin_1635_; uint8_t v_onlyDeps_1636_; uint8_t v_onlySrcDeps_1637_; uint8_t v_depsJson_1638_; lean_object* v_opts_1639_; uint32_t v_trustLevel_1640_; uint32_t v_numThreads_1641_; lean_object* v_rootDir_x3f_1642_; lean_object* v_oleanFileName_x3f_1643_; lean_object* v_ileanFileName_x3f_1644_; lean_object* v_cFileName_x3f_1645_; lean_object* v_bcFileName_x3f_1646_; lean_object* v_zigFileName_x3f_1647_; uint8_t v_jsonOutput_1648_; lean_object* v_errorOnKinds_1649_; uint8_t v_printStats_1650_; uint8_t v_run_1651_; lean_object* v_incrSaveFileName_x3f_1652_; lean_object* v_incrLoadFileName_x3f_1653_; lean_object* v_incrHeaderSaveFileName_x3f_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1665_; 
v_leanOpts_1630_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1631_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1632_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1633_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1634_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1635_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1636_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1637_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1638_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1639_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1640_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1641_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1642_ = lean_ctor_get(v_opts_1117_, 3);
v_oleanFileName_x3f_1643_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1644_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1645_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1646_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1647_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1648_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1649_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1650_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1651_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1652_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1653_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1654_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1665_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; 
v_unused_1666_ = lean_ctor_get(v_opts_1117_, 4);
lean_dec(v_unused_1666_);
v___x_1656_ = v_opts_1117_;
v_isShared_1657_ = v_isSharedCheck_1665_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1654_);
lean_inc(v_incrLoadFileName_x3f_1653_);
lean_inc(v_incrSaveFileName_x3f_1652_);
lean_inc(v_errorOnKinds_1649_);
lean_inc(v_zigFileName_x3f_1647_);
lean_inc(v_bcFileName_x3f_1646_);
lean_inc(v_cFileName_x3f_1645_);
lean_inc(v_ileanFileName_x3f_1644_);
lean_inc(v_oleanFileName_x3f_1643_);
lean_inc(v_rootDir_x3f_1642_);
lean_inc(v_opts_1639_);
lean_inc(v_forwardedArgs_1631_);
lean_inc(v_leanOpts_1630_);
lean_dec(v_opts_1117_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1665_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1658_, 0, v_a_1626_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 4, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_leanOpts_1630_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_forwardedArgs_1631_);
lean_ctor_set(v_reuseFailAlloc_1664_, 2, v_opts_1639_);
lean_ctor_set(v_reuseFailAlloc_1664_, 3, v_rootDir_x3f_1642_);
lean_ctor_set(v_reuseFailAlloc_1664_, 4, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1664_, 5, v_oleanFileName_x3f_1643_);
lean_ctor_set(v_reuseFailAlloc_1664_, 6, v_ileanFileName_x3f_1644_);
lean_ctor_set(v_reuseFailAlloc_1664_, 7, v_cFileName_x3f_1645_);
lean_ctor_set(v_reuseFailAlloc_1664_, 8, v_bcFileName_x3f_1646_);
lean_ctor_set(v_reuseFailAlloc_1664_, 9, v_zigFileName_x3f_1647_);
lean_ctor_set(v_reuseFailAlloc_1664_, 10, v_errorOnKinds_1649_);
lean_ctor_set(v_reuseFailAlloc_1664_, 11, v_incrSaveFileName_x3f_1652_);
lean_ctor_set(v_reuseFailAlloc_1664_, 12, v_incrLoadFileName_x3f_1653_);
lean_ctor_set(v_reuseFailAlloc_1664_, 13, v_incrHeaderSaveFileName_x3f_1654_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 8, v_component_1632_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 9, v_printPrefix_1633_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 10, v_printLibDir_1634_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 11, v_useStdin_1635_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 12, v_onlyDeps_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 13, v_onlySrcDeps_1637_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 14, v_depsJson_1638_);
lean_ctor_set_uint32(v_reuseFailAlloc_1664_, sizeof(void*)*14, v_trustLevel_1640_);
lean_ctor_set_uint32(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 4, v_numThreads_1641_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 15, v_jsonOutput_1648_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 16, v_printStats_1650_);
lean_ctor_set_uint8(v_reuseFailAlloc_1664_, sizeof(void*)*14 + 17, v_run_1651_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v___x_1660_);
v___x_1662_ = v___x_1628_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
lean_dec_ref(v_opts_1117_);
v_a_1668_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1625_, 1);
v___x_1672_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1673_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1672_);
lean_dec_ref(v___x_1673_);
goto v___jp_1669_;
v___jp_1669_:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = lean_io_error_to_string(v_a_1668_);
v___x_1671_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1670_);
lean_dec_ref(v___x_1671_);
goto v___jp_1261_;
}
}
}
}
else
{
lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1674_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__6));
v___x_1675_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1674_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1675_) == 0)
{
lean_object* v_a_1676_; lean_object* v___x_1677_; 
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc_n(v_a_1676_, 2);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1677_ = lean_load_dynlib(v_a_1676_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1720_; 
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1720_ == 0)
{
lean_object* v_unused_1721_; 
v_unused_1721_ = lean_ctor_get(v___x_1677_, 0);
lean_dec(v_unused_1721_);
v___x_1679_ = v___x_1677_;
v_isShared_1680_ = v_isSharedCheck_1720_;
goto v_resetjp_1678_;
}
else
{
lean_dec(v___x_1677_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1720_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v_leanOpts_1681_; lean_object* v_forwardedArgs_1682_; uint8_t v_component_1683_; uint8_t v_printPrefix_1684_; uint8_t v_printLibDir_1685_; uint8_t v_useStdin_1686_; uint8_t v_onlyDeps_1687_; uint8_t v_onlySrcDeps_1688_; uint8_t v_depsJson_1689_; lean_object* v_opts_1690_; uint32_t v_trustLevel_1691_; uint32_t v_numThreads_1692_; lean_object* v_rootDir_x3f_1693_; lean_object* v_setupFileName_x3f_1694_; lean_object* v_oleanFileName_x3f_1695_; lean_object* v_ileanFileName_x3f_1696_; lean_object* v_cFileName_x3f_1697_; lean_object* v_bcFileName_x3f_1698_; lean_object* v_zigFileName_x3f_1699_; uint8_t v_jsonOutput_1700_; lean_object* v_errorOnKinds_1701_; uint8_t v_printStats_1702_; uint8_t v_run_1703_; lean_object* v_incrSaveFileName_x3f_1704_; lean_object* v_incrLoadFileName_x3f_1705_; lean_object* v_incrHeaderSaveFileName_x3f_1706_; lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1719_; 
v_leanOpts_1681_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1682_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1683_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1684_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1685_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1686_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1687_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1688_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1689_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1690_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1691_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1692_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1693_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1694_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1695_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1696_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1697_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1698_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1699_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1700_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1701_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1702_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1703_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1704_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1705_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1706_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1719_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1719_ == 0)
{
v___x_1708_ = v_opts_1117_;
v_isShared_1709_ = v_isSharedCheck_1719_;
goto v_resetjp_1707_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1706_);
lean_inc(v_incrLoadFileName_x3f_1705_);
lean_inc(v_incrSaveFileName_x3f_1704_);
lean_inc(v_errorOnKinds_1701_);
lean_inc(v_zigFileName_x3f_1699_);
lean_inc(v_bcFileName_x3f_1698_);
lean_inc(v_cFileName_x3f_1697_);
lean_inc(v_ileanFileName_x3f_1696_);
lean_inc(v_oleanFileName_x3f_1695_);
lean_inc(v_setupFileName_x3f_1694_);
lean_inc(v_rootDir_x3f_1693_);
lean_inc(v_opts_1690_);
lean_inc(v_forwardedArgs_1682_);
lean_inc(v_leanOpts_1681_);
lean_dec(v_opts_1117_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1719_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1714_; 
v___x_1710_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__7));
v___x_1711_ = lean_string_append(v___x_1710_, v_a_1676_);
lean_dec(v_a_1676_);
v___x_1712_ = lean_array_push(v_forwardedArgs_1682_, v___x_1711_);
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 1, v___x_1712_);
v___x_1714_ = v___x_1708_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_leanOpts_1681_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v___x_1712_);
lean_ctor_set(v_reuseFailAlloc_1718_, 2, v_opts_1690_);
lean_ctor_set(v_reuseFailAlloc_1718_, 3, v_rootDir_x3f_1693_);
lean_ctor_set(v_reuseFailAlloc_1718_, 4, v_setupFileName_x3f_1694_);
lean_ctor_set(v_reuseFailAlloc_1718_, 5, v_oleanFileName_x3f_1695_);
lean_ctor_set(v_reuseFailAlloc_1718_, 6, v_ileanFileName_x3f_1696_);
lean_ctor_set(v_reuseFailAlloc_1718_, 7, v_cFileName_x3f_1697_);
lean_ctor_set(v_reuseFailAlloc_1718_, 8, v_bcFileName_x3f_1698_);
lean_ctor_set(v_reuseFailAlloc_1718_, 9, v_zigFileName_x3f_1699_);
lean_ctor_set(v_reuseFailAlloc_1718_, 10, v_errorOnKinds_1701_);
lean_ctor_set(v_reuseFailAlloc_1718_, 11, v_incrSaveFileName_x3f_1704_);
lean_ctor_set(v_reuseFailAlloc_1718_, 12, v_incrLoadFileName_x3f_1705_);
lean_ctor_set(v_reuseFailAlloc_1718_, 13, v_incrHeaderSaveFileName_x3f_1706_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 8, v_component_1683_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 9, v_printPrefix_1684_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 10, v_printLibDir_1685_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 11, v_useStdin_1686_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 12, v_onlyDeps_1687_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 13, v_onlySrcDeps_1688_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 14, v_depsJson_1689_);
lean_ctor_set_uint32(v_reuseFailAlloc_1718_, sizeof(void*)*14, v_trustLevel_1691_);
lean_ctor_set_uint32(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 4, v_numThreads_1692_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 15, v_jsonOutput_1700_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 16, v_printStats_1702_);
lean_ctor_set_uint8(v_reuseFailAlloc_1718_, sizeof(void*)*14 + 17, v_run_1703_);
v___x_1714_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1716_; 
if (v_isShared_1680_ == 0)
{
lean_ctor_set(v___x_1679_, 0, v___x_1714_);
v___x_1716_ = v___x_1679_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1714_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
else
{
lean_object* v_a_1722_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
lean_dec(v_a_1676_);
lean_dec_ref(v_opts_1117_);
v_a_1722_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_a_1722_);
lean_dec_ref_known(v___x_1677_, 1);
v___x_1726_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1727_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1726_);
lean_dec_ref(v___x_1727_);
goto v___jp_1723_;
v___jp_1723_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = lean_io_error_to_string(v_a_1722_);
v___x_1725_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1724_);
lean_dec_ref(v___x_1725_);
goto v___jp_1203_;
}
}
}
else
{
lean_object* v_a_1728_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
lean_dec_ref(v_opts_1117_);
v_a_1728_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1728_);
lean_dec_ref_known(v___x_1675_, 1);
v___x_1732_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1733_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1732_);
lean_dec_ref(v___x_1733_);
goto v___jp_1729_;
v___jp_1729_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_io_error_to_string(v_a_1728_);
v___x_1731_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1730_);
lean_dec_ref(v___x_1731_);
goto v___jp_1267_;
}
}
}
}
else
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1734_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__8));
v___x_1735_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1734_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1809_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1809_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1735_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1809_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v_fst_1741_; lean_object* v_snd_1742_; lean_object* v___y_1792_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = lean_string_utf8_byte_size(v_a_1736_);
lean_inc(v_a_1736_);
v___x_1805_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1805_, 0, v_a_1736_);
lean_ctor_set(v___x_1805_, 1, v___x_1803_);
lean_ctor_set(v___x_1805_, 2, v___x_1804_);
v___x_1806_ = lean_box(0);
v___x_1807_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_setConfigOption_spec__1___redArg(v___x_1805_, v_a_1736_, v___x_1803_, v___x_1806_);
lean_dec_ref_known(v___x_1805_, 3);
if (lean_obj_tag(v___x_1807_) == 0)
{
v___y_1792_ = v___x_1804_;
goto v___jp_1791_;
}
else
{
lean_object* v_val_1808_; 
v_val_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_val_1808_);
lean_dec_ref_known(v___x_1807_, 1);
v___y_1792_ = v_val_1808_;
goto v___jp_1791_;
}
v___jp_1740_:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_load_plugin(v_fst_1741_, v_snd_1742_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1786_; 
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1786_ == 0)
{
lean_object* v_unused_1787_; 
v_unused_1787_ = lean_ctor_get(v___x_1743_, 0);
lean_dec(v_unused_1787_);
v___x_1745_ = v___x_1743_;
v_isShared_1746_ = v_isSharedCheck_1786_;
goto v_resetjp_1744_;
}
else
{
lean_dec(v___x_1743_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1786_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v_leanOpts_1747_; lean_object* v_forwardedArgs_1748_; uint8_t v_component_1749_; uint8_t v_printPrefix_1750_; uint8_t v_printLibDir_1751_; uint8_t v_useStdin_1752_; uint8_t v_onlyDeps_1753_; uint8_t v_onlySrcDeps_1754_; uint8_t v_depsJson_1755_; lean_object* v_opts_1756_; uint32_t v_trustLevel_1757_; uint32_t v_numThreads_1758_; lean_object* v_rootDir_x3f_1759_; lean_object* v_setupFileName_x3f_1760_; lean_object* v_oleanFileName_x3f_1761_; lean_object* v_ileanFileName_x3f_1762_; lean_object* v_cFileName_x3f_1763_; lean_object* v_bcFileName_x3f_1764_; lean_object* v_zigFileName_x3f_1765_; uint8_t v_jsonOutput_1766_; lean_object* v_errorOnKinds_1767_; uint8_t v_printStats_1768_; uint8_t v_run_1769_; lean_object* v_incrSaveFileName_x3f_1770_; lean_object* v_incrLoadFileName_x3f_1771_; lean_object* v_incrHeaderSaveFileName_x3f_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1785_; 
v_leanOpts_1747_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1748_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1749_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1750_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1751_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1752_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1753_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1754_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1755_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1756_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1757_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1758_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1759_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1760_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1761_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1762_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1763_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1764_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1765_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1766_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1767_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1768_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1769_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1770_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1771_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1772_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1774_ = v_opts_1117_;
v_isShared_1775_ = v_isSharedCheck_1785_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1772_);
lean_inc(v_incrLoadFileName_x3f_1771_);
lean_inc(v_incrSaveFileName_x3f_1770_);
lean_inc(v_errorOnKinds_1767_);
lean_inc(v_zigFileName_x3f_1765_);
lean_inc(v_bcFileName_x3f_1764_);
lean_inc(v_cFileName_x3f_1763_);
lean_inc(v_ileanFileName_x3f_1762_);
lean_inc(v_oleanFileName_x3f_1761_);
lean_inc(v_setupFileName_x3f_1760_);
lean_inc(v_rootDir_x3f_1759_);
lean_inc(v_opts_1756_);
lean_inc(v_forwardedArgs_1748_);
lean_inc(v_leanOpts_1747_);
lean_dec(v_opts_1117_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1785_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1780_; 
v___x_1776_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__9));
v___x_1777_ = lean_string_append(v___x_1776_, v_a_1736_);
lean_dec(v_a_1736_);
v___x_1778_ = lean_array_push(v_forwardedArgs_1748_, v___x_1777_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 1, v___x_1778_);
v___x_1780_ = v___x_1774_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_leanOpts_1747_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v___x_1778_);
lean_ctor_set(v_reuseFailAlloc_1784_, 2, v_opts_1756_);
lean_ctor_set(v_reuseFailAlloc_1784_, 3, v_rootDir_x3f_1759_);
lean_ctor_set(v_reuseFailAlloc_1784_, 4, v_setupFileName_x3f_1760_);
lean_ctor_set(v_reuseFailAlloc_1784_, 5, v_oleanFileName_x3f_1761_);
lean_ctor_set(v_reuseFailAlloc_1784_, 6, v_ileanFileName_x3f_1762_);
lean_ctor_set(v_reuseFailAlloc_1784_, 7, v_cFileName_x3f_1763_);
lean_ctor_set(v_reuseFailAlloc_1784_, 8, v_bcFileName_x3f_1764_);
lean_ctor_set(v_reuseFailAlloc_1784_, 9, v_zigFileName_x3f_1765_);
lean_ctor_set(v_reuseFailAlloc_1784_, 10, v_errorOnKinds_1767_);
lean_ctor_set(v_reuseFailAlloc_1784_, 11, v_incrSaveFileName_x3f_1770_);
lean_ctor_set(v_reuseFailAlloc_1784_, 12, v_incrLoadFileName_x3f_1771_);
lean_ctor_set(v_reuseFailAlloc_1784_, 13, v_incrHeaderSaveFileName_x3f_1772_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 8, v_component_1749_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 9, v_printPrefix_1750_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 10, v_printLibDir_1751_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 11, v_useStdin_1752_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 12, v_onlyDeps_1753_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 13, v_onlySrcDeps_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 14, v_depsJson_1755_);
lean_ctor_set_uint32(v_reuseFailAlloc_1784_, sizeof(void*)*14, v_trustLevel_1757_);
lean_ctor_set_uint32(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 4, v_numThreads_1758_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 15, v_jsonOutput_1766_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 16, v_printStats_1768_);
lean_ctor_set_uint8(v_reuseFailAlloc_1784_, sizeof(void*)*14 + 17, v_run_1769_);
v___x_1780_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
lean_object* v___x_1782_; 
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1780_);
v___x_1782_ = v___x_1745_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
else
{
lean_object* v_a_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
lean_dec(v_a_1736_);
lean_dec_ref(v_opts_1117_);
v_a_1788_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1788_);
lean_dec_ref_known(v___x_1743_, 1);
v___x_1789_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1790_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1789_);
lean_dec_ref(v___x_1790_);
v___y_1197_ = v_a_1788_;
goto v___jp_1196_;
}
}
v___jp_1791_:
{
lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1793_ = lean_string_utf8_byte_size(v_a_1736_);
v___x_1794_ = lean_nat_dec_eq(v___y_1792_, v___x_1793_);
if (v___x_1794_ == 0)
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1800_; 
v___x_1795_ = lean_unsigned_to_nat(0u);
v___x_1796_ = lean_string_utf8_next_fast(v_a_1736_, v___y_1792_);
v___x_1797_ = lean_string_utf8_extract(v_a_1736_, v___x_1795_, v___y_1792_);
lean_dec(v___y_1792_);
v___x_1798_ = lean_string_utf8_extract(v_a_1736_, v___x_1796_, v___x_1793_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 1);
lean_ctor_set(v___x_1738_, 0, v___x_1798_);
v___x_1800_ = v___x_1738_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v___x_1798_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
v_fst_1741_ = v___x_1797_;
v_snd_1742_ = v___x_1800_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1802_; 
lean_dec(v___y_1792_);
lean_del_object(v___x_1738_);
v___x_1802_ = lean_box(0);
lean_inc(v_a_1736_);
v_fst_1741_ = v_a_1736_;
v_snd_1742_ = v___x_1802_;
goto v___jp_1740_;
}
}
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
lean_dec_ref(v_opts_1117_);
v_a_1810_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1810_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1814_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1815_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1814_);
lean_dec_ref(v___x_1815_);
goto v___jp_1811_;
v___jp_1811_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = lean_io_error_to_string(v_a_1810_);
v___x_1813_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1812_);
lean_dec_ref(v___x_1813_);
goto v___jp_1273_;
}
}
}
}
else
{
uint8_t v___x_1816_; 
v___x_1816_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_displayHelp___closed__16, &l___private_Lean_Shell_0__Lean_displayHelp___closed__16_once, _init_l___private_Lean_Shell_0__Lean_displayHelp___closed__16);
if (v___x_1816_ == 0)
{
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
goto v___jp_1243_;
}
else
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1817_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__10));
v___x_1818_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1817_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1827_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1821_ = v___x_1818_;
v_isShared_1822_ = v_isSharedCheck_1827_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1818_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1827_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1823_; lean_object* v___x_1825_; 
v___x_1823_ = lean_internal_enable_debug(v_a_1819_);
lean_dec(v_a_1819_);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v_opts_1117_);
v___x_1825_ = v___x_1821_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_opts_1117_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
else
{
lean_object* v_a_1828_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
lean_dec_ref(v_opts_1117_);
v_a_1828_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1818_, 1);
v___x_1832_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1833_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1832_);
lean_dec_ref(v___x_1833_);
goto v___jp_1829_;
v___jp_1829_:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = lean_io_error_to_string(v_a_1828_);
v___x_1831_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1830_);
lean_dec_ref(v___x_1831_);
goto v___jp_1187_;
}
}
}
}
}
else
{
lean_object* v_leanOpts_1834_; lean_object* v_forwardedArgs_1835_; uint8_t v_component_1836_; uint8_t v_printPrefix_1837_; uint8_t v_printLibDir_1838_; uint8_t v_useStdin_1839_; uint8_t v_onlyDeps_1840_; uint8_t v_onlySrcDeps_1841_; uint8_t v_depsJson_1842_; lean_object* v_opts_1843_; uint32_t v_trustLevel_1844_; uint32_t v_numThreads_1845_; lean_object* v_rootDir_x3f_1846_; lean_object* v_setupFileName_x3f_1847_; lean_object* v_oleanFileName_x3f_1848_; lean_object* v_ileanFileName_x3f_1849_; lean_object* v_cFileName_x3f_1850_; lean_object* v_bcFileName_x3f_1851_; lean_object* v_zigFileName_x3f_1852_; uint8_t v_jsonOutput_1853_; lean_object* v_errorOnKinds_1854_; uint8_t v_printStats_1855_; uint8_t v_run_1856_; lean_object* v_incrSaveFileName_x3f_1857_; lean_object* v_incrLoadFileName_x3f_1858_; lean_object* v_incrHeaderSaveFileName_x3f_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1869_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_1834_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1835_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1836_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1837_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1838_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1839_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1840_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1841_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1842_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1843_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1844_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1845_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1846_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1847_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1848_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1849_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1850_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1851_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1852_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1853_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1854_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1855_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1856_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1857_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1858_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1859_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1869_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1861_ = v_opts_1117_;
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1859_);
lean_inc(v_incrLoadFileName_x3f_1858_);
lean_inc(v_incrSaveFileName_x3f_1857_);
lean_inc(v_errorOnKinds_1854_);
lean_inc(v_zigFileName_x3f_1852_);
lean_inc(v_bcFileName_x3f_1851_);
lean_inc(v_cFileName_x3f_1850_);
lean_inc(v_ileanFileName_x3f_1849_);
lean_inc(v_oleanFileName_x3f_1848_);
lean_inc(v_setupFileName_x3f_1847_);
lean_inc(v_rootDir_x3f_1846_);
lean_inc(v_opts_1843_);
lean_inc(v_forwardedArgs_1835_);
lean_inc(v_leanOpts_1834_);
lean_dec(v_opts_1117_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1866_; 
v___x_1863_ = l_Lean_profiler;
v___x_1864_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_1834_, v___x_1863_, v___x_1406_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v___x_1864_);
v___x_1866_ = v___x_1861_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1864_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_forwardedArgs_1835_);
lean_ctor_set(v_reuseFailAlloc_1868_, 2, v_opts_1843_);
lean_ctor_set(v_reuseFailAlloc_1868_, 3, v_rootDir_x3f_1846_);
lean_ctor_set(v_reuseFailAlloc_1868_, 4, v_setupFileName_x3f_1847_);
lean_ctor_set(v_reuseFailAlloc_1868_, 5, v_oleanFileName_x3f_1848_);
lean_ctor_set(v_reuseFailAlloc_1868_, 6, v_ileanFileName_x3f_1849_);
lean_ctor_set(v_reuseFailAlloc_1868_, 7, v_cFileName_x3f_1850_);
lean_ctor_set(v_reuseFailAlloc_1868_, 8, v_bcFileName_x3f_1851_);
lean_ctor_set(v_reuseFailAlloc_1868_, 9, v_zigFileName_x3f_1852_);
lean_ctor_set(v_reuseFailAlloc_1868_, 10, v_errorOnKinds_1854_);
lean_ctor_set(v_reuseFailAlloc_1868_, 11, v_incrSaveFileName_x3f_1857_);
lean_ctor_set(v_reuseFailAlloc_1868_, 12, v_incrLoadFileName_x3f_1858_);
lean_ctor_set(v_reuseFailAlloc_1868_, 13, v_incrHeaderSaveFileName_x3f_1859_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 8, v_component_1836_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 9, v_printPrefix_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 10, v_printLibDir_1838_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 11, v_useStdin_1839_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 12, v_onlyDeps_1840_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 13, v_onlySrcDeps_1841_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 14, v_depsJson_1842_);
lean_ctor_set_uint32(v_reuseFailAlloc_1868_, sizeof(void*)*14, v_trustLevel_1844_);
lean_ctor_set_uint32(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 4, v_numThreads_1845_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 15, v_jsonOutput_1853_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 16, v_printStats_1855_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*14 + 17, v_run_1856_);
v___x_1866_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
return v___x_1867_;
}
}
}
}
else
{
lean_object* v_leanOpts_1870_; lean_object* v_forwardedArgs_1871_; uint8_t v_printPrefix_1872_; uint8_t v_printLibDir_1873_; uint8_t v_useStdin_1874_; uint8_t v_onlyDeps_1875_; uint8_t v_onlySrcDeps_1876_; uint8_t v_depsJson_1877_; lean_object* v_opts_1878_; uint32_t v_trustLevel_1879_; uint32_t v_numThreads_1880_; lean_object* v_rootDir_x3f_1881_; lean_object* v_setupFileName_x3f_1882_; lean_object* v_oleanFileName_x3f_1883_; lean_object* v_ileanFileName_x3f_1884_; lean_object* v_cFileName_x3f_1885_; lean_object* v_bcFileName_x3f_1886_; lean_object* v_zigFileName_x3f_1887_; uint8_t v_jsonOutput_1888_; lean_object* v_errorOnKinds_1889_; uint8_t v_printStats_1890_; uint8_t v_run_1891_; lean_object* v_incrSaveFileName_x3f_1892_; lean_object* v_incrLoadFileName_x3f_1893_; lean_object* v_incrHeaderSaveFileName_x3f_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1903_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_1870_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1871_ = lean_ctor_get(v_opts_1117_, 1);
v_printPrefix_1872_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1873_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1874_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1875_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1876_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1877_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1878_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1879_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1880_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1881_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1882_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1883_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1884_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1885_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1886_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1887_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1888_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1889_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1890_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1891_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1892_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1893_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1894_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1896_ = v_opts_1117_;
v_isShared_1897_ = v_isSharedCheck_1903_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1894_);
lean_inc(v_incrLoadFileName_x3f_1893_);
lean_inc(v_incrSaveFileName_x3f_1892_);
lean_inc(v_errorOnKinds_1889_);
lean_inc(v_zigFileName_x3f_1887_);
lean_inc(v_bcFileName_x3f_1886_);
lean_inc(v_cFileName_x3f_1885_);
lean_inc(v_ileanFileName_x3f_1884_);
lean_inc(v_oleanFileName_x3f_1883_);
lean_inc(v_setupFileName_x3f_1882_);
lean_inc(v_rootDir_x3f_1881_);
lean_inc(v_opts_1878_);
lean_inc(v_forwardedArgs_1871_);
lean_inc(v_leanOpts_1870_);
lean_dec(v_opts_1117_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1903_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
uint8_t v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = 2;
if (v_isShared_1897_ == 0)
{
v___x_1900_ = v___x_1896_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_leanOpts_1870_);
lean_ctor_set(v_reuseFailAlloc_1902_, 1, v_forwardedArgs_1871_);
lean_ctor_set(v_reuseFailAlloc_1902_, 2, v_opts_1878_);
lean_ctor_set(v_reuseFailAlloc_1902_, 3, v_rootDir_x3f_1881_);
lean_ctor_set(v_reuseFailAlloc_1902_, 4, v_setupFileName_x3f_1882_);
lean_ctor_set(v_reuseFailAlloc_1902_, 5, v_oleanFileName_x3f_1883_);
lean_ctor_set(v_reuseFailAlloc_1902_, 6, v_ileanFileName_x3f_1884_);
lean_ctor_set(v_reuseFailAlloc_1902_, 7, v_cFileName_x3f_1885_);
lean_ctor_set(v_reuseFailAlloc_1902_, 8, v_bcFileName_x3f_1886_);
lean_ctor_set(v_reuseFailAlloc_1902_, 9, v_zigFileName_x3f_1887_);
lean_ctor_set(v_reuseFailAlloc_1902_, 10, v_errorOnKinds_1889_);
lean_ctor_set(v_reuseFailAlloc_1902_, 11, v_incrSaveFileName_x3f_1892_);
lean_ctor_set(v_reuseFailAlloc_1902_, 12, v_incrLoadFileName_x3f_1893_);
lean_ctor_set(v_reuseFailAlloc_1902_, 13, v_incrHeaderSaveFileName_x3f_1894_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 9, v_printPrefix_1872_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 10, v_printLibDir_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 11, v_useStdin_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 12, v_onlyDeps_1875_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 13, v_onlySrcDeps_1876_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 14, v_depsJson_1877_);
lean_ctor_set_uint32(v_reuseFailAlloc_1902_, sizeof(void*)*14, v_trustLevel_1879_);
lean_ctor_set_uint32(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 4, v_numThreads_1880_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 15, v_jsonOutput_1888_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 16, v_printStats_1890_);
lean_ctor_set_uint8(v_reuseFailAlloc_1902_, sizeof(void*)*14 + 17, v_run_1891_);
v___x_1900_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; 
lean_ctor_set_uint8(v___x_1900_, sizeof(void*)*14 + 8, v___x_1898_);
v___x_1901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
return v___x_1901_;
}
}
}
}
else
{
lean_object* v_leanOpts_1904_; lean_object* v_forwardedArgs_1905_; uint8_t v_printPrefix_1906_; uint8_t v_printLibDir_1907_; uint8_t v_useStdin_1908_; uint8_t v_onlyDeps_1909_; uint8_t v_onlySrcDeps_1910_; uint8_t v_depsJson_1911_; lean_object* v_opts_1912_; uint32_t v_trustLevel_1913_; uint32_t v_numThreads_1914_; lean_object* v_rootDir_x3f_1915_; lean_object* v_setupFileName_x3f_1916_; lean_object* v_oleanFileName_x3f_1917_; lean_object* v_ileanFileName_x3f_1918_; lean_object* v_cFileName_x3f_1919_; lean_object* v_bcFileName_x3f_1920_; lean_object* v_zigFileName_x3f_1921_; uint8_t v_jsonOutput_1922_; lean_object* v_errorOnKinds_1923_; uint8_t v_printStats_1924_; uint8_t v_run_1925_; lean_object* v_incrSaveFileName_x3f_1926_; lean_object* v_incrLoadFileName_x3f_1927_; lean_object* v_incrHeaderSaveFileName_x3f_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1937_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_1904_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1905_ = lean_ctor_get(v_opts_1117_, 1);
v_printPrefix_1906_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1907_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1908_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1909_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1910_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1911_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1912_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1913_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1914_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1915_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1916_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1917_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1918_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1919_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1920_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1921_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1922_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1923_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1924_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1925_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1926_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1927_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1928_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1937_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1930_ = v_opts_1117_;
v_isShared_1931_ = v_isSharedCheck_1937_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1928_);
lean_inc(v_incrLoadFileName_x3f_1927_);
lean_inc(v_incrSaveFileName_x3f_1926_);
lean_inc(v_errorOnKinds_1923_);
lean_inc(v_zigFileName_x3f_1921_);
lean_inc(v_bcFileName_x3f_1920_);
lean_inc(v_cFileName_x3f_1919_);
lean_inc(v_ileanFileName_x3f_1918_);
lean_inc(v_oleanFileName_x3f_1917_);
lean_inc(v_setupFileName_x3f_1916_);
lean_inc(v_rootDir_x3f_1915_);
lean_inc(v_opts_1912_);
lean_inc(v_forwardedArgs_1905_);
lean_inc(v_leanOpts_1904_);
lean_dec(v_opts_1117_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1937_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
uint8_t v___x_1932_; lean_object* v___x_1934_; 
v___x_1932_ = 1;
if (v_isShared_1931_ == 0)
{
v___x_1934_ = v___x_1930_;
goto v_reusejp_1933_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_leanOpts_1904_);
lean_ctor_set(v_reuseFailAlloc_1936_, 1, v_forwardedArgs_1905_);
lean_ctor_set(v_reuseFailAlloc_1936_, 2, v_opts_1912_);
lean_ctor_set(v_reuseFailAlloc_1936_, 3, v_rootDir_x3f_1915_);
lean_ctor_set(v_reuseFailAlloc_1936_, 4, v_setupFileName_x3f_1916_);
lean_ctor_set(v_reuseFailAlloc_1936_, 5, v_oleanFileName_x3f_1917_);
lean_ctor_set(v_reuseFailAlloc_1936_, 6, v_ileanFileName_x3f_1918_);
lean_ctor_set(v_reuseFailAlloc_1936_, 7, v_cFileName_x3f_1919_);
lean_ctor_set(v_reuseFailAlloc_1936_, 8, v_bcFileName_x3f_1920_);
lean_ctor_set(v_reuseFailAlloc_1936_, 9, v_zigFileName_x3f_1921_);
lean_ctor_set(v_reuseFailAlloc_1936_, 10, v_errorOnKinds_1923_);
lean_ctor_set(v_reuseFailAlloc_1936_, 11, v_incrSaveFileName_x3f_1926_);
lean_ctor_set(v_reuseFailAlloc_1936_, 12, v_incrLoadFileName_x3f_1927_);
lean_ctor_set(v_reuseFailAlloc_1936_, 13, v_incrHeaderSaveFileName_x3f_1928_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 9, v_printPrefix_1906_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 10, v_printLibDir_1907_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 11, v_useStdin_1908_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 12, v_onlyDeps_1909_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 13, v_onlySrcDeps_1910_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 14, v_depsJson_1911_);
lean_ctor_set_uint32(v_reuseFailAlloc_1936_, sizeof(void*)*14, v_trustLevel_1913_);
lean_ctor_set_uint32(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 4, v_numThreads_1914_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 15, v_jsonOutput_1922_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 16, v_printStats_1924_);
lean_ctor_set_uint8(v_reuseFailAlloc_1936_, sizeof(void*)*14 + 17, v_run_1925_);
v___x_1934_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1933_;
}
v_reusejp_1933_:
{
lean_object* v___x_1935_; 
lean_ctor_set_uint8(v___x_1934_, sizeof(void*)*14 + 8, v___x_1932_);
v___x_1935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1935_, 0, v___x_1934_);
return v___x_1935_;
}
}
}
}
else
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__11));
v___x_1939_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_1938_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_1939_) == 0)
{
lean_object* v_a_1940_; lean_object* v_leanOpts_1941_; lean_object* v_forwardedArgs_1942_; uint8_t v_component_1943_; uint8_t v_printPrefix_1944_; uint8_t v_printLibDir_1945_; uint8_t v_useStdin_1946_; uint8_t v_onlyDeps_1947_; uint8_t v_onlySrcDeps_1948_; uint8_t v_depsJson_1949_; lean_object* v_opts_1950_; uint32_t v_trustLevel_1951_; uint32_t v_numThreads_1952_; lean_object* v_rootDir_x3f_1953_; lean_object* v_setupFileName_x3f_1954_; lean_object* v_oleanFileName_x3f_1955_; lean_object* v_ileanFileName_x3f_1956_; lean_object* v_cFileName_x3f_1957_; lean_object* v_bcFileName_x3f_1958_; lean_object* v_zigFileName_x3f_1959_; uint8_t v_jsonOutput_1960_; lean_object* v_errorOnKinds_1961_; uint8_t v_printStats_1962_; uint8_t v_run_1963_; lean_object* v_incrSaveFileName_x3f_1964_; lean_object* v_incrLoadFileName_x3f_1965_; lean_object* v_incrHeaderSaveFileName_x3f_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1991_; 
v_a_1940_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1940_);
lean_dec_ref_known(v___x_1939_, 1);
v_leanOpts_1941_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1942_ = lean_ctor_get(v_opts_1117_, 1);
v_component_1943_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_1944_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_1945_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_1946_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_1947_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_1948_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_1949_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_1950_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_1951_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_1952_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_1953_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_1954_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_1955_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_1956_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_1957_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_1958_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_1959_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_1960_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_1961_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_1962_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_1963_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_1964_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_1965_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_1966_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1968_ = v_opts_1117_;
v_isShared_1969_ = v_isSharedCheck_1991_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_1966_);
lean_inc(v_incrLoadFileName_x3f_1965_);
lean_inc(v_incrSaveFileName_x3f_1964_);
lean_inc(v_errorOnKinds_1961_);
lean_inc(v_zigFileName_x3f_1959_);
lean_inc(v_bcFileName_x3f_1958_);
lean_inc(v_cFileName_x3f_1957_);
lean_inc(v_ileanFileName_x3f_1956_);
lean_inc(v_oleanFileName_x3f_1955_);
lean_inc(v_setupFileName_x3f_1954_);
lean_inc(v_rootDir_x3f_1953_);
lean_inc(v_opts_1950_);
lean_inc(v_forwardedArgs_1942_);
lean_inc(v_leanOpts_1941_);
lean_dec(v_opts_1117_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1991_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1970_; 
lean_inc(v_a_1940_);
v___x_1970_ = l___private_Lean_Shell_0__Lean_setConfigOption(v_leanOpts_1941_, v_a_1940_);
if (lean_obj_tag(v___x_1970_) == 0)
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1984_; 
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1973_ = v___x_1970_;
v_isShared_1974_ = v_isSharedCheck_1984_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1970_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1984_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1975_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__12));
v___x_1976_ = lean_string_append(v___x_1975_, v_a_1940_);
lean_dec(v_a_1940_);
v___x_1977_ = lean_array_push(v_forwardedArgs_1942_, v___x_1976_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 1, v___x_1977_);
lean_ctor_set(v___x_1968_, 0, v_a_1971_);
v___x_1979_ = v___x_1968_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1971_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v___x_1977_);
lean_ctor_set(v_reuseFailAlloc_1983_, 2, v_opts_1950_);
lean_ctor_set(v_reuseFailAlloc_1983_, 3, v_rootDir_x3f_1953_);
lean_ctor_set(v_reuseFailAlloc_1983_, 4, v_setupFileName_x3f_1954_);
lean_ctor_set(v_reuseFailAlloc_1983_, 5, v_oleanFileName_x3f_1955_);
lean_ctor_set(v_reuseFailAlloc_1983_, 6, v_ileanFileName_x3f_1956_);
lean_ctor_set(v_reuseFailAlloc_1983_, 7, v_cFileName_x3f_1957_);
lean_ctor_set(v_reuseFailAlloc_1983_, 8, v_bcFileName_x3f_1958_);
lean_ctor_set(v_reuseFailAlloc_1983_, 9, v_zigFileName_x3f_1959_);
lean_ctor_set(v_reuseFailAlloc_1983_, 10, v_errorOnKinds_1961_);
lean_ctor_set(v_reuseFailAlloc_1983_, 11, v_incrSaveFileName_x3f_1964_);
lean_ctor_set(v_reuseFailAlloc_1983_, 12, v_incrLoadFileName_x3f_1965_);
lean_ctor_set(v_reuseFailAlloc_1983_, 13, v_incrHeaderSaveFileName_x3f_1966_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 8, v_component_1943_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 9, v_printPrefix_1944_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 10, v_printLibDir_1945_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 11, v_useStdin_1946_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 12, v_onlyDeps_1947_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 13, v_onlySrcDeps_1948_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 14, v_depsJson_1949_);
lean_ctor_set_uint32(v_reuseFailAlloc_1983_, sizeof(void*)*14, v_trustLevel_1951_);
lean_ctor_set_uint32(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 4, v_numThreads_1952_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 15, v_jsonOutput_1960_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 16, v_printStats_1962_);
lean_ctor_set_uint8(v_reuseFailAlloc_1983_, sizeof(void*)*14 + 17, v_run_1963_);
v___x_1979_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1981_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 0, v___x_1979_);
v___x_1981_ = v___x_1973_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v___x_1979_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1989_; lean_object* v___x_1990_; 
lean_del_object(v___x_1968_);
lean_dec(v_incrHeaderSaveFileName_x3f_1966_);
lean_dec(v_incrLoadFileName_x3f_1965_);
lean_dec(v_incrSaveFileName_x3f_1964_);
lean_dec_ref(v_errorOnKinds_1961_);
lean_dec(v_zigFileName_x3f_1959_);
lean_dec(v_bcFileName_x3f_1958_);
lean_dec(v_cFileName_x3f_1957_);
lean_dec(v_ileanFileName_x3f_1956_);
lean_dec(v_oleanFileName_x3f_1955_);
lean_dec(v_setupFileName_x3f_1954_);
lean_dec(v_rootDir_x3f_1953_);
lean_dec_ref(v_opts_1950_);
lean_dec_ref(v_forwardedArgs_1942_);
lean_dec(v_a_1940_);
v_a_1985_ = lean_ctor_get(v___x_1970_, 0);
lean_inc(v_a_1985_);
lean_dec_ref_known(v___x_1970_, 1);
v___x_1989_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1990_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1989_);
lean_dec_ref(v___x_1990_);
goto v___jp_1986_;
v___jp_1986_:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = lean_io_error_to_string(v_a_1985_);
v___x_1988_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1987_);
lean_dec_ref(v___x_1988_);
goto v___jp_1279_;
}
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
lean_dec_ref(v_opts_1117_);
v_a_1992_ = lean_ctor_get(v___x_1939_, 0);
lean_inc(v_a_1992_);
lean_dec_ref_known(v___x_1939_, 1);
v___x_1996_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1997_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1996_);
lean_dec_ref(v___x_1997_);
goto v___jp_1993_;
v___jp_1993_:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1994_ = lean_io_error_to_string(v_a_1992_);
v___x_1995_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1994_);
lean_dec_ref(v___x_1995_);
goto v___jp_1181_;
}
}
}
}
else
{
lean_object* v_leanOpts_1998_; lean_object* v_forwardedArgs_1999_; uint8_t v_component_2000_; uint8_t v_printPrefix_2001_; uint8_t v_useStdin_2002_; uint8_t v_onlyDeps_2003_; uint8_t v_onlySrcDeps_2004_; uint8_t v_depsJson_2005_; lean_object* v_opts_2006_; uint32_t v_trustLevel_2007_; uint32_t v_numThreads_2008_; lean_object* v_rootDir_x3f_2009_; lean_object* v_setupFileName_x3f_2010_; lean_object* v_oleanFileName_x3f_2011_; lean_object* v_ileanFileName_x3f_2012_; lean_object* v_cFileName_x3f_2013_; lean_object* v_bcFileName_x3f_2014_; lean_object* v_zigFileName_x3f_2015_; uint8_t v_jsonOutput_2016_; lean_object* v_errorOnKinds_2017_; uint8_t v_printStats_2018_; uint8_t v_run_2019_; lean_object* v_incrSaveFileName_x3f_2020_; lean_object* v_incrLoadFileName_x3f_2021_; lean_object* v_incrHeaderSaveFileName_x3f_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2030_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_1998_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_1999_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2000_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2001_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_useStdin_2002_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2003_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2004_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2005_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2006_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2007_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2008_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2009_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2010_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2011_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2012_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2013_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2014_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2015_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2016_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2017_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2018_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2019_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2020_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2021_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2022_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2024_ = v_opts_1117_;
v_isShared_2025_ = v_isSharedCheck_2030_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2022_);
lean_inc(v_incrLoadFileName_x3f_2021_);
lean_inc(v_incrSaveFileName_x3f_2020_);
lean_inc(v_errorOnKinds_2017_);
lean_inc(v_zigFileName_x3f_2015_);
lean_inc(v_bcFileName_x3f_2014_);
lean_inc(v_cFileName_x3f_2013_);
lean_inc(v_ileanFileName_x3f_2012_);
lean_inc(v_oleanFileName_x3f_2011_);
lean_inc(v_setupFileName_x3f_2010_);
lean_inc(v_rootDir_x3f_2009_);
lean_inc(v_opts_2006_);
lean_inc(v_forwardedArgs_1999_);
lean_inc(v_leanOpts_1998_);
lean_dec(v_opts_1117_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2030_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_leanOpts_1998_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_forwardedArgs_1999_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v_opts_2006_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v_rootDir_x3f_2009_);
lean_ctor_set(v_reuseFailAlloc_2029_, 4, v_setupFileName_x3f_2010_);
lean_ctor_set(v_reuseFailAlloc_2029_, 5, v_oleanFileName_x3f_2011_);
lean_ctor_set(v_reuseFailAlloc_2029_, 6, v_ileanFileName_x3f_2012_);
lean_ctor_set(v_reuseFailAlloc_2029_, 7, v_cFileName_x3f_2013_);
lean_ctor_set(v_reuseFailAlloc_2029_, 8, v_bcFileName_x3f_2014_);
lean_ctor_set(v_reuseFailAlloc_2029_, 9, v_zigFileName_x3f_2015_);
lean_ctor_set(v_reuseFailAlloc_2029_, 10, v_errorOnKinds_2017_);
lean_ctor_set(v_reuseFailAlloc_2029_, 11, v_incrSaveFileName_x3f_2020_);
lean_ctor_set(v_reuseFailAlloc_2029_, 12, v_incrLoadFileName_x3f_2021_);
lean_ctor_set(v_reuseFailAlloc_2029_, 13, v_incrHeaderSaveFileName_x3f_2022_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 8, v_component_2000_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 9, v_printPrefix_2001_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 11, v_useStdin_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 12, v_onlyDeps_2003_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 13, v_onlySrcDeps_2004_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 14, v_depsJson_2005_);
lean_ctor_set_uint32(v_reuseFailAlloc_2029_, sizeof(void*)*14, v_trustLevel_2007_);
lean_ctor_set_uint32(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 4, v_numThreads_2008_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 15, v_jsonOutput_2016_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 16, v_printStats_2018_);
lean_ctor_set_uint8(v_reuseFailAlloc_2029_, sizeof(void*)*14 + 17, v_run_2019_);
v___x_2027_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
lean_object* v___x_2028_; 
lean_ctor_set_uint8(v___x_2027_, sizeof(void*)*14 + 10, v___x_1398_);
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
return v___x_2028_;
}
}
}
}
else
{
lean_object* v_leanOpts_2031_; lean_object* v_forwardedArgs_2032_; uint8_t v_component_2033_; uint8_t v_printLibDir_2034_; uint8_t v_useStdin_2035_; uint8_t v_onlyDeps_2036_; uint8_t v_onlySrcDeps_2037_; uint8_t v_depsJson_2038_; lean_object* v_opts_2039_; uint32_t v_trustLevel_2040_; uint32_t v_numThreads_2041_; lean_object* v_rootDir_x3f_2042_; lean_object* v_setupFileName_x3f_2043_; lean_object* v_oleanFileName_x3f_2044_; lean_object* v_ileanFileName_x3f_2045_; lean_object* v_cFileName_x3f_2046_; lean_object* v_bcFileName_x3f_2047_; lean_object* v_zigFileName_x3f_2048_; uint8_t v_jsonOutput_2049_; lean_object* v_errorOnKinds_2050_; uint8_t v_printStats_2051_; uint8_t v_run_2052_; lean_object* v_incrSaveFileName_x3f_2053_; lean_object* v_incrLoadFileName_x3f_2054_; lean_object* v_incrHeaderSaveFileName_x3f_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2063_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2031_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2032_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2033_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printLibDir_2034_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2035_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2036_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2037_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2038_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2039_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2040_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2041_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2042_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2043_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2044_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2045_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2046_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2047_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2048_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2049_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2050_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2051_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2052_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2053_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2054_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2055_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2057_ = v_opts_1117_;
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2055_);
lean_inc(v_incrLoadFileName_x3f_2054_);
lean_inc(v_incrSaveFileName_x3f_2053_);
lean_inc(v_errorOnKinds_2050_);
lean_inc(v_zigFileName_x3f_2048_);
lean_inc(v_bcFileName_x3f_2047_);
lean_inc(v_cFileName_x3f_2046_);
lean_inc(v_ileanFileName_x3f_2045_);
lean_inc(v_oleanFileName_x3f_2044_);
lean_inc(v_setupFileName_x3f_2043_);
lean_inc(v_rootDir_x3f_2042_);
lean_inc(v_opts_2039_);
lean_inc(v_forwardedArgs_2032_);
lean_inc(v_leanOpts_2031_);
lean_dec(v_opts_1117_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_leanOpts_2031_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_forwardedArgs_2032_);
lean_ctor_set(v_reuseFailAlloc_2062_, 2, v_opts_2039_);
lean_ctor_set(v_reuseFailAlloc_2062_, 3, v_rootDir_x3f_2042_);
lean_ctor_set(v_reuseFailAlloc_2062_, 4, v_setupFileName_x3f_2043_);
lean_ctor_set(v_reuseFailAlloc_2062_, 5, v_oleanFileName_x3f_2044_);
lean_ctor_set(v_reuseFailAlloc_2062_, 6, v_ileanFileName_x3f_2045_);
lean_ctor_set(v_reuseFailAlloc_2062_, 7, v_cFileName_x3f_2046_);
lean_ctor_set(v_reuseFailAlloc_2062_, 8, v_bcFileName_x3f_2047_);
lean_ctor_set(v_reuseFailAlloc_2062_, 9, v_zigFileName_x3f_2048_);
lean_ctor_set(v_reuseFailAlloc_2062_, 10, v_errorOnKinds_2050_);
lean_ctor_set(v_reuseFailAlloc_2062_, 11, v_incrSaveFileName_x3f_2053_);
lean_ctor_set(v_reuseFailAlloc_2062_, 12, v_incrLoadFileName_x3f_2054_);
lean_ctor_set(v_reuseFailAlloc_2062_, 13, v_incrHeaderSaveFileName_x3f_2055_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 8, v_component_2033_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 10, v_printLibDir_2034_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 11, v_useStdin_2035_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 12, v_onlyDeps_2036_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 13, v_onlySrcDeps_2037_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 14, v_depsJson_2038_);
lean_ctor_set_uint32(v_reuseFailAlloc_2062_, sizeof(void*)*14, v_trustLevel_2040_);
lean_ctor_set_uint32(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 4, v_numThreads_2041_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 15, v_jsonOutput_2049_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 16, v_printStats_2051_);
lean_ctor_set_uint8(v_reuseFailAlloc_2062_, sizeof(void*)*14 + 17, v_run_2052_);
v___x_2060_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2061_; 
lean_ctor_set_uint8(v___x_2060_, sizeof(void*)*14 + 9, v___x_1396_);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
return v___x_2061_;
}
}
}
}
else
{
lean_object* v_leanOpts_2064_; lean_object* v_forwardedArgs_2065_; uint8_t v_component_2066_; uint8_t v_printPrefix_2067_; uint8_t v_printLibDir_2068_; uint8_t v_useStdin_2069_; uint8_t v_onlyDeps_2070_; uint8_t v_onlySrcDeps_2071_; uint8_t v_depsJson_2072_; lean_object* v_opts_2073_; uint32_t v_trustLevel_2074_; uint32_t v_numThreads_2075_; lean_object* v_rootDir_x3f_2076_; lean_object* v_setupFileName_x3f_2077_; lean_object* v_oleanFileName_x3f_2078_; lean_object* v_ileanFileName_x3f_2079_; lean_object* v_cFileName_x3f_2080_; lean_object* v_bcFileName_x3f_2081_; lean_object* v_zigFileName_x3f_2082_; uint8_t v_jsonOutput_2083_; lean_object* v_errorOnKinds_2084_; uint8_t v_run_2085_; lean_object* v_incrSaveFileName_x3f_2086_; lean_object* v_incrLoadFileName_x3f_2087_; lean_object* v_incrHeaderSaveFileName_x3f_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2064_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2065_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2066_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2067_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2068_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2069_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2070_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2071_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2072_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2073_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2074_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2075_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2076_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2077_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2078_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2079_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2080_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2081_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2082_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2083_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2084_ = lean_ctor_get(v_opts_1117_, 10);
v_run_2085_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2086_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2087_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2088_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2090_ = v_opts_1117_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2088_);
lean_inc(v_incrLoadFileName_x3f_2087_);
lean_inc(v_incrSaveFileName_x3f_2086_);
lean_inc(v_errorOnKinds_2084_);
lean_inc(v_zigFileName_x3f_2082_);
lean_inc(v_bcFileName_x3f_2081_);
lean_inc(v_cFileName_x3f_2080_);
lean_inc(v_ileanFileName_x3f_2079_);
lean_inc(v_oleanFileName_x3f_2078_);
lean_inc(v_setupFileName_x3f_2077_);
lean_inc(v_rootDir_x3f_2076_);
lean_inc(v_opts_2073_);
lean_inc(v_forwardedArgs_2065_);
lean_inc(v_leanOpts_2064_);
lean_dec(v_opts_1117_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_leanOpts_2064_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_forwardedArgs_2065_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_opts_2073_);
lean_ctor_set(v_reuseFailAlloc_2095_, 3, v_rootDir_x3f_2076_);
lean_ctor_set(v_reuseFailAlloc_2095_, 4, v_setupFileName_x3f_2077_);
lean_ctor_set(v_reuseFailAlloc_2095_, 5, v_oleanFileName_x3f_2078_);
lean_ctor_set(v_reuseFailAlloc_2095_, 6, v_ileanFileName_x3f_2079_);
lean_ctor_set(v_reuseFailAlloc_2095_, 7, v_cFileName_x3f_2080_);
lean_ctor_set(v_reuseFailAlloc_2095_, 8, v_bcFileName_x3f_2081_);
lean_ctor_set(v_reuseFailAlloc_2095_, 9, v_zigFileName_x3f_2082_);
lean_ctor_set(v_reuseFailAlloc_2095_, 10, v_errorOnKinds_2084_);
lean_ctor_set(v_reuseFailAlloc_2095_, 11, v_incrSaveFileName_x3f_2086_);
lean_ctor_set(v_reuseFailAlloc_2095_, 12, v_incrLoadFileName_x3f_2087_);
lean_ctor_set(v_reuseFailAlloc_2095_, 13, v_incrHeaderSaveFileName_x3f_2088_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 8, v_component_2066_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 9, v_printPrefix_2067_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 10, v_printLibDir_2068_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 11, v_useStdin_2069_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 12, v_onlyDeps_2070_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 13, v_onlySrcDeps_2071_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 14, v_depsJson_2072_);
lean_ctor_set_uint32(v_reuseFailAlloc_2095_, sizeof(void*)*14, v_trustLevel_2074_);
lean_ctor_set_uint32(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 4, v_numThreads_2075_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 15, v_jsonOutput_2083_);
lean_ctor_set_uint8(v_reuseFailAlloc_2095_, sizeof(void*)*14 + 17, v_run_2085_);
v___x_2093_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; 
lean_ctor_set_uint8(v___x_2093_, sizeof(void*)*14 + 16, v___x_1394_);
v___x_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
return v___x_2094_;
}
}
}
}
else
{
lean_object* v_leanOpts_2097_; lean_object* v_forwardedArgs_2098_; uint8_t v_component_2099_; uint8_t v_printPrefix_2100_; uint8_t v_printLibDir_2101_; uint8_t v_useStdin_2102_; uint8_t v_onlyDeps_2103_; uint8_t v_onlySrcDeps_2104_; uint8_t v_depsJson_2105_; lean_object* v_opts_2106_; uint32_t v_trustLevel_2107_; uint32_t v_numThreads_2108_; lean_object* v_rootDir_x3f_2109_; lean_object* v_setupFileName_x3f_2110_; lean_object* v_oleanFileName_x3f_2111_; lean_object* v_ileanFileName_x3f_2112_; lean_object* v_cFileName_x3f_2113_; lean_object* v_bcFileName_x3f_2114_; lean_object* v_zigFileName_x3f_2115_; lean_object* v_errorOnKinds_2116_; uint8_t v_printStats_2117_; uint8_t v_run_2118_; lean_object* v_incrSaveFileName_x3f_2119_; lean_object* v_incrLoadFileName_x3f_2120_; lean_object* v_incrHeaderSaveFileName_x3f_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2129_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2097_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2098_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2099_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2100_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2101_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2102_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2103_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2104_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2105_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2106_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2107_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2108_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2109_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2110_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2111_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2112_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2113_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2114_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2115_ = lean_ctor_get(v_opts_1117_, 9);
v_errorOnKinds_2116_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2117_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2118_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2119_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2120_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2121_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2129_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2123_ = v_opts_1117_;
v_isShared_2124_ = v_isSharedCheck_2129_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2121_);
lean_inc(v_incrLoadFileName_x3f_2120_);
lean_inc(v_incrSaveFileName_x3f_2119_);
lean_inc(v_errorOnKinds_2116_);
lean_inc(v_zigFileName_x3f_2115_);
lean_inc(v_bcFileName_x3f_2114_);
lean_inc(v_cFileName_x3f_2113_);
lean_inc(v_ileanFileName_x3f_2112_);
lean_inc(v_oleanFileName_x3f_2111_);
lean_inc(v_setupFileName_x3f_2110_);
lean_inc(v_rootDir_x3f_2109_);
lean_inc(v_opts_2106_);
lean_inc(v_forwardedArgs_2098_);
lean_inc(v_leanOpts_2097_);
lean_dec(v_opts_1117_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2129_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_leanOpts_2097_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_forwardedArgs_2098_);
lean_ctor_set(v_reuseFailAlloc_2128_, 2, v_opts_2106_);
lean_ctor_set(v_reuseFailAlloc_2128_, 3, v_rootDir_x3f_2109_);
lean_ctor_set(v_reuseFailAlloc_2128_, 4, v_setupFileName_x3f_2110_);
lean_ctor_set(v_reuseFailAlloc_2128_, 5, v_oleanFileName_x3f_2111_);
lean_ctor_set(v_reuseFailAlloc_2128_, 6, v_ileanFileName_x3f_2112_);
lean_ctor_set(v_reuseFailAlloc_2128_, 7, v_cFileName_x3f_2113_);
lean_ctor_set(v_reuseFailAlloc_2128_, 8, v_bcFileName_x3f_2114_);
lean_ctor_set(v_reuseFailAlloc_2128_, 9, v_zigFileName_x3f_2115_);
lean_ctor_set(v_reuseFailAlloc_2128_, 10, v_errorOnKinds_2116_);
lean_ctor_set(v_reuseFailAlloc_2128_, 11, v_incrSaveFileName_x3f_2119_);
lean_ctor_set(v_reuseFailAlloc_2128_, 12, v_incrLoadFileName_x3f_2120_);
lean_ctor_set(v_reuseFailAlloc_2128_, 13, v_incrHeaderSaveFileName_x3f_2121_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 8, v_component_2099_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 9, v_printPrefix_2100_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 10, v_printLibDir_2101_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 11, v_useStdin_2102_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 12, v_onlyDeps_2103_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 13, v_onlySrcDeps_2104_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 14, v_depsJson_2105_);
lean_ctor_set_uint32(v_reuseFailAlloc_2128_, sizeof(void*)*14, v_trustLevel_2107_);
lean_ctor_set_uint32(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 4, v_numThreads_2108_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 16, v_printStats_2117_);
lean_ctor_set_uint8(v_reuseFailAlloc_2128_, sizeof(void*)*14 + 17, v_run_2118_);
v___x_2126_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
lean_object* v___x_2127_; 
lean_ctor_set_uint8(v___x_2126_, sizeof(void*)*14 + 15, v___x_1392_);
v___x_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
return v___x_2127_;
}
}
}
}
else
{
lean_object* v_leanOpts_2130_; lean_object* v_forwardedArgs_2131_; uint8_t v_component_2132_; uint8_t v_printPrefix_2133_; uint8_t v_printLibDir_2134_; uint8_t v_useStdin_2135_; uint8_t v_onlySrcDeps_2136_; lean_object* v_opts_2137_; uint32_t v_trustLevel_2138_; uint32_t v_numThreads_2139_; lean_object* v_rootDir_x3f_2140_; lean_object* v_setupFileName_x3f_2141_; lean_object* v_oleanFileName_x3f_2142_; lean_object* v_ileanFileName_x3f_2143_; lean_object* v_cFileName_x3f_2144_; lean_object* v_bcFileName_x3f_2145_; lean_object* v_zigFileName_x3f_2146_; uint8_t v_jsonOutput_2147_; lean_object* v_errorOnKinds_2148_; uint8_t v_printStats_2149_; uint8_t v_run_2150_; lean_object* v_incrSaveFileName_x3f_2151_; lean_object* v_incrLoadFileName_x3f_2152_; lean_object* v_incrHeaderSaveFileName_x3f_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2161_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2130_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2131_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2132_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2133_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2134_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2135_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2136_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_opts_2137_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2138_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2139_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2140_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2141_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2142_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2143_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2144_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2145_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2146_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2147_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2148_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2149_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2150_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2151_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2152_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2153_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2161_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2155_ = v_opts_1117_;
v_isShared_2156_ = v_isSharedCheck_2161_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2153_);
lean_inc(v_incrLoadFileName_x3f_2152_);
lean_inc(v_incrSaveFileName_x3f_2151_);
lean_inc(v_errorOnKinds_2148_);
lean_inc(v_zigFileName_x3f_2146_);
lean_inc(v_bcFileName_x3f_2145_);
lean_inc(v_cFileName_x3f_2144_);
lean_inc(v_ileanFileName_x3f_2143_);
lean_inc(v_oleanFileName_x3f_2142_);
lean_inc(v_setupFileName_x3f_2141_);
lean_inc(v_rootDir_x3f_2140_);
lean_inc(v_opts_2137_);
lean_inc(v_forwardedArgs_2131_);
lean_inc(v_leanOpts_2130_);
lean_dec(v_opts_1117_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2161_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_leanOpts_2130_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v_forwardedArgs_2131_);
lean_ctor_set(v_reuseFailAlloc_2160_, 2, v_opts_2137_);
lean_ctor_set(v_reuseFailAlloc_2160_, 3, v_rootDir_x3f_2140_);
lean_ctor_set(v_reuseFailAlloc_2160_, 4, v_setupFileName_x3f_2141_);
lean_ctor_set(v_reuseFailAlloc_2160_, 5, v_oleanFileName_x3f_2142_);
lean_ctor_set(v_reuseFailAlloc_2160_, 6, v_ileanFileName_x3f_2143_);
lean_ctor_set(v_reuseFailAlloc_2160_, 7, v_cFileName_x3f_2144_);
lean_ctor_set(v_reuseFailAlloc_2160_, 8, v_bcFileName_x3f_2145_);
lean_ctor_set(v_reuseFailAlloc_2160_, 9, v_zigFileName_x3f_2146_);
lean_ctor_set(v_reuseFailAlloc_2160_, 10, v_errorOnKinds_2148_);
lean_ctor_set(v_reuseFailAlloc_2160_, 11, v_incrSaveFileName_x3f_2151_);
lean_ctor_set(v_reuseFailAlloc_2160_, 12, v_incrLoadFileName_x3f_2152_);
lean_ctor_set(v_reuseFailAlloc_2160_, 13, v_incrHeaderSaveFileName_x3f_2153_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 8, v_component_2132_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 9, v_printPrefix_2133_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 10, v_printLibDir_2134_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 11, v_useStdin_2135_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 13, v_onlySrcDeps_2136_);
lean_ctor_set_uint32(v_reuseFailAlloc_2160_, sizeof(void*)*14, v_trustLevel_2138_);
lean_ctor_set_uint32(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 4, v_numThreads_2139_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 15, v_jsonOutput_2147_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 16, v_printStats_2149_);
lean_ctor_set_uint8(v_reuseFailAlloc_2160_, sizeof(void*)*14 + 17, v_run_2150_);
v___x_2158_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2159_; 
lean_ctor_set_uint8(v___x_2158_, sizeof(void*)*14 + 12, v___x_1390_);
lean_ctor_set_uint8(v___x_2158_, sizeof(void*)*14 + 14, v___x_1390_);
v___x_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2158_);
return v___x_2159_;
}
}
}
}
else
{
lean_object* v_leanOpts_2162_; lean_object* v_forwardedArgs_2163_; uint8_t v_component_2164_; uint8_t v_printPrefix_2165_; uint8_t v_printLibDir_2166_; uint8_t v_useStdin_2167_; uint8_t v_onlyDeps_2168_; uint8_t v_depsJson_2169_; lean_object* v_opts_2170_; uint32_t v_trustLevel_2171_; uint32_t v_numThreads_2172_; lean_object* v_rootDir_x3f_2173_; lean_object* v_setupFileName_x3f_2174_; lean_object* v_oleanFileName_x3f_2175_; lean_object* v_ileanFileName_x3f_2176_; lean_object* v_cFileName_x3f_2177_; lean_object* v_bcFileName_x3f_2178_; lean_object* v_zigFileName_x3f_2179_; uint8_t v_jsonOutput_2180_; lean_object* v_errorOnKinds_2181_; uint8_t v_printStats_2182_; uint8_t v_run_2183_; lean_object* v_incrSaveFileName_x3f_2184_; lean_object* v_incrLoadFileName_x3f_2185_; lean_object* v_incrHeaderSaveFileName_x3f_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2194_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2162_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2163_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2164_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2165_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2166_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2167_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2168_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_depsJson_2169_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2170_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2171_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2172_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2173_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2174_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2175_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2176_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2177_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2178_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2179_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2180_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2181_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2182_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2183_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2184_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2185_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2186_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2194_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2188_ = v_opts_1117_;
v_isShared_2189_ = v_isSharedCheck_2194_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2186_);
lean_inc(v_incrLoadFileName_x3f_2185_);
lean_inc(v_incrSaveFileName_x3f_2184_);
lean_inc(v_errorOnKinds_2181_);
lean_inc(v_zigFileName_x3f_2179_);
lean_inc(v_bcFileName_x3f_2178_);
lean_inc(v_cFileName_x3f_2177_);
lean_inc(v_ileanFileName_x3f_2176_);
lean_inc(v_oleanFileName_x3f_2175_);
lean_inc(v_setupFileName_x3f_2174_);
lean_inc(v_rootDir_x3f_2173_);
lean_inc(v_opts_2170_);
lean_inc(v_forwardedArgs_2163_);
lean_inc(v_leanOpts_2162_);
lean_dec(v_opts_1117_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2194_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_leanOpts_2162_);
lean_ctor_set(v_reuseFailAlloc_2193_, 1, v_forwardedArgs_2163_);
lean_ctor_set(v_reuseFailAlloc_2193_, 2, v_opts_2170_);
lean_ctor_set(v_reuseFailAlloc_2193_, 3, v_rootDir_x3f_2173_);
lean_ctor_set(v_reuseFailAlloc_2193_, 4, v_setupFileName_x3f_2174_);
lean_ctor_set(v_reuseFailAlloc_2193_, 5, v_oleanFileName_x3f_2175_);
lean_ctor_set(v_reuseFailAlloc_2193_, 6, v_ileanFileName_x3f_2176_);
lean_ctor_set(v_reuseFailAlloc_2193_, 7, v_cFileName_x3f_2177_);
lean_ctor_set(v_reuseFailAlloc_2193_, 8, v_bcFileName_x3f_2178_);
lean_ctor_set(v_reuseFailAlloc_2193_, 9, v_zigFileName_x3f_2179_);
lean_ctor_set(v_reuseFailAlloc_2193_, 10, v_errorOnKinds_2181_);
lean_ctor_set(v_reuseFailAlloc_2193_, 11, v_incrSaveFileName_x3f_2184_);
lean_ctor_set(v_reuseFailAlloc_2193_, 12, v_incrLoadFileName_x3f_2185_);
lean_ctor_set(v_reuseFailAlloc_2193_, 13, v_incrHeaderSaveFileName_x3f_2186_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 8, v_component_2164_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 9, v_printPrefix_2165_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 10, v_printLibDir_2166_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 11, v_useStdin_2167_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 12, v_onlyDeps_2168_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 14, v_depsJson_2169_);
lean_ctor_set_uint32(v_reuseFailAlloc_2193_, sizeof(void*)*14, v_trustLevel_2171_);
lean_ctor_set_uint32(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 4, v_numThreads_2172_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 15, v_jsonOutput_2180_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 16, v_printStats_2182_);
lean_ctor_set_uint8(v_reuseFailAlloc_2193_, sizeof(void*)*14 + 17, v_run_2183_);
v___x_2191_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
lean_object* v___x_2192_; 
lean_ctor_set_uint8(v___x_2191_, sizeof(void*)*14 + 13, v___x_1388_);
v___x_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
return v___x_2192_;
}
}
}
}
else
{
lean_object* v_leanOpts_2195_; lean_object* v_forwardedArgs_2196_; uint8_t v_component_2197_; uint8_t v_printPrefix_2198_; uint8_t v_printLibDir_2199_; uint8_t v_useStdin_2200_; uint8_t v_onlySrcDeps_2201_; uint8_t v_depsJson_2202_; lean_object* v_opts_2203_; uint32_t v_trustLevel_2204_; uint32_t v_numThreads_2205_; lean_object* v_rootDir_x3f_2206_; lean_object* v_setupFileName_x3f_2207_; lean_object* v_oleanFileName_x3f_2208_; lean_object* v_ileanFileName_x3f_2209_; lean_object* v_cFileName_x3f_2210_; lean_object* v_bcFileName_x3f_2211_; lean_object* v_zigFileName_x3f_2212_; uint8_t v_jsonOutput_2213_; lean_object* v_errorOnKinds_2214_; uint8_t v_printStats_2215_; uint8_t v_run_2216_; lean_object* v_incrSaveFileName_x3f_2217_; lean_object* v_incrLoadFileName_x3f_2218_; lean_object* v_incrHeaderSaveFileName_x3f_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2227_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2195_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2196_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2197_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2198_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2199_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2200_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlySrcDeps_2201_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2202_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2203_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2204_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2205_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2206_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2207_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2208_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2209_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2210_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2211_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2212_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2213_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2214_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2215_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2216_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2217_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2218_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2219_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2227_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2221_ = v_opts_1117_;
v_isShared_2222_ = v_isSharedCheck_2227_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2219_);
lean_inc(v_incrLoadFileName_x3f_2218_);
lean_inc(v_incrSaveFileName_x3f_2217_);
lean_inc(v_errorOnKinds_2214_);
lean_inc(v_zigFileName_x3f_2212_);
lean_inc(v_bcFileName_x3f_2211_);
lean_inc(v_cFileName_x3f_2210_);
lean_inc(v_ileanFileName_x3f_2209_);
lean_inc(v_oleanFileName_x3f_2208_);
lean_inc(v_setupFileName_x3f_2207_);
lean_inc(v_rootDir_x3f_2206_);
lean_inc(v_opts_2203_);
lean_inc(v_forwardedArgs_2196_);
lean_inc(v_leanOpts_2195_);
lean_dec(v_opts_1117_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2227_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_leanOpts_2195_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_forwardedArgs_2196_);
lean_ctor_set(v_reuseFailAlloc_2226_, 2, v_opts_2203_);
lean_ctor_set(v_reuseFailAlloc_2226_, 3, v_rootDir_x3f_2206_);
lean_ctor_set(v_reuseFailAlloc_2226_, 4, v_setupFileName_x3f_2207_);
lean_ctor_set(v_reuseFailAlloc_2226_, 5, v_oleanFileName_x3f_2208_);
lean_ctor_set(v_reuseFailAlloc_2226_, 6, v_ileanFileName_x3f_2209_);
lean_ctor_set(v_reuseFailAlloc_2226_, 7, v_cFileName_x3f_2210_);
lean_ctor_set(v_reuseFailAlloc_2226_, 8, v_bcFileName_x3f_2211_);
lean_ctor_set(v_reuseFailAlloc_2226_, 9, v_zigFileName_x3f_2212_);
lean_ctor_set(v_reuseFailAlloc_2226_, 10, v_errorOnKinds_2214_);
lean_ctor_set(v_reuseFailAlloc_2226_, 11, v_incrSaveFileName_x3f_2217_);
lean_ctor_set(v_reuseFailAlloc_2226_, 12, v_incrLoadFileName_x3f_2218_);
lean_ctor_set(v_reuseFailAlloc_2226_, 13, v_incrHeaderSaveFileName_x3f_2219_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 8, v_component_2197_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 9, v_printPrefix_2198_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 10, v_printLibDir_2199_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 11, v_useStdin_2200_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 13, v_onlySrcDeps_2201_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 14, v_depsJson_2202_);
lean_ctor_set_uint32(v_reuseFailAlloc_2226_, sizeof(void*)*14, v_trustLevel_2204_);
lean_ctor_set_uint32(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 4, v_numThreads_2205_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 15, v_jsonOutput_2213_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 16, v_printStats_2215_);
lean_ctor_set_uint8(v_reuseFailAlloc_2226_, sizeof(void*)*14 + 17, v_run_2216_);
v___x_2224_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2225_; 
lean_ctor_set_uint8(v___x_2224_, sizeof(void*)*14 + 12, v___x_1386_);
v___x_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
return v___x_2225_;
}
}
}
}
else
{
lean_object* v_leanOpts_2228_; lean_object* v_forwardedArgs_2229_; uint8_t v_component_2230_; uint8_t v_printPrefix_2231_; uint8_t v_printLibDir_2232_; uint8_t v_useStdin_2233_; uint8_t v_onlyDeps_2234_; uint8_t v_onlySrcDeps_2235_; uint8_t v_depsJson_2236_; lean_object* v_opts_2237_; uint32_t v_trustLevel_2238_; uint32_t v_numThreads_2239_; lean_object* v_rootDir_x3f_2240_; lean_object* v_setupFileName_x3f_2241_; lean_object* v_oleanFileName_x3f_2242_; lean_object* v_ileanFileName_x3f_2243_; lean_object* v_cFileName_x3f_2244_; lean_object* v_bcFileName_x3f_2245_; lean_object* v_zigFileName_x3f_2246_; uint8_t v_jsonOutput_2247_; lean_object* v_errorOnKinds_2248_; uint8_t v_printStats_2249_; uint8_t v_run_2250_; lean_object* v_incrSaveFileName_x3f_2251_; lean_object* v_incrLoadFileName_x3f_2252_; lean_object* v_incrHeaderSaveFileName_x3f_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2263_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2228_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2229_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2230_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2231_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2232_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2233_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2234_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2235_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2236_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2237_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2238_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2239_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2240_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2241_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2242_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2243_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2244_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2245_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2246_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2247_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2248_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2249_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2250_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2251_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2252_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2253_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2263_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2255_ = v_opts_1117_;
v_isShared_2256_ = v_isSharedCheck_2263_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2253_);
lean_inc(v_incrLoadFileName_x3f_2252_);
lean_inc(v_incrSaveFileName_x3f_2251_);
lean_inc(v_errorOnKinds_2248_);
lean_inc(v_zigFileName_x3f_2246_);
lean_inc(v_bcFileName_x3f_2245_);
lean_inc(v_cFileName_x3f_2244_);
lean_inc(v_ileanFileName_x3f_2243_);
lean_inc(v_oleanFileName_x3f_2242_);
lean_inc(v_setupFileName_x3f_2241_);
lean_inc(v_rootDir_x3f_2240_);
lean_inc(v_opts_2237_);
lean_inc(v_forwardedArgs_2229_);
lean_inc(v_leanOpts_2228_);
lean_dec(v_opts_1117_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2263_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2260_; 
v___x_2257_ = l___private_Lean_Shell_0__Lean_verbose;
v___x_2258_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2228_, v___x_2257_, v___x_1382_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 0, v___x_2258_);
v___x_2260_ = v___x_2255_;
goto v_reusejp_2259_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v___x_2258_);
lean_ctor_set(v_reuseFailAlloc_2262_, 1, v_forwardedArgs_2229_);
lean_ctor_set(v_reuseFailAlloc_2262_, 2, v_opts_2237_);
lean_ctor_set(v_reuseFailAlloc_2262_, 3, v_rootDir_x3f_2240_);
lean_ctor_set(v_reuseFailAlloc_2262_, 4, v_setupFileName_x3f_2241_);
lean_ctor_set(v_reuseFailAlloc_2262_, 5, v_oleanFileName_x3f_2242_);
lean_ctor_set(v_reuseFailAlloc_2262_, 6, v_ileanFileName_x3f_2243_);
lean_ctor_set(v_reuseFailAlloc_2262_, 7, v_cFileName_x3f_2244_);
lean_ctor_set(v_reuseFailAlloc_2262_, 8, v_bcFileName_x3f_2245_);
lean_ctor_set(v_reuseFailAlloc_2262_, 9, v_zigFileName_x3f_2246_);
lean_ctor_set(v_reuseFailAlloc_2262_, 10, v_errorOnKinds_2248_);
lean_ctor_set(v_reuseFailAlloc_2262_, 11, v_incrSaveFileName_x3f_2251_);
lean_ctor_set(v_reuseFailAlloc_2262_, 12, v_incrLoadFileName_x3f_2252_);
lean_ctor_set(v_reuseFailAlloc_2262_, 13, v_incrHeaderSaveFileName_x3f_2253_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 8, v_component_2230_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 9, v_printPrefix_2231_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 10, v_printLibDir_2232_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 11, v_useStdin_2233_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 12, v_onlyDeps_2234_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 13, v_onlySrcDeps_2235_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 14, v_depsJson_2236_);
lean_ctor_set_uint32(v_reuseFailAlloc_2262_, sizeof(void*)*14, v_trustLevel_2238_);
lean_ctor_set_uint32(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 4, v_numThreads_2239_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 15, v_jsonOutput_2247_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 16, v_printStats_2249_);
lean_ctor_set_uint8(v_reuseFailAlloc_2262_, sizeof(void*)*14 + 17, v_run_2250_);
v___x_2260_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2259_;
}
v_reusejp_2259_:
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
return v___x_2261_;
}
}
}
}
else
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__13));
v___x_2265_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2264_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2320_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2268_ = v___x_2265_;
v_isShared_2269_ = v_isSharedCheck_2320_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_a_2266_);
lean_dec(v___x_2265_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2320_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2270_ = lean_unsigned_to_nat(0u);
v___x_2271_ = lean_string_utf8_byte_size(v_a_2266_);
lean_inc(v_a_2266_);
v___x_2272_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2272_, 0, v_a_2266_);
lean_ctor_set(v___x_2272_, 1, v___x_2270_);
lean_ctor_set(v___x_2272_, 2, v___x_2271_);
v___x_2273_ = l_String_Slice_toNat_x3f(v___x_2272_);
lean_dec_ref_known(v___x_2272_, 3);
if (lean_obj_tag(v___x_2273_) == 1)
{
lean_object* v_val_2274_; lean_object* v___x_2275_; uint8_t v___x_2276_; 
v_val_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_val_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v___x_2275_ = lean_cstr_to_nat("4294967296");
v___x_2276_ = lean_nat_dec_lt(v_val_2274_, v___x_2275_);
if (v___x_2276_ == 0)
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec(v_val_2274_);
lean_del_object(v___x_2268_);
lean_dec(v_a_2266_);
lean_dec_ref(v_opts_1117_);
v___x_2277_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__14));
v___x_2278_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2277_);
lean_dec_ref(v___x_2278_);
goto v___jp_1282_;
}
else
{
lean_object* v_leanOpts_2279_; lean_object* v_forwardedArgs_2280_; uint8_t v_component_2281_; uint8_t v_printPrefix_2282_; uint8_t v_printLibDir_2283_; uint8_t v_useStdin_2284_; uint8_t v_onlyDeps_2285_; uint8_t v_onlySrcDeps_2286_; uint8_t v_depsJson_2287_; lean_object* v_opts_2288_; uint32_t v_numThreads_2289_; lean_object* v_rootDir_x3f_2290_; lean_object* v_setupFileName_x3f_2291_; lean_object* v_oleanFileName_x3f_2292_; lean_object* v_ileanFileName_x3f_2293_; lean_object* v_cFileName_x3f_2294_; lean_object* v_bcFileName_x3f_2295_; lean_object* v_zigFileName_x3f_2296_; uint8_t v_jsonOutput_2297_; lean_object* v_errorOnKinds_2298_; uint8_t v_printStats_2299_; uint8_t v_run_2300_; lean_object* v_incrSaveFileName_x3f_2301_; lean_object* v_incrLoadFileName_x3f_2302_; lean_object* v_incrHeaderSaveFileName_x3f_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2317_; 
v_leanOpts_2279_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2280_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2281_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2282_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2283_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2284_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2285_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2286_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2287_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2288_ = lean_ctor_get(v_opts_1117_, 2);
v_numThreads_2289_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2290_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2291_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2292_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2293_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2294_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2295_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2296_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2297_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2298_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2299_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2300_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2301_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2302_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2303_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2317_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2305_ = v_opts_1117_;
v_isShared_2306_ = v_isSharedCheck_2317_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2303_);
lean_inc(v_incrLoadFileName_x3f_2302_);
lean_inc(v_incrSaveFileName_x3f_2301_);
lean_inc(v_errorOnKinds_2298_);
lean_inc(v_zigFileName_x3f_2296_);
lean_inc(v_bcFileName_x3f_2295_);
lean_inc(v_cFileName_x3f_2294_);
lean_inc(v_ileanFileName_x3f_2293_);
lean_inc(v_oleanFileName_x3f_2292_);
lean_inc(v_setupFileName_x3f_2291_);
lean_inc(v_rootDir_x3f_2290_);
lean_inc(v_opts_2288_);
lean_inc(v_forwardedArgs_2280_);
lean_inc(v_leanOpts_2279_);
lean_dec(v_opts_1117_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2317_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
uint32_t v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2307_ = lean_uint32_of_nat(v_val_2274_);
lean_dec(v_val_2274_);
v___x_2308_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__15));
v___x_2309_ = lean_string_append(v___x_2308_, v_a_2266_);
lean_dec(v_a_2266_);
v___x_2310_ = lean_array_push(v_forwardedArgs_2280_, v___x_2309_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 1, v___x_2310_);
v___x_2312_ = v___x_2305_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_leanOpts_2279_);
lean_ctor_set(v_reuseFailAlloc_2316_, 1, v___x_2310_);
lean_ctor_set(v_reuseFailAlloc_2316_, 2, v_opts_2288_);
lean_ctor_set(v_reuseFailAlloc_2316_, 3, v_rootDir_x3f_2290_);
lean_ctor_set(v_reuseFailAlloc_2316_, 4, v_setupFileName_x3f_2291_);
lean_ctor_set(v_reuseFailAlloc_2316_, 5, v_oleanFileName_x3f_2292_);
lean_ctor_set(v_reuseFailAlloc_2316_, 6, v_ileanFileName_x3f_2293_);
lean_ctor_set(v_reuseFailAlloc_2316_, 7, v_cFileName_x3f_2294_);
lean_ctor_set(v_reuseFailAlloc_2316_, 8, v_bcFileName_x3f_2295_);
lean_ctor_set(v_reuseFailAlloc_2316_, 9, v_zigFileName_x3f_2296_);
lean_ctor_set(v_reuseFailAlloc_2316_, 10, v_errorOnKinds_2298_);
lean_ctor_set(v_reuseFailAlloc_2316_, 11, v_incrSaveFileName_x3f_2301_);
lean_ctor_set(v_reuseFailAlloc_2316_, 12, v_incrLoadFileName_x3f_2302_);
lean_ctor_set(v_reuseFailAlloc_2316_, 13, v_incrHeaderSaveFileName_x3f_2303_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 8, v_component_2281_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 9, v_printPrefix_2282_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 10, v_printLibDir_2283_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 11, v_useStdin_2284_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 12, v_onlyDeps_2285_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 13, v_onlySrcDeps_2286_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 14, v_depsJson_2287_);
lean_ctor_set_uint32(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 4, v_numThreads_2289_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 15, v_jsonOutput_2297_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 16, v_printStats_2299_);
lean_ctor_set_uint8(v_reuseFailAlloc_2316_, sizeof(void*)*14 + 17, v_run_2300_);
v___x_2312_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2314_; 
lean_ctor_set_uint32(v___x_2312_, sizeof(void*)*14, v___x_2307_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___x_2312_);
v___x_2314_ = v___x_2268_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
}
else
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
lean_dec(v___x_2273_);
lean_del_object(v___x_2268_);
lean_dec(v_a_2266_);
lean_dec_ref(v_opts_1117_);
v___x_2318_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__16));
v___x_2319_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2318_);
lean_dec_ref(v___x_2319_);
goto v___jp_1285_;
}
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
lean_dec_ref(v_opts_1117_);
v_a_2321_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2265_, 1);
v___x_2325_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2326_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2325_);
lean_dec_ref(v___x_2326_);
goto v___jp_2322_;
v___jp_2322_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = lean_io_error_to_string(v_a_2321_);
v___x_2324_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2323_);
lean_dec_ref(v___x_2324_);
goto v___jp_1291_;
}
}
}
}
else
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__17));
v___x_2328_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2327_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2381_; 
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2331_ = v___x_2328_;
v_isShared_2332_ = v_isSharedCheck_2381_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2328_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2381_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2333_ = lean_unsigned_to_nat(0u);
v___x_2334_ = lean_string_utf8_byte_size(v_a_2329_);
lean_inc(v_a_2329_);
v___x_2335_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2335_, 0, v_a_2329_);
lean_ctor_set(v___x_2335_, 1, v___x_2333_);
lean_ctor_set(v___x_2335_, 2, v___x_2334_);
v___x_2336_ = l_String_Slice_toNat_x3f(v___x_2335_);
lean_dec_ref_known(v___x_2335_, 3);
if (lean_obj_tag(v___x_2336_) == 1)
{
lean_object* v_val_2337_; lean_object* v_leanOpts_2338_; lean_object* v_forwardedArgs_2339_; uint8_t v_component_2340_; uint8_t v_printPrefix_2341_; uint8_t v_printLibDir_2342_; uint8_t v_useStdin_2343_; uint8_t v_onlyDeps_2344_; uint8_t v_onlySrcDeps_2345_; uint8_t v_depsJson_2346_; lean_object* v_opts_2347_; uint32_t v_trustLevel_2348_; uint32_t v_numThreads_2349_; lean_object* v_rootDir_x3f_2350_; lean_object* v_setupFileName_x3f_2351_; lean_object* v_oleanFileName_x3f_2352_; lean_object* v_ileanFileName_x3f_2353_; lean_object* v_cFileName_x3f_2354_; lean_object* v_bcFileName_x3f_2355_; lean_object* v_zigFileName_x3f_2356_; uint8_t v_jsonOutput_2357_; lean_object* v_errorOnKinds_2358_; uint8_t v_printStats_2359_; uint8_t v_run_2360_; lean_object* v_incrSaveFileName_x3f_2361_; lean_object* v_incrLoadFileName_x3f_2362_; lean_object* v_incrHeaderSaveFileName_x3f_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2378_; 
v_val_2337_ = lean_ctor_get(v___x_2336_, 0);
lean_inc(v_val_2337_);
lean_dec_ref_known(v___x_2336_, 1);
v_leanOpts_2338_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2339_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2340_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2341_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2342_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2343_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2344_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2345_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2346_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2347_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2348_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2349_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2350_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2351_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2352_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2353_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2354_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2355_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2356_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2357_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2358_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2359_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2360_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2361_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2362_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2363_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2365_ = v_opts_1117_;
v_isShared_2366_ = v_isSharedCheck_2378_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2363_);
lean_inc(v_incrLoadFileName_x3f_2362_);
lean_inc(v_incrSaveFileName_x3f_2361_);
lean_inc(v_errorOnKinds_2358_);
lean_inc(v_zigFileName_x3f_2356_);
lean_inc(v_bcFileName_x3f_2355_);
lean_inc(v_cFileName_x3f_2354_);
lean_inc(v_ileanFileName_x3f_2353_);
lean_inc(v_oleanFileName_x3f_2352_);
lean_inc(v_setupFileName_x3f_2351_);
lean_inc(v_rootDir_x3f_2350_);
lean_inc(v_opts_2347_);
lean_inc(v_forwardedArgs_2339_);
lean_inc(v_leanOpts_2338_);
lean_dec(v_opts_1117_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2378_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2367_ = l___private_Lean_Shell_0__Lean_timeout;
v___x_2368_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2338_, v___x_2367_, v_val_2337_);
v___x_2369_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__18));
v___x_2370_ = lean_string_append(v___x_2369_, v_a_2329_);
lean_dec(v_a_2329_);
v___x_2371_ = lean_array_push(v_forwardedArgs_2339_, v___x_2370_);
if (v_isShared_2366_ == 0)
{
lean_ctor_set(v___x_2365_, 1, v___x_2371_);
lean_ctor_set(v___x_2365_, 0, v___x_2368_);
v___x_2373_ = v___x_2365_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2368_);
lean_ctor_set(v_reuseFailAlloc_2377_, 1, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2377_, 2, v_opts_2347_);
lean_ctor_set(v_reuseFailAlloc_2377_, 3, v_rootDir_x3f_2350_);
lean_ctor_set(v_reuseFailAlloc_2377_, 4, v_setupFileName_x3f_2351_);
lean_ctor_set(v_reuseFailAlloc_2377_, 5, v_oleanFileName_x3f_2352_);
lean_ctor_set(v_reuseFailAlloc_2377_, 6, v_ileanFileName_x3f_2353_);
lean_ctor_set(v_reuseFailAlloc_2377_, 7, v_cFileName_x3f_2354_);
lean_ctor_set(v_reuseFailAlloc_2377_, 8, v_bcFileName_x3f_2355_);
lean_ctor_set(v_reuseFailAlloc_2377_, 9, v_zigFileName_x3f_2356_);
lean_ctor_set(v_reuseFailAlloc_2377_, 10, v_errorOnKinds_2358_);
lean_ctor_set(v_reuseFailAlloc_2377_, 11, v_incrSaveFileName_x3f_2361_);
lean_ctor_set(v_reuseFailAlloc_2377_, 12, v_incrLoadFileName_x3f_2362_);
lean_ctor_set(v_reuseFailAlloc_2377_, 13, v_incrHeaderSaveFileName_x3f_2363_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 8, v_component_2340_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 9, v_printPrefix_2341_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 10, v_printLibDir_2342_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 11, v_useStdin_2343_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 12, v_onlyDeps_2344_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 13, v_onlySrcDeps_2345_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 14, v_depsJson_2346_);
lean_ctor_set_uint32(v_reuseFailAlloc_2377_, sizeof(void*)*14, v_trustLevel_2348_);
lean_ctor_set_uint32(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 4, v_numThreads_2349_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 15, v_jsonOutput_2357_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 16, v_printStats_2359_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*14 + 17, v_run_2360_);
v___x_2373_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2375_; 
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 0, v___x_2373_);
v___x_2375_ = v___x_2331_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v___x_2379_; lean_object* v___x_2380_; 
lean_dec(v___x_2336_);
lean_del_object(v___x_2331_);
lean_dec(v_a_2329_);
lean_dec_ref(v_opts_1117_);
v___x_2379_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__19));
v___x_2380_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2379_);
lean_dec_ref(v___x_2380_);
goto v___jp_1175_;
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
lean_dec_ref(v_opts_1117_);
v_a_2382_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2386_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2387_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2386_);
lean_dec_ref(v___x_2387_);
goto v___jp_2383_;
v___jp_2383_:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2384_ = lean_io_error_to_string(v_a_2382_);
v___x_2385_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2384_);
lean_dec_ref(v___x_2385_);
goto v___jp_1172_;
}
}
}
}
else
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__20));
v___x_2389_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2388_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2442_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2392_ = v___x_2389_;
v_isShared_2393_ = v_isSharedCheck_2442_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2442_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2394_ = lean_unsigned_to_nat(0u);
v___x_2395_ = lean_string_utf8_byte_size(v_a_2390_);
lean_inc(v_a_2390_);
v___x_2396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2396_, 0, v_a_2390_);
lean_ctor_set(v___x_2396_, 1, v___x_2394_);
lean_ctor_set(v___x_2396_, 2, v___x_2395_);
v___x_2397_ = l_String_Slice_toNat_x3f(v___x_2396_);
lean_dec_ref_known(v___x_2396_, 3);
if (lean_obj_tag(v___x_2397_) == 1)
{
lean_object* v_val_2398_; lean_object* v_leanOpts_2399_; lean_object* v_forwardedArgs_2400_; uint8_t v_component_2401_; uint8_t v_printPrefix_2402_; uint8_t v_printLibDir_2403_; uint8_t v_useStdin_2404_; uint8_t v_onlyDeps_2405_; uint8_t v_onlySrcDeps_2406_; uint8_t v_depsJson_2407_; lean_object* v_opts_2408_; uint32_t v_trustLevel_2409_; uint32_t v_numThreads_2410_; lean_object* v_rootDir_x3f_2411_; lean_object* v_setupFileName_x3f_2412_; lean_object* v_oleanFileName_x3f_2413_; lean_object* v_ileanFileName_x3f_2414_; lean_object* v_cFileName_x3f_2415_; lean_object* v_bcFileName_x3f_2416_; lean_object* v_zigFileName_x3f_2417_; uint8_t v_jsonOutput_2418_; lean_object* v_errorOnKinds_2419_; uint8_t v_printStats_2420_; uint8_t v_run_2421_; lean_object* v_incrSaveFileName_x3f_2422_; lean_object* v_incrLoadFileName_x3f_2423_; lean_object* v_incrHeaderSaveFileName_x3f_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2439_; 
v_val_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc(v_val_2398_);
lean_dec_ref_known(v___x_2397_, 1);
v_leanOpts_2399_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2400_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2401_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2402_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2403_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2404_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2405_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2406_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2407_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2408_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2409_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2410_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2411_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2412_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2413_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2414_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2415_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2416_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2417_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2418_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2419_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2420_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2421_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2422_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2423_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2424_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2439_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2426_ = v_opts_1117_;
v_isShared_2427_ = v_isSharedCheck_2439_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2424_);
lean_inc(v_incrLoadFileName_x3f_2423_);
lean_inc(v_incrSaveFileName_x3f_2422_);
lean_inc(v_errorOnKinds_2419_);
lean_inc(v_zigFileName_x3f_2417_);
lean_inc(v_bcFileName_x3f_2416_);
lean_inc(v_cFileName_x3f_2415_);
lean_inc(v_ileanFileName_x3f_2414_);
lean_inc(v_oleanFileName_x3f_2413_);
lean_inc(v_setupFileName_x3f_2412_);
lean_inc(v_rootDir_x3f_2411_);
lean_inc(v_opts_2408_);
lean_inc(v_forwardedArgs_2400_);
lean_inc(v_leanOpts_2399_);
lean_dec(v_opts_1117_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2439_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2428_ = l___private_Lean_Shell_0__Lean_maxMemory;
v___x_2429_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__2(v_leanOpts_2399_, v___x_2428_, v_val_2398_);
v___x_2430_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__21));
v___x_2431_ = lean_string_append(v___x_2430_, v_a_2390_);
lean_dec(v_a_2390_);
v___x_2432_ = lean_array_push(v_forwardedArgs_2400_, v___x_2431_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 1, v___x_2432_);
lean_ctor_set(v___x_2426_, 0, v___x_2429_);
v___x_2434_ = v___x_2426_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2429_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v___x_2432_);
lean_ctor_set(v_reuseFailAlloc_2438_, 2, v_opts_2408_);
lean_ctor_set(v_reuseFailAlloc_2438_, 3, v_rootDir_x3f_2411_);
lean_ctor_set(v_reuseFailAlloc_2438_, 4, v_setupFileName_x3f_2412_);
lean_ctor_set(v_reuseFailAlloc_2438_, 5, v_oleanFileName_x3f_2413_);
lean_ctor_set(v_reuseFailAlloc_2438_, 6, v_ileanFileName_x3f_2414_);
lean_ctor_set(v_reuseFailAlloc_2438_, 7, v_cFileName_x3f_2415_);
lean_ctor_set(v_reuseFailAlloc_2438_, 8, v_bcFileName_x3f_2416_);
lean_ctor_set(v_reuseFailAlloc_2438_, 9, v_zigFileName_x3f_2417_);
lean_ctor_set(v_reuseFailAlloc_2438_, 10, v_errorOnKinds_2419_);
lean_ctor_set(v_reuseFailAlloc_2438_, 11, v_incrSaveFileName_x3f_2422_);
lean_ctor_set(v_reuseFailAlloc_2438_, 12, v_incrLoadFileName_x3f_2423_);
lean_ctor_set(v_reuseFailAlloc_2438_, 13, v_incrHeaderSaveFileName_x3f_2424_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 8, v_component_2401_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 9, v_printPrefix_2402_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 10, v_printLibDir_2403_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 11, v_useStdin_2404_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 12, v_onlyDeps_2405_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 13, v_onlySrcDeps_2406_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 14, v_depsJson_2407_);
lean_ctor_set_uint32(v_reuseFailAlloc_2438_, sizeof(void*)*14, v_trustLevel_2409_);
lean_ctor_set_uint32(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 4, v_numThreads_2410_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 15, v_jsonOutput_2418_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 16, v_printStats_2420_);
lean_ctor_set_uint8(v_reuseFailAlloc_2438_, sizeof(void*)*14 + 17, v_run_2421_);
v___x_2434_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
lean_object* v___x_2436_; 
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 0, v___x_2434_);
v___x_2436_ = v___x_2392_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v___x_2434_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
return v___x_2436_;
}
}
}
}
else
{
lean_object* v___x_2440_; lean_object* v___x_2441_; 
lean_dec(v___x_2397_);
lean_del_object(v___x_2392_);
lean_dec(v_a_2390_);
lean_dec_ref(v_opts_1117_);
v___x_2440_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__22));
v___x_2441_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2440_);
lean_dec_ref(v___x_2441_);
goto v___jp_1294_;
}
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
lean_dec_ref(v_opts_1117_);
v_a_2443_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2443_);
lean_dec_ref_known(v___x_2389_, 1);
v___x_2447_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2448_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2447_);
lean_dec_ref(v___x_2448_);
goto v___jp_2444_;
v___jp_2444_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
v___x_2445_ = lean_io_error_to_string(v_a_2443_);
v___x_2446_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2445_);
lean_dec_ref(v___x_2446_);
goto v___jp_1300_;
}
}
}
}
else
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__23));
v___x_2450_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2449_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2495_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2453_ = v___x_2450_;
v_isShared_2454_ = v_isSharedCheck_2495_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2450_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2495_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v_leanOpts_2455_; lean_object* v_forwardedArgs_2456_; uint8_t v_component_2457_; uint8_t v_printPrefix_2458_; uint8_t v_printLibDir_2459_; uint8_t v_useStdin_2460_; uint8_t v_onlyDeps_2461_; uint8_t v_onlySrcDeps_2462_; uint8_t v_depsJson_2463_; lean_object* v_opts_2464_; uint32_t v_trustLevel_2465_; uint32_t v_numThreads_2466_; lean_object* v_setupFileName_x3f_2467_; lean_object* v_oleanFileName_x3f_2468_; lean_object* v_ileanFileName_x3f_2469_; lean_object* v_cFileName_x3f_2470_; lean_object* v_bcFileName_x3f_2471_; lean_object* v_zigFileName_x3f_2472_; uint8_t v_jsonOutput_2473_; lean_object* v_errorOnKinds_2474_; uint8_t v_printStats_2475_; uint8_t v_run_2476_; lean_object* v_incrSaveFileName_x3f_2477_; lean_object* v_incrLoadFileName_x3f_2478_; lean_object* v_incrHeaderSaveFileName_x3f_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2493_; 
v_leanOpts_2455_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2456_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2457_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2458_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2459_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2460_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2461_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2462_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2463_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2464_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2465_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2466_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_setupFileName_x3f_2467_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2468_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2469_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2470_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2471_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2472_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2473_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2474_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2475_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2476_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2477_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2478_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2479_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2493_ == 0)
{
lean_object* v_unused_2494_; 
v_unused_2494_ = lean_ctor_get(v_opts_1117_, 3);
lean_dec(v_unused_2494_);
v___x_2481_ = v_opts_1117_;
v_isShared_2482_ = v_isSharedCheck_2493_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2479_);
lean_inc(v_incrLoadFileName_x3f_2478_);
lean_inc(v_incrSaveFileName_x3f_2477_);
lean_inc(v_errorOnKinds_2474_);
lean_inc(v_zigFileName_x3f_2472_);
lean_inc(v_bcFileName_x3f_2471_);
lean_inc(v_cFileName_x3f_2470_);
lean_inc(v_ileanFileName_x3f_2469_);
lean_inc(v_oleanFileName_x3f_2468_);
lean_inc(v_setupFileName_x3f_2467_);
lean_inc(v_opts_2464_);
lean_inc(v_forwardedArgs_2456_);
lean_inc(v_leanOpts_2455_);
lean_dec(v_opts_1117_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2493_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2488_; 
v___x_2483_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__24));
v___x_2484_ = lean_string_append(v___x_2483_, v_a_2451_);
v___x_2485_ = lean_array_push(v_forwardedArgs_2456_, v___x_2484_);
v___x_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2486_, 0, v_a_2451_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 3, v___x_2486_);
lean_ctor_set(v___x_2481_, 1, v___x_2485_);
v___x_2488_ = v___x_2481_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_leanOpts_2455_);
lean_ctor_set(v_reuseFailAlloc_2492_, 1, v___x_2485_);
lean_ctor_set(v_reuseFailAlloc_2492_, 2, v_opts_2464_);
lean_ctor_set(v_reuseFailAlloc_2492_, 3, v___x_2486_);
lean_ctor_set(v_reuseFailAlloc_2492_, 4, v_setupFileName_x3f_2467_);
lean_ctor_set(v_reuseFailAlloc_2492_, 5, v_oleanFileName_x3f_2468_);
lean_ctor_set(v_reuseFailAlloc_2492_, 6, v_ileanFileName_x3f_2469_);
lean_ctor_set(v_reuseFailAlloc_2492_, 7, v_cFileName_x3f_2470_);
lean_ctor_set(v_reuseFailAlloc_2492_, 8, v_bcFileName_x3f_2471_);
lean_ctor_set(v_reuseFailAlloc_2492_, 9, v_zigFileName_x3f_2472_);
lean_ctor_set(v_reuseFailAlloc_2492_, 10, v_errorOnKinds_2474_);
lean_ctor_set(v_reuseFailAlloc_2492_, 11, v_incrSaveFileName_x3f_2477_);
lean_ctor_set(v_reuseFailAlloc_2492_, 12, v_incrLoadFileName_x3f_2478_);
lean_ctor_set(v_reuseFailAlloc_2492_, 13, v_incrHeaderSaveFileName_x3f_2479_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 8, v_component_2457_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 9, v_printPrefix_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 10, v_printLibDir_2459_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 11, v_useStdin_2460_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 12, v_onlyDeps_2461_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 13, v_onlySrcDeps_2462_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 14, v_depsJson_2463_);
lean_ctor_set_uint32(v_reuseFailAlloc_2492_, sizeof(void*)*14, v_trustLevel_2465_);
lean_ctor_set_uint32(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 4, v_numThreads_2466_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 15, v_jsonOutput_2473_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 16, v_printStats_2475_);
lean_ctor_set_uint8(v_reuseFailAlloc_2492_, sizeof(void*)*14 + 17, v_run_2476_);
v___x_2488_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
lean_object* v___x_2490_; 
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2488_);
v___x_2490_ = v___x_2453_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2488_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
lean_dec_ref(v_opts_1117_);
v_a_2496_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2450_, 1);
v___x_2500_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2501_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2500_);
lean_dec_ref(v___x_2501_);
goto v___jp_2497_;
v___jp_2497_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_io_error_to_string(v_a_2496_);
v___x_2499_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2498_);
lean_dec_ref(v___x_2499_);
goto v___jp_1166_;
}
}
}
}
else
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__25));
v___x_2503_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2502_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2503_) == 0)
{
lean_object* v_a_2504_; lean_object* v___x_2506_; uint8_t v_isShared_2507_; uint8_t v_isSharedCheck_2545_; 
v_a_2504_ = lean_ctor_get(v___x_2503_, 0);
v_isSharedCheck_2545_ = !lean_is_exclusive(v___x_2503_);
if (v_isSharedCheck_2545_ == 0)
{
v___x_2506_ = v___x_2503_;
v_isShared_2507_ = v_isSharedCheck_2545_;
goto v_resetjp_2505_;
}
else
{
lean_inc(v_a_2504_);
lean_dec(v___x_2503_);
v___x_2506_ = lean_box(0);
v_isShared_2507_ = v_isSharedCheck_2545_;
goto v_resetjp_2505_;
}
v_resetjp_2505_:
{
lean_object* v_leanOpts_2508_; lean_object* v_forwardedArgs_2509_; uint8_t v_component_2510_; uint8_t v_printPrefix_2511_; uint8_t v_printLibDir_2512_; uint8_t v_useStdin_2513_; uint8_t v_onlyDeps_2514_; uint8_t v_onlySrcDeps_2515_; uint8_t v_depsJson_2516_; lean_object* v_opts_2517_; uint32_t v_trustLevel_2518_; uint32_t v_numThreads_2519_; lean_object* v_rootDir_x3f_2520_; lean_object* v_setupFileName_x3f_2521_; lean_object* v_oleanFileName_x3f_2522_; lean_object* v_cFileName_x3f_2523_; lean_object* v_bcFileName_x3f_2524_; lean_object* v_zigFileName_x3f_2525_; uint8_t v_jsonOutput_2526_; lean_object* v_errorOnKinds_2527_; uint8_t v_printStats_2528_; uint8_t v_run_2529_; lean_object* v_incrSaveFileName_x3f_2530_; lean_object* v_incrLoadFileName_x3f_2531_; lean_object* v_incrHeaderSaveFileName_x3f_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2543_; 
v_leanOpts_2508_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2509_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2510_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2511_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2512_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2513_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2514_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2515_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2516_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2517_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2518_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2519_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2520_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2521_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2522_ = lean_ctor_get(v_opts_1117_, 5);
v_cFileName_x3f_2523_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2524_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2525_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2526_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2527_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2528_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2529_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2530_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2531_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2532_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2543_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2543_ == 0)
{
lean_object* v_unused_2544_; 
v_unused_2544_ = lean_ctor_get(v_opts_1117_, 6);
lean_dec(v_unused_2544_);
v___x_2534_ = v_opts_1117_;
v_isShared_2535_ = v_isSharedCheck_2543_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2532_);
lean_inc(v_incrLoadFileName_x3f_2531_);
lean_inc(v_incrSaveFileName_x3f_2530_);
lean_inc(v_errorOnKinds_2527_);
lean_inc(v_zigFileName_x3f_2525_);
lean_inc(v_bcFileName_x3f_2524_);
lean_inc(v_cFileName_x3f_2523_);
lean_inc(v_oleanFileName_x3f_2522_);
lean_inc(v_setupFileName_x3f_2521_);
lean_inc(v_rootDir_x3f_2520_);
lean_inc(v_opts_2517_);
lean_inc(v_forwardedArgs_2509_);
lean_inc(v_leanOpts_2508_);
lean_dec(v_opts_1117_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2543_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2536_; lean_object* v___x_2538_; 
v___x_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2536_, 0, v_a_2504_);
if (v_isShared_2535_ == 0)
{
lean_ctor_set(v___x_2534_, 6, v___x_2536_);
v___x_2538_ = v___x_2534_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_leanOpts_2508_);
lean_ctor_set(v_reuseFailAlloc_2542_, 1, v_forwardedArgs_2509_);
lean_ctor_set(v_reuseFailAlloc_2542_, 2, v_opts_2517_);
lean_ctor_set(v_reuseFailAlloc_2542_, 3, v_rootDir_x3f_2520_);
lean_ctor_set(v_reuseFailAlloc_2542_, 4, v_setupFileName_x3f_2521_);
lean_ctor_set(v_reuseFailAlloc_2542_, 5, v_oleanFileName_x3f_2522_);
lean_ctor_set(v_reuseFailAlloc_2542_, 6, v___x_2536_);
lean_ctor_set(v_reuseFailAlloc_2542_, 7, v_cFileName_x3f_2523_);
lean_ctor_set(v_reuseFailAlloc_2542_, 8, v_bcFileName_x3f_2524_);
lean_ctor_set(v_reuseFailAlloc_2542_, 9, v_zigFileName_x3f_2525_);
lean_ctor_set(v_reuseFailAlloc_2542_, 10, v_errorOnKinds_2527_);
lean_ctor_set(v_reuseFailAlloc_2542_, 11, v_incrSaveFileName_x3f_2530_);
lean_ctor_set(v_reuseFailAlloc_2542_, 12, v_incrLoadFileName_x3f_2531_);
lean_ctor_set(v_reuseFailAlloc_2542_, 13, v_incrHeaderSaveFileName_x3f_2532_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 8, v_component_2510_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 9, v_printPrefix_2511_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 10, v_printLibDir_2512_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 11, v_useStdin_2513_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 12, v_onlyDeps_2514_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 13, v_onlySrcDeps_2515_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 14, v_depsJson_2516_);
lean_ctor_set_uint32(v_reuseFailAlloc_2542_, sizeof(void*)*14, v_trustLevel_2518_);
lean_ctor_set_uint32(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 4, v_numThreads_2519_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 15, v_jsonOutput_2526_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 16, v_printStats_2528_);
lean_ctor_set_uint8(v_reuseFailAlloc_2542_, sizeof(void*)*14 + 17, v_run_2529_);
v___x_2538_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
lean_object* v___x_2540_; 
if (v_isShared_2507_ == 0)
{
lean_ctor_set(v___x_2506_, 0, v___x_2538_);
v___x_2540_ = v___x_2506_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2538_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
}
else
{
lean_object* v_a_2546_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_dec_ref(v_opts_1117_);
v_a_2546_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_a_2546_);
lean_dec_ref_known(v___x_2503_, 1);
v___x_2550_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2551_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2550_);
lean_dec_ref(v___x_2551_);
goto v___jp_2547_;
v___jp_2547_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = lean_io_error_to_string(v_a_2546_);
v___x_2549_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2548_);
lean_dec_ref(v___x_2549_);
goto v___jp_1306_;
}
}
}
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2552_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__26));
v___x_2553_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2552_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2595_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2556_ = v___x_2553_;
v_isShared_2557_ = v_isSharedCheck_2595_;
goto v_resetjp_2555_;
}
else
{
lean_inc(v_a_2554_);
lean_dec(v___x_2553_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2595_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v_leanOpts_2558_; lean_object* v_forwardedArgs_2559_; uint8_t v_component_2560_; uint8_t v_printPrefix_2561_; uint8_t v_printLibDir_2562_; uint8_t v_useStdin_2563_; uint8_t v_onlyDeps_2564_; uint8_t v_onlySrcDeps_2565_; uint8_t v_depsJson_2566_; lean_object* v_opts_2567_; uint32_t v_trustLevel_2568_; uint32_t v_numThreads_2569_; lean_object* v_rootDir_x3f_2570_; lean_object* v_setupFileName_x3f_2571_; lean_object* v_ileanFileName_x3f_2572_; lean_object* v_cFileName_x3f_2573_; lean_object* v_bcFileName_x3f_2574_; lean_object* v_zigFileName_x3f_2575_; uint8_t v_jsonOutput_2576_; lean_object* v_errorOnKinds_2577_; uint8_t v_printStats_2578_; uint8_t v_run_2579_; lean_object* v_incrSaveFileName_x3f_2580_; lean_object* v_incrLoadFileName_x3f_2581_; lean_object* v_incrHeaderSaveFileName_x3f_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2593_; 
v_leanOpts_2558_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2559_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2560_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2561_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2562_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2563_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2564_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2565_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2566_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2567_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2568_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2569_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2570_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2571_ = lean_ctor_get(v_opts_1117_, 4);
v_ileanFileName_x3f_2572_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2573_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2574_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2575_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2576_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2577_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2578_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2579_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2580_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2581_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2582_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2593_ == 0)
{
lean_object* v_unused_2594_; 
v_unused_2594_ = lean_ctor_get(v_opts_1117_, 5);
lean_dec(v_unused_2594_);
v___x_2584_ = v_opts_1117_;
v_isShared_2585_ = v_isSharedCheck_2593_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2582_);
lean_inc(v_incrLoadFileName_x3f_2581_);
lean_inc(v_incrSaveFileName_x3f_2580_);
lean_inc(v_errorOnKinds_2577_);
lean_inc(v_zigFileName_x3f_2575_);
lean_inc(v_bcFileName_x3f_2574_);
lean_inc(v_cFileName_x3f_2573_);
lean_inc(v_ileanFileName_x3f_2572_);
lean_inc(v_setupFileName_x3f_2571_);
lean_inc(v_rootDir_x3f_2570_);
lean_inc(v_opts_2567_);
lean_inc(v_forwardedArgs_2559_);
lean_inc(v_leanOpts_2558_);
lean_dec(v_opts_1117_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2593_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2586_; lean_object* v___x_2588_; 
v___x_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_a_2554_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 5, v___x_2586_);
v___x_2588_ = v___x_2584_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_leanOpts_2558_);
lean_ctor_set(v_reuseFailAlloc_2592_, 1, v_forwardedArgs_2559_);
lean_ctor_set(v_reuseFailAlloc_2592_, 2, v_opts_2567_);
lean_ctor_set(v_reuseFailAlloc_2592_, 3, v_rootDir_x3f_2570_);
lean_ctor_set(v_reuseFailAlloc_2592_, 4, v_setupFileName_x3f_2571_);
lean_ctor_set(v_reuseFailAlloc_2592_, 5, v___x_2586_);
lean_ctor_set(v_reuseFailAlloc_2592_, 6, v_ileanFileName_x3f_2572_);
lean_ctor_set(v_reuseFailAlloc_2592_, 7, v_cFileName_x3f_2573_);
lean_ctor_set(v_reuseFailAlloc_2592_, 8, v_bcFileName_x3f_2574_);
lean_ctor_set(v_reuseFailAlloc_2592_, 9, v_zigFileName_x3f_2575_);
lean_ctor_set(v_reuseFailAlloc_2592_, 10, v_errorOnKinds_2577_);
lean_ctor_set(v_reuseFailAlloc_2592_, 11, v_incrSaveFileName_x3f_2580_);
lean_ctor_set(v_reuseFailAlloc_2592_, 12, v_incrLoadFileName_x3f_2581_);
lean_ctor_set(v_reuseFailAlloc_2592_, 13, v_incrHeaderSaveFileName_x3f_2582_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 8, v_component_2560_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 9, v_printPrefix_2561_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 10, v_printLibDir_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 11, v_useStdin_2563_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 12, v_onlyDeps_2564_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 13, v_onlySrcDeps_2565_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 14, v_depsJson_2566_);
lean_ctor_set_uint32(v_reuseFailAlloc_2592_, sizeof(void*)*14, v_trustLevel_2568_);
lean_ctor_set_uint32(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 4, v_numThreads_2569_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 15, v_jsonOutput_2576_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 16, v_printStats_2578_);
lean_ctor_set_uint8(v_reuseFailAlloc_2592_, sizeof(void*)*14 + 17, v_run_2579_);
v___x_2588_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
lean_object* v___x_2590_; 
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 0, v___x_2588_);
v___x_2590_ = v___x_2556_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v___x_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec_ref(v_opts_1117_);
v_a_2596_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2553_, 1);
v___x_2600_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2601_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2600_);
lean_dec_ref(v___x_2601_);
goto v___jp_2597_;
v___jp_2597_:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2598_ = lean_io_error_to_string(v_a_2596_);
v___x_2599_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2598_);
lean_dec_ref(v___x_2599_);
goto v___jp_1160_;
}
}
}
}
else
{
lean_object* v_leanOpts_2602_; lean_object* v_forwardedArgs_2603_; uint8_t v_component_2604_; uint8_t v_printPrefix_2605_; uint8_t v_printLibDir_2606_; uint8_t v_useStdin_2607_; uint8_t v_onlyDeps_2608_; uint8_t v_onlySrcDeps_2609_; uint8_t v_depsJson_2610_; lean_object* v_opts_2611_; uint32_t v_trustLevel_2612_; uint32_t v_numThreads_2613_; lean_object* v_rootDir_x3f_2614_; lean_object* v_setupFileName_x3f_2615_; lean_object* v_oleanFileName_x3f_2616_; lean_object* v_ileanFileName_x3f_2617_; lean_object* v_cFileName_x3f_2618_; lean_object* v_bcFileName_x3f_2619_; lean_object* v_zigFileName_x3f_2620_; uint8_t v_jsonOutput_2621_; lean_object* v_errorOnKinds_2622_; uint8_t v_printStats_2623_; lean_object* v_incrSaveFileName_x3f_2624_; lean_object* v_incrLoadFileName_x3f_2625_; lean_object* v_incrHeaderSaveFileName_x3f_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2636_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2602_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2603_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2604_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2605_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2606_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2607_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2608_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2609_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2610_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2611_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2612_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2613_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2614_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2615_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2616_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2617_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2618_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2619_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2620_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2621_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2622_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2623_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_incrSaveFileName_x3f_2624_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2625_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2626_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2636_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2636_ == 0)
{
v___x_2628_ = v_opts_1117_;
v_isShared_2629_ = v_isSharedCheck_2636_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2626_);
lean_inc(v_incrLoadFileName_x3f_2625_);
lean_inc(v_incrSaveFileName_x3f_2624_);
lean_inc(v_errorOnKinds_2622_);
lean_inc(v_zigFileName_x3f_2620_);
lean_inc(v_bcFileName_x3f_2619_);
lean_inc(v_cFileName_x3f_2618_);
lean_inc(v_ileanFileName_x3f_2617_);
lean_inc(v_oleanFileName_x3f_2616_);
lean_inc(v_setupFileName_x3f_2615_);
lean_inc(v_rootDir_x3f_2614_);
lean_inc(v_opts_2611_);
lean_inc(v_forwardedArgs_2603_);
lean_inc(v_leanOpts_2602_);
lean_dec(v_opts_1117_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2636_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2633_; 
v___x_2630_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_2631_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_2602_, v___x_2630_, v___x_1368_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 0, v___x_2631_);
v___x_2633_ = v___x_2628_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2635_; 
v_reuseFailAlloc_2635_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2635_, 0, v___x_2631_);
lean_ctor_set(v_reuseFailAlloc_2635_, 1, v_forwardedArgs_2603_);
lean_ctor_set(v_reuseFailAlloc_2635_, 2, v_opts_2611_);
lean_ctor_set(v_reuseFailAlloc_2635_, 3, v_rootDir_x3f_2614_);
lean_ctor_set(v_reuseFailAlloc_2635_, 4, v_setupFileName_x3f_2615_);
lean_ctor_set(v_reuseFailAlloc_2635_, 5, v_oleanFileName_x3f_2616_);
lean_ctor_set(v_reuseFailAlloc_2635_, 6, v_ileanFileName_x3f_2617_);
lean_ctor_set(v_reuseFailAlloc_2635_, 7, v_cFileName_x3f_2618_);
lean_ctor_set(v_reuseFailAlloc_2635_, 8, v_bcFileName_x3f_2619_);
lean_ctor_set(v_reuseFailAlloc_2635_, 9, v_zigFileName_x3f_2620_);
lean_ctor_set(v_reuseFailAlloc_2635_, 10, v_errorOnKinds_2622_);
lean_ctor_set(v_reuseFailAlloc_2635_, 11, v_incrSaveFileName_x3f_2624_);
lean_ctor_set(v_reuseFailAlloc_2635_, 12, v_incrLoadFileName_x3f_2625_);
lean_ctor_set(v_reuseFailAlloc_2635_, 13, v_incrHeaderSaveFileName_x3f_2626_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 8, v_component_2604_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 9, v_printPrefix_2605_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 10, v_printLibDir_2606_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 11, v_useStdin_2607_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 12, v_onlyDeps_2608_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 13, v_onlySrcDeps_2609_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 14, v_depsJson_2610_);
lean_ctor_set_uint32(v_reuseFailAlloc_2635_, sizeof(void*)*14, v_trustLevel_2612_);
lean_ctor_set_uint32(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 4, v_numThreads_2613_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 15, v_jsonOutput_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2635_, sizeof(void*)*14 + 16, v_printStats_2623_);
v___x_2633_ = v_reuseFailAlloc_2635_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
lean_object* v___x_2634_; 
lean_ctor_set_uint8(v___x_2633_, sizeof(void*)*14 + 17, v___x_1370_);
v___x_2634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2633_);
return v___x_2634_;
}
}
}
}
else
{
lean_object* v_leanOpts_2637_; lean_object* v_forwardedArgs_2638_; uint8_t v_component_2639_; uint8_t v_printPrefix_2640_; uint8_t v_printLibDir_2641_; uint8_t v_onlyDeps_2642_; uint8_t v_onlySrcDeps_2643_; uint8_t v_depsJson_2644_; lean_object* v_opts_2645_; uint32_t v_trustLevel_2646_; uint32_t v_numThreads_2647_; lean_object* v_rootDir_x3f_2648_; lean_object* v_setupFileName_x3f_2649_; lean_object* v_oleanFileName_x3f_2650_; lean_object* v_ileanFileName_x3f_2651_; lean_object* v_cFileName_x3f_2652_; lean_object* v_bcFileName_x3f_2653_; lean_object* v_zigFileName_x3f_2654_; uint8_t v_jsonOutput_2655_; lean_object* v_errorOnKinds_2656_; uint8_t v_printStats_2657_; uint8_t v_run_2658_; lean_object* v_incrSaveFileName_x3f_2659_; lean_object* v_incrLoadFileName_x3f_2660_; lean_object* v_incrHeaderSaveFileName_x3f_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2669_; 
lean_dec(v_optArg_x3f_1119_);
v_leanOpts_2637_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2638_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2639_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2640_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2641_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_onlyDeps_2642_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2643_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2644_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2645_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2646_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2647_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2648_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2649_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2650_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2651_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2652_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2653_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2654_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2655_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2656_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2657_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2658_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2659_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2660_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2661_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2663_ = v_opts_1117_;
v_isShared_2664_ = v_isSharedCheck_2669_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2661_);
lean_inc(v_incrLoadFileName_x3f_2660_);
lean_inc(v_incrSaveFileName_x3f_2659_);
lean_inc(v_errorOnKinds_2656_);
lean_inc(v_zigFileName_x3f_2654_);
lean_inc(v_bcFileName_x3f_2653_);
lean_inc(v_cFileName_x3f_2652_);
lean_inc(v_ileanFileName_x3f_2651_);
lean_inc(v_oleanFileName_x3f_2650_);
lean_inc(v_setupFileName_x3f_2649_);
lean_inc(v_rootDir_x3f_2648_);
lean_inc(v_opts_2645_);
lean_inc(v_forwardedArgs_2638_);
lean_inc(v_leanOpts_2637_);
lean_dec(v_opts_1117_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2669_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_leanOpts_2637_);
lean_ctor_set(v_reuseFailAlloc_2668_, 1, v_forwardedArgs_2638_);
lean_ctor_set(v_reuseFailAlloc_2668_, 2, v_opts_2645_);
lean_ctor_set(v_reuseFailAlloc_2668_, 3, v_rootDir_x3f_2648_);
lean_ctor_set(v_reuseFailAlloc_2668_, 4, v_setupFileName_x3f_2649_);
lean_ctor_set(v_reuseFailAlloc_2668_, 5, v_oleanFileName_x3f_2650_);
lean_ctor_set(v_reuseFailAlloc_2668_, 6, v_ileanFileName_x3f_2651_);
lean_ctor_set(v_reuseFailAlloc_2668_, 7, v_cFileName_x3f_2652_);
lean_ctor_set(v_reuseFailAlloc_2668_, 8, v_bcFileName_x3f_2653_);
lean_ctor_set(v_reuseFailAlloc_2668_, 9, v_zigFileName_x3f_2654_);
lean_ctor_set(v_reuseFailAlloc_2668_, 10, v_errorOnKinds_2656_);
lean_ctor_set(v_reuseFailAlloc_2668_, 11, v_incrSaveFileName_x3f_2659_);
lean_ctor_set(v_reuseFailAlloc_2668_, 12, v_incrLoadFileName_x3f_2660_);
lean_ctor_set(v_reuseFailAlloc_2668_, 13, v_incrHeaderSaveFileName_x3f_2661_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 8, v_component_2639_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 9, v_printPrefix_2640_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 10, v_printLibDir_2641_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 12, v_onlyDeps_2642_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 13, v_onlySrcDeps_2643_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 14, v_depsJson_2644_);
lean_ctor_set_uint32(v_reuseFailAlloc_2668_, sizeof(void*)*14, v_trustLevel_2646_);
lean_ctor_set_uint32(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 4, v_numThreads_2647_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 15, v_jsonOutput_2655_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 16, v_printStats_2657_);
lean_ctor_set_uint8(v_reuseFailAlloc_2668_, sizeof(void*)*14 + 17, v_run_2658_);
v___x_2666_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
lean_object* v___x_2667_; 
lean_ctor_set_uint8(v___x_2666_, sizeof(void*)*14 + 11, v___x_1368_);
v___x_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2666_);
return v___x_2667_;
}
}
}
}
else
{
lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2670_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__27));
v___x_2671_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2670_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2734_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2674_ = v___x_2671_;
v_isShared_2675_ = v_isSharedCheck_2734_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2671_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2734_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2676_ = lean_unsigned_to_nat(0u);
v___x_2677_ = lean_string_utf8_byte_size(v_a_2672_);
lean_inc(v_a_2672_);
v___x_2678_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2678_, 0, v_a_2672_);
lean_ctor_set(v___x_2678_, 1, v___x_2676_);
lean_ctor_set(v___x_2678_, 2, v___x_2677_);
v___x_2679_ = l_String_Slice_toNat_x3f(v___x_2678_);
lean_dec_ref_known(v___x_2678_, 3);
if (lean_obj_tag(v___x_2679_) == 1)
{
lean_object* v_val_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; uint8_t v___x_2688_; 
v_val_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_val_2680_);
lean_dec_ref_known(v___x_2679_, 1);
v___x_2681_ = lean_unsigned_to_nat(4u);
v___x_2682_ = lean_unsigned_to_nat(2u);
v___x_2683_ = lean_nat_shiftr(v_val_2680_, v___x_2682_);
lean_dec(v_val_2680_);
v___x_2684_ = lean_nat_mul(v___x_2683_, v___x_2681_);
lean_dec(v___x_2683_);
v___x_2685_ = lean_unsigned_to_nat(1024u);
v___x_2686_ = lean_nat_mul(v___x_2684_, v___x_2685_);
lean_dec(v___x_2684_);
v___x_2687_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28, &l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28_once, _init_l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__28);
v___x_2688_ = lean_nat_dec_lt(v___x_2686_, v___x_2687_);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; lean_object* v___x_2690_; 
lean_dec(v___x_2686_);
lean_del_object(v___x_2674_);
lean_dec(v_a_2672_);
lean_dec_ref(v_opts_1117_);
v___x_2689_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__29));
v___x_2690_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2689_);
lean_dec_ref(v___x_2690_);
goto v___jp_1309_;
}
else
{
size_t v___x_2691_; lean_object* v___x_2692_; lean_object* v_leanOpts_2693_; lean_object* v_forwardedArgs_2694_; uint8_t v_component_2695_; uint8_t v_printPrefix_2696_; uint8_t v_printLibDir_2697_; uint8_t v_useStdin_2698_; uint8_t v_onlyDeps_2699_; uint8_t v_onlySrcDeps_2700_; uint8_t v_depsJson_2701_; lean_object* v_opts_2702_; uint32_t v_trustLevel_2703_; uint32_t v_numThreads_2704_; lean_object* v_rootDir_x3f_2705_; lean_object* v_setupFileName_x3f_2706_; lean_object* v_oleanFileName_x3f_2707_; lean_object* v_ileanFileName_x3f_2708_; lean_object* v_cFileName_x3f_2709_; lean_object* v_bcFileName_x3f_2710_; lean_object* v_zigFileName_x3f_2711_; uint8_t v_jsonOutput_2712_; lean_object* v_errorOnKinds_2713_; uint8_t v_printStats_2714_; uint8_t v_run_2715_; lean_object* v_incrSaveFileName_x3f_2716_; lean_object* v_incrLoadFileName_x3f_2717_; lean_object* v_incrHeaderSaveFileName_x3f_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2731_; 
v___x_2691_ = lean_usize_of_nat(v___x_2686_);
lean_dec(v___x_2686_);
v___x_2692_ = lean_internal_set_thread_stack_size(v___x_2691_);
v_leanOpts_2693_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2694_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2695_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2696_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2697_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2698_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2699_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2700_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2701_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2702_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2703_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2704_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2705_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2706_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2707_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2708_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2709_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2710_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2711_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2712_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2713_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2714_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2715_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2716_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2717_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2718_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2731_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2720_ = v_opts_1117_;
v_isShared_2721_ = v_isSharedCheck_2731_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2718_);
lean_inc(v_incrLoadFileName_x3f_2717_);
lean_inc(v_incrSaveFileName_x3f_2716_);
lean_inc(v_errorOnKinds_2713_);
lean_inc(v_zigFileName_x3f_2711_);
lean_inc(v_bcFileName_x3f_2710_);
lean_inc(v_cFileName_x3f_2709_);
lean_inc(v_ileanFileName_x3f_2708_);
lean_inc(v_oleanFileName_x3f_2707_);
lean_inc(v_setupFileName_x3f_2706_);
lean_inc(v_rootDir_x3f_2705_);
lean_inc(v_opts_2702_);
lean_inc(v_forwardedArgs_2694_);
lean_inc(v_leanOpts_2693_);
lean_dec(v_opts_1117_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2731_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2726_; 
v___x_2722_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__30));
v___x_2723_ = lean_string_append(v___x_2722_, v_a_2672_);
lean_dec(v_a_2672_);
v___x_2724_ = lean_array_push(v_forwardedArgs_2694_, v___x_2723_);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 1, v___x_2724_);
v___x_2726_ = v___x_2720_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_leanOpts_2693_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v___x_2724_);
lean_ctor_set(v_reuseFailAlloc_2730_, 2, v_opts_2702_);
lean_ctor_set(v_reuseFailAlloc_2730_, 3, v_rootDir_x3f_2705_);
lean_ctor_set(v_reuseFailAlloc_2730_, 4, v_setupFileName_x3f_2706_);
lean_ctor_set(v_reuseFailAlloc_2730_, 5, v_oleanFileName_x3f_2707_);
lean_ctor_set(v_reuseFailAlloc_2730_, 6, v_ileanFileName_x3f_2708_);
lean_ctor_set(v_reuseFailAlloc_2730_, 7, v_cFileName_x3f_2709_);
lean_ctor_set(v_reuseFailAlloc_2730_, 8, v_bcFileName_x3f_2710_);
lean_ctor_set(v_reuseFailAlloc_2730_, 9, v_zigFileName_x3f_2711_);
lean_ctor_set(v_reuseFailAlloc_2730_, 10, v_errorOnKinds_2713_);
lean_ctor_set(v_reuseFailAlloc_2730_, 11, v_incrSaveFileName_x3f_2716_);
lean_ctor_set(v_reuseFailAlloc_2730_, 12, v_incrLoadFileName_x3f_2717_);
lean_ctor_set(v_reuseFailAlloc_2730_, 13, v_incrHeaderSaveFileName_x3f_2718_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 8, v_component_2695_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 9, v_printPrefix_2696_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 10, v_printLibDir_2697_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 11, v_useStdin_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 12, v_onlyDeps_2699_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 13, v_onlySrcDeps_2700_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 14, v_depsJson_2701_);
lean_ctor_set_uint32(v_reuseFailAlloc_2730_, sizeof(void*)*14, v_trustLevel_2703_);
lean_ctor_set_uint32(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 4, v_numThreads_2704_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 15, v_jsonOutput_2712_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 16, v_printStats_2714_);
lean_ctor_set_uint8(v_reuseFailAlloc_2730_, sizeof(void*)*14 + 17, v_run_2715_);
v___x_2726_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
lean_object* v___x_2728_; 
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2726_);
v___x_2728_ = v___x_2674_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2726_);
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
}
else
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
lean_dec(v___x_2679_);
lean_del_object(v___x_2674_);
lean_dec(v_a_2672_);
lean_dec_ref(v_opts_1117_);
v___x_2732_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__31));
v___x_2733_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2732_);
lean_dec_ref(v___x_2733_);
goto v___jp_1312_;
}
}
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
lean_dec_ref(v_opts_1117_);
v_a_2735_ = lean_ctor_get(v___x_2671_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2671_, 1);
v___x_2739_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2740_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2739_);
lean_dec_ref(v___x_2740_);
goto v___jp_2736_;
v___jp_2736_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2737_ = lean_io_error_to_string(v_a_2735_);
v___x_2738_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2737_);
lean_dec_ref(v___x_2738_);
goto v___jp_1318_;
}
}
}
}
else
{
lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2741_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__32));
v___x_2742_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2741_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2784_; 
v_a_2743_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2745_ = v___x_2742_;
v_isShared_2746_ = v_isSharedCheck_2784_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2742_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2784_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v_leanOpts_2747_; lean_object* v_forwardedArgs_2748_; uint8_t v_component_2749_; uint8_t v_printPrefix_2750_; uint8_t v_printLibDir_2751_; uint8_t v_useStdin_2752_; uint8_t v_onlyDeps_2753_; uint8_t v_onlySrcDeps_2754_; uint8_t v_depsJson_2755_; lean_object* v_opts_2756_; uint32_t v_trustLevel_2757_; uint32_t v_numThreads_2758_; lean_object* v_rootDir_x3f_2759_; lean_object* v_setupFileName_x3f_2760_; lean_object* v_oleanFileName_x3f_2761_; lean_object* v_ileanFileName_x3f_2762_; lean_object* v_cFileName_x3f_2763_; lean_object* v_bcFileName_x3f_2764_; uint8_t v_jsonOutput_2765_; lean_object* v_errorOnKinds_2766_; uint8_t v_printStats_2767_; uint8_t v_run_2768_; lean_object* v_incrSaveFileName_x3f_2769_; lean_object* v_incrLoadFileName_x3f_2770_; lean_object* v_incrHeaderSaveFileName_x3f_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2782_; 
v_leanOpts_2747_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2748_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2749_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2750_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2751_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2752_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2753_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2754_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2755_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2756_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2757_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2758_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2759_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2760_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2761_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2762_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2763_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_2764_ = lean_ctor_get(v_opts_1117_, 8);
v_jsonOutput_2765_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2766_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2767_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2768_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2769_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2770_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2771_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2782_ == 0)
{
lean_object* v_unused_2783_; 
v_unused_2783_ = lean_ctor_get(v_opts_1117_, 9);
lean_dec(v_unused_2783_);
v___x_2773_ = v_opts_1117_;
v_isShared_2774_ = v_isSharedCheck_2782_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2771_);
lean_inc(v_incrLoadFileName_x3f_2770_);
lean_inc(v_incrSaveFileName_x3f_2769_);
lean_inc(v_errorOnKinds_2766_);
lean_inc(v_bcFileName_x3f_2764_);
lean_inc(v_cFileName_x3f_2763_);
lean_inc(v_ileanFileName_x3f_2762_);
lean_inc(v_oleanFileName_x3f_2761_);
lean_inc(v_setupFileName_x3f_2760_);
lean_inc(v_rootDir_x3f_2759_);
lean_inc(v_opts_2756_);
lean_inc(v_forwardedArgs_2748_);
lean_inc(v_leanOpts_2747_);
lean_dec(v_opts_1117_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2782_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2775_; lean_object* v___x_2777_; 
v___x_2775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2775_, 0, v_a_2743_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 9, v___x_2775_);
v___x_2777_ = v___x_2773_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_leanOpts_2747_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_forwardedArgs_2748_);
lean_ctor_set(v_reuseFailAlloc_2781_, 2, v_opts_2756_);
lean_ctor_set(v_reuseFailAlloc_2781_, 3, v_rootDir_x3f_2759_);
lean_ctor_set(v_reuseFailAlloc_2781_, 4, v_setupFileName_x3f_2760_);
lean_ctor_set(v_reuseFailAlloc_2781_, 5, v_oleanFileName_x3f_2761_);
lean_ctor_set(v_reuseFailAlloc_2781_, 6, v_ileanFileName_x3f_2762_);
lean_ctor_set(v_reuseFailAlloc_2781_, 7, v_cFileName_x3f_2763_);
lean_ctor_set(v_reuseFailAlloc_2781_, 8, v_bcFileName_x3f_2764_);
lean_ctor_set(v_reuseFailAlloc_2781_, 9, v___x_2775_);
lean_ctor_set(v_reuseFailAlloc_2781_, 10, v_errorOnKinds_2766_);
lean_ctor_set(v_reuseFailAlloc_2781_, 11, v_incrSaveFileName_x3f_2769_);
lean_ctor_set(v_reuseFailAlloc_2781_, 12, v_incrLoadFileName_x3f_2770_);
lean_ctor_set(v_reuseFailAlloc_2781_, 13, v_incrHeaderSaveFileName_x3f_2771_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 8, v_component_2749_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 9, v_printPrefix_2750_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 10, v_printLibDir_2751_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 11, v_useStdin_2752_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 12, v_onlyDeps_2753_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 13, v_onlySrcDeps_2754_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 14, v_depsJson_2755_);
lean_ctor_set_uint32(v_reuseFailAlloc_2781_, sizeof(void*)*14, v_trustLevel_2757_);
lean_ctor_set_uint32(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 4, v_numThreads_2758_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 15, v_jsonOutput_2765_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 16, v_printStats_2767_);
lean_ctor_set_uint8(v_reuseFailAlloc_2781_, sizeof(void*)*14 + 17, v_run_2768_);
v___x_2777_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
lean_object* v___x_2779_; 
if (v_isShared_2746_ == 0)
{
lean_ctor_set(v___x_2745_, 0, v___x_2777_);
v___x_2779_ = v___x_2745_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2777_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
lean_dec_ref(v_opts_1117_);
v_a_2785_ = lean_ctor_get(v___x_2742_, 0);
lean_inc(v_a_2785_);
lean_dec_ref_known(v___x_2742_, 1);
v___x_2789_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2790_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2789_);
lean_dec_ref(v___x_2790_);
goto v___jp_2786_;
v___jp_2786_:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2787_ = lean_io_error_to_string(v_a_2785_);
v___x_2788_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2787_);
lean_dec_ref(v___x_2788_);
goto v___jp_1154_;
}
}
}
}
else
{
lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2791_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__33));
v___x_2792_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2791_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2834_; 
v_a_2793_ = lean_ctor_get(v___x_2792_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2792_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2795_ = v___x_2792_;
v_isShared_2796_ = v_isSharedCheck_2834_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___x_2792_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2834_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v_leanOpts_2797_; lean_object* v_forwardedArgs_2798_; uint8_t v_component_2799_; uint8_t v_printPrefix_2800_; uint8_t v_printLibDir_2801_; uint8_t v_useStdin_2802_; uint8_t v_onlyDeps_2803_; uint8_t v_onlySrcDeps_2804_; uint8_t v_depsJson_2805_; lean_object* v_opts_2806_; uint32_t v_trustLevel_2807_; uint32_t v_numThreads_2808_; lean_object* v_rootDir_x3f_2809_; lean_object* v_setupFileName_x3f_2810_; lean_object* v_oleanFileName_x3f_2811_; lean_object* v_ileanFileName_x3f_2812_; lean_object* v_cFileName_x3f_2813_; lean_object* v_zigFileName_x3f_2814_; uint8_t v_jsonOutput_2815_; lean_object* v_errorOnKinds_2816_; uint8_t v_printStats_2817_; uint8_t v_run_2818_; lean_object* v_incrSaveFileName_x3f_2819_; lean_object* v_incrLoadFileName_x3f_2820_; lean_object* v_incrHeaderSaveFileName_x3f_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2832_; 
v_leanOpts_2797_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2798_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2799_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2800_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2801_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2802_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2803_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2804_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2805_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2806_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2807_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2808_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2809_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2810_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2811_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2812_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_2813_ = lean_ctor_get(v_opts_1117_, 7);
v_zigFileName_x3f_2814_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2815_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2816_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2817_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2818_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2819_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2820_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2821_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2832_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; 
v_unused_2833_ = lean_ctor_get(v_opts_1117_, 8);
lean_dec(v_unused_2833_);
v___x_2823_ = v_opts_1117_;
v_isShared_2824_ = v_isSharedCheck_2832_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2821_);
lean_inc(v_incrLoadFileName_x3f_2820_);
lean_inc(v_incrSaveFileName_x3f_2819_);
lean_inc(v_errorOnKinds_2816_);
lean_inc(v_zigFileName_x3f_2814_);
lean_inc(v_cFileName_x3f_2813_);
lean_inc(v_ileanFileName_x3f_2812_);
lean_inc(v_oleanFileName_x3f_2811_);
lean_inc(v_setupFileName_x3f_2810_);
lean_inc(v_rootDir_x3f_2809_);
lean_inc(v_opts_2806_);
lean_inc(v_forwardedArgs_2798_);
lean_inc(v_leanOpts_2797_);
lean_dec(v_opts_1117_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2832_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v___x_2825_; lean_object* v___x_2827_; 
v___x_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2825_, 0, v_a_2793_);
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 8, v___x_2825_);
v___x_2827_ = v___x_2823_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_leanOpts_2797_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_forwardedArgs_2798_);
lean_ctor_set(v_reuseFailAlloc_2831_, 2, v_opts_2806_);
lean_ctor_set(v_reuseFailAlloc_2831_, 3, v_rootDir_x3f_2809_);
lean_ctor_set(v_reuseFailAlloc_2831_, 4, v_setupFileName_x3f_2810_);
lean_ctor_set(v_reuseFailAlloc_2831_, 5, v_oleanFileName_x3f_2811_);
lean_ctor_set(v_reuseFailAlloc_2831_, 6, v_ileanFileName_x3f_2812_);
lean_ctor_set(v_reuseFailAlloc_2831_, 7, v_cFileName_x3f_2813_);
lean_ctor_set(v_reuseFailAlloc_2831_, 8, v___x_2825_);
lean_ctor_set(v_reuseFailAlloc_2831_, 9, v_zigFileName_x3f_2814_);
lean_ctor_set(v_reuseFailAlloc_2831_, 10, v_errorOnKinds_2816_);
lean_ctor_set(v_reuseFailAlloc_2831_, 11, v_incrSaveFileName_x3f_2819_);
lean_ctor_set(v_reuseFailAlloc_2831_, 12, v_incrLoadFileName_x3f_2820_);
lean_ctor_set(v_reuseFailAlloc_2831_, 13, v_incrHeaderSaveFileName_x3f_2821_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 8, v_component_2799_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 9, v_printPrefix_2800_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 10, v_printLibDir_2801_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 11, v_useStdin_2802_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 12, v_onlyDeps_2803_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 13, v_onlySrcDeps_2804_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 14, v_depsJson_2805_);
lean_ctor_set_uint32(v_reuseFailAlloc_2831_, sizeof(void*)*14, v_trustLevel_2807_);
lean_ctor_set_uint32(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 4, v_numThreads_2808_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 15, v_jsonOutput_2815_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 16, v_printStats_2817_);
lean_ctor_set_uint8(v_reuseFailAlloc_2831_, sizeof(void*)*14 + 17, v_run_2818_);
v___x_2827_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
lean_object* v___x_2829_; 
if (v_isShared_2796_ == 0)
{
lean_ctor_set(v___x_2795_, 0, v___x_2827_);
v___x_2829_ = v___x_2795_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2839_; lean_object* v___x_2840_; 
lean_dec_ref(v_opts_1117_);
v_a_2835_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2792_, 1);
v___x_2839_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2840_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2839_);
lean_dec_ref(v___x_2840_);
goto v___jp_2836_;
v___jp_2836_:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2837_ = lean_io_error_to_string(v_a_2835_);
v___x_2838_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2837_);
lean_dec_ref(v___x_2838_);
goto v___jp_1324_;
}
}
}
}
else
{
lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2841_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__34));
v___x_2842_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2841_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2884_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2845_ = v___x_2842_;
v_isShared_2846_ = v_isSharedCheck_2884_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2842_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2884_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v_leanOpts_2847_; lean_object* v_forwardedArgs_2848_; uint8_t v_component_2849_; uint8_t v_printPrefix_2850_; uint8_t v_printLibDir_2851_; uint8_t v_useStdin_2852_; uint8_t v_onlyDeps_2853_; uint8_t v_onlySrcDeps_2854_; uint8_t v_depsJson_2855_; lean_object* v_opts_2856_; uint32_t v_trustLevel_2857_; uint32_t v_numThreads_2858_; lean_object* v_rootDir_x3f_2859_; lean_object* v_setupFileName_x3f_2860_; lean_object* v_oleanFileName_x3f_2861_; lean_object* v_ileanFileName_x3f_2862_; lean_object* v_bcFileName_x3f_2863_; lean_object* v_zigFileName_x3f_2864_; uint8_t v_jsonOutput_2865_; lean_object* v_errorOnKinds_2866_; uint8_t v_printStats_2867_; uint8_t v_run_2868_; lean_object* v_incrSaveFileName_x3f_2869_; lean_object* v_incrLoadFileName_x3f_2870_; lean_object* v_incrHeaderSaveFileName_x3f_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2882_; 
v_leanOpts_2847_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2848_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2849_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2850_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2851_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2852_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2853_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2854_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2855_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2856_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_2857_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_numThreads_2858_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14 + 4);
v_rootDir_x3f_2859_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_2860_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_2861_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_2862_ = lean_ctor_get(v_opts_1117_, 6);
v_bcFileName_x3f_2863_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_2864_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_2865_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_2866_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_2867_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_2868_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_2869_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_2870_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_2871_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_2882_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_2882_ == 0)
{
lean_object* v_unused_2883_; 
v_unused_2883_ = lean_ctor_get(v_opts_1117_, 7);
lean_dec(v_unused_2883_);
v___x_2873_ = v_opts_1117_;
v_isShared_2874_ = v_isSharedCheck_2882_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_2871_);
lean_inc(v_incrLoadFileName_x3f_2870_);
lean_inc(v_incrSaveFileName_x3f_2869_);
lean_inc(v_errorOnKinds_2866_);
lean_inc(v_zigFileName_x3f_2864_);
lean_inc(v_bcFileName_x3f_2863_);
lean_inc(v_ileanFileName_x3f_2862_);
lean_inc(v_oleanFileName_x3f_2861_);
lean_inc(v_setupFileName_x3f_2860_);
lean_inc(v_rootDir_x3f_2859_);
lean_inc(v_opts_2856_);
lean_inc(v_forwardedArgs_2848_);
lean_inc(v_leanOpts_2847_);
lean_dec(v_opts_1117_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2882_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2875_; lean_object* v___x_2877_; 
v___x_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2875_, 0, v_a_2843_);
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 7, v___x_2875_);
v___x_2877_ = v___x_2873_;
goto v_reusejp_2876_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_leanOpts_2847_);
lean_ctor_set(v_reuseFailAlloc_2881_, 1, v_forwardedArgs_2848_);
lean_ctor_set(v_reuseFailAlloc_2881_, 2, v_opts_2856_);
lean_ctor_set(v_reuseFailAlloc_2881_, 3, v_rootDir_x3f_2859_);
lean_ctor_set(v_reuseFailAlloc_2881_, 4, v_setupFileName_x3f_2860_);
lean_ctor_set(v_reuseFailAlloc_2881_, 5, v_oleanFileName_x3f_2861_);
lean_ctor_set(v_reuseFailAlloc_2881_, 6, v_ileanFileName_x3f_2862_);
lean_ctor_set(v_reuseFailAlloc_2881_, 7, v___x_2875_);
lean_ctor_set(v_reuseFailAlloc_2881_, 8, v_bcFileName_x3f_2863_);
lean_ctor_set(v_reuseFailAlloc_2881_, 9, v_zigFileName_x3f_2864_);
lean_ctor_set(v_reuseFailAlloc_2881_, 10, v_errorOnKinds_2866_);
lean_ctor_set(v_reuseFailAlloc_2881_, 11, v_incrSaveFileName_x3f_2869_);
lean_ctor_set(v_reuseFailAlloc_2881_, 12, v_incrLoadFileName_x3f_2870_);
lean_ctor_set(v_reuseFailAlloc_2881_, 13, v_incrHeaderSaveFileName_x3f_2871_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 8, v_component_2849_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 9, v_printPrefix_2850_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 10, v_printLibDir_2851_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 11, v_useStdin_2852_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 12, v_onlyDeps_2853_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 13, v_onlySrcDeps_2854_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 14, v_depsJson_2855_);
lean_ctor_set_uint32(v_reuseFailAlloc_2881_, sizeof(void*)*14, v_trustLevel_2857_);
lean_ctor_set_uint32(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 4, v_numThreads_2858_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 15, v_jsonOutput_2865_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 16, v_printStats_2867_);
lean_ctor_set_uint8(v_reuseFailAlloc_2881_, sizeof(void*)*14 + 17, v_run_2868_);
v___x_2877_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2876_;
}
v_reusejp_2876_:
{
lean_object* v___x_2879_; 
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v___x_2877_);
v___x_2879_ = v___x_2845_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v___x_2877_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2889_; lean_object* v___x_2890_; 
lean_dec_ref(v_opts_1117_);
v_a_2885_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_a_2885_);
lean_dec_ref_known(v___x_2842_, 1);
v___x_2889_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2890_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2889_);
lean_dec_ref(v___x_2890_);
goto v___jp_2886_;
v___jp_2886_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = lean_io_error_to_string(v_a_2885_);
v___x_2888_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2887_);
lean_dec_ref(v___x_2888_);
goto v___jp_1148_;
}
}
}
}
else
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
v___x_2891_ = l___private_Lean_Shell_0__Lean_featuresString;
v___x_2892_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2891_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2900_; 
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2900_ == 0)
{
lean_object* v_unused_2901_; 
v_unused_2901_ = lean_ctor_get(v___x_2892_, 0);
lean_dec(v_unused_2901_);
v___x_2894_ = v___x_2892_;
v_isShared_2895_ = v_isSharedCheck_2900_;
goto v_resetjp_2893_;
}
else
{
lean_dec(v___x_2892_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2900_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2896_; lean_object* v___x_2898_; 
v___x_2896_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2895_ == 0)
{
lean_ctor_set_tag(v___x_2894_, 1);
lean_ctor_set(v___x_2894_, 0, v___x_2896_);
v___x_2898_ = v___x_2894_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v_a_2902_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_a_2902_);
lean_dec_ref_known(v___x_2892_, 1);
v___x_2906_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2907_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2906_);
lean_dec_ref(v___x_2907_);
goto v___jp_2903_;
v___jp_2903_:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = lean_io_error_to_string(v_a_2902_);
v___x_2905_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2904_);
lean_dec_ref(v___x_2905_);
goto v___jp_1330_;
}
}
}
}
else
{
lean_object* v___x_2908_; 
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
v___x_2908_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1354_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2916_; 
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2916_ == 0)
{
lean_object* v_unused_2917_; 
v_unused_2917_ = lean_ctor_get(v___x_2908_, 0);
lean_dec(v_unused_2917_);
v___x_2910_ = v___x_2908_;
v_isShared_2911_ = v_isSharedCheck_2916_;
goto v_resetjp_2909_;
}
else
{
lean_dec(v___x_2908_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2916_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2912_; lean_object* v___x_2914_; 
v___x_2912_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2911_ == 0)
{
lean_ctor_set_tag(v___x_2910_, 1);
lean_ctor_set(v___x_2910_, 0, v___x_2912_);
v___x_2914_ = v___x_2910_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v___x_2912_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
else
{
lean_object* v_a_2918_; lean_object* v___x_2922_; lean_object* v___x_2923_; 
v_a_2918_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_a_2918_);
lean_dec_ref_known(v___x_2908_, 1);
v___x_2922_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2923_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2922_);
lean_dec_ref(v___x_2923_);
goto v___jp_2919_;
v___jp_2919_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2920_ = lean_io_error_to_string(v_a_2918_);
v___x_2921_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2920_);
lean_dec_ref(v___x_2921_);
goto v___jp_1142_;
}
}
}
}
else
{
lean_object* v___x_2924_; lean_object* v___x_2925_; 
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
v___x_2924_ = l_Lean_githash;
v___x_2925_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2924_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2933_; 
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2933_ == 0)
{
lean_object* v_unused_2934_; 
v_unused_2934_ = lean_ctor_get(v___x_2925_, 0);
lean_dec(v_unused_2934_);
v___x_2927_ = v___x_2925_;
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
else
{
lean_dec(v___x_2925_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2929_; lean_object* v___x_2931_; 
v___x_2929_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2928_ == 0)
{
lean_ctor_set_tag(v___x_2927_, 1);
lean_ctor_set(v___x_2927_, 0, v___x_2929_);
v___x_2931_ = v___x_2927_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v___x_2929_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
else
{
lean_object* v_a_2935_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v_a_2935_ = lean_ctor_get(v___x_2925_, 0);
lean_inc(v_a_2935_);
lean_dec_ref_known(v___x_2925_, 1);
v___x_2939_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2940_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2939_);
lean_dec_ref(v___x_2940_);
goto v___jp_2936_;
v___jp_2936_:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = lean_io_error_to_string(v_a_2935_);
v___x_2938_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2937_);
lean_dec_ref(v___x_2938_);
goto v___jp_1336_;
}
}
}
}
else
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
v___x_2941_ = l___private_Lean_Shell_0__Lean_shortVersionString;
v___x_2942_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2941_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2950_; 
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2950_ == 0)
{
lean_object* v_unused_2951_; 
v_unused_2951_ = lean_ctor_get(v___x_2942_, 0);
lean_dec(v_unused_2951_);
v___x_2944_ = v___x_2942_;
v_isShared_2945_ = v_isSharedCheck_2950_;
goto v_resetjp_2943_;
}
else
{
lean_dec(v___x_2942_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2950_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2946_; lean_object* v___x_2948_; 
v___x_2946_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2945_ == 0)
{
lean_ctor_set_tag(v___x_2944_, 1);
lean_ctor_set(v___x_2944_, 0, v___x_2946_);
v___x_2948_ = v___x_2944_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2946_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_a_2952_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2942_, 1);
v___x_2956_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2957_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2956_);
lean_dec_ref(v___x_2957_);
goto v___jp_2953_;
v___jp_2953_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = lean_io_error_to_string(v_a_2952_);
v___x_2955_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2954_);
lean_dec_ref(v___x_2955_);
goto v___jp_1136_;
}
}
}
}
else
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
lean_dec(v_optArg_x3f_1119_);
lean_dec_ref(v_opts_1117_);
v___x_2958_ = l___private_Lean_Shell_0__Lean_versionHeader;
v___x_2959_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3(v___x_2958_);
if (lean_obj_tag(v___x_2959_) == 0)
{
lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2967_; 
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2959_);
if (v_isSharedCheck_2967_ == 0)
{
lean_object* v_unused_2968_; 
v_unused_2968_ = lean_ctor_get(v___x_2959_, 0);
lean_dec(v_unused_2968_);
v___x_2961_ = v___x_2959_;
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
else
{
lean_dec(v___x_2959_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2963_; lean_object* v___x_2965_; 
v___x_2963_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_2962_ == 0)
{
lean_ctor_set_tag(v___x_2961_, 1);
lean_ctor_set(v___x_2961_, 0, v___x_2963_);
v___x_2965_ = v___x_2961_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2963_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v_a_2969_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2969_);
lean_dec_ref_known(v___x_2959_, 1);
v___x_2973_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_2974_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2973_);
lean_dec_ref(v___x_2974_);
goto v___jp_2970_;
v___jp_2970_:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = lean_io_error_to_string(v_a_2969_);
v___x_2972_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2971_);
lean_dec_ref(v___x_2972_);
goto v___jp_1342_;
}
}
}
}
else
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__35));
v___x_2976_ = l___private_Lean_Shell_0__Lean_checkOptArg(v___x_2975_, v_optArg_x3f_1119_);
if (lean_obj_tag(v___x_2976_) == 0)
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_3031_; 
v_a_2977_ = lean_ctor_get(v___x_2976_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2976_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_2979_ = v___x_2976_;
v_isShared_2980_ = v_isSharedCheck_3031_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2976_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_3031_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2981_ = lean_unsigned_to_nat(0u);
v___x_2982_ = lean_string_utf8_byte_size(v_a_2977_);
lean_inc(v_a_2977_);
v___x_2983_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2983_, 0, v_a_2977_);
lean_ctor_set(v___x_2983_, 1, v___x_2981_);
lean_ctor_set(v___x_2983_, 2, v___x_2982_);
v___x_2984_ = l_String_Slice_toNat_x3f(v___x_2983_);
lean_dec_ref_known(v___x_2983_, 3);
if (lean_obj_tag(v___x_2984_) == 1)
{
lean_object* v_val_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v_val_2985_ = lean_ctor_get(v___x_2984_, 0);
lean_inc(v_val_2985_);
lean_dec_ref_known(v___x_2984_, 1);
v___x_2986_ = lean_cstr_to_nat("4294967296");
v___x_2987_ = lean_nat_dec_lt(v_val_2985_, v___x_2986_);
if (v___x_2987_ == 0)
{
lean_object* v___x_2988_; lean_object* v___x_2989_; 
lean_dec(v_val_2985_);
lean_del_object(v___x_2979_);
lean_dec(v_a_2977_);
lean_dec_ref(v_opts_1117_);
v___x_2988_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__36));
v___x_2989_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_2988_);
lean_dec_ref(v___x_2989_);
goto v___jp_1130_;
}
else
{
lean_object* v_leanOpts_2990_; lean_object* v_forwardedArgs_2991_; uint8_t v_component_2992_; uint8_t v_printPrefix_2993_; uint8_t v_printLibDir_2994_; uint8_t v_useStdin_2995_; uint8_t v_onlyDeps_2996_; uint8_t v_onlySrcDeps_2997_; uint8_t v_depsJson_2998_; lean_object* v_opts_2999_; uint32_t v_trustLevel_3000_; lean_object* v_rootDir_x3f_3001_; lean_object* v_setupFileName_x3f_3002_; lean_object* v_oleanFileName_x3f_3003_; lean_object* v_ileanFileName_x3f_3004_; lean_object* v_cFileName_x3f_3005_; lean_object* v_bcFileName_x3f_3006_; lean_object* v_zigFileName_x3f_3007_; uint8_t v_jsonOutput_3008_; lean_object* v_errorOnKinds_3009_; uint8_t v_printStats_3010_; uint8_t v_run_3011_; lean_object* v_incrSaveFileName_x3f_3012_; lean_object* v_incrLoadFileName_x3f_3013_; lean_object* v_incrHeaderSaveFileName_x3f_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3028_; 
v_leanOpts_2990_ = lean_ctor_get(v_opts_1117_, 0);
v_forwardedArgs_2991_ = lean_ctor_get(v_opts_1117_, 1);
v_component_2992_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 8);
v_printPrefix_2993_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 9);
v_printLibDir_2994_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 10);
v_useStdin_2995_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 11);
v_onlyDeps_2996_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 12);
v_onlySrcDeps_2997_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 13);
v_depsJson_2998_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 14);
v_opts_2999_ = lean_ctor_get(v_opts_1117_, 2);
v_trustLevel_3000_ = lean_ctor_get_uint32(v_opts_1117_, sizeof(void*)*14);
v_rootDir_x3f_3001_ = lean_ctor_get(v_opts_1117_, 3);
v_setupFileName_x3f_3002_ = lean_ctor_get(v_opts_1117_, 4);
v_oleanFileName_x3f_3003_ = lean_ctor_get(v_opts_1117_, 5);
v_ileanFileName_x3f_3004_ = lean_ctor_get(v_opts_1117_, 6);
v_cFileName_x3f_3005_ = lean_ctor_get(v_opts_1117_, 7);
v_bcFileName_x3f_3006_ = lean_ctor_get(v_opts_1117_, 8);
v_zigFileName_x3f_3007_ = lean_ctor_get(v_opts_1117_, 9);
v_jsonOutput_3008_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 15);
v_errorOnKinds_3009_ = lean_ctor_get(v_opts_1117_, 10);
v_printStats_3010_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 16);
v_run_3011_ = lean_ctor_get_uint8(v_opts_1117_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3012_ = lean_ctor_get(v_opts_1117_, 11);
v_incrLoadFileName_x3f_3013_ = lean_ctor_get(v_opts_1117_, 12);
v_incrHeaderSaveFileName_x3f_3014_ = lean_ctor_get(v_opts_1117_, 13);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_opts_1117_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3016_ = v_opts_1117_;
v_isShared_3017_ = v_isSharedCheck_3028_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_incrHeaderSaveFileName_x3f_3014_);
lean_inc(v_incrLoadFileName_x3f_3013_);
lean_inc(v_incrSaveFileName_x3f_3012_);
lean_inc(v_errorOnKinds_3009_);
lean_inc(v_zigFileName_x3f_3007_);
lean_inc(v_bcFileName_x3f_3006_);
lean_inc(v_cFileName_x3f_3005_);
lean_inc(v_ileanFileName_x3f_3004_);
lean_inc(v_oleanFileName_x3f_3003_);
lean_inc(v_setupFileName_x3f_3002_);
lean_inc(v_rootDir_x3f_3001_);
lean_inc(v_opts_2999_);
lean_inc(v_forwardedArgs_2991_);
lean_inc(v_leanOpts_2990_);
lean_dec(v_opts_1117_);
v___x_3016_ = lean_box(0);
v_isShared_3017_ = v_isSharedCheck_3028_;
goto v_resetjp_3015_;
}
v_resetjp_3015_:
{
uint32_t v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3023_; 
v___x_3018_ = lean_uint32_of_nat(v_val_2985_);
lean_dec(v_val_2985_);
v___x_3019_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__37));
v___x_3020_ = lean_string_append(v___x_3019_, v_a_2977_);
lean_dec(v_a_2977_);
v___x_3021_ = lean_array_push(v_forwardedArgs_2991_, v___x_3020_);
if (v_isShared_3017_ == 0)
{
lean_ctor_set(v___x_3016_, 1, v___x_3021_);
v___x_3023_ = v___x_3016_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 14, 18);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_leanOpts_2990_);
lean_ctor_set(v_reuseFailAlloc_3027_, 1, v___x_3021_);
lean_ctor_set(v_reuseFailAlloc_3027_, 2, v_opts_2999_);
lean_ctor_set(v_reuseFailAlloc_3027_, 3, v_rootDir_x3f_3001_);
lean_ctor_set(v_reuseFailAlloc_3027_, 4, v_setupFileName_x3f_3002_);
lean_ctor_set(v_reuseFailAlloc_3027_, 5, v_oleanFileName_x3f_3003_);
lean_ctor_set(v_reuseFailAlloc_3027_, 6, v_ileanFileName_x3f_3004_);
lean_ctor_set(v_reuseFailAlloc_3027_, 7, v_cFileName_x3f_3005_);
lean_ctor_set(v_reuseFailAlloc_3027_, 8, v_bcFileName_x3f_3006_);
lean_ctor_set(v_reuseFailAlloc_3027_, 9, v_zigFileName_x3f_3007_);
lean_ctor_set(v_reuseFailAlloc_3027_, 10, v_errorOnKinds_3009_);
lean_ctor_set(v_reuseFailAlloc_3027_, 11, v_incrSaveFileName_x3f_3012_);
lean_ctor_set(v_reuseFailAlloc_3027_, 12, v_incrLoadFileName_x3f_3013_);
lean_ctor_set(v_reuseFailAlloc_3027_, 13, v_incrHeaderSaveFileName_x3f_3014_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 8, v_component_2992_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 9, v_printPrefix_2993_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 10, v_printLibDir_2994_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 11, v_useStdin_2995_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 12, v_onlyDeps_2996_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 13, v_onlySrcDeps_2997_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 14, v_depsJson_2998_);
lean_ctor_set_uint32(v_reuseFailAlloc_3027_, sizeof(void*)*14, v_trustLevel_3000_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 15, v_jsonOutput_3008_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 16, v_printStats_3010_);
lean_ctor_set_uint8(v_reuseFailAlloc_3027_, sizeof(void*)*14 + 17, v_run_3011_);
v___x_3023_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
lean_object* v___x_3025_; 
lean_ctor_set_uint32(v___x_3023_, sizeof(void*)*14 + 4, v___x_3018_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 0, v___x_3023_);
v___x_3025_ = v___x_2979_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v___x_3023_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
}
else
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
lean_dec(v___x_2984_);
lean_del_object(v___x_2979_);
lean_dec(v_a_2977_);
lean_dec_ref(v_opts_1117_);
v___x_3029_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__38));
v___x_3030_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3029_);
lean_dec_ref(v___x_3030_);
goto v___jp_1127_;
}
}
}
else
{
lean_object* v_a_3032_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
lean_dec_ref(v_opts_1117_);
v_a_3032_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_a_3032_);
lean_dec_ref_known(v___x_2976_, 1);
v___x_3036_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_3037_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3036_);
lean_dec_ref(v___x_3037_);
goto v___jp_3033_;
v___jp_3033_:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3034_ = lean_io_error_to_string(v_a_3032_);
v___x_3035_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3034_);
lean_dec_ref(v___x_3035_);
goto v___jp_1124_;
}
}
}
}
else
{
lean_object* v___x_3038_; lean_object* v___x_3039_; 
lean_dec(v_optArg_x3f_1119_);
v___x_3038_ = lean_internal_set_exit_on_panic(v___x_1346_);
v___x_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3039_, 0, v_opts_1117_);
return v___x_3039_;
}
v___jp_1121_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
return v___x_1123_;
}
v___jp_1124_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1125_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1126_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1125_);
lean_dec_ref(v___x_1126_);
goto v___jp_1121_;
}
v___jp_1127_:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
return v___x_1129_;
}
v___jp_1130_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
return v___x_1132_;
}
v___jp_1133_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
return v___x_1135_;
}
v___jp_1136_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1138_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1137_);
lean_dec_ref(v___x_1138_);
goto v___jp_1133_;
}
v___jp_1139_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1140_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
v___jp_1142_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1144_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1143_);
lean_dec_ref(v___x_1144_);
goto v___jp_1139_;
}
v___jp_1145_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
return v___x_1147_;
}
v___jp_1148_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1149_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1150_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1149_);
lean_dec_ref(v___x_1150_);
goto v___jp_1145_;
}
v___jp_1151_:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
return v___x_1153_;
}
v___jp_1154_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1156_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1155_);
lean_dec_ref(v___x_1156_);
goto v___jp_1151_;
}
v___jp_1157_:
{
lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1158_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1158_);
return v___x_1159_;
}
v___jp_1160_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1162_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1161_);
lean_dec_ref(v___x_1162_);
goto v___jp_1157_;
}
v___jp_1163_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1164_);
return v___x_1165_;
}
v___jp_1166_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1168_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1167_);
lean_dec_ref(v___x_1168_);
goto v___jp_1163_;
}
v___jp_1169_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1170_);
return v___x_1171_;
}
v___jp_1172_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1174_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1173_);
lean_dec_ref(v___x_1174_);
goto v___jp_1169_;
}
v___jp_1175_:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
return v___x_1177_;
}
v___jp_1178_:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1179_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
return v___x_1180_;
}
v___jp_1181_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1183_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1182_);
lean_dec_ref(v___x_1183_);
goto v___jp_1178_;
}
v___jp_1184_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1185_);
return v___x_1186_;
}
v___jp_1187_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1189_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1188_);
lean_dec_ref(v___x_1189_);
goto v___jp_1184_;
}
v___jp_1190_:
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
return v___x_1192_;
}
v___jp_1193_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1195_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1194_);
lean_dec_ref(v___x_1195_);
goto v___jp_1190_;
}
v___jp_1196_:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = lean_io_error_to_string(v___y_1197_);
v___x_1199_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1198_);
lean_dec_ref(v___x_1199_);
goto v___jp_1193_;
}
v___jp_1200_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
return v___x_1202_;
}
v___jp_1203_:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1205_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1204_);
lean_dec_ref(v___x_1205_);
goto v___jp_1200_;
}
v___jp_1206_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
v___jp_1209_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1211_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1210_);
lean_dec_ref(v___x_1211_);
goto v___jp_1206_;
}
v___jp_1212_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
v___jp_1215_:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1217_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1216_);
lean_dec_ref(v___x_1217_);
goto v___jp_1212_;
}
v___jp_1218_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
v___jp_1221_:
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1223_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1222_);
lean_dec_ref(v___x_1223_);
goto v___jp_1218_;
}
v___jp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_io_error_to_string(v___y_1225_);
v___x_1227_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1226_);
lean_dec_ref(v___x_1227_);
goto v___jp_1221_;
}
v___jp_1228_:
{
uint8_t v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = 1;
v___x_1230_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_1229_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1238_; 
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1238_ == 0)
{
lean_object* v_unused_1239_; 
v_unused_1239_ = lean_ctor_get(v___x_1230_, 0);
lean_dec(v_unused_1239_);
v___x_1232_ = v___x_1230_;
v_isShared_1233_ = v_isSharedCheck_1238_;
goto v_resetjp_1231_;
}
else
{
lean_dec(v___x_1230_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1238_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1234_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_1233_ == 0)
{
lean_ctor_set_tag(v___x_1232_, 1);
lean_ctor_set(v___x_1232_, 0, v___x_1234_);
v___x_1236_ = v___x_1232_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v_a_1240_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1230_, 1);
v___x_1241_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__1));
v___x_1242_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1241_);
lean_dec_ref(v___x_1242_);
v___y_1225_ = v_a_1240_;
goto v___jp_1224_;
}
}
v___jp_1243_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process___closed__0));
v___x_1245_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1244_);
lean_dec_ref(v___x_1245_);
goto v___jp_1228_;
}
v___jp_1246_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1247_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
return v___x_1248_;
}
v___jp_1249_:
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1251_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1250_);
lean_dec_ref(v___x_1251_);
goto v___jp_1246_;
}
v___jp_1252_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
return v___x_1254_;
}
v___jp_1255_:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1257_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1256_);
lean_dec_ref(v___x_1257_);
goto v___jp_1252_;
}
v___jp_1258_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
v___jp_1261_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1263_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1262_);
lean_dec_ref(v___x_1263_);
goto v___jp_1258_;
}
v___jp_1264_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
return v___x_1266_;
}
v___jp_1267_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1269_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1268_);
lean_dec_ref(v___x_1269_);
goto v___jp_1264_;
}
v___jp_1270_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
return v___x_1272_;
}
v___jp_1273_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1275_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1274_);
lean_dec_ref(v___x_1275_);
goto v___jp_1270_;
}
v___jp_1276_:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
return v___x_1278_;
}
v___jp_1279_:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1281_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1280_);
lean_dec_ref(v___x_1281_);
goto v___jp_1276_;
}
v___jp_1282_:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1283_);
return v___x_1284_;
}
v___jp_1285_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
return v___x_1287_;
}
v___jp_1288_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
v___jp_1291_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1293_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1292_);
lean_dec_ref(v___x_1293_);
goto v___jp_1288_;
}
v___jp_1294_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1295_);
return v___x_1296_;
}
v___jp_1297_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
return v___x_1299_;
}
v___jp_1300_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1302_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1301_);
lean_dec_ref(v___x_1302_);
goto v___jp_1297_;
}
v___jp_1303_:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
return v___x_1305_;
}
v___jp_1306_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1308_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1307_);
lean_dec_ref(v___x_1308_);
goto v___jp_1303_;
}
v___jp_1309_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1310_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
return v___x_1311_;
}
v___jp_1312_:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
return v___x_1314_;
}
v___jp_1315_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1316_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
v___jp_1318_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1320_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1319_);
lean_dec_ref(v___x_1320_);
goto v___jp_1315_;
}
v___jp_1321_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1322_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
return v___x_1323_;
}
v___jp_1324_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1326_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1325_);
lean_dec_ref(v___x_1326_);
goto v___jp_1321_;
}
v___jp_1327_:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1328_);
return v___x_1329_;
}
v___jp_1330_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1331_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1332_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1331_);
lean_dec_ref(v___x_1332_);
goto v___jp_1327_;
}
v___jp_1333_:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1334_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1335_, 0, v___x_1334_);
return v___x_1335_;
}
v___jp_1336_:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1337_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1338_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1337_);
lean_dec_ref(v___x_1338_);
goto v___jp_1333_;
}
v___jp_1339_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
return v___x_1341_;
}
v___jp_1342_:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___closed__0));
v___x_1344_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_1343_);
lean_dec_ref(v___x_1344_);
goto v___jp_1339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed(lean_object* v_opts_3040_, lean_object* v_opt_3041_, lean_object* v_optArg_x3f_3042_, lean_object* v_a_3043_){
_start:
{
uint32_t v_opt_boxed_3044_; lean_object* v_res_3045_; 
v_opt_boxed_3044_ = lean_unbox_uint32(v_opt_3041_);
lean_dec(v_opt_3041_);
v_res_3045_ = lean_shell_options_process(v_opts_3040_, v_opt_boxed_3044_, v_optArg_x3f_3042_);
return v_res_3045_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3047_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3048_ = lean_string_utf8_byte_size(v___x_3047_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(lean_object* v_s_3049_){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; uint8_t v___x_3053_; 
v___x_3050_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__0));
v___x_3051_ = lean_string_utf8_byte_size(v_s_3049_);
v___x_3052_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg___closed__1);
v___x_3053_ = lean_nat_dec_le(v___x_3052_, v___x_3051_);
if (v___x_3053_ == 0)
{
lean_object* v___x_3054_; 
lean_dec_ref(v_s_3049_);
v___x_3054_ = lean_box(0);
return v___x_3054_;
}
else
{
lean_object* v___x_3055_; uint8_t v___x_3056_; 
v___x_3055_ = lean_unsigned_to_nat(0u);
v___x_3056_ = lean_string_memcmp(v_s_3049_, v___x_3050_, v___x_3055_, v___x_3055_, v___x_3052_);
if (v___x_3056_ == 0)
{
lean_object* v___x_3057_; 
lean_dec_ref(v_s_3049_);
v___x_3057_ = lean_box(0);
return v___x_3057_;
}
else
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
lean_inc_ref(v_s_3049_);
v___x_3058_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3058_, 0, v_s_3049_);
lean_ctor_set(v___x_3058_, 1, v___x_3055_);
lean_ctor_set(v___x_3058_, 2, v___x_3051_);
v___x_3059_ = l_String_Slice_pos_x21(v___x_3058_, v___x_3052_);
lean_dec_ref_known(v___x_3058_, 3);
v___x_3060_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3060_, 0, v_s_3049_);
lean_ctor_set(v___x_3060_, 1, v___x_3059_);
lean_ctor_set(v___x_3060_, 2, v___x_3051_);
v___x_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
return v___x_3061_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(lean_object* v_s_3062_, lean_object* v_pat_3063_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v_s_3062_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___boxed(lean_object* v_s_3065_, lean_object* v_pat_3066_){
_start:
{
lean_object* v_res_3067_; 
v_res_3067_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1(v_s_3065_, v_pat_3066_);
lean_dec_ref(v_pat_3066_);
return v_res_3067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0(lean_object* v_mainModuleName_3068_, lean_object* v_val_3069_, lean_object* v_a_3070_){
_start:
{
lean_object* v___x_3072_; 
v___x_3072_ = l___private_Lean_Shell_0__Lean_emitZig(v_mainModuleName_3068_, v_val_3069_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3072_, 1);
v___x_3074_ = lean_string_to_utf8(v_a_3073_);
lean_dec(v_a_3073_);
v___x_3075_ = lean_io_prim_handle_write(v_a_3070_, v___x_3074_);
lean_dec_ref(v___x_3074_);
return v___x_3075_;
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
v_a_3076_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3072_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3072_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed(lean_object* v_mainModuleName_3084_, lean_object* v_val_3085_, lean_object* v_a_3086_, lean_object* v___y_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l___private_Lean_Shell_0__Lean_shellMain___lam__0(v_mainModuleName_3084_, v_val_3085_, v_a_3086_);
lean_dec(v_a_3086_);
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1(lean_object* v___x_3089_, lean_object* v___x_3090_, lean_object* v_mainModuleName_3091_, lean_object* v_a_3092_, uint8_t v___x_3093_, lean_object* v___x_3094_, lean_object* v_fileName_3095_, lean_object* v___x_3096_, lean_object* v___x_3097_, lean_object* v___x_3098_, lean_object* v___x_3099_, lean_object* v___x_3100_, lean_object* v___x_3101_, lean_object* v___x_3102_, lean_object* v___x_3103_, uint8_t v_onlySrcDeps_3104_){
_start:
{
lean_object* v_a_3107_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v_env_3115_; lean_object* v___x_3116_; uint8_t v___x_3117_; lean_object* v_fileName_3119_; lean_object* v_fileMap_3120_; lean_object* v_currRecDepth_3121_; lean_object* v_ref_3122_; lean_object* v_currNamespace_3123_; lean_object* v_openDecls_3124_; lean_object* v_initHeartbeats_3125_; lean_object* v_maxHeartbeats_3126_; lean_object* v_quotContext_3127_; lean_object* v_currMacroScope_3128_; lean_object* v_cancelTk_x3f_3129_; uint8_t v_suppressElabErrors_3130_; lean_object* v_inheritedTraceOptions_3131_; lean_object* v___y_3132_; uint8_t v___y_3164_; uint8_t v___x_3184_; 
v___x_3110_ = lean_io_get_num_heartbeats();
v___x_3111_ = lean_st_mk_ref(v___x_3089_);
v___x_3112_ = l_Lean_inheritedTraceOptions;
v___x_3113_ = lean_st_ref_get(v___x_3112_);
v___x_3114_ = lean_st_ref_get(v___x_3111_);
v_env_3115_ = lean_ctor_get(v___x_3114_, 0);
lean_inc_ref(v_env_3115_);
lean_dec(v___x_3114_);
v___x_3116_ = l_Lean_diagnostics;
v___x_3117_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v___x_3090_, v___x_3116_);
v___x_3184_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3115_);
lean_dec_ref(v_env_3115_);
if (v___x_3184_ == 0)
{
if (v___x_3117_ == 0)
{
lean_dec_ref(v___x_3094_);
lean_inc(v___x_3111_);
lean_inc(v___x_3099_);
v_fileName_3119_ = v_fileName_3095_;
v_fileMap_3120_ = v___x_3096_;
v_currRecDepth_3121_ = v___x_3097_;
v_ref_3122_ = v___x_3098_;
v_currNamespace_3123_ = v___x_3099_;
v_openDecls_3124_ = v___x_3100_;
v_initHeartbeats_3125_ = v___x_3110_;
v_maxHeartbeats_3126_ = v___x_3101_;
v_quotContext_3127_ = v___x_3099_;
v_currMacroScope_3128_ = v___x_3102_;
v_cancelTk_x3f_3129_ = v___x_3103_;
v_suppressElabErrors_3130_ = v_onlySrcDeps_3104_;
v_inheritedTraceOptions_3131_ = v___x_3113_;
v___y_3132_ = v___x_3111_;
goto v___jp_3118_;
}
else
{
v___y_3164_ = v___x_3184_;
goto v___jp_3163_;
}
}
else
{
v___y_3164_ = v___x_3117_;
goto v___jp_3163_;
}
v___jp_3106_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = lean_mk_io_user_error(v_a_3107_);
v___x_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3108_);
return v___x_3109_;
}
v___jp_3118_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3133_ = l_Lean_maxRecDepth;
v___x_3134_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v___x_3090_, v___x_3133_);
v___x_3135_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3135_, 0, v_fileName_3119_);
lean_ctor_set(v___x_3135_, 1, v_fileMap_3120_);
lean_ctor_set(v___x_3135_, 2, v___x_3090_);
lean_ctor_set(v___x_3135_, 3, v_currRecDepth_3121_);
lean_ctor_set(v___x_3135_, 4, v___x_3134_);
lean_ctor_set(v___x_3135_, 5, v_ref_3122_);
lean_ctor_set(v___x_3135_, 6, v_currNamespace_3123_);
lean_ctor_set(v___x_3135_, 7, v_openDecls_3124_);
lean_ctor_set(v___x_3135_, 8, v_initHeartbeats_3125_);
lean_ctor_set(v___x_3135_, 9, v_maxHeartbeats_3126_);
lean_ctor_set(v___x_3135_, 10, v_quotContext_3127_);
lean_ctor_set(v___x_3135_, 11, v_currMacroScope_3128_);
lean_ctor_set(v___x_3135_, 12, v_cancelTk_x3f_3129_);
lean_ctor_set(v___x_3135_, 13, v_inheritedTraceOptions_3131_);
lean_ctor_set_uint8(v___x_3135_, sizeof(void*)*14, v___x_3117_);
lean_ctor_set_uint8(v___x_3135_, sizeof(void*)*14 + 1, v_suppressElabErrors_3130_);
v___x_3136_ = l_Lean_Compiler_LCNF_emitC(v_mainModuleName_3091_, v___x_3135_, v___y_3132_);
lean_dec(v___y_3132_);
lean_dec_ref_known(v___x_3135_, 14);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3136_, 1);
v___x_3138_ = lean_st_ref_get(v___x_3111_);
lean_dec(v___x_3111_);
lean_dec(v___x_3138_);
v___x_3139_ = lean_string_to_utf8(v_a_3137_);
lean_dec(v_a_3137_);
v___x_3140_ = lean_io_prim_handle_write(v_a_3092_, v___x_3139_);
lean_dec_ref(v___x_3139_);
return v___x_3140_;
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3162_; 
lean_dec(v___x_3111_);
v_a_3141_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3143_ = v___x_3136_;
v_isShared_3144_ = v_isSharedCheck_3162_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3136_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3162_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
if (lean_obj_tag(v_a_3141_) == 0)
{
lean_object* v_msg_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3149_; 
v_msg_3145_ = lean_ctor_get(v_a_3141_, 1);
lean_inc_ref(v_msg_3145_);
lean_dec_ref_known(v_a_3141_, 2);
v___x_3146_ = l_Lean_MessageData_toString(v_msg_3145_);
v___x_3147_ = lean_mk_io_user_error(v___x_3146_);
if (v_isShared_3144_ == 0)
{
lean_ctor_set(v___x_3143_, 0, v___x_3147_);
v___x_3149_ = v___x_3143_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v___x_3147_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
else
{
lean_object* v_id_3151_; lean_object* v___x_3152_; 
lean_del_object(v___x_3143_);
v_id_3151_ = lean_ctor_get(v_a_3141_, 0);
lean_inc(v_id_3151_);
lean_dec_ref_known(v_a_3141_, 2);
v___x_3152_ = l_Lean_InternalExceptionId_getName(v_id_3151_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_object* v_a_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; 
lean_dec(v_id_3151_);
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc(v_a_3153_);
lean_dec_ref_known(v___x_3152_, 1);
v___x_3154_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__18));
v___x_3155_ = l_Lean_Name_toString(v_a_3153_, v___x_3093_);
v___x_3156_ = lean_string_append(v___x_3154_, v___x_3155_);
lean_dec_ref(v___x_3155_);
v_a_3107_ = v___x_3156_;
goto v___jp_3106_;
}
else
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
lean_dec_ref_known(v___x_3152_, 1);
v___x_3157_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__19));
v___x_3158_ = l_Nat_reprFast(v_id_3151_);
v___x_3159_ = lean_string_append(v___x_3157_, v___x_3158_);
lean_dec_ref(v___x_3158_);
v___x_3160_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__20));
v___x_3161_ = lean_string_append(v___x_3159_, v___x_3160_);
v_a_3107_ = v___x_3161_;
goto v___jp_3106_;
}
}
}
}
}
v___jp_3163_:
{
if (v___y_3164_ == 0)
{
lean_object* v___x_3165_; lean_object* v_env_3166_; lean_object* v_nextMacroScope_3167_; lean_object* v_ngen_3168_; lean_object* v_auxDeclNGen_3169_; lean_object* v_traceState_3170_; lean_object* v_messages_3171_; lean_object* v_infoState_3172_; lean_object* v_snapshotTasks_3173_; lean_object* v___x_3175_; uint8_t v_isShared_3176_; uint8_t v_isSharedCheck_3182_; 
v___x_3165_ = lean_st_ref_take(v___x_3111_);
v_env_3166_ = lean_ctor_get(v___x_3165_, 0);
v_nextMacroScope_3167_ = lean_ctor_get(v___x_3165_, 1);
v_ngen_3168_ = lean_ctor_get(v___x_3165_, 2);
v_auxDeclNGen_3169_ = lean_ctor_get(v___x_3165_, 3);
v_traceState_3170_ = lean_ctor_get(v___x_3165_, 4);
v_messages_3171_ = lean_ctor_get(v___x_3165_, 6);
v_infoState_3172_ = lean_ctor_get(v___x_3165_, 7);
v_snapshotTasks_3173_ = lean_ctor_get(v___x_3165_, 8);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3165_);
if (v_isSharedCheck_3182_ == 0)
{
lean_object* v_unused_3183_; 
v_unused_3183_ = lean_ctor_get(v___x_3165_, 5);
lean_dec(v_unused_3183_);
v___x_3175_ = v___x_3165_;
v_isShared_3176_ = v_isSharedCheck_3182_;
goto v_resetjp_3174_;
}
else
{
lean_inc(v_snapshotTasks_3173_);
lean_inc(v_infoState_3172_);
lean_inc(v_messages_3171_);
lean_inc(v_traceState_3170_);
lean_inc(v_auxDeclNGen_3169_);
lean_inc(v_ngen_3168_);
lean_inc(v_nextMacroScope_3167_);
lean_inc(v_env_3166_);
lean_dec(v___x_3165_);
v___x_3175_ = lean_box(0);
v_isShared_3176_ = v_isSharedCheck_3182_;
goto v_resetjp_3174_;
}
v_resetjp_3174_:
{
lean_object* v___x_3177_; lean_object* v___x_3179_; 
v___x_3177_ = l_Lean_Kernel_enableDiag(v_env_3166_, v___x_3117_);
if (v_isShared_3176_ == 0)
{
lean_ctor_set(v___x_3175_, 5, v___x_3094_);
lean_ctor_set(v___x_3175_, 0, v___x_3177_);
v___x_3179_ = v___x_3175_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3177_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v_nextMacroScope_3167_);
lean_ctor_set(v_reuseFailAlloc_3181_, 2, v_ngen_3168_);
lean_ctor_set(v_reuseFailAlloc_3181_, 3, v_auxDeclNGen_3169_);
lean_ctor_set(v_reuseFailAlloc_3181_, 4, v_traceState_3170_);
lean_ctor_set(v_reuseFailAlloc_3181_, 5, v___x_3094_);
lean_ctor_set(v_reuseFailAlloc_3181_, 6, v_messages_3171_);
lean_ctor_set(v_reuseFailAlloc_3181_, 7, v_infoState_3172_);
lean_ctor_set(v_reuseFailAlloc_3181_, 8, v_snapshotTasks_3173_);
v___x_3179_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
lean_object* v___x_3180_; 
v___x_3180_ = lean_st_ref_set(v___x_3111_, v___x_3179_);
lean_inc(v___x_3111_);
lean_inc(v___x_3099_);
v_fileName_3119_ = v_fileName_3095_;
v_fileMap_3120_ = v___x_3096_;
v_currRecDepth_3121_ = v___x_3097_;
v_ref_3122_ = v___x_3098_;
v_currNamespace_3123_ = v___x_3099_;
v_openDecls_3124_ = v___x_3100_;
v_initHeartbeats_3125_ = v___x_3110_;
v_maxHeartbeats_3126_ = v___x_3101_;
v_quotContext_3127_ = v___x_3099_;
v_currMacroScope_3128_ = v___x_3102_;
v_cancelTk_x3f_3129_ = v___x_3103_;
v_suppressElabErrors_3130_ = v_onlySrcDeps_3104_;
v_inheritedTraceOptions_3131_ = v___x_3113_;
v___y_3132_ = v___x_3111_;
goto v___jp_3118_;
}
}
}
else
{
lean_dec_ref(v___x_3094_);
lean_inc(v___x_3111_);
lean_inc(v___x_3099_);
v_fileName_3119_ = v_fileName_3095_;
v_fileMap_3120_ = v___x_3096_;
v_currRecDepth_3121_ = v___x_3097_;
v_ref_3122_ = v___x_3098_;
v_currNamespace_3123_ = v___x_3099_;
v_openDecls_3124_ = v___x_3100_;
v_initHeartbeats_3125_ = v___x_3110_;
v_maxHeartbeats_3126_ = v___x_3101_;
v_quotContext_3127_ = v___x_3099_;
v_currMacroScope_3128_ = v___x_3102_;
v_cancelTk_x3f_3129_ = v___x_3103_;
v_suppressElabErrors_3130_ = v_onlySrcDeps_3104_;
v_inheritedTraceOptions_3131_ = v___x_3113_;
v___y_3132_ = v___x_3111_;
goto v___jp_3118_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed(lean_object** _args){
lean_object* v___x_3185_ = _args[0];
lean_object* v___x_3186_ = _args[1];
lean_object* v_mainModuleName_3187_ = _args[2];
lean_object* v_a_3188_ = _args[3];
lean_object* v___x_3189_ = _args[4];
lean_object* v___x_3190_ = _args[5];
lean_object* v_fileName_3191_ = _args[6];
lean_object* v___x_3192_ = _args[7];
lean_object* v___x_3193_ = _args[8];
lean_object* v___x_3194_ = _args[9];
lean_object* v___x_3195_ = _args[10];
lean_object* v___x_3196_ = _args[11];
lean_object* v___x_3197_ = _args[12];
lean_object* v___x_3198_ = _args[13];
lean_object* v___x_3199_ = _args[14];
lean_object* v_onlySrcDeps_3200_ = _args[15];
lean_object* v___y_3201_ = _args[16];
_start:
{
uint8_t v___x_26645__boxed_3202_; uint8_t v_onlySrcDeps_boxed_3203_; lean_object* v_res_3204_; 
v___x_26645__boxed_3202_ = lean_unbox(v___x_3189_);
v_onlySrcDeps_boxed_3203_ = lean_unbox(v_onlySrcDeps_3200_);
v_res_3204_ = l___private_Lean_Shell_0__Lean_shellMain___lam__1(v___x_3185_, v___x_3186_, v_mainModuleName_3187_, v_a_3188_, v___x_26645__boxed_3202_, v___x_3190_, v_fileName_3191_, v___x_3192_, v___x_3193_, v___x_3194_, v___x_3195_, v___x_3196_, v___x_3197_, v___x_3198_, v___x_3199_, v_onlySrcDeps_boxed_3203_);
lean_dec(v_a_3188_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(lean_object* v_s_3205_){
_start:
{
uint32_t v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3207_ = 10;
v___x_3208_ = lean_string_push(v_s_3205_, v___x_3207_);
v___x_3209_ = l_IO_eprint___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__0(v___x_3208_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0___boxed(lean_object* v_s_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v_s_3210_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(lean_object* v_val_3213_, lean_object* v_a_3214_, lean_object* v_b_3215_){
_start:
{
lean_object* v_str_3216_; lean_object* v_startInclusive_3217_; lean_object* v_endExclusive_3218_; lean_object* v___x_3219_; uint8_t v___x_3220_; 
v_str_3216_ = lean_ctor_get(v_val_3213_, 0);
v_startInclusive_3217_ = lean_ctor_get(v_val_3213_, 1);
v_endExclusive_3218_ = lean_ctor_get(v_val_3213_, 2);
v___x_3219_ = lean_nat_sub(v_endExclusive_3218_, v_startInclusive_3217_);
v___x_3220_ = lean_nat_dec_eq(v_a_3214_, v___x_3219_);
lean_dec(v___x_3219_);
if (v___x_3220_ == 0)
{
lean_object* v___x_3221_; uint32_t v___x_3222_; uint32_t v___x_3223_; uint8_t v___x_3224_; 
v___x_3221_ = lean_nat_add(v_startInclusive_3217_, v_a_3214_);
v___x_3222_ = lean_string_utf8_get_fast(v_str_3216_, v___x_3221_);
v___x_3223_ = 10;
v___x_3224_ = lean_uint32_dec_eq(v___x_3222_, v___x_3223_);
if (v___x_3224_ == 0)
{
lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
lean_dec(v_a_3214_);
v___x_3225_ = lean_box(0);
v___x_3226_ = lean_string_utf8_next_fast(v_str_3216_, v___x_3221_);
lean_dec(v___x_3221_);
v___x_3227_ = lean_nat_sub(v___x_3226_, v_startInclusive_3217_);
v_a_3214_ = v___x_3227_;
v_b_3215_ = v___x_3225_;
goto _start;
}
else
{
lean_object* v___x_3229_; 
lean_dec(v___x_3221_);
v___x_3229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3229_, 0, v_a_3214_);
return v___x_3229_;
}
}
else
{
lean_dec(v_a_3214_);
lean_inc(v_b_3215_);
return v_b_3215_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg___boxed(lean_object* v_val_3230_, lean_object* v_a_3231_, lean_object* v_b_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3230_, v_a_3231_, v_b_3232_);
lean_dec(v_b_3232_);
lean_dec_ref(v_val_3230_);
return v_res_3233_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(lean_object* v_s_3234_){
_start:
{
uint32_t v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3236_ = 10;
v___x_3237_ = lean_string_push(v_s_3234_, v___x_3236_);
v___x_3238_ = l_IO_print___at___00IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3_spec__5(v___x_3237_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3___boxed(lean_object* v_s_3239_, lean_object* v_a_3240_){
_start:
{
lean_object* v_res_3241_; 
v_res_3241_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_s_3239_);
return v_res_3241_;
}
}
static uint8_t _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0(void){
_start:
{
lean_object* v___x_3242_; uint8_t v___x_3243_; 
v___x_3242_ = lean_box(0);
v___x_3243_ = lean_internal_has_address_sanitizer(v___x_3242_);
return v___x_3243_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__5(void){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3248_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__4));
v___x_3249_ = lean_mk_io_user_error(v___x_3248_);
return v___x_3249_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15(void){
_start:
{
lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3268_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__14));
v___x_3269_ = lean_string_utf8_byte_size(v___x_3268_);
return v___x_3269_;
}
}
static lean_object* _init_l___private_Lean_Shell_0__Lean_shellMain___closed__16(void){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3270_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__15, &l___private_Lean_Shell_0__Lean_shellMain___closed__15_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__15);
v___x_3271_ = lean_unsigned_to_nat(0u);
v___x_3272_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__14));
v___x_3273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
lean_ctor_set(v___x_3273_, 1, v___x_3271_);
lean_ctor_set(v___x_3273_, 2, v___x_3270_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* lean_shell_main(lean_object* v_args_3277_, lean_object* v_opts_3278_){
_start:
{
lean_object* v_a_3281_; lean_object* v_fns_3285_; lean_object* v___y_3311_; lean_object* v_leanOpts_3325_; lean_object* v_forwardedArgs_3326_; uint8_t v_component_3327_; uint8_t v_printPrefix_3328_; uint8_t v_printLibDir_3329_; uint8_t v_useStdin_3330_; uint8_t v_onlyDeps_3331_; uint8_t v_onlySrcDeps_3332_; uint8_t v_depsJson_3333_; uint32_t v_trustLevel_3334_; lean_object* v_rootDir_x3f_3335_; lean_object* v_setupFileName_x3f_3336_; lean_object* v_oleanFileName_x3f_3337_; lean_object* v_ileanFileName_x3f_3338_; lean_object* v_cFileName_x3f_3339_; lean_object* v_bcFileName_x3f_3340_; lean_object* v_zigFileName_x3f_3341_; uint8_t v_jsonOutput_3342_; lean_object* v_errorOnKinds_3343_; uint8_t v_printStats_3344_; uint8_t v_run_3345_; lean_object* v_incrSaveFileName_x3f_3346_; lean_object* v_incrLoadFileName_x3f_3347_; lean_object* v_incrHeaderSaveFileName_x3f_3348_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3392_; lean_object* v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; 
v_leanOpts_3325_ = lean_ctor_get(v_opts_3278_, 0);
lean_inc_ref(v_leanOpts_3325_);
v_forwardedArgs_3326_ = lean_ctor_get(v_opts_3278_, 1);
lean_inc_ref(v_forwardedArgs_3326_);
v_component_3327_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 8);
v_printPrefix_3328_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 9);
v_printLibDir_3329_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 10);
v_useStdin_3330_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 11);
v_onlyDeps_3331_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 12);
v_onlySrcDeps_3332_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 13);
v_depsJson_3333_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 14);
v_trustLevel_3334_ = lean_ctor_get_uint32(v_opts_3278_, sizeof(void*)*14);
v_rootDir_x3f_3335_ = lean_ctor_get(v_opts_3278_, 3);
lean_inc(v_rootDir_x3f_3335_);
v_setupFileName_x3f_3336_ = lean_ctor_get(v_opts_3278_, 4);
lean_inc(v_setupFileName_x3f_3336_);
v_oleanFileName_x3f_3337_ = lean_ctor_get(v_opts_3278_, 5);
lean_inc(v_oleanFileName_x3f_3337_);
v_ileanFileName_x3f_3338_ = lean_ctor_get(v_opts_3278_, 6);
lean_inc(v_ileanFileName_x3f_3338_);
v_cFileName_x3f_3339_ = lean_ctor_get(v_opts_3278_, 7);
lean_inc(v_cFileName_x3f_3339_);
v_bcFileName_x3f_3340_ = lean_ctor_get(v_opts_3278_, 8);
lean_inc(v_bcFileName_x3f_3340_);
v_zigFileName_x3f_3341_ = lean_ctor_get(v_opts_3278_, 9);
lean_inc(v_zigFileName_x3f_3341_);
v_jsonOutput_3342_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 15);
v_errorOnKinds_3343_ = lean_ctor_get(v_opts_3278_, 10);
lean_inc_ref(v_errorOnKinds_3343_);
v_printStats_3344_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 16);
v_run_3345_ = lean_ctor_get_uint8(v_opts_3278_, sizeof(void*)*14 + 17);
v_incrSaveFileName_x3f_3346_ = lean_ctor_get(v_opts_3278_, 11);
lean_inc(v_incrSaveFileName_x3f_3346_);
v_incrLoadFileName_x3f_3347_ = lean_ctor_get(v_opts_3278_, 12);
lean_inc(v_incrLoadFileName_x3f_3347_);
v_incrHeaderSaveFileName_x3f_3348_ = lean_ctor_get(v_opts_3278_, 13);
lean_inc(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec_ref(v_opts_3278_);
if (v_printPrefix_3328_ == 0)
{
if (v_printLibDir_3329_ == 0)
{
uint8_t v___x_3419_; lean_object* v___y_3421_; uint8_t v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v_fileName_3427_; lean_object* v_fileMap_3428_; lean_object* v_currRecDepth_3429_; lean_object* v_ref_3430_; lean_object* v_currNamespace_3431_; lean_object* v_openDecls_3432_; lean_object* v_initHeartbeats_3433_; lean_object* v_maxHeartbeats_3434_; lean_object* v_quotContext_3435_; lean_object* v_currMacroScope_3436_; lean_object* v_cancelTk_x3f_3437_; uint8_t v_suppressElabErrors_3438_; lean_object* v_inheritedTraceOptions_3439_; lean_object* v___y_3440_; lean_object* v___y_3486_; uint8_t v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3508_; lean_object* v___y_3509_; uint8_t v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; lean_object* v___y_3514_; lean_object* v___y_3515_; uint8_t v___y_3516_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v_mainModuleName_3648_; lean_object* v___y_3654_; lean_object* v___y_3655_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; lean_object* v_contents_3674_; lean_object* v___y_3700_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v_str_3704_; lean_object* v_startInclusive_3705_; lean_object* v_endExclusive_3706_; lean_object* v___y_3707_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v_fileName_3806_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3844_; lean_object* v___y_3845_; uint8_t v___y_3876_; lean_object* v_fst_3877_; lean_object* v_snd_3878_; uint8_t v___y_3880_; lean_object* v___x_3910_; lean_object* v_maxMemory_3911_; lean_object* v___x_3912_; uint8_t v___x_3913_; 
v___x_3419_ = 1;
v___x_3910_ = l___private_Lean_Shell_0__Lean_maxMemory;
v_maxMemory_3911_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_leanOpts_3325_, v___x_3910_);
v___x_3912_ = lean_unsigned_to_nat(0u);
v___x_3913_ = lean_nat_dec_eq(v_maxMemory_3911_, v___x_3912_);
if (v___x_3913_ == 0)
{
size_t v___x_3914_; size_t v___x_3915_; size_t v___x_3916_; size_t v___x_3917_; lean_object* v___x_3918_; 
v___x_3914_ = lean_usize_of_nat(v_maxMemory_3911_);
lean_dec(v_maxMemory_3911_);
v___x_3915_ = ((size_t)10ULL);
v___x_3916_ = lean_usize_shift_left(v___x_3914_, v___x_3915_);
v___x_3917_ = lean_usize_shift_left(v___x_3916_, v___x_3915_);
v___x_3918_ = lean_internal_set_max_memory(v___x_3917_);
goto v___jp_3901_;
}
else
{
lean_dec(v_maxMemory_3911_);
goto v___jp_3901_;
}
v___jp_3420_:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
v___x_3441_ = l_Lean_maxRecDepth;
v___x_3442_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v___y_3423_, v___x_3441_);
lean_inc_ref(v___y_3423_);
v___x_3443_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3443_, 0, v_fileName_3427_);
lean_ctor_set(v___x_3443_, 1, v_fileMap_3428_);
lean_ctor_set(v___x_3443_, 2, v___y_3423_);
lean_ctor_set(v___x_3443_, 3, v_currRecDepth_3429_);
lean_ctor_set(v___x_3443_, 4, v___x_3442_);
lean_ctor_set(v___x_3443_, 5, v_ref_3430_);
lean_ctor_set(v___x_3443_, 6, v_currNamespace_3431_);
lean_ctor_set(v___x_3443_, 7, v_openDecls_3432_);
lean_ctor_set(v___x_3443_, 8, v_initHeartbeats_3433_);
lean_ctor_set(v___x_3443_, 9, v_maxHeartbeats_3434_);
lean_ctor_set(v___x_3443_, 10, v_quotContext_3435_);
lean_ctor_set(v___x_3443_, 11, v_currMacroScope_3436_);
lean_ctor_set(v___x_3443_, 12, v_cancelTk_x3f_3437_);
lean_ctor_set(v___x_3443_, 13, v_inheritedTraceOptions_3439_);
lean_ctor_set_uint8(v___x_3443_, sizeof(void*)*14, v___y_3422_);
lean_ctor_set_uint8(v___x_3443_, sizeof(void*)*14 + 1, v_suppressElabErrors_3438_);
lean_inc_ref(v___y_3424_);
v___x_3444_ = l_Lean_compileDecls(v___y_3424_, v___x_3419_, v___x_3443_, v___y_3440_);
lean_dec(v___y_3440_);
lean_dec_ref_known(v___x_3443_, 14);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3461_; 
v_isSharedCheck_3461_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3461_ == 0)
{
lean_object* v_unused_3462_; 
v_unused_3462_ = lean_ctor_get(v___x_3444_, 0);
lean_dec(v_unused_3462_);
v___x_3446_ = v___x_3444_;
v_isShared_3447_ = v_isSharedCheck_3461_;
goto v_resetjp_3445_;
}
else
{
lean_dec(v___x_3444_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3461_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3448_; lean_object* v_env_3449_; lean_object* v___x_3450_; 
v___x_3448_ = lean_st_ref_get(v___y_3426_);
lean_dec(v___y_3426_);
v_env_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc_ref_n(v_env_3449_, 2);
lean_dec(v___x_3448_);
lean_inc(v___y_3425_);
v___x_3450_ = l_Lean_IR_findEnvDecl(v_env_3449_, v___y_3425_);
if (lean_obj_tag(v___x_3450_) == 1)
{
lean_object* v_val_3451_; uint32_t v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3455_; 
v_val_3451_ = lean_ctor_get(v___x_3450_, 0);
lean_inc(v_val_3451_);
lean_dec_ref_known(v___x_3450_, 1);
v___x_3452_ = lean_eval_main_decl(v_env_3449_, v___y_3423_, v___y_3421_, v_val_3451_);
lean_dec(v_val_3451_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3423_);
lean_dec_ref(v_env_3449_);
v___x_3453_ = lean_box_uint32(v___x_3452_);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 0, v___x_3453_);
v___x_3455_ = v___x_3446_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v___x_3453_);
v___x_3455_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
return v___x_3455_;
}
}
else
{
lean_object* v___x_3457_; lean_object* v___x_3459_; 
lean_dec(v___x_3450_);
lean_dec_ref(v_env_3449_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3421_);
v___x_3457_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__5, &l___private_Lean_Shell_0__Lean_shellMain___closed__5_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__5);
if (v_isShared_3447_ == 0)
{
lean_ctor_set_tag(v___x_3446_, 1);
lean_ctor_set(v___x_3446_, 0, v___x_3457_);
v___x_3459_ = v___x_3446_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v___x_3457_);
v___x_3459_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
return v___x_3459_;
}
}
}
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3484_; 
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3421_);
v_a_3463_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3465_ = v___x_3444_;
v_isShared_3466_ = v_isSharedCheck_3484_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3444_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3484_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
if (lean_obj_tag(v_a_3463_) == 0)
{
lean_object* v_msg_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3471_; 
v_msg_3467_ = lean_ctor_get(v_a_3463_, 1);
lean_inc_ref(v_msg_3467_);
lean_dec_ref_known(v_a_3463_, 2);
v___x_3468_ = l_Lean_MessageData_toString(v_msg_3467_);
v___x_3469_ = lean_mk_io_user_error(v___x_3468_);
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 0, v___x_3469_);
v___x_3471_ = v___x_3465_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
else
{
lean_object* v_id_3473_; lean_object* v___x_3474_; 
lean_del_object(v___x_3465_);
v_id_3473_ = lean_ctor_get(v_a_3463_, 0);
lean_inc(v_id_3473_);
lean_dec_ref_known(v_a_3463_, 2);
v___x_3474_ = l_Lean_InternalExceptionId_getName(v_id_3473_);
if (lean_obj_tag(v___x_3474_) == 0)
{
lean_object* v_a_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; 
lean_dec(v_id_3473_);
v_a_3475_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___x_3474_, 1);
v___x_3476_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__18));
v___x_3477_ = l_Lean_Name_toString(v_a_3475_, v___x_3419_);
v___x_3478_ = lean_string_append(v___x_3476_, v___x_3477_);
lean_dec_ref(v___x_3477_);
v_a_3281_ = v___x_3478_;
goto v___jp_3280_;
}
else
{
lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
lean_dec_ref_known(v___x_3474_, 1);
v___x_3479_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__19));
v___x_3480_ = l_Nat_reprFast(v_id_3473_);
v___x_3481_ = lean_string_append(v___x_3479_, v___x_3480_);
lean_dec_ref(v___x_3480_);
v___x_3482_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__20));
v___x_3483_ = lean_string_append(v___x_3481_, v___x_3482_);
v_a_3281_ = v___x_3483_;
goto v___jp_3280_;
}
}
}
}
}
v___jp_3485_:
{
lean_object* v_fileName_3494_; lean_object* v_fileMap_3495_; lean_object* v_currRecDepth_3496_; lean_object* v_ref_3497_; lean_object* v_currNamespace_3498_; lean_object* v_openDecls_3499_; lean_object* v_initHeartbeats_3500_; lean_object* v_maxHeartbeats_3501_; lean_object* v_quotContext_3502_; lean_object* v_currMacroScope_3503_; lean_object* v_cancelTk_x3f_3504_; uint8_t v_suppressElabErrors_3505_; lean_object* v_inheritedTraceOptions_3506_; 
v_fileName_3494_ = lean_ctor_get(v___y_3492_, 0);
lean_inc_ref(v_fileName_3494_);
v_fileMap_3495_ = lean_ctor_get(v___y_3492_, 1);
lean_inc_ref(v_fileMap_3495_);
v_currRecDepth_3496_ = lean_ctor_get(v___y_3492_, 3);
lean_inc(v_currRecDepth_3496_);
v_ref_3497_ = lean_ctor_get(v___y_3492_, 5);
lean_inc(v_ref_3497_);
v_currNamespace_3498_ = lean_ctor_get(v___y_3492_, 6);
lean_inc(v_currNamespace_3498_);
v_openDecls_3499_ = lean_ctor_get(v___y_3492_, 7);
lean_inc(v_openDecls_3499_);
v_initHeartbeats_3500_ = lean_ctor_get(v___y_3492_, 8);
lean_inc(v_initHeartbeats_3500_);
v_maxHeartbeats_3501_ = lean_ctor_get(v___y_3492_, 9);
lean_inc(v_maxHeartbeats_3501_);
v_quotContext_3502_ = lean_ctor_get(v___y_3492_, 10);
lean_inc(v_quotContext_3502_);
v_currMacroScope_3503_ = lean_ctor_get(v___y_3492_, 11);
lean_inc(v_currMacroScope_3503_);
v_cancelTk_x3f_3504_ = lean_ctor_get(v___y_3492_, 12);
lean_inc(v_cancelTk_x3f_3504_);
v_suppressElabErrors_3505_ = lean_ctor_get_uint8(v___y_3492_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3506_ = lean_ctor_get(v___y_3492_, 13);
lean_inc_ref(v_inheritedTraceOptions_3506_);
lean_dec_ref(v___y_3492_);
v___y_3421_ = v___y_3486_;
v___y_3422_ = v___y_3487_;
v___y_3423_ = v___y_3488_;
v___y_3424_ = v___y_3489_;
v___y_3425_ = v___y_3490_;
v___y_3426_ = v___y_3491_;
v_fileName_3427_ = v_fileName_3494_;
v_fileMap_3428_ = v_fileMap_3495_;
v_currRecDepth_3429_ = v_currRecDepth_3496_;
v_ref_3430_ = v_ref_3497_;
v_currNamespace_3431_ = v_currNamespace_3498_;
v_openDecls_3432_ = v_openDecls_3499_;
v_initHeartbeats_3433_ = v_initHeartbeats_3500_;
v_maxHeartbeats_3434_ = v_maxHeartbeats_3501_;
v_quotContext_3435_ = v_quotContext_3502_;
v_currMacroScope_3436_ = v_currMacroScope_3503_;
v_cancelTk_x3f_3437_ = v_cancelTk_x3f_3504_;
v_suppressElabErrors_3438_ = v_suppressElabErrors_3505_;
v_inheritedTraceOptions_3439_ = v_inheritedTraceOptions_3506_;
v___y_3440_ = v___y_3493_;
goto v___jp_3420_;
}
v___jp_3507_:
{
if (v___y_3516_ == 0)
{
lean_object* v___x_3517_; lean_object* v_env_3518_; lean_object* v_nextMacroScope_3519_; lean_object* v_ngen_3520_; lean_object* v_auxDeclNGen_3521_; lean_object* v_traceState_3522_; lean_object* v_messages_3523_; lean_object* v_infoState_3524_; lean_object* v_snapshotTasks_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3534_; 
v___x_3517_ = lean_st_ref_take(v___y_3515_);
v_env_3518_ = lean_ctor_get(v___x_3517_, 0);
v_nextMacroScope_3519_ = lean_ctor_get(v___x_3517_, 1);
v_ngen_3520_ = lean_ctor_get(v___x_3517_, 2);
v_auxDeclNGen_3521_ = lean_ctor_get(v___x_3517_, 3);
v_traceState_3522_ = lean_ctor_get(v___x_3517_, 4);
v_messages_3523_ = lean_ctor_get(v___x_3517_, 6);
v_infoState_3524_ = lean_ctor_get(v___x_3517_, 7);
v_snapshotTasks_3525_ = lean_ctor_get(v___x_3517_, 8);
v_isSharedCheck_3534_ = !lean_is_exclusive(v___x_3517_);
if (v_isSharedCheck_3534_ == 0)
{
lean_object* v_unused_3535_; 
v_unused_3535_ = lean_ctor_get(v___x_3517_, 5);
lean_dec(v_unused_3535_);
v___x_3527_ = v___x_3517_;
v_isShared_3528_ = v_isSharedCheck_3534_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_snapshotTasks_3525_);
lean_inc(v_infoState_3524_);
lean_inc(v_messages_3523_);
lean_inc(v_traceState_3522_);
lean_inc(v_auxDeclNGen_3521_);
lean_inc(v_ngen_3520_);
lean_inc(v_nextMacroScope_3519_);
lean_inc(v_env_3518_);
lean_dec(v___x_3517_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3534_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v___x_3529_; lean_object* v___x_3531_; 
v___x_3529_ = l_Lean_Kernel_enableDiag(v_env_3518_, v___y_3510_);
lean_inc_ref(v___y_3514_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 5, v___y_3514_);
lean_ctor_set(v___x_3527_, 0, v___x_3529_);
v___x_3531_ = v___x_3527_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3529_);
lean_ctor_set(v_reuseFailAlloc_3533_, 1, v_nextMacroScope_3519_);
lean_ctor_set(v_reuseFailAlloc_3533_, 2, v_ngen_3520_);
lean_ctor_set(v_reuseFailAlloc_3533_, 3, v_auxDeclNGen_3521_);
lean_ctor_set(v_reuseFailAlloc_3533_, 4, v_traceState_3522_);
lean_ctor_set(v_reuseFailAlloc_3533_, 5, v___y_3514_);
lean_ctor_set(v_reuseFailAlloc_3533_, 6, v_messages_3523_);
lean_ctor_set(v_reuseFailAlloc_3533_, 7, v_infoState_3524_);
lean_ctor_set(v_reuseFailAlloc_3533_, 8, v_snapshotTasks_3525_);
v___x_3531_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
lean_object* v___x_3532_; 
v___x_3532_ = lean_st_ref_set(v___y_3515_, v___x_3531_);
lean_inc(v___y_3515_);
v___y_3486_ = v___y_3509_;
v___y_3487_ = v___y_3510_;
v___y_3488_ = v___y_3508_;
v___y_3489_ = v___y_3511_;
v___y_3490_ = v___y_3513_;
v___y_3491_ = v___y_3515_;
v___y_3492_ = v___y_3512_;
v___y_3493_ = v___y_3515_;
goto v___jp_3485_;
}
}
}
else
{
lean_inc(v___y_3515_);
v___y_3486_ = v___y_3509_;
v___y_3487_ = v___y_3510_;
v___y_3488_ = v___y_3508_;
v___y_3489_ = v___y_3511_;
v___y_3490_ = v___y_3513_;
v___y_3491_ = v___y_3515_;
v___y_3492_ = v___y_3512_;
v___y_3493_ = v___y_3515_;
goto v___jp_3485_;
}
}
v___jp_3536_:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3544_ = lean_unsigned_to_nat(0u);
v___x_3545_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__6));
lean_inc(v___y_3537_);
lean_inc_ref(v___y_3541_);
lean_inc_ref(v___y_3543_);
v___x_3546_ = l_Lean_Elab_runFrontend(v___y_3540_, v___y_3543_, v___y_3541_, v___y_3537_, v_trustLevel_3334_, v_oleanFileName_x3f_3337_, v_ileanFileName_x3f_3338_, v_jsonOutput_3342_, v_errorOnKinds_3343_, v___x_3545_, v_printStats_3344_, v___y_3539_, v_incrSaveFileName_x3f_3346_, v_incrLoadFileName_x3f_3347_, v_incrHeaderSaveFileName_x3f_3348_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_ileanFileName_x3f_3338_);
if (lean_obj_tag(v___x_3546_) == 0)
{
lean_object* v_a_3547_; 
v_a_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_a_3547_);
lean_dec_ref_known(v___x_3546_, 1);
if (lean_obj_tag(v_a_3547_) == 1)
{
if (v_run_3345_ == 0)
{
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
if (lean_obj_tag(v_cFileName_x3f_3339_) == 1)
{
lean_object* v_val_3548_; lean_object* v_val_3549_; uint8_t v___x_3550_; lean_object* v___x_3551_; 
v_val_3548_ = lean_ctor_get(v_a_3547_, 0);
lean_inc(v_val_3548_);
v_val_3549_ = lean_ctor_get(v_cFileName_x3f_3339_, 0);
lean_inc(v_val_3549_);
lean_dec_ref_known(v_cFileName_x3f_3339_, 1);
v___x_3550_ = 1;
v___x_3551_ = lean_io_prim_handle_mk(v_val_3549_, v___x_3550_);
if (lean_obj_tag(v___x_3551_) == 0)
{
lean_object* v_a_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___f_3572_; lean_object* v___x_3573_; 
lean_dec(v_val_3549_);
v_a_3552_ = lean_ctor_get(v___x_3551_, 0);
lean_inc(v_a_3552_);
lean_dec_ref_known(v___x_3551_, 1);
v___x_3553_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__7));
v___x_3554_ = l_Lean_instInhabitedFileMap_default;
v___x_3555_ = l_Lean_Options_empty;
v___x_3556_ = lean_box(0);
v___x_3557_ = lean_box(0);
v___x_3558_ = lean_box(0);
v___x_3559_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__15, &l___private_Lean_Shell_0__Lean_emitZig___closed__15_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__15);
v___x_3560_ = l_Lean_firstFrontendMacroScope;
v___x_3561_ = lean_box(0);
v___x_3562_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__6, &l___private_Lean_Shell_0__Lean_emitZig___closed__6_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6);
v___x_3563_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__9));
v___x_3564_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__8));
v___x_3565_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__11, &l___private_Lean_Shell_0__Lean_emitZig___closed__11_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11);
v___x_3566_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__4, &l___private_Lean_Shell_0__Lean_emitZig___closed__4_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4);
v___x_3567_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__5, &l___private_Lean_Shell_0__Lean_emitZig___closed__5_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5);
v___x_3568_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__12, &l___private_Lean_Shell_0__Lean_emitZig___closed__12_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12);
lean_inc(v_val_3548_);
v___x_3569_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3569_, 0, v_val_3548_);
lean_ctor_set(v___x_3569_, 1, v___x_3562_);
lean_ctor_set(v___x_3569_, 2, v___x_3563_);
lean_ctor_set(v___x_3569_, 3, v___x_3564_);
lean_ctor_set(v___x_3569_, 4, v___x_3565_);
lean_ctor_set(v___x_3569_, 5, v___x_3566_);
lean_ctor_set(v___x_3569_, 6, v___x_3567_);
lean_ctor_set(v___x_3569_, 7, v___x_3568_);
lean_ctor_set(v___x_3569_, 8, v___x_3545_);
v___x_3570_ = lean_box(v___x_3419_);
v___x_3571_ = lean_box(v_onlySrcDeps_3332_);
lean_inc(v___y_3537_);
v___f_3572_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__1___boxed), 17, 16);
lean_closure_set(v___f_3572_, 0, v___x_3569_);
lean_closure_set(v___f_3572_, 1, v___x_3555_);
lean_closure_set(v___f_3572_, 2, v___y_3537_);
lean_closure_set(v___f_3572_, 3, v_a_3552_);
lean_closure_set(v___f_3572_, 4, v___x_3570_);
lean_closure_set(v___f_3572_, 5, v___x_3566_);
lean_closure_set(v___f_3572_, 6, v___y_3538_);
lean_closure_set(v___f_3572_, 7, v___x_3554_);
lean_closure_set(v___f_3572_, 8, v___x_3544_);
lean_closure_set(v___f_3572_, 9, v___x_3556_);
lean_closure_set(v___f_3572_, 10, v___x_3557_);
lean_closure_set(v___f_3572_, 11, v___x_3558_);
lean_closure_set(v___f_3572_, 12, v___x_3559_);
lean_closure_set(v___f_3572_, 13, v___x_3560_);
lean_closure_set(v___f_3572_, 14, v___x_3561_);
lean_closure_set(v___f_3572_, 15, v___x_3571_);
v___x_3573_ = l_Lean_profileitIOUnsafe___redArg(v___x_3553_, v_leanOpts_3325_, v___f_3572_, v___x_3557_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_dec_ref_known(v___x_3573_, 1);
lean_inc(v_val_3548_);
lean_inc(v___y_3537_);
v___y_3392_ = v___y_3537_;
v___y_3393_ = v_val_3548_;
v___y_3394_ = v___y_3537_;
v___y_3395_ = v_val_3548_;
v___y_3396_ = v_a_3547_;
goto v___jp_3391_;
}
else
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3581_; 
lean_dec(v_val_3548_);
lean_dec_ref_known(v_a_3547_, 1);
lean_dec(v___y_3537_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3576_ = v___x_3573_;
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3581_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3579_; 
if (v_isShared_3577_ == 0)
{
v___x_3579_ = v___x_3576_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v_a_3574_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
else
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
lean_dec_ref_known(v___x_3551_, 1);
lean_dec(v_val_3548_);
lean_dec_ref_known(v_a_3547_, 1);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3582_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__2));
v___x_3583_ = lean_string_append(v___x_3582_, v_val_3549_);
lean_dec(v_val_3549_);
v___x_3584_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3585_ = lean_string_append(v___x_3583_, v___x_3584_);
v___x_3586_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3585_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3594_; 
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3594_ == 0)
{
lean_object* v_unused_3595_; 
v_unused_3595_ = lean_ctor_get(v___x_3586_, 0);
lean_dec(v_unused_3595_);
v___x_3588_ = v___x_3586_;
v_isShared_3589_ = v_isSharedCheck_3594_;
goto v_resetjp_3587_;
}
else
{
lean_dec(v___x_3586_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3594_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3590_; lean_object* v___x_3592_; 
v___x_3590_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3589_ == 0)
{
lean_ctor_set(v___x_3588_, 0, v___x_3590_);
v___x_3592_ = v___x_3588_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v___x_3590_);
v___x_3592_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
return v___x_3592_;
}
}
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
v_a_3596_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3586_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3586_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
}
else
{
lean_object* v_val_3604_; 
lean_dec_ref(v___y_3538_);
lean_dec(v_cFileName_x3f_3339_);
v_val_3604_ = lean_ctor_get(v_a_3547_, 0);
lean_inc_n(v_val_3604_, 2);
lean_inc(v___y_3537_);
v___y_3392_ = v___y_3537_;
v___y_3393_ = v_val_3604_;
v___y_3394_ = v___y_3537_;
v___y_3395_ = v_val_3604_;
v___y_3396_ = v_a_3547_;
goto v___jp_3391_;
}
}
else
{
lean_object* v_val_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v_env_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; uint8_t v___x_3632_; uint8_t v___x_3633_; 
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec_ref(v_leanOpts_3325_);
v_val_3605_ = lean_ctor_get(v_a_3547_, 0);
lean_inc(v_val_3605_);
lean_dec_ref_known(v_a_3547_, 1);
v___x_3606_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__4, &l___private_Lean_Shell_0__Lean_emitZig___closed__4_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__4);
v___x_3607_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__5, &l___private_Lean_Shell_0__Lean_emitZig___closed__5_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__5);
v___x_3608_ = lean_io_get_num_heartbeats();
v___x_3609_ = l_Lean_firstFrontendMacroScope;
v___x_3610_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__6, &l___private_Lean_Shell_0__Lean_emitZig___closed__6_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__6);
v___x_3611_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__9));
v___x_3612_ = lean_box(0);
v___x_3613_ = lean_box(0);
v___x_3614_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_emitZig___closed__10));
v___x_3615_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__11, &l___private_Lean_Shell_0__Lean_emitZig___closed__11_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__11);
v___x_3616_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_emitZig___closed__12, &l___private_Lean_Shell_0__Lean_emitZig___closed__12_once, _init_l___private_Lean_Shell_0__Lean_emitZig___closed__12);
v___x_3617_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3617_, 0, v_val_3605_);
lean_ctor_set(v___x_3617_, 1, v___x_3610_);
lean_ctor_set(v___x_3617_, 2, v___x_3611_);
lean_ctor_set(v___x_3617_, 3, v___x_3614_);
lean_ctor_set(v___x_3617_, 4, v___x_3615_);
lean_ctor_set(v___x_3617_, 5, v___x_3606_);
lean_ctor_set(v___x_3617_, 6, v___x_3607_);
lean_ctor_set(v___x_3617_, 7, v___x_3616_);
lean_ctor_set(v___x_3617_, 8, v___x_3545_);
v___x_3618_ = lean_st_mk_ref(v___x_3617_);
v___x_3619_ = l_Lean_inheritedTraceOptions;
v___x_3620_ = lean_st_ref_get(v___x_3619_);
v___x_3621_ = lean_st_ref_get(v___x_3618_);
v___x_3622_ = l_Lean_instInhabitedFileMap_default;
v___x_3623_ = lean_unsigned_to_nat(1000u);
v___x_3624_ = lean_box(0);
v___x_3625_ = l_Lean_Core_getMaxHeartbeats(v___y_3543_);
v___x_3626_ = lean_box(0);
lean_inc(v___x_3620_);
lean_inc(v___x_3625_);
lean_inc(v___x_3608_);
lean_inc_ref(v___y_3543_);
lean_inc_ref(v___y_3541_);
v___x_3627_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3627_, 0, v___y_3541_);
lean_ctor_set(v___x_3627_, 1, v___x_3622_);
lean_ctor_set(v___x_3627_, 2, v___y_3543_);
lean_ctor_set(v___x_3627_, 3, v___x_3544_);
lean_ctor_set(v___x_3627_, 4, v___x_3623_);
lean_ctor_set(v___x_3627_, 5, v___x_3624_);
lean_ctor_set(v___x_3627_, 6, v___x_3612_);
lean_ctor_set(v___x_3627_, 7, v___x_3613_);
lean_ctor_set(v___x_3627_, 8, v___x_3608_);
lean_ctor_set(v___x_3627_, 9, v___x_3625_);
lean_ctor_set(v___x_3627_, 10, v___x_3612_);
lean_ctor_set(v___x_3627_, 11, v___x_3609_);
lean_ctor_set(v___x_3627_, 12, v___x_3626_);
lean_ctor_set(v___x_3627_, 13, v___x_3620_);
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*14, v_onlySrcDeps_3332_);
lean_ctor_set_uint8(v___x_3627_, sizeof(void*)*14 + 1, v_onlySrcDeps_3332_);
v_env_3628_ = lean_ctor_get(v___x_3621_, 0);
lean_inc_ref(v_env_3628_);
lean_dec(v___x_3621_);
v___x_3629_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__10));
v___x_3630_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__11));
v___x_3631_ = l_Lean_diagnostics;
v___x_3632_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__0(v___y_3543_, v___x_3631_);
v___x_3633_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3628_);
lean_dec_ref(v_env_3628_);
if (v___x_3633_ == 0)
{
if (v___x_3632_ == 0)
{
lean_dec_ref_known(v___x_3627_, 14);
lean_inc(v___x_3618_);
v___y_3421_ = v___y_3542_;
v___y_3422_ = v___x_3632_;
v___y_3423_ = v___y_3543_;
v___y_3424_ = v___x_3630_;
v___y_3425_ = v___x_3629_;
v___y_3426_ = v___x_3618_;
v_fileName_3427_ = v___y_3541_;
v_fileMap_3428_ = v___x_3622_;
v_currRecDepth_3429_ = v___x_3544_;
v_ref_3430_ = v___x_3624_;
v_currNamespace_3431_ = v___x_3612_;
v_openDecls_3432_ = v___x_3613_;
v_initHeartbeats_3433_ = v___x_3608_;
v_maxHeartbeats_3434_ = v___x_3625_;
v_quotContext_3435_ = v___x_3612_;
v_currMacroScope_3436_ = v___x_3609_;
v_cancelTk_x3f_3437_ = v___x_3626_;
v_suppressElabErrors_3438_ = v_onlySrcDeps_3332_;
v_inheritedTraceOptions_3439_ = v___x_3620_;
v___y_3440_ = v___x_3618_;
goto v___jp_3420_;
}
else
{
lean_dec(v___x_3625_);
lean_dec(v___x_3620_);
lean_dec(v___x_3608_);
lean_dec_ref(v___y_3541_);
v___y_3508_ = v___y_3543_;
v___y_3509_ = v___y_3542_;
v___y_3510_ = v___x_3632_;
v___y_3511_ = v___x_3630_;
v___y_3512_ = v___x_3627_;
v___y_3513_ = v___x_3629_;
v___y_3514_ = v___x_3606_;
v___y_3515_ = v___x_3618_;
v___y_3516_ = v___x_3633_;
goto v___jp_3507_;
}
}
else
{
lean_dec(v___x_3625_);
lean_dec(v___x_3620_);
lean_dec(v___x_3608_);
lean_dec_ref(v___y_3541_);
v___y_3508_ = v___y_3543_;
v___y_3509_ = v___y_3542_;
v___y_3510_ = v___x_3632_;
v___y_3511_ = v___x_3630_;
v___y_3512_ = v___x_3627_;
v___y_3513_ = v___x_3629_;
v___y_3514_ = v___x_3606_;
v___y_3515_ = v___x_3618_;
v___y_3516_ = v___x_3632_;
goto v___jp_3507_;
}
}
}
else
{
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec_ref(v_leanOpts_3325_);
v___y_3311_ = v_a_3547_;
goto v___jp_3310_;
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3634_ = lean_ctor_get(v___x_3546_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3546_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3546_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3546_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
}
v___jp_3642_:
{
if (v_run_3345_ == 0)
{
lean_inc_ref(v_leanOpts_3325_);
v___y_3537_ = v_mainModuleName_3648_;
v___y_3538_ = v___y_3643_;
v___y_3539_ = v___y_3647_;
v___y_3540_ = v___y_3646_;
v___y_3541_ = v___y_3645_;
v___y_3542_ = v___y_3644_;
v___y_3543_ = v_leanOpts_3325_;
goto v___jp_3536_;
}
else
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3649_ = l_Lean_Elab_async;
lean_inc_ref(v_leanOpts_3325_);
v___x_3650_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v_leanOpts_3325_, v___x_3649_, v_onlySrcDeps_3332_);
v___x_3651_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_3652_ = l_Lean_Option_set___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__1(v___x_3650_, v___x_3651_, v_onlySrcDeps_3332_);
v___y_3537_ = v_mainModuleName_3648_;
v___y_3538_ = v___y_3643_;
v___y_3539_ = v___y_3647_;
v___y_3540_ = v___y_3646_;
v___y_3541_ = v___y_3645_;
v___y_3542_ = v___y_3644_;
v___y_3543_ = v___x_3652_;
goto v___jp_3536_;
}
}
v___jp_3653_:
{
if (lean_obj_tag(v___y_3659_) == 0)
{
lean_object* v_a_3660_; 
v_a_3660_ = lean_ctor_get(v___y_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___y_3659_, 1);
v___y_3643_ = v___y_3654_;
v___y_3644_ = v___y_3655_;
v___y_3645_ = v___y_3656_;
v___y_3646_ = v___y_3657_;
v___y_3647_ = v___y_3658_;
v_mainModuleName_3648_ = v_a_3660_;
goto v___jp_3642_;
}
else
{
lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3661_ = lean_ctor_get(v___y_3659_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___y_3659_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___y_3659_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___y_3659_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
}
v___jp_3669_:
{
if (lean_obj_tag(v_setupFileName_x3f_3336_) == 0)
{
lean_object* v___x_3675_; 
v___x_3675_ = lean_box(0);
if (lean_obj_tag(v___y_3673_) == 1)
{
lean_object* v_val_3676_; lean_object* v___x_3677_; 
v_val_3676_ = lean_ctor_get(v___y_3673_, 0);
lean_inc(v_val_3676_);
lean_dec_ref_known(v___y_3673_, 1);
v___x_3677_ = l_Lean_moduleNameOfFileName(v_val_3676_, v_rootDir_x3f_3335_);
if (lean_obj_tag(v___x_3677_) == 0)
{
v___y_3654_ = v___y_3670_;
v___y_3655_ = v___y_3671_;
v___y_3656_ = v___y_3672_;
v___y_3657_ = v_contents_3674_;
v___y_3658_ = v___x_3675_;
v___y_3659_ = v___x_3677_;
goto v___jp_3653_;
}
else
{
if (lean_obj_tag(v_oleanFileName_x3f_3337_) == 0)
{
if (lean_obj_tag(v_cFileName_x3f_3339_) == 0)
{
if (lean_obj_tag(v_zigFileName_x3f_3341_) == 0)
{
lean_object* v___x_3678_; 
lean_dec_ref_known(v___x_3677_, 1);
v___x_3678_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__13));
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3671_;
v___y_3645_ = v___y_3672_;
v___y_3646_ = v_contents_3674_;
v___y_3647_ = v___x_3675_;
v_mainModuleName_3648_ = v___x_3678_;
goto v___jp_3642_;
}
else
{
v___y_3654_ = v___y_3670_;
v___y_3655_ = v___y_3671_;
v___y_3656_ = v___y_3672_;
v___y_3657_ = v_contents_3674_;
v___y_3658_ = v___x_3675_;
v___y_3659_ = v___x_3677_;
goto v___jp_3653_;
}
}
else
{
v___y_3654_ = v___y_3670_;
v___y_3655_ = v___y_3671_;
v___y_3656_ = v___y_3672_;
v___y_3657_ = v_contents_3674_;
v___y_3658_ = v___x_3675_;
v___y_3659_ = v___x_3677_;
goto v___jp_3653_;
}
}
else
{
v___y_3654_ = v___y_3670_;
v___y_3655_ = v___y_3671_;
v___y_3656_ = v___y_3672_;
v___y_3657_ = v_contents_3674_;
v___y_3658_ = v___x_3675_;
v___y_3659_ = v___x_3677_;
goto v___jp_3653_;
}
}
}
else
{
lean_object* v___x_3679_; 
lean_dec(v___y_3673_);
lean_dec(v_rootDir_x3f_3335_);
v___x_3679_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__13));
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3671_;
v___y_3645_ = v___y_3672_;
v___y_3646_ = v_contents_3674_;
v___y_3647_ = v___x_3675_;
v_mainModuleName_3648_ = v___x_3679_;
goto v___jp_3642_;
}
}
else
{
lean_object* v_val_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3698_; 
lean_dec(v___y_3673_);
lean_dec(v_rootDir_x3f_3335_);
v_val_3680_ = lean_ctor_get(v_setupFileName_x3f_3336_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v_setupFileName_x3f_3336_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3682_ = v_setupFileName_x3f_3336_;
v_isShared_3683_ = v_isSharedCheck_3698_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_val_3680_);
lean_dec(v_setupFileName_x3f_3336_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3698_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; 
v___x_3684_ = l_Lean_ModuleSetup_load(v_val_3680_);
lean_dec(v_val_3680_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; lean_object* v_name_3686_; lean_object* v___x_3688_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3684_, 1);
v_name_3686_ = lean_ctor_get(v_a_3685_, 0);
lean_inc(v_name_3686_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v_a_3685_);
v___x_3688_ = v___x_3682_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3685_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
v___y_3643_ = v___y_3670_;
v___y_3644_ = v___y_3671_;
v___y_3645_ = v___y_3672_;
v___y_3646_ = v_contents_3674_;
v___y_3647_ = v___x_3688_;
v_mainModuleName_3648_ = v_name_3686_;
goto v___jp_3642_;
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_del_object(v___x_3682_);
lean_dec_ref(v_contents_3674_);
lean_dec_ref(v___y_3672_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3690_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3684_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3684_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
}
}
v___jp_3699_:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; 
v___x_3708_ = lean_nat_add(v_startInclusive_3705_, v___y_3707_);
lean_dec(v___y_3707_);
lean_inc(v___x_3708_);
lean_inc_ref(v_str_3704_);
v___x_3709_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3709_, 0, v_str_3704_);
lean_ctor_set(v___x_3709_, 1, v_startInclusive_3705_);
lean_ctor_set(v___x_3709_, 2, v___x_3708_);
v___x_3710_ = l_String_Slice_trimAscii(v___x_3709_);
v___x_3711_ = lean_obj_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__16, &l___private_Lean_Shell_0__Lean_shellMain___closed__16_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__16);
v___x_3712_ = l_String_Slice_beq(v___x_3710_, v___x_3711_);
if (v___x_3712_ == 0)
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; 
lean_dec(v___x_3708_);
lean_dec(v_endExclusive_3706_);
lean_dec_ref(v_str_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3713_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__17));
v___x_3714_ = l_String_Slice_toString(v___x_3710_);
lean_dec_ref(v___x_3710_);
v___x_3715_ = lean_string_append(v___x_3713_, v___x_3714_);
lean_dec_ref(v___x_3714_);
v___x_3716_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_ShellOptions_process_throwExpectedNumeric___closed__1));
v___x_3717_ = lean_string_append(v___x_3715_, v___x_3716_);
v___x_3718_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3717_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3726_; 
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3726_ == 0)
{
lean_object* v_unused_3727_; 
v_unused_3727_ = lean_ctor_get(v___x_3718_, 0);
lean_dec(v_unused_3727_);
v___x_3720_ = v___x_3718_;
v_isShared_3721_ = v_isSharedCheck_3726_;
goto v_resetjp_3719_;
}
else
{
lean_dec(v___x_3718_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3726_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3722_; lean_object* v___x_3724_; 
v___x_3722_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3721_ == 0)
{
lean_ctor_set(v___x_3720_, 0, v___x_3722_);
v___x_3724_ = v___x_3720_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3722_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
else
{
lean_object* v_a_3728_; lean_object* v___x_3730_; uint8_t v_isShared_3731_; uint8_t v_isSharedCheck_3735_; 
v_a_3728_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3735_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3735_ == 0)
{
v___x_3730_ = v___x_3718_;
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
else
{
lean_inc(v_a_3728_);
lean_dec(v___x_3718_);
v___x_3730_ = lean_box(0);
v_isShared_3731_ = v_isSharedCheck_3735_;
goto v_resetjp_3729_;
}
v_resetjp_3729_:
{
lean_object* v___x_3733_; 
if (v_isShared_3731_ == 0)
{
v___x_3733_ = v___x_3730_;
goto v_reusejp_3732_;
}
else
{
lean_object* v_reuseFailAlloc_3734_; 
v_reuseFailAlloc_3734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3734_, 0, v_a_3728_);
v___x_3733_ = v_reuseFailAlloc_3734_;
goto v_reusejp_3732_;
}
v_reusejp_3732_:
{
return v___x_3733_;
}
}
}
}
else
{
lean_object* v___x_3736_; 
lean_dec_ref(v___x_3710_);
v___x_3736_ = lean_string_utf8_extract(v_str_3704_, v___x_3708_, v_endExclusive_3706_);
lean_dec(v_endExclusive_3706_);
lean_dec(v___x_3708_);
lean_dec_ref(v_str_3704_);
v___y_3670_ = v___y_3700_;
v___y_3671_ = v___y_3701_;
v___y_3672_ = v___y_3702_;
v___y_3673_ = v___y_3703_;
v_contents_3674_ = v___x_3736_;
goto v___jp_3669_;
}
}
v___jp_3737_:
{
if (lean_obj_tag(v___y_3741_) == 0)
{
lean_object* v_a_3742_; lean_object* v___x_3743_; 
v_a_3742_ = lean_ctor_get(v___y_3741_, 0);
lean_inc(v_a_3742_);
lean_dec_ref_known(v___y_3741_, 1);
v___x_3743_ = lean_decode_lossy_utf8(v_a_3742_);
lean_dec(v_a_3742_);
if (v_onlyDeps_3331_ == 0)
{
if (v_onlySrcDeps_3332_ == 0)
{
lean_object* v___x_3744_; 
lean_inc_ref(v___x_3743_);
v___x_3744_ = l_String_dropPrefix_x3f___at___00__private_Lean_Shell_0__Lean_shellMain_spec__1___redArg(v___x_3743_);
if (lean_obj_tag(v___x_3744_) == 1)
{
lean_object* v_val_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
lean_dec_ref(v___x_3743_);
v_val_3745_ = lean_ctor_get(v___x_3744_, 0);
lean_inc(v_val_3745_);
lean_dec_ref_known(v___x_3744_, 1);
v___x_3746_ = lean_unsigned_to_nat(0u);
v___x_3747_ = lean_box(0);
v___x_3748_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3745_, v___x_3746_, v___x_3747_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v_str_3749_; lean_object* v_startInclusive_3750_; lean_object* v_endExclusive_3751_; lean_object* v___x_3752_; 
v_str_3749_ = lean_ctor_get(v_val_3745_, 0);
lean_inc_ref(v_str_3749_);
v_startInclusive_3750_ = lean_ctor_get(v_val_3745_, 1);
lean_inc(v_startInclusive_3750_);
v_endExclusive_3751_ = lean_ctor_get(v_val_3745_, 2);
lean_inc(v_endExclusive_3751_);
lean_dec(v_val_3745_);
v___x_3752_ = lean_nat_sub(v_endExclusive_3751_, v_startInclusive_3750_);
lean_inc_ref(v___y_3739_);
v___y_3700_ = v___y_3739_;
v___y_3701_ = v___y_3740_;
v___y_3702_ = v___y_3739_;
v___y_3703_ = v___y_3738_;
v_str_3704_ = v_str_3749_;
v_startInclusive_3705_ = v_startInclusive_3750_;
v_endExclusive_3706_ = v_endExclusive_3751_;
v___y_3707_ = v___x_3752_;
goto v___jp_3699_;
}
else
{
lean_object* v_val_3753_; lean_object* v_str_3754_; lean_object* v_startInclusive_3755_; lean_object* v_endExclusive_3756_; 
v_val_3753_ = lean_ctor_get(v___x_3748_, 0);
lean_inc(v_val_3753_);
lean_dec_ref_known(v___x_3748_, 1);
v_str_3754_ = lean_ctor_get(v_val_3745_, 0);
lean_inc_ref(v_str_3754_);
v_startInclusive_3755_ = lean_ctor_get(v_val_3745_, 1);
lean_inc(v_startInclusive_3755_);
v_endExclusive_3756_ = lean_ctor_get(v_val_3745_, 2);
lean_inc(v_endExclusive_3756_);
lean_dec(v_val_3745_);
lean_inc_ref(v___y_3739_);
v___y_3700_ = v___y_3739_;
v___y_3701_ = v___y_3740_;
v___y_3702_ = v___y_3739_;
v___y_3703_ = v___y_3738_;
v_str_3704_ = v_str_3754_;
v_startInclusive_3705_ = v_startInclusive_3755_;
v_endExclusive_3706_ = v_endExclusive_3756_;
v___y_3707_ = v_val_3753_;
goto v___jp_3699_;
}
}
else
{
lean_dec(v___x_3744_);
lean_inc_ref(v___y_3739_);
v___y_3670_ = v___y_3739_;
v___y_3671_ = v___y_3740_;
v___y_3672_ = v___y_3739_;
v___y_3673_ = v___y_3738_;
v_contents_3674_ = v___x_3743_;
goto v___jp_3669_;
}
}
else
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
lean_dec(v___y_3740_);
lean_dec(v___y_3738_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3757_, 0, v___y_3739_);
v___x_3758_ = l_Lean_Elab_printImportSrcs(v___x_3743_, v___x_3757_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3766_; 
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3766_ == 0)
{
lean_object* v_unused_3767_; 
v_unused_3767_ = lean_ctor_get(v___x_3758_, 0);
lean_dec(v_unused_3767_);
v___x_3760_ = v___x_3758_;
v_isShared_3761_ = v_isSharedCheck_3766_;
goto v_resetjp_3759_;
}
else
{
lean_dec(v___x_3758_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3766_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; lean_object* v___x_3764_; 
v___x_3762_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 0, v___x_3762_);
v___x_3764_ = v___x_3760_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v___x_3762_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
v_a_3768_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3758_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v___x_3758_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
}
else
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
lean_dec(v___y_3740_);
lean_dec(v___y_3738_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3776_, 0, v___y_3739_);
v___x_3777_ = l_Lean_Elab_printImports(v___x_3743_, v___x_3776_);
if (lean_obj_tag(v___x_3777_) == 0)
{
lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3785_; 
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3777_);
if (v_isSharedCheck_3785_ == 0)
{
lean_object* v_unused_3786_; 
v_unused_3786_ = lean_ctor_get(v___x_3777_, 0);
lean_dec(v_unused_3786_);
v___x_3779_ = v___x_3777_;
v_isShared_3780_ = v_isSharedCheck_3785_;
goto v_resetjp_3778_;
}
else
{
lean_dec(v___x_3777_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3785_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3781_; lean_object* v___x_3783_; 
v___x_3781_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3780_ == 0)
{
lean_ctor_set(v___x_3779_, 0, v___x_3781_);
v___x_3783_ = v___x_3779_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
return v___x_3783_;
}
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3794_; 
v_a_3787_ = lean_ctor_get(v___x_3777_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3777_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3789_ = v___x_3777_;
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_a_3787_);
lean_dec(v___x_3777_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_a_3787_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
return v___x_3792_;
}
}
}
}
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec(v___y_3738_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3795_ = lean_ctor_get(v___y_3741_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___y_3741_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___y_3741_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___y_3741_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3795_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
}
v___jp_3803_:
{
if (v_useStdin_3330_ == 0)
{
lean_object* v___x_3807_; 
v___x_3807_ = l_IO_FS_readBinFile(v_fileName_3806_);
v___y_3738_ = v___y_3805_;
v___y_3739_ = v_fileName_3806_;
v___y_3740_ = v___y_3804_;
v___y_3741_ = v___x_3807_;
goto v___jp_3737_;
}
else
{
lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3808_ = lean_get_stdin();
v___x_3809_ = l_IO_FS_Stream_readBinToEnd(v___x_3808_);
v___y_3738_ = v___y_3805_;
v___y_3739_ = v_fileName_3806_;
v___y_3740_ = v___y_3804_;
v___y_3741_ = v___x_3809_;
goto v___jp_3737_;
}
}
v___jp_3810_:
{
if (lean_obj_tag(v___y_3812_) == 1)
{
lean_object* v_val_3813_; 
v_val_3813_ = lean_ctor_get(v___y_3812_, 0);
lean_inc(v_val_3813_);
v___y_3804_ = v___y_3811_;
v___y_3805_ = v___y_3812_;
v_fileName_3806_ = v_val_3813_;
goto v___jp_3803_;
}
else
{
if (v_useStdin_3330_ == 0)
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
lean_dec(v___y_3812_);
lean_dec(v___y_3811_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3814_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__18));
v___x_3815_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3814_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v___x_3816_; 
lean_dec_ref_known(v___x_3815_, 1);
v___x_3816_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3419_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3824_; 
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3824_ == 0)
{
lean_object* v_unused_3825_; 
v_unused_3825_ = lean_ctor_get(v___x_3816_, 0);
lean_dec(v_unused_3825_);
v___x_3818_ = v___x_3816_;
v_isShared_3819_ = v_isSharedCheck_3824_;
goto v_resetjp_3817_;
}
else
{
lean_dec(v___x_3816_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3824_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3820_; lean_object* v___x_3822_; 
v___x_3820_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3819_ == 0)
{
lean_ctor_set(v___x_3818_, 0, v___x_3820_);
v___x_3822_ = v___x_3818_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3820_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
v_a_3826_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3816_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3816_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
else
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3841_; 
v_a_3834_ = lean_ctor_get(v___x_3815_, 0);
v_isSharedCheck_3841_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3841_ == 0)
{
v___x_3836_ = v___x_3815_;
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3815_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3841_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3839_; 
if (v_isShared_3837_ == 0)
{
v___x_3839_ = v___x_3836_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3840_; 
v_reuseFailAlloc_3840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3840_, 0, v_a_3834_);
v___x_3839_ = v_reuseFailAlloc_3840_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
return v___x_3839_;
}
}
}
}
else
{
lean_object* v___x_3842_; 
v___x_3842_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__19));
v___y_3804_ = v___y_3811_;
v___y_3805_ = v___y_3812_;
v_fileName_3806_ = v___x_3842_;
goto v___jp_3803_;
}
}
}
v___jp_3843_:
{
uint8_t v___x_3846_; 
v___x_3846_ = l_List_isEmpty___redArg(v___y_3844_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3847_; lean_object* v___x_3848_; 
lean_dec(v___y_3845_);
lean_dec(v___y_3844_);
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3847_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__18));
v___x_3848_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3847_);
if (lean_obj_tag(v___x_3848_) == 0)
{
lean_object* v___x_3849_; 
lean_dec_ref_known(v___x_3848_, 1);
v___x_3849_ = l___private_Lean_Shell_0__Lean_displayHelp(v___x_3419_);
if (lean_obj_tag(v___x_3849_) == 0)
{
lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3857_; 
v_isSharedCheck_3857_ = !lean_is_exclusive(v___x_3849_);
if (v_isSharedCheck_3857_ == 0)
{
lean_object* v_unused_3858_; 
v_unused_3858_ = lean_ctor_get(v___x_3849_, 0);
lean_dec(v_unused_3858_);
v___x_3851_ = v___x_3849_;
v_isShared_3852_ = v_isSharedCheck_3857_;
goto v_resetjp_3850_;
}
else
{
lean_dec(v___x_3849_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3857_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3853_; lean_object* v___x_3855_; 
v___x_3853_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v___x_3853_);
v___x_3855_ = v___x_3851_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3853_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
else
{
lean_object* v_a_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3866_; 
v_a_3859_ = lean_ctor_get(v___x_3849_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3849_);
if (v_isSharedCheck_3866_ == 0)
{
v___x_3861_ = v___x_3849_;
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_a_3859_);
lean_dec(v___x_3849_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3866_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
lean_object* v___x_3864_; 
if (v_isShared_3862_ == 0)
{
v___x_3864_ = v___x_3861_;
goto v_reusejp_3863_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v_a_3859_);
v___x_3864_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3863_;
}
v_reusejp_3863_:
{
return v___x_3864_;
}
}
}
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3874_; 
v_a_3867_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3869_ = v___x_3848_;
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3848_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
else
{
v___y_3811_ = v___y_3844_;
v___y_3812_ = v___y_3845_;
goto v___jp_3810_;
}
}
v___jp_3875_:
{
if (v_run_3345_ == 0)
{
v___y_3844_ = v_snd_3878_;
v___y_3845_ = v_fst_3877_;
goto v___jp_3843_;
}
else
{
if (v___y_3876_ == 0)
{
v___y_3811_ = v_snd_3878_;
v___y_3812_ = v_fst_3877_;
goto v___jp_3810_;
}
else
{
v___y_3844_ = v_snd_3878_;
v___y_3845_ = v_fst_3877_;
goto v___jp_3843_;
}
}
}
v___jp_3879_:
{
if (lean_obj_tag(v_args_3277_) == 0)
{
lean_object* v___x_3881_; 
v___x_3881_ = lean_box(0);
v___y_3876_ = v___y_3880_;
v_fst_3877_ = v___x_3881_;
v_snd_3878_ = v_args_3277_;
goto v___jp_3875_;
}
else
{
lean_object* v_head_3882_; lean_object* v_tail_3883_; lean_object* v___x_3884_; 
v_head_3882_ = lean_ctor_get(v_args_3277_, 0);
lean_inc(v_head_3882_);
v_tail_3883_ = lean_ctor_get(v_args_3277_, 1);
lean_inc(v_tail_3883_);
lean_dec_ref_known(v_args_3277_, 2);
v___x_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3884_, 0, v_head_3882_);
v___y_3876_ = v___y_3880_;
v_fst_3877_ = v___x_3884_;
v_snd_3878_ = v_tail_3883_;
goto v___jp_3875_;
}
}
v___jp_3885_:
{
switch(v_component_3327_)
{
case 0:
{
lean_dec_ref(v_forwardedArgs_3326_);
if (v_onlyDeps_3331_ == 0)
{
v___y_3880_ = v_onlyDeps_3331_;
goto v___jp_3879_;
}
else
{
if (v_depsJson_3333_ == 0)
{
v___y_3880_ = v_depsJson_3333_;
goto v___jp_3879_;
}
else
{
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
if (v_useStdin_3330_ == 0)
{
lean_object* v___x_3886_; 
v___x_3886_ = lean_array_mk(v_args_3277_);
v_fns_3285_ = v___x_3886_;
goto v___jp_3284_;
}
else
{
lean_object* v___x_3887_; lean_object* v___x_3888_; 
lean_dec(v_args_3277_);
v___x_3887_ = lean_get_stdin();
v___x_3888_ = l_IO_FS_Stream_lines(v___x_3887_);
if (lean_obj_tag(v___x_3888_) == 0)
{
lean_object* v_a_3889_; 
v_a_3889_ = lean_ctor_get(v___x_3888_, 0);
lean_inc(v_a_3889_);
lean_dec_ref_known(v___x_3888_, 1);
v_fns_3285_ = v_a_3889_;
goto v___jp_3284_;
}
else
{
lean_object* v_a_3890_; lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3897_; 
v_a_3890_ = lean_ctor_get(v___x_3888_, 0);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3888_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3892_ = v___x_3888_;
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
else
{
lean_inc(v_a_3890_);
lean_dec(v___x_3888_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3897_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3895_; 
if (v_isShared_3893_ == 0)
{
v___x_3895_ = v___x_3892_;
goto v_reusejp_3894_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v_a_3890_);
v___x_3895_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3894_;
}
v_reusejp_3894_:
{
return v___x_3895_;
}
}
}
}
}
}
}
case 1:
{
lean_object* v___x_3898_; lean_object* v___x_3899_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_leanOpts_3325_);
lean_dec(v_args_3277_);
v___x_3898_ = lean_array_to_list(v_forwardedArgs_3326_);
v___x_3899_ = l_Lean_Server_Watchdog_watchdogMain(v___x_3898_);
return v___x_3899_;
}
default: 
{
lean_object* v___x_3900_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_forwardedArgs_3326_);
lean_dec(v_args_3277_);
v___x_3900_ = l_Lean_Server_FileWorker_workerMain(v_leanOpts_3325_);
return v___x_3900_;
}
}
}
v___jp_3901_:
{
lean_object* v___x_3902_; lean_object* v_timeout_3903_; lean_object* v___x_3904_; uint8_t v___x_3905_; 
v___x_3902_ = l___private_Lean_Shell_0__Lean_timeout;
v_timeout_3903_ = l_Lean_Option_get___at___00__private_Lean_Shell_0__Lean_emitZig_spec__1(v_leanOpts_3325_, v___x_3902_);
v___x_3904_ = lean_unsigned_to_nat(0u);
v___x_3905_ = lean_nat_dec_eq(v_timeout_3903_, v___x_3904_);
if (v___x_3905_ == 0)
{
size_t v___x_3906_; size_t v___x_3907_; size_t v___x_3908_; lean_object* v___x_3909_; 
v___x_3906_ = lean_usize_of_nat(v_timeout_3903_);
lean_dec(v_timeout_3903_);
v___x_3907_ = ((size_t)1000ULL);
v___x_3908_ = lean_usize_mul(v___x_3906_, v___x_3907_);
v___x_3909_ = lean_internal_set_max_heartbeat(v___x_3908_);
goto v___jp_3885_;
}
else
{
lean_dec(v_timeout_3903_);
goto v___jp_3885_;
}
}
}
else
{
lean_object* v___x_3919_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_forwardedArgs_3326_);
lean_dec_ref(v_leanOpts_3325_);
lean_dec(v_args_3277_);
v___x_3919_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; lean_object* v___x_3921_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
lean_inc(v_a_3920_);
lean_dec_ref_known(v___x_3919_, 1);
v___x_3921_ = l_Lean_getLibDir(v_a_3920_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3923_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
v___x_3923_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_3922_);
if (lean_obj_tag(v___x_3923_) == 0)
{
lean_object* v___x_3925_; uint8_t v_isShared_3926_; uint8_t v_isSharedCheck_3931_; 
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3923_);
if (v_isSharedCheck_3931_ == 0)
{
lean_object* v_unused_3932_; 
v_unused_3932_ = lean_ctor_get(v___x_3923_, 0);
lean_dec(v_unused_3932_);
v___x_3925_ = v___x_3923_;
v_isShared_3926_ = v_isSharedCheck_3931_;
goto v_resetjp_3924_;
}
else
{
lean_dec(v___x_3923_);
v___x_3925_ = lean_box(0);
v_isShared_3926_ = v_isSharedCheck_3931_;
goto v_resetjp_3924_;
}
v_resetjp_3924_:
{
lean_object* v___x_3927_; lean_object* v___x_3929_; 
v___x_3927_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3926_ == 0)
{
lean_ctor_set(v___x_3925_, 0, v___x_3927_);
v___x_3929_ = v___x_3925_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
else
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3940_; 
v_a_3933_ = lean_ctor_get(v___x_3923_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3923_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3935_ = v___x_3923_;
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3923_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3933_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
else
{
lean_object* v_a_3941_; lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3948_; 
v_a_3941_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3948_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3948_ == 0)
{
v___x_3943_ = v___x_3921_;
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
else
{
lean_inc(v_a_3941_);
lean_dec(v___x_3921_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3948_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3946_; 
if (v_isShared_3944_ == 0)
{
v___x_3946_ = v___x_3943_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3947_; 
v_reuseFailAlloc_3947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3947_, 0, v_a_3941_);
v___x_3946_ = v_reuseFailAlloc_3947_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
return v___x_3946_;
}
}
}
}
else
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
v_a_3949_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3956_ == 0)
{
v___x_3951_ = v___x_3919_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3919_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_a_3949_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
return v___x_3954_;
}
}
}
}
}
else
{
lean_object* v___x_3957_; 
lean_dec(v_incrHeaderSaveFileName_x3f_3348_);
lean_dec(v_incrLoadFileName_x3f_3347_);
lean_dec(v_incrSaveFileName_x3f_3346_);
lean_dec_ref(v_errorOnKinds_3343_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec(v_bcFileName_x3f_3340_);
lean_dec(v_cFileName_x3f_3339_);
lean_dec(v_ileanFileName_x3f_3338_);
lean_dec(v_oleanFileName_x3f_3337_);
lean_dec(v_setupFileName_x3f_3336_);
lean_dec(v_rootDir_x3f_3335_);
lean_dec_ref(v_forwardedArgs_3326_);
lean_dec_ref(v_leanOpts_3325_);
lean_dec(v_args_3277_);
v___x_3957_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3959_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
lean_inc(v_a_3958_);
lean_dec_ref_known(v___x_3957_, 1);
v___x_3959_ = l_IO_println___at___00__private_Lean_Shell_0__Lean_shellMain_spec__3(v_a_3958_);
if (lean_obj_tag(v___x_3959_) == 0)
{
lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3967_; 
v_isSharedCheck_3967_ = !lean_is_exclusive(v___x_3959_);
if (v_isSharedCheck_3967_ == 0)
{
lean_object* v_unused_3968_; 
v_unused_3968_ = lean_ctor_get(v___x_3959_, 0);
lean_dec(v_unused_3968_);
v___x_3961_ = v___x_3959_;
v_isShared_3962_ = v_isSharedCheck_3967_;
goto v_resetjp_3960_;
}
else
{
lean_dec(v___x_3959_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3967_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3963_; lean_object* v___x_3965_; 
v___x_3963_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3962_ == 0)
{
lean_ctor_set(v___x_3961_, 0, v___x_3963_);
v___x_3965_ = v___x_3961_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v___x_3963_);
v___x_3965_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
return v___x_3965_;
}
}
}
else
{
lean_object* v_a_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3976_; 
v_a_3969_ = lean_ctor_get(v___x_3959_, 0);
v_isSharedCheck_3976_ = !lean_is_exclusive(v___x_3959_);
if (v_isSharedCheck_3976_ == 0)
{
v___x_3971_ = v___x_3959_;
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_a_3969_);
lean_dec(v___x_3959_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3976_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3974_; 
if (v_isShared_3972_ == 0)
{
v___x_3974_ = v___x_3971_;
goto v_reusejp_3973_;
}
else
{
lean_object* v_reuseFailAlloc_3975_; 
v_reuseFailAlloc_3975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3975_, 0, v_a_3969_);
v___x_3974_ = v_reuseFailAlloc_3975_;
goto v_reusejp_3973_;
}
v_reusejp_3973_:
{
return v___x_3974_;
}
}
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
v_a_3977_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3957_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3957_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
v___jp_3280_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_mk_io_user_error(v_a_3281_);
v___x_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
v___jp_3284_:
{
lean_object* v___x_3286_; 
v___x_3286_ = l_Lean_printImportsJson(v_fns_3285_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3294_; 
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3294_ == 0)
{
lean_object* v_unused_3295_; 
v_unused_3295_ = lean_ctor_get(v___x_3286_, 0);
lean_dec(v_unused_3295_);
v___x_3288_ = v___x_3286_;
v_isShared_3289_ = v_isSharedCheck_3294_;
goto v_resetjp_3287_;
}
else
{
lean_dec(v___x_3286_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3294_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3290_; lean_object* v___x_3292_; 
v___x_3290_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v___x_3290_);
v___x_3292_ = v___x_3288_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3290_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
else
{
lean_object* v_a_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3303_; 
v_a_3296_ = lean_ctor_get(v___x_3286_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3286_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3298_ = v___x_3286_;
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
else
{
lean_inc(v_a_3296_);
lean_dec(v___x_3286_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3301_; 
if (v_isShared_3299_ == 0)
{
v___x_3301_ = v___x_3298_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_a_3296_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
v___jp_3304_:
{
lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
v___x_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3305_);
return v___x_3306_;
}
v___jp_3307_:
{
uint8_t v___x_3308_; lean_object* v___x_3309_; 
v___x_3308_ = 0;
v___x_3309_ = lean_io_exit(v___x_3308_);
return v___x_3309_;
}
v___jp_3310_:
{
lean_object* v___x_3312_; uint8_t v___x_3313_; 
v___x_3312_ = lean_display_cumulative_profiling_times();
v___x_3313_ = lean_uint8_once(&l___private_Lean_Shell_0__Lean_shellMain___closed__0, &l___private_Lean_Shell_0__Lean_shellMain___closed__0_once, _init_l___private_Lean_Shell_0__Lean_shellMain___closed__0);
if (v___x_3313_ == 0)
{
if (lean_obj_tag(v___y_3311_) == 0)
{
if (v___x_3313_ == 0)
{
uint8_t v___x_3314_; lean_object* v___x_3315_; 
v___x_3314_ = 1;
v___x_3315_ = lean_io_exit(v___x_3314_);
return v___x_3315_;
}
else
{
goto v___jp_3307_;
}
}
else
{
lean_dec_ref_known(v___y_3311_, 1);
goto v___jp_3307_;
}
}
else
{
if (lean_obj_tag(v___y_3311_) == 0)
{
goto v___jp_3304_;
}
else
{
lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3323_; 
v_isSharedCheck_3323_ = !lean_is_exclusive(v___y_3311_);
if (v_isSharedCheck_3323_ == 0)
{
lean_object* v_unused_3324_; 
v_unused_3324_ = lean_ctor_get(v___y_3311_, 0);
lean_dec(v_unused_3324_);
v___x_3317_ = v___y_3311_;
v_isShared_3318_ = v_isSharedCheck_3323_;
goto v_resetjp_3316_;
}
else
{
lean_dec(v___y_3311_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3323_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
if (v___x_3313_ == 0)
{
lean_del_object(v___x_3317_);
goto v___jp_3304_;
}
else
{
lean_object* v___x_3319_; lean_object* v___x_3321_; 
v___x_3319_ = l___private_Lean_Shell_0__Lean_ShellOptions_process___boxed__const__1;
if (v_isShared_3318_ == 0)
{
lean_ctor_set_tag(v___x_3317_, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3319_);
v___x_3321_ = v___x_3317_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v___x_3319_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
return v___x_3321_;
}
}
}
}
}
}
v___jp_3349_:
{
if (lean_obj_tag(v_zigFileName_x3f_3341_) == 1)
{
lean_object* v_val_3353_; uint8_t v___x_3354_; lean_object* v___x_3355_; 
v_val_3353_ = lean_ctor_get(v_zigFileName_x3f_3341_, 0);
lean_inc(v_val_3353_);
lean_dec_ref_known(v_zigFileName_x3f_3341_, 1);
v___x_3354_ = 1;
v___x_3355_ = lean_io_prim_handle_mk(v_val_3353_, v___x_3354_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v_a_3356_; lean_object* v___f_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_dec(v_val_3353_);
v_a_3356_ = lean_ctor_get(v___x_3355_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3355_, 1);
v___f_3357_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_shellMain___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3357_, 0, v___y_3351_);
lean_closure_set(v___f_3357_, 1, v___y_3350_);
lean_closure_set(v___f_3357_, 2, v_a_3356_);
v___x_3358_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__1));
v___x_3359_ = lean_box(0);
v___x_3360_ = l_Lean_profileitIOUnsafe___redArg(v___x_3358_, v_leanOpts_3325_, v___f_3357_, v___x_3359_);
lean_dec_ref(v_leanOpts_3325_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_dec_ref_known(v___x_3360_, 1);
v___y_3311_ = v___y_3352_;
goto v___jp_3310_;
}
else
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3368_; 
lean_dec(v___y_3352_);
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3363_ = v___x_3360_;
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3360_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
else
{
lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
lean_dec_ref_known(v___x_3355_, 1);
lean_dec(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
lean_dec_ref(v_leanOpts_3325_);
v___x_3369_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__2));
v___x_3370_ = lean_string_append(v___x_3369_, v_val_3353_);
lean_dec(v_val_3353_);
v___x_3371_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_checkOptArg___closed__1));
v___x_3372_ = lean_string_append(v___x_3370_, v___x_3371_);
v___x_3373_ = l_IO_eprintln___at___00__private_Lean_Shell_0__Lean_shellMain_spec__0(v___x_3372_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3381_; 
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3381_ == 0)
{
lean_object* v_unused_3382_; 
v_unused_3382_ = lean_ctor_get(v___x_3373_, 0);
lean_dec(v_unused_3382_);
v___x_3375_ = v___x_3373_;
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
else
{
lean_dec(v___x_3373_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3377_; lean_object* v___x_3379_; 
v___x_3377_ = l___private_Lean_Shell_0__Lean_ShellOptions_process_liftIO___redArg___boxed__const__1;
if (v_isShared_3376_ == 0)
{
lean_ctor_set(v___x_3375_, 0, v___x_3377_);
v___x_3379_ = v___x_3375_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v___x_3377_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
else
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3390_; 
v_a_3383_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3390_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3390_ == 0)
{
v___x_3385_ = v___x_3373_;
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3373_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3390_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3388_; 
if (v_isShared_3386_ == 0)
{
v___x_3388_ = v___x_3385_;
goto v_reusejp_3387_;
}
else
{
lean_object* v_reuseFailAlloc_3389_; 
v_reuseFailAlloc_3389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3389_, 0, v_a_3383_);
v___x_3388_ = v_reuseFailAlloc_3389_;
goto v_reusejp_3387_;
}
v_reusejp_3387_:
{
return v___x_3388_;
}
}
}
}
}
else
{
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec_ref(v_leanOpts_3325_);
v___y_3311_ = v___y_3352_;
goto v___jp_3310_;
}
}
v___jp_3391_:
{
if (lean_obj_tag(v_bcFileName_x3f_3340_) == 1)
{
lean_object* v_val_3397_; lean_object* v___x_3398_; 
v_val_3397_ = lean_ctor_get(v_bcFileName_x3f_3340_, 0);
lean_inc(v_val_3397_);
lean_dec_ref_known(v_bcFileName_x3f_3340_, 1);
v___x_3398_ = lean_init_llvm();
if (lean_obj_tag(v___x_3398_) == 0)
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
lean_dec_ref_known(v___x_3398_, 1);
v___x_3399_ = ((lean_object*)(l___private_Lean_Shell_0__Lean_shellMain___closed__3));
v___x_3400_ = lean_alloc_closure((void*)(l___private_Lean_Shell_0__Lean_emitLLVM___boxed), 4, 3);
lean_closure_set(v___x_3400_, 0, v___y_3395_);
lean_closure_set(v___x_3400_, 1, v___y_3394_);
lean_closure_set(v___x_3400_, 2, v_val_3397_);
v___x_3401_ = lean_box(0);
v___x_3402_ = l_Lean_profileitIOUnsafe___redArg(v___x_3399_, v_leanOpts_3325_, v___x_3400_, v___x_3401_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_dec_ref_known(v___x_3402_, 1);
v___y_3350_ = v___y_3393_;
v___y_3351_ = v___y_3392_;
v___y_3352_ = v___y_3396_;
goto v___jp_3349_;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3402_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3402_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec(v_val_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec(v_zigFileName_x3f_3341_);
lean_dec_ref(v_leanOpts_3325_);
v_a_3411_ = lean_ctor_get(v___x_3398_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3398_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3398_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3398_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
else
{
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec(v_bcFileName_x3f_3340_);
v___y_3350_ = v___y_3393_;
v___y_3351_ = v___y_3392_;
v___y_3352_ = v___y_3396_;
goto v___jp_3349_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Shell_0__Lean_shellMain___boxed(lean_object* v_args_3985_, lean_object* v_opts_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = lean_shell_main(v_args_3985_, v_opts_3986_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(lean_object* v_val_3989_, lean_object* v_inst_3990_, lean_object* v_R_3991_, lean_object* v_a_3992_, lean_object* v_b_3993_, lean_object* v_c_3994_){
_start:
{
lean_object* v___x_3995_; 
v___x_3995_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___redArg(v_val_3989_, v_a_3992_, v_b_3993_);
return v___x_3995_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2___boxed(lean_object* v_val_3996_, lean_object* v_inst_3997_, lean_object* v_R_3998_, lean_object* v_a_3999_, lean_object* v_b_4000_, lean_object* v_c_4001_){
_start:
{
lean_object* v_res_4002_; 
v_res_4002_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Shell_0__Lean_shellMain_spec__2(v_val_3996_, v_inst_3997_, v_R_3998_, v_a_3999_, v_b_4000_, v_c_4001_);
lean_dec(v_b_4000_);
lean_dec_ref(v_val_3996_);
return v_res_4002_;
}
}
lean_object* runtime_initialize_Lean_Elab_Frontend(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Watchdog(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_FileWorker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitC(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitZig(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR(uint8_t builtin);
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
res = runtime_initialize_Lean_Compiler_IR(builtin);
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
lean_object* initialize_Lean_Compiler_IR(uint8_t builtin);
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
res = initialize_Lean_Compiler_IR(builtin);
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
