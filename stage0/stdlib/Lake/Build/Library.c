// Lean compiler output
// Module: Lake.Build.Library
// Imports: public import Lake.Config.FacetConfig import Lake.Build.Common import Lake.Build.Targets import Lake.Build.Job.Register import Lake.Build.Target.Fetch import Lake.Build.Infos import Lake.Util.Proc
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
extern lean_object* l_Lake_instDataKindFilePath;
uint8_t l_Lake_instDecidableEqVerbosity(uint8_t, uint8_t);
extern lean_object* l_Lake_LeanLib_modulesFacet;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
extern uint8_t l_System_Platform_isOSX;
extern uint8_t l_System_Platform_isWindows;
lean_object* lean_io_getenv(lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_LeanLib_libName(lean_object*);
lean_object* l_Lake_nameToStaticLib(lean_object*, uint8_t);
lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_ModuleFacet_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
lean_object* l_Lake_nameToSharedLib(lean_object*, uint8_t);
uint8_t l_Lake_LeanLib_isPlugin(lean_object*);
lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_dynlibFacet;
extern lean_object* l_Lake_ExternLib_keyword;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_sharedFacet;
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_transImportsFacet;
extern lean_object* l_Lake_Module_keyword;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Target_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_instDataKindUnit;
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_defaultFacet;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_LeanLib_getModuleArray(lean_object*);
extern lean_object* l_Lake_Module_importsFacet;
lean_object* lean_io_wait(lean_object*);
lean_object* lean_task_pure(lean_object*);
extern lean_object* l_Lake_Module_leanArtsFacet;
lean_object* l_Lake_Job_mix___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_leanArtsFacet;
lean_object* l_Lake_mkRelPathString(lean_object*);
extern lean_object* l_Lake_LeanLib_staticFacet;
extern lean_object* l_Lake_LeanLib_staticExportFacet;
extern lean_object* l_Lake_Package_extraDepFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_extraDepFacet;
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ": some modules have bad imports"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_leanArtsFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "libtool"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "LEAN_ZIG_TARGET"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__9 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "objs"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object**);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (without exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " (with exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "type mismatch in target '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "': expected '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "', got "};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t, lean_object*, uint8_t, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_staticFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticExportFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticExportFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_staticExportFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0 = (const lean_object*)&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":shared"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_sharedFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_sharedFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ":extraDep"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_extraDepFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_extraDepFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_extraDepFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_extraDepFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_defaultFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_defaultFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_defaultFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_defaultFacetConfig;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__1;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__2;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__3;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__4;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__5;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__6;
LEAN_EXPORT lean_object* l_Lake_LeanLib_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initLibraryFacetConfigs;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; lean_object* v_name_6_; lean_object* v_name_7_; uint8_t v___x_8_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_name_6_ = lean_ctor_get(v_key_4_, 1);
v_name_7_ = lean_ctor_get(v_a_1_, 1);
v___x_8_ = lean_name_eq(v_name_6_, v_name_7_);
if (v___x_8_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec_ref(v_a_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_14_; uint64_t v___x_15_; 
v___x_14_ = lean_unsigned_to_nat(1723u);
v___x_15_ = lean_uint64_of_nat(v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
if (lean_obj_tag(v_x_17_) == 0)
{
return v_x_16_;
}
else
{
lean_object* v_key_18_; lean_object* v_value_19_; lean_object* v_tail_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_47_; 
v_key_18_ = lean_ctor_get(v_x_17_, 0);
v_value_19_ = lean_ctor_get(v_x_17_, 1);
v_tail_20_ = lean_ctor_get(v_x_17_, 2);
v_isSharedCheck_47_ = !lean_is_exclusive(v_x_17_);
if (v_isSharedCheck_47_ == 0)
{
v___x_22_ = v_x_17_;
v_isShared_23_ = v_isSharedCheck_47_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_tail_20_);
lean_inc(v_value_19_);
lean_inc(v_key_18_);
lean_dec(v_x_17_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_47_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v_name_24_; lean_object* v___x_25_; uint64_t v___y_27_; 
v_name_24_ = lean_ctor_get(v_key_18_, 1);
v___x_25_ = lean_array_get_size(v_x_16_);
if (lean_obj_tag(v_name_24_) == 0)
{
uint64_t v___x_45_; 
v___x_45_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0);
v___y_27_ = v___x_45_;
goto v___jp_26_;
}
else
{
uint64_t v_hash_46_; 
v_hash_46_ = lean_ctor_get_uint64(v_name_24_, sizeof(void*)*2);
v___y_27_ = v_hash_46_;
goto v___jp_26_;
}
v___jp_26_:
{
uint64_t v___x_28_; uint64_t v___x_29_; uint64_t v_fold_30_; uint64_t v___x_31_; uint64_t v___x_32_; uint64_t v___x_33_; size_t v___x_34_; size_t v___x_35_; size_t v___x_36_; size_t v___x_37_; size_t v___x_38_; lean_object* v___x_39_; lean_object* v___x_41_; 
v___x_28_ = 32ULL;
v___x_29_ = lean_uint64_shift_right(v___y_27_, v___x_28_);
v_fold_30_ = lean_uint64_xor(v___y_27_, v___x_29_);
v___x_31_ = 16ULL;
v___x_32_ = lean_uint64_shift_right(v_fold_30_, v___x_31_);
v___x_33_ = lean_uint64_xor(v_fold_30_, v___x_32_);
v___x_34_ = lean_uint64_to_usize(v___x_33_);
v___x_35_ = lean_usize_of_nat(v___x_25_);
v___x_36_ = ((size_t)1ULL);
v___x_37_ = lean_usize_sub(v___x_35_, v___x_36_);
v___x_38_ = lean_usize_land(v___x_34_, v___x_37_);
v___x_39_ = lean_array_uget_borrowed(v_x_16_, v___x_38_);
lean_inc(v___x_39_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 2, v___x_39_);
v___x_41_ = v___x_22_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_key_18_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_value_19_);
lean_ctor_set(v_reuseFailAlloc_44_, 2, v___x_39_);
v___x_41_ = v_reuseFailAlloc_44_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; 
v___x_42_ = lean_array_uset(v_x_16_, v___x_38_, v___x_41_);
v_x_16_ = v___x_42_;
v_x_17_ = v_tail_20_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object* v_i_48_, lean_object* v_source_49_, lean_object* v_target_50_){
_start:
{
lean_object* v___x_51_; uint8_t v___x_52_; 
v___x_51_ = lean_array_get_size(v_source_49_);
v___x_52_ = lean_nat_dec_lt(v_i_48_, v___x_51_);
if (v___x_52_ == 0)
{
lean_dec_ref(v_source_49_);
lean_dec(v_i_48_);
return v_target_50_;
}
else
{
lean_object* v_es_53_; lean_object* v___x_54_; lean_object* v_source_55_; lean_object* v_target_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v_es_53_ = lean_array_fget(v_source_49_, v_i_48_);
v___x_54_ = lean_box(0);
v_source_55_ = lean_array_fset(v_source_49_, v_i_48_, v___x_54_);
v_target_56_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_target_50_, v_es_53_);
v___x_57_ = lean_unsigned_to_nat(1u);
v___x_58_ = lean_nat_add(v_i_48_, v___x_57_);
lean_dec(v_i_48_);
v_i_48_ = v___x_58_;
v_source_49_ = v_source_55_;
v_target_50_ = v_target_56_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object* v_data_60_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v_nbuckets_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_61_ = lean_array_get_size(v_data_60_);
v___x_62_ = lean_unsigned_to_nat(2u);
v_nbuckets_63_ = lean_nat_mul(v___x_61_, v___x_62_);
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = lean_box(0);
v___x_66_ = lean_mk_array(v_nbuckets_63_, v___x_65_);
v___x_67_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v___x_64_, v_data_60_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object* v_m_68_, lean_object* v_a_69_, lean_object* v_b_70_){
_start:
{
lean_object* v_size_71_; lean_object* v_buckets_72_; lean_object* v_name_73_; lean_object* v___x_74_; uint64_t v___y_76_; 
v_size_71_ = lean_ctor_get(v_m_68_, 0);
v_buckets_72_ = lean_ctor_get(v_m_68_, 1);
v_name_73_ = lean_ctor_get(v_a_69_, 1);
v___x_74_ = lean_array_get_size(v_buckets_72_);
if (lean_obj_tag(v_name_73_) == 0)
{
uint64_t v___x_113_; 
v___x_113_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0);
v___y_76_ = v___x_113_;
goto v___jp_75_;
}
else
{
uint64_t v_hash_114_; 
v_hash_114_ = lean_ctor_get_uint64(v_name_73_, sizeof(void*)*2);
v___y_76_ = v_hash_114_;
goto v___jp_75_;
}
v___jp_75_:
{
uint64_t v___x_77_; uint64_t v___x_78_; uint64_t v_fold_79_; uint64_t v___x_80_; uint64_t v___x_81_; uint64_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; size_t v___x_87_; lean_object* v_bkt_88_; uint8_t v___x_89_; 
v___x_77_ = 32ULL;
v___x_78_ = lean_uint64_shift_right(v___y_76_, v___x_77_);
v_fold_79_ = lean_uint64_xor(v___y_76_, v___x_78_);
v___x_80_ = 16ULL;
v___x_81_ = lean_uint64_shift_right(v_fold_79_, v___x_80_);
v___x_82_ = lean_uint64_xor(v_fold_79_, v___x_81_);
v___x_83_ = lean_uint64_to_usize(v___x_82_);
v___x_84_ = lean_usize_of_nat(v___x_74_);
v___x_85_ = ((size_t)1ULL);
v___x_86_ = lean_usize_sub(v___x_84_, v___x_85_);
v___x_87_ = lean_usize_land(v___x_83_, v___x_86_);
v_bkt_88_ = lean_array_uget_borrowed(v_buckets_72_, v___x_87_);
v___x_89_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_69_, v_bkt_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_110_; 
lean_inc_ref(v_buckets_72_);
lean_inc(v_size_71_);
v_isSharedCheck_110_ = !lean_is_exclusive(v_m_68_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; lean_object* v_unused_112_; 
v_unused_111_ = lean_ctor_get(v_m_68_, 1);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_m_68_, 0);
lean_dec(v_unused_112_);
v___x_91_ = v_m_68_;
v_isShared_92_ = v_isSharedCheck_110_;
goto v_resetjp_90_;
}
else
{
lean_dec(v_m_68_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_110_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v_size_x27_94_; lean_object* v___x_95_; lean_object* v_buckets_x27_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_93_ = lean_unsigned_to_nat(1u);
v_size_x27_94_ = lean_nat_add(v_size_71_, v___x_93_);
lean_dec(v_size_71_);
lean_inc(v_bkt_88_);
v___x_95_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_95_, 0, v_a_69_);
lean_ctor_set(v___x_95_, 1, v_b_70_);
lean_ctor_set(v___x_95_, 2, v_bkt_88_);
v_buckets_x27_96_ = lean_array_uset(v_buckets_72_, v___x_87_, v___x_95_);
v___x_97_ = lean_unsigned_to_nat(4u);
v___x_98_ = lean_nat_mul(v_size_x27_94_, v___x_97_);
v___x_99_ = lean_unsigned_to_nat(3u);
v___x_100_ = lean_nat_div(v___x_98_, v___x_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_array_get_size(v_buckets_x27_96_);
v___x_102_ = lean_nat_dec_le(v___x_100_, v___x_101_);
lean_dec(v___x_100_);
if (v___x_102_ == 0)
{
lean_object* v_val_103_; lean_object* v___x_105_; 
v_val_103_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_buckets_x27_96_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v_val_103_);
lean_ctor_set(v___x_91_, 0, v_size_x27_94_);
v___x_105_ = v___x_91_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_size_x27_94_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_val_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
else
{
lean_object* v___x_108_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v_buckets_x27_96_);
lean_ctor_set(v___x_91_, 0, v_size_x27_94_);
v___x_108_ = v___x_91_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_size_x27_94_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_buckets_x27_96_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
else
{
lean_dec(v_b_70_);
lean_dec_ref(v_a_69_);
return v_m_68_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object* v_m_115_, lean_object* v_a_116_){
_start:
{
lean_object* v_buckets_117_; lean_object* v_name_118_; lean_object* v___x_119_; uint64_t v___y_121_; 
v_buckets_117_ = lean_ctor_get(v_m_115_, 1);
v_name_118_ = lean_ctor_get(v_a_116_, 1);
v___x_119_ = lean_array_get_size(v_buckets_117_);
if (lean_obj_tag(v_name_118_) == 0)
{
uint64_t v___x_135_; 
v___x_135_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg___closed__0);
v___y_121_ = v___x_135_;
goto v___jp_120_;
}
else
{
uint64_t v_hash_136_; 
v_hash_136_ = lean_ctor_get_uint64(v_name_118_, sizeof(void*)*2);
v___y_121_ = v_hash_136_;
goto v___jp_120_;
}
v___jp_120_:
{
uint64_t v___x_122_; uint64_t v___x_123_; uint64_t v_fold_124_; uint64_t v___x_125_; uint64_t v___x_126_; uint64_t v___x_127_; size_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_122_ = 32ULL;
v___x_123_ = lean_uint64_shift_right(v___y_121_, v___x_122_);
v_fold_124_ = lean_uint64_xor(v___y_121_, v___x_123_);
v___x_125_ = 16ULL;
v___x_126_ = lean_uint64_shift_right(v_fold_124_, v___x_125_);
v___x_127_ = lean_uint64_xor(v_fold_124_, v___x_126_);
v___x_128_ = lean_uint64_to_usize(v___x_127_);
v___x_129_ = lean_usize_of_nat(v___x_119_);
v___x_130_ = ((size_t)1ULL);
v___x_131_ = lean_usize_sub(v___x_129_, v___x_130_);
v___x_132_ = lean_usize_land(v___x_128_, v___x_131_);
v___x_133_ = lean_array_uget_borrowed(v_buckets_117_, v___x_132_);
v___x_134_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_116_, v___x_133_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object* v_m_137_, lean_object* v_a_138_){
_start:
{
uint8_t v_res_139_; lean_object* v_r_140_; 
v_res_139_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_137_, v_a_138_);
lean_dec_ref(v_a_138_);
lean_dec_ref(v_m_137_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object* v_self_141_, lean_object* v_root_142_, lean_object* v_col_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v_col_152_; lean_object* v___y_153_; lean_object* v_mods_155_; lean_object* v_modSet_156_; uint8_t v_hasErrors_157_; uint8_t v___x_158_; 
v_mods_155_ = lean_ctor_get(v_col_143_, 0);
v_modSet_156_ = lean_ctor_get(v_col_143_, 1);
v_hasErrors_157_ = lean_ctor_get_uint8(v_col_143_, sizeof(void*)*2);
v___x_158_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_modSet_156_, v_root_142_);
if (v___x_158_ == 0)
{
lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_219_; 
lean_inc_ref(v_modSet_156_);
lean_inc_ref(v_mods_155_);
v_isSharedCheck_219_ = !lean_is_exclusive(v_col_143_);
if (v_isSharedCheck_219_ == 0)
{
lean_object* v_unused_220_; lean_object* v_unused_221_; 
v_unused_220_ = lean_ctor_get(v_col_143_, 1);
lean_dec(v_unused_220_);
v_unused_221_ = lean_ctor_get(v_col_143_, 0);
lean_dec(v_unused_221_);
v___x_160_ = v_col_143_;
v_isShared_161_ = v_isSharedCheck_219_;
goto v_resetjp_159_;
}
else
{
lean_dec(v_col_143_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_219_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v_lib_162_; lean_object* v_pkg_163_; lean_object* v_name_164_; lean_object* v_keyName_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_lib_162_ = lean_ctor_get(v_root_142_, 0);
v_pkg_163_ = lean_ctor_get(v_lib_162_, 0);
v_name_164_ = lean_ctor_get(v_root_142_, 1);
v_keyName_165_ = lean_ctor_get(v_pkg_163_, 2);
v___x_166_ = lean_box(0);
lean_inc_ref_n(v_root_142_, 2);
v___x_167_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_modSet_156_, v_root_142_, v___x_166_);
v___x_168_ = l_Lake_Module_importsFacet;
lean_inc(v_name_164_);
lean_inc(v_keyName_165_);
v___x_169_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_169_, 0, v_keyName_165_);
lean_ctor_set(v___x_169_, 1, v_name_164_);
v___x_170_ = l_Lake_Module_keyword;
v___x_171_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
lean_ctor_set(v___x_171_, 2, v_root_142_);
lean_ctor_set(v___x_171_, 3, v___x_168_);
lean_inc_ref(v_a_144_);
lean_inc_ref(v_a_148_);
lean_inc(v_a_147_);
lean_inc(v_a_146_);
lean_inc(v_a_145_);
v___x_172_ = lean_apply_7(v_a_144_, v___x_171_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_, lean_box(0));
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v_a_174_; lean_object* v_task_175_; lean_object* v___x_176_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_173_);
v_a_174_ = lean_ctor_get(v___x_172_, 1);
lean_inc(v_a_174_);
lean_dec_ref_known(v___x_172_, 2);
v_task_175_ = lean_ctor_get(v_a_173_, 0);
lean_inc_ref(v_task_175_);
lean_dec(v_a_173_);
v___x_176_ = lean_io_wait(v_task_175_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v_col_179_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref_known(v___x_176_, 2);
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_167_);
v_col_179_ = v___x_160_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_196_; 
v_reuseFailAlloc_196_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_196_, 0, v_mods_155_);
lean_ctor_set(v_reuseFailAlloc_196_, 1, v___x_167_);
lean_ctor_set_uint8(v_reuseFailAlloc_196_, sizeof(void*)*2, v_hasErrors_157_);
v_col_179_ = v_reuseFailAlloc_196_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
size_t v_sz_180_; size_t v___x_181_; lean_object* v___x_182_; 
v_sz_180_ = lean_array_size(v_a_177_);
v___x_181_ = ((size_t)0ULL);
v___x_182_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_141_, v_a_177_, v_sz_180_, v___x_181_, v_col_179_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_174_);
lean_dec(v_a_177_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; lean_object* v_a_184_; lean_object* v_mods_185_; lean_object* v_modSet_186_; uint8_t v_hasErrors_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_195_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc(v_a_183_);
v_a_184_ = lean_ctor_get(v___x_182_, 1);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_182_, 2);
v_mods_185_ = lean_ctor_get(v_a_183_, 0);
v_modSet_186_ = lean_ctor_get(v_a_183_, 1);
v_hasErrors_187_ = lean_ctor_get_uint8(v_a_183_, sizeof(void*)*2);
v_isSharedCheck_195_ = !lean_is_exclusive(v_a_183_);
if (v_isSharedCheck_195_ == 0)
{
v___x_189_ = v_a_183_;
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_modSet_186_);
lean_inc(v_mods_185_);
lean_dec(v_a_183_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_193_; 
v___x_191_ = lean_array_push(v_mods_185_, v_root_142_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v___x_191_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_modSet_186_);
lean_ctor_set_uint8(v_reuseFailAlloc_194_, sizeof(void*)*2, v_hasErrors_187_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
v_col_152_ = v___x_193_;
v___y_153_ = v_a_184_;
goto v___jp_151_;
}
}
}
else
{
lean_dec_ref(v_root_142_);
return v___x_182_;
}
}
}
else
{
lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_207_; 
lean_dec_ref(v_a_144_);
lean_dec_ref(v_root_142_);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; lean_object* v_unused_209_; 
v_unused_208_ = lean_ctor_get(v___x_176_, 1);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v___x_176_, 0);
lean_dec(v_unused_209_);
v___x_198_ = v___x_176_;
v_isShared_199_ = v_isSharedCheck_207_;
goto v_resetjp_197_;
}
else
{
lean_dec(v___x_176_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_207_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
uint8_t v___x_200_; lean_object* v___x_202_; 
v___x_200_ = 1;
if (v_isShared_161_ == 0)
{
lean_ctor_set(v___x_160_, 1, v___x_167_);
v___x_202_ = v___x_160_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_mods_155_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v___x_167_);
v___x_202_ = v_reuseFailAlloc_206_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_204_; 
lean_ctor_set_uint8(v___x_202_, sizeof(void*)*2, v___x_200_);
if (v_isShared_199_ == 0)
{
lean_ctor_set_tag(v___x_198_, 0);
lean_ctor_set(v___x_198_, 1, v_a_174_);
lean_ctor_set(v___x_198_, 0, v___x_202_);
v___x_204_ = v___x_198_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_205_, 1, v_a_174_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
}
else
{
lean_object* v_a_210_; lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_218_; 
lean_dec_ref(v___x_167_);
lean_del_object(v___x_160_);
lean_dec_ref(v_mods_155_);
lean_dec_ref(v_a_144_);
lean_dec_ref(v_root_142_);
v_a_210_ = lean_ctor_get(v___x_172_, 0);
v_a_211_ = lean_ctor_get(v___x_172_, 1);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_218_ == 0)
{
v___x_213_ = v___x_172_;
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_inc(v_a_210_);
lean_dec(v___x_172_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_218_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v___x_216_; 
if (v_isShared_214_ == 0)
{
v___x_216_ = v___x_213_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_a_210_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v_a_211_);
v___x_216_ = v_reuseFailAlloc_217_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
return v___x_216_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_144_);
lean_dec_ref(v_root_142_);
v_col_152_ = v_col_143_;
v___y_153_ = v_a_149_;
goto v___jp_151_;
}
v___jp_151_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_154_, 0, v_col_152_);
lean_ctor_set(v___x_154_, 1, v___y_153_);
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object* v_self_222_, lean_object* v_as_223_, size_t v_sz_224_, size_t v_i_225_, lean_object* v_b_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_a_235_; lean_object* v_a_236_; uint8_t v___x_240_; 
v___x_240_ = lean_usize_dec_lt(v_i_225_, v_sz_224_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
lean_dec_ref(v___y_227_);
v___x_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_241_, 0, v_b_226_);
lean_ctor_set(v___x_241_, 1, v___y_232_);
return v___x_241_;
}
else
{
lean_object* v_a_242_; lean_object* v_lib_243_; lean_object* v_name_244_; lean_object* v_name_245_; uint8_t v___x_246_; 
v_a_242_ = lean_array_uget_borrowed(v_as_223_, v_i_225_);
v_lib_243_ = lean_ctor_get(v_a_242_, 0);
v_name_244_ = lean_ctor_get(v_lib_243_, 1);
v_name_245_ = lean_ctor_get(v_self_222_, 1);
v___x_246_ = lean_name_eq(v_name_244_, v_name_245_);
if (v___x_246_ == 0)
{
v_a_235_ = v_b_226_;
v_a_236_ = v___y_232_;
goto v___jp_234_;
}
else
{
lean_object* v___x_247_; 
lean_inc_ref(v___y_227_);
lean_inc(v_a_242_);
v___x_247_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_222_, v_a_242_, v_b_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v_a_249_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_248_);
v_a_249_ = lean_ctor_get(v___x_247_, 1);
lean_inc(v_a_249_);
lean_dec_ref_known(v___x_247_, 2);
v_a_235_ = v_a_248_;
v_a_236_ = v_a_249_;
goto v___jp_234_;
}
else
{
lean_dec_ref(v___y_227_);
return v___x_247_;
}
}
}
v___jp_234_:
{
size_t v___x_237_; size_t v___x_238_; 
v___x_237_ = ((size_t)1ULL);
v___x_238_ = lean_usize_add(v_i_225_, v___x_237_);
v_i_225_ = v___x_238_;
v_b_226_ = v_a_235_;
v___y_232_ = v_a_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object* v_self_250_, lean_object* v_as_251_, lean_object* v_sz_252_, lean_object* v_i_253_, lean_object* v_b_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
size_t v_sz_boxed_262_; size_t v_i_boxed_263_; lean_object* v_res_264_; 
v_sz_boxed_262_ = lean_unbox_usize(v_sz_252_);
lean_dec(v_sz_252_);
v_i_boxed_263_ = lean_unbox_usize(v_i_253_);
lean_dec(v_i_253_);
v_res_264_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_250_, v_as_251_, v_sz_boxed_262_, v_i_boxed_263_, v_b_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v_as_251_);
lean_dec_ref(v_self_250_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object* v_self_265_, lean_object* v_root_266_, lean_object* v_col_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_265_, v_root_266_, v_col_267_, v_a_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_, v_a_273_);
lean_dec_ref(v_a_272_);
lean_dec(v_a_271_);
lean_dec(v_a_270_);
lean_dec(v_a_269_);
lean_dec_ref(v_self_265_);
return v_res_275_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object* v_00_u03b2_276_, lean_object* v_m_277_, lean_object* v_a_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_277_, v_a_278_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object* v_00_u03b2_280_, lean_object* v_m_281_, lean_object* v_a_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(v_00_u03b2_280_, v_m_281_, v_a_282_);
lean_dec_ref(v_a_282_);
lean_dec_ref(v_m_281_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object* v_00_u03b2_285_, lean_object* v_m_286_, lean_object* v_a_287_, lean_object* v_b_288_){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_m_286_, v_a_287_, v_b_288_);
return v___x_289_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object* v_00_u03b2_290_, lean_object* v_a_291_, lean_object* v_x_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_291_, v_x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_294_, lean_object* v_a_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(v_00_u03b2_294_, v_a_295_, v_x_296_);
lean_dec(v_x_296_);
lean_dec_ref(v_a_295_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object* v_00_u03b2_299_, lean_object* v_data_300_){
_start:
{
lean_object* v___x_301_; 
v___x_301_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_data_300_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_302_, lean_object* v_i_303_, lean_object* v_source_304_, lean_object* v_target_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v_i_303_, v_source_304_, v_target_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_307_, lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_x_308_, v_x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object* v_self_311_, lean_object* v_as_312_, size_t v_sz_313_, size_t v_i_314_, lean_object* v_b_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
uint8_t v___x_323_; 
v___x_323_ = lean_usize_dec_lt(v_i_314_, v_sz_313_);
if (v___x_323_ == 0)
{
lean_object* v___x_324_; 
lean_dec_ref(v___y_316_);
v___x_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_324_, 0, v_b_315_);
lean_ctor_set(v___x_324_, 1, v___y_321_);
return v___x_324_;
}
else
{
lean_object* v_a_325_; lean_object* v___x_326_; 
v_a_325_ = lean_array_uget_borrowed(v_as_312_, v_i_314_);
lean_inc_ref(v___y_316_);
lean_inc(v_a_325_);
v___x_326_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_311_, v_a_325_, v_b_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v_a_328_; size_t v___x_329_; size_t v___x_330_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_327_);
v_a_328_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_326_, 2);
v___x_329_ = ((size_t)1ULL);
v___x_330_ = lean_usize_add(v_i_314_, v___x_329_);
v_i_314_ = v___x_330_;
v_b_315_ = v_a_327_;
v___y_321_ = v_a_328_;
goto _start;
}
else
{
lean_dec_ref(v___y_316_);
return v___x_326_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object* v_self_332_, lean_object* v_as_333_, lean_object* v_sz_334_, lean_object* v_i_335_, lean_object* v_b_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
size_t v_sz_boxed_344_; size_t v_i_boxed_345_; lean_object* v_res_346_; 
v_sz_boxed_344_ = lean_unbox_usize(v_sz_334_);
lean_dec(v_sz_334_);
v_i_boxed_345_ = lean_unbox_usize(v_i_335_);
lean_dec(v_i_335_);
v_res_346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_332_, v_as_333_, v_sz_boxed_344_, v_i_boxed_345_, v_b_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
lean_dec(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v_as_333_);
lean_dec_ref(v_self_332_);
return v_res_346_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1));
v___x_350_ = l_Lake_BuildTrace_nil(v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object* v_self_352_, lean_object* v_col_353_, lean_object* v___x_354_, uint8_t v___x_355_, lean_object* v___x_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v___x_364_; 
lean_inc_ref(v_self_352_);
v___x_364_ = l_Lake_LeanLib_getModuleArray(v_self_352_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; size_t v_sz_366_; size_t v___x_367_; lean_object* v___x_368_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_364_, 1);
v_sz_366_ = lean_array_size(v_a_365_);
v___x_367_ = ((size_t)0ULL);
v___x_368_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_352_, v_a_365_, v_sz_366_, v___x_367_, v_col_353_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v_a_365_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_396_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
v_a_370_ = lean_ctor_get(v___x_368_, 1);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_396_ == 0)
{
v___x_372_ = v___x_368_;
v_isShared_373_ = v_isSharedCheck_396_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_inc(v_a_369_);
lean_dec(v___x_368_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_396_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v_mods_374_; uint8_t v_hasErrors_375_; lean_object* v___y_377_; 
v_mods_374_ = lean_ctor_get(v_a_369_, 0);
lean_inc_ref(v_mods_374_);
v_hasErrors_375_ = lean_ctor_get_uint8(v_a_369_, sizeof(void*)*2);
lean_dec(v_a_369_);
if (v_hasErrors_375_ == 0)
{
lean_dec_ref(v_self_352_);
v___y_377_ = v_a_370_;
goto v___jp_376_;
}
else
{
lean_object* v_name_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_name_389_ = lean_ctor_get(v_self_352_, 1);
lean_inc(v_name_389_);
lean_dec_ref(v_self_352_);
v___x_390_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_389_, v_hasErrors_375_);
v___x_391_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3));
v___x_392_ = lean_string_append(v___x_390_, v___x_391_);
v___x_393_ = 3;
v___x_394_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_394_, 0, v___x_392_);
lean_ctor_set_uint8(v___x_394_, sizeof(void*)*1, v___x_393_);
v___x_395_ = lean_array_push(v_a_370_, v___x_394_);
v___y_377_ = v___x_395_;
goto v___jp_376_;
}
v___jp_376_:
{
lean_object* v___x_378_; lean_object* v___x_379_; uint8_t v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_378_ = lean_mk_empty_array_with_capacity(v___x_354_);
v___x_379_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_380_ = 0;
v___x_381_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_382_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_382_, 0, v___x_378_);
lean_ctor_set(v___x_382_, 1, v___x_381_);
lean_ctor_set(v___x_382_, 2, v___x_354_);
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*3, v___x_380_);
lean_ctor_set_uint8(v___x_382_, sizeof(void*)*3 + 1, v___x_355_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 1, v___x_382_);
lean_ctor_set(v___x_372_, 0, v_mods_374_);
v___x_384_ = v___x_372_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_mods_374_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v___x_382_);
v___x_384_ = v_reuseFailAlloc_388_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_385_ = lean_task_pure(v___x_384_);
v___x_386_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_356_);
lean_ctor_set(v___x_386_, 2, v___x_379_);
lean_ctor_set_uint8(v___x_386_, sizeof(void*)*3, v___x_355_);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
lean_ctor_set(v___x_387_, 1, v___y_377_);
return v___x_387_;
}
}
}
}
else
{
lean_object* v_a_397_; lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_dec(v___x_356_);
lean_dec(v___x_354_);
lean_dec_ref(v_self_352_);
v_a_397_ = lean_ctor_get(v___x_368_, 0);
v_a_398_ = lean_ctor_get(v___x_368_, 1);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_368_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_inc(v_a_397_);
lean_dec(v___x_368_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_397_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
else
{
lean_object* v_a_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
lean_dec_ref(v___y_357_);
lean_dec(v___x_356_);
lean_dec(v___x_354_);
lean_dec_ref(v_col_353_);
lean_dec_ref(v_self_352_);
v_a_406_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_a_406_);
lean_dec_ref_known(v___x_364_, 1);
v___x_407_ = lean_io_error_to_string(v_a_406_);
v___x_408_ = 3;
v___x_409_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_409_, 0, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*1, v___x_408_);
v___x_410_ = lean_array_get_size(v___y_362_);
v___x_411_ = lean_array_push(v___y_362_, v___x_409_);
v___x_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object* v_self_413_, lean_object* v_col_414_, lean_object* v___x_415_, lean_object* v___x_416_, lean_object* v___x_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
uint8_t v___x_7761__boxed_425_; lean_object* v_res_426_; 
v___x_7761__boxed_425_ = lean_unbox(v___x_416_);
v_res_426_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(v_self_413_, v_col_414_, v___x_415_, v___x_7761__boxed_425_, v___x_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec(v___y_420_);
lean_dec(v___y_419_);
return v_res_426_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = lean_box(0);
v___x_430_ = lean_unsigned_to_nat(16u);
v___x_431_ = lean_mk_array(v___x_430_, v___x_429_);
return v___x_431_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1);
v___x_433_ = lean_unsigned_to_nat(0u);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3(void){
_start:
{
uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v_col_438_; 
v___x_435_ = 0;
v___x_436_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_437_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0));
v_col_438_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_col_438_, 0, v___x_437_);
lean_ctor_set(v_col_438_, 1, v___x_436_);
lean_ctor_set_uint8(v_col_438_, sizeof(void*)*2, v___x_435_);
return v_col_438_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object* v_self_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; lean_object* v_col_450_; lean_object* v___x_451_; lean_object* v___f_452_; lean_object* v___x_453_; 
v___x_447_ = lean_box(0);
v___x_448_ = lean_unsigned_to_nat(0u);
v___x_449_ = 0;
v_col_450_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3);
v___x_451_ = lean_box(v___x_449_);
v___f_452_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed), 12, 5);
lean_closure_set(v___f_452_, 0, v_self_439_);
lean_closure_set(v___f_452_, 1, v_col_450_);
lean_closure_set(v___f_452_, 2, v___x_448_);
lean_closure_set(v___f_452_, 3, v___x_451_);
lean_closure_set(v___f_452_, 4, v___x_447_);
v___x_453_ = l_Lake_ensureJob___redArg(v___x_447_, v___f_452_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object* v_self_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(v_self_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_);
lean_dec_ref(v_a_459_);
lean_dec(v_a_458_);
lean_dec(v_a_457_);
lean_dec(v_a_456_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t v_sz_463_, size_t v_i_464_, lean_object* v_bs_465_){
_start:
{
uint8_t v___x_466_; 
v___x_466_ = lean_usize_dec_lt(v_i_464_, v_sz_463_);
if (v___x_466_ == 0)
{
return v_bs_465_;
}
else
{
lean_object* v_v_467_; lean_object* v_name_468_; lean_object* v___x_469_; lean_object* v_bs_x27_470_; lean_object* v___x_471_; lean_object* v___x_472_; size_t v___x_473_; size_t v___x_474_; lean_object* v___x_475_; 
v_v_467_ = lean_array_uget_borrowed(v_bs_465_, v_i_464_);
v_name_468_ = lean_ctor_get(v_v_467_, 1);
lean_inc(v_name_468_);
v___x_469_ = lean_unsigned_to_nat(0u);
v_bs_x27_470_ = lean_array_uset(v_bs_465_, v_i_464_, v___x_469_);
v___x_471_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_468_, v___x_466_);
v___x_472_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
v___x_473_ = ((size_t)1ULL);
v___x_474_ = lean_usize_add(v_i_464_, v___x_473_);
v___x_475_ = lean_array_uset(v_bs_x27_470_, v_i_464_, v___x_472_);
v_i_464_ = v___x_474_;
v_bs_465_ = v___x_475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_477_, lean_object* v_i_478_, lean_object* v_bs_479_){
_start:
{
size_t v_sz_boxed_480_; size_t v_i_boxed_481_; lean_object* v_res_482_; 
v_sz_boxed_480_ = lean_unbox_usize(v_sz_477_);
lean_dec(v_sz_477_);
v_i_boxed_481_ = lean_unbox_usize(v_i_478_);
lean_dec(v_i_478_);
v_res_482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_boxed_480_, v_i_boxed_481_, v_bs_479_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object* v_a_483_){
_start:
{
size_t v_sz_484_; size_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v_sz_484_ = lean_array_size(v_a_483_);
v___x_485_ = ((size_t)0ULL);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_484_, v___x_485_, v_a_483_);
v___x_487_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object* v_as_489_, size_t v_i_490_, size_t v_stop_491_, lean_object* v_b_492_){
_start:
{
uint8_t v___x_493_; 
v___x_493_ = lean_usize_dec_eq(v_i_490_, v_stop_491_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; lean_object* v_name_495_; uint8_t v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; size_t v___x_501_; size_t v___x_502_; 
v___x_494_ = lean_array_uget_borrowed(v_as_489_, v_i_490_);
v_name_495_ = lean_ctor_get(v___x_494_, 1);
v___x_496_ = 1;
lean_inc(v_name_495_);
v___x_497_ = l_Lean_Name_toString(v_name_495_, v___x_496_);
v___x_498_ = lean_string_append(v_b_492_, v___x_497_);
lean_dec_ref(v___x_497_);
v___x_499_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_500_ = lean_string_append(v___x_498_, v___x_499_);
v___x_501_ = ((size_t)1ULL);
v___x_502_ = lean_usize_add(v_i_490_, v___x_501_);
v_i_490_ = v___x_502_;
v_b_492_ = v___x_500_;
goto _start;
}
else
{
return v_b_492_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object* v_as_504_, lean_object* v_i_505_, lean_object* v_stop_506_, lean_object* v_b_507_){
_start:
{
size_t v_i_boxed_508_; size_t v_stop_boxed_509_; lean_object* v_res_510_; 
v_i_boxed_508_ = lean_unbox_usize(v_i_505_);
lean_dec(v_i_505_);
v_stop_boxed_509_ = lean_unbox_usize(v_stop_506_);
lean_dec(v_stop_506_);
v_res_510_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_as_504_, v_i_boxed_508_, v_stop_boxed_509_, v_b_507_);
lean_dec_ref(v_as_504_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t v_fmt_511_, lean_object* v_a_512_){
_start:
{
lean_object* v___y_514_; 
if (v_fmt_511_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_521_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_522_ = lean_unsigned_to_nat(0u);
v___x_523_ = lean_array_get_size(v_a_512_);
v___x_524_ = lean_nat_dec_lt(v___x_522_, v___x_523_);
if (v___x_524_ == 0)
{
lean_dec_ref(v_a_512_);
v___y_514_ = v___x_521_;
goto v___jp_513_;
}
else
{
uint8_t v___x_525_; 
v___x_525_ = lean_nat_dec_le(v___x_523_, v___x_523_);
if (v___x_525_ == 0)
{
if (v___x_524_ == 0)
{
lean_dec_ref(v_a_512_);
v___y_514_ = v___x_521_;
goto v___jp_513_;
}
else
{
size_t v___x_526_; size_t v___x_527_; lean_object* v___x_528_; 
v___x_526_ = ((size_t)0ULL);
v___x_527_ = lean_usize_of_nat(v___x_523_);
v___x_528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_a_512_, v___x_526_, v___x_527_, v___x_521_);
lean_dec_ref(v_a_512_);
v___y_514_ = v___x_528_;
goto v___jp_513_;
}
}
else
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = ((size_t)0ULL);
v___x_530_ = lean_usize_of_nat(v___x_523_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_a_512_, v___x_529_, v___x_530_, v___x_521_);
lean_dec_ref(v_a_512_);
v___y_514_ = v___x_531_;
goto v___jp_513_;
}
}
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = l_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(v_a_512_);
v___x_533_ = l_Lean_Json_compress(v___x_532_);
return v___x_533_;
}
v___jp_513_:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_515_ = lean_unsigned_to_nat(1u);
v___x_516_ = lean_unsigned_to_nat(0u);
v___x_517_ = lean_string_utf8_byte_size(v___y_514_);
lean_inc_ref(v___y_514_);
v___x_518_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_518_, 0, v___y_514_);
lean_ctor_set(v___x_518_, 1, v___x_516_);
lean_ctor_set(v___x_518_, 2, v___x_517_);
v___x_519_ = l_String_Slice_Pos_prevn(v___x_518_, v___x_517_, v___x_515_);
lean_dec_ref_known(v___x_518_, 3);
v___x_520_ = lean_string_utf8_extract(v___y_514_, v___x_516_, v___x_519_);
lean_dec(v___x_519_);
lean_dec_ref(v___y_514_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object* v_fmt_534_, lean_object* v_a_535_){
_start:
{
uint8_t v_fmt_boxed_536_; lean_object* v_res_537_; 
v_fmt_boxed_536_ = lean_unbox(v_fmt_534_);
v_res_537_ = l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(v_fmt_boxed_536_, v_a_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(lean_object* v_as_551_, size_t v_i_552_, size_t v_stop_553_, lean_object* v_b_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
uint8_t v___x_562_; 
v___x_562_ = lean_usize_dec_eq(v_i_552_, v_stop_553_);
if (v___x_562_ == 0)
{
lean_object* v___x_563_; lean_object* v_lib_564_; lean_object* v_pkg_565_; lean_object* v_name_566_; lean_object* v_keyName_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_563_ = lean_array_uget_borrowed(v_as_551_, v_i_552_);
v_lib_564_ = lean_ctor_get(v___x_563_, 0);
v_pkg_565_ = lean_ctor_get(v_lib_564_, 0);
v_name_566_ = lean_ctor_get(v___x_563_, 1);
v_keyName_567_ = lean_ctor_get(v_pkg_565_, 2);
v___x_568_ = l_Lake_Module_leanArtsFacet;
lean_inc(v_name_566_);
lean_inc(v_keyName_567_);
v___x_569_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_569_, 0, v_keyName_567_);
lean_ctor_set(v___x_569_, 1, v_name_566_);
v___x_570_ = l_Lake_Module_keyword;
lean_inc(v___x_563_);
v___x_571_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
lean_ctor_set(v___x_571_, 2, v___x_563_);
lean_ctor_set(v___x_571_, 3, v___x_568_);
lean_inc_ref(v___y_555_);
lean_inc_ref(v___y_559_);
lean_inc(v___y_558_);
lean_inc(v___y_557_);
lean_inc(v___y_556_);
v___x_572_ = lean_apply_7(v___y_555_, v___x_571_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, lean_box(0));
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v_a_574_; lean_object* v___x_575_; size_t v___x_576_; size_t v___x_577_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
v_a_574_ = lean_ctor_get(v___x_572_, 1);
lean_inc(v_a_574_);
lean_dec_ref_known(v___x_572_, 2);
v___x_575_ = l_Lake_Job_mix___redArg(v_b_554_, v_a_573_);
v___x_576_ = ((size_t)1ULL);
v___x_577_ = lean_usize_add(v_i_552_, v___x_576_);
v_i_552_ = v___x_577_;
v_b_554_ = v___x_575_;
v___y_560_ = v_a_574_;
goto _start;
}
else
{
lean_object* v_a_579_; lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_587_; 
lean_dec_ref(v___y_555_);
lean_dec_ref(v_b_554_);
v_a_579_ = lean_ctor_get(v___x_572_, 0);
v_a_580_ = lean_ctor_get(v___x_572_, 1);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_587_ == 0)
{
v___x_582_ = v___x_572_;
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_inc(v_a_579_);
lean_dec(v___x_572_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_587_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_583_ == 0)
{
v___x_585_ = v___x_582_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_a_579_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_a_580_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
}
else
{
lean_object* v___x_588_; 
lean_dec_ref(v___y_555_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v_b_554_);
lean_ctor_set(v___x_588_, 1, v___y_560_);
return v___x_588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0___boxed(lean_object* v_as_589_, lean_object* v_i_590_, lean_object* v_stop_591_, lean_object* v_b_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
size_t v_i_boxed_600_; size_t v_stop_boxed_601_; lean_object* v_res_602_; 
v_i_boxed_600_ = lean_unbox_usize(v_i_590_);
lean_dec(v_i_590_);
v_stop_boxed_601_ = lean_unbox_usize(v_stop_591_);
lean_dec(v_stop_591_);
v_res_602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_as_589_, v_i_boxed_600_, v_stop_boxed_601_, v_b_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v_as_589_);
return v_res_602_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; uint8_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_607_ = 0;
v___x_608_ = 0;
v___x_609_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v___x_610_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_606_);
lean_ctor_set(v___x_610_, 2, v___x_605_);
lean_ctor_set_uint8(v___x_610_, sizeof(void*)*3, v___x_608_);
lean_ctor_set_uint8(v___x_610_, sizeof(void*)*3 + 1, v___x_607_);
return v___x_610_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_611_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1);
v___x_612_ = lean_box(0);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set(v___x_613_, 1, v___x_611_);
return v___x_613_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2);
v___x_615_ = lean_task_pure(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4(void){
_start:
{
uint8_t v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_616_ = 0;
v___x_617_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_618_ = lean_box(0);
v___x_619_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3);
v___x_620_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___x_618_);
lean_ctor_set(v___x_620_, 2, v___x_617_);
lean_ctor_set_uint8(v___x_620_, sizeof(void*)*3, v___x_616_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(lean_object* v_self_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_){
_start:
{
lean_object* v_pkg_629_; lean_object* v_name_630_; lean_object* v_keyName_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v_pkg_629_ = lean_ctor_get(v_self_621_, 0);
v_name_630_ = lean_ctor_get(v_self_621_, 1);
v_keyName_631_ = lean_ctor_get(v_pkg_629_, 2);
v___x_632_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_name_630_);
lean_inc(v_keyName_631_);
v___x_633_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_633_, 0, v_keyName_631_);
lean_ctor_set(v___x_633_, 1, v_name_630_);
v___x_634_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_635_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
lean_ctor_set(v___x_635_, 2, v_self_621_);
lean_ctor_set(v___x_635_, 3, v___x_632_);
lean_inc_ref(v_a_622_);
lean_inc_ref(v_a_626_);
lean_inc(v_a_625_);
lean_inc(v_a_624_);
lean_inc(v_a_623_);
v___x_636_ = lean_apply_7(v_a_622_, v___x_635_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, lean_box(0));
if (lean_obj_tag(v___x_636_) == 0)
{
lean_object* v_a_637_; lean_object* v_a_638_; lean_object* v___x_639_; 
v_a_637_ = lean_ctor_get(v___x_636_, 0);
lean_inc(v_a_637_);
v_a_638_ = lean_ctor_get(v___x_636_, 1);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_636_, 2);
v___x_639_ = l_Lake_Job_await___redArg(v_a_637_, v_a_638_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_662_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
v_a_641_ = lean_ctor_get(v___x_639_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_662_ == 0)
{
v___x_643_ = v___x_639_;
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_inc(v_a_640_);
lean_dec(v___x_639_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_662_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4);
v___x_647_ = lean_array_get_size(v_a_640_);
v___x_648_ = lean_nat_dec_lt(v___x_645_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_650_; 
lean_dec(v_a_640_);
lean_dec_ref(v_a_622_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v___x_646_);
v___x_650_ = v___x_643_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_646_);
lean_ctor_set(v_reuseFailAlloc_651_, 1, v_a_641_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
else
{
uint8_t v___x_652_; 
v___x_652_ = lean_nat_dec_le(v___x_647_, v___x_647_);
if (v___x_652_ == 0)
{
if (v___x_648_ == 0)
{
lean_object* v___x_654_; 
lean_dec(v_a_640_);
lean_dec_ref(v_a_622_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v___x_646_);
v___x_654_ = v___x_643_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v___x_646_);
lean_ctor_set(v_reuseFailAlloc_655_, 1, v_a_641_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
else
{
size_t v___x_656_; size_t v___x_657_; lean_object* v___x_658_; 
lean_del_object(v___x_643_);
v___x_656_ = ((size_t)0ULL);
v___x_657_ = lean_usize_of_nat(v___x_647_);
v___x_658_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_a_640_, v___x_656_, v___x_657_, v___x_646_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_641_);
lean_dec(v_a_640_);
return v___x_658_;
}
}
else
{
size_t v___x_659_; size_t v___x_660_; lean_object* v___x_661_; 
lean_del_object(v___x_643_);
v___x_659_ = ((size_t)0ULL);
v___x_660_ = lean_usize_of_nat(v___x_647_);
v___x_661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_a_640_, v___x_659_, v___x_660_, v___x_646_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_641_);
lean_dec(v_a_640_);
return v___x_661_;
}
}
}
}
else
{
lean_object* v_a_663_; lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec_ref(v_a_622_);
v_a_663_ = lean_ctor_get(v___x_639_, 0);
v_a_664_ = lean_ctor_get(v___x_639_, 1);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_639_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_inc(v_a_663_);
lean_dec(v___x_639_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_663_);
lean_ctor_set(v_reuseFailAlloc_670_, 1, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
else
{
lean_object* v_a_672_; lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_680_; 
lean_dec_ref(v_a_622_);
v_a_672_ = lean_ctor_get(v___x_636_, 0);
v_a_673_ = lean_ctor_get(v___x_636_, 1);
v_isSharedCheck_680_ = !lean_is_exclusive(v___x_636_);
if (v_isSharedCheck_680_ == 0)
{
v___x_675_ = v___x_636_;
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_inc(v_a_672_);
lean_dec(v___x_636_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_680_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_a_672_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_a_673_);
v___x_678_ = v_reuseFailAlloc_679_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
return v___x_678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed(lean_object* v_self_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(v_self_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec(v_a_684_);
lean_dec(v_a_683_);
return v_res_689_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_box(0);
v___x_691_ = l_Lean_Json_compress(v___x_690_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(uint8_t v_fmt_692_){
_start:
{
if (v_fmt_692_ == 0)
{
lean_object* v___x_693_; 
v___x_693_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
return v___x_693_;
}
else
{
lean_object* v___x_694_; 
v___x_694_ = lean_obj_once(&l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0, &l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0_once, _init_l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___boxed(lean_object* v_fmt_695_){
_start:
{
uint8_t v_fmt_boxed_696_; lean_object* v_res_697_; 
v_fmt_boxed_696_ = lean_unbox(v_fmt_695_);
v_res_697_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v_fmt_boxed_696_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(uint8_t v_fmt_698_, lean_object* v_a_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v_fmt_698_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___boxed(lean_object* v_fmt_701_, lean_object* v_a_702_){
_start:
{
uint8_t v_fmt_boxed_703_; lean_object* v_res_704_; 
v_fmt_boxed_703_ = lean_unbox(v_fmt_701_);
v_res_704_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(v_fmt_boxed_703_, v_a_702_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(uint8_t v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v___y_705_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
uint8_t v___y_68__boxed_710_; lean_object* v_res_711_; 
v___y_68__boxed_710_ = lean_unbox(v___y_708_);
v_res_711_ = l_Lake_LeanLib_leanArtsFacetConfig___lam__0(v___y_68__boxed_710_, v___y_709_);
return v_res_711_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_714_; uint8_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
v___f_714_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_715_ = 1;
v___x_716_ = l_Lake_instDataKindUnit;
v___x_717_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__1));
v___x_718_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_719_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_719_, 0, v___x_718_);
lean_ctor_set(v___x_719_, 1, v___x_717_);
lean_ctor_set(v___x_719_, 2, v___x_716_);
lean_ctor_set(v___x_719_, 3, v___f_714_);
lean_ctor_set_uint8(v___x_719_, sizeof(void*)*4, v___x_715_);
lean_ctor_set_uint8(v___x_719_, sizeof(void*)*4 + 1, v___x_715_);
return v___x_719_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig(void){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = lean_obj_once(&l_Lake_LeanLib_leanArtsFacetConfig___closed__2, &l_Lake_LeanLib_leanArtsFacetConfig___closed__2_once, _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__2);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object* v_a_721_, lean_object* v_x_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = l_Lake_ModuleFacet_fetch___redArg(v_x_722_, v_a_721_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object* v_a_731_, lean_object* v_x_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(v_a_731_, v_x_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec(v___y_735_);
lean_dec(v___y_734_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t v_shouldExport_741_, lean_object* v___x_742_, lean_object* v_bs_743_, lean_object* v_a_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_lib_752_; lean_object* v_config_753_; lean_object* v_nativeFacets_754_; lean_object* v___f_755_; lean_object* v___x_756_; lean_object* v___x_757_; size_t v_sz_758_; size_t v___x_759_; lean_object* v___x_242612__overap_760_; lean_object* v___x_761_; 
v_lib_752_ = lean_ctor_get(v_a_744_, 0);
v_config_753_ = lean_ctor_get(v_lib_752_, 2);
v_nativeFacets_754_ = lean_ctor_get(v_config_753_, 8);
lean_inc_ref(v_nativeFacets_754_);
v___f_755_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed), 9, 1);
lean_closure_set(v___f_755_, 0, v_a_744_);
v___x_756_ = lean_box(v_shouldExport_741_);
v___x_757_ = lean_apply_1(v_nativeFacets_754_, v___x_756_);
v_sz_758_ = lean_array_size(v___x_757_);
v___x_759_ = ((size_t)0ULL);
v___x_242612__overap_760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_742_, v___f_755_, v_sz_758_, v___x_759_, v___x_757_);
lean_inc_ref(v___y_749_);
lean_inc(v___y_748_);
lean_inc(v___y_747_);
lean_inc(v___y_746_);
v___x_761_ = lean_apply_7(v___x_242612__overap_760_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, lean_box(0));
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_a_762_; lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_771_; 
v_a_762_ = lean_ctor_get(v___x_761_, 0);
v_a_763_ = lean_ctor_get(v___x_761_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_771_ == 0)
{
v___x_765_ = v___x_761_;
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_inc(v_a_762_);
lean_dec(v___x_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_767_ = l_Array_append___redArg(v_bs_743_, v_a_762_);
lean_dec(v_a_762_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_767_);
v___x_769_ = v___x_765_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_a_763_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
else
{
lean_dec_ref(v_bs_743_);
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object* v_shouldExport_772_, lean_object* v___x_773_, lean_object* v_bs_774_, lean_object* v_a_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
uint8_t v_shouldExport_boxed_783_; lean_object* v_res_784_; 
v_shouldExport_boxed_783_ = lean_unbox(v_shouldExport_772_);
v_res_784_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(v_shouldExport_boxed_783_, v___x_773_, v_bs_774_, v_a_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec(v___y_778_);
lean_dec(v___y_777_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object* v___x_785_, lean_object* v_pkg_786_, lean_object* v_x_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lake_Target_fetchIn___redArg(v___x_785_, v_pkg_786_, v_x_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object* v___x_796_, lean_object* v_pkg_797_, lean_object* v_x_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(v___x_796_, v_pkg_797_, v_x_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec(v___y_801_);
lean_dec(v___y_800_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object* v_a_807_, lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_log_817_; uint8_t v_action_818_; uint8_t v_wantsRebuild_819_; lean_object* v_trace_820_; lean_object* v_buildTime_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v_log_817_ = lean_ctor_get(v___y_815_, 0);
v_action_818_ = lean_ctor_get_uint8(v___y_815_, sizeof(void*)*3);
v_wantsRebuild_819_ = lean_ctor_get_uint8(v___y_815_, sizeof(void*)*3 + 1);
v_trace_820_ = lean_ctor_get(v___y_815_, 1);
v_buildTime_821_ = lean_ctor_get(v___y_815_, 2);
v___x_822_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_823_ = lean_string_append(v___y_809_, v___x_822_);
v___x_824_ = lean_io_prim_handle_put_str(v_a_807_, v___x_823_);
lean_dec_ref(v___x_823_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_826_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
lean_dec_ref_known(v___x_824_, 1);
v___x_826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_826_, 0, v_a_825_);
lean_ctor_set(v___x_826_, 1, v___y_815_);
return v___x_826_;
}
else
{
lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_840_; 
lean_inc(v_buildTime_821_);
lean_inc_ref(v_trace_820_);
lean_inc_ref(v_log_817_);
v_isSharedCheck_840_ = !lean_is_exclusive(v___y_815_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; lean_object* v_unused_842_; lean_object* v_unused_843_; 
v_unused_841_ = lean_ctor_get(v___y_815_, 2);
lean_dec(v_unused_841_);
v_unused_842_ = lean_ctor_get(v___y_815_, 1);
lean_dec(v_unused_842_);
v_unused_843_ = lean_ctor_get(v___y_815_, 0);
lean_dec(v_unused_843_);
v___x_828_ = v___y_815_;
v_isShared_829_ = v_isSharedCheck_840_;
goto v_resetjp_827_;
}
else
{
lean_dec(v___y_815_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_840_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v_a_830_; lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
v_a_830_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v___x_824_, 1);
v___x_831_ = lean_io_error_to_string(v_a_830_);
v___x_832_ = 3;
v___x_833_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_833_, 0, v___x_831_);
lean_ctor_set_uint8(v___x_833_, sizeof(void*)*1, v___x_832_);
v___x_834_ = lean_array_get_size(v_log_817_);
v___x_835_ = lean_array_push(v_log_817_, v___x_833_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_835_);
v___x_837_ = v___x_828_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_835_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_trace_820_);
lean_ctor_set(v_reuseFailAlloc_839_, 2, v_buildTime_821_);
lean_ctor_set_uint8(v_reuseFailAlloc_839_, sizeof(void*)*3, v_action_818_);
lean_ctor_set_uint8(v_reuseFailAlloc_839_, sizeof(void*)*3 + 1, v_wantsRebuild_819_);
v___x_837_ = v_reuseFailAlloc_839_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_object* v___x_838_; 
v___x_838_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_834_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
return v___x_838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object* v_a_844_, lean_object* v_x_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(v_a_844_, v_x_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec(v_a_844_);
return v_res_854_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_861_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_862_ = lean_unsigned_to_nat(5u);
v___x_863_ = lean_mk_empty_array_with_capacity(v___x_862_);
v___x_864_ = lean_array_push(v___x_863_, v___x_861_);
return v___x_864_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_865_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3));
v___x_866_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5);
v___x_867_ = lean_array_push(v___x_866_, v___x_865_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t v_bootstrap_872_, lean_object* v___y_873_, lean_object* v_oFiles_874_, uint8_t v_shouldExport_875_, uint8_t v___x_876_, lean_object* v___x_877_, size_t v___x_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
uint8_t v___y_887_; lean_object* v___y_888_; lean_object* v_a_889_; lean_object* v___y_935_; uint8_t v___y_936_; lean_object* v___y_937_; 
if (v_bootstrap_872_ == 0)
{
lean_object* v_toContext_939_; lean_object* v_lakeEnv_940_; lean_object* v_lean_941_; lean_object* v_log_942_; uint8_t v_action_943_; uint8_t v_wantsRebuild_944_; lean_object* v_trace_945_; lean_object* v_buildTime_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_976_; 
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
v_toContext_939_ = lean_ctor_get(v___y_883_, 1);
v_lakeEnv_940_ = lean_ctor_get(v_toContext_939_, 0);
v_lean_941_ = lean_ctor_get(v_lakeEnv_940_, 1);
v_log_942_ = lean_ctor_get(v___y_884_, 0);
v_action_943_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3);
v_wantsRebuild_944_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3 + 1);
v_trace_945_ = lean_ctor_get(v___y_884_, 1);
v_buildTime_946_ = lean_ctor_get(v___y_884_, 2);
v_isSharedCheck_976_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_976_ == 0)
{
v___x_948_ = v___y_884_;
v_isShared_949_ = v_isSharedCheck_976_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_buildTime_946_);
lean_inc(v_trace_945_);
lean_inc(v_log_942_);
lean_dec(v___y_884_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_976_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v_ar_950_; lean_object* v___x_951_; 
v_ar_950_ = lean_ctor_get(v_lean_941_, 13);
lean_inc_ref(v_ar_950_);
v___x_951_ = l_Lake_compileStaticLib(v___y_873_, v_oFiles_874_, v_ar_950_, v_bootstrap_872_, v_log_942_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_963_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_a_953_ = lean_ctor_get(v___x_951_, 1);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_963_ == 0)
{
v___x_955_ = v___x_951_;
v_isShared_956_ = v_isSharedCheck_963_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_inc(v_a_952_);
lean_dec(v___x_951_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_963_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v_a_953_);
v___x_958_ = v___x_948_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_953_);
lean_ctor_set(v_reuseFailAlloc_962_, 1, v_trace_945_);
lean_ctor_set(v_reuseFailAlloc_962_, 2, v_buildTime_946_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3, v_action_943_);
lean_ctor_set_uint8(v_reuseFailAlloc_962_, sizeof(void*)*3 + 1, v_wantsRebuild_944_);
v___x_958_ = v_reuseFailAlloc_962_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
lean_object* v___x_960_; 
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 1, v___x_958_);
v___x_960_ = v___x_955_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_952_);
lean_ctor_set(v_reuseFailAlloc_961_, 1, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
else
{
lean_object* v_a_964_; lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_975_; 
v_a_964_ = lean_ctor_get(v___x_951_, 0);
v_a_965_ = lean_ctor_get(v___x_951_, 1);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_975_ == 0)
{
v___x_967_ = v___x_951_;
v_isShared_968_ = v_isSharedCheck_975_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_inc(v_a_964_);
lean_dec(v___x_951_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_975_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v_a_965_);
v___x_970_ = v___x_948_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_965_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v_trace_945_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v_buildTime_946_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, sizeof(void*)*3, v_action_943_);
lean_ctor_set_uint8(v_reuseFailAlloc_974_, sizeof(void*)*3 + 1, v_wantsRebuild_944_);
v___x_970_ = v_reuseFailAlloc_974_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_972_; 
if (v_isShared_968_ == 0)
{
lean_ctor_set(v___x_967_, 1, v___x_970_);
v___x_972_ = v___x_967_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_964_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
}
else
{
uint8_t v___x_977_; 
v___x_977_ = l_System_Platform_isOSX;
if (v___x_977_ == 0)
{
uint8_t v___x_978_; 
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
v___x_978_ = l_System_Platform_isWindows;
if (v___x_978_ == 0)
{
lean_object* v_toContext_979_; lean_object* v_lakeEnv_980_; lean_object* v_lean_981_; lean_object* v_log_982_; uint8_t v_action_983_; uint8_t v_wantsRebuild_984_; lean_object* v_trace_985_; lean_object* v_buildTime_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_1016_; 
v_toContext_979_ = lean_ctor_get(v___y_883_, 1);
v_lakeEnv_980_ = lean_ctor_get(v_toContext_979_, 0);
v_lean_981_ = lean_ctor_get(v_lakeEnv_980_, 1);
v_log_982_ = lean_ctor_get(v___y_884_, 0);
v_action_983_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3);
v_wantsRebuild_984_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3 + 1);
v_trace_985_ = lean_ctor_get(v___y_884_, 1);
v_buildTime_986_ = lean_ctor_get(v___y_884_, 2);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_988_ = v___y_884_;
v_isShared_989_ = v_isSharedCheck_1016_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_buildTime_986_);
lean_inc(v_trace_985_);
lean_inc(v_log_982_);
lean_dec(v___y_884_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_1016_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v_ar_990_; lean_object* v___x_991_; 
v_ar_990_ = lean_ctor_get(v_lean_981_, 13);
lean_inc_ref(v_ar_990_);
v___x_991_ = l_Lake_compileStaticLib(v___y_873_, v_oFiles_874_, v_ar_990_, v___x_978_, v_log_982_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1003_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_a_993_ = lean_ctor_get(v___x_991_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_995_ = v___x_991_;
v_isShared_996_ = v_isSharedCheck_1003_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1003_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_a_993_);
v___x_998_ = v___x_988_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_993_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_trace_985_);
lean_ctor_set(v_reuseFailAlloc_1002_, 2, v_buildTime_986_);
lean_ctor_set_uint8(v_reuseFailAlloc_1002_, sizeof(void*)*3, v_action_983_);
lean_ctor_set_uint8(v_reuseFailAlloc_1002_, sizeof(void*)*3 + 1, v_wantsRebuild_984_);
v___x_998_ = v_reuseFailAlloc_1002_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_1000_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 1, v___x_998_);
v___x_1000_ = v___x_995_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_992_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v___x_998_);
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
lean_object* v_a_1004_; lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1015_; 
v_a_1004_ = lean_ctor_get(v___x_991_, 0);
v_a_1005_ = lean_ctor_get(v___x_991_, 1);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1007_ = v___x_991_;
v_isShared_1008_ = v_isSharedCheck_1015_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_inc(v_a_1004_);
lean_dec(v___x_991_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1015_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_a_1005_);
v___x_1010_ = v___x_988_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1005_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v_trace_985_);
lean_ctor_set(v_reuseFailAlloc_1014_, 2, v_buildTime_986_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*3, v_action_983_);
lean_ctor_set_uint8(v_reuseFailAlloc_1014_, sizeof(void*)*3 + 1, v_wantsRebuild_984_);
v___x_1010_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1012_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 1, v___x_1010_);
v___x_1012_ = v___x_1007_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1004_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_1017_; lean_object* v_lakeEnv_1018_; lean_object* v_lean_1019_; lean_object* v_log_1020_; uint8_t v_action_1021_; uint8_t v_wantsRebuild_1022_; lean_object* v_trace_1023_; lean_object* v_buildTime_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1054_; 
v_toContext_1017_ = lean_ctor_get(v___y_883_, 1);
v_lakeEnv_1018_ = lean_ctor_get(v_toContext_1017_, 0);
v_lean_1019_ = lean_ctor_get(v_lakeEnv_1018_, 1);
v_log_1020_ = lean_ctor_get(v___y_884_, 0);
v_action_1021_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3);
v_wantsRebuild_1022_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3 + 1);
v_trace_1023_ = lean_ctor_get(v___y_884_, 1);
v_buildTime_1024_ = lean_ctor_get(v___y_884_, 2);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1026_ = v___y_884_;
v_isShared_1027_ = v_isSharedCheck_1054_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_buildTime_1024_);
lean_inc(v_trace_1023_);
lean_inc(v_log_1020_);
lean_dec(v___y_884_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1054_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v_ar_1028_; lean_object* v___x_1029_; 
v_ar_1028_ = lean_ctor_get(v_lean_1019_, 13);
lean_inc_ref(v_ar_1028_);
v___x_1029_ = l_Lake_compileStaticLib(v___y_873_, v_oFiles_874_, v_ar_1028_, v_shouldExport_875_, v_log_1020_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v_a_1030_; lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1041_; 
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
v_a_1031_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1033_ = v___x_1029_;
v_isShared_1034_ = v_isSharedCheck_1041_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_inc(v_a_1030_);
lean_dec(v___x_1029_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1041_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v_a_1031_);
v___x_1036_ = v___x_1026_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1031_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v_trace_1023_);
lean_ctor_set(v_reuseFailAlloc_1040_, 2, v_buildTime_1024_);
lean_ctor_set_uint8(v_reuseFailAlloc_1040_, sizeof(void*)*3, v_action_1021_);
lean_ctor_set_uint8(v_reuseFailAlloc_1040_, sizeof(void*)*3 + 1, v_wantsRebuild_1022_);
v___x_1036_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
lean_object* v___x_1038_; 
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 1, v___x_1036_);
v___x_1038_ = v___x_1033_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1030_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v___x_1036_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1053_; 
v_a_1042_ = lean_ctor_get(v___x_1029_, 0);
v_a_1043_ = lean_ctor_get(v___x_1029_, 1);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1045_ = v___x_1029_;
v_isShared_1046_ = v_isSharedCheck_1053_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_inc(v_a_1042_);
lean_dec(v___x_1029_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1053_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v_a_1043_);
v___x_1048_ = v___x_1026_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1043_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_trace_1023_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v_buildTime_1024_);
lean_ctor_set_uint8(v_reuseFailAlloc_1052_, sizeof(void*)*3, v_action_1021_);
lean_ctor_set_uint8(v_reuseFailAlloc_1052_, sizeof(void*)*3 + 1, v_wantsRebuild_1022_);
v___x_1048_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___x_1048_);
v___x_1050_ = v___x_1045_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1042_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v_log_1057_; uint8_t v_action_1058_; uint8_t v_wantsRebuild_1059_; lean_object* v_trace_1060_; lean_object* v_buildTime_1061_; uint8_t v___y_1063_; 
v___x_1055_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1056_ = lean_io_getenv(v___x_1055_);
v_log_1057_ = lean_ctor_get(v___y_884_, 0);
v_action_1058_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3);
v_wantsRebuild_1059_ = lean_ctor_get_uint8(v___y_884_, sizeof(void*)*3 + 1);
v_trace_1060_ = lean_ctor_get(v___y_884_, 1);
v_buildTime_1061_ = lean_ctor_get(v___y_884_, 2);
if (lean_obj_tag(v___x_1056_) == 0)
{
uint8_t v___x_1117_; 
v___x_1117_ = 0;
v___y_1063_ = v___x_1117_;
goto v___jp_1062_;
}
else
{
lean_dec_ref_known(v___x_1056_, 1);
if (v___x_977_ == 0)
{
v___y_1063_ = v___x_977_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1151_; 
lean_inc(v_buildTime_1061_);
lean_inc_ref(v_trace_1060_);
lean_inc_ref(v_log_1057_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_1151_ == 0)
{
lean_object* v_unused_1152_; lean_object* v_unused_1153_; lean_object* v_unused_1154_; 
v_unused_1152_ = lean_ctor_get(v___y_884_, 2);
lean_dec(v_unused_1152_);
v_unused_1153_ = lean_ctor_get(v___y_884_, 1);
lean_dec(v_unused_1153_);
v_unused_1154_ = lean_ctor_get(v___y_884_, 0);
lean_dec(v_unused_1154_);
v___x_1119_ = v___y_884_;
v_isShared_1120_ = v_isSharedCheck_1151_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v___y_884_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1151_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v_toContext_1121_; lean_object* v_lakeEnv_1122_; lean_object* v_lean_1123_; lean_object* v_ar_1124_; uint8_t v___x_1125_; lean_object* v___x_1126_; 
v_toContext_1121_ = lean_ctor_get(v___y_883_, 1);
v_lakeEnv_1122_ = lean_ctor_get(v_toContext_1121_, 0);
v_lean_1123_ = lean_ctor_get(v_lakeEnv_1122_, 1);
v_ar_1124_ = lean_ctor_get(v_lean_1123_, 13);
v___x_1125_ = 0;
lean_inc_ref(v_ar_1124_);
v___x_1126_ = l_Lake_compileStaticLib(v___y_873_, v_oFiles_874_, v_ar_1124_, v___x_1125_, v_log_1057_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1138_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
v_a_1128_ = lean_ctor_get(v___x_1126_, 1);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1130_ = v___x_1126_;
v_isShared_1131_ = v_isSharedCheck_1138_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_inc(v_a_1127_);
lean_dec(v___x_1126_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1138_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v_a_1128_);
v___x_1133_ = v___x_1119_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1128_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_trace_1060_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_buildTime_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3, v_action_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3 + 1, v_wantsRebuild_1059_);
v___x_1133_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1135_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 1, v___x_1133_);
v___x_1135_ = v___x_1130_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1127_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v___x_1133_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
else
{
lean_object* v_a_1139_; lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1150_; 
v_a_1139_ = lean_ctor_get(v___x_1126_, 0);
v_a_1140_ = lean_ctor_get(v___x_1126_, 1);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1142_ = v___x_1126_;
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_inc(v_a_1139_);
lean_dec(v___x_1126_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1150_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 0, v_a_1140_);
v___x_1145_ = v___x_1119_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1140_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_trace_1060_);
lean_ctor_set(v_reuseFailAlloc_1149_, 2, v_buildTime_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1149_, sizeof(void*)*3, v_action_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1149_, sizeof(void*)*3 + 1, v_wantsRebuild_1059_);
v___x_1145_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1147_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 1, v___x_1145_);
v___x_1147_ = v___x_1142_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1139_);
lean_ctor_set(v_reuseFailAlloc_1148_, 1, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
}
}
v___jp_1062_:
{
lean_object* v___x_1064_; 
lean_inc_ref(v___y_873_);
v___x_1064_ = l_Lake_createParentDirs(v___y_873_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v___x_1065_; lean_object* v___x_1066_; uint8_t v___x_1067_; lean_object* v___x_1068_; 
lean_dec_ref_known(v___x_1064_, 1);
v___x_1065_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__9));
lean_inc_ref(v___y_873_);
v___x_1066_ = l_System_FilePath_addExtension(v___y_873_, v___x_1065_);
v___x_1067_ = 1;
v___x_1068_ = lean_io_prim_handle_mk(v___x_1066_, v___x_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = l_Lake_EquipT_instMonad___redArg(v___x_877_);
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1072_ = lean_array_get_size(v_oFiles_874_);
v___x_1073_ = lean_nat_dec_lt(v___x_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_dec_ref(v___x_1070_);
lean_dec(v_a_1069_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v_oFiles_874_);
v___y_887_ = v___y_1063_;
v___y_888_ = v___x_1066_;
v_a_889_ = v___y_884_;
goto v___jp_886_;
}
else
{
lean_object* v___f_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; 
v___f_1074_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed), 10, 1);
lean_closure_set(v___f_1074_, 0, v_a_1069_);
v___x_1075_ = lean_box(0);
v___x_1076_ = lean_nat_dec_le(v___x_1072_, v___x_1072_);
if (v___x_1076_ == 0)
{
if (v___x_1073_ == 0)
{
lean_dec_ref(v___f_1074_);
lean_dec_ref(v___x_1070_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v_oFiles_874_);
v___y_887_ = v___y_1063_;
v___y_888_ = v___x_1066_;
v_a_889_ = v___y_884_;
goto v___jp_886_;
}
else
{
size_t v___x_1077_; lean_object* v___x_242779__overap_1078_; lean_object* v___x_1079_; 
v___x_1077_ = lean_usize_of_nat(v___x_1072_);
v___x_242779__overap_1078_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1070_, v___f_1074_, v_oFiles_874_, v___x_878_, v___x_1077_, v___x_1075_);
lean_inc_ref(v___y_883_);
lean_inc(v___y_882_);
lean_inc(v___y_881_);
lean_inc(v___y_880_);
v___x_1079_ = lean_apply_7(v___x_242779__overap_1078_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, lean_box(0));
v___y_935_ = v___x_1066_;
v___y_936_ = v___y_1063_;
v___y_937_ = v___x_1079_;
goto v___jp_934_;
}
}
else
{
size_t v___x_1080_; lean_object* v___x_242781__overap_1081_; lean_object* v___x_1082_; 
v___x_1080_ = lean_usize_of_nat(v___x_1072_);
v___x_242781__overap_1081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1070_, v___f_1074_, v_oFiles_874_, v___x_878_, v___x_1080_, v___x_1075_);
lean_inc_ref(v___y_883_);
lean_inc(v___y_882_);
lean_inc(v___y_881_);
lean_inc(v___y_880_);
v___x_1082_ = lean_apply_7(v___x_242781__overap_1081_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, lean_box(0));
v___y_935_ = v___x_1066_;
v___y_936_ = v___y_1063_;
v___y_937_ = v___x_1082_;
goto v___jp_934_;
}
}
}
else
{
lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1096_; 
lean_inc(v_buildTime_1061_);
lean_inc_ref(v_trace_1060_);
lean_inc_ref(v_log_1057_);
lean_dec_ref(v___x_1066_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v_oFiles_874_);
lean_dec_ref(v___y_873_);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_1096_ == 0)
{
lean_object* v_unused_1097_; lean_object* v_unused_1098_; lean_object* v_unused_1099_; 
v_unused_1097_ = lean_ctor_get(v___y_884_, 2);
lean_dec(v_unused_1097_);
v_unused_1098_ = lean_ctor_get(v___y_884_, 1);
lean_dec(v_unused_1098_);
v_unused_1099_ = lean_ctor_get(v___y_884_, 0);
lean_dec(v_unused_1099_);
v___x_1084_ = v___y_884_;
v_isShared_1085_ = v_isSharedCheck_1096_;
goto v_resetjp_1083_;
}
else
{
lean_dec(v___y_884_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1096_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v_a_1086_; lean_object* v___x_1087_; uint8_t v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
v_a_1086_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1086_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1087_ = lean_io_error_to_string(v_a_1086_);
v___x_1088_ = 3;
v___x_1089_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set_uint8(v___x_1089_, sizeof(void*)*1, v___x_1088_);
v___x_1090_ = lean_array_get_size(v_log_1057_);
v___x_1091_ = lean_array_push(v_log_1057_, v___x_1089_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1091_);
v___x_1093_ = v___x_1084_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1091_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v_trace_1060_);
lean_ctor_set(v_reuseFailAlloc_1095_, 2, v_buildTime_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1095_, sizeof(void*)*3, v_action_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1095_, sizeof(void*)*3 + 1, v_wantsRebuild_1059_);
v___x_1093_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1090_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
return v___x_1094_;
}
}
}
}
else
{
lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1113_; 
lean_inc(v_buildTime_1061_);
lean_inc_ref(v_trace_1060_);
lean_inc_ref(v_log_1057_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v_oFiles_874_);
lean_dec_ref(v___y_873_);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_1113_ == 0)
{
lean_object* v_unused_1114_; lean_object* v_unused_1115_; lean_object* v_unused_1116_; 
v_unused_1114_ = lean_ctor_get(v___y_884_, 2);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v___y_884_, 1);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v___y_884_, 0);
lean_dec(v_unused_1116_);
v___x_1101_ = v___y_884_;
v_isShared_1102_ = v_isSharedCheck_1113_;
goto v_resetjp_1100_;
}
else
{
lean_dec(v___y_884_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1113_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v_a_1103_; lean_object* v___x_1104_; uint8_t v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1064_, 1);
v___x_1104_ = lean_io_error_to_string(v_a_1103_);
v___x_1105_ = 3;
v___x_1106_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1106_, 0, v___x_1104_);
lean_ctor_set_uint8(v___x_1106_, sizeof(void*)*1, v___x_1105_);
v___x_1107_ = lean_array_get_size(v_log_1057_);
v___x_1108_ = lean_array_push(v_log_1057_, v___x_1106_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1108_);
v___x_1110_ = v___x_1101_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1108_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_trace_1060_);
lean_ctor_set(v_reuseFailAlloc_1112_, 2, v_buildTime_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*3, v_action_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1112_, sizeof(void*)*3 + 1, v_wantsRebuild_1059_);
v___x_1110_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1111_; 
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1107_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
return v___x_1111_;
}
}
}
}
}
}
v___jp_886_:
{
lean_object* v___x_890_; lean_object* v_log_891_; uint8_t v_action_892_; uint8_t v_wantsRebuild_893_; lean_object* v_trace_894_; lean_object* v_buildTime_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_933_; 
v___x_890_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
v_log_891_ = lean_ctor_get(v_a_889_, 0);
v_action_892_ = lean_ctor_get_uint8(v_a_889_, sizeof(void*)*3);
v_wantsRebuild_893_ = lean_ctor_get_uint8(v_a_889_, sizeof(void*)*3 + 1);
v_trace_894_ = lean_ctor_get(v_a_889_, 1);
v_buildTime_895_ = lean_ctor_get(v_a_889_, 2);
v_isSharedCheck_933_ = !lean_is_exclusive(v_a_889_);
if (v_isSharedCheck_933_ == 0)
{
v___x_897_ = v_a_889_;
v_isShared_898_ = v_isSharedCheck_933_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_buildTime_895_);
lean_inc(v_trace_894_);
lean_inc(v_log_891_);
lean_dec(v_a_889_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_933_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_899_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v___x_900_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4));
v___x_901_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6);
v___x_902_ = lean_array_push(v___x_901_, v___y_873_);
v___x_903_ = lean_array_push(v___x_902_, v___x_900_);
v___x_904_ = lean_array_push(v___x_903_, v___y_888_);
v___x_905_ = lean_box(0);
v___x_906_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7));
v___x_907_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_907_, 0, v___x_890_);
lean_ctor_set(v___x_907_, 1, v___x_899_);
lean_ctor_set(v___x_907_, 2, v___x_904_);
lean_ctor_set(v___x_907_, 3, v___x_905_);
lean_ctor_set(v___x_907_, 4, v___x_906_);
lean_ctor_set_uint8(v___x_907_, sizeof(void*)*5, v___x_876_);
lean_ctor_set_uint8(v___x_907_, sizeof(void*)*5 + 1, v___y_887_);
v___x_908_ = l_Lake_proc(v___x_907_, v___y_887_, v_log_891_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_920_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_a_910_ = lean_ctor_get(v___x_908_, 1);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_920_ == 0)
{
v___x_912_ = v___x_908_;
v_isShared_913_ = v_isSharedCheck_920_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_920_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v_a_910_);
v___x_915_ = v___x_897_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_910_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_trace_894_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v_buildTime_895_);
lean_ctor_set_uint8(v_reuseFailAlloc_919_, sizeof(void*)*3, v_action_892_);
lean_ctor_set_uint8(v_reuseFailAlloc_919_, sizeof(void*)*3 + 1, v_wantsRebuild_893_);
v___x_915_ = v_reuseFailAlloc_919_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_917_; 
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 1, v___x_915_);
v___x_917_ = v___x_912_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_909_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v___x_915_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
else
{
lean_object* v_a_921_; lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_932_; 
v_a_921_ = lean_ctor_get(v___x_908_, 0);
v_a_922_ = lean_ctor_get(v___x_908_, 1);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_932_ == 0)
{
v___x_924_ = v___x_908_;
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_inc(v_a_921_);
lean_dec(v___x_908_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_932_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v_a_922_);
v___x_927_ = v___x_897_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_922_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_trace_894_);
lean_ctor_set(v_reuseFailAlloc_931_, 2, v_buildTime_895_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*3, v_action_892_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*3 + 1, v_wantsRebuild_893_);
v___x_927_ = v_reuseFailAlloc_931_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_929_; 
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 1, v___x_927_);
v___x_929_ = v___x_924_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_921_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v___x_927_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
}
v___jp_934_:
{
if (lean_obj_tag(v___y_937_) == 0)
{
lean_object* v_a_938_; 
v_a_938_ = lean_ctor_get(v___y_937_, 1);
lean_inc(v_a_938_);
lean_dec_ref_known(v___y_937_, 2);
v___y_887_ = v___y_936_;
v___y_888_ = v___y_935_;
v_a_889_ = v_a_938_;
goto v___jp_886_;
}
else
{
lean_dec_ref(v___y_935_);
lean_dec_ref(v___y_873_);
return v___y_937_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object* v_bootstrap_1155_, lean_object* v___y_1156_, lean_object* v_oFiles_1157_, lean_object* v_shouldExport_1158_, lean_object* v___x_1159_, lean_object* v___x_1160_, lean_object* v___x_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_){
_start:
{
uint8_t v_bootstrap_boxed_1169_; uint8_t v_shouldExport_boxed_1170_; uint8_t v___x_243171__boxed_1171_; size_t v___x_243173__boxed_1172_; lean_object* v_res_1173_; 
v_bootstrap_boxed_1169_ = lean_unbox(v_bootstrap_1155_);
v_shouldExport_boxed_1170_ = lean_unbox(v_shouldExport_1158_);
v___x_243171__boxed_1171_ = lean_unbox(v___x_1159_);
v___x_243173__boxed_1172_ = lean_unbox_usize(v___x_1161_);
lean_dec(v___x_1161_);
v_res_1173_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(v_bootstrap_boxed_1169_, v___y_1156_, v_oFiles_1157_, v_shouldExport_boxed_1170_, v___x_243171__boxed_1171_, v___x_1160_, v___x_243173__boxed_1172_, v___y_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec(v___y_1163_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t v_bootstrap_1175_, lean_object* v___y_1176_, uint8_t v_shouldExport_1177_, uint8_t v___x_1178_, lean_object* v___x_1179_, size_t v___x_1180_, lean_object* v_oFiles_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___y_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1189_ = lean_box(v_bootstrap_1175_);
v___x_1190_ = lean_box(v_shouldExport_1177_);
v___x_1191_ = lean_box(v___x_1178_);
v___x_1192_ = lean_box_usize(v___x_1180_);
lean_inc_ref(v___y_1176_);
v___y_1193_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed), 14, 7);
lean_closure_set(v___y_1193_, 0, v___x_1189_);
lean_closure_set(v___y_1193_, 1, v___y_1176_);
lean_closure_set(v___y_1193_, 2, v_oFiles_1181_);
lean_closure_set(v___y_1193_, 3, v___x_1190_);
lean_closure_set(v___y_1193_, 4, v___x_1191_);
lean_closure_set(v___y_1193_, 5, v___x_1179_);
lean_closure_set(v___y_1193_, 6, v___x_1192_);
v___x_1194_ = 0;
v___x_1195_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1196_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1176_, v___y_1193_, v___x_1194_, v___x_1195_, v___x_1178_, v___x_1194_, v___x_1194_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1206_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
v_a_1198_ = lean_ctor_get(v___x_1196_, 1);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1200_ = v___x_1196_;
v_isShared_1201_ = v_isSharedCheck_1206_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_inc(v_a_1197_);
lean_dec(v___x_1196_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1206_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v_path_1202_; lean_object* v___x_1204_; 
v_path_1202_ = lean_ctor_get(v_a_1197_, 1);
lean_inc_ref(v_path_1202_);
lean_dec(v_a_1197_);
if (v_isShared_1201_ == 0)
{
lean_ctor_set(v___x_1200_, 0, v_path_1202_);
v___x_1204_ = v___x_1200_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_path_1202_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v_a_1198_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
v_a_1207_ = lean_ctor_get(v___x_1196_, 0);
v_a_1208_ = lean_ctor_get(v___x_1196_, 1);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1196_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_inc(v_a_1207_);
lean_dec(v___x_1196_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1207_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object* v_bootstrap_1216_, lean_object* v___y_1217_, lean_object* v_shouldExport_1218_, lean_object* v___x_1219_, lean_object* v___x_1220_, lean_object* v___x_1221_, lean_object* v_oFiles_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
uint8_t v_bootstrap_boxed_1230_; uint8_t v_shouldExport_boxed_1231_; uint8_t v___x_243679__boxed_1232_; size_t v___x_243681__boxed_1233_; lean_object* v_res_1234_; 
v_bootstrap_boxed_1230_ = lean_unbox(v_bootstrap_1216_);
v_shouldExport_boxed_1231_ = lean_unbox(v_shouldExport_1218_);
v___x_243679__boxed_1232_ = lean_unbox(v___x_1219_);
v___x_243681__boxed_1233_ = lean_unbox_usize(v___x_1221_);
lean_dec(v___x_1221_);
v_res_1234_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(v_bootstrap_boxed_1230_, v___y_1217_, v_shouldExport_boxed_1231_, v___x_243679__boxed_1232_, v___x_1220_, v___x_243681__boxed_1233_, v_oFiles_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec(v___y_1224_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object* v___x_1239_, lean_object* v___x_1240_, lean_object* v_config_1241_, lean_object* v_config_1242_, lean_object* v___x_1243_, lean_object* v___f_1244_, uint8_t v_shouldExport_1245_, uint8_t v___x_1246_, lean_object* v___x_1247_, lean_object* v___x_1248_, lean_object* v_dir_1249_, lean_object* v_self_1250_, lean_object* v___f_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
size_t v___y_1260_; lean_object* v___y_1261_; uint8_t v___y_1262_; lean_object* v___y_1263_; lean_object* v___y_1264_; lean_object* v___y_1265_; lean_object* v_a_1280_; lean_object* v_a_1281_; lean_object* v___y_1325_; lean_object* v___x_1337_; 
lean_inc_ref(v___y_1252_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc(v___y_1254_);
lean_inc(v___x_1240_);
v___x_1337_ = lean_apply_7(v___y_1252_, v___x_1239_, v___x_1240_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
if (lean_obj_tag(v___x_1337_) == 0)
{
lean_object* v_a_1338_; lean_object* v_a_1339_; lean_object* v___x_1340_; 
v_a_1338_ = lean_ctor_get(v___x_1337_, 0);
lean_inc(v_a_1338_);
v_a_1339_ = lean_ctor_get(v___x_1337_, 1);
lean_inc(v_a_1339_);
lean_dec_ref_known(v___x_1337_, 2);
v___x_1340_ = l_Lake_Job_await___redArg(v_a_1338_, v_a_1339_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v_a_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
v_a_1342_ = lean_ctor_get(v___x_1340_, 1);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1340_, 2);
v___x_1343_ = lean_unsigned_to_nat(0u);
v___x_1344_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_1345_ = lean_array_get_size(v_a_1341_);
v___x_1346_ = lean_nat_dec_lt(v___x_1343_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_dec(v_a_1341_);
lean_dec_ref(v___f_1251_);
v_a_1280_ = v___x_1344_;
v_a_1281_ = v_a_1342_;
goto v___jp_1279_;
}
else
{
uint8_t v___x_1347_; 
v___x_1347_ = lean_nat_dec_le(v___x_1345_, v___x_1345_);
if (v___x_1347_ == 0)
{
if (v___x_1346_ == 0)
{
lean_dec(v_a_1341_);
lean_dec_ref(v___f_1251_);
v_a_1280_ = v___x_1344_;
v_a_1281_ = v_a_1342_;
goto v___jp_1279_;
}
else
{
size_t v___x_1348_; size_t v___x_1349_; lean_object* v___x_242934__overap_1350_; lean_object* v___x_1351_; 
v___x_1348_ = ((size_t)0ULL);
v___x_1349_ = lean_usize_of_nat(v___x_1345_);
lean_inc_ref(v___x_1243_);
v___x_242934__overap_1350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1243_, v___f_1251_, v_a_1341_, v___x_1348_, v___x_1349_, v___x_1344_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc(v___y_1254_);
lean_inc(v___x_1240_);
lean_inc_ref(v___y_1252_);
v___x_1351_ = lean_apply_7(v___x_242934__overap_1350_, v___y_1252_, v___x_1240_, v___y_1254_, v___y_1255_, v___y_1256_, v_a_1342_, lean_box(0));
v___y_1325_ = v___x_1351_;
goto v___jp_1324_;
}
}
else
{
size_t v___x_1352_; size_t v___x_1353_; lean_object* v___x_242937__overap_1354_; lean_object* v___x_1355_; 
v___x_1352_ = ((size_t)0ULL);
v___x_1353_ = lean_usize_of_nat(v___x_1345_);
lean_inc_ref(v___x_1243_);
v___x_242937__overap_1354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1243_, v___f_1251_, v_a_1341_, v___x_1352_, v___x_1353_, v___x_1344_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc(v___y_1254_);
lean_inc(v___x_1240_);
lean_inc_ref(v___y_1252_);
v___x_1355_ = lean_apply_7(v___x_242937__overap_1354_, v___y_1252_, v___x_1240_, v___y_1254_, v___y_1255_, v___y_1256_, v_a_1342_, lean_box(0));
v___y_1325_ = v___x_1355_;
goto v___jp_1324_;
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v___y_1252_);
lean_dec_ref(v___f_1251_);
lean_dec_ref(v_self_1250_);
lean_dec_ref(v_dir_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___f_1244_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_config_1241_);
lean_dec(v___x_1240_);
v_a_1356_ = lean_ctor_get(v___x_1340_, 0);
v_a_1357_ = lean_ctor_get(v___x_1340_, 1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1340_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_inc(v_a_1356_);
lean_dec(v___x_1340_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1356_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
else
{
lean_object* v_a_1365_; lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec_ref(v___y_1252_);
lean_dec_ref(v___f_1251_);
lean_dec_ref(v_self_1250_);
lean_dec_ref(v_dir_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___f_1244_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_config_1241_);
lean_dec(v___x_1240_);
v_a_1365_ = lean_ctor_get(v___x_1337_, 0);
v_a_1366_ = lean_ctor_get(v___x_1337_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1337_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1337_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_inc(v_a_1365_);
lean_dec(v___x_1337_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1365_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
v___jp_1259_:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___f_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1266_ = lean_box(v___y_1262_);
v___x_1267_ = lean_box(v_shouldExport_1245_);
v___x_1268_ = lean_box(v___x_1246_);
v___x_1269_ = lean_box_usize(v___y_1260_);
v___f_1270_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed), 14, 6);
lean_closure_set(v___f_1270_, 0, v___x_1266_);
lean_closure_set(v___f_1270_, 1, v___y_1265_);
lean_closure_set(v___f_1270_, 2, v___x_1267_);
lean_closure_set(v___f_1270_, 3, v___x_1268_);
lean_closure_set(v___f_1270_, 4, v___x_1247_);
lean_closure_set(v___f_1270_, 5, v___x_1269_);
v___x_1271_ = l_Array_append___redArg(v___y_1264_, v___y_1263_);
lean_dec_ref(v___y_1263_);
v___x_1272_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_1273_ = l_Lake_Job_collectArray___redArg(v___x_1271_, v___x_1272_);
lean_dec_ref(v___x_1271_);
v___x_1274_ = lean_unsigned_to_nat(0u);
v___x_1275_ = 0;
v___x_1276_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_1277_ = l_Lake_Job_mapM___redArg(v___x_1248_, v___x_1273_, v___f_1270_, v___x_1274_, v___x_1275_, v___y_1252_, v___x_1240_, v___y_1254_, v___y_1255_, v___y_1256_, v___x_1276_);
lean_dec(v___x_1240_);
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1277_);
lean_ctor_set(v___x_1278_, 1, v___y_1261_);
return v___x_1278_;
}
v___jp_1279_:
{
lean_object* v_toLeanConfig_1282_; lean_object* v_toLeanConfig_1283_; uint8_t v_bootstrap_1284_; lean_object* v_buildDir_1285_; lean_object* v_nativeLibDir_1286_; lean_object* v_moreLinkObjs_1287_; lean_object* v_moreLinkObjs_1288_; lean_object* v___x_1289_; size_t v_sz_1290_; size_t v___x_1291_; lean_object* v___x_242874__overap_1292_; lean_object* v___x_1293_; 
v_toLeanConfig_1282_ = lean_ctor_get(v_config_1241_, 1);
lean_inc_ref(v_toLeanConfig_1282_);
v_toLeanConfig_1283_ = lean_ctor_get(v_config_1242_, 0);
v_bootstrap_1284_ = lean_ctor_get_uint8(v_config_1241_, sizeof(void*)*27);
v_buildDir_1285_ = lean_ctor_get(v_config_1241_, 5);
lean_inc_ref(v_buildDir_1285_);
v_nativeLibDir_1286_ = lean_ctor_get(v_config_1241_, 7);
lean_inc_ref(v_nativeLibDir_1286_);
lean_dec_ref(v_config_1241_);
v_moreLinkObjs_1287_ = lean_ctor_get(v_toLeanConfig_1282_, 6);
lean_inc_ref(v_moreLinkObjs_1287_);
lean_dec_ref(v_toLeanConfig_1282_);
v_moreLinkObjs_1288_ = lean_ctor_get(v_toLeanConfig_1283_, 6);
v___x_1289_ = l_Array_append___redArg(v_moreLinkObjs_1287_, v_moreLinkObjs_1288_);
v_sz_1290_ = lean_array_size(v___x_1289_);
v___x_1291_ = ((size_t)0ULL);
v___x_242874__overap_1292_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1243_, v___f_1244_, v_sz_1290_, v___x_1291_, v___x_1289_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc(v___y_1254_);
lean_inc(v___x_1240_);
lean_inc_ref(v___y_1252_);
v___x_1293_ = lean_apply_7(v___x_242874__overap_1292_, v___y_1252_, v___x_1240_, v___y_1254_, v___y_1255_, v___y_1256_, v_a_1281_, lean_box(0));
if (lean_obj_tag(v___x_1293_) == 0)
{
if (v_shouldExport_1245_ == 0)
{
lean_object* v_a_1294_; lean_object* v_a_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v_a_1294_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1294_);
v_a_1295_ = lean_ctor_get(v___x_1293_, 1);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1293_, 2);
v___x_1296_ = l_System_FilePath_normalize(v_buildDir_1285_);
v___x_1297_ = l_Lake_joinRelative(v_dir_1249_, v___x_1296_);
v___x_1298_ = l_System_FilePath_normalize(v_nativeLibDir_1286_);
v___x_1299_ = l_Lake_joinRelative(v___x_1297_, v___x_1298_);
v___x_1300_ = l_Lake_LeanLib_libName(v_self_1250_);
v___x_1301_ = l_Lake_nameToStaticLib(v___x_1300_, v_shouldExport_1245_);
v___x_1302_ = l_Lake_joinRelative(v___x_1299_, v___x_1301_);
v___y_1260_ = v___x_1291_;
v___y_1261_ = v_a_1295_;
v___y_1262_ = v_bootstrap_1284_;
v___y_1263_ = v_a_1294_;
v___y_1264_ = v_a_1280_;
v___y_1265_ = v___x_1302_;
goto v___jp_1259_;
}
else
{
lean_object* v_a_1303_; lean_object* v_a_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v_a_1303_ = lean_ctor_get(v___x_1293_, 0);
lean_inc(v_a_1303_);
v_a_1304_ = lean_ctor_get(v___x_1293_, 1);
lean_inc(v_a_1304_);
lean_dec_ref_known(v___x_1293_, 2);
v___x_1305_ = l_System_FilePath_normalize(v_buildDir_1285_);
v___x_1306_ = l_Lake_joinRelative(v_dir_1249_, v___x_1305_);
v___x_1307_ = l_System_FilePath_normalize(v_nativeLibDir_1286_);
v___x_1308_ = l_Lake_joinRelative(v___x_1306_, v___x_1307_);
v___x_1309_ = l_Lake_LeanLib_libName(v_self_1250_);
v___x_1310_ = 0;
v___x_1311_ = l_Lake_nameToStaticLib(v___x_1309_, v___x_1310_);
v___x_1312_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_1313_ = l_System_FilePath_addExtension(v___x_1311_, v___x_1312_);
v___x_1314_ = l_Lake_joinRelative(v___x_1308_, v___x_1313_);
v___y_1260_ = v___x_1291_;
v___y_1261_ = v_a_1304_;
v___y_1262_ = v_bootstrap_1284_;
v___y_1263_ = v_a_1303_;
v___y_1264_ = v_a_1280_;
v___y_1265_ = v___x_1314_;
goto v___jp_1259_;
}
}
else
{
lean_object* v_a_1315_; lean_object* v_a_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
lean_dec_ref(v_nativeLibDir_1286_);
lean_dec_ref(v_buildDir_1285_);
lean_dec_ref(v_a_1280_);
lean_dec_ref(v___y_1252_);
lean_dec_ref(v_self_1250_);
lean_dec_ref(v_dir_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec(v___x_1240_);
v_a_1315_ = lean_ctor_get(v___x_1293_, 0);
v_a_1316_ = lean_ctor_get(v___x_1293_, 1);
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1293_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1318_ = v___x_1293_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_a_1316_);
lean_inc(v_a_1315_);
lean_dec(v___x_1293_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1315_);
lean_ctor_set(v_reuseFailAlloc_1322_, 1, v_a_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
v___jp_1324_:
{
if (lean_obj_tag(v___y_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v_a_1327_; 
v_a_1326_ = lean_ctor_get(v___y_1325_, 0);
lean_inc(v_a_1326_);
v_a_1327_ = lean_ctor_get(v___y_1325_, 1);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___y_1325_, 2);
v_a_1280_ = v_a_1326_;
v_a_1281_ = v_a_1327_;
goto v___jp_1279_;
}
else
{
lean_object* v_a_1328_; lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_dec_ref(v___y_1252_);
lean_dec_ref(v_self_1250_);
lean_dec_ref(v_dir_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v___f_1244_);
lean_dec_ref(v___x_1243_);
lean_dec_ref(v_config_1241_);
lean_dec(v___x_1240_);
v_a_1328_ = lean_ctor_get(v___y_1325_, 0);
v_a_1329_ = lean_ctor_get(v___y_1325_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___y_1325_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___y_1325_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_inc(v_a_1328_);
lean_dec(v___y_1325_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1328_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object** _args){
lean_object* v___x_1374_ = _args[0];
lean_object* v___x_1375_ = _args[1];
lean_object* v_config_1376_ = _args[2];
lean_object* v_config_1377_ = _args[3];
lean_object* v___x_1378_ = _args[4];
lean_object* v___f_1379_ = _args[5];
lean_object* v_shouldExport_1380_ = _args[6];
lean_object* v___x_1381_ = _args[7];
lean_object* v___x_1382_ = _args[8];
lean_object* v___x_1383_ = _args[9];
lean_object* v_dir_1384_ = _args[10];
lean_object* v_self_1385_ = _args[11];
lean_object* v___f_1386_ = _args[12];
lean_object* v___y_1387_ = _args[13];
lean_object* v___y_1388_ = _args[14];
lean_object* v___y_1389_ = _args[15];
lean_object* v___y_1390_ = _args[16];
lean_object* v___y_1391_ = _args[17];
lean_object* v___y_1392_ = _args[18];
lean_object* v___y_1393_ = _args[19];
_start:
{
uint8_t v_shouldExport_boxed_1394_; uint8_t v___x_243783__boxed_1395_; lean_object* v_res_1396_; 
v_shouldExport_boxed_1394_ = lean_unbox(v_shouldExport_1380_);
v___x_243783__boxed_1395_ = lean_unbox(v___x_1381_);
v_res_1396_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(v___x_1374_, v___x_1375_, v_config_1376_, v_config_1377_, v___x_1378_, v___f_1379_, v_shouldExport_boxed_1394_, v___x_243783__boxed_1395_, v___x_1382_, v___x_1383_, v_dir_1384_, v_self_1385_, v___f_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec(v_config_1377_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object* v_self_1400_, uint8_t v_shouldExport_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
lean_object* v___x_1409_; lean_object* v_toApplicative_1410_; lean_object* v_toBind_1411_; lean_object* v_toFunctor_1412_; lean_object* v_toPure_1413_; lean_object* v___f_1414_; lean_object* v___f_1415_; lean_object* v___f_1416_; lean_object* v___f_1417_; lean_object* v___x_1418_; lean_object* v___f_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v_toBuildConfig_1427_; lean_object* v_registeredJobs_1428_; uint8_t v_verbosity_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___f_1432_; uint8_t v___x_1433_; uint8_t v___x_1434_; uint8_t v___x_1435_; lean_object* v___y_1437_; 
v___x_1409_ = l_instMonadBaseIO;
v_toApplicative_1410_ = lean_ctor_get(v___x_1409_, 0);
v_toBind_1411_ = lean_ctor_get(v___x_1409_, 1);
v_toFunctor_1412_ = lean_ctor_get(v_toApplicative_1410_, 0);
v_toPure_1413_ = lean_ctor_get(v_toApplicative_1410_, 1);
lean_inc_n(v_toBind_1411_, 3);
lean_inc_n(v_toPure_1413_, 5);
v___f_1414_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1414_, 0, v_toPure_1413_);
lean_closure_set(v___f_1414_, 1, v_toBind_1411_);
v___f_1415_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1415_, 0, v_toPure_1413_);
lean_closure_set(v___f_1415_, 1, v_toBind_1411_);
lean_inc_ref(v___f_1414_);
v___f_1416_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1416_, 0, v_toPure_1413_);
lean_closure_set(v___f_1416_, 1, v___f_1414_);
lean_inc_ref_n(v_toFunctor_1412_, 2);
v___f_1417_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1417_, 0, v_toFunctor_1412_);
lean_closure_set(v___f_1417_, 1, v_toPure_1413_);
lean_closure_set(v___f_1417_, 2, v_toBind_1411_);
v___x_1418_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1412_);
v___f_1419_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1419_, 0, v_toPure_1413_);
v___x_1420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set(v___x_1420_, 1, v___f_1419_);
lean_ctor_set(v___x_1420_, 2, v___f_1417_);
lean_ctor_set(v___x_1420_, 3, v___f_1416_);
lean_ctor_set(v___x_1420_, 4, v___f_1415_);
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
lean_ctor_set(v___x_1421_, 1, v___f_1414_);
v___x_1422_ = l_ReaderT_instMonad___redArg(v___x_1421_);
v___x_1423_ = l_StateRefT_x27_instMonad___redArg(v___x_1422_);
v___x_1424_ = l_ReaderT_instMonad___redArg(v___x_1423_);
v___x_1425_ = l_ReaderT_instMonad___redArg(v___x_1424_);
lean_inc_ref(v___x_1425_);
v___x_1426_ = l_Lake_EquipT_instMonad___redArg(v___x_1425_);
v_toBuildConfig_1427_ = lean_ctor_get(v_a_1406_, 0);
v_registeredJobs_1428_ = lean_ctor_get(v_a_1406_, 3);
v_verbosity_1429_ = lean_ctor_get_uint8(v_toBuildConfig_1427_, sizeof(void*)*3 + 3);
v___x_1430_ = l_Lake_instDataKindFilePath;
v___x_1431_ = lean_box(v_shouldExport_1401_);
lean_inc_ref(v___x_1426_);
v___f_1432_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1432_, 0, v___x_1431_);
lean_closure_set(v___f_1432_, 1, v___x_1426_);
v___x_1433_ = 2;
v___x_1434_ = l_Lake_instDecidableEqVerbosity(v_verbosity_1429_, v___x_1433_);
v___x_1435_ = 1;
if (v___x_1434_ == 0)
{
lean_object* v___x_1483_; 
v___x_1483_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_1437_ = v___x_1483_;
goto v___jp_1436_;
}
else
{
if (v_shouldExport_1401_ == 0)
{
lean_object* v___x_1484_; 
v___x_1484_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___y_1437_ = v___x_1484_;
goto v___jp_1436_;
}
else
{
lean_object* v___x_1485_; 
v___x_1485_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_1437_ = v___x_1485_;
goto v___jp_1436_;
}
}
v___jp_1436_:
{
lean_object* v_pkg_1438_; lean_object* v_name_1439_; lean_object* v_config_1440_; lean_object* v_keyName_1441_; lean_object* v_dir_1442_; lean_object* v_config_1443_; lean_object* v___f_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___f_1452_; lean_object* v___x_1453_; 
v_pkg_1438_ = lean_ctor_get(v_self_1400_, 0);
v_name_1439_ = lean_ctor_get(v_self_1400_, 1);
lean_inc_n(v_name_1439_, 2);
v_config_1440_ = lean_ctor_get(v_self_1400_, 2);
lean_inc(v_config_1440_);
v_keyName_1441_ = lean_ctor_get(v_pkg_1438_, 2);
v_dir_1442_ = lean_ctor_get(v_pkg_1438_, 4);
lean_inc_ref(v_dir_1442_);
v_config_1443_ = lean_ctor_get(v_pkg_1438_, 6);
lean_inc_ref(v_config_1443_);
lean_inc_ref_n(v_pkg_1438_, 2);
v___f_1444_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed), 10, 2);
lean_closure_set(v___f_1444_, 0, v___x_1430_);
lean_closure_set(v___f_1444_, 1, v_pkg_1438_);
v___x_1445_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_1441_);
v___x_1446_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1446_, 0, v_keyName_1441_);
lean_ctor_set(v___x_1446_, 1, v_name_1439_);
v___x_1447_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_1400_);
v___x_1448_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1446_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
lean_ctor_set(v___x_1448_, 2, v_self_1400_);
lean_ctor_set(v___x_1448_, 3, v___x_1445_);
v___x_1449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1449_, 0, v_pkg_1438_);
v___x_1450_ = lean_box(v_shouldExport_1401_);
v___x_1451_ = lean_box(v___x_1435_);
v___f_1452_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed), 20, 13);
lean_closure_set(v___f_1452_, 0, v___x_1448_);
lean_closure_set(v___f_1452_, 1, v___x_1449_);
lean_closure_set(v___f_1452_, 2, v_config_1443_);
lean_closure_set(v___f_1452_, 3, v_config_1440_);
lean_closure_set(v___f_1452_, 4, v___x_1426_);
lean_closure_set(v___f_1452_, 5, v___f_1444_);
lean_closure_set(v___f_1452_, 6, v___x_1450_);
lean_closure_set(v___f_1452_, 7, v___x_1451_);
lean_closure_set(v___f_1452_, 8, v___x_1425_);
lean_closure_set(v___f_1452_, 9, v___x_1430_);
lean_closure_set(v___f_1452_, 10, v_dir_1442_);
lean_closure_set(v___f_1452_, 11, v_self_1400_);
lean_closure_set(v___f_1452_, 12, v___f_1432_);
v___x_1453_ = l_Lake_ensureJob___redArg(v___x_1430_, v___f_1452_, v_a_1402_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v_a_1454_; lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1482_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v_a_1455_ = lean_ctor_get(v___x_1453_, 1);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1457_ = v___x_1453_;
v_isShared_1458_ = v_isSharedCheck_1482_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_inc(v_a_1454_);
lean_dec(v___x_1453_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1482_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v_task_1459_; lean_object* v_kind_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1480_; 
v_task_1459_ = lean_ctor_get(v_a_1454_, 0);
v_kind_1460_ = lean_ctor_get(v_a_1454_, 1);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_a_1454_);
if (v_isSharedCheck_1480_ == 0)
{
lean_object* v_unused_1481_; 
v_unused_1481_ = lean_ctor_get(v_a_1454_, 2);
lean_dec(v_unused_1481_);
v___x_1462_ = v_a_1454_;
v_isShared_1463_ = v_isSharedCheck_1480_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_kind_1460_);
lean_inc(v_task_1459_);
lean_dec(v_a_1454_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1480_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; lean_object* v_job_1471_; 
v___x_1464_ = lean_st_ref_take(v_registeredJobs_1428_);
v___x_1465_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1439_, v___x_1435_);
v___x_1466_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0));
v___x_1467_ = lean_string_append(v___x_1465_, v___x_1466_);
v___x_1468_ = lean_string_append(v___x_1467_, v___y_1437_);
v___x_1469_ = 0;
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 2, v___x_1468_);
v_job_1471_ = v___x_1462_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_task_1459_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_kind_1460_);
lean_ctor_set(v_reuseFailAlloc_1479_, 2, v___x_1468_);
v_job_1471_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1477_; 
lean_ctor_set_uint8(v_job_1471_, sizeof(void*)*3, v___x_1469_);
lean_inc_ref(v_job_1471_);
v___x_1472_ = l_Lake_Job_toOpaque___redArg(v_job_1471_);
v___x_1473_ = lean_array_push(v___x_1464_, v___x_1472_);
v___x_1474_ = lean_st_ref_set(v_registeredJobs_1428_, v___x_1473_);
v___x_1475_ = l_Lake_Job_renew___redArg(v_job_1471_);
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1475_);
v___x_1477_ = v___x_1457_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1475_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_a_1455_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
else
{
lean_dec(v_name_1439_);
return v___x_1453_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object* v_self_1486_, lean_object* v_shouldExport_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_){
_start:
{
uint8_t v_shouldExport_boxed_1495_; lean_object* v_res_1496_; 
v_shouldExport_boxed_1495_ = lean_unbox(v_shouldExport_1487_);
v_res_1496_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(v_self_1486_, v_shouldExport_boxed_1495_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_);
lean_dec_ref(v_a_1492_);
lean_dec(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec(v_a_1489_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t v_fmt_1497_, lean_object* v_a_1498_){
_start:
{
if (v_fmt_1497_ == 0)
{
return v_a_1498_;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = l_Lake_mkRelPathString(v_a_1498_);
v___x_1500_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
v___x_1501_ = l_Lean_Json_compress(v___x_1500_);
return v___x_1501_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object* v_fmt_1502_, lean_object* v_a_1503_){
_start:
{
uint8_t v_fmt_boxed_1504_; lean_object* v_res_1505_; 
v_fmt_boxed_1504_ = lean_unbox(v_fmt_1502_);
v_res_1505_ = l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(v_fmt_boxed_1504_, v_a_1503_);
return v_res_1505_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2(void){
_start:
{
uint8_t v___x_1508_; lean_object* v_name_1509_; lean_object* v___x_1510_; 
v___x_1508_ = 1;
v_name_1509_ = l_Lake_instDataKindFilePath;
v___x_1510_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1509_, v___x_1508_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object* v_defaultPkg_1514_, lean_object* v_self_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_){
_start:
{
uint8_t v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = 1;
lean_inc_ref_n(v_self_1515_, 2);
v___x_1524_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1514_, v_self_1515_, v_self_1515_, v___x_1523_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v_snd_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1567_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
v_snd_1526_ = lean_ctor_get(v_a_1525_, 1);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_a_1525_);
if (v_isSharedCheck_1567_ == 0)
{
lean_object* v_unused_1568_; 
v_unused_1568_ = lean_ctor_get(v_a_1525_, 0);
lean_dec(v_unused_1568_);
v___x_1528_ = v_a_1525_;
v_isShared_1529_ = v_isSharedCheck_1567_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_snd_1526_);
lean_dec(v_a_1525_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1567_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1565_; 
v_a_1530_ = lean_ctor_get(v___x_1524_, 1);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1565_ == 0)
{
lean_object* v_unused_1566_; 
v_unused_1566_ = lean_ctor_get(v___x_1524_, 0);
lean_dec(v_unused_1566_);
v___x_1532_ = v___x_1524_;
v_isShared_1533_ = v_isSharedCheck_1565_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v___x_1524_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1565_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v_kind_1534_; lean_object* v_name_1535_; lean_object* v___y_1537_; uint8_t v___x_1555_; 
v_kind_1534_ = lean_ctor_get(v_snd_1526_, 1);
v_name_1535_ = l_Lake_instDataKindFilePath;
v___x_1555_ = lean_name_eq(v_kind_1534_, v_name_1535_);
if (v___x_1555_ == 0)
{
uint8_t v___x_1556_; 
lean_inc(v_kind_1534_);
lean_del_object(v___x_1528_);
lean_dec(v_snd_1526_);
v___x_1556_ = l_Lean_Name_isAnonymous(v_kind_1534_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1557_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_1558_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1534_, v___x_1523_);
v___x_1559_ = lean_string_append(v___x_1557_, v___x_1558_);
lean_dec_ref(v___x_1558_);
v___x_1560_ = lean_string_append(v___x_1559_, v___x_1557_);
v___y_1537_ = v___x_1560_;
goto v___jp_1536_;
}
else
{
lean_object* v___x_1561_; 
lean_dec(v_kind_1534_);
v___x_1561_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_1537_ = v___x_1561_;
goto v___jp_1536_;
}
}
else
{
lean_object* v___x_1563_; 
lean_del_object(v___x_1532_);
lean_dec_ref(v_self_1515_);
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 1, v_a_1530_);
lean_ctor_set(v___x_1528_, 0, v_snd_1526_);
v___x_1563_ = v___x_1528_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_snd_1526_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_a_1530_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
v___jp_1536_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1538_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_1539_ = l_Lake_PartialBuildKey_toString(v_self_1515_);
v___x_1540_ = lean_string_append(v___x_1538_, v___x_1539_);
lean_dec_ref(v___x_1539_);
v___x_1541_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_1542_ = lean_string_append(v___x_1540_, v___x_1541_);
v___x_1543_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2);
v___x_1544_ = lean_string_append(v___x_1542_, v___x_1543_);
v___x_1545_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_1546_ = lean_string_append(v___x_1544_, v___x_1545_);
v___x_1547_ = lean_string_append(v___x_1546_, v___y_1537_);
lean_dec_ref(v___y_1537_);
v___x_1548_ = 3;
v___x_1549_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set_uint8(v___x_1549_, sizeof(void*)*1, v___x_1548_);
v___x_1550_ = lean_array_get_size(v_a_1530_);
v___x_1551_ = lean_array_push(v_a_1530_, v___x_1549_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set_tag(v___x_1532_, 1);
lean_ctor_set(v___x_1532_, 1, v___x_1551_);
lean_ctor_set(v___x_1532_, 0, v___x_1550_);
v___x_1553_ = v___x_1532_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
}
else
{
lean_object* v_a_1569_; lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v_self_1515_);
v_a_1569_ = lean_ctor_get(v___x_1524_, 0);
v_a_1570_ = lean_ctor_get(v___x_1524_, 1);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1524_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_inc(v_a_1569_);
lean_dec(v___x_1524_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1569_);
lean_ctor_set(v_reuseFailAlloc_1576_, 1, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object* v_defaultPkg_1578_, lean_object* v_self_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v_defaultPkg_1578_, v_self_1579_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_);
lean_dec_ref(v_a_1584_);
lean_dec(v_a_1583_);
lean_dec(v_a_1582_);
lean_dec(v_a_1581_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object* v___x_1588_, size_t v_sz_1589_, size_t v_i_1590_, lean_object* v_bs_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
uint8_t v___x_1599_; 
v___x_1599_ = lean_usize_dec_lt(v_i_1590_, v_sz_1589_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; 
lean_dec_ref(v___y_1592_);
lean_dec_ref(v___x_1588_);
v___x_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1600_, 0, v_bs_1591_);
lean_ctor_set(v___x_1600_, 1, v___y_1597_);
return v___x_1600_;
}
else
{
lean_object* v_v_1601_; lean_object* v___x_1602_; 
v_v_1601_ = lean_array_uget_borrowed(v_bs_1591_, v_i_1590_);
lean_inc_ref(v___y_1592_);
lean_inc(v_v_1601_);
lean_inc_ref(v___x_1588_);
v___x_1602_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_1588_, v_v_1601_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v_a_1604_; lean_object* v___x_1605_; lean_object* v_bs_x27_1606_; size_t v___x_1607_; size_t v___x_1608_; lean_object* v___x_1609_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
v_a_1604_ = lean_ctor_get(v___x_1602_, 1);
lean_inc(v_a_1604_);
lean_dec_ref_known(v___x_1602_, 2);
v___x_1605_ = lean_unsigned_to_nat(0u);
v_bs_x27_1606_ = lean_array_uset(v_bs_1591_, v_i_1590_, v___x_1605_);
v___x_1607_ = ((size_t)1ULL);
v___x_1608_ = lean_usize_add(v_i_1590_, v___x_1607_);
v___x_1609_ = lean_array_uset(v_bs_x27_1606_, v_i_1590_, v_a_1603_);
v_i_1590_ = v___x_1608_;
v_bs_1591_ = v___x_1609_;
v___y_1597_ = v_a_1604_;
goto _start;
}
else
{
lean_object* v_a_1611_; lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec_ref(v___y_1592_);
lean_dec_ref(v_bs_1591_);
lean_dec_ref(v___x_1588_);
v_a_1611_ = lean_ctor_get(v___x_1602_, 0);
v_a_1612_ = lean_ctor_get(v___x_1602_, 1);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1602_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_inc(v_a_1611_);
lean_dec(v___x_1602_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1611_);
lean_ctor_set(v_reuseFailAlloc_1618_, 1, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object* v___x_1620_, lean_object* v_sz_1621_, lean_object* v_i_1622_, lean_object* v_bs_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
size_t v_sz_boxed_1631_; size_t v_i_boxed_1632_; lean_object* v_res_1633_; 
v_sz_boxed_1631_ = lean_unbox_usize(v_sz_1621_);
lean_dec(v_sz_1621_);
v_i_boxed_1632_ = lean_unbox_usize(v_i_1622_);
lean_dec(v_i_1622_);
v_res_1633_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v___x_1620_, v_sz_boxed_1631_, v_i_boxed_1632_, v_bs_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec(v___y_1626_);
lean_dec(v___y_1625_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object* v_a_1634_, lean_object* v_as_1635_, size_t v_i_1636_, size_t v_stop_1637_, lean_object* v_b_1638_, lean_object* v___y_1639_){
_start:
{
uint8_t v___x_1641_; 
v___x_1641_ = lean_usize_dec_eq(v_i_1636_, v_stop_1637_);
if (v___x_1641_ == 0)
{
lean_object* v_log_1642_; uint8_t v_action_1643_; uint8_t v_wantsRebuild_1644_; lean_object* v_trace_1645_; lean_object* v_buildTime_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v_log_1642_ = lean_ctor_get(v___y_1639_, 0);
v_action_1643_ = lean_ctor_get_uint8(v___y_1639_, sizeof(void*)*3);
v_wantsRebuild_1644_ = lean_ctor_get_uint8(v___y_1639_, sizeof(void*)*3 + 1);
v_trace_1645_ = lean_ctor_get(v___y_1639_, 1);
v_buildTime_1646_ = lean_ctor_get(v___y_1639_, 2);
v___x_1647_ = lean_array_uget_borrowed(v_as_1635_, v_i_1636_);
v___x_1648_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
lean_inc(v___x_1647_);
v___x_1649_ = lean_string_append(v___x_1647_, v___x_1648_);
v___x_1650_ = lean_io_prim_handle_put_str(v_a_1634_, v___x_1649_);
lean_dec_ref(v___x_1649_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_object* v_a_1651_; size_t v___x_1652_; size_t v___x_1653_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1651_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1652_ = ((size_t)1ULL);
v___x_1653_ = lean_usize_add(v_i_1636_, v___x_1652_);
v_i_1636_ = v___x_1653_;
v_b_1638_ = v_a_1651_;
goto _start;
}
else
{
lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1668_; 
lean_inc(v_buildTime_1646_);
lean_inc_ref(v_trace_1645_);
lean_inc_ref(v_log_1642_);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___y_1639_);
if (v_isSharedCheck_1668_ == 0)
{
lean_object* v_unused_1669_; lean_object* v_unused_1670_; lean_object* v_unused_1671_; 
v_unused_1669_ = lean_ctor_get(v___y_1639_, 2);
lean_dec(v_unused_1669_);
v_unused_1670_ = lean_ctor_get(v___y_1639_, 1);
lean_dec(v_unused_1670_);
v_unused_1671_ = lean_ctor_get(v___y_1639_, 0);
lean_dec(v_unused_1671_);
v___x_1656_ = v___y_1639_;
v_isShared_1657_ = v_isSharedCheck_1668_;
goto v_resetjp_1655_;
}
else
{
lean_dec(v___y_1639_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1668_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v_a_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1665_; 
v_a_1658_ = lean_ctor_get(v___x_1650_, 0);
lean_inc(v_a_1658_);
lean_dec_ref_known(v___x_1650_, 1);
v___x_1659_ = lean_io_error_to_string(v_a_1658_);
v___x_1660_ = 3;
v___x_1661_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set_uint8(v___x_1661_, sizeof(void*)*1, v___x_1660_);
v___x_1662_ = lean_array_get_size(v_log_1642_);
v___x_1663_ = lean_array_push(v_log_1642_, v___x_1661_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v___x_1663_);
v___x_1665_ = v___x_1656_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v_trace_1645_);
lean_ctor_set(v_reuseFailAlloc_1667_, 2, v_buildTime_1646_);
lean_ctor_set_uint8(v_reuseFailAlloc_1667_, sizeof(void*)*3, v_action_1643_);
lean_ctor_set_uint8(v_reuseFailAlloc_1667_, sizeof(void*)*3 + 1, v_wantsRebuild_1644_);
v___x_1665_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1662_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
return v___x_1666_;
}
}
}
}
else
{
lean_object* v___x_1672_; 
v___x_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1672_, 0, v_b_1638_);
lean_ctor_set(v___x_1672_, 1, v___y_1639_);
return v___x_1672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object* v_a_1673_, lean_object* v_as_1674_, lean_object* v_i_1675_, lean_object* v_stop_1676_, lean_object* v_b_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
size_t v_i_boxed_1680_; size_t v_stop_boxed_1681_; lean_object* v_res_1682_; 
v_i_boxed_1680_ = lean_unbox_usize(v_i_1675_);
lean_dec(v_i_1675_);
v_stop_boxed_1681_ = lean_unbox_usize(v_stop_1676_);
lean_dec(v_stop_1676_);
v_res_1682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1673_, v_as_1674_, v_i_boxed_1680_, v_stop_boxed_1681_, v_b_1677_, v___y_1678_);
lean_dec_ref(v_as_1674_);
lean_dec(v_a_1673_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t v_bootstrap_1683_, lean_object* v___y_1684_, lean_object* v_oFiles_1685_, uint8_t v_shouldExport_1686_, uint8_t v___x_1687_, size_t v___x_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_){
_start:
{
lean_object* v___y_1697_; uint8_t v___y_1698_; lean_object* v_a_1699_; lean_object* v___y_1747_; uint8_t v___y_1748_; lean_object* v___y_1749_; 
if (v_bootstrap_1683_ == 0)
{
lean_object* v_toContext_1751_; lean_object* v_lakeEnv_1752_; lean_object* v_lean_1753_; lean_object* v_log_1754_; uint8_t v_action_1755_; uint8_t v_wantsRebuild_1756_; lean_object* v_trace_1757_; lean_object* v_buildTime_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1788_; 
v_toContext_1751_ = lean_ctor_get(v___y_1693_, 1);
v_lakeEnv_1752_ = lean_ctor_get(v_toContext_1751_, 0);
v_lean_1753_ = lean_ctor_get(v_lakeEnv_1752_, 1);
v_log_1754_ = lean_ctor_get(v___y_1694_, 0);
v_action_1755_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3);
v_wantsRebuild_1756_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3 + 1);
v_trace_1757_ = lean_ctor_get(v___y_1694_, 1);
v_buildTime_1758_ = lean_ctor_get(v___y_1694_, 2);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___y_1694_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1760_ = v___y_1694_;
v_isShared_1761_ = v_isSharedCheck_1788_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_buildTime_1758_);
lean_inc(v_trace_1757_);
lean_inc(v_log_1754_);
lean_dec(v___y_1694_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1788_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v_ar_1762_; lean_object* v___x_1763_; 
v_ar_1762_ = lean_ctor_get(v_lean_1753_, 13);
lean_inc_ref(v_ar_1762_);
v___x_1763_ = l_Lake_compileStaticLib(v___y_1684_, v_oFiles_1685_, v_ar_1762_, v_bootstrap_1683_, v_log_1754_);
if (lean_obj_tag(v___x_1763_) == 0)
{
lean_object* v_a_1764_; lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1775_; 
v_a_1764_ = lean_ctor_get(v___x_1763_, 0);
v_a_1765_ = lean_ctor_get(v___x_1763_, 1);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1767_ = v___x_1763_;
v_isShared_1768_ = v_isSharedCheck_1775_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_inc(v_a_1764_);
lean_dec(v___x_1763_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1775_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v_a_1765_);
v___x_1770_ = v___x_1760_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1765_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v_trace_1757_);
lean_ctor_set(v_reuseFailAlloc_1774_, 2, v_buildTime_1758_);
lean_ctor_set_uint8(v_reuseFailAlloc_1774_, sizeof(void*)*3, v_action_1755_);
lean_ctor_set_uint8(v_reuseFailAlloc_1774_, sizeof(void*)*3 + 1, v_wantsRebuild_1756_);
v___x_1770_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1772_; 
if (v_isShared_1768_ == 0)
{
lean_ctor_set(v___x_1767_, 1, v___x_1770_);
v___x_1772_ = v___x_1767_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1764_);
lean_ctor_set(v_reuseFailAlloc_1773_, 1, v___x_1770_);
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
else
{
lean_object* v_a_1776_; lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1787_; 
v_a_1776_ = lean_ctor_get(v___x_1763_, 0);
v_a_1777_ = lean_ctor_get(v___x_1763_, 1);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1763_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1779_ = v___x_1763_;
v_isShared_1780_ = v_isSharedCheck_1787_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_inc(v_a_1776_);
lean_dec(v___x_1763_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1787_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v_a_1777_);
v___x_1782_ = v___x_1760_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_a_1777_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_trace_1757_);
lean_ctor_set(v_reuseFailAlloc_1786_, 2, v_buildTime_1758_);
lean_ctor_set_uint8(v_reuseFailAlloc_1786_, sizeof(void*)*3, v_action_1755_);
lean_ctor_set_uint8(v_reuseFailAlloc_1786_, sizeof(void*)*3 + 1, v_wantsRebuild_1756_);
v___x_1782_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
lean_object* v___x_1784_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 1, v___x_1782_);
v___x_1784_ = v___x_1779_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1776_);
lean_ctor_set(v_reuseFailAlloc_1785_, 1, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
}
else
{
uint8_t v___x_1789_; 
v___x_1789_ = l_System_Platform_isOSX;
if (v___x_1789_ == 0)
{
uint8_t v___x_1790_; 
v___x_1790_ = l_System_Platform_isWindows;
if (v___x_1790_ == 0)
{
lean_object* v_toContext_1791_; lean_object* v_lakeEnv_1792_; lean_object* v_lean_1793_; lean_object* v_log_1794_; uint8_t v_action_1795_; uint8_t v_wantsRebuild_1796_; lean_object* v_trace_1797_; lean_object* v_buildTime_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1828_; 
v_toContext_1791_ = lean_ctor_get(v___y_1693_, 1);
v_lakeEnv_1792_ = lean_ctor_get(v_toContext_1791_, 0);
v_lean_1793_ = lean_ctor_get(v_lakeEnv_1792_, 1);
v_log_1794_ = lean_ctor_get(v___y_1694_, 0);
v_action_1795_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3);
v_wantsRebuild_1796_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3 + 1);
v_trace_1797_ = lean_ctor_get(v___y_1694_, 1);
v_buildTime_1798_ = lean_ctor_get(v___y_1694_, 2);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___y_1694_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1800_ = v___y_1694_;
v_isShared_1801_ = v_isSharedCheck_1828_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_buildTime_1798_);
lean_inc(v_trace_1797_);
lean_inc(v_log_1794_);
lean_dec(v___y_1694_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1828_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v_ar_1802_; lean_object* v___x_1803_; 
v_ar_1802_ = lean_ctor_get(v_lean_1793_, 13);
lean_inc_ref(v_ar_1802_);
v___x_1803_ = l_Lake_compileStaticLib(v___y_1684_, v_oFiles_1685_, v_ar_1802_, v___x_1790_, v_log_1794_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1815_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_a_1805_ = lean_ctor_get(v___x_1803_, 1);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1807_ = v___x_1803_;
v_isShared_1808_ = v_isSharedCheck_1815_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1815_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 0, v_a_1805_);
v___x_1810_ = v___x_1800_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1805_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_trace_1797_);
lean_ctor_set(v_reuseFailAlloc_1814_, 2, v_buildTime_1798_);
lean_ctor_set_uint8(v_reuseFailAlloc_1814_, sizeof(void*)*3, v_action_1795_);
lean_ctor_set_uint8(v_reuseFailAlloc_1814_, sizeof(void*)*3 + 1, v_wantsRebuild_1796_);
v___x_1810_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v___x_1812_; 
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 1, v___x_1810_);
v___x_1812_ = v___x_1807_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_a_1804_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
return v___x_1812_;
}
}
}
}
else
{
lean_object* v_a_1816_; lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1827_; 
v_a_1816_ = lean_ctor_get(v___x_1803_, 0);
v_a_1817_ = lean_ctor_get(v___x_1803_, 1);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1819_ = v___x_1803_;
v_isShared_1820_ = v_isSharedCheck_1827_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_inc(v_a_1816_);
lean_dec(v___x_1803_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1827_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1822_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set(v___x_1800_, 0, v_a_1817_);
v___x_1822_ = v___x_1800_;
goto v_reusejp_1821_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1817_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_trace_1797_);
lean_ctor_set(v_reuseFailAlloc_1826_, 2, v_buildTime_1798_);
lean_ctor_set_uint8(v_reuseFailAlloc_1826_, sizeof(void*)*3, v_action_1795_);
lean_ctor_set_uint8(v_reuseFailAlloc_1826_, sizeof(void*)*3 + 1, v_wantsRebuild_1796_);
v___x_1822_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1821_;
}
v_reusejp_1821_:
{
lean_object* v___x_1824_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 1, v___x_1822_);
v___x_1824_ = v___x_1819_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1816_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v___x_1822_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_1829_; lean_object* v_lakeEnv_1830_; lean_object* v_lean_1831_; lean_object* v_log_1832_; uint8_t v_action_1833_; uint8_t v_wantsRebuild_1834_; lean_object* v_trace_1835_; lean_object* v_buildTime_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1866_; 
v_toContext_1829_ = lean_ctor_get(v___y_1693_, 1);
v_lakeEnv_1830_ = lean_ctor_get(v_toContext_1829_, 0);
v_lean_1831_ = lean_ctor_get(v_lakeEnv_1830_, 1);
v_log_1832_ = lean_ctor_get(v___y_1694_, 0);
v_action_1833_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3);
v_wantsRebuild_1834_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3 + 1);
v_trace_1835_ = lean_ctor_get(v___y_1694_, 1);
v_buildTime_1836_ = lean_ctor_get(v___y_1694_, 2);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___y_1694_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1838_ = v___y_1694_;
v_isShared_1839_ = v_isSharedCheck_1866_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_buildTime_1836_);
lean_inc(v_trace_1835_);
lean_inc(v_log_1832_);
lean_dec(v___y_1694_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1866_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v_ar_1840_; lean_object* v___x_1841_; 
v_ar_1840_ = lean_ctor_get(v_lean_1831_, 13);
lean_inc_ref(v_ar_1840_);
v___x_1841_ = l_Lake_compileStaticLib(v___y_1684_, v_oFiles_1685_, v_ar_1840_, v_shouldExport_1686_, v_log_1832_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1853_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
v_a_1843_ = lean_ctor_get(v___x_1841_, 1);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1845_ = v___x_1841_;
v_isShared_1846_ = v_isSharedCheck_1853_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_inc(v_a_1842_);
lean_dec(v___x_1841_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1853_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v_a_1843_);
v___x_1848_ = v___x_1838_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1843_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_trace_1835_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_buildTime_1836_);
lean_ctor_set_uint8(v_reuseFailAlloc_1852_, sizeof(void*)*3, v_action_1833_);
lean_ctor_set_uint8(v_reuseFailAlloc_1852_, sizeof(void*)*3 + 1, v_wantsRebuild_1834_);
v___x_1848_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1850_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1848_);
v___x_1850_ = v___x_1845_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1842_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1865_; 
v_a_1854_ = lean_ctor_get(v___x_1841_, 0);
v_a_1855_ = lean_ctor_get(v___x_1841_, 1);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1857_ = v___x_1841_;
v_isShared_1858_ = v_isSharedCheck_1865_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_inc(v_a_1854_);
lean_dec(v___x_1841_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1865_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1860_; 
if (v_isShared_1839_ == 0)
{
lean_ctor_set(v___x_1838_, 0, v_a_1855_);
v___x_1860_ = v___x_1838_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1855_);
lean_ctor_set(v_reuseFailAlloc_1864_, 1, v_trace_1835_);
lean_ctor_set(v_reuseFailAlloc_1864_, 2, v_buildTime_1836_);
lean_ctor_set_uint8(v_reuseFailAlloc_1864_, sizeof(void*)*3, v_action_1833_);
lean_ctor_set_uint8(v_reuseFailAlloc_1864_, sizeof(void*)*3 + 1, v_wantsRebuild_1834_);
v___x_1860_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1862_; 
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 1, v___x_1860_);
v___x_1862_ = v___x_1857_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1854_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v_log_1869_; uint8_t v_action_1870_; uint8_t v_wantsRebuild_1871_; lean_object* v_trace_1872_; lean_object* v_buildTime_1873_; uint8_t v___y_1875_; 
v___x_1867_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1868_ = lean_io_getenv(v___x_1867_);
v_log_1869_ = lean_ctor_get(v___y_1694_, 0);
v_action_1870_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3);
v_wantsRebuild_1871_ = lean_ctor_get_uint8(v___y_1694_, sizeof(void*)*3 + 1);
v_trace_1872_ = lean_ctor_get(v___y_1694_, 1);
v_buildTime_1873_ = lean_ctor_get(v___y_1694_, 2);
if (lean_obj_tag(v___x_1868_) == 0)
{
uint8_t v___x_1925_; 
v___x_1925_ = 0;
v___y_1875_ = v___x_1925_;
goto v___jp_1874_;
}
else
{
lean_dec_ref_known(v___x_1868_, 1);
if (v___x_1789_ == 0)
{
v___y_1875_ = v___x_1789_;
goto v___jp_1874_;
}
else
{
lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1959_; 
lean_inc(v_buildTime_1873_);
lean_inc_ref(v_trace_1872_);
lean_inc_ref(v_log_1869_);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___y_1694_);
if (v_isSharedCheck_1959_ == 0)
{
lean_object* v_unused_1960_; lean_object* v_unused_1961_; lean_object* v_unused_1962_; 
v_unused_1960_ = lean_ctor_get(v___y_1694_, 2);
lean_dec(v_unused_1960_);
v_unused_1961_ = lean_ctor_get(v___y_1694_, 1);
lean_dec(v_unused_1961_);
v_unused_1962_ = lean_ctor_get(v___y_1694_, 0);
lean_dec(v_unused_1962_);
v___x_1927_ = v___y_1694_;
v_isShared_1928_ = v_isSharedCheck_1959_;
goto v_resetjp_1926_;
}
else
{
lean_dec(v___y_1694_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1959_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_toContext_1929_; lean_object* v_lakeEnv_1930_; lean_object* v_lean_1931_; lean_object* v_ar_1932_; uint8_t v___x_1933_; lean_object* v___x_1934_; 
v_toContext_1929_ = lean_ctor_get(v___y_1693_, 1);
v_lakeEnv_1930_ = lean_ctor_get(v_toContext_1929_, 0);
v_lean_1931_ = lean_ctor_get(v_lakeEnv_1930_, 1);
v_ar_1932_ = lean_ctor_get(v_lean_1931_, 13);
v___x_1933_ = 0;
lean_inc_ref(v_ar_1932_);
v___x_1934_ = l_Lake_compileStaticLib(v___y_1684_, v_oFiles_1685_, v_ar_1932_, v___x_1933_, v_log_1869_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_object* v_a_1935_; lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1946_; 
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
v_a_1936_ = lean_ctor_get(v___x_1934_, 1);
v_isSharedCheck_1946_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1946_ == 0)
{
v___x_1938_ = v___x_1934_;
v_isShared_1939_ = v_isSharedCheck_1946_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_inc(v_a_1935_);
lean_dec(v___x_1934_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1946_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v_a_1936_);
v___x_1941_ = v___x_1927_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v_a_1936_);
lean_ctor_set(v_reuseFailAlloc_1945_, 1, v_trace_1872_);
lean_ctor_set(v_reuseFailAlloc_1945_, 2, v_buildTime_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1945_, sizeof(void*)*3, v_action_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1945_, sizeof(void*)*3 + 1, v_wantsRebuild_1871_);
v___x_1941_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1943_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 1, v___x_1941_);
v___x_1943_ = v___x_1938_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1935_);
lean_ctor_set(v_reuseFailAlloc_1944_, 1, v___x_1941_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_object* v_a_1947_; lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1958_; 
v_a_1947_ = lean_ctor_get(v___x_1934_, 0);
v_a_1948_ = lean_ctor_get(v___x_1934_, 1);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1950_ = v___x_1934_;
v_isShared_1951_ = v_isSharedCheck_1958_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_inc(v_a_1947_);
lean_dec(v___x_1934_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1958_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v_a_1948_);
v___x_1953_ = v___x_1927_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1948_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_trace_1872_);
lean_ctor_set(v_reuseFailAlloc_1957_, 2, v_buildTime_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*3, v_action_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1957_, sizeof(void*)*3 + 1, v_wantsRebuild_1871_);
v___x_1953_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1955_; 
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 1, v___x_1953_);
v___x_1955_ = v___x_1950_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1947_);
lean_ctor_set(v_reuseFailAlloc_1956_, 1, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
}
}
v___jp_1874_:
{
lean_object* v___x_1876_; 
lean_inc_ref(v___y_1684_);
v___x_1876_ = l_Lake_createParentDirs(v___y_1684_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v___x_1877_; lean_object* v___x_1878_; uint8_t v___x_1879_; lean_object* v___x_1880_; 
lean_dec_ref_known(v___x_1876_, 1);
v___x_1877_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__9));
lean_inc_ref(v___y_1684_);
v___x_1878_ = l_System_FilePath_addExtension(v___y_1684_, v___x_1877_);
v___x_1879_ = 1;
v___x_1880_ = lean_io_prim_handle_mk(v___x_1878_, v___x_1879_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1882_ = lean_unsigned_to_nat(0u);
v___x_1883_ = lean_array_get_size(v_oFiles_1685_);
v___x_1884_ = lean_nat_dec_lt(v___x_1882_, v___x_1883_);
if (v___x_1884_ == 0)
{
lean_dec(v_a_1881_);
lean_dec_ref(v_oFiles_1685_);
v___y_1697_ = v___x_1878_;
v___y_1698_ = v___y_1875_;
v_a_1699_ = v___y_1694_;
goto v___jp_1696_;
}
else
{
lean_object* v___x_1885_; uint8_t v___x_1886_; 
v___x_1885_ = lean_box(0);
v___x_1886_ = lean_nat_dec_le(v___x_1883_, v___x_1883_);
if (v___x_1886_ == 0)
{
if (v___x_1884_ == 0)
{
lean_dec(v_a_1881_);
lean_dec_ref(v_oFiles_1685_);
v___y_1697_ = v___x_1878_;
v___y_1698_ = v___y_1875_;
v_a_1699_ = v___y_1694_;
goto v___jp_1696_;
}
else
{
size_t v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = lean_usize_of_nat(v___x_1883_);
v___x_1888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1881_, v_oFiles_1685_, v___x_1688_, v___x_1887_, v___x_1885_, v___y_1694_);
lean_dec_ref(v_oFiles_1685_);
lean_dec(v_a_1881_);
v___y_1747_ = v___x_1878_;
v___y_1748_ = v___y_1875_;
v___y_1749_ = v___x_1888_;
goto v___jp_1746_;
}
}
else
{
size_t v___x_1889_; lean_object* v___x_1890_; 
v___x_1889_ = lean_usize_of_nat(v___x_1883_);
v___x_1890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1881_, v_oFiles_1685_, v___x_1688_, v___x_1889_, v___x_1885_, v___y_1694_);
lean_dec_ref(v_oFiles_1685_);
lean_dec(v_a_1881_);
v___y_1747_ = v___x_1878_;
v___y_1748_ = v___y_1875_;
v___y_1749_ = v___x_1890_;
goto v___jp_1746_;
}
}
}
else
{
lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1904_; 
lean_inc(v_buildTime_1873_);
lean_inc_ref(v_trace_1872_);
lean_inc_ref(v_log_1869_);
lean_dec_ref(v___x_1878_);
lean_dec_ref(v_oFiles_1685_);
lean_dec_ref(v___y_1684_);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___y_1694_);
if (v_isSharedCheck_1904_ == 0)
{
lean_object* v_unused_1905_; lean_object* v_unused_1906_; lean_object* v_unused_1907_; 
v_unused_1905_ = lean_ctor_get(v___y_1694_, 2);
lean_dec(v_unused_1905_);
v_unused_1906_ = lean_ctor_get(v___y_1694_, 1);
lean_dec(v_unused_1906_);
v_unused_1907_ = lean_ctor_get(v___y_1694_, 0);
lean_dec(v_unused_1907_);
v___x_1892_ = v___y_1694_;
v_isShared_1893_ = v_isSharedCheck_1904_;
goto v_resetjp_1891_;
}
else
{
lean_dec(v___y_1694_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1904_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v_a_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v_a_1894_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1894_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1895_ = lean_io_error_to_string(v_a_1894_);
v___x_1896_ = 3;
v___x_1897_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1897_, 0, v___x_1895_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*1, v___x_1896_);
v___x_1898_ = lean_array_get_size(v_log_1869_);
v___x_1899_ = lean_array_push(v_log_1869_, v___x_1897_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 0, v___x_1899_);
v___x_1901_ = v___x_1892_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1899_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_trace_1872_);
lean_ctor_set(v_reuseFailAlloc_1903_, 2, v_buildTime_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*3, v_action_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1903_, sizeof(void*)*3 + 1, v_wantsRebuild_1871_);
v___x_1901_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1898_);
lean_ctor_set(v___x_1902_, 1, v___x_1901_);
return v___x_1902_;
}
}
}
}
else
{
lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1921_; 
lean_inc(v_buildTime_1873_);
lean_inc_ref(v_trace_1872_);
lean_inc_ref(v_log_1869_);
lean_dec_ref(v_oFiles_1685_);
lean_dec_ref(v___y_1684_);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___y_1694_);
if (v_isSharedCheck_1921_ == 0)
{
lean_object* v_unused_1922_; lean_object* v_unused_1923_; lean_object* v_unused_1924_; 
v_unused_1922_ = lean_ctor_get(v___y_1694_, 2);
lean_dec(v_unused_1922_);
v_unused_1923_ = lean_ctor_get(v___y_1694_, 1);
lean_dec(v_unused_1923_);
v_unused_1924_ = lean_ctor_get(v___y_1694_, 0);
lean_dec(v_unused_1924_);
v___x_1909_ = v___y_1694_;
v_isShared_1910_ = v_isSharedCheck_1921_;
goto v_resetjp_1908_;
}
else
{
lean_dec(v___y_1694_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1921_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v_a_1911_; lean_object* v___x_1912_; uint8_t v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1918_; 
v_a_1911_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1911_);
lean_dec_ref_known(v___x_1876_, 1);
v___x_1912_ = lean_io_error_to_string(v_a_1911_);
v___x_1913_ = 3;
v___x_1914_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1914_, 0, v___x_1912_);
lean_ctor_set_uint8(v___x_1914_, sizeof(void*)*1, v___x_1913_);
v___x_1915_ = lean_array_get_size(v_log_1869_);
v___x_1916_ = lean_array_push(v_log_1869_, v___x_1914_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v___x_1916_);
v___x_1918_ = v___x_1909_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1920_, 1, v_trace_1872_);
lean_ctor_set(v_reuseFailAlloc_1920_, 2, v_buildTime_1873_);
lean_ctor_set_uint8(v_reuseFailAlloc_1920_, sizeof(void*)*3, v_action_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1920_, sizeof(void*)*3 + 1, v_wantsRebuild_1871_);
v___x_1918_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1915_);
lean_ctor_set(v___x_1919_, 1, v___x_1918_);
return v___x_1919_;
}
}
}
}
}
}
v___jp_1696_:
{
lean_object* v___x_1700_; lean_object* v_log_1701_; uint8_t v_action_1702_; uint8_t v_wantsRebuild_1703_; lean_object* v_trace_1704_; lean_object* v_buildTime_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1745_; 
v___x_1700_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
v_log_1701_ = lean_ctor_get(v_a_1699_, 0);
v_action_1702_ = lean_ctor_get_uint8(v_a_1699_, sizeof(void*)*3);
v_wantsRebuild_1703_ = lean_ctor_get_uint8(v_a_1699_, sizeof(void*)*3 + 1);
v_trace_1704_ = lean_ctor_get(v_a_1699_, 1);
v_buildTime_1705_ = lean_ctor_get(v_a_1699_, 2);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_a_1699_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1707_ = v_a_1699_;
v_isShared_1708_ = v_isSharedCheck_1745_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_buildTime_1705_);
lean_inc(v_trace_1704_);
lean_inc(v_log_1701_);
lean_dec(v_a_1699_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1745_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1709_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v___x_1710_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4));
v___x_1711_ = lean_unsigned_to_nat(5u);
v___x_1712_ = lean_mk_empty_array_with_capacity(v___x_1711_);
lean_dec_ref(v___x_1712_);
v___x_1713_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6);
v___x_1714_ = lean_array_push(v___x_1713_, v___y_1684_);
v___x_1715_ = lean_array_push(v___x_1714_, v___x_1710_);
v___x_1716_ = lean_array_push(v___x_1715_, v___y_1697_);
v___x_1717_ = lean_box(0);
v___x_1718_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7));
v___x_1719_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1719_, 0, v___x_1700_);
lean_ctor_set(v___x_1719_, 1, v___x_1709_);
lean_ctor_set(v___x_1719_, 2, v___x_1716_);
lean_ctor_set(v___x_1719_, 3, v___x_1717_);
lean_ctor_set(v___x_1719_, 4, v___x_1718_);
lean_ctor_set_uint8(v___x_1719_, sizeof(void*)*5, v___x_1687_);
lean_ctor_set_uint8(v___x_1719_, sizeof(void*)*5 + 1, v___y_1698_);
v___x_1720_ = l_Lake_proc(v___x_1719_, v___y_1698_, v_log_1701_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v_a_1721_; lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1732_; 
v_a_1721_ = lean_ctor_get(v___x_1720_, 0);
v_a_1722_ = lean_ctor_get(v___x_1720_, 1);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1724_ = v___x_1720_;
v_isShared_1725_ = v_isSharedCheck_1732_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_inc(v_a_1721_);
lean_dec(v___x_1720_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1732_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v_a_1722_);
v___x_1727_ = v___x_1707_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1722_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v_trace_1704_);
lean_ctor_set(v_reuseFailAlloc_1731_, 2, v_buildTime_1705_);
lean_ctor_set_uint8(v_reuseFailAlloc_1731_, sizeof(void*)*3, v_action_1702_);
lean_ctor_set_uint8(v_reuseFailAlloc_1731_, sizeof(void*)*3 + 1, v_wantsRebuild_1703_);
v___x_1727_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1729_; 
if (v_isShared_1725_ == 0)
{
lean_ctor_set(v___x_1724_, 1, v___x_1727_);
v___x_1729_ = v___x_1724_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1721_);
lean_ctor_set(v_reuseFailAlloc_1730_, 1, v___x_1727_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
else
{
lean_object* v_a_1733_; lean_object* v_a_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1744_; 
v_a_1733_ = lean_ctor_get(v___x_1720_, 0);
v_a_1734_ = lean_ctor_get(v___x_1720_, 1);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1736_ = v___x_1720_;
v_isShared_1737_ = v_isSharedCheck_1744_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_a_1734_);
lean_inc(v_a_1733_);
lean_dec(v___x_1720_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1744_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v_a_1734_);
v___x_1739_ = v___x_1707_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1734_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v_trace_1704_);
lean_ctor_set(v_reuseFailAlloc_1743_, 2, v_buildTime_1705_);
lean_ctor_set_uint8(v_reuseFailAlloc_1743_, sizeof(void*)*3, v_action_1702_);
lean_ctor_set_uint8(v_reuseFailAlloc_1743_, sizeof(void*)*3 + 1, v_wantsRebuild_1703_);
v___x_1739_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1741_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set(v___x_1736_, 1, v___x_1739_);
v___x_1741_ = v___x_1736_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1733_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
}
}
}
v___jp_1746_:
{
if (lean_obj_tag(v___y_1749_) == 0)
{
lean_object* v_a_1750_; 
v_a_1750_ = lean_ctor_get(v___y_1749_, 1);
lean_inc(v_a_1750_);
lean_dec_ref_known(v___y_1749_, 2);
v___y_1697_ = v___y_1747_;
v___y_1698_ = v___y_1748_;
v_a_1699_ = v_a_1750_;
goto v___jp_1696_;
}
else
{
lean_dec_ref(v___y_1747_);
lean_dec_ref(v___y_1684_);
return v___y_1749_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object* v_bootstrap_1963_, lean_object* v___y_1964_, lean_object* v_oFiles_1965_, lean_object* v_shouldExport_1966_, lean_object* v___x_1967_, lean_object* v___x_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
uint8_t v_bootstrap_boxed_1976_; uint8_t v_shouldExport_boxed_1977_; uint8_t v___x_6879__boxed_1978_; size_t v___x_6880__boxed_1979_; lean_object* v_res_1980_; 
v_bootstrap_boxed_1976_ = lean_unbox(v_bootstrap_1963_);
v_shouldExport_boxed_1977_ = lean_unbox(v_shouldExport_1966_);
v___x_6879__boxed_1978_ = lean_unbox(v___x_1967_);
v___x_6880__boxed_1979_ = lean_unbox_usize(v___x_1968_);
lean_dec(v___x_1968_);
v_res_1980_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(v_bootstrap_boxed_1976_, v___y_1964_, v_oFiles_1965_, v_shouldExport_boxed_1977_, v___x_6879__boxed_1978_, v___x_6880__boxed_1979_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t v_bootstrap_1981_, lean_object* v___y_1982_, uint8_t v_shouldExport_1983_, uint8_t v___x_1984_, size_t v___x_1985_, lean_object* v_oFiles_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___y_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1994_ = lean_box(v_bootstrap_1981_);
v___x_1995_ = lean_box(v_shouldExport_1983_);
v___x_1996_ = lean_box(v___x_1984_);
v___x_1997_ = lean_box_usize(v___x_1985_);
lean_inc_ref(v___y_1982_);
v___y_1998_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed), 13, 6);
lean_closure_set(v___y_1998_, 0, v___x_1994_);
lean_closure_set(v___y_1998_, 1, v___y_1982_);
lean_closure_set(v___y_1998_, 2, v_oFiles_1986_);
lean_closure_set(v___y_1998_, 3, v___x_1995_);
lean_closure_set(v___y_1998_, 4, v___x_1996_);
lean_closure_set(v___y_1998_, 5, v___x_1997_);
v___x_1999_ = 0;
v___x_2000_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_2001_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1982_, v___y_1998_, v___x_1999_, v___x_2000_, v___x_1984_, v___x_1999_, v___x_1999_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2011_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
v_a_2003_ = lean_ctor_get(v___x_2001_, 1);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2005_ = v___x_2001_;
v_isShared_2006_ = v_isSharedCheck_2011_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_inc(v_a_2002_);
lean_dec(v___x_2001_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2011_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v_path_2007_; lean_object* v___x_2009_; 
v_path_2007_ = lean_ctor_get(v_a_2002_, 1);
lean_inc_ref(v_path_2007_);
lean_dec(v_a_2002_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 0, v_path_2007_);
v___x_2009_ = v___x_2005_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_path_2007_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v_a_2003_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
v_a_2012_ = lean_ctor_get(v___x_2001_, 0);
v_a_2013_ = lean_ctor_get(v___x_2001_, 1);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2001_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_inc(v_a_2012_);
lean_dec(v___x_2001_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2012_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object* v_bootstrap_2021_, lean_object* v___y_2022_, lean_object* v_shouldExport_2023_, lean_object* v___x_2024_, lean_object* v___x_2025_, lean_object* v_oFiles_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_){
_start:
{
uint8_t v_bootstrap_boxed_2034_; uint8_t v_shouldExport_boxed_2035_; uint8_t v___x_7371__boxed_2036_; size_t v___x_7372__boxed_2037_; lean_object* v_res_2038_; 
v_bootstrap_boxed_2034_ = lean_unbox(v_bootstrap_2021_);
v_shouldExport_boxed_2035_ = lean_unbox(v_shouldExport_2023_);
v___x_7371__boxed_2036_ = lean_unbox(v___x_2024_);
v___x_7372__boxed_2037_ = lean_unbox_usize(v___x_2025_);
lean_dec(v___x_2025_);
v_res_2038_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(v_bootstrap_boxed_2034_, v___y_2022_, v_shouldExport_boxed_2035_, v___x_7371__boxed_2036_, v___x_7372__boxed_2037_, v_oFiles_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec(v___y_2030_);
lean_dec(v___y_2029_);
lean_dec(v___y_2028_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object* v_a_2039_, size_t v_sz_2040_, size_t v_i_2041_, lean_object* v_bs_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
uint8_t v___x_2050_; 
v___x_2050_ = lean_usize_dec_lt(v_i_2041_, v_sz_2040_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; 
lean_dec_ref(v___y_2043_);
lean_dec_ref(v_a_2039_);
v___x_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2051_, 0, v_bs_2042_);
lean_ctor_set(v___x_2051_, 1, v___y_2048_);
return v___x_2051_;
}
else
{
lean_object* v_v_2052_; lean_object* v___x_2053_; 
v_v_2052_ = lean_array_uget_borrowed(v_bs_2042_, v_i_2041_);
lean_inc_ref(v___y_2043_);
lean_inc_ref(v_a_2039_);
lean_inc(v_v_2052_);
v___x_2053_ = l_Lake_ModuleFacet_fetch___redArg(v_v_2052_, v_a_2039_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_a_2054_; lean_object* v_a_2055_; lean_object* v___x_2056_; lean_object* v_bs_x27_2057_; size_t v___x_2058_; size_t v___x_2059_; lean_object* v___x_2060_; 
v_a_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc(v_a_2054_);
v_a_2055_ = lean_ctor_get(v___x_2053_, 1);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2053_, 2);
v___x_2056_ = lean_unsigned_to_nat(0u);
v_bs_x27_2057_ = lean_array_uset(v_bs_2042_, v_i_2041_, v___x_2056_);
v___x_2058_ = ((size_t)1ULL);
v___x_2059_ = lean_usize_add(v_i_2041_, v___x_2058_);
v___x_2060_ = lean_array_uset(v_bs_x27_2057_, v_i_2041_, v_a_2054_);
v_i_2041_ = v___x_2059_;
v_bs_2042_ = v___x_2060_;
v___y_2048_ = v_a_2055_;
goto _start;
}
else
{
lean_object* v_a_2062_; lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec_ref(v___y_2043_);
lean_dec_ref(v_bs_2042_);
lean_dec_ref(v_a_2039_);
v_a_2062_ = lean_ctor_get(v___x_2053_, 0);
v_a_2063_ = lean_ctor_get(v___x_2053_, 1);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2053_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_inc(v_a_2062_);
lean_dec(v___x_2053_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2062_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object* v_a_2071_, lean_object* v_sz_2072_, lean_object* v_i_2073_, lean_object* v_bs_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
size_t v_sz_boxed_2082_; size_t v_i_boxed_2083_; lean_object* v_res_2084_; 
v_sz_boxed_2082_ = lean_unbox_usize(v_sz_2072_);
lean_dec(v_sz_2072_);
v_i_boxed_2083_ = lean_unbox_usize(v_i_2073_);
lean_dec(v_i_2073_);
v_res_2084_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v_a_2071_, v_sz_boxed_2082_, v_i_boxed_2083_, v_bs_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec(v___y_2077_);
lean_dec(v___y_2076_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t v_shouldExport_2085_, lean_object* v_as_2086_, size_t v_i_2087_, size_t v_stop_2088_, lean_object* v_b_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
uint8_t v___x_2097_; 
v___x_2097_ = lean_usize_dec_eq(v_i_2087_, v_stop_2088_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; lean_object* v_lib_2099_; lean_object* v_config_2100_; lean_object* v_nativeFacets_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; size_t v_sz_2104_; size_t v___x_2105_; lean_object* v___x_2106_; 
v___x_2098_ = lean_array_uget_borrowed(v_as_2086_, v_i_2087_);
v_lib_2099_ = lean_ctor_get(v___x_2098_, 0);
v_config_2100_ = lean_ctor_get(v_lib_2099_, 2);
v_nativeFacets_2101_ = lean_ctor_get(v_config_2100_, 8);
v___x_2102_ = lean_box(v_shouldExport_2085_);
lean_inc_ref(v_nativeFacets_2101_);
v___x_2103_ = lean_apply_1(v_nativeFacets_2101_, v___x_2102_);
v_sz_2104_ = lean_array_size(v___x_2103_);
v___x_2105_ = ((size_t)0ULL);
lean_inc_ref(v___y_2090_);
lean_inc(v___x_2098_);
v___x_2106_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2098_, v_sz_2104_, v___x_2105_, v___x_2103_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; lean_object* v_a_2108_; lean_object* v___x_2109_; size_t v___x_2110_; size_t v___x_2111_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc(v_a_2107_);
v_a_2108_ = lean_ctor_get(v___x_2106_, 1);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2106_, 2);
v___x_2109_ = l_Array_append___redArg(v_b_2089_, v_a_2107_);
lean_dec(v_a_2107_);
v___x_2110_ = ((size_t)1ULL);
v___x_2111_ = lean_usize_add(v_i_2087_, v___x_2110_);
v_i_2087_ = v___x_2111_;
v_b_2089_ = v___x_2109_;
v___y_2095_ = v_a_2108_;
goto _start;
}
else
{
lean_dec_ref(v___y_2090_);
lean_dec_ref(v_b_2089_);
return v___x_2106_;
}
}
else
{
lean_object* v___x_2113_; 
lean_dec_ref(v___y_2090_);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v_b_2089_);
lean_ctor_set(v___x_2113_, 1, v___y_2095_);
return v___x_2113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object* v_shouldExport_2114_, lean_object* v_as_2115_, lean_object* v_i_2116_, lean_object* v_stop_2117_, lean_object* v_b_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
uint8_t v_shouldExport_boxed_2126_; size_t v_i_boxed_2127_; size_t v_stop_boxed_2128_; lean_object* v_res_2129_; 
v_shouldExport_boxed_2126_ = lean_unbox(v_shouldExport_2114_);
v_i_boxed_2127_ = lean_unbox_usize(v_i_2116_);
lean_dec(v_i_2116_);
v_stop_boxed_2128_ = lean_unbox_usize(v_stop_2117_);
lean_dec(v_stop_2117_);
v_res_2129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_boxed_2126_, v_as_2115_, v_i_boxed_2127_, v_stop_boxed_2128_, v_b_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v_as_2115_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object* v___x_2130_, lean_object* v___x_2131_, lean_object* v_config_2132_, lean_object* v_config_2133_, lean_object* v_pkg_2134_, uint8_t v_shouldExport_2135_, uint8_t v___x_2136_, lean_object* v___x_2137_, lean_object* v_dir_2138_, lean_object* v_self_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v___y_2148_; uint8_t v___y_2149_; lean_object* v___y_2150_; size_t v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v_a_2168_; lean_object* v_a_2169_; lean_object* v___y_2212_; lean_object* v___x_2224_; 
lean_inc_ref(v___y_2140_);
lean_inc_ref(v___y_2144_);
lean_inc(v___y_2143_);
lean_inc(v___y_2142_);
lean_inc(v___x_2131_);
v___x_2224_ = lean_apply_7(v___y_2140_, v___x_2130_, v___x_2131_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_, lean_box(0));
if (lean_obj_tag(v___x_2224_) == 0)
{
lean_object* v_a_2225_; lean_object* v_a_2226_; lean_object* v___x_2227_; 
v_a_2225_ = lean_ctor_get(v___x_2224_, 0);
lean_inc(v_a_2225_);
v_a_2226_ = lean_ctor_get(v___x_2224_, 1);
lean_inc(v_a_2226_);
lean_dec_ref_known(v___x_2224_, 2);
v___x_2227_ = l_Lake_Job_await___redArg(v_a_2225_, v_a_2226_);
if (lean_obj_tag(v___x_2227_) == 0)
{
lean_object* v_a_2228_; lean_object* v_a_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; uint8_t v___x_2233_; 
v_a_2228_ = lean_ctor_get(v___x_2227_, 0);
lean_inc(v_a_2228_);
v_a_2229_ = lean_ctor_get(v___x_2227_, 1);
lean_inc(v_a_2229_);
lean_dec_ref_known(v___x_2227_, 2);
v___x_2230_ = lean_unsigned_to_nat(0u);
v___x_2231_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_2232_ = lean_array_get_size(v_a_2228_);
v___x_2233_ = lean_nat_dec_lt(v___x_2230_, v___x_2232_);
if (v___x_2233_ == 0)
{
lean_dec(v_a_2228_);
v_a_2168_ = v___x_2231_;
v_a_2169_ = v_a_2229_;
goto v___jp_2167_;
}
else
{
uint8_t v___x_2234_; 
v___x_2234_ = lean_nat_dec_le(v___x_2232_, v___x_2232_);
if (v___x_2234_ == 0)
{
if (v___x_2233_ == 0)
{
lean_dec(v_a_2228_);
v_a_2168_ = v___x_2231_;
v_a_2169_ = v_a_2229_;
goto v___jp_2167_;
}
else
{
size_t v___x_2235_; size_t v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = ((size_t)0ULL);
v___x_2236_ = lean_usize_of_nat(v___x_2232_);
lean_inc_ref(v___y_2140_);
v___x_2237_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2135_, v_a_2228_, v___x_2235_, v___x_2236_, v___x_2231_, v___y_2140_, v___x_2131_, v___y_2142_, v___y_2143_, v___y_2144_, v_a_2229_);
lean_dec(v_a_2228_);
v___y_2212_ = v___x_2237_;
goto v___jp_2211_;
}
}
else
{
size_t v___x_2238_; size_t v___x_2239_; lean_object* v___x_2240_; 
v___x_2238_ = ((size_t)0ULL);
v___x_2239_ = lean_usize_of_nat(v___x_2232_);
lean_inc_ref(v___y_2140_);
v___x_2240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2135_, v_a_2228_, v___x_2238_, v___x_2239_, v___x_2231_, v___y_2140_, v___x_2131_, v___y_2142_, v___y_2143_, v___y_2144_, v_a_2229_);
lean_dec(v_a_2228_);
v___y_2212_ = v___x_2240_;
goto v___jp_2211_;
}
}
}
else
{
lean_object* v_a_2241_; lean_object* v_a_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2249_; 
lean_dec_ref(v___y_2140_);
lean_dec_ref(v_self_2139_);
lean_dec_ref(v_dir_2138_);
lean_dec(v___x_2137_);
lean_dec_ref(v_pkg_2134_);
lean_dec_ref(v_config_2132_);
lean_dec(v___x_2131_);
v_a_2241_ = lean_ctor_get(v___x_2227_, 0);
v_a_2242_ = lean_ctor_get(v___x_2227_, 1);
v_isSharedCheck_2249_ = !lean_is_exclusive(v___x_2227_);
if (v_isSharedCheck_2249_ == 0)
{
v___x_2244_ = v___x_2227_;
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_a_2242_);
lean_inc(v_a_2241_);
lean_dec(v___x_2227_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2249_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2247_; 
if (v_isShared_2245_ == 0)
{
v___x_2247_ = v___x_2244_;
goto v_reusejp_2246_;
}
else
{
lean_object* v_reuseFailAlloc_2248_; 
v_reuseFailAlloc_2248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2248_, 0, v_a_2241_);
lean_ctor_set(v_reuseFailAlloc_2248_, 1, v_a_2242_);
v___x_2247_ = v_reuseFailAlloc_2248_;
goto v_reusejp_2246_;
}
v_reusejp_2246_:
{
return v___x_2247_;
}
}
}
}
else
{
lean_object* v_a_2250_; lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec_ref(v___y_2140_);
lean_dec_ref(v_self_2139_);
lean_dec_ref(v_dir_2138_);
lean_dec(v___x_2137_);
lean_dec_ref(v_pkg_2134_);
lean_dec_ref(v_config_2132_);
lean_dec(v___x_2131_);
v_a_2250_ = lean_ctor_get(v___x_2224_, 0);
v_a_2251_ = lean_ctor_get(v___x_2224_, 1);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2224_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2224_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_inc(v_a_2250_);
lean_dec(v___x_2224_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2250_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
v___jp_2147_:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___f_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2154_ = lean_box(v___y_2149_);
v___x_2155_ = lean_box(v_shouldExport_2135_);
v___x_2156_ = lean_box(v___x_2136_);
v___x_2157_ = lean_box_usize(v___y_2151_);
v___f_2158_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2158_, 0, v___x_2154_);
lean_closure_set(v___f_2158_, 1, v___y_2153_);
lean_closure_set(v___f_2158_, 2, v___x_2155_);
lean_closure_set(v___f_2158_, 3, v___x_2156_);
lean_closure_set(v___f_2158_, 4, v___x_2157_);
v___x_2159_ = l_Array_append___redArg(v___y_2152_, v___y_2148_);
lean_dec_ref(v___y_2148_);
v___x_2160_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_2161_ = l_Lake_Job_collectArray___redArg(v___x_2159_, v___x_2160_);
lean_dec_ref(v___x_2159_);
v___x_2162_ = lean_unsigned_to_nat(0u);
v___x_2163_ = 0;
v___x_2164_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2165_ = l_Lake_Job_mapM___redArg(v___x_2137_, v___x_2161_, v___f_2158_, v___x_2162_, v___x_2163_, v___y_2140_, v___x_2131_, v___y_2142_, v___y_2143_, v___y_2144_, v___x_2164_);
lean_dec(v___x_2131_);
v___x_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
lean_ctor_set(v___x_2166_, 1, v___y_2150_);
return v___x_2166_;
}
v___jp_2167_:
{
lean_object* v_toLeanConfig_2170_; lean_object* v_toLeanConfig_2171_; uint8_t v_bootstrap_2172_; lean_object* v_buildDir_2173_; lean_object* v_nativeLibDir_2174_; lean_object* v_moreLinkObjs_2175_; lean_object* v_moreLinkObjs_2176_; lean_object* v___x_2177_; size_t v_sz_2178_; size_t v___x_2179_; lean_object* v___x_2180_; 
v_toLeanConfig_2170_ = lean_ctor_get(v_config_2132_, 1);
lean_inc_ref(v_toLeanConfig_2170_);
v_toLeanConfig_2171_ = lean_ctor_get(v_config_2133_, 0);
v_bootstrap_2172_ = lean_ctor_get_uint8(v_config_2132_, sizeof(void*)*27);
v_buildDir_2173_ = lean_ctor_get(v_config_2132_, 5);
lean_inc_ref(v_buildDir_2173_);
v_nativeLibDir_2174_ = lean_ctor_get(v_config_2132_, 7);
lean_inc_ref(v_nativeLibDir_2174_);
lean_dec_ref(v_config_2132_);
v_moreLinkObjs_2175_ = lean_ctor_get(v_toLeanConfig_2170_, 6);
lean_inc_ref(v_moreLinkObjs_2175_);
lean_dec_ref(v_toLeanConfig_2170_);
v_moreLinkObjs_2176_ = lean_ctor_get(v_toLeanConfig_2171_, 6);
v___x_2177_ = l_Array_append___redArg(v_moreLinkObjs_2175_, v_moreLinkObjs_2176_);
v_sz_2178_ = lean_array_size(v___x_2177_);
v___x_2179_ = ((size_t)0ULL);
lean_inc_ref(v___y_2140_);
v___x_2180_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v_pkg_2134_, v_sz_2178_, v___x_2179_, v___x_2177_, v___y_2140_, v___x_2131_, v___y_2142_, v___y_2143_, v___y_2144_, v_a_2169_);
if (lean_obj_tag(v___x_2180_) == 0)
{
if (v_shouldExport_2135_ == 0)
{
lean_object* v_a_2181_; lean_object* v_a_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
v_a_2182_ = lean_ctor_get(v___x_2180_, 1);
lean_inc(v_a_2182_);
lean_dec_ref_known(v___x_2180_, 2);
v___x_2183_ = l_System_FilePath_normalize(v_buildDir_2173_);
v___x_2184_ = l_Lake_joinRelative(v_dir_2138_, v___x_2183_);
v___x_2185_ = l_System_FilePath_normalize(v_nativeLibDir_2174_);
v___x_2186_ = l_Lake_joinRelative(v___x_2184_, v___x_2185_);
v___x_2187_ = l_Lake_LeanLib_libName(v_self_2139_);
v___x_2188_ = l_Lake_nameToStaticLib(v___x_2187_, v_shouldExport_2135_);
v___x_2189_ = l_Lake_joinRelative(v___x_2186_, v___x_2188_);
v___y_2148_ = v_a_2181_;
v___y_2149_ = v_bootstrap_2172_;
v___y_2150_ = v_a_2182_;
v___y_2151_ = v___x_2179_;
v___y_2152_ = v_a_2168_;
v___y_2153_ = v___x_2189_;
goto v___jp_2147_;
}
else
{
lean_object* v_a_2190_; lean_object* v_a_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; uint8_t v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v_a_2190_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2190_);
v_a_2191_ = lean_ctor_get(v___x_2180_, 1);
lean_inc(v_a_2191_);
lean_dec_ref_known(v___x_2180_, 2);
v___x_2192_ = l_System_FilePath_normalize(v_buildDir_2173_);
v___x_2193_ = l_Lake_joinRelative(v_dir_2138_, v___x_2192_);
v___x_2194_ = l_System_FilePath_normalize(v_nativeLibDir_2174_);
v___x_2195_ = l_Lake_joinRelative(v___x_2193_, v___x_2194_);
v___x_2196_ = l_Lake_LeanLib_libName(v_self_2139_);
v___x_2197_ = 0;
v___x_2198_ = l_Lake_nameToStaticLib(v___x_2196_, v___x_2197_);
v___x_2199_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_2200_ = l_System_FilePath_addExtension(v___x_2198_, v___x_2199_);
v___x_2201_ = l_Lake_joinRelative(v___x_2195_, v___x_2200_);
v___y_2148_ = v_a_2190_;
v___y_2149_ = v_bootstrap_2172_;
v___y_2150_ = v_a_2191_;
v___y_2151_ = v___x_2179_;
v___y_2152_ = v_a_2168_;
v___y_2153_ = v___x_2201_;
goto v___jp_2147_;
}
}
else
{
lean_object* v_a_2202_; lean_object* v_a_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2210_; 
lean_dec_ref(v_nativeLibDir_2174_);
lean_dec_ref(v_buildDir_2173_);
lean_dec_ref(v_a_2168_);
lean_dec_ref(v___y_2140_);
lean_dec_ref(v_self_2139_);
lean_dec_ref(v_dir_2138_);
lean_dec(v___x_2137_);
lean_dec(v___x_2131_);
v_a_2202_ = lean_ctor_get(v___x_2180_, 0);
v_a_2203_ = lean_ctor_get(v___x_2180_, 1);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2205_ = v___x_2180_;
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_a_2203_);
lean_inc(v_a_2202_);
lean_dec(v___x_2180_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2210_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2208_; 
if (v_isShared_2206_ == 0)
{
v___x_2208_ = v___x_2205_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2202_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_a_2203_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
v___jp_2211_:
{
if (lean_obj_tag(v___y_2212_) == 0)
{
lean_object* v_a_2213_; lean_object* v_a_2214_; 
v_a_2213_ = lean_ctor_get(v___y_2212_, 0);
lean_inc(v_a_2213_);
v_a_2214_ = lean_ctor_get(v___y_2212_, 1);
lean_inc(v_a_2214_);
lean_dec_ref_known(v___y_2212_, 2);
v_a_2168_ = v_a_2213_;
v_a_2169_ = v_a_2214_;
goto v___jp_2167_;
}
else
{
lean_object* v_a_2215_; lean_object* v_a_2216_; lean_object* v___x_2218_; uint8_t v_isShared_2219_; uint8_t v_isSharedCheck_2223_; 
lean_dec_ref(v___y_2140_);
lean_dec_ref(v_self_2139_);
lean_dec_ref(v_dir_2138_);
lean_dec(v___x_2137_);
lean_dec_ref(v_pkg_2134_);
lean_dec_ref(v_config_2132_);
lean_dec(v___x_2131_);
v_a_2215_ = lean_ctor_get(v___y_2212_, 0);
v_a_2216_ = lean_ctor_get(v___y_2212_, 1);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___y_2212_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2218_ = v___y_2212_;
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
else
{
lean_inc(v_a_2216_);
lean_inc(v_a_2215_);
lean_dec(v___y_2212_);
v___x_2218_ = lean_box(0);
v_isShared_2219_ = v_isSharedCheck_2223_;
goto v_resetjp_2217_;
}
v_resetjp_2217_:
{
lean_object* v___x_2221_; 
if (v_isShared_2219_ == 0)
{
v___x_2221_ = v___x_2218_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2215_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_a_2216_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object** _args){
lean_object* v___x_2259_ = _args[0];
lean_object* v___x_2260_ = _args[1];
lean_object* v_config_2261_ = _args[2];
lean_object* v_config_2262_ = _args[3];
lean_object* v_pkg_2263_ = _args[4];
lean_object* v_shouldExport_2264_ = _args[5];
lean_object* v___x_2265_ = _args[6];
lean_object* v___x_2266_ = _args[7];
lean_object* v_dir_2267_ = _args[8];
lean_object* v_self_2268_ = _args[9];
lean_object* v___y_2269_ = _args[10];
lean_object* v___y_2270_ = _args[11];
lean_object* v___y_2271_ = _args[12];
lean_object* v___y_2272_ = _args[13];
lean_object* v___y_2273_ = _args[14];
lean_object* v___y_2274_ = _args[15];
lean_object* v___y_2275_ = _args[16];
_start:
{
uint8_t v_shouldExport_boxed_2276_; uint8_t v___x_7573__boxed_2277_; lean_object* v_res_2278_; 
v_shouldExport_boxed_2276_ = lean_unbox(v_shouldExport_2264_);
v___x_7573__boxed_2277_ = lean_unbox(v___x_2265_);
v_res_2278_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(v___x_2259_, v___x_2260_, v_config_2261_, v_config_2262_, v_pkg_2263_, v_shouldExport_boxed_2276_, v___x_7573__boxed_2277_, v___x_2266_, v_dir_2267_, v_self_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec(v_config_2262_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object* v___y_2279_, lean_object* v_self_2280_, uint8_t v_shouldExport_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_toBuildConfig_2288_; lean_object* v_registeredJobs_2289_; uint8_t v_verbosity_2290_; lean_object* v___x_2291_; uint8_t v___x_2292_; uint8_t v___x_2293_; uint8_t v___x_2294_; lean_object* v___y_2296_; 
v_toBuildConfig_2288_ = lean_ctor_get(v_a_2285_, 0);
v_registeredJobs_2289_ = lean_ctor_get(v_a_2285_, 3);
v_verbosity_2290_ = lean_ctor_get_uint8(v_toBuildConfig_2288_, sizeof(void*)*3 + 3);
v___x_2291_ = l_Lake_instDataKindFilePath;
v___x_2292_ = 2;
v___x_2293_ = l_Lake_instDecidableEqVerbosity(v_verbosity_2290_, v___x_2292_);
v___x_2294_ = 1;
if (v___x_2293_ == 0)
{
lean_object* v___x_2341_; 
v___x_2341_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_2296_ = v___x_2341_;
goto v___jp_2295_;
}
else
{
if (v_shouldExport_2281_ == 0)
{
lean_object* v___x_2342_; 
v___x_2342_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___y_2296_ = v___x_2342_;
goto v___jp_2295_;
}
else
{
lean_object* v___x_2343_; 
v___x_2343_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_2296_ = v___x_2343_;
goto v___jp_2295_;
}
}
v___jp_2295_:
{
lean_object* v_pkg_2297_; lean_object* v_name_2298_; lean_object* v_config_2299_; lean_object* v_keyName_2300_; lean_object* v_dir_2301_; lean_object* v_config_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___f_2310_; lean_object* v___x_2311_; 
v_pkg_2297_ = lean_ctor_get(v_self_2280_, 0);
lean_inc_ref_n(v_pkg_2297_, 2);
v_name_2298_ = lean_ctor_get(v_self_2280_, 1);
lean_inc_n(v_name_2298_, 2);
v_config_2299_ = lean_ctor_get(v_self_2280_, 2);
lean_inc(v_config_2299_);
v_keyName_2300_ = lean_ctor_get(v_pkg_2297_, 2);
v_dir_2301_ = lean_ctor_get(v_pkg_2297_, 4);
lean_inc_ref(v_dir_2301_);
v_config_2302_ = lean_ctor_get(v_pkg_2297_, 6);
lean_inc_ref(v_config_2302_);
v___x_2303_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_2300_);
v___x_2304_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2304_, 0, v_keyName_2300_);
lean_ctor_set(v___x_2304_, 1, v_name_2298_);
v___x_2305_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_2280_);
v___x_2306_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2304_);
lean_ctor_set(v___x_2306_, 1, v___x_2305_);
lean_ctor_set(v___x_2306_, 2, v_self_2280_);
lean_ctor_set(v___x_2306_, 3, v___x_2303_);
v___x_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2307_, 0, v_pkg_2297_);
v___x_2308_ = lean_box(v_shouldExport_2281_);
v___x_2309_ = lean_box(v___x_2294_);
v___f_2310_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed), 17, 10);
lean_closure_set(v___f_2310_, 0, v___x_2306_);
lean_closure_set(v___f_2310_, 1, v___x_2307_);
lean_closure_set(v___f_2310_, 2, v_config_2302_);
lean_closure_set(v___f_2310_, 3, v_config_2299_);
lean_closure_set(v___f_2310_, 4, v_pkg_2297_);
lean_closure_set(v___f_2310_, 5, v___x_2308_);
lean_closure_set(v___f_2310_, 6, v___x_2309_);
lean_closure_set(v___f_2310_, 7, v___x_2291_);
lean_closure_set(v___f_2310_, 8, v_dir_2301_);
lean_closure_set(v___f_2310_, 9, v_self_2280_);
v___x_2311_ = l_Lake_ensureJob___redArg(v___x_2291_, v___f_2310_, v___y_2279_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2340_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
v_a_2313_ = lean_ctor_get(v___x_2311_, 1);
v_isSharedCheck_2340_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2315_ = v___x_2311_;
v_isShared_2316_ = v_isSharedCheck_2340_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_inc(v_a_2312_);
lean_dec(v___x_2311_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2340_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v_task_2317_; lean_object* v_kind_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2338_; 
v_task_2317_ = lean_ctor_get(v_a_2312_, 0);
v_kind_2318_ = lean_ctor_get(v_a_2312_, 1);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_a_2312_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; 
v_unused_2339_ = lean_ctor_get(v_a_2312_, 2);
lean_dec(v_unused_2339_);
v___x_2320_ = v_a_2312_;
v_isShared_2321_ = v_isSharedCheck_2338_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_kind_2318_);
lean_inc(v_task_2317_);
lean_dec(v_a_2312_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2338_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; uint8_t v___x_2327_; lean_object* v_job_2329_; 
v___x_2322_ = lean_st_ref_take(v_registeredJobs_2289_);
v___x_2323_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2298_, v___x_2294_);
v___x_2324_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0));
v___x_2325_ = lean_string_append(v___x_2323_, v___x_2324_);
v___x_2326_ = lean_string_append(v___x_2325_, v___y_2296_);
v___x_2327_ = 0;
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 2, v___x_2326_);
v_job_2329_ = v___x_2320_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_task_2317_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v_kind_2318_);
lean_ctor_set(v_reuseFailAlloc_2337_, 2, v___x_2326_);
v_job_2329_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2335_; 
lean_ctor_set_uint8(v_job_2329_, sizeof(void*)*3, v___x_2327_);
lean_inc_ref(v_job_2329_);
v___x_2330_ = l_Lake_Job_toOpaque___redArg(v_job_2329_);
v___x_2331_ = lean_array_push(v___x_2322_, v___x_2330_);
v___x_2332_ = lean_st_ref_set(v_registeredJobs_2289_, v___x_2331_);
v___x_2333_ = l_Lake_Job_renew___redArg(v_job_2329_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set(v___x_2315_, 0, v___x_2333_);
v___x_2335_ = v___x_2315_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v___x_2333_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_a_2313_);
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
else
{
lean_dec(v_name_2298_);
return v___x_2311_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object* v___y_2344_, lean_object* v_self_2345_, lean_object* v_shouldExport_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_){
_start:
{
uint8_t v_shouldExport_boxed_2353_; lean_object* v_res_2354_; 
v_shouldExport_boxed_2353_ = lean_unbox(v_shouldExport_2346_);
v_res_2354_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2344_, v_self_2345_, v_shouldExport_boxed_2353_, v_a_2347_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_);
lean_dec_ref(v_a_2350_);
lean_dec(v_a_2349_);
lean_dec(v_a_2348_);
lean_dec(v_a_2347_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object* v_x_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
uint8_t v___x_2363_; lean_object* v___x_2364_; 
v___x_2363_ = 0;
v___x_2364_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2356_, v_x_2355_, v___x_2363_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object* v_x_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
lean_object* v_res_2373_; 
v_res_2373_ = l_Lake_LeanLib_staticFacetConfig___lam__0(v_x_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec(v___y_2368_);
lean_dec(v___y_2367_);
return v_res_2373_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_2376_; uint8_t v___x_2377_; lean_object* v___x_2378_; lean_object* v___f_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___f_2376_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2377_ = 1;
v___x_2378_ = l_Lake_instDataKindFilePath;
v___f_2379_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__0));
v___x_2380_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2381_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
lean_ctor_set(v___x_2381_, 1, v___f_2379_);
lean_ctor_set(v___x_2381_, 2, v___x_2378_);
lean_ctor_set(v___x_2381_, 3, v___f_2376_);
lean_ctor_set_uint8(v___x_2381_, sizeof(void*)*4, v___x_2377_);
lean_ctor_set_uint8(v___x_2381_, sizeof(void*)*4 + 1, v___x_2377_);
return v___x_2381_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig(void){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = lean_obj_once(&l_Lake_LeanLib_staticFacetConfig___closed__2, &l_Lake_LeanLib_staticFacetConfig___closed__2_once, _init_l_Lake_LeanLib_staticFacetConfig___closed__2);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object* v_a_2383_, lean_object* v_as_2384_, size_t v_i_2385_, size_t v_stop_2386_, lean_object* v_b_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_2383_, v_as_2384_, v_i_2385_, v_stop_2386_, v_b_2387_, v___y_2393_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object* v_a_2396_, lean_object* v_as_2397_, lean_object* v_i_2398_, lean_object* v_stop_2399_, lean_object* v_b_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
size_t v_i_boxed_2408_; size_t v_stop_boxed_2409_; lean_object* v_res_2410_; 
v_i_boxed_2408_ = lean_unbox_usize(v_i_2398_);
lean_dec(v_i_2398_);
v_stop_boxed_2409_ = lean_unbox_usize(v_stop_2399_);
lean_dec(v_stop_2399_);
v_res_2410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(v_a_2396_, v_as_2397_, v_i_boxed_2408_, v_stop_boxed_2409_, v_b_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec_ref(v_as_2397_);
lean_dec(v_a_2396_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object* v_x_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
uint8_t v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = 1;
v___x_2420_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2412_, v_x_2411_, v___x_2419_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object* v_x_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lake_LeanLib_staticExportFacetConfig___lam__0(v_x_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec(v___y_2424_);
lean_dec(v___y_2423_);
return v_res_2429_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_2431_; uint8_t v___x_2432_; lean_object* v___x_2433_; lean_object* v___f_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___f_2431_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2432_ = 1;
v___x_2433_ = l_Lake_instDataKindFilePath;
v___f_2434_ = ((lean_object*)(l_Lake_LeanLib_staticExportFacetConfig___closed__0));
v___x_2435_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2436_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v___f_2434_);
lean_ctor_set(v___x_2436_, 2, v___x_2433_);
lean_ctor_set(v___x_2436_, 3, v___f_2431_);
lean_ctor_set_uint8(v___x_2436_, sizeof(void*)*4, v___x_2432_);
lean_ctor_set_uint8(v___x_2436_, sizeof(void*)*4 + 1, v___x_2432_);
return v___x_2436_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig(void){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = lean_obj_once(&l_Lake_LeanLib_staticExportFacetConfig___closed__1, &l_Lake_LeanLib_staticExportFacetConfig___closed__1_once, _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1);
return v___x_2437_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0(void){
_start:
{
uint8_t v___x_2438_; lean_object* v_name_2439_; lean_object* v___x_2440_; 
v___x_2438_ = 1;
v_name_2439_ = l_Lake_instDataKindDynlib;
v___x_2440_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2439_, v___x_2438_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object* v_defaultPkg_2441_, lean_object* v_self_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_){
_start:
{
uint8_t v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = 1;
lean_inc_ref_n(v_self_2442_, 2);
v___x_2451_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_2441_, v_self_2442_, v_self_2442_, v___x_2450_, v_a_2443_, v_a_2444_, v_a_2445_, v_a_2446_, v_a_2447_, v_a_2448_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v_a_2452_; lean_object* v_snd_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2494_; 
v_a_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_a_2452_);
v_snd_2453_ = lean_ctor_get(v_a_2452_, 1);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_a_2452_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v_a_2452_, 0);
lean_dec(v_unused_2495_);
v___x_2455_ = v_a_2452_;
v_isShared_2456_ = v_isSharedCheck_2494_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_snd_2453_);
lean_dec(v_a_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2494_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v_a_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2492_; 
v_a_2457_ = lean_ctor_get(v___x_2451_, 1);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2451_, 0);
lean_dec(v_unused_2493_);
v___x_2459_ = v___x_2451_;
v_isShared_2460_ = v_isSharedCheck_2492_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_a_2457_);
lean_dec(v___x_2451_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2492_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v_kind_2461_; lean_object* v_name_2462_; lean_object* v___y_2464_; uint8_t v___x_2482_; 
v_kind_2461_ = lean_ctor_get(v_snd_2453_, 1);
v_name_2462_ = l_Lake_instDataKindDynlib;
v___x_2482_ = lean_name_eq(v_kind_2461_, v_name_2462_);
if (v___x_2482_ == 0)
{
uint8_t v___x_2483_; 
lean_inc(v_kind_2461_);
lean_del_object(v___x_2455_);
lean_dec(v_snd_2453_);
v___x_2483_ = l_Lean_Name_isAnonymous(v_kind_2461_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2484_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_2485_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2461_, v___x_2450_);
v___x_2486_ = lean_string_append(v___x_2484_, v___x_2485_);
lean_dec_ref(v___x_2485_);
v___x_2487_ = lean_string_append(v___x_2486_, v___x_2484_);
v___y_2464_ = v___x_2487_;
goto v___jp_2463_;
}
else
{
lean_object* v___x_2488_; 
lean_dec(v_kind_2461_);
v___x_2488_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_2464_ = v___x_2488_;
goto v___jp_2463_;
}
}
else
{
lean_object* v___x_2490_; 
lean_del_object(v___x_2459_);
lean_dec_ref(v_self_2442_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 1, v_a_2457_);
lean_ctor_set(v___x_2455_, 0, v_snd_2453_);
v___x_2490_ = v___x_2455_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_snd_2453_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v_a_2457_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
v___jp_2463_:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; uint8_t v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2465_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_2466_ = l_Lake_PartialBuildKey_toString(v_self_2442_);
v___x_2467_ = lean_string_append(v___x_2465_, v___x_2466_);
lean_dec_ref(v___x_2466_);
v___x_2468_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_2469_ = lean_string_append(v___x_2467_, v___x_2468_);
v___x_2470_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0);
v___x_2471_ = lean_string_append(v___x_2469_, v___x_2470_);
v___x_2472_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_2473_ = lean_string_append(v___x_2471_, v___x_2472_);
v___x_2474_ = lean_string_append(v___x_2473_, v___y_2464_);
lean_dec_ref(v___y_2464_);
v___x_2475_ = 3;
v___x_2476_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2476_, 0, v___x_2474_);
lean_ctor_set_uint8(v___x_2476_, sizeof(void*)*1, v___x_2475_);
v___x_2477_ = lean_array_get_size(v_a_2457_);
v___x_2478_ = lean_array_push(v_a_2457_, v___x_2476_);
if (v_isShared_2460_ == 0)
{
lean_ctor_set_tag(v___x_2459_, 1);
lean_ctor_set(v___x_2459_, 1, v___x_2478_);
lean_ctor_set(v___x_2459_, 0, v___x_2477_);
v___x_2480_ = v___x_2459_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2477_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v_a_2497_; lean_object* v___x_2499_; uint8_t v_isShared_2500_; uint8_t v_isSharedCheck_2504_; 
lean_dec_ref(v_self_2442_);
v_a_2496_ = lean_ctor_get(v___x_2451_, 0);
v_a_2497_ = lean_ctor_get(v___x_2451_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2499_ = v___x_2451_;
v_isShared_2500_ = v_isSharedCheck_2504_;
goto v_resetjp_2498_;
}
else
{
lean_inc(v_a_2497_);
lean_inc(v_a_2496_);
lean_dec(v___x_2451_);
v___x_2499_ = lean_box(0);
v_isShared_2500_ = v_isSharedCheck_2504_;
goto v_resetjp_2498_;
}
v_resetjp_2498_:
{
lean_object* v___x_2502_; 
if (v_isShared_2500_ == 0)
{
v___x_2502_ = v___x_2499_;
goto v_reusejp_2501_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v_a_2496_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v_a_2497_);
v___x_2502_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2501_;
}
v_reusejp_2501_:
{
return v___x_2502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object* v_defaultPkg_2505_, lean_object* v_self_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v_defaultPkg_2505_, v_self_2506_, v_a_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, v_a_2512_);
lean_dec_ref(v_a_2511_);
lean_dec(v_a_2510_);
lean_dec(v_a_2509_);
lean_dec(v_a_2508_);
return v_res_2514_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = ((lean_object*)(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0));
v___x_2518_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2518_);
lean_ctor_set(v___x_2519_, 1, v___x_2517_);
return v___x_2519_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5(void){
_start:
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1);
return v___x_2520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object* v___x_2521_, lean_object* v_as_2522_, size_t v_i_2523_, size_t v_stop_2524_, lean_object* v_b_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_){
_start:
{
uint8_t v___x_2533_; 
v___x_2533_ = lean_usize_dec_eq(v_i_2523_, v_stop_2524_);
if (v___x_2533_ == 0)
{
lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = lean_array_uget_borrowed(v_as_2522_, v_i_2523_);
lean_inc_ref(v___y_2526_);
lean_inc(v___x_2534_);
lean_inc_ref(v___x_2521_);
v___x_2535_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_2521_, v___x_2534_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v_a_2537_; lean_object* v___x_2538_; size_t v___x_2539_; size_t v___x_2540_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
v_a_2537_ = lean_ctor_get(v___x_2535_, 1);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2535_, 2);
v___x_2538_ = lean_array_push(v_b_2525_, v_a_2536_);
v___x_2539_ = ((size_t)1ULL);
v___x_2540_ = lean_usize_add(v_i_2523_, v___x_2539_);
v_i_2523_ = v___x_2540_;
v_b_2525_ = v___x_2538_;
v___y_2531_ = v_a_2537_;
goto _start;
}
else
{
lean_object* v_a_2542_; lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec_ref(v___y_2526_);
lean_dec_ref(v_b_2525_);
lean_dec_ref(v___x_2521_);
v_a_2542_ = lean_ctor_get(v___x_2535_, 0);
v_a_2543_ = lean_ctor_get(v___x_2535_, 1);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2535_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_inc(v_a_2542_);
lean_dec(v___x_2535_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2542_);
lean_ctor_set(v_reuseFailAlloc_2549_, 1, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v___x_2551_; 
lean_dec_ref(v___y_2526_);
lean_dec_ref(v___x_2521_);
v___x_2551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2551_, 0, v_b_2525_);
lean_ctor_set(v___x_2551_, 1, v___y_2531_);
return v___x_2551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object* v___x_2552_, lean_object* v_as_2553_, lean_object* v_i_2554_, lean_object* v_stop_2555_, lean_object* v_b_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
size_t v_i_boxed_2564_; size_t v_stop_boxed_2565_; lean_object* v_res_2566_; 
v_i_boxed_2564_ = lean_unbox_usize(v_i_2554_);
lean_dec(v_i_2554_);
v_stop_boxed_2565_ = lean_unbox_usize(v_stop_2555_);
lean_dec(v_stop_2555_);
v_res_2566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v___x_2552_, v_as_2553_, v_i_boxed_2564_, v_stop_boxed_2565_, v_b_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_);
lean_dec_ref(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec_ref(v_as_2553_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object* v_self_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v_toHashSet_2569_; lean_object* v_toArray_2570_; uint8_t v___x_2571_; 
v_toHashSet_2569_ = lean_ctor_get(v_self_2567_, 0);
v_toArray_2570_ = lean_ctor_get(v_self_2567_, 1);
v___x_2571_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_toHashSet_2569_, v_a_2568_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2581_; 
lean_inc_ref(v_toArray_2570_);
lean_inc_ref(v_toHashSet_2569_);
v_isSharedCheck_2581_ = !lean_is_exclusive(v_self_2567_);
if (v_isSharedCheck_2581_ == 0)
{
lean_object* v_unused_2582_; lean_object* v_unused_2583_; 
v_unused_2582_ = lean_ctor_get(v_self_2567_, 1);
lean_dec(v_unused_2582_);
v_unused_2583_ = lean_ctor_get(v_self_2567_, 0);
lean_dec(v_unused_2583_);
v___x_2573_ = v_self_2567_;
v_isShared_2574_ = v_isSharedCheck_2581_;
goto v_resetjp_2572_;
}
else
{
lean_dec(v_self_2567_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2581_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; 
v___x_2575_ = lean_box(0);
lean_inc_ref(v_a_2568_);
v___x_2576_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_toHashSet_2569_, v_a_2568_, v___x_2575_);
v___x_2577_ = lean_array_push(v_toArray_2570_, v_a_2568_);
if (v_isShared_2574_ == 0)
{
lean_ctor_set(v___x_2573_, 1, v___x_2577_);
lean_ctor_set(v___x_2573_, 0, v___x_2576_);
v___x_2579_ = v___x_2573_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v___x_2576_);
lean_ctor_set(v_reuseFailAlloc_2580_, 1, v___x_2577_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
else
{
lean_dec_ref(v_a_2568_);
return v_self_2567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object* v_as_2584_, size_t v_i_2585_, size_t v_stop_2586_, lean_object* v_b_2587_){
_start:
{
uint8_t v___x_2588_; 
v___x_2588_ = lean_usize_dec_eq(v_i_2585_, v_stop_2586_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; lean_object* v___x_2590_; size_t v___x_2591_; size_t v___x_2592_; 
v___x_2589_ = lean_array_uget_borrowed(v_as_2584_, v_i_2585_);
lean_inc(v___x_2589_);
v___x_2590_ = l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(v_b_2587_, v___x_2589_);
v___x_2591_ = ((size_t)1ULL);
v___x_2592_ = lean_usize_add(v_i_2585_, v___x_2591_);
v_i_2585_ = v___x_2592_;
v_b_2587_ = v___x_2590_;
goto _start;
}
else
{
return v_b_2587_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object* v_as_2594_, lean_object* v_i_2595_, lean_object* v_stop_2596_, lean_object* v_b_2597_){
_start:
{
size_t v_i_boxed_2598_; size_t v_stop_boxed_2599_; lean_object* v_res_2600_; 
v_i_boxed_2598_ = lean_unbox_usize(v_i_2595_);
lean_dec(v_i_2595_);
v_stop_boxed_2599_ = lean_unbox_usize(v_stop_2596_);
lean_dec(v_stop_2596_);
v_res_2600_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_as_2594_, v_i_boxed_2598_, v_stop_boxed_2599_, v_b_2597_);
lean_dec_ref(v_as_2594_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object* v_self_2601_, lean_object* v_arr_2602_){
_start:
{
lean_object* v___x_2603_; lean_object* v___x_2604_; uint8_t v___x_2605_; 
v___x_2603_ = lean_unsigned_to_nat(0u);
v___x_2604_ = lean_array_get_size(v_arr_2602_);
v___x_2605_ = lean_nat_dec_lt(v___x_2603_, v___x_2604_);
if (v___x_2605_ == 0)
{
return v_self_2601_;
}
else
{
uint8_t v___x_2606_; 
v___x_2606_ = lean_nat_dec_le(v___x_2604_, v___x_2604_);
if (v___x_2606_ == 0)
{
if (v___x_2605_ == 0)
{
return v_self_2601_;
}
else
{
size_t v___x_2607_; size_t v___x_2608_; lean_object* v___x_2609_; 
v___x_2607_ = ((size_t)0ULL);
v___x_2608_ = lean_usize_of_nat(v___x_2604_);
v___x_2609_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2602_, v___x_2607_, v___x_2608_, v_self_2601_);
return v___x_2609_;
}
}
else
{
size_t v___x_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = ((size_t)0ULL);
v___x_2611_ = lean_usize_of_nat(v___x_2604_);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2602_, v___x_2610_, v___x_2611_, v_self_2601_);
return v___x_2612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object* v_self_2613_, lean_object* v_arr_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_self_2613_, v_arr_2614_);
lean_dec_ref(v_arr_2614_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object* v_as_2616_, size_t v_i_2617_, size_t v_stop_2618_, lean_object* v_b_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
uint8_t v___x_2627_; 
v___x_2627_ = lean_usize_dec_eq(v_i_2617_, v_stop_2618_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; lean_object* v_lib_2629_; lean_object* v_pkg_2630_; lean_object* v_name_2631_; lean_object* v_keyName_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2628_ = lean_array_uget_borrowed(v_as_2616_, v_i_2617_);
v_lib_2629_ = lean_ctor_get(v___x_2628_, 0);
v_pkg_2630_ = lean_ctor_get(v_lib_2629_, 0);
v_name_2631_ = lean_ctor_get(v___x_2628_, 1);
v_keyName_2632_ = lean_ctor_get(v_pkg_2630_, 2);
v___x_2633_ = l_Lake_Module_transImportsFacet;
lean_inc(v_name_2631_);
lean_inc(v_keyName_2632_);
v___x_2634_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2634_, 0, v_keyName_2632_);
lean_ctor_set(v___x_2634_, 1, v_name_2631_);
v___x_2635_ = l_Lake_Module_keyword;
lean_inc(v___x_2628_);
v___x_2636_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2634_);
lean_ctor_set(v___x_2636_, 1, v___x_2635_);
lean_ctor_set(v___x_2636_, 2, v___x_2628_);
lean_ctor_set(v___x_2636_, 3, v___x_2633_);
lean_inc_ref(v___y_2620_);
lean_inc_ref(v___y_2624_);
lean_inc(v___y_2623_);
lean_inc(v___y_2622_);
lean_inc(v___y_2621_);
v___x_2637_ = lean_apply_7(v___y_2620_, v___x_2636_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, lean_box(0));
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; lean_object* v_a_2639_; lean_object* v___x_2640_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
v_a_2639_ = lean_ctor_get(v___x_2637_, 1);
lean_inc(v_a_2639_);
lean_dec_ref_known(v___x_2637_, 2);
v___x_2640_ = l_Lake_Job_await___redArg(v_a_2638_, v_a_2639_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v_a_2641_; lean_object* v_a_2642_; lean_object* v___x_2643_; size_t v___x_2644_; size_t v___x_2645_; 
v_a_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc(v_a_2641_);
v_a_2642_ = lean_ctor_get(v___x_2640_, 1);
lean_inc(v_a_2642_);
lean_dec_ref_known(v___x_2640_, 2);
v___x_2643_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_b_2619_, v_a_2641_);
lean_dec(v_a_2641_);
v___x_2644_ = ((size_t)1ULL);
v___x_2645_ = lean_usize_add(v_i_2617_, v___x_2644_);
v_i_2617_ = v___x_2645_;
v_b_2619_ = v___x_2643_;
v___y_2625_ = v_a_2642_;
goto _start;
}
else
{
lean_object* v_a_2647_; lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2655_; 
lean_dec_ref(v___y_2620_);
lean_dec_ref(v_b_2619_);
v_a_2647_ = lean_ctor_get(v___x_2640_, 0);
v_a_2648_ = lean_ctor_get(v___x_2640_, 1);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2640_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2650_ = v___x_2640_;
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_inc(v_a_2647_);
lean_dec(v___x_2640_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2653_; 
if (v_isShared_2651_ == 0)
{
v___x_2653_ = v___x_2650_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_a_2647_);
lean_ctor_set(v_reuseFailAlloc_2654_, 1, v_a_2648_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
}
else
{
lean_object* v_a_2656_; lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
lean_dec_ref(v___y_2620_);
lean_dec_ref(v_b_2619_);
v_a_2656_ = lean_ctor_get(v___x_2637_, 0);
v_a_2657_ = lean_ctor_get(v___x_2637_, 1);
v_isSharedCheck_2664_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2659_ = v___x_2637_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_inc(v_a_2656_);
lean_dec(v___x_2637_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_a_2656_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_a_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
}
else
{
lean_object* v___x_2665_; 
lean_dec_ref(v___y_2620_);
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v_b_2619_);
lean_ctor_set(v___x_2665_, 1, v___y_2625_);
return v___x_2665_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object* v_as_2666_, lean_object* v_i_2667_, lean_object* v_stop_2668_, lean_object* v_b_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
size_t v_i_boxed_2677_; size_t v_stop_boxed_2678_; lean_object* v_res_2679_; 
v_i_boxed_2677_ = lean_unbox_usize(v_i_2667_);
lean_dec(v_i_2667_);
v_stop_boxed_2678_ = lean_unbox_usize(v_stop_2668_);
lean_dec(v_stop_2668_);
v_res_2679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_as_2666_, v_i_boxed_2677_, v_stop_boxed_2678_, v_b_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v___y_2673_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec_ref(v_as_2666_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object* v_as_2680_, size_t v_i_2681_, size_t v_stop_2682_, lean_object* v_b_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
uint8_t v___x_2691_; 
v___x_2691_ = lean_usize_dec_eq(v_i_2681_, v_stop_2682_);
if (v___x_2691_ == 0)
{
lean_object* v___x_2692_; lean_object* v_pkg_2693_; lean_object* v_name_2694_; lean_object* v_keyName_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2692_ = lean_array_uget_borrowed(v_as_2680_, v_i_2681_);
v_pkg_2693_ = lean_ctor_get(v___x_2692_, 0);
v_name_2694_ = lean_ctor_get(v___x_2692_, 1);
v_keyName_2695_ = lean_ctor_get(v_pkg_2693_, 2);
v___x_2696_ = l_Lake_ExternLib_dynlibFacet;
lean_inc(v_name_2694_);
lean_inc(v_keyName_2695_);
v___x_2697_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2697_, 0, v_keyName_2695_);
lean_ctor_set(v___x_2697_, 1, v_name_2694_);
v___x_2698_ = l_Lake_ExternLib_keyword;
lean_inc(v___x_2692_);
v___x_2699_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2697_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
lean_ctor_set(v___x_2699_, 2, v___x_2692_);
lean_ctor_set(v___x_2699_, 3, v___x_2696_);
lean_inc_ref(v___y_2684_);
lean_inc_ref(v___y_2688_);
lean_inc(v___y_2687_);
lean_inc(v___y_2686_);
lean_inc(v___y_2685_);
v___x_2700_ = lean_apply_7(v___y_2684_, v___x_2699_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, lean_box(0));
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v_a_2702_; lean_object* v___x_2703_; size_t v___x_2704_; size_t v___x_2705_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
v_a_2702_ = lean_ctor_get(v___x_2700_, 1);
lean_inc(v_a_2702_);
lean_dec_ref_known(v___x_2700_, 2);
v___x_2703_ = lean_array_push(v_b_2683_, v_a_2701_);
v___x_2704_ = ((size_t)1ULL);
v___x_2705_ = lean_usize_add(v_i_2681_, v___x_2704_);
v_i_2681_ = v___x_2705_;
v_b_2683_ = v___x_2703_;
v___y_2689_ = v_a_2702_;
goto _start;
}
else
{
lean_object* v_a_2707_; lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec_ref(v___y_2684_);
lean_dec_ref(v_b_2683_);
v_a_2707_ = lean_ctor_get(v___x_2700_, 0);
v_a_2708_ = lean_ctor_get(v___x_2700_, 1);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2700_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_inc(v_a_2707_);
lean_dec(v___x_2700_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2707_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
else
{
lean_object* v___x_2716_; 
lean_dec_ref(v___y_2684_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v_b_2683_);
lean_ctor_set(v___x_2716_, 1, v___y_2689_);
return v___x_2716_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object* v_as_2717_, lean_object* v_i_2718_, lean_object* v_stop_2719_, lean_object* v_b_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
size_t v_i_boxed_2728_; size_t v_stop_boxed_2729_; lean_object* v_res_2730_; 
v_i_boxed_2728_ = lean_unbox_usize(v_i_2718_);
lean_dec(v_i_2718_);
v_stop_boxed_2729_ = lean_unbox_usize(v_stop_2719_);
lean_dec(v_stop_2719_);
v_res_2730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v_as_2717_, v_i_boxed_2728_, v_stop_boxed_2729_, v_b_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v_as_2717_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object* v_as_2731_, size_t v_i_2732_, size_t v_stop_2733_, lean_object* v_b_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v_a_2743_; lean_object* v_a_2744_; uint8_t v___x_2748_; 
v___x_2748_ = lean_usize_dec_eq(v_i_2732_, v_stop_2733_);
if (v___x_2748_ == 0)
{
lean_object* v_fst_2749_; lean_object* v_snd_2750_; lean_object* v___x_2751_; lean_object* v_lib_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2789_; 
v_fst_2749_ = lean_ctor_get(v_b_2734_, 0);
v_snd_2750_ = lean_ctor_get(v_b_2734_, 1);
v___x_2751_ = lean_array_uget(v_as_2731_, v_i_2732_);
v_lib_2752_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2789_ == 0)
{
lean_object* v_unused_2790_; 
v_unused_2790_ = lean_ctor_get(v___x_2751_, 1);
lean_dec(v_unused_2790_);
v___x_2754_ = v___x_2751_;
v_isShared_2755_ = v_isSharedCheck_2789_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_lib_2752_);
lean_dec(v___x_2751_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2789_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v_pkg_2756_; lean_object* v_name_2757_; uint8_t v___x_2758_; 
v_pkg_2756_ = lean_ctor_get(v_lib_2752_, 0);
v_name_2757_ = lean_ctor_get(v_lib_2752_, 1);
lean_inc(v_name_2757_);
v___x_2758_ = l_Lean_NameSet_contains(v_fst_2749_, v_name_2757_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2786_; 
lean_inc(v_snd_2750_);
lean_inc(v_fst_2749_);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_b_2734_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; lean_object* v_unused_2788_; 
v_unused_2787_ = lean_ctor_get(v_b_2734_, 1);
lean_dec(v_unused_2787_);
v_unused_2788_ = lean_ctor_get(v_b_2734_, 0);
lean_dec(v_unused_2788_);
v___x_2760_ = v_b_2734_;
v_isShared_2761_ = v_isSharedCheck_2786_;
goto v_resetjp_2759_;
}
else
{
lean_dec(v_b_2734_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2786_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v_keyName_2762_; lean_object* v___x_2763_; lean_object* v___x_2765_; 
v_keyName_2762_ = lean_ctor_get(v_pkg_2756_, 2);
v___x_2763_ = l_Lake_LeanLib_sharedFacet;
lean_inc(v_name_2757_);
lean_inc(v_keyName_2762_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set_tag(v___x_2754_, 3);
lean_ctor_set(v___x_2754_, 1, v_name_2757_);
lean_ctor_set(v___x_2754_, 0, v_keyName_2762_);
v___x_2765_ = v___x_2754_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_keyName_2762_);
lean_ctor_set(v_reuseFailAlloc_2785_, 1, v_name_2757_);
v___x_2765_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2766_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2767_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
lean_ctor_set(v___x_2767_, 2, v_lib_2752_);
lean_ctor_set(v___x_2767_, 3, v___x_2763_);
lean_inc_ref(v___y_2735_);
lean_inc_ref(v___y_2739_);
lean_inc(v___y_2738_);
lean_inc(v___y_2737_);
lean_inc(v___y_2736_);
v___x_2768_ = lean_apply_7(v___y_2735_, v___x_2767_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, lean_box(0));
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v_a_2769_; lean_object* v_a_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2774_; 
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
lean_inc(v_a_2769_);
v_a_2770_ = lean_ctor_get(v___x_2768_, 1);
lean_inc(v_a_2770_);
lean_dec_ref_known(v___x_2768_, 2);
v___x_2771_ = lean_array_push(v_snd_2750_, v_a_2769_);
v___x_2772_ = l_Lean_NameSet_insert(v_fst_2749_, v_name_2757_);
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 1, v___x_2771_);
lean_ctor_set(v___x_2760_, 0, v___x_2772_);
v___x_2774_ = v___x_2760_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v___x_2772_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v___x_2771_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
v_a_2743_ = v___x_2774_;
v_a_2744_ = v_a_2770_;
goto v___jp_2742_;
}
}
else
{
lean_object* v_a_2776_; lean_object* v_a_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2784_; 
lean_del_object(v___x_2760_);
lean_dec(v_name_2757_);
lean_dec(v_snd_2750_);
lean_dec(v_fst_2749_);
lean_dec_ref(v___y_2735_);
v_a_2776_ = lean_ctor_get(v___x_2768_, 0);
v_a_2777_ = lean_ctor_get(v___x_2768_, 1);
v_isSharedCheck_2784_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2784_ == 0)
{
v___x_2779_ = v___x_2768_;
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_a_2777_);
lean_inc(v_a_2776_);
lean_dec(v___x_2768_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2784_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2782_; 
if (v_isShared_2780_ == 0)
{
v___x_2782_ = v___x_2779_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_a_2776_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v_a_2777_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
return v___x_2782_;
}
}
}
}
}
}
else
{
lean_dec(v_name_2757_);
lean_del_object(v___x_2754_);
lean_dec_ref(v_lib_2752_);
v_a_2743_ = v_b_2734_;
v_a_2744_ = v___y_2740_;
goto v___jp_2742_;
}
}
}
else
{
lean_object* v___x_2791_; 
lean_dec_ref(v___y_2735_);
v___x_2791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2791_, 0, v_b_2734_);
lean_ctor_set(v___x_2791_, 1, v___y_2740_);
return v___x_2791_;
}
v___jp_2742_:
{
size_t v___x_2745_; size_t v___x_2746_; 
v___x_2745_ = ((size_t)1ULL);
v___x_2746_ = lean_usize_add(v_i_2732_, v___x_2745_);
v_i_2732_ = v___x_2746_;
v_b_2734_ = v_a_2743_;
v___y_2740_ = v_a_2744_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object* v_as_2792_, lean_object* v_i_2793_, lean_object* v_stop_2794_, lean_object* v_b_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
size_t v_i_boxed_2803_; size_t v_stop_boxed_2804_; lean_object* v_res_2805_; 
v_i_boxed_2803_ = lean_unbox_usize(v_i_2793_);
lean_dec(v_i_2793_);
v_stop_boxed_2804_ = lean_unbox_usize(v_stop_2794_);
lean_dec(v_stop_2794_);
v_res_2805_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_as_2792_, v_i_boxed_2803_, v_stop_boxed_2804_, v_b_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec(v___y_2797_);
lean_dec_ref(v_as_2792_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object* v___x_2806_, lean_object* v_as_2807_, size_t v_i_2808_, size_t v_stop_2809_, lean_object* v_b_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
uint8_t v___x_2818_; 
v___x_2818_ = lean_usize_dec_eq(v_i_2808_, v_stop_2809_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2819_ = lean_array_uget_borrowed(v_as_2807_, v_i_2808_);
lean_inc_ref(v___y_2811_);
lean_inc(v___x_2819_);
lean_inc_ref(v___x_2806_);
v___x_2820_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v___x_2806_, v___x_2819_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_, v___y_2816_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v_a_2821_; lean_object* v_a_2822_; lean_object* v___x_2823_; size_t v___x_2824_; size_t v___x_2825_; 
v_a_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_a_2821_);
v_a_2822_ = lean_ctor_get(v___x_2820_, 1);
lean_inc(v_a_2822_);
lean_dec_ref_known(v___x_2820_, 2);
v___x_2823_ = lean_array_push(v_b_2810_, v_a_2821_);
v___x_2824_ = ((size_t)1ULL);
v___x_2825_ = lean_usize_add(v_i_2808_, v___x_2824_);
v_i_2808_ = v___x_2825_;
v_b_2810_ = v___x_2823_;
v___y_2816_ = v_a_2822_;
goto _start;
}
else
{
lean_object* v_a_2827_; lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec_ref(v___y_2811_);
lean_dec_ref(v_b_2810_);
lean_dec_ref(v___x_2806_);
v_a_2827_ = lean_ctor_get(v___x_2820_, 0);
v_a_2828_ = lean_ctor_get(v___x_2820_, 1);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2820_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_inc(v_a_2827_);
lean_dec(v___x_2820_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2827_);
lean_ctor_set(v_reuseFailAlloc_2834_, 1, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
else
{
lean_object* v___x_2836_; 
lean_dec_ref(v___y_2811_);
lean_dec_ref(v___x_2806_);
v___x_2836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2836_, 0, v_b_2810_);
lean_ctor_set(v___x_2836_, 1, v___y_2816_);
return v___x_2836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object* v___x_2837_, lean_object* v_as_2838_, lean_object* v_i_2839_, lean_object* v_stop_2840_, lean_object* v_b_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
size_t v_i_boxed_2849_; size_t v_stop_boxed_2850_; lean_object* v_res_2851_; 
v_i_boxed_2849_ = lean_unbox_usize(v_i_2839_);
lean_dec(v_i_2839_);
v_stop_boxed_2850_ = lean_unbox_usize(v_stop_2840_);
lean_dec(v_stop_2840_);
v_res_2851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v___x_2837_, v_as_2838_, v_i_boxed_2849_, v_stop_boxed_2850_, v_b_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v_as_2838_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object* v___x_2852_, lean_object* v_as_2853_, size_t v_i_2854_, size_t v_stop_2855_, lean_object* v_b_2856_){
_start:
{
lean_object* v___y_2858_; uint8_t v___x_2862_; 
v___x_2862_ = lean_usize_dec_eq(v_i_2854_, v_stop_2855_);
if (v___x_2862_ == 0)
{
lean_object* v_toConfigDecl_2863_; lean_object* v_name_2864_; lean_object* v_kind_2865_; lean_object* v_config_2866_; lean_object* v___x_2867_; uint8_t v___x_2868_; 
v_toConfigDecl_2863_ = lean_array_uget_borrowed(v_as_2853_, v_i_2854_);
v_name_2864_ = lean_ctor_get(v_toConfigDecl_2863_, 1);
v_kind_2865_ = lean_ctor_get(v_toConfigDecl_2863_, 2);
v_config_2866_ = lean_ctor_get(v_toConfigDecl_2863_, 3);
v___x_2867_ = l_Lake_ExternLib_keyword;
v___x_2868_ = lean_name_eq(v_kind_2865_, v___x_2867_);
if (v___x_2868_ == 0)
{
v___y_2858_ = v_b_2856_;
goto v___jp_2857_;
}
else
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
lean_inc(v_config_2866_);
lean_inc(v_name_2864_);
lean_inc_ref(v___x_2852_);
v___x_2869_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2852_);
lean_ctor_set(v___x_2869_, 1, v_name_2864_);
lean_ctor_set(v___x_2869_, 2, v_config_2866_);
v___x_2870_ = lean_array_push(v_b_2856_, v___x_2869_);
v___y_2858_ = v___x_2870_;
goto v___jp_2857_;
}
}
else
{
lean_dec_ref(v___x_2852_);
return v_b_2856_;
}
v___jp_2857_:
{
size_t v___x_2859_; size_t v___x_2860_; 
v___x_2859_ = ((size_t)1ULL);
v___x_2860_ = lean_usize_add(v_i_2854_, v___x_2859_);
v_i_2854_ = v___x_2860_;
v_b_2856_ = v___y_2858_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object* v___x_2871_, lean_object* v_as_2872_, lean_object* v_i_2873_, lean_object* v_stop_2874_, lean_object* v_b_2875_){
_start:
{
size_t v_i_boxed_2876_; size_t v_stop_boxed_2877_; lean_object* v_res_2878_; 
v_i_boxed_2876_ = lean_unbox_usize(v_i_2873_);
lean_dec(v_i_2873_);
v_stop_boxed_2877_ = lean_unbox_usize(v_stop_2874_);
lean_dec(v_stop_2874_);
v_res_2878_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v___x_2871_, v_as_2872_, v_i_boxed_2876_, v_stop_boxed_2877_, v_b_2875_);
lean_dec_ref(v_as_2872_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object* v_as_2879_, size_t v_i_2880_, size_t v_stop_2881_, lean_object* v_b_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
uint8_t v___x_2890_; 
v___x_2890_ = lean_usize_dec_eq(v_i_2880_, v_stop_2881_);
if (v___x_2890_ == 0)
{
lean_object* v___x_2891_; lean_object* v_lib_2892_; lean_object* v_config_2893_; lean_object* v_nativeFacets_2894_; uint8_t v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; size_t v_sz_2898_; size_t v___x_2899_; lean_object* v___x_2900_; 
v___x_2891_ = lean_array_uget_borrowed(v_as_2879_, v_i_2880_);
v_lib_2892_ = lean_ctor_get(v___x_2891_, 0);
v_config_2893_ = lean_ctor_get(v_lib_2892_, 2);
v_nativeFacets_2894_ = lean_ctor_get(v_config_2893_, 8);
v___x_2895_ = 1;
v___x_2896_ = lean_box(v___x_2895_);
lean_inc_ref(v_nativeFacets_2894_);
v___x_2897_ = lean_apply_1(v_nativeFacets_2894_, v___x_2896_);
v_sz_2898_ = lean_array_size(v___x_2897_);
v___x_2899_ = ((size_t)0ULL);
lean_inc_ref(v___y_2883_);
lean_inc(v___x_2891_);
v___x_2900_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2891_, v_sz_2898_, v___x_2899_, v___x_2897_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; lean_object* v_a_2902_; lean_object* v___x_2903_; size_t v___x_2904_; size_t v___x_2905_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
v_a_2902_ = lean_ctor_get(v___x_2900_, 1);
lean_inc(v_a_2902_);
lean_dec_ref_known(v___x_2900_, 2);
v___x_2903_ = l_Array_append___redArg(v_b_2882_, v_a_2901_);
lean_dec(v_a_2901_);
v___x_2904_ = ((size_t)1ULL);
v___x_2905_ = lean_usize_add(v_i_2880_, v___x_2904_);
v_i_2880_ = v___x_2905_;
v_b_2882_ = v___x_2903_;
v___y_2888_ = v_a_2902_;
goto _start;
}
else
{
lean_dec_ref(v___y_2883_);
lean_dec_ref(v_b_2882_);
return v___x_2900_;
}
}
else
{
lean_object* v___x_2907_; 
lean_dec_ref(v___y_2883_);
v___x_2907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2907_, 0, v_b_2882_);
lean_ctor_set(v___x_2907_, 1, v___y_2888_);
return v___x_2907_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object* v_as_2908_, lean_object* v_i_2909_, lean_object* v_stop_2910_, lean_object* v_b_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
size_t v_i_boxed_2919_; size_t v_stop_boxed_2920_; lean_object* v_res_2921_; 
v_i_boxed_2919_ = lean_unbox_usize(v_i_2909_);
lean_dec(v_i_2909_);
v_stop_boxed_2920_ = lean_unbox_usize(v_stop_2910_);
lean_dec(v_stop_2910_);
v_res_2921_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_as_2908_, v_i_boxed_2919_, v_stop_boxed_2920_, v_b_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v_as_2908_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object* v___x_2922_, lean_object* v___x_2923_, lean_object* v_self_2924_, lean_object* v_dir_2925_, lean_object* v_targetDecls_2926_, lean_object* v_pkg_2927_, lean_object* v_name_2928_, lean_object* v_config_2929_, lean_object* v_config_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_){
_start:
{
lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v_a_2946_; lean_object* v_a_2947_; lean_object* v_a_2964_; lean_object* v_a_2965_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v_a_3010_; lean_object* v_a_3011_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v_snd_3047_; lean_object* v_a_3048_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v_a_3087_; lean_object* v_a_3088_; lean_object* v___y_3111_; lean_object* v___y_3112_; lean_object* v___y_3113_; lean_object* v___y_3114_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___x_3126_; 
lean_inc_ref(v___y_2931_);
lean_inc_ref(v___y_2935_);
lean_inc(v___y_2934_);
lean_inc(v___y_2933_);
lean_inc(v___x_2923_);
v___x_3126_ = lean_apply_7(v___y_2931_, v___x_2922_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, lean_box(0));
if (lean_obj_tag(v___x_3126_) == 0)
{
lean_object* v_a_3127_; lean_object* v_a_3128_; lean_object* v___x_3129_; 
v_a_3127_ = lean_ctor_get(v___x_3126_, 0);
lean_inc(v_a_3127_);
v_a_3128_ = lean_ctor_get(v___x_3126_, 1);
lean_inc(v_a_3128_);
lean_dec_ref_known(v___x_3126_, 2);
v___x_3129_ = l_Lake_Job_await___redArg(v_a_3127_, v_a_3128_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v_a_3130_; lean_object* v_a_3131_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3136_; lean_object* v___y_3137_; lean_object* v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v_a_3142_; lean_object* v_a_3143_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v_a_3177_; lean_object* v_a_3178_; lean_object* v___y_3203_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; 
v_a_3130_ = lean_ctor_get(v___x_3129_, 0);
lean_inc(v_a_3130_);
v_a_3131_ = lean_ctor_get(v___x_3129_, 1);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3129_, 2);
v___x_3215_ = lean_unsigned_to_nat(0u);
v___x_3216_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_3217_ = lean_array_get_size(v_a_3130_);
v___x_3218_ = lean_nat_dec_lt(v___x_3215_, v___x_3217_);
if (v___x_3218_ == 0)
{
v_a_3177_ = v___x_3216_;
v_a_3178_ = v_a_3131_;
goto v___jp_3176_;
}
else
{
uint8_t v___x_3219_; 
v___x_3219_ = lean_nat_dec_le(v___x_3217_, v___x_3217_);
if (v___x_3219_ == 0)
{
if (v___x_3218_ == 0)
{
v_a_3177_ = v___x_3216_;
v_a_3178_ = v_a_3131_;
goto v___jp_3176_;
}
else
{
size_t v___x_3220_; size_t v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = ((size_t)0ULL);
v___x_3221_ = lean_usize_of_nat(v___x_3217_);
lean_inc_ref(v___y_2931_);
v___x_3222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3130_, v___x_3220_, v___x_3221_, v___x_3216_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3131_);
v___y_3203_ = v___x_3222_;
goto v___jp_3202_;
}
}
else
{
size_t v___x_3223_; size_t v___x_3224_; lean_object* v___x_3225_; 
v___x_3223_ = ((size_t)0ULL);
v___x_3224_ = lean_usize_of_nat(v___x_3217_);
lean_inc_ref(v___y_2931_);
v___x_3225_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3130_, v___x_3223_, v___x_3224_, v___x_3216_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3131_);
v___y_3203_ = v___x_3225_;
goto v___jp_3202_;
}
}
v___jp_3132_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; uint8_t v___x_3146_; 
v___x_3144_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
v___x_3145_ = lean_array_get_size(v_a_3130_);
v___x_3146_ = lean_nat_dec_lt(v___y_3136_, v___x_3145_);
if (v___x_3146_ == 0)
{
lean_dec(v_a_3130_);
v___y_3077_ = v___y_3133_;
v___y_3078_ = v___y_3134_;
v___y_3079_ = v___y_3135_;
v___y_3080_ = v___y_3136_;
v___y_3081_ = v___y_3137_;
v___y_3082_ = v___y_3138_;
v___y_3083_ = v_a_3142_;
v___y_3084_ = v___y_3139_;
v___y_3085_ = v___y_3140_;
v___y_3086_ = v___y_3141_;
v_a_3087_ = v___x_3144_;
v_a_3088_ = v_a_3143_;
goto v___jp_3076_;
}
else
{
uint8_t v___x_3147_; 
v___x_3147_ = lean_nat_dec_le(v___x_3145_, v___x_3145_);
if (v___x_3147_ == 0)
{
if (v___x_3146_ == 0)
{
lean_dec(v_a_3130_);
v___y_3077_ = v___y_3133_;
v___y_3078_ = v___y_3134_;
v___y_3079_ = v___y_3135_;
v___y_3080_ = v___y_3136_;
v___y_3081_ = v___y_3137_;
v___y_3082_ = v___y_3138_;
v___y_3083_ = v_a_3142_;
v___y_3084_ = v___y_3139_;
v___y_3085_ = v___y_3140_;
v___y_3086_ = v___y_3141_;
v_a_3087_ = v___x_3144_;
v_a_3088_ = v_a_3143_;
goto v___jp_3076_;
}
else
{
size_t v___x_3148_; size_t v___x_3149_; lean_object* v___x_3150_; 
v___x_3148_ = ((size_t)0ULL);
v___x_3149_ = lean_usize_of_nat(v___x_3145_);
lean_inc_ref(v___y_2931_);
v___x_3150_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3130_, v___x_3148_, v___x_3149_, v___x_3144_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3143_);
lean_dec(v_a_3130_);
v___y_3111_ = v___y_3133_;
v___y_3112_ = v___y_3134_;
v___y_3113_ = v___y_3135_;
v___y_3114_ = v___y_3136_;
v___y_3115_ = v___y_3137_;
v___y_3116_ = v___y_3138_;
v___y_3117_ = v_a_3142_;
v___y_3118_ = v___y_3139_;
v___y_3119_ = v___y_3141_;
v___y_3120_ = v___y_3140_;
v___y_3121_ = v___x_3150_;
goto v___jp_3110_;
}
}
else
{
size_t v___x_3151_; size_t v___x_3152_; lean_object* v___x_3153_; 
v___x_3151_ = ((size_t)0ULL);
v___x_3152_ = lean_usize_of_nat(v___x_3145_);
lean_inc_ref(v___y_2931_);
v___x_3153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3130_, v___x_3151_, v___x_3152_, v___x_3144_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3143_);
lean_dec(v_a_3130_);
v___y_3111_ = v___y_3133_;
v___y_3112_ = v___y_3134_;
v___y_3113_ = v___y_3135_;
v___y_3114_ = v___y_3136_;
v___y_3115_ = v___y_3137_;
v___y_3116_ = v___y_3138_;
v___y_3117_ = v_a_3142_;
v___y_3118_ = v___y_3139_;
v___y_3119_ = v___y_3141_;
v___y_3120_ = v___y_3140_;
v___y_3121_ = v___x_3153_;
goto v___jp_3110_;
}
}
}
v___jp_3154_:
{
if (lean_obj_tag(v___y_3164_) == 0)
{
lean_object* v_a_3165_; lean_object* v_a_3166_; 
v_a_3165_ = lean_ctor_get(v___y_3164_, 0);
lean_inc(v_a_3165_);
v_a_3166_ = lean_ctor_get(v___y_3164_, 1);
lean_inc(v_a_3166_);
lean_dec_ref_known(v___y_3164_, 2);
v___y_3133_ = v___y_3155_;
v___y_3134_ = v___y_3156_;
v___y_3135_ = v___y_3157_;
v___y_3136_ = v___y_3158_;
v___y_3137_ = v___y_3159_;
v___y_3138_ = v___y_3160_;
v___y_3139_ = v___y_3161_;
v___y_3140_ = v___y_3163_;
v___y_3141_ = v___y_3162_;
v_a_3142_ = v_a_3165_;
v_a_3143_ = v_a_3166_;
goto v___jp_3132_;
}
else
{
lean_object* v_a_3167_; lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3175_; 
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3157_);
lean_dec(v_a_3130_);
lean_dec_ref(v___y_2931_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3167_ = lean_ctor_get(v___y_3164_, 0);
v_a_3168_ = lean_ctor_get(v___y_3164_, 1);
v_isSharedCheck_3175_ = !lean_is_exclusive(v___y_3164_);
if (v_isSharedCheck_3175_ == 0)
{
v___x_3170_ = v___y_3164_;
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_inc(v_a_3167_);
lean_dec(v___y_3164_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3175_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3173_; 
if (v_isShared_3171_ == 0)
{
v___x_3173_ = v___x_3170_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v_a_3167_);
lean_ctor_set(v_reuseFailAlloc_3174_, 1, v_a_3168_);
v___x_3173_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
return v___x_3173_;
}
}
}
}
v___jp_3176_:
{
lean_object* v_toLeanConfig_3179_; lean_object* v_toLeanConfig_3180_; lean_object* v_buildDir_3181_; lean_object* v_nativeLibDir_3182_; lean_object* v_moreLinkObjs_3183_; lean_object* v_moreLinkLibs_3184_; lean_object* v_moreLinkArgs_3185_; lean_object* v_weakLinkArgs_3186_; lean_object* v_moreLinkObjs_3187_; lean_object* v_moreLinkLibs_3188_; lean_object* v_moreLinkArgs_3189_; lean_object* v_weakLinkArgs_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; uint8_t v___x_3194_; 
v_toLeanConfig_3179_ = lean_ctor_get(v_config_2929_, 1);
lean_inc_ref(v_toLeanConfig_3179_);
v_toLeanConfig_3180_ = lean_ctor_get(v_config_2930_, 0);
v_buildDir_3181_ = lean_ctor_get(v_config_2929_, 5);
lean_inc_ref(v_buildDir_3181_);
v_nativeLibDir_3182_ = lean_ctor_get(v_config_2929_, 7);
lean_inc_ref(v_nativeLibDir_3182_);
lean_dec_ref(v_config_2929_);
v_moreLinkObjs_3183_ = lean_ctor_get(v_toLeanConfig_3179_, 6);
lean_inc_ref(v_moreLinkObjs_3183_);
v_moreLinkLibs_3184_ = lean_ctor_get(v_toLeanConfig_3179_, 7);
lean_inc_ref(v_moreLinkLibs_3184_);
v_moreLinkArgs_3185_ = lean_ctor_get(v_toLeanConfig_3179_, 8);
lean_inc_ref(v_moreLinkArgs_3185_);
v_weakLinkArgs_3186_ = lean_ctor_get(v_toLeanConfig_3179_, 9);
lean_inc_ref(v_weakLinkArgs_3186_);
lean_dec_ref(v_toLeanConfig_3179_);
v_moreLinkObjs_3187_ = lean_ctor_get(v_toLeanConfig_3180_, 6);
v_moreLinkLibs_3188_ = lean_ctor_get(v_toLeanConfig_3180_, 7);
v_moreLinkArgs_3189_ = lean_ctor_get(v_toLeanConfig_3180_, 8);
v_weakLinkArgs_3190_ = lean_ctor_get(v_toLeanConfig_3180_, 9);
v___x_3191_ = l_Array_append___redArg(v_moreLinkObjs_3183_, v_moreLinkObjs_3187_);
v___x_3192_ = lean_unsigned_to_nat(0u);
v___x_3193_ = lean_array_get_size(v___x_3191_);
v___x_3194_ = lean_nat_dec_lt(v___x_3192_, v___x_3193_);
if (v___x_3194_ == 0)
{
lean_dec_ref(v___x_3191_);
v___y_3133_ = v_moreLinkArgs_3189_;
v___y_3134_ = v_moreLinkLibs_3188_;
v___y_3135_ = v_buildDir_3181_;
v___y_3136_ = v___x_3192_;
v___y_3137_ = v_nativeLibDir_3182_;
v___y_3138_ = v_weakLinkArgs_3186_;
v___y_3139_ = v_moreLinkLibs_3184_;
v___y_3140_ = v_moreLinkArgs_3185_;
v___y_3141_ = v_weakLinkArgs_3190_;
v_a_3142_ = v_a_3177_;
v_a_3143_ = v_a_3178_;
goto v___jp_3132_;
}
else
{
uint8_t v___x_3195_; 
v___x_3195_ = lean_nat_dec_le(v___x_3193_, v___x_3193_);
if (v___x_3195_ == 0)
{
if (v___x_3194_ == 0)
{
lean_dec_ref(v___x_3191_);
v___y_3133_ = v_moreLinkArgs_3189_;
v___y_3134_ = v_moreLinkLibs_3188_;
v___y_3135_ = v_buildDir_3181_;
v___y_3136_ = v___x_3192_;
v___y_3137_ = v_nativeLibDir_3182_;
v___y_3138_ = v_weakLinkArgs_3186_;
v___y_3139_ = v_moreLinkLibs_3184_;
v___y_3140_ = v_moreLinkArgs_3185_;
v___y_3141_ = v_weakLinkArgs_3190_;
v_a_3142_ = v_a_3177_;
v_a_3143_ = v_a_3178_;
goto v___jp_3132_;
}
else
{
size_t v___x_3196_; size_t v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = ((size_t)0ULL);
v___x_3197_ = lean_usize_of_nat(v___x_3193_);
lean_inc_ref(v___y_2931_);
lean_inc_ref(v_pkg_2927_);
v___x_3198_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2927_, v___x_3191_, v___x_3196_, v___x_3197_, v_a_3177_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3178_);
lean_dec_ref(v___x_3191_);
v___y_3155_ = v_moreLinkArgs_3189_;
v___y_3156_ = v_moreLinkLibs_3188_;
v___y_3157_ = v_buildDir_3181_;
v___y_3158_ = v___x_3192_;
v___y_3159_ = v_nativeLibDir_3182_;
v___y_3160_ = v_weakLinkArgs_3186_;
v___y_3161_ = v_moreLinkLibs_3184_;
v___y_3162_ = v_weakLinkArgs_3190_;
v___y_3163_ = v_moreLinkArgs_3185_;
v___y_3164_ = v___x_3198_;
goto v___jp_3154_;
}
}
else
{
size_t v___x_3199_; size_t v___x_3200_; lean_object* v___x_3201_; 
v___x_3199_ = ((size_t)0ULL);
v___x_3200_ = lean_usize_of_nat(v___x_3193_);
lean_inc_ref(v___y_2931_);
lean_inc_ref(v_pkg_2927_);
v___x_3201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2927_, v___x_3191_, v___x_3199_, v___x_3200_, v_a_3177_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3178_);
lean_dec_ref(v___x_3191_);
v___y_3155_ = v_moreLinkArgs_3189_;
v___y_3156_ = v_moreLinkLibs_3188_;
v___y_3157_ = v_buildDir_3181_;
v___y_3158_ = v___x_3192_;
v___y_3159_ = v_nativeLibDir_3182_;
v___y_3160_ = v_weakLinkArgs_3186_;
v___y_3161_ = v_moreLinkLibs_3184_;
v___y_3162_ = v_weakLinkArgs_3190_;
v___y_3163_ = v_moreLinkArgs_3185_;
v___y_3164_ = v___x_3201_;
goto v___jp_3154_;
}
}
}
v___jp_3202_:
{
if (lean_obj_tag(v___y_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v_a_3205_; 
v_a_3204_ = lean_ctor_get(v___y_3203_, 0);
lean_inc(v_a_3204_);
v_a_3205_ = lean_ctor_get(v___y_3203_, 1);
lean_inc(v_a_3205_);
lean_dec_ref_known(v___y_3203_, 2);
v_a_3177_ = v_a_3204_;
v_a_3178_ = v_a_3205_;
goto v___jp_3176_;
}
else
{
lean_object* v_a_3206_; lean_object* v_a_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3214_; 
lean_dec(v_a_3130_);
lean_dec_ref(v___y_2931_);
lean_dec_ref(v_config_2929_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3206_ = lean_ctor_get(v___y_3203_, 0);
v_a_3207_ = lean_ctor_get(v___y_3203_, 1);
v_isSharedCheck_3214_ = !lean_is_exclusive(v___y_3203_);
if (v_isSharedCheck_3214_ == 0)
{
v___x_3209_ = v___y_3203_;
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_a_3207_);
lean_inc(v_a_3206_);
lean_dec(v___y_3203_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3214_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v_a_3206_);
lean_ctor_set(v_reuseFailAlloc_3213_, 1, v_a_3207_);
v___x_3212_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
return v___x_3212_;
}
}
}
}
}
else
{
lean_object* v_a_3226_; lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v___y_2931_);
lean_dec_ref(v_config_2929_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3226_ = lean_ctor_get(v___x_3129_, 0);
v_a_3227_ = lean_ctor_get(v___x_3129_, 1);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3129_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_inc(v_a_3226_);
lean_dec(v___x_3129_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3226_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec_ref(v___y_2931_);
lean_dec_ref(v_config_2929_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3235_ = lean_ctor_get(v___x_3126_, 0);
v_a_3236_ = lean_ctor_get(v___x_3126_, 1);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3126_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_inc(v_a_3235_);
lean_dec(v___x_3126_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3235_);
lean_ctor_set(v_reuseFailAlloc_3242_, 1, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
v___jp_2938_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; uint8_t v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; uint8_t v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
lean_inc_ref(v_self_2924_);
v___x_2948_ = l_Lake_LeanLib_libName(v_self_2924_);
v___x_2949_ = l_System_FilePath_normalize(v___y_2940_);
v___x_2950_ = l_Lake_joinRelative(v_dir_2925_, v___x_2949_);
v___x_2951_ = l_System_FilePath_normalize(v___y_2941_);
v___x_2952_ = l_Lake_joinRelative(v___x_2950_, v___x_2951_);
v___x_2953_ = 0;
v___x_2954_ = l_Lake_nameToSharedLib(v___x_2948_, v___x_2953_);
v___x_2955_ = l_Lake_joinRelative(v___x_2952_, v___x_2954_);
v___x_2956_ = l_Array_append___redArg(v___y_2942_, v___y_2945_);
v___x_2957_ = l_Array_append___redArg(v___y_2944_, v___y_2939_);
v___x_2958_ = l_Lake_LeanLib_isPlugin(v_self_2924_);
v___x_2959_ = l_System_Platform_isWindows;
v___x_2960_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2961_ = l_Lake_buildLeanSharedLib(v___x_2948_, v___x_2955_, v___y_2943_, v_a_2946_, v___x_2956_, v___x_2957_, v___x_2958_, v___x_2959_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v___x_2960_);
lean_dec(v___x_2923_);
lean_dec_ref(v___y_2943_);
v___x_2962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
lean_ctor_set(v___x_2962_, 1, v_a_2947_);
return v___x_2962_;
}
v___jp_2963_:
{
lean_object* v___x_2966_; 
v___x_2966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2966_, 0, v_a_2964_);
lean_ctor_set(v___x_2966_, 1, v_a_2965_);
return v___x_2966_;
}
v___jp_2967_:
{
if (lean_obj_tag(v___y_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v_a_2977_; 
v_a_2976_ = lean_ctor_get(v___y_2975_, 0);
lean_inc(v_a_2976_);
v_a_2977_ = lean_ctor_get(v___y_2975_, 1);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___y_2975_, 2);
v___y_2939_ = v___y_2968_;
v___y_2940_ = v___y_2969_;
v___y_2941_ = v___y_2970_;
v___y_2942_ = v___y_2971_;
v___y_2943_ = v___y_2972_;
v___y_2944_ = v___y_2974_;
v___y_2945_ = v___y_2973_;
v_a_2946_ = v_a_2976_;
v_a_2947_ = v_a_2977_;
goto v___jp_2938_;
}
else
{
lean_object* v_a_2978_; lean_object* v_a_2979_; 
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec_ref(v___y_2931_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_2978_ = lean_ctor_get(v___y_2975_, 0);
lean_inc(v_a_2978_);
v_a_2979_ = lean_ctor_get(v___y_2975_, 1);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___y_2975_, 2);
v_a_2964_ = v_a_2978_;
v_a_2965_ = v_a_2979_;
goto v___jp_2963_;
}
}
v___jp_2980_:
{
lean_object* v___x_2992_; uint8_t v___x_2993_; 
v___x_2992_ = lean_array_get_size(v___y_2991_);
v___x_2993_ = lean_nat_dec_lt(v___y_2983_, v___x_2992_);
if (v___x_2993_ == 0)
{
lean_dec_ref(v___y_2991_);
v___y_2939_ = v___y_2981_;
v___y_2940_ = v___y_2982_;
v___y_2941_ = v___y_2984_;
v___y_2942_ = v___y_2986_;
v___y_2943_ = v___y_2987_;
v___y_2944_ = v___y_2990_;
v___y_2945_ = v___y_2989_;
v_a_2946_ = v___y_2988_;
v_a_2947_ = v___y_2985_;
goto v___jp_2938_;
}
else
{
uint8_t v___x_2994_; 
v___x_2994_ = lean_nat_dec_le(v___x_2992_, v___x_2992_);
if (v___x_2994_ == 0)
{
if (v___x_2993_ == 0)
{
lean_dec_ref(v___y_2991_);
v___y_2939_ = v___y_2981_;
v___y_2940_ = v___y_2982_;
v___y_2941_ = v___y_2984_;
v___y_2942_ = v___y_2986_;
v___y_2943_ = v___y_2987_;
v___y_2944_ = v___y_2990_;
v___y_2945_ = v___y_2989_;
v_a_2946_ = v___y_2988_;
v_a_2947_ = v___y_2985_;
goto v___jp_2938_;
}
else
{
size_t v___x_2995_; size_t v___x_2996_; lean_object* v___x_2997_; 
v___x_2995_ = ((size_t)0ULL);
v___x_2996_ = lean_usize_of_nat(v___x_2992_);
lean_inc_ref(v___y_2931_);
v___x_2997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2991_, v___x_2995_, v___x_2996_, v___y_2988_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2985_);
lean_dec_ref(v___y_2991_);
v___y_2968_ = v___y_2981_;
v___y_2969_ = v___y_2982_;
v___y_2970_ = v___y_2984_;
v___y_2971_ = v___y_2986_;
v___y_2972_ = v___y_2987_;
v___y_2973_ = v___y_2989_;
v___y_2974_ = v___y_2990_;
v___y_2975_ = v___x_2997_;
goto v___jp_2967_;
}
}
else
{
size_t v___x_2998_; size_t v___x_2999_; lean_object* v___x_3000_; 
v___x_2998_ = ((size_t)0ULL);
v___x_2999_ = lean_usize_of_nat(v___x_2992_);
lean_inc_ref(v___y_2931_);
v___x_3000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2991_, v___x_2998_, v___x_2999_, v___y_2988_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2985_);
lean_dec_ref(v___y_2991_);
v___y_2968_ = v___y_2981_;
v___y_2969_ = v___y_2982_;
v___y_2970_ = v___y_2984_;
v___y_2971_ = v___y_2986_;
v___y_2972_ = v___y_2987_;
v___y_2973_ = v___y_2989_;
v___y_2974_ = v___y_2990_;
v___y_2975_ = v___x_3000_;
goto v___jp_2967_;
}
}
}
v___jp_3001_:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; uint8_t v___x_3014_; 
v___x_3012_ = lean_mk_empty_array_with_capacity(v___y_3004_);
v___x_3013_ = lean_array_get_size(v_targetDecls_2926_);
v___x_3014_ = lean_nat_dec_lt(v___y_3004_, v___x_3013_);
if (v___x_3014_ == 0)
{
lean_dec_ref(v_pkg_2927_);
v___y_2981_ = v___y_3002_;
v___y_2982_ = v___y_3003_;
v___y_2983_ = v___y_3004_;
v___y_2984_ = v___y_3005_;
v___y_2985_ = v_a_3011_;
v___y_2986_ = v___y_3006_;
v___y_2987_ = v___y_3007_;
v___y_2988_ = v_a_3010_;
v___y_2989_ = v___y_3009_;
v___y_2990_ = v___y_3008_;
v___y_2991_ = v___x_3012_;
goto v___jp_2980_;
}
else
{
uint8_t v___x_3015_; 
v___x_3015_ = lean_nat_dec_le(v___x_3013_, v___x_3013_);
if (v___x_3015_ == 0)
{
if (v___x_3014_ == 0)
{
lean_dec_ref(v_pkg_2927_);
v___y_2981_ = v___y_3002_;
v___y_2982_ = v___y_3003_;
v___y_2983_ = v___y_3004_;
v___y_2984_ = v___y_3005_;
v___y_2985_ = v_a_3011_;
v___y_2986_ = v___y_3006_;
v___y_2987_ = v___y_3007_;
v___y_2988_ = v_a_3010_;
v___y_2989_ = v___y_3009_;
v___y_2990_ = v___y_3008_;
v___y_2991_ = v___x_3012_;
goto v___jp_2980_;
}
else
{
size_t v___x_3016_; size_t v___x_3017_; lean_object* v___x_3018_; 
v___x_3016_ = ((size_t)0ULL);
v___x_3017_ = lean_usize_of_nat(v___x_3013_);
v___x_3018_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2927_, v_targetDecls_2926_, v___x_3016_, v___x_3017_, v___x_3012_);
v___y_2981_ = v___y_3002_;
v___y_2982_ = v___y_3003_;
v___y_2983_ = v___y_3004_;
v___y_2984_ = v___y_3005_;
v___y_2985_ = v_a_3011_;
v___y_2986_ = v___y_3006_;
v___y_2987_ = v___y_3007_;
v___y_2988_ = v_a_3010_;
v___y_2989_ = v___y_3009_;
v___y_2990_ = v___y_3008_;
v___y_2991_ = v___x_3018_;
goto v___jp_2980_;
}
}
else
{
size_t v___x_3019_; size_t v___x_3020_; lean_object* v___x_3021_; 
v___x_3019_ = ((size_t)0ULL);
v___x_3020_ = lean_usize_of_nat(v___x_3013_);
v___x_3021_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2927_, v_targetDecls_2926_, v___x_3019_, v___x_3020_, v___x_3012_);
v___y_2981_ = v___y_3002_;
v___y_2982_ = v___y_3003_;
v___y_2983_ = v___y_3004_;
v___y_2984_ = v___y_3005_;
v___y_2985_ = v_a_3011_;
v___y_2986_ = v___y_3006_;
v___y_2987_ = v___y_3007_;
v___y_2988_ = v_a_3010_;
v___y_2989_ = v___y_3009_;
v___y_2990_ = v___y_3008_;
v___y_2991_ = v___x_3021_;
goto v___jp_2980_;
}
}
}
v___jp_3022_:
{
if (lean_obj_tag(v___y_3031_) == 0)
{
lean_object* v_a_3032_; lean_object* v_a_3033_; 
v_a_3032_ = lean_ctor_get(v___y_3031_, 0);
lean_inc(v_a_3032_);
v_a_3033_ = lean_ctor_get(v___y_3031_, 1);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___y_3031_, 2);
v___y_3002_ = v___y_3023_;
v___y_3003_ = v___y_3024_;
v___y_3004_ = v___y_3025_;
v___y_3005_ = v___y_3026_;
v___y_3006_ = v___y_3027_;
v___y_3007_ = v___y_3028_;
v___y_3008_ = v___y_3030_;
v___y_3009_ = v___y_3029_;
v_a_3010_ = v_a_3032_;
v_a_3011_ = v_a_3033_;
goto v___jp_3001_;
}
else
{
lean_object* v_a_3034_; lean_object* v_a_3035_; 
lean_dec_ref(v___y_3030_);
lean_dec_ref(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec_ref(v___y_2931_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3034_ = lean_ctor_get(v___y_3031_, 0);
lean_inc(v_a_3034_);
v_a_3035_ = lean_ctor_get(v___y_3031_, 1);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___y_3031_, 2);
v_a_2964_ = v_a_3034_;
v_a_2965_ = v_a_3035_;
goto v___jp_2963_;
}
}
v___jp_3036_:
{
lean_object* v___x_3049_; lean_object* v___x_3050_; uint8_t v___x_3051_; 
v___x_3049_ = l_Array_append___redArg(v___y_3044_, v___y_3038_);
v___x_3050_ = lean_array_get_size(v___x_3049_);
v___x_3051_ = lean_nat_dec_lt(v___y_3040_, v___x_3050_);
if (v___x_3051_ == 0)
{
lean_dec_ref(v___x_3049_);
v___y_3002_ = v___y_3037_;
v___y_3003_ = v___y_3039_;
v___y_3004_ = v___y_3040_;
v___y_3005_ = v___y_3041_;
v___y_3006_ = v___y_3042_;
v___y_3007_ = v___y_3043_;
v___y_3008_ = v___y_3046_;
v___y_3009_ = v___y_3045_;
v_a_3010_ = v_snd_3047_;
v_a_3011_ = v_a_3048_;
goto v___jp_3001_;
}
else
{
uint8_t v___x_3052_; 
v___x_3052_ = lean_nat_dec_le(v___x_3050_, v___x_3050_);
if (v___x_3052_ == 0)
{
if (v___x_3051_ == 0)
{
lean_dec_ref(v___x_3049_);
v___y_3002_ = v___y_3037_;
v___y_3003_ = v___y_3039_;
v___y_3004_ = v___y_3040_;
v___y_3005_ = v___y_3041_;
v___y_3006_ = v___y_3042_;
v___y_3007_ = v___y_3043_;
v___y_3008_ = v___y_3046_;
v___y_3009_ = v___y_3045_;
v_a_3010_ = v_snd_3047_;
v_a_3011_ = v_a_3048_;
goto v___jp_3001_;
}
else
{
size_t v___x_3053_; size_t v___x_3054_; lean_object* v___x_3055_; 
v___x_3053_ = ((size_t)0ULL);
v___x_3054_ = lean_usize_of_nat(v___x_3050_);
lean_inc_ref(v___y_2931_);
lean_inc_ref(v_pkg_2927_);
v___x_3055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2927_, v___x_3049_, v___x_3053_, v___x_3054_, v_snd_3047_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3048_);
lean_dec_ref(v___x_3049_);
v___y_3023_ = v___y_3037_;
v___y_3024_ = v___y_3039_;
v___y_3025_ = v___y_3040_;
v___y_3026_ = v___y_3041_;
v___y_3027_ = v___y_3042_;
v___y_3028_ = v___y_3043_;
v___y_3029_ = v___y_3045_;
v___y_3030_ = v___y_3046_;
v___y_3031_ = v___x_3055_;
goto v___jp_3022_;
}
}
else
{
size_t v___x_3056_; size_t v___x_3057_; lean_object* v___x_3058_; 
v___x_3056_ = ((size_t)0ULL);
v___x_3057_ = lean_usize_of_nat(v___x_3050_);
lean_inc_ref(v___y_2931_);
lean_inc_ref(v_pkg_2927_);
v___x_3058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2927_, v___x_3049_, v___x_3056_, v___x_3057_, v_snd_3047_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3048_);
lean_dec_ref(v___x_3049_);
v___y_3023_ = v___y_3037_;
v___y_3024_ = v___y_3039_;
v___y_3025_ = v___y_3040_;
v___y_3026_ = v___y_3041_;
v___y_3027_ = v___y_3042_;
v___y_3028_ = v___y_3043_;
v___y_3029_ = v___y_3045_;
v___y_3030_ = v___y_3046_;
v___y_3031_ = v___x_3058_;
goto v___jp_3022_;
}
}
}
v___jp_3059_:
{
if (lean_obj_tag(v___y_3070_) == 0)
{
lean_object* v_a_3071_; lean_object* v_a_3072_; lean_object* v_snd_3073_; 
v_a_3071_ = lean_ctor_get(v___y_3070_, 0);
lean_inc(v_a_3071_);
v_a_3072_ = lean_ctor_get(v___y_3070_, 1);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___y_3070_, 2);
v_snd_3073_ = lean_ctor_get(v_a_3071_, 1);
lean_inc(v_snd_3073_);
lean_dec(v_a_3071_);
v___y_3037_ = v___y_3060_;
v___y_3038_ = v___y_3061_;
v___y_3039_ = v___y_3062_;
v___y_3040_ = v___y_3063_;
v___y_3041_ = v___y_3064_;
v___y_3042_ = v___y_3065_;
v___y_3043_ = v___y_3066_;
v___y_3044_ = v___y_3067_;
v___y_3045_ = v___y_3069_;
v___y_3046_ = v___y_3068_;
v_snd_3047_ = v_snd_3073_;
v_a_3048_ = v_a_3072_;
goto v___jp_3036_;
}
else
{
lean_object* v_a_3074_; lean_object* v_a_3075_; 
lean_dec_ref(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec_ref(v___y_3066_);
lean_dec_ref(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec_ref(v___y_3062_);
lean_dec_ref(v___y_2931_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3074_ = lean_ctor_get(v___y_3070_, 0);
lean_inc(v_a_3074_);
v_a_3075_ = lean_ctor_get(v___y_3070_, 1);
lean_inc(v_a_3075_);
lean_dec_ref_known(v___y_3070_, 2);
v_a_2964_ = v_a_3074_;
v_a_2965_ = v_a_3075_;
goto v___jp_2963_;
}
}
v___jp_3076_:
{
lean_object* v_toArray_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3108_; 
v_toArray_3089_ = lean_ctor_get(v_a_3087_, 1);
v_isSharedCheck_3108_ = !lean_is_exclusive(v_a_3087_);
if (v_isSharedCheck_3108_ == 0)
{
lean_object* v_unused_3109_; 
v_unused_3109_ = lean_ctor_get(v_a_3087_, 0);
lean_dec(v_unused_3109_);
v___x_3091_ = v_a_3087_;
v_isShared_3092_ = v_isSharedCheck_3108_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_toArray_3089_);
lean_dec(v_a_3087_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3108_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; uint8_t v___x_3095_; 
v___x_3093_ = lean_mk_empty_array_with_capacity(v___y_3080_);
v___x_3094_ = lean_array_get_size(v_toArray_3089_);
v___x_3095_ = lean_nat_dec_lt(v___y_3080_, v___x_3094_);
if (v___x_3095_ == 0)
{
lean_del_object(v___x_3091_);
lean_dec_ref(v_toArray_3089_);
lean_dec(v_name_2928_);
v___y_3037_ = v___y_3077_;
v___y_3038_ = v___y_3078_;
v___y_3039_ = v___y_3079_;
v___y_3040_ = v___y_3080_;
v___y_3041_ = v___y_3081_;
v___y_3042_ = v___y_3082_;
v___y_3043_ = v___y_3083_;
v___y_3044_ = v___y_3084_;
v___y_3045_ = v___y_3086_;
v___y_3046_ = v___y_3085_;
v_snd_3047_ = v___x_3093_;
v_a_3048_ = v_a_3088_;
goto v___jp_3036_;
}
else
{
lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3099_; 
v___x_3096_ = l_Lean_NameSet_empty;
v___x_3097_ = l_Lean_NameSet_insert(v___x_3096_, v_name_2928_);
lean_inc_ref(v___x_3093_);
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 1, v___x_3093_);
lean_ctor_set(v___x_3091_, 0, v___x_3097_);
v___x_3099_ = v___x_3091_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v___x_3097_);
lean_ctor_set(v_reuseFailAlloc_3107_, 1, v___x_3093_);
v___x_3099_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
uint8_t v___x_3100_; 
v___x_3100_ = lean_nat_dec_le(v___x_3094_, v___x_3094_);
if (v___x_3100_ == 0)
{
if (v___x_3095_ == 0)
{
lean_dec_ref(v___x_3099_);
lean_dec_ref(v_toArray_3089_);
v___y_3037_ = v___y_3077_;
v___y_3038_ = v___y_3078_;
v___y_3039_ = v___y_3079_;
v___y_3040_ = v___y_3080_;
v___y_3041_ = v___y_3081_;
v___y_3042_ = v___y_3082_;
v___y_3043_ = v___y_3083_;
v___y_3044_ = v___y_3084_;
v___y_3045_ = v___y_3086_;
v___y_3046_ = v___y_3085_;
v_snd_3047_ = v___x_3093_;
v_a_3048_ = v_a_3088_;
goto v___jp_3036_;
}
else
{
size_t v___x_3101_; size_t v___x_3102_; lean_object* v___x_3103_; 
lean_dec_ref(v___x_3093_);
v___x_3101_ = ((size_t)0ULL);
v___x_3102_ = lean_usize_of_nat(v___x_3094_);
lean_inc_ref(v___y_2931_);
v___x_3103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_3089_, v___x_3101_, v___x_3102_, v___x_3099_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3088_);
lean_dec_ref(v_toArray_3089_);
v___y_3060_ = v___y_3077_;
v___y_3061_ = v___y_3078_;
v___y_3062_ = v___y_3079_;
v___y_3063_ = v___y_3080_;
v___y_3064_ = v___y_3081_;
v___y_3065_ = v___y_3082_;
v___y_3066_ = v___y_3083_;
v___y_3067_ = v___y_3084_;
v___y_3068_ = v___y_3085_;
v___y_3069_ = v___y_3086_;
v___y_3070_ = v___x_3103_;
goto v___jp_3059_;
}
}
else
{
size_t v___x_3104_; size_t v___x_3105_; lean_object* v___x_3106_; 
lean_dec_ref(v___x_3093_);
v___x_3104_ = ((size_t)0ULL);
v___x_3105_ = lean_usize_of_nat(v___x_3094_);
lean_inc_ref(v___y_2931_);
v___x_3106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_3089_, v___x_3104_, v___x_3105_, v___x_3099_, v___y_2931_, v___x_2923_, v___y_2933_, v___y_2934_, v___y_2935_, v_a_3088_);
lean_dec_ref(v_toArray_3089_);
v___y_3060_ = v___y_3077_;
v___y_3061_ = v___y_3078_;
v___y_3062_ = v___y_3079_;
v___y_3063_ = v___y_3080_;
v___y_3064_ = v___y_3081_;
v___y_3065_ = v___y_3082_;
v___y_3066_ = v___y_3083_;
v___y_3067_ = v___y_3084_;
v___y_3068_ = v___y_3085_;
v___y_3069_ = v___y_3086_;
v___y_3070_ = v___x_3106_;
goto v___jp_3059_;
}
}
}
}
}
v___jp_3110_:
{
if (lean_obj_tag(v___y_3121_) == 0)
{
lean_object* v_a_3122_; lean_object* v_a_3123_; 
v_a_3122_ = lean_ctor_get(v___y_3121_, 0);
lean_inc(v_a_3122_);
v_a_3123_ = lean_ctor_get(v___y_3121_, 1);
lean_inc(v_a_3123_);
lean_dec_ref_known(v___y_3121_, 2);
v___y_3077_ = v___y_3111_;
v___y_3078_ = v___y_3112_;
v___y_3079_ = v___y_3113_;
v___y_3080_ = v___y_3114_;
v___y_3081_ = v___y_3115_;
v___y_3082_ = v___y_3116_;
v___y_3083_ = v___y_3117_;
v___y_3084_ = v___y_3118_;
v___y_3085_ = v___y_3120_;
v___y_3086_ = v___y_3119_;
v_a_3087_ = v_a_3122_;
v_a_3088_ = v_a_3123_;
goto v___jp_3076_;
}
else
{
lean_object* v_a_3124_; lean_object* v_a_3125_; 
lean_dec_ref(v___y_3120_);
lean_dec_ref(v___y_3118_);
lean_dec_ref(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec_ref(v___y_3115_);
lean_dec_ref(v___y_3113_);
lean_dec_ref(v___y_2931_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec_ref(v_dir_2925_);
lean_dec_ref(v_self_2924_);
lean_dec(v___x_2923_);
v_a_3124_ = lean_ctor_get(v___y_3121_, 0);
lean_inc(v_a_3124_);
v_a_3125_ = lean_ctor_get(v___y_3121_, 1);
lean_inc(v_a_3125_);
lean_dec_ref_known(v___y_3121_, 2);
v_a_2964_ = v_a_3124_;
v_a_2965_ = v_a_3125_;
goto v___jp_2963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object* v___x_3244_, lean_object* v___x_3245_, lean_object* v_self_3246_, lean_object* v_dir_3247_, lean_object* v_targetDecls_3248_, lean_object* v_pkg_3249_, lean_object* v_name_3250_, lean_object* v_config_3251_, lean_object* v_config_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(v___x_3244_, v___x_3245_, v_self_3246_, v_dir_3247_, v_targetDecls_3248_, v_pkg_3249_, v_name_3250_, v_config_3251_, v_config_3252_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_);
lean_dec_ref(v___y_3257_);
lean_dec(v___y_3256_);
lean_dec(v___y_3255_);
lean_dec(v___y_3254_);
lean_dec(v_config_3252_);
lean_dec_ref(v_targetDecls_3248_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object* v_self_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_){
_start:
{
lean_object* v_pkg_3270_; lean_object* v_name_3271_; lean_object* v_config_3272_; lean_object* v_keyName_3273_; lean_object* v_dir_3274_; lean_object* v_config_3275_; lean_object* v_targetDecls_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___f_3283_; lean_object* v___x_3284_; 
v_pkg_3270_ = lean_ctor_get(v_self_3262_, 0);
lean_inc_ref_n(v_pkg_3270_, 2);
v_name_3271_ = lean_ctor_get(v_self_3262_, 1);
lean_inc_n(v_name_3271_, 3);
v_config_3272_ = lean_ctor_get(v_self_3262_, 2);
lean_inc(v_config_3272_);
v_keyName_3273_ = lean_ctor_get(v_pkg_3270_, 2);
v_dir_3274_ = lean_ctor_get(v_pkg_3270_, 4);
lean_inc_ref(v_dir_3274_);
v_config_3275_ = lean_ctor_get(v_pkg_3270_, 6);
lean_inc_ref(v_config_3275_);
v_targetDecls_3276_ = lean_ctor_get(v_pkg_3270_, 15);
lean_inc_ref(v_targetDecls_3276_);
v___x_3277_ = l_Lake_instDataKindDynlib;
v___x_3278_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_3273_);
v___x_3279_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3279_, 0, v_keyName_3273_);
lean_ctor_set(v___x_3279_, 1, v_name_3271_);
v___x_3280_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3262_);
v___x_3281_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3279_);
lean_ctor_set(v___x_3281_, 1, v___x_3280_);
lean_ctor_set(v___x_3281_, 2, v_self_3262_);
lean_ctor_set(v___x_3281_, 3, v___x_3278_);
v___x_3282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3282_, 0, v_pkg_3270_);
v___f_3283_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3283_, 0, v___x_3281_);
lean_closure_set(v___f_3283_, 1, v___x_3282_);
lean_closure_set(v___f_3283_, 2, v_self_3262_);
lean_closure_set(v___f_3283_, 3, v_dir_3274_);
lean_closure_set(v___f_3283_, 4, v_targetDecls_3276_);
lean_closure_set(v___f_3283_, 5, v_pkg_3270_);
lean_closure_set(v___f_3283_, 6, v_name_3271_);
lean_closure_set(v___f_3283_, 7, v_config_3275_);
lean_closure_set(v___f_3283_, 8, v_config_3272_);
v___x_3284_ = l_Lake_ensureJob___redArg(v___x_3277_, v___f_3283_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_);
if (lean_obj_tag(v___x_3284_) == 0)
{
lean_object* v_a_3285_; lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3314_; 
v_a_3285_ = lean_ctor_get(v___x_3284_, 0);
v_a_3286_ = lean_ctor_get(v___x_3284_, 1);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3288_ = v___x_3284_;
v_isShared_3289_ = v_isSharedCheck_3314_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_inc(v_a_3285_);
lean_dec(v___x_3284_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3314_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v_task_3290_; lean_object* v_kind_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3312_; 
v_task_3290_ = lean_ctor_get(v_a_3285_, 0);
v_kind_3291_ = lean_ctor_get(v_a_3285_, 1);
v_isSharedCheck_3312_ = !lean_is_exclusive(v_a_3285_);
if (v_isSharedCheck_3312_ == 0)
{
lean_object* v_unused_3313_; 
v_unused_3313_ = lean_ctor_get(v_a_3285_, 2);
lean_dec(v_unused_3313_);
v___x_3293_ = v_a_3285_;
v_isShared_3294_ = v_isSharedCheck_3312_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_kind_3291_);
lean_inc(v_task_3290_);
lean_dec(v_a_3285_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3312_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v_registeredJobs_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; uint8_t v___x_3301_; lean_object* v_job_3303_; 
v_registeredJobs_3295_ = lean_ctor_get(v_a_3267_, 3);
v___x_3296_ = lean_st_ref_take(v_registeredJobs_3295_);
v___x_3297_ = 1;
v___x_3298_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3271_, v___x_3297_);
v___x_3299_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0));
v___x_3300_ = lean_string_append(v___x_3298_, v___x_3299_);
v___x_3301_ = 0;
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 2, v___x_3300_);
v_job_3303_ = v___x_3293_;
goto v_reusejp_3302_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_task_3290_);
lean_ctor_set(v_reuseFailAlloc_3311_, 1, v_kind_3291_);
lean_ctor_set(v_reuseFailAlloc_3311_, 2, v___x_3300_);
v_job_3303_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3302_;
}
v_reusejp_3302_:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3309_; 
lean_ctor_set_uint8(v_job_3303_, sizeof(void*)*3, v___x_3301_);
lean_inc_ref(v_job_3303_);
v___x_3304_ = l_Lake_Job_toOpaque___redArg(v_job_3303_);
v___x_3305_ = lean_array_push(v___x_3296_, v___x_3304_);
v___x_3306_ = lean_st_ref_set(v_registeredJobs_3295_, v___x_3305_);
v___x_3307_ = l_Lake_Job_renew___redArg(v_job_3303_);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v___x_3307_);
v___x_3309_ = v___x_3288_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v___x_3307_);
lean_ctor_set(v_reuseFailAlloc_3310_, 1, v_a_3286_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
}
else
{
lean_dec(v_name_3271_);
return v___x_3284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object* v_self_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_){
_start:
{
lean_object* v_res_3323_; 
v_res_3323_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(v_self_3315_, v_a_3316_, v_a_3317_, v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_);
lean_dec_ref(v_a_3320_);
lean_dec(v_a_3319_);
lean_dec(v_a_3318_);
lean_dec(v_a_3317_);
return v_res_3323_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t v_fmt_3324_, lean_object* v_a_3325_){
_start:
{
if (v_fmt_3324_ == 0)
{
lean_object* v_path_3326_; 
v_path_3326_ = lean_ctor_get(v_a_3325_, 0);
lean_inc_ref(v_path_3326_);
return v_path_3326_;
}
else
{
lean_object* v_path_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_path_3327_ = lean_ctor_get(v_a_3325_, 0);
lean_inc_ref(v_path_3327_);
v___x_3328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3328_, 0, v_path_3327_);
v___x_3329_ = l_Lean_Json_compress(v___x_3328_);
return v___x_3329_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object* v_fmt_3330_, lean_object* v_a_3331_){
_start:
{
uint8_t v_fmt_boxed_3332_; lean_object* v_res_3333_; 
v_fmt_boxed_3332_ = lean_unbox(v_fmt_3330_);
v_res_3333_ = l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(v_fmt_boxed_3332_, v_a_3331_);
lean_dec_ref(v_a_3331_);
return v_res_3333_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_3336_; uint8_t v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___f_3336_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__0));
v___x_3337_ = 1;
v___x_3338_ = l_Lake_instDataKindDynlib;
v___x_3339_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__1));
v___x_3340_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3341_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3341_, 0, v___x_3340_);
lean_ctor_set(v___x_3341_, 1, v___x_3339_);
lean_ctor_set(v___x_3341_, 2, v___x_3338_);
lean_ctor_set(v___x_3341_, 3, v___f_3336_);
lean_ctor_set_uint8(v___x_3341_, sizeof(void*)*4, v___x_3337_);
lean_ctor_set_uint8(v___x_3341_, sizeof(void*)*4 + 1, v___x_3337_);
return v___x_3341_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig(void){
_start:
{
lean_object* v___x_3342_; 
v___x_3342_ = lean_obj_once(&l_Lake_LeanLib_sharedFacetConfig___closed__2, &l_Lake_LeanLib_sharedFacetConfig___closed__2_once, _init_l_Lake_LeanLib_sharedFacetConfig___closed__2);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object* v___x_3343_, lean_object* v_as_3344_, size_t v_sz_3345_, size_t v_i_3346_, lean_object* v_b_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_){
_start:
{
uint8_t v___x_3355_; 
v___x_3355_ = lean_usize_dec_lt(v_i_3346_, v_sz_3345_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; 
lean_dec_ref(v___y_3348_);
lean_dec_ref(v___x_3343_);
v___x_3356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3356_, 0, v_b_3347_);
lean_ctor_set(v___x_3356_, 1, v___y_3353_);
return v___x_3356_;
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3358_; 
v_a_3357_ = lean_array_uget_borrowed(v_as_3344_, v_i_3346_);
lean_inc_ref(v___y_3348_);
lean_inc_n(v_a_3357_, 2);
lean_inc_ref(v___x_3343_);
v___x_3358_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v___x_3343_, v_a_3357_, v_a_3357_, v___x_3355_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v_a_3360_; lean_object* v_snd_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; size_t v___x_3364_; size_t v___x_3365_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3359_);
v_a_3360_ = lean_ctor_get(v___x_3358_, 1);
lean_inc(v_a_3360_);
lean_dec_ref_known(v___x_3358_, 2);
v_snd_3361_ = lean_ctor_get(v_a_3359_, 1);
lean_inc(v_snd_3361_);
lean_dec(v_a_3359_);
v___x_3362_ = l_Lake_Job_toOpaque___redArg(v_snd_3361_);
v___x_3363_ = l_Lake_Job_mix___redArg(v_b_3347_, v___x_3362_);
v___x_3364_ = ((size_t)1ULL);
v___x_3365_ = lean_usize_add(v_i_3346_, v___x_3364_);
v_i_3346_ = v___x_3365_;
v_b_3347_ = v___x_3363_;
v___y_3353_ = v_a_3360_;
goto _start;
}
else
{
lean_object* v_a_3367_; lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
lean_dec_ref(v___y_3348_);
lean_dec_ref(v_b_3347_);
lean_dec_ref(v___x_3343_);
v_a_3367_ = lean_ctor_get(v___x_3358_, 0);
v_a_3368_ = lean_ctor_get(v___x_3358_, 1);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3358_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_inc(v_a_3367_);
lean_dec(v___x_3358_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3367_);
lean_ctor_set(v_reuseFailAlloc_3374_, 1, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object* v___x_3376_, lean_object* v_as_3377_, lean_object* v_sz_3378_, lean_object* v_i_3379_, lean_object* v_b_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
size_t v_sz_boxed_3388_; size_t v_i_boxed_3389_; lean_object* v_res_3390_; 
v_sz_boxed_3388_ = lean_unbox_usize(v_sz_3378_);
lean_dec(v_sz_3378_);
v_i_boxed_3389_ = lean_unbox_usize(v_i_3379_);
lean_dec(v_i_3379_);
v_res_3390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v___x_3376_, v_as_3377_, v_sz_boxed_3388_, v_i_boxed_3389_, v_b_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec(v___y_3382_);
lean_dec_ref(v_as_3377_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object* v___x_3391_, lean_object* v_as_3392_, size_t v_sz_3393_, size_t v_i_3394_, lean_object* v_b_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_){
_start:
{
uint8_t v___x_3403_; 
v___x_3403_ = lean_usize_dec_lt(v_i_3394_, v_sz_3393_);
if (v___x_3403_ == 0)
{
lean_object* v___x_3404_; 
lean_dec_ref(v___y_3396_);
lean_dec_ref(v___x_3391_);
v___x_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3404_, 0, v_b_3395_);
lean_ctor_set(v___x_3404_, 1, v___y_3401_);
return v___x_3404_;
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3406_; 
v_a_3405_ = lean_array_uget_borrowed(v_as_3392_, v_i_3394_);
lean_inc_ref(v___y_3396_);
lean_inc(v_a_3405_);
lean_inc_ref(v___x_3391_);
v___x_3406_ = l_Lake_Package_fetchTargetJob(v___x_3391_, v_a_3405_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_);
if (lean_obj_tag(v___x_3406_) == 0)
{
lean_object* v_a_3407_; lean_object* v_a_3408_; lean_object* v___x_3409_; size_t v___x_3410_; size_t v___x_3411_; 
v_a_3407_ = lean_ctor_get(v___x_3406_, 0);
lean_inc(v_a_3407_);
v_a_3408_ = lean_ctor_get(v___x_3406_, 1);
lean_inc(v_a_3408_);
lean_dec_ref_known(v___x_3406_, 2);
v___x_3409_ = l_Lake_Job_mix___redArg(v_b_3395_, v_a_3407_);
v___x_3410_ = ((size_t)1ULL);
v___x_3411_ = lean_usize_add(v_i_3394_, v___x_3410_);
v_i_3394_ = v___x_3411_;
v_b_3395_ = v___x_3409_;
v___y_3401_ = v_a_3408_;
goto _start;
}
else
{
lean_object* v_a_3413_; lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
lean_dec_ref(v___y_3396_);
lean_dec_ref(v_b_3395_);
lean_dec_ref(v___x_3391_);
v_a_3413_ = lean_ctor_get(v___x_3406_, 0);
v_a_3414_ = lean_ctor_get(v___x_3406_, 1);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3406_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3406_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_inc(v_a_3413_);
lean_dec(v___x_3406_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3413_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object* v___x_3422_, lean_object* v_as_3423_, lean_object* v_sz_3424_, lean_object* v_i_3425_, lean_object* v_b_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
size_t v_sz_boxed_3434_; size_t v_i_boxed_3435_; lean_object* v_res_3436_; 
v_sz_boxed_3434_ = lean_unbox_usize(v_sz_3424_);
lean_dec(v_sz_3424_);
v_i_boxed_3435_ = lean_unbox_usize(v_i_3425_);
lean_dec(v_i_3425_);
v_res_3436_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v___x_3422_, v_as_3423_, v_sz_boxed_3434_, v_i_boxed_3435_, v_b_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_);
lean_dec_ref(v___y_3431_);
lean_dec(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec(v___y_3428_);
lean_dec_ref(v_as_3423_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object* v_self_3439_, lean_object* v_a_3440_, lean_object* v_a_3441_, lean_object* v_a_3442_, lean_object* v_a_3443_, lean_object* v_a_3444_, lean_object* v_a_3445_){
_start:
{
lean_object* v_pkg_3447_; lean_object* v_name_3448_; lean_object* v_config_3449_; lean_object* v_baseName_3450_; lean_object* v_keyName_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v_pkg_3447_ = lean_ctor_get(v_self_3439_, 0);
lean_inc_ref_n(v_pkg_3447_, 2);
v_name_3448_ = lean_ctor_get(v_self_3439_, 1);
lean_inc(v_name_3448_);
v_config_3449_ = lean_ctor_get(v_self_3439_, 2);
lean_inc(v_config_3449_);
lean_dec_ref(v_self_3439_);
v_baseName_3450_ = lean_ctor_get(v_pkg_3447_, 1);
v_keyName_3451_ = lean_ctor_get(v_pkg_3447_, 2);
v___x_3452_ = l_Lake_Package_extraDepFacet;
lean_inc(v_keyName_3451_);
v___x_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3453_, 0, v_keyName_3451_);
v___x_3454_ = l_Lake_Package_keyword;
v___x_3455_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3453_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
lean_ctor_set(v___x_3455_, 2, v_pkg_3447_);
lean_ctor_set(v___x_3455_, 3, v___x_3452_);
lean_inc_ref(v_a_3440_);
lean_inc_ref(v_a_3444_);
lean_inc(v_a_3443_);
lean_inc(v_a_3442_);
lean_inc(v_a_3441_);
v___x_3456_ = lean_apply_7(v_a_3440_, v___x_3455_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3445_, lean_box(0));
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v_a_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3494_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
v_a_3458_ = lean_ctor_get(v___x_3456_, 1);
v_isSharedCheck_3494_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3494_ == 0)
{
v___x_3460_ = v___x_3456_;
v_isShared_3461_ = v_isSharedCheck_3494_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_a_3458_);
lean_inc(v_a_3457_);
lean_dec(v___x_3456_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3494_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
uint8_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v_needs_3466_; lean_object* v_extraDepTargets_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; uint8_t v___x_3474_; uint8_t v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3462_ = 1;
lean_inc(v_baseName_3450_);
v___x_3463_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3450_, v___x_3462_);
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v_needs_3466_ = lean_ctor_get(v_config_3449_, 5);
lean_inc_ref(v_needs_3466_);
v_extraDepTargets_3467_ = lean_ctor_get(v_config_3449_, 6);
lean_inc_ref(v_extraDepTargets_3467_);
lean_dec(v_config_3449_);
v___x_3468_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0));
v___x_3469_ = lean_string_append(v___x_3463_, v___x_3468_);
v___x_3470_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3448_, v___x_3462_);
v___x_3471_ = lean_string_append(v___x_3469_, v___x_3470_);
lean_dec_ref(v___x_3470_);
v___x_3472_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1));
v___x_3473_ = lean_string_append(v___x_3471_, v___x_3472_);
v___x_3474_ = 0;
v___x_3475_ = 0;
v___x_3476_ = l_Lake_BuildTrace_nil(v___x_3473_);
v___x_3477_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3477_, 0, v___x_3465_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
lean_ctor_set(v___x_3477_, 2, v___x_3464_);
lean_ctor_set_uint8(v___x_3477_, sizeof(void*)*3, v___x_3474_);
lean_ctor_set_uint8(v___x_3477_, sizeof(void*)*3 + 1, v___x_3475_);
v___x_3478_ = lean_box(0);
v___x_3479_ = lean_box(0);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 1, v___x_3477_);
lean_ctor_set(v___x_3460_, 0, v___x_3479_);
v___x_3481_ = v___x_3460_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3493_; 
v_reuseFailAlloc_3493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3493_, 0, v___x_3479_);
lean_ctor_set(v_reuseFailAlloc_3493_, 1, v___x_3477_);
v___x_3481_ = v_reuseFailAlloc_3493_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v_job_3484_; lean_object* v___x_3485_; size_t v_sz_3486_; size_t v___x_3487_; lean_object* v___x_3488_; 
v___x_3482_ = lean_task_pure(v___x_3481_);
v___x_3483_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v_job_3484_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_3484_, 0, v___x_3482_);
lean_ctor_set(v_job_3484_, 1, v___x_3478_);
lean_ctor_set(v_job_3484_, 2, v___x_3483_);
lean_ctor_set_uint8(v_job_3484_, sizeof(void*)*3, v___x_3475_);
v___x_3485_ = l_Lake_Job_mix___redArg(v_job_3484_, v_a_3457_);
v_sz_3486_ = lean_array_size(v_extraDepTargets_3467_);
v___x_3487_ = ((size_t)0ULL);
lean_inc_ref(v_a_3440_);
lean_inc_ref(v_pkg_3447_);
v___x_3488_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v_pkg_3447_, v_extraDepTargets_3467_, v_sz_3486_, v___x_3487_, v___x_3485_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3458_);
lean_dec_ref(v_extraDepTargets_3467_);
if (lean_obj_tag(v___x_3488_) == 0)
{
lean_object* v_a_3489_; lean_object* v_a_3490_; size_t v_sz_3491_; lean_object* v___x_3492_; 
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
lean_inc(v_a_3489_);
v_a_3490_ = lean_ctor_get(v___x_3488_, 1);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3488_, 2);
v_sz_3491_ = lean_array_size(v_needs_3466_);
v___x_3492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v_pkg_3447_, v_needs_3466_, v_sz_3491_, v___x_3487_, v_a_3489_, v_a_3440_, v_a_3441_, v_a_3442_, v_a_3443_, v_a_3444_, v_a_3490_);
lean_dec_ref(v_needs_3466_);
return v___x_3492_;
}
else
{
lean_dec_ref(v_needs_3466_);
lean_dec_ref(v_pkg_3447_);
lean_dec_ref(v_a_3440_);
return v___x_3488_;
}
}
}
}
else
{
lean_dec(v_config_3449_);
lean_dec(v_name_3448_);
lean_dec_ref(v_pkg_3447_);
lean_dec_ref(v_a_3440_);
return v___x_3456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object* v_self_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(v_self_3495_, v_a_3496_, v_a_3497_, v_a_3498_, v_a_3499_, v_a_3500_, v_a_3501_);
lean_dec_ref(v_a_3500_);
lean_dec(v_a_3499_);
lean_dec(v_a_3498_);
lean_dec(v_a_3497_);
return v_res_3503_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3505_; uint8_t v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___f_3505_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3506_ = 1;
v___x_3507_ = l_Lake_instDataKindUnit;
v___x_3508_ = ((lean_object*)(l_Lake_LeanLib_extraDepFacetConfig___closed__0));
v___x_3509_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3510_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
lean_ctor_set(v___x_3510_, 1, v___x_3508_);
lean_ctor_set(v___x_3510_, 2, v___x_3507_);
lean_ctor_set(v___x_3510_, 3, v___f_3505_);
lean_ctor_set_uint8(v___x_3510_, sizeof(void*)*4, v___x_3506_);
lean_ctor_set_uint8(v___x_3510_, sizeof(void*)*4 + 1, v___x_3506_);
return v___x_3510_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig(void){
_start:
{
lean_object* v___x_3511_; 
v___x_3511_ = lean_obj_once(&l_Lake_LeanLib_extraDepFacetConfig___closed__1, &l_Lake_LeanLib_extraDepFacetConfig___closed__1_once, _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1);
return v___x_3511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object* v_self_3512_, size_t v_sz_3513_, size_t v_i_3514_, lean_object* v_bs_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_){
_start:
{
uint8_t v___x_3523_; 
v___x_3523_ = lean_usize_dec_lt(v_i_3514_, v_sz_3513_);
if (v___x_3523_ == 0)
{
lean_object* v___x_3524_; 
lean_dec_ref(v___y_3516_);
lean_dec_ref(v_self_3512_);
v___x_3524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3524_, 0, v_bs_3515_);
lean_ctor_set(v___x_3524_, 1, v___y_3521_);
return v___x_3524_;
}
else
{
lean_object* v_pkg_3525_; lean_object* v_name_3526_; lean_object* v_keyName_3527_; lean_object* v_v_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v_pkg_3525_ = lean_ctor_get(v_self_3512_, 0);
v_name_3526_ = lean_ctor_get(v_self_3512_, 1);
v_keyName_3527_ = lean_ctor_get(v_pkg_3525_, 2);
v_v_3528_ = lean_array_uget_borrowed(v_bs_3515_, v_i_3514_);
lean_inc(v_name_3526_);
lean_inc(v_keyName_3527_);
v___x_3529_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3529_, 0, v_keyName_3527_);
lean_ctor_set(v___x_3529_, 1, v_name_3526_);
v___x_3530_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc(v_v_3528_);
lean_inc_ref(v_self_3512_);
v___x_3531_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3529_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
lean_ctor_set(v___x_3531_, 2, v_self_3512_);
lean_ctor_set(v___x_3531_, 3, v_v_3528_);
lean_inc_ref(v___y_3516_);
lean_inc_ref(v___y_3520_);
lean_inc(v___y_3519_);
lean_inc(v___y_3518_);
lean_inc(v___y_3517_);
v___x_3532_ = lean_apply_7(v___y_3516_, v___x_3531_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, lean_box(0));
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v_a_3534_; lean_object* v___x_3535_; lean_object* v_bs_x27_3536_; lean_object* v___x_3537_; size_t v___x_3538_; size_t v___x_3539_; lean_object* v___x_3540_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
v_a_3534_ = lean_ctor_get(v___x_3532_, 1);
lean_inc(v_a_3534_);
lean_dec_ref_known(v___x_3532_, 2);
v___x_3535_ = lean_unsigned_to_nat(0u);
v_bs_x27_3536_ = lean_array_uset(v_bs_3515_, v_i_3514_, v___x_3535_);
v___x_3537_ = l_Lake_Job_toOpaque___redArg(v_a_3533_);
v___x_3538_ = ((size_t)1ULL);
v___x_3539_ = lean_usize_add(v_i_3514_, v___x_3538_);
v___x_3540_ = lean_array_uset(v_bs_x27_3536_, v_i_3514_, v___x_3537_);
v_i_3514_ = v___x_3539_;
v_bs_3515_ = v___x_3540_;
v___y_3521_ = v_a_3534_;
goto _start;
}
else
{
lean_object* v_a_3542_; lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v___y_3516_);
lean_dec_ref(v_bs_3515_);
lean_dec_ref(v_self_3512_);
v_a_3542_ = lean_ctor_get(v___x_3532_, 0);
v_a_3543_ = lean_ctor_get(v___x_3532_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3532_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_inc(v_a_3542_);
lean_dec(v___x_3532_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3542_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object* v_self_3551_, lean_object* v_sz_3552_, lean_object* v_i_3553_, lean_object* v_bs_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_){
_start:
{
size_t v_sz_boxed_3562_; size_t v_i_boxed_3563_; lean_object* v_res_3564_; 
v_sz_boxed_3562_ = lean_unbox_usize(v_sz_3552_);
lean_dec(v_sz_3552_);
v_i_boxed_3563_ = lean_unbox_usize(v_i_3553_);
lean_dec(v_i_3553_);
v_res_3564_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3551_, v_sz_boxed_3562_, v_i_boxed_3563_, v_bs_3554_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec(v___y_3558_);
lean_dec(v___y_3557_);
lean_dec(v___y_3556_);
return v_res_3564_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object* v_self_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_){
_start:
{
lean_object* v_config_3574_; lean_object* v_defaultFacets_3575_; size_t v_sz_3576_; size_t v___x_3577_; lean_object* v___x_3578_; 
v_config_3574_ = lean_ctor_get(v_self_3566_, 2);
v_defaultFacets_3575_ = lean_ctor_get(v_config_3574_, 7);
lean_inc_ref(v_defaultFacets_3575_);
v_sz_3576_ = lean_array_size(v_defaultFacets_3575_);
v___x_3577_ = ((size_t)0ULL);
v___x_3578_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3566_, v_sz_3576_, v___x_3577_, v_defaultFacets_3575_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_, v_a_3572_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3589_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
v_a_3580_ = lean_ctor_get(v___x_3578_, 1);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3582_ = v___x_3578_;
v_isShared_3583_ = v_isSharedCheck_3589_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_inc(v_a_3579_);
lean_dec(v___x_3578_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3589_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3587_; 
v___x_3584_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0));
v___x_3585_ = l_Lake_Job_mixArray___redArg(v_a_3579_, v___x_3584_);
lean_dec(v_a_3579_);
if (v_isShared_3583_ == 0)
{
lean_ctor_set(v___x_3582_, 0, v___x_3585_);
v___x_3587_ = v___x_3582_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_3585_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_a_3580_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
else
{
lean_object* v_a_3590_; lean_object* v_a_3591_; lean_object* v___x_3593_; uint8_t v_isShared_3594_; uint8_t v_isSharedCheck_3598_; 
v_a_3590_ = lean_ctor_get(v___x_3578_, 0);
v_a_3591_ = lean_ctor_get(v___x_3578_, 1);
v_isSharedCheck_3598_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3593_ = v___x_3578_;
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
else
{
lean_inc(v_a_3591_);
lean_inc(v_a_3590_);
lean_dec(v___x_3578_);
v___x_3593_ = lean_box(0);
v_isShared_3594_ = v_isSharedCheck_3598_;
goto v_resetjp_3592_;
}
v_resetjp_3592_:
{
lean_object* v___x_3596_; 
if (v_isShared_3594_ == 0)
{
v___x_3596_ = v___x_3593_;
goto v_reusejp_3595_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v_a_3590_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v_a_3591_);
v___x_3596_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3595_;
}
v_reusejp_3595_:
{
return v___x_3596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object* v_self_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_){
_start:
{
lean_object* v_res_3607_; 
v_res_3607_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(v_self_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_);
lean_dec_ref(v_a_3604_);
lean_dec(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec(v_a_3601_);
return v_res_3607_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3609_; uint8_t v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
v___f_3609_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3610_ = 1;
v___x_3611_ = l_Lake_instDataKindUnit;
v___x_3612_ = ((lean_object*)(l_Lake_LeanLib_defaultFacetConfig___closed__0));
v___x_3613_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3614_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
lean_ctor_set(v___x_3614_, 1, v___x_3612_);
lean_ctor_set(v___x_3614_, 2, v___x_3611_);
lean_ctor_set(v___x_3614_, 3, v___f_3609_);
lean_ctor_set_uint8(v___x_3614_, sizeof(void*)*4, v___x_3610_);
lean_ctor_set_uint8(v___x_3614_, sizeof(void*)*4 + 1, v___x_3610_);
return v___x_3614_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig(void){
_start:
{
lean_object* v___x_3615_; 
v___x_3615_ = lean_obj_once(&l_Lake_LeanLib_defaultFacetConfig___closed__1, &l_Lake_LeanLib_defaultFacetConfig___closed__1_once, _init_l_Lake_LeanLib_defaultFacetConfig___closed__1);
return v___x_3615_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object* v_k_3616_, lean_object* v_v_3617_, lean_object* v_t_3618_){
_start:
{
if (lean_obj_tag(v_t_3618_) == 0)
{
lean_object* v_size_3619_; lean_object* v_k_3620_; lean_object* v_v_3621_; lean_object* v_l_3622_; lean_object* v_r_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3903_; 
v_size_3619_ = lean_ctor_get(v_t_3618_, 0);
v_k_3620_ = lean_ctor_get(v_t_3618_, 1);
v_v_3621_ = lean_ctor_get(v_t_3618_, 2);
v_l_3622_ = lean_ctor_get(v_t_3618_, 3);
v_r_3623_ = lean_ctor_get(v_t_3618_, 4);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_t_3618_);
if (v_isSharedCheck_3903_ == 0)
{
v___x_3625_ = v_t_3618_;
v_isShared_3626_ = v_isSharedCheck_3903_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_r_3623_);
lean_inc(v_l_3622_);
lean_inc(v_v_3621_);
lean_inc(v_k_3620_);
lean_inc(v_size_3619_);
lean_dec(v_t_3618_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3903_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
uint8_t v___x_3627_; 
v___x_3627_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3616_, v_k_3620_);
switch(v___x_3627_)
{
case 0:
{
lean_object* v_impl_3628_; lean_object* v___x_3629_; 
lean_dec(v_size_3619_);
v_impl_3628_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3616_, v_v_3617_, v_l_3622_);
v___x_3629_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3623_) == 0)
{
lean_object* v_size_3630_; lean_object* v_size_3631_; lean_object* v_k_3632_; lean_object* v_v_3633_; lean_object* v_l_3634_; lean_object* v_r_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; uint8_t v___x_3638_; 
v_size_3630_ = lean_ctor_get(v_r_3623_, 0);
v_size_3631_ = lean_ctor_get(v_impl_3628_, 0);
lean_inc(v_size_3631_);
v_k_3632_ = lean_ctor_get(v_impl_3628_, 1);
lean_inc(v_k_3632_);
v_v_3633_ = lean_ctor_get(v_impl_3628_, 2);
lean_inc(v_v_3633_);
v_l_3634_ = lean_ctor_get(v_impl_3628_, 3);
lean_inc(v_l_3634_);
v_r_3635_ = lean_ctor_get(v_impl_3628_, 4);
lean_inc(v_r_3635_);
v___x_3636_ = lean_unsigned_to_nat(3u);
v___x_3637_ = lean_nat_mul(v___x_3636_, v_size_3630_);
v___x_3638_ = lean_nat_dec_lt(v___x_3637_, v_size_3631_);
lean_dec(v___x_3637_);
if (v___x_3638_ == 0)
{
lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v___x_3642_; 
lean_dec(v_r_3635_);
lean_dec(v_l_3634_);
lean_dec(v_v_3633_);
lean_dec(v_k_3632_);
v___x_3639_ = lean_nat_add(v___x_3629_, v_size_3631_);
lean_dec(v_size_3631_);
v___x_3640_ = lean_nat_add(v___x_3639_, v_size_3630_);
lean_dec(v___x_3639_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 3, v_impl_3628_);
lean_ctor_set(v___x_3625_, 0, v___x_3640_);
v___x_3642_ = v___x_3625_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v___x_3640_);
lean_ctor_set(v_reuseFailAlloc_3643_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3643_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3643_, 3, v_impl_3628_);
lean_ctor_set(v_reuseFailAlloc_3643_, 4, v_r_3623_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
else
{
lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3709_; 
v_isSharedCheck_3709_ = !lean_is_exclusive(v_impl_3628_);
if (v_isSharedCheck_3709_ == 0)
{
lean_object* v_unused_3710_; lean_object* v_unused_3711_; lean_object* v_unused_3712_; lean_object* v_unused_3713_; lean_object* v_unused_3714_; 
v_unused_3710_ = lean_ctor_get(v_impl_3628_, 4);
lean_dec(v_unused_3710_);
v_unused_3711_ = lean_ctor_get(v_impl_3628_, 3);
lean_dec(v_unused_3711_);
v_unused_3712_ = lean_ctor_get(v_impl_3628_, 2);
lean_dec(v_unused_3712_);
v_unused_3713_ = lean_ctor_get(v_impl_3628_, 1);
lean_dec(v_unused_3713_);
v_unused_3714_ = lean_ctor_get(v_impl_3628_, 0);
lean_dec(v_unused_3714_);
v___x_3645_ = v_impl_3628_;
v_isShared_3646_ = v_isSharedCheck_3709_;
goto v_resetjp_3644_;
}
else
{
lean_dec(v_impl_3628_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3709_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v_size_3647_; lean_object* v_size_3648_; lean_object* v_k_3649_; lean_object* v_v_3650_; lean_object* v_l_3651_; lean_object* v_r_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; uint8_t v___x_3655_; 
v_size_3647_ = lean_ctor_get(v_l_3634_, 0);
v_size_3648_ = lean_ctor_get(v_r_3635_, 0);
v_k_3649_ = lean_ctor_get(v_r_3635_, 1);
v_v_3650_ = lean_ctor_get(v_r_3635_, 2);
v_l_3651_ = lean_ctor_get(v_r_3635_, 3);
v_r_3652_ = lean_ctor_get(v_r_3635_, 4);
v___x_3653_ = lean_unsigned_to_nat(2u);
v___x_3654_ = lean_nat_mul(v___x_3653_, v_size_3647_);
v___x_3655_ = lean_nat_dec_lt(v_size_3648_, v___x_3654_);
lean_dec(v___x_3654_);
if (v___x_3655_ == 0)
{
lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3684_; 
lean_inc(v_r_3652_);
lean_inc(v_l_3651_);
lean_inc(v_v_3650_);
lean_inc(v_k_3649_);
v_isSharedCheck_3684_ = !lean_is_exclusive(v_r_3635_);
if (v_isSharedCheck_3684_ == 0)
{
lean_object* v_unused_3685_; lean_object* v_unused_3686_; lean_object* v_unused_3687_; lean_object* v_unused_3688_; lean_object* v_unused_3689_; 
v_unused_3685_ = lean_ctor_get(v_r_3635_, 4);
lean_dec(v_unused_3685_);
v_unused_3686_ = lean_ctor_get(v_r_3635_, 3);
lean_dec(v_unused_3686_);
v_unused_3687_ = lean_ctor_get(v_r_3635_, 2);
lean_dec(v_unused_3687_);
v_unused_3688_ = lean_ctor_get(v_r_3635_, 1);
lean_dec(v_unused_3688_);
v_unused_3689_ = lean_ctor_get(v_r_3635_, 0);
lean_dec(v_unused_3689_);
v___x_3657_ = v_r_3635_;
v_isShared_3658_ = v_isSharedCheck_3684_;
goto v_resetjp_3656_;
}
else
{
lean_dec(v_r_3635_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3684_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___x_3672_; lean_object* v___y_3674_; 
v___x_3659_ = lean_nat_add(v___x_3629_, v_size_3631_);
lean_dec(v_size_3631_);
v___x_3660_ = lean_nat_add(v___x_3659_, v_size_3630_);
lean_dec(v___x_3659_);
v___x_3672_ = lean_nat_add(v___x_3629_, v_size_3647_);
if (lean_obj_tag(v_l_3651_) == 0)
{
lean_object* v_size_3682_; 
v_size_3682_ = lean_ctor_get(v_l_3651_, 0);
lean_inc(v_size_3682_);
v___y_3674_ = v_size_3682_;
goto v___jp_3673_;
}
else
{
lean_object* v___x_3683_; 
v___x_3683_ = lean_unsigned_to_nat(0u);
v___y_3674_ = v___x_3683_;
goto v___jp_3673_;
}
v___jp_3661_:
{
lean_object* v___x_3665_; lean_object* v___x_3667_; 
v___x_3665_ = lean_nat_add(v___y_3663_, v___y_3664_);
lean_dec(v___y_3664_);
lean_dec(v___y_3663_);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 4, v_r_3623_);
lean_ctor_set(v___x_3657_, 3, v_r_3652_);
lean_ctor_set(v___x_3657_, 2, v_v_3621_);
lean_ctor_set(v___x_3657_, 1, v_k_3620_);
lean_ctor_set(v___x_3657_, 0, v___x_3665_);
v___x_3667_ = v___x_3657_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3665_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3671_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3671_, 3, v_r_3652_);
lean_ctor_set(v_reuseFailAlloc_3671_, 4, v_r_3623_);
v___x_3667_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3669_; 
if (v_isShared_3646_ == 0)
{
lean_ctor_set(v___x_3645_, 4, v___x_3667_);
lean_ctor_set(v___x_3645_, 3, v___y_3662_);
lean_ctor_set(v___x_3645_, 2, v_v_3650_);
lean_ctor_set(v___x_3645_, 1, v_k_3649_);
lean_ctor_set(v___x_3645_, 0, v___x_3660_);
v___x_3669_ = v___x_3645_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3660_);
lean_ctor_set(v_reuseFailAlloc_3670_, 1, v_k_3649_);
lean_ctor_set(v_reuseFailAlloc_3670_, 2, v_v_3650_);
lean_ctor_set(v_reuseFailAlloc_3670_, 3, v___y_3662_);
lean_ctor_set(v_reuseFailAlloc_3670_, 4, v___x_3667_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
v___jp_3673_:
{
lean_object* v___x_3675_; lean_object* v___x_3677_; 
v___x_3675_ = lean_nat_add(v___x_3672_, v___y_3674_);
lean_dec(v___y_3674_);
lean_dec(v___x_3672_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v_l_3651_);
lean_ctor_set(v___x_3625_, 3, v_l_3634_);
lean_ctor_set(v___x_3625_, 2, v_v_3633_);
lean_ctor_set(v___x_3625_, 1, v_k_3632_);
lean_ctor_set(v___x_3625_, 0, v___x_3675_);
v___x_3677_ = v___x_3625_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___x_3675_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v_k_3632_);
lean_ctor_set(v_reuseFailAlloc_3681_, 2, v_v_3633_);
lean_ctor_set(v_reuseFailAlloc_3681_, 3, v_l_3634_);
lean_ctor_set(v_reuseFailAlloc_3681_, 4, v_l_3651_);
v___x_3677_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3678_; 
v___x_3678_ = lean_nat_add(v___x_3629_, v_size_3630_);
if (lean_obj_tag(v_r_3652_) == 0)
{
lean_object* v_size_3679_; 
v_size_3679_ = lean_ctor_get(v_r_3652_, 0);
lean_inc(v_size_3679_);
v___y_3662_ = v___x_3677_;
v___y_3663_ = v___x_3678_;
v___y_3664_ = v_size_3679_;
goto v___jp_3661_;
}
else
{
lean_object* v___x_3680_; 
v___x_3680_ = lean_unsigned_to_nat(0u);
v___y_3662_ = v___x_3677_;
v___y_3663_ = v___x_3678_;
v___y_3664_ = v___x_3680_;
goto v___jp_3661_;
}
}
}
}
}
else
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3695_; 
lean_del_object(v___x_3625_);
v___x_3690_ = lean_nat_add(v___x_3629_, v_size_3631_);
lean_dec(v_size_3631_);
v___x_3691_ = lean_nat_add(v___x_3690_, v_size_3630_);
lean_dec(v___x_3690_);
v___x_3692_ = lean_nat_add(v___x_3629_, v_size_3630_);
v___x_3693_ = lean_nat_add(v___x_3692_, v_size_3648_);
lean_dec(v___x_3692_);
lean_inc_ref(v_r_3623_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set(v___x_3645_, 4, v_r_3623_);
lean_ctor_set(v___x_3645_, 3, v_r_3635_);
lean_ctor_set(v___x_3645_, 2, v_v_3621_);
lean_ctor_set(v___x_3645_, 1, v_k_3620_);
lean_ctor_set(v___x_3645_, 0, v___x_3693_);
v___x_3695_ = v___x_3645_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3693_);
lean_ctor_set(v_reuseFailAlloc_3708_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3708_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3708_, 3, v_r_3635_);
lean_ctor_set(v_reuseFailAlloc_3708_, 4, v_r_3623_);
v___x_3695_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3702_; 
v_isSharedCheck_3702_ = !lean_is_exclusive(v_r_3623_);
if (v_isSharedCheck_3702_ == 0)
{
lean_object* v_unused_3703_; lean_object* v_unused_3704_; lean_object* v_unused_3705_; lean_object* v_unused_3706_; lean_object* v_unused_3707_; 
v_unused_3703_ = lean_ctor_get(v_r_3623_, 4);
lean_dec(v_unused_3703_);
v_unused_3704_ = lean_ctor_get(v_r_3623_, 3);
lean_dec(v_unused_3704_);
v_unused_3705_ = lean_ctor_get(v_r_3623_, 2);
lean_dec(v_unused_3705_);
v_unused_3706_ = lean_ctor_get(v_r_3623_, 1);
lean_dec(v_unused_3706_);
v_unused_3707_ = lean_ctor_get(v_r_3623_, 0);
lean_dec(v_unused_3707_);
v___x_3697_ = v_r_3623_;
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
else
{
lean_dec(v_r_3623_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3702_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
lean_ctor_set(v___x_3697_, 4, v___x_3695_);
lean_ctor_set(v___x_3697_, 3, v_l_3634_);
lean_ctor_set(v___x_3697_, 2, v_v_3633_);
lean_ctor_set(v___x_3697_, 1, v_k_3632_);
lean_ctor_set(v___x_3697_, 0, v___x_3691_);
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3691_);
lean_ctor_set(v_reuseFailAlloc_3701_, 1, v_k_3632_);
lean_ctor_set(v_reuseFailAlloc_3701_, 2, v_v_3633_);
lean_ctor_set(v_reuseFailAlloc_3701_, 3, v_l_3634_);
lean_ctor_set(v_reuseFailAlloc_3701_, 4, v___x_3695_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3715_; 
v_l_3715_ = lean_ctor_get(v_impl_3628_, 3);
lean_inc(v_l_3715_);
if (lean_obj_tag(v_l_3715_) == 0)
{
lean_object* v_r_3716_; lean_object* v_k_3717_; lean_object* v_v_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3729_; 
v_r_3716_ = lean_ctor_get(v_impl_3628_, 4);
v_k_3717_ = lean_ctor_get(v_impl_3628_, 1);
v_v_3718_ = lean_ctor_get(v_impl_3628_, 2);
v_isSharedCheck_3729_ = !lean_is_exclusive(v_impl_3628_);
if (v_isSharedCheck_3729_ == 0)
{
lean_object* v_unused_3730_; lean_object* v_unused_3731_; 
v_unused_3730_ = lean_ctor_get(v_impl_3628_, 3);
lean_dec(v_unused_3730_);
v_unused_3731_ = lean_ctor_get(v_impl_3628_, 0);
lean_dec(v_unused_3731_);
v___x_3720_ = v_impl_3628_;
v_isShared_3721_ = v_isSharedCheck_3729_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_r_3716_);
lean_inc(v_v_3718_);
lean_inc(v_k_3717_);
lean_dec(v_impl_3628_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3729_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3722_; lean_object* v___x_3724_; 
v___x_3722_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3716_);
if (v_isShared_3721_ == 0)
{
lean_ctor_set(v___x_3720_, 3, v_r_3716_);
lean_ctor_set(v___x_3720_, 2, v_v_3621_);
lean_ctor_set(v___x_3720_, 1, v_k_3620_);
lean_ctor_set(v___x_3720_, 0, v___x_3629_);
v___x_3724_ = v___x_3720_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3728_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3728_, 3, v_r_3716_);
lean_ctor_set(v_reuseFailAlloc_3728_, 4, v_r_3716_);
v___x_3724_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
lean_object* v___x_3726_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v___x_3724_);
lean_ctor_set(v___x_3625_, 3, v_l_3715_);
lean_ctor_set(v___x_3625_, 2, v_v_3718_);
lean_ctor_set(v___x_3625_, 1, v_k_3717_);
lean_ctor_set(v___x_3625_, 0, v___x_3722_);
v___x_3726_ = v___x_3625_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3722_);
lean_ctor_set(v_reuseFailAlloc_3727_, 1, v_k_3717_);
lean_ctor_set(v_reuseFailAlloc_3727_, 2, v_v_3718_);
lean_ctor_set(v_reuseFailAlloc_3727_, 3, v_l_3715_);
lean_ctor_set(v_reuseFailAlloc_3727_, 4, v___x_3724_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
else
{
lean_object* v_r_3732_; 
v_r_3732_ = lean_ctor_get(v_impl_3628_, 4);
lean_inc(v_r_3732_);
if (lean_obj_tag(v_r_3732_) == 0)
{
lean_object* v_k_3733_; lean_object* v_v_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3757_; 
v_k_3733_ = lean_ctor_get(v_impl_3628_, 1);
v_v_3734_ = lean_ctor_get(v_impl_3628_, 2);
v_isSharedCheck_3757_ = !lean_is_exclusive(v_impl_3628_);
if (v_isSharedCheck_3757_ == 0)
{
lean_object* v_unused_3758_; lean_object* v_unused_3759_; lean_object* v_unused_3760_; 
v_unused_3758_ = lean_ctor_get(v_impl_3628_, 4);
lean_dec(v_unused_3758_);
v_unused_3759_ = lean_ctor_get(v_impl_3628_, 3);
lean_dec(v_unused_3759_);
v_unused_3760_ = lean_ctor_get(v_impl_3628_, 0);
lean_dec(v_unused_3760_);
v___x_3736_ = v_impl_3628_;
v_isShared_3737_ = v_isSharedCheck_3757_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_v_3734_);
lean_inc(v_k_3733_);
lean_dec(v_impl_3628_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3757_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v_k_3738_; lean_object* v_v_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3753_; 
v_k_3738_ = lean_ctor_get(v_r_3732_, 1);
v_v_3739_ = lean_ctor_get(v_r_3732_, 2);
v_isSharedCheck_3753_ = !lean_is_exclusive(v_r_3732_);
if (v_isSharedCheck_3753_ == 0)
{
lean_object* v_unused_3754_; lean_object* v_unused_3755_; lean_object* v_unused_3756_; 
v_unused_3754_ = lean_ctor_get(v_r_3732_, 4);
lean_dec(v_unused_3754_);
v_unused_3755_ = lean_ctor_get(v_r_3732_, 3);
lean_dec(v_unused_3755_);
v_unused_3756_ = lean_ctor_get(v_r_3732_, 0);
lean_dec(v_unused_3756_);
v___x_3741_ = v_r_3732_;
v_isShared_3742_ = v_isSharedCheck_3753_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_v_3739_);
lean_inc(v_k_3738_);
lean_dec(v_r_3732_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3753_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3743_; lean_object* v___x_3745_; 
v___x_3743_ = lean_unsigned_to_nat(3u);
if (v_isShared_3742_ == 0)
{
lean_ctor_set(v___x_3741_, 4, v_l_3715_);
lean_ctor_set(v___x_3741_, 3, v_l_3715_);
lean_ctor_set(v___x_3741_, 2, v_v_3734_);
lean_ctor_set(v___x_3741_, 1, v_k_3733_);
lean_ctor_set(v___x_3741_, 0, v___x_3629_);
v___x_3745_ = v___x_3741_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3752_, 1, v_k_3733_);
lean_ctor_set(v_reuseFailAlloc_3752_, 2, v_v_3734_);
lean_ctor_set(v_reuseFailAlloc_3752_, 3, v_l_3715_);
lean_ctor_set(v_reuseFailAlloc_3752_, 4, v_l_3715_);
v___x_3745_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
lean_object* v___x_3747_; 
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 4, v_l_3715_);
lean_ctor_set(v___x_3736_, 2, v_v_3621_);
lean_ctor_set(v___x_3736_, 1, v_k_3620_);
lean_ctor_set(v___x_3736_, 0, v___x_3629_);
v___x_3747_ = v___x_3736_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3751_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3751_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3751_, 3, v_l_3715_);
lean_ctor_set(v_reuseFailAlloc_3751_, 4, v_l_3715_);
v___x_3747_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
lean_object* v___x_3749_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v___x_3747_);
lean_ctor_set(v___x_3625_, 3, v___x_3745_);
lean_ctor_set(v___x_3625_, 2, v_v_3739_);
lean_ctor_set(v___x_3625_, 1, v_k_3738_);
lean_ctor_set(v___x_3625_, 0, v___x_3743_);
v___x_3749_ = v___x_3625_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v___x_3743_);
lean_ctor_set(v_reuseFailAlloc_3750_, 1, v_k_3738_);
lean_ctor_set(v_reuseFailAlloc_3750_, 2, v_v_3739_);
lean_ctor_set(v_reuseFailAlloc_3750_, 3, v___x_3745_);
lean_ctor_set(v_reuseFailAlloc_3750_, 4, v___x_3747_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
}
}
}
else
{
lean_object* v___x_3761_; lean_object* v___x_3763_; 
v___x_3761_ = lean_unsigned_to_nat(2u);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v_r_3732_);
lean_ctor_set(v___x_3625_, 3, v_impl_3628_);
lean_ctor_set(v___x_3625_, 0, v___x_3761_);
v___x_3763_ = v___x_3625_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v___x_3761_);
lean_ctor_set(v_reuseFailAlloc_3764_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3764_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3764_, 3, v_impl_3628_);
lean_ctor_set(v_reuseFailAlloc_3764_, 4, v_r_3732_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
}
case 1:
{
lean_object* v___x_3766_; 
lean_dec(v_v_3621_);
lean_dec(v_k_3620_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 2, v_v_3617_);
lean_ctor_set(v___x_3625_, 1, v_k_3616_);
v___x_3766_ = v___x_3625_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_size_3619_);
lean_ctor_set(v_reuseFailAlloc_3767_, 1, v_k_3616_);
lean_ctor_set(v_reuseFailAlloc_3767_, 2, v_v_3617_);
lean_ctor_set(v_reuseFailAlloc_3767_, 3, v_l_3622_);
lean_ctor_set(v_reuseFailAlloc_3767_, 4, v_r_3623_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
default: 
{
lean_object* v_impl_3768_; lean_object* v___x_3769_; 
lean_dec(v_size_3619_);
v_impl_3768_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3616_, v_v_3617_, v_r_3623_);
v___x_3769_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3622_) == 0)
{
lean_object* v_size_3770_; lean_object* v_size_3771_; lean_object* v_k_3772_; lean_object* v_v_3773_; lean_object* v_l_3774_; lean_object* v_r_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; uint8_t v___x_3778_; 
v_size_3770_ = lean_ctor_get(v_l_3622_, 0);
v_size_3771_ = lean_ctor_get(v_impl_3768_, 0);
lean_inc(v_size_3771_);
v_k_3772_ = lean_ctor_get(v_impl_3768_, 1);
lean_inc(v_k_3772_);
v_v_3773_ = lean_ctor_get(v_impl_3768_, 2);
lean_inc(v_v_3773_);
v_l_3774_ = lean_ctor_get(v_impl_3768_, 3);
lean_inc(v_l_3774_);
v_r_3775_ = lean_ctor_get(v_impl_3768_, 4);
lean_inc(v_r_3775_);
v___x_3776_ = lean_unsigned_to_nat(3u);
v___x_3777_ = lean_nat_mul(v___x_3776_, v_size_3770_);
v___x_3778_ = lean_nat_dec_lt(v___x_3777_, v_size_3771_);
lean_dec(v___x_3777_);
if (v___x_3778_ == 0)
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3782_; 
lean_dec(v_r_3775_);
lean_dec(v_l_3774_);
lean_dec(v_v_3773_);
lean_dec(v_k_3772_);
v___x_3779_ = lean_nat_add(v___x_3769_, v_size_3770_);
v___x_3780_ = lean_nat_add(v___x_3779_, v_size_3771_);
lean_dec(v_size_3771_);
lean_dec(v___x_3779_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v_impl_3768_);
lean_ctor_set(v___x_3625_, 0, v___x_3780_);
v___x_3782_ = v___x_3625_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v___x_3780_);
lean_ctor_set(v_reuseFailAlloc_3783_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3783_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3783_, 3, v_l_3622_);
lean_ctor_set(v_reuseFailAlloc_3783_, 4, v_impl_3768_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
else
{
lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3847_; 
v_isSharedCheck_3847_ = !lean_is_exclusive(v_impl_3768_);
if (v_isSharedCheck_3847_ == 0)
{
lean_object* v_unused_3848_; lean_object* v_unused_3849_; lean_object* v_unused_3850_; lean_object* v_unused_3851_; lean_object* v_unused_3852_; 
v_unused_3848_ = lean_ctor_get(v_impl_3768_, 4);
lean_dec(v_unused_3848_);
v_unused_3849_ = lean_ctor_get(v_impl_3768_, 3);
lean_dec(v_unused_3849_);
v_unused_3850_ = lean_ctor_get(v_impl_3768_, 2);
lean_dec(v_unused_3850_);
v_unused_3851_ = lean_ctor_get(v_impl_3768_, 1);
lean_dec(v_unused_3851_);
v_unused_3852_ = lean_ctor_get(v_impl_3768_, 0);
lean_dec(v_unused_3852_);
v___x_3785_ = v_impl_3768_;
v_isShared_3786_ = v_isSharedCheck_3847_;
goto v_resetjp_3784_;
}
else
{
lean_dec(v_impl_3768_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3847_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v_size_3787_; lean_object* v_k_3788_; lean_object* v_v_3789_; lean_object* v_l_3790_; lean_object* v_r_3791_; lean_object* v_size_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; uint8_t v___x_3795_; 
v_size_3787_ = lean_ctor_get(v_l_3774_, 0);
v_k_3788_ = lean_ctor_get(v_l_3774_, 1);
v_v_3789_ = lean_ctor_get(v_l_3774_, 2);
v_l_3790_ = lean_ctor_get(v_l_3774_, 3);
v_r_3791_ = lean_ctor_get(v_l_3774_, 4);
v_size_3792_ = lean_ctor_get(v_r_3775_, 0);
v___x_3793_ = lean_unsigned_to_nat(2u);
v___x_3794_ = lean_nat_mul(v___x_3793_, v_size_3792_);
v___x_3795_ = lean_nat_dec_lt(v_size_3787_, v___x_3794_);
lean_dec(v___x_3794_);
if (v___x_3795_ == 0)
{
lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3823_; 
lean_inc(v_r_3791_);
lean_inc(v_l_3790_);
lean_inc(v_v_3789_);
lean_inc(v_k_3788_);
v_isSharedCheck_3823_ = !lean_is_exclusive(v_l_3774_);
if (v_isSharedCheck_3823_ == 0)
{
lean_object* v_unused_3824_; lean_object* v_unused_3825_; lean_object* v_unused_3826_; lean_object* v_unused_3827_; lean_object* v_unused_3828_; 
v_unused_3824_ = lean_ctor_get(v_l_3774_, 4);
lean_dec(v_unused_3824_);
v_unused_3825_ = lean_ctor_get(v_l_3774_, 3);
lean_dec(v_unused_3825_);
v_unused_3826_ = lean_ctor_get(v_l_3774_, 2);
lean_dec(v_unused_3826_);
v_unused_3827_ = lean_ctor_get(v_l_3774_, 1);
lean_dec(v_unused_3827_);
v_unused_3828_ = lean_ctor_get(v_l_3774_, 0);
lean_dec(v_unused_3828_);
v___x_3797_ = v_l_3774_;
v_isShared_3798_ = v_isSharedCheck_3823_;
goto v_resetjp_3796_;
}
else
{
lean_dec(v_l_3774_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3823_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v___y_3804_; lean_object* v___y_3813_; 
v___x_3799_ = lean_nat_add(v___x_3769_, v_size_3770_);
v___x_3800_ = lean_nat_add(v___x_3799_, v_size_3771_);
lean_dec(v_size_3771_);
if (lean_obj_tag(v_l_3790_) == 0)
{
lean_object* v_size_3821_; 
v_size_3821_ = lean_ctor_get(v_l_3790_, 0);
lean_inc(v_size_3821_);
v___y_3813_ = v_size_3821_;
goto v___jp_3812_;
}
else
{
lean_object* v___x_3822_; 
v___x_3822_ = lean_unsigned_to_nat(0u);
v___y_3813_ = v___x_3822_;
goto v___jp_3812_;
}
v___jp_3801_:
{
lean_object* v___x_3805_; lean_object* v___x_3807_; 
v___x_3805_ = lean_nat_add(v___y_3803_, v___y_3804_);
lean_dec(v___y_3804_);
lean_dec(v___y_3803_);
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 4, v_r_3775_);
lean_ctor_set(v___x_3797_, 3, v_r_3791_);
lean_ctor_set(v___x_3797_, 2, v_v_3773_);
lean_ctor_set(v___x_3797_, 1, v_k_3772_);
lean_ctor_set(v___x_3797_, 0, v___x_3805_);
v___x_3807_ = v___x_3797_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v___x_3805_);
lean_ctor_set(v_reuseFailAlloc_3811_, 1, v_k_3772_);
lean_ctor_set(v_reuseFailAlloc_3811_, 2, v_v_3773_);
lean_ctor_set(v_reuseFailAlloc_3811_, 3, v_r_3791_);
lean_ctor_set(v_reuseFailAlloc_3811_, 4, v_r_3775_);
v___x_3807_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
lean_object* v___x_3809_; 
if (v_isShared_3786_ == 0)
{
lean_ctor_set(v___x_3785_, 4, v___x_3807_);
lean_ctor_set(v___x_3785_, 3, v___y_3802_);
lean_ctor_set(v___x_3785_, 2, v_v_3789_);
lean_ctor_set(v___x_3785_, 1, v_k_3788_);
lean_ctor_set(v___x_3785_, 0, v___x_3800_);
v___x_3809_ = v___x_3785_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v___x_3800_);
lean_ctor_set(v_reuseFailAlloc_3810_, 1, v_k_3788_);
lean_ctor_set(v_reuseFailAlloc_3810_, 2, v_v_3789_);
lean_ctor_set(v_reuseFailAlloc_3810_, 3, v___y_3802_);
lean_ctor_set(v_reuseFailAlloc_3810_, 4, v___x_3807_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
v___jp_3812_:
{
lean_object* v___x_3814_; lean_object* v___x_3816_; 
v___x_3814_ = lean_nat_add(v___x_3799_, v___y_3813_);
lean_dec(v___y_3813_);
lean_dec(v___x_3799_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v_l_3790_);
lean_ctor_set(v___x_3625_, 0, v___x_3814_);
v___x_3816_ = v___x_3625_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3814_);
lean_ctor_set(v_reuseFailAlloc_3820_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3820_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3820_, 3, v_l_3622_);
lean_ctor_set(v_reuseFailAlloc_3820_, 4, v_l_3790_);
v___x_3816_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3817_; 
v___x_3817_ = lean_nat_add(v___x_3769_, v_size_3792_);
if (lean_obj_tag(v_r_3791_) == 0)
{
lean_object* v_size_3818_; 
v_size_3818_ = lean_ctor_get(v_r_3791_, 0);
lean_inc(v_size_3818_);
v___y_3802_ = v___x_3816_;
v___y_3803_ = v___x_3817_;
v___y_3804_ = v_size_3818_;
goto v___jp_3801_;
}
else
{
lean_object* v___x_3819_; 
v___x_3819_ = lean_unsigned_to_nat(0u);
v___y_3802_ = v___x_3816_;
v___y_3803_ = v___x_3817_;
v___y_3804_ = v___x_3819_;
goto v___jp_3801_;
}
}
}
}
}
else
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3833_; 
lean_del_object(v___x_3625_);
v___x_3829_ = lean_nat_add(v___x_3769_, v_size_3770_);
v___x_3830_ = lean_nat_add(v___x_3829_, v_size_3771_);
lean_dec(v_size_3771_);
v___x_3831_ = lean_nat_add(v___x_3829_, v_size_3787_);
lean_dec(v___x_3829_);
lean_inc_ref(v_l_3622_);
if (v_isShared_3786_ == 0)
{
lean_ctor_set(v___x_3785_, 4, v_l_3774_);
lean_ctor_set(v___x_3785_, 3, v_l_3622_);
lean_ctor_set(v___x_3785_, 2, v_v_3621_);
lean_ctor_set(v___x_3785_, 1, v_k_3620_);
lean_ctor_set(v___x_3785_, 0, v___x_3831_);
v___x_3833_ = v___x_3785_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v___x_3831_);
lean_ctor_set(v_reuseFailAlloc_3846_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3846_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3846_, 3, v_l_3622_);
lean_ctor_set(v_reuseFailAlloc_3846_, 4, v_l_3774_);
v___x_3833_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3840_; 
v_isSharedCheck_3840_ = !lean_is_exclusive(v_l_3622_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; lean_object* v_unused_3842_; lean_object* v_unused_3843_; lean_object* v_unused_3844_; lean_object* v_unused_3845_; 
v_unused_3841_ = lean_ctor_get(v_l_3622_, 4);
lean_dec(v_unused_3841_);
v_unused_3842_ = lean_ctor_get(v_l_3622_, 3);
lean_dec(v_unused_3842_);
v_unused_3843_ = lean_ctor_get(v_l_3622_, 2);
lean_dec(v_unused_3843_);
v_unused_3844_ = lean_ctor_get(v_l_3622_, 1);
lean_dec(v_unused_3844_);
v_unused_3845_ = lean_ctor_get(v_l_3622_, 0);
lean_dec(v_unused_3845_);
v___x_3835_ = v_l_3622_;
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
else
{
lean_dec(v_l_3622_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3840_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3838_; 
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 4, v_r_3775_);
lean_ctor_set(v___x_3835_, 3, v___x_3833_);
lean_ctor_set(v___x_3835_, 2, v_v_3773_);
lean_ctor_set(v___x_3835_, 1, v_k_3772_);
lean_ctor_set(v___x_3835_, 0, v___x_3830_);
v___x_3838_ = v___x_3835_;
goto v_reusejp_3837_;
}
else
{
lean_object* v_reuseFailAlloc_3839_; 
v_reuseFailAlloc_3839_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3839_, 0, v___x_3830_);
lean_ctor_set(v_reuseFailAlloc_3839_, 1, v_k_3772_);
lean_ctor_set(v_reuseFailAlloc_3839_, 2, v_v_3773_);
lean_ctor_set(v_reuseFailAlloc_3839_, 3, v___x_3833_);
lean_ctor_set(v_reuseFailAlloc_3839_, 4, v_r_3775_);
v___x_3838_ = v_reuseFailAlloc_3839_;
goto v_reusejp_3837_;
}
v_reusejp_3837_:
{
return v___x_3838_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3853_; 
v_l_3853_ = lean_ctor_get(v_impl_3768_, 3);
lean_inc(v_l_3853_);
if (lean_obj_tag(v_l_3853_) == 0)
{
lean_object* v_r_3854_; lean_object* v_k_3855_; lean_object* v_v_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3879_; 
v_r_3854_ = lean_ctor_get(v_impl_3768_, 4);
v_k_3855_ = lean_ctor_get(v_impl_3768_, 1);
v_v_3856_ = lean_ctor_get(v_impl_3768_, 2);
v_isSharedCheck_3879_ = !lean_is_exclusive(v_impl_3768_);
if (v_isSharedCheck_3879_ == 0)
{
lean_object* v_unused_3880_; lean_object* v_unused_3881_; 
v_unused_3880_ = lean_ctor_get(v_impl_3768_, 3);
lean_dec(v_unused_3880_);
v_unused_3881_ = lean_ctor_get(v_impl_3768_, 0);
lean_dec(v_unused_3881_);
v___x_3858_ = v_impl_3768_;
v_isShared_3859_ = v_isSharedCheck_3879_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_r_3854_);
lean_inc(v_v_3856_);
lean_inc(v_k_3855_);
lean_dec(v_impl_3768_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3879_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v_k_3860_; lean_object* v_v_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3875_; 
v_k_3860_ = lean_ctor_get(v_l_3853_, 1);
v_v_3861_ = lean_ctor_get(v_l_3853_, 2);
v_isSharedCheck_3875_ = !lean_is_exclusive(v_l_3853_);
if (v_isSharedCheck_3875_ == 0)
{
lean_object* v_unused_3876_; lean_object* v_unused_3877_; lean_object* v_unused_3878_; 
v_unused_3876_ = lean_ctor_get(v_l_3853_, 4);
lean_dec(v_unused_3876_);
v_unused_3877_ = lean_ctor_get(v_l_3853_, 3);
lean_dec(v_unused_3877_);
v_unused_3878_ = lean_ctor_get(v_l_3853_, 0);
lean_dec(v_unused_3878_);
v___x_3863_ = v_l_3853_;
v_isShared_3864_ = v_isSharedCheck_3875_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_v_3861_);
lean_inc(v_k_3860_);
lean_dec(v_l_3853_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3875_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3865_; lean_object* v___x_3867_; 
v___x_3865_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3854_, 2);
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 4, v_r_3854_);
lean_ctor_set(v___x_3863_, 3, v_r_3854_);
lean_ctor_set(v___x_3863_, 2, v_v_3621_);
lean_ctor_set(v___x_3863_, 1, v_k_3620_);
lean_ctor_set(v___x_3863_, 0, v___x_3769_);
v___x_3867_ = v___x_3863_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3874_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3874_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3874_, 3, v_r_3854_);
lean_ctor_set(v_reuseFailAlloc_3874_, 4, v_r_3854_);
v___x_3867_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
lean_object* v___x_3869_; 
lean_inc(v_r_3854_);
if (v_isShared_3859_ == 0)
{
lean_ctor_set(v___x_3858_, 3, v_r_3854_);
lean_ctor_set(v___x_3858_, 0, v___x_3769_);
v___x_3869_ = v___x_3858_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3873_, 1, v_k_3855_);
lean_ctor_set(v_reuseFailAlloc_3873_, 2, v_v_3856_);
lean_ctor_set(v_reuseFailAlloc_3873_, 3, v_r_3854_);
lean_ctor_set(v_reuseFailAlloc_3873_, 4, v_r_3854_);
v___x_3869_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3871_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v___x_3869_);
lean_ctor_set(v___x_3625_, 3, v___x_3867_);
lean_ctor_set(v___x_3625_, 2, v_v_3861_);
lean_ctor_set(v___x_3625_, 1, v_k_3860_);
lean_ctor_set(v___x_3625_, 0, v___x_3865_);
v___x_3871_ = v___x_3625_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v___x_3865_);
lean_ctor_set(v_reuseFailAlloc_3872_, 1, v_k_3860_);
lean_ctor_set(v_reuseFailAlloc_3872_, 2, v_v_3861_);
lean_ctor_set(v_reuseFailAlloc_3872_, 3, v___x_3867_);
lean_ctor_set(v_reuseFailAlloc_3872_, 4, v___x_3869_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
}
}
else
{
lean_object* v_r_3882_; 
v_r_3882_ = lean_ctor_get(v_impl_3768_, 4);
lean_inc(v_r_3882_);
if (lean_obj_tag(v_r_3882_) == 0)
{
lean_object* v_k_3883_; lean_object* v_v_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3895_; 
v_k_3883_ = lean_ctor_get(v_impl_3768_, 1);
v_v_3884_ = lean_ctor_get(v_impl_3768_, 2);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_impl_3768_);
if (v_isSharedCheck_3895_ == 0)
{
lean_object* v_unused_3896_; lean_object* v_unused_3897_; lean_object* v_unused_3898_; 
v_unused_3896_ = lean_ctor_get(v_impl_3768_, 4);
lean_dec(v_unused_3896_);
v_unused_3897_ = lean_ctor_get(v_impl_3768_, 3);
lean_dec(v_unused_3897_);
v_unused_3898_ = lean_ctor_get(v_impl_3768_, 0);
lean_dec(v_unused_3898_);
v___x_3886_ = v_impl_3768_;
v_isShared_3887_ = v_isSharedCheck_3895_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_v_3884_);
lean_inc(v_k_3883_);
lean_dec(v_impl_3768_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3895_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3888_; lean_object* v___x_3890_; 
v___x_3888_ = lean_unsigned_to_nat(3u);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 4, v_l_3853_);
lean_ctor_set(v___x_3886_, 2, v_v_3621_);
lean_ctor_set(v___x_3886_, 1, v_k_3620_);
lean_ctor_set(v___x_3886_, 0, v___x_3769_);
v___x_3890_ = v___x_3886_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3894_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3894_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3894_, 3, v_l_3853_);
lean_ctor_set(v_reuseFailAlloc_3894_, 4, v_l_3853_);
v___x_3890_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
lean_object* v___x_3892_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v_r_3882_);
lean_ctor_set(v___x_3625_, 3, v___x_3890_);
lean_ctor_set(v___x_3625_, 2, v_v_3884_);
lean_ctor_set(v___x_3625_, 1, v_k_3883_);
lean_ctor_set(v___x_3625_, 0, v___x_3888_);
v___x_3892_ = v___x_3625_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v___x_3888_);
lean_ctor_set(v_reuseFailAlloc_3893_, 1, v_k_3883_);
lean_ctor_set(v_reuseFailAlloc_3893_, 2, v_v_3884_);
lean_ctor_set(v_reuseFailAlloc_3893_, 3, v___x_3890_);
lean_ctor_set(v_reuseFailAlloc_3893_, 4, v_r_3882_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
}
else
{
lean_object* v___x_3899_; lean_object* v___x_3901_; 
v___x_3899_ = lean_unsigned_to_nat(2u);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 4, v_impl_3768_);
lean_ctor_set(v___x_3625_, 3, v_r_3882_);
lean_ctor_set(v___x_3625_, 0, v___x_3899_);
v___x_3901_ = v___x_3625_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3899_);
lean_ctor_set(v_reuseFailAlloc_3902_, 1, v_k_3620_);
lean_ctor_set(v_reuseFailAlloc_3902_, 2, v_v_3621_);
lean_ctor_set(v_reuseFailAlloc_3902_, 3, v_r_3882_);
lean_ctor_set(v_reuseFailAlloc_3902_, 4, v_impl_3768_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
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
lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3904_ = lean_unsigned_to_nat(1u);
v___x_3905_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
lean_ctor_set(v___x_3905_, 1, v_k_3616_);
lean_ctor_set(v___x_3905_, 2, v_v_3617_);
lean_ctor_set(v___x_3905_, 3, v_t_3618_);
lean_ctor_set(v___x_3905_, 4, v_t_3618_);
return v___x_3905_;
}
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
v___x_3906_ = lean_box(1);
v___x_3907_ = l_Lake_LeanLib_defaultFacetConfig;
v___x_3908_ = l_Lake_LeanLib_defaultFacet;
v___x_3909_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3908_, v___x_3907_, v___x_3906_);
return v___x_3909_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; 
v___x_3910_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__0, &l_Lake_LeanLib_initFacetConfigs___closed__0_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__0);
v___x_3911_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig));
v___x_3912_ = l_Lake_LeanLib_modulesFacet;
v___x_3913_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3912_, v___x_3911_, v___x_3910_);
return v___x_3913_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3914_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__1, &l_Lake_LeanLib_initFacetConfigs___closed__1_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__1);
v___x_3915_ = l_Lake_LeanLib_leanArtsFacetConfig;
v___x_3916_ = l_Lake_LeanLib_leanArtsFacet;
v___x_3917_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3916_, v___x_3915_, v___x_3914_);
return v___x_3917_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3918_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__2, &l_Lake_LeanLib_initFacetConfigs___closed__2_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__2);
v___x_3919_ = l_Lake_LeanLib_staticFacetConfig;
v___x_3920_ = l_Lake_LeanLib_staticFacet;
v___x_3921_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3920_, v___x_3919_, v___x_3918_);
return v___x_3921_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__4(void){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3922_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__3, &l_Lake_LeanLib_initFacetConfigs___closed__3_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__3);
v___x_3923_ = l_Lake_LeanLib_staticExportFacetConfig;
v___x_3924_ = l_Lake_LeanLib_staticExportFacet;
v___x_3925_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3924_, v___x_3923_, v___x_3922_);
return v___x_3925_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__5(void){
_start:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3926_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__4, &l_Lake_LeanLib_initFacetConfigs___closed__4_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__4);
v___x_3927_ = l_Lake_LeanLib_sharedFacetConfig;
v___x_3928_ = l_Lake_LeanLib_sharedFacet;
v___x_3929_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3928_, v___x_3927_, v___x_3926_);
return v___x_3929_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__6(void){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3930_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__5, &l_Lake_LeanLib_initFacetConfigs___closed__5_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__5);
v___x_3931_ = l_Lake_LeanLib_extraDepFacetConfig;
v___x_3932_ = l_Lake_LeanLib_extraDepFacet;
v___x_3933_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3932_, v___x_3931_, v___x_3930_);
return v___x_3933_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs(void){
_start:
{
lean_object* v___x_3934_; 
v___x_3934_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__6, &l_Lake_LeanLib_initFacetConfigs___closed__6_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__6);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object* v_00_u03b2_3935_, lean_object* v_k_3936_, lean_object* v_v_3937_, lean_object* v_t_3938_, lean_object* v_hl_3939_){
_start:
{
lean_object* v___x_3940_; 
v___x_3940_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3936_, v_v_3937_, v_t_3938_);
return v___x_3940_;
}
}
static lean_object* _init_l_Lake_initLibraryFacetConfigs(void){
_start:
{
lean_object* v___x_3941_; 
v___x_3941_ = l_Lake_LeanLib_initFacetConfigs;
return v___x_3941_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_LeanLib_leanArtsFacetConfig = _init_l_Lake_LeanLib_leanArtsFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_leanArtsFacetConfig);
l_Lake_LeanLib_staticFacetConfig = _init_l_Lake_LeanLib_staticFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticFacetConfig);
l_Lake_LeanLib_staticExportFacetConfig = _init_l_Lake_LeanLib_staticExportFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticExportFacetConfig);
l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5 = _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5();
lean_mark_persistent(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5);
l_Lake_LeanLib_sharedFacetConfig = _init_l_Lake_LeanLib_sharedFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_sharedFacetConfig);
l_Lake_LeanLib_extraDepFacetConfig = _init_l_Lake_LeanLib_extraDepFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_extraDepFacetConfig);
l_Lake_LeanLib_defaultFacetConfig = _init_l_Lake_LeanLib_defaultFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_defaultFacetConfig);
l_Lake_LeanLib_initFacetConfigs = _init_l_Lake_LeanLib_initFacetConfigs();
lean_mark_persistent(l_Lake_LeanLib_initFacetConfigs);
l_Lake_initLibraryFacetConfigs = _init_l_Lake_initLibraryFacetConfigs();
lean_mark_persistent(l_Lake_initLibraryFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Library(builtin);
}
#ifdef __cplusplus
}
#endif
