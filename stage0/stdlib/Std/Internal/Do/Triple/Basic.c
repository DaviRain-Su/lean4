// Lean compiler output
// Module: Std.Internal.Do.Triple.Basic
// Imports: public import Std.Internal.Do.WP public import Std.Internal.Do.ExceptPost
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesIdent(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__3 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__3_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__3_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__5 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__5_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__5_value),LEAN_SCALAR_PTR_LITERAL(9, 208, 235, 82, 91, 230, 203, 159)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__7 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__7_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__7_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__8 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__8_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__9 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__9_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__10 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__10_value;
LEAN_EXPORT uint8_t l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram(lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___boxed(lean_object*);
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__0 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__0_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__2 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__2_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__4 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__4_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__5 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__5_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__5_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__6 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__6_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__7 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__7_value;
static lean_once_cell_t l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__12_value)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__13 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__13_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__14 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__14_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__14_value)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__15 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__15_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__16 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__16_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__17_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__16_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__17 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__17_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__17_value)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__18 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__18_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__19 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__19_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__15_value),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__19_value)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__20 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__20_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__13_value),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__20_value)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__21 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__21_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__22 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__22_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__23 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__23_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__23_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__25 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__25_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__25_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__27 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__27_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__27_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__29 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__29_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__30 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__30_value;
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value_aux_2),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__30_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__32 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__32_value;
static const lean_string_object l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__33 = (const lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__33_value;
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "tripleNotation"};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__0 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__0_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__1_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__1_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__1_value_aux_2),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 27, 222, 72, 43, 221, 122, 229)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__1 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__1_value;
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__2 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__2_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__3 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value;
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⦃ "};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__4 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__4_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__4_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__5 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__5_value;
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__6 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__6_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__6_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__7 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__7_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__8 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__8_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__5_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__9 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__9_value;
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⦄ "};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__10 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__10_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__10_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__11 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__11_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__9_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__11_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__12 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__12_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__12_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__13 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__13_value;
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ⦃ "};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__14 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__14_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__14_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__15 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__15_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__13_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__15_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__16 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__16_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__16_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__17 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__17_value;
static const lean_string_object l_Std_Internal_Do_tripleNotation___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = " ⦄"};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__18 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__18_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__18_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__19 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__19_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__17_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__19_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__20 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__20_value;
static const lean_ctor_object l_Std_Internal_Do_tripleNotation___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__20_value)}};
static const lean_object* l_Std_Internal_Do_tripleNotation___closed__21 = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__21_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Do_tripleNotation = (const lean_object*)&l_Std_Internal_Do_tripleNotation___closed__21_value;
static const lean_string_object l_Std_Internal_Do_tripleBinderNotation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "tripleBinderNotation"};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__0 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__0_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__1_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__1_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__1_value_aux_2),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 87, 102, 173, 151, 204, 230, 194)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__1 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__1_value;
static const lean_string_object l_Std_Internal_Do_tripleBinderNotation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__2 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__2_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__3 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__3_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__3_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__4 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__4_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__16_value),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__4_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__5 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__5_value;
static const lean_string_object l_Std_Internal_Do_tripleBinderNotation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__6 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__6_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__6_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__7 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__7_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__5_value),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__7_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__8 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__8_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__8_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__8_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__9 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__9_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__9_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__19_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__10 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__10_value;
static const lean_ctor_object l_Std_Internal_Do_tripleBinderNotation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__10_value)}};
static const lean_object* l_Std_Internal_Do_tripleBinderNotation___closed__11 = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__11_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Do_tripleBinderNotation = (const lean_object*)&l_Std_Internal_Do_tripleBinderNotation___closed__11_value;
static const lean_string_object l_Std_Internal_Do_tripleEPost___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tripleEPost"};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__0 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__0_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__1_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__1_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__1_value_aux_2),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 228, 187, 179, 135, 251, 133, 128)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__1 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__1_value;
static const lean_string_object l_Std_Internal_Do_tripleEPost___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__2 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__2_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__2_value)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__3 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__3_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__17_value),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__3_value)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__4 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__4_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 11}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__8_value),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__2_value),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__5 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__5_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__4_value),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__5_value)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__6 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__6_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__3_value),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__6_value),((lean_object*)&l_Std_Internal_Do_tripleNotation___closed__19_value)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__7 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__7_value;
static const lean_ctor_object l_Std_Internal_Do_tripleEPost___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)&l_Std_Internal_Do_tripleEPost___closed__7_value)}};
static const lean_object* l_Std_Internal_Do_tripleEPost___closed__8 = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__8_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Do_tripleEPost = (const lean_object*)&l_Std_Internal_Do_tripleEPost___closed__8_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__0 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__0_value;
static lean_once_cell_t l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 148, 225, 137, 79, 125, 168, 172)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__2 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__2_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 57, 218, 157, 42, 52, 8, 129)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__4 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__4_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__3_value)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__5 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__5_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__6 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__6_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__4_value),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__6_value)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__7 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__7_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Order.bot"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__8 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__8_value;
static lean_once_cell_t l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bot"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__10 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__10_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__16_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value_aux_1),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(89, 51, 159, 172, 220, 225, 54, 137)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__12 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__12_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__13 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__13_value;
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__0 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__0_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__13_value),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__0_value)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__1 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__1_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__2 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__2_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__4 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__4_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5_value;
static lean_once_cell_t l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__7 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__7_value;
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 12, .m_data = "termEpost⟨_⟩"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__0 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__0_value;
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__9_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__10_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value_aux_1),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__11_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value_aux_2),((lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 191, 145, 121, 242, 68, 46, 80)}};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 6, .m_data = "epost⟨"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__2 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__2_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__3 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__3_value;
static const lean_string_object l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__4 = (const lean_object*)&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Do_unexpandTriple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 5, .m_data = "term⊥"};
static const lean_object* l_Std_Internal_Do_unexpandTriple___closed__0 = (const lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__0_value;
static const lean_ctor_object l_Std_Internal_Do_unexpandTriple___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std_Internal_Do_unexpandTriple___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__1_value_aux_0),((lean_object*)&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__16_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Std_Internal_Do_unexpandTriple___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__1_value_aux_1),((lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 78, 68, 112, 65, 121, 100, 195)}};
static const lean_object* l_Std_Internal_Do_unexpandTriple___closed__1 = (const lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__1_value;
static const lean_string_object l_Std_Internal_Do_unexpandTriple___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦃"};
static const lean_object* l_Std_Internal_Do_unexpandTriple___closed__2 = (const lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__2_value;
static const lean_string_object l_Std_Internal_Do_unexpandTriple___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⦄"};
static const lean_object* l_Std_Internal_Do_unexpandTriple___closed__3 = (const lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__3_value;
static const lean_string_object l_Std_Internal_Do_unexpandTriple___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Std_Internal_Do_unexpandTriple___closed__4 = (const lean_object*)&l_Std_Internal_Do_unexpandTriple___closed__4_value;
LEAN_EXPORT lean_object* l_Std_Internal_Do_unexpandTriple(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Do_unexpandTriple___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram(lean_object* v_c_22_){
_start:
{
lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_23_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4));
lean_inc(v_c_22_);
v___x_24_ = l_Lean_Syntax_isOfKind(v_c_22_, v___x_23_);
if (v___x_24_ == 0)
{
uint8_t v___x_25_; lean_object* v___x_26_; uint8_t v___x_27_; 
v___x_25_ = 1;
v___x_26_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__6));
lean_inc(v_c_22_);
v___x_27_ = l_Lean_Syntax_isOfKind(v_c_22_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; uint8_t v___x_29_; 
v___x_28_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__8));
lean_inc(v_c_22_);
v___x_29_ = l_Lean_Syntax_isOfKind(v_c_22_, v___x_28_);
if (v___x_29_ == 0)
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__10));
v___x_31_ = l_Lean_Syntax_isOfKind(v_c_22_, v___x_30_);
return v___x_31_;
}
else
{
lean_dec(v_c_22_);
return v___x_25_;
}
}
else
{
lean_dec(v_c_22_);
return v___x_25_;
}
}
else
{
lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_32_ = lean_unsigned_to_nat(1u);
v___x_33_ = l_Lean_Syntax_getArg(v_c_22_, v___x_32_);
lean_dec(v_c_22_);
v_c_22_ = v___x_33_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___boxed(lean_object* v_c_35_){
_start:
{
uint8_t v_res_36_; lean_object* v_r_37_; 
v_res_36_ = l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram(v_c_35_);
v_r_37_ = lean_box(v_res_36_);
return v_r_37_;
}
}
static lean_object* _init_l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__7));
v___x_56_ = l_String_toRawSubstring_x27(v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram(lean_object* v_c_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
uint8_t v___x_113_; 
lean_inc(v_c_110_);
v___x_113_ = l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram(v_c_110_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v_c_110_);
lean_ctor_set(v___x_114_, 1, v_a_112_);
return v___x_114_;
}
else
{
lean_object* v_quotContext_115_; lean_object* v_currMacroScope_116_; lean_object* v_ref_117_; uint8_t v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_quotContext_115_ = lean_ctor_get(v_a_111_, 1);
v_currMacroScope_116_ = lean_ctor_get(v_a_111_, 2);
v_ref_117_ = lean_ctor_get(v_a_111_, 5);
v___x_118_ = 0;
v___x_119_ = l_Lean_SourceInfo_fromRef(v_ref_117_, v___x_118_);
v___x_120_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__1));
v___x_121_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3));
v___x_122_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__4));
lean_inc_n(v___x_119_, 15);
v___x_123_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_119_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__6));
v___x_125_ = lean_obj_once(&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8, &l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8_once, _init_l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8);
v___x_126_ = lean_box(0);
lean_inc(v_currMacroScope_116_);
lean_inc(v_quotContext_115_);
v___x_127_ = l_Lean_addMacroScope(v_quotContext_115_, v___x_126_, v_currMacroScope_116_);
v___x_128_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__21));
v___x_129_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_129_, 0, v___x_119_);
lean_ctor_set(v___x_129_, 1, v___x_125_);
lean_ctor_set(v___x_129_, 2, v___x_127_);
lean_ctor_set(v___x_129_, 3, v___x_128_);
v___x_130_ = l_Lean_Syntax_node1(v___x_119_, v___x_124_, v___x_129_);
v___x_131_ = l_Lean_Syntax_node2(v___x_119_, v___x_121_, v___x_123_, v___x_130_);
v___x_132_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__22));
v___x_133_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_119_);
lean_ctor_set(v___x_133_, 1, v___x_132_);
v___x_134_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24));
v___x_135_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26));
v___x_136_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__28));
v___x_137_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__29));
v___x_138_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_119_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = l_Lean_Syntax_node1(v___x_119_, v___x_136_, v___x_138_);
v___x_140_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__31));
v___x_141_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__32));
v___x_142_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_119_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
lean_inc_n(v___x_139_, 3);
v___x_143_ = l_Lean_Syntax_node3(v___x_119_, v___x_140_, v___x_139_, v___x_142_, v___x_139_);
v___x_144_ = l_Lean_Syntax_node1(v___x_119_, v___x_134_, v___x_143_);
v___x_145_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__33));
v___x_146_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_119_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
lean_inc_ref(v___x_146_);
lean_inc_ref(v___x_133_);
lean_inc(v___x_131_);
v___x_147_ = l_Lean_Syntax_node5(v___x_119_, v___x_120_, v___x_131_, v___x_139_, v___x_133_, v___x_144_, v___x_146_);
v___x_148_ = l_Lean_Syntax_node1(v___x_119_, v___x_134_, v___x_139_);
v___x_149_ = l_Lean_Syntax_node2(v___x_119_, v___x_135_, v___x_147_, v___x_148_);
v___x_150_ = l_Lean_Syntax_node1(v___x_119_, v___x_134_, v___x_149_);
v___x_151_ = l_Lean_Syntax_node5(v___x_119_, v___x_120_, v___x_131_, v_c_110_, v___x_133_, v___x_150_, v___x_146_);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
lean_ctor_set(v___x_152_, 1, v_a_112_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___boxed(lean_object* v_c_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram(v_c_153_, v_a_154_, v_a_155_);
lean_dec_ref(v_a_154_);
return v_res_156_;
}
}
static lean_object* _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__0));
v___x_281_ = l_String_toRawSubstring_x27(v___x_280_);
return v___x_281_;
}
}
static lean_object* _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__8));
v___x_302_ = l_String_toRawSubstring_x27(v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1(lean_object* v_x_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = ((lean_object*)(l_Std_Internal_Do_tripleNotation___closed__1));
lean_inc(v_x_314_);
v___x_318_ = l_Lean_Syntax_isOfKind(v_x_314_, v___x_317_);
if (v___x_318_ == 0)
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_x_314_);
v___x_319_ = lean_box(1);
v___x_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v_a_316_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; lean_object* v_c_322_; lean_object* v___x_323_; lean_object* v_a_324_; lean_object* v_a_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_355_; 
v___x_321_ = lean_unsigned_to_nat(3u);
v_c_322_ = l_Lean_Syntax_getArg(v_x_314_, v___x_321_);
v___x_323_ = l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram(v_c_322_, v_a_315_, v_a_316_);
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_a_325_ = lean_ctor_get(v___x_323_, 1);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_355_ == 0)
{
v___x_327_ = v___x_323_;
v_isShared_328_ = v_isSharedCheck_355_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_a_325_);
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_355_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v_quotContext_329_; lean_object* v_currMacroScope_330_; lean_object* v_ref_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_353_; 
v_quotContext_329_ = lean_ctor_get(v_a_315_, 1);
v_currMacroScope_330_ = lean_ctor_get(v_a_315_, 2);
v_ref_331_ = lean_ctor_get(v_a_315_, 5);
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = l_Lean_Syntax_getArg(v_x_314_, v___x_332_);
v___x_334_ = lean_unsigned_to_nat(5u);
v___x_335_ = l_Lean_Syntax_getArg(v_x_314_, v___x_334_);
lean_dec(v_x_314_);
v___x_336_ = 0;
v___x_337_ = l_Lean_SourceInfo_fromRef(v_ref_331_, v___x_336_);
v___x_338_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26));
v___x_339_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1);
v___x_340_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__2));
lean_inc_n(v_currMacroScope_330_, 2);
lean_inc_n(v_quotContext_329_, 2);
v___x_341_ = l_Lean_addMacroScope(v_quotContext_329_, v___x_340_, v_currMacroScope_330_);
v___x_342_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__7));
lean_inc_n(v___x_337_, 3);
v___x_343_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_343_, 0, v___x_337_);
lean_ctor_set(v___x_343_, 1, v___x_339_);
lean_ctor_set(v___x_343_, 2, v___x_341_);
lean_ctor_set(v___x_343_, 3, v___x_342_);
v___x_344_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24));
v___x_345_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9);
v___x_346_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11));
v___x_347_ = l_Lean_addMacroScope(v_quotContext_329_, v___x_346_, v_currMacroScope_330_);
v___x_348_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__13));
v___x_349_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_349_, 0, v___x_337_);
lean_ctor_set(v___x_349_, 1, v___x_345_);
lean_ctor_set(v___x_349_, 2, v___x_347_);
lean_ctor_set(v___x_349_, 3, v___x_348_);
v___x_350_ = l_Lean_Syntax_node4(v___x_337_, v___x_344_, v_a_324_, v___x_333_, v___x_335_, v___x_349_);
v___x_351_ = l_Lean_Syntax_node2(v___x_337_, v___x_338_, v___x_343_, v___x_350_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 0, v___x_351_);
v___x_353_ = v___x_327_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_a_325_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___boxed(lean_object* v_x_356_, lean_object* v_a_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1(v_x_356_, v_a_357_, v_a_358_);
lean_dec_ref(v_a_357_);
return v_res_359_;
}
}
static lean_object* _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = l_Array_mkArray0(lean_box(0));
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1(lean_object* v_x_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = ((lean_object*)(l_Std_Internal_Do_tripleBinderNotation___closed__1));
lean_inc(v_x_380_);
v___x_384_ = l_Lean_Syntax_isOfKind(v_x_380_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; 
lean_dec(v_x_380_);
v___x_385_ = lean_box(1);
v___x_386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v_a_382_);
return v___x_386_;
}
else
{
lean_object* v___x_387_; lean_object* v_c_388_; lean_object* v___x_389_; lean_object* v_a_390_; lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_449_; 
v___x_387_ = lean_unsigned_to_nat(3u);
v_c_388_ = l_Lean_Syntax_getArg(v_x_380_, v___x_387_);
v___x_389_ = l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram(v_c_388_, v_a_381_, v_a_382_);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_a_391_ = lean_ctor_get(v___x_389_, 1);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_449_ == 0)
{
v___x_393_ = v___x_389_;
v_isShared_394_ = v_isSharedCheck_449_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_449_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v_quotContext_395_; lean_object* v_currMacroScope_396_; lean_object* v_ref_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; uint8_t v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v_quotContext_395_ = lean_ctor_get(v_a_381_, 1);
v_currMacroScope_396_ = lean_ctor_get(v_a_381_, 2);
v_ref_397_ = lean_ctor_get(v_a_381_, 5);
v___x_398_ = lean_unsigned_to_nat(1u);
v___x_399_ = l_Lean_Syntax_getArg(v_x_380_, v___x_398_);
v___x_400_ = lean_unsigned_to_nat(5u);
v___x_401_ = l_Lean_Syntax_getArg(v_x_380_, v___x_400_);
v___x_402_ = lean_unsigned_to_nat(7u);
v___x_403_ = l_Lean_Syntax_getArg(v_x_380_, v___x_402_);
lean_dec(v_x_380_);
v___x_404_ = 0;
v___x_405_ = l_Lean_SourceInfo_fromRef(v_ref_397_, v___x_404_);
v___x_406_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26));
v___x_407_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1);
v___x_408_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__2));
lean_inc_n(v_currMacroScope_396_, 3);
lean_inc_n(v_quotContext_395_, 3);
v___x_409_ = l_Lean_addMacroScope(v_quotContext_395_, v___x_408_, v_currMacroScope_396_);
v___x_410_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__7));
lean_inc_n(v___x_405_, 15);
v___x_411_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_411_, 0, v___x_405_);
lean_ctor_set(v___x_411_, 1, v___x_407_);
lean_ctor_set(v___x_411_, 2, v___x_409_);
lean_ctor_set(v___x_411_, 3, v___x_410_);
v___x_412_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24));
v___x_413_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_isSplitProgram___closed__4));
v___x_414_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__3));
v___x_415_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__4));
v___x_416_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_405_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__6));
v___x_418_ = lean_obj_once(&l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8, &l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8_once, _init_l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__8);
v___x_419_ = lean_box(0);
v___x_420_ = l_Lean_addMacroScope(v_quotContext_395_, v___x_419_, v_currMacroScope_396_);
v___x_421_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__1));
v___x_422_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_422_, 0, v___x_405_);
lean_ctor_set(v___x_422_, 1, v___x_418_);
lean_ctor_set(v___x_422_, 2, v___x_420_);
lean_ctor_set(v___x_422_, 3, v___x_421_);
v___x_423_ = l_Lean_Syntax_node1(v___x_405_, v___x_417_, v___x_422_);
v___x_424_ = l_Lean_Syntax_node2(v___x_405_, v___x_414_, v___x_416_, v___x_423_);
v___x_425_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__2));
v___x_426_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__3));
v___x_427_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_427_, 0, v___x_405_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
v___x_428_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__5));
v___x_429_ = l_Lean_Syntax_node1(v___x_405_, v___x_412_, v___x_401_);
v___x_430_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6);
v___x_431_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_431_, 0, v___x_405_);
lean_ctor_set(v___x_431_, 1, v___x_412_);
lean_ctor_set(v___x_431_, 2, v___x_430_);
v___x_432_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__7));
v___x_433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_405_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = l_Lean_Syntax_node4(v___x_405_, v___x_428_, v___x_429_, v___x_431_, v___x_433_, v___x_403_);
v___x_435_ = l_Lean_Syntax_node2(v___x_405_, v___x_426_, v___x_427_, v___x_434_);
v___x_436_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__33));
v___x_437_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_405_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = l_Lean_Syntax_node3(v___x_405_, v___x_413_, v___x_424_, v___x_435_, v___x_437_);
v___x_439_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__9);
v___x_440_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11));
v___x_441_ = l_Lean_addMacroScope(v_quotContext_395_, v___x_440_, v_currMacroScope_396_);
v___x_442_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__13));
v___x_443_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_443_, 0, v___x_405_);
lean_ctor_set(v___x_443_, 1, v___x_439_);
lean_ctor_set(v___x_443_, 2, v___x_441_);
lean_ctor_set(v___x_443_, 3, v___x_442_);
v___x_444_ = l_Lean_Syntax_node4(v___x_405_, v___x_412_, v_a_390_, v___x_399_, v___x_438_, v___x_443_);
v___x_445_ = l_Lean_Syntax_node2(v___x_405_, v___x_406_, v___x_411_, v___x_444_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v___x_445_);
v___x_447_ = v___x_393_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_a_391_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___boxed(lean_object* v_x_450_, lean_object* v_a_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1(v_x_450_, v_a_451_, v_a_452_);
lean_dec_ref(v_a_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1(lean_object* v_x_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_466_ = ((lean_object*)(l_Std_Internal_Do_tripleEPost___closed__1));
lean_inc(v_x_463_);
v___x_467_ = l_Lean_Syntax_isOfKind(v_x_463_, v___x_466_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
lean_dec(v_x_463_);
v___x_468_ = lean_box(1);
v___x_469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
lean_ctor_set(v___x_469_, 1, v_a_465_);
return v___x_469_;
}
else
{
lean_object* v___x_470_; lean_object* v_c_471_; lean_object* v___x_472_; lean_object* v_a_473_; lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_514_; 
v___x_470_ = lean_unsigned_to_nat(3u);
v_c_471_ = l_Lean_Syntax_getArg(v_x_463_, v___x_470_);
v___x_472_ = l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram(v_c_471_, v_a_464_, v_a_465_);
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_a_474_ = lean_ctor_get(v___x_472_, 1);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_514_ == 0)
{
v___x_476_ = v___x_472_;
v_isShared_477_ = v_isSharedCheck_514_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_514_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v_quotContext_478_; lean_object* v_currMacroScope_479_; lean_object* v_ref_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_Es_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_512_; 
v_quotContext_478_ = lean_ctor_get(v_a_464_, 1);
v_currMacroScope_479_ = lean_ctor_get(v_a_464_, 2);
v_ref_480_ = lean_ctor_get(v_a_464_, 5);
v___x_481_ = lean_unsigned_to_nat(7u);
v___x_482_ = l_Lean_Syntax_getArg(v_x_463_, v___x_481_);
v_Es_483_ = l_Lean_Syntax_getArgs(v___x_482_);
lean_dec(v___x_482_);
v___x_484_ = lean_unsigned_to_nat(1u);
v___x_485_ = l_Lean_Syntax_getArg(v_x_463_, v___x_484_);
v___x_486_ = lean_unsigned_to_nat(5u);
v___x_487_ = l_Lean_Syntax_getArg(v_x_463_, v___x_486_);
lean_dec(v_x_463_);
v___x_488_ = 0;
v___x_489_ = l_Lean_SourceInfo_fromRef(v_ref_480_, v___x_488_);
v___x_490_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26));
v___x_491_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__1);
v___x_492_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__2));
lean_inc(v_currMacroScope_479_);
lean_inc(v_quotContext_478_);
v___x_493_ = l_Lean_addMacroScope(v_quotContext_478_, v___x_492_, v_currMacroScope_479_);
v___x_494_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__7));
lean_inc_n(v___x_489_, 6);
v___x_495_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_495_, 0, v___x_489_);
lean_ctor_set(v___x_495_, 1, v___x_491_);
lean_ctor_set(v___x_495_, 2, v___x_493_);
lean_ctor_set(v___x_495_, 3, v___x_494_);
v___x_496_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24));
v___x_497_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1));
v___x_498_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__2));
v___x_499_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_489_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6);
v___x_501_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__3));
v___x_502_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_Es_483_);
lean_dec_ref(v_Es_483_);
v___x_503_ = l_Lean_Syntax_SepArray_ofElems(v___x_501_, v___x_502_);
lean_dec_ref(v___x_502_);
v___x_504_ = l_Array_append___redArg(v___x_500_, v___x_503_);
lean_dec_ref(v___x_503_);
v___x_505_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_505_, 0, v___x_489_);
lean_ctor_set(v___x_505_, 1, v___x_496_);
lean_ctor_set(v___x_505_, 2, v___x_504_);
v___x_506_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__4));
v___x_507_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_507_, 0, v___x_489_);
lean_ctor_set(v___x_507_, 1, v___x_506_);
v___x_508_ = l_Lean_Syntax_node3(v___x_489_, v___x_497_, v___x_499_, v___x_505_, v___x_507_);
v___x_509_ = l_Lean_Syntax_node4(v___x_489_, v___x_496_, v_a_473_, v___x_485_, v___x_487_, v___x_508_);
v___x_510_ = l_Lean_Syntax_node2(v___x_489_, v___x_490_, v___x_495_, v___x_509_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_510_);
v___x_512_ = v___x_476_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_a_474_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___boxed(lean_object* v_x_515_, lean_object* v_a_516_, lean_object* v_a_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1(v_x_515_, v_a_516_, v_a_517_);
lean_dec_ref(v_a_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do_unexpandTriple(lean_object* v_x_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
lean_object* v___x_530_; uint8_t v___x_531_; 
v___x_530_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__26));
lean_inc(v_x_527_);
v___x_531_ = l_Lean_Syntax_isOfKind(v_x_527_, v___x_530_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; lean_object* v___x_533_; 
lean_dec(v_x_527_);
v___x_532_ = lean_box(0);
v___x_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_a_529_);
return v___x_533_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = l_Lean_Syntax_getArg(v_x_527_, v___x_534_);
lean_dec(v_x_527_);
v___x_536_ = lean_unsigned_to_nat(4u);
lean_inc(v___x_535_);
v___x_537_ = l_Lean_Syntax_matchesNull(v___x_535_, v___x_536_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; lean_object* v___x_539_; 
lean_dec(v___x_535_);
v___x_538_ = lean_box(0);
v___x_539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
lean_ctor_set(v___x_539_, 1, v_a_529_);
return v___x_539_;
}
else
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = l_Lean_Syntax_getArg(v___x_535_, v___x_540_);
v___x_542_ = l_Lean_Syntax_getArg(v___x_535_, v___x_534_);
v___x_543_ = lean_unsigned_to_nat(2u);
v___x_544_ = l_Lean_Syntax_getArg(v___x_535_, v___x_543_);
v___x_545_ = lean_unsigned_to_nat(3u);
v___x_546_ = l_Lean_Syntax_getArg(v___x_535_, v___x_545_);
lean_dec(v___x_535_);
v___x_547_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleEPost__1___closed__1));
lean_inc(v___x_546_);
v___x_548_ = l_Lean_Syntax_isOfKind(v___x_546_, v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__1));
lean_inc(v___x_546_);
v___x_550_ = l_Lean_Syntax_isOfKind(v___x_546_, v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_551_ = ((lean_object*)(l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleNotation__1___closed__11));
v___x_552_ = l_Lean_Syntax_matchesIdent(v___x_546_, v___x_551_);
lean_dec(v___x_546_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; lean_object* v___x_554_; 
lean_dec(v___x_544_);
lean_dec(v___x_542_);
lean_dec(v___x_541_);
v___x_553_ = lean_box(0);
v___x_554_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
lean_ctor_set(v___x_554_, 1, v_a_529_);
return v___x_554_;
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_555_ = l_Lean_SourceInfo_fromRef(v_a_528_, v___x_550_);
v___x_556_ = ((lean_object*)(l_Std_Internal_Do_tripleNotation___closed__1));
v___x_557_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__2));
lean_inc_n(v___x_555_, 2);
v___x_558_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_555_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__3));
v___x_560_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_560_, 0, v___x_555_);
lean_ctor_set(v___x_560_, 1, v___x_559_);
lean_inc_ref(v___x_560_);
lean_inc_ref(v___x_558_);
v___x_561_ = l_Lean_Syntax_node7(v___x_555_, v___x_556_, v___x_558_, v___x_542_, v___x_560_, v___x_541_, v___x_558_, v___x_544_, v___x_560_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
lean_ctor_set(v___x_562_, 1, v_a_529_);
return v___x_562_;
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec(v___x_546_);
v___x_563_ = l_Lean_SourceInfo_fromRef(v_a_528_, v___x_548_);
v___x_564_ = ((lean_object*)(l_Std_Internal_Do_tripleNotation___closed__1));
v___x_565_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__2));
lean_inc_n(v___x_563_, 2);
v___x_566_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_563_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
v___x_567_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__3));
v___x_568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_563_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
lean_inc_ref(v___x_568_);
lean_inc_ref(v___x_566_);
v___x_569_ = l_Lean_Syntax_node7(v___x_563_, v___x_564_, v___x_566_, v___x_542_, v___x_568_, v___x_541_, v___x_566_, v___x_544_, v___x_568_);
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set(v___x_570_, 1, v_a_529_);
return v___x_570_;
}
}
else
{
lean_object* v___x_571_; lean_object* v_Es_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_571_ = l_Lean_Syntax_getArg(v___x_546_, v___x_534_);
lean_dec(v___x_546_);
v_Es_572_ = l_Lean_Syntax_getArgs(v___x_571_);
lean_dec(v___x_571_);
v___x_573_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_Es_572_);
lean_dec_ref(v_Es_572_);
v___x_574_ = lean_array_get_size(v___x_573_);
v___x_575_ = lean_nat_dec_eq(v___x_574_, v___x_540_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_576_ = l_Lean_SourceInfo_fromRef(v_a_528_, v___x_575_);
v___x_577_ = ((lean_object*)(l_Std_Internal_Do_tripleEPost___closed__1));
v___x_578_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__2));
lean_inc_n(v___x_576_, 4);
v___x_579_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_579_, 0, v___x_576_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
v___x_580_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__3));
v___x_581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_576_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = ((lean_object*)(l_Std_Internal_Do_unexpandTriple___closed__4));
v___x_583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_576_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = ((lean_object*)(l___private_Std_Internal_Do_Triple_Basic_0__Std_Internal_Do_hintProgram___closed__24));
v___x_585_ = lean_obj_once(&l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6, &l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6_once, _init_l_Std_Internal_Do___aux__Std__Internal__Do__Triple__Basic______macroRules__Std__Internal__Do__tripleBinderNotation__1___closed__6);
v___x_586_ = l_Lean_Syntax_SepArray_ofElems(v___x_582_, v___x_573_);
lean_dec_ref(v___x_573_);
v___x_587_ = l_Array_append___redArg(v___x_585_, v___x_586_);
lean_dec_ref(v___x_586_);
v___x_588_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_588_, 0, v___x_576_);
lean_ctor_set(v___x_588_, 1, v___x_584_);
lean_ctor_set(v___x_588_, 2, v___x_587_);
v___x_589_ = lean_unsigned_to_nat(9u);
v___x_590_ = lean_mk_empty_array_with_capacity(v___x_589_);
lean_inc_ref(v___x_579_);
v___x_591_ = lean_array_push(v___x_590_, v___x_579_);
v___x_592_ = lean_array_push(v___x_591_, v___x_542_);
lean_inc_ref(v___x_581_);
v___x_593_ = lean_array_push(v___x_592_, v___x_581_);
v___x_594_ = lean_array_push(v___x_593_, v___x_541_);
v___x_595_ = lean_array_push(v___x_594_, v___x_579_);
v___x_596_ = lean_array_push(v___x_595_, v___x_544_);
v___x_597_ = lean_array_push(v___x_596_, v___x_583_);
v___x_598_ = lean_array_push(v___x_597_, v___x_588_);
v___x_599_ = lean_array_push(v___x_598_, v___x_581_);
v___x_600_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_600_, 0, v___x_576_);
lean_ctor_set(v___x_600_, 1, v___x_577_);
lean_ctor_set(v___x_600_, 2, v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
lean_ctor_set(v___x_601_, 1, v_a_529_);
return v___x_601_;
}
else
{
lean_object* v___x_602_; lean_object* v___x_603_; 
lean_dec_ref(v___x_573_);
lean_dec(v___x_544_);
lean_dec(v___x_542_);
lean_dec(v___x_541_);
v___x_602_ = lean_box(0);
v___x_603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v_a_529_);
return v___x_603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Do_unexpandTriple___boxed(lean_object* v_x_604_, lean_object* v_a_605_, lean_object* v_a_606_){
_start:
{
lean_object* v_res_607_; 
v_res_607_ = l_Std_Internal_Do_unexpandTriple(v_x_604_, v_a_605_, v_a_606_);
lean_dec(v_a_605_);
return v_res_607_;
}
}
lean_object* runtime_initialize_Std_Internal_Do_WP(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_Do_ExceptPost(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Internal_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Std_Internal_Do_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Do_ExceptPost(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Internal_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Internal_Do_WP(uint8_t builtin);
lean_object* initialize_Std_Internal_Do_ExceptPost(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Internal_Do_Triple_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Internal_Do_WP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Do_ExceptPost(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Internal_Do_Triple_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Internal_Do_Triple_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
