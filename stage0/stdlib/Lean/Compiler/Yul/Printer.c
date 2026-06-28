// Lean compiler output
// Module: Lean.Compiler.Yul.Printer
// Imports: public import Init.Prelude import Init.Data.String.Basic import Init.Data.Array.Basic public import Lean.Compiler.Yul.AST
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
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_pad___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Compiler_Yul_Printer_pad___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_pad___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_pad___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l_Lean_Compiler_Yul_Printer_pad___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_pad___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_pad(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_pad___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_line___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Compiler_Yul_Printer_line___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_line___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_line(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_line___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Lean_Compiler_Yul_Printer_printLiteral___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printLiteral___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printLiteral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hex\""};
static const lean_object* l_Lean_Compiler_Yul_Printer_printLiteral___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printLiteral___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printLiteral(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printLiteral___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printTypedName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printTypedName___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printTypedName___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printTypedName(lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_joinArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Compiler_Yul_Printer_joinArgs___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_joinArgs___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Compiler_Yul_Printer_printExpr___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printExpr___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printExpr___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printExpr(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_joinArgs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_joinArgs(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_printStatement_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printBlockInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{\n"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printBlockInline___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printBlockInline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printBlockInline___closed__1_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printBlock___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printBlock___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printBlockInline___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "{ }"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline___closed__2 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printBlockInline___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlock(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "let "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__1_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "if "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__2 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__2_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printCase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printCase___closed__2 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printCase___closed__2_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "switch "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__3 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__3_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "function "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__4 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__4_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " -> "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__5 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__5_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "for "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__6 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__6_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "break"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__7 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__7_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "continue"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__8 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__8_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printStatement___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "leave"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printStatement___closed__9 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printStatement___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printStatement(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printCase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "default "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printCase___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printCase___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printCase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "case "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printCase___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printCase___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printCase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printCase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printStatement___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printDataSection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "data \""};
static const lean_object* l_Lean_Compiler_Yul_Printer_printDataSection___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printDataSection___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printDataSection___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\" "};
static const lean_object* l_Lean_Compiler_Yul_Printer_printDataSection___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printDataSection___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printDataSection(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printDataSection___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_printObject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "object \""};
static const lean_object* l_Lean_Compiler_Yul_Printer_printObject___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printObject___closed__0_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printObject___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\" {"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printObject___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printObject___closed__1_value;
static const lean_string_object l_Lean_Compiler_Yul_Printer_printObject___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "code {"};
static const lean_object* l_Lean_Compiler_Yul_Printer_printObject___closed__2 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_printObject___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printObject(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printObject___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_render(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_render___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Printer_renderContract___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Contract"};
static const lean_object* l_Lean_Compiler_Yul_Printer_renderContract___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_renderContract___closed__0_value;
static const lean_array_object l_Lean_Compiler_Yul_Printer_renderContract___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_Yul_Printer_renderContract___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Printer_renderContract___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_renderContract(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_pad(lean_object* v_x_3_){
_start:
{
lean_object* v_zero_4_; uint8_t v_isZero_5_; 
v_zero_4_ = lean_unsigned_to_nat(0u);
v_isZero_5_ = lean_nat_dec_eq(v_x_3_, v_zero_4_);
if (v_isZero_5_ == 1)
{
lean_object* v___x_6_; 
v___x_6_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__0));
return v___x_6_;
}
else
{
lean_object* v_one_7_; lean_object* v_n_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_one_7_ = lean_unsigned_to_nat(1u);
v_n_8_ = lean_nat_sub(v_x_3_, v_one_7_);
v___x_9_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__1));
v___x_10_ = l_Lean_Compiler_Yul_Printer_pad(v_n_8_);
lean_dec(v_n_8_);
v___x_11_ = lean_string_append(v___x_9_, v___x_10_);
lean_dec_ref(v___x_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_pad___boxed(lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lean_Compiler_Yul_Printer_pad(v_x_12_);
lean_dec(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_line(lean_object* v_indent_15_, lean_object* v_s_16_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_17_ = l_Lean_Compiler_Yul_Printer_pad(v_indent_15_);
v___x_18_ = lean_string_append(v___x_17_, v_s_16_);
v___x_19_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_line___closed__0));
v___x_20_ = lean_string_append(v___x_18_, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_line___boxed(lean_object* v_indent_21_, lean_object* v_s_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Compiler_Yul_Printer_line(v_indent_21_, v_s_22_);
lean_dec_ref(v_s_22_);
lean_dec(v_indent_21_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printLiteral(lean_object* v_l_26_){
_start:
{
uint8_t v_kind_27_; 
v_kind_27_ = lean_ctor_get_uint8(v_l_26_, sizeof(void*)*1);
switch(v_kind_27_)
{
case 3:
{
lean_object* v_value_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v_value_28_ = lean_ctor_get(v_l_26_, 0);
v___x_29_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printLiteral___closed__0));
v___x_30_ = lean_string_append(v___x_29_, v_value_28_);
v___x_31_ = lean_string_append(v___x_30_, v___x_29_);
return v___x_31_;
}
case 4:
{
lean_object* v_value_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_value_32_ = lean_ctor_get(v_l_26_, 0);
v___x_33_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printLiteral___closed__1));
v___x_34_ = lean_string_append(v___x_33_, v_value_32_);
v___x_35_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printLiteral___closed__0));
v___x_36_ = lean_string_append(v___x_34_, v___x_35_);
return v___x_36_;
}
default: 
{
lean_object* v_value_37_; 
v_value_37_ = lean_ctor_get(v_l_26_, 0);
lean_inc_ref(v_value_37_);
return v_value_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printLiteral___boxed(lean_object* v_l_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_Compiler_Yul_Printer_printLiteral(v_l_38_);
lean_dec_ref(v_l_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printTypedName(lean_object* v_tn_41_){
_start:
{
lean_object* v_typeName_42_; 
v_typeName_42_ = lean_ctor_get(v_tn_41_, 1);
if (lean_obj_tag(v_typeName_42_) == 0)
{
lean_object* v_name_43_; 
v_name_43_ = lean_ctor_get(v_tn_41_, 0);
lean_inc_ref(v_name_43_);
lean_dec_ref(v_tn_41_);
return v_name_43_;
}
else
{
lean_object* v_name_44_; lean_object* v_val_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
lean_inc_ref(v_typeName_42_);
v_name_44_ = lean_ctor_get(v_tn_41_, 0);
lean_inc_ref(v_name_44_);
lean_dec_ref(v_tn_41_);
v_val_45_ = lean_ctor_get(v_typeName_42_, 0);
lean_inc(v_val_45_);
lean_dec_ref_known(v_typeName_42_, 1);
v___x_46_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printTypedName___closed__0));
v___x_47_ = lean_string_append(v_name_44_, v___x_46_);
v___x_48_ = lean_string_append(v___x_47_, v_val_45_);
lean_dec(v_val_45_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printExpr(lean_object* v_x_52_){
_start:
{
lean_object* v_fn_54_; lean_object* v_args_55_; 
switch(lean_obj_tag(v_x_52_))
{
case 0:
{
lean_object* v_l_62_; lean_object* v___x_63_; 
v_l_62_ = lean_ctor_get(v_x_52_, 0);
lean_inc_ref(v_l_62_);
lean_dec_ref_known(v_x_52_, 1);
v___x_63_ = l_Lean_Compiler_Yul_Printer_printLiteral(v_l_62_);
lean_dec_ref(v_l_62_);
return v___x_63_;
}
case 1:
{
lean_object* v_name_64_; 
v_name_64_ = lean_ctor_get(v_x_52_, 0);
lean_inc_ref(v_name_64_);
lean_dec_ref_known(v_x_52_, 1);
return v_name_64_;
}
default: 
{
lean_object* v_fn_65_; lean_object* v_args_66_; 
v_fn_65_ = lean_ctor_get(v_x_52_, 0);
lean_inc_ref(v_fn_65_);
v_args_66_ = lean_ctor_get(v_x_52_, 1);
lean_inc_ref(v_args_66_);
lean_dec_ref(v_x_52_);
v_fn_54_ = v_fn_65_;
v_args_55_ = v_args_66_;
goto v___jp_53_;
}
}
v___jp_53_:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_56_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printExpr___closed__0));
v___x_57_ = lean_string_append(v_fn_54_, v___x_56_);
v___x_58_ = l_Lean_Compiler_Yul_Printer_joinArgs(v_args_55_);
v___x_59_ = lean_string_append(v___x_57_, v___x_58_);
lean_dec_ref(v___x_58_);
v___x_60_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printExpr___closed__1));
v___x_61_ = lean_string_append(v___x_59_, v___x_60_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_joinArgs_spec__0(lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
if (lean_obj_tag(v_a_67_) == 0)
{
lean_object* v___x_69_; 
v___x_69_ = l_List_reverse___redArg(v_a_68_);
return v___x_69_;
}
else
{
lean_object* v_head_70_; lean_object* v_tail_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_80_; 
v_head_70_ = lean_ctor_get(v_a_67_, 0);
v_tail_71_ = lean_ctor_get(v_a_67_, 1);
v_isSharedCheck_80_ = !lean_is_exclusive(v_a_67_);
if (v_isSharedCheck_80_ == 0)
{
v___x_73_ = v_a_67_;
v_isShared_74_ = v_isSharedCheck_80_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_tail_71_);
lean_inc(v_head_70_);
lean_dec(v_a_67_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_80_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_75_ = l_Lean_Compiler_Yul_Printer_printExpr(v_head_70_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v_a_68_);
lean_ctor_set(v___x_73_, 0, v___x_75_);
v___x_77_ = v___x_73_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_75_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v_a_68_);
v___x_77_ = v_reuseFailAlloc_79_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
v_a_67_ = v_tail_71_;
v_a_68_ = v___x_77_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_joinArgs(lean_object* v_args_81_){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_82_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_joinArgs___closed__0));
v___x_83_ = lean_array_to_list(v_args_81_);
v___x_84_ = lean_box(0);
v___x_85_ = l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_joinArgs_spec__0(v___x_83_, v___x_84_);
v___x_86_ = l_String_intercalate(v___x_82_, v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_printStatement_spec__2(lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
if (lean_obj_tag(v_a_87_) == 0)
{
lean_object* v___x_89_; 
v___x_89_ = l_List_reverse___redArg(v_a_88_);
return v___x_89_;
}
else
{
lean_object* v_head_90_; lean_object* v_tail_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_100_; 
v_head_90_ = lean_ctor_get(v_a_87_, 0);
v_tail_91_ = lean_ctor_get(v_a_87_, 1);
v_isSharedCheck_100_ = !lean_is_exclusive(v_a_87_);
if (v_isSharedCheck_100_ == 0)
{
v___x_93_ = v_a_87_;
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_tail_91_);
lean_inc(v_head_90_);
lean_dec(v_a_87_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_100_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_95_ = l_Lean_Compiler_Yul_Printer_printTypedName(v_head_90_);
if (v_isShared_94_ == 0)
{
lean_ctor_set(v___x_93_, 1, v_a_88_);
lean_ctor_set(v___x_93_, 0, v___x_95_);
v___x_97_ = v___x_93_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v___x_95_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_a_88_);
v___x_97_ = v_reuseFailAlloc_99_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
v_a_87_ = v_tail_91_;
v_a_88_ = v___x_97_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlock(lean_object* v_indent_105_, lean_object* v_b_106_){
_start:
{
lean_object* v_statements_107_; lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v_statements_107_ = lean_ctor_get(v_b_106_, 0);
v___x_108_ = lean_array_get_size(v_statements_107_);
v___x_109_ = lean_unsigned_to_nat(0u);
v___x_110_ = lean_nat_dec_eq(v___x_108_, v___x_109_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; lean_object* v_header_112_; lean_object* v___y_114_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_111_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlock___closed__0));
v_header_112_ = l_Lean_Compiler_Yul_Printer_line(v_indent_105_, v___x_111_);
v___x_119_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__0));
v___x_120_ = lean_nat_dec_lt(v___x_109_, v___x_108_);
if (v___x_120_ == 0)
{
v___y_114_ = v___x_119_;
goto v___jp_113_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = lean_nat_dec_le(v___x_108_, v___x_108_);
if (v___x_121_ == 0)
{
if (v___x_120_ == 0)
{
v___y_114_ = v___x_119_;
goto v___jp_113_;
}
else
{
size_t v___x_122_; size_t v___x_123_; lean_object* v___x_124_; 
v___x_122_ = ((size_t)0ULL);
v___x_123_ = lean_usize_of_nat(v___x_108_);
v___x_124_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(v_indent_105_, v_statements_107_, v___x_122_, v___x_123_, v___x_119_);
v___y_114_ = v___x_124_;
goto v___jp_113_;
}
}
else
{
size_t v___x_125_; size_t v___x_126_; lean_object* v___x_127_; 
v___x_125_ = ((size_t)0ULL);
v___x_126_ = lean_usize_of_nat(v___x_108_);
v___x_127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(v_indent_105_, v_statements_107_, v___x_125_, v___x_126_, v___x_119_);
v___y_114_ = v___x_127_;
goto v___jp_113_;
}
}
v___jp_113_:
{
lean_object* v___x_115_; lean_object* v_footer_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_115_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlockInline___closed__1));
v_footer_116_ = l_Lean_Compiler_Yul_Printer_line(v_indent_105_, v___x_115_);
v___x_117_ = lean_string_append(v_header_112_, v___y_114_);
lean_dec_ref(v___y_114_);
v___x_118_ = lean_string_append(v___x_117_, v_footer_116_);
lean_dec_ref(v_footer_116_);
return v___x_118_;
}
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlockInline___closed__2));
v___x_129_ = l_Lean_Compiler_Yul_Printer_line(v_indent_105_, v___x_128_);
return v___x_129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printStatement(lean_object* v_indent_141_, lean_object* v_x_142_){
_start:
{
switch(lean_obj_tag(v_x_142_))
{
case 0:
{
lean_object* v_b_143_; lean_object* v___x_144_; 
v_b_143_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_b_143_);
lean_dec_ref_known(v_x_142_, 1);
v___x_144_ = l_Lean_Compiler_Yul_Printer_printBlock(v_indent_141_, v_b_143_);
lean_dec_ref(v_b_143_);
return v___x_144_;
}
case 1:
{
lean_object* v_vars_145_; lean_object* v_value_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v_names_151_; 
v_vars_145_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_vars_145_);
v_value_146_ = lean_ctor_get(v_x_142_, 1);
lean_inc(v_value_146_);
lean_dec_ref_known(v_x_142_, 2);
v___x_147_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_joinArgs___closed__0));
v___x_148_ = lean_array_to_list(v_vars_145_);
v___x_149_ = lean_box(0);
v___x_150_ = l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_printStatement_spec__2(v___x_148_, v___x_149_);
v_names_151_ = l_String_intercalate(v___x_147_, v___x_150_);
if (lean_obj_tag(v_value_146_) == 0)
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__0));
v___x_153_ = lean_string_append(v___x_152_, v_names_151_);
lean_dec_ref(v_names_151_);
v___x_154_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_153_);
lean_dec_ref(v___x_153_);
return v___x_154_;
}
else
{
lean_object* v_val_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v_val_155_ = lean_ctor_get(v_value_146_, 0);
lean_inc(v_val_155_);
lean_dec_ref_known(v_value_146_, 1);
v___x_156_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__0));
v___x_157_ = lean_string_append(v___x_156_, v_names_151_);
lean_dec_ref(v_names_151_);
v___x_158_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__1));
v___x_159_ = lean_string_append(v___x_157_, v___x_158_);
v___x_160_ = l_Lean_Compiler_Yul_Printer_printExpr(v_val_155_);
v___x_161_ = lean_string_append(v___x_159_, v___x_160_);
lean_dec_ref(v___x_160_);
v___x_162_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_161_);
lean_dec_ref(v___x_161_);
return v___x_162_;
}
}
case 2:
{
lean_object* v_vars_163_; lean_object* v_value_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_vars_163_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_vars_163_);
v_value_164_ = lean_ctor_get(v_x_142_, 1);
lean_inc_ref(v_value_164_);
lean_dec_ref_known(v_x_142_, 2);
v___x_165_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_joinArgs___closed__0));
v___x_166_ = lean_array_to_list(v_vars_163_);
v___x_167_ = l_String_intercalate(v___x_165_, v___x_166_);
v___x_168_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__1));
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
v___x_170_ = l_Lean_Compiler_Yul_Printer_printExpr(v_value_164_);
v___x_171_ = lean_string_append(v___x_169_, v___x_170_);
lean_dec_ref(v___x_170_);
v___x_172_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_171_);
lean_dec_ref(v___x_171_);
return v___x_172_;
}
case 3:
{
lean_object* v_e_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_e_173_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_e_173_);
lean_dec_ref_known(v_x_142_, 1);
v___x_174_ = l_Lean_Compiler_Yul_Printer_printExpr(v_e_173_);
v___x_175_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_174_);
lean_dec_ref(v___x_174_);
return v___x_175_;
}
case 4:
{
lean_object* v_cond_176_; lean_object* v_body_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v_cond_176_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_cond_176_);
v_body_177_ = lean_ctor_get(v_x_142_, 1);
lean_inc_ref(v_body_177_);
lean_dec_ref_known(v_x_142_, 2);
v___x_178_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__2));
v___x_179_ = l_Lean_Compiler_Yul_Printer_printExpr(v_cond_176_);
v___x_180_ = lean_string_append(v___x_178_, v___x_179_);
lean_dec_ref(v___x_179_);
v___x_181_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printCase___closed__2));
v___x_182_ = lean_string_append(v___x_180_, v___x_181_);
v___x_183_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_141_, v_body_177_);
lean_dec_ref(v_body_177_);
v___x_184_ = lean_string_append(v___x_182_, v___x_183_);
lean_dec_ref(v___x_183_);
v___x_185_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_184_);
lean_dec_ref(v___x_184_);
return v___x_185_;
}
case 5:
{
lean_object* v_e_186_; lean_object* v_cases_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v_header_191_; lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_e_186_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_e_186_);
v_cases_187_ = lean_ctor_get(v_x_142_, 1);
lean_inc_ref(v_cases_187_);
lean_dec_ref_known(v_x_142_, 2);
v___x_188_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__3));
v___x_189_ = l_Lean_Compiler_Yul_Printer_printExpr(v_e_186_);
v___x_190_ = lean_string_append(v___x_188_, v___x_189_);
lean_dec_ref(v___x_189_);
v_header_191_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_190_);
lean_dec_ref(v___x_190_);
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_array_get_size(v_cases_187_);
v___x_194_ = lean_nat_dec_lt(v___x_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_dec_ref(v_cases_187_);
return v_header_191_;
}
else
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__0));
v___x_196_ = lean_nat_dec_le(v___x_193_, v___x_193_);
if (v___x_196_ == 0)
{
if (v___x_194_ == 0)
{
lean_dec_ref(v_cases_187_);
return v_header_191_;
}
else
{
size_t v___x_197_; size_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_197_ = ((size_t)0ULL);
v___x_198_ = lean_usize_of_nat(v___x_193_);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3(v_indent_141_, v_cases_187_, v___x_197_, v___x_198_, v___x_195_);
lean_dec_ref(v_cases_187_);
v___x_200_ = lean_string_append(v_header_191_, v___x_199_);
lean_dec_ref(v___x_199_);
return v___x_200_;
}
}
else
{
size_t v___x_201_; size_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_201_ = ((size_t)0ULL);
v___x_202_ = lean_usize_of_nat(v___x_193_);
v___x_203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3(v_indent_141_, v_cases_187_, v___x_201_, v___x_202_, v___x_195_);
lean_dec_ref(v_cases_187_);
v___x_204_ = lean_string_append(v_header_191_, v___x_203_);
lean_dec_ref(v___x_203_);
return v___x_204_;
}
}
}
case 6:
{
lean_object* v_name_205_; lean_object* v_params_206_; lean_object* v_returns_207_; lean_object* v_body_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v_paramsStr_213_; lean_object* v___y_215_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v_name_205_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_name_205_);
v_params_206_ = lean_ctor_get(v_x_142_, 1);
lean_inc_ref(v_params_206_);
v_returns_207_ = lean_ctor_get(v_x_142_, 2);
lean_inc_ref(v_returns_207_);
v_body_208_ = lean_ctor_get(v_x_142_, 3);
lean_inc_ref(v_body_208_);
lean_dec_ref_known(v_x_142_, 4);
v___x_209_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_joinArgs___closed__0));
v___x_210_ = lean_array_to_list(v_params_206_);
v___x_211_ = lean_box(0);
v___x_212_ = l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_printStatement_spec__2(v___x_210_, v___x_211_);
v_paramsStr_213_ = l_String_intercalate(v___x_209_, v___x_212_);
v___x_232_ = lean_array_get_size(v_returns_207_);
v___x_233_ = lean_unsigned_to_nat(0u);
v___x_234_ = lean_nat_dec_eq(v___x_232_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_235_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__5));
v___x_236_ = lean_array_to_list(v_returns_207_);
v___x_237_ = l_List_mapTR_loop___at___00Lean_Compiler_Yul_Printer_printStatement_spec__2(v___x_236_, v___x_211_);
v___x_238_ = l_String_intercalate(v___x_209_, v___x_237_);
v___x_239_ = lean_string_append(v___x_235_, v___x_238_);
lean_dec_ref(v___x_238_);
v___y_215_ = v___x_239_;
goto v___jp_214_;
}
else
{
lean_object* v___x_240_; 
lean_dec_ref(v_returns_207_);
v___x_240_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__0));
v___y_215_ = v___x_240_;
goto v___jp_214_;
}
v___jp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_216_ = l_Lean_Compiler_Yul_Printer_pad(v_indent_141_);
v___x_217_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__4));
v___x_218_ = lean_string_append(v___x_216_, v___x_217_);
v___x_219_ = lean_string_append(v___x_218_, v_name_205_);
lean_dec_ref(v_name_205_);
v___x_220_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printExpr___closed__0));
v___x_221_ = lean_string_append(v___x_219_, v___x_220_);
v___x_222_ = lean_string_append(v___x_221_, v_paramsStr_213_);
lean_dec_ref(v_paramsStr_213_);
v___x_223_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printExpr___closed__1));
v___x_224_ = lean_string_append(v___x_222_, v___x_223_);
v___x_225_ = lean_string_append(v___x_224_, v___y_215_);
lean_dec_ref(v___y_215_);
v___x_226_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printCase___closed__2));
v___x_227_ = lean_string_append(v___x_225_, v___x_226_);
v___x_228_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_141_, v_body_208_);
lean_dec_ref(v_body_208_);
v___x_229_ = lean_string_append(v___x_227_, v___x_228_);
lean_dec_ref(v___x_228_);
v___x_230_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_line___closed__0));
v___x_231_ = lean_string_append(v___x_229_, v___x_230_);
return v___x_231_;
}
}
case 7:
{
lean_object* v_pre_241_; lean_object* v_cond_242_; lean_object* v_post_243_; lean_object* v_body_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_pre_241_ = lean_ctor_get(v_x_142_, 0);
lean_inc_ref(v_pre_241_);
v_cond_242_ = lean_ctor_get(v_x_142_, 1);
lean_inc_ref(v_cond_242_);
v_post_243_ = lean_ctor_get(v_x_142_, 2);
lean_inc_ref(v_post_243_);
v_body_244_ = lean_ctor_get(v_x_142_, 3);
lean_inc_ref(v_body_244_);
lean_dec_ref_known(v_x_142_, 4);
v___x_245_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__6));
v___x_246_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_141_, v_pre_241_);
lean_dec_ref(v_pre_241_);
v___x_247_ = lean_string_append(v___x_245_, v___x_246_);
lean_dec_ref(v___x_246_);
v___x_248_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printCase___closed__2));
v___x_249_ = lean_string_append(v___x_247_, v___x_248_);
v___x_250_ = l_Lean_Compiler_Yul_Printer_printExpr(v_cond_242_);
v___x_251_ = lean_string_append(v___x_249_, v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = lean_string_append(v___x_251_, v___x_248_);
v___x_253_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_141_, v_post_243_);
lean_dec_ref(v_post_243_);
v___x_254_ = lean_string_append(v___x_252_, v___x_253_);
lean_dec_ref(v___x_253_);
v___x_255_ = lean_string_append(v___x_254_, v___x_248_);
v___x_256_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_141_, v_body_244_);
lean_dec_ref(v_body_244_);
v___x_257_ = lean_string_append(v___x_255_, v___x_256_);
lean_dec_ref(v___x_256_);
v___x_258_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_257_);
lean_dec_ref(v___x_257_);
return v___x_258_;
}
case 8:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__7));
v___x_260_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_259_);
return v___x_260_;
}
case 9:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__8));
v___x_262_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_261_);
return v___x_262_;
}
default: 
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printStatement___closed__9));
v___x_264_ = l_Lean_Compiler_Yul_Printer_line(v_indent_141_, v___x_263_);
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(lean_object* v_indent_265_, lean_object* v_as_266_, size_t v_i_267_, size_t v_stop_268_, lean_object* v_b_269_){
_start:
{
uint8_t v___x_270_; 
v___x_270_ = lean_usize_dec_eq(v_i_267_, v_stop_268_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; size_t v___x_276_; size_t v___x_277_; 
v___x_271_ = lean_array_uget_borrowed(v_as_266_, v_i_267_);
v___x_272_ = lean_unsigned_to_nat(1u);
v___x_273_ = lean_nat_add(v_indent_265_, v___x_272_);
lean_inc(v___x_271_);
v___x_274_ = l_Lean_Compiler_Yul_Printer_printStatement(v___x_273_, v___x_271_);
lean_dec(v___x_273_);
v___x_275_ = lean_string_append(v_b_269_, v___x_274_);
lean_dec_ref(v___x_274_);
v___x_276_ = ((size_t)1ULL);
v___x_277_ = lean_usize_add(v_i_267_, v___x_276_);
v_i_267_ = v___x_277_;
v_b_269_ = v___x_275_;
goto _start;
}
else
{
return v_b_269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline(lean_object* v_indent_279_, lean_object* v_b_280_){
_start:
{
lean_object* v___y_282_; lean_object* v_statements_289_; lean_object* v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v_statements_289_ = lean_ctor_get(v_b_280_, 0);
v___x_290_ = lean_array_get_size(v_statements_289_);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_nat_dec_eq(v___x_290_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__0));
v___x_294_ = lean_nat_dec_lt(v___x_291_, v___x_290_);
if (v___x_294_ == 0)
{
v___y_282_ = v___x_293_;
goto v___jp_281_;
}
else
{
uint8_t v___x_295_; 
v___x_295_ = lean_nat_dec_le(v___x_290_, v___x_290_);
if (v___x_295_ == 0)
{
if (v___x_294_ == 0)
{
v___y_282_ = v___x_293_;
goto v___jp_281_;
}
else
{
size_t v___x_296_; size_t v___x_297_; lean_object* v___x_298_; 
v___x_296_ = ((size_t)0ULL);
v___x_297_ = lean_usize_of_nat(v___x_290_);
v___x_298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(v_indent_279_, v_statements_289_, v___x_296_, v___x_297_, v___x_293_);
v___y_282_ = v___x_298_;
goto v___jp_281_;
}
}
else
{
size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; 
v___x_299_ = ((size_t)0ULL);
v___x_300_ = lean_usize_of_nat(v___x_290_);
v___x_301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(v_indent_279_, v_statements_289_, v___x_299_, v___x_300_, v___x_293_);
v___y_282_ = v___x_301_;
goto v___jp_281_;
}
}
}
else
{
lean_object* v___x_302_; 
v___x_302_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlockInline___closed__2));
return v___x_302_;
}
v___jp_281_:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_283_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlockInline___closed__0));
v___x_284_ = lean_string_append(v___x_283_, v___y_282_);
lean_dec_ref(v___y_282_);
v___x_285_ = l_Lean_Compiler_Yul_Printer_pad(v_indent_279_);
v___x_286_ = lean_string_append(v___x_284_, v___x_285_);
lean_dec_ref(v___x_285_);
v___x_287_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlockInline___closed__1));
v___x_288_ = lean_string_append(v___x_286_, v___x_287_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printCase(lean_object* v_indent_305_, lean_object* v_c_306_){
_start:
{
lean_object* v_value_307_; lean_object* v_body_308_; lean_object* v___y_310_; 
v_value_307_ = lean_ctor_get(v_c_306_, 0);
v_body_308_ = lean_ctor_get(v_c_306_, 1);
if (lean_obj_tag(v_value_307_) == 0)
{
lean_object* v___x_314_; 
v___x_314_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printCase___closed__0));
v___y_310_ = v___x_314_;
goto v___jp_309_;
}
else
{
lean_object* v_val_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_val_315_ = lean_ctor_get(v_value_307_, 0);
v___x_316_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printCase___closed__1));
v___x_317_ = l_Lean_Compiler_Yul_Printer_printLiteral(v_val_315_);
v___x_318_ = lean_string_append(v___x_316_, v___x_317_);
lean_dec_ref(v___x_317_);
v___x_319_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printCase___closed__2));
v___x_320_ = lean_string_append(v___x_318_, v___x_319_);
v___y_310_ = v___x_320_;
goto v___jp_309_;
}
v___jp_309_:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_305_, v_body_308_);
v___x_312_ = lean_string_append(v___y_310_, v___x_311_);
lean_dec_ref(v___x_311_);
v___x_313_ = l_Lean_Compiler_Yul_Printer_line(v_indent_305_, v___x_312_);
lean_dec_ref(v___x_312_);
return v___x_313_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3(lean_object* v_indent_321_, lean_object* v_as_322_, size_t v_i_323_, size_t v_stop_324_, lean_object* v_b_325_){
_start:
{
uint8_t v___x_326_; 
v___x_326_ = lean_usize_dec_eq(v_i_323_, v_stop_324_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; size_t v___x_330_; size_t v___x_331_; 
v___x_327_ = lean_array_uget_borrowed(v_as_322_, v_i_323_);
v___x_328_ = l_Lean_Compiler_Yul_Printer_printCase(v_indent_321_, v___x_327_);
v___x_329_ = lean_string_append(v_b_325_, v___x_328_);
lean_dec_ref(v___x_328_);
v___x_330_ = ((size_t)1ULL);
v___x_331_ = lean_usize_add(v_i_323_, v___x_330_);
v_i_323_ = v___x_331_;
v_b_325_ = v___x_329_;
goto _start;
}
else
{
return v_b_325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3___boxed(lean_object* v_indent_333_, lean_object* v_as_334_, lean_object* v_i_335_, lean_object* v_stop_336_, lean_object* v_b_337_){
_start:
{
size_t v_i_boxed_338_; size_t v_stop_boxed_339_; lean_object* v_res_340_; 
v_i_boxed_338_ = lean_unbox_usize(v_i_335_);
lean_dec(v_i_335_);
v_stop_boxed_339_ = lean_unbox_usize(v_stop_336_);
lean_dec(v_stop_336_);
v_res_340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printStatement_spec__3(v_indent_333_, v_as_334_, v_i_boxed_338_, v_stop_boxed_339_, v_b_337_);
lean_dec_ref(v_as_334_);
lean_dec(v_indent_333_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0___boxed(lean_object* v_indent_341_, lean_object* v_as_342_, lean_object* v_i_343_, lean_object* v_stop_344_, lean_object* v_b_345_){
_start:
{
size_t v_i_boxed_346_; size_t v_stop_boxed_347_; lean_object* v_res_348_; 
v_i_boxed_346_ = lean_unbox_usize(v_i_343_);
lean_dec(v_i_343_);
v_stop_boxed_347_ = lean_unbox_usize(v_stop_344_);
lean_dec(v_stop_344_);
v_res_348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printBlock_spec__0(v_indent_341_, v_as_342_, v_i_boxed_346_, v_stop_boxed_347_, v_b_345_);
lean_dec_ref(v_as_342_);
lean_dec(v_indent_341_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printCase___boxed(lean_object* v_indent_349_, lean_object* v_c_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Compiler_Yul_Printer_printCase(v_indent_349_, v_c_350_);
lean_dec_ref(v_c_350_);
lean_dec(v_indent_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlockInline___boxed(lean_object* v_indent_352_, lean_object* v_b_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_Compiler_Yul_Printer_printBlockInline(v_indent_352_, v_b_353_);
lean_dec_ref(v_b_353_);
lean_dec(v_indent_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printBlock___boxed(lean_object* v_indent_355_, lean_object* v_b_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lean_Compiler_Yul_Printer_printBlock(v_indent_355_, v_b_356_);
lean_dec_ref(v_b_356_);
lean_dec(v_indent_355_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printStatement___boxed(lean_object* v_indent_358_, lean_object* v_x_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Compiler_Yul_Printer_printStatement(v_indent_358_, v_x_359_);
lean_dec(v_indent_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printDataSection(lean_object* v_indent_363_, lean_object* v_d_364_){
_start:
{
lean_object* v_name_365_; lean_object* v_data_366_; uint8_t v_isHex_367_; lean_object* v___y_369_; 
v_name_365_ = lean_ctor_get(v_d_364_, 0);
v_data_366_ = lean_ctor_get(v_d_364_, 1);
v_isHex_367_ = lean_ctor_get_uint8(v_d_364_, sizeof(void*)*2);
if (v_isHex_367_ == 0)
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printLiteral___closed__0));
v___x_377_ = lean_string_append(v___x_376_, v_data_366_);
v___x_378_ = lean_string_append(v___x_377_, v___x_376_);
v___y_369_ = v___x_378_;
goto v___jp_368_;
}
else
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printLiteral___closed__1));
v___x_380_ = lean_string_append(v___x_379_, v_data_366_);
v___x_381_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printLiteral___closed__0));
v___x_382_ = lean_string_append(v___x_380_, v___x_381_);
v___y_369_ = v___x_382_;
goto v___jp_368_;
}
v___jp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_370_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printDataSection___closed__0));
v___x_371_ = lean_string_append(v___x_370_, v_name_365_);
v___x_372_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printDataSection___closed__1));
v___x_373_ = lean_string_append(v___x_371_, v___x_372_);
v___x_374_ = lean_string_append(v___x_373_, v___y_369_);
lean_dec_ref(v___y_369_);
v___x_375_ = l_Lean_Compiler_Yul_Printer_line(v_indent_363_, v___x_374_);
lean_dec_ref(v___x_374_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printDataSection___boxed(lean_object* v_indent_383_, lean_object* v_d_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Compiler_Yul_Printer_printDataSection(v_indent_383_, v_d_384_);
lean_dec_ref(v_d_384_);
lean_dec(v_indent_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0(lean_object* v___x_386_, lean_object* v_as_387_, size_t v_i_388_, size_t v_stop_389_, lean_object* v_b_390_){
_start:
{
uint8_t v___x_391_; 
v___x_391_ = lean_usize_dec_eq(v_i_388_, v_stop_389_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; size_t v___x_395_; size_t v___x_396_; 
v___x_392_ = lean_array_uget_borrowed(v_as_387_, v_i_388_);
v___x_393_ = l_Lean_Compiler_Yul_Printer_printDataSection(v___x_386_, v___x_392_);
v___x_394_ = lean_string_append(v_b_390_, v___x_393_);
lean_dec_ref(v___x_393_);
v___x_395_ = ((size_t)1ULL);
v___x_396_ = lean_usize_add(v_i_388_, v___x_395_);
v_i_388_ = v___x_396_;
v_b_390_ = v___x_394_;
goto _start;
}
else
{
return v_b_390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0___boxed(lean_object* v___x_398_, lean_object* v_as_399_, lean_object* v_i_400_, lean_object* v_stop_401_, lean_object* v_b_402_){
_start:
{
size_t v_i_boxed_403_; size_t v_stop_boxed_404_; lean_object* v_res_405_; 
v_i_boxed_403_ = lean_unbox_usize(v_i_400_);
lean_dec(v_i_400_);
v_stop_boxed_404_ = lean_unbox_usize(v_stop_401_);
lean_dec(v_stop_401_);
v_res_405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0(v___x_398_, v_as_399_, v_i_boxed_403_, v_stop_boxed_404_, v_b_402_);
lean_dec_ref(v_as_399_);
lean_dec(v___x_398_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2(lean_object* v_indent_406_, lean_object* v_as_407_, size_t v_i_408_, size_t v_stop_409_, lean_object* v_b_410_){
_start:
{
uint8_t v___x_411_; 
v___x_411_ = lean_usize_dec_eq(v_i_408_, v_stop_409_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; size_t v___x_417_; size_t v___x_418_; 
v___x_412_ = lean_array_uget_borrowed(v_as_407_, v_i_408_);
v___x_413_ = lean_unsigned_to_nat(2u);
v___x_414_ = lean_nat_add(v_indent_406_, v___x_413_);
lean_inc(v___x_412_);
v___x_415_ = l_Lean_Compiler_Yul_Printer_printStatement(v___x_414_, v___x_412_);
lean_dec(v___x_414_);
v___x_416_ = lean_string_append(v_b_410_, v___x_415_);
lean_dec_ref(v___x_415_);
v___x_417_ = ((size_t)1ULL);
v___x_418_ = lean_usize_add(v_i_408_, v___x_417_);
v_i_408_ = v___x_418_;
v_b_410_ = v___x_416_;
goto _start;
}
else
{
return v_b_410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2___boxed(lean_object* v_indent_420_, lean_object* v_as_421_, lean_object* v_i_422_, lean_object* v_stop_423_, lean_object* v_b_424_){
_start:
{
size_t v_i_boxed_425_; size_t v_stop_boxed_426_; lean_object* v_res_427_; 
v_i_boxed_425_ = lean_unbox_usize(v_i_422_);
lean_dec(v_i_422_);
v_stop_boxed_426_ = lean_unbox_usize(v_stop_423_);
lean_dec(v_stop_423_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2(v_indent_420_, v_as_421_, v_i_boxed_425_, v_stop_boxed_426_, v_b_424_);
lean_dec_ref(v_as_421_);
lean_dec(v_indent_420_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printObject(lean_object* v_indent_431_, lean_object* v_o_432_){
_start:
{
lean_object* v_code_433_; lean_object* v_name_434_; lean_object* v_subObjects_435_; lean_object* v_dataSections_436_; lean_object* v_statements_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v_header_442_; lean_object* v___y_444_; lean_object* v___y_445_; lean_object* v___y_446_; lean_object* v___y_447_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v_codeHeader_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_473_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_code_433_ = lean_ctor_get(v_o_432_, 1);
v_name_434_ = lean_ctor_get(v_o_432_, 0);
v_subObjects_435_ = lean_ctor_get(v_o_432_, 2);
v_dataSections_436_ = lean_ctor_get(v_o_432_, 3);
v_statements_437_ = lean_ctor_get(v_code_433_, 0);
v___x_438_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printObject___closed__0));
v___x_439_ = lean_string_append(v___x_438_, v_name_434_);
v___x_440_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printObject___closed__1));
v___x_441_ = lean_string_append(v___x_439_, v___x_440_);
v_header_442_ = l_Lean_Compiler_Yul_Printer_line(v_indent_431_, v___x_441_);
lean_dec_ref(v___x_441_);
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = lean_nat_add(v_indent_431_, v___x_453_);
v___x_455_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printObject___closed__2));
v_codeHeader_456_ = l_Lean_Compiler_Yul_Printer_line(v___x_454_, v___x_455_);
v___x_457_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_pad___closed__0));
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_487_ = lean_array_get_size(v_statements_437_);
v___x_488_ = lean_nat_dec_lt(v___x_458_, v___x_487_);
if (v___x_488_ == 0)
{
v___y_473_ = v___x_457_;
goto v___jp_472_;
}
else
{
uint8_t v___x_489_; 
v___x_489_ = lean_nat_dec_le(v___x_487_, v___x_487_);
if (v___x_489_ == 0)
{
if (v___x_488_ == 0)
{
v___y_473_ = v___x_457_;
goto v___jp_472_;
}
else
{
size_t v___x_490_; size_t v___x_491_; lean_object* v___x_492_; 
v___x_490_ = ((size_t)0ULL);
v___x_491_ = lean_usize_of_nat(v___x_487_);
v___x_492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2(v_indent_431_, v_statements_437_, v___x_490_, v___x_491_, v___x_457_);
v___y_473_ = v___x_492_;
goto v___jp_472_;
}
}
else
{
size_t v___x_493_; size_t v___x_494_; lean_object* v___x_495_; 
v___x_493_ = ((size_t)0ULL);
v___x_494_ = lean_usize_of_nat(v___x_487_);
v___x_495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__2(v_indent_431_, v_statements_437_, v___x_493_, v___x_494_, v___x_457_);
v___y_473_ = v___x_495_;
goto v___jp_472_;
}
}
v___jp_443_:
{
lean_object* v_footer_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_footer_448_ = l_Lean_Compiler_Yul_Printer_line(v_indent_431_, v___y_446_);
v___x_449_ = lean_string_append(v_header_442_, v___y_444_);
lean_dec_ref(v___y_444_);
v___x_450_ = lean_string_append(v___x_449_, v___y_445_);
lean_dec_ref(v___y_445_);
v___x_451_ = lean_string_append(v___x_450_, v___y_447_);
lean_dec_ref(v___y_447_);
v___x_452_ = lean_string_append(v___x_451_, v_footer_448_);
lean_dec_ref(v_footer_448_);
return v___x_452_;
}
v___jp_459_:
{
lean_object* v___x_463_; uint8_t v___x_464_; 
v___x_463_ = lean_array_get_size(v_dataSections_436_);
v___x_464_ = lean_nat_dec_lt(v___x_458_, v___x_463_);
if (v___x_464_ == 0)
{
lean_dec(v___x_454_);
v___y_444_ = v___y_460_;
v___y_445_ = v___y_462_;
v___y_446_ = v___y_461_;
v___y_447_ = v___x_457_;
goto v___jp_443_;
}
else
{
uint8_t v___x_465_; 
v___x_465_ = lean_nat_dec_le(v___x_463_, v___x_463_);
if (v___x_465_ == 0)
{
if (v___x_464_ == 0)
{
lean_dec(v___x_454_);
v___y_444_ = v___y_460_;
v___y_445_ = v___y_462_;
v___y_446_ = v___y_461_;
v___y_447_ = v___x_457_;
goto v___jp_443_;
}
else
{
size_t v___x_466_; size_t v___x_467_; lean_object* v___x_468_; 
v___x_466_ = ((size_t)0ULL);
v___x_467_ = lean_usize_of_nat(v___x_463_);
v___x_468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0(v___x_454_, v_dataSections_436_, v___x_466_, v___x_467_, v___x_457_);
lean_dec(v___x_454_);
v___y_444_ = v___y_460_;
v___y_445_ = v___y_462_;
v___y_446_ = v___y_461_;
v___y_447_ = v___x_468_;
goto v___jp_443_;
}
}
else
{
size_t v___x_469_; size_t v___x_470_; lean_object* v___x_471_; 
v___x_469_ = ((size_t)0ULL);
v___x_470_ = lean_usize_of_nat(v___x_463_);
v___x_471_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__0(v___x_454_, v_dataSections_436_, v___x_469_, v___x_470_, v___x_457_);
lean_dec(v___x_454_);
v___y_444_ = v___y_460_;
v___y_445_ = v___y_462_;
v___y_446_ = v___y_461_;
v___y_447_ = v___x_471_;
goto v___jp_443_;
}
}
}
v___jp_472_:
{
lean_object* v___x_474_; lean_object* v_codeFooter_475_; lean_object* v___x_476_; lean_object* v_codeBlock_477_; lean_object* v___x_478_; uint8_t v___x_479_; 
v___x_474_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_printBlockInline___closed__1));
v_codeFooter_475_ = l_Lean_Compiler_Yul_Printer_line(v___x_454_, v___x_474_);
v___x_476_ = lean_string_append(v_codeHeader_456_, v___y_473_);
lean_dec_ref(v___y_473_);
v_codeBlock_477_ = lean_string_append(v___x_476_, v_codeFooter_475_);
lean_dec_ref(v_codeFooter_475_);
v___x_478_ = lean_array_get_size(v_subObjects_435_);
v___x_479_ = lean_nat_dec_lt(v___x_458_, v___x_478_);
if (v___x_479_ == 0)
{
v___y_460_ = v_codeBlock_477_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_457_;
goto v___jp_459_;
}
else
{
uint8_t v___x_480_; 
v___x_480_ = lean_nat_dec_le(v___x_478_, v___x_478_);
if (v___x_480_ == 0)
{
if (v___x_479_ == 0)
{
v___y_460_ = v_codeBlock_477_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_457_;
goto v___jp_459_;
}
else
{
size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; 
v___x_481_ = ((size_t)0ULL);
v___x_482_ = lean_usize_of_nat(v___x_478_);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1(v___x_454_, v_subObjects_435_, v___x_481_, v___x_482_, v___x_457_);
v___y_460_ = v_codeBlock_477_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_483_;
goto v___jp_459_;
}
}
else
{
size_t v___x_484_; size_t v___x_485_; lean_object* v___x_486_; 
v___x_484_ = ((size_t)0ULL);
v___x_485_ = lean_usize_of_nat(v___x_478_);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1(v___x_454_, v_subObjects_435_, v___x_484_, v___x_485_, v___x_457_);
v___y_460_ = v_codeBlock_477_;
v___y_461_ = v___x_474_;
v___y_462_ = v___x_486_;
goto v___jp_459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1(lean_object* v___x_496_, lean_object* v_as_497_, size_t v_i_498_, size_t v_stop_499_, lean_object* v_b_500_){
_start:
{
uint8_t v___x_501_; 
v___x_501_ = lean_usize_dec_eq(v_i_498_, v_stop_499_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; size_t v___x_505_; size_t v___x_506_; 
v___x_502_ = lean_array_uget_borrowed(v_as_497_, v_i_498_);
v___x_503_ = l_Lean_Compiler_Yul_Printer_printObject(v___x_496_, v___x_502_);
v___x_504_ = lean_string_append(v_b_500_, v___x_503_);
lean_dec_ref(v___x_503_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_i_498_, v___x_505_);
v_i_498_ = v___x_506_;
v_b_500_ = v___x_504_;
goto _start;
}
else
{
return v_b_500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1___boxed(lean_object* v___x_508_, lean_object* v_as_509_, lean_object* v_i_510_, lean_object* v_stop_511_, lean_object* v_b_512_){
_start:
{
size_t v_i_boxed_513_; size_t v_stop_boxed_514_; lean_object* v_res_515_; 
v_i_boxed_513_ = lean_unbox_usize(v_i_510_);
lean_dec(v_i_510_);
v_stop_boxed_514_ = lean_unbox_usize(v_stop_511_);
lean_dec(v_stop_511_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_Yul_Printer_printObject_spec__1(v___x_508_, v_as_509_, v_i_boxed_513_, v_stop_boxed_514_, v_b_512_);
lean_dec_ref(v_as_509_);
lean_dec(v___x_508_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_printObject___boxed(lean_object* v_indent_516_, lean_object* v_o_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_Compiler_Yul_Printer_printObject(v_indent_516_, v_o_517_);
lean_dec_ref(v_o_517_);
lean_dec(v_indent_516_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_render(lean_object* v_o_519_){
_start:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_unsigned_to_nat(0u);
v___x_521_ = l_Lean_Compiler_Yul_Printer_printObject(v___x_520_, v_o_519_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_render___boxed(lean_object* v_o_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lean_Compiler_Yul_Printer_render(v_o_522_);
lean_dec_ref(v_o_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Printer_renderContract(lean_object* v_code_527_){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_528_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_renderContract___closed__0));
v___x_529_ = ((lean_object*)(l_Lean_Compiler_Yul_Printer_renderContract___closed__1));
v___x_530_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_530_, 0, v___x_528_);
lean_ctor_set(v___x_530_, 1, v_code_527_);
lean_ctor_set(v___x_530_, 2, v___x_529_);
lean_ctor_set(v___x_530_, 3, v___x_529_);
v___x_531_ = l_Lean_Compiler_Yul_Printer_render(v___x_530_);
lean_dec_ref_known(v___x_530_, 4);
return v___x_531_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Yul_AST(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_Yul_Printer(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Yul_AST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_Yul_Printer(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Yul_AST(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_Yul_Printer(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Yul_AST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Yul_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_Yul_Printer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_Yul_Printer(builtin);
}
#ifdef __cplusplus
}
#endif
