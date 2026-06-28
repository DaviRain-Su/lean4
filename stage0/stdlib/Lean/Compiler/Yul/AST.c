// Lean compiler output
// Module: Lean.Compiler.Yul.AST
// Imports: public import Init.Prelude public import Init.Data.Repr import Init.Data.Array.Basic import Init.Data.String.Basic
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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_Yul_EvmVersion_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_Yul_instDecidableEqEvmVersion(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_instDecidableEqEvmVersion___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Compiler.Yul.EvmVersion.constantinople"};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__0_value)}};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__1_value;
static const lean_string_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.Yul.EvmVersion.istanbul"};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__2 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__2_value)}};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__3 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__3_value;
static const lean_string_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.Yul.EvmVersion.london"};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__4 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__4_value)}};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__5 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__5_value;
static const lean_string_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.Yul.EvmVersion.paris"};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__6 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__6_value)}};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__7 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__7_value;
static const lean_string_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.Yul.EvmVersion.shanghai"};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__8 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__8_value)}};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__9 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__9_value;
static const lean_string_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.Yul.EvmVersion.cancun"};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__10 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__10_value)}};
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__11 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__11_value;
static lean_once_cell_t l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12;
static lean_once_cell_t l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_Yul_instReprEvmVersion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_Yul_instReprEvmVersion_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_Yul_instReprEvmVersion = (const lean_object*)&l_Lean_Compiler_Yul_instReprEvmVersion___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_Yul_EvmVersion_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_num(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_natLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_hex(lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_Literal_bool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Compiler_Yul_Literal_bool___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Literal_bool___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_Yul_Literal_bool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_Literal_bool___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_Yul_Literal_bool___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Literal_bool___closed__1_value;
static const lean_string_object l_Lean_Compiler_Yul_Literal_bool___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Compiler_Yul_Literal_bool___closed__2 = (const lean_object*)&l_Lean_Compiler_Yul_Literal_bool___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_Yul_Literal_bool___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_Literal_bool___closed__2_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_Yul_Literal_bool___closed__3 = (const lean_object*)&l_Lean_Compiler_Yul_Literal_bool___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_bool(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_bool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_hexString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ident_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ident_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_call_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_call_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_builtin_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_builtin_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__0_value)}};
static const lean_object* l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_Yul_instInhabitedExpr_default = (const lean_object*)&l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_Yul_instInhabitedExpr = (const lean_object*)&l_Lean_Compiler_Yul_instInhabitedExpr_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_block_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_block_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_varDecl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_varDecl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_assignment_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_assignment_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_exprStmt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_exprStmt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ifStmt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ifStmt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_switchStmt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_switchStmt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_funcDef_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_funcDef_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_forLoop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_forLoop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_break_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_break_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_leave_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_leave_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_num(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_str(lean_object*);
static lean_once_cell_t l_Lean_Compiler_Yul_Expr_boolTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_Yul_Expr_boolTrue___closed__0;
static lean_once_cell_t l_Lean_Compiler_Yul_Expr_boolTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_Yul_Expr_boolTrue___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_boolTrue;
static lean_once_cell_t l_Lean_Compiler_Yul_Expr_boolFalse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_Yul_Expr_boolFalse___closed__0;
static lean_once_cell_t l_Lean_Compiler_Yul_Expr_boolFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_Yul_Expr_boolFalse___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_boolFalse;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_id(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_call(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_builtin(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_Yul_Block_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_Yul_Block_empty___closed__0 = (const lean_object*)&l_Lean_Compiler_Yul_Block_empty___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_Yul_Block_empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_Yul_Block_empty___closed__0_value)}};
static const lean_object* l_Lean_Compiler_Yul_Block_empty___closed__1 = (const lean_object*)&l_Lean_Compiler_Yul_Block_empty___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_Yul_Block_empty = (const lean_object*)&l_Lean_Compiler_Yul_Block_empty___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
default: 
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
uint8_t v_x_boxed_9_; lean_object* v_res_10_; 
v_x_boxed_9_ = lean_unbox(v_x_8_);
v_res_10_ = l_Lean_Compiler_Yul_EvmVersion_ctorIdx(v_x_boxed_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_toCtorIdx(uint8_t v_x_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Compiler_Yul_EvmVersion_ctorIdx(v_x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_toCtorIdx___boxed(lean_object* v_x_13_){
_start:
{
uint8_t v_x_4__boxed_14_; lean_object* v_res_15_; 
v_x_4__boxed_14_ = lean_unbox(v_x_13_);
v_res_15_ = l_Lean_Compiler_Yul_EvmVersion_toCtorIdx(v_x_4__boxed_14_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim___redArg(lean_object* v_k_16_){
_start:
{
lean_inc(v_k_16_);
return v_k_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim___redArg___boxed(lean_object* v_k_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Compiler_Yul_EvmVersion_ctorElim___redArg(v_k_17_);
lean_dec(v_k_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, uint8_t v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_inc(v_k_23_);
return v_k_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ctorElim___boxed(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
uint8_t v_t_boxed_29_; lean_object* v_res_30_; 
v_t_boxed_29_ = lean_unbox(v_t_26_);
v_res_30_ = l_Lean_Compiler_Yul_EvmVersion_ctorElim(v_motive_24_, v_ctorIdx_25_, v_t_boxed_29_, v_h_27_, v_k_28_);
lean_dec(v_k_28_);
lean_dec(v_ctorIdx_25_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___redArg(lean_object* v_constantinople_31_){
_start:
{
lean_inc(v_constantinople_31_);
return v_constantinople_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___redArg___boxed(lean_object* v_constantinople_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___redArg(v_constantinople_32_);
lean_dec(v_constantinople_32_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim(lean_object* v_motive_34_, uint8_t v_t_35_, lean_object* v_h_36_, lean_object* v_constantinople_37_){
_start:
{
lean_inc(v_constantinople_37_);
return v_constantinople_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_constantinople_elim___boxed(lean_object* v_motive_38_, lean_object* v_t_39_, lean_object* v_h_40_, lean_object* v_constantinople_41_){
_start:
{
uint8_t v_t_boxed_42_; lean_object* v_res_43_; 
v_t_boxed_42_ = lean_unbox(v_t_39_);
v_res_43_ = l_Lean_Compiler_Yul_EvmVersion_constantinople_elim(v_motive_38_, v_t_boxed_42_, v_h_40_, v_constantinople_41_);
lean_dec(v_constantinople_41_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___redArg(lean_object* v_istanbul_44_){
_start:
{
lean_inc(v_istanbul_44_);
return v_istanbul_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___redArg___boxed(lean_object* v_istanbul_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___redArg(v_istanbul_45_);
lean_dec(v_istanbul_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim(lean_object* v_motive_47_, uint8_t v_t_48_, lean_object* v_h_49_, lean_object* v_istanbul_50_){
_start:
{
lean_inc(v_istanbul_50_);
return v_istanbul_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_istanbul_elim___boxed(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_istanbul_54_){
_start:
{
uint8_t v_t_boxed_55_; lean_object* v_res_56_; 
v_t_boxed_55_ = lean_unbox(v_t_52_);
v_res_56_ = l_Lean_Compiler_Yul_EvmVersion_istanbul_elim(v_motive_51_, v_t_boxed_55_, v_h_53_, v_istanbul_54_);
lean_dec(v_istanbul_54_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim___redArg(lean_object* v_london_57_){
_start:
{
lean_inc(v_london_57_);
return v_london_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim___redArg___boxed(lean_object* v_london_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l_Lean_Compiler_Yul_EvmVersion_london_elim___redArg(v_london_58_);
lean_dec(v_london_58_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim(lean_object* v_motive_60_, uint8_t v_t_61_, lean_object* v_h_62_, lean_object* v_london_63_){
_start:
{
lean_inc(v_london_63_);
return v_london_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_london_elim___boxed(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_london_67_){
_start:
{
uint8_t v_t_boxed_68_; lean_object* v_res_69_; 
v_t_boxed_68_ = lean_unbox(v_t_65_);
v_res_69_ = l_Lean_Compiler_Yul_EvmVersion_london_elim(v_motive_64_, v_t_boxed_68_, v_h_66_, v_london_67_);
lean_dec(v_london_67_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim___redArg(lean_object* v_paris_70_){
_start:
{
lean_inc(v_paris_70_);
return v_paris_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim___redArg___boxed(lean_object* v_paris_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Compiler_Yul_EvmVersion_paris_elim___redArg(v_paris_71_);
lean_dec(v_paris_71_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim(lean_object* v_motive_73_, uint8_t v_t_74_, lean_object* v_h_75_, lean_object* v_paris_76_){
_start:
{
lean_inc(v_paris_76_);
return v_paris_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_paris_elim___boxed(lean_object* v_motive_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_paris_80_){
_start:
{
uint8_t v_t_boxed_81_; lean_object* v_res_82_; 
v_t_boxed_81_ = lean_unbox(v_t_78_);
v_res_82_ = l_Lean_Compiler_Yul_EvmVersion_paris_elim(v_motive_77_, v_t_boxed_81_, v_h_79_, v_paris_80_);
lean_dec(v_paris_80_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___redArg(lean_object* v_shanghai_83_){
_start:
{
lean_inc(v_shanghai_83_);
return v_shanghai_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___redArg___boxed(lean_object* v_shanghai_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___redArg(v_shanghai_84_);
lean_dec(v_shanghai_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim(lean_object* v_motive_86_, uint8_t v_t_87_, lean_object* v_h_88_, lean_object* v_shanghai_89_){
_start:
{
lean_inc(v_shanghai_89_);
return v_shanghai_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_shanghai_elim___boxed(lean_object* v_motive_90_, lean_object* v_t_91_, lean_object* v_h_92_, lean_object* v_shanghai_93_){
_start:
{
uint8_t v_t_boxed_94_; lean_object* v_res_95_; 
v_t_boxed_94_ = lean_unbox(v_t_91_);
v_res_95_ = l_Lean_Compiler_Yul_EvmVersion_shanghai_elim(v_motive_90_, v_t_boxed_94_, v_h_92_, v_shanghai_93_);
lean_dec(v_shanghai_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim___redArg(lean_object* v_cancun_96_){
_start:
{
lean_inc(v_cancun_96_);
return v_cancun_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim___redArg___boxed(lean_object* v_cancun_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_Compiler_Yul_EvmVersion_cancun_elim___redArg(v_cancun_97_);
lean_dec(v_cancun_97_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim(lean_object* v_motive_99_, uint8_t v_t_100_, lean_object* v_h_101_, lean_object* v_cancun_102_){
_start:
{
lean_inc(v_cancun_102_);
return v_cancun_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_cancun_elim___boxed(lean_object* v_motive_103_, lean_object* v_t_104_, lean_object* v_h_105_, lean_object* v_cancun_106_){
_start:
{
uint8_t v_t_boxed_107_; lean_object* v_res_108_; 
v_t_boxed_107_ = lean_unbox(v_t_104_);
v_res_108_ = l_Lean_Compiler_Yul_EvmVersion_cancun_elim(v_motive_103_, v_t_boxed_107_, v_h_105_, v_cancun_106_);
lean_dec(v_cancun_106_);
return v_res_108_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_Yul_EvmVersion_ofNat(lean_object* v_n_109_){
_start:
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = lean_unsigned_to_nat(2u);
v___x_111_ = lean_nat_dec_le(v_n_109_, v___x_110_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(3u);
v___x_113_ = lean_nat_dec_le(v_n_109_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(4u);
v___x_115_ = lean_nat_dec_le(v_n_109_, v___x_114_);
if (v___x_115_ == 0)
{
uint8_t v___x_116_; 
v___x_116_ = 5;
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 4;
return v___x_117_;
}
}
else
{
uint8_t v___x_118_; 
v___x_118_ = 3;
return v___x_118_;
}
}
else
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_nat_dec_le(v_n_109_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_dec_le(v_n_109_, v___x_121_);
if (v___x_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = 2;
return v___x_123_;
}
else
{
uint8_t v___x_124_; 
v___x_124_ = 1;
return v___x_124_;
}
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_EvmVersion_ofNat___boxed(lean_object* v_n_126_){
_start:
{
uint8_t v_res_127_; lean_object* v_r_128_; 
v_res_127_ = l_Lean_Compiler_Yul_EvmVersion_ofNat(v_n_126_);
lean_dec(v_n_126_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_Yul_instDecidableEqEvmVersion(uint8_t v_x_129_, uint8_t v_y_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_131_ = l_Lean_Compiler_Yul_EvmVersion_ctorIdx(v_x_129_);
v___x_132_ = l_Lean_Compiler_Yul_EvmVersion_ctorIdx(v_y_130_);
v___x_133_ = lean_nat_dec_eq(v___x_131_, v___x_132_);
lean_dec(v___x_132_);
lean_dec(v___x_131_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_instDecidableEqEvmVersion___boxed(lean_object* v_x_134_, lean_object* v_y_135_){
_start:
{
uint8_t v_x_13__boxed_136_; uint8_t v_y_14__boxed_137_; uint8_t v_res_138_; lean_object* v_r_139_; 
v_x_13__boxed_136_ = lean_unbox(v_x_134_);
v_y_14__boxed_137_ = lean_unbox(v_y_135_);
v_res_138_ = l_Lean_Compiler_Yul_instDecidableEqEvmVersion(v_x_13__boxed_136_, v_y_14__boxed_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(2u);
v___x_159_ = lean_nat_to_int(v___x_158_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_nat_to_int(v___x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr(uint8_t v_x_162_, lean_object* v_prec_163_){
_start:
{
lean_object* v___y_165_; lean_object* v___y_172_; lean_object* v___y_179_; lean_object* v___y_186_; lean_object* v___y_193_; lean_object* v___y_200_; 
switch(v_x_162_)
{
case 0:
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(1024u);
v___x_207_ = lean_nat_dec_le(v___x_206_, v_prec_163_);
if (v___x_207_ == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12);
v___y_165_ = v___x_208_;
goto v___jp_164_;
}
else
{
lean_object* v___x_209_; 
v___x_209_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13);
v___y_165_ = v___x_209_;
goto v___jp_164_;
}
}
case 1:
{
lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_210_ = lean_unsigned_to_nat(1024u);
v___x_211_ = lean_nat_dec_le(v___x_210_, v_prec_163_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12);
v___y_172_ = v___x_212_;
goto v___jp_171_;
}
else
{
lean_object* v___x_213_; 
v___x_213_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13);
v___y_172_ = v___x_213_;
goto v___jp_171_;
}
}
case 2:
{
lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_214_ = lean_unsigned_to_nat(1024u);
v___x_215_ = lean_nat_dec_le(v___x_214_, v_prec_163_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; 
v___x_216_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12);
v___y_179_ = v___x_216_;
goto v___jp_178_;
}
else
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13);
v___y_179_ = v___x_217_;
goto v___jp_178_;
}
}
case 3:
{
lean_object* v___x_218_; uint8_t v___x_219_; 
v___x_218_ = lean_unsigned_to_nat(1024u);
v___x_219_ = lean_nat_dec_le(v___x_218_, v_prec_163_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12);
v___y_186_ = v___x_220_;
goto v___jp_185_;
}
else
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13);
v___y_186_ = v___x_221_;
goto v___jp_185_;
}
}
case 4:
{
lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = lean_unsigned_to_nat(1024u);
v___x_223_ = lean_nat_dec_le(v___x_222_, v_prec_163_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
v___x_224_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12);
v___y_193_ = v___x_224_;
goto v___jp_192_;
}
else
{
lean_object* v___x_225_; 
v___x_225_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13);
v___y_193_ = v___x_225_;
goto v___jp_192_;
}
}
default: 
{
lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(1024u);
v___x_227_ = lean_nat_dec_le(v___x_226_, v_prec_163_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
v___x_228_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__12);
v___y_200_ = v___x_228_;
goto v___jp_199_;
}
else
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13, &l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13_once, _init_l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__13);
v___y_200_ = v___x_229_;
goto v___jp_199_;
}
}
}
v___jp_164_:
{
lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_166_ = ((lean_object*)(l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__1));
lean_inc(v___y_165_);
v___x_167_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_167_, 0, v___y_165_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
v___x_168_ = 0;
v___x_169_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_169_, 0, v___x_167_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*1, v___x_168_);
v___x_170_ = l_Repr_addAppParen(v___x_169_, v_prec_163_);
return v___x_170_;
}
v___jp_171_:
{
lean_object* v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_173_ = ((lean_object*)(l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__3));
lean_inc(v___y_172_);
v___x_174_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_174_, 0, v___y_172_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = 0;
v___x_176_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_176_, 0, v___x_174_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*1, v___x_175_);
v___x_177_ = l_Repr_addAppParen(v___x_176_, v_prec_163_);
return v___x_177_;
}
v___jp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_180_ = ((lean_object*)(l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__5));
lean_inc(v___y_179_);
v___x_181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_181_, 0, v___y_179_);
lean_ctor_set(v___x_181_, 1, v___x_180_);
v___x_182_ = 0;
v___x_183_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set_uint8(v___x_183_, sizeof(void*)*1, v___x_182_);
v___x_184_ = l_Repr_addAppParen(v___x_183_, v_prec_163_);
return v___x_184_;
}
v___jp_185_:
{
lean_object* v___x_187_; lean_object* v___x_188_; uint8_t v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_187_ = ((lean_object*)(l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__7));
lean_inc(v___y_186_);
v___x_188_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_188_, 0, v___y_186_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = 0;
v___x_190_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_190_, 0, v___x_188_);
lean_ctor_set_uint8(v___x_190_, sizeof(void*)*1, v___x_189_);
v___x_191_ = l_Repr_addAppParen(v___x_190_, v_prec_163_);
return v___x_191_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_194_ = ((lean_object*)(l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__9));
lean_inc(v___y_193_);
v___x_195_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_195_, 0, v___y_193_);
lean_ctor_set(v___x_195_, 1, v___x_194_);
v___x_196_ = 0;
v___x_197_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_197_, 0, v___x_195_);
lean_ctor_set_uint8(v___x_197_, sizeof(void*)*1, v___x_196_);
v___x_198_ = l_Repr_addAppParen(v___x_197_, v_prec_163_);
return v___x_198_;
}
v___jp_199_:
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_201_ = ((lean_object*)(l_Lean_Compiler_Yul_instReprEvmVersion_repr___closed__11));
lean_inc(v___y_200_);
v___x_202_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_202_, 0, v___y_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = 0;
v___x_204_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_204_, 0, v___x_202_);
lean_ctor_set_uint8(v___x_204_, sizeof(void*)*1, v___x_203_);
v___x_205_ = l_Repr_addAppParen(v___x_204_, v_prec_163_);
return v___x_205_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_instReprEvmVersion_repr___boxed(lean_object* v_x_230_, lean_object* v_prec_231_){
_start:
{
uint8_t v_x_345__boxed_232_; lean_object* v_res_233_; 
v_x_345__boxed_232_ = lean_unbox(v_x_230_);
v_res_233_ = l_Lean_Compiler_Yul_instReprEvmVersion_repr(v_x_345__boxed_232_, v_prec_231_);
lean_dec(v_prec_231_);
return v_res_233_;
}
}
static uint8_t _init_l_Lean_Compiler_Yul_EvmVersion_default(void){
_start:
{
uint8_t v___x_236_; 
v___x_236_ = 5;
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorIdx(uint8_t v_x_237_){
_start:
{
switch(v_x_237_)
{
case 0:
{
lean_object* v___x_238_; 
v___x_238_ = lean_unsigned_to_nat(0u);
return v___x_238_;
}
case 1:
{
lean_object* v___x_239_; 
v___x_239_ = lean_unsigned_to_nat(1u);
return v___x_239_;
}
case 2:
{
lean_object* v___x_240_; 
v___x_240_ = lean_unsigned_to_nat(2u);
return v___x_240_;
}
case 3:
{
lean_object* v___x_241_; 
v___x_241_ = lean_unsigned_to_nat(3u);
return v___x_241_;
}
default: 
{
lean_object* v___x_242_; 
v___x_242_ = lean_unsigned_to_nat(4u);
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorIdx___boxed(lean_object* v_x_243_){
_start:
{
uint8_t v_x_boxed_244_; lean_object* v_res_245_; 
v_x_boxed_244_ = lean_unbox(v_x_243_);
v_res_245_ = l_Lean_Compiler_Yul_LiteralKind_ctorIdx(v_x_boxed_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_toCtorIdx(uint8_t v_x_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_Compiler_Yul_LiteralKind_ctorIdx(v_x_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_toCtorIdx___boxed(lean_object* v_x_248_){
_start:
{
uint8_t v_x_4__boxed_249_; lean_object* v_res_250_; 
v_x_4__boxed_249_ = lean_unbox(v_x_248_);
v_res_250_ = l_Lean_Compiler_Yul_LiteralKind_toCtorIdx(v_x_4__boxed_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim___redArg(lean_object* v_k_251_){
_start:
{
lean_inc(v_k_251_);
return v_k_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim___redArg___boxed(lean_object* v_k_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Compiler_Yul_LiteralKind_ctorElim___redArg(v_k_252_);
lean_dec(v_k_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim(lean_object* v_motive_254_, lean_object* v_ctorIdx_255_, uint8_t v_t_256_, lean_object* v_h_257_, lean_object* v_k_258_){
_start:
{
lean_inc(v_k_258_);
return v_k_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_ctorElim___boxed(lean_object* v_motive_259_, lean_object* v_ctorIdx_260_, lean_object* v_t_261_, lean_object* v_h_262_, lean_object* v_k_263_){
_start:
{
uint8_t v_t_boxed_264_; lean_object* v_res_265_; 
v_t_boxed_264_ = lean_unbox(v_t_261_);
v_res_265_ = l_Lean_Compiler_Yul_LiteralKind_ctorElim(v_motive_259_, v_ctorIdx_260_, v_t_boxed_264_, v_h_262_, v_k_263_);
lean_dec(v_k_263_);
lean_dec(v_ctorIdx_260_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim___redArg(lean_object* v_number_266_){
_start:
{
lean_inc(v_number_266_);
return v_number_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim___redArg___boxed(lean_object* v_number_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Compiler_Yul_LiteralKind_number_elim___redArg(v_number_267_);
lean_dec(v_number_267_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim(lean_object* v_motive_269_, uint8_t v_t_270_, lean_object* v_h_271_, lean_object* v_number_272_){
_start:
{
lean_inc(v_number_272_);
return v_number_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_number_elim___boxed(lean_object* v_motive_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_number_276_){
_start:
{
uint8_t v_t_boxed_277_; lean_object* v_res_278_; 
v_t_boxed_277_ = lean_unbox(v_t_274_);
v_res_278_ = l_Lean_Compiler_Yul_LiteralKind_number_elim(v_motive_273_, v_t_boxed_277_, v_h_275_, v_number_276_);
lean_dec(v_number_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___redArg(lean_object* v_hexNumber_279_){
_start:
{
lean_inc(v_hexNumber_279_);
return v_hexNumber_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___redArg___boxed(lean_object* v_hexNumber_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___redArg(v_hexNumber_280_);
lean_dec(v_hexNumber_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim(lean_object* v_motive_282_, uint8_t v_t_283_, lean_object* v_h_284_, lean_object* v_hexNumber_285_){
_start:
{
lean_inc(v_hexNumber_285_);
return v_hexNumber_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim___boxed(lean_object* v_motive_286_, lean_object* v_t_287_, lean_object* v_h_288_, lean_object* v_hexNumber_289_){
_start:
{
uint8_t v_t_boxed_290_; lean_object* v_res_291_; 
v_t_boxed_290_ = lean_unbox(v_t_287_);
v_res_291_ = l_Lean_Compiler_Yul_LiteralKind_hexNumber_elim(v_motive_286_, v_t_boxed_290_, v_h_288_, v_hexNumber_289_);
lean_dec(v_hexNumber_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim___redArg(lean_object* v_bool_292_){
_start:
{
lean_inc(v_bool_292_);
return v_bool_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim___redArg___boxed(lean_object* v_bool_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_Compiler_Yul_LiteralKind_bool_elim___redArg(v_bool_293_);
lean_dec(v_bool_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim(lean_object* v_motive_295_, uint8_t v_t_296_, lean_object* v_h_297_, lean_object* v_bool_298_){
_start:
{
lean_inc(v_bool_298_);
return v_bool_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_bool_elim___boxed(lean_object* v_motive_299_, lean_object* v_t_300_, lean_object* v_h_301_, lean_object* v_bool_302_){
_start:
{
uint8_t v_t_boxed_303_; lean_object* v_res_304_; 
v_t_boxed_303_ = lean_unbox(v_t_300_);
v_res_304_ = l_Lean_Compiler_Yul_LiteralKind_bool_elim(v_motive_299_, v_t_boxed_303_, v_h_301_, v_bool_302_);
lean_dec(v_bool_302_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim___redArg(lean_object* v_string_305_){
_start:
{
lean_inc(v_string_305_);
return v_string_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim___redArg___boxed(lean_object* v_string_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Compiler_Yul_LiteralKind_string_elim___redArg(v_string_306_);
lean_dec(v_string_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim(lean_object* v_motive_308_, uint8_t v_t_309_, lean_object* v_h_310_, lean_object* v_string_311_){
_start:
{
lean_inc(v_string_311_);
return v_string_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_string_elim___boxed(lean_object* v_motive_312_, lean_object* v_t_313_, lean_object* v_h_314_, lean_object* v_string_315_){
_start:
{
uint8_t v_t_boxed_316_; lean_object* v_res_317_; 
v_t_boxed_316_ = lean_unbox(v_t_313_);
v_res_317_ = l_Lean_Compiler_Yul_LiteralKind_string_elim(v_motive_312_, v_t_boxed_316_, v_h_314_, v_string_315_);
lean_dec(v_string_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim___redArg(lean_object* v_hexString_318_){
_start:
{
lean_inc(v_hexString_318_);
return v_hexString_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim___redArg___boxed(lean_object* v_hexString_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Compiler_Yul_LiteralKind_hexString_elim___redArg(v_hexString_319_);
lean_dec(v_hexString_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim(lean_object* v_motive_321_, uint8_t v_t_322_, lean_object* v_h_323_, lean_object* v_hexString_324_){
_start:
{
lean_inc(v_hexString_324_);
return v_hexString_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_LiteralKind_hexString_elim___boxed(lean_object* v_motive_325_, lean_object* v_t_326_, lean_object* v_h_327_, lean_object* v_hexString_328_){
_start:
{
uint8_t v_t_boxed_329_; lean_object* v_res_330_; 
v_t_boxed_329_ = lean_unbox(v_t_326_);
v_res_330_ = l_Lean_Compiler_Yul_LiteralKind_hexString_elim(v_motive_325_, v_t_boxed_329_, v_h_327_, v_hexString_328_);
lean_dec(v_hexString_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_num(lean_object* v_s_331_){
_start:
{
uint8_t v___x_332_; lean_object* v___x_333_; 
v___x_332_ = 0;
v___x_333_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_333_, 0, v_s_331_);
lean_ctor_set_uint8(v___x_333_, sizeof(void*)*1, v___x_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_natLit(lean_object* v_n_334_){
_start:
{
uint8_t v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_335_ = 0;
v___x_336_ = l_Nat_reprFast(v_n_334_);
v___x_337_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set_uint8(v___x_337_, sizeof(void*)*1, v___x_335_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_hex(lean_object* v_s_338_){
_start:
{
uint8_t v___x_339_; lean_object* v___x_340_; 
v___x_339_ = 1;
v___x_340_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_340_, 0, v_s_338_);
lean_ctor_set_uint8(v___x_340_, sizeof(void*)*1, v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_bool(uint8_t v_b_349_){
_start:
{
if (v_b_349_ == 0)
{
lean_object* v___x_350_; 
v___x_350_ = ((lean_object*)(l_Lean_Compiler_Yul_Literal_bool___closed__1));
return v___x_350_;
}
else
{
lean_object* v___x_351_; 
v___x_351_ = ((lean_object*)(l_Lean_Compiler_Yul_Literal_bool___closed__3));
return v___x_351_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_bool___boxed(lean_object* v_b_352_){
_start:
{
uint8_t v_b_boxed_353_; lean_object* v_res_354_; 
v_b_boxed_353_ = lean_unbox(v_b_352_);
v_res_354_ = l_Lean_Compiler_Yul_Literal_bool(v_b_boxed_353_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_string(lean_object* v_s_355_){
_start:
{
uint8_t v___x_356_; lean_object* v___x_357_; 
v___x_356_ = 3;
v___x_357_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_357_, 0, v_s_355_);
lean_ctor_set_uint8(v___x_357_, sizeof(void*)*1, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Literal_hexString(lean_object* v_s_358_){
_start:
{
uint8_t v___x_359_; lean_object* v___x_360_; 
v___x_359_ = 4;
v___x_360_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_360_, 0, v_s_358_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*1, v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorIdx(lean_object* v_x_361_){
_start:
{
switch(lean_obj_tag(v_x_361_))
{
case 0:
{
lean_object* v___x_362_; 
v___x_362_ = lean_unsigned_to_nat(0u);
return v___x_362_;
}
case 1:
{
lean_object* v___x_363_; 
v___x_363_ = lean_unsigned_to_nat(1u);
return v___x_363_;
}
case 2:
{
lean_object* v___x_364_; 
v___x_364_ = lean_unsigned_to_nat(2u);
return v___x_364_;
}
default: 
{
lean_object* v___x_365_; 
v___x_365_ = lean_unsigned_to_nat(3u);
return v___x_365_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorIdx___boxed(lean_object* v_x_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_Compiler_Yul_Expr_ctorIdx(v_x_366_);
lean_dec_ref(v_x_366_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorElim___redArg(lean_object* v_t_368_, lean_object* v_k_369_){
_start:
{
switch(lean_obj_tag(v_t_368_))
{
case 2:
{
lean_object* v_fn_370_; lean_object* v_args_371_; lean_object* v___x_372_; 
v_fn_370_ = lean_ctor_get(v_t_368_, 0);
lean_inc_ref(v_fn_370_);
v_args_371_ = lean_ctor_get(v_t_368_, 1);
lean_inc_ref(v_args_371_);
lean_dec_ref_known(v_t_368_, 2);
v___x_372_ = lean_apply_2(v_k_369_, v_fn_370_, v_args_371_);
return v___x_372_;
}
case 3:
{
lean_object* v_name_373_; lean_object* v_args_374_; lean_object* v___x_375_; 
v_name_373_ = lean_ctor_get(v_t_368_, 0);
lean_inc_ref(v_name_373_);
v_args_374_ = lean_ctor_get(v_t_368_, 1);
lean_inc_ref(v_args_374_);
lean_dec_ref_known(v_t_368_, 2);
v___x_375_ = lean_apply_2(v_k_369_, v_name_373_, v_args_374_);
return v___x_375_;
}
default: 
{
lean_object* v_l_376_; lean_object* v___x_377_; 
v_l_376_ = lean_ctor_get(v_t_368_, 0);
lean_inc_ref(v_l_376_);
lean_dec_ref(v_t_368_);
v___x_377_ = lean_apply_1(v_k_369_, v_l_376_);
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorElim(lean_object* v_motive__1_378_, lean_object* v_ctorIdx_379_, lean_object* v_t_380_, lean_object* v_h_381_, lean_object* v_k_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_380_, v_k_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ctorElim___boxed(lean_object* v_motive__1_384_, lean_object* v_ctorIdx_385_, lean_object* v_t_386_, lean_object* v_h_387_, lean_object* v_k_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Compiler_Yul_Expr_ctorElim(v_motive__1_384_, v_ctorIdx_385_, v_t_386_, v_h_387_, v_k_388_);
lean_dec(v_ctorIdx_385_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_lit_elim___redArg(lean_object* v_t_390_, lean_object* v_lit_391_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_390_, v_lit_391_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_lit_elim(lean_object* v_motive__1_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_lit_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_394_, v_lit_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ident_elim___redArg(lean_object* v_t_398_, lean_object* v_ident_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_398_, v_ident_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_ident_elim(lean_object* v_motive__1_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_ident_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_402_, v_ident_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_call_elim___redArg(lean_object* v_t_406_, lean_object* v_call_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_406_, v_call_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_call_elim(lean_object* v_motive__1_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_call_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_410_, v_call_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_builtin_elim___redArg(lean_object* v_t_414_, lean_object* v_builtin_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_414_, v_builtin_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_builtin_elim(lean_object* v_motive__1_417_, lean_object* v_t_418_, lean_object* v_h_419_, lean_object* v_builtin_420_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l_Lean_Compiler_Yul_Expr_ctorElim___redArg(v_t_418_, v_builtin_420_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorIdx(lean_object* v_x_427_){
_start:
{
switch(lean_obj_tag(v_x_427_))
{
case 0:
{
lean_object* v___x_428_; 
v___x_428_ = lean_unsigned_to_nat(0u);
return v___x_428_;
}
case 1:
{
lean_object* v___x_429_; 
v___x_429_ = lean_unsigned_to_nat(1u);
return v___x_429_;
}
case 2:
{
lean_object* v___x_430_; 
v___x_430_ = lean_unsigned_to_nat(2u);
return v___x_430_;
}
case 3:
{
lean_object* v___x_431_; 
v___x_431_ = lean_unsigned_to_nat(3u);
return v___x_431_;
}
case 4:
{
lean_object* v___x_432_; 
v___x_432_ = lean_unsigned_to_nat(4u);
return v___x_432_;
}
case 5:
{
lean_object* v___x_433_; 
v___x_433_ = lean_unsigned_to_nat(5u);
return v___x_433_;
}
case 6:
{
lean_object* v___x_434_; 
v___x_434_ = lean_unsigned_to_nat(6u);
return v___x_434_;
}
case 7:
{
lean_object* v___x_435_; 
v___x_435_ = lean_unsigned_to_nat(7u);
return v___x_435_;
}
case 8:
{
lean_object* v___x_436_; 
v___x_436_ = lean_unsigned_to_nat(8u);
return v___x_436_;
}
case 9:
{
lean_object* v___x_437_; 
v___x_437_ = lean_unsigned_to_nat(9u);
return v___x_437_;
}
default: 
{
lean_object* v___x_438_; 
v___x_438_ = lean_unsigned_to_nat(10u);
return v___x_438_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorIdx___boxed(lean_object* v_x_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Compiler_Yul_Statement_ctorIdx(v_x_439_);
lean_dec(v_x_439_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorElim___redArg(lean_object* v_t_441_, lean_object* v_k_442_){
_start:
{
switch(lean_obj_tag(v_t_441_))
{
case 0:
{
lean_object* v_b_443_; lean_object* v___x_444_; 
v_b_443_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_b_443_);
lean_dec_ref_known(v_t_441_, 1);
v___x_444_ = lean_apply_1(v_k_442_, v_b_443_);
return v___x_444_;
}
case 1:
{
lean_object* v_vars_445_; lean_object* v_value_446_; lean_object* v___x_447_; 
v_vars_445_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_vars_445_);
v_value_446_ = lean_ctor_get(v_t_441_, 1);
lean_inc(v_value_446_);
lean_dec_ref_known(v_t_441_, 2);
v___x_447_ = lean_apply_2(v_k_442_, v_vars_445_, v_value_446_);
return v___x_447_;
}
case 2:
{
lean_object* v_vars_448_; lean_object* v_value_449_; lean_object* v___x_450_; 
v_vars_448_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_vars_448_);
v_value_449_ = lean_ctor_get(v_t_441_, 1);
lean_inc_ref(v_value_449_);
lean_dec_ref_known(v_t_441_, 2);
v___x_450_ = lean_apply_2(v_k_442_, v_vars_448_, v_value_449_);
return v___x_450_;
}
case 3:
{
lean_object* v_e_451_; lean_object* v___x_452_; 
v_e_451_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_e_451_);
lean_dec_ref_known(v_t_441_, 1);
v___x_452_ = lean_apply_1(v_k_442_, v_e_451_);
return v___x_452_;
}
case 4:
{
lean_object* v_cond_453_; lean_object* v_body_454_; lean_object* v___x_455_; 
v_cond_453_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_cond_453_);
v_body_454_ = lean_ctor_get(v_t_441_, 1);
lean_inc_ref(v_body_454_);
lean_dec_ref_known(v_t_441_, 2);
v___x_455_ = lean_apply_2(v_k_442_, v_cond_453_, v_body_454_);
return v___x_455_;
}
case 5:
{
lean_object* v_e_456_; lean_object* v_cases_457_; lean_object* v___x_458_; 
v_e_456_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_e_456_);
v_cases_457_ = lean_ctor_get(v_t_441_, 1);
lean_inc_ref(v_cases_457_);
lean_dec_ref_known(v_t_441_, 2);
v___x_458_ = lean_apply_2(v_k_442_, v_e_456_, v_cases_457_);
return v___x_458_;
}
case 6:
{
lean_object* v_name_459_; lean_object* v_params_460_; lean_object* v_returns_461_; lean_object* v_body_462_; lean_object* v___x_463_; 
v_name_459_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_name_459_);
v_params_460_ = lean_ctor_get(v_t_441_, 1);
lean_inc_ref(v_params_460_);
v_returns_461_ = lean_ctor_get(v_t_441_, 2);
lean_inc_ref(v_returns_461_);
v_body_462_ = lean_ctor_get(v_t_441_, 3);
lean_inc_ref(v_body_462_);
lean_dec_ref_known(v_t_441_, 4);
v___x_463_ = lean_apply_4(v_k_442_, v_name_459_, v_params_460_, v_returns_461_, v_body_462_);
return v___x_463_;
}
case 7:
{
lean_object* v_pre_464_; lean_object* v_cond_465_; lean_object* v_post_466_; lean_object* v_body_467_; lean_object* v___x_468_; 
v_pre_464_ = lean_ctor_get(v_t_441_, 0);
lean_inc_ref(v_pre_464_);
v_cond_465_ = lean_ctor_get(v_t_441_, 1);
lean_inc_ref(v_cond_465_);
v_post_466_ = lean_ctor_get(v_t_441_, 2);
lean_inc_ref(v_post_466_);
v_body_467_ = lean_ctor_get(v_t_441_, 3);
lean_inc_ref(v_body_467_);
lean_dec_ref_known(v_t_441_, 4);
v___x_468_ = lean_apply_4(v_k_442_, v_pre_464_, v_cond_465_, v_post_466_, v_body_467_);
return v___x_468_;
}
default: 
{
lean_dec(v_t_441_);
return v_k_442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorElim(lean_object* v_motive__1_469_, lean_object* v_ctorIdx_470_, lean_object* v_t_471_, lean_object* v_h_472_, lean_object* v_k_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_471_, v_k_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ctorElim___boxed(lean_object* v_motive__1_475_, lean_object* v_ctorIdx_476_, lean_object* v_t_477_, lean_object* v_h_478_, lean_object* v_k_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Compiler_Yul_Statement_ctorElim(v_motive__1_475_, v_ctorIdx_476_, v_t_477_, v_h_478_, v_k_479_);
lean_dec(v_ctorIdx_476_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_block_elim___redArg(lean_object* v_t_481_, lean_object* v_block_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_481_, v_block_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_block_elim(lean_object* v_motive__1_484_, lean_object* v_t_485_, lean_object* v_h_486_, lean_object* v_block_487_){
_start:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_485_, v_block_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_varDecl_elim___redArg(lean_object* v_t_489_, lean_object* v_varDecl_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_489_, v_varDecl_490_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_varDecl_elim(lean_object* v_motive__1_492_, lean_object* v_t_493_, lean_object* v_h_494_, lean_object* v_varDecl_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_493_, v_varDecl_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_assignment_elim___redArg(lean_object* v_t_497_, lean_object* v_assignment_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_497_, v_assignment_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_assignment_elim(lean_object* v_motive__1_500_, lean_object* v_t_501_, lean_object* v_h_502_, lean_object* v_assignment_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_501_, v_assignment_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_exprStmt_elim___redArg(lean_object* v_t_505_, lean_object* v_exprStmt_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_505_, v_exprStmt_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_exprStmt_elim(lean_object* v_motive__1_508_, lean_object* v_t_509_, lean_object* v_h_510_, lean_object* v_exprStmt_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_509_, v_exprStmt_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ifStmt_elim___redArg(lean_object* v_t_513_, lean_object* v_ifStmt_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_513_, v_ifStmt_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_ifStmt_elim(lean_object* v_motive__1_516_, lean_object* v_t_517_, lean_object* v_h_518_, lean_object* v_ifStmt_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_517_, v_ifStmt_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_switchStmt_elim___redArg(lean_object* v_t_521_, lean_object* v_switchStmt_522_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_521_, v_switchStmt_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_switchStmt_elim(lean_object* v_motive__1_524_, lean_object* v_t_525_, lean_object* v_h_526_, lean_object* v_switchStmt_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_525_, v_switchStmt_527_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_funcDef_elim___redArg(lean_object* v_t_529_, lean_object* v_funcDef_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_529_, v_funcDef_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_funcDef_elim(lean_object* v_motive__1_532_, lean_object* v_t_533_, lean_object* v_h_534_, lean_object* v_funcDef_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_533_, v_funcDef_535_);
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_forLoop_elim___redArg(lean_object* v_t_537_, lean_object* v_forLoop_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_537_, v_forLoop_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_forLoop_elim(lean_object* v_motive__1_540_, lean_object* v_t_541_, lean_object* v_h_542_, lean_object* v_forLoop_543_){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_541_, v_forLoop_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_break_elim___redArg(lean_object* v_t_545_, lean_object* v_break_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_545_, v_break_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_break_elim(lean_object* v_motive__1_548_, lean_object* v_t_549_, lean_object* v_h_550_, lean_object* v_break_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_549_, v_break_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_continue_elim___redArg(lean_object* v_t_553_, lean_object* v_continue_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_553_, v_continue_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_continue_elim(lean_object* v_motive__1_556_, lean_object* v_t_557_, lean_object* v_h_558_, lean_object* v_continue_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_557_, v_continue_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_leave_elim___redArg(lean_object* v_t_561_, lean_object* v_leave_562_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_561_, v_leave_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Statement_leave_elim(lean_object* v_motive__1_564_, lean_object* v_t_565_, lean_object* v_h_566_, lean_object* v_leave_567_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l_Lean_Compiler_Yul_Statement_ctorElim___redArg(v_t_565_, v_leave_567_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_num(lean_object* v_n_569_){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = l_Lean_Compiler_Yul_Literal_natLit(v_n_569_);
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_str(lean_object* v_s_572_){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = l_Lean_Compiler_Yul_Literal_string(v_s_572_);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_Expr_boolTrue___closed__0(void){
_start:
{
uint8_t v___x_575_; lean_object* v___x_576_; 
v___x_575_ = 1;
v___x_576_ = l_Lean_Compiler_Yul_Literal_bool(v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_Expr_boolTrue___closed__1(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_obj_once(&l_Lean_Compiler_Yul_Expr_boolTrue___closed__0, &l_Lean_Compiler_Yul_Expr_boolTrue___closed__0_once, _init_l_Lean_Compiler_Yul_Expr_boolTrue___closed__0);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_Expr_boolTrue(void){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&l_Lean_Compiler_Yul_Expr_boolTrue___closed__1, &l_Lean_Compiler_Yul_Expr_boolTrue___closed__1_once, _init_l_Lean_Compiler_Yul_Expr_boolTrue___closed__1);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_Expr_boolFalse___closed__0(void){
_start:
{
uint8_t v___x_580_; lean_object* v___x_581_; 
v___x_580_ = 0;
v___x_581_ = l_Lean_Compiler_Yul_Literal_bool(v___x_580_);
return v___x_581_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_Expr_boolFalse___closed__1(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = lean_obj_once(&l_Lean_Compiler_Yul_Expr_boolFalse___closed__0, &l_Lean_Compiler_Yul_Expr_boolFalse___closed__0_once, _init_l_Lean_Compiler_Yul_Expr_boolFalse___closed__0);
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
static lean_object* _init_l_Lean_Compiler_Yul_Expr_boolFalse(void){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = lean_obj_once(&l_Lean_Compiler_Yul_Expr_boolFalse___closed__1, &l_Lean_Compiler_Yul_Expr_boolFalse___closed__1_once, _init_l_Lean_Compiler_Yul_Expr_boolFalse___closed__1);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_Expr_id(lean_object* v_n_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_586_, 0, v_n_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_call(lean_object* v_fn_587_, lean_object* v_args_588_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_589_, 0, v_fn_587_);
lean_ctor_set(v___x_589_, 1, v_args_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Yul_builtin(lean_object* v_name_590_, lean_object* v_args_591_){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_592_, 0, v_name_590_);
lean_ctor_set(v___x_592_, 1, v_args_591_);
return v___x_592_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Repr(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_Yul_AST(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_Yul_EvmVersion_default = _init_l_Lean_Compiler_Yul_EvmVersion_default();
l_Lean_Compiler_Yul_Expr_boolTrue = _init_l_Lean_Compiler_Yul_Expr_boolTrue();
lean_mark_persistent(l_Lean_Compiler_Yul_Expr_boolTrue);
l_Lean_Compiler_Yul_Expr_boolFalse = _init_l_Lean_Compiler_Yul_Expr_boolFalse();
lean_mark_persistent(l_Lean_Compiler_Yul_Expr_boolFalse);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_Yul_AST(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_Repr(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_Yul_AST(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Yul_AST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_Yul_AST(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_Yul_AST(builtin);
}
#ifdef __cplusplus
}
#endif
