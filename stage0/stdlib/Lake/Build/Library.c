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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* v_lib_752_; lean_object* v_config_753_; lean_object* v_nativeFacets_754_; lean_object* v___f_755_; lean_object* v___x_756_; lean_object* v___x_757_; size_t v_sz_758_; size_t v___x_759_; lean_object* v___x_243455__overap_760_; lean_object* v___x_761_; 
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
v___x_243455__overap_760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_742_, v___f_755_, v_sz_758_, v___x_759_, v___x_757_);
lean_inc_ref(v___y_749_);
lean_inc(v___y_748_);
lean_inc(v___y_747_);
lean_inc(v___y_746_);
v___x_761_ = lean_apply_7(v___x_243455__overap_760_, v___y_745_, v___y_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, lean_box(0));
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
lean_object* v___y_887_; uint8_t v___y_888_; lean_object* v_a_889_; lean_object* v___y_935_; uint8_t v___y_936_; lean_object* v___y_937_; 
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
lean_object* v_val_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; uint8_t v___x_1121_; 
v_val_1118_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_val_1118_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1119_ = lean_string_utf8_byte_size(v_val_1118_);
lean_dec(v_val_1118_);
v___x_1120_ = lean_unsigned_to_nat(0u);
v___x_1121_ = lean_nat_dec_eq(v___x_1119_, v___x_1120_);
if (v___x_1121_ == 0)
{
if (v___x_977_ == 0)
{
v___y_1063_ = v___x_977_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1154_; 
lean_inc(v_buildTime_1061_);
lean_inc_ref(v_trace_1060_);
lean_inc_ref(v_log_1057_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___y_884_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; lean_object* v_unused_1156_; lean_object* v_unused_1157_; 
v_unused_1155_ = lean_ctor_get(v___y_884_, 2);
lean_dec(v_unused_1155_);
v_unused_1156_ = lean_ctor_get(v___y_884_, 1);
lean_dec(v_unused_1156_);
v_unused_1157_ = lean_ctor_get(v___y_884_, 0);
lean_dec(v_unused_1157_);
v___x_1123_ = v___y_884_;
v_isShared_1124_ = v_isSharedCheck_1154_;
goto v_resetjp_1122_;
}
else
{
lean_dec(v___y_884_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1154_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v_toContext_1125_; lean_object* v_lakeEnv_1126_; lean_object* v_lean_1127_; lean_object* v_ar_1128_; lean_object* v___x_1129_; 
v_toContext_1125_ = lean_ctor_get(v___y_883_, 1);
v_lakeEnv_1126_ = lean_ctor_get(v_toContext_1125_, 0);
v_lean_1127_ = lean_ctor_get(v_lakeEnv_1126_, 1);
v_ar_1128_ = lean_ctor_get(v_lean_1127_, 13);
lean_inc_ref(v_ar_1128_);
v___x_1129_ = l_Lake_compileStaticLib(v___y_873_, v_oFiles_874_, v_ar_1128_, v___x_1121_, v_log_1057_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1141_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
v_a_1131_ = lean_ctor_get(v___x_1129_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1133_ = v___x_1129_;
v_isShared_1134_ = v_isSharedCheck_1141_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_inc(v_a_1130_);
lean_dec(v___x_1129_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1141_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v_a_1131_);
v___x_1136_ = v___x_1123_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1131_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_trace_1060_);
lean_ctor_set(v_reuseFailAlloc_1140_, 2, v_buildTime_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1140_, sizeof(void*)*3, v_action_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1140_, sizeof(void*)*3 + 1, v_wantsRebuild_1059_);
v___x_1136_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1138_; 
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v___x_1136_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1130_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
else
{
lean_object* v_a_1142_; lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1153_; 
v_a_1142_ = lean_ctor_get(v___x_1129_, 0);
v_a_1143_ = lean_ctor_get(v___x_1129_, 1);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1145_ = v___x_1129_;
v_isShared_1146_ = v_isSharedCheck_1153_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_inc(v_a_1142_);
lean_dec(v___x_1129_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1153_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v_a_1143_);
v___x_1148_ = v___x_1123_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1143_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v_trace_1060_);
lean_ctor_set(v_reuseFailAlloc_1152_, 2, v_buildTime_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1152_, sizeof(void*)*3, v_action_1058_);
lean_ctor_set_uint8(v_reuseFailAlloc_1152_, sizeof(void*)*3 + 1, v_wantsRebuild_1059_);
v___x_1148_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1150_; 
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 1, v___x_1148_);
v___x_1150_ = v___x_1145_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1142_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
}
}
else
{
uint8_t v___x_1158_; 
v___x_1158_ = 0;
v___y_1063_ = v___x_1158_;
goto v___jp_1062_;
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
v___y_887_ = v___x_1066_;
v___y_888_ = v___y_1063_;
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
v___y_887_ = v___x_1066_;
v___y_888_ = v___y_1063_;
v_a_889_ = v___y_884_;
goto v___jp_886_;
}
else
{
size_t v___x_1077_; lean_object* v___x_243622__overap_1078_; lean_object* v___x_1079_; 
v___x_1077_ = lean_usize_of_nat(v___x_1072_);
v___x_243622__overap_1078_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1070_, v___f_1074_, v_oFiles_874_, v___x_878_, v___x_1077_, v___x_1075_);
lean_inc_ref(v___y_883_);
lean_inc(v___y_882_);
lean_inc(v___y_881_);
lean_inc(v___y_880_);
v___x_1079_ = lean_apply_7(v___x_243622__overap_1078_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, lean_box(0));
v___y_935_ = v___x_1066_;
v___y_936_ = v___y_1063_;
v___y_937_ = v___x_1079_;
goto v___jp_934_;
}
}
else
{
size_t v___x_1080_; lean_object* v___x_243624__overap_1081_; lean_object* v___x_1082_; 
v___x_1080_ = lean_usize_of_nat(v___x_1072_);
v___x_243624__overap_1081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1070_, v___f_1074_, v_oFiles_874_, v___x_878_, v___x_1080_, v___x_1075_);
lean_inc_ref(v___y_883_);
lean_inc(v___y_882_);
lean_inc(v___y_881_);
lean_inc(v___y_880_);
v___x_1082_ = lean_apply_7(v___x_243624__overap_1081_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, lean_box(0));
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
v___x_904_ = lean_array_push(v___x_903_, v___y_887_);
v___x_905_ = lean_box(0);
v___x_906_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7));
v___x_907_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_907_, 0, v___x_890_);
lean_ctor_set(v___x_907_, 1, v___x_899_);
lean_ctor_set(v___x_907_, 2, v___x_904_);
lean_ctor_set(v___x_907_, 3, v___x_905_);
lean_ctor_set(v___x_907_, 4, v___x_906_);
lean_ctor_set_uint8(v___x_907_, sizeof(void*)*5, v___x_876_);
lean_ctor_set_uint8(v___x_907_, sizeof(void*)*5 + 1, v___y_888_);
v___x_908_ = l_Lake_proc(v___x_907_, v___y_888_, v_log_891_);
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
v___y_887_ = v___y_935_;
v___y_888_ = v___y_936_;
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object* v_bootstrap_1159_, lean_object* v___y_1160_, lean_object* v_oFiles_1161_, lean_object* v_shouldExport_1162_, lean_object* v___x_1163_, lean_object* v___x_1164_, lean_object* v___x_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_bootstrap_boxed_1173_; uint8_t v_shouldExport_boxed_1174_; uint8_t v___x_244017__boxed_1175_; size_t v___x_244019__boxed_1176_; lean_object* v_res_1177_; 
v_bootstrap_boxed_1173_ = lean_unbox(v_bootstrap_1159_);
v_shouldExport_boxed_1174_ = lean_unbox(v_shouldExport_1162_);
v___x_244017__boxed_1175_ = lean_unbox(v___x_1163_);
v___x_244019__boxed_1176_ = lean_unbox_usize(v___x_1165_);
lean_dec(v___x_1165_);
v_res_1177_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(v_bootstrap_boxed_1173_, v___y_1160_, v_oFiles_1161_, v_shouldExport_boxed_1174_, v___x_244017__boxed_1175_, v___x_1164_, v___x_244019__boxed_1176_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec(v___y_1167_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t v_bootstrap_1179_, lean_object* v___y_1180_, uint8_t v_shouldExport_1181_, uint8_t v___x_1182_, lean_object* v___x_1183_, size_t v___x_1184_, lean_object* v_oFiles_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___y_1197_; uint8_t v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1193_ = lean_box(v_bootstrap_1179_);
v___x_1194_ = lean_box(v_shouldExport_1181_);
v___x_1195_ = lean_box(v___x_1182_);
v___x_1196_ = lean_box_usize(v___x_1184_);
lean_inc_ref(v___y_1180_);
v___y_1197_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed), 14, 7);
lean_closure_set(v___y_1197_, 0, v___x_1193_);
lean_closure_set(v___y_1197_, 1, v___y_1180_);
lean_closure_set(v___y_1197_, 2, v_oFiles_1185_);
lean_closure_set(v___y_1197_, 3, v___x_1194_);
lean_closure_set(v___y_1197_, 4, v___x_1195_);
lean_closure_set(v___y_1197_, 5, v___x_1183_);
lean_closure_set(v___y_1197_, 6, v___x_1196_);
v___x_1198_ = 0;
v___x_1199_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1200_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1180_, v___y_1197_, v___x_1198_, v___x_1199_, v___x_1182_, v___x_1198_, v___x_1198_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1210_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_a_1202_ = lean_ctor_get(v___x_1200_, 1);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1204_ = v___x_1200_;
v_isShared_1205_ = v_isSharedCheck_1210_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1210_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v_path_1206_; lean_object* v___x_1208_; 
v_path_1206_ = lean_ctor_get(v_a_1201_, 1);
lean_inc_ref(v_path_1206_);
lean_dec(v_a_1201_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v_path_1206_);
v___x_1208_ = v___x_1204_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_path_1206_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_a_1202_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
v_a_1211_ = lean_ctor_get(v___x_1200_, 0);
v_a_1212_ = lean_ctor_get(v___x_1200_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1200_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_inc(v_a_1211_);
lean_dec(v___x_1200_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1211_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object* v_bootstrap_1220_, lean_object* v___y_1221_, lean_object* v_shouldExport_1222_, lean_object* v___x_1223_, lean_object* v___x_1224_, lean_object* v___x_1225_, lean_object* v_oFiles_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v_bootstrap_boxed_1234_; uint8_t v_shouldExport_boxed_1235_; uint8_t v___x_244533__boxed_1236_; size_t v___x_244535__boxed_1237_; lean_object* v_res_1238_; 
v_bootstrap_boxed_1234_ = lean_unbox(v_bootstrap_1220_);
v_shouldExport_boxed_1235_ = lean_unbox(v_shouldExport_1222_);
v___x_244533__boxed_1236_ = lean_unbox(v___x_1223_);
v___x_244535__boxed_1237_ = lean_unbox_usize(v___x_1225_);
lean_dec(v___x_1225_);
v_res_1238_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(v_bootstrap_boxed_1234_, v___y_1221_, v_shouldExport_boxed_1235_, v___x_244533__boxed_1236_, v___x_1224_, v___x_244535__boxed_1237_, v_oFiles_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec(v___y_1228_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object* v___x_1243_, lean_object* v___x_1244_, lean_object* v_config_1245_, lean_object* v_config_1246_, lean_object* v___x_1247_, lean_object* v___f_1248_, uint8_t v_shouldExport_1249_, uint8_t v___x_1250_, lean_object* v___x_1251_, lean_object* v___x_1252_, lean_object* v_dir_1253_, lean_object* v_self_1254_, lean_object* v___f_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___y_1264_; uint8_t v___y_1265_; lean_object* v___y_1266_; size_t v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v_a_1284_; lean_object* v_a_1285_; lean_object* v___y_1329_; lean_object* v___x_1341_; 
lean_inc_ref(v___y_1256_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1244_);
v___x_1341_ = lean_apply_7(v___y_1256_, v___x_1243_, v___x_1244_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, lean_box(0));
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; lean_object* v_a_1343_; lean_object* v___x_1344_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
v_a_1343_ = lean_ctor_get(v___x_1341_, 1);
lean_inc(v_a_1343_);
lean_dec_ref_known(v___x_1341_, 2);
v___x_1344_ = l_Lake_Job_await___redArg(v_a_1342_, v_a_1343_);
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v_a_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
lean_inc(v_a_1345_);
v_a_1346_ = lean_ctor_get(v___x_1344_, 1);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1344_, 2);
v___x_1347_ = lean_unsigned_to_nat(0u);
v___x_1348_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_1349_ = lean_array_get_size(v_a_1345_);
v___x_1350_ = lean_nat_dec_lt(v___x_1347_, v___x_1349_);
if (v___x_1350_ == 0)
{
lean_dec(v_a_1345_);
lean_dec_ref(v___f_1255_);
v_a_1284_ = v___x_1348_;
v_a_1285_ = v_a_1346_;
goto v___jp_1283_;
}
else
{
uint8_t v___x_1351_; 
v___x_1351_ = lean_nat_dec_le(v___x_1349_, v___x_1349_);
if (v___x_1351_ == 0)
{
if (v___x_1350_ == 0)
{
lean_dec(v_a_1345_);
lean_dec_ref(v___f_1255_);
v_a_1284_ = v___x_1348_;
v_a_1285_ = v_a_1346_;
goto v___jp_1283_;
}
else
{
size_t v___x_1352_; size_t v___x_1353_; lean_object* v___x_243780__overap_1354_; lean_object* v___x_1355_; 
v___x_1352_ = ((size_t)0ULL);
v___x_1353_ = lean_usize_of_nat(v___x_1349_);
lean_inc_ref(v___x_1247_);
v___x_243780__overap_1354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1247_, v___f_1255_, v_a_1345_, v___x_1352_, v___x_1353_, v___x_1348_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1244_);
lean_inc_ref(v___y_1256_);
v___x_1355_ = lean_apply_7(v___x_243780__overap_1354_, v___y_1256_, v___x_1244_, v___y_1258_, v___y_1259_, v___y_1260_, v_a_1346_, lean_box(0));
v___y_1329_ = v___x_1355_;
goto v___jp_1328_;
}
}
else
{
size_t v___x_1356_; size_t v___x_1357_; lean_object* v___x_243783__overap_1358_; lean_object* v___x_1359_; 
v___x_1356_ = ((size_t)0ULL);
v___x_1357_ = lean_usize_of_nat(v___x_1349_);
lean_inc_ref(v___x_1247_);
v___x_243783__overap_1358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1247_, v___f_1255_, v_a_1345_, v___x_1356_, v___x_1357_, v___x_1348_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1244_);
lean_inc_ref(v___y_1256_);
v___x_1359_ = lean_apply_7(v___x_243783__overap_1358_, v___y_1256_, v___x_1244_, v___y_1258_, v___y_1259_, v___y_1260_, v_a_1346_, lean_box(0));
v___y_1329_ = v___x_1359_;
goto v___jp_1328_;
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec_ref(v___y_1256_);
lean_dec_ref(v___f_1255_);
lean_dec_ref(v_self_1254_);
lean_dec_ref(v_dir_1253_);
lean_dec(v___x_1252_);
lean_dec_ref(v___x_1251_);
lean_dec_ref(v___f_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_config_1245_);
lean_dec(v___x_1244_);
v_a_1360_ = lean_ctor_get(v___x_1344_, 0);
v_a_1361_ = lean_ctor_get(v___x_1344_, 1);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1344_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_inc(v_a_1360_);
lean_dec(v___x_1344_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1360_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_dec_ref(v___y_1256_);
lean_dec_ref(v___f_1255_);
lean_dec_ref(v_self_1254_);
lean_dec_ref(v_dir_1253_);
lean_dec(v___x_1252_);
lean_dec_ref(v___x_1251_);
lean_dec_ref(v___f_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_config_1245_);
lean_dec(v___x_1244_);
v_a_1369_ = lean_ctor_get(v___x_1341_, 0);
v_a_1370_ = lean_ctor_get(v___x_1341_, 1);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1372_ = v___x_1341_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_inc(v_a_1369_);
lean_dec(v___x_1341_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_a_1369_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_a_1370_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
v___jp_1263_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___f_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1270_ = lean_box(v___y_1265_);
v___x_1271_ = lean_box(v_shouldExport_1249_);
v___x_1272_ = lean_box(v___x_1250_);
v___x_1273_ = lean_box_usize(v___y_1267_);
v___f_1274_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed), 14, 6);
lean_closure_set(v___f_1274_, 0, v___x_1270_);
lean_closure_set(v___f_1274_, 1, v___y_1269_);
lean_closure_set(v___f_1274_, 2, v___x_1271_);
lean_closure_set(v___f_1274_, 3, v___x_1272_);
lean_closure_set(v___f_1274_, 4, v___x_1251_);
lean_closure_set(v___f_1274_, 5, v___x_1273_);
v___x_1275_ = l_Array_append___redArg(v___y_1268_, v___y_1266_);
lean_dec_ref(v___y_1266_);
v___x_1276_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_1277_ = l_Lake_Job_collectArray___redArg(v___x_1275_, v___x_1276_);
lean_dec_ref(v___x_1275_);
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = 0;
v___x_1280_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_1281_ = l_Lake_Job_mapM___redArg(v___x_1252_, v___x_1277_, v___f_1274_, v___x_1278_, v___x_1279_, v___y_1256_, v___x_1244_, v___y_1258_, v___y_1259_, v___y_1260_, v___x_1280_);
lean_dec(v___x_1244_);
v___x_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v___y_1264_);
return v___x_1282_;
}
v___jp_1283_:
{
lean_object* v_toLeanConfig_1286_; lean_object* v_toLeanConfig_1287_; uint8_t v_bootstrap_1288_; lean_object* v_buildDir_1289_; lean_object* v_nativeLibDir_1290_; lean_object* v_moreLinkObjs_1291_; lean_object* v_moreLinkObjs_1292_; lean_object* v___x_1293_; size_t v_sz_1294_; size_t v___x_1295_; lean_object* v___x_243720__overap_1296_; lean_object* v___x_1297_; 
v_toLeanConfig_1286_ = lean_ctor_get(v_config_1245_, 1);
lean_inc_ref(v_toLeanConfig_1286_);
v_toLeanConfig_1287_ = lean_ctor_get(v_config_1246_, 0);
v_bootstrap_1288_ = lean_ctor_get_uint8(v_config_1245_, sizeof(void*)*27);
v_buildDir_1289_ = lean_ctor_get(v_config_1245_, 5);
lean_inc_ref(v_buildDir_1289_);
v_nativeLibDir_1290_ = lean_ctor_get(v_config_1245_, 7);
lean_inc_ref(v_nativeLibDir_1290_);
lean_dec_ref(v_config_1245_);
v_moreLinkObjs_1291_ = lean_ctor_get(v_toLeanConfig_1286_, 6);
lean_inc_ref(v_moreLinkObjs_1291_);
lean_dec_ref(v_toLeanConfig_1286_);
v_moreLinkObjs_1292_ = lean_ctor_get(v_toLeanConfig_1287_, 6);
v___x_1293_ = l_Array_append___redArg(v_moreLinkObjs_1291_, v_moreLinkObjs_1292_);
v_sz_1294_ = lean_array_size(v___x_1293_);
v___x_1295_ = ((size_t)0ULL);
v___x_243720__overap_1296_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1247_, v___f_1248_, v_sz_1294_, v___x_1295_, v___x_1293_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1244_);
lean_inc_ref(v___y_1256_);
v___x_1297_ = lean_apply_7(v___x_243720__overap_1296_, v___y_1256_, v___x_1244_, v___y_1258_, v___y_1259_, v___y_1260_, v_a_1285_, lean_box(0));
if (lean_obj_tag(v___x_1297_) == 0)
{
if (v_shouldExport_1249_ == 0)
{
lean_object* v_a_1298_; lean_object* v_a_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_a_1298_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_a_1298_);
v_a_1299_ = lean_ctor_get(v___x_1297_, 1);
lean_inc(v_a_1299_);
lean_dec_ref_known(v___x_1297_, 2);
v___x_1300_ = l_System_FilePath_normalize(v_buildDir_1289_);
v___x_1301_ = l_Lake_joinRelative(v_dir_1253_, v___x_1300_);
v___x_1302_ = l_System_FilePath_normalize(v_nativeLibDir_1290_);
v___x_1303_ = l_Lake_joinRelative(v___x_1301_, v___x_1302_);
v___x_1304_ = l_Lake_LeanLib_libName(v_self_1254_);
v___x_1305_ = l_Lake_nameToStaticLib(v___x_1304_, v_shouldExport_1249_);
v___x_1306_ = l_Lake_joinRelative(v___x_1303_, v___x_1305_);
v___y_1264_ = v_a_1299_;
v___y_1265_ = v_bootstrap_1288_;
v___y_1266_ = v_a_1298_;
v___y_1267_ = v___x_1295_;
v___y_1268_ = v_a_1284_;
v___y_1269_ = v___x_1306_;
goto v___jp_1263_;
}
else
{
lean_object* v_a_1307_; lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v_a_1307_ = lean_ctor_get(v___x_1297_, 0);
lean_inc(v_a_1307_);
v_a_1308_ = lean_ctor_get(v___x_1297_, 1);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1297_, 2);
v___x_1309_ = l_System_FilePath_normalize(v_buildDir_1289_);
v___x_1310_ = l_Lake_joinRelative(v_dir_1253_, v___x_1309_);
v___x_1311_ = l_System_FilePath_normalize(v_nativeLibDir_1290_);
v___x_1312_ = l_Lake_joinRelative(v___x_1310_, v___x_1311_);
v___x_1313_ = l_Lake_LeanLib_libName(v_self_1254_);
v___x_1314_ = 0;
v___x_1315_ = l_Lake_nameToStaticLib(v___x_1313_, v___x_1314_);
v___x_1316_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_1317_ = l_System_FilePath_addExtension(v___x_1315_, v___x_1316_);
v___x_1318_ = l_Lake_joinRelative(v___x_1312_, v___x_1317_);
v___y_1264_ = v_a_1308_;
v___y_1265_ = v_bootstrap_1288_;
v___y_1266_ = v_a_1307_;
v___y_1267_ = v___x_1295_;
v___y_1268_ = v_a_1284_;
v___y_1269_ = v___x_1318_;
goto v___jp_1263_;
}
}
else
{
lean_object* v_a_1319_; lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
lean_dec_ref(v_nativeLibDir_1290_);
lean_dec_ref(v_buildDir_1289_);
lean_dec_ref(v_a_1284_);
lean_dec_ref(v___y_1256_);
lean_dec_ref(v_self_1254_);
lean_dec_ref(v_dir_1253_);
lean_dec(v___x_1252_);
lean_dec_ref(v___x_1251_);
lean_dec(v___x_1244_);
v_a_1319_ = lean_ctor_get(v___x_1297_, 0);
v_a_1320_ = lean_ctor_get(v___x_1297_, 1);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1297_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1297_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_inc(v_a_1319_);
lean_dec(v___x_1297_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1319_);
lean_ctor_set(v_reuseFailAlloc_1326_, 1, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
v___jp_1328_:
{
if (lean_obj_tag(v___y_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v_a_1331_; 
v_a_1330_ = lean_ctor_get(v___y_1329_, 0);
lean_inc(v_a_1330_);
v_a_1331_ = lean_ctor_get(v___y_1329_, 1);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___y_1329_, 2);
v_a_1284_ = v_a_1330_;
v_a_1285_ = v_a_1331_;
goto v___jp_1283_;
}
else
{
lean_object* v_a_1332_; lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v___y_1256_);
lean_dec_ref(v_self_1254_);
lean_dec_ref(v_dir_1253_);
lean_dec(v___x_1252_);
lean_dec_ref(v___x_1251_);
lean_dec_ref(v___f_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_config_1245_);
lean_dec(v___x_1244_);
v_a_1332_ = lean_ctor_get(v___y_1329_, 0);
v_a_1333_ = lean_ctor_get(v___y_1329_, 1);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___y_1329_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___y_1329_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_inc(v_a_1332_);
lean_dec(v___y_1329_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1332_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object** _args){
lean_object* v___x_1378_ = _args[0];
lean_object* v___x_1379_ = _args[1];
lean_object* v_config_1380_ = _args[2];
lean_object* v_config_1381_ = _args[3];
lean_object* v___x_1382_ = _args[4];
lean_object* v___f_1383_ = _args[5];
lean_object* v_shouldExport_1384_ = _args[6];
lean_object* v___x_1385_ = _args[7];
lean_object* v___x_1386_ = _args[8];
lean_object* v___x_1387_ = _args[9];
lean_object* v_dir_1388_ = _args[10];
lean_object* v_self_1389_ = _args[11];
lean_object* v___f_1390_ = _args[12];
lean_object* v___y_1391_ = _args[13];
lean_object* v___y_1392_ = _args[14];
lean_object* v___y_1393_ = _args[15];
lean_object* v___y_1394_ = _args[16];
lean_object* v___y_1395_ = _args[17];
lean_object* v___y_1396_ = _args[18];
lean_object* v___y_1397_ = _args[19];
_start:
{
uint8_t v_shouldExport_boxed_1398_; uint8_t v___x_244637__boxed_1399_; lean_object* v_res_1400_; 
v_shouldExport_boxed_1398_ = lean_unbox(v_shouldExport_1384_);
v___x_244637__boxed_1399_ = lean_unbox(v___x_1385_);
v_res_1400_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(v___x_1378_, v___x_1379_, v_config_1380_, v_config_1381_, v___x_1382_, v___f_1383_, v_shouldExport_boxed_1398_, v___x_244637__boxed_1399_, v___x_1386_, v___x_1387_, v_dir_1388_, v_self_1389_, v___f_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec(v_config_1381_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object* v_self_1404_, uint8_t v_shouldExport_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v_toApplicative_1414_; lean_object* v_toBind_1415_; lean_object* v_toFunctor_1416_; lean_object* v_toPure_1417_; lean_object* v___f_1418_; lean_object* v___f_1419_; lean_object* v___f_1420_; lean_object* v___f_1421_; lean_object* v___x_1422_; lean_object* v___f_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v_toBuildConfig_1431_; lean_object* v_registeredJobs_1432_; uint8_t v_verbosity_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___f_1436_; uint8_t v___x_1437_; uint8_t v___x_1438_; uint8_t v___x_1439_; lean_object* v___y_1441_; 
v___x_1413_ = l_instMonadBaseIO;
v_toApplicative_1414_ = lean_ctor_get(v___x_1413_, 0);
v_toBind_1415_ = lean_ctor_get(v___x_1413_, 1);
v_toFunctor_1416_ = lean_ctor_get(v_toApplicative_1414_, 0);
v_toPure_1417_ = lean_ctor_get(v_toApplicative_1414_, 1);
lean_inc_n(v_toBind_1415_, 3);
lean_inc_n(v_toPure_1417_, 5);
v___f_1418_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1418_, 0, v_toPure_1417_);
lean_closure_set(v___f_1418_, 1, v_toBind_1415_);
v___f_1419_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1419_, 0, v_toPure_1417_);
lean_closure_set(v___f_1419_, 1, v_toBind_1415_);
lean_inc_ref(v___f_1418_);
v___f_1420_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1420_, 0, v_toPure_1417_);
lean_closure_set(v___f_1420_, 1, v___f_1418_);
lean_inc_ref_n(v_toFunctor_1416_, 2);
v___f_1421_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1421_, 0, v_toFunctor_1416_);
lean_closure_set(v___f_1421_, 1, v_toPure_1417_);
lean_closure_set(v___f_1421_, 2, v_toBind_1415_);
v___x_1422_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1416_);
v___f_1423_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1423_, 0, v_toPure_1417_);
v___x_1424_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___f_1423_);
lean_ctor_set(v___x_1424_, 2, v___f_1421_);
lean_ctor_set(v___x_1424_, 3, v___f_1420_);
lean_ctor_set(v___x_1424_, 4, v___f_1419_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
lean_ctor_set(v___x_1425_, 1, v___f_1418_);
v___x_1426_ = l_ReaderT_instMonad___redArg(v___x_1425_);
v___x_1427_ = l_StateRefT_x27_instMonad___redArg(v___x_1426_);
v___x_1428_ = l_ReaderT_instMonad___redArg(v___x_1427_);
v___x_1429_ = l_ReaderT_instMonad___redArg(v___x_1428_);
lean_inc_ref(v___x_1429_);
v___x_1430_ = l_Lake_EquipT_instMonad___redArg(v___x_1429_);
v_toBuildConfig_1431_ = lean_ctor_get(v_a_1410_, 0);
v_registeredJobs_1432_ = lean_ctor_get(v_a_1410_, 3);
v_verbosity_1433_ = lean_ctor_get_uint8(v_toBuildConfig_1431_, sizeof(void*)*3 + 3);
v___x_1434_ = l_Lake_instDataKindFilePath;
v___x_1435_ = lean_box(v_shouldExport_1405_);
lean_inc_ref(v___x_1430_);
v___f_1436_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1436_, 0, v___x_1435_);
lean_closure_set(v___f_1436_, 1, v___x_1430_);
v___x_1437_ = 2;
v___x_1438_ = l_Lake_instDecidableEqVerbosity(v_verbosity_1433_, v___x_1437_);
v___x_1439_ = 1;
if (v___x_1438_ == 0)
{
lean_object* v___x_1487_; 
v___x_1487_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_1441_ = v___x_1487_;
goto v___jp_1440_;
}
else
{
if (v_shouldExport_1405_ == 0)
{
lean_object* v___x_1488_; 
v___x_1488_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___y_1441_ = v___x_1488_;
goto v___jp_1440_;
}
else
{
lean_object* v___x_1489_; 
v___x_1489_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_1441_ = v___x_1489_;
goto v___jp_1440_;
}
}
v___jp_1440_:
{
lean_object* v_pkg_1442_; lean_object* v_name_1443_; lean_object* v_config_1444_; lean_object* v_keyName_1445_; lean_object* v_dir_1446_; lean_object* v_config_1447_; lean_object* v___f_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___f_1456_; lean_object* v___x_1457_; 
v_pkg_1442_ = lean_ctor_get(v_self_1404_, 0);
v_name_1443_ = lean_ctor_get(v_self_1404_, 1);
lean_inc_n(v_name_1443_, 2);
v_config_1444_ = lean_ctor_get(v_self_1404_, 2);
lean_inc(v_config_1444_);
v_keyName_1445_ = lean_ctor_get(v_pkg_1442_, 2);
v_dir_1446_ = lean_ctor_get(v_pkg_1442_, 4);
lean_inc_ref(v_dir_1446_);
v_config_1447_ = lean_ctor_get(v_pkg_1442_, 6);
lean_inc_ref(v_config_1447_);
lean_inc_ref_n(v_pkg_1442_, 2);
v___f_1448_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed), 10, 2);
lean_closure_set(v___f_1448_, 0, v___x_1434_);
lean_closure_set(v___f_1448_, 1, v_pkg_1442_);
v___x_1449_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_1445_);
v___x_1450_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1450_, 0, v_keyName_1445_);
lean_ctor_set(v___x_1450_, 1, v_name_1443_);
v___x_1451_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_1404_);
v___x_1452_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1450_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
lean_ctor_set(v___x_1452_, 2, v_self_1404_);
lean_ctor_set(v___x_1452_, 3, v___x_1449_);
v___x_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1453_, 0, v_pkg_1442_);
v___x_1454_ = lean_box(v_shouldExport_1405_);
v___x_1455_ = lean_box(v___x_1439_);
v___f_1456_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed), 20, 13);
lean_closure_set(v___f_1456_, 0, v___x_1452_);
lean_closure_set(v___f_1456_, 1, v___x_1453_);
lean_closure_set(v___f_1456_, 2, v_config_1447_);
lean_closure_set(v___f_1456_, 3, v_config_1444_);
lean_closure_set(v___f_1456_, 4, v___x_1430_);
lean_closure_set(v___f_1456_, 5, v___f_1448_);
lean_closure_set(v___f_1456_, 6, v___x_1454_);
lean_closure_set(v___f_1456_, 7, v___x_1455_);
lean_closure_set(v___f_1456_, 8, v___x_1429_);
lean_closure_set(v___f_1456_, 9, v___x_1434_);
lean_closure_set(v___f_1456_, 10, v_dir_1446_);
lean_closure_set(v___f_1456_, 11, v_self_1404_);
lean_closure_set(v___f_1456_, 12, v___f_1436_);
v___x_1457_ = l_Lake_ensureJob___redArg(v___x_1434_, v___f_1456_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1486_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
v_a_1459_ = lean_ctor_get(v___x_1457_, 1);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1461_ = v___x_1457_;
v_isShared_1462_ = v_isSharedCheck_1486_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_inc(v_a_1458_);
lean_dec(v___x_1457_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1486_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v_task_1463_; lean_object* v_kind_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1484_; 
v_task_1463_ = lean_ctor_get(v_a_1458_, 0);
v_kind_1464_ = lean_ctor_get(v_a_1458_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_a_1458_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v_a_1458_, 2);
lean_dec(v_unused_1485_);
v___x_1466_ = v_a_1458_;
v_isShared_1467_ = v_isSharedCheck_1484_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_kind_1464_);
lean_inc(v_task_1463_);
lean_dec(v_a_1458_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1484_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; uint8_t v___x_1473_; lean_object* v_job_1475_; 
v___x_1468_ = lean_st_ref_take(v_registeredJobs_1432_);
v___x_1469_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1443_, v___x_1439_);
v___x_1470_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0));
v___x_1471_ = lean_string_append(v___x_1469_, v___x_1470_);
v___x_1472_ = lean_string_append(v___x_1471_, v___y_1441_);
v___x_1473_ = 0;
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 2, v___x_1472_);
v_job_1475_ = v___x_1466_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_task_1463_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v_kind_1464_);
lean_ctor_set(v_reuseFailAlloc_1483_, 2, v___x_1472_);
v_job_1475_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
lean_ctor_set_uint8(v_job_1475_, sizeof(void*)*3, v___x_1473_);
lean_inc_ref(v_job_1475_);
v___x_1476_ = l_Lake_Job_toOpaque___redArg(v_job_1475_);
v___x_1477_ = lean_array_push(v___x_1468_, v___x_1476_);
v___x_1478_ = lean_st_ref_set(v_registeredJobs_1432_, v___x_1477_);
v___x_1479_ = l_Lake_Job_renew___redArg(v_job_1475_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 0, v___x_1479_);
v___x_1481_ = v___x_1461_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_a_1459_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
else
{
lean_dec(v_name_1443_);
return v___x_1457_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object* v_self_1490_, lean_object* v_shouldExport_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_){
_start:
{
uint8_t v_shouldExport_boxed_1499_; lean_object* v_res_1500_; 
v_shouldExport_boxed_1499_ = lean_unbox(v_shouldExport_1491_);
v_res_1500_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(v_self_1490_, v_shouldExport_boxed_1499_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec(v_a_1493_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t v_fmt_1501_, lean_object* v_a_1502_){
_start:
{
if (v_fmt_1501_ == 0)
{
return v_a_1502_;
}
else
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1503_ = l_Lake_mkRelPathString(v_a_1502_);
v___x_1504_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1504_, 0, v___x_1503_);
v___x_1505_ = l_Lean_Json_compress(v___x_1504_);
return v___x_1505_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object* v_fmt_1506_, lean_object* v_a_1507_){
_start:
{
uint8_t v_fmt_boxed_1508_; lean_object* v_res_1509_; 
v_fmt_boxed_1508_ = lean_unbox(v_fmt_1506_);
v_res_1509_ = l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(v_fmt_boxed_1508_, v_a_1507_);
return v_res_1509_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2(void){
_start:
{
uint8_t v___x_1512_; lean_object* v_name_1513_; lean_object* v___x_1514_; 
v___x_1512_ = 1;
v_name_1513_ = l_Lake_instDataKindFilePath;
v___x_1514_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1513_, v___x_1512_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object* v_defaultPkg_1518_, lean_object* v_self_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_){
_start:
{
uint8_t v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = 1;
lean_inc_ref_n(v_self_1519_, 2);
v___x_1528_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1518_, v_self_1519_, v_self_1519_, v___x_1527_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; lean_object* v_snd_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1571_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
v_snd_1530_ = lean_ctor_get(v_a_1529_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_a_1529_);
if (v_isSharedCheck_1571_ == 0)
{
lean_object* v_unused_1572_; 
v_unused_1572_ = lean_ctor_get(v_a_1529_, 0);
lean_dec(v_unused_1572_);
v___x_1532_ = v_a_1529_;
v_isShared_1533_ = v_isSharedCheck_1571_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_snd_1530_);
lean_dec(v_a_1529_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1571_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1569_; 
v_a_1534_ = lean_ctor_get(v___x_1528_, 1);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1569_ == 0)
{
lean_object* v_unused_1570_; 
v_unused_1570_ = lean_ctor_get(v___x_1528_, 0);
lean_dec(v_unused_1570_);
v___x_1536_ = v___x_1528_;
v_isShared_1537_ = v_isSharedCheck_1569_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1528_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1569_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v_kind_1538_; lean_object* v_name_1539_; lean_object* v___y_1541_; uint8_t v___x_1559_; 
v_kind_1538_ = lean_ctor_get(v_snd_1530_, 1);
v_name_1539_ = l_Lake_instDataKindFilePath;
v___x_1559_ = lean_name_eq(v_kind_1538_, v_name_1539_);
if (v___x_1559_ == 0)
{
uint8_t v___x_1560_; 
lean_inc(v_kind_1538_);
lean_del_object(v___x_1532_);
lean_dec(v_snd_1530_);
v___x_1560_ = l_Lean_Name_isAnonymous(v_kind_1538_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1561_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_1562_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1538_, v___x_1527_);
v___x_1563_ = lean_string_append(v___x_1561_, v___x_1562_);
lean_dec_ref(v___x_1562_);
v___x_1564_ = lean_string_append(v___x_1563_, v___x_1561_);
v___y_1541_ = v___x_1564_;
goto v___jp_1540_;
}
else
{
lean_object* v___x_1565_; 
lean_dec(v_kind_1538_);
v___x_1565_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_1541_ = v___x_1565_;
goto v___jp_1540_;
}
}
else
{
lean_object* v___x_1567_; 
lean_del_object(v___x_1536_);
lean_dec_ref(v_self_1519_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 1, v_a_1534_);
lean_ctor_set(v___x_1532_, 0, v_snd_1530_);
v___x_1567_ = v___x_1532_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_snd_1530_);
lean_ctor_set(v_reuseFailAlloc_1568_, 1, v_a_1534_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
v___jp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1557_; 
v___x_1542_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_1543_ = l_Lake_PartialBuildKey_toString(v_self_1519_);
v___x_1544_ = lean_string_append(v___x_1542_, v___x_1543_);
lean_dec_ref(v___x_1543_);
v___x_1545_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_1546_ = lean_string_append(v___x_1544_, v___x_1545_);
v___x_1547_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2);
v___x_1548_ = lean_string_append(v___x_1546_, v___x_1547_);
v___x_1549_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_1550_ = lean_string_append(v___x_1548_, v___x_1549_);
v___x_1551_ = lean_string_append(v___x_1550_, v___y_1541_);
lean_dec_ref(v___y_1541_);
v___x_1552_ = 3;
v___x_1553_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set_uint8(v___x_1553_, sizeof(void*)*1, v___x_1552_);
v___x_1554_ = lean_array_get_size(v_a_1534_);
v___x_1555_ = lean_array_push(v_a_1534_, v___x_1553_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set_tag(v___x_1536_, 1);
lean_ctor_set(v___x_1536_, 1, v___x_1555_);
lean_ctor_set(v___x_1536_, 0, v___x_1554_);
v___x_1557_ = v___x_1536_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v___x_1554_);
lean_ctor_set(v_reuseFailAlloc_1558_, 1, v___x_1555_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec_ref(v_self_1519_);
v_a_1573_ = lean_ctor_get(v___x_1528_, 0);
v_a_1574_ = lean_ctor_get(v___x_1528_, 1);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1528_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_inc(v_a_1573_);
lean_dec(v___x_1528_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1573_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object* v_defaultPkg_1582_, lean_object* v_self_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v_defaultPkg_1582_, v_self_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
lean_dec_ref(v_a_1588_);
lean_dec(v_a_1587_);
lean_dec(v_a_1586_);
lean_dec(v_a_1585_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object* v___x_1592_, size_t v_sz_1593_, size_t v_i_1594_, lean_object* v_bs_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
uint8_t v___x_1603_; 
v___x_1603_ = lean_usize_dec_lt(v_i_1594_, v_sz_1593_);
if (v___x_1603_ == 0)
{
lean_object* v___x_1604_; 
lean_dec_ref(v___y_1596_);
lean_dec_ref(v___x_1592_);
v___x_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1604_, 0, v_bs_1595_);
lean_ctor_set(v___x_1604_, 1, v___y_1601_);
return v___x_1604_;
}
else
{
lean_object* v_v_1605_; lean_object* v___x_1606_; 
v_v_1605_ = lean_array_uget_borrowed(v_bs_1595_, v_i_1594_);
lean_inc_ref(v___y_1596_);
lean_inc(v_v_1605_);
lean_inc_ref(v___x_1592_);
v___x_1606_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_1592_, v_v_1605_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v_a_1607_; lean_object* v_a_1608_; lean_object* v___x_1609_; lean_object* v_bs_x27_1610_; size_t v___x_1611_; size_t v___x_1612_; lean_object* v___x_1613_; 
v_a_1607_ = lean_ctor_get(v___x_1606_, 0);
lean_inc(v_a_1607_);
v_a_1608_ = lean_ctor_get(v___x_1606_, 1);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1606_, 2);
v___x_1609_ = lean_unsigned_to_nat(0u);
v_bs_x27_1610_ = lean_array_uset(v_bs_1595_, v_i_1594_, v___x_1609_);
v___x_1611_ = ((size_t)1ULL);
v___x_1612_ = lean_usize_add(v_i_1594_, v___x_1611_);
v___x_1613_ = lean_array_uset(v_bs_x27_1610_, v_i_1594_, v_a_1607_);
v_i_1594_ = v___x_1612_;
v_bs_1595_ = v___x_1613_;
v___y_1601_ = v_a_1608_;
goto _start;
}
else
{
lean_object* v_a_1615_; lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec_ref(v___y_1596_);
lean_dec_ref(v_bs_1595_);
lean_dec_ref(v___x_1592_);
v_a_1615_ = lean_ctor_get(v___x_1606_, 0);
v_a_1616_ = lean_ctor_get(v___x_1606_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1606_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_inc(v_a_1615_);
lean_dec(v___x_1606_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1615_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object* v___x_1624_, lean_object* v_sz_1625_, lean_object* v_i_1626_, lean_object* v_bs_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
size_t v_sz_boxed_1635_; size_t v_i_boxed_1636_; lean_object* v_res_1637_; 
v_sz_boxed_1635_ = lean_unbox_usize(v_sz_1625_);
lean_dec(v_sz_1625_);
v_i_boxed_1636_ = lean_unbox_usize(v_i_1626_);
lean_dec(v_i_1626_);
v_res_1637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v___x_1624_, v_sz_boxed_1635_, v_i_boxed_1636_, v_bs_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec(v___y_1629_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object* v_a_1638_, lean_object* v_as_1639_, size_t v_i_1640_, size_t v_stop_1641_, lean_object* v_b_1642_, lean_object* v___y_1643_){
_start:
{
uint8_t v___x_1645_; 
v___x_1645_ = lean_usize_dec_eq(v_i_1640_, v_stop_1641_);
if (v___x_1645_ == 0)
{
lean_object* v_log_1646_; uint8_t v_action_1647_; uint8_t v_wantsRebuild_1648_; lean_object* v_trace_1649_; lean_object* v_buildTime_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_log_1646_ = lean_ctor_get(v___y_1643_, 0);
v_action_1647_ = lean_ctor_get_uint8(v___y_1643_, sizeof(void*)*3);
v_wantsRebuild_1648_ = lean_ctor_get_uint8(v___y_1643_, sizeof(void*)*3 + 1);
v_trace_1649_ = lean_ctor_get(v___y_1643_, 1);
v_buildTime_1650_ = lean_ctor_get(v___y_1643_, 2);
v___x_1651_ = lean_array_uget_borrowed(v_as_1639_, v_i_1640_);
v___x_1652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
lean_inc(v___x_1651_);
v___x_1653_ = lean_string_append(v___x_1651_, v___x_1652_);
v___x_1654_ = lean_io_prim_handle_put_str(v_a_1638_, v___x_1653_);
lean_dec_ref(v___x_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; size_t v___x_1656_; size_t v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = ((size_t)1ULL);
v___x_1657_ = lean_usize_add(v_i_1640_, v___x_1656_);
v_i_1640_ = v___x_1657_;
v_b_1642_ = v_a_1655_;
goto _start;
}
else
{
lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1672_; 
lean_inc(v_buildTime_1650_);
lean_inc_ref(v_trace_1649_);
lean_inc_ref(v_log_1646_);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___y_1643_);
if (v_isSharedCheck_1672_ == 0)
{
lean_object* v_unused_1673_; lean_object* v_unused_1674_; lean_object* v_unused_1675_; 
v_unused_1673_ = lean_ctor_get(v___y_1643_, 2);
lean_dec(v_unused_1673_);
v_unused_1674_ = lean_ctor_get(v___y_1643_, 1);
lean_dec(v_unused_1674_);
v_unused_1675_ = lean_ctor_get(v___y_1643_, 0);
lean_dec(v_unused_1675_);
v___x_1660_ = v___y_1643_;
v_isShared_1661_ = v_isSharedCheck_1672_;
goto v_resetjp_1659_;
}
else
{
lean_dec(v___y_1643_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1672_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v_a_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1669_; 
v_a_1662_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1663_ = lean_io_error_to_string(v_a_1662_);
v___x_1664_ = 3;
v___x_1665_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set_uint8(v___x_1665_, sizeof(void*)*1, v___x_1664_);
v___x_1666_ = lean_array_get_size(v_log_1646_);
v___x_1667_ = lean_array_push(v_log_1646_, v___x_1665_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v___x_1667_);
v___x_1669_ = v___x_1660_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_trace_1649_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_buildTime_1650_);
lean_ctor_set_uint8(v_reuseFailAlloc_1671_, sizeof(void*)*3, v_action_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1671_, sizeof(void*)*3 + 1, v_wantsRebuild_1648_);
v___x_1669_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1666_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
return v___x_1670_;
}
}
}
}
else
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v_b_1642_);
lean_ctor_set(v___x_1676_, 1, v___y_1643_);
return v___x_1676_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object* v_a_1677_, lean_object* v_as_1678_, lean_object* v_i_1679_, lean_object* v_stop_1680_, lean_object* v_b_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
size_t v_i_boxed_1684_; size_t v_stop_boxed_1685_; lean_object* v_res_1686_; 
v_i_boxed_1684_ = lean_unbox_usize(v_i_1679_);
lean_dec(v_i_1679_);
v_stop_boxed_1685_ = lean_unbox_usize(v_stop_1680_);
lean_dec(v_stop_1680_);
v_res_1686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1677_, v_as_1678_, v_i_boxed_1684_, v_stop_boxed_1685_, v_b_1681_, v___y_1682_);
lean_dec_ref(v_as_1678_);
lean_dec(v_a_1677_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t v_bootstrap_1687_, lean_object* v___y_1688_, lean_object* v_oFiles_1689_, uint8_t v_shouldExport_1690_, uint8_t v___x_1691_, size_t v___x_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
uint8_t v___y_1701_; lean_object* v___y_1702_; lean_object* v_a_1703_; lean_object* v___y_1751_; uint8_t v___y_1752_; lean_object* v___y_1753_; 
if (v_bootstrap_1687_ == 0)
{
lean_object* v_toContext_1755_; lean_object* v_lakeEnv_1756_; lean_object* v_lean_1757_; lean_object* v_log_1758_; uint8_t v_action_1759_; uint8_t v_wantsRebuild_1760_; lean_object* v_trace_1761_; lean_object* v_buildTime_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1792_; 
v_toContext_1755_ = lean_ctor_get(v___y_1697_, 1);
v_lakeEnv_1756_ = lean_ctor_get(v_toContext_1755_, 0);
v_lean_1757_ = lean_ctor_get(v_lakeEnv_1756_, 1);
v_log_1758_ = lean_ctor_get(v___y_1698_, 0);
v_action_1759_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1760_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1761_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1762_ = lean_ctor_get(v___y_1698_, 2);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1764_ = v___y_1698_;
v_isShared_1765_ = v_isSharedCheck_1792_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_buildTime_1762_);
lean_inc(v_trace_1761_);
lean_inc(v_log_1758_);
lean_dec(v___y_1698_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1792_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v_ar_1766_; lean_object* v___x_1767_; 
v_ar_1766_ = lean_ctor_get(v_lean_1757_, 13);
lean_inc_ref(v_ar_1766_);
v___x_1767_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1766_, v_bootstrap_1687_, v_log_1758_);
if (lean_obj_tag(v___x_1767_) == 0)
{
lean_object* v_a_1768_; lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1779_; 
v_a_1768_ = lean_ctor_get(v___x_1767_, 0);
v_a_1769_ = lean_ctor_get(v___x_1767_, 1);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1771_ = v___x_1767_;
v_isShared_1772_ = v_isSharedCheck_1779_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_inc(v_a_1768_);
lean_dec(v___x_1767_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1779_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v_a_1769_);
v___x_1774_ = v___x_1764_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1769_);
lean_ctor_set(v_reuseFailAlloc_1778_, 1, v_trace_1761_);
lean_ctor_set(v_reuseFailAlloc_1778_, 2, v_buildTime_1762_);
lean_ctor_set_uint8(v_reuseFailAlloc_1778_, sizeof(void*)*3, v_action_1759_);
lean_ctor_set_uint8(v_reuseFailAlloc_1778_, sizeof(void*)*3 + 1, v_wantsRebuild_1760_);
v___x_1774_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1776_; 
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 1, v___x_1774_);
v___x_1776_ = v___x_1771_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1768_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v_a_1780_; lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1791_; 
v_a_1780_ = lean_ctor_get(v___x_1767_, 0);
v_a_1781_ = lean_ctor_get(v___x_1767_, 1);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1767_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1783_ = v___x_1767_;
v_isShared_1784_ = v_isSharedCheck_1791_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_inc(v_a_1780_);
lean_dec(v___x_1767_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1791_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v_a_1781_);
v___x_1786_ = v___x_1764_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1781_);
lean_ctor_set(v_reuseFailAlloc_1790_, 1, v_trace_1761_);
lean_ctor_set(v_reuseFailAlloc_1790_, 2, v_buildTime_1762_);
lean_ctor_set_uint8(v_reuseFailAlloc_1790_, sizeof(void*)*3, v_action_1759_);
lean_ctor_set_uint8(v_reuseFailAlloc_1790_, sizeof(void*)*3 + 1, v_wantsRebuild_1760_);
v___x_1786_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1788_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set(v___x_1783_, 1, v___x_1786_);
v___x_1788_ = v___x_1783_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1780_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v___x_1786_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
}
}
else
{
uint8_t v___x_1793_; 
v___x_1793_ = l_System_Platform_isOSX;
if (v___x_1793_ == 0)
{
uint8_t v___x_1794_; 
v___x_1794_ = l_System_Platform_isWindows;
if (v___x_1794_ == 0)
{
lean_object* v_toContext_1795_; lean_object* v_lakeEnv_1796_; lean_object* v_lean_1797_; lean_object* v_log_1798_; uint8_t v_action_1799_; uint8_t v_wantsRebuild_1800_; lean_object* v_trace_1801_; lean_object* v_buildTime_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1832_; 
v_toContext_1795_ = lean_ctor_get(v___y_1697_, 1);
v_lakeEnv_1796_ = lean_ctor_get(v_toContext_1795_, 0);
v_lean_1797_ = lean_ctor_get(v_lakeEnv_1796_, 1);
v_log_1798_ = lean_ctor_get(v___y_1698_, 0);
v_action_1799_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1800_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1801_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1802_ = lean_ctor_get(v___y_1698_, 2);
v_isSharedCheck_1832_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1832_ == 0)
{
v___x_1804_ = v___y_1698_;
v_isShared_1805_ = v_isSharedCheck_1832_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_buildTime_1802_);
lean_inc(v_trace_1801_);
lean_inc(v_log_1798_);
lean_dec(v___y_1698_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1832_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v_ar_1806_; lean_object* v___x_1807_; 
v_ar_1806_ = lean_ctor_get(v_lean_1797_, 13);
lean_inc_ref(v_ar_1806_);
v___x_1807_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1806_, v___x_1794_, v_log_1798_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1819_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
v_a_1809_ = lean_ctor_get(v___x_1807_, 1);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1811_ = v___x_1807_;
v_isShared_1812_ = v_isSharedCheck_1819_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_inc(v_a_1808_);
lean_dec(v___x_1807_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1819_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v_a_1809_);
v___x_1814_ = v___x_1804_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1809_);
lean_ctor_set(v_reuseFailAlloc_1818_, 1, v_trace_1801_);
lean_ctor_set(v_reuseFailAlloc_1818_, 2, v_buildTime_1802_);
lean_ctor_set_uint8(v_reuseFailAlloc_1818_, sizeof(void*)*3, v_action_1799_);
lean_ctor_set_uint8(v_reuseFailAlloc_1818_, sizeof(void*)*3 + 1, v_wantsRebuild_1800_);
v___x_1814_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
lean_object* v___x_1816_; 
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 1, v___x_1814_);
v___x_1816_ = v___x_1811_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1808_);
lean_ctor_set(v_reuseFailAlloc_1817_, 1, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
else
{
lean_object* v_a_1820_; lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1831_; 
v_a_1820_ = lean_ctor_get(v___x_1807_, 0);
v_a_1821_ = lean_ctor_get(v___x_1807_, 1);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1823_ = v___x_1807_;
v_isShared_1824_ = v_isSharedCheck_1831_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_inc(v_a_1820_);
lean_dec(v___x_1807_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1831_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1805_ == 0)
{
lean_ctor_set(v___x_1804_, 0, v_a_1821_);
v___x_1826_ = v___x_1804_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_a_1821_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_trace_1801_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_buildTime_1802_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*3, v_action_1799_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*3 + 1, v_wantsRebuild_1800_);
v___x_1826_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1828_; 
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 1, v___x_1826_);
v___x_1828_ = v___x_1823_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1820_);
lean_ctor_set(v_reuseFailAlloc_1829_, 1, v___x_1826_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
}
else
{
lean_object* v_toContext_1833_; lean_object* v_lakeEnv_1834_; lean_object* v_lean_1835_; lean_object* v_log_1836_; uint8_t v_action_1837_; uint8_t v_wantsRebuild_1838_; lean_object* v_trace_1839_; lean_object* v_buildTime_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1870_; 
v_toContext_1833_ = lean_ctor_get(v___y_1697_, 1);
v_lakeEnv_1834_ = lean_ctor_get(v_toContext_1833_, 0);
v_lean_1835_ = lean_ctor_get(v_lakeEnv_1834_, 1);
v_log_1836_ = lean_ctor_get(v___y_1698_, 0);
v_action_1837_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1838_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1839_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1840_ = lean_ctor_get(v___y_1698_, 2);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1842_ = v___y_1698_;
v_isShared_1843_ = v_isSharedCheck_1870_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_buildTime_1840_);
lean_inc(v_trace_1839_);
lean_inc(v_log_1836_);
lean_dec(v___y_1698_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1870_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v_ar_1844_; lean_object* v___x_1845_; 
v_ar_1844_ = lean_ctor_get(v_lean_1835_, 13);
lean_inc_ref(v_ar_1844_);
v___x_1845_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1844_, v_shouldExport_1690_, v_log_1836_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v_a_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1857_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_a_1847_ = lean_ctor_get(v___x_1845_, 1);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1849_ = v___x_1845_;
v_isShared_1850_ = v_isSharedCheck_1857_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_a_1847_);
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1857_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1852_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 0, v_a_1847_);
v___x_1852_ = v___x_1842_;
goto v_reusejp_1851_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1847_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v_trace_1839_);
lean_ctor_set(v_reuseFailAlloc_1856_, 2, v_buildTime_1840_);
lean_ctor_set_uint8(v_reuseFailAlloc_1856_, sizeof(void*)*3, v_action_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1856_, sizeof(void*)*3 + 1, v_wantsRebuild_1838_);
v___x_1852_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1851_;
}
v_reusejp_1851_:
{
lean_object* v___x_1854_; 
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 1, v___x_1852_);
v___x_1854_ = v___x_1849_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_a_1846_);
lean_ctor_set(v_reuseFailAlloc_1855_, 1, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1869_; 
v_a_1858_ = lean_ctor_get(v___x_1845_, 0);
v_a_1859_ = lean_ctor_get(v___x_1845_, 1);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1861_ = v___x_1845_;
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_inc(v_a_1858_);
lean_dec(v___x_1845_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1869_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 0, v_a_1859_);
v___x_1864_ = v___x_1842_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1859_);
lean_ctor_set(v_reuseFailAlloc_1868_, 1, v_trace_1839_);
lean_ctor_set(v_reuseFailAlloc_1868_, 2, v_buildTime_1840_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*3, v_action_1837_);
lean_ctor_set_uint8(v_reuseFailAlloc_1868_, sizeof(void*)*3 + 1, v_wantsRebuild_1838_);
v___x_1864_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1866_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 1, v___x_1864_);
v___x_1866_ = v___x_1861_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1858_);
lean_ctor_set(v_reuseFailAlloc_1867_, 1, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v_log_1873_; uint8_t v_action_1874_; uint8_t v_wantsRebuild_1875_; lean_object* v_trace_1876_; lean_object* v_buildTime_1877_; uint8_t v___y_1879_; 
v___x_1871_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1872_ = lean_io_getenv(v___x_1871_);
v_log_1873_ = lean_ctor_get(v___y_1698_, 0);
v_action_1874_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1875_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1876_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1877_ = lean_ctor_get(v___y_1698_, 2);
if (lean_obj_tag(v___x_1872_) == 0)
{
uint8_t v___x_1929_; 
v___x_1929_ = 0;
v___y_1879_ = v___x_1929_;
goto v___jp_1878_;
}
else
{
lean_object* v_val_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v_val_1930_ = lean_ctor_get(v___x_1872_, 0);
lean_inc(v_val_1930_);
lean_dec_ref_known(v___x_1872_, 1);
v___x_1931_ = lean_string_utf8_byte_size(v_val_1930_);
lean_dec(v_val_1930_);
v___x_1932_ = lean_unsigned_to_nat(0u);
v___x_1933_ = lean_nat_dec_eq(v___x_1931_, v___x_1932_);
if (v___x_1933_ == 0)
{
if (v___x_1793_ == 0)
{
v___y_1879_ = v___x_1793_;
goto v___jp_1878_;
}
else
{
lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1966_; 
lean_inc(v_buildTime_1877_);
lean_inc_ref(v_trace_1876_);
lean_inc_ref(v_log_1873_);
v_isSharedCheck_1966_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1966_ == 0)
{
lean_object* v_unused_1967_; lean_object* v_unused_1968_; lean_object* v_unused_1969_; 
v_unused_1967_ = lean_ctor_get(v___y_1698_, 2);
lean_dec(v_unused_1967_);
v_unused_1968_ = lean_ctor_get(v___y_1698_, 1);
lean_dec(v_unused_1968_);
v_unused_1969_ = lean_ctor_get(v___y_1698_, 0);
lean_dec(v_unused_1969_);
v___x_1935_ = v___y_1698_;
v_isShared_1936_ = v_isSharedCheck_1966_;
goto v_resetjp_1934_;
}
else
{
lean_dec(v___y_1698_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1966_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v_toContext_1937_; lean_object* v_lakeEnv_1938_; lean_object* v_lean_1939_; lean_object* v_ar_1940_; lean_object* v___x_1941_; 
v_toContext_1937_ = lean_ctor_get(v___y_1697_, 1);
v_lakeEnv_1938_ = lean_ctor_get(v_toContext_1937_, 0);
v_lean_1939_ = lean_ctor_get(v_lakeEnv_1938_, 1);
v_ar_1940_ = lean_ctor_get(v_lean_1939_, 13);
lean_inc_ref(v_ar_1940_);
v___x_1941_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1940_, v___x_1933_, v_log_1873_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1953_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
v_a_1943_ = lean_ctor_get(v___x_1941_, 1);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1945_ = v___x_1941_;
v_isShared_1946_ = v_isSharedCheck_1953_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_inc(v_a_1942_);
lean_dec(v___x_1941_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1953_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v_a_1943_);
v___x_1948_ = v___x_1935_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1943_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v_trace_1876_);
lean_ctor_set(v_reuseFailAlloc_1952_, 2, v_buildTime_1877_);
lean_ctor_set_uint8(v_reuseFailAlloc_1952_, sizeof(void*)*3, v_action_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1952_, sizeof(void*)*3 + 1, v_wantsRebuild_1875_);
v___x_1948_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
lean_object* v___x_1950_; 
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 1, v___x_1948_);
v___x_1950_ = v___x_1945_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1942_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v___x_1948_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1965_; 
v_a_1954_ = lean_ctor_get(v___x_1941_, 0);
v_a_1955_ = lean_ctor_get(v___x_1941_, 1);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1957_ = v___x_1941_;
v_isShared_1958_ = v_isSharedCheck_1965_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_inc(v_a_1954_);
lean_dec(v___x_1941_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1965_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v_a_1955_);
v___x_1960_ = v___x_1935_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1955_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v_trace_1876_);
lean_ctor_set(v_reuseFailAlloc_1964_, 2, v_buildTime_1877_);
lean_ctor_set_uint8(v_reuseFailAlloc_1964_, sizeof(void*)*3, v_action_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1964_, sizeof(void*)*3 + 1, v_wantsRebuild_1875_);
v___x_1960_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
lean_object* v___x_1962_; 
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 1, v___x_1960_);
v___x_1962_ = v___x_1957_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1954_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v___x_1960_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
}
}
else
{
uint8_t v___x_1970_; 
v___x_1970_ = 0;
v___y_1879_ = v___x_1970_;
goto v___jp_1878_;
}
}
v___jp_1878_:
{
lean_object* v___x_1880_; 
lean_inc_ref(v___y_1688_);
v___x_1880_ = l_Lake_createParentDirs(v___y_1688_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v___x_1881_; lean_object* v___x_1882_; uint8_t v___x_1883_; lean_object* v___x_1884_; 
lean_dec_ref_known(v___x_1880_, 1);
v___x_1881_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__9));
lean_inc_ref(v___y_1688_);
v___x_1882_ = l_System_FilePath_addExtension(v___y_1688_, v___x_1881_);
v___x_1883_ = 1;
v___x_1884_ = lean_io_prim_handle_mk(v___x_1882_, v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; uint8_t v___x_1888_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1886_ = lean_unsigned_to_nat(0u);
v___x_1887_ = lean_array_get_size(v_oFiles_1689_);
v___x_1888_ = lean_nat_dec_lt(v___x_1886_, v___x_1887_);
if (v___x_1888_ == 0)
{
lean_dec(v_a_1885_);
lean_dec_ref(v_oFiles_1689_);
v___y_1701_ = v___y_1879_;
v___y_1702_ = v___x_1882_;
v_a_1703_ = v___y_1698_;
goto v___jp_1700_;
}
else
{
lean_object* v___x_1889_; uint8_t v___x_1890_; 
v___x_1889_ = lean_box(0);
v___x_1890_ = lean_nat_dec_le(v___x_1887_, v___x_1887_);
if (v___x_1890_ == 0)
{
if (v___x_1888_ == 0)
{
lean_dec(v_a_1885_);
lean_dec_ref(v_oFiles_1689_);
v___y_1701_ = v___y_1879_;
v___y_1702_ = v___x_1882_;
v_a_1703_ = v___y_1698_;
goto v___jp_1700_;
}
else
{
size_t v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = lean_usize_of_nat(v___x_1887_);
v___x_1892_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1885_, v_oFiles_1689_, v___x_1692_, v___x_1891_, v___x_1889_, v___y_1698_);
lean_dec_ref(v_oFiles_1689_);
lean_dec(v_a_1885_);
v___y_1751_ = v___x_1882_;
v___y_1752_ = v___y_1879_;
v___y_1753_ = v___x_1892_;
goto v___jp_1750_;
}
}
else
{
size_t v___x_1893_; lean_object* v___x_1894_; 
v___x_1893_ = lean_usize_of_nat(v___x_1887_);
v___x_1894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1885_, v_oFiles_1689_, v___x_1692_, v___x_1893_, v___x_1889_, v___y_1698_);
lean_dec_ref(v_oFiles_1689_);
lean_dec(v_a_1885_);
v___y_1751_ = v___x_1882_;
v___y_1752_ = v___y_1879_;
v___y_1753_ = v___x_1894_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1908_; 
lean_inc(v_buildTime_1877_);
lean_inc_ref(v_trace_1876_);
lean_inc_ref(v_log_1873_);
lean_dec_ref(v___x_1882_);
lean_dec_ref(v_oFiles_1689_);
lean_dec_ref(v___y_1688_);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1908_ == 0)
{
lean_object* v_unused_1909_; lean_object* v_unused_1910_; lean_object* v_unused_1911_; 
v_unused_1909_ = lean_ctor_get(v___y_1698_, 2);
lean_dec(v_unused_1909_);
v_unused_1910_ = lean_ctor_get(v___y_1698_, 1);
lean_dec(v_unused_1910_);
v_unused_1911_ = lean_ctor_get(v___y_1698_, 0);
lean_dec(v_unused_1911_);
v___x_1896_ = v___y_1698_;
v_isShared_1897_ = v_isSharedCheck_1908_;
goto v_resetjp_1895_;
}
else
{
lean_dec(v___y_1698_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1908_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v_a_1898_; lean_object* v___x_1899_; uint8_t v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1905_; 
v_a_1898_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1898_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1899_ = lean_io_error_to_string(v_a_1898_);
v___x_1900_ = 3;
v___x_1901_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1901_, 0, v___x_1899_);
lean_ctor_set_uint8(v___x_1901_, sizeof(void*)*1, v___x_1900_);
v___x_1902_ = lean_array_get_size(v_log_1873_);
v___x_1903_ = lean_array_push(v_log_1873_, v___x_1901_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 0, v___x_1903_);
v___x_1905_ = v___x_1896_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1907_, 1, v_trace_1876_);
lean_ctor_set(v_reuseFailAlloc_1907_, 2, v_buildTime_1877_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*3, v_action_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1907_, sizeof(void*)*3 + 1, v_wantsRebuild_1875_);
v___x_1905_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1906_; 
v___x_1906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1902_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
return v___x_1906_;
}
}
}
}
else
{
lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1925_; 
lean_inc(v_buildTime_1877_);
lean_inc_ref(v_trace_1876_);
lean_inc_ref(v_log_1873_);
lean_dec_ref(v_oFiles_1689_);
lean_dec_ref(v___y_1688_);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1925_ == 0)
{
lean_object* v_unused_1926_; lean_object* v_unused_1927_; lean_object* v_unused_1928_; 
v_unused_1926_ = lean_ctor_get(v___y_1698_, 2);
lean_dec(v_unused_1926_);
v_unused_1927_ = lean_ctor_get(v___y_1698_, 1);
lean_dec(v_unused_1927_);
v_unused_1928_ = lean_ctor_get(v___y_1698_, 0);
lean_dec(v_unused_1928_);
v___x_1913_ = v___y_1698_;
v_isShared_1914_ = v_isSharedCheck_1925_;
goto v_resetjp_1912_;
}
else
{
lean_dec(v___y_1698_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1925_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v_a_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1922_; 
v_a_1915_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1916_ = lean_io_error_to_string(v_a_1915_);
v___x_1917_ = 3;
v___x_1918_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1918_, 0, v___x_1916_);
lean_ctor_set_uint8(v___x_1918_, sizeof(void*)*1, v___x_1917_);
v___x_1919_ = lean_array_get_size(v_log_1873_);
v___x_1920_ = lean_array_push(v_log_1873_, v___x_1918_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 0, v___x_1920_);
v___x_1922_ = v___x_1913_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1920_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v_trace_1876_);
lean_ctor_set(v_reuseFailAlloc_1924_, 2, v_buildTime_1877_);
lean_ctor_set_uint8(v_reuseFailAlloc_1924_, sizeof(void*)*3, v_action_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1924_, sizeof(void*)*3 + 1, v_wantsRebuild_1875_);
v___x_1922_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1919_);
lean_ctor_set(v___x_1923_, 1, v___x_1922_);
return v___x_1923_;
}
}
}
}
}
}
v___jp_1700_:
{
lean_object* v___x_1704_; lean_object* v_log_1705_; uint8_t v_action_1706_; uint8_t v_wantsRebuild_1707_; lean_object* v_trace_1708_; lean_object* v_buildTime_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1749_; 
v___x_1704_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
v_log_1705_ = lean_ctor_get(v_a_1703_, 0);
v_action_1706_ = lean_ctor_get_uint8(v_a_1703_, sizeof(void*)*3);
v_wantsRebuild_1707_ = lean_ctor_get_uint8(v_a_1703_, sizeof(void*)*3 + 1);
v_trace_1708_ = lean_ctor_get(v_a_1703_, 1);
v_buildTime_1709_ = lean_ctor_get(v_a_1703_, 2);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_a_1703_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1711_ = v_a_1703_;
v_isShared_1712_ = v_isSharedCheck_1749_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_buildTime_1709_);
lean_inc(v_trace_1708_);
lean_inc(v_log_1705_);
lean_dec(v_a_1703_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1749_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v___x_1713_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v___x_1714_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4));
v___x_1715_ = lean_unsigned_to_nat(5u);
v___x_1716_ = lean_mk_empty_array_with_capacity(v___x_1715_);
lean_dec_ref(v___x_1716_);
v___x_1717_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6);
v___x_1718_ = lean_array_push(v___x_1717_, v___y_1688_);
v___x_1719_ = lean_array_push(v___x_1718_, v___x_1714_);
v___x_1720_ = lean_array_push(v___x_1719_, v___y_1702_);
v___x_1721_ = lean_box(0);
v___x_1722_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7));
v___x_1723_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1723_, 0, v___x_1704_);
lean_ctor_set(v___x_1723_, 1, v___x_1713_);
lean_ctor_set(v___x_1723_, 2, v___x_1720_);
lean_ctor_set(v___x_1723_, 3, v___x_1721_);
lean_ctor_set(v___x_1723_, 4, v___x_1722_);
lean_ctor_set_uint8(v___x_1723_, sizeof(void*)*5, v___x_1691_);
lean_ctor_set_uint8(v___x_1723_, sizeof(void*)*5 + 1, v___y_1701_);
v___x_1724_ = l_Lake_proc(v___x_1723_, v___y_1701_, v_log_1705_);
if (lean_obj_tag(v___x_1724_) == 0)
{
lean_object* v_a_1725_; lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1736_; 
v_a_1725_ = lean_ctor_get(v___x_1724_, 0);
v_a_1726_ = lean_ctor_get(v___x_1724_, 1);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1728_ = v___x_1724_;
v_isShared_1729_ = v_isSharedCheck_1736_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_inc(v_a_1725_);
lean_dec(v___x_1724_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1736_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v_a_1726_);
v___x_1731_ = v___x_1711_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1726_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v_trace_1708_);
lean_ctor_set(v_reuseFailAlloc_1735_, 2, v_buildTime_1709_);
lean_ctor_set_uint8(v_reuseFailAlloc_1735_, sizeof(void*)*3, v_action_1706_);
lean_ctor_set_uint8(v_reuseFailAlloc_1735_, sizeof(void*)*3 + 1, v_wantsRebuild_1707_);
v___x_1731_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1733_; 
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 1, v___x_1731_);
v___x_1733_ = v___x_1728_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_a_1725_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1748_; 
v_a_1737_ = lean_ctor_get(v___x_1724_, 0);
v_a_1738_ = lean_ctor_get(v___x_1724_, 1);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1740_ = v___x_1724_;
v_isShared_1741_ = v_isSharedCheck_1748_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_inc(v_a_1737_);
lean_dec(v___x_1724_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1748_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v_a_1738_);
v___x_1743_ = v___x_1711_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1738_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v_trace_1708_);
lean_ctor_set(v_reuseFailAlloc_1747_, 2, v_buildTime_1709_);
lean_ctor_set_uint8(v_reuseFailAlloc_1747_, sizeof(void*)*3, v_action_1706_);
lean_ctor_set_uint8(v_reuseFailAlloc_1747_, sizeof(void*)*3 + 1, v_wantsRebuild_1707_);
v___x_1743_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
lean_object* v___x_1745_; 
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 1, v___x_1743_);
v___x_1745_ = v___x_1740_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1737_);
lean_ctor_set(v_reuseFailAlloc_1746_, 1, v___x_1743_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
}
}
v___jp_1750_:
{
if (lean_obj_tag(v___y_1753_) == 0)
{
lean_object* v_a_1754_; 
v_a_1754_ = lean_ctor_get(v___y_1753_, 1);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___y_1753_, 2);
v___y_1701_ = v___y_1752_;
v___y_1702_ = v___y_1751_;
v_a_1703_ = v_a_1754_;
goto v___jp_1700_;
}
else
{
lean_dec_ref(v___y_1751_);
lean_dec_ref(v___y_1688_);
return v___y_1753_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object* v_bootstrap_1971_, lean_object* v___y_1972_, lean_object* v_oFiles_1973_, lean_object* v_shouldExport_1974_, lean_object* v___x_1975_, lean_object* v___x_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
uint8_t v_bootstrap_boxed_1984_; uint8_t v_shouldExport_boxed_1985_; uint8_t v___x_6900__boxed_1986_; size_t v___x_6901__boxed_1987_; lean_object* v_res_1988_; 
v_bootstrap_boxed_1984_ = lean_unbox(v_bootstrap_1971_);
v_shouldExport_boxed_1985_ = lean_unbox(v_shouldExport_1974_);
v___x_6900__boxed_1986_ = lean_unbox(v___x_1975_);
v___x_6901__boxed_1987_ = lean_unbox_usize(v___x_1976_);
lean_dec(v___x_1976_);
v_res_1988_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(v_bootstrap_boxed_1984_, v___y_1972_, v_oFiles_1973_, v_shouldExport_boxed_1985_, v___x_6900__boxed_1986_, v___x_6901__boxed_1987_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t v_bootstrap_1989_, lean_object* v___y_1990_, uint8_t v_shouldExport_1991_, uint8_t v___x_1992_, size_t v___x_1993_, lean_object* v_oFiles_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___y_2006_; uint8_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2002_ = lean_box(v_bootstrap_1989_);
v___x_2003_ = lean_box(v_shouldExport_1991_);
v___x_2004_ = lean_box(v___x_1992_);
v___x_2005_ = lean_box_usize(v___x_1993_);
lean_inc_ref(v___y_1990_);
v___y_2006_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed), 13, 6);
lean_closure_set(v___y_2006_, 0, v___x_2002_);
lean_closure_set(v___y_2006_, 1, v___y_1990_);
lean_closure_set(v___y_2006_, 2, v_oFiles_1994_);
lean_closure_set(v___y_2006_, 3, v___x_2003_);
lean_closure_set(v___y_2006_, 4, v___x_2004_);
lean_closure_set(v___y_2006_, 5, v___x_2005_);
v___x_2007_ = 0;
v___x_2008_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_2009_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1990_, v___y_2006_, v___x_2007_, v___x_2008_, v___x_1992_, v___x_2007_, v___x_2007_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
if (lean_obj_tag(v___x_2009_) == 0)
{
lean_object* v_a_2010_; lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2019_; 
v_a_2010_ = lean_ctor_get(v___x_2009_, 0);
v_a_2011_ = lean_ctor_get(v___x_2009_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2013_ = v___x_2009_;
v_isShared_2014_ = v_isSharedCheck_2019_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_inc(v_a_2010_);
lean_dec(v___x_2009_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2019_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v_path_2015_; lean_object* v___x_2017_; 
v_path_2015_ = lean_ctor_get(v_a_2010_, 1);
lean_inc_ref(v_path_2015_);
lean_dec(v_a_2010_);
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 0, v_path_2015_);
v___x_2017_ = v___x_2013_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_path_2015_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v_a_2011_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
v_a_2020_ = lean_ctor_get(v___x_2009_, 0);
v_a_2021_ = lean_ctor_get(v___x_2009_, 1);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2009_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_inc(v_a_2020_);
lean_dec(v___x_2009_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2020_);
lean_ctor_set(v_reuseFailAlloc_2027_, 1, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object* v_bootstrap_2029_, lean_object* v___y_2030_, lean_object* v_shouldExport_2031_, lean_object* v___x_2032_, lean_object* v___x_2033_, lean_object* v_oFiles_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
uint8_t v_bootstrap_boxed_2042_; uint8_t v_shouldExport_boxed_2043_; uint8_t v___x_7400__boxed_2044_; size_t v___x_7401__boxed_2045_; lean_object* v_res_2046_; 
v_bootstrap_boxed_2042_ = lean_unbox(v_bootstrap_2029_);
v_shouldExport_boxed_2043_ = lean_unbox(v_shouldExport_2031_);
v___x_7400__boxed_2044_ = lean_unbox(v___x_2032_);
v___x_7401__boxed_2045_ = lean_unbox_usize(v___x_2033_);
lean_dec(v___x_2033_);
v_res_2046_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(v_bootstrap_boxed_2042_, v___y_2030_, v_shouldExport_boxed_2043_, v___x_7400__boxed_2044_, v___x_7401__boxed_2045_, v_oFiles_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec(v___y_2037_);
lean_dec(v___y_2036_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object* v_a_2047_, size_t v_sz_2048_, size_t v_i_2049_, lean_object* v_bs_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
uint8_t v___x_2058_; 
v___x_2058_ = lean_usize_dec_lt(v_i_2049_, v_sz_2048_);
if (v___x_2058_ == 0)
{
lean_object* v___x_2059_; 
lean_dec_ref(v___y_2051_);
lean_dec_ref(v_a_2047_);
v___x_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2059_, 0, v_bs_2050_);
lean_ctor_set(v___x_2059_, 1, v___y_2056_);
return v___x_2059_;
}
else
{
lean_object* v_v_2060_; lean_object* v___x_2061_; 
v_v_2060_ = lean_array_uget_borrowed(v_bs_2050_, v_i_2049_);
lean_inc_ref(v___y_2051_);
lean_inc_ref(v_a_2047_);
lean_inc(v_v_2060_);
v___x_2061_ = l_Lake_ModuleFacet_fetch___redArg(v_v_2060_, v_a_2047_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; lean_object* v_a_2063_; lean_object* v___x_2064_; lean_object* v_bs_x27_2065_; size_t v___x_2066_; size_t v___x_2067_; lean_object* v___x_2068_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
lean_inc(v_a_2062_);
v_a_2063_ = lean_ctor_get(v___x_2061_, 1);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2061_, 2);
v___x_2064_ = lean_unsigned_to_nat(0u);
v_bs_x27_2065_ = lean_array_uset(v_bs_2050_, v_i_2049_, v___x_2064_);
v___x_2066_ = ((size_t)1ULL);
v___x_2067_ = lean_usize_add(v_i_2049_, v___x_2066_);
v___x_2068_ = lean_array_uset(v_bs_x27_2065_, v_i_2049_, v_a_2062_);
v_i_2049_ = v___x_2067_;
v_bs_2050_ = v___x_2068_;
v___y_2056_ = v_a_2063_;
goto _start;
}
else
{
lean_object* v_a_2070_; lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec_ref(v___y_2051_);
lean_dec_ref(v_bs_2050_);
lean_dec_ref(v_a_2047_);
v_a_2070_ = lean_ctor_get(v___x_2061_, 0);
v_a_2071_ = lean_ctor_get(v___x_2061_, 1);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2061_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_inc(v_a_2070_);
lean_dec(v___x_2061_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2070_);
lean_ctor_set(v_reuseFailAlloc_2077_, 1, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object* v_a_2079_, lean_object* v_sz_2080_, lean_object* v_i_2081_, lean_object* v_bs_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
size_t v_sz_boxed_2090_; size_t v_i_boxed_2091_; lean_object* v_res_2092_; 
v_sz_boxed_2090_ = lean_unbox_usize(v_sz_2080_);
lean_dec(v_sz_2080_);
v_i_boxed_2091_ = lean_unbox_usize(v_i_2081_);
lean_dec(v_i_2081_);
v_res_2092_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v_a_2079_, v_sz_boxed_2090_, v_i_boxed_2091_, v_bs_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec(v___y_2085_);
lean_dec(v___y_2084_);
return v_res_2092_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t v_shouldExport_2093_, lean_object* v_as_2094_, size_t v_i_2095_, size_t v_stop_2096_, lean_object* v_b_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v___x_2105_; 
v___x_2105_ = lean_usize_dec_eq(v_i_2095_, v_stop_2096_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; lean_object* v_lib_2107_; lean_object* v_config_2108_; lean_object* v_nativeFacets_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; size_t v_sz_2112_; size_t v___x_2113_; lean_object* v___x_2114_; 
v___x_2106_ = lean_array_uget_borrowed(v_as_2094_, v_i_2095_);
v_lib_2107_ = lean_ctor_get(v___x_2106_, 0);
v_config_2108_ = lean_ctor_get(v_lib_2107_, 2);
v_nativeFacets_2109_ = lean_ctor_get(v_config_2108_, 8);
v___x_2110_ = lean_box(v_shouldExport_2093_);
lean_inc_ref(v_nativeFacets_2109_);
v___x_2111_ = lean_apply_1(v_nativeFacets_2109_, v___x_2110_);
v_sz_2112_ = lean_array_size(v___x_2111_);
v___x_2113_ = ((size_t)0ULL);
lean_inc_ref(v___y_2098_);
lean_inc(v___x_2106_);
v___x_2114_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2106_, v_sz_2112_, v___x_2113_, v___x_2111_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v_a_2116_; lean_object* v___x_2117_; size_t v___x_2118_; size_t v___x_2119_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
v_a_2116_ = lean_ctor_get(v___x_2114_, 1);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2114_, 2);
v___x_2117_ = l_Array_append___redArg(v_b_2097_, v_a_2115_);
lean_dec(v_a_2115_);
v___x_2118_ = ((size_t)1ULL);
v___x_2119_ = lean_usize_add(v_i_2095_, v___x_2118_);
v_i_2095_ = v___x_2119_;
v_b_2097_ = v___x_2117_;
v___y_2103_ = v_a_2116_;
goto _start;
}
else
{
lean_dec_ref(v___y_2098_);
lean_dec_ref(v_b_2097_);
return v___x_2114_;
}
}
else
{
lean_object* v___x_2121_; 
lean_dec_ref(v___y_2098_);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_b_2097_);
lean_ctor_set(v___x_2121_, 1, v___y_2103_);
return v___x_2121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object* v_shouldExport_2122_, lean_object* v_as_2123_, lean_object* v_i_2124_, lean_object* v_stop_2125_, lean_object* v_b_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_){
_start:
{
uint8_t v_shouldExport_boxed_2134_; size_t v_i_boxed_2135_; size_t v_stop_boxed_2136_; lean_object* v_res_2137_; 
v_shouldExport_boxed_2134_ = lean_unbox(v_shouldExport_2122_);
v_i_boxed_2135_ = lean_unbox_usize(v_i_2124_);
lean_dec(v_i_2124_);
v_stop_boxed_2136_ = lean_unbox_usize(v_stop_2125_);
lean_dec(v_stop_2125_);
v_res_2137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_boxed_2134_, v_as_2123_, v_i_boxed_2135_, v_stop_boxed_2136_, v_b_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v_as_2123_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object* v___x_2138_, lean_object* v___x_2139_, lean_object* v_config_2140_, lean_object* v_config_2141_, lean_object* v_pkg_2142_, uint8_t v_shouldExport_2143_, uint8_t v___x_2144_, lean_object* v___x_2145_, lean_object* v_dir_2146_, lean_object* v_self_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v___y_2156_; lean_object* v___y_2157_; uint8_t v___y_2158_; size_t v___y_2159_; lean_object* v___y_2160_; lean_object* v___y_2161_; lean_object* v_a_2176_; lean_object* v_a_2177_; lean_object* v___y_2220_; lean_object* v___x_2232_; 
lean_inc_ref(v___y_2148_);
lean_inc_ref(v___y_2152_);
lean_inc(v___y_2151_);
lean_inc(v___y_2150_);
lean_inc(v___x_2139_);
v___x_2232_ = lean_apply_7(v___y_2148_, v___x_2138_, v___x_2139_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_, lean_box(0));
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; lean_object* v_a_2234_; lean_object* v___x_2235_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_a_2233_);
v_a_2234_ = lean_ctor_get(v___x_2232_, 1);
lean_inc(v_a_2234_);
lean_dec_ref_known(v___x_2232_, 2);
v___x_2235_ = l_Lake_Job_await___redArg(v_a_2233_, v_a_2234_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; lean_object* v_a_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; uint8_t v___x_2241_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_a_2236_);
v_a_2237_ = lean_ctor_get(v___x_2235_, 1);
lean_inc(v_a_2237_);
lean_dec_ref_known(v___x_2235_, 2);
v___x_2238_ = lean_unsigned_to_nat(0u);
v___x_2239_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_2240_ = lean_array_get_size(v_a_2236_);
v___x_2241_ = lean_nat_dec_lt(v___x_2238_, v___x_2240_);
if (v___x_2241_ == 0)
{
lean_dec(v_a_2236_);
v_a_2176_ = v___x_2239_;
v_a_2177_ = v_a_2237_;
goto v___jp_2175_;
}
else
{
uint8_t v___x_2242_; 
v___x_2242_ = lean_nat_dec_le(v___x_2240_, v___x_2240_);
if (v___x_2242_ == 0)
{
if (v___x_2241_ == 0)
{
lean_dec(v_a_2236_);
v_a_2176_ = v___x_2239_;
v_a_2177_ = v_a_2237_;
goto v___jp_2175_;
}
else
{
size_t v___x_2243_; size_t v___x_2244_; lean_object* v___x_2245_; 
v___x_2243_ = ((size_t)0ULL);
v___x_2244_ = lean_usize_of_nat(v___x_2240_);
lean_inc_ref(v___y_2148_);
v___x_2245_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2143_, v_a_2236_, v___x_2243_, v___x_2244_, v___x_2239_, v___y_2148_, v___x_2139_, v___y_2150_, v___y_2151_, v___y_2152_, v_a_2237_);
lean_dec(v_a_2236_);
v___y_2220_ = v___x_2245_;
goto v___jp_2219_;
}
}
else
{
size_t v___x_2246_; size_t v___x_2247_; lean_object* v___x_2248_; 
v___x_2246_ = ((size_t)0ULL);
v___x_2247_ = lean_usize_of_nat(v___x_2240_);
lean_inc_ref(v___y_2148_);
v___x_2248_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2143_, v_a_2236_, v___x_2246_, v___x_2247_, v___x_2239_, v___y_2148_, v___x_2139_, v___y_2150_, v___y_2151_, v___y_2152_, v_a_2237_);
lean_dec(v_a_2236_);
v___y_2220_ = v___x_2248_;
goto v___jp_2219_;
}
}
}
else
{
lean_object* v_a_2249_; lean_object* v_a_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2257_; 
lean_dec_ref(v___y_2148_);
lean_dec_ref(v_self_2147_);
lean_dec_ref(v_dir_2146_);
lean_dec(v___x_2145_);
lean_dec_ref(v_pkg_2142_);
lean_dec_ref(v_config_2140_);
lean_dec(v___x_2139_);
v_a_2249_ = lean_ctor_get(v___x_2235_, 0);
v_a_2250_ = lean_ctor_get(v___x_2235_, 1);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2252_ = v___x_2235_;
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_a_2250_);
lean_inc(v_a_2249_);
lean_dec(v___x_2235_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2255_; 
if (v_isShared_2253_ == 0)
{
v___x_2255_ = v___x_2252_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_a_2249_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_a_2250_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
else
{
lean_object* v_a_2258_; lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_dec_ref(v___y_2148_);
lean_dec_ref(v_self_2147_);
lean_dec_ref(v_dir_2146_);
lean_dec(v___x_2145_);
lean_dec_ref(v_pkg_2142_);
lean_dec_ref(v_config_2140_);
lean_dec(v___x_2139_);
v_a_2258_ = lean_ctor_get(v___x_2232_, 0);
v_a_2259_ = lean_ctor_get(v___x_2232_, 1);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2232_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_inc(v_a_2258_);
lean_dec(v___x_2232_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2258_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
v___jp_2155_:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___f_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2162_ = lean_box(v___y_2158_);
v___x_2163_ = lean_box(v_shouldExport_2143_);
v___x_2164_ = lean_box(v___x_2144_);
v___x_2165_ = lean_box_usize(v___y_2159_);
v___f_2166_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2166_, 0, v___x_2162_);
lean_closure_set(v___f_2166_, 1, v___y_2161_);
lean_closure_set(v___f_2166_, 2, v___x_2163_);
lean_closure_set(v___f_2166_, 3, v___x_2164_);
lean_closure_set(v___f_2166_, 4, v___x_2165_);
v___x_2167_ = l_Array_append___redArg(v___y_2160_, v___y_2157_);
lean_dec_ref(v___y_2157_);
v___x_2168_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_2169_ = l_Lake_Job_collectArray___redArg(v___x_2167_, v___x_2168_);
lean_dec_ref(v___x_2167_);
v___x_2170_ = lean_unsigned_to_nat(0u);
v___x_2171_ = 0;
v___x_2172_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2173_ = l_Lake_Job_mapM___redArg(v___x_2145_, v___x_2169_, v___f_2166_, v___x_2170_, v___x_2171_, v___y_2148_, v___x_2139_, v___y_2150_, v___y_2151_, v___y_2152_, v___x_2172_);
lean_dec(v___x_2139_);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
lean_ctor_set(v___x_2174_, 1, v___y_2156_);
return v___x_2174_;
}
v___jp_2175_:
{
lean_object* v_toLeanConfig_2178_; lean_object* v_toLeanConfig_2179_; uint8_t v_bootstrap_2180_; lean_object* v_buildDir_2181_; lean_object* v_nativeLibDir_2182_; lean_object* v_moreLinkObjs_2183_; lean_object* v_moreLinkObjs_2184_; lean_object* v___x_2185_; size_t v_sz_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v_toLeanConfig_2178_ = lean_ctor_get(v_config_2140_, 1);
lean_inc_ref(v_toLeanConfig_2178_);
v_toLeanConfig_2179_ = lean_ctor_get(v_config_2141_, 0);
v_bootstrap_2180_ = lean_ctor_get_uint8(v_config_2140_, sizeof(void*)*27);
v_buildDir_2181_ = lean_ctor_get(v_config_2140_, 5);
lean_inc_ref(v_buildDir_2181_);
v_nativeLibDir_2182_ = lean_ctor_get(v_config_2140_, 7);
lean_inc_ref(v_nativeLibDir_2182_);
lean_dec_ref(v_config_2140_);
v_moreLinkObjs_2183_ = lean_ctor_get(v_toLeanConfig_2178_, 6);
lean_inc_ref(v_moreLinkObjs_2183_);
lean_dec_ref(v_toLeanConfig_2178_);
v_moreLinkObjs_2184_ = lean_ctor_get(v_toLeanConfig_2179_, 6);
v___x_2185_ = l_Array_append___redArg(v_moreLinkObjs_2183_, v_moreLinkObjs_2184_);
v_sz_2186_ = lean_array_size(v___x_2185_);
v___x_2187_ = ((size_t)0ULL);
lean_inc_ref(v___y_2148_);
v___x_2188_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v_pkg_2142_, v_sz_2186_, v___x_2187_, v___x_2185_, v___y_2148_, v___x_2139_, v___y_2150_, v___y_2151_, v___y_2152_, v_a_2177_);
if (lean_obj_tag(v___x_2188_) == 0)
{
if (v_shouldExport_2143_ == 0)
{
lean_object* v_a_2189_; lean_object* v_a_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v_a_2189_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_a_2189_);
v_a_2190_ = lean_ctor_get(v___x_2188_, 1);
lean_inc(v_a_2190_);
lean_dec_ref_known(v___x_2188_, 2);
v___x_2191_ = l_System_FilePath_normalize(v_buildDir_2181_);
v___x_2192_ = l_Lake_joinRelative(v_dir_2146_, v___x_2191_);
v___x_2193_ = l_System_FilePath_normalize(v_nativeLibDir_2182_);
v___x_2194_ = l_Lake_joinRelative(v___x_2192_, v___x_2193_);
v___x_2195_ = l_Lake_LeanLib_libName(v_self_2147_);
v___x_2196_ = l_Lake_nameToStaticLib(v___x_2195_, v_shouldExport_2143_);
v___x_2197_ = l_Lake_joinRelative(v___x_2194_, v___x_2196_);
v___y_2156_ = v_a_2190_;
v___y_2157_ = v_a_2189_;
v___y_2158_ = v_bootstrap_2180_;
v___y_2159_ = v___x_2187_;
v___y_2160_ = v_a_2176_;
v___y_2161_ = v___x_2197_;
goto v___jp_2155_;
}
else
{
lean_object* v_a_2198_; lean_object* v_a_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v_a_2198_ = lean_ctor_get(v___x_2188_, 0);
lean_inc(v_a_2198_);
v_a_2199_ = lean_ctor_get(v___x_2188_, 1);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2188_, 2);
v___x_2200_ = l_System_FilePath_normalize(v_buildDir_2181_);
v___x_2201_ = l_Lake_joinRelative(v_dir_2146_, v___x_2200_);
v___x_2202_ = l_System_FilePath_normalize(v_nativeLibDir_2182_);
v___x_2203_ = l_Lake_joinRelative(v___x_2201_, v___x_2202_);
v___x_2204_ = l_Lake_LeanLib_libName(v_self_2147_);
v___x_2205_ = 0;
v___x_2206_ = l_Lake_nameToStaticLib(v___x_2204_, v___x_2205_);
v___x_2207_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_2208_ = l_System_FilePath_addExtension(v___x_2206_, v___x_2207_);
v___x_2209_ = l_Lake_joinRelative(v___x_2203_, v___x_2208_);
v___y_2156_ = v_a_2199_;
v___y_2157_ = v_a_2198_;
v___y_2158_ = v_bootstrap_2180_;
v___y_2159_ = v___x_2187_;
v___y_2160_ = v_a_2176_;
v___y_2161_ = v___x_2209_;
goto v___jp_2155_;
}
}
else
{
lean_object* v_a_2210_; lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
lean_dec_ref(v_nativeLibDir_2182_);
lean_dec_ref(v_buildDir_2181_);
lean_dec_ref(v_a_2176_);
lean_dec_ref(v___y_2148_);
lean_dec_ref(v_self_2147_);
lean_dec_ref(v_dir_2146_);
lean_dec(v___x_2145_);
lean_dec(v___x_2139_);
v_a_2210_ = lean_ctor_get(v___x_2188_, 0);
v_a_2211_ = lean_ctor_get(v___x_2188_, 1);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2188_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2188_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_inc(v_a_2210_);
lean_dec(v___x_2188_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2210_);
lean_ctor_set(v_reuseFailAlloc_2217_, 1, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
v___jp_2219_:
{
if (lean_obj_tag(v___y_2220_) == 0)
{
lean_object* v_a_2221_; lean_object* v_a_2222_; 
v_a_2221_ = lean_ctor_get(v___y_2220_, 0);
lean_inc(v_a_2221_);
v_a_2222_ = lean_ctor_get(v___y_2220_, 1);
lean_inc(v_a_2222_);
lean_dec_ref_known(v___y_2220_, 2);
v_a_2176_ = v_a_2221_;
v_a_2177_ = v_a_2222_;
goto v___jp_2175_;
}
else
{
lean_object* v_a_2223_; lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
lean_dec_ref(v___y_2148_);
lean_dec_ref(v_self_2147_);
lean_dec_ref(v_dir_2146_);
lean_dec(v___x_2145_);
lean_dec_ref(v_pkg_2142_);
lean_dec_ref(v_config_2140_);
lean_dec(v___x_2139_);
v_a_2223_ = lean_ctor_get(v___y_2220_, 0);
v_a_2224_ = lean_ctor_get(v___y_2220_, 1);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___y_2220_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___y_2220_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_inc(v_a_2223_);
lean_dec(v___y_2220_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2223_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object** _args){
lean_object* v___x_2267_ = _args[0];
lean_object* v___x_2268_ = _args[1];
lean_object* v_config_2269_ = _args[2];
lean_object* v_config_2270_ = _args[3];
lean_object* v_pkg_2271_ = _args[4];
lean_object* v_shouldExport_2272_ = _args[5];
lean_object* v___x_2273_ = _args[6];
lean_object* v___x_2274_ = _args[7];
lean_object* v_dir_2275_ = _args[8];
lean_object* v_self_2276_ = _args[9];
lean_object* v___y_2277_ = _args[10];
lean_object* v___y_2278_ = _args[11];
lean_object* v___y_2279_ = _args[12];
lean_object* v___y_2280_ = _args[13];
lean_object* v___y_2281_ = _args[14];
lean_object* v___y_2282_ = _args[15];
lean_object* v___y_2283_ = _args[16];
_start:
{
uint8_t v_shouldExport_boxed_2284_; uint8_t v___x_7602__boxed_2285_; lean_object* v_res_2286_; 
v_shouldExport_boxed_2284_ = lean_unbox(v_shouldExport_2272_);
v___x_7602__boxed_2285_ = lean_unbox(v___x_2273_);
v_res_2286_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(v___x_2267_, v___x_2268_, v_config_2269_, v_config_2270_, v_pkg_2271_, v_shouldExport_boxed_2284_, v___x_7602__boxed_2285_, v___x_2274_, v_dir_2275_, v_self_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec(v_config_2270_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object* v___y_2287_, lean_object* v_self_2288_, uint8_t v_shouldExport_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_toBuildConfig_2296_; lean_object* v_registeredJobs_2297_; uint8_t v_verbosity_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; uint8_t v___x_2301_; uint8_t v___x_2302_; lean_object* v___y_2304_; 
v_toBuildConfig_2296_ = lean_ctor_get(v_a_2293_, 0);
v_registeredJobs_2297_ = lean_ctor_get(v_a_2293_, 3);
v_verbosity_2298_ = lean_ctor_get_uint8(v_toBuildConfig_2296_, sizeof(void*)*3 + 3);
v___x_2299_ = l_Lake_instDataKindFilePath;
v___x_2300_ = 2;
v___x_2301_ = l_Lake_instDecidableEqVerbosity(v_verbosity_2298_, v___x_2300_);
v___x_2302_ = 1;
if (v___x_2301_ == 0)
{
lean_object* v___x_2349_; 
v___x_2349_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_2304_ = v___x_2349_;
goto v___jp_2303_;
}
else
{
if (v_shouldExport_2289_ == 0)
{
lean_object* v___x_2350_; 
v___x_2350_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___y_2304_ = v___x_2350_;
goto v___jp_2303_;
}
else
{
lean_object* v___x_2351_; 
v___x_2351_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_2304_ = v___x_2351_;
goto v___jp_2303_;
}
}
v___jp_2303_:
{
lean_object* v_pkg_2305_; lean_object* v_name_2306_; lean_object* v_config_2307_; lean_object* v_keyName_2308_; lean_object* v_dir_2309_; lean_object* v_config_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___f_2318_; lean_object* v___x_2319_; 
v_pkg_2305_ = lean_ctor_get(v_self_2288_, 0);
lean_inc_ref_n(v_pkg_2305_, 2);
v_name_2306_ = lean_ctor_get(v_self_2288_, 1);
lean_inc_n(v_name_2306_, 2);
v_config_2307_ = lean_ctor_get(v_self_2288_, 2);
lean_inc(v_config_2307_);
v_keyName_2308_ = lean_ctor_get(v_pkg_2305_, 2);
v_dir_2309_ = lean_ctor_get(v_pkg_2305_, 4);
lean_inc_ref(v_dir_2309_);
v_config_2310_ = lean_ctor_get(v_pkg_2305_, 6);
lean_inc_ref(v_config_2310_);
v___x_2311_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_2308_);
v___x_2312_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2312_, 0, v_keyName_2308_);
lean_ctor_set(v___x_2312_, 1, v_name_2306_);
v___x_2313_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_2288_);
v___x_2314_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
lean_ctor_set(v___x_2314_, 2, v_self_2288_);
lean_ctor_set(v___x_2314_, 3, v___x_2311_);
v___x_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2315_, 0, v_pkg_2305_);
v___x_2316_ = lean_box(v_shouldExport_2289_);
v___x_2317_ = lean_box(v___x_2302_);
v___f_2318_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed), 17, 10);
lean_closure_set(v___f_2318_, 0, v___x_2314_);
lean_closure_set(v___f_2318_, 1, v___x_2315_);
lean_closure_set(v___f_2318_, 2, v_config_2310_);
lean_closure_set(v___f_2318_, 3, v_config_2307_);
lean_closure_set(v___f_2318_, 4, v_pkg_2305_);
lean_closure_set(v___f_2318_, 5, v___x_2316_);
lean_closure_set(v___f_2318_, 6, v___x_2317_);
lean_closure_set(v___f_2318_, 7, v___x_2299_);
lean_closure_set(v___f_2318_, 8, v_dir_2309_);
lean_closure_set(v___f_2318_, 9, v_self_2288_);
v___x_2319_ = l_Lake_ensureJob___redArg(v___x_2299_, v___f_2318_, v___y_2287_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_a_2320_; lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2348_; 
v_a_2320_ = lean_ctor_get(v___x_2319_, 0);
v_a_2321_ = lean_ctor_get(v___x_2319_, 1);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2323_ = v___x_2319_;
v_isShared_2324_ = v_isSharedCheck_2348_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_inc(v_a_2320_);
lean_dec(v___x_2319_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2348_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v_task_2325_; lean_object* v_kind_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2346_; 
v_task_2325_ = lean_ctor_get(v_a_2320_, 0);
v_kind_2326_ = lean_ctor_get(v_a_2320_, 1);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_a_2320_);
if (v_isSharedCheck_2346_ == 0)
{
lean_object* v_unused_2347_; 
v_unused_2347_ = lean_ctor_get(v_a_2320_, 2);
lean_dec(v_unused_2347_);
v___x_2328_ = v_a_2320_;
v_isShared_2329_ = v_isSharedCheck_2346_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_kind_2326_);
lean_inc(v_task_2325_);
lean_dec(v_a_2320_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2346_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; uint8_t v___x_2335_; lean_object* v_job_2337_; 
v___x_2330_ = lean_st_ref_take(v_registeredJobs_2297_);
v___x_2331_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2306_, v___x_2302_);
v___x_2332_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0));
v___x_2333_ = lean_string_append(v___x_2331_, v___x_2332_);
v___x_2334_ = lean_string_append(v___x_2333_, v___y_2304_);
v___x_2335_ = 0;
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 2, v___x_2334_);
v_job_2337_ = v___x_2328_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_task_2325_);
lean_ctor_set(v_reuseFailAlloc_2345_, 1, v_kind_2326_);
lean_ctor_set(v_reuseFailAlloc_2345_, 2, v___x_2334_);
v_job_2337_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2343_; 
lean_ctor_set_uint8(v_job_2337_, sizeof(void*)*3, v___x_2335_);
lean_inc_ref(v_job_2337_);
v___x_2338_ = l_Lake_Job_toOpaque___redArg(v_job_2337_);
v___x_2339_ = lean_array_push(v___x_2330_, v___x_2338_);
v___x_2340_ = lean_st_ref_set(v_registeredJobs_2297_, v___x_2339_);
v___x_2341_ = l_Lake_Job_renew___redArg(v_job_2337_);
if (v_isShared_2324_ == 0)
{
lean_ctor_set(v___x_2323_, 0, v___x_2341_);
v___x_2343_ = v___x_2323_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v___x_2341_);
lean_ctor_set(v_reuseFailAlloc_2344_, 1, v_a_2321_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
}
}
}
else
{
lean_dec(v_name_2306_);
return v___x_2319_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object* v___y_2352_, lean_object* v_self_2353_, lean_object* v_shouldExport_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_){
_start:
{
uint8_t v_shouldExport_boxed_2361_; lean_object* v_res_2362_; 
v_shouldExport_boxed_2361_ = lean_unbox(v_shouldExport_2354_);
v_res_2362_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2352_, v_self_2353_, v_shouldExport_boxed_2361_, v_a_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_);
lean_dec_ref(v_a_2358_);
lean_dec(v_a_2357_);
lean_dec(v_a_2356_);
lean_dec(v_a_2355_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object* v_x_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
uint8_t v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = 0;
v___x_2372_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2364_, v_x_2363_, v___x_2371_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object* v_x_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lake_LeanLib_staticFacetConfig___lam__0(v_x_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
lean_dec_ref(v___y_2378_);
lean_dec(v___y_2377_);
lean_dec(v___y_2376_);
lean_dec(v___y_2375_);
return v_res_2381_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_2384_; uint8_t v___x_2385_; lean_object* v___x_2386_; lean_object* v___f_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___f_2384_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2385_ = 1;
v___x_2386_ = l_Lake_instDataKindFilePath;
v___f_2387_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__0));
v___x_2388_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2389_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
lean_ctor_set(v___x_2389_, 1, v___f_2387_);
lean_ctor_set(v___x_2389_, 2, v___x_2386_);
lean_ctor_set(v___x_2389_, 3, v___f_2384_);
lean_ctor_set_uint8(v___x_2389_, sizeof(void*)*4, v___x_2385_);
lean_ctor_set_uint8(v___x_2389_, sizeof(void*)*4 + 1, v___x_2385_);
return v___x_2389_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig(void){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_obj_once(&l_Lake_LeanLib_staticFacetConfig___closed__2, &l_Lake_LeanLib_staticFacetConfig___closed__2_once, _init_l_Lake_LeanLib_staticFacetConfig___closed__2);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object* v_a_2391_, lean_object* v_as_2392_, size_t v_i_2393_, size_t v_stop_2394_, lean_object* v_b_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
lean_object* v___x_2403_; 
v___x_2403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_2391_, v_as_2392_, v_i_2393_, v_stop_2394_, v_b_2395_, v___y_2401_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object* v_a_2404_, lean_object* v_as_2405_, lean_object* v_i_2406_, lean_object* v_stop_2407_, lean_object* v_b_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
size_t v_i_boxed_2416_; size_t v_stop_boxed_2417_; lean_object* v_res_2418_; 
v_i_boxed_2416_ = lean_unbox_usize(v_i_2406_);
lean_dec(v_i_2406_);
v_stop_boxed_2417_ = lean_unbox_usize(v_stop_2407_);
lean_dec(v_stop_2407_);
v_res_2418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(v_a_2404_, v_as_2405_, v_i_boxed_2416_, v_stop_boxed_2417_, v_b_2408_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec(v___y_2411_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec_ref(v_as_2405_);
lean_dec(v_a_2404_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object* v_x_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
uint8_t v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = 1;
v___x_2428_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2420_, v_x_2419_, v___x_2427_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object* v_x_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lake_LeanLib_staticExportFacetConfig___lam__0(v_x_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec_ref(v___y_2434_);
lean_dec(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec(v___y_2431_);
return v_res_2437_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_2439_; uint8_t v___x_2440_; lean_object* v___x_2441_; lean_object* v___f_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; 
v___f_2439_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2440_ = 1;
v___x_2441_ = l_Lake_instDataKindFilePath;
v___f_2442_ = ((lean_object*)(l_Lake_LeanLib_staticExportFacetConfig___closed__0));
v___x_2443_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2444_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
lean_ctor_set(v___x_2444_, 1, v___f_2442_);
lean_ctor_set(v___x_2444_, 2, v___x_2441_);
lean_ctor_set(v___x_2444_, 3, v___f_2439_);
lean_ctor_set_uint8(v___x_2444_, sizeof(void*)*4, v___x_2440_);
lean_ctor_set_uint8(v___x_2444_, sizeof(void*)*4 + 1, v___x_2440_);
return v___x_2444_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig(void){
_start:
{
lean_object* v___x_2445_; 
v___x_2445_ = lean_obj_once(&l_Lake_LeanLib_staticExportFacetConfig___closed__1, &l_Lake_LeanLib_staticExportFacetConfig___closed__1_once, _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1);
return v___x_2445_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0(void){
_start:
{
uint8_t v___x_2446_; lean_object* v_name_2447_; lean_object* v___x_2448_; 
v___x_2446_ = 1;
v_name_2447_ = l_Lake_instDataKindDynlib;
v___x_2448_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2447_, v___x_2446_);
return v___x_2448_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object* v_defaultPkg_2449_, lean_object* v_self_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
uint8_t v___x_2458_; lean_object* v___x_2459_; 
v___x_2458_ = 1;
lean_inc_ref_n(v_self_2450_, 2);
v___x_2459_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_2449_, v_self_2450_, v_self_2450_, v___x_2458_, v_a_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v_a_2460_; lean_object* v_snd_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2502_; 
v_a_2460_ = lean_ctor_get(v___x_2459_, 0);
lean_inc(v_a_2460_);
v_snd_2461_ = lean_ctor_get(v_a_2460_, 1);
v_isSharedCheck_2502_ = !lean_is_exclusive(v_a_2460_);
if (v_isSharedCheck_2502_ == 0)
{
lean_object* v_unused_2503_; 
v_unused_2503_ = lean_ctor_get(v_a_2460_, 0);
lean_dec(v_unused_2503_);
v___x_2463_ = v_a_2460_;
v_isShared_2464_ = v_isSharedCheck_2502_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_snd_2461_);
lean_dec(v_a_2460_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2502_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v_a_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2500_; 
v_a_2465_ = lean_ctor_get(v___x_2459_, 1);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2500_ == 0)
{
lean_object* v_unused_2501_; 
v_unused_2501_ = lean_ctor_get(v___x_2459_, 0);
lean_dec(v_unused_2501_);
v___x_2467_ = v___x_2459_;
v_isShared_2468_ = v_isSharedCheck_2500_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_a_2465_);
lean_dec(v___x_2459_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2500_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v_kind_2469_; lean_object* v_name_2470_; lean_object* v___y_2472_; uint8_t v___x_2490_; 
v_kind_2469_ = lean_ctor_get(v_snd_2461_, 1);
v_name_2470_ = l_Lake_instDataKindDynlib;
v___x_2490_ = lean_name_eq(v_kind_2469_, v_name_2470_);
if (v___x_2490_ == 0)
{
uint8_t v___x_2491_; 
lean_inc(v_kind_2469_);
lean_del_object(v___x_2463_);
lean_dec(v_snd_2461_);
v___x_2491_ = l_Lean_Name_isAnonymous(v_kind_2469_);
if (v___x_2491_ == 0)
{
lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2492_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_2493_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2469_, v___x_2458_);
v___x_2494_ = lean_string_append(v___x_2492_, v___x_2493_);
lean_dec_ref(v___x_2493_);
v___x_2495_ = lean_string_append(v___x_2494_, v___x_2492_);
v___y_2472_ = v___x_2495_;
goto v___jp_2471_;
}
else
{
lean_object* v___x_2496_; 
lean_dec(v_kind_2469_);
v___x_2496_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_2472_ = v___x_2496_;
goto v___jp_2471_;
}
}
else
{
lean_object* v___x_2498_; 
lean_del_object(v___x_2467_);
lean_dec_ref(v_self_2450_);
if (v_isShared_2464_ == 0)
{
lean_ctor_set(v___x_2463_, 1, v_a_2465_);
lean_ctor_set(v___x_2463_, 0, v_snd_2461_);
v___x_2498_ = v___x_2463_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_snd_2461_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v_a_2465_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
v___jp_2471_:
{
lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2488_; 
v___x_2473_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_2474_ = l_Lake_PartialBuildKey_toString(v_self_2450_);
v___x_2475_ = lean_string_append(v___x_2473_, v___x_2474_);
lean_dec_ref(v___x_2474_);
v___x_2476_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_2477_ = lean_string_append(v___x_2475_, v___x_2476_);
v___x_2478_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0);
v___x_2479_ = lean_string_append(v___x_2477_, v___x_2478_);
v___x_2480_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_2481_ = lean_string_append(v___x_2479_, v___x_2480_);
v___x_2482_ = lean_string_append(v___x_2481_, v___y_2472_);
lean_dec_ref(v___y_2472_);
v___x_2483_ = 3;
v___x_2484_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2484_, 0, v___x_2482_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*1, v___x_2483_);
v___x_2485_ = lean_array_get_size(v_a_2465_);
v___x_2486_ = lean_array_push(v_a_2465_, v___x_2484_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set_tag(v___x_2467_, 1);
lean_ctor_set(v___x_2467_, 1, v___x_2486_);
lean_ctor_set(v___x_2467_, 0, v___x_2485_);
v___x_2488_ = v___x_2467_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v___x_2485_);
lean_ctor_set(v_reuseFailAlloc_2489_, 1, v___x_2486_);
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
lean_object* v_a_2504_; lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2512_; 
lean_dec_ref(v_self_2450_);
v_a_2504_ = lean_ctor_get(v___x_2459_, 0);
v_a_2505_ = lean_ctor_get(v___x_2459_, 1);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2507_ = v___x_2459_;
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_inc(v_a_2504_);
lean_dec(v___x_2459_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2510_; 
if (v_isShared_2508_ == 0)
{
v___x_2510_ = v___x_2507_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_a_2504_);
lean_ctor_set(v_reuseFailAlloc_2511_, 1, v_a_2505_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object* v_defaultPkg_2513_, lean_object* v_self_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v_defaultPkg_2513_, v_self_2514_, v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_);
lean_dec_ref(v_a_2519_);
lean_dec(v_a_2518_);
lean_dec(v_a_2517_);
lean_dec(v_a_2516_);
return v_res_2522_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2525_ = ((lean_object*)(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0));
v___x_2526_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_2527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
lean_ctor_set(v___x_2527_, 1, v___x_2525_);
return v___x_2527_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5(void){
_start:
{
lean_object* v___x_2528_; 
v___x_2528_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1);
return v___x_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object* v___x_2529_, lean_object* v_as_2530_, size_t v_i_2531_, size_t v_stop_2532_, lean_object* v_b_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
uint8_t v___x_2541_; 
v___x_2541_ = lean_usize_dec_eq(v_i_2531_, v_stop_2532_);
if (v___x_2541_ == 0)
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = lean_array_uget_borrowed(v_as_2530_, v_i_2531_);
lean_inc_ref(v___y_2534_);
lean_inc(v___x_2542_);
lean_inc_ref(v___x_2529_);
v___x_2543_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_2529_, v___x_2542_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v_a_2545_; lean_object* v___x_2546_; size_t v___x_2547_; size_t v___x_2548_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
v_a_2545_ = lean_ctor_get(v___x_2543_, 1);
lean_inc(v_a_2545_);
lean_dec_ref_known(v___x_2543_, 2);
v___x_2546_ = lean_array_push(v_b_2533_, v_a_2544_);
v___x_2547_ = ((size_t)1ULL);
v___x_2548_ = lean_usize_add(v_i_2531_, v___x_2547_);
v_i_2531_ = v___x_2548_;
v_b_2533_ = v___x_2546_;
v___y_2539_ = v_a_2545_;
goto _start;
}
else
{
lean_object* v_a_2550_; lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec_ref(v___y_2534_);
lean_dec_ref(v_b_2533_);
lean_dec_ref(v___x_2529_);
v_a_2550_ = lean_ctor_get(v___x_2543_, 0);
v_a_2551_ = lean_ctor_get(v___x_2543_, 1);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2543_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2543_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_inc(v_a_2550_);
lean_dec(v___x_2543_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2550_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
else
{
lean_object* v___x_2559_; 
lean_dec_ref(v___y_2534_);
lean_dec_ref(v___x_2529_);
v___x_2559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2559_, 0, v_b_2533_);
lean_ctor_set(v___x_2559_, 1, v___y_2539_);
return v___x_2559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object* v___x_2560_, lean_object* v_as_2561_, lean_object* v_i_2562_, lean_object* v_stop_2563_, lean_object* v_b_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
size_t v_i_boxed_2572_; size_t v_stop_boxed_2573_; lean_object* v_res_2574_; 
v_i_boxed_2572_ = lean_unbox_usize(v_i_2562_);
lean_dec(v_i_2562_);
v_stop_boxed_2573_ = lean_unbox_usize(v_stop_2563_);
lean_dec(v_stop_2563_);
v_res_2574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v___x_2560_, v_as_2561_, v_i_boxed_2572_, v_stop_boxed_2573_, v_b_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v_as_2561_);
return v_res_2574_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object* v_self_2575_, lean_object* v_a_2576_){
_start:
{
lean_object* v_toHashSet_2577_; lean_object* v_toArray_2578_; uint8_t v___x_2579_; 
v_toHashSet_2577_ = lean_ctor_get(v_self_2575_, 0);
v_toArray_2578_ = lean_ctor_get(v_self_2575_, 1);
v___x_2579_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_toHashSet_2577_, v_a_2576_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2589_; 
lean_inc_ref(v_toArray_2578_);
lean_inc_ref(v_toHashSet_2577_);
v_isSharedCheck_2589_ = !lean_is_exclusive(v_self_2575_);
if (v_isSharedCheck_2589_ == 0)
{
lean_object* v_unused_2590_; lean_object* v_unused_2591_; 
v_unused_2590_ = lean_ctor_get(v_self_2575_, 1);
lean_dec(v_unused_2590_);
v_unused_2591_ = lean_ctor_get(v_self_2575_, 0);
lean_dec(v_unused_2591_);
v___x_2581_ = v_self_2575_;
v_isShared_2582_ = v_isSharedCheck_2589_;
goto v_resetjp_2580_;
}
else
{
lean_dec(v_self_2575_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2589_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2587_; 
v___x_2583_ = lean_box(0);
lean_inc_ref(v_a_2576_);
v___x_2584_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_toHashSet_2577_, v_a_2576_, v___x_2583_);
v___x_2585_ = lean_array_push(v_toArray_2578_, v_a_2576_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 1, v___x_2585_);
lean_ctor_set(v___x_2581_, 0, v___x_2584_);
v___x_2587_ = v___x_2581_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2584_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v___x_2585_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
else
{
lean_dec_ref(v_a_2576_);
return v_self_2575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object* v_as_2592_, size_t v_i_2593_, size_t v_stop_2594_, lean_object* v_b_2595_){
_start:
{
uint8_t v___x_2596_; 
v___x_2596_ = lean_usize_dec_eq(v_i_2593_, v_stop_2594_);
if (v___x_2596_ == 0)
{
lean_object* v___x_2597_; lean_object* v___x_2598_; size_t v___x_2599_; size_t v___x_2600_; 
v___x_2597_ = lean_array_uget_borrowed(v_as_2592_, v_i_2593_);
lean_inc(v___x_2597_);
v___x_2598_ = l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(v_b_2595_, v___x_2597_);
v___x_2599_ = ((size_t)1ULL);
v___x_2600_ = lean_usize_add(v_i_2593_, v___x_2599_);
v_i_2593_ = v___x_2600_;
v_b_2595_ = v___x_2598_;
goto _start;
}
else
{
return v_b_2595_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object* v_as_2602_, lean_object* v_i_2603_, lean_object* v_stop_2604_, lean_object* v_b_2605_){
_start:
{
size_t v_i_boxed_2606_; size_t v_stop_boxed_2607_; lean_object* v_res_2608_; 
v_i_boxed_2606_ = lean_unbox_usize(v_i_2603_);
lean_dec(v_i_2603_);
v_stop_boxed_2607_ = lean_unbox_usize(v_stop_2604_);
lean_dec(v_stop_2604_);
v_res_2608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_as_2602_, v_i_boxed_2606_, v_stop_boxed_2607_, v_b_2605_);
lean_dec_ref(v_as_2602_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object* v_self_2609_, lean_object* v_arr_2610_){
_start:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2611_ = lean_unsigned_to_nat(0u);
v___x_2612_ = lean_array_get_size(v_arr_2610_);
v___x_2613_ = lean_nat_dec_lt(v___x_2611_, v___x_2612_);
if (v___x_2613_ == 0)
{
return v_self_2609_;
}
else
{
uint8_t v___x_2614_; 
v___x_2614_ = lean_nat_dec_le(v___x_2612_, v___x_2612_);
if (v___x_2614_ == 0)
{
if (v___x_2613_ == 0)
{
return v_self_2609_;
}
else
{
size_t v___x_2615_; size_t v___x_2616_; lean_object* v___x_2617_; 
v___x_2615_ = ((size_t)0ULL);
v___x_2616_ = lean_usize_of_nat(v___x_2612_);
v___x_2617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2610_, v___x_2615_, v___x_2616_, v_self_2609_);
return v___x_2617_;
}
}
else
{
size_t v___x_2618_; size_t v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = ((size_t)0ULL);
v___x_2619_ = lean_usize_of_nat(v___x_2612_);
v___x_2620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2610_, v___x_2618_, v___x_2619_, v_self_2609_);
return v___x_2620_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object* v_self_2621_, lean_object* v_arr_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_self_2621_, v_arr_2622_);
lean_dec_ref(v_arr_2622_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object* v_as_2624_, size_t v_i_2625_, size_t v_stop_2626_, lean_object* v_b_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
uint8_t v___x_2635_; 
v___x_2635_ = lean_usize_dec_eq(v_i_2625_, v_stop_2626_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; lean_object* v_lib_2637_; lean_object* v_pkg_2638_; lean_object* v_name_2639_; lean_object* v_keyName_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2636_ = lean_array_uget_borrowed(v_as_2624_, v_i_2625_);
v_lib_2637_ = lean_ctor_get(v___x_2636_, 0);
v_pkg_2638_ = lean_ctor_get(v_lib_2637_, 0);
v_name_2639_ = lean_ctor_get(v___x_2636_, 1);
v_keyName_2640_ = lean_ctor_get(v_pkg_2638_, 2);
v___x_2641_ = l_Lake_Module_transImportsFacet;
lean_inc(v_name_2639_);
lean_inc(v_keyName_2640_);
v___x_2642_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2642_, 0, v_keyName_2640_);
lean_ctor_set(v___x_2642_, 1, v_name_2639_);
v___x_2643_ = l_Lake_Module_keyword;
lean_inc(v___x_2636_);
v___x_2644_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2642_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
lean_ctor_set(v___x_2644_, 2, v___x_2636_);
lean_ctor_set(v___x_2644_, 3, v___x_2641_);
lean_inc_ref(v___y_2628_);
lean_inc_ref(v___y_2632_);
lean_inc(v___y_2631_);
lean_inc(v___y_2630_);
lean_inc(v___y_2629_);
v___x_2645_ = lean_apply_7(v___y_2628_, v___x_2644_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, lean_box(0));
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v_a_2647_; lean_object* v___x_2648_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
v_a_2647_ = lean_ctor_get(v___x_2645_, 1);
lean_inc(v_a_2647_);
lean_dec_ref_known(v___x_2645_, 2);
v___x_2648_ = l_Lake_Job_await___redArg(v_a_2646_, v_a_2647_);
if (lean_obj_tag(v___x_2648_) == 0)
{
lean_object* v_a_2649_; lean_object* v_a_2650_; lean_object* v___x_2651_; size_t v___x_2652_; size_t v___x_2653_; 
v_a_2649_ = lean_ctor_get(v___x_2648_, 0);
lean_inc(v_a_2649_);
v_a_2650_ = lean_ctor_get(v___x_2648_, 1);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2648_, 2);
v___x_2651_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_b_2627_, v_a_2649_);
lean_dec(v_a_2649_);
v___x_2652_ = ((size_t)1ULL);
v___x_2653_ = lean_usize_add(v_i_2625_, v___x_2652_);
v_i_2625_ = v___x_2653_;
v_b_2627_ = v___x_2651_;
v___y_2633_ = v_a_2650_;
goto _start;
}
else
{
lean_object* v_a_2655_; lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2663_; 
lean_dec_ref(v___y_2628_);
lean_dec_ref(v_b_2627_);
v_a_2655_ = lean_ctor_get(v___x_2648_, 0);
v_a_2656_ = lean_ctor_get(v___x_2648_, 1);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2663_ == 0)
{
v___x_2658_ = v___x_2648_;
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_inc(v_a_2655_);
lean_dec(v___x_2648_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2663_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
lean_object* v___x_2661_; 
if (v_isShared_2659_ == 0)
{
v___x_2661_ = v___x_2658_;
goto v_reusejp_2660_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v_a_2655_);
lean_ctor_set(v_reuseFailAlloc_2662_, 1, v_a_2656_);
v___x_2661_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2660_;
}
v_reusejp_2660_:
{
return v___x_2661_;
}
}
}
}
else
{
lean_object* v_a_2664_; lean_object* v_a_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2672_; 
lean_dec_ref(v___y_2628_);
lean_dec_ref(v_b_2627_);
v_a_2664_ = lean_ctor_get(v___x_2645_, 0);
v_a_2665_ = lean_ctor_get(v___x_2645_, 1);
v_isSharedCheck_2672_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2672_ == 0)
{
v___x_2667_ = v___x_2645_;
v_isShared_2668_ = v_isSharedCheck_2672_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_a_2665_);
lean_inc(v_a_2664_);
lean_dec(v___x_2645_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2672_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v___x_2670_; 
if (v_isShared_2668_ == 0)
{
v___x_2670_ = v___x_2667_;
goto v_reusejp_2669_;
}
else
{
lean_object* v_reuseFailAlloc_2671_; 
v_reuseFailAlloc_2671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2671_, 0, v_a_2664_);
lean_ctor_set(v_reuseFailAlloc_2671_, 1, v_a_2665_);
v___x_2670_ = v_reuseFailAlloc_2671_;
goto v_reusejp_2669_;
}
v_reusejp_2669_:
{
return v___x_2670_;
}
}
}
}
else
{
lean_object* v___x_2673_; 
lean_dec_ref(v___y_2628_);
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v_b_2627_);
lean_ctor_set(v___x_2673_, 1, v___y_2633_);
return v___x_2673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object* v_as_2674_, lean_object* v_i_2675_, lean_object* v_stop_2676_, lean_object* v_b_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_){
_start:
{
size_t v_i_boxed_2685_; size_t v_stop_boxed_2686_; lean_object* v_res_2687_; 
v_i_boxed_2685_ = lean_unbox_usize(v_i_2675_);
lean_dec(v_i_2675_);
v_stop_boxed_2686_ = lean_unbox_usize(v_stop_2676_);
lean_dec(v_stop_2676_);
v_res_2687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_as_2674_, v_i_boxed_2685_, v_stop_boxed_2686_, v_b_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v_as_2674_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object* v_as_2688_, size_t v_i_2689_, size_t v_stop_2690_, lean_object* v_b_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
uint8_t v___x_2699_; 
v___x_2699_ = lean_usize_dec_eq(v_i_2689_, v_stop_2690_);
if (v___x_2699_ == 0)
{
lean_object* v___x_2700_; lean_object* v_pkg_2701_; lean_object* v_name_2702_; lean_object* v_keyName_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2700_ = lean_array_uget_borrowed(v_as_2688_, v_i_2689_);
v_pkg_2701_ = lean_ctor_get(v___x_2700_, 0);
v_name_2702_ = lean_ctor_get(v___x_2700_, 1);
v_keyName_2703_ = lean_ctor_get(v_pkg_2701_, 2);
v___x_2704_ = l_Lake_ExternLib_dynlibFacet;
lean_inc(v_name_2702_);
lean_inc(v_keyName_2703_);
v___x_2705_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2705_, 0, v_keyName_2703_);
lean_ctor_set(v___x_2705_, 1, v_name_2702_);
v___x_2706_ = l_Lake_ExternLib_keyword;
lean_inc(v___x_2700_);
v___x_2707_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2705_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
lean_ctor_set(v___x_2707_, 2, v___x_2700_);
lean_ctor_set(v___x_2707_, 3, v___x_2704_);
lean_inc_ref(v___y_2692_);
lean_inc_ref(v___y_2696_);
lean_inc(v___y_2695_);
lean_inc(v___y_2694_);
lean_inc(v___y_2693_);
v___x_2708_ = lean_apply_7(v___y_2692_, v___x_2707_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, lean_box(0));
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v_a_2710_; lean_object* v___x_2711_; size_t v___x_2712_; size_t v___x_2713_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
v_a_2710_ = lean_ctor_get(v___x_2708_, 1);
lean_inc(v_a_2710_);
lean_dec_ref_known(v___x_2708_, 2);
v___x_2711_ = lean_array_push(v_b_2691_, v_a_2709_);
v___x_2712_ = ((size_t)1ULL);
v___x_2713_ = lean_usize_add(v_i_2689_, v___x_2712_);
v_i_2689_ = v___x_2713_;
v_b_2691_ = v___x_2711_;
v___y_2697_ = v_a_2710_;
goto _start;
}
else
{
lean_object* v_a_2715_; lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec_ref(v___y_2692_);
lean_dec_ref(v_b_2691_);
v_a_2715_ = lean_ctor_get(v___x_2708_, 0);
v_a_2716_ = lean_ctor_get(v___x_2708_, 1);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2708_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_inc(v_a_2715_);
lean_dec(v___x_2708_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2715_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v___x_2724_; 
lean_dec_ref(v___y_2692_);
v___x_2724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2724_, 0, v_b_2691_);
lean_ctor_set(v___x_2724_, 1, v___y_2697_);
return v___x_2724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object* v_as_2725_, lean_object* v_i_2726_, lean_object* v_stop_2727_, lean_object* v_b_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
size_t v_i_boxed_2736_; size_t v_stop_boxed_2737_; lean_object* v_res_2738_; 
v_i_boxed_2736_ = lean_unbox_usize(v_i_2726_);
lean_dec(v_i_2726_);
v_stop_boxed_2737_ = lean_unbox_usize(v_stop_2727_);
lean_dec(v_stop_2727_);
v_res_2738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v_as_2725_, v_i_boxed_2736_, v_stop_boxed_2737_, v_b_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
lean_dec_ref(v___y_2733_);
lean_dec(v___y_2732_);
lean_dec(v___y_2731_);
lean_dec(v___y_2730_);
lean_dec_ref(v_as_2725_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object* v_as_2739_, size_t v_i_2740_, size_t v_stop_2741_, lean_object* v_b_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_a_2751_; lean_object* v_a_2752_; uint8_t v___x_2756_; 
v___x_2756_ = lean_usize_dec_eq(v_i_2740_, v_stop_2741_);
if (v___x_2756_ == 0)
{
lean_object* v_fst_2757_; lean_object* v_snd_2758_; lean_object* v___x_2759_; lean_object* v_lib_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2797_; 
v_fst_2757_ = lean_ctor_get(v_b_2742_, 0);
v_snd_2758_ = lean_ctor_get(v_b_2742_, 1);
v___x_2759_ = lean_array_uget(v_as_2739_, v_i_2740_);
v_lib_2760_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2797_ == 0)
{
lean_object* v_unused_2798_; 
v_unused_2798_ = lean_ctor_get(v___x_2759_, 1);
lean_dec(v_unused_2798_);
v___x_2762_ = v___x_2759_;
v_isShared_2763_ = v_isSharedCheck_2797_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_lib_2760_);
lean_dec(v___x_2759_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2797_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v_pkg_2764_; lean_object* v_name_2765_; uint8_t v___x_2766_; 
v_pkg_2764_ = lean_ctor_get(v_lib_2760_, 0);
v_name_2765_ = lean_ctor_get(v_lib_2760_, 1);
lean_inc(v_name_2765_);
v___x_2766_ = l_Lean_NameSet_contains(v_fst_2757_, v_name_2765_);
if (v___x_2766_ == 0)
{
lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2794_; 
lean_inc(v_snd_2758_);
lean_inc(v_fst_2757_);
v_isSharedCheck_2794_ = !lean_is_exclusive(v_b_2742_);
if (v_isSharedCheck_2794_ == 0)
{
lean_object* v_unused_2795_; lean_object* v_unused_2796_; 
v_unused_2795_ = lean_ctor_get(v_b_2742_, 1);
lean_dec(v_unused_2795_);
v_unused_2796_ = lean_ctor_get(v_b_2742_, 0);
lean_dec(v_unused_2796_);
v___x_2768_ = v_b_2742_;
v_isShared_2769_ = v_isSharedCheck_2794_;
goto v_resetjp_2767_;
}
else
{
lean_dec(v_b_2742_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2794_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v_keyName_2770_; lean_object* v___x_2771_; lean_object* v___x_2773_; 
v_keyName_2770_ = lean_ctor_get(v_pkg_2764_, 2);
v___x_2771_ = l_Lake_LeanLib_sharedFacet;
lean_inc(v_name_2765_);
lean_inc(v_keyName_2770_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set_tag(v___x_2762_, 3);
lean_ctor_set(v___x_2762_, 1, v_name_2765_);
lean_ctor_set(v___x_2762_, 0, v_keyName_2770_);
v___x_2773_ = v___x_2762_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_keyName_2770_);
lean_ctor_set(v_reuseFailAlloc_2793_, 1, v_name_2765_);
v___x_2773_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2775_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
lean_ctor_set(v___x_2775_, 2, v_lib_2760_);
lean_ctor_set(v___x_2775_, 3, v___x_2771_);
lean_inc_ref(v___y_2743_);
lean_inc_ref(v___y_2747_);
lean_inc(v___y_2746_);
lean_inc(v___y_2745_);
lean_inc(v___y_2744_);
v___x_2776_ = lean_apply_7(v___y_2743_, v___x_2775_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, lean_box(0));
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; lean_object* v_a_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2782_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_a_2777_);
v_a_2778_ = lean_ctor_get(v___x_2776_, 1);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2776_, 2);
v___x_2779_ = lean_array_push(v_snd_2758_, v_a_2777_);
v___x_2780_ = l_Lean_NameSet_insert(v_fst_2757_, v_name_2765_);
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 1, v___x_2779_);
lean_ctor_set(v___x_2768_, 0, v___x_2780_);
v___x_2782_ = v___x_2768_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v___x_2779_);
v___x_2782_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
v_a_2751_ = v___x_2782_;
v_a_2752_ = v_a_2778_;
goto v___jp_2750_;
}
}
else
{
lean_object* v_a_2784_; lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_del_object(v___x_2768_);
lean_dec(v_name_2765_);
lean_dec(v_snd_2758_);
lean_dec(v_fst_2757_);
lean_dec_ref(v___y_2743_);
v_a_2784_ = lean_ctor_get(v___x_2776_, 0);
v_a_2785_ = lean_ctor_get(v___x_2776_, 1);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2776_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_inc(v_a_2784_);
lean_dec(v___x_2776_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2784_);
lean_ctor_set(v_reuseFailAlloc_2791_, 1, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
}
else
{
lean_dec(v_name_2765_);
lean_del_object(v___x_2762_);
lean_dec_ref(v_lib_2760_);
v_a_2751_ = v_b_2742_;
v_a_2752_ = v___y_2748_;
goto v___jp_2750_;
}
}
}
else
{
lean_object* v___x_2799_; 
lean_dec_ref(v___y_2743_);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v_b_2742_);
lean_ctor_set(v___x_2799_, 1, v___y_2748_);
return v___x_2799_;
}
v___jp_2750_:
{
size_t v___x_2753_; size_t v___x_2754_; 
v___x_2753_ = ((size_t)1ULL);
v___x_2754_ = lean_usize_add(v_i_2740_, v___x_2753_);
v_i_2740_ = v___x_2754_;
v_b_2742_ = v_a_2751_;
v___y_2748_ = v_a_2752_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object* v_as_2800_, lean_object* v_i_2801_, lean_object* v_stop_2802_, lean_object* v_b_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
size_t v_i_boxed_2811_; size_t v_stop_boxed_2812_; lean_object* v_res_2813_; 
v_i_boxed_2811_ = lean_unbox_usize(v_i_2801_);
lean_dec(v_i_2801_);
v_stop_boxed_2812_ = lean_unbox_usize(v_stop_2802_);
lean_dec(v_stop_2802_);
v_res_2813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_as_2800_, v_i_boxed_2811_, v_stop_boxed_2812_, v_b_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v_as_2800_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object* v___x_2814_, lean_object* v_as_2815_, size_t v_i_2816_, size_t v_stop_2817_, lean_object* v_b_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
uint8_t v___x_2826_; 
v___x_2826_ = lean_usize_dec_eq(v_i_2816_, v_stop_2817_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2827_ = lean_array_uget_borrowed(v_as_2815_, v_i_2816_);
lean_inc_ref(v___y_2819_);
lean_inc(v___x_2827_);
lean_inc_ref(v___x_2814_);
v___x_2828_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v___x_2814_, v___x_2827_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v_a_2829_; lean_object* v_a_2830_; lean_object* v___x_2831_; size_t v___x_2832_; size_t v___x_2833_; 
v_a_2829_ = lean_ctor_get(v___x_2828_, 0);
lean_inc(v_a_2829_);
v_a_2830_ = lean_ctor_get(v___x_2828_, 1);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___x_2828_, 2);
v___x_2831_ = lean_array_push(v_b_2818_, v_a_2829_);
v___x_2832_ = ((size_t)1ULL);
v___x_2833_ = lean_usize_add(v_i_2816_, v___x_2832_);
v_i_2816_ = v___x_2833_;
v_b_2818_ = v___x_2831_;
v___y_2824_ = v_a_2830_;
goto _start;
}
else
{
lean_object* v_a_2835_; lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
lean_dec_ref(v___y_2819_);
lean_dec_ref(v_b_2818_);
lean_dec_ref(v___x_2814_);
v_a_2835_ = lean_ctor_get(v___x_2828_, 0);
v_a_2836_ = lean_ctor_get(v___x_2828_, 1);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___x_2828_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_inc(v_a_2835_);
lean_dec(v___x_2828_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2835_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
else
{
lean_object* v___x_2844_; 
lean_dec_ref(v___y_2819_);
lean_dec_ref(v___x_2814_);
v___x_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2844_, 0, v_b_2818_);
lean_ctor_set(v___x_2844_, 1, v___y_2824_);
return v___x_2844_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object* v___x_2845_, lean_object* v_as_2846_, lean_object* v_i_2847_, lean_object* v_stop_2848_, lean_object* v_b_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
size_t v_i_boxed_2857_; size_t v_stop_boxed_2858_; lean_object* v_res_2859_; 
v_i_boxed_2857_ = lean_unbox_usize(v_i_2847_);
lean_dec(v_i_2847_);
v_stop_boxed_2858_ = lean_unbox_usize(v_stop_2848_);
lean_dec(v_stop_2848_);
v_res_2859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v___x_2845_, v_as_2846_, v_i_boxed_2857_, v_stop_boxed_2858_, v_b_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v_as_2846_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object* v___x_2860_, lean_object* v_as_2861_, size_t v_i_2862_, size_t v_stop_2863_, lean_object* v_b_2864_){
_start:
{
lean_object* v___y_2866_; uint8_t v___x_2870_; 
v___x_2870_ = lean_usize_dec_eq(v_i_2862_, v_stop_2863_);
if (v___x_2870_ == 0)
{
lean_object* v_toConfigDecl_2871_; lean_object* v_name_2872_; lean_object* v_kind_2873_; lean_object* v_config_2874_; lean_object* v___x_2875_; uint8_t v___x_2876_; 
v_toConfigDecl_2871_ = lean_array_uget_borrowed(v_as_2861_, v_i_2862_);
v_name_2872_ = lean_ctor_get(v_toConfigDecl_2871_, 1);
v_kind_2873_ = lean_ctor_get(v_toConfigDecl_2871_, 2);
v_config_2874_ = lean_ctor_get(v_toConfigDecl_2871_, 3);
v___x_2875_ = l_Lake_ExternLib_keyword;
v___x_2876_ = lean_name_eq(v_kind_2873_, v___x_2875_);
if (v___x_2876_ == 0)
{
v___y_2866_ = v_b_2864_;
goto v___jp_2865_;
}
else
{
lean_object* v___x_2877_; lean_object* v___x_2878_; 
lean_inc(v_config_2874_);
lean_inc(v_name_2872_);
lean_inc_ref(v___x_2860_);
v___x_2877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2860_);
lean_ctor_set(v___x_2877_, 1, v_name_2872_);
lean_ctor_set(v___x_2877_, 2, v_config_2874_);
v___x_2878_ = lean_array_push(v_b_2864_, v___x_2877_);
v___y_2866_ = v___x_2878_;
goto v___jp_2865_;
}
}
else
{
lean_dec_ref(v___x_2860_);
return v_b_2864_;
}
v___jp_2865_:
{
size_t v___x_2867_; size_t v___x_2868_; 
v___x_2867_ = ((size_t)1ULL);
v___x_2868_ = lean_usize_add(v_i_2862_, v___x_2867_);
v_i_2862_ = v___x_2868_;
v_b_2864_ = v___y_2866_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object* v___x_2879_, lean_object* v_as_2880_, lean_object* v_i_2881_, lean_object* v_stop_2882_, lean_object* v_b_2883_){
_start:
{
size_t v_i_boxed_2884_; size_t v_stop_boxed_2885_; lean_object* v_res_2886_; 
v_i_boxed_2884_ = lean_unbox_usize(v_i_2881_);
lean_dec(v_i_2881_);
v_stop_boxed_2885_ = lean_unbox_usize(v_stop_2882_);
lean_dec(v_stop_2882_);
v_res_2886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v___x_2879_, v_as_2880_, v_i_boxed_2884_, v_stop_boxed_2885_, v_b_2883_);
lean_dec_ref(v_as_2880_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object* v_as_2887_, size_t v_i_2888_, size_t v_stop_2889_, lean_object* v_b_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
uint8_t v___x_2898_; 
v___x_2898_ = lean_usize_dec_eq(v_i_2888_, v_stop_2889_);
if (v___x_2898_ == 0)
{
lean_object* v___x_2899_; lean_object* v_lib_2900_; lean_object* v_config_2901_; lean_object* v_nativeFacets_2902_; uint8_t v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; size_t v_sz_2906_; size_t v___x_2907_; lean_object* v___x_2908_; 
v___x_2899_ = lean_array_uget_borrowed(v_as_2887_, v_i_2888_);
v_lib_2900_ = lean_ctor_get(v___x_2899_, 0);
v_config_2901_ = lean_ctor_get(v_lib_2900_, 2);
v_nativeFacets_2902_ = lean_ctor_get(v_config_2901_, 8);
v___x_2903_ = 1;
v___x_2904_ = lean_box(v___x_2903_);
lean_inc_ref(v_nativeFacets_2902_);
v___x_2905_ = lean_apply_1(v_nativeFacets_2902_, v___x_2904_);
v_sz_2906_ = lean_array_size(v___x_2905_);
v___x_2907_ = ((size_t)0ULL);
lean_inc_ref(v___y_2891_);
lean_inc(v___x_2899_);
v___x_2908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v___x_2899_, v_sz_2906_, v___x_2907_, v___x_2905_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; lean_object* v_a_2910_; lean_object* v___x_2911_; size_t v___x_2912_; size_t v___x_2913_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
lean_inc(v_a_2909_);
v_a_2910_ = lean_ctor_get(v___x_2908_, 1);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2908_, 2);
v___x_2911_ = l_Array_append___redArg(v_b_2890_, v_a_2909_);
lean_dec(v_a_2909_);
v___x_2912_ = ((size_t)1ULL);
v___x_2913_ = lean_usize_add(v_i_2888_, v___x_2912_);
v_i_2888_ = v___x_2913_;
v_b_2890_ = v___x_2911_;
v___y_2896_ = v_a_2910_;
goto _start;
}
else
{
lean_dec_ref(v___y_2891_);
lean_dec_ref(v_b_2890_);
return v___x_2908_;
}
}
else
{
lean_object* v___x_2915_; 
lean_dec_ref(v___y_2891_);
v___x_2915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2915_, 0, v_b_2890_);
lean_ctor_set(v___x_2915_, 1, v___y_2896_);
return v___x_2915_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object* v_as_2916_, lean_object* v_i_2917_, lean_object* v_stop_2918_, lean_object* v_b_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
size_t v_i_boxed_2927_; size_t v_stop_boxed_2928_; lean_object* v_res_2929_; 
v_i_boxed_2927_ = lean_unbox_usize(v_i_2917_);
lean_dec(v_i_2917_);
v_stop_boxed_2928_ = lean_unbox_usize(v_stop_2918_);
lean_dec(v_stop_2918_);
v_res_2929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_as_2916_, v_i_boxed_2927_, v_stop_boxed_2928_, v_b_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec(v___y_2921_);
lean_dec_ref(v_as_2916_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object* v___x_2930_, lean_object* v___x_2931_, lean_object* v_self_2932_, lean_object* v_dir_2933_, lean_object* v_targetDecls_2934_, lean_object* v_pkg_2935_, lean_object* v_name_2936_, lean_object* v_config_2937_, lean_object* v_config_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v___y_2951_; lean_object* v___y_2952_; lean_object* v___y_2953_; lean_object* v_a_2954_; lean_object* v_a_2955_; lean_object* v_a_2972_; lean_object* v_a_2973_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v_a_3018_; lean_object* v_a_3019_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; lean_object* v___y_3034_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3045_; lean_object* v___y_3046_; lean_object* v___y_3047_; lean_object* v___y_3048_; lean_object* v___y_3049_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v_snd_3055_; lean_object* v_a_3056_; lean_object* v___y_3068_; lean_object* v___y_3069_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v_a_3095_; lean_object* v_a_3096_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___x_3134_; 
lean_inc_ref(v___y_2939_);
lean_inc_ref(v___y_2943_);
lean_inc(v___y_2942_);
lean_inc(v___y_2941_);
lean_inc(v___x_2931_);
v___x_3134_ = lean_apply_7(v___y_2939_, v___x_2930_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, lean_box(0));
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v_a_3136_; lean_object* v___x_3137_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
v_a_3136_ = lean_ctor_get(v___x_3134_, 1);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3134_, 2);
v___x_3137_ = l_Lake_Job_await___redArg(v_a_3135_, v_a_3136_);
if (lean_obj_tag(v___x_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v_a_3139_; lean_object* v___y_3141_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v_a_3150_; lean_object* v_a_3151_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v_a_3185_; lean_object* v_a_3186_; lean_object* v___y_3211_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; uint8_t v___x_3226_; 
v_a_3138_ = lean_ctor_get(v___x_3137_, 0);
lean_inc(v_a_3138_);
v_a_3139_ = lean_ctor_get(v___x_3137_, 1);
lean_inc(v_a_3139_);
lean_dec_ref_known(v___x_3137_, 2);
v___x_3223_ = lean_unsigned_to_nat(0u);
v___x_3224_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_3225_ = lean_array_get_size(v_a_3138_);
v___x_3226_ = lean_nat_dec_lt(v___x_3223_, v___x_3225_);
if (v___x_3226_ == 0)
{
v_a_3185_ = v___x_3224_;
v_a_3186_ = v_a_3139_;
goto v___jp_3184_;
}
else
{
uint8_t v___x_3227_; 
v___x_3227_ = lean_nat_dec_le(v___x_3225_, v___x_3225_);
if (v___x_3227_ == 0)
{
if (v___x_3226_ == 0)
{
v_a_3185_ = v___x_3224_;
v_a_3186_ = v_a_3139_;
goto v___jp_3184_;
}
else
{
size_t v___x_3228_; size_t v___x_3229_; lean_object* v___x_3230_; 
v___x_3228_ = ((size_t)0ULL);
v___x_3229_ = lean_usize_of_nat(v___x_3225_);
lean_inc_ref(v___y_2939_);
v___x_3230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3138_, v___x_3228_, v___x_3229_, v___x_3224_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3139_);
v___y_3211_ = v___x_3230_;
goto v___jp_3210_;
}
}
else
{
size_t v___x_3231_; size_t v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = ((size_t)0ULL);
v___x_3232_ = lean_usize_of_nat(v___x_3225_);
lean_inc_ref(v___y_2939_);
v___x_3233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3138_, v___x_3231_, v___x_3232_, v___x_3224_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3139_);
v___y_3211_ = v___x_3233_;
goto v___jp_3210_;
}
}
v___jp_3140_:
{
lean_object* v___x_3152_; lean_object* v___x_3153_; uint8_t v___x_3154_; 
v___x_3152_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
v___x_3153_ = lean_array_get_size(v_a_3138_);
v___x_3154_ = lean_nat_dec_lt(v___y_3143_, v___x_3153_);
if (v___x_3154_ == 0)
{
lean_dec(v_a_3138_);
v___y_3085_ = v___y_3141_;
v___y_3086_ = v___y_3142_;
v___y_3087_ = v___y_3143_;
v___y_3088_ = v___y_3144_;
v___y_3089_ = v___y_3145_;
v___y_3090_ = v___y_3146_;
v___y_3091_ = v_a_3150_;
v___y_3092_ = v___y_3147_;
v___y_3093_ = v___y_3148_;
v___y_3094_ = v___y_3149_;
v_a_3095_ = v___x_3152_;
v_a_3096_ = v_a_3151_;
goto v___jp_3084_;
}
else
{
uint8_t v___x_3155_; 
v___x_3155_ = lean_nat_dec_le(v___x_3153_, v___x_3153_);
if (v___x_3155_ == 0)
{
if (v___x_3154_ == 0)
{
lean_dec(v_a_3138_);
v___y_3085_ = v___y_3141_;
v___y_3086_ = v___y_3142_;
v___y_3087_ = v___y_3143_;
v___y_3088_ = v___y_3144_;
v___y_3089_ = v___y_3145_;
v___y_3090_ = v___y_3146_;
v___y_3091_ = v_a_3150_;
v___y_3092_ = v___y_3147_;
v___y_3093_ = v___y_3148_;
v___y_3094_ = v___y_3149_;
v_a_3095_ = v___x_3152_;
v_a_3096_ = v_a_3151_;
goto v___jp_3084_;
}
else
{
size_t v___x_3156_; size_t v___x_3157_; lean_object* v___x_3158_; 
v___x_3156_ = ((size_t)0ULL);
v___x_3157_ = lean_usize_of_nat(v___x_3153_);
lean_inc_ref(v___y_2939_);
v___x_3158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3138_, v___x_3156_, v___x_3157_, v___x_3152_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3151_);
lean_dec(v_a_3138_);
v___y_3119_ = v___y_3142_;
v___y_3120_ = v___y_3141_;
v___y_3121_ = v___y_3143_;
v___y_3122_ = v___y_3144_;
v___y_3123_ = v___y_3145_;
v___y_3124_ = v___y_3146_;
v___y_3125_ = v_a_3150_;
v___y_3126_ = v___y_3149_;
v___y_3127_ = v___y_3148_;
v___y_3128_ = v___y_3147_;
v___y_3129_ = v___x_3158_;
goto v___jp_3118_;
}
}
else
{
size_t v___x_3159_; size_t v___x_3160_; lean_object* v___x_3161_; 
v___x_3159_ = ((size_t)0ULL);
v___x_3160_ = lean_usize_of_nat(v___x_3153_);
lean_inc_ref(v___y_2939_);
v___x_3161_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3138_, v___x_3159_, v___x_3160_, v___x_3152_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3151_);
lean_dec(v_a_3138_);
v___y_3119_ = v___y_3142_;
v___y_3120_ = v___y_3141_;
v___y_3121_ = v___y_3143_;
v___y_3122_ = v___y_3144_;
v___y_3123_ = v___y_3145_;
v___y_3124_ = v___y_3146_;
v___y_3125_ = v_a_3150_;
v___y_3126_ = v___y_3149_;
v___y_3127_ = v___y_3148_;
v___y_3128_ = v___y_3147_;
v___y_3129_ = v___x_3161_;
goto v___jp_3118_;
}
}
}
v___jp_3162_:
{
if (lean_obj_tag(v___y_3172_) == 0)
{
lean_object* v_a_3173_; lean_object* v_a_3174_; 
v_a_3173_ = lean_ctor_get(v___y_3172_, 0);
lean_inc(v_a_3173_);
v_a_3174_ = lean_ctor_get(v___y_3172_, 1);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___y_3172_, 2);
v___y_3141_ = v___y_3164_;
v___y_3142_ = v___y_3163_;
v___y_3143_ = v___y_3165_;
v___y_3144_ = v___y_3166_;
v___y_3145_ = v___y_3167_;
v___y_3146_ = v___y_3168_;
v___y_3147_ = v___y_3171_;
v___y_3148_ = v___y_3170_;
v___y_3149_ = v___y_3169_;
v_a_3150_ = v_a_3173_;
v_a_3151_ = v_a_3174_;
goto v___jp_3140_;
}
else
{
lean_object* v_a_3175_; lean_object* v_a_3176_; lean_object* v___x_3178_; uint8_t v_isShared_3179_; uint8_t v_isSharedCheck_3183_; 
lean_dec_ref(v___y_3171_);
lean_dec_ref(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec_ref(v___y_3166_);
lean_dec_ref(v___y_3163_);
lean_dec(v_a_3138_);
lean_dec_ref(v___y_2939_);
lean_dec(v_name_2936_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3175_ = lean_ctor_get(v___y_3172_, 0);
v_a_3176_ = lean_ctor_get(v___y_3172_, 1);
v_isSharedCheck_3183_ = !lean_is_exclusive(v___y_3172_);
if (v_isSharedCheck_3183_ == 0)
{
v___x_3178_ = v___y_3172_;
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
else
{
lean_inc(v_a_3176_);
lean_inc(v_a_3175_);
lean_dec(v___y_3172_);
v___x_3178_ = lean_box(0);
v_isShared_3179_ = v_isSharedCheck_3183_;
goto v_resetjp_3177_;
}
v_resetjp_3177_:
{
lean_object* v___x_3181_; 
if (v_isShared_3179_ == 0)
{
v___x_3181_ = v___x_3178_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v_a_3175_);
lean_ctor_set(v_reuseFailAlloc_3182_, 1, v_a_3176_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
}
v___jp_3184_:
{
lean_object* v_toLeanConfig_3187_; lean_object* v_toLeanConfig_3188_; lean_object* v_buildDir_3189_; lean_object* v_nativeLibDir_3190_; lean_object* v_moreLinkObjs_3191_; lean_object* v_moreLinkLibs_3192_; lean_object* v_moreLinkArgs_3193_; lean_object* v_weakLinkArgs_3194_; lean_object* v_moreLinkObjs_3195_; lean_object* v_moreLinkLibs_3196_; lean_object* v_moreLinkArgs_3197_; lean_object* v_weakLinkArgs_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; uint8_t v___x_3202_; 
v_toLeanConfig_3187_ = lean_ctor_get(v_config_2937_, 1);
lean_inc_ref(v_toLeanConfig_3187_);
v_toLeanConfig_3188_ = lean_ctor_get(v_config_2938_, 0);
v_buildDir_3189_ = lean_ctor_get(v_config_2937_, 5);
lean_inc_ref(v_buildDir_3189_);
v_nativeLibDir_3190_ = lean_ctor_get(v_config_2937_, 7);
lean_inc_ref(v_nativeLibDir_3190_);
lean_dec_ref(v_config_2937_);
v_moreLinkObjs_3191_ = lean_ctor_get(v_toLeanConfig_3187_, 6);
lean_inc_ref(v_moreLinkObjs_3191_);
v_moreLinkLibs_3192_ = lean_ctor_get(v_toLeanConfig_3187_, 7);
lean_inc_ref(v_moreLinkLibs_3192_);
v_moreLinkArgs_3193_ = lean_ctor_get(v_toLeanConfig_3187_, 8);
lean_inc_ref(v_moreLinkArgs_3193_);
v_weakLinkArgs_3194_ = lean_ctor_get(v_toLeanConfig_3187_, 9);
lean_inc_ref(v_weakLinkArgs_3194_);
lean_dec_ref(v_toLeanConfig_3187_);
v_moreLinkObjs_3195_ = lean_ctor_get(v_toLeanConfig_3188_, 6);
v_moreLinkLibs_3196_ = lean_ctor_get(v_toLeanConfig_3188_, 7);
v_moreLinkArgs_3197_ = lean_ctor_get(v_toLeanConfig_3188_, 8);
v_weakLinkArgs_3198_ = lean_ctor_get(v_toLeanConfig_3188_, 9);
v___x_3199_ = l_Array_append___redArg(v_moreLinkObjs_3191_, v_moreLinkObjs_3195_);
v___x_3200_ = lean_unsigned_to_nat(0u);
v___x_3201_ = lean_array_get_size(v___x_3199_);
v___x_3202_ = lean_nat_dec_lt(v___x_3200_, v___x_3201_);
if (v___x_3202_ == 0)
{
lean_dec_ref(v___x_3199_);
v___y_3141_ = v_weakLinkArgs_3198_;
v___y_3142_ = v_buildDir_3189_;
v___y_3143_ = v___x_3200_;
v___y_3144_ = v_nativeLibDir_3190_;
v___y_3145_ = v_moreLinkArgs_3197_;
v___y_3146_ = v_weakLinkArgs_3194_;
v___y_3147_ = v_moreLinkLibs_3192_;
v___y_3148_ = v_moreLinkLibs_3196_;
v___y_3149_ = v_moreLinkArgs_3193_;
v_a_3150_ = v_a_3185_;
v_a_3151_ = v_a_3186_;
goto v___jp_3140_;
}
else
{
uint8_t v___x_3203_; 
v___x_3203_ = lean_nat_dec_le(v___x_3201_, v___x_3201_);
if (v___x_3203_ == 0)
{
if (v___x_3202_ == 0)
{
lean_dec_ref(v___x_3199_);
v___y_3141_ = v_weakLinkArgs_3198_;
v___y_3142_ = v_buildDir_3189_;
v___y_3143_ = v___x_3200_;
v___y_3144_ = v_nativeLibDir_3190_;
v___y_3145_ = v_moreLinkArgs_3197_;
v___y_3146_ = v_weakLinkArgs_3194_;
v___y_3147_ = v_moreLinkLibs_3192_;
v___y_3148_ = v_moreLinkLibs_3196_;
v___y_3149_ = v_moreLinkArgs_3193_;
v_a_3150_ = v_a_3185_;
v_a_3151_ = v_a_3186_;
goto v___jp_3140_;
}
else
{
size_t v___x_3204_; size_t v___x_3205_; lean_object* v___x_3206_; 
v___x_3204_ = ((size_t)0ULL);
v___x_3205_ = lean_usize_of_nat(v___x_3201_);
lean_inc_ref(v___y_2939_);
lean_inc_ref(v_pkg_2935_);
v___x_3206_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2935_, v___x_3199_, v___x_3204_, v___x_3205_, v_a_3185_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3186_);
lean_dec_ref(v___x_3199_);
v___y_3163_ = v_buildDir_3189_;
v___y_3164_ = v_weakLinkArgs_3198_;
v___y_3165_ = v___x_3200_;
v___y_3166_ = v_nativeLibDir_3190_;
v___y_3167_ = v_moreLinkArgs_3197_;
v___y_3168_ = v_weakLinkArgs_3194_;
v___y_3169_ = v_moreLinkArgs_3193_;
v___y_3170_ = v_moreLinkLibs_3196_;
v___y_3171_ = v_moreLinkLibs_3192_;
v___y_3172_ = v___x_3206_;
goto v___jp_3162_;
}
}
else
{
size_t v___x_3207_; size_t v___x_3208_; lean_object* v___x_3209_; 
v___x_3207_ = ((size_t)0ULL);
v___x_3208_ = lean_usize_of_nat(v___x_3201_);
lean_inc_ref(v___y_2939_);
lean_inc_ref(v_pkg_2935_);
v___x_3209_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2935_, v___x_3199_, v___x_3207_, v___x_3208_, v_a_3185_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3186_);
lean_dec_ref(v___x_3199_);
v___y_3163_ = v_buildDir_3189_;
v___y_3164_ = v_weakLinkArgs_3198_;
v___y_3165_ = v___x_3200_;
v___y_3166_ = v_nativeLibDir_3190_;
v___y_3167_ = v_moreLinkArgs_3197_;
v___y_3168_ = v_weakLinkArgs_3194_;
v___y_3169_ = v_moreLinkArgs_3193_;
v___y_3170_ = v_moreLinkLibs_3196_;
v___y_3171_ = v_moreLinkLibs_3192_;
v___y_3172_ = v___x_3209_;
goto v___jp_3162_;
}
}
}
v___jp_3210_:
{
if (lean_obj_tag(v___y_3211_) == 0)
{
lean_object* v_a_3212_; lean_object* v_a_3213_; 
v_a_3212_ = lean_ctor_get(v___y_3211_, 0);
lean_inc(v_a_3212_);
v_a_3213_ = lean_ctor_get(v___y_3211_, 1);
lean_inc(v_a_3213_);
lean_dec_ref_known(v___y_3211_, 2);
v_a_3185_ = v_a_3212_;
v_a_3186_ = v_a_3213_;
goto v___jp_3184_;
}
else
{
lean_object* v_a_3214_; lean_object* v_a_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3222_; 
lean_dec(v_a_3138_);
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_config_2937_);
lean_dec(v_name_2936_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3214_ = lean_ctor_get(v___y_3211_, 0);
v_a_3215_ = lean_ctor_get(v___y_3211_, 1);
v_isSharedCheck_3222_ = !lean_is_exclusive(v___y_3211_);
if (v_isSharedCheck_3222_ == 0)
{
v___x_3217_ = v___y_3211_;
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_a_3215_);
lean_inc(v_a_3214_);
lean_dec(v___y_3211_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3222_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v___x_3220_; 
if (v_isShared_3218_ == 0)
{
v___x_3220_ = v___x_3217_;
goto v_reusejp_3219_;
}
else
{
lean_object* v_reuseFailAlloc_3221_; 
v_reuseFailAlloc_3221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3221_, 0, v_a_3214_);
lean_ctor_set(v_reuseFailAlloc_3221_, 1, v_a_3215_);
v___x_3220_ = v_reuseFailAlloc_3221_;
goto v_reusejp_3219_;
}
v_reusejp_3219_:
{
return v___x_3220_;
}
}
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_config_2937_);
lean_dec(v_name_2936_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3234_ = lean_ctor_get(v___x_3137_, 0);
v_a_3235_ = lean_ctor_get(v___x_3137_, 1);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3137_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_inc(v_a_3234_);
lean_dec(v___x_3137_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3234_);
lean_ctor_set(v_reuseFailAlloc_3241_, 1, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_config_2937_);
lean_dec(v_name_2936_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3243_ = lean_ctor_get(v___x_3134_, 0);
v_a_3244_ = lean_ctor_get(v___x_3134_, 1);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3134_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_inc(v_a_3243_);
lean_dec(v___x_3134_);
v___x_3246_ = lean_box(0);
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
v_resetjp_3245_:
{
lean_object* v___x_3249_; 
if (v_isShared_3247_ == 0)
{
v___x_3249_ = v___x_3246_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3243_);
lean_ctor_set(v_reuseFailAlloc_3250_, 1, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
v___jp_2946_:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; uint8_t v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; uint8_t v___x_2966_; uint8_t v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; 
lean_inc_ref(v_self_2932_);
v___x_2956_ = l_Lake_LeanLib_libName(v_self_2932_);
v___x_2957_ = l_System_FilePath_normalize(v___y_2948_);
v___x_2958_ = l_Lake_joinRelative(v_dir_2933_, v___x_2957_);
v___x_2959_ = l_System_FilePath_normalize(v___y_2949_);
v___x_2960_ = l_Lake_joinRelative(v___x_2958_, v___x_2959_);
v___x_2961_ = 0;
v___x_2962_ = l_Lake_nameToSharedLib(v___x_2956_, v___x_2961_);
v___x_2963_ = l_Lake_joinRelative(v___x_2960_, v___x_2962_);
v___x_2964_ = l_Array_append___redArg(v___y_2951_, v___y_2947_);
v___x_2965_ = l_Array_append___redArg(v___y_2953_, v___y_2950_);
v___x_2966_ = l_Lake_LeanLib_isPlugin(v_self_2932_);
v___x_2967_ = l_System_Platform_isWindows;
v___x_2968_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2969_ = l_Lake_buildLeanSharedLib(v___x_2956_, v___x_2963_, v___y_2952_, v_a_2954_, v___x_2964_, v___x_2965_, v___x_2966_, v___x_2967_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v___x_2968_);
lean_dec(v___x_2931_);
lean_dec_ref(v___y_2952_);
v___x_2970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2970_, 0, v___x_2969_);
lean_ctor_set(v___x_2970_, 1, v_a_2955_);
return v___x_2970_;
}
v___jp_2971_:
{
lean_object* v___x_2974_; 
v___x_2974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2974_, 0, v_a_2972_);
lean_ctor_set(v___x_2974_, 1, v_a_2973_);
return v___x_2974_;
}
v___jp_2975_:
{
if (lean_obj_tag(v___y_2983_) == 0)
{
lean_object* v_a_2984_; lean_object* v_a_2985_; 
v_a_2984_ = lean_ctor_get(v___y_2983_, 0);
lean_inc(v_a_2984_);
v_a_2985_ = lean_ctor_get(v___y_2983_, 1);
lean_inc(v_a_2985_);
lean_dec_ref_known(v___y_2983_, 2);
v___y_2947_ = v___y_2977_;
v___y_2948_ = v___y_2976_;
v___y_2949_ = v___y_2978_;
v___y_2950_ = v___y_2979_;
v___y_2951_ = v___y_2980_;
v___y_2952_ = v___y_2981_;
v___y_2953_ = v___y_2982_;
v_a_2954_ = v_a_2984_;
v_a_2955_ = v_a_2985_;
goto v___jp_2946_;
}
else
{
lean_object* v_a_2986_; lean_object* v_a_2987_; 
lean_dec_ref(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec_ref(v___y_2978_);
lean_dec_ref(v___y_2976_);
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_2986_ = lean_ctor_get(v___y_2983_, 0);
lean_inc(v_a_2986_);
v_a_2987_ = lean_ctor_get(v___y_2983_, 1);
lean_inc(v_a_2987_);
lean_dec_ref_known(v___y_2983_, 2);
v_a_2972_ = v_a_2986_;
v_a_2973_ = v_a_2987_;
goto v___jp_2971_;
}
}
v___jp_2988_:
{
lean_object* v___x_3000_; uint8_t v___x_3001_; 
v___x_3000_ = lean_array_get_size(v___y_2999_);
v___x_3001_ = lean_nat_dec_lt(v___y_2993_, v___x_3000_);
if (v___x_3001_ == 0)
{
lean_dec_ref(v___y_2999_);
v___y_2947_ = v___y_2990_;
v___y_2948_ = v___y_2989_;
v___y_2949_ = v___y_2994_;
v___y_2950_ = v___y_2995_;
v___y_2951_ = v___y_2996_;
v___y_2952_ = v___y_2997_;
v___y_2953_ = v___y_2998_;
v_a_2954_ = v___y_2992_;
v_a_2955_ = v___y_2991_;
goto v___jp_2946_;
}
else
{
uint8_t v___x_3002_; 
v___x_3002_ = lean_nat_dec_le(v___x_3000_, v___x_3000_);
if (v___x_3002_ == 0)
{
if (v___x_3001_ == 0)
{
lean_dec_ref(v___y_2999_);
v___y_2947_ = v___y_2990_;
v___y_2948_ = v___y_2989_;
v___y_2949_ = v___y_2994_;
v___y_2950_ = v___y_2995_;
v___y_2951_ = v___y_2996_;
v___y_2952_ = v___y_2997_;
v___y_2953_ = v___y_2998_;
v_a_2954_ = v___y_2992_;
v_a_2955_ = v___y_2991_;
goto v___jp_2946_;
}
else
{
size_t v___x_3003_; size_t v___x_3004_; lean_object* v___x_3005_; 
v___x_3003_ = ((size_t)0ULL);
v___x_3004_ = lean_usize_of_nat(v___x_3000_);
lean_inc_ref(v___y_2939_);
v___x_3005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2999_, v___x_3003_, v___x_3004_, v___y_2992_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2991_);
lean_dec_ref(v___y_2999_);
v___y_2976_ = v___y_2989_;
v___y_2977_ = v___y_2990_;
v___y_2978_ = v___y_2994_;
v___y_2979_ = v___y_2995_;
v___y_2980_ = v___y_2996_;
v___y_2981_ = v___y_2997_;
v___y_2982_ = v___y_2998_;
v___y_2983_ = v___x_3005_;
goto v___jp_2975_;
}
}
else
{
size_t v___x_3006_; size_t v___x_3007_; lean_object* v___x_3008_; 
v___x_3006_ = ((size_t)0ULL);
v___x_3007_ = lean_usize_of_nat(v___x_3000_);
lean_inc_ref(v___y_2939_);
v___x_3008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2999_, v___x_3006_, v___x_3007_, v___y_2992_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2991_);
lean_dec_ref(v___y_2999_);
v___y_2976_ = v___y_2989_;
v___y_2977_ = v___y_2990_;
v___y_2978_ = v___y_2994_;
v___y_2979_ = v___y_2995_;
v___y_2980_ = v___y_2996_;
v___y_2981_ = v___y_2997_;
v___y_2982_ = v___y_2998_;
v___y_2983_ = v___x_3008_;
goto v___jp_2975_;
}
}
}
v___jp_3009_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; uint8_t v___x_3022_; 
v___x_3020_ = lean_mk_empty_array_with_capacity(v___y_3012_);
v___x_3021_ = lean_array_get_size(v_targetDecls_2934_);
v___x_3022_ = lean_nat_dec_lt(v___y_3012_, v___x_3021_);
if (v___x_3022_ == 0)
{
lean_dec_ref(v_pkg_2935_);
v___y_2989_ = v___y_3011_;
v___y_2990_ = v___y_3010_;
v___y_2991_ = v_a_3019_;
v___y_2992_ = v_a_3018_;
v___y_2993_ = v___y_3012_;
v___y_2994_ = v___y_3013_;
v___y_2995_ = v___y_3014_;
v___y_2996_ = v___y_3015_;
v___y_2997_ = v___y_3016_;
v___y_2998_ = v___y_3017_;
v___y_2999_ = v___x_3020_;
goto v___jp_2988_;
}
else
{
uint8_t v___x_3023_; 
v___x_3023_ = lean_nat_dec_le(v___x_3021_, v___x_3021_);
if (v___x_3023_ == 0)
{
if (v___x_3022_ == 0)
{
lean_dec_ref(v_pkg_2935_);
v___y_2989_ = v___y_3011_;
v___y_2990_ = v___y_3010_;
v___y_2991_ = v_a_3019_;
v___y_2992_ = v_a_3018_;
v___y_2993_ = v___y_3012_;
v___y_2994_ = v___y_3013_;
v___y_2995_ = v___y_3014_;
v___y_2996_ = v___y_3015_;
v___y_2997_ = v___y_3016_;
v___y_2998_ = v___y_3017_;
v___y_2999_ = v___x_3020_;
goto v___jp_2988_;
}
else
{
size_t v___x_3024_; size_t v___x_3025_; lean_object* v___x_3026_; 
v___x_3024_ = ((size_t)0ULL);
v___x_3025_ = lean_usize_of_nat(v___x_3021_);
v___x_3026_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2935_, v_targetDecls_2934_, v___x_3024_, v___x_3025_, v___x_3020_);
v___y_2989_ = v___y_3011_;
v___y_2990_ = v___y_3010_;
v___y_2991_ = v_a_3019_;
v___y_2992_ = v_a_3018_;
v___y_2993_ = v___y_3012_;
v___y_2994_ = v___y_3013_;
v___y_2995_ = v___y_3014_;
v___y_2996_ = v___y_3015_;
v___y_2997_ = v___y_3016_;
v___y_2998_ = v___y_3017_;
v___y_2999_ = v___x_3026_;
goto v___jp_2988_;
}
}
else
{
size_t v___x_3027_; size_t v___x_3028_; lean_object* v___x_3029_; 
v___x_3027_ = ((size_t)0ULL);
v___x_3028_ = lean_usize_of_nat(v___x_3021_);
v___x_3029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2935_, v_targetDecls_2934_, v___x_3027_, v___x_3028_, v___x_3020_);
v___y_2989_ = v___y_3011_;
v___y_2990_ = v___y_3010_;
v___y_2991_ = v_a_3019_;
v___y_2992_ = v_a_3018_;
v___y_2993_ = v___y_3012_;
v___y_2994_ = v___y_3013_;
v___y_2995_ = v___y_3014_;
v___y_2996_ = v___y_3015_;
v___y_2997_ = v___y_3016_;
v___y_2998_ = v___y_3017_;
v___y_2999_ = v___x_3029_;
goto v___jp_2988_;
}
}
}
v___jp_3030_:
{
if (lean_obj_tag(v___y_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v_a_3041_; 
v_a_3040_ = lean_ctor_get(v___y_3039_, 0);
lean_inc(v_a_3040_);
v_a_3041_ = lean_ctor_get(v___y_3039_, 1);
lean_inc(v_a_3041_);
lean_dec_ref_known(v___y_3039_, 2);
v___y_3010_ = v___y_3032_;
v___y_3011_ = v___y_3031_;
v___y_3012_ = v___y_3033_;
v___y_3013_ = v___y_3034_;
v___y_3014_ = v___y_3035_;
v___y_3015_ = v___y_3036_;
v___y_3016_ = v___y_3037_;
v___y_3017_ = v___y_3038_;
v_a_3018_ = v_a_3040_;
v_a_3019_ = v_a_3041_;
goto v___jp_3009_;
}
else
{
lean_object* v_a_3042_; lean_object* v_a_3043_; 
lean_dec_ref(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec_ref(v___y_3034_);
lean_dec_ref(v___y_3031_);
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3042_ = lean_ctor_get(v___y_3039_, 0);
lean_inc(v_a_3042_);
v_a_3043_ = lean_ctor_get(v___y_3039_, 1);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___y_3039_, 2);
v_a_2972_ = v_a_3042_;
v_a_2973_ = v_a_3043_;
goto v___jp_2971_;
}
}
v___jp_3044_:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; uint8_t v___x_3059_; 
v___x_3057_ = l_Array_append___redArg(v___y_3054_, v___y_3053_);
v___x_3058_ = lean_array_get_size(v___x_3057_);
v___x_3059_ = lean_nat_dec_lt(v___y_3047_, v___x_3058_);
if (v___x_3059_ == 0)
{
lean_dec_ref(v___x_3057_);
v___y_3010_ = v___y_3046_;
v___y_3011_ = v___y_3045_;
v___y_3012_ = v___y_3047_;
v___y_3013_ = v___y_3048_;
v___y_3014_ = v___y_3049_;
v___y_3015_ = v___y_3050_;
v___y_3016_ = v___y_3051_;
v___y_3017_ = v___y_3052_;
v_a_3018_ = v_snd_3055_;
v_a_3019_ = v_a_3056_;
goto v___jp_3009_;
}
else
{
uint8_t v___x_3060_; 
v___x_3060_ = lean_nat_dec_le(v___x_3058_, v___x_3058_);
if (v___x_3060_ == 0)
{
if (v___x_3059_ == 0)
{
lean_dec_ref(v___x_3057_);
v___y_3010_ = v___y_3046_;
v___y_3011_ = v___y_3045_;
v___y_3012_ = v___y_3047_;
v___y_3013_ = v___y_3048_;
v___y_3014_ = v___y_3049_;
v___y_3015_ = v___y_3050_;
v___y_3016_ = v___y_3051_;
v___y_3017_ = v___y_3052_;
v_a_3018_ = v_snd_3055_;
v_a_3019_ = v_a_3056_;
goto v___jp_3009_;
}
else
{
size_t v___x_3061_; size_t v___x_3062_; lean_object* v___x_3063_; 
v___x_3061_ = ((size_t)0ULL);
v___x_3062_ = lean_usize_of_nat(v___x_3058_);
lean_inc_ref(v___y_2939_);
lean_inc_ref(v_pkg_2935_);
v___x_3063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2935_, v___x_3057_, v___x_3061_, v___x_3062_, v_snd_3055_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3056_);
lean_dec_ref(v___x_3057_);
v___y_3031_ = v___y_3045_;
v___y_3032_ = v___y_3046_;
v___y_3033_ = v___y_3047_;
v___y_3034_ = v___y_3048_;
v___y_3035_ = v___y_3049_;
v___y_3036_ = v___y_3050_;
v___y_3037_ = v___y_3051_;
v___y_3038_ = v___y_3052_;
v___y_3039_ = v___x_3063_;
goto v___jp_3030_;
}
}
else
{
size_t v___x_3064_; size_t v___x_3065_; lean_object* v___x_3066_; 
v___x_3064_ = ((size_t)0ULL);
v___x_3065_ = lean_usize_of_nat(v___x_3058_);
lean_inc_ref(v___y_2939_);
lean_inc_ref(v_pkg_2935_);
v___x_3066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2935_, v___x_3057_, v___x_3064_, v___x_3065_, v_snd_3055_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3056_);
lean_dec_ref(v___x_3057_);
v___y_3031_ = v___y_3045_;
v___y_3032_ = v___y_3046_;
v___y_3033_ = v___y_3047_;
v___y_3034_ = v___y_3048_;
v___y_3035_ = v___y_3049_;
v___y_3036_ = v___y_3050_;
v___y_3037_ = v___y_3051_;
v___y_3038_ = v___y_3052_;
v___y_3039_ = v___x_3066_;
goto v___jp_3030_;
}
}
}
v___jp_3067_:
{
if (lean_obj_tag(v___y_3078_) == 0)
{
lean_object* v_a_3079_; lean_object* v_a_3080_; lean_object* v_snd_3081_; 
v_a_3079_ = lean_ctor_get(v___y_3078_, 0);
lean_inc(v_a_3079_);
v_a_3080_ = lean_ctor_get(v___y_3078_, 1);
lean_inc(v_a_3080_);
lean_dec_ref_known(v___y_3078_, 2);
v_snd_3081_ = lean_ctor_get(v_a_3079_, 1);
lean_inc(v_snd_3081_);
lean_dec(v_a_3079_);
v___y_3045_ = v___y_3069_;
v___y_3046_ = v___y_3068_;
v___y_3047_ = v___y_3070_;
v___y_3048_ = v___y_3071_;
v___y_3049_ = v___y_3072_;
v___y_3050_ = v___y_3073_;
v___y_3051_ = v___y_3074_;
v___y_3052_ = v___y_3077_;
v___y_3053_ = v___y_3076_;
v___y_3054_ = v___y_3075_;
v_snd_3055_ = v_snd_3081_;
v_a_3056_ = v_a_3080_;
goto v___jp_3044_;
}
else
{
lean_object* v_a_3082_; lean_object* v_a_3083_; 
lean_dec_ref(v___y_3077_);
lean_dec_ref(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec_ref(v___y_3071_);
lean_dec_ref(v___y_3069_);
lean_dec_ref(v___y_2939_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3082_ = lean_ctor_get(v___y_3078_, 0);
lean_inc(v_a_3082_);
v_a_3083_ = lean_ctor_get(v___y_3078_, 1);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___y_3078_, 2);
v_a_2972_ = v_a_3082_;
v_a_2973_ = v_a_3083_;
goto v___jp_2971_;
}
}
v___jp_3084_:
{
lean_object* v_toArray_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3116_; 
v_toArray_3097_ = lean_ctor_get(v_a_3095_, 1);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_a_3095_);
if (v_isSharedCheck_3116_ == 0)
{
lean_object* v_unused_3117_; 
v_unused_3117_ = lean_ctor_get(v_a_3095_, 0);
lean_dec(v_unused_3117_);
v___x_3099_ = v_a_3095_;
v_isShared_3100_ = v_isSharedCheck_3116_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_toArray_3097_);
lean_dec(v_a_3095_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3116_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; uint8_t v___x_3103_; 
v___x_3101_ = lean_mk_empty_array_with_capacity(v___y_3087_);
v___x_3102_ = lean_array_get_size(v_toArray_3097_);
v___x_3103_ = lean_nat_dec_lt(v___y_3087_, v___x_3102_);
if (v___x_3103_ == 0)
{
lean_del_object(v___x_3099_);
lean_dec_ref(v_toArray_3097_);
lean_dec(v_name_2936_);
v___y_3045_ = v___y_3086_;
v___y_3046_ = v___y_3085_;
v___y_3047_ = v___y_3087_;
v___y_3048_ = v___y_3088_;
v___y_3049_ = v___y_3089_;
v___y_3050_ = v___y_3090_;
v___y_3051_ = v___y_3091_;
v___y_3052_ = v___y_3094_;
v___y_3053_ = v___y_3093_;
v___y_3054_ = v___y_3092_;
v_snd_3055_ = v___x_3101_;
v_a_3056_ = v_a_3096_;
goto v___jp_3044_;
}
else
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3107_; 
v___x_3104_ = l_Lean_NameSet_empty;
v___x_3105_ = l_Lean_NameSet_insert(v___x_3104_, v_name_2936_);
lean_inc_ref(v___x_3101_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 1, v___x_3101_);
lean_ctor_set(v___x_3099_, 0, v___x_3105_);
v___x_3107_ = v___x_3099_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3105_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v___x_3101_);
v___x_3107_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
uint8_t v___x_3108_; 
v___x_3108_ = lean_nat_dec_le(v___x_3102_, v___x_3102_);
if (v___x_3108_ == 0)
{
if (v___x_3103_ == 0)
{
lean_dec_ref(v___x_3107_);
lean_dec_ref(v_toArray_3097_);
v___y_3045_ = v___y_3086_;
v___y_3046_ = v___y_3085_;
v___y_3047_ = v___y_3087_;
v___y_3048_ = v___y_3088_;
v___y_3049_ = v___y_3089_;
v___y_3050_ = v___y_3090_;
v___y_3051_ = v___y_3091_;
v___y_3052_ = v___y_3094_;
v___y_3053_ = v___y_3093_;
v___y_3054_ = v___y_3092_;
v_snd_3055_ = v___x_3101_;
v_a_3056_ = v_a_3096_;
goto v___jp_3044_;
}
else
{
size_t v___x_3109_; size_t v___x_3110_; lean_object* v___x_3111_; 
lean_dec_ref(v___x_3101_);
v___x_3109_ = ((size_t)0ULL);
v___x_3110_ = lean_usize_of_nat(v___x_3102_);
lean_inc_ref(v___y_2939_);
v___x_3111_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_3097_, v___x_3109_, v___x_3110_, v___x_3107_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3096_);
lean_dec_ref(v_toArray_3097_);
v___y_3068_ = v___y_3085_;
v___y_3069_ = v___y_3086_;
v___y_3070_ = v___y_3087_;
v___y_3071_ = v___y_3088_;
v___y_3072_ = v___y_3089_;
v___y_3073_ = v___y_3090_;
v___y_3074_ = v___y_3091_;
v___y_3075_ = v___y_3092_;
v___y_3076_ = v___y_3093_;
v___y_3077_ = v___y_3094_;
v___y_3078_ = v___x_3111_;
goto v___jp_3067_;
}
}
else
{
size_t v___x_3112_; size_t v___x_3113_; lean_object* v___x_3114_; 
lean_dec_ref(v___x_3101_);
v___x_3112_ = ((size_t)0ULL);
v___x_3113_ = lean_usize_of_nat(v___x_3102_);
lean_inc_ref(v___y_2939_);
v___x_3114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_3097_, v___x_3112_, v___x_3113_, v___x_3107_, v___y_2939_, v___x_2931_, v___y_2941_, v___y_2942_, v___y_2943_, v_a_3096_);
lean_dec_ref(v_toArray_3097_);
v___y_3068_ = v___y_3085_;
v___y_3069_ = v___y_3086_;
v___y_3070_ = v___y_3087_;
v___y_3071_ = v___y_3088_;
v___y_3072_ = v___y_3089_;
v___y_3073_ = v___y_3090_;
v___y_3074_ = v___y_3091_;
v___y_3075_ = v___y_3092_;
v___y_3076_ = v___y_3093_;
v___y_3077_ = v___y_3094_;
v___y_3078_ = v___x_3114_;
goto v___jp_3067_;
}
}
}
}
}
v___jp_3118_:
{
if (lean_obj_tag(v___y_3129_) == 0)
{
lean_object* v_a_3130_; lean_object* v_a_3131_; 
v_a_3130_ = lean_ctor_get(v___y_3129_, 0);
lean_inc(v_a_3130_);
v_a_3131_ = lean_ctor_get(v___y_3129_, 1);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___y_3129_, 2);
v___y_3085_ = v___y_3120_;
v___y_3086_ = v___y_3119_;
v___y_3087_ = v___y_3121_;
v___y_3088_ = v___y_3122_;
v___y_3089_ = v___y_3123_;
v___y_3090_ = v___y_3124_;
v___y_3091_ = v___y_3125_;
v___y_3092_ = v___y_3128_;
v___y_3093_ = v___y_3127_;
v___y_3094_ = v___y_3126_;
v_a_3095_ = v_a_3130_;
v_a_3096_ = v_a_3131_;
goto v___jp_3084_;
}
else
{
lean_object* v_a_3132_; lean_object* v_a_3133_; 
lean_dec_ref(v___y_3128_);
lean_dec_ref(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec_ref(v___y_3124_);
lean_dec_ref(v___y_3122_);
lean_dec_ref(v___y_3119_);
lean_dec_ref(v___y_2939_);
lean_dec(v_name_2936_);
lean_dec_ref(v_pkg_2935_);
lean_dec_ref(v_dir_2933_);
lean_dec_ref(v_self_2932_);
lean_dec(v___x_2931_);
v_a_3132_ = lean_ctor_get(v___y_3129_, 0);
lean_inc(v_a_3132_);
v_a_3133_ = lean_ctor_get(v___y_3129_, 1);
lean_inc(v_a_3133_);
lean_dec_ref_known(v___y_3129_, 2);
v_a_2972_ = v_a_3132_;
v_a_2973_ = v_a_3133_;
goto v___jp_2971_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object* v___x_3252_, lean_object* v___x_3253_, lean_object* v_self_3254_, lean_object* v_dir_3255_, lean_object* v_targetDecls_3256_, lean_object* v_pkg_3257_, lean_object* v_name_3258_, lean_object* v_config_3259_, lean_object* v_config_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(v___x_3252_, v___x_3253_, v_self_3254_, v_dir_3255_, v_targetDecls_3256_, v_pkg_3257_, v_name_3258_, v_config_3259_, v_config_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec(v_config_3260_);
lean_dec_ref(v_targetDecls_3256_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object* v_self_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v_pkg_3278_; lean_object* v_name_3279_; lean_object* v_config_3280_; lean_object* v_keyName_3281_; lean_object* v_dir_3282_; lean_object* v_config_3283_; lean_object* v_targetDecls_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___f_3291_; lean_object* v___x_3292_; 
v_pkg_3278_ = lean_ctor_get(v_self_3270_, 0);
lean_inc_ref_n(v_pkg_3278_, 2);
v_name_3279_ = lean_ctor_get(v_self_3270_, 1);
lean_inc_n(v_name_3279_, 3);
v_config_3280_ = lean_ctor_get(v_self_3270_, 2);
lean_inc(v_config_3280_);
v_keyName_3281_ = lean_ctor_get(v_pkg_3278_, 2);
v_dir_3282_ = lean_ctor_get(v_pkg_3278_, 4);
lean_inc_ref(v_dir_3282_);
v_config_3283_ = lean_ctor_get(v_pkg_3278_, 6);
lean_inc_ref(v_config_3283_);
v_targetDecls_3284_ = lean_ctor_get(v_pkg_3278_, 15);
lean_inc_ref(v_targetDecls_3284_);
v___x_3285_ = l_Lake_instDataKindDynlib;
v___x_3286_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_3281_);
v___x_3287_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3287_, 0, v_keyName_3281_);
lean_ctor_set(v___x_3287_, 1, v_name_3279_);
v___x_3288_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3270_);
v___x_3289_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3287_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
lean_ctor_set(v___x_3289_, 2, v_self_3270_);
lean_ctor_set(v___x_3289_, 3, v___x_3286_);
v___x_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3290_, 0, v_pkg_3278_);
v___f_3291_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3291_, 0, v___x_3289_);
lean_closure_set(v___f_3291_, 1, v___x_3290_);
lean_closure_set(v___f_3291_, 2, v_self_3270_);
lean_closure_set(v___f_3291_, 3, v_dir_3282_);
lean_closure_set(v___f_3291_, 4, v_targetDecls_3284_);
lean_closure_set(v___f_3291_, 5, v_pkg_3278_);
lean_closure_set(v___f_3291_, 6, v_name_3279_);
lean_closure_set(v___f_3291_, 7, v_config_3283_);
lean_closure_set(v___f_3291_, 8, v_config_3280_);
v___x_3292_ = l_Lake_ensureJob___redArg(v___x_3285_, v___f_3291_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3322_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
v_a_3294_ = lean_ctor_get(v___x_3292_, 1);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3296_ = v___x_3292_;
v_isShared_3297_ = v_isSharedCheck_3322_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_inc(v_a_3293_);
lean_dec(v___x_3292_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3322_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v_task_3298_; lean_object* v_kind_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3320_; 
v_task_3298_ = lean_ctor_get(v_a_3293_, 0);
v_kind_3299_ = lean_ctor_get(v_a_3293_, 1);
v_isSharedCheck_3320_ = !lean_is_exclusive(v_a_3293_);
if (v_isSharedCheck_3320_ == 0)
{
lean_object* v_unused_3321_; 
v_unused_3321_ = lean_ctor_get(v_a_3293_, 2);
lean_dec(v_unused_3321_);
v___x_3301_ = v_a_3293_;
v_isShared_3302_ = v_isSharedCheck_3320_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_kind_3299_);
lean_inc(v_task_3298_);
lean_dec(v_a_3293_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3320_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v_registeredJobs_3303_; lean_object* v___x_3304_; uint8_t v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; uint8_t v___x_3309_; lean_object* v_job_3311_; 
v_registeredJobs_3303_ = lean_ctor_get(v_a_3275_, 3);
v___x_3304_ = lean_st_ref_take(v_registeredJobs_3303_);
v___x_3305_ = 1;
v___x_3306_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3279_, v___x_3305_);
v___x_3307_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0));
v___x_3308_ = lean_string_append(v___x_3306_, v___x_3307_);
v___x_3309_ = 0;
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 2, v___x_3308_);
v_job_3311_ = v___x_3301_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_task_3298_);
lean_ctor_set(v_reuseFailAlloc_3319_, 1, v_kind_3299_);
lean_ctor_set(v_reuseFailAlloc_3319_, 2, v___x_3308_);
v_job_3311_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3317_; 
lean_ctor_set_uint8(v_job_3311_, sizeof(void*)*3, v___x_3309_);
lean_inc_ref(v_job_3311_);
v___x_3312_ = l_Lake_Job_toOpaque___redArg(v_job_3311_);
v___x_3313_ = lean_array_push(v___x_3304_, v___x_3312_);
v___x_3314_ = lean_st_ref_set(v_registeredJobs_3303_, v___x_3313_);
v___x_3315_ = l_Lake_Job_renew___redArg(v_job_3311_);
if (v_isShared_3297_ == 0)
{
lean_ctor_set(v___x_3296_, 0, v___x_3315_);
v___x_3317_ = v___x_3296_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v___x_3315_);
lean_ctor_set(v_reuseFailAlloc_3318_, 1, v_a_3294_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
}
}
else
{
lean_dec(v_name_3279_);
return v___x_3292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object* v_self_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_){
_start:
{
lean_object* v_res_3331_; 
v_res_3331_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(v_self_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_);
lean_dec_ref(v_a_3328_);
lean_dec(v_a_3327_);
lean_dec(v_a_3326_);
lean_dec(v_a_3325_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t v_fmt_3332_, lean_object* v_a_3333_){
_start:
{
if (v_fmt_3332_ == 0)
{
lean_object* v_path_3334_; 
v_path_3334_ = lean_ctor_get(v_a_3333_, 0);
lean_inc_ref(v_path_3334_);
return v_path_3334_;
}
else
{
lean_object* v_path_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v_path_3335_ = lean_ctor_get(v_a_3333_, 0);
lean_inc_ref(v_path_3335_);
v___x_3336_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3336_, 0, v_path_3335_);
v___x_3337_ = l_Lean_Json_compress(v___x_3336_);
return v___x_3337_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object* v_fmt_3338_, lean_object* v_a_3339_){
_start:
{
uint8_t v_fmt_boxed_3340_; lean_object* v_res_3341_; 
v_fmt_boxed_3340_ = lean_unbox(v_fmt_3338_);
v_res_3341_ = l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(v_fmt_boxed_3340_, v_a_3339_);
lean_dec_ref(v_a_3339_);
return v_res_3341_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_3344_; uint8_t v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___f_3344_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__0));
v___x_3345_ = 1;
v___x_3346_ = l_Lake_instDataKindDynlib;
v___x_3347_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__1));
v___x_3348_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3349_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
lean_ctor_set(v___x_3349_, 1, v___x_3347_);
lean_ctor_set(v___x_3349_, 2, v___x_3346_);
lean_ctor_set(v___x_3349_, 3, v___f_3344_);
lean_ctor_set_uint8(v___x_3349_, sizeof(void*)*4, v___x_3345_);
lean_ctor_set_uint8(v___x_3349_, sizeof(void*)*4 + 1, v___x_3345_);
return v___x_3349_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig(void){
_start:
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_obj_once(&l_Lake_LeanLib_sharedFacetConfig___closed__2, &l_Lake_LeanLib_sharedFacetConfig___closed__2_once, _init_l_Lake_LeanLib_sharedFacetConfig___closed__2);
return v___x_3350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object* v___x_3351_, lean_object* v_as_3352_, size_t v_sz_3353_, size_t v_i_3354_, lean_object* v_b_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
uint8_t v___x_3363_; 
v___x_3363_ = lean_usize_dec_lt(v_i_3354_, v_sz_3353_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
lean_dec_ref(v___y_3356_);
lean_dec_ref(v___x_3351_);
v___x_3364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3364_, 0, v_b_3355_);
lean_ctor_set(v___x_3364_, 1, v___y_3361_);
return v___x_3364_;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3366_; 
v_a_3365_ = lean_array_uget_borrowed(v_as_3352_, v_i_3354_);
lean_inc_ref(v___y_3356_);
lean_inc_n(v_a_3365_, 2);
lean_inc_ref(v___x_3351_);
v___x_3366_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v___x_3351_, v_a_3365_, v_a_3365_, v___x_3363_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v_a_3367_; lean_object* v_a_3368_; lean_object* v_snd_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; size_t v___x_3372_; size_t v___x_3373_; 
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_a_3367_);
v_a_3368_ = lean_ctor_get(v___x_3366_, 1);
lean_inc(v_a_3368_);
lean_dec_ref_known(v___x_3366_, 2);
v_snd_3369_ = lean_ctor_get(v_a_3367_, 1);
lean_inc(v_snd_3369_);
lean_dec(v_a_3367_);
v___x_3370_ = l_Lake_Job_toOpaque___redArg(v_snd_3369_);
v___x_3371_ = l_Lake_Job_mix___redArg(v_b_3355_, v___x_3370_);
v___x_3372_ = ((size_t)1ULL);
v___x_3373_ = lean_usize_add(v_i_3354_, v___x_3372_);
v_i_3354_ = v___x_3373_;
v_b_3355_ = v___x_3371_;
v___y_3361_ = v_a_3368_;
goto _start;
}
else
{
lean_object* v_a_3375_; lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_dec_ref(v___y_3356_);
lean_dec_ref(v_b_3355_);
lean_dec_ref(v___x_3351_);
v_a_3375_ = lean_ctor_get(v___x_3366_, 0);
v_a_3376_ = lean_ctor_get(v___x_3366_, 1);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3366_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_inc(v_a_3375_);
lean_dec(v___x_3366_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3375_);
lean_ctor_set(v_reuseFailAlloc_3382_, 1, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object* v___x_3384_, lean_object* v_as_3385_, lean_object* v_sz_3386_, lean_object* v_i_3387_, lean_object* v_b_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
size_t v_sz_boxed_3396_; size_t v_i_boxed_3397_; lean_object* v_res_3398_; 
v_sz_boxed_3396_ = lean_unbox_usize(v_sz_3386_);
lean_dec(v_sz_3386_);
v_i_boxed_3397_ = lean_unbox_usize(v_i_3387_);
lean_dec(v_i_3387_);
v_res_3398_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v___x_3384_, v_as_3385_, v_sz_boxed_3396_, v_i_boxed_3397_, v_b_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v_as_3385_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object* v___x_3399_, lean_object* v_as_3400_, size_t v_sz_3401_, size_t v_i_3402_, lean_object* v_b_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
uint8_t v___x_3411_; 
v___x_3411_ = lean_usize_dec_lt(v_i_3402_, v_sz_3401_);
if (v___x_3411_ == 0)
{
lean_object* v___x_3412_; 
lean_dec_ref(v___y_3404_);
lean_dec_ref(v___x_3399_);
v___x_3412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3412_, 0, v_b_3403_);
lean_ctor_set(v___x_3412_, 1, v___y_3409_);
return v___x_3412_;
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3414_; 
v_a_3413_ = lean_array_uget_borrowed(v_as_3400_, v_i_3402_);
lean_inc_ref(v___y_3404_);
lean_inc(v_a_3413_);
lean_inc_ref(v___x_3399_);
v___x_3414_ = l_Lake_Package_fetchTargetJob(v___x_3399_, v_a_3413_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; lean_object* v_a_3416_; lean_object* v___x_3417_; size_t v___x_3418_; size_t v___x_3419_; 
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
v_a_3416_ = lean_ctor_get(v___x_3414_, 1);
lean_inc(v_a_3416_);
lean_dec_ref_known(v___x_3414_, 2);
v___x_3417_ = l_Lake_Job_mix___redArg(v_b_3403_, v_a_3415_);
v___x_3418_ = ((size_t)1ULL);
v___x_3419_ = lean_usize_add(v_i_3402_, v___x_3418_);
v_i_3402_ = v___x_3419_;
v_b_3403_ = v___x_3417_;
v___y_3409_ = v_a_3416_;
goto _start;
}
else
{
lean_object* v_a_3421_; lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec_ref(v___y_3404_);
lean_dec_ref(v_b_3403_);
lean_dec_ref(v___x_3399_);
v_a_3421_ = lean_ctor_get(v___x_3414_, 0);
v_a_3422_ = lean_ctor_get(v___x_3414_, 1);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3414_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3414_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_inc(v_a_3421_);
lean_dec(v___x_3414_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3421_);
lean_ctor_set(v_reuseFailAlloc_3428_, 1, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object* v___x_3430_, lean_object* v_as_3431_, lean_object* v_sz_3432_, lean_object* v_i_3433_, lean_object* v_b_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_){
_start:
{
size_t v_sz_boxed_3442_; size_t v_i_boxed_3443_; lean_object* v_res_3444_; 
v_sz_boxed_3442_ = lean_unbox_usize(v_sz_3432_);
lean_dec(v_sz_3432_);
v_i_boxed_3443_ = lean_unbox_usize(v_i_3433_);
lean_dec(v_i_3433_);
v_res_3444_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v___x_3430_, v_as_3431_, v_sz_boxed_3442_, v_i_boxed_3443_, v_b_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v_as_3431_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object* v_self_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_, lean_object* v_a_3452_, lean_object* v_a_3453_){
_start:
{
lean_object* v_pkg_3455_; lean_object* v_name_3456_; lean_object* v_config_3457_; lean_object* v_baseName_3458_; lean_object* v_keyName_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v_pkg_3455_ = lean_ctor_get(v_self_3447_, 0);
lean_inc_ref_n(v_pkg_3455_, 2);
v_name_3456_ = lean_ctor_get(v_self_3447_, 1);
lean_inc(v_name_3456_);
v_config_3457_ = lean_ctor_get(v_self_3447_, 2);
lean_inc(v_config_3457_);
lean_dec_ref(v_self_3447_);
v_baseName_3458_ = lean_ctor_get(v_pkg_3455_, 1);
v_keyName_3459_ = lean_ctor_get(v_pkg_3455_, 2);
v___x_3460_ = l_Lake_Package_extraDepFacet;
lean_inc(v_keyName_3459_);
v___x_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3461_, 0, v_keyName_3459_);
v___x_3462_ = l_Lake_Package_keyword;
v___x_3463_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3461_);
lean_ctor_set(v___x_3463_, 1, v___x_3462_);
lean_ctor_set(v___x_3463_, 2, v_pkg_3455_);
lean_ctor_set(v___x_3463_, 3, v___x_3460_);
lean_inc_ref(v_a_3448_);
lean_inc_ref(v_a_3452_);
lean_inc(v_a_3451_);
lean_inc(v_a_3450_);
lean_inc(v_a_3449_);
v___x_3464_ = lean_apply_7(v_a_3448_, v___x_3463_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3453_, lean_box(0));
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v_a_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3502_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
v_a_3466_ = lean_ctor_get(v___x_3464_, 1);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3468_ = v___x_3464_;
v_isShared_3469_ = v_isSharedCheck_3502_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_a_3466_);
lean_inc(v_a_3465_);
lean_dec(v___x_3464_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3502_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
uint8_t v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v_needs_3474_; lean_object* v_extraDepTargets_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; uint8_t v___x_3482_; uint8_t v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3489_; 
v___x_3470_ = 1;
lean_inc(v_baseName_3458_);
v___x_3471_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3458_, v___x_3470_);
v___x_3472_ = lean_unsigned_to_nat(0u);
v___x_3473_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v_needs_3474_ = lean_ctor_get(v_config_3457_, 5);
lean_inc_ref(v_needs_3474_);
v_extraDepTargets_3475_ = lean_ctor_get(v_config_3457_, 6);
lean_inc_ref(v_extraDepTargets_3475_);
lean_dec(v_config_3457_);
v___x_3476_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0));
v___x_3477_ = lean_string_append(v___x_3471_, v___x_3476_);
v___x_3478_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3456_, v___x_3470_);
v___x_3479_ = lean_string_append(v___x_3477_, v___x_3478_);
lean_dec_ref(v___x_3478_);
v___x_3480_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1));
v___x_3481_ = lean_string_append(v___x_3479_, v___x_3480_);
v___x_3482_ = 0;
v___x_3483_ = 0;
v___x_3484_ = l_Lake_BuildTrace_nil(v___x_3481_);
v___x_3485_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3485_, 0, v___x_3473_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
lean_ctor_set(v___x_3485_, 2, v___x_3472_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*3, v___x_3482_);
lean_ctor_set_uint8(v___x_3485_, sizeof(void*)*3 + 1, v___x_3483_);
v___x_3486_ = lean_box(0);
v___x_3487_ = lean_box(0);
if (v_isShared_3469_ == 0)
{
lean_ctor_set(v___x_3468_, 1, v___x_3485_);
lean_ctor_set(v___x_3468_, 0, v___x_3487_);
v___x_3489_ = v___x_3468_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3487_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v___x_3485_);
v___x_3489_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v_job_3492_; lean_object* v___x_3493_; size_t v_sz_3494_; size_t v___x_3495_; lean_object* v___x_3496_; 
v___x_3490_ = lean_task_pure(v___x_3489_);
v___x_3491_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v_job_3492_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_3492_, 0, v___x_3490_);
lean_ctor_set(v_job_3492_, 1, v___x_3486_);
lean_ctor_set(v_job_3492_, 2, v___x_3491_);
lean_ctor_set_uint8(v_job_3492_, sizeof(void*)*3, v___x_3483_);
v___x_3493_ = l_Lake_Job_mix___redArg(v_job_3492_, v_a_3465_);
v_sz_3494_ = lean_array_size(v_extraDepTargets_3475_);
v___x_3495_ = ((size_t)0ULL);
lean_inc_ref(v_a_3448_);
lean_inc_ref(v_pkg_3455_);
v___x_3496_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v_pkg_3455_, v_extraDepTargets_3475_, v_sz_3494_, v___x_3495_, v___x_3493_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3466_);
lean_dec_ref(v_extraDepTargets_3475_);
if (lean_obj_tag(v___x_3496_) == 0)
{
lean_object* v_a_3497_; lean_object* v_a_3498_; size_t v_sz_3499_; lean_object* v___x_3500_; 
v_a_3497_ = lean_ctor_get(v___x_3496_, 0);
lean_inc(v_a_3497_);
v_a_3498_ = lean_ctor_get(v___x_3496_, 1);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3496_, 2);
v_sz_3499_ = lean_array_size(v_needs_3474_);
v___x_3500_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v_pkg_3455_, v_needs_3474_, v_sz_3499_, v___x_3495_, v_a_3497_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, v_a_3452_, v_a_3498_);
lean_dec_ref(v_needs_3474_);
return v___x_3500_;
}
else
{
lean_dec_ref(v_needs_3474_);
lean_dec_ref(v_pkg_3455_);
lean_dec_ref(v_a_3448_);
return v___x_3496_;
}
}
}
}
else
{
lean_dec(v_config_3457_);
lean_dec(v_name_3456_);
lean_dec_ref(v_pkg_3455_);
lean_dec_ref(v_a_3448_);
return v___x_3464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object* v_self_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_){
_start:
{
lean_object* v_res_3511_; 
v_res_3511_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(v_self_3503_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_);
lean_dec_ref(v_a_3508_);
lean_dec(v_a_3507_);
lean_dec(v_a_3506_);
lean_dec(v_a_3505_);
return v_res_3511_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3513_; uint8_t v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___f_3513_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3514_ = 1;
v___x_3515_ = l_Lake_instDataKindUnit;
v___x_3516_ = ((lean_object*)(l_Lake_LeanLib_extraDepFacetConfig___closed__0));
v___x_3517_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3518_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3518_, 0, v___x_3517_);
lean_ctor_set(v___x_3518_, 1, v___x_3516_);
lean_ctor_set(v___x_3518_, 2, v___x_3515_);
lean_ctor_set(v___x_3518_, 3, v___f_3513_);
lean_ctor_set_uint8(v___x_3518_, sizeof(void*)*4, v___x_3514_);
lean_ctor_set_uint8(v___x_3518_, sizeof(void*)*4 + 1, v___x_3514_);
return v___x_3518_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig(void){
_start:
{
lean_object* v___x_3519_; 
v___x_3519_ = lean_obj_once(&l_Lake_LeanLib_extraDepFacetConfig___closed__1, &l_Lake_LeanLib_extraDepFacetConfig___closed__1_once, _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1);
return v___x_3519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object* v_self_3520_, size_t v_sz_3521_, size_t v_i_3522_, lean_object* v_bs_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
uint8_t v___x_3531_; 
v___x_3531_ = lean_usize_dec_lt(v_i_3522_, v_sz_3521_);
if (v___x_3531_ == 0)
{
lean_object* v___x_3532_; 
lean_dec_ref(v___y_3524_);
lean_dec_ref(v_self_3520_);
v___x_3532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3532_, 0, v_bs_3523_);
lean_ctor_set(v___x_3532_, 1, v___y_3529_);
return v___x_3532_;
}
else
{
lean_object* v_pkg_3533_; lean_object* v_name_3534_; lean_object* v_keyName_3535_; lean_object* v_v_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v_pkg_3533_ = lean_ctor_get(v_self_3520_, 0);
v_name_3534_ = lean_ctor_get(v_self_3520_, 1);
v_keyName_3535_ = lean_ctor_get(v_pkg_3533_, 2);
v_v_3536_ = lean_array_uget_borrowed(v_bs_3523_, v_i_3522_);
lean_inc(v_name_3534_);
lean_inc(v_keyName_3535_);
v___x_3537_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3537_, 0, v_keyName_3535_);
lean_ctor_set(v___x_3537_, 1, v_name_3534_);
v___x_3538_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc(v_v_3536_);
lean_inc_ref(v_self_3520_);
v___x_3539_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3537_);
lean_ctor_set(v___x_3539_, 1, v___x_3538_);
lean_ctor_set(v___x_3539_, 2, v_self_3520_);
lean_ctor_set(v___x_3539_, 3, v_v_3536_);
lean_inc_ref(v___y_3524_);
lean_inc_ref(v___y_3528_);
lean_inc(v___y_3527_);
lean_inc(v___y_3526_);
lean_inc(v___y_3525_);
v___x_3540_ = lean_apply_7(v___y_3524_, v___x_3539_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, lean_box(0));
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v_a_3541_; lean_object* v_a_3542_; lean_object* v___x_3543_; lean_object* v_bs_x27_3544_; lean_object* v___x_3545_; size_t v___x_3546_; size_t v___x_3547_; lean_object* v___x_3548_; 
v_a_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_a_3541_);
v_a_3542_ = lean_ctor_get(v___x_3540_, 1);
lean_inc(v_a_3542_);
lean_dec_ref_known(v___x_3540_, 2);
v___x_3543_ = lean_unsigned_to_nat(0u);
v_bs_x27_3544_ = lean_array_uset(v_bs_3523_, v_i_3522_, v___x_3543_);
v___x_3545_ = l_Lake_Job_toOpaque___redArg(v_a_3541_);
v___x_3546_ = ((size_t)1ULL);
v___x_3547_ = lean_usize_add(v_i_3522_, v___x_3546_);
v___x_3548_ = lean_array_uset(v_bs_x27_3544_, v_i_3522_, v___x_3545_);
v_i_3522_ = v___x_3547_;
v_bs_3523_ = v___x_3548_;
v___y_3529_ = v_a_3542_;
goto _start;
}
else
{
lean_object* v_a_3550_; lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec_ref(v___y_3524_);
lean_dec_ref(v_bs_3523_);
lean_dec_ref(v_self_3520_);
v_a_3550_ = lean_ctor_get(v___x_3540_, 0);
v_a_3551_ = lean_ctor_get(v___x_3540_, 1);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3540_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3540_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_inc(v_a_3550_);
lean_dec(v___x_3540_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3550_);
lean_ctor_set(v_reuseFailAlloc_3557_, 1, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object* v_self_3559_, lean_object* v_sz_3560_, lean_object* v_i_3561_, lean_object* v_bs_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
size_t v_sz_boxed_3570_; size_t v_i_boxed_3571_; lean_object* v_res_3572_; 
v_sz_boxed_3570_ = lean_unbox_usize(v_sz_3560_);
lean_dec(v_sz_3560_);
v_i_boxed_3571_ = lean_unbox_usize(v_i_3561_);
lean_dec(v_i_3561_);
v_res_3572_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3559_, v_sz_boxed_3570_, v_i_boxed_3571_, v_bs_3562_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_);
lean_dec_ref(v___y_3567_);
lean_dec(v___y_3566_);
lean_dec(v___y_3565_);
lean_dec(v___y_3564_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object* v_self_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_){
_start:
{
lean_object* v_config_3582_; lean_object* v_defaultFacets_3583_; size_t v_sz_3584_; size_t v___x_3585_; lean_object* v___x_3586_; 
v_config_3582_ = lean_ctor_get(v_self_3574_, 2);
v_defaultFacets_3583_ = lean_ctor_get(v_config_3582_, 7);
lean_inc_ref(v_defaultFacets_3583_);
v_sz_3584_ = lean_array_size(v_defaultFacets_3583_);
v___x_3585_ = ((size_t)0ULL);
v___x_3586_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3574_, v_sz_3584_, v___x_3585_, v_defaultFacets_3583_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_, v_a_3580_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3597_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
v_a_3588_ = lean_ctor_get(v___x_3586_, 1);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3590_ = v___x_3586_;
v_isShared_3591_ = v_isSharedCheck_3597_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_inc(v_a_3587_);
lean_dec(v___x_3586_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3597_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3595_; 
v___x_3592_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0));
v___x_3593_ = l_Lake_Job_mixArray___redArg(v_a_3587_, v___x_3592_);
lean_dec(v_a_3587_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 0, v___x_3593_);
v___x_3595_ = v___x_3590_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v___x_3593_);
lean_ctor_set(v_reuseFailAlloc_3596_, 1, v_a_3588_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v_a_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3606_; 
v_a_3598_ = lean_ctor_get(v___x_3586_, 0);
v_a_3599_ = lean_ctor_get(v___x_3586_, 1);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3601_ = v___x_3586_;
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_a_3599_);
lean_inc(v_a_3598_);
lean_dec(v___x_3586_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3606_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3604_; 
if (v_isShared_3602_ == 0)
{
v___x_3604_ = v___x_3601_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_a_3598_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v_a_3599_);
v___x_3604_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
return v___x_3604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object* v_self_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_, lean_object* v_a_3610_, lean_object* v_a_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_){
_start:
{
lean_object* v_res_3615_; 
v_res_3615_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(v_self_3607_, v_a_3608_, v_a_3609_, v_a_3610_, v_a_3611_, v_a_3612_, v_a_3613_);
lean_dec_ref(v_a_3612_);
lean_dec(v_a_3611_);
lean_dec(v_a_3610_);
lean_dec(v_a_3609_);
return v_res_3615_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3617_; uint8_t v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___f_3617_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3618_ = 1;
v___x_3619_ = l_Lake_instDataKindUnit;
v___x_3620_ = ((lean_object*)(l_Lake_LeanLib_defaultFacetConfig___closed__0));
v___x_3621_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3622_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3622_, 0, v___x_3621_);
lean_ctor_set(v___x_3622_, 1, v___x_3620_);
lean_ctor_set(v___x_3622_, 2, v___x_3619_);
lean_ctor_set(v___x_3622_, 3, v___f_3617_);
lean_ctor_set_uint8(v___x_3622_, sizeof(void*)*4, v___x_3618_);
lean_ctor_set_uint8(v___x_3622_, sizeof(void*)*4 + 1, v___x_3618_);
return v___x_3622_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig(void){
_start:
{
lean_object* v___x_3623_; 
v___x_3623_ = lean_obj_once(&l_Lake_LeanLib_defaultFacetConfig___closed__1, &l_Lake_LeanLib_defaultFacetConfig___closed__1_once, _init_l_Lake_LeanLib_defaultFacetConfig___closed__1);
return v___x_3623_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object* v_k_3624_, lean_object* v_v_3625_, lean_object* v_t_3626_){
_start:
{
if (lean_obj_tag(v_t_3626_) == 0)
{
lean_object* v_size_3627_; lean_object* v_k_3628_; lean_object* v_v_3629_; lean_object* v_l_3630_; lean_object* v_r_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3911_; 
v_size_3627_ = lean_ctor_get(v_t_3626_, 0);
v_k_3628_ = lean_ctor_get(v_t_3626_, 1);
v_v_3629_ = lean_ctor_get(v_t_3626_, 2);
v_l_3630_ = lean_ctor_get(v_t_3626_, 3);
v_r_3631_ = lean_ctor_get(v_t_3626_, 4);
v_isSharedCheck_3911_ = !lean_is_exclusive(v_t_3626_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3633_ = v_t_3626_;
v_isShared_3634_ = v_isSharedCheck_3911_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_r_3631_);
lean_inc(v_l_3630_);
lean_inc(v_v_3629_);
lean_inc(v_k_3628_);
lean_inc(v_size_3627_);
lean_dec(v_t_3626_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3911_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
uint8_t v___x_3635_; 
v___x_3635_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3624_, v_k_3628_);
switch(v___x_3635_)
{
case 0:
{
lean_object* v_impl_3636_; lean_object* v___x_3637_; 
lean_dec(v_size_3627_);
v_impl_3636_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3624_, v_v_3625_, v_l_3630_);
v___x_3637_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3631_) == 0)
{
lean_object* v_size_3638_; lean_object* v_size_3639_; lean_object* v_k_3640_; lean_object* v_v_3641_; lean_object* v_l_3642_; lean_object* v_r_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; uint8_t v___x_3646_; 
v_size_3638_ = lean_ctor_get(v_r_3631_, 0);
v_size_3639_ = lean_ctor_get(v_impl_3636_, 0);
lean_inc(v_size_3639_);
v_k_3640_ = lean_ctor_get(v_impl_3636_, 1);
lean_inc(v_k_3640_);
v_v_3641_ = lean_ctor_get(v_impl_3636_, 2);
lean_inc(v_v_3641_);
v_l_3642_ = lean_ctor_get(v_impl_3636_, 3);
lean_inc(v_l_3642_);
v_r_3643_ = lean_ctor_get(v_impl_3636_, 4);
lean_inc(v_r_3643_);
v___x_3644_ = lean_unsigned_to_nat(3u);
v___x_3645_ = lean_nat_mul(v___x_3644_, v_size_3638_);
v___x_3646_ = lean_nat_dec_lt(v___x_3645_, v_size_3639_);
lean_dec(v___x_3645_);
if (v___x_3646_ == 0)
{
lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3650_; 
lean_dec(v_r_3643_);
lean_dec(v_l_3642_);
lean_dec(v_v_3641_);
lean_dec(v_k_3640_);
v___x_3647_ = lean_nat_add(v___x_3637_, v_size_3639_);
lean_dec(v_size_3639_);
v___x_3648_ = lean_nat_add(v___x_3647_, v_size_3638_);
lean_dec(v___x_3647_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 3, v_impl_3636_);
lean_ctor_set(v___x_3633_, 0, v___x_3648_);
v___x_3650_ = v___x_3633_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v___x_3648_);
lean_ctor_set(v_reuseFailAlloc_3651_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3651_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3651_, 3, v_impl_3636_);
lean_ctor_set(v_reuseFailAlloc_3651_, 4, v_r_3631_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
else
{
lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3717_; 
v_isSharedCheck_3717_ = !lean_is_exclusive(v_impl_3636_);
if (v_isSharedCheck_3717_ == 0)
{
lean_object* v_unused_3718_; lean_object* v_unused_3719_; lean_object* v_unused_3720_; lean_object* v_unused_3721_; lean_object* v_unused_3722_; 
v_unused_3718_ = lean_ctor_get(v_impl_3636_, 4);
lean_dec(v_unused_3718_);
v_unused_3719_ = lean_ctor_get(v_impl_3636_, 3);
lean_dec(v_unused_3719_);
v_unused_3720_ = lean_ctor_get(v_impl_3636_, 2);
lean_dec(v_unused_3720_);
v_unused_3721_ = lean_ctor_get(v_impl_3636_, 1);
lean_dec(v_unused_3721_);
v_unused_3722_ = lean_ctor_get(v_impl_3636_, 0);
lean_dec(v_unused_3722_);
v___x_3653_ = v_impl_3636_;
v_isShared_3654_ = v_isSharedCheck_3717_;
goto v_resetjp_3652_;
}
else
{
lean_dec(v_impl_3636_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3717_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v_size_3655_; lean_object* v_size_3656_; lean_object* v_k_3657_; lean_object* v_v_3658_; lean_object* v_l_3659_; lean_object* v_r_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; 
v_size_3655_ = lean_ctor_get(v_l_3642_, 0);
v_size_3656_ = lean_ctor_get(v_r_3643_, 0);
v_k_3657_ = lean_ctor_get(v_r_3643_, 1);
v_v_3658_ = lean_ctor_get(v_r_3643_, 2);
v_l_3659_ = lean_ctor_get(v_r_3643_, 3);
v_r_3660_ = lean_ctor_get(v_r_3643_, 4);
v___x_3661_ = lean_unsigned_to_nat(2u);
v___x_3662_ = lean_nat_mul(v___x_3661_, v_size_3655_);
v___x_3663_ = lean_nat_dec_lt(v_size_3656_, v___x_3662_);
lean_dec(v___x_3662_);
if (v___x_3663_ == 0)
{
lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3692_; 
lean_inc(v_r_3660_);
lean_inc(v_l_3659_);
lean_inc(v_v_3658_);
lean_inc(v_k_3657_);
v_isSharedCheck_3692_ = !lean_is_exclusive(v_r_3643_);
if (v_isSharedCheck_3692_ == 0)
{
lean_object* v_unused_3693_; lean_object* v_unused_3694_; lean_object* v_unused_3695_; lean_object* v_unused_3696_; lean_object* v_unused_3697_; 
v_unused_3693_ = lean_ctor_get(v_r_3643_, 4);
lean_dec(v_unused_3693_);
v_unused_3694_ = lean_ctor_get(v_r_3643_, 3);
lean_dec(v_unused_3694_);
v_unused_3695_ = lean_ctor_get(v_r_3643_, 2);
lean_dec(v_unused_3695_);
v_unused_3696_ = lean_ctor_get(v_r_3643_, 1);
lean_dec(v_unused_3696_);
v_unused_3697_ = lean_ctor_get(v_r_3643_, 0);
lean_dec(v_unused_3697_);
v___x_3665_ = v_r_3643_;
v_isShared_3666_ = v_isSharedCheck_3692_;
goto v_resetjp_3664_;
}
else
{
lean_dec(v_r_3643_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3692_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v___y_3672_; lean_object* v___x_3680_; lean_object* v___y_3682_; 
v___x_3667_ = lean_nat_add(v___x_3637_, v_size_3639_);
lean_dec(v_size_3639_);
v___x_3668_ = lean_nat_add(v___x_3667_, v_size_3638_);
lean_dec(v___x_3667_);
v___x_3680_ = lean_nat_add(v___x_3637_, v_size_3655_);
if (lean_obj_tag(v_l_3659_) == 0)
{
lean_object* v_size_3690_; 
v_size_3690_ = lean_ctor_get(v_l_3659_, 0);
lean_inc(v_size_3690_);
v___y_3682_ = v_size_3690_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3691_; 
v___x_3691_ = lean_unsigned_to_nat(0u);
v___y_3682_ = v___x_3691_;
goto v___jp_3681_;
}
v___jp_3669_:
{
lean_object* v___x_3673_; lean_object* v___x_3675_; 
v___x_3673_ = lean_nat_add(v___y_3671_, v___y_3672_);
lean_dec(v___y_3672_);
lean_dec(v___y_3671_);
if (v_isShared_3666_ == 0)
{
lean_ctor_set(v___x_3665_, 4, v_r_3631_);
lean_ctor_set(v___x_3665_, 3, v_r_3660_);
lean_ctor_set(v___x_3665_, 2, v_v_3629_);
lean_ctor_set(v___x_3665_, 1, v_k_3628_);
lean_ctor_set(v___x_3665_, 0, v___x_3673_);
v___x_3675_ = v___x_3665_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3673_);
lean_ctor_set(v_reuseFailAlloc_3679_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3679_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3679_, 3, v_r_3660_);
lean_ctor_set(v_reuseFailAlloc_3679_, 4, v_r_3631_);
v___x_3675_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
lean_object* v___x_3677_; 
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 4, v___x_3675_);
lean_ctor_set(v___x_3653_, 3, v___y_3670_);
lean_ctor_set(v___x_3653_, 2, v_v_3658_);
lean_ctor_set(v___x_3653_, 1, v_k_3657_);
lean_ctor_set(v___x_3653_, 0, v___x_3668_);
v___x_3677_ = v___x_3653_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3668_);
lean_ctor_set(v_reuseFailAlloc_3678_, 1, v_k_3657_);
lean_ctor_set(v_reuseFailAlloc_3678_, 2, v_v_3658_);
lean_ctor_set(v_reuseFailAlloc_3678_, 3, v___y_3670_);
lean_ctor_set(v_reuseFailAlloc_3678_, 4, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
v___jp_3681_:
{
lean_object* v___x_3683_; lean_object* v___x_3685_; 
v___x_3683_ = lean_nat_add(v___x_3680_, v___y_3682_);
lean_dec(v___y_3682_);
lean_dec(v___x_3680_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v_l_3659_);
lean_ctor_set(v___x_3633_, 3, v_l_3642_);
lean_ctor_set(v___x_3633_, 2, v_v_3641_);
lean_ctor_set(v___x_3633_, 1, v_k_3640_);
lean_ctor_set(v___x_3633_, 0, v___x_3683_);
v___x_3685_ = v___x_3633_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v___x_3683_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v_k_3640_);
lean_ctor_set(v_reuseFailAlloc_3689_, 2, v_v_3641_);
lean_ctor_set(v_reuseFailAlloc_3689_, 3, v_l_3642_);
lean_ctor_set(v_reuseFailAlloc_3689_, 4, v_l_3659_);
v___x_3685_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
lean_object* v___x_3686_; 
v___x_3686_ = lean_nat_add(v___x_3637_, v_size_3638_);
if (lean_obj_tag(v_r_3660_) == 0)
{
lean_object* v_size_3687_; 
v_size_3687_ = lean_ctor_get(v_r_3660_, 0);
lean_inc(v_size_3687_);
v___y_3670_ = v___x_3685_;
v___y_3671_ = v___x_3686_;
v___y_3672_ = v_size_3687_;
goto v___jp_3669_;
}
else
{
lean_object* v___x_3688_; 
v___x_3688_ = lean_unsigned_to_nat(0u);
v___y_3670_ = v___x_3685_;
v___y_3671_ = v___x_3686_;
v___y_3672_ = v___x_3688_;
goto v___jp_3669_;
}
}
}
}
}
else
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3703_; 
lean_del_object(v___x_3633_);
v___x_3698_ = lean_nat_add(v___x_3637_, v_size_3639_);
lean_dec(v_size_3639_);
v___x_3699_ = lean_nat_add(v___x_3698_, v_size_3638_);
lean_dec(v___x_3698_);
v___x_3700_ = lean_nat_add(v___x_3637_, v_size_3638_);
v___x_3701_ = lean_nat_add(v___x_3700_, v_size_3656_);
lean_dec(v___x_3700_);
lean_inc_ref(v_r_3631_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 4, v_r_3631_);
lean_ctor_set(v___x_3653_, 3, v_r_3643_);
lean_ctor_set(v___x_3653_, 2, v_v_3629_);
lean_ctor_set(v___x_3653_, 1, v_k_3628_);
lean_ctor_set(v___x_3653_, 0, v___x_3701_);
v___x_3703_ = v___x_3653_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3701_);
lean_ctor_set(v_reuseFailAlloc_3716_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3716_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3716_, 3, v_r_3643_);
lean_ctor_set(v_reuseFailAlloc_3716_, 4, v_r_3631_);
v___x_3703_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
v_isSharedCheck_3710_ = !lean_is_exclusive(v_r_3631_);
if (v_isSharedCheck_3710_ == 0)
{
lean_object* v_unused_3711_; lean_object* v_unused_3712_; lean_object* v_unused_3713_; lean_object* v_unused_3714_; lean_object* v_unused_3715_; 
v_unused_3711_ = lean_ctor_get(v_r_3631_, 4);
lean_dec(v_unused_3711_);
v_unused_3712_ = lean_ctor_get(v_r_3631_, 3);
lean_dec(v_unused_3712_);
v_unused_3713_ = lean_ctor_get(v_r_3631_, 2);
lean_dec(v_unused_3713_);
v_unused_3714_ = lean_ctor_get(v_r_3631_, 1);
lean_dec(v_unused_3714_);
v_unused_3715_ = lean_ctor_get(v_r_3631_, 0);
lean_dec(v_unused_3715_);
v___x_3705_ = v_r_3631_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_dec(v_r_3631_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
lean_ctor_set(v___x_3705_, 4, v___x_3703_);
lean_ctor_set(v___x_3705_, 3, v_l_3642_);
lean_ctor_set(v___x_3705_, 2, v_v_3641_);
lean_ctor_set(v___x_3705_, 1, v_k_3640_);
lean_ctor_set(v___x_3705_, 0, v___x_3699_);
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v___x_3699_);
lean_ctor_set(v_reuseFailAlloc_3709_, 1, v_k_3640_);
lean_ctor_set(v_reuseFailAlloc_3709_, 2, v_v_3641_);
lean_ctor_set(v_reuseFailAlloc_3709_, 3, v_l_3642_);
lean_ctor_set(v_reuseFailAlloc_3709_, 4, v___x_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3723_; 
v_l_3723_ = lean_ctor_get(v_impl_3636_, 3);
lean_inc(v_l_3723_);
if (lean_obj_tag(v_l_3723_) == 0)
{
lean_object* v_r_3724_; lean_object* v_k_3725_; lean_object* v_v_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3737_; 
v_r_3724_ = lean_ctor_get(v_impl_3636_, 4);
v_k_3725_ = lean_ctor_get(v_impl_3636_, 1);
v_v_3726_ = lean_ctor_get(v_impl_3636_, 2);
v_isSharedCheck_3737_ = !lean_is_exclusive(v_impl_3636_);
if (v_isSharedCheck_3737_ == 0)
{
lean_object* v_unused_3738_; lean_object* v_unused_3739_; 
v_unused_3738_ = lean_ctor_get(v_impl_3636_, 3);
lean_dec(v_unused_3738_);
v_unused_3739_ = lean_ctor_get(v_impl_3636_, 0);
lean_dec(v_unused_3739_);
v___x_3728_ = v_impl_3636_;
v_isShared_3729_ = v_isSharedCheck_3737_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_r_3724_);
lean_inc(v_v_3726_);
lean_inc(v_k_3725_);
lean_dec(v_impl_3636_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3737_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3730_; lean_object* v___x_3732_; 
v___x_3730_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3724_);
if (v_isShared_3729_ == 0)
{
lean_ctor_set(v___x_3728_, 3, v_r_3724_);
lean_ctor_set(v___x_3728_, 2, v_v_3629_);
lean_ctor_set(v___x_3728_, 1, v_k_3628_);
lean_ctor_set(v___x_3728_, 0, v___x_3637_);
v___x_3732_ = v___x_3728_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3736_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3736_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3736_, 3, v_r_3724_);
lean_ctor_set(v_reuseFailAlloc_3736_, 4, v_r_3724_);
v___x_3732_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
lean_object* v___x_3734_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v___x_3732_);
lean_ctor_set(v___x_3633_, 3, v_l_3723_);
lean_ctor_set(v___x_3633_, 2, v_v_3726_);
lean_ctor_set(v___x_3633_, 1, v_k_3725_);
lean_ctor_set(v___x_3633_, 0, v___x_3730_);
v___x_3734_ = v___x_3633_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3730_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v_k_3725_);
lean_ctor_set(v_reuseFailAlloc_3735_, 2, v_v_3726_);
lean_ctor_set(v_reuseFailAlloc_3735_, 3, v_l_3723_);
lean_ctor_set(v_reuseFailAlloc_3735_, 4, v___x_3732_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
}
}
else
{
lean_object* v_r_3740_; 
v_r_3740_ = lean_ctor_get(v_impl_3636_, 4);
lean_inc(v_r_3740_);
if (lean_obj_tag(v_r_3740_) == 0)
{
lean_object* v_k_3741_; lean_object* v_v_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3765_; 
v_k_3741_ = lean_ctor_get(v_impl_3636_, 1);
v_v_3742_ = lean_ctor_get(v_impl_3636_, 2);
v_isSharedCheck_3765_ = !lean_is_exclusive(v_impl_3636_);
if (v_isSharedCheck_3765_ == 0)
{
lean_object* v_unused_3766_; lean_object* v_unused_3767_; lean_object* v_unused_3768_; 
v_unused_3766_ = lean_ctor_get(v_impl_3636_, 4);
lean_dec(v_unused_3766_);
v_unused_3767_ = lean_ctor_get(v_impl_3636_, 3);
lean_dec(v_unused_3767_);
v_unused_3768_ = lean_ctor_get(v_impl_3636_, 0);
lean_dec(v_unused_3768_);
v___x_3744_ = v_impl_3636_;
v_isShared_3745_ = v_isSharedCheck_3765_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_v_3742_);
lean_inc(v_k_3741_);
lean_dec(v_impl_3636_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3765_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v_k_3746_; lean_object* v_v_3747_; lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3761_; 
v_k_3746_ = lean_ctor_get(v_r_3740_, 1);
v_v_3747_ = lean_ctor_get(v_r_3740_, 2);
v_isSharedCheck_3761_ = !lean_is_exclusive(v_r_3740_);
if (v_isSharedCheck_3761_ == 0)
{
lean_object* v_unused_3762_; lean_object* v_unused_3763_; lean_object* v_unused_3764_; 
v_unused_3762_ = lean_ctor_get(v_r_3740_, 4);
lean_dec(v_unused_3762_);
v_unused_3763_ = lean_ctor_get(v_r_3740_, 3);
lean_dec(v_unused_3763_);
v_unused_3764_ = lean_ctor_get(v_r_3740_, 0);
lean_dec(v_unused_3764_);
v___x_3749_ = v_r_3740_;
v_isShared_3750_ = v_isSharedCheck_3761_;
goto v_resetjp_3748_;
}
else
{
lean_inc(v_v_3747_);
lean_inc(v_k_3746_);
lean_dec(v_r_3740_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3761_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3751_; lean_object* v___x_3753_; 
v___x_3751_ = lean_unsigned_to_nat(3u);
if (v_isShared_3750_ == 0)
{
lean_ctor_set(v___x_3749_, 4, v_l_3723_);
lean_ctor_set(v___x_3749_, 3, v_l_3723_);
lean_ctor_set(v___x_3749_, 2, v_v_3742_);
lean_ctor_set(v___x_3749_, 1, v_k_3741_);
lean_ctor_set(v___x_3749_, 0, v___x_3637_);
v___x_3753_ = v___x_3749_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3760_, 1, v_k_3741_);
lean_ctor_set(v_reuseFailAlloc_3760_, 2, v_v_3742_);
lean_ctor_set(v_reuseFailAlloc_3760_, 3, v_l_3723_);
lean_ctor_set(v_reuseFailAlloc_3760_, 4, v_l_3723_);
v___x_3753_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
lean_object* v___x_3755_; 
if (v_isShared_3745_ == 0)
{
lean_ctor_set(v___x_3744_, 4, v_l_3723_);
lean_ctor_set(v___x_3744_, 2, v_v_3629_);
lean_ctor_set(v___x_3744_, 1, v_k_3628_);
lean_ctor_set(v___x_3744_, 0, v___x_3637_);
v___x_3755_ = v___x_3744_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3759_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3759_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3759_, 3, v_l_3723_);
lean_ctor_set(v_reuseFailAlloc_3759_, 4, v_l_3723_);
v___x_3755_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
lean_object* v___x_3757_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v___x_3755_);
lean_ctor_set(v___x_3633_, 3, v___x_3753_);
lean_ctor_set(v___x_3633_, 2, v_v_3747_);
lean_ctor_set(v___x_3633_, 1, v_k_3746_);
lean_ctor_set(v___x_3633_, 0, v___x_3751_);
v___x_3757_ = v___x_3633_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v___x_3751_);
lean_ctor_set(v_reuseFailAlloc_3758_, 1, v_k_3746_);
lean_ctor_set(v_reuseFailAlloc_3758_, 2, v_v_3747_);
lean_ctor_set(v_reuseFailAlloc_3758_, 3, v___x_3753_);
lean_ctor_set(v_reuseFailAlloc_3758_, 4, v___x_3755_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
}
}
else
{
lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3769_ = lean_unsigned_to_nat(2u);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v_r_3740_);
lean_ctor_set(v___x_3633_, 3, v_impl_3636_);
lean_ctor_set(v___x_3633_, 0, v___x_3769_);
v___x_3771_ = v___x_3633_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3772_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3772_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3772_, 3, v_impl_3636_);
lean_ctor_set(v_reuseFailAlloc_3772_, 4, v_r_3740_);
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
case 1:
{
lean_object* v___x_3774_; 
lean_dec(v_v_3629_);
lean_dec(v_k_3628_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 2, v_v_3625_);
lean_ctor_set(v___x_3633_, 1, v_k_3624_);
v___x_3774_ = v___x_3633_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v_size_3627_);
lean_ctor_set(v_reuseFailAlloc_3775_, 1, v_k_3624_);
lean_ctor_set(v_reuseFailAlloc_3775_, 2, v_v_3625_);
lean_ctor_set(v_reuseFailAlloc_3775_, 3, v_l_3630_);
lean_ctor_set(v_reuseFailAlloc_3775_, 4, v_r_3631_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
default: 
{
lean_object* v_impl_3776_; lean_object* v___x_3777_; 
lean_dec(v_size_3627_);
v_impl_3776_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3624_, v_v_3625_, v_r_3631_);
v___x_3777_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3630_) == 0)
{
lean_object* v_size_3778_; lean_object* v_size_3779_; lean_object* v_k_3780_; lean_object* v_v_3781_; lean_object* v_l_3782_; lean_object* v_r_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; uint8_t v___x_3786_; 
v_size_3778_ = lean_ctor_get(v_l_3630_, 0);
v_size_3779_ = lean_ctor_get(v_impl_3776_, 0);
lean_inc(v_size_3779_);
v_k_3780_ = lean_ctor_get(v_impl_3776_, 1);
lean_inc(v_k_3780_);
v_v_3781_ = lean_ctor_get(v_impl_3776_, 2);
lean_inc(v_v_3781_);
v_l_3782_ = lean_ctor_get(v_impl_3776_, 3);
lean_inc(v_l_3782_);
v_r_3783_ = lean_ctor_get(v_impl_3776_, 4);
lean_inc(v_r_3783_);
v___x_3784_ = lean_unsigned_to_nat(3u);
v___x_3785_ = lean_nat_mul(v___x_3784_, v_size_3778_);
v___x_3786_ = lean_nat_dec_lt(v___x_3785_, v_size_3779_);
lean_dec(v___x_3785_);
if (v___x_3786_ == 0)
{
lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3790_; 
lean_dec(v_r_3783_);
lean_dec(v_l_3782_);
lean_dec(v_v_3781_);
lean_dec(v_k_3780_);
v___x_3787_ = lean_nat_add(v___x_3777_, v_size_3778_);
v___x_3788_ = lean_nat_add(v___x_3787_, v_size_3779_);
lean_dec(v_size_3779_);
lean_dec(v___x_3787_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v_impl_3776_);
lean_ctor_set(v___x_3633_, 0, v___x_3788_);
v___x_3790_ = v___x_3633_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v___x_3788_);
lean_ctor_set(v_reuseFailAlloc_3791_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3791_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3791_, 3, v_l_3630_);
lean_ctor_set(v_reuseFailAlloc_3791_, 4, v_impl_3776_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
else
{
lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3855_; 
v_isSharedCheck_3855_ = !lean_is_exclusive(v_impl_3776_);
if (v_isSharedCheck_3855_ == 0)
{
lean_object* v_unused_3856_; lean_object* v_unused_3857_; lean_object* v_unused_3858_; lean_object* v_unused_3859_; lean_object* v_unused_3860_; 
v_unused_3856_ = lean_ctor_get(v_impl_3776_, 4);
lean_dec(v_unused_3856_);
v_unused_3857_ = lean_ctor_get(v_impl_3776_, 3);
lean_dec(v_unused_3857_);
v_unused_3858_ = lean_ctor_get(v_impl_3776_, 2);
lean_dec(v_unused_3858_);
v_unused_3859_ = lean_ctor_get(v_impl_3776_, 1);
lean_dec(v_unused_3859_);
v_unused_3860_ = lean_ctor_get(v_impl_3776_, 0);
lean_dec(v_unused_3860_);
v___x_3793_ = v_impl_3776_;
v_isShared_3794_ = v_isSharedCheck_3855_;
goto v_resetjp_3792_;
}
else
{
lean_dec(v_impl_3776_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3855_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v_size_3795_; lean_object* v_k_3796_; lean_object* v_v_3797_; lean_object* v_l_3798_; lean_object* v_r_3799_; lean_object* v_size_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; uint8_t v___x_3803_; 
v_size_3795_ = lean_ctor_get(v_l_3782_, 0);
v_k_3796_ = lean_ctor_get(v_l_3782_, 1);
v_v_3797_ = lean_ctor_get(v_l_3782_, 2);
v_l_3798_ = lean_ctor_get(v_l_3782_, 3);
v_r_3799_ = lean_ctor_get(v_l_3782_, 4);
v_size_3800_ = lean_ctor_get(v_r_3783_, 0);
v___x_3801_ = lean_unsigned_to_nat(2u);
v___x_3802_ = lean_nat_mul(v___x_3801_, v_size_3800_);
v___x_3803_ = lean_nat_dec_lt(v_size_3795_, v___x_3802_);
lean_dec(v___x_3802_);
if (v___x_3803_ == 0)
{
lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3831_; 
lean_inc(v_r_3799_);
lean_inc(v_l_3798_);
lean_inc(v_v_3797_);
lean_inc(v_k_3796_);
v_isSharedCheck_3831_ = !lean_is_exclusive(v_l_3782_);
if (v_isSharedCheck_3831_ == 0)
{
lean_object* v_unused_3832_; lean_object* v_unused_3833_; lean_object* v_unused_3834_; lean_object* v_unused_3835_; lean_object* v_unused_3836_; 
v_unused_3832_ = lean_ctor_get(v_l_3782_, 4);
lean_dec(v_unused_3832_);
v_unused_3833_ = lean_ctor_get(v_l_3782_, 3);
lean_dec(v_unused_3833_);
v_unused_3834_ = lean_ctor_get(v_l_3782_, 2);
lean_dec(v_unused_3834_);
v_unused_3835_ = lean_ctor_get(v_l_3782_, 1);
lean_dec(v_unused_3835_);
v_unused_3836_ = lean_ctor_get(v_l_3782_, 0);
lean_dec(v_unused_3836_);
v___x_3805_ = v_l_3782_;
v_isShared_3806_ = v_isSharedCheck_3831_;
goto v_resetjp_3804_;
}
else
{
lean_dec(v_l_3782_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3831_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3821_; 
v___x_3807_ = lean_nat_add(v___x_3777_, v_size_3778_);
v___x_3808_ = lean_nat_add(v___x_3807_, v_size_3779_);
lean_dec(v_size_3779_);
if (lean_obj_tag(v_l_3798_) == 0)
{
lean_object* v_size_3829_; 
v_size_3829_ = lean_ctor_get(v_l_3798_, 0);
lean_inc(v_size_3829_);
v___y_3821_ = v_size_3829_;
goto v___jp_3820_;
}
else
{
lean_object* v___x_3830_; 
v___x_3830_ = lean_unsigned_to_nat(0u);
v___y_3821_ = v___x_3830_;
goto v___jp_3820_;
}
v___jp_3809_:
{
lean_object* v___x_3813_; lean_object* v___x_3815_; 
v___x_3813_ = lean_nat_add(v___y_3811_, v___y_3812_);
lean_dec(v___y_3812_);
lean_dec(v___y_3811_);
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 4, v_r_3783_);
lean_ctor_set(v___x_3805_, 3, v_r_3799_);
lean_ctor_set(v___x_3805_, 2, v_v_3781_);
lean_ctor_set(v___x_3805_, 1, v_k_3780_);
lean_ctor_set(v___x_3805_, 0, v___x_3813_);
v___x_3815_ = v___x_3805_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3813_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v_k_3780_);
lean_ctor_set(v_reuseFailAlloc_3819_, 2, v_v_3781_);
lean_ctor_set(v_reuseFailAlloc_3819_, 3, v_r_3799_);
lean_ctor_set(v_reuseFailAlloc_3819_, 4, v_r_3783_);
v___x_3815_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
lean_object* v___x_3817_; 
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 4, v___x_3815_);
lean_ctor_set(v___x_3793_, 3, v___y_3810_);
lean_ctor_set(v___x_3793_, 2, v_v_3797_);
lean_ctor_set(v___x_3793_, 1, v_k_3796_);
lean_ctor_set(v___x_3793_, 0, v___x_3808_);
v___x_3817_ = v___x_3793_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v___x_3808_);
lean_ctor_set(v_reuseFailAlloc_3818_, 1, v_k_3796_);
lean_ctor_set(v_reuseFailAlloc_3818_, 2, v_v_3797_);
lean_ctor_set(v_reuseFailAlloc_3818_, 3, v___y_3810_);
lean_ctor_set(v_reuseFailAlloc_3818_, 4, v___x_3815_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
v___jp_3820_:
{
lean_object* v___x_3822_; lean_object* v___x_3824_; 
v___x_3822_ = lean_nat_add(v___x_3807_, v___y_3821_);
lean_dec(v___y_3821_);
lean_dec(v___x_3807_);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v_l_3798_);
lean_ctor_set(v___x_3633_, 0, v___x_3822_);
v___x_3824_ = v___x_3633_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3822_);
lean_ctor_set(v_reuseFailAlloc_3828_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3828_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3828_, 3, v_l_3630_);
lean_ctor_set(v_reuseFailAlloc_3828_, 4, v_l_3798_);
v___x_3824_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
lean_object* v___x_3825_; 
v___x_3825_ = lean_nat_add(v___x_3777_, v_size_3800_);
if (lean_obj_tag(v_r_3799_) == 0)
{
lean_object* v_size_3826_; 
v_size_3826_ = lean_ctor_get(v_r_3799_, 0);
lean_inc(v_size_3826_);
v___y_3810_ = v___x_3824_;
v___y_3811_ = v___x_3825_;
v___y_3812_ = v_size_3826_;
goto v___jp_3809_;
}
else
{
lean_object* v___x_3827_; 
v___x_3827_ = lean_unsigned_to_nat(0u);
v___y_3810_ = v___x_3824_;
v___y_3811_ = v___x_3825_;
v___y_3812_ = v___x_3827_;
goto v___jp_3809_;
}
}
}
}
}
else
{
lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3841_; 
lean_del_object(v___x_3633_);
v___x_3837_ = lean_nat_add(v___x_3777_, v_size_3778_);
v___x_3838_ = lean_nat_add(v___x_3837_, v_size_3779_);
lean_dec(v_size_3779_);
v___x_3839_ = lean_nat_add(v___x_3837_, v_size_3795_);
lean_dec(v___x_3837_);
lean_inc_ref(v_l_3630_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 4, v_l_3782_);
lean_ctor_set(v___x_3793_, 3, v_l_3630_);
lean_ctor_set(v___x_3793_, 2, v_v_3629_);
lean_ctor_set(v___x_3793_, 1, v_k_3628_);
lean_ctor_set(v___x_3793_, 0, v___x_3839_);
v___x_3841_ = v___x_3793_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3839_);
lean_ctor_set(v_reuseFailAlloc_3854_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3854_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3854_, 3, v_l_3630_);
lean_ctor_set(v_reuseFailAlloc_3854_, 4, v_l_3782_);
v___x_3841_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
v_isSharedCheck_3848_ = !lean_is_exclusive(v_l_3630_);
if (v_isSharedCheck_3848_ == 0)
{
lean_object* v_unused_3849_; lean_object* v_unused_3850_; lean_object* v_unused_3851_; lean_object* v_unused_3852_; lean_object* v_unused_3853_; 
v_unused_3849_ = lean_ctor_get(v_l_3630_, 4);
lean_dec(v_unused_3849_);
v_unused_3850_ = lean_ctor_get(v_l_3630_, 3);
lean_dec(v_unused_3850_);
v_unused_3851_ = lean_ctor_get(v_l_3630_, 2);
lean_dec(v_unused_3851_);
v_unused_3852_ = lean_ctor_get(v_l_3630_, 1);
lean_dec(v_unused_3852_);
v_unused_3853_ = lean_ctor_get(v_l_3630_, 0);
lean_dec(v_unused_3853_);
v___x_3843_ = v_l_3630_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_dec(v_l_3630_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 4, v_r_3783_);
lean_ctor_set(v___x_3843_, 3, v___x_3841_);
lean_ctor_set(v___x_3843_, 2, v_v_3781_);
lean_ctor_set(v___x_3843_, 1, v_k_3780_);
lean_ctor_set(v___x_3843_, 0, v___x_3838_);
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v___x_3838_);
lean_ctor_set(v_reuseFailAlloc_3847_, 1, v_k_3780_);
lean_ctor_set(v_reuseFailAlloc_3847_, 2, v_v_3781_);
lean_ctor_set(v_reuseFailAlloc_3847_, 3, v___x_3841_);
lean_ctor_set(v_reuseFailAlloc_3847_, 4, v_r_3783_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3861_; 
v_l_3861_ = lean_ctor_get(v_impl_3776_, 3);
lean_inc(v_l_3861_);
if (lean_obj_tag(v_l_3861_) == 0)
{
lean_object* v_r_3862_; lean_object* v_k_3863_; lean_object* v_v_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3887_; 
v_r_3862_ = lean_ctor_get(v_impl_3776_, 4);
v_k_3863_ = lean_ctor_get(v_impl_3776_, 1);
v_v_3864_ = lean_ctor_get(v_impl_3776_, 2);
v_isSharedCheck_3887_ = !lean_is_exclusive(v_impl_3776_);
if (v_isSharedCheck_3887_ == 0)
{
lean_object* v_unused_3888_; lean_object* v_unused_3889_; 
v_unused_3888_ = lean_ctor_get(v_impl_3776_, 3);
lean_dec(v_unused_3888_);
v_unused_3889_ = lean_ctor_get(v_impl_3776_, 0);
lean_dec(v_unused_3889_);
v___x_3866_ = v_impl_3776_;
v_isShared_3867_ = v_isSharedCheck_3887_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_r_3862_);
lean_inc(v_v_3864_);
lean_inc(v_k_3863_);
lean_dec(v_impl_3776_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3887_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v_k_3868_; lean_object* v_v_3869_; lean_object* v___x_3871_; uint8_t v_isShared_3872_; uint8_t v_isSharedCheck_3883_; 
v_k_3868_ = lean_ctor_get(v_l_3861_, 1);
v_v_3869_ = lean_ctor_get(v_l_3861_, 2);
v_isSharedCheck_3883_ = !lean_is_exclusive(v_l_3861_);
if (v_isSharedCheck_3883_ == 0)
{
lean_object* v_unused_3884_; lean_object* v_unused_3885_; lean_object* v_unused_3886_; 
v_unused_3884_ = lean_ctor_get(v_l_3861_, 4);
lean_dec(v_unused_3884_);
v_unused_3885_ = lean_ctor_get(v_l_3861_, 3);
lean_dec(v_unused_3885_);
v_unused_3886_ = lean_ctor_get(v_l_3861_, 0);
lean_dec(v_unused_3886_);
v___x_3871_ = v_l_3861_;
v_isShared_3872_ = v_isSharedCheck_3883_;
goto v_resetjp_3870_;
}
else
{
lean_inc(v_v_3869_);
lean_inc(v_k_3868_);
lean_dec(v_l_3861_);
v___x_3871_ = lean_box(0);
v_isShared_3872_ = v_isSharedCheck_3883_;
goto v_resetjp_3870_;
}
v_resetjp_3870_:
{
lean_object* v___x_3873_; lean_object* v___x_3875_; 
v___x_3873_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3862_, 2);
if (v_isShared_3872_ == 0)
{
lean_ctor_set(v___x_3871_, 4, v_r_3862_);
lean_ctor_set(v___x_3871_, 3, v_r_3862_);
lean_ctor_set(v___x_3871_, 2, v_v_3629_);
lean_ctor_set(v___x_3871_, 1, v_k_3628_);
lean_ctor_set(v___x_3871_, 0, v___x_3777_);
v___x_3875_ = v___x_3871_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3882_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3882_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3882_, 3, v_r_3862_);
lean_ctor_set(v_reuseFailAlloc_3882_, 4, v_r_3862_);
v___x_3875_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
lean_object* v___x_3877_; 
lean_inc(v_r_3862_);
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 3, v_r_3862_);
lean_ctor_set(v___x_3866_, 0, v___x_3777_);
v___x_3877_ = v___x_3866_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3881_, 1, v_k_3863_);
lean_ctor_set(v_reuseFailAlloc_3881_, 2, v_v_3864_);
lean_ctor_set(v_reuseFailAlloc_3881_, 3, v_r_3862_);
lean_ctor_set(v_reuseFailAlloc_3881_, 4, v_r_3862_);
v___x_3877_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
lean_object* v___x_3879_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v___x_3877_);
lean_ctor_set(v___x_3633_, 3, v___x_3875_);
lean_ctor_set(v___x_3633_, 2, v_v_3869_);
lean_ctor_set(v___x_3633_, 1, v_k_3868_);
lean_ctor_set(v___x_3633_, 0, v___x_3873_);
v___x_3879_ = v___x_3633_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v___x_3873_);
lean_ctor_set(v_reuseFailAlloc_3880_, 1, v_k_3868_);
lean_ctor_set(v_reuseFailAlloc_3880_, 2, v_v_3869_);
lean_ctor_set(v_reuseFailAlloc_3880_, 3, v___x_3875_);
lean_ctor_set(v_reuseFailAlloc_3880_, 4, v___x_3877_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
}
}
else
{
lean_object* v_r_3890_; 
v_r_3890_ = lean_ctor_get(v_impl_3776_, 4);
lean_inc(v_r_3890_);
if (lean_obj_tag(v_r_3890_) == 0)
{
lean_object* v_k_3891_; lean_object* v_v_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3903_; 
v_k_3891_ = lean_ctor_get(v_impl_3776_, 1);
v_v_3892_ = lean_ctor_get(v_impl_3776_, 2);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_impl_3776_);
if (v_isSharedCheck_3903_ == 0)
{
lean_object* v_unused_3904_; lean_object* v_unused_3905_; lean_object* v_unused_3906_; 
v_unused_3904_ = lean_ctor_get(v_impl_3776_, 4);
lean_dec(v_unused_3904_);
v_unused_3905_ = lean_ctor_get(v_impl_3776_, 3);
lean_dec(v_unused_3905_);
v_unused_3906_ = lean_ctor_get(v_impl_3776_, 0);
lean_dec(v_unused_3906_);
v___x_3894_ = v_impl_3776_;
v_isShared_3895_ = v_isSharedCheck_3903_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_v_3892_);
lean_inc(v_k_3891_);
lean_dec(v_impl_3776_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3903_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3896_; lean_object* v___x_3898_; 
v___x_3896_ = lean_unsigned_to_nat(3u);
if (v_isShared_3895_ == 0)
{
lean_ctor_set(v___x_3894_, 4, v_l_3861_);
lean_ctor_set(v___x_3894_, 2, v_v_3629_);
lean_ctor_set(v___x_3894_, 1, v_k_3628_);
lean_ctor_set(v___x_3894_, 0, v___x_3777_);
v___x_3898_ = v___x_3894_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3902_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3902_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3902_, 3, v_l_3861_);
lean_ctor_set(v_reuseFailAlloc_3902_, 4, v_l_3861_);
v___x_3898_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
lean_object* v___x_3900_; 
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v_r_3890_);
lean_ctor_set(v___x_3633_, 3, v___x_3898_);
lean_ctor_set(v___x_3633_, 2, v_v_3892_);
lean_ctor_set(v___x_3633_, 1, v_k_3891_);
lean_ctor_set(v___x_3633_, 0, v___x_3896_);
v___x_3900_ = v___x_3633_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3896_);
lean_ctor_set(v_reuseFailAlloc_3901_, 1, v_k_3891_);
lean_ctor_set(v_reuseFailAlloc_3901_, 2, v_v_3892_);
lean_ctor_set(v_reuseFailAlloc_3901_, 3, v___x_3898_);
lean_ctor_set(v_reuseFailAlloc_3901_, 4, v_r_3890_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3909_; 
v___x_3907_ = lean_unsigned_to_nat(2u);
if (v_isShared_3634_ == 0)
{
lean_ctor_set(v___x_3633_, 4, v_impl_3776_);
lean_ctor_set(v___x_3633_, 3, v_r_3890_);
lean_ctor_set(v___x_3633_, 0, v___x_3907_);
v___x_3909_ = v___x_3633_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v___x_3907_);
lean_ctor_set(v_reuseFailAlloc_3910_, 1, v_k_3628_);
lean_ctor_set(v_reuseFailAlloc_3910_, 2, v_v_3629_);
lean_ctor_set(v_reuseFailAlloc_3910_, 3, v_r_3890_);
lean_ctor_set(v_reuseFailAlloc_3910_, 4, v_impl_3776_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
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
lean_object* v___x_3912_; lean_object* v___x_3913_; 
v___x_3912_ = lean_unsigned_to_nat(1u);
v___x_3913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3912_);
lean_ctor_set(v___x_3913_, 1, v_k_3624_);
lean_ctor_set(v___x_3913_, 2, v_v_3625_);
lean_ctor_set(v___x_3913_, 3, v_t_3626_);
lean_ctor_set(v___x_3913_, 4, v_t_3626_);
return v___x_3913_;
}
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3914_ = lean_box(1);
v___x_3915_ = l_Lake_LeanLib_defaultFacetConfig;
v___x_3916_ = l_Lake_LeanLib_defaultFacet;
v___x_3917_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3916_, v___x_3915_, v___x_3914_);
return v___x_3917_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; 
v___x_3918_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__0, &l_Lake_LeanLib_initFacetConfigs___closed__0_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__0);
v___x_3919_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig));
v___x_3920_ = l_Lake_LeanLib_modulesFacet;
v___x_3921_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3920_, v___x_3919_, v___x_3918_);
return v___x_3921_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3922_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__1, &l_Lake_LeanLib_initFacetConfigs___closed__1_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__1);
v___x_3923_ = l_Lake_LeanLib_leanArtsFacetConfig;
v___x_3924_ = l_Lake_LeanLib_leanArtsFacet;
v___x_3925_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3924_, v___x_3923_, v___x_3922_);
return v___x_3925_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3926_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__2, &l_Lake_LeanLib_initFacetConfigs___closed__2_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__2);
v___x_3927_ = l_Lake_LeanLib_staticFacetConfig;
v___x_3928_ = l_Lake_LeanLib_staticFacet;
v___x_3929_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3928_, v___x_3927_, v___x_3926_);
return v___x_3929_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__4(void){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3930_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__3, &l_Lake_LeanLib_initFacetConfigs___closed__3_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__3);
v___x_3931_ = l_Lake_LeanLib_staticExportFacetConfig;
v___x_3932_ = l_Lake_LeanLib_staticExportFacet;
v___x_3933_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3932_, v___x_3931_, v___x_3930_);
return v___x_3933_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__5(void){
_start:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; 
v___x_3934_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__4, &l_Lake_LeanLib_initFacetConfigs___closed__4_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__4);
v___x_3935_ = l_Lake_LeanLib_sharedFacetConfig;
v___x_3936_ = l_Lake_LeanLib_sharedFacet;
v___x_3937_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3936_, v___x_3935_, v___x_3934_);
return v___x_3937_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__6(void){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3938_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__5, &l_Lake_LeanLib_initFacetConfigs___closed__5_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__5);
v___x_3939_ = l_Lake_LeanLib_extraDepFacetConfig;
v___x_3940_ = l_Lake_LeanLib_extraDepFacet;
v___x_3941_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3940_, v___x_3939_, v___x_3938_);
return v___x_3941_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs(void){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__6, &l_Lake_LeanLib_initFacetConfigs___closed__6_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__6);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object* v_00_u03b2_3943_, lean_object* v_k_3944_, lean_object* v_v_3945_, lean_object* v_t_3946_, lean_object* v_hl_3947_){
_start:
{
lean_object* v___x_3948_; 
v___x_3948_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3944_, v_v_3945_, v_t_3946_);
return v___x_3948_;
}
}
static lean_object* _init_l_Lake_initLibraryFacetConfigs(void){
_start:
{
lean_object* v___x_3949_; 
v___x_3949_ = l_Lake_LeanLib_initFacetConfigs;
return v___x_3949_;
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
