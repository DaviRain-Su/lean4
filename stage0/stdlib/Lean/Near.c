// Lean compiler output
// Module: Lean.Near
// Imports: public import Init.Prelude public import Init.Data.String public import Init.Data.Bool public import Init.Data.Option public import Init.Data.UInt public import Init.Data.Nat public import Init.System.IO
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_data(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t lean_uint64_mul(uint64_t, uint64_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Near_instReprNearToken_repr_spec__0(lean_object*);
static const lean_string_object l_Near_instReprNearToken_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__0 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__0_value;
static const lean_string_object l_Near_instReprNearToken_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "yoctoNear"};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__1 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_instReprNearToken_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__2 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_instReprNearToken_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__2_value)}};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__3 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__3_value;
static const lean_string_object l_Near_instReprNearToken_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__4 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__4_value;
static const lean_ctor_object l_Near_instReprNearToken_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__4_value)}};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__5 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value;
static const lean_ctor_object l_Near_instReprNearToken_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__3_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__6 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__6_value;
static lean_once_cell_t l_Near_instReprNearToken_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_instReprNearToken_repr___redArg___closed__7;
static const lean_string_object l_Near_instReprNearToken_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__8 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__8_value;
static lean_once_cell_t l_Near_instReprNearToken_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_instReprNearToken_repr___redArg___closed__9;
static lean_once_cell_t l_Near_instReprNearToken_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_instReprNearToken_repr___redArg___closed__10;
static const lean_ctor_object l_Near_instReprNearToken_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__11 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__11_value;
static const lean_ctor_object l_Near_instReprNearToken_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__8_value)}};
static const lean_object* l_Near_instReprNearToken_repr___redArg___closed__12 = (const lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instReprNearToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instReprNearToken_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instReprNearToken___closed__0 = (const lean_object*)&l_Near_instReprNearToken___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instReprNearToken = (const lean_object*)&l_Near_instReprNearToken___closed__0_value;
static lean_once_cell_t l_Near_NearToken_yoctoPerNear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_NearToken_yoctoPerNear___closed__0;
LEAN_EXPORT lean_object* l_Near_NearToken_yoctoPerNear;
static lean_once_cell_t l_Near_NearToken_yoctoPerMilliNear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_NearToken_yoctoPerMilliNear___closed__0;
LEAN_EXPORT lean_object* l_Near_NearToken_yoctoPerMilliNear;
LEAN_EXPORT lean_object* l_Near_NearToken_yoctoPerMicroNear;
LEAN_EXPORT lean_object* l_Near_NearToken_zero;
LEAN_EXPORT lean_object* l_Near_NearToken_oneYocto;
LEAN_EXPORT lean_object* l_Near_NearToken_fromYocto(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromYocto___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromNear(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromNear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromMilliNear(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromMilliNear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromMicroNear(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_fromMicroNear___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Near_NearToken_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_isZero___boxed(lean_object*);
static const lean_closure_object l_Near_NearToken_instAdd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_NearToken_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_NearToken_instAdd___closed__0 = (const lean_object*)&l_Near_NearToken_instAdd___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_NearToken_instAdd = (const lean_object*)&l_Near_NearToken_instAdd___closed__0_value;
static const lean_closure_object l_Near_NearToken_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_reprFast, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_NearToken_instToString___closed__0 = (const lean_object*)&l_Near_NearToken_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_NearToken_instToString = (const lean_object*)&l_Near_NearToken_instToString___closed__0_value;
static const lean_string_object l_Near_NearToken_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " yoctoNEAR"};
static const lean_object* l_Near_NearToken_instRepr___lam__0___closed__0 = (const lean_object*)&l_Near_NearToken_instRepr___lam__0___closed__0_value;
static const lean_ctor_object l_Near_NearToken_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_NearToken_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Near_NearToken_instRepr___lam__0___closed__1 = (const lean_object*)&l_Near_NearToken_instRepr___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_NearToken_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_NearToken_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_NearToken_instRepr___closed__0 = (const lean_object*)&l_Near_NearToken_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_NearToken_instRepr = (const lean_object*)&l_Near_NearToken_instRepr___closed__0_value;
static const lean_string_object l_Near_instReprGas_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "inner"};
static const lean_object* l_Near_instReprGas_repr___redArg___closed__0 = (const lean_object*)&l_Near_instReprGas_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_instReprGas_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprGas_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_instReprGas_repr___redArg___closed__1 = (const lean_object*)&l_Near_instReprGas_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_instReprGas_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_instReprGas_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_instReprGas_repr___redArg___closed__2 = (const lean_object*)&l_Near_instReprGas_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_instReprGas_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_instReprGas_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_instReprGas_repr___redArg___closed__3 = (const lean_object*)&l_Near_instReprGas_repr___redArg___closed__3_value;
static lean_once_cell_t l_Near_instReprGas_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_instReprGas_repr___redArg___closed__4;
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___redArg(uint64_t);
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprGas_repr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instReprGas___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instReprGas_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instReprGas___closed__0 = (const lean_object*)&l_Near_instReprGas___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instReprGas = (const lean_object*)&l_Near_instReprGas___closed__0_value;
LEAN_EXPORT uint64_t l_Near_Gas_zero;
LEAN_EXPORT uint64_t l_Near_Gas_fromGas(uint64_t);
LEAN_EXPORT lean_object* l_Near_Gas_fromGas___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Near_Gas_fromTgas(uint64_t);
LEAN_EXPORT lean_object* l_Near_Gas_fromTgas___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Near_instBEqAccountId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_instBEqAccountId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instBEqAccountId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instBEqAccountId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instBEqAccountId___closed__0 = (const lean_object*)&l_Near_instBEqAccountId___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instBEqAccountId = (const lean_object*)&l_Near_instBEqAccountId___closed__0_value;
static const lean_string_object l_Near_instReprAccountId_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Near_instReprAccountId_repr___redArg___closed__0 = (const lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_instReprAccountId_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_instReprAccountId_repr___redArg___closed__1 = (const lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_instReprAccountId_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_instReprAccountId_repr___redArg___closed__2 = (const lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_instReprAccountId_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_instReprAccountId_repr___redArg___closed__3 = (const lean_object*)&l_Near_instReprAccountId_repr___redArg___closed__3_value;
static lean_once_cell_t l_Near_instReprAccountId_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_instReprAccountId_repr___redArg___closed__4;
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instReprAccountId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instReprAccountId_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instReprAccountId___closed__0 = (const lean_object*)&l_Near_instReprAccountId___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instReprAccountId = (const lean_object*)&l_Near_instReprAccountId___closed__0_value;
LEAN_EXPORT lean_object* l_Near_AccountId_minLen;
LEAN_EXPORT lean_object* l_Near_AccountId_maxLen;
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Near_AccountId_isValid(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_isValid___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_parse(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_asStr(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_asStr___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Near_AccountId_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_AccountId_instToString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_AccountId_instToString___closed__0 = (const lean_object*)&l_Near_AccountId_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_AccountId_instToString = (const lean_object*)&l_Near_AccountId_instToString___closed__0_value;
static const lean_string_object l_Near_AccountId_instRepr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Near_AccountId_instRepr___lam__0___closed__0 = (const lean_object*)&l_Near_AccountId_instRepr___lam__0___closed__0_value;
static const lean_ctor_object l_Near_AccountId_instRepr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_AccountId_instRepr___lam__0___closed__0_value)}};
static const lean_object* l_Near_AccountId_instRepr___lam__0___closed__1 = (const lean_object*)&l_Near_AccountId_instRepr___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_AccountId_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_AccountId_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_AccountId_instRepr___closed__0 = (const lean_object*)&l_Near_AccountId_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_AccountId_instRepr = (const lean_object*)&l_Near_AccountId_instRepr___closed__0_value;
lean_object* lean_near_storage_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_rawWrite___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_near_storage_read(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_rawRead___boxed(lean_object*, lean_object*);
lean_object* lean_near_storage_has_key(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_hasKey___boxed(lean_object*, lean_object*);
lean_object* lean_near_storage_remove(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_remove___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_write___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_read(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_read___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_writeU64(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Storage_writeU64___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_Storage_parseNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_parseNat_x3f___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_parseNat_x3f___closed__0 = (const lean_object*)&l_Near_Storage_parseNat_x3f___closed__0_value;
static const lean_ctor_object l_Near_Storage_parseNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Near_Storage_parseNat_x3f___closed__1 = (const lean_object*)&l_Near_Storage_parseNat_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecString___lam__0(lean_object*);
static const lean_closure_object l_Near_Storage_instCodecString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecString___closed__0 = (const lean_object*)&l_Near_Storage_instCodecString___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Near_Storage_instCodecString___closed__1 = (const lean_object*)&l_Near_Storage_instCodecString___closed__1_value;
static const lean_ctor_object l_Near_Storage_instCodecString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecString___closed__1_value),((lean_object*)&l_Near_Storage_instCodecString___closed__0_value)}};
static const lean_object* l_Near_Storage_instCodecString___closed__2 = (const lean_object*)&l_Near_Storage_instCodecString___closed__2_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecString = (const lean_object*)&l_Near_Storage_instCodecString___closed__2_value;
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__2(lean_object*, lean_object*);
static const lean_closure_object l_Near_Storage_instCodecUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecUInt64___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecUInt64___closed__0 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecUInt64___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecUInt64___lam__2, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Near_Storage_parseNat_x3f___closed__0_value)} };
static const lean_object* l_Near_Storage_instCodecUInt64___closed__1 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__1_value;
static const lean_ctor_object l_Near_Storage_instCodecUInt64___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecUInt64___closed__0_value),((lean_object*)&l_Near_Storage_instCodecUInt64___closed__1_value)}};
static const lean_object* l_Near_Storage_instCodecUInt64___closed__2 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__2_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecUInt64 = (const lean_object*)&l_Near_Storage_instCodecUInt64___closed__2_value;
static const lean_closure_object l_Near_Storage_instCodecNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_parseNat_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecNat___closed__0 = (const lean_object*)&l_Near_Storage_instCodecNat___closed__0_value;
static const lean_ctor_object l_Near_Storage_instCodecNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_NearToken_instToString___closed__0_value),((lean_object*)&l_Near_Storage_instCodecNat___closed__0_value)}};
static const lean_object* l_Near_Storage_instCodecNat___closed__1 = (const lean_object*)&l_Near_Storage_instCodecNat___closed__1_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecNat = (const lean_object*)&l_Near_Storage_instCodecNat___closed__1_value;
static const lean_string_object l_Near_Storage_instCodecBool___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Near_Storage_instCodecBool___lam__0___closed__0 = (const lean_object*)&l_Near_Storage_instCodecBool___lam__0___closed__0_value;
static const lean_string_object l_Near_Storage_instCodecBool___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Near_Storage_instCodecBool___lam__0___closed__1 = (const lean_object*)&l_Near_Storage_instCodecBool___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1___boxed(lean_object*);
static const lean_closure_object l_Near_Storage_instCodecBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecBool___closed__0 = (const lean_object*)&l_Near_Storage_instCodecBool___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecBool___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecBool___closed__1 = (const lean_object*)&l_Near_Storage_instCodecBool___closed__1_value;
static const lean_ctor_object l_Near_Storage_instCodecBool___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecBool___closed__0_value),((lean_object*)&l_Near_Storage_instCodecBool___closed__1_value)}};
static const lean_object* l_Near_Storage_instCodecBool___closed__2 = (const lean_object*)&l_Near_Storage_instCodecBool___closed__2_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecBool = (const lean_object*)&l_Near_Storage_instCodecBool___closed__2_value;
static const lean_closure_object l_Near_Storage_instCodecAccountId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_AccountId_asStr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecAccountId___closed__0 = (const lean_object*)&l_Near_Storage_instCodecAccountId___closed__0_value;
static const lean_closure_object l_Near_Storage_instCodecAccountId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_AccountId_parse, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecAccountId___closed__1 = (const lean_object*)&l_Near_Storage_instCodecAccountId___closed__1_value;
static const lean_ctor_object l_Near_Storage_instCodecAccountId___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecAccountId___closed__0_value),((lean_object*)&l_Near_Storage_instCodecAccountId___closed__1_value)}};
static const lean_object* l_Near_Storage_instCodecAccountId___closed__2 = (const lean_object*)&l_Near_Storage_instCodecAccountId___closed__2_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecAccountId = (const lean_object*)&l_Near_Storage_instCodecAccountId___closed__2_value;
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Near_Storage_instCodecNearToken___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecNearToken___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Near_Storage_parseNat_x3f___closed__0_value)} };
static const lean_object* l_Near_Storage_instCodecNearToken___closed__0 = (const lean_object*)&l_Near_Storage_instCodecNearToken___closed__0_value;
static const lean_ctor_object l_Near_Storage_instCodecNearToken___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_NearToken_instToString___closed__0_value),((lean_object*)&l_Near_Storage_instCodecNearToken___closed__0_value)}};
static const lean_object* l_Near_Storage_instCodecNearToken___closed__1 = (const lean_object*)&l_Near_Storage_instCodecNearToken___closed__1_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecNearToken = (const lean_object*)&l_Near_Storage_instCodecNearToken___closed__1_value;
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0___boxed(lean_object*);
static const lean_closure_object l_Near_Storage_instCodecGas___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Storage_instCodecGas___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Storage_instCodecGas___closed__0 = (const lean_object*)&l_Near_Storage_instCodecGas___closed__0_value;
static const lean_ctor_object l_Near_Storage_instCodecGas___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Near_Storage_instCodecGas___closed__0_value),((lean_object*)&l_Near_Storage_instCodecUInt64___closed__1_value)}};
static const lean_object* l_Near_Storage_instCodecGas___closed__1 = (const lean_object*)&l_Near_Storage_instCodecGas___closed__1_value;
LEAN_EXPORT const lean_object* l_Near_Storage_instCodecGas = (const lean_object*)&l_Near_Storage_instCodecGas___closed__1_value;
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_readAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_writeAs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_contains(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_delete(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_delete___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Storage_instReprKey_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Near_Storage_instReprKey_repr___redArg___closed__0 = (const lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_Storage_instReprKey_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_Storage_instReprKey_repr___redArg___closed__1 = (const lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_Storage_instReprKey_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_Storage_instReprKey_repr___redArg___closed__2 = (const lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_Storage_instReprKey_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_Storage_instReprKey_repr___redArg___closed__3 = (const lean_object*)&l_Near_Storage_instReprKey_repr___redArg___closed__3_value;
static lean_once_cell_t l_Near_Storage_instReprKey_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Storage_instReprKey_repr___redArg___closed__4;
static lean_once_cell_t l_Near_Storage_instReprKey_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Storage_instReprKey_repr___redArg___closed__5;
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_make(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_write(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Near_Storage_instReprSlot_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Near_Storage_instReprSlot_repr___redArg___closed__0 = (const lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_Storage_instReprSlot_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_Storage_instReprSlot_repr___redArg___closed__1 = (const lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_Storage_instReprSlot_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_Storage_instReprSlot_repr___redArg___closed__2 = (const lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_Storage_instReprSlot_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_Storage_instReprSlot_repr___redArg___closed__3 = (const lean_object*)&l_Near_Storage_instReprSlot_repr___redArg___closed__3_value;
static lean_once_cell_t l_Near_Storage_instReprSlot_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Storage_instReprSlot_repr___redArg___closed__4;
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Near_Storage_instReprTypedMap_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "mapPrefix"};
static const lean_object* l_Near_Storage_instReprTypedMap_repr___redArg___closed__0 = (const lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_Storage_instReprTypedMap_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_Storage_instReprTypedMap_repr___redArg___closed__1 = (const lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_Storage_instReprTypedMap_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_Storage_instReprTypedMap_repr___redArg___closed__2 = (const lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_Storage_instReprTypedMap_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_Storage_instReprTypedMap_repr___redArg___closed__3 = (const lean_object*)&l_Near_Storage_instReprTypedMap_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Storage_TypedMap_storageKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Near_Storage_TypedMap_storageKey___redArg___closed__0 = (const lean_object*)&l_Near_Storage_TypedMap_storageKey___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Near_Store_instReprLookupMap_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "storagePrefix"};
static const lean_object* l_Near_Store_instReprLookupMap_repr___redArg___closed__0 = (const lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_Store_instReprLookupMap_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_Store_instReprLookupMap_repr___redArg___closed__1 = (const lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_Store_instReprLookupMap_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_Store_instReprLookupMap_repr___redArg___closed__2 = (const lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_Store_instReprLookupMap_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_Store_instReprLookupMap_repr___redArg___closed__3 = (const lean_object*)&l_Near_Store_instReprLookupMap_repr___redArg___closed__3_value;
static lean_once_cell_t l_Near_Store_instReprLookupMap_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Store_instReprLookupMap_repr___redArg___closed__4;
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprVector_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprVector_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprVector_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprVector___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_instReprVector(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_new___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_new___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_new(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_make___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_make___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_make(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_make___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Store_Vector_lenKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ":len"};
static const lean_object* l_Near_Store_Vector_lenKey___redArg___closed__0 = (const lean_object*)&l_Near_Store_Vector_lenKey___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Store_Vector_lenKey___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_lenKey(lean_object*, lean_object*);
static const lean_string_object l_Near_Store_Vector_itemKey___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ":item:"};
static const lean_object* l_Near_Store_Vector_itemKey___redArg___closed__0 = (const lean_object*)&l_Near_Store_Vector_itemKey___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Store_Vector_itemKey___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_itemKey(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_len___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_len___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_len(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_len___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_push___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_near_current_account_id();
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object*);
lean_object* lean_near_predecessor_account_id();
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object*);
lean_object* lean_near_signer_account_id();
LEAN_EXPORT lean_object* l_Near_Env_signerAccountId___boxed(lean_object*);
lean_object* lean_near_block_timestamp();
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object*);
lean_object* lean_near_block_height();
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object*);
lean_object* lean_near_epoch_height();
LEAN_EXPORT lean_object* l_Near_Env_epochHeight___boxed(lean_object*);
lean_object* lean_near_storage_usage();
LEAN_EXPORT lean_object* l_Near_Env_storageUsage___boxed(lean_object*);
lean_object* lean_near_prepaid_gas();
LEAN_EXPORT lean_object* l_Near_Env_prepaidGasRaw___boxed(lean_object*);
lean_object* lean_near_used_gas();
LEAN_EXPORT lean_object* l_Near_Env_usedGasRaw___boxed(lean_object*);
lean_object* lean_near_account_balance();
LEAN_EXPORT lean_object* l_Near_Env_accountBalanceYocto___boxed(lean_object*);
lean_object* lean_near_attached_deposit();
LEAN_EXPORT lean_object* l_Near_Env_attachedDepositYocto___boxed(lean_object*);
lean_object* lean_near_input();
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object*);
lean_object* lean_near_value_return(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object*, lean_object*);
lean_object* lean_near_log(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object*, lean_object*);
lean_object* lean_near_panic_str(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_panicStr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_currentAccount();
LEAN_EXPORT lean_object* l_Near_Env_currentAccount___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount();
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_signerAccount();
LEAN_EXPORT lean_object* l_Near_Env_signerAccount___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_prepaidGas();
LEAN_EXPORT lean_object* l_Near_Env_prepaidGas___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_usedGas();
LEAN_EXPORT lean_object* l_Near_Env_usedGas___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_parseNearToken(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_accountBalance();
LEAN_EXPORT lean_object* l_Near_Env_accountBalance___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_attachedDeposit();
LEAN_EXPORT lean_object* l_Near_Env_attachedDeposit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_inputString();
LEAN_EXPORT lean_object* l_Near_Env_inputString___boxed(lean_object*);
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "currentAccount"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__0 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__1 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__2 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__3 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__3_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__4;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__5 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__5_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__6 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__6_value;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "predecessorAccount"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__7 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__7_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__7_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__8 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__8_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__9;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "signerAccount"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__10 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__10_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__10_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__11 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__11_value;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "blockHeight"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__12 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__12_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__12_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__13 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__13_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__14;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "blockTimestamp"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__15 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__15_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__15_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__16 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__16_value;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "epochHeight"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__17 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__17_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__17_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__18 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__18_value;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "storageUsage"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__19 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__19_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__19_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__20 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__20_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__21;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "prepaidGas"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__22 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__22_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__22_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__23 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__23_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__24;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "usedGas"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__25 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__25_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__25_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__26 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__26_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__27;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "accountBalance"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__28 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__28_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__28_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__29 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__29_value;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "attachedDeposit"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__30 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__30_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__30_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__31 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__31_value;
static lean_once_cell_t l_Near_Env_instReprContext_repr___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Env_instReprContext_repr___redArg___closed__32;
static const lean_string_object l_Near_Env_instReprContext_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__33 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__33_value;
static const lean_ctor_object l_Near_Env_instReprContext_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__33_value)}};
static const lean_object* l_Near_Env_instReprContext_repr___redArg___closed__34 = (const lean_object*)&l_Near_Env_instReprContext_repr___redArg___closed__34_value;
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_Env_instReprContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Env_instReprContext_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Env_instReprContext___closed__0 = (const lean_object*)&l_Near_Env_instReprContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_Env_instReprContext = (const lean_object*)&l_Near_Env_instReprContext___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Env_context();
LEAN_EXPORT lean_object* l_Near_Env_context___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_logValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Env_logValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Near_Contract_instBEqMode_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Near_Contract_instBEqMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_Contract_instBEqMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Contract_instBEqMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Contract_instBEqMode___closed__0 = (const lean_object*)&l_Near_Contract_instBEqMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_Contract_instBEqMode = (const lean_object*)&l_Near_Contract_instBEqMode___closed__0_value;
static const lean_string_object l_Near_Contract_instReprMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Near.Contract.Mode.init"};
static const lean_object* l_Near_Contract_instReprMode_repr___closed__0 = (const lean_object*)&l_Near_Contract_instReprMode_repr___closed__0_value;
static const lean_ctor_object l_Near_Contract_instReprMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Contract_instReprMode_repr___closed__0_value)}};
static const lean_object* l_Near_Contract_instReprMode_repr___closed__1 = (const lean_object*)&l_Near_Contract_instReprMode_repr___closed__1_value;
static const lean_string_object l_Near_Contract_instReprMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Near.Contract.Mode.view"};
static const lean_object* l_Near_Contract_instReprMode_repr___closed__2 = (const lean_object*)&l_Near_Contract_instReprMode_repr___closed__2_value;
static const lean_ctor_object l_Near_Contract_instReprMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Contract_instReprMode_repr___closed__2_value)}};
static const lean_object* l_Near_Contract_instReprMode_repr___closed__3 = (const lean_object*)&l_Near_Contract_instReprMode_repr___closed__3_value;
static const lean_string_object l_Near_Contract_instReprMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Near.Contract.Mode.update"};
static const lean_object* l_Near_Contract_instReprMode_repr___closed__4 = (const lean_object*)&l_Near_Contract_instReprMode_repr___closed__4_value;
static const lean_ctor_object l_Near_Contract_instReprMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Contract_instReprMode_repr___closed__4_value)}};
static const lean_object* l_Near_Contract_instReprMode_repr___closed__5 = (const lean_object*)&l_Near_Contract_instReprMode_repr___closed__5_value;
static lean_once_cell_t l_Near_Contract_instReprMode_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Contract_instReprMode_repr___closed__6;
static lean_once_cell_t l_Near_Contract_instReprMode_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Near_Contract_instReprMode_repr___closed__7;
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_Contract_instReprMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Contract_instReprMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Contract_instReprMode___closed__0 = (const lean_object*)&l_Near_Contract_instReprMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_Contract_instReprMode = (const lean_object*)&l_Near_Contract_instReprMode___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_entry___boxed__const__1;
LEAN_EXPORT lean_object* l_Near_Contract_entry(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_entry___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initializer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_view(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_update(lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_isInitialized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "STATE"};
static const lean_object* l_Near_Contract_isInitialized___closed__0 = (const lean_object*)&l_Near_Contract_isInitialized___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized();
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnText(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnText___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnJson(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnJson___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_done___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Near_Contract_done___closed__0 = (const lean_object*)&l_Near_Contract_done___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_done();
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t);
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnU64(uint64_t);
LEAN_EXPORT lean_object* l_Near_Contract_returnU64___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnNat(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_panic(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_panic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_requireInitialized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "contract is not initialized"};
static const lean_object* l_Near_Contract_requireInitialized___closed__0 = (const lean_object*)&l_Near_Contract_requireInitialized___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized();
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized___boxed(lean_object*);
static const lean_string_object l_Near_Contract_requireNotInitialized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "contract is already initialized"};
static const lean_object* l_Near_Contract_requireNotInitialized___closed__0 = (const lean_object*)&l_Near_Contract_requireNotInitialized___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized();
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_requirePredecessor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected predecessor "};
static const lean_object* l_Near_Contract_requirePredecessor___closed__0 = (const lean_object*)&l_Near_Contract_requirePredecessor___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_requirePrivate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Method "};
static const lean_object* l_Near_Contract_requirePrivate___closed__0 = (const lean_object*)&l_Near_Contract_requirePrivate___closed__0_value;
static const lean_string_object l_Near_Contract_requirePrivate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " is private"};
static const lean_object* l_Near_Contract_requirePrivate___closed__1 = (const lean_object*)&l_Near_Contract_requirePrivate___closed__1_value;
LEAN_EXPORT lean_object* l_Near_Contract_requirePrivate(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_requirePrivate___boxed(lean_object*, lean_object*);
static const lean_string_object l_Near_Contract_requireNoDeposit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Method is not payable"};
static const lean_object* l_Near_Contract_requireNoDeposit___closed__0 = (const lean_object*)&l_Near_Contract_requireNoDeposit___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_requireNoDeposit();
LEAN_EXPORT lean_object* l_Near_Contract_requireNoDeposit___boxed(lean_object*);
static const lean_string_object l_Near_Contract_requireOneYocto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Requires attached deposit of exactly 1 yoctoNEAR"};
static const lean_object* l_Near_Contract_requireOneYocto___closed__0 = (const lean_object*)&l_Near_Contract_requireOneYocto___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_requireOneYocto();
LEAN_EXPORT lean_object* l_Near_Contract_requireOneYocto___boxed(lean_object*);
static const lean_string_object l_Near_Contract_requireMinDeposit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Requires attached deposit of at least "};
static const lean_object* l_Near_Contract_requireMinDeposit___closed__0 = (const lean_object*)&l_Near_Contract_requireMinDeposit___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Contract_requireMinDeposit(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_requireMinDeposit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadState();
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Near_instBEqPromiseIndex_beq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Near_instBEqPromiseIndex_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instBEqPromiseIndex___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instBEqPromiseIndex_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instBEqPromiseIndex___closed__0 = (const lean_object*)&l_Near_instBEqPromiseIndex___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instBEqPromiseIndex = (const lean_object*)&l_Near_instBEqPromiseIndex___closed__0_value;
static const lean_string_object l_Near_instReprPromiseIndex_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Near_instReprPromiseIndex_repr___redArg___closed__0 = (const lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_instReprPromiseIndex_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_instReprPromiseIndex_repr___redArg___closed__1 = (const lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_instReprPromiseIndex_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_instReprPromiseIndex_repr___redArg___closed__2 = (const lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_instReprPromiseIndex_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_instReprPromiseIndex_repr___redArg___closed__3 = (const lean_object*)&l_Near_instReprPromiseIndex_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr___redArg(uint64_t);
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instReprPromiseIndex___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instReprPromiseIndex_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instReprPromiseIndex___closed__0 = (const lean_object*)&l_Near_instReprPromiseIndex___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instReprPromiseIndex = (const lean_object*)&l_Near_instReprPromiseIndex___closed__0_value;
static const lean_string_object l_Near_instReprPromise_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* l_Near_instReprPromise_repr___redArg___closed__0 = (const lean_object*)&l_Near_instReprPromise_repr___redArg___closed__0_value;
static const lean_ctor_object l_Near_instReprPromise_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_instReprPromise_repr___redArg___closed__0_value)}};
static const lean_object* l_Near_instReprPromise_repr___redArg___closed__1 = (const lean_object*)&l_Near_instReprPromise_repr___redArg___closed__1_value;
static const lean_ctor_object l_Near_instReprPromise_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Near_instReprPromise_repr___redArg___closed__1_value)}};
static const lean_object* l_Near_instReprPromise_repr___redArg___closed__2 = (const lean_object*)&l_Near_instReprPromise_repr___redArg___closed__2_value;
static const lean_ctor_object l_Near_instReprPromise_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_instReprPromise_repr___redArg___closed__2_value),((lean_object*)&l_Near_instReprNearToken_repr___redArg___closed__5_value)}};
static const lean_object* l_Near_instReprPromise_repr___redArg___closed__3 = (const lean_object*)&l_Near_instReprPromise_repr___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr___redArg(uint64_t);
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_instReprPromise___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_instReprPromise_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_instReprPromise___closed__0 = (const lean_object*)&l_Near_instReprPromise___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_instReprPromise = (const lean_object*)&l_Near_instReprPromise___closed__0_value;
lean_object* lean_near_promise_create(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_createRaw___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_near_promise_then(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_thenRaw___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_near_promise_and2(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_and2Raw___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_near_promise_batch_create(lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_batchCreateRaw___boxed(lean_object*, lean_object*);
lean_object* lean_near_promise_batch_then(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_batchThenRaw___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_near_promise_batch_action_function_call(uint64_t, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_batchActionFunctionCallRaw___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_near_promise_batch_action_transfer(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_batchActionTransferRaw___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_near_promise_results_count();
LEAN_EXPORT lean_object* l_Near_Promise_resultsCount___boxed(lean_object*);
lean_object* lean_near_promise_result_status(uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_resultStatusRaw___boxed(lean_object*, lean_object*);
lean_object* lean_near_promise_result(uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_resultRaw___boxed(lean_object*, lean_object*);
lean_object* lean_near_promise_return(uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_returnRaw___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Near_Promise_ofIndex(uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_ofIndex___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_create(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_create___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_new(lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_new___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_functionCall(uint64_t, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_functionCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_transfer(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_transfer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_thenBatch(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_thenBatch___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_thenCall(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_thenCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_join(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_join___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_returnPromise(uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_returnPromise___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_notReady_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_notReady_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_successful_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_successful_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_Result_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Near_Promise_instReprResult_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Near.Promise.Result.notReady"};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__0 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__0_value;
static const lean_ctor_object l_Near_Promise_instReprResult_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Promise_instReprResult_repr___closed__0_value)}};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__1 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__1_value;
static const lean_string_object l_Near_Promise_instReprResult_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Near.Promise.Result.failed"};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__2 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__2_value;
static const lean_ctor_object l_Near_Promise_instReprResult_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Promise_instReprResult_repr___closed__2_value)}};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__3 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__3_value;
static const lean_string_object l_Near_Promise_instReprResult_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Near.Promise.Result.successful"};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__4 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__4_value;
static const lean_ctor_object l_Near_Promise_instReprResult_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Near_Promise_instReprResult_repr___closed__4_value)}};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__5 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__5_value;
static const lean_ctor_object l_Near_Promise_instReprResult_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Near_Promise_instReprResult_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Near_Promise_instReprResult_repr___closed__6 = (const lean_object*)&l_Near_Promise_instReprResult_repr___closed__6_value;
LEAN_EXPORT lean_object* l_Near_Promise_instReprResult_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_Promise_instReprResult_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Near_Promise_instReprResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Near_Promise_instReprResult_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Near_Promise_instReprResult___closed__0 = (const lean_object*)&l_Near_Promise_instReprResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Near_Promise_instReprResult = (const lean_object*)&l_Near_Promise_instReprResult___closed__0_value;
LEAN_EXPORT lean_object* l_Near_Promise_result(uint64_t);
LEAN_EXPORT lean_object* l_Near_Promise_result___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_get___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_remove(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_remove___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_getOr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Near_StringMap_getOr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Near_instReprNearToken_repr_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Near_instReprNearToken_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_unsigned_to_nat(13u);
v___x_17_ = lean_nat_to_int(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Near_instReprNearToken_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__0));
v___x_20_ = lean_string_length(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_l_Near_instReprNearToken_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__9, &l_Near_instReprNearToken_repr___redArg___closed__9_once, _init_l_Near_instReprNearToken_repr___redArg___closed__9);
v___x_22_ = lean_nat_to_int(v___x_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___redArg(lean_object* v_x_27_){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; uint8_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_28_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__6));
v___x_29_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__7, &l_Near_instReprNearToken_repr___redArg___closed__7_once, _init_l_Near_instReprNearToken_repr___redArg___closed__7);
v___x_30_ = l_Nat_reprFast(v_x_27_);
v___x_31_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
v___x_32_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_29_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = 0;
v___x_34_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_34_, 0, v___x_32_);
lean_ctor_set_uint8(v___x_34_, sizeof(void*)*1, v___x_33_);
v___x_35_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_28_);
lean_ctor_set(v___x_35_, 1, v___x_34_);
v___x_36_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_37_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_38_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v___x_35_);
v___x_39_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_40_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_38_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_36_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v___x_42_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_42_, 0, v___x_41_);
lean_ctor_set_uint8(v___x_42_, sizeof(void*)*1, v___x_33_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr(lean_object* v_x_43_, lean_object* v_prec_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Near_instReprNearToken_repr___redArg(v_x_43_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprNearToken_repr___boxed(lean_object* v_x_46_, lean_object* v_prec_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Near_instReprNearToken_repr(v_x_46_, v_prec_47_);
lean_dec(v_prec_47_);
return v_res_48_;
}
}
static lean_object* _init_l_Near_NearToken_yoctoPerNear___closed__0(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_cstr_to_nat("1000000000000000000000000");
return v___x_51_;
}
}
static lean_object* _init_l_Near_NearToken_yoctoPerNear(void){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = lean_obj_once(&l_Near_NearToken_yoctoPerNear___closed__0, &l_Near_NearToken_yoctoPerNear___closed__0_once, _init_l_Near_NearToken_yoctoPerNear___closed__0);
return v___x_52_;
}
}
static lean_object* _init_l_Near_NearToken_yoctoPerMilliNear___closed__0(void){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_cstr_to_nat("1000000000000000000000");
return v___x_53_;
}
}
static lean_object* _init_l_Near_NearToken_yoctoPerMilliNear(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_once(&l_Near_NearToken_yoctoPerMilliNear___closed__0, &l_Near_NearToken_yoctoPerMilliNear___closed__0_once, _init_l_Near_NearToken_yoctoPerMilliNear___closed__0);
return v___x_54_;
}
}
static lean_object* _init_l_Near_NearToken_yoctoPerMicroNear(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_cstr_to_nat("1000000000000000000");
return v___x_55_;
}
}
static lean_object* _init_l_Near_NearToken_zero(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_unsigned_to_nat(0u);
return v___x_56_;
}
}
static lean_object* _init_l_Near_NearToken_oneYocto(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_unsigned_to_nat(1u);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromYocto(lean_object* v_amount_58_){
_start:
{
lean_inc(v_amount_58_);
return v_amount_58_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromYocto___boxed(lean_object* v_amount_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Near_NearToken_fromYocto(v_amount_59_);
lean_dec(v_amount_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromNear(lean_object* v_amount_61_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_Near_NearToken_yoctoPerNear___closed__0, &l_Near_NearToken_yoctoPerNear___closed__0_once, _init_l_Near_NearToken_yoctoPerNear___closed__0);
v___x_63_ = lean_nat_mul(v_amount_61_, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromNear___boxed(lean_object* v_amount_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Near_NearToken_fromNear(v_amount_64_);
lean_dec(v_amount_64_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromMilliNear(lean_object* v_amount_66_){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_obj_once(&l_Near_NearToken_yoctoPerMilliNear___closed__0, &l_Near_NearToken_yoctoPerMilliNear___closed__0_once, _init_l_Near_NearToken_yoctoPerMilliNear___closed__0);
v___x_68_ = lean_nat_mul(v_amount_66_, v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromMilliNear___boxed(lean_object* v_amount_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Near_NearToken_fromMilliNear(v_amount_69_);
lean_dec(v_amount_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromMicroNear(lean_object* v_amount_71_){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_cstr_to_nat("1000000000000000000");
v___x_73_ = lean_nat_mul(v_amount_71_, v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_fromMicroNear___boxed(lean_object* v_amount_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Near_NearToken_fromMicroNear(v_amount_74_);
lean_dec(v_amount_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_add(lean_object* v_a_76_, lean_object* v_b_77_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_nat_add(v_a_76_, v_b_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_add___boxed(lean_object* v_a_79_, lean_object* v_b_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Near_NearToken_add(v_a_79_, v_b_80_);
lean_dec(v_b_80_);
lean_dec(v_a_79_);
return v_res_81_;
}
}
LEAN_EXPORT uint8_t l_Near_NearToken_isZero(lean_object* v_t_82_){
_start:
{
lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_nat_dec_eq(v_t_82_, v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_isZero___boxed(lean_object* v_t_85_){
_start:
{
uint8_t v_res_86_; lean_object* v_r_87_; 
v_res_86_ = l_Near_NearToken_isZero(v_t_85_);
lean_dec(v_t_85_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0(lean_object* v_t_95_, lean_object* v_x_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = l_Nat_reprFast(v_t_95_);
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
v___x_99_ = ((lean_object*)(l_Near_NearToken_instRepr___lam__0___closed__1));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Near_NearToken_instRepr___lam__0___boxed(lean_object* v_t_101_, lean_object* v_x_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Near_NearToken_instRepr___lam__0(v_t_101_, v_x_102_);
lean_dec(v_x_102_);
return v_res_103_;
}
}
static lean_object* _init_l_Near_instReprGas_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(9u);
v___x_116_ = lean_nat_to_int(v___x_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___redArg(uint64_t v_x_117_){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_118_ = ((lean_object*)(l_Near_instReprGas_repr___redArg___closed__3));
v___x_119_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_120_ = lean_uint64_to_nat(v_x_117_);
v___x_121_ = l_Nat_reprFast(v___x_120_);
v___x_122_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
v___x_123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_119_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = 0;
v___x_125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_125_, sizeof(void*)*1, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_118_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
v___x_127_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_128_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_126_);
v___x_130_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_129_);
lean_ctor_set(v___x_131_, 1, v___x_130_);
v___x_132_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_127_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___x_133_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set_uint8(v___x_133_, sizeof(void*)*1, v___x_124_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___redArg___boxed(lean_object* v_x_134_){
_start:
{
uint64_t v_x_118__boxed_135_; lean_object* v_res_136_; 
v_x_118__boxed_135_ = lean_unbox_uint64(v_x_134_);
lean_dec_ref(v_x_134_);
v_res_136_ = l_Near_instReprGas_repr___redArg(v_x_118__boxed_135_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr(uint64_t v_x_137_, lean_object* v_prec_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Near_instReprGas_repr___redArg(v_x_137_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprGas_repr___boxed(lean_object* v_x_140_, lean_object* v_prec_141_){
_start:
{
uint64_t v_x_164__boxed_142_; lean_object* v_res_143_; 
v_x_164__boxed_142_ = lean_unbox_uint64(v_x_140_);
lean_dec_ref(v_x_140_);
v_res_143_ = l_Near_instReprGas_repr(v_x_164__boxed_142_, v_prec_141_);
lean_dec(v_prec_141_);
return v_res_143_;
}
}
static uint64_t _init_l_Near_Gas_zero(void){
_start:
{
uint64_t v___x_146_; 
v___x_146_ = 0ULL;
return v___x_146_;
}
}
LEAN_EXPORT uint64_t l_Near_Gas_fromGas(uint64_t v_gas_147_){
_start:
{
return v_gas_147_;
}
}
LEAN_EXPORT lean_object* l_Near_Gas_fromGas___boxed(lean_object* v_gas_148_){
_start:
{
uint64_t v_gas_boxed_149_; uint64_t v_res_150_; lean_object* v_r_151_; 
v_gas_boxed_149_ = lean_unbox_uint64(v_gas_148_);
lean_dec_ref(v_gas_148_);
v_res_150_ = l_Near_Gas_fromGas(v_gas_boxed_149_);
v_r_151_ = lean_box_uint64(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT uint64_t l_Near_Gas_fromTgas(uint64_t v_tgas_152_){
_start:
{
uint64_t v___x_153_; uint64_t v___x_154_; 
v___x_153_ = 1000000000000ULL;
v___x_154_ = lean_uint64_mul(v_tgas_152_, v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Near_Gas_fromTgas___boxed(lean_object* v_tgas_155_){
_start:
{
uint64_t v_tgas_boxed_156_; uint64_t v_res_157_; lean_object* v_r_158_; 
v_tgas_boxed_156_ = lean_unbox_uint64(v_tgas_155_);
lean_dec_ref(v_tgas_155_);
v_res_157_ = l_Near_Gas_fromTgas(v_tgas_boxed_156_);
v_r_158_ = lean_box_uint64(v_res_157_);
return v_r_158_;
}
}
LEAN_EXPORT uint8_t l_Near_instBEqAccountId_beq(lean_object* v_x_159_, lean_object* v_x_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = lean_string_dec_eq(v_x_159_, v_x_160_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Near_instBEqAccountId_beq___boxed(lean_object* v_x_162_, lean_object* v_x_163_){
_start:
{
uint8_t v_res_164_; lean_object* v_r_165_; 
v_res_164_ = l_Near_instBEqAccountId_beq(v_x_162_, v_x_163_);
lean_dec_ref(v_x_163_);
lean_dec_ref(v_x_162_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
static lean_object* _init_l_Near_instReprAccountId_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = lean_unsigned_to_nat(6u);
v___x_178_ = lean_nat_to_int(v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___redArg(lean_object* v_x_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_180_ = ((lean_object*)(l_Near_instReprAccountId_repr___redArg___closed__3));
v___x_181_ = lean_obj_once(&l_Near_instReprAccountId_repr___redArg___closed__4, &l_Near_instReprAccountId_repr___redArg___closed__4_once, _init_l_Near_instReprAccountId_repr___redArg___closed__4);
v___x_182_ = l_String_quote(v_x_179_);
v___x_183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
v___x_184_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_184_, 0, v___x_181_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = 0;
v___x_186_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set_uint8(v___x_186_, sizeof(void*)*1, v___x_185_);
v___x_187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_180_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_189_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_190_, 0, v___x_189_);
lean_ctor_set(v___x_190_, 1, v___x_187_);
v___x_191_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_188_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_194_, 0, v___x_193_);
lean_ctor_set_uint8(v___x_194_, sizeof(void*)*1, v___x_185_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr(lean_object* v_x_195_, lean_object* v_prec_196_){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_Near_instReprAccountId_repr___redArg(v_x_195_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprAccountId_repr___boxed(lean_object* v_x_198_, lean_object* v_prec_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Near_instReprAccountId_repr(v_x_198_, v_prec_199_);
lean_dec(v_prec_199_);
return v_res_200_;
}
}
static lean_object* _init_l_Near_AccountId_minLen(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_unsigned_to_nat(2u);
return v___x_203_;
}
}
static lean_object* _init_l_Near_AccountId_maxLen(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_unsigned_to_nat(64u);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked(lean_object* v_s_205_){
_start:
{
lean_inc_ref(v_s_205_);
return v_s_205_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_unchecked___boxed(lean_object* v_s_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Near_AccountId_unchecked(v_s_206_);
lean_dec_ref(v_s_206_);
return v_res_207_;
}
}
LEAN_EXPORT uint8_t l_Near_AccountId_isValid(lean_object* v_s_208_){
_start:
{
lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_209_ = lean_unsigned_to_nat(2u);
v___x_210_ = lean_string_length(v_s_208_);
v___x_211_ = lean_nat_dec_le(v___x_209_, v___x_210_);
if (v___x_211_ == 0)
{
return v___x_211_;
}
else
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(64u);
v___x_213_ = lean_nat_dec_le(v___x_210_, v___x_212_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_isValid___boxed(lean_object* v_s_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = l_Near_AccountId_isValid(v_s_214_);
lean_dec_ref(v_s_214_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_parse(lean_object* v_s_217_){
_start:
{
uint8_t v___x_218_; 
v___x_218_ = l_Near_AccountId_isValid(v_s_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
lean_dec_ref(v_s_217_);
v___x_219_ = lean_box(0);
return v___x_219_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_220_, 0, v_s_217_);
return v___x_220_;
}
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr(lean_object* v_a_221_){
_start:
{
lean_inc_ref(v_a_221_);
return v_a_221_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_asStr___boxed(lean_object* v_a_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Near_AccountId_asStr(v_a_222_);
lean_dec_ref(v_a_222_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0(lean_object* v_a_224_){
_start:
{
lean_inc_ref(v_a_224_);
return v_a_224_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instToString___lam__0___boxed(lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Near_AccountId_instToString___lam__0(v_a_225_);
lean_dec_ref(v_a_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0(lean_object* v_a_232_, lean_object* v_x_233_){
_start:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_234_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_235_, 0, v_a_232_);
v___x_236_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_234_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_234_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Near_AccountId_instRepr___lam__0___boxed(lean_object* v_a_238_, lean_object* v_x_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Near_AccountId_instRepr___lam__0(v_a_238_, v_x_239_);
lean_dec(v_x_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawWrite___boxed(lean_object* v_key_246_, lean_object* v_value_247_, lean_object* v_a_00___x40___internal___hyg_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = lean_near_storage_write(v_key_246_, v_value_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_rawRead___boxed(lean_object* v_key_252_, lean_object* v_a_00___x40___internal___hyg_253_){
_start:
{
lean_object* v_res_254_; 
v_res_254_ = lean_near_storage_read(v_key_252_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_hasKey___boxed(lean_object* v_key_257_, lean_object* v_a_00___x40___internal___hyg_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = lean_near_storage_has_key(v_key_257_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_remove___boxed(lean_object* v_key_262_, lean_object* v_a_00___x40___internal___hyg_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = lean_near_storage_remove(v_key_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write(lean_object* v_key_265_, lean_object* v_value_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_near_storage_write(v_key_265_, v_value_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_write___boxed(lean_object* v_key_269_, lean_object* v_value_270_, lean_object* v_a_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Near_Storage_write(v_key_269_, v_value_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read(lean_object* v_key_273_, lean_object* v_default_274_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = lean_near_storage_read(v_key_273_);
if (lean_obj_tag(v___x_276_) == 0)
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_288_; 
v_a_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_288_ == 0)
{
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_288_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
if (lean_obj_tag(v_a_277_) == 0)
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v_default_274_);
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_default_274_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
else
{
lean_object* v_val_284_; lean_object* v___x_286_; 
lean_dec_ref(v_default_274_);
v_val_284_ = lean_ctor_get(v_a_277_, 0);
lean_inc(v_val_284_);
lean_dec_ref_known(v_a_277_, 1);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v_val_284_);
v___x_286_ = v___x_279_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_val_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
lean_dec_ref(v_default_274_);
v_a_289_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_276_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_276_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read___boxed(lean_object* v_key_297_, lean_object* v_default_298_, lean_object* v_a_299_){
_start:
{
lean_object* v_res_300_; 
v_res_300_ = l_Near_Storage_read(v_key_297_, v_default_298_);
return v_res_300_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f(lean_object* v_key_301_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = lean_near_storage_read(v_key_301_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_read_x3f___boxed(lean_object* v_key_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Near_Storage_read_x3f(v_key_304_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64(lean_object* v_key_307_, uint64_t v_value_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lean_uint64_to_nat(v_value_308_);
v___x_311_ = l_Nat_reprFast(v___x_310_);
v___x_312_ = lean_near_storage_write(v_key_307_, v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeU64___boxed(lean_object* v_key_313_, lean_object* v_value_314_, lean_object* v_a_315_){
_start:
{
uint64_t v_value_boxed_316_; lean_object* v_res_317_; 
v_value_boxed_316_ = lean_unbox_uint64(v_value_314_);
lean_dec_ref(v_value_314_);
v_res_317_ = l_Near_Storage_writeU64(v_key_313_, v_value_boxed_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f___lam__0(lean_object* v_acc_x3f_318_, uint32_t v_c_319_){
_start:
{
if (lean_obj_tag(v_acc_x3f_318_) == 0)
{
return v_acc_x3f_318_;
}
else
{
lean_object* v_val_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_339_; 
v_val_320_ = lean_ctor_get(v_acc_x3f_318_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v_acc_x3f_318_);
if (v_isSharedCheck_339_ == 0)
{
v___x_322_ = v_acc_x3f_318_;
v_isShared_323_ = v_isSharedCheck_339_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_val_320_);
lean_dec(v_acc_x3f_318_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_339_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v_code_324_; lean_object* v_zeroCode_325_; uint8_t v___y_327_; uint8_t v___x_336_; 
v_code_324_ = lean_uint32_to_nat(v_c_319_);
v_zeroCode_325_ = lean_unsigned_to_nat(48u);
v___x_336_ = lean_nat_dec_lt(v_code_324_, v_zeroCode_325_);
if (v___x_336_ == 0)
{
lean_object* v_nineCode_337_; uint8_t v___x_338_; 
v_nineCode_337_ = lean_unsigned_to_nat(57u);
v___x_338_ = lean_nat_dec_lt(v_nineCode_337_, v_code_324_);
v___y_327_ = v___x_338_;
goto v___jp_326_;
}
else
{
v___y_327_ = v___x_336_;
goto v___jp_326_;
}
v___jp_326_:
{
if (v___y_327_ == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_328_ = lean_unsigned_to_nat(10u);
v___x_329_ = lean_nat_mul(v_val_320_, v___x_328_);
lean_dec(v_val_320_);
v___x_330_ = lean_nat_sub(v_code_324_, v_zeroCode_325_);
lean_dec(v_code_324_);
v___x_331_ = lean_nat_add(v___x_329_, v___x_330_);
lean_dec(v___x_330_);
lean_dec(v___x_329_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_331_);
v___x_333_ = v___x_322_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
else
{
lean_object* v___x_335_; 
lean_dec(v_code_324_);
lean_del_object(v___x_322_);
lean_dec(v_val_320_);
v___x_335_ = lean_box(0);
return v___x_335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f___lam__0___boxed(lean_object* v_acc_x3f_340_, lean_object* v_c_341_){
_start:
{
uint32_t v_c_boxed_342_; lean_object* v_res_343_; 
v_c_boxed_342_ = lean_unbox_uint32(v_c_341_);
lean_dec(v_c_341_);
v_res_343_ = l_Near_Storage_parseNat_x3f___lam__0(v_acc_x3f_340_, v_c_boxed_342_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_parseNat_x3f(lean_object* v_s_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lean_string_data(v_s_347_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v___x_349_; 
v___x_349_ = lean_box(0);
return v___x_349_;
}
else
{
lean_object* v___f_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___f_350_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_351_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_352_ = l_List_foldl___redArg(v___f_350_, v___x_351_, v___x_348_);
return v___x_352_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecString___lam__0(lean_object* v_val_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_354_, 0, v_val_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0(uint64_t v_n_361_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_uint64_to_nat(v_n_361_);
v___x_363_ = l_Nat_reprFast(v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__0___boxed(lean_object* v_n_364_){
_start:
{
uint64_t v_n_boxed_365_; lean_object* v_res_366_; 
v_n_boxed_365_ = lean_unbox_uint64(v_n_364_);
lean_dec_ref(v_n_364_);
v_res_366_ = l_Near_Storage_instCodecUInt64___lam__0(v_n_boxed_365_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecUInt64___lam__2(lean_object* v___f_367_, lean_object* v_s_368_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = lean_string_data(v_s_368_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_370_; 
lean_dec_ref(v___f_367_);
v___x_370_ = lean_box(0);
return v___x_370_;
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_372_ = l_List_foldl___redArg(v___f_367_, v___x_371_, v___x_369_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v___x_373_; 
v___x_373_ = lean_box(0);
return v___x_373_;
}
else
{
lean_object* v_val_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_383_; 
v_val_374_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_383_ == 0)
{
v___x_376_ = v___x_372_;
v_isShared_377_ = v_isSharedCheck_383_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_val_374_);
lean_dec(v___x_372_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_383_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
uint64_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_378_ = lean_uint64_of_nat(v_val_374_);
lean_dec(v_val_374_);
v___x_379_ = lean_box_uint64(v___x_378_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v___x_379_);
v___x_381_ = v___x_376_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0(uint8_t v_b_398_){
_start:
{
if (v_b_398_ == 0)
{
lean_object* v___x_399_; 
v___x_399_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
return v___x_399_;
}
else
{
lean_object* v___x_400_; 
v___x_400_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__0___boxed(lean_object* v_b_401_){
_start:
{
uint8_t v_b_boxed_402_; lean_object* v_res_403_; 
v_b_boxed_402_ = lean_unbox(v_b_401_);
v_res_403_ = l_Near_Storage_instCodecBool___lam__0(v_b_boxed_402_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1(lean_object* v_s_404_){
_start:
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
v___x_406_ = lean_string_dec_eq(v_s_404_, v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
v___x_408_ = lean_string_dec_eq(v_s_404_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
v___x_409_ = lean_box(0);
return v___x_409_;
}
else
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_box(v___x_406_);
v___x_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_box(v___x_406_);
v___x_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecBool___lam__1___boxed(lean_object* v_s_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Near_Storage_instCodecBool___lam__1(v_s_414_);
lean_dec_ref(v_s_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecNearToken___lam__1(lean_object* v___f_428_, lean_object* v_s_429_){
_start:
{
lean_object* v___x_430_; 
v___x_430_ = lean_string_data(v_s_429_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v___x_431_; 
lean_dec_ref(v___f_428_);
v___x_431_ = lean_box(0);
return v___x_431_;
}
else
{
lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_432_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_433_ = l_List_foldl___redArg(v___f_428_, v___x_432_, v___x_430_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v___x_434_; 
v___x_434_ = lean_box(0);
return v___x_434_;
}
else
{
lean_object* v_val_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_val_435_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_433_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_val_435_);
lean_dec(v___x_433_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_val_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0(uint64_t v_g_449_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_uint64_to_nat(v_g_449_);
v___x_451_ = l_Nat_reprFast(v___x_450_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instCodecGas___lam__0___boxed(lean_object* v_g_452_){
_start:
{
uint64_t v_g_boxed_453_; lean_object* v_res_454_; 
v_g_boxed_453_ = lean_unbox_uint64(v_g_452_);
lean_dec_ref(v_g_452_);
v_res_454_ = l_Near_Storage_instCodecGas___lam__0(v_g_boxed_453_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg(lean_object* v_inst_460_, lean_object* v_key_461_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = lean_near_storage_read(v_key_461_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_478_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_478_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_478_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_478_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
if (lean_obj_tag(v_a_464_) == 0)
{
lean_object* v___x_468_; lean_object* v___x_470_; 
lean_dec_ref(v_inst_460_);
v___x_468_ = lean_box(0);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_468_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v___x_468_);
v___x_470_ = v_reuseFailAlloc_471_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
return v___x_470_;
}
}
else
{
lean_object* v_val_472_; lean_object* v_decode_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v_val_472_ = lean_ctor_get(v_a_464_, 0);
lean_inc(v_val_472_);
lean_dec_ref_known(v_a_464_, 1);
v_decode_473_ = lean_ctor_get(v_inst_460_, 1);
lean_inc_ref(v_decode_473_);
lean_dec_ref(v_inst_460_);
v___x_474_ = lean_apply_1(v_decode_473_, v_val_472_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v___x_474_);
v___x_476_ = v___x_466_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_dec_ref(v_inst_460_);
v_a_479_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_463_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_463_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___redArg___boxed(lean_object* v_inst_487_, lean_object* v_key_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Near_Storage_readAs_x3f___redArg(v_inst_487_, v_key_488_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f(lean_object* v_00_u03b1_491_, lean_object* v_inst_492_, lean_object* v_key_493_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = lean_near_storage_read(v_key_493_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_510_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_510_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_510_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_510_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
if (lean_obj_tag(v_a_496_) == 0)
{
lean_object* v___x_500_; lean_object* v___x_502_; 
lean_dec_ref(v_inst_492_);
v___x_500_ = lean_box(0);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_500_);
v___x_502_ = v___x_498_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v___x_500_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
else
{
lean_object* v_val_504_; lean_object* v_decode_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v_val_504_ = lean_ctor_get(v_a_496_, 0);
lean_inc(v_val_504_);
lean_dec_ref_known(v_a_496_, 1);
v_decode_505_ = lean_ctor_get(v_inst_492_, 1);
lean_inc_ref(v_decode_505_);
lean_dec_ref(v_inst_492_);
v___x_506_ = lean_apply_1(v_decode_505_, v_val_504_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_506_);
v___x_508_ = v___x_498_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
lean_dec_ref(v_inst_492_);
v_a_511_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_518_ == 0)
{
v___x_513_ = v___x_495_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___x_495_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_a_511_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs_x3f___boxed(lean_object* v_00_u03b1_519_, lean_object* v_inst_520_, lean_object* v_key_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Near_Storage_readAs_x3f(v_00_u03b1_519_, v_inst_520_, v_key_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg(lean_object* v_inst_524_, lean_object* v_key_525_, lean_object* v_default_526_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_near_storage_read(v_key_525_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_546_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_546_ == 0)
{
v___x_531_ = v___x_528_;
v_isShared_532_ = v_isSharedCheck_546_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_546_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
if (lean_obj_tag(v_a_529_) == 0)
{
lean_object* v___x_534_; 
lean_dec_ref(v_inst_524_);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v_default_526_);
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_default_526_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
else
{
lean_object* v_val_536_; lean_object* v_decode_537_; lean_object* v___x_538_; 
v_val_536_ = lean_ctor_get(v_a_529_, 0);
lean_inc(v_val_536_);
lean_dec_ref_known(v_a_529_, 1);
v_decode_537_ = lean_ctor_get(v_inst_524_, 1);
lean_inc_ref(v_decode_537_);
lean_dec_ref(v_inst_524_);
v___x_538_ = lean_apply_1(v_decode_537_, v_val_536_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v___x_540_; 
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v_default_526_);
v___x_540_ = v___x_531_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_default_526_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
else
{
lean_object* v_val_542_; lean_object* v___x_544_; 
lean_dec(v_default_526_);
v_val_542_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_val_542_);
lean_dec_ref_known(v___x_538_, 1);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 0, v_val_542_);
v___x_544_ = v___x_531_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_val_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
else
{
lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_554_; 
lean_dec(v_default_526_);
lean_dec_ref(v_inst_524_);
v_a_547_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_554_ == 0)
{
v___x_549_ = v___x_528_;
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_528_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_554_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_552_; 
if (v_isShared_550_ == 0)
{
v___x_552_ = v___x_549_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_a_547_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___redArg___boxed(lean_object* v_inst_555_, lean_object* v_key_556_, lean_object* v_default_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = l_Near_Storage_readAs___redArg(v_inst_555_, v_key_556_, v_default_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs(lean_object* v_00_u03b1_560_, lean_object* v_inst_561_, lean_object* v_key_562_, lean_object* v_default_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = lean_near_storage_read(v_key_562_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_583_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_583_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_583_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_583_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
if (lean_obj_tag(v_a_566_) == 0)
{
lean_object* v___x_571_; 
lean_dec_ref(v_inst_561_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v_default_563_);
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_default_563_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
else
{
lean_object* v_val_573_; lean_object* v_decode_574_; lean_object* v___x_575_; 
v_val_573_ = lean_ctor_get(v_a_566_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v_a_566_, 1);
v_decode_574_ = lean_ctor_get(v_inst_561_, 1);
lean_inc_ref(v_decode_574_);
lean_dec_ref(v_inst_561_);
v___x_575_ = lean_apply_1(v_decode_574_, v_val_573_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v___x_577_; 
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v_default_563_);
v___x_577_ = v___x_568_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_default_563_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
else
{
lean_object* v_val_579_; lean_object* v___x_581_; 
lean_dec(v_default_563_);
v_val_579_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_val_579_);
lean_dec_ref_known(v___x_575_, 1);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v_val_579_);
v___x_581_ = v___x_568_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_val_579_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v_default_563_);
lean_dec_ref(v_inst_561_);
v_a_584_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_565_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_565_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_readAs___boxed(lean_object* v_00_u03b1_592_, lean_object* v_inst_593_, lean_object* v_key_594_, lean_object* v_default_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Near_Storage_readAs(v_00_u03b1_592_, v_inst_593_, v_key_594_, v_default_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg(lean_object* v_inst_598_, lean_object* v_key_599_, lean_object* v_value_600_){
_start:
{
lean_object* v_encode_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_encode_602_ = lean_ctor_get(v_inst_598_, 0);
lean_inc_ref(v_encode_602_);
lean_dec_ref(v_inst_598_);
v___x_603_ = lean_apply_1(v_encode_602_, v_value_600_);
v___x_604_ = lean_near_storage_write(v_key_599_, v___x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___redArg___boxed(lean_object* v_inst_605_, lean_object* v_key_606_, lean_object* v_value_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Near_Storage_writeAs___redArg(v_inst_605_, v_key_606_, v_value_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs(lean_object* v_00_u03b1_610_, lean_object* v_inst_611_, lean_object* v_key_612_, lean_object* v_value_613_){
_start:
{
lean_object* v_encode_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v_encode_615_ = lean_ctor_get(v_inst_611_, 0);
lean_inc_ref(v_encode_615_);
lean_dec_ref(v_inst_611_);
v___x_616_ = lean_apply_1(v_encode_615_, v_value_613_);
v___x_617_ = lean_near_storage_write(v_key_612_, v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_writeAs___boxed(lean_object* v_00_u03b1_618_, lean_object* v_inst_619_, lean_object* v_key_620_, lean_object* v_value_621_, lean_object* v_a_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Near_Storage_writeAs(v_00_u03b1_618_, v_inst_619_, v_key_620_, v_value_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_contains(lean_object* v_key_624_){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = lean_near_storage_has_key(v_key_624_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_contains___boxed(lean_object* v_key_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Near_Storage_contains(v_key_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_delete(lean_object* v_key_630_){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = lean_near_storage_remove(v_key_630_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_delete___boxed(lean_object* v_key_633_, lean_object* v_a_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Near_Storage_delete(v_key_633_);
return v_res_635_;
}
}
static lean_object* _init_l_Near_Storage_instReprKey_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_unsigned_to_nat(8u);
v___x_646_ = lean_nat_to_int(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l_Near_Storage_instReprKey_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__9, &l_Near_instReprNearToken_repr___redArg___closed__9_once, _init_l_Near_instReprNearToken_repr___redArg___closed__9);
v___x_648_ = lean_nat_to_int(v___x_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___redArg(lean_object* v_x_649_){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_650_ = ((lean_object*)(l_Near_Storage_instReprKey_repr___redArg___closed__3));
v___x_651_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__4, &l_Near_Storage_instReprKey_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__4);
v___x_652_ = l_String_quote(v_x_649_);
v___x_653_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
v___x_654_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_651_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = 0;
v___x_656_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_656_, 0, v___x_654_);
lean_ctor_set_uint8(v___x_656_, sizeof(void*)*1, v___x_655_);
v___x_657_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_650_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_659_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_659_);
lean_ctor_set(v___x_660_, 1, v___x_657_);
v___x_661_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_662_, 0, v___x_660_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
v___x_663_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_663_, 0, v___x_658_);
lean_ctor_set(v___x_663_, 1, v___x_662_);
v___x_664_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_664_, 0, v___x_663_);
lean_ctor_set_uint8(v___x_664_, sizeof(void*)*1, v___x_655_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr(lean_object* v_00_u03b1_665_, lean_object* v_inst_666_, lean_object* v_x_667_, lean_object* v_prec_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Near_Storage_instReprKey_repr___redArg(v_x_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey_repr___boxed(lean_object* v_00_u03b1_670_, lean_object* v_inst_671_, lean_object* v_x_672_, lean_object* v_prec_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Near_Storage_instReprKey_repr(v_00_u03b1_670_, v_inst_671_, v_x_672_, v_prec_673_);
lean_dec(v_prec_673_);
lean_dec_ref(v_inst_671_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey___redArg(lean_object* v_inst_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = lean_alloc_closure((void*)(l_Near_Storage_instReprKey_repr___boxed), 4, 2);
lean_closure_set(v___x_676_, 0, lean_box(0));
lean_closure_set(v___x_676_, 1, v_inst_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprKey(lean_object* v_00_u03b1_677_, lean_object* v_inst_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_closure((void*)(l_Near_Storage_instReprKey_repr___boxed), 4, 2);
lean_closure_set(v___x_679_, 0, lean_box(0));
lean_closure_set(v___x_679_, 1, v_inst_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg(lean_object* v_name_680_){
_start:
{
lean_inc_ref(v_name_680_);
return v_name_680_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___redArg___boxed(lean_object* v_name_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Near_Storage_Key_make___redArg(v_name_681_);
lean_dec_ref(v_name_681_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make(lean_object* v_00_u03b1_683_, lean_object* v_name_684_){
_start:
{
lean_inc_ref(v_name_684_);
return v_name_684_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_make___boxed(lean_object* v_00_u03b1_685_, lean_object* v_name_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Near_Storage_Key_make(v_00_u03b1_685_, v_name_686_);
lean_dec_ref(v_name_686_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg(lean_object* v_inst_688_, lean_object* v_key_689_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = lean_near_storage_read(v_key_689_);
if (lean_obj_tag(v___x_691_) == 0)
{
lean_object* v_a_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_706_; 
v_a_692_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_706_ == 0)
{
v___x_694_ = v___x_691_;
v_isShared_695_ = v_isSharedCheck_706_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_a_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_706_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
if (lean_obj_tag(v_a_692_) == 0)
{
lean_object* v___x_696_; lean_object* v___x_698_; 
lean_dec_ref(v_inst_688_);
v___x_696_ = lean_box(0);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_696_);
v___x_698_ = v___x_694_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
else
{
lean_object* v_val_700_; lean_object* v_decode_701_; lean_object* v___x_702_; lean_object* v___x_704_; 
v_val_700_ = lean_ctor_get(v_a_692_, 0);
lean_inc(v_val_700_);
lean_dec_ref_known(v_a_692_, 1);
v_decode_701_ = lean_ctor_get(v_inst_688_, 1);
lean_inc_ref(v_decode_701_);
lean_dec_ref(v_inst_688_);
v___x_702_ = lean_apply_1(v_decode_701_, v_val_700_);
if (v_isShared_695_ == 0)
{
lean_ctor_set(v___x_694_, 0, v___x_702_);
v___x_704_ = v___x_694_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
lean_dec_ref(v_inst_688_);
v_a_707_ = lean_ctor_get(v___x_691_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_691_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_691_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_691_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___redArg___boxed(lean_object* v_inst_715_, lean_object* v_key_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Near_Storage_Key_read_x3f___redArg(v_inst_715_, v_key_716_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f(lean_object* v_00_u03b1_719_, lean_object* v_inst_720_, lean_object* v_key_721_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = lean_near_storage_read(v_key_721_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_738_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_738_ == 0)
{
v___x_726_ = v___x_723_;
v_isShared_727_ = v_isSharedCheck_738_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_738_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
if (lean_obj_tag(v_a_724_) == 0)
{
lean_object* v___x_728_; lean_object* v___x_730_; 
lean_dec_ref(v_inst_720_);
v___x_728_ = lean_box(0);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_728_);
v___x_730_ = v___x_726_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_728_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
else
{
lean_object* v_val_732_; lean_object* v_decode_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
v_val_732_ = lean_ctor_get(v_a_724_, 0);
lean_inc(v_val_732_);
lean_dec_ref_known(v_a_724_, 1);
v_decode_733_ = lean_ctor_get(v_inst_720_, 1);
lean_inc_ref(v_decode_733_);
lean_dec_ref(v_inst_720_);
v___x_734_ = lean_apply_1(v_decode_733_, v_val_732_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 0, v___x_734_);
v___x_736_ = v___x_726_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec_ref(v_inst_720_);
v_a_739_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_723_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_723_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read_x3f___boxed(lean_object* v_00_u03b1_747_, lean_object* v_inst_748_, lean_object* v_key_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Near_Storage_Key_read_x3f(v_00_u03b1_747_, v_inst_748_, v_key_749_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg(lean_object* v_inst_752_, lean_object* v_key_753_, lean_object* v_default_754_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = lean_near_storage_read(v_key_753_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_774_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_774_ == 0)
{
v___x_759_ = v___x_756_;
v_isShared_760_ = v_isSharedCheck_774_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_756_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_774_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
if (lean_obj_tag(v_a_757_) == 0)
{
lean_object* v___x_762_; 
lean_dec_ref(v_inst_752_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v_default_754_);
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_default_754_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
else
{
lean_object* v_val_764_; lean_object* v_decode_765_; lean_object* v___x_766_; 
v_val_764_ = lean_ctor_get(v_a_757_, 0);
lean_inc(v_val_764_);
lean_dec_ref_known(v_a_757_, 1);
v_decode_765_ = lean_ctor_get(v_inst_752_, 1);
lean_inc_ref(v_decode_765_);
lean_dec_ref(v_inst_752_);
v___x_766_ = lean_apply_1(v_decode_765_, v_val_764_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v___x_768_; 
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v_default_754_);
v___x_768_ = v___x_759_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_default_754_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
else
{
lean_object* v_val_770_; lean_object* v___x_772_; 
lean_dec(v_default_754_);
v_val_770_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_val_770_);
lean_dec_ref_known(v___x_766_, 1);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v_val_770_);
v___x_772_ = v___x_759_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_val_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_default_754_);
lean_dec_ref(v_inst_752_);
v_a_775_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_756_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_756_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___redArg___boxed(lean_object* v_inst_783_, lean_object* v_key_784_, lean_object* v_default_785_, lean_object* v_a_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Near_Storage_Key_read___redArg(v_inst_783_, v_key_784_, v_default_785_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read(lean_object* v_00_u03b1_788_, lean_object* v_inst_789_, lean_object* v_key_790_, lean_object* v_default_791_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = lean_near_storage_read(v_key_790_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_811_; 
v_a_794_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_811_ == 0)
{
v___x_796_ = v___x_793_;
v_isShared_797_ = v_isSharedCheck_811_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_dec(v___x_793_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_811_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
if (lean_obj_tag(v_a_794_) == 0)
{
lean_object* v___x_799_; 
lean_dec_ref(v_inst_789_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v_default_791_);
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_default_791_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
else
{
lean_object* v_val_801_; lean_object* v_decode_802_; lean_object* v___x_803_; 
v_val_801_ = lean_ctor_get(v_a_794_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v_a_794_, 1);
v_decode_802_ = lean_ctor_get(v_inst_789_, 1);
lean_inc_ref(v_decode_802_);
lean_dec_ref(v_inst_789_);
v___x_803_ = lean_apply_1(v_decode_802_, v_val_801_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v___x_805_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v_default_791_);
v___x_805_ = v___x_796_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_default_791_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
else
{
lean_object* v_val_807_; lean_object* v___x_809_; 
lean_dec(v_default_791_);
v_val_807_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_val_807_);
lean_dec_ref_known(v___x_803_, 1);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v_val_807_);
v___x_809_ = v___x_796_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_val_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec(v_default_791_);
lean_dec_ref(v_inst_789_);
v_a_812_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_793_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_793_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_read___boxed(lean_object* v_00_u03b1_820_, lean_object* v_inst_821_, lean_object* v_key_822_, lean_object* v_default_823_, lean_object* v_a_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Near_Storage_Key_read(v_00_u03b1_820_, v_inst_821_, v_key_822_, v_default_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg(lean_object* v_inst_826_, lean_object* v_key_827_, lean_object* v_value_828_){
_start:
{
lean_object* v_encode_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_encode_830_ = lean_ctor_get(v_inst_826_, 0);
lean_inc_ref(v_encode_830_);
lean_dec_ref(v_inst_826_);
v___x_831_ = lean_apply_1(v_encode_830_, v_value_828_);
v___x_832_ = lean_near_storage_write(v_key_827_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___redArg___boxed(lean_object* v_inst_833_, lean_object* v_key_834_, lean_object* v_value_835_, lean_object* v_a_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Near_Storage_Key_write___redArg(v_inst_833_, v_key_834_, v_value_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write(lean_object* v_00_u03b1_838_, lean_object* v_inst_839_, lean_object* v_key_840_, lean_object* v_value_841_){
_start:
{
lean_object* v_encode_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_encode_843_ = lean_ctor_get(v_inst_839_, 0);
lean_inc_ref(v_encode_843_);
lean_dec_ref(v_inst_839_);
v___x_844_ = lean_apply_1(v_encode_843_, v_value_841_);
v___x_845_ = lean_near_storage_write(v_key_840_, v___x_844_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_write___boxed(lean_object* v_00_u03b1_846_, lean_object* v_inst_847_, lean_object* v_key_848_, lean_object* v_value_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Near_Storage_Key_write(v_00_u03b1_846_, v_inst_847_, v_key_848_, v_value_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg(lean_object* v_key_852_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = lean_near_storage_has_key(v_key_852_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___redArg___boxed(lean_object* v_key_855_, lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Near_Storage_Key_contains___redArg(v_key_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains(lean_object* v_00_u03b1_858_, lean_object* v_key_859_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = lean_near_storage_has_key(v_key_859_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_contains___boxed(lean_object* v_00_u03b1_862_, lean_object* v_key_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Near_Storage_Key_contains(v_00_u03b1_862_, v_key_863_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg(lean_object* v_key_866_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = lean_near_storage_remove(v_key_866_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___redArg___boxed(lean_object* v_key_869_, lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Near_Storage_Key_remove___redArg(v_key_869_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove(lean_object* v_00_u03b1_872_, lean_object* v_key_873_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = lean_near_storage_remove(v_key_873_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_remove___boxed(lean_object* v_00_u03b1_876_, lean_object* v_key_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Near_Storage_Key_remove(v_00_u03b1_876_, v_key_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg(lean_object* v_inst_880_, lean_object* v_key_881_, lean_object* v_f_882_){
_start:
{
lean_object* v___x_884_; 
lean_inc_ref(v_key_881_);
v___x_884_ = lean_near_storage_read(v_key_881_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_927_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_927_ == 0)
{
v___x_887_ = v___x_884_;
v_isShared_888_ = v_isSharedCheck_927_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_884_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_927_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
if (lean_obj_tag(v_a_885_) == 0)
{
lean_object* v___x_889_; lean_object* v___x_891_; 
lean_dec(v_f_882_);
lean_dec_ref(v_key_881_);
lean_dec_ref(v_inst_880_);
v___x_889_ = lean_box(0);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_891_ = v___x_887_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
else
{
lean_object* v_val_893_; lean_object* v_encode_894_; lean_object* v_decode_895_; lean_object* v___x_896_; 
v_val_893_ = lean_ctor_get(v_a_885_, 0);
lean_inc(v_val_893_);
lean_dec_ref_known(v_a_885_, 1);
v_encode_894_ = lean_ctor_get(v_inst_880_, 0);
lean_inc_ref(v_encode_894_);
v_decode_895_ = lean_ctor_get(v_inst_880_, 1);
lean_inc_ref(v_decode_895_);
lean_dec_ref(v_inst_880_);
v___x_896_ = lean_apply_1(v_decode_895_, v_val_893_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v___x_898_; 
lean_dec_ref(v_encode_894_);
lean_dec(v_f_882_);
lean_dec_ref(v_key_881_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_896_);
v___x_898_ = v___x_887_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
else
{
lean_object* v_val_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_926_; 
lean_del_object(v___x_887_);
v_val_900_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_926_ == 0)
{
v___x_902_ = v___x_896_;
v_isShared_903_ = v_isSharedCheck_926_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_val_900_);
lean_dec(v___x_896_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_926_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_904_ = lean_apply_1(v_f_882_, v_val_900_);
lean_inc(v___x_904_);
v___x_905_ = lean_apply_1(v_encode_894_, v___x_904_);
v___x_906_ = lean_near_storage_write(v_key_881_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_916_; 
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_916_ == 0)
{
lean_object* v_unused_917_; 
v_unused_917_ = lean_ctor_get(v___x_906_, 0);
lean_dec(v_unused_917_);
v___x_908_ = v___x_906_;
v_isShared_909_ = v_isSharedCheck_916_;
goto v_resetjp_907_;
}
else
{
lean_dec(v___x_906_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_916_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 0, v___x_904_);
v___x_911_ = v___x_902_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v___x_904_);
v___x_911_ = v_reuseFailAlloc_915_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_913_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 0, v___x_911_);
v___x_913_ = v___x_908_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v___x_904_);
lean_del_object(v___x_902_);
v_a_918_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_906_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_906_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
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
lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec(v_f_882_);
lean_dec_ref(v_key_881_);
lean_dec_ref(v_inst_880_);
v_a_928_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_884_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_884_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___redArg___boxed(lean_object* v_inst_936_, lean_object* v_key_937_, lean_object* v_f_938_, lean_object* v_a_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Near_Storage_Key_modify_x3f___redArg(v_inst_936_, v_key_937_, v_f_938_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f(lean_object* v_00_u03b1_941_, lean_object* v_inst_942_, lean_object* v_key_943_, lean_object* v_f_944_){
_start:
{
lean_object* v___x_946_; 
lean_inc_ref(v_key_943_);
v___x_946_ = lean_near_storage_read(v_key_943_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_989_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_989_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_989_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_989_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
if (lean_obj_tag(v_a_947_) == 0)
{
lean_object* v___x_951_; lean_object* v___x_953_; 
lean_dec(v_f_944_);
lean_dec_ref(v_key_943_);
lean_dec_ref(v_inst_942_);
v___x_951_ = lean_box(0);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_951_);
v___x_953_ = v___x_949_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v___x_951_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
else
{
lean_object* v_val_955_; lean_object* v_encode_956_; lean_object* v_decode_957_; lean_object* v___x_958_; 
v_val_955_ = lean_ctor_get(v_a_947_, 0);
lean_inc(v_val_955_);
lean_dec_ref_known(v_a_947_, 1);
v_encode_956_ = lean_ctor_get(v_inst_942_, 0);
lean_inc_ref(v_encode_956_);
v_decode_957_ = lean_ctor_get(v_inst_942_, 1);
lean_inc_ref(v_decode_957_);
lean_dec_ref(v_inst_942_);
v___x_958_ = lean_apply_1(v_decode_957_, v_val_955_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v___x_960_; 
lean_dec_ref(v_encode_956_);
lean_dec(v_f_944_);
lean_dec_ref(v_key_943_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_958_);
v___x_960_ = v___x_949_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v___x_958_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
else
{
lean_object* v_val_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_988_; 
lean_del_object(v___x_949_);
v_val_962_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_988_ == 0)
{
v___x_964_ = v___x_958_;
v_isShared_965_ = v_isSharedCheck_988_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_val_962_);
lean_dec(v___x_958_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_988_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = lean_apply_1(v_f_944_, v_val_962_);
lean_inc(v___x_966_);
v___x_967_ = lean_apply_1(v_encode_956_, v___x_966_);
v___x_968_ = lean_near_storage_write(v_key_943_, v___x_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_978_; 
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_978_ == 0)
{
lean_object* v_unused_979_; 
v_unused_979_ = lean_ctor_get(v___x_968_, 0);
lean_dec(v_unused_979_);
v___x_970_ = v___x_968_;
v_isShared_971_ = v_isSharedCheck_978_;
goto v_resetjp_969_;
}
else
{
lean_dec(v___x_968_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_978_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_966_);
v___x_973_ = v___x_964_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_966_);
v___x_973_ = v_reuseFailAlloc_977_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_975_; 
if (v_isShared_971_ == 0)
{
lean_ctor_set(v___x_970_, 0, v___x_973_);
v___x_975_ = v___x_970_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v___x_973_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
lean_dec(v___x_966_);
lean_del_object(v___x_964_);
v_a_980_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_968_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_968_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
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
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec(v_f_944_);
lean_dec_ref(v_key_943_);
lean_dec_ref(v_inst_942_);
v_a_990_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_946_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_946_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify_x3f___boxed(lean_object* v_00_u03b1_998_, lean_object* v_inst_999_, lean_object* v_key_1000_, lean_object* v_f_1001_, lean_object* v_a_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Near_Storage_Key_modify_x3f(v_00_u03b1_998_, v_inst_999_, v_key_1000_, v_f_1001_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg(lean_object* v_inst_1004_, lean_object* v_key_1005_, lean_object* v_default_1006_, lean_object* v_f_1007_){
_start:
{
lean_object* v___x_1009_; 
lean_inc_ref(v_key_1005_);
v___x_1009_ = lean_near_storage_read(v_key_1005_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v_a_1012_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
if (lean_obj_tag(v_a_1010_) == 0)
{
v_a_1012_ = v_default_1006_;
goto v___jp_1011_;
}
else
{
lean_object* v_val_1033_; lean_object* v_decode_1034_; lean_object* v___x_1035_; 
v_val_1033_ = lean_ctor_get(v_a_1010_, 0);
lean_inc(v_val_1033_);
lean_dec_ref_known(v_a_1010_, 1);
v_decode_1034_ = lean_ctor_get(v_inst_1004_, 1);
lean_inc_ref(v_decode_1034_);
v___x_1035_ = lean_apply_1(v_decode_1034_, v_val_1033_);
if (lean_obj_tag(v___x_1035_) == 0)
{
v_a_1012_ = v_default_1006_;
goto v___jp_1011_;
}
else
{
lean_object* v_val_1036_; 
lean_dec(v_default_1006_);
v_val_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_val_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v_a_1012_ = v_val_1036_;
goto v___jp_1011_;
}
}
v___jp_1011_:
{
lean_object* v_encode_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_encode_1013_ = lean_ctor_get(v_inst_1004_, 0);
lean_inc_ref(v_encode_1013_);
lean_dec_ref(v_inst_1004_);
v___x_1014_ = lean_apply_1(v_f_1007_, v_a_1012_);
lean_inc(v___x_1014_);
v___x_1015_ = lean_apply_1(v_encode_1013_, v___x_1014_);
v___x_1016_ = lean_near_storage_write(v_key_1005_, v___x_1015_);
if (lean_obj_tag(v___x_1016_) == 0)
{
lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1023_ == 0)
{
lean_object* v_unused_1024_; 
v_unused_1024_ = lean_ctor_get(v___x_1016_, 0);
lean_dec(v_unused_1024_);
v___x_1018_ = v___x_1016_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_dec(v___x_1016_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
lean_ctor_set(v___x_1018_, 0, v___x_1014_);
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1014_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec(v___x_1014_);
v_a_1025_ = lean_ctor_get(v___x_1016_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1016_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1016_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1016_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
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
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec(v_f_1007_);
lean_dec(v_default_1006_);
lean_dec_ref(v_key_1005_);
lean_dec_ref(v_inst_1004_);
v_a_1037_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1009_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1009_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___redArg___boxed(lean_object* v_inst_1045_, lean_object* v_key_1046_, lean_object* v_default_1047_, lean_object* v_f_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Near_Storage_Key_modify___redArg(v_inst_1045_, v_key_1046_, v_default_1047_, v_f_1048_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify(lean_object* v_00_u03b1_1051_, lean_object* v_inst_1052_, lean_object* v_key_1053_, lean_object* v_default_1054_, lean_object* v_f_1055_){
_start:
{
lean_object* v_a_1058_; lean_object* v___x_1079_; 
lean_inc_ref(v_key_1053_);
v___x_1079_ = lean_near_storage_read(v_key_1053_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1079_, 1);
if (lean_obj_tag(v_a_1080_) == 0)
{
v_a_1058_ = v_default_1054_;
goto v___jp_1057_;
}
else
{
lean_object* v_val_1081_; lean_object* v_decode_1082_; lean_object* v___x_1083_; 
v_val_1081_ = lean_ctor_get(v_a_1080_, 0);
lean_inc(v_val_1081_);
lean_dec_ref_known(v_a_1080_, 1);
v_decode_1082_ = lean_ctor_get(v_inst_1052_, 1);
lean_inc_ref(v_decode_1082_);
v___x_1083_ = lean_apply_1(v_decode_1082_, v_val_1081_);
if (lean_obj_tag(v___x_1083_) == 0)
{
v_a_1058_ = v_default_1054_;
goto v___jp_1057_;
}
else
{
lean_object* v_val_1084_; 
lean_dec(v_default_1054_);
v_val_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_val_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v_a_1058_ = v_val_1084_;
goto v___jp_1057_;
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec(v_f_1055_);
lean_dec(v_default_1054_);
lean_dec_ref(v_key_1053_);
lean_dec_ref(v_inst_1052_);
v_a_1085_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___x_1079_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1079_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
v___jp_1057_:
{
lean_object* v_encode_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_encode_1059_ = lean_ctor_get(v_inst_1052_, 0);
lean_inc_ref(v_encode_1059_);
lean_dec_ref(v_inst_1052_);
v___x_1060_ = lean_apply_1(v_f_1055_, v_a_1058_);
lean_inc(v___x_1060_);
v___x_1061_ = lean_apply_1(v_encode_1059_, v___x_1060_);
v___x_1062_ = lean_near_storage_write(v_key_1053_, v___x_1061_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; 
v_unused_1070_ = lean_ctor_get(v___x_1062_, 0);
lean_dec(v_unused_1070_);
v___x_1064_ = v___x_1062_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_dec(v___x_1062_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
lean_ctor_set(v___x_1064_, 0, v___x_1060_);
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_1060_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec(v___x_1060_);
v_a_1071_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1062_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1062_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Key_modify___boxed(lean_object* v_00_u03b1_1093_, lean_object* v_inst_1094_, lean_object* v_key_1095_, lean_object* v_default_1096_, lean_object* v_f_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Near_Storage_Key_modify(v_00_u03b1_1093_, v_inst_1094_, v_key_1095_, v_default_1096_, v_f_1097_);
return v_res_1099_;
}
}
static lean_object* _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = lean_unsigned_to_nat(7u);
v___x_1110_ = lean_nat_to_int(v___x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___redArg(lean_object* v_x_1111_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1112_ = ((lean_object*)(l_Near_Storage_instReprSlot_repr___redArg___closed__3));
v___x_1113_ = lean_obj_once(&l_Near_Storage_instReprSlot_repr___redArg___closed__4, &l_Near_Storage_instReprSlot_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4);
v___x_1114_ = l_Near_Storage_instReprKey_repr___redArg(v_x_1111_);
v___x_1115_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = 0;
v___x_1117_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1117_, 0, v___x_1115_);
lean_ctor_set_uint8(v___x_1117_, sizeof(void*)*1, v___x_1116_);
v___x_1118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1112_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_1120_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_1121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
lean_ctor_set(v___x_1121_, 1, v___x_1118_);
v___x_1122_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_1123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1121_);
lean_ctor_set(v___x_1123_, 1, v___x_1122_);
v___x_1124_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1119_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
lean_ctor_set_uint8(v___x_1125_, sizeof(void*)*1, v___x_1116_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr(lean_object* v_00_u03b1_1126_, lean_object* v_inst_1127_, lean_object* v_x_1128_, lean_object* v_prec_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Near_Storage_instReprSlot_repr___redArg(v_x_1128_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot_repr___boxed(lean_object* v_00_u03b1_1131_, lean_object* v_inst_1132_, lean_object* v_x_1133_, lean_object* v_prec_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Near_Storage_instReprSlot_repr(v_00_u03b1_1131_, v_inst_1132_, v_x_1133_, v_prec_1134_);
lean_dec(v_prec_1134_);
lean_dec_ref(v_inst_1132_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot___redArg(lean_object* v_inst_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_alloc_closure((void*)(l_Near_Storage_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_1137_, 0, lean_box(0));
lean_closure_set(v___x_1137_, 1, v_inst_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprSlot(lean_object* v_00_u03b1_1138_, lean_object* v_inst_1139_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = lean_alloc_closure((void*)(l_Near_Storage_instReprSlot_repr___boxed), 4, 2);
lean_closure_set(v___x_1140_, 0, lean_box(0));
lean_closure_set(v___x_1140_, 1, v_inst_1139_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg(lean_object* v_name_1141_){
_start:
{
lean_inc_ref(v_name_1141_);
return v_name_1141_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___redArg___boxed(lean_object* v_name_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Near_Storage_Slot_make___redArg(v_name_1142_);
lean_dec_ref(v_name_1142_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make(lean_object* v_00_u03b1_1144_, lean_object* v_name_1145_){
_start:
{
lean_inc_ref(v_name_1145_);
return v_name_1145_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_make___boxed(lean_object* v_00_u03b1_1146_, lean_object* v_name_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Near_Storage_Slot_make(v_00_u03b1_1146_, v_name_1147_);
lean_dec_ref(v_name_1147_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg(lean_object* v_inst_1149_, lean_object* v_slot_1150_){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = lean_near_storage_read(v_slot_1150_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1167_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1155_ = v___x_1152_;
v_isShared_1156_ = v_isSharedCheck_1167_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1152_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1167_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
if (lean_obj_tag(v_a_1153_) == 0)
{
lean_object* v___x_1157_; lean_object* v___x_1159_; 
lean_dec_ref(v_inst_1149_);
v___x_1157_ = lean_box(0);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1157_);
v___x_1159_ = v___x_1155_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1157_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
else
{
lean_object* v_val_1161_; lean_object* v_decode_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v_val_1161_ = lean_ctor_get(v_a_1153_, 0);
lean_inc(v_val_1161_);
lean_dec_ref_known(v_a_1153_, 1);
v_decode_1162_ = lean_ctor_get(v_inst_1149_, 1);
lean_inc_ref(v_decode_1162_);
lean_dec_ref(v_inst_1149_);
v___x_1163_ = lean_apply_1(v_decode_1162_, v_val_1161_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 0, v___x_1163_);
v___x_1165_ = v___x_1155_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_dec_ref(v_inst_1149_);
v_a_1168_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1152_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1152_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___redArg___boxed(lean_object* v_inst_1176_, lean_object* v_slot_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Near_Storage_Slot_read_x3f___redArg(v_inst_1176_, v_slot_1177_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f(lean_object* v_00_u03b1_1180_, lean_object* v_inst_1181_, lean_object* v_slot_1182_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_near_storage_read(v_slot_1182_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1199_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1187_ = v___x_1184_;
v_isShared_1188_ = v_isSharedCheck_1199_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1184_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1199_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
if (lean_obj_tag(v_a_1185_) == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1191_; 
lean_dec_ref(v_inst_1181_);
v___x_1189_ = lean_box(0);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1189_);
v___x_1191_ = v___x_1187_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v___x_1189_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
else
{
lean_object* v_val_1193_; lean_object* v_decode_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v_val_1193_ = lean_ctor_get(v_a_1185_, 0);
lean_inc(v_val_1193_);
lean_dec_ref_known(v_a_1185_, 1);
v_decode_1194_ = lean_ctor_get(v_inst_1181_, 1);
lean_inc_ref(v_decode_1194_);
lean_dec_ref(v_inst_1181_);
v___x_1195_ = lean_apply_1(v_decode_1194_, v_val_1193_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1195_);
v___x_1197_ = v___x_1187_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
lean_dec_ref(v_inst_1181_);
v_a_1200_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v___x_1184_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v___x_1184_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read_x3f___boxed(lean_object* v_00_u03b1_1208_, lean_object* v_inst_1209_, lean_object* v_slot_1210_, lean_object* v_a_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_Near_Storage_Slot_read_x3f(v_00_u03b1_1208_, v_inst_1209_, v_slot_1210_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg(lean_object* v_inst_1213_, lean_object* v_slot_1214_, lean_object* v_default_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = lean_near_storage_read(v_slot_1214_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1235_; 
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1235_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1235_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
if (lean_obj_tag(v_a_1218_) == 0)
{
lean_object* v___x_1223_; 
lean_dec_ref(v_inst_1213_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v_default_1215_);
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_default_1215_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
else
{
lean_object* v_val_1225_; lean_object* v_decode_1226_; lean_object* v___x_1227_; 
v_val_1225_ = lean_ctor_get(v_a_1218_, 0);
lean_inc(v_val_1225_);
lean_dec_ref_known(v_a_1218_, 1);
v_decode_1226_ = lean_ctor_get(v_inst_1213_, 1);
lean_inc_ref(v_decode_1226_);
lean_dec_ref(v_inst_1213_);
v___x_1227_ = lean_apply_1(v_decode_1226_, v_val_1225_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v___x_1229_; 
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v_default_1215_);
v___x_1229_ = v___x_1220_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_default_1215_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
else
{
lean_object* v_val_1231_; lean_object* v___x_1233_; 
lean_dec(v_default_1215_);
v_val_1231_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_val_1231_);
lean_dec_ref_known(v___x_1227_, 1);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v_val_1231_);
v___x_1233_ = v___x_1220_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_val_1231_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec(v_default_1215_);
lean_dec_ref(v_inst_1213_);
v_a_1236_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1217_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1217_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___redArg___boxed(lean_object* v_inst_1244_, lean_object* v_slot_1245_, lean_object* v_default_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Near_Storage_Slot_read___redArg(v_inst_1244_, v_slot_1245_, v_default_1246_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read(lean_object* v_00_u03b1_1249_, lean_object* v_inst_1250_, lean_object* v_slot_1251_, lean_object* v_default_1252_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = lean_near_storage_read(v_slot_1251_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1272_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1257_ = v___x_1254_;
v_isShared_1258_ = v_isSharedCheck_1272_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1254_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1272_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
if (lean_obj_tag(v_a_1255_) == 0)
{
lean_object* v___x_1260_; 
lean_dec_ref(v_inst_1250_);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v_default_1252_);
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_default_1252_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
else
{
lean_object* v_val_1262_; lean_object* v_decode_1263_; lean_object* v___x_1264_; 
v_val_1262_ = lean_ctor_get(v_a_1255_, 0);
lean_inc(v_val_1262_);
lean_dec_ref_known(v_a_1255_, 1);
v_decode_1263_ = lean_ctor_get(v_inst_1250_, 1);
lean_inc_ref(v_decode_1263_);
lean_dec_ref(v_inst_1250_);
v___x_1264_ = lean_apply_1(v_decode_1263_, v_val_1262_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v___x_1266_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v_default_1252_);
v___x_1266_ = v___x_1257_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_default_1252_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
else
{
lean_object* v_val_1268_; lean_object* v___x_1270_; 
lean_dec(v_default_1252_);
v_val_1268_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_val_1268_);
lean_dec_ref_known(v___x_1264_, 1);
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 0, v_val_1268_);
v___x_1270_ = v___x_1257_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_val_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
else
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
lean_dec(v_default_1252_);
lean_dec_ref(v_inst_1250_);
v_a_1273_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1254_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1254_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_read___boxed(lean_object* v_00_u03b1_1281_, lean_object* v_inst_1282_, lean_object* v_slot_1283_, lean_object* v_default_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Near_Storage_Slot_read(v_00_u03b1_1281_, v_inst_1282_, v_slot_1283_, v_default_1284_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg(lean_object* v_inst_1287_, lean_object* v_slot_1288_, lean_object* v_value_1289_){
_start:
{
lean_object* v_encode_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_encode_1291_ = lean_ctor_get(v_inst_1287_, 0);
lean_inc_ref(v_encode_1291_);
lean_dec_ref(v_inst_1287_);
v___x_1292_ = lean_apply_1(v_encode_1291_, v_value_1289_);
v___x_1293_ = lean_near_storage_write(v_slot_1288_, v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___redArg___boxed(lean_object* v_inst_1294_, lean_object* v_slot_1295_, lean_object* v_value_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Near_Storage_Slot_write___redArg(v_inst_1294_, v_slot_1295_, v_value_1296_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write(lean_object* v_00_u03b1_1299_, lean_object* v_inst_1300_, lean_object* v_slot_1301_, lean_object* v_value_1302_){
_start:
{
lean_object* v_encode_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_encode_1304_ = lean_ctor_get(v_inst_1300_, 0);
lean_inc_ref(v_encode_1304_);
lean_dec_ref(v_inst_1300_);
v___x_1305_ = lean_apply_1(v_encode_1304_, v_value_1302_);
v___x_1306_ = lean_near_storage_write(v_slot_1301_, v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_write___boxed(lean_object* v_00_u03b1_1307_, lean_object* v_inst_1308_, lean_object* v_slot_1309_, lean_object* v_value_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Near_Storage_Slot_write(v_00_u03b1_1307_, v_inst_1308_, v_slot_1309_, v_value_1310_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg(lean_object* v_slot_1313_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_near_storage_has_key(v_slot_1313_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___redArg___boxed(lean_object* v_slot_1316_, lean_object* v_a_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Near_Storage_Slot_contains___redArg(v_slot_1316_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains(lean_object* v_00_u03b1_1319_, lean_object* v_slot_1320_){
_start:
{
lean_object* v___x_1322_; 
v___x_1322_ = lean_near_storage_has_key(v_slot_1320_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_contains___boxed(lean_object* v_00_u03b1_1323_, lean_object* v_slot_1324_, lean_object* v_a_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Near_Storage_Slot_contains(v_00_u03b1_1323_, v_slot_1324_);
return v_res_1326_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg(lean_object* v_slot_1327_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_near_storage_remove(v_slot_1327_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___redArg___boxed(lean_object* v_slot_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Near_Storage_Slot_remove___redArg(v_slot_1330_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove(lean_object* v_00_u03b1_1333_, lean_object* v_slot_1334_){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_near_storage_remove(v_slot_1334_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_remove___boxed(lean_object* v_00_u03b1_1337_, lean_object* v_slot_1338_, lean_object* v_a_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Near_Storage_Slot_remove(v_00_u03b1_1337_, v_slot_1338_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg(lean_object* v_inst_1341_, lean_object* v_slot_1342_, lean_object* v_f_1343_){
_start:
{
lean_object* v___x_1345_; 
lean_inc_ref(v_slot_1342_);
v___x_1345_ = lean_near_storage_read(v_slot_1342_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1388_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1348_ = v___x_1345_;
v_isShared_1349_ = v_isSharedCheck_1388_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1345_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1388_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
if (lean_obj_tag(v_a_1346_) == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1352_; 
lean_dec(v_f_1343_);
lean_dec_ref(v_slot_1342_);
lean_dec_ref(v_inst_1341_);
v___x_1350_ = lean_box(0);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1350_);
v___x_1352_ = v___x_1348_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
else
{
lean_object* v_val_1354_; lean_object* v_encode_1355_; lean_object* v_decode_1356_; lean_object* v___x_1357_; 
v_val_1354_ = lean_ctor_get(v_a_1346_, 0);
lean_inc(v_val_1354_);
lean_dec_ref_known(v_a_1346_, 1);
v_encode_1355_ = lean_ctor_get(v_inst_1341_, 0);
lean_inc_ref(v_encode_1355_);
v_decode_1356_ = lean_ctor_get(v_inst_1341_, 1);
lean_inc_ref(v_decode_1356_);
lean_dec_ref(v_inst_1341_);
v___x_1357_ = lean_apply_1(v_decode_1356_, v_val_1354_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v___x_1359_; 
lean_dec_ref(v_encode_1355_);
lean_dec(v_f_1343_);
lean_dec_ref(v_slot_1342_);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1357_);
v___x_1359_ = v___x_1348_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
else
{
lean_object* v_val_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1387_; 
lean_del_object(v___x_1348_);
v_val_1361_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1363_ = v___x_1357_;
v_isShared_1364_ = v_isSharedCheck_1387_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_val_1361_);
lean_dec(v___x_1357_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1387_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_apply_1(v_f_1343_, v_val_1361_);
lean_inc(v___x_1365_);
v___x_1366_ = lean_apply_1(v_encode_1355_, v___x_1365_);
v___x_1367_ = lean_near_storage_write(v_slot_1342_, v___x_1366_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1377_; 
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; 
v_unused_1378_ = lean_ctor_get(v___x_1367_, 0);
lean_dec(v_unused_1378_);
v___x_1369_ = v___x_1367_;
v_isShared_1370_ = v_isSharedCheck_1377_;
goto v_resetjp_1368_;
}
else
{
lean_dec(v___x_1367_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1377_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 0, v___x_1365_);
v___x_1372_ = v___x_1363_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v___x_1365_);
v___x_1372_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
lean_object* v___x_1374_; 
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1372_);
v___x_1374_ = v___x_1369_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1372_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
}
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_dec(v___x_1365_);
lean_del_object(v___x_1363_);
v_a_1379_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1367_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1367_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
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
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec(v_f_1343_);
lean_dec_ref(v_slot_1342_);
lean_dec_ref(v_inst_1341_);
v_a_1389_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1345_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1345_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___redArg___boxed(lean_object* v_inst_1397_, lean_object* v_slot_1398_, lean_object* v_f_1399_, lean_object* v_a_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Near_Storage_Slot_modify_x3f___redArg(v_inst_1397_, v_slot_1398_, v_f_1399_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f(lean_object* v_00_u03b1_1402_, lean_object* v_inst_1403_, lean_object* v_slot_1404_, lean_object* v_f_1405_){
_start:
{
lean_object* v___x_1407_; 
lean_inc_ref(v_slot_1404_);
v___x_1407_ = lean_near_storage_read(v_slot_1404_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1450_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1410_ = v___x_1407_;
v_isShared_1411_ = v_isSharedCheck_1450_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1407_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1450_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
if (lean_obj_tag(v_a_1408_) == 0)
{
lean_object* v___x_1412_; lean_object* v___x_1414_; 
lean_dec(v_f_1405_);
lean_dec_ref(v_slot_1404_);
lean_dec_ref(v_inst_1403_);
v___x_1412_ = lean_box(0);
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 0, v___x_1412_);
v___x_1414_ = v___x_1410_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
else
{
lean_object* v_val_1416_; lean_object* v_encode_1417_; lean_object* v_decode_1418_; lean_object* v___x_1419_; 
v_val_1416_ = lean_ctor_get(v_a_1408_, 0);
lean_inc(v_val_1416_);
lean_dec_ref_known(v_a_1408_, 1);
v_encode_1417_ = lean_ctor_get(v_inst_1403_, 0);
lean_inc_ref(v_encode_1417_);
v_decode_1418_ = lean_ctor_get(v_inst_1403_, 1);
lean_inc_ref(v_decode_1418_);
lean_dec_ref(v_inst_1403_);
v___x_1419_ = lean_apply_1(v_decode_1418_, v_val_1416_);
if (lean_obj_tag(v___x_1419_) == 0)
{
lean_object* v___x_1421_; 
lean_dec_ref(v_encode_1417_);
lean_dec(v_f_1405_);
lean_dec_ref(v_slot_1404_);
if (v_isShared_1411_ == 0)
{
lean_ctor_set(v___x_1410_, 0, v___x_1419_);
v___x_1421_ = v___x_1410_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
return v___x_1421_;
}
}
else
{
lean_object* v_val_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1449_; 
lean_del_object(v___x_1410_);
v_val_1423_ = lean_ctor_get(v___x_1419_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1419_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1425_ = v___x_1419_;
v_isShared_1426_ = v_isSharedCheck_1449_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_val_1423_);
lean_dec(v___x_1419_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1449_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1427_ = lean_apply_1(v_f_1405_, v_val_1423_);
lean_inc(v___x_1427_);
v___x_1428_ = lean_apply_1(v_encode_1417_, v___x_1427_);
v___x_1429_ = lean_near_storage_write(v_slot_1404_, v___x_1428_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1439_; 
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1439_ == 0)
{
lean_object* v_unused_1440_; 
v_unused_1440_ = lean_ctor_get(v___x_1429_, 0);
lean_dec(v_unused_1440_);
v___x_1431_ = v___x_1429_;
v_isShared_1432_ = v_isSharedCheck_1439_;
goto v_resetjp_1430_;
}
else
{
lean_dec(v___x_1429_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1439_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1434_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1427_);
v___x_1434_ = v___x_1425_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1427_);
v___x_1434_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1436_; 
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1434_);
v___x_1436_ = v___x_1431_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1434_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec(v___x_1427_);
lean_del_object(v___x_1425_);
v_a_1441_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1429_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1429_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
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
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec(v_f_1405_);
lean_dec_ref(v_slot_1404_);
lean_dec_ref(v_inst_1403_);
v_a_1451_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1407_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1407_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify_x3f___boxed(lean_object* v_00_u03b1_1459_, lean_object* v_inst_1460_, lean_object* v_slot_1461_, lean_object* v_f_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Near_Storage_Slot_modify_x3f(v_00_u03b1_1459_, v_inst_1460_, v_slot_1461_, v_f_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg(lean_object* v_inst_1465_, lean_object* v_slot_1466_, lean_object* v_default_1467_, lean_object* v_f_1468_){
_start:
{
lean_object* v___x_1470_; 
lean_inc_ref(v_slot_1466_);
v___x_1470_ = lean_near_storage_read(v_slot_1466_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v_a_1471_; lean_object* v_a_1473_; 
v_a_1471_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1470_, 1);
if (lean_obj_tag(v_a_1471_) == 0)
{
v_a_1473_ = v_default_1467_;
goto v___jp_1472_;
}
else
{
lean_object* v_val_1494_; lean_object* v_decode_1495_; lean_object* v___x_1496_; 
v_val_1494_ = lean_ctor_get(v_a_1471_, 0);
lean_inc(v_val_1494_);
lean_dec_ref_known(v_a_1471_, 1);
v_decode_1495_ = lean_ctor_get(v_inst_1465_, 1);
lean_inc_ref(v_decode_1495_);
v___x_1496_ = lean_apply_1(v_decode_1495_, v_val_1494_);
if (lean_obj_tag(v___x_1496_) == 0)
{
v_a_1473_ = v_default_1467_;
goto v___jp_1472_;
}
else
{
lean_object* v_val_1497_; 
lean_dec(v_default_1467_);
v_val_1497_ = lean_ctor_get(v___x_1496_, 0);
lean_inc(v_val_1497_);
lean_dec_ref_known(v___x_1496_, 1);
v_a_1473_ = v_val_1497_;
goto v___jp_1472_;
}
}
v___jp_1472_:
{
lean_object* v_encode_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_encode_1474_ = lean_ctor_get(v_inst_1465_, 0);
lean_inc_ref(v_encode_1474_);
lean_dec_ref(v_inst_1465_);
v___x_1475_ = lean_apply_1(v_f_1468_, v_a_1473_);
lean_inc(v___x_1475_);
v___x_1476_ = lean_apply_1(v_encode_1474_, v___x_1475_);
v___x_1477_ = lean_near_storage_write(v_slot_1466_, v___x_1476_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1484_; 
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v___x_1477_, 0);
lean_dec(v_unused_1485_);
v___x_1479_ = v___x_1477_;
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
else
{
lean_dec(v___x_1477_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1484_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1482_; 
if (v_isShared_1480_ == 0)
{
lean_ctor_set(v___x_1479_, 0, v___x_1475_);
v___x_1482_ = v___x_1479_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___x_1475_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec(v___x_1475_);
v_a_1486_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1477_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1477_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec(v_f_1468_);
lean_dec(v_default_1467_);
lean_dec_ref(v_slot_1466_);
lean_dec_ref(v_inst_1465_);
v_a_1498_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1470_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1470_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___redArg___boxed(lean_object* v_inst_1506_, lean_object* v_slot_1507_, lean_object* v_default_1508_, lean_object* v_f_1509_, lean_object* v_a_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Near_Storage_Slot_modify___redArg(v_inst_1506_, v_slot_1507_, v_default_1508_, v_f_1509_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify(lean_object* v_00_u03b1_1512_, lean_object* v_inst_1513_, lean_object* v_slot_1514_, lean_object* v_default_1515_, lean_object* v_f_1516_){
_start:
{
lean_object* v_a_1519_; lean_object* v___x_1540_; 
lean_inc_ref(v_slot_1514_);
v___x_1540_ = lean_near_storage_read(v_slot_1514_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
if (lean_obj_tag(v_a_1541_) == 0)
{
v_a_1519_ = v_default_1515_;
goto v___jp_1518_;
}
else
{
lean_object* v_val_1542_; lean_object* v_decode_1543_; lean_object* v___x_1544_; 
v_val_1542_ = lean_ctor_get(v_a_1541_, 0);
lean_inc(v_val_1542_);
lean_dec_ref_known(v_a_1541_, 1);
v_decode_1543_ = lean_ctor_get(v_inst_1513_, 1);
lean_inc_ref(v_decode_1543_);
v___x_1544_ = lean_apply_1(v_decode_1543_, v_val_1542_);
if (lean_obj_tag(v___x_1544_) == 0)
{
v_a_1519_ = v_default_1515_;
goto v___jp_1518_;
}
else
{
lean_object* v_val_1545_; 
lean_dec(v_default_1515_);
v_val_1545_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_val_1545_);
lean_dec_ref_known(v___x_1544_, 1);
v_a_1519_ = v_val_1545_;
goto v___jp_1518_;
}
}
}
else
{
lean_object* v_a_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1553_; 
lean_dec(v_f_1516_);
lean_dec(v_default_1515_);
lean_dec_ref(v_slot_1514_);
lean_dec_ref(v_inst_1513_);
v_a_1546_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1548_ = v___x_1540_;
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_a_1546_);
lean_dec(v___x_1540_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1553_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1549_ == 0)
{
v___x_1551_ = v___x_1548_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v_a_1546_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
}
v___jp_1518_:
{
lean_object* v_encode_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_encode_1520_ = lean_ctor_get(v_inst_1513_, 0);
lean_inc_ref(v_encode_1520_);
lean_dec_ref(v_inst_1513_);
v___x_1521_ = lean_apply_1(v_f_1516_, v_a_1519_);
lean_inc(v___x_1521_);
v___x_1522_ = lean_apply_1(v_encode_1520_, v___x_1521_);
v___x_1523_ = lean_near_storage_write(v_slot_1514_, v___x_1522_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1530_ == 0)
{
lean_object* v_unused_1531_; 
v_unused_1531_ = lean_ctor_get(v___x_1523_, 0);
lean_dec(v_unused_1531_);
v___x_1525_ = v___x_1523_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_dec(v___x_1523_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1521_);
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1521_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec(v___x_1521_);
v_a_1532_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1523_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1523_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_Slot_modify___boxed(lean_object* v_00_u03b1_1554_, lean_object* v_inst_1555_, lean_object* v_slot_1556_, lean_object* v_default_1557_, lean_object* v_f_1558_, lean_object* v_a_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Near_Storage_Slot_modify(v_00_u03b1_1554_, v_inst_1555_, v_slot_1556_, v_default_1557_, v_f_1558_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___redArg(lean_object* v_x_1570_){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1571_ = ((lean_object*)(l_Near_Storage_instReprTypedMap_repr___redArg___closed__3));
v___x_1572_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__7, &l_Near_instReprNearToken_repr___redArg___closed__7_once, _init_l_Near_instReprNearToken_repr___redArg___closed__7);
v___x_1573_ = l_String_quote(v_x_1570_);
v___x_1574_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
v___x_1575_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1572_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
v___x_1576_ = 0;
v___x_1577_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set_uint8(v___x_1577_, sizeof(void*)*1, v___x_1576_);
v___x_1578_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1571_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_1580_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_1581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1580_);
lean_ctor_set(v___x_1581_, 1, v___x_1578_);
v___x_1582_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_1583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1581_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1579_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
v___x_1585_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
lean_ctor_set_uint8(v___x_1585_, sizeof(void*)*1, v___x_1576_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr(lean_object* v_00_u03b1_1586_, lean_object* v_inst_1587_, lean_object* v_x_1588_, lean_object* v_prec_1589_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Near_Storage_instReprTypedMap_repr___redArg(v_x_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap_repr___boxed(lean_object* v_00_u03b1_1591_, lean_object* v_inst_1592_, lean_object* v_x_1593_, lean_object* v_prec_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Near_Storage_instReprTypedMap_repr(v_00_u03b1_1591_, v_inst_1592_, v_x_1593_, v_prec_1594_);
lean_dec(v_prec_1594_);
lean_dec_ref(v_inst_1592_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap___redArg(lean_object* v_inst_1596_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = lean_alloc_closure((void*)(l_Near_Storage_instReprTypedMap_repr___boxed), 4, 2);
lean_closure_set(v___x_1597_, 0, lean_box(0));
lean_closure_set(v___x_1597_, 1, v_inst_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_instReprTypedMap(lean_object* v_00_u03b1_1598_, lean_object* v_inst_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_alloc_closure((void*)(l_Near_Storage_instReprTypedMap_repr___boxed), 4, 2);
lean_closure_set(v___x_1600_, 0, lean_box(0));
lean_closure_set(v___x_1600_, 1, v_inst_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg(lean_object* v_mapPrefix_1601_){
_start:
{
lean_inc_ref(v_mapPrefix_1601_);
return v_mapPrefix_1601_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___redArg___boxed(lean_object* v_mapPrefix_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Near_Storage_TypedMap_make___redArg(v_mapPrefix_1602_);
lean_dec_ref(v_mapPrefix_1602_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make(lean_object* v_00_u03b1_1604_, lean_object* v_mapPrefix_1605_){
_start:
{
lean_inc_ref(v_mapPrefix_1605_);
return v_mapPrefix_1605_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_make___boxed(lean_object* v_00_u03b1_1606_, lean_object* v_mapPrefix_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Near_Storage_TypedMap_make(v_00_u03b1_1606_, v_mapPrefix_1607_);
lean_dec_ref(v_mapPrefix_1607_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg(lean_object* v_m_1610_, lean_object* v_key_1611_){
_start:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1613_ = lean_string_append(v_m_1610_, v___x_1612_);
v___x_1614_ = lean_string_append(v___x_1613_, v_key_1611_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___redArg___boxed(lean_object* v_m_1615_, lean_object* v_key_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Near_Storage_TypedMap_storageKey___redArg(v_m_1615_, v_key_1616_);
lean_dec_ref(v_key_1616_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey(lean_object* v_00_u03b1_1618_, lean_object* v_m_1619_, lean_object* v_key_1620_){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1622_ = lean_string_append(v_m_1619_, v___x_1621_);
v___x_1623_ = lean_string_append(v___x_1622_, v_key_1620_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_storageKey___boxed(lean_object* v_00_u03b1_1624_, lean_object* v_m_1625_, lean_object* v_key_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Near_Storage_TypedMap_storageKey(v_00_u03b1_1624_, v_m_1625_, v_key_1626_);
lean_dec_ref(v_key_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg(lean_object* v_inst_1628_, lean_object* v_m_1629_, lean_object* v_key_1630_){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1632_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1633_ = lean_string_append(v_m_1629_, v___x_1632_);
v___x_1634_ = lean_string_append(v___x_1633_, v_key_1630_);
v___x_1635_ = lean_near_storage_read(v___x_1634_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1650_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1650_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1650_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
if (lean_obj_tag(v_a_1636_) == 0)
{
lean_object* v___x_1640_; lean_object* v___x_1642_; 
lean_dec_ref(v_inst_1628_);
v___x_1640_ = lean_box(0);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1640_);
v___x_1642_ = v___x_1638_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1640_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
else
{
lean_object* v_val_1644_; lean_object* v_decode_1645_; lean_object* v___x_1646_; lean_object* v___x_1648_; 
v_val_1644_ = lean_ctor_get(v_a_1636_, 0);
lean_inc(v_val_1644_);
lean_dec_ref_known(v_a_1636_, 1);
v_decode_1645_ = lean_ctor_get(v_inst_1628_, 1);
lean_inc_ref(v_decode_1645_);
lean_dec_ref(v_inst_1628_);
v___x_1646_ = lean_apply_1(v_decode_1645_, v_val_1644_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1646_);
v___x_1648_ = v___x_1638_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v___x_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
lean_dec_ref(v_inst_1628_);
v_a_1651_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1635_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1635_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___redArg___boxed(lean_object* v_inst_1659_, lean_object* v_m_1660_, lean_object* v_key_1661_, lean_object* v_a_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l_Near_Storage_TypedMap_get___redArg(v_inst_1659_, v_m_1660_, v_key_1661_);
lean_dec_ref(v_key_1661_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get(lean_object* v_00_u03b1_1664_, lean_object* v_inst_1665_, lean_object* v_m_1666_, lean_object* v_key_1667_){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1669_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1670_ = lean_string_append(v_m_1666_, v___x_1669_);
v___x_1671_ = lean_string_append(v___x_1670_, v_key_1667_);
v___x_1672_ = lean_near_storage_read(v___x_1671_);
if (lean_obj_tag(v___x_1672_) == 0)
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1687_; 
v_a_1673_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1675_ = v___x_1672_;
v_isShared_1676_ = v_isSharedCheck_1687_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1672_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1687_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
if (lean_obj_tag(v_a_1673_) == 0)
{
lean_object* v___x_1677_; lean_object* v___x_1679_; 
lean_dec_ref(v_inst_1665_);
v___x_1677_ = lean_box(0);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1677_);
v___x_1679_ = v___x_1675_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
else
{
lean_object* v_val_1681_; lean_object* v_decode_1682_; lean_object* v___x_1683_; lean_object* v___x_1685_; 
v_val_1681_ = lean_ctor_get(v_a_1673_, 0);
lean_inc(v_val_1681_);
lean_dec_ref_known(v_a_1673_, 1);
v_decode_1682_ = lean_ctor_get(v_inst_1665_, 1);
lean_inc_ref(v_decode_1682_);
lean_dec_ref(v_inst_1665_);
v___x_1683_ = lean_apply_1(v_decode_1682_, v_val_1681_);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 0, v___x_1683_);
v___x_1685_ = v___x_1675_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1683_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_dec_ref(v_inst_1665_);
v_a_1688_ = lean_ctor_get(v___x_1672_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1672_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1672_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_get___boxed(lean_object* v_00_u03b1_1696_, lean_object* v_inst_1697_, lean_object* v_m_1698_, lean_object* v_key_1699_, lean_object* v_a_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l_Near_Storage_TypedMap_get(v_00_u03b1_1696_, v_inst_1697_, v_m_1698_, v_key_1699_);
lean_dec_ref(v_key_1699_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg(lean_object* v_inst_1702_, lean_object* v_m_1703_, lean_object* v_key_1704_, lean_object* v_default_1705_){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1707_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1708_ = lean_string_append(v_m_1703_, v___x_1707_);
v___x_1709_ = lean_string_append(v___x_1708_, v_key_1704_);
v___x_1710_ = lean_near_storage_read(v___x_1709_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1728_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1728_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1728_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
if (lean_obj_tag(v_a_1711_) == 0)
{
lean_object* v___x_1716_; 
lean_dec_ref(v_inst_1702_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v_default_1705_);
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_default_1705_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
else
{
lean_object* v_val_1718_; lean_object* v_decode_1719_; lean_object* v___x_1720_; 
v_val_1718_ = lean_ctor_get(v_a_1711_, 0);
lean_inc(v_val_1718_);
lean_dec_ref_known(v_a_1711_, 1);
v_decode_1719_ = lean_ctor_get(v_inst_1702_, 1);
lean_inc_ref(v_decode_1719_);
lean_dec_ref(v_inst_1702_);
v___x_1720_ = lean_apply_1(v_decode_1719_, v_val_1718_);
if (lean_obj_tag(v___x_1720_) == 0)
{
lean_object* v___x_1722_; 
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v_default_1705_);
v___x_1722_ = v___x_1713_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_default_1705_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
else
{
lean_object* v_val_1724_; lean_object* v___x_1726_; 
lean_dec(v_default_1705_);
v_val_1724_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_val_1724_);
lean_dec_ref_known(v___x_1720_, 1);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v_val_1724_);
v___x_1726_ = v___x_1713_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_val_1724_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v_default_1705_);
lean_dec_ref(v_inst_1702_);
v_a_1729_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1710_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1710_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___redArg___boxed(lean_object* v_inst_1737_, lean_object* v_m_1738_, lean_object* v_key_1739_, lean_object* v_default_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v_res_1742_; 
v_res_1742_ = l_Near_Storage_TypedMap_getOr___redArg(v_inst_1737_, v_m_1738_, v_key_1739_, v_default_1740_);
lean_dec_ref(v_key_1739_);
return v_res_1742_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr(lean_object* v_00_u03b1_1743_, lean_object* v_inst_1744_, lean_object* v_m_1745_, lean_object* v_key_1746_, lean_object* v_default_1747_){
_start:
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1749_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1750_ = lean_string_append(v_m_1745_, v___x_1749_);
v___x_1751_ = lean_string_append(v___x_1750_, v_key_1746_);
v___x_1752_ = lean_near_storage_read(v___x_1751_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1770_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1755_ = v___x_1752_;
v_isShared_1756_ = v_isSharedCheck_1770_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1752_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1770_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
if (lean_obj_tag(v_a_1753_) == 0)
{
lean_object* v___x_1758_; 
lean_dec_ref(v_inst_1744_);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v_default_1747_);
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_default_1747_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
else
{
lean_object* v_val_1760_; lean_object* v_decode_1761_; lean_object* v___x_1762_; 
v_val_1760_ = lean_ctor_get(v_a_1753_, 0);
lean_inc(v_val_1760_);
lean_dec_ref_known(v_a_1753_, 1);
v_decode_1761_ = lean_ctor_get(v_inst_1744_, 1);
lean_inc_ref(v_decode_1761_);
lean_dec_ref(v_inst_1744_);
v___x_1762_ = lean_apply_1(v_decode_1761_, v_val_1760_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v___x_1764_; 
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v_default_1747_);
v___x_1764_ = v___x_1755_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_default_1747_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
else
{
lean_object* v_val_1766_; lean_object* v___x_1768_; 
lean_dec(v_default_1747_);
v_val_1766_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_val_1766_);
lean_dec_ref_known(v___x_1762_, 1);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v_val_1766_);
v___x_1768_ = v___x_1755_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_val_1766_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec(v_default_1747_);
lean_dec_ref(v_inst_1744_);
v_a_1771_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1752_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1752_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
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
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_getOr___boxed(lean_object* v_00_u03b1_1779_, lean_object* v_inst_1780_, lean_object* v_m_1781_, lean_object* v_key_1782_, lean_object* v_default_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Near_Storage_TypedMap_getOr(v_00_u03b1_1779_, v_inst_1780_, v_m_1781_, v_key_1782_, v_default_1783_);
lean_dec_ref(v_key_1782_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg(lean_object* v_inst_1786_, lean_object* v_m_1787_, lean_object* v_key_1788_, lean_object* v_value_1789_){
_start:
{
lean_object* v_encode_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_encode_1791_ = lean_ctor_get(v_inst_1786_, 0);
lean_inc_ref(v_encode_1791_);
lean_dec_ref(v_inst_1786_);
v___x_1792_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1793_ = lean_string_append(v_m_1787_, v___x_1792_);
v___x_1794_ = lean_string_append(v___x_1793_, v_key_1788_);
v___x_1795_ = lean_apply_1(v_encode_1791_, v_value_1789_);
v___x_1796_ = lean_near_storage_write(v___x_1794_, v___x_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___redArg___boxed(lean_object* v_inst_1797_, lean_object* v_m_1798_, lean_object* v_key_1799_, lean_object* v_value_1800_, lean_object* v_a_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Near_Storage_TypedMap_set___redArg(v_inst_1797_, v_m_1798_, v_key_1799_, v_value_1800_);
lean_dec_ref(v_key_1799_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set(lean_object* v_00_u03b1_1803_, lean_object* v_inst_1804_, lean_object* v_m_1805_, lean_object* v_key_1806_, lean_object* v_value_1807_){
_start:
{
lean_object* v_encode_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_encode_1809_ = lean_ctor_get(v_inst_1804_, 0);
lean_inc_ref(v_encode_1809_);
lean_dec_ref(v_inst_1804_);
v___x_1810_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1811_ = lean_string_append(v_m_1805_, v___x_1810_);
v___x_1812_ = lean_string_append(v___x_1811_, v_key_1806_);
v___x_1813_ = lean_apply_1(v_encode_1809_, v_value_1807_);
v___x_1814_ = lean_near_storage_write(v___x_1812_, v___x_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_set___boxed(lean_object* v_00_u03b1_1815_, lean_object* v_inst_1816_, lean_object* v_m_1817_, lean_object* v_key_1818_, lean_object* v_value_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Near_Storage_TypedMap_set(v_00_u03b1_1815_, v_inst_1816_, v_m_1817_, v_key_1818_, v_value_1819_);
lean_dec_ref(v_key_1818_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg(lean_object* v_m_1822_, lean_object* v_key_1823_){
_start:
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
v___x_1825_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1826_ = lean_string_append(v_m_1822_, v___x_1825_);
v___x_1827_ = lean_string_append(v___x_1826_, v_key_1823_);
v___x_1828_ = lean_near_storage_has_key(v___x_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___redArg___boxed(lean_object* v_m_1829_, lean_object* v_key_1830_, lean_object* v_a_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Near_Storage_TypedMap_contains___redArg(v_m_1829_, v_key_1830_);
lean_dec_ref(v_key_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains(lean_object* v_00_u03b1_1833_, lean_object* v_m_1834_, lean_object* v_key_1835_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1837_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1838_ = lean_string_append(v_m_1834_, v___x_1837_);
v___x_1839_ = lean_string_append(v___x_1838_, v_key_1835_);
v___x_1840_ = lean_near_storage_has_key(v___x_1839_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_contains___boxed(lean_object* v_00_u03b1_1841_, lean_object* v_m_1842_, lean_object* v_key_1843_, lean_object* v_a_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l_Near_Storage_TypedMap_contains(v_00_u03b1_1841_, v_m_1842_, v_key_1843_);
lean_dec_ref(v_key_1843_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg(lean_object* v_m_1846_, lean_object* v_key_1847_){
_start:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1849_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1850_ = lean_string_append(v_m_1846_, v___x_1849_);
v___x_1851_ = lean_string_append(v___x_1850_, v_key_1847_);
v___x_1852_ = lean_near_storage_remove(v___x_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___redArg___boxed(lean_object* v_m_1853_, lean_object* v_key_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Near_Storage_TypedMap_remove___redArg(v_m_1853_, v_key_1854_);
lean_dec_ref(v_key_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove(lean_object* v_00_u03b1_1857_, lean_object* v_m_1858_, lean_object* v_key_1859_){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1861_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1862_ = lean_string_append(v_m_1858_, v___x_1861_);
v___x_1863_ = lean_string_append(v___x_1862_, v_key_1859_);
v___x_1864_ = lean_near_storage_remove(v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_remove___boxed(lean_object* v_00_u03b1_1865_, lean_object* v_m_1866_, lean_object* v_key_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Near_Storage_TypedMap_remove(v_00_u03b1_1865_, v_m_1866_, v_key_1867_);
lean_dec_ref(v_key_1867_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg(lean_object* v_inst_1870_, lean_object* v_m_1871_, lean_object* v_key_1872_, lean_object* v_default_1873_, lean_object* v_f_1874_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1876_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1877_ = lean_string_append(v_m_1871_, v___x_1876_);
v___x_1878_ = lean_string_append(v___x_1877_, v_key_1872_);
lean_inc_ref(v___x_1878_);
v___x_1879_ = lean_near_storage_read(v___x_1878_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v_a_1882_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc(v_a_1880_);
lean_dec_ref_known(v___x_1879_, 1);
if (lean_obj_tag(v_a_1880_) == 0)
{
v_a_1882_ = v_default_1873_;
goto v___jp_1881_;
}
else
{
lean_object* v_val_1903_; lean_object* v_decode_1904_; lean_object* v___x_1905_; 
v_val_1903_ = lean_ctor_get(v_a_1880_, 0);
lean_inc(v_val_1903_);
lean_dec_ref_known(v_a_1880_, 1);
v_decode_1904_ = lean_ctor_get(v_inst_1870_, 1);
lean_inc_ref(v_decode_1904_);
v___x_1905_ = lean_apply_1(v_decode_1904_, v_val_1903_);
if (lean_obj_tag(v___x_1905_) == 0)
{
v_a_1882_ = v_default_1873_;
goto v___jp_1881_;
}
else
{
lean_object* v_val_1906_; 
lean_dec(v_default_1873_);
v_val_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_val_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v_a_1882_ = v_val_1906_;
goto v___jp_1881_;
}
}
v___jp_1881_:
{
lean_object* v_encode_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v_encode_1883_ = lean_ctor_get(v_inst_1870_, 0);
lean_inc_ref(v_encode_1883_);
lean_dec_ref(v_inst_1870_);
v___x_1884_ = lean_apply_1(v_f_1874_, v_a_1882_);
lean_inc(v___x_1884_);
v___x_1885_ = lean_apply_1(v_encode_1883_, v___x_1884_);
v___x_1886_ = lean_near_storage_write(v___x_1878_, v___x_1885_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1893_ == 0)
{
lean_object* v_unused_1894_; 
v_unused_1894_ = lean_ctor_get(v___x_1886_, 0);
lean_dec(v_unused_1894_);
v___x_1888_ = v___x_1886_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_dec(v___x_1886_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v___x_1884_);
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v___x_1884_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec(v___x_1884_);
v_a_1895_ = lean_ctor_get(v___x_1886_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1886_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1886_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_dec_ref(v___x_1878_);
lean_dec(v_f_1874_);
lean_dec(v_default_1873_);
lean_dec_ref(v_inst_1870_);
v_a_1907_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1879_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1879_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___redArg___boxed(lean_object* v_inst_1915_, lean_object* v_m_1916_, lean_object* v_key_1917_, lean_object* v_default_1918_, lean_object* v_f_1919_, lean_object* v_a_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Near_Storage_TypedMap_modify___redArg(v_inst_1915_, v_m_1916_, v_key_1917_, v_default_1918_, v_f_1919_);
lean_dec_ref(v_key_1917_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify(lean_object* v_00_u03b1_1922_, lean_object* v_inst_1923_, lean_object* v_m_1924_, lean_object* v_key_1925_, lean_object* v_default_1926_, lean_object* v_f_1927_){
_start:
{
lean_object* v_a_1930_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1954_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
lean_inc_ref(v_m_1924_);
v___x_1955_ = lean_string_append(v_m_1924_, v___x_1954_);
v___x_1956_ = lean_string_append(v___x_1955_, v_key_1925_);
v___x_1957_ = lean_near_storage_read(v___x_1956_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
lean_inc(v_a_1958_);
lean_dec_ref_known(v___x_1957_, 1);
if (lean_obj_tag(v_a_1958_) == 0)
{
v_a_1930_ = v_default_1926_;
goto v___jp_1929_;
}
else
{
lean_object* v_val_1959_; lean_object* v_decode_1960_; lean_object* v___x_1961_; 
v_val_1959_ = lean_ctor_get(v_a_1958_, 0);
lean_inc(v_val_1959_);
lean_dec_ref_known(v_a_1958_, 1);
v_decode_1960_ = lean_ctor_get(v_inst_1923_, 1);
lean_inc_ref(v_decode_1960_);
v___x_1961_ = lean_apply_1(v_decode_1960_, v_val_1959_);
if (lean_obj_tag(v___x_1961_) == 0)
{
v_a_1930_ = v_default_1926_;
goto v___jp_1929_;
}
else
{
lean_object* v_val_1962_; 
lean_dec(v_default_1926_);
v_val_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_val_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v_a_1930_ = v_val_1962_;
goto v___jp_1929_;
}
}
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec(v_f_1927_);
lean_dec(v_default_1926_);
lean_dec_ref(v_m_1924_);
lean_dec_ref(v_inst_1923_);
v_a_1963_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1957_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1957_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
v___jp_1929_:
{
lean_object* v_encode_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; 
v_encode_1931_ = lean_ctor_get(v_inst_1923_, 0);
lean_inc_ref(v_encode_1931_);
lean_dec_ref(v_inst_1923_);
v___x_1932_ = lean_apply_1(v_f_1927_, v_a_1930_);
v___x_1933_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_1934_ = lean_string_append(v_m_1924_, v___x_1933_);
v___x_1935_ = lean_string_append(v___x_1934_, v_key_1925_);
lean_inc(v___x_1932_);
v___x_1936_ = lean_apply_1(v_encode_1931_, v___x_1932_);
v___x_1937_ = lean_near_storage_write(v___x_1935_, v___x_1936_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v___x_1939_; uint8_t v_isShared_1940_; uint8_t v_isSharedCheck_1944_; 
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1944_ == 0)
{
lean_object* v_unused_1945_; 
v_unused_1945_ = lean_ctor_get(v___x_1937_, 0);
lean_dec(v_unused_1945_);
v___x_1939_ = v___x_1937_;
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
else
{
lean_dec(v___x_1937_);
v___x_1939_ = lean_box(0);
v_isShared_1940_ = v_isSharedCheck_1944_;
goto v_resetjp_1938_;
}
v_resetjp_1938_:
{
lean_object* v___x_1942_; 
if (v_isShared_1940_ == 0)
{
lean_ctor_set(v___x_1939_, 0, v___x_1932_);
v___x_1942_ = v___x_1939_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1932_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec(v___x_1932_);
v_a_1946_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1937_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1937_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Storage_TypedMap_modify___boxed(lean_object* v_00_u03b1_1971_, lean_object* v_inst_1972_, lean_object* v_m_1973_, lean_object* v_key_1974_, lean_object* v_default_1975_, lean_object* v_f_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Near_Storage_TypedMap_modify(v_00_u03b1_1971_, v_inst_1972_, v_m_1973_, v_key_1974_, v_default_1975_, v_f_1976_);
lean_dec_ref(v_key_1974_);
return v_res_1978_;
}
}
static lean_object* _init_l_Near_Store_instReprLookupMap_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = lean_unsigned_to_nat(17u);
v___x_1989_ = lean_nat_to_int(v___x_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap_repr___redArg(lean_object* v_x_1990_){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_1991_ = ((lean_object*)(l_Near_Store_instReprLookupMap_repr___redArg___closed__3));
v___x_1992_ = lean_obj_once(&l_Near_Store_instReprLookupMap_repr___redArg___closed__4, &l_Near_Store_instReprLookupMap_repr___redArg___closed__4_once, _init_l_Near_Store_instReprLookupMap_repr___redArg___closed__4);
v___x_1993_ = l_String_quote(v_x_1990_);
v___x_1994_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
v___x_1995_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1992_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
v___x_1996_ = 0;
v___x_1997_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1997_, 0, v___x_1995_);
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*1, v___x_1996_);
v___x_1998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1991_);
lean_ctor_set(v___x_1998_, 1, v___x_1997_);
v___x_1999_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_2000_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_2001_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
lean_ctor_set(v___x_2001_, 1, v___x_1998_);
v___x_2002_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_2003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2001_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
v___x_2004_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_1999_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
v___x_2005_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2005_, 0, v___x_2004_);
lean_ctor_set_uint8(v___x_2005_, sizeof(void*)*1, v___x_1996_);
return v___x_2005_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap_repr(lean_object* v_00_u03b1_2006_, lean_object* v_inst_2007_, lean_object* v_x_2008_, lean_object* v_prec_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Near_Store_instReprLookupMap_repr___redArg(v_x_2008_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap_repr___boxed(lean_object* v_00_u03b1_2011_, lean_object* v_inst_2012_, lean_object* v_x_2013_, lean_object* v_prec_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Near_Store_instReprLookupMap_repr(v_00_u03b1_2011_, v_inst_2012_, v_x_2013_, v_prec_2014_);
lean_dec(v_prec_2014_);
lean_dec_ref(v_inst_2012_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap___redArg(lean_object* v_inst_2016_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_alloc_closure((void*)(l_Near_Store_instReprLookupMap_repr___boxed), 4, 2);
lean_closure_set(v___x_2017_, 0, lean_box(0));
lean_closure_set(v___x_2017_, 1, v_inst_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLookupMap(lean_object* v_00_u03b1_2018_, lean_object* v_inst_2019_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_alloc_closure((void*)(l_Near_Store_instReprLookupMap_repr___boxed), 4, 2);
lean_closure_set(v___x_2020_, 0, lean_box(0));
lean_closure_set(v___x_2020_, 1, v_inst_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new___redArg(lean_object* v_storagePrefix_2021_){
_start:
{
lean_inc_ref(v_storagePrefix_2021_);
return v_storagePrefix_2021_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new___redArg___boxed(lean_object* v_storagePrefix_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Near_Store_LookupMap_new___redArg(v_storagePrefix_2022_);
lean_dec_ref(v_storagePrefix_2022_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new(lean_object* v_00_u03b1_2024_, lean_object* v_storagePrefix_2025_){
_start:
{
lean_inc_ref(v_storagePrefix_2025_);
return v_storagePrefix_2025_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_new___boxed(lean_object* v_00_u03b1_2026_, lean_object* v_storagePrefix_2027_){
_start:
{
lean_object* v_res_2028_; 
v_res_2028_ = l_Near_Store_LookupMap_new(v_00_u03b1_2026_, v_storagePrefix_2027_);
lean_dec_ref(v_storagePrefix_2027_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make___redArg(lean_object* v_storagePrefix_2029_){
_start:
{
lean_inc_ref(v_storagePrefix_2029_);
return v_storagePrefix_2029_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make___redArg___boxed(lean_object* v_storagePrefix_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l_Near_Store_LookupMap_make___redArg(v_storagePrefix_2030_);
lean_dec_ref(v_storagePrefix_2030_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make(lean_object* v_00_u03b1_2032_, lean_object* v_storagePrefix_2033_){
_start:
{
lean_inc_ref(v_storagePrefix_2033_);
return v_storagePrefix_2033_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_make___boxed(lean_object* v_00_u03b1_2034_, lean_object* v_storagePrefix_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l_Near_Store_LookupMap_make(v_00_u03b1_2034_, v_storagePrefix_2035_);
lean_dec_ref(v_storagePrefix_2035_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey___redArg(lean_object* v_m_2037_, lean_object* v_key_2038_){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2040_ = lean_string_append(v_m_2037_, v___x_2039_);
v___x_2041_ = lean_string_append(v___x_2040_, v_key_2038_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey___redArg___boxed(lean_object* v_m_2042_, lean_object* v_key_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l_Near_Store_LookupMap_storageKey___redArg(v_m_2042_, v_key_2043_);
lean_dec_ref(v_key_2043_);
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey(lean_object* v_00_u03b1_2045_, lean_object* v_m_2046_, lean_object* v_key_2047_){
_start:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2048_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2049_ = lean_string_append(v_m_2046_, v___x_2048_);
v___x_2050_ = lean_string_append(v___x_2049_, v_key_2047_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_storageKey___boxed(lean_object* v_00_u03b1_2051_, lean_object* v_m_2052_, lean_object* v_key_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Near_Store_LookupMap_storageKey(v_00_u03b1_2051_, v_m_2052_, v_key_2053_);
lean_dec_ref(v_key_2053_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get___redArg(lean_object* v_inst_2055_, lean_object* v_m_2056_, lean_object* v_key_2057_){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2059_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2060_ = lean_string_append(v_m_2056_, v___x_2059_);
v___x_2061_ = lean_string_append(v___x_2060_, v_key_2057_);
v___x_2062_ = lean_near_storage_read(v___x_2061_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2077_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2065_ = v___x_2062_;
v_isShared_2066_ = v_isSharedCheck_2077_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2062_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2077_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
if (lean_obj_tag(v_a_2063_) == 0)
{
lean_object* v___x_2067_; lean_object* v___x_2069_; 
lean_dec_ref(v_inst_2055_);
v___x_2067_ = lean_box(0);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 0, v___x_2067_);
v___x_2069_ = v___x_2065_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
else
{
lean_object* v_val_2071_; lean_object* v_decode_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v_val_2071_ = lean_ctor_get(v_a_2063_, 0);
lean_inc(v_val_2071_);
lean_dec_ref_known(v_a_2063_, 1);
v_decode_2072_ = lean_ctor_get(v_inst_2055_, 1);
lean_inc_ref(v_decode_2072_);
lean_dec_ref(v_inst_2055_);
v___x_2073_ = lean_apply_1(v_decode_2072_, v_val_2071_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 0, v___x_2073_);
v___x_2075_ = v___x_2065_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_dec_ref(v_inst_2055_);
v_a_2078_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2062_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2062_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get___redArg___boxed(lean_object* v_inst_2086_, lean_object* v_m_2087_, lean_object* v_key_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Near_Store_LookupMap_get___redArg(v_inst_2086_, v_m_2087_, v_key_2088_);
lean_dec_ref(v_key_2088_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get(lean_object* v_00_u03b1_2091_, lean_object* v_inst_2092_, lean_object* v_m_2093_, lean_object* v_key_2094_){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2096_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2097_ = lean_string_append(v_m_2093_, v___x_2096_);
v___x_2098_ = lean_string_append(v___x_2097_, v_key_2094_);
v___x_2099_ = lean_near_storage_read(v___x_2098_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2114_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2114_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2114_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
if (lean_obj_tag(v_a_2100_) == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2106_; 
lean_dec_ref(v_inst_2092_);
v___x_2104_ = lean_box(0);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2104_);
v___x_2106_ = v___x_2102_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___x_2104_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
else
{
lean_object* v_val_2108_; lean_object* v_decode_2109_; lean_object* v___x_2110_; lean_object* v___x_2112_; 
v_val_2108_ = lean_ctor_get(v_a_2100_, 0);
lean_inc(v_val_2108_);
lean_dec_ref_known(v_a_2100_, 1);
v_decode_2109_ = lean_ctor_get(v_inst_2092_, 1);
lean_inc_ref(v_decode_2109_);
lean_dec_ref(v_inst_2092_);
v___x_2110_ = lean_apply_1(v_decode_2109_, v_val_2108_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2110_);
v___x_2112_ = v___x_2102_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2110_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
lean_dec_ref(v_inst_2092_);
v_a_2115_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2099_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2099_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_get___boxed(lean_object* v_00_u03b1_2123_, lean_object* v_inst_2124_, lean_object* v_m_2125_, lean_object* v_key_2126_, lean_object* v_a_2127_){
_start:
{
lean_object* v_res_2128_; 
v_res_2128_ = l_Near_Store_LookupMap_get(v_00_u03b1_2123_, v_inst_2124_, v_m_2125_, v_key_2126_);
lean_dec_ref(v_key_2126_);
return v_res_2128_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr___redArg(lean_object* v_inst_2129_, lean_object* v_m_2130_, lean_object* v_key_2131_, lean_object* v_default_2132_){
_start:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v___x_2134_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2135_ = lean_string_append(v_m_2130_, v___x_2134_);
v___x_2136_ = lean_string_append(v___x_2135_, v_key_2131_);
v___x_2137_ = lean_near_storage_read(v___x_2136_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2155_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2140_ = v___x_2137_;
v_isShared_2141_ = v_isSharedCheck_2155_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2137_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2155_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
if (lean_obj_tag(v_a_2138_) == 0)
{
lean_object* v___x_2143_; 
lean_dec_ref(v_inst_2129_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v_default_2132_);
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_default_2132_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
else
{
lean_object* v_val_2145_; lean_object* v_decode_2146_; lean_object* v___x_2147_; 
v_val_2145_ = lean_ctor_get(v_a_2138_, 0);
lean_inc(v_val_2145_);
lean_dec_ref_known(v_a_2138_, 1);
v_decode_2146_ = lean_ctor_get(v_inst_2129_, 1);
lean_inc_ref(v_decode_2146_);
lean_dec_ref(v_inst_2129_);
v___x_2147_ = lean_apply_1(v_decode_2146_, v_val_2145_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v___x_2149_; 
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v_default_2132_);
v___x_2149_ = v___x_2140_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_default_2132_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
else
{
lean_object* v_val_2151_; lean_object* v___x_2153_; 
lean_dec(v_default_2132_);
v_val_2151_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_val_2151_);
lean_dec_ref_known(v___x_2147_, 1);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 0, v_val_2151_);
v___x_2153_ = v___x_2140_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_val_2151_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec(v_default_2132_);
lean_dec_ref(v_inst_2129_);
v_a_2156_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2137_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2137_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr___redArg___boxed(lean_object* v_inst_2164_, lean_object* v_m_2165_, lean_object* v_key_2166_, lean_object* v_default_2167_, lean_object* v_a_2168_){
_start:
{
lean_object* v_res_2169_; 
v_res_2169_ = l_Near_Store_LookupMap_getOr___redArg(v_inst_2164_, v_m_2165_, v_key_2166_, v_default_2167_);
lean_dec_ref(v_key_2166_);
return v_res_2169_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr(lean_object* v_00_u03b1_2170_, lean_object* v_inst_2171_, lean_object* v_m_2172_, lean_object* v_key_2173_, lean_object* v_default_2174_){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2176_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2177_ = lean_string_append(v_m_2172_, v___x_2176_);
v___x_2178_ = lean_string_append(v___x_2177_, v_key_2173_);
v___x_2179_ = lean_near_storage_read(v___x_2178_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2197_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2182_ = v___x_2179_;
v_isShared_2183_ = v_isSharedCheck_2197_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2179_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2197_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
if (lean_obj_tag(v_a_2180_) == 0)
{
lean_object* v___x_2185_; 
lean_dec_ref(v_inst_2171_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v_default_2174_);
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_default_2174_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
else
{
lean_object* v_val_2187_; lean_object* v_decode_2188_; lean_object* v___x_2189_; 
v_val_2187_ = lean_ctor_get(v_a_2180_, 0);
lean_inc(v_val_2187_);
lean_dec_ref_known(v_a_2180_, 1);
v_decode_2188_ = lean_ctor_get(v_inst_2171_, 1);
lean_inc_ref(v_decode_2188_);
lean_dec_ref(v_inst_2171_);
v___x_2189_ = lean_apply_1(v_decode_2188_, v_val_2187_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v___x_2191_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v_default_2174_);
v___x_2191_ = v___x_2182_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_default_2174_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
else
{
lean_object* v_val_2193_; lean_object* v___x_2195_; 
lean_dec(v_default_2174_);
v_val_2193_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_val_2193_);
lean_dec_ref_known(v___x_2189_, 1);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v_val_2193_);
v___x_2195_ = v___x_2182_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_val_2193_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec(v_default_2174_);
lean_dec_ref(v_inst_2171_);
v_a_2198_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2179_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2179_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_getOr___boxed(lean_object* v_00_u03b1_2206_, lean_object* v_inst_2207_, lean_object* v_m_2208_, lean_object* v_key_2209_, lean_object* v_default_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Near_Store_LookupMap_getOr(v_00_u03b1_2206_, v_inst_2207_, v_m_2208_, v_key_2209_, v_default_2210_);
lean_dec_ref(v_key_2209_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert___redArg(lean_object* v_inst_2213_, lean_object* v_m_2214_, lean_object* v_key_2215_, lean_object* v_value_2216_){
_start:
{
lean_object* v_encode_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v_encode_2218_ = lean_ctor_get(v_inst_2213_, 0);
lean_inc_ref(v_encode_2218_);
lean_dec_ref(v_inst_2213_);
v___x_2219_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2220_ = lean_string_append(v_m_2214_, v___x_2219_);
v___x_2221_ = lean_string_append(v___x_2220_, v_key_2215_);
v___x_2222_ = lean_apply_1(v_encode_2218_, v_value_2216_);
v___x_2223_ = lean_near_storage_write(v___x_2221_, v___x_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert___redArg___boxed(lean_object* v_inst_2224_, lean_object* v_m_2225_, lean_object* v_key_2226_, lean_object* v_value_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Near_Store_LookupMap_insert___redArg(v_inst_2224_, v_m_2225_, v_key_2226_, v_value_2227_);
lean_dec_ref(v_key_2226_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert(lean_object* v_00_u03b1_2230_, lean_object* v_inst_2231_, lean_object* v_m_2232_, lean_object* v_key_2233_, lean_object* v_value_2234_){
_start:
{
lean_object* v_encode_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v_encode_2236_ = lean_ctor_get(v_inst_2231_, 0);
lean_inc_ref(v_encode_2236_);
lean_dec_ref(v_inst_2231_);
v___x_2237_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2238_ = lean_string_append(v_m_2232_, v___x_2237_);
v___x_2239_ = lean_string_append(v___x_2238_, v_key_2233_);
v___x_2240_ = lean_apply_1(v_encode_2236_, v_value_2234_);
v___x_2241_ = lean_near_storage_write(v___x_2239_, v___x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_insert___boxed(lean_object* v_00_u03b1_2242_, lean_object* v_inst_2243_, lean_object* v_m_2244_, lean_object* v_key_2245_, lean_object* v_value_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l_Near_Store_LookupMap_insert(v_00_u03b1_2242_, v_inst_2243_, v_m_2244_, v_key_2245_, v_value_2246_);
lean_dec_ref(v_key_2245_);
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set___redArg(lean_object* v_inst_2249_, lean_object* v_m_2250_, lean_object* v_key_2251_, lean_object* v_value_2252_){
_start:
{
lean_object* v_encode_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_encode_2254_ = lean_ctor_get(v_inst_2249_, 0);
lean_inc_ref(v_encode_2254_);
lean_dec_ref(v_inst_2249_);
v___x_2255_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2256_ = lean_string_append(v_m_2250_, v___x_2255_);
v___x_2257_ = lean_string_append(v___x_2256_, v_key_2251_);
v___x_2258_ = lean_apply_1(v_encode_2254_, v_value_2252_);
v___x_2259_ = lean_near_storage_write(v___x_2257_, v___x_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set___redArg___boxed(lean_object* v_inst_2260_, lean_object* v_m_2261_, lean_object* v_key_2262_, lean_object* v_value_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Near_Store_LookupMap_set___redArg(v_inst_2260_, v_m_2261_, v_key_2262_, v_value_2263_);
lean_dec_ref(v_key_2262_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set(lean_object* v_00_u03b1_2266_, lean_object* v_inst_2267_, lean_object* v_m_2268_, lean_object* v_key_2269_, lean_object* v_value_2270_){
_start:
{
lean_object* v_encode_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v_encode_2272_ = lean_ctor_get(v_inst_2267_, 0);
lean_inc_ref(v_encode_2272_);
lean_dec_ref(v_inst_2267_);
v___x_2273_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2274_ = lean_string_append(v_m_2268_, v___x_2273_);
v___x_2275_ = lean_string_append(v___x_2274_, v_key_2269_);
v___x_2276_ = lean_apply_1(v_encode_2272_, v_value_2270_);
v___x_2277_ = lean_near_storage_write(v___x_2275_, v___x_2276_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_set___boxed(lean_object* v_00_u03b1_2278_, lean_object* v_inst_2279_, lean_object* v_m_2280_, lean_object* v_key_2281_, lean_object* v_value_2282_, lean_object* v_a_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l_Near_Store_LookupMap_set(v_00_u03b1_2278_, v_inst_2279_, v_m_2280_, v_key_2281_, v_value_2282_);
lean_dec_ref(v_key_2281_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey___redArg(lean_object* v_m_2285_, lean_object* v_key_2286_){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2288_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2289_ = lean_string_append(v_m_2285_, v___x_2288_);
v___x_2290_ = lean_string_append(v___x_2289_, v_key_2286_);
v___x_2291_ = lean_near_storage_has_key(v___x_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey___redArg___boxed(lean_object* v_m_2292_, lean_object* v_key_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Near_Store_LookupMap_containsKey___redArg(v_m_2292_, v_key_2293_);
lean_dec_ref(v_key_2293_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey(lean_object* v_00_u03b1_2296_, lean_object* v_m_2297_, lean_object* v_key_2298_){
_start:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2300_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2301_ = lean_string_append(v_m_2297_, v___x_2300_);
v___x_2302_ = lean_string_append(v___x_2301_, v_key_2298_);
v___x_2303_ = lean_near_storage_has_key(v___x_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_containsKey___boxed(lean_object* v_00_u03b1_2304_, lean_object* v_m_2305_, lean_object* v_key_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Near_Store_LookupMap_containsKey(v_00_u03b1_2304_, v_m_2305_, v_key_2306_);
lean_dec_ref(v_key_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove___redArg(lean_object* v_m_2309_, lean_object* v_key_2310_){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2312_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2313_ = lean_string_append(v_m_2309_, v___x_2312_);
v___x_2314_ = lean_string_append(v___x_2313_, v_key_2310_);
v___x_2315_ = lean_near_storage_remove(v___x_2314_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove___redArg___boxed(lean_object* v_m_2316_, lean_object* v_key_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Near_Store_LookupMap_remove___redArg(v_m_2316_, v_key_2317_);
lean_dec_ref(v_key_2317_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove(lean_object* v_00_u03b1_2320_, lean_object* v_m_2321_, lean_object* v_key_2322_){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2324_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2325_ = lean_string_append(v_m_2321_, v___x_2324_);
v___x_2326_ = lean_string_append(v___x_2325_, v_key_2322_);
v___x_2327_ = lean_near_storage_remove(v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_remove___boxed(lean_object* v_00_u03b1_2328_, lean_object* v_m_2329_, lean_object* v_key_2330_, lean_object* v_a_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Near_Store_LookupMap_remove(v_00_u03b1_2328_, v_m_2329_, v_key_2330_);
lean_dec_ref(v_key_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify___redArg(lean_object* v_inst_2333_, lean_object* v_m_2334_, lean_object* v_key_2335_, lean_object* v_default_2336_, lean_object* v_f_2337_){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2339_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2340_ = lean_string_append(v_m_2334_, v___x_2339_);
v___x_2341_ = lean_string_append(v___x_2340_, v_key_2335_);
lean_inc_ref(v___x_2341_);
v___x_2342_ = lean_near_storage_read(v___x_2341_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v_a_2345_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2343_);
lean_dec_ref_known(v___x_2342_, 1);
if (lean_obj_tag(v_a_2343_) == 0)
{
v_a_2345_ = v_default_2336_;
goto v___jp_2344_;
}
else
{
lean_object* v_val_2366_; lean_object* v_decode_2367_; lean_object* v___x_2368_; 
v_val_2366_ = lean_ctor_get(v_a_2343_, 0);
lean_inc(v_val_2366_);
lean_dec_ref_known(v_a_2343_, 1);
v_decode_2367_ = lean_ctor_get(v_inst_2333_, 1);
lean_inc_ref(v_decode_2367_);
v___x_2368_ = lean_apply_1(v_decode_2367_, v_val_2366_);
if (lean_obj_tag(v___x_2368_) == 0)
{
v_a_2345_ = v_default_2336_;
goto v___jp_2344_;
}
else
{
lean_object* v_val_2369_; 
lean_dec(v_default_2336_);
v_val_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_val_2369_);
lean_dec_ref_known(v___x_2368_, 1);
v_a_2345_ = v_val_2369_;
goto v___jp_2344_;
}
}
v___jp_2344_:
{
lean_object* v_encode_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_encode_2346_ = lean_ctor_get(v_inst_2333_, 0);
lean_inc_ref(v_encode_2346_);
lean_dec_ref(v_inst_2333_);
v___x_2347_ = lean_apply_1(v_f_2337_, v_a_2345_);
lean_inc(v___x_2347_);
v___x_2348_ = lean_apply_1(v_encode_2346_, v___x_2347_);
v___x_2349_ = lean_near_storage_write(v___x_2341_, v___x_2348_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2356_ == 0)
{
lean_object* v_unused_2357_; 
v_unused_2357_ = lean_ctor_get(v___x_2349_, 0);
lean_dec(v_unused_2357_);
v___x_2351_ = v___x_2349_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_dec(v___x_2349_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 0, v___x_2347_);
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v___x_2347_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
lean_dec(v___x_2347_);
v_a_2358_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2349_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2349_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref(v___x_2341_);
lean_dec(v_f_2337_);
lean_dec(v_default_2336_);
lean_dec_ref(v_inst_2333_);
v_a_2370_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2342_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2342_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
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
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify___redArg___boxed(lean_object* v_inst_2378_, lean_object* v_m_2379_, lean_object* v_key_2380_, lean_object* v_default_2381_, lean_object* v_f_2382_, lean_object* v_a_2383_){
_start:
{
lean_object* v_res_2384_; 
v_res_2384_ = l_Near_Store_LookupMap_modify___redArg(v_inst_2378_, v_m_2379_, v_key_2380_, v_default_2381_, v_f_2382_);
lean_dec_ref(v_key_2380_);
return v_res_2384_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify(lean_object* v_00_u03b1_2385_, lean_object* v_inst_2386_, lean_object* v_m_2387_, lean_object* v_key_2388_, lean_object* v_default_2389_, lean_object* v_f_2390_){
_start:
{
lean_object* v_a_2393_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2417_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
lean_inc_ref(v_m_2387_);
v___x_2418_ = lean_string_append(v_m_2387_, v___x_2417_);
v___x_2419_ = lean_string_append(v___x_2418_, v_key_2388_);
v___x_2420_ = lean_near_storage_read(v___x_2419_);
if (lean_obj_tag(v___x_2420_) == 0)
{
lean_object* v_a_2421_; 
v_a_2421_ = lean_ctor_get(v___x_2420_, 0);
lean_inc(v_a_2421_);
lean_dec_ref_known(v___x_2420_, 1);
if (lean_obj_tag(v_a_2421_) == 0)
{
v_a_2393_ = v_default_2389_;
goto v___jp_2392_;
}
else
{
lean_object* v_val_2422_; lean_object* v_decode_2423_; lean_object* v___x_2424_; 
v_val_2422_ = lean_ctor_get(v_a_2421_, 0);
lean_inc(v_val_2422_);
lean_dec_ref_known(v_a_2421_, 1);
v_decode_2423_ = lean_ctor_get(v_inst_2386_, 1);
lean_inc_ref(v_decode_2423_);
v___x_2424_ = lean_apply_1(v_decode_2423_, v_val_2422_);
if (lean_obj_tag(v___x_2424_) == 0)
{
v_a_2393_ = v_default_2389_;
goto v___jp_2392_;
}
else
{
lean_object* v_val_2425_; 
lean_dec(v_default_2389_);
v_val_2425_ = lean_ctor_get(v___x_2424_, 0);
lean_inc(v_val_2425_);
lean_dec_ref_known(v___x_2424_, 1);
v_a_2393_ = v_val_2425_;
goto v___jp_2392_;
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v_f_2390_);
lean_dec(v_default_2389_);
lean_dec_ref(v_m_2387_);
lean_dec_ref(v_inst_2386_);
v_a_2426_ = lean_ctor_get(v___x_2420_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2420_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2420_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
v___jp_2392_:
{
lean_object* v_encode_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v_encode_2394_ = lean_ctor_get(v_inst_2386_, 0);
lean_inc_ref(v_encode_2394_);
lean_dec_ref(v_inst_2386_);
v___x_2395_ = lean_apply_1(v_f_2390_, v_a_2393_);
v___x_2396_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_2397_ = lean_string_append(v_m_2387_, v___x_2396_);
v___x_2398_ = lean_string_append(v___x_2397_, v_key_2388_);
lean_inc(v___x_2395_);
v___x_2399_ = lean_apply_1(v_encode_2394_, v___x_2395_);
v___x_2400_ = lean_near_storage_write(v___x_2398_, v___x_2399_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2407_ == 0)
{
lean_object* v_unused_2408_; 
v_unused_2408_ = lean_ctor_get(v___x_2400_, 0);
lean_dec(v_unused_2408_);
v___x_2402_ = v___x_2400_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_dec(v___x_2400_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v___x_2395_);
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2395_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2416_; 
lean_dec(v___x_2395_);
v_a_2409_ = lean_ctor_get(v___x_2400_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2411_ = v___x_2400_;
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v___x_2400_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LookupMap_modify___boxed(lean_object* v_00_u03b1_2434_, lean_object* v_inst_2435_, lean_object* v_m_2436_, lean_object* v_key_2437_, lean_object* v_default_2438_, lean_object* v_f_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Near_Store_LookupMap_modify(v_00_u03b1_2434_, v_inst_2435_, v_m_2436_, v_key_2437_, v_default_2438_, v_f_2439_);
lean_dec_ref(v_key_2437_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption_repr___redArg(lean_object* v_x_2442_){
_start:
{
lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; uint8_t v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2443_ = ((lean_object*)(l_Near_Storage_instReprSlot_repr___redArg___closed__3));
v___x_2444_ = lean_obj_once(&l_Near_Storage_instReprSlot_repr___redArg___closed__4, &l_Near_Storage_instReprSlot_repr___redArg___closed__4_once, _init_l_Near_Storage_instReprSlot_repr___redArg___closed__4);
v___x_2445_ = l_Near_Storage_instReprKey_repr___redArg(v_x_2442_);
v___x_2446_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2446_, 0, v___x_2444_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
v___x_2447_ = 0;
v___x_2448_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2448_, 0, v___x_2446_);
lean_ctor_set_uint8(v___x_2448_, sizeof(void*)*1, v___x_2447_);
v___x_2449_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2443_);
lean_ctor_set(v___x_2449_, 1, v___x_2448_);
v___x_2450_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_2451_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_2452_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2451_);
lean_ctor_set(v___x_2452_, 1, v___x_2449_);
v___x_2453_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_2454_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2452_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
v___x_2455_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2450_);
lean_ctor_set(v___x_2455_, 1, v___x_2454_);
v___x_2456_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
lean_ctor_set_uint8(v___x_2456_, sizeof(void*)*1, v___x_2447_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption_repr(lean_object* v_00_u03b1_2457_, lean_object* v_inst_2458_, lean_object* v_x_2459_, lean_object* v_prec_2460_){
_start:
{
lean_object* v___x_2461_; 
v___x_2461_ = l_Near_Store_instReprLazyOption_repr___redArg(v_x_2459_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption_repr___boxed(lean_object* v_00_u03b1_2462_, lean_object* v_inst_2463_, lean_object* v_x_2464_, lean_object* v_prec_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_Near_Store_instReprLazyOption_repr(v_00_u03b1_2462_, v_inst_2463_, v_x_2464_, v_prec_2465_);
lean_dec(v_prec_2465_);
lean_dec_ref(v_inst_2463_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption___redArg(lean_object* v_inst_2467_){
_start:
{
lean_object* v___x_2468_; 
v___x_2468_ = lean_alloc_closure((void*)(l_Near_Store_instReprLazyOption_repr___boxed), 4, 2);
lean_closure_set(v___x_2468_, 0, lean_box(0));
lean_closure_set(v___x_2468_, 1, v_inst_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprLazyOption(lean_object* v_00_u03b1_2469_, lean_object* v_inst_2470_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = lean_alloc_closure((void*)(l_Near_Store_instReprLazyOption_repr___boxed), 4, 2);
lean_closure_set(v___x_2471_, 0, lean_box(0));
lean_closure_set(v___x_2471_, 1, v_inst_2470_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new___redArg(lean_object* v_key_2472_){
_start:
{
lean_inc_ref(v_key_2472_);
return v_key_2472_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new___redArg___boxed(lean_object* v_key_2473_){
_start:
{
lean_object* v_res_2474_; 
v_res_2474_ = l_Near_Store_LazyOption_new___redArg(v_key_2473_);
lean_dec_ref(v_key_2473_);
return v_res_2474_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new(lean_object* v_00_u03b1_2475_, lean_object* v_key_2476_){
_start:
{
lean_inc_ref(v_key_2476_);
return v_key_2476_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_new___boxed(lean_object* v_00_u03b1_2477_, lean_object* v_key_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Near_Store_LazyOption_new(v_00_u03b1_2477_, v_key_2478_);
lean_dec_ref(v_key_2478_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make___redArg(lean_object* v_key_2480_){
_start:
{
lean_inc_ref(v_key_2480_);
return v_key_2480_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make___redArg___boxed(lean_object* v_key_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Near_Store_LazyOption_make___redArg(v_key_2481_);
lean_dec_ref(v_key_2481_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make(lean_object* v_00_u03b1_2483_, lean_object* v_key_2484_){
_start:
{
lean_inc_ref(v_key_2484_);
return v_key_2484_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_make___boxed(lean_object* v_00_u03b1_2485_, lean_object* v_key_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Near_Store_LazyOption_make(v_00_u03b1_2485_, v_key_2486_);
lean_dec_ref(v_key_2486_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get___redArg(lean_object* v_inst_2488_, lean_object* v_slot_2489_){
_start:
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_near_storage_read(v_slot_2489_);
if (lean_obj_tag(v___x_2491_) == 0)
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2506_; 
v_a_2492_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2494_ = v___x_2491_;
v_isShared_2495_ = v_isSharedCheck_2506_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2491_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2506_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
if (lean_obj_tag(v_a_2492_) == 0)
{
lean_object* v___x_2496_; lean_object* v___x_2498_; 
lean_dec_ref(v_inst_2488_);
v___x_2496_ = lean_box(0);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v___x_2496_);
v___x_2498_ = v___x_2494_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v___x_2496_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
else
{
lean_object* v_val_2500_; lean_object* v_decode_2501_; lean_object* v___x_2502_; lean_object* v___x_2504_; 
v_val_2500_ = lean_ctor_get(v_a_2492_, 0);
lean_inc(v_val_2500_);
lean_dec_ref_known(v_a_2492_, 1);
v_decode_2501_ = lean_ctor_get(v_inst_2488_, 1);
lean_inc_ref(v_decode_2501_);
lean_dec_ref(v_inst_2488_);
v___x_2502_ = lean_apply_1(v_decode_2501_, v_val_2500_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v___x_2502_);
v___x_2504_ = v___x_2494_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2502_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec_ref(v_inst_2488_);
v_a_2507_ = lean_ctor_get(v___x_2491_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2491_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2491_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2491_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get___redArg___boxed(lean_object* v_inst_2515_, lean_object* v_slot_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Near_Store_LazyOption_get___redArg(v_inst_2515_, v_slot_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get(lean_object* v_00_u03b1_2519_, lean_object* v_inst_2520_, lean_object* v_slot_2521_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_near_storage_read(v_slot_2521_);
if (lean_obj_tag(v___x_2523_) == 0)
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2538_; 
v_a_2524_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2526_ = v___x_2523_;
v_isShared_2527_ = v_isSharedCheck_2538_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2523_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2538_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
if (lean_obj_tag(v_a_2524_) == 0)
{
lean_object* v___x_2528_; lean_object* v___x_2530_; 
lean_dec_ref(v_inst_2520_);
v___x_2528_ = lean_box(0);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2528_);
v___x_2530_ = v___x_2526_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
else
{
lean_object* v_val_2532_; lean_object* v_decode_2533_; lean_object* v___x_2534_; lean_object* v___x_2536_; 
v_val_2532_ = lean_ctor_get(v_a_2524_, 0);
lean_inc(v_val_2532_);
lean_dec_ref_known(v_a_2524_, 1);
v_decode_2533_ = lean_ctor_get(v_inst_2520_, 1);
lean_inc_ref(v_decode_2533_);
lean_dec_ref(v_inst_2520_);
v___x_2534_ = lean_apply_1(v_decode_2533_, v_val_2532_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2534_);
v___x_2536_ = v___x_2526_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v___x_2534_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
lean_dec_ref(v_inst_2520_);
v_a_2539_ = lean_ctor_get(v___x_2523_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2523_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2523_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2523_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_get___boxed(lean_object* v_00_u03b1_2547_, lean_object* v_inst_2548_, lean_object* v_slot_2549_, lean_object* v_a_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Near_Store_LazyOption_get(v_00_u03b1_2547_, v_inst_2548_, v_slot_2549_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr___redArg(lean_object* v_inst_2552_, lean_object* v_slot_2553_, lean_object* v_default_2554_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_near_storage_read(v_slot_2553_);
if (lean_obj_tag(v___x_2556_) == 0)
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2574_; 
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2559_ = v___x_2556_;
v_isShared_2560_ = v_isSharedCheck_2574_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2556_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2574_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
if (lean_obj_tag(v_a_2557_) == 0)
{
lean_object* v___x_2562_; 
lean_dec_ref(v_inst_2552_);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v_default_2554_);
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_default_2554_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
else
{
lean_object* v_val_2564_; lean_object* v_decode_2565_; lean_object* v___x_2566_; 
v_val_2564_ = lean_ctor_get(v_a_2557_, 0);
lean_inc(v_val_2564_);
lean_dec_ref_known(v_a_2557_, 1);
v_decode_2565_ = lean_ctor_get(v_inst_2552_, 1);
lean_inc_ref(v_decode_2565_);
lean_dec_ref(v_inst_2552_);
v___x_2566_ = lean_apply_1(v_decode_2565_, v_val_2564_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v___x_2568_; 
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v_default_2554_);
v___x_2568_ = v___x_2559_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_default_2554_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
else
{
lean_object* v_val_2570_; lean_object* v___x_2572_; 
lean_dec(v_default_2554_);
v_val_2570_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_val_2570_);
lean_dec_ref_known(v___x_2566_, 1);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v_val_2570_);
v___x_2572_ = v___x_2559_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_val_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec(v_default_2554_);
lean_dec_ref(v_inst_2552_);
v_a_2575_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2556_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2556_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr___redArg___boxed(lean_object* v_inst_2583_, lean_object* v_slot_2584_, lean_object* v_default_2585_, lean_object* v_a_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Near_Store_LazyOption_getOr___redArg(v_inst_2583_, v_slot_2584_, v_default_2585_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr(lean_object* v_00_u03b1_2588_, lean_object* v_inst_2589_, lean_object* v_slot_2590_, lean_object* v_default_2591_){
_start:
{
lean_object* v___x_2593_; 
v___x_2593_ = lean_near_storage_read(v_slot_2590_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2611_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2596_ = v___x_2593_;
v_isShared_2597_ = v_isSharedCheck_2611_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___x_2593_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2611_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
if (lean_obj_tag(v_a_2594_) == 0)
{
lean_object* v___x_2599_; 
lean_dec_ref(v_inst_2589_);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v_default_2591_);
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_default_2591_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
else
{
lean_object* v_val_2601_; lean_object* v_decode_2602_; lean_object* v___x_2603_; 
v_val_2601_ = lean_ctor_get(v_a_2594_, 0);
lean_inc(v_val_2601_);
lean_dec_ref_known(v_a_2594_, 1);
v_decode_2602_ = lean_ctor_get(v_inst_2589_, 1);
lean_inc_ref(v_decode_2602_);
lean_dec_ref(v_inst_2589_);
v___x_2603_ = lean_apply_1(v_decode_2602_, v_val_2601_);
if (lean_obj_tag(v___x_2603_) == 0)
{
lean_object* v___x_2605_; 
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v_default_2591_);
v___x_2605_ = v___x_2596_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_default_2591_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
else
{
lean_object* v_val_2607_; lean_object* v___x_2609_; 
lean_dec(v_default_2591_);
v_val_2607_ = lean_ctor_get(v___x_2603_, 0);
lean_inc(v_val_2607_);
lean_dec_ref_known(v___x_2603_, 1);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v_val_2607_);
v___x_2609_ = v___x_2596_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_val_2607_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
lean_dec(v_default_2591_);
lean_dec_ref(v_inst_2589_);
v_a_2612_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2593_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2593_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_getOr___boxed(lean_object* v_00_u03b1_2620_, lean_object* v_inst_2621_, lean_object* v_slot_2622_, lean_object* v_default_2623_, lean_object* v_a_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Near_Store_LazyOption_getOr(v_00_u03b1_2620_, v_inst_2621_, v_slot_2622_, v_default_2623_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set___redArg(lean_object* v_inst_2626_, lean_object* v_slot_2627_, lean_object* v_value_2628_){
_start:
{
lean_object* v_encode_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v_encode_2630_ = lean_ctor_get(v_inst_2626_, 0);
lean_inc_ref(v_encode_2630_);
lean_dec_ref(v_inst_2626_);
v___x_2631_ = lean_apply_1(v_encode_2630_, v_value_2628_);
v___x_2632_ = lean_near_storage_write(v_slot_2627_, v___x_2631_);
return v___x_2632_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set___redArg___boxed(lean_object* v_inst_2633_, lean_object* v_slot_2634_, lean_object* v_value_2635_, lean_object* v_a_2636_){
_start:
{
lean_object* v_res_2637_; 
v_res_2637_ = l_Near_Store_LazyOption_set___redArg(v_inst_2633_, v_slot_2634_, v_value_2635_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set(lean_object* v_00_u03b1_2638_, lean_object* v_inst_2639_, lean_object* v_slot_2640_, lean_object* v_value_2641_){
_start:
{
lean_object* v_encode_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v_encode_2643_ = lean_ctor_get(v_inst_2639_, 0);
lean_inc_ref(v_encode_2643_);
lean_dec_ref(v_inst_2639_);
v___x_2644_ = lean_apply_1(v_encode_2643_, v_value_2641_);
v___x_2645_ = lean_near_storage_write(v_slot_2640_, v___x_2644_);
return v___x_2645_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_set___boxed(lean_object* v_00_u03b1_2646_, lean_object* v_inst_2647_, lean_object* v_slot_2648_, lean_object* v_value_2649_, lean_object* v_a_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Near_Store_LazyOption_set(v_00_u03b1_2646_, v_inst_2647_, v_slot_2648_, v_value_2649_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome___redArg(lean_object* v_slot_2652_){
_start:
{
lean_object* v___x_2654_; 
v___x_2654_ = lean_near_storage_has_key(v_slot_2652_);
return v___x_2654_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome___redArg___boxed(lean_object* v_slot_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Near_Store_LazyOption_isSome___redArg(v_slot_2655_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome(lean_object* v_00_u03b1_2658_, lean_object* v_slot_2659_){
_start:
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_near_storage_has_key(v_slot_2659_);
return v___x_2661_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_isSome___boxed(lean_object* v_00_u03b1_2662_, lean_object* v_slot_2663_, lean_object* v_a_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Near_Store_LazyOption_isSome(v_00_u03b1_2662_, v_slot_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove___redArg(lean_object* v_slot_2666_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_near_storage_remove(v_slot_2666_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove___redArg___boxed(lean_object* v_slot_2669_, lean_object* v_a_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l_Near_Store_LazyOption_remove___redArg(v_slot_2669_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove(lean_object* v_00_u03b1_2672_, lean_object* v_slot_2673_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = lean_near_storage_remove(v_slot_2673_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_LazyOption_remove___boxed(lean_object* v_00_u03b1_2676_, lean_object* v_slot_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Near_Store_LazyOption_remove(v_00_u03b1_2676_, v_slot_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprVector_repr___redArg(lean_object* v_x_2680_){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v___x_2681_ = ((lean_object*)(l_Near_Store_instReprLookupMap_repr___redArg___closed__3));
v___x_2682_ = lean_obj_once(&l_Near_Store_instReprLookupMap_repr___redArg___closed__4, &l_Near_Store_instReprLookupMap_repr___redArg___closed__4_once, _init_l_Near_Store_instReprLookupMap_repr___redArg___closed__4);
v___x_2683_ = l_String_quote(v_x_2680_);
v___x_2684_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2683_);
v___x_2685_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2682_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = 0;
v___x_2687_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2687_, 0, v___x_2685_);
lean_ctor_set_uint8(v___x_2687_, sizeof(void*)*1, v___x_2686_);
v___x_2688_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2681_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
v___x_2689_ = lean_obj_once(&l_Near_Storage_instReprKey_repr___redArg___closed__5, &l_Near_Storage_instReprKey_repr___redArg___closed__5_once, _init_l_Near_Storage_instReprKey_repr___redArg___closed__5);
v___x_2690_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_2691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
lean_ctor_set(v___x_2691_, 1, v___x_2688_);
v___x_2692_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_2693_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2691_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2689_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
v___x_2695_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
lean_ctor_set_uint8(v___x_2695_, sizeof(void*)*1, v___x_2686_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprVector_repr(lean_object* v_00_u03b1_2696_, lean_object* v_inst_2697_, lean_object* v_x_2698_, lean_object* v_prec_2699_){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = l_Near_Store_instReprVector_repr___redArg(v_x_2698_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprVector_repr___boxed(lean_object* v_00_u03b1_2701_, lean_object* v_inst_2702_, lean_object* v_x_2703_, lean_object* v_prec_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l_Near_Store_instReprVector_repr(v_00_u03b1_2701_, v_inst_2702_, v_x_2703_, v_prec_2704_);
lean_dec(v_prec_2704_);
lean_dec_ref(v_inst_2702_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprVector___redArg(lean_object* v_inst_2706_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = lean_alloc_closure((void*)(l_Near_Store_instReprVector_repr___boxed), 4, 2);
lean_closure_set(v___x_2707_, 0, lean_box(0));
lean_closure_set(v___x_2707_, 1, v_inst_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_instReprVector(lean_object* v_00_u03b1_2708_, lean_object* v_inst_2709_){
_start:
{
lean_object* v___x_2710_; 
v___x_2710_ = lean_alloc_closure((void*)(l_Near_Store_instReprVector_repr___boxed), 4, 2);
lean_closure_set(v___x_2710_, 0, lean_box(0));
lean_closure_set(v___x_2710_, 1, v_inst_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_new___redArg(lean_object* v_storagePrefix_2711_){
_start:
{
lean_inc_ref(v_storagePrefix_2711_);
return v_storagePrefix_2711_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_new___redArg___boxed(lean_object* v_storagePrefix_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Near_Store_Vector_new___redArg(v_storagePrefix_2712_);
lean_dec_ref(v_storagePrefix_2712_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_new(lean_object* v_00_u03b1_2714_, lean_object* v_storagePrefix_2715_){
_start:
{
lean_inc_ref(v_storagePrefix_2715_);
return v_storagePrefix_2715_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_new___boxed(lean_object* v_00_u03b1_2716_, lean_object* v_storagePrefix_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l_Near_Store_Vector_new(v_00_u03b1_2716_, v_storagePrefix_2717_);
lean_dec_ref(v_storagePrefix_2717_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_make___redArg(lean_object* v_storagePrefix_2719_){
_start:
{
lean_inc_ref(v_storagePrefix_2719_);
return v_storagePrefix_2719_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_make___redArg___boxed(lean_object* v_storagePrefix_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_Near_Store_Vector_make___redArg(v_storagePrefix_2720_);
lean_dec_ref(v_storagePrefix_2720_);
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_make(lean_object* v_00_u03b1_2722_, lean_object* v_storagePrefix_2723_){
_start:
{
lean_inc_ref(v_storagePrefix_2723_);
return v_storagePrefix_2723_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_make___boxed(lean_object* v_00_u03b1_2724_, lean_object* v_storagePrefix_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Near_Store_Vector_make(v_00_u03b1_2724_, v_storagePrefix_2725_);
lean_dec_ref(v_storagePrefix_2725_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_lenKey___redArg(lean_object* v_v_2728_){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_2730_ = lean_string_append(v_v_2728_, v___x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_lenKey(lean_object* v_00_u03b1_2731_, lean_object* v_v_2732_){
_start:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_2734_ = lean_string_append(v_v_2732_, v___x_2733_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_itemKey___redArg(lean_object* v_v_2736_, lean_object* v_idx_2737_){
_start:
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; 
v___x_2738_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_2739_ = lean_string_append(v_v_2736_, v___x_2738_);
v___x_2740_ = l_Nat_reprFast(v_idx_2737_);
v___x_2741_ = lean_string_append(v___x_2739_, v___x_2740_);
lean_dec_ref(v___x_2740_);
return v___x_2741_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_itemKey(lean_object* v_00_u03b1_2742_, lean_object* v_v_2743_, lean_object* v_idx_2744_){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2745_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_2746_ = lean_string_append(v_v_2743_, v___x_2745_);
v___x_2747_ = l_Nat_reprFast(v_idx_2744_);
v___x_2748_ = lean_string_append(v___x_2746_, v___x_2747_);
lean_dec_ref(v___x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_len___redArg(lean_object* v_v_2749_){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_2752_ = lean_string_append(v_v_2749_, v___x_2751_);
v___x_2753_ = lean_near_storage_read(v___x_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2777_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2756_ = v___x_2753_;
v_isShared_2757_ = v_isSharedCheck_2777_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2753_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2777_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; 
v___x_2758_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_2754_) == 0)
{
lean_object* v___x_2760_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2758_);
v___x_2760_ = v___x_2756_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v___x_2758_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
else
{
lean_object* v_val_2762_; lean_object* v___x_2763_; 
v_val_2762_ = lean_ctor_get(v_a_2754_, 0);
lean_inc(v_val_2762_);
lean_dec_ref_known(v_a_2754_, 1);
v___x_2763_ = lean_string_data(v_val_2762_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v___x_2765_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2758_);
v___x_2765_ = v___x_2756_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2758_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
else
{
lean_object* v___f_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___f_2767_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_2768_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_2769_ = l_List_foldl___redArg(v___f_2767_, v___x_2768_, v___x_2763_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v___x_2771_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v___x_2758_);
v___x_2771_ = v___x_2756_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2758_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
else
{
lean_object* v_val_2773_; lean_object* v___x_2775_; 
v_val_2773_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_val_2773_);
lean_dec_ref_known(v___x_2769_, 1);
if (v_isShared_2757_ == 0)
{
lean_ctor_set(v___x_2756_, 0, v_val_2773_);
v___x_2775_ = v___x_2756_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_val_2773_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
}
}
else
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2785_; 
v_a_2778_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2780_ = v___x_2753_;
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2753_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_len___redArg___boxed(lean_object* v_v_2786_, lean_object* v_a_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l_Near_Store_Vector_len___redArg(v_v_2786_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_len(lean_object* v_00_u03b1_2789_, lean_object* v_v_2790_){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2792_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_2793_ = lean_string_append(v_v_2790_, v___x_2792_);
v___x_2794_ = lean_near_storage_read(v___x_2793_);
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2818_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2818_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2818_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_2795_) == 0)
{
lean_object* v___x_2801_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2799_);
v___x_2801_ = v___x_2797_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v___x_2799_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
else
{
lean_object* v_val_2803_; lean_object* v___x_2804_; 
v_val_2803_ = lean_ctor_get(v_a_2795_, 0);
lean_inc(v_val_2803_);
lean_dec_ref_known(v_a_2795_, 1);
v___x_2804_ = lean_string_data(v_val_2803_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v___x_2806_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2799_);
v___x_2806_ = v___x_2797_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2799_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
else
{
lean_object* v___f_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___f_2808_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_2809_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_2810_ = l_List_foldl___redArg(v___f_2808_, v___x_2809_, v___x_2804_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v___x_2812_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2799_);
v___x_2812_ = v___x_2797_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v___x_2799_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
else
{
lean_object* v_val_2814_; lean_object* v___x_2816_; 
v_val_2814_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_val_2814_);
lean_dec_ref_known(v___x_2810_, 1);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v_val_2814_);
v___x_2816_ = v___x_2797_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_val_2814_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
v_a_2819_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2794_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2794_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_len___boxed(lean_object* v_00_u03b1_2827_, lean_object* v_v_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l_Near_Store_Vector_len(v_00_u03b1_2827_, v_v_2828_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty___redArg(lean_object* v_v_2831_){
_start:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2833_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_2834_ = lean_string_append(v_v_2831_, v___x_2833_);
v___x_2835_ = lean_near_storage_read(v___x_2834_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2855_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2838_ = v___x_2835_;
v_isShared_2839_ = v_isSharedCheck_2855_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2835_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2855_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v_a_2841_; lean_object* v___x_2848_; 
v___x_2848_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_2836_) == 0)
{
v_a_2841_ = v___x_2848_;
goto v___jp_2840_;
}
else
{
lean_object* v_val_2849_; lean_object* v___x_2850_; 
v_val_2849_ = lean_ctor_get(v_a_2836_, 0);
lean_inc(v_val_2849_);
lean_dec_ref_known(v_a_2836_, 1);
v___x_2850_ = lean_string_data(v_val_2849_);
if (lean_obj_tag(v___x_2850_) == 0)
{
v_a_2841_ = v___x_2848_;
goto v___jp_2840_;
}
else
{
lean_object* v___f_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___f_2851_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_2852_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_2853_ = l_List_foldl___redArg(v___f_2851_, v___x_2852_, v___x_2850_);
if (lean_obj_tag(v___x_2853_) == 0)
{
v_a_2841_ = v___x_2848_;
goto v___jp_2840_;
}
else
{
lean_object* v_val_2854_; 
v_val_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_val_2854_);
lean_dec_ref_known(v___x_2853_, 1);
v_a_2841_ = v_val_2854_;
goto v___jp_2840_;
}
}
}
v___jp_2840_:
{
lean_object* v___x_2842_; uint8_t v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2846_; 
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = lean_nat_dec_eq(v_a_2841_, v___x_2842_);
lean_dec(v_a_2841_);
v___x_2844_ = lean_box(v___x_2843_);
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2844_);
v___x_2846_ = v___x_2838_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2844_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
v_a_2856_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2835_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2835_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty___redArg___boxed(lean_object* v_v_2864_, lean_object* v_a_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l_Near_Store_Vector_isEmpty___redArg(v_v_2864_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty(lean_object* v_00_u03b1_2867_, lean_object* v_v_2868_){
_start:
{
lean_object* v_a_2871_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; 
v___x_2876_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_2877_ = lean_string_append(v_v_2868_, v___x_2876_);
v___x_2878_ = lean_near_storage_read(v___x_2877_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v_a_2879_; lean_object* v___x_2880_; 
v_a_2879_ = lean_ctor_get(v___x_2878_, 0);
lean_inc(v_a_2879_);
lean_dec_ref_known(v___x_2878_, 1);
v___x_2880_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_2879_) == 0)
{
v_a_2871_ = v___x_2880_;
goto v___jp_2870_;
}
else
{
lean_object* v_val_2881_; lean_object* v___x_2882_; 
v_val_2881_ = lean_ctor_get(v_a_2879_, 0);
lean_inc(v_val_2881_);
lean_dec_ref_known(v_a_2879_, 1);
v___x_2882_ = lean_string_data(v_val_2881_);
if (lean_obj_tag(v___x_2882_) == 0)
{
v_a_2871_ = v___x_2880_;
goto v___jp_2870_;
}
else
{
lean_object* v___f_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___f_2883_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_2884_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_2885_ = l_List_foldl___redArg(v___f_2883_, v___x_2884_, v___x_2882_);
if (lean_obj_tag(v___x_2885_) == 0)
{
v_a_2871_ = v___x_2880_;
goto v___jp_2870_;
}
else
{
lean_object* v_val_2886_; 
v_val_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_val_2886_);
lean_dec_ref_known(v___x_2885_, 1);
v_a_2871_ = v_val_2886_;
goto v___jp_2870_;
}
}
}
}
else
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2894_; 
v_a_2887_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2894_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2894_ == 0)
{
v___x_2889_ = v___x_2878_;
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2878_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2894_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
lean_object* v___x_2892_; 
if (v_isShared_2890_ == 0)
{
v___x_2892_ = v___x_2889_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v_a_2887_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
v___jp_2870_:
{
lean_object* v___x_2872_; uint8_t v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2872_ = lean_unsigned_to_nat(0u);
v___x_2873_ = lean_nat_dec_eq(v_a_2871_, v___x_2872_);
lean_dec(v_a_2871_);
v___x_2874_ = lean_box(v___x_2873_);
v___x_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_isEmpty___boxed(lean_object* v_00_u03b1_2895_, lean_object* v_v_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Near_Store_Vector_isEmpty(v_00_u03b1_2895_, v_v_2896_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get___redArg(lean_object* v_inst_2899_, lean_object* v_v_2900_, lean_object* v_idx_2901_){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2903_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_2900_);
v___x_2904_ = lean_string_append(v_v_2900_, v___x_2903_);
v___x_2905_ = lean_near_storage_read(v___x_2904_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2952_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2908_ = v___x_2905_;
v_isShared_2909_ = v_isSharedCheck_2952_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2905_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2952_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v_a_2911_; lean_object* v___x_2945_; 
v___x_2945_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_2906_) == 0)
{
v_a_2911_ = v___x_2945_;
goto v___jp_2910_;
}
else
{
lean_object* v_val_2946_; lean_object* v___x_2947_; 
v_val_2946_ = lean_ctor_get(v_a_2906_, 0);
lean_inc(v_val_2946_);
lean_dec_ref_known(v_a_2906_, 1);
v___x_2947_ = lean_string_data(v_val_2946_);
if (lean_obj_tag(v___x_2947_) == 0)
{
v_a_2911_ = v___x_2945_;
goto v___jp_2910_;
}
else
{
lean_object* v___f_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___f_2948_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_2949_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_2950_ = l_List_foldl___redArg(v___f_2948_, v___x_2949_, v___x_2947_);
if (lean_obj_tag(v___x_2950_) == 0)
{
v_a_2911_ = v___x_2945_;
goto v___jp_2910_;
}
else
{
lean_object* v_val_2951_; 
v_val_2951_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_val_2951_);
lean_dec_ref_known(v___x_2950_, 1);
v_a_2911_ = v_val_2951_;
goto v___jp_2910_;
}
}
}
v___jp_2910_:
{
uint8_t v___x_2912_; 
v___x_2912_ = lean_nat_dec_lt(v_idx_2901_, v_a_2911_);
lean_dec(v_a_2911_);
if (v___x_2912_ == 0)
{
lean_object* v___x_2913_; lean_object* v___x_2915_; 
lean_dec(v_idx_2901_);
lean_dec_ref(v_v_2900_);
lean_dec_ref(v_inst_2899_);
v___x_2913_ = lean_box(0);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 0, v___x_2913_);
v___x_2915_ = v___x_2908_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v___x_2913_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
}
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
lean_del_object(v___x_2908_);
v___x_2917_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_2918_ = lean_string_append(v_v_2900_, v___x_2917_);
v___x_2919_ = l_Nat_reprFast(v_idx_2901_);
v___x_2920_ = lean_string_append(v___x_2918_, v___x_2919_);
lean_dec_ref(v___x_2919_);
v___x_2921_ = lean_near_storage_read(v___x_2920_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2936_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2924_ = v___x_2921_;
v_isShared_2925_ = v_isSharedCheck_2936_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2921_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2936_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
if (lean_obj_tag(v_a_2922_) == 0)
{
lean_object* v___x_2926_; lean_object* v___x_2928_; 
lean_dec_ref(v_inst_2899_);
v___x_2926_ = lean_box(0);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v___x_2926_);
v___x_2928_ = v___x_2924_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
else
{
lean_object* v_val_2930_; lean_object* v_decode_2931_; lean_object* v___x_2932_; lean_object* v___x_2934_; 
v_val_2930_ = lean_ctor_get(v_a_2922_, 0);
lean_inc(v_val_2930_);
lean_dec_ref_known(v_a_2922_, 1);
v_decode_2931_ = lean_ctor_get(v_inst_2899_, 1);
lean_inc_ref(v_decode_2931_);
lean_dec_ref(v_inst_2899_);
v___x_2932_ = lean_apply_1(v_decode_2931_, v_val_2930_);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 0, v___x_2932_);
v___x_2934_ = v___x_2924_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v___x_2932_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
else
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
lean_dec_ref(v_inst_2899_);
v_a_2937_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2921_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2921_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
lean_dec(v_idx_2901_);
lean_dec_ref(v_v_2900_);
lean_dec_ref(v_inst_2899_);
v_a_2953_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2905_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2905_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get___redArg___boxed(lean_object* v_inst_2961_, lean_object* v_v_2962_, lean_object* v_idx_2963_, lean_object* v_a_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Near_Store_Vector_get___redArg(v_inst_2961_, v_v_2962_, v_idx_2963_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get(lean_object* v_00_u03b1_2966_, lean_object* v_inst_2967_, lean_object* v_v_2968_, lean_object* v_idx_2969_){
_start:
{
lean_object* v_a_2972_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v___x_3004_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_2968_);
v___x_3005_ = lean_string_append(v_v_2968_, v___x_3004_);
v___x_3006_ = lean_near_storage_read(v___x_3005_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; lean_object* v___x_3008_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_3006_, 1);
v___x_3008_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3007_) == 0)
{
v_a_2972_ = v___x_3008_;
goto v___jp_2971_;
}
else
{
lean_object* v_val_3009_; lean_object* v___x_3010_; 
v_val_3009_ = lean_ctor_get(v_a_3007_, 0);
lean_inc(v_val_3009_);
lean_dec_ref_known(v_a_3007_, 1);
v___x_3010_ = lean_string_data(v_val_3009_);
if (lean_obj_tag(v___x_3010_) == 0)
{
v_a_2972_ = v___x_3008_;
goto v___jp_2971_;
}
else
{
lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___f_3011_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3012_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3013_ = l_List_foldl___redArg(v___f_3011_, v___x_3012_, v___x_3010_);
if (lean_obj_tag(v___x_3013_) == 0)
{
v_a_2972_ = v___x_3008_;
goto v___jp_2971_;
}
else
{
lean_object* v_val_3014_; 
v_val_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_val_3014_);
lean_dec_ref_known(v___x_3013_, 1);
v_a_2972_ = v_val_3014_;
goto v___jp_2971_;
}
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_dec(v_idx_2969_);
lean_dec_ref(v_v_2968_);
lean_dec_ref(v_inst_2967_);
v_a_3015_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3006_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_3006_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
v___jp_2971_:
{
uint8_t v___x_2973_; 
v___x_2973_ = lean_nat_dec_lt(v_idx_2969_, v_a_2972_);
lean_dec(v_a_2972_);
if (v___x_2973_ == 0)
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
lean_dec(v_idx_2969_);
lean_dec_ref(v_v_2968_);
lean_dec_ref(v_inst_2967_);
v___x_2974_ = lean_box(0);
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
return v___x_2975_;
}
else
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2976_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_2977_ = lean_string_append(v_v_2968_, v___x_2976_);
v___x_2978_ = l_Nat_reprFast(v_idx_2969_);
v___x_2979_ = lean_string_append(v___x_2977_, v___x_2978_);
lean_dec_ref(v___x_2978_);
v___x_2980_ = lean_near_storage_read(v___x_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2995_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2995_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2995_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
if (lean_obj_tag(v_a_2981_) == 0)
{
lean_object* v___x_2985_; lean_object* v___x_2987_; 
lean_dec_ref(v_inst_2967_);
v___x_2985_ = lean_box(0);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2985_);
v___x_2987_ = v___x_2983_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2985_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
else
{
lean_object* v_val_2989_; lean_object* v_decode_2990_; lean_object* v___x_2991_; lean_object* v___x_2993_; 
v_val_2989_ = lean_ctor_get(v_a_2981_, 0);
lean_inc(v_val_2989_);
lean_dec_ref_known(v_a_2981_, 1);
v_decode_2990_ = lean_ctor_get(v_inst_2967_, 1);
lean_inc_ref(v_decode_2990_);
lean_dec_ref(v_inst_2967_);
v___x_2991_ = lean_apply_1(v_decode_2990_, v_val_2989_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2991_);
v___x_2993_ = v___x_2983_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2991_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v_inst_2967_);
v_a_2996_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2980_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2980_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get___boxed(lean_object* v_00_u03b1_3023_, lean_object* v_inst_3024_, lean_object* v_v_3025_, lean_object* v_idx_3026_, lean_object* v_a_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_Near_Store_Vector_get(v_00_u03b1_3023_, v_inst_3024_, v_v_3025_, v_idx_3026_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21___redArg(lean_object* v_inst_3029_, lean_object* v_v_3030_, lean_object* v_idx_3031_, lean_object* v_default_3032_){
_start:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3034_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3030_);
v___x_3035_ = lean_string_append(v_v_3030_, v___x_3034_);
v___x_3036_ = lean_near_storage_read(v___x_3035_);
if (lean_obj_tag(v___x_3036_) == 0)
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3085_; 
v_a_3037_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3039_ = v___x_3036_;
v_isShared_3040_ = v_isSharedCheck_3085_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_3036_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3085_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v_a_3042_; lean_object* v___x_3078_; 
v___x_3078_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3037_) == 0)
{
v_a_3042_ = v___x_3078_;
goto v___jp_3041_;
}
else
{
lean_object* v_val_3079_; lean_object* v___x_3080_; 
v_val_3079_ = lean_ctor_get(v_a_3037_, 0);
lean_inc(v_val_3079_);
lean_dec_ref_known(v_a_3037_, 1);
v___x_3080_ = lean_string_data(v_val_3079_);
if (lean_obj_tag(v___x_3080_) == 0)
{
v_a_3042_ = v___x_3078_;
goto v___jp_3041_;
}
else
{
lean_object* v___f_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___f_3081_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3082_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3083_ = l_List_foldl___redArg(v___f_3081_, v___x_3082_, v___x_3080_);
if (lean_obj_tag(v___x_3083_) == 0)
{
v_a_3042_ = v___x_3078_;
goto v___jp_3041_;
}
else
{
lean_object* v_val_3084_; 
v_val_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_val_3084_);
lean_dec_ref_known(v___x_3083_, 1);
v_a_3042_ = v_val_3084_;
goto v___jp_3041_;
}
}
}
v___jp_3041_:
{
uint8_t v___x_3043_; 
v___x_3043_ = lean_nat_dec_lt(v_idx_3031_, v_a_3042_);
lean_dec(v_a_3042_);
if (v___x_3043_ == 0)
{
lean_object* v___x_3045_; 
lean_dec(v_idx_3031_);
lean_dec_ref(v_v_3030_);
lean_dec_ref(v_inst_3029_);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v_default_3032_);
v___x_3045_ = v___x_3039_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_default_3032_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
else
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_del_object(v___x_3039_);
v___x_3047_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_3048_ = lean_string_append(v_v_3030_, v___x_3047_);
v___x_3049_ = l_Nat_reprFast(v_idx_3031_);
v___x_3050_ = lean_string_append(v___x_3048_, v___x_3049_);
lean_dec_ref(v___x_3049_);
v___x_3051_ = lean_near_storage_read(v___x_3050_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3069_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3054_ = v___x_3051_;
v_isShared_3055_ = v_isSharedCheck_3069_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3051_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3069_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
if (lean_obj_tag(v_a_3052_) == 0)
{
lean_object* v___x_3057_; 
lean_dec_ref(v_inst_3029_);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 0, v_default_3032_);
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_default_3032_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
else
{
lean_object* v_val_3059_; lean_object* v_decode_3060_; lean_object* v___x_3061_; 
v_val_3059_ = lean_ctor_get(v_a_3052_, 0);
lean_inc(v_val_3059_);
lean_dec_ref_known(v_a_3052_, 1);
v_decode_3060_ = lean_ctor_get(v_inst_3029_, 1);
lean_inc_ref(v_decode_3060_);
lean_dec_ref(v_inst_3029_);
v___x_3061_ = lean_apply_1(v_decode_3060_, v_val_3059_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_object* v___x_3063_; 
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 0, v_default_3032_);
v___x_3063_ = v___x_3054_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_default_3032_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
else
{
lean_object* v_val_3065_; lean_object* v___x_3067_; 
lean_dec(v_default_3032_);
v_val_3065_ = lean_ctor_get(v___x_3061_, 0);
lean_inc(v_val_3065_);
lean_dec_ref_known(v___x_3061_, 1);
if (v_isShared_3055_ == 0)
{
lean_ctor_set(v___x_3054_, 0, v_val_3065_);
v___x_3067_ = v___x_3054_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_val_3065_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_dec(v_default_3032_);
lean_dec_ref(v_inst_3029_);
v_a_3070_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3051_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3051_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec(v_default_3032_);
lean_dec(v_idx_3031_);
lean_dec_ref(v_v_3030_);
lean_dec_ref(v_inst_3029_);
v_a_3086_ = lean_ctor_get(v___x_3036_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3036_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3036_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3036_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21___redArg___boxed(lean_object* v_inst_3094_, lean_object* v_v_3095_, lean_object* v_idx_3096_, lean_object* v_default_3097_, lean_object* v_a_3098_){
_start:
{
lean_object* v_res_3099_; 
v_res_3099_ = l_Near_Store_Vector_get_x21___redArg(v_inst_3094_, v_v_3095_, v_idx_3096_, v_default_3097_);
return v_res_3099_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21(lean_object* v_00_u03b1_3100_, lean_object* v_inst_3101_, lean_object* v_v_3102_, lean_object* v_idx_3103_, lean_object* v_default_3104_){
_start:
{
lean_object* v_a_3107_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3141_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3102_);
v___x_3142_ = lean_string_append(v_v_3102_, v___x_3141_);
v___x_3143_ = lean_near_storage_read(v___x_3142_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; lean_object* v___x_3145_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
v___x_3145_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3144_) == 0)
{
v_a_3107_ = v___x_3145_;
goto v___jp_3106_;
}
else
{
lean_object* v_val_3146_; lean_object* v___x_3147_; 
v_val_3146_ = lean_ctor_get(v_a_3144_, 0);
lean_inc(v_val_3146_);
lean_dec_ref_known(v_a_3144_, 1);
v___x_3147_ = lean_string_data(v_val_3146_);
if (lean_obj_tag(v___x_3147_) == 0)
{
v_a_3107_ = v___x_3145_;
goto v___jp_3106_;
}
else
{
lean_object* v___f_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; 
v___f_3148_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3149_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3150_ = l_List_foldl___redArg(v___f_3148_, v___x_3149_, v___x_3147_);
if (lean_obj_tag(v___x_3150_) == 0)
{
v_a_3107_ = v___x_3145_;
goto v___jp_3106_;
}
else
{
lean_object* v_val_3151_; 
v_val_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_val_3151_);
lean_dec_ref_known(v___x_3150_, 1);
v_a_3107_ = v_val_3151_;
goto v___jp_3106_;
}
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_dec(v_default_3104_);
lean_dec(v_idx_3103_);
lean_dec_ref(v_v_3102_);
lean_dec_ref(v_inst_3101_);
v_a_3152_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3143_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3143_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3157_; 
if (v_isShared_3155_ == 0)
{
v___x_3157_ = v___x_3154_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3158_; 
v_reuseFailAlloc_3158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3158_, 0, v_a_3152_);
v___x_3157_ = v_reuseFailAlloc_3158_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
return v___x_3157_;
}
}
}
v___jp_3106_:
{
uint8_t v___x_3108_; 
v___x_3108_ = lean_nat_dec_lt(v_idx_3103_, v_a_3107_);
lean_dec(v_a_3107_);
if (v___x_3108_ == 0)
{
lean_object* v___x_3109_; 
lean_dec(v_idx_3103_);
lean_dec_ref(v_v_3102_);
lean_dec_ref(v_inst_3101_);
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_default_3104_);
return v___x_3109_;
}
else
{
lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3110_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_3111_ = lean_string_append(v_v_3102_, v___x_3110_);
v___x_3112_ = l_Nat_reprFast(v_idx_3103_);
v___x_3113_ = lean_string_append(v___x_3111_, v___x_3112_);
lean_dec_ref(v___x_3112_);
v___x_3114_ = lean_near_storage_read(v___x_3113_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3132_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3132_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3132_ == 0)
{
v___x_3117_ = v___x_3114_;
v_isShared_3118_ = v_isSharedCheck_3132_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3132_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
if (lean_obj_tag(v_a_3115_) == 0)
{
lean_object* v___x_3120_; 
lean_dec_ref(v_inst_3101_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v_default_3104_);
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_default_3104_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
else
{
lean_object* v_val_3122_; lean_object* v_decode_3123_; lean_object* v___x_3124_; 
v_val_3122_ = lean_ctor_get(v_a_3115_, 0);
lean_inc(v_val_3122_);
lean_dec_ref_known(v_a_3115_, 1);
v_decode_3123_ = lean_ctor_get(v_inst_3101_, 1);
lean_inc_ref(v_decode_3123_);
lean_dec_ref(v_inst_3101_);
v___x_3124_ = lean_apply_1(v_decode_3123_, v_val_3122_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v___x_3126_; 
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v_default_3104_);
v___x_3126_ = v___x_3117_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_default_3104_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
else
{
lean_object* v_val_3128_; lean_object* v___x_3130_; 
lean_dec(v_default_3104_);
v_val_3128_ = lean_ctor_get(v___x_3124_, 0);
lean_inc(v_val_3128_);
lean_dec_ref_known(v___x_3124_, 1);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v_val_3128_);
v___x_3130_ = v___x_3117_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3131_; 
v_reuseFailAlloc_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3131_, 0, v_val_3128_);
v___x_3130_ = v_reuseFailAlloc_3131_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
return v___x_3130_;
}
}
}
}
}
else
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3140_; 
lean_dec(v_default_3104_);
lean_dec_ref(v_inst_3101_);
v_a_3133_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3135_ = v___x_3114_;
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3114_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3140_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3133_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_get_x21___boxed(lean_object* v_00_u03b1_3160_, lean_object* v_inst_3161_, lean_object* v_v_3162_, lean_object* v_idx_3163_, lean_object* v_default_3164_, lean_object* v_a_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Near_Store_Vector_get_x21(v_00_u03b1_3160_, v_inst_3161_, v_v_3162_, v_idx_3163_, v_default_3164_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_set___redArg(lean_object* v_inst_3167_, lean_object* v_v_3168_, lean_object* v_idx_3169_, lean_object* v_value_3170_){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3172_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3168_);
v___x_3173_ = lean_string_append(v_v_3168_, v___x_3172_);
v___x_3174_ = lean_near_storage_read(v___x_3173_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3200_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3200_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3200_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v_a_3180_; lean_object* v___x_3193_; 
v___x_3193_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3175_) == 0)
{
v_a_3180_ = v___x_3193_;
goto v___jp_3179_;
}
else
{
lean_object* v_val_3194_; lean_object* v___x_3195_; 
v_val_3194_ = lean_ctor_get(v_a_3175_, 0);
lean_inc(v_val_3194_);
lean_dec_ref_known(v_a_3175_, 1);
v___x_3195_ = lean_string_data(v_val_3194_);
if (lean_obj_tag(v___x_3195_) == 0)
{
v_a_3180_ = v___x_3193_;
goto v___jp_3179_;
}
else
{
lean_object* v___f_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___f_3196_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3197_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3198_ = l_List_foldl___redArg(v___f_3196_, v___x_3197_, v___x_3195_);
if (lean_obj_tag(v___x_3198_) == 0)
{
v_a_3180_ = v___x_3193_;
goto v___jp_3179_;
}
else
{
lean_object* v_val_3199_; 
v_val_3199_ = lean_ctor_get(v___x_3198_, 0);
lean_inc(v_val_3199_);
lean_dec_ref_known(v___x_3198_, 1);
v_a_3180_ = v_val_3199_;
goto v___jp_3179_;
}
}
}
v___jp_3179_:
{
uint8_t v___x_3181_; 
v___x_3181_ = lean_nat_dec_lt(v_idx_3169_, v_a_3180_);
lean_dec(v_a_3180_);
if (v___x_3181_ == 0)
{
lean_object* v___x_3182_; lean_object* v___x_3184_; 
lean_dec(v_value_3170_);
lean_dec(v_idx_3169_);
lean_dec_ref(v_v_3168_);
lean_dec_ref(v_inst_3167_);
v___x_3182_ = lean_box(v___x_3181_);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 0, v___x_3182_);
v___x_3184_ = v___x_3177_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v___x_3182_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
else
{
lean_object* v_encode_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
lean_del_object(v___x_3177_);
v_encode_3186_ = lean_ctor_get(v_inst_3167_, 0);
lean_inc_ref(v_encode_3186_);
lean_dec_ref(v_inst_3167_);
v___x_3187_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_3188_ = lean_string_append(v_v_3168_, v___x_3187_);
v___x_3189_ = l_Nat_reprFast(v_idx_3169_);
v___x_3190_ = lean_string_append(v___x_3188_, v___x_3189_);
lean_dec_ref(v___x_3189_);
v___x_3191_ = lean_apply_1(v_encode_3186_, v_value_3170_);
v___x_3192_ = lean_near_storage_write(v___x_3190_, v___x_3191_);
return v___x_3192_;
}
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
lean_dec(v_value_3170_);
lean_dec(v_idx_3169_);
lean_dec_ref(v_v_3168_);
lean_dec_ref(v_inst_3167_);
v_a_3201_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3174_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3174_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_set___redArg___boxed(lean_object* v_inst_3209_, lean_object* v_v_3210_, lean_object* v_idx_3211_, lean_object* v_value_3212_, lean_object* v_a_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Near_Store_Vector_set___redArg(v_inst_3209_, v_v_3210_, v_idx_3211_, v_value_3212_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_set(lean_object* v_00_u03b1_3215_, lean_object* v_inst_3216_, lean_object* v_v_3217_, lean_object* v_idx_3218_, lean_object* v_value_3219_){
_start:
{
lean_object* v_a_3222_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3217_);
v___x_3234_ = lean_string_append(v_v_3217_, v___x_3233_);
v___x_3235_ = lean_near_storage_read(v___x_3234_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3237_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3235_, 1);
v___x_3237_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3236_) == 0)
{
v_a_3222_ = v___x_3237_;
goto v___jp_3221_;
}
else
{
lean_object* v_val_3238_; lean_object* v___x_3239_; 
v_val_3238_ = lean_ctor_get(v_a_3236_, 0);
lean_inc(v_val_3238_);
lean_dec_ref_known(v_a_3236_, 1);
v___x_3239_ = lean_string_data(v_val_3238_);
if (lean_obj_tag(v___x_3239_) == 0)
{
v_a_3222_ = v___x_3237_;
goto v___jp_3221_;
}
else
{
lean_object* v___f_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___f_3240_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3241_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3242_ = l_List_foldl___redArg(v___f_3240_, v___x_3241_, v___x_3239_);
if (lean_obj_tag(v___x_3242_) == 0)
{
v_a_3222_ = v___x_3237_;
goto v___jp_3221_;
}
else
{
lean_object* v_val_3243_; 
v_val_3243_ = lean_ctor_get(v___x_3242_, 0);
lean_inc(v_val_3243_);
lean_dec_ref_known(v___x_3242_, 1);
v_a_3222_ = v_val_3243_;
goto v___jp_3221_;
}
}
}
}
else
{
lean_object* v_a_3244_; lean_object* v___x_3246_; uint8_t v_isShared_3247_; uint8_t v_isSharedCheck_3251_; 
lean_dec(v_value_3219_);
lean_dec(v_idx_3218_);
lean_dec_ref(v_v_3217_);
lean_dec_ref(v_inst_3216_);
v_a_3244_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3246_ = v___x_3235_;
v_isShared_3247_ = v_isSharedCheck_3251_;
goto v_resetjp_3245_;
}
else
{
lean_inc(v_a_3244_);
lean_dec(v___x_3235_);
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
v_reuseFailAlloc_3250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v_a_3244_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
v___jp_3221_:
{
uint8_t v___x_3223_; 
v___x_3223_ = lean_nat_dec_lt(v_idx_3218_, v_a_3222_);
lean_dec(v_a_3222_);
if (v___x_3223_ == 0)
{
lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_dec(v_value_3219_);
lean_dec(v_idx_3218_);
lean_dec_ref(v_v_3217_);
lean_dec_ref(v_inst_3216_);
v___x_3224_ = lean_box(v___x_3223_);
v___x_3225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3224_);
return v___x_3225_;
}
else
{
lean_object* v_encode_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_encode_3226_ = lean_ctor_get(v_inst_3216_, 0);
lean_inc_ref(v_encode_3226_);
lean_dec_ref(v_inst_3216_);
v___x_3227_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_3228_ = lean_string_append(v_v_3217_, v___x_3227_);
v___x_3229_ = l_Nat_reprFast(v_idx_3218_);
v___x_3230_ = lean_string_append(v___x_3228_, v___x_3229_);
lean_dec_ref(v___x_3229_);
v___x_3231_ = lean_apply_1(v_encode_3226_, v_value_3219_);
v___x_3232_ = lean_near_storage_write(v___x_3230_, v___x_3231_);
return v___x_3232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_set___boxed(lean_object* v_00_u03b1_3252_, lean_object* v_inst_3253_, lean_object* v_v_3254_, lean_object* v_idx_3255_, lean_object* v_value_3256_, lean_object* v_a_3257_){
_start:
{
lean_object* v_res_3258_; 
v_res_3258_ = l_Near_Store_Vector_set(v_00_u03b1_3252_, v_inst_3253_, v_v_3254_, v_idx_3255_, v_value_3256_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_push___redArg(lean_object* v_inst_3259_, lean_object* v_v_3260_, lean_object* v_value_3261_){
_start:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3263_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3260_);
v___x_3264_ = lean_string_append(v_v_3260_, v___x_3263_);
lean_inc_ref(v___x_3264_);
v___x_3265_ = lean_near_storage_read(v___x_3264_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v_a_3268_; lean_object* v___x_3304_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_a_3266_);
lean_dec_ref_known(v___x_3265_, 1);
v___x_3304_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3266_) == 0)
{
v_a_3268_ = v___x_3304_;
goto v___jp_3267_;
}
else
{
lean_object* v_val_3305_; lean_object* v___x_3306_; 
v_val_3305_ = lean_ctor_get(v_a_3266_, 0);
lean_inc(v_val_3305_);
lean_dec_ref_known(v_a_3266_, 1);
v___x_3306_ = lean_string_data(v_val_3305_);
if (lean_obj_tag(v___x_3306_) == 0)
{
v_a_3268_ = v___x_3304_;
goto v___jp_3267_;
}
else
{
lean_object* v___f_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___f_3307_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3308_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3309_ = l_List_foldl___redArg(v___f_3307_, v___x_3308_, v___x_3306_);
if (lean_obj_tag(v___x_3309_) == 0)
{
v_a_3268_ = v___x_3304_;
goto v___jp_3267_;
}
else
{
lean_object* v_val_3310_; 
v_val_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_val_3310_);
lean_dec_ref_known(v___x_3309_, 1);
v_a_3268_ = v_val_3310_;
goto v___jp_3267_;
}
}
}
v___jp_3267_:
{
lean_object* v_encode_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v_encode_3269_ = lean_ctor_get(v_inst_3259_, 0);
lean_inc_ref(v_encode_3269_);
lean_dec_ref(v_inst_3259_);
v___x_3270_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
v___x_3271_ = lean_string_append(v_v_3260_, v___x_3270_);
lean_inc(v_a_3268_);
v___x_3272_ = l_Nat_reprFast(v_a_3268_);
v___x_3273_ = lean_string_append(v___x_3271_, v___x_3272_);
lean_dec_ref(v___x_3272_);
v___x_3274_ = lean_apply_1(v_encode_3269_, v_value_3261_);
v___x_3275_ = lean_near_storage_write(v___x_3273_, v___x_3274_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
lean_dec_ref_known(v___x_3275_, 1);
v___x_3276_ = lean_unsigned_to_nat(1u);
v___x_3277_ = lean_nat_add(v_a_3268_, v___x_3276_);
v___x_3278_ = l_Nat_reprFast(v___x_3277_);
v___x_3279_ = lean_near_storage_write(v___x_3264_, v___x_3278_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; 
v_unused_3287_ = lean_ctor_get(v___x_3279_, 0);
lean_dec(v_unused_3287_);
v___x_3281_ = v___x_3279_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_dec(v___x_3279_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 0, v_a_3268_);
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3268_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
else
{
lean_object* v_a_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3295_; 
lean_dec(v_a_3268_);
v_a_3288_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3295_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3290_ = v___x_3279_;
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_a_3288_);
lean_dec(v___x_3279_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3295_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___x_3293_; 
if (v_isShared_3291_ == 0)
{
v___x_3293_ = v___x_3290_;
goto v_reusejp_3292_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v_a_3288_);
v___x_3293_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3292_;
}
v_reusejp_3292_:
{
return v___x_3293_;
}
}
}
}
else
{
lean_object* v_a_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3303_; 
lean_dec(v_a_3268_);
lean_dec_ref(v___x_3264_);
v_a_3296_ = lean_ctor_get(v___x_3275_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3275_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3298_ = v___x_3275_;
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
else
{
lean_inc(v_a_3296_);
lean_dec(v___x_3275_);
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
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec_ref(v___x_3264_);
lean_dec(v_value_3261_);
lean_dec_ref(v_v_3260_);
lean_dec_ref(v_inst_3259_);
v_a_3311_ = lean_ctor_get(v___x_3265_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3265_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3265_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_push___redArg___boxed(lean_object* v_inst_3319_, lean_object* v_v_3320_, lean_object* v_value_3321_, lean_object* v_a_3322_){
_start:
{
lean_object* v_res_3323_; 
v_res_3323_ = l_Near_Store_Vector_push___redArg(v_inst_3319_, v_v_3320_, v_value_3321_);
return v_res_3323_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_push(lean_object* v_00_u03b1_3324_, lean_object* v_inst_3325_, lean_object* v_v_3326_, lean_object* v_value_3327_){
_start:
{
lean_object* v_a_3330_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3368_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3326_);
v___x_3369_ = lean_string_append(v_v_3326_, v___x_3368_);
v___x_3370_ = lean_near_storage_read(v___x_3369_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_a_3371_; lean_object* v___x_3372_; 
v_a_3371_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_a_3371_);
lean_dec_ref_known(v___x_3370_, 1);
v___x_3372_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3371_) == 0)
{
v_a_3330_ = v___x_3372_;
goto v___jp_3329_;
}
else
{
lean_object* v_val_3373_; lean_object* v___x_3374_; 
v_val_3373_ = lean_ctor_get(v_a_3371_, 0);
lean_inc(v_val_3373_);
lean_dec_ref_known(v_a_3371_, 1);
v___x_3374_ = lean_string_data(v_val_3373_);
if (lean_obj_tag(v___x_3374_) == 0)
{
v_a_3330_ = v___x_3372_;
goto v___jp_3329_;
}
else
{
lean_object* v___f_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___f_3375_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3376_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3377_ = l_List_foldl___redArg(v___f_3375_, v___x_3376_, v___x_3374_);
if (lean_obj_tag(v___x_3377_) == 0)
{
v_a_3330_ = v___x_3372_;
goto v___jp_3329_;
}
else
{
lean_object* v_val_3378_; 
v_val_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_val_3378_);
lean_dec_ref_known(v___x_3377_, 1);
v_a_3330_ = v_val_3378_;
goto v___jp_3329_;
}
}
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
lean_dec(v_value_3327_);
lean_dec_ref(v_v_3326_);
lean_dec_ref(v_inst_3325_);
v_a_3379_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3370_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3370_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
v___jp_3329_:
{
lean_object* v_encode_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v_encode_3331_ = lean_ctor_get(v_inst_3325_, 0);
lean_inc_ref(v_encode_3331_);
lean_dec_ref(v_inst_3325_);
v___x_3332_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
lean_inc_ref(v_v_3326_);
v___x_3333_ = lean_string_append(v_v_3326_, v___x_3332_);
lean_inc(v_a_3330_);
v___x_3334_ = l_Nat_reprFast(v_a_3330_);
v___x_3335_ = lean_string_append(v___x_3333_, v___x_3334_);
lean_dec_ref(v___x_3334_);
v___x_3336_ = lean_apply_1(v_encode_3331_, v_value_3327_);
v___x_3337_ = lean_near_storage_write(v___x_3335_, v___x_3336_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
lean_dec_ref_known(v___x_3337_, 1);
v___x_3338_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_3339_ = lean_string_append(v_v_3326_, v___x_3338_);
v___x_3340_ = lean_unsigned_to_nat(1u);
v___x_3341_ = lean_nat_add(v_a_3330_, v___x_3340_);
v___x_3342_ = l_Nat_reprFast(v___x_3341_);
v___x_3343_ = lean_near_storage_write(v___x_3339_, v___x_3342_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3350_ == 0)
{
lean_object* v_unused_3351_; 
v_unused_3351_ = lean_ctor_get(v___x_3343_, 0);
lean_dec(v_unused_3351_);
v___x_3345_ = v___x_3343_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_dec(v___x_3343_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
lean_ctor_set(v___x_3345_, 0, v_a_3330_);
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3330_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec(v_a_3330_);
v_a_3352_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3343_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3343_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
else
{
lean_object* v_a_3360_; lean_object* v___x_3362_; uint8_t v_isShared_3363_; uint8_t v_isSharedCheck_3367_; 
lean_dec(v_a_3330_);
lean_dec_ref(v_v_3326_);
v_a_3360_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3362_ = v___x_3337_;
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
else
{
lean_inc(v_a_3360_);
lean_dec(v___x_3337_);
v___x_3362_ = lean_box(0);
v_isShared_3363_ = v_isSharedCheck_3367_;
goto v_resetjp_3361_;
}
v_resetjp_3361_:
{
lean_object* v___x_3365_; 
if (v_isShared_3363_ == 0)
{
v___x_3365_ = v___x_3362_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_a_3360_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_push___boxed(lean_object* v_00_u03b1_3387_, lean_object* v_inst_3388_, lean_object* v_v_3389_, lean_object* v_value_3390_, lean_object* v_a_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Near_Store_Vector_push(v_00_u03b1_3387_, v_inst_3388_, v_v_3389_, v_value_3390_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop___redArg(lean_object* v_inst_3393_, lean_object* v_v_3394_){
_start:
{
lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v_a_3399_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3428_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3394_);
v___x_3429_ = lean_string_append(v_v_3394_, v___x_3428_);
v___x_3430_ = lean_near_storage_read(v___x_3429_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3470_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3433_ = v___x_3430_;
v_isShared_3434_ = v_isSharedCheck_3470_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3430_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3470_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v_a_3436_; lean_object* v___x_3463_; 
v___x_3463_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3431_) == 0)
{
v_a_3436_ = v___x_3463_;
goto v___jp_3435_;
}
else
{
lean_object* v_val_3464_; lean_object* v___x_3465_; 
v_val_3464_ = lean_ctor_get(v_a_3431_, 0);
lean_inc(v_val_3464_);
lean_dec_ref_known(v_a_3431_, 1);
v___x_3465_ = lean_string_data(v_val_3464_);
if (lean_obj_tag(v___x_3465_) == 0)
{
v_a_3436_ = v___x_3463_;
goto v___jp_3435_;
}
else
{
lean_object* v___f_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___f_3466_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3467_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3468_ = l_List_foldl___redArg(v___f_3466_, v___x_3467_, v___x_3465_);
if (lean_obj_tag(v___x_3468_) == 0)
{
v_a_3436_ = v___x_3463_;
goto v___jp_3435_;
}
else
{
lean_object* v_val_3469_; 
v_val_3469_ = lean_ctor_get(v___x_3468_, 0);
lean_inc(v_val_3469_);
lean_dec_ref_known(v___x_3468_, 1);
v_a_3436_ = v_val_3469_;
goto v___jp_3435_;
}
}
}
v___jp_3435_:
{
lean_object* v___x_3437_; uint8_t v___x_3438_; 
v___x_3437_ = lean_unsigned_to_nat(0u);
v___x_3438_ = lean_nat_dec_eq(v_a_3436_, v___x_3437_);
if (v___x_3438_ == 0)
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
lean_del_object(v___x_3433_);
v___x_3439_ = lean_unsigned_to_nat(1u);
v___x_3440_ = lean_nat_sub(v_a_3436_, v___x_3439_);
lean_dec(v_a_3436_);
v___x_3441_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
lean_inc_ref(v_v_3394_);
v___x_3442_ = lean_string_append(v_v_3394_, v___x_3441_);
v___x_3443_ = l_Nat_reprFast(v___x_3440_);
v___x_3444_ = lean_string_append(v___x_3442_, v___x_3443_);
lean_inc_ref(v___x_3444_);
v___x_3445_ = lean_near_storage_read(v___x_3444_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
if (lean_obj_tag(v_a_3446_) == 0)
{
lean_object* v___x_3447_; 
lean_dec_ref(v_inst_3393_);
v___x_3447_ = lean_box(0);
v___y_3397_ = v___x_3444_;
v___y_3398_ = v___x_3443_;
v_a_3399_ = v___x_3447_;
goto v___jp_3396_;
}
else
{
lean_object* v_val_3448_; lean_object* v_decode_3449_; lean_object* v___x_3450_; 
v_val_3448_ = lean_ctor_get(v_a_3446_, 0);
lean_inc(v_val_3448_);
lean_dec_ref_known(v_a_3446_, 1);
v_decode_3449_ = lean_ctor_get(v_inst_3393_, 1);
lean_inc_ref(v_decode_3449_);
lean_dec_ref(v_inst_3393_);
v___x_3450_ = lean_apply_1(v_decode_3449_, v_val_3448_);
v___y_3397_ = v___x_3444_;
v___y_3398_ = v___x_3443_;
v_a_3399_ = v___x_3450_;
goto v___jp_3396_;
}
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3458_; 
lean_dec_ref(v___x_3444_);
lean_dec_ref(v___x_3443_);
lean_dec_ref(v_v_3394_);
lean_dec_ref(v_inst_3393_);
v_a_3451_ = lean_ctor_get(v___x_3445_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3453_ = v___x_3445_;
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3445_);
v___x_3453_ = lean_box(0);
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
v_resetjp_3452_:
{
lean_object* v___x_3456_; 
if (v_isShared_3454_ == 0)
{
v___x_3456_ = v___x_3453_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3457_; 
v_reuseFailAlloc_3457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3457_, 0, v_a_3451_);
v___x_3456_ = v_reuseFailAlloc_3457_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
return v___x_3456_;
}
}
}
}
else
{
lean_object* v___x_3459_; lean_object* v___x_3461_; 
lean_dec(v_a_3436_);
lean_dec_ref(v_v_3394_);
lean_dec_ref(v_inst_3393_);
v___x_3459_ = lean_box(0);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3459_);
v___x_3461_ = v___x_3433_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3459_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
}
}
else
{
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3478_; 
lean_dec_ref(v_v_3394_);
lean_dec_ref(v_inst_3393_);
v_a_3471_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3473_ = v___x_3430_;
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3430_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3476_; 
if (v_isShared_3474_ == 0)
{
v___x_3476_ = v___x_3473_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3471_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
v___jp_3396_:
{
lean_object* v___x_3400_; 
v___x_3400_ = lean_near_storage_remove(v___y_3397_);
if (lean_obj_tag(v___x_3400_) == 0)
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
lean_dec_ref_known(v___x_3400_, 1);
v___x_3401_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_3402_ = lean_string_append(v_v_3394_, v___x_3401_);
v___x_3403_ = lean_near_storage_write(v___x_3402_, v___y_3398_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v___x_3403_, 0);
lean_dec(v_unused_3411_);
v___x_3405_ = v___x_3403_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_dec(v___x_3403_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
lean_ctor_set(v___x_3405_, 0, v_a_3399_);
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3399_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
else
{
lean_object* v_a_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3419_; 
lean_dec(v_a_3399_);
v_a_3412_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3419_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3419_ == 0)
{
v___x_3414_ = v___x_3403_;
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_a_3412_);
lean_dec(v___x_3403_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3419_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3418_; 
v_reuseFailAlloc_3418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3418_, 0, v_a_3412_);
v___x_3417_ = v_reuseFailAlloc_3418_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
return v___x_3417_;
}
}
}
}
else
{
lean_object* v_a_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3427_; 
lean_dec(v_a_3399_);
lean_dec_ref(v___y_3398_);
lean_dec_ref(v_v_3394_);
v_a_3420_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3427_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3427_ == 0)
{
v___x_3422_ = v___x_3400_;
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_a_3420_);
lean_dec(v___x_3400_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3427_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3425_; 
if (v_isShared_3423_ == 0)
{
v___x_3425_ = v___x_3422_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v_a_3420_);
v___x_3425_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
return v___x_3425_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop___redArg___boxed(lean_object* v_inst_3479_, lean_object* v_v_3480_, lean_object* v_a_3481_){
_start:
{
lean_object* v_res_3482_; 
v_res_3482_ = l_Near_Store_Vector_pop___redArg(v_inst_3479_, v_v_3480_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop(lean_object* v_00_u03b1_3483_, lean_object* v_inst_3484_, lean_object* v_v_3485_){
_start:
{
lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v_a_3490_; lean_object* v_a_3520_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3545_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
lean_inc_ref(v_v_3485_);
v___x_3546_ = lean_string_append(v_v_3485_, v___x_3545_);
v___x_3547_ = lean_near_storage_read(v___x_3546_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v_a_3548_; lean_object* v___x_3549_; 
v_a_3548_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_a_3548_);
lean_dec_ref_known(v___x_3547_, 1);
v___x_3549_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_a_3548_) == 0)
{
v_a_3520_ = v___x_3549_;
goto v___jp_3519_;
}
else
{
lean_object* v_val_3550_; lean_object* v___x_3551_; 
v_val_3550_ = lean_ctor_get(v_a_3548_, 0);
lean_inc(v_val_3550_);
lean_dec_ref_known(v_a_3548_, 1);
v___x_3551_ = lean_string_data(v_val_3550_);
if (lean_obj_tag(v___x_3551_) == 0)
{
v_a_3520_ = v___x_3549_;
goto v___jp_3519_;
}
else
{
lean_object* v___f_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___f_3552_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3553_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3554_ = l_List_foldl___redArg(v___f_3552_, v___x_3553_, v___x_3551_);
if (lean_obj_tag(v___x_3554_) == 0)
{
v_a_3520_ = v___x_3549_;
goto v___jp_3519_;
}
else
{
lean_object* v_val_3555_; 
v_val_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_val_3555_);
lean_dec_ref_known(v___x_3554_, 1);
v_a_3520_ = v_val_3555_;
goto v___jp_3519_;
}
}
}
}
else
{
lean_object* v_a_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3563_; 
lean_dec_ref(v_v_3485_);
lean_dec_ref(v_inst_3484_);
v_a_3556_ = lean_ctor_get(v___x_3547_, 0);
v_isSharedCheck_3563_ = !lean_is_exclusive(v___x_3547_);
if (v_isSharedCheck_3563_ == 0)
{
v___x_3558_ = v___x_3547_;
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_a_3556_);
lean_dec(v___x_3547_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3563_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3561_; 
if (v_isShared_3559_ == 0)
{
v___x_3561_ = v___x_3558_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3562_; 
v_reuseFailAlloc_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3562_, 0, v_a_3556_);
v___x_3561_ = v_reuseFailAlloc_3562_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
return v___x_3561_;
}
}
}
v___jp_3487_:
{
lean_object* v___x_3491_; 
v___x_3491_ = lean_near_storage_remove(v___y_3488_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec_ref_known(v___x_3491_, 1);
v___x_3492_ = ((lean_object*)(l_Near_Store_Vector_lenKey___redArg___closed__0));
v___x_3493_ = lean_string_append(v_v_3485_, v___x_3492_);
v___x_3494_ = lean_near_storage_write(v___x_3493_, v___y_3489_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3501_ == 0)
{
lean_object* v_unused_3502_; 
v_unused_3502_ = lean_ctor_get(v___x_3494_, 0);
lean_dec(v_unused_3502_);
v___x_3496_ = v___x_3494_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_dec(v___x_3494_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
lean_ctor_set(v___x_3496_, 0, v_a_3490_);
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3490_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
else
{
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3510_; 
lean_dec(v_a_3490_);
v_a_3503_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3505_ = v___x_3494_;
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v___x_3494_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3510_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3508_; 
if (v_isShared_3506_ == 0)
{
v___x_3508_ = v___x_3505_;
goto v_reusejp_3507_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v_a_3503_);
v___x_3508_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3507_;
}
v_reusejp_3507_:
{
return v___x_3508_;
}
}
}
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3518_; 
lean_dec(v_a_3490_);
lean_dec_ref(v___y_3489_);
lean_dec_ref(v_v_3485_);
v_a_3511_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3513_ = v___x_3491_;
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3491_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3516_; 
if (v_isShared_3514_ == 0)
{
v___x_3516_ = v___x_3513_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_a_3511_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
v___jp_3519_:
{
lean_object* v___x_3521_; uint8_t v___x_3522_; 
v___x_3521_ = lean_unsigned_to_nat(0u);
v___x_3522_ = lean_nat_dec_eq(v_a_3520_, v___x_3521_);
if (v___x_3522_ == 0)
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3523_ = lean_unsigned_to_nat(1u);
v___x_3524_ = lean_nat_sub(v_a_3520_, v___x_3523_);
lean_dec(v_a_3520_);
v___x_3525_ = ((lean_object*)(l_Near_Store_Vector_itemKey___redArg___closed__0));
lean_inc_ref(v_v_3485_);
v___x_3526_ = lean_string_append(v_v_3485_, v___x_3525_);
v___x_3527_ = l_Nat_reprFast(v___x_3524_);
v___x_3528_ = lean_string_append(v___x_3526_, v___x_3527_);
lean_inc_ref(v___x_3528_);
v___x_3529_ = lean_near_storage_read(v___x_3528_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
if (lean_obj_tag(v_a_3530_) == 0)
{
lean_object* v___x_3531_; 
lean_dec_ref(v_inst_3484_);
v___x_3531_ = lean_box(0);
v___y_3488_ = v___x_3528_;
v___y_3489_ = v___x_3527_;
v_a_3490_ = v___x_3531_;
goto v___jp_3487_;
}
else
{
lean_object* v_val_3532_; lean_object* v_decode_3533_; lean_object* v___x_3534_; 
v_val_3532_ = lean_ctor_get(v_a_3530_, 0);
lean_inc(v_val_3532_);
lean_dec_ref_known(v_a_3530_, 1);
v_decode_3533_ = lean_ctor_get(v_inst_3484_, 1);
lean_inc_ref(v_decode_3533_);
lean_dec_ref(v_inst_3484_);
v___x_3534_ = lean_apply_1(v_decode_3533_, v_val_3532_);
v___y_3488_ = v___x_3528_;
v___y_3489_ = v___x_3527_;
v_a_3490_ = v___x_3534_;
goto v___jp_3487_;
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
lean_dec_ref(v___x_3528_);
lean_dec_ref(v___x_3527_);
lean_dec_ref(v_v_3485_);
lean_dec_ref(v_inst_3484_);
v_a_3535_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3529_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3529_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
else
{
lean_object* v___x_3543_; lean_object* v___x_3544_; 
lean_dec(v_a_3520_);
lean_dec_ref(v_v_3485_);
lean_dec_ref(v_inst_3484_);
v___x_3543_ = lean_box(0);
v___x_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3544_, 0, v___x_3543_);
return v___x_3544_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Store_Vector_pop___boxed(lean_object* v_00_u03b1_3564_, lean_object* v_inst_3565_, lean_object* v_v_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Near_Store_Vector_pop(v_00_u03b1_3564_, v_inst_3565_, v_v_3566_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_3570_){
_start:
{
lean_object* v_res_3571_; 
v_res_3571_ = lean_near_current_account_id();
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_3573_){
_start:
{
lean_object* v_res_3574_; 
v_res_3574_ = lean_near_predecessor_account_id();
return v_res_3574_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_signerAccountId___boxed(lean_object* v_a_00___x40___internal___hyg_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = lean_near_signer_account_id();
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockTimestamp___boxed(lean_object* v_a_00___x40___internal___hyg_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = lean_near_block_timestamp();
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_blockHeight___boxed(lean_object* v_a_00___x40___internal___hyg_3582_){
_start:
{
lean_object* v_res_3583_; 
v_res_3583_ = lean_near_block_height();
return v_res_3583_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_epochHeight___boxed(lean_object* v_a_00___x40___internal___hyg_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = lean_near_epoch_height();
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_storageUsage___boxed(lean_object* v_a_00___x40___internal___hyg_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = lean_near_storage_usage();
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_prepaidGasRaw___boxed(lean_object* v_a_00___x40___internal___hyg_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = lean_near_prepaid_gas();
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_usedGasRaw___boxed(lean_object* v_a_00___x40___internal___hyg_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = lean_near_used_gas();
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_accountBalanceYocto___boxed(lean_object* v_a_00___x40___internal___hyg_3597_){
_start:
{
lean_object* v_res_3598_; 
v_res_3598_ = lean_near_account_balance();
return v_res_3598_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_attachedDepositYocto___boxed(lean_object* v_a_00___x40___internal___hyg_3600_){
_start:
{
lean_object* v_res_3601_; 
v_res_3601_ = lean_near_attached_deposit();
return v_res_3601_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_input___boxed(lean_object* v_a_00___x40___internal___hyg_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = lean_near_input();
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_valueReturn___boxed(lean_object* v_data_3607_, lean_object* v_a_00___x40___internal___hyg_3608_){
_start:
{
lean_object* v_res_3609_; 
v_res_3609_ = lean_near_value_return(v_data_3607_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_log___boxed(lean_object* v_msg_3612_, lean_object* v_a_00___x40___internal___hyg_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = lean_near_log(v_msg_3612_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_panicStr___boxed(lean_object* v_msg_3617_, lean_object* v_a_00___x40___internal___hyg_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = lean_near_panic_str(v_msg_3617_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccount(){
_start:
{
lean_object* v___x_3621_; 
v___x_3621_ = lean_near_current_account_id();
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3629_; 
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3629_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3629_ == 0)
{
v___x_3624_ = v___x_3621_;
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
else
{
lean_inc(v_a_3622_);
lean_dec(v___x_3621_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3629_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3627_; 
if (v_isShared_3625_ == 0)
{
v___x_3627_ = v___x_3624_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v_a_3622_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
}
else
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3637_; 
v_a_3630_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3632_ = v___x_3621_;
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3621_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3637_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3630_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_currentAccount___boxed(lean_object* v_a_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Near_Env_currentAccount();
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount(){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3649_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3644_ = v___x_3641_;
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_a_3642_);
lean_dec(v___x_3641_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3649_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
if (v_isShared_3645_ == 0)
{
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_a_3642_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
else
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3657_; 
v_a_3650_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3652_ = v___x_3641_;
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3641_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_predecessorAccount___boxed(lean_object* v_a_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l_Near_Env_predecessorAccount();
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_signerAccount(){
_start:
{
lean_object* v___x_3661_; 
v___x_3661_ = lean_near_signer_account_id();
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
else
{
lean_object* v_a_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3677_; 
v_a_3670_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3677_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3672_ = v___x_3661_;
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_a_3670_);
lean_dec(v___x_3661_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3677_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3675_; 
if (v_isShared_3673_ == 0)
{
v___x_3675_ = v___x_3672_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v_a_3670_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_signerAccount___boxed(lean_object* v_a_3678_){
_start:
{
lean_object* v_res_3679_; 
v_res_3679_ = l_Near_Env_signerAccount();
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_prepaidGas(){
_start:
{
lean_object* v___x_3681_; 
v___x_3681_ = lean_near_prepaid_gas();
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3681_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3681_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
v_a_3690_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3681_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3681_);
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
LEAN_EXPORT lean_object* l_Near_Env_prepaidGas___boxed(lean_object* v_a_3698_){
_start:
{
lean_object* v_res_3699_; 
v_res_3699_ = l_Near_Env_prepaidGas();
return v_res_3699_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_usedGas(){
_start:
{
lean_object* v___x_3701_; 
v___x_3701_ = lean_near_used_gas();
if (lean_obj_tag(v___x_3701_) == 0)
{
lean_object* v_a_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3709_; 
v_a_3702_ = lean_ctor_get(v___x_3701_, 0);
v_isSharedCheck_3709_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3704_ = v___x_3701_;
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_a_3702_);
lean_dec(v___x_3701_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3709_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
if (v_isShared_3705_ == 0)
{
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_a_3702_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
else
{
lean_object* v_a_3710_; lean_object* v___x_3712_; uint8_t v_isShared_3713_; uint8_t v_isSharedCheck_3717_; 
v_a_3710_ = lean_ctor_get(v___x_3701_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3701_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3712_ = v___x_3701_;
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
else
{
lean_inc(v_a_3710_);
lean_dec(v___x_3701_);
v___x_3712_ = lean_box(0);
v_isShared_3713_ = v_isSharedCheck_3717_;
goto v_resetjp_3711_;
}
v_resetjp_3711_:
{
lean_object* v___x_3715_; 
if (v_isShared_3713_ == 0)
{
v___x_3715_ = v___x_3712_;
goto v_reusejp_3714_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v_a_3710_);
v___x_3715_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3714_;
}
v_reusejp_3714_:
{
return v___x_3715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_usedGas___boxed(lean_object* v_a_3718_){
_start:
{
lean_object* v_res_3719_; 
v_res_3719_ = l_Near_Env_usedGas();
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_parseNearToken(lean_object* v_raw_3720_){
_start:
{
lean_object* v___x_3721_; 
v___x_3721_ = lean_string_data(v_raw_3720_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v___x_3722_; 
v___x_3722_ = lean_unsigned_to_nat(0u);
return v___x_3722_;
}
else
{
lean_object* v___f_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; 
v___f_3723_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3724_ = lean_unsigned_to_nat(0u);
v___x_3725_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3726_ = l_List_foldl___redArg(v___f_3723_, v___x_3725_, v___x_3721_);
if (lean_obj_tag(v___x_3726_) == 0)
{
return v___x_3724_;
}
else
{
lean_object* v_val_3727_; 
v_val_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_val_3727_);
lean_dec_ref_known(v___x_3726_, 1);
return v_val_3727_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_accountBalance(){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = lean_near_account_balance();
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3750_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3732_ = v___x_3729_;
v_isShared_3733_ = v_isSharedCheck_3750_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3729_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3750_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3734_; 
v___x_3734_ = lean_string_data(v_a_3730_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v___x_3735_; lean_object* v___x_3737_; 
v___x_3735_ = lean_unsigned_to_nat(0u);
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 0, v___x_3735_);
v___x_3737_ = v___x_3732_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v___x_3735_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
else
{
lean_object* v___f_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___f_3739_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3740_ = lean_unsigned_to_nat(0u);
v___x_3741_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3742_ = l_List_foldl___redArg(v___f_3739_, v___x_3741_, v___x_3734_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_object* v___x_3744_; 
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 0, v___x_3740_);
v___x_3744_ = v___x_3732_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v___x_3740_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
}
}
else
{
lean_object* v_val_3746_; lean_object* v___x_3748_; 
v_val_3746_ = lean_ctor_get(v___x_3742_, 0);
lean_inc(v_val_3746_);
lean_dec_ref_known(v___x_3742_, 1);
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 0, v_val_3746_);
v___x_3748_ = v___x_3732_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v_val_3746_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
}
}
else
{
lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3758_; 
v_a_3751_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3753_ = v___x_3729_;
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3729_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3758_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3756_; 
if (v_isShared_3754_ == 0)
{
v___x_3756_ = v___x_3753_;
goto v_reusejp_3755_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v_a_3751_);
v___x_3756_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3755_;
}
v_reusejp_3755_:
{
return v___x_3756_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_accountBalance___boxed(lean_object* v_a_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Near_Env_accountBalance();
return v_res_3760_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_attachedDeposit(){
_start:
{
lean_object* v___x_3762_; 
v___x_3762_ = lean_near_attached_deposit();
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3783_; 
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3765_ = v___x_3762_;
v_isShared_3766_ = v_isSharedCheck_3783_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_a_3763_);
lean_dec(v___x_3762_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3783_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3767_; 
v___x_3767_ = lean_string_data(v_a_3763_);
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v___x_3768_; lean_object* v___x_3770_; 
v___x_3768_ = lean_unsigned_to_nat(0u);
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 0, v___x_3768_);
v___x_3770_ = v___x_3765_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v___x_3768_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
else
{
lean_object* v___f_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; 
v___f_3772_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_3773_ = lean_unsigned_to_nat(0u);
v___x_3774_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_3775_ = l_List_foldl___redArg(v___f_3772_, v___x_3774_, v___x_3767_);
if (lean_obj_tag(v___x_3775_) == 0)
{
lean_object* v___x_3777_; 
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 0, v___x_3773_);
v___x_3777_ = v___x_3765_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v___x_3773_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
else
{
lean_object* v_val_3779_; lean_object* v___x_3781_; 
v_val_3779_ = lean_ctor_get(v___x_3775_, 0);
lean_inc(v_val_3779_);
lean_dec_ref_known(v___x_3775_, 1);
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 0, v_val_3779_);
v___x_3781_ = v___x_3765_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_val_3779_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
else
{
lean_object* v_a_3784_; lean_object* v___x_3786_; uint8_t v_isShared_3787_; uint8_t v_isSharedCheck_3791_; 
v_a_3784_ = lean_ctor_get(v___x_3762_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3762_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3786_ = v___x_3762_;
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
else
{
lean_inc(v_a_3784_);
lean_dec(v___x_3762_);
v___x_3786_ = lean_box(0);
v_isShared_3787_ = v_isSharedCheck_3791_;
goto v_resetjp_3785_;
}
v_resetjp_3785_:
{
lean_object* v___x_3789_; 
if (v_isShared_3787_ == 0)
{
v___x_3789_ = v___x_3786_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v_a_3784_);
v___x_3789_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
return v___x_3789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_attachedDeposit___boxed(lean_object* v_a_3792_){
_start:
{
lean_object* v_res_3793_; 
v_res_3793_ = l_Near_Env_attachedDeposit();
return v_res_3793_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_inputString(){
_start:
{
lean_object* v___x_3795_; 
v___x_3795_ = lean_near_input();
return v___x_3795_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_inputString___boxed(lean_object* v_a_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Near_Env_inputString();
return v_res_3797_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3807_ = lean_unsigned_to_nat(18u);
v___x_3808_ = lean_nat_to_int(v___x_3807_);
return v___x_3808_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3815_ = lean_unsigned_to_nat(22u);
v___x_3816_ = lean_nat_to_int(v___x_3815_);
return v___x_3816_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; 
v___x_3823_ = lean_unsigned_to_nat(15u);
v___x_3824_ = lean_nat_to_int(v___x_3823_);
return v___x_3824_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3834_ = lean_unsigned_to_nat(16u);
v___x_3835_ = lean_nat_to_int(v___x_3834_);
return v___x_3835_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = lean_unsigned_to_nat(14u);
v___x_3840_ = lean_nat_to_int(v___x_3839_);
return v___x_3840_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__27(void){
_start:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
v___x_3844_ = lean_unsigned_to_nat(11u);
v___x_3845_ = lean_nat_to_int(v___x_3844_);
return v___x_3845_;
}
}
static lean_object* _init_l_Near_Env_instReprContext_repr___redArg___closed__32(void){
_start:
{
lean_object* v___x_3852_; lean_object* v___x_3853_; 
v___x_3852_ = lean_unsigned_to_nat(19u);
v___x_3853_ = lean_nat_to_int(v___x_3852_);
return v___x_3853_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___redArg(lean_object* v_x_3857_){
_start:
{
lean_object* v_currentAccount_3858_; lean_object* v_predecessorAccount_3859_; lean_object* v_signerAccount_3860_; uint64_t v_blockHeight_3861_; uint64_t v_blockTimestamp_3862_; uint64_t v_epochHeight_3863_; uint64_t v_storageUsage_3864_; uint64_t v_prepaidGas_3865_; uint64_t v_usedGas_3866_; lean_object* v_accountBalance_3867_; lean_object* v_attachedDeposit_3868_; lean_object* v_input_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; uint8_t v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v_currentAccount_3858_ = lean_ctor_get(v_x_3857_, 0);
lean_inc_ref(v_currentAccount_3858_);
v_predecessorAccount_3859_ = lean_ctor_get(v_x_3857_, 1);
lean_inc_ref(v_predecessorAccount_3859_);
v_signerAccount_3860_ = lean_ctor_get(v_x_3857_, 2);
lean_inc_ref(v_signerAccount_3860_);
v_blockHeight_3861_ = lean_ctor_get_uint64(v_x_3857_, sizeof(void*)*6);
v_blockTimestamp_3862_ = lean_ctor_get_uint64(v_x_3857_, sizeof(void*)*6 + 8);
v_epochHeight_3863_ = lean_ctor_get_uint64(v_x_3857_, sizeof(void*)*6 + 16);
v_storageUsage_3864_ = lean_ctor_get_uint64(v_x_3857_, sizeof(void*)*6 + 24);
v_prepaidGas_3865_ = lean_ctor_get_uint64(v_x_3857_, sizeof(void*)*6 + 32);
v_usedGas_3866_ = lean_ctor_get_uint64(v_x_3857_, sizeof(void*)*6 + 40);
v_accountBalance_3867_ = lean_ctor_get(v_x_3857_, 3);
lean_inc(v_accountBalance_3867_);
v_attachedDeposit_3868_ = lean_ctor_get(v_x_3857_, 4);
lean_inc(v_attachedDeposit_3868_);
v_input_3869_ = lean_ctor_get(v_x_3857_, 5);
lean_inc_ref(v_input_3869_);
lean_dec_ref(v_x_3857_);
v___x_3870_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__5));
v___x_3871_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__3));
v___x_3872_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__4, &l_Near_Env_instReprContext_repr___redArg___closed__4_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__4);
v___x_3873_ = ((lean_object*)(l_Near_AccountId_instRepr___lam__0___closed__1));
v___x_3874_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3874_, 0, v_currentAccount_3858_);
v___x_3875_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3873_);
lean_ctor_set(v___x_3875_, 1, v___x_3874_);
v___x_3876_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3875_);
lean_ctor_set(v___x_3876_, 1, v___x_3873_);
v___x_3877_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3872_);
lean_ctor_set(v___x_3877_, 1, v___x_3876_);
v___x_3878_ = 0;
v___x_3879_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3879_, 0, v___x_3877_);
lean_ctor_set_uint8(v___x_3879_, sizeof(void*)*1, v___x_3878_);
v___x_3880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3871_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
v___x_3881_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__6));
v___x_3882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3880_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = lean_box(1);
v___x_3884_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3882_);
lean_ctor_set(v___x_3884_, 1, v___x_3883_);
v___x_3885_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__8));
v___x_3886_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3884_);
lean_ctor_set(v___x_3886_, 1, v___x_3885_);
v___x_3887_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
lean_ctor_set(v___x_3887_, 1, v___x_3870_);
v___x_3888_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__9, &l_Near_Env_instReprContext_repr___redArg___closed__9_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__9);
v___x_3889_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3889_, 0, v_predecessorAccount_3859_);
v___x_3890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3890_, 0, v___x_3873_);
lean_ctor_set(v___x_3890_, 1, v___x_3889_);
v___x_3891_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3891_, 0, v___x_3890_);
lean_ctor_set(v___x_3891_, 1, v___x_3873_);
v___x_3892_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3888_);
lean_ctor_set(v___x_3892_, 1, v___x_3891_);
v___x_3893_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3893_, 0, v___x_3892_);
lean_ctor_set_uint8(v___x_3893_, sizeof(void*)*1, v___x_3878_);
v___x_3894_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3887_);
lean_ctor_set(v___x_3894_, 1, v___x_3893_);
v___x_3895_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3894_);
lean_ctor_set(v___x_3895_, 1, v___x_3881_);
v___x_3896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3895_);
lean_ctor_set(v___x_3896_, 1, v___x_3883_);
v___x_3897_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__11));
v___x_3898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3896_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
lean_ctor_set(v___x_3899_, 1, v___x_3870_);
v___x_3900_ = lean_obj_once(&l_Near_Store_instReprLookupMap_repr___redArg___closed__4, &l_Near_Store_instReprLookupMap_repr___redArg___closed__4_once, _init_l_Near_Store_instReprLookupMap_repr___redArg___closed__4);
v___x_3901_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3901_, 0, v_signerAccount_3860_);
v___x_3902_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3873_);
lean_ctor_set(v___x_3902_, 1, v___x_3901_);
v___x_3903_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3902_);
lean_ctor_set(v___x_3903_, 1, v___x_3873_);
v___x_3904_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3900_);
lean_ctor_set(v___x_3904_, 1, v___x_3903_);
v___x_3905_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
lean_ctor_set_uint8(v___x_3905_, sizeof(void*)*1, v___x_3878_);
v___x_3906_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3899_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3907_, 0, v___x_3906_);
lean_ctor_set(v___x_3907_, 1, v___x_3881_);
v___x_3908_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3907_);
lean_ctor_set(v___x_3908_, 1, v___x_3883_);
v___x_3909_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__13));
v___x_3910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3908_);
lean_ctor_set(v___x_3910_, 1, v___x_3909_);
v___x_3911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3910_);
lean_ctor_set(v___x_3911_, 1, v___x_3870_);
v___x_3912_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__14, &l_Near_Env_instReprContext_repr___redArg___closed__14_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__14);
v___x_3913_ = lean_uint64_to_nat(v_blockHeight_3861_);
v___x_3914_ = l_Nat_reprFast(v___x_3913_);
v___x_3915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
v___x_3916_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3916_, 0, v___x_3912_);
lean_ctor_set(v___x_3916_, 1, v___x_3915_);
v___x_3917_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3917_, 0, v___x_3916_);
lean_ctor_set_uint8(v___x_3917_, sizeof(void*)*1, v___x_3878_);
v___x_3918_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3918_, 0, v___x_3911_);
lean_ctor_set(v___x_3918_, 1, v___x_3917_);
v___x_3919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3918_);
lean_ctor_set(v___x_3919_, 1, v___x_3881_);
v___x_3920_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
lean_ctor_set(v___x_3920_, 1, v___x_3883_);
v___x_3921_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__16));
v___x_3922_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3920_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
v___x_3923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3923_, 0, v___x_3922_);
lean_ctor_set(v___x_3923_, 1, v___x_3870_);
v___x_3924_ = lean_uint64_to_nat(v_blockTimestamp_3862_);
v___x_3925_ = l_Nat_reprFast(v___x_3924_);
v___x_3926_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3925_);
v___x_3927_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3872_);
lean_ctor_set(v___x_3927_, 1, v___x_3926_);
v___x_3928_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3928_, 0, v___x_3927_);
lean_ctor_set_uint8(v___x_3928_, sizeof(void*)*1, v___x_3878_);
v___x_3929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3923_);
lean_ctor_set(v___x_3929_, 1, v___x_3928_);
v___x_3930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
lean_ctor_set(v___x_3930_, 1, v___x_3881_);
v___x_3931_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
lean_ctor_set(v___x_3931_, 1, v___x_3883_);
v___x_3932_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__18));
v___x_3933_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3931_);
lean_ctor_set(v___x_3933_, 1, v___x_3932_);
v___x_3934_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
lean_ctor_set(v___x_3934_, 1, v___x_3870_);
v___x_3935_ = lean_uint64_to_nat(v_epochHeight_3863_);
v___x_3936_ = l_Nat_reprFast(v___x_3935_);
v___x_3937_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3936_);
v___x_3938_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3912_);
lean_ctor_set(v___x_3938_, 1, v___x_3937_);
v___x_3939_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3939_, 0, v___x_3938_);
lean_ctor_set_uint8(v___x_3939_, sizeof(void*)*1, v___x_3878_);
v___x_3940_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3934_);
lean_ctor_set(v___x_3940_, 1, v___x_3939_);
v___x_3941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3941_, 0, v___x_3940_);
lean_ctor_set(v___x_3941_, 1, v___x_3881_);
v___x_3942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3942_, 0, v___x_3941_);
lean_ctor_set(v___x_3942_, 1, v___x_3883_);
v___x_3943_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__20));
v___x_3944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3942_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
lean_ctor_set(v___x_3945_, 1, v___x_3870_);
v___x_3946_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__21, &l_Near_Env_instReprContext_repr___redArg___closed__21_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__21);
v___x_3947_ = lean_uint64_to_nat(v_storageUsage_3864_);
v___x_3948_ = l_Nat_reprFast(v___x_3947_);
v___x_3949_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3946_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3951_, 0, v___x_3950_);
lean_ctor_set_uint8(v___x_3951_, sizeof(void*)*1, v___x_3878_);
v___x_3952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3945_);
lean_ctor_set(v___x_3952_, 1, v___x_3951_);
v___x_3953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3952_);
lean_ctor_set(v___x_3953_, 1, v___x_3881_);
v___x_3954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
lean_ctor_set(v___x_3954_, 1, v___x_3883_);
v___x_3955_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__23));
v___x_3956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3954_);
lean_ctor_set(v___x_3956_, 1, v___x_3955_);
v___x_3957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
lean_ctor_set(v___x_3957_, 1, v___x_3870_);
v___x_3958_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__24, &l_Near_Env_instReprContext_repr___redArg___closed__24_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__24);
v___x_3959_ = l_Near_instReprGas_repr___redArg(v_prepaidGas_3865_);
v___x_3960_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3958_);
lean_ctor_set(v___x_3960_, 1, v___x_3959_);
v___x_3961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3961_, 0, v___x_3960_);
lean_ctor_set_uint8(v___x_3961_, sizeof(void*)*1, v___x_3878_);
v___x_3962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3957_);
lean_ctor_set(v___x_3962_, 1, v___x_3961_);
v___x_3963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
lean_ctor_set(v___x_3963_, 1, v___x_3881_);
v___x_3964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
lean_ctor_set(v___x_3964_, 1, v___x_3883_);
v___x_3965_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__26));
v___x_3966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3964_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3966_);
lean_ctor_set(v___x_3967_, 1, v___x_3870_);
v___x_3968_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__27, &l_Near_Env_instReprContext_repr___redArg___closed__27_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__27);
v___x_3969_ = l_Near_instReprGas_repr___redArg(v_usedGas_3866_);
v___x_3970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3968_);
lean_ctor_set(v___x_3970_, 1, v___x_3969_);
v___x_3971_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
lean_ctor_set_uint8(v___x_3971_, sizeof(void*)*1, v___x_3878_);
v___x_3972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3972_, 0, v___x_3967_);
lean_ctor_set(v___x_3972_, 1, v___x_3971_);
v___x_3973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3972_);
lean_ctor_set(v___x_3973_, 1, v___x_3881_);
v___x_3974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3974_, 0, v___x_3973_);
lean_ctor_set(v___x_3974_, 1, v___x_3883_);
v___x_3975_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__29));
v___x_3976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3974_);
lean_ctor_set(v___x_3976_, 1, v___x_3975_);
v___x_3977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
lean_ctor_set(v___x_3977_, 1, v___x_3870_);
v___x_3978_ = l_Nat_reprFast(v_accountBalance_3867_);
v___x_3979_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3979_, 0, v___x_3978_);
v___x_3980_ = ((lean_object*)(l_Near_NearToken_instRepr___lam__0___closed__1));
v___x_3981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3979_);
lean_ctor_set(v___x_3981_, 1, v___x_3980_);
v___x_3982_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3872_);
lean_ctor_set(v___x_3982_, 1, v___x_3981_);
v___x_3983_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3983_, 0, v___x_3982_);
lean_ctor_set_uint8(v___x_3983_, sizeof(void*)*1, v___x_3878_);
v___x_3984_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3977_);
lean_ctor_set(v___x_3984_, 1, v___x_3983_);
v___x_3985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3985_, 0, v___x_3984_);
lean_ctor_set(v___x_3985_, 1, v___x_3881_);
v___x_3986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3985_);
lean_ctor_set(v___x_3986_, 1, v___x_3883_);
v___x_3987_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__31));
v___x_3988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3986_);
lean_ctor_set(v___x_3988_, 1, v___x_3987_);
v___x_3989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3988_);
lean_ctor_set(v___x_3989_, 1, v___x_3870_);
v___x_3990_ = lean_obj_once(&l_Near_Env_instReprContext_repr___redArg___closed__32, &l_Near_Env_instReprContext_repr___redArg___closed__32_once, _init_l_Near_Env_instReprContext_repr___redArg___closed__32);
v___x_3991_ = l_Nat_reprFast(v_attachedDeposit_3868_);
v___x_3992_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3991_);
v___x_3993_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3993_, 0, v___x_3992_);
lean_ctor_set(v___x_3993_, 1, v___x_3980_);
v___x_3994_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3990_);
lean_ctor_set(v___x_3994_, 1, v___x_3993_);
v___x_3995_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3995_, 0, v___x_3994_);
lean_ctor_set_uint8(v___x_3995_, sizeof(void*)*1, v___x_3878_);
v___x_3996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3996_, 0, v___x_3989_);
lean_ctor_set(v___x_3996_, 1, v___x_3995_);
v___x_3997_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
lean_ctor_set(v___x_3997_, 1, v___x_3881_);
v___x_3998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
lean_ctor_set(v___x_3998_, 1, v___x_3883_);
v___x_3999_ = ((lean_object*)(l_Near_Env_instReprContext_repr___redArg___closed__34));
v___x_4000_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4000_, 0, v___x_3998_);
lean_ctor_set(v___x_4000_, 1, v___x_3999_);
v___x_4001_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4001_, 0, v___x_4000_);
lean_ctor_set(v___x_4001_, 1, v___x_3870_);
v___x_4002_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_4003_ = l_String_quote(v_input_3869_);
v___x_4004_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
v___x_4005_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4005_, 0, v___x_4002_);
lean_ctor_set(v___x_4005_, 1, v___x_4004_);
v___x_4006_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
lean_ctor_set_uint8(v___x_4006_, sizeof(void*)*1, v___x_3878_);
v___x_4007_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4007_, 0, v___x_4001_);
lean_ctor_set(v___x_4007_, 1, v___x_4006_);
v___x_4008_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_4009_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_4010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4009_);
lean_ctor_set(v___x_4010_, 1, v___x_4007_);
v___x_4011_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_4012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4010_);
lean_ctor_set(v___x_4012_, 1, v___x_4011_);
v___x_4013_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4008_);
lean_ctor_set(v___x_4013_, 1, v___x_4012_);
v___x_4014_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4014_, 0, v___x_4013_);
lean_ctor_set_uint8(v___x_4014_, sizeof(void*)*1, v___x_3878_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr(lean_object* v_x_4015_, lean_object* v_prec_4016_){
_start:
{
lean_object* v___x_4017_; 
v___x_4017_ = l_Near_Env_instReprContext_repr___redArg(v_x_4015_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_instReprContext_repr___boxed(lean_object* v_x_4018_, lean_object* v_prec_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Near_Env_instReprContext_repr(v_x_4018_, v_prec_4019_);
lean_dec(v_prec_4019_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_context(){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = lean_near_current_account_id();
if (lean_obj_tag(v___x_4024_) == 0)
{
lean_object* v_a_4025_; lean_object* v___x_4026_; 
v_a_4025_ = lean_ctor_get(v___x_4024_, 0);
lean_inc(v_a_4025_);
lean_dec_ref_known(v___x_4024_, 1);
v___x_4026_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v_a_4027_; lean_object* v___x_4028_; 
v_a_4027_ = lean_ctor_get(v___x_4026_, 0);
lean_inc(v_a_4027_);
lean_dec_ref_known(v___x_4026_, 1);
v___x_4028_ = lean_near_signer_account_id();
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v_a_4029_; lean_object* v___x_4030_; 
v_a_4029_ = lean_ctor_get(v___x_4028_, 0);
lean_inc(v_a_4029_);
lean_dec_ref_known(v___x_4028_, 1);
v___x_4030_ = lean_near_block_height();
if (lean_obj_tag(v___x_4030_) == 0)
{
lean_object* v_a_4031_; lean_object* v___x_4032_; 
v_a_4031_ = lean_ctor_get(v___x_4030_, 0);
lean_inc(v_a_4031_);
lean_dec_ref_known(v___x_4030_, 1);
v___x_4032_ = lean_near_block_timestamp();
if (lean_obj_tag(v___x_4032_) == 0)
{
lean_object* v_a_4033_; lean_object* v___x_4034_; 
v_a_4033_ = lean_ctor_get(v___x_4032_, 0);
lean_inc(v_a_4033_);
lean_dec_ref_known(v___x_4032_, 1);
v___x_4034_ = lean_near_epoch_height();
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v___x_4036_; 
v_a_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc(v_a_4035_);
lean_dec_ref_known(v___x_4034_, 1);
v___x_4036_ = lean_near_storage_usage();
if (lean_obj_tag(v___x_4036_) == 0)
{
lean_object* v_a_4037_; lean_object* v___x_4038_; 
v_a_4037_ = lean_ctor_get(v___x_4036_, 0);
lean_inc(v_a_4037_);
lean_dec_ref_known(v___x_4036_, 1);
v___x_4038_ = lean_near_prepaid_gas();
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4040_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
lean_inc(v_a_4039_);
lean_dec_ref_known(v___x_4038_, 1);
v___x_4040_ = lean_near_used_gas();
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___y_4043_; lean_object* v_a_4044_; lean_object* v___x_4069_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref_known(v___x_4040_, 1);
v___x_4069_ = lean_near_account_balance();
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v_a_4070_; lean_object* v___f_4071_; lean_object* v_a_4073_; lean_object* v___x_4090_; 
v_a_4070_ = lean_ctor_get(v___x_4069_, 0);
lean_inc(v_a_4070_);
lean_dec_ref_known(v___x_4069_, 1);
v___f_4071_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_4090_ = lean_string_data(v_a_4070_);
if (lean_obj_tag(v___x_4090_) == 0)
{
lean_object* v___x_4091_; 
v___x_4091_ = lean_unsigned_to_nat(0u);
v_a_4073_ = v___x_4091_;
goto v___jp_4072_;
}
else
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4092_ = lean_unsigned_to_nat(0u);
v___x_4093_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_4094_ = l_List_foldl___redArg(v___f_4071_, v___x_4093_, v___x_4090_);
if (lean_obj_tag(v___x_4094_) == 0)
{
v_a_4073_ = v___x_4092_;
goto v___jp_4072_;
}
else
{
lean_object* v_val_4095_; 
v_val_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_val_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v_a_4073_ = v_val_4095_;
goto v___jp_4072_;
}
}
v___jp_4072_:
{
lean_object* v___x_4074_; 
v___x_4074_ = lean_near_attached_deposit();
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v___x_4076_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4075_);
lean_dec_ref_known(v___x_4074_, 1);
v___x_4076_ = lean_string_data(v_a_4075_);
if (lean_obj_tag(v___x_4076_) == 0)
{
lean_object* v___x_4077_; 
v___x_4077_ = lean_unsigned_to_nat(0u);
v___y_4043_ = v_a_4073_;
v_a_4044_ = v___x_4077_;
goto v___jp_4042_;
}
else
{
lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; 
v___x_4078_ = lean_unsigned_to_nat(0u);
v___x_4079_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_4080_ = l_List_foldl___redArg(v___f_4071_, v___x_4079_, v___x_4076_);
if (lean_obj_tag(v___x_4080_) == 0)
{
v___y_4043_ = v_a_4073_;
v_a_4044_ = v___x_4078_;
goto v___jp_4042_;
}
else
{
lean_object* v_val_4081_; 
v_val_4081_ = lean_ctor_get(v___x_4080_, 0);
lean_inc(v_val_4081_);
lean_dec_ref_known(v___x_4080_, 1);
v___y_4043_ = v_a_4073_;
v_a_4044_ = v_val_4081_;
goto v___jp_4042_;
}
}
}
else
{
lean_object* v_a_4082_; lean_object* v___x_4084_; uint8_t v_isShared_4085_; uint8_t v_isSharedCheck_4089_; 
lean_dec(v_a_4073_);
lean_dec(v_a_4041_);
lean_dec(v_a_4039_);
lean_dec(v_a_4037_);
lean_dec(v_a_4035_);
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4082_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4089_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_4084_ = v___x_4074_;
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
else
{
lean_inc(v_a_4082_);
lean_dec(v___x_4074_);
v___x_4084_ = lean_box(0);
v_isShared_4085_ = v_isSharedCheck_4089_;
goto v_resetjp_4083_;
}
v_resetjp_4083_:
{
lean_object* v___x_4087_; 
if (v_isShared_4085_ == 0)
{
v___x_4087_ = v___x_4084_;
goto v_reusejp_4086_;
}
else
{
lean_object* v_reuseFailAlloc_4088_; 
v_reuseFailAlloc_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4088_, 0, v_a_4082_);
v___x_4087_ = v_reuseFailAlloc_4088_;
goto v_reusejp_4086_;
}
v_reusejp_4086_:
{
return v___x_4087_;
}
}
}
}
}
else
{
lean_object* v_a_4096_; lean_object* v___x_4098_; uint8_t v_isShared_4099_; uint8_t v_isSharedCheck_4103_; 
lean_dec(v_a_4041_);
lean_dec(v_a_4039_);
lean_dec(v_a_4037_);
lean_dec(v_a_4035_);
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4096_ = lean_ctor_get(v___x_4069_, 0);
v_isSharedCheck_4103_ = !lean_is_exclusive(v___x_4069_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4098_ = v___x_4069_;
v_isShared_4099_ = v_isSharedCheck_4103_;
goto v_resetjp_4097_;
}
else
{
lean_inc(v_a_4096_);
lean_dec(v___x_4069_);
v___x_4098_ = lean_box(0);
v_isShared_4099_ = v_isSharedCheck_4103_;
goto v_resetjp_4097_;
}
v_resetjp_4097_:
{
lean_object* v___x_4101_; 
if (v_isShared_4099_ == 0)
{
v___x_4101_ = v___x_4098_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v_a_4096_);
v___x_4101_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
return v___x_4101_;
}
}
}
v___jp_4042_:
{
lean_object* v___x_4045_; 
v___x_4045_ = lean_near_input();
if (lean_obj_tag(v___x_4045_) == 0)
{
lean_object* v_a_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4060_; 
v_a_4046_ = lean_ctor_get(v___x_4045_, 0);
v_isSharedCheck_4060_ = !lean_is_exclusive(v___x_4045_);
if (v_isSharedCheck_4060_ == 0)
{
v___x_4048_ = v___x_4045_;
v_isShared_4049_ = v_isSharedCheck_4060_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_a_4046_);
lean_dec(v___x_4045_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4060_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___x_4050_; uint64_t v___x_4051_; uint64_t v___x_4052_; uint64_t v___x_4053_; uint64_t v___x_4054_; uint64_t v___x_4055_; uint64_t v___x_4056_; lean_object* v___x_4058_; 
v___x_4050_ = lean_alloc_ctor(0, 6, 48);
lean_ctor_set(v___x_4050_, 0, v_a_4025_);
lean_ctor_set(v___x_4050_, 1, v_a_4027_);
lean_ctor_set(v___x_4050_, 2, v_a_4029_);
lean_ctor_set(v___x_4050_, 3, v___y_4043_);
lean_ctor_set(v___x_4050_, 4, v_a_4044_);
lean_ctor_set(v___x_4050_, 5, v_a_4046_);
v___x_4051_ = lean_unbox_uint64(v_a_4031_);
lean_dec(v_a_4031_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*6, v___x_4051_);
v___x_4052_ = lean_unbox_uint64(v_a_4033_);
lean_dec(v_a_4033_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*6 + 8, v___x_4052_);
v___x_4053_ = lean_unbox_uint64(v_a_4035_);
lean_dec(v_a_4035_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*6 + 16, v___x_4053_);
v___x_4054_ = lean_unbox_uint64(v_a_4037_);
lean_dec(v_a_4037_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*6 + 24, v___x_4054_);
v___x_4055_ = lean_unbox_uint64(v_a_4039_);
lean_dec(v_a_4039_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*6 + 32, v___x_4055_);
v___x_4056_ = lean_unbox_uint64(v_a_4041_);
lean_dec(v_a_4041_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*6 + 40, v___x_4056_);
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 0, v___x_4050_);
v___x_4058_ = v___x_4048_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v___x_4050_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
else
{
lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4068_; 
lean_dec(v_a_4044_);
lean_dec(v___y_4043_);
lean_dec(v_a_4041_);
lean_dec(v_a_4039_);
lean_dec(v_a_4037_);
lean_dec(v_a_4035_);
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4061_ = lean_ctor_get(v___x_4045_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4045_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4063_ = v___x_4045_;
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_4045_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4068_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4066_; 
if (v_isShared_4064_ == 0)
{
v___x_4066_ = v___x_4063_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4061_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
}
}
else
{
lean_object* v_a_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4111_; 
lean_dec(v_a_4039_);
lean_dec(v_a_4037_);
lean_dec(v_a_4035_);
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4104_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4111_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4106_ = v___x_4040_;
v_isShared_4107_ = v_isSharedCheck_4111_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_a_4104_);
lean_dec(v___x_4040_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4111_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4109_; 
if (v_isShared_4107_ == 0)
{
v___x_4109_ = v___x_4106_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v_a_4104_);
v___x_4109_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
return v___x_4109_;
}
}
}
}
else
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
lean_dec(v_a_4037_);
lean_dec(v_a_4035_);
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4112_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4114_ = v___x_4038_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4038_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4112_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
return v___x_4117_;
}
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
lean_dec(v_a_4035_);
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4120_ = lean_ctor_get(v___x_4036_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4036_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4036_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4036_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
else
{
lean_object* v_a_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4135_; 
lean_dec(v_a_4033_);
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4128_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4135_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4135_ == 0)
{
v___x_4130_ = v___x_4034_;
v_isShared_4131_ = v_isSharedCheck_4135_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_a_4128_);
lean_dec(v___x_4034_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4135_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4133_; 
if (v_isShared_4131_ == 0)
{
v___x_4133_ = v___x_4130_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v_a_4128_);
v___x_4133_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
return v___x_4133_;
}
}
}
}
else
{
lean_object* v_a_4136_; lean_object* v___x_4138_; uint8_t v_isShared_4139_; uint8_t v_isSharedCheck_4143_; 
lean_dec(v_a_4031_);
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4136_ = lean_ctor_get(v___x_4032_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___x_4032_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4138_ = v___x_4032_;
v_isShared_4139_ = v_isSharedCheck_4143_;
goto v_resetjp_4137_;
}
else
{
lean_inc(v_a_4136_);
lean_dec(v___x_4032_);
v___x_4138_ = lean_box(0);
v_isShared_4139_ = v_isSharedCheck_4143_;
goto v_resetjp_4137_;
}
v_resetjp_4137_:
{
lean_object* v___x_4141_; 
if (v_isShared_4139_ == 0)
{
v___x_4141_ = v___x_4138_;
goto v_reusejp_4140_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_a_4136_);
v___x_4141_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4140_;
}
v_reusejp_4140_:
{
return v___x_4141_;
}
}
}
}
else
{
lean_object* v_a_4144_; lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4151_; 
lean_dec(v_a_4029_);
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4144_ = lean_ctor_get(v___x_4030_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v___x_4030_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4146_ = v___x_4030_;
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
else
{
lean_inc(v_a_4144_);
lean_dec(v___x_4030_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v___x_4149_; 
if (v_isShared_4147_ == 0)
{
v___x_4149_ = v___x_4146_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_a_4144_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
else
{
lean_object* v_a_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4159_; 
lean_dec(v_a_4027_);
lean_dec(v_a_4025_);
v_a_4152_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4159_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4159_ == 0)
{
v___x_4154_ = v___x_4028_;
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_a_4152_);
lean_dec(v___x_4028_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v___x_4157_; 
if (v_isShared_4155_ == 0)
{
v___x_4157_ = v___x_4154_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_a_4152_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
else
{
lean_object* v_a_4160_; lean_object* v___x_4162_; uint8_t v_isShared_4163_; uint8_t v_isSharedCheck_4167_; 
lean_dec(v_a_4025_);
v_a_4160_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4167_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4162_ = v___x_4026_;
v_isShared_4163_ = v_isSharedCheck_4167_;
goto v_resetjp_4161_;
}
else
{
lean_inc(v_a_4160_);
lean_dec(v___x_4026_);
v___x_4162_ = lean_box(0);
v_isShared_4163_ = v_isSharedCheck_4167_;
goto v_resetjp_4161_;
}
v_resetjp_4161_:
{
lean_object* v___x_4165_; 
if (v_isShared_4163_ == 0)
{
v___x_4165_ = v___x_4162_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4160_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
return v___x_4165_;
}
}
}
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4175_; 
v_a_4168_ = lean_ctor_get(v___x_4024_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4024_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4170_ = v___x_4024_;
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v___x_4024_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4173_; 
if (v_isShared_4171_ == 0)
{
v___x_4173_ = v___x_4170_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4168_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Env_context___boxed(lean_object* v_a_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_Near_Env_context();
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg(lean_object* v_inst_4178_, lean_object* v_value_4179_){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = lean_apply_1(v_inst_4178_, v_value_4179_);
v___x_4182_ = lean_near_log(v___x_4181_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___redArg___boxed(lean_object* v_inst_4183_, lean_object* v_value_4184_, lean_object* v_a_4185_){
_start:
{
lean_object* v_res_4186_; 
v_res_4186_ = l_Near_Env_logValue___redArg(v_inst_4183_, v_value_4184_);
return v_res_4186_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue(lean_object* v_00_u03b1_4187_, lean_object* v_inst_4188_, lean_object* v_value_4189_){
_start:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; 
v___x_4191_ = lean_apply_1(v_inst_4188_, v_value_4189_);
v___x_4192_ = lean_near_log(v___x_4191_);
return v___x_4192_;
}
}
LEAN_EXPORT lean_object* l_Near_Env_logValue___boxed(lean_object* v_00_u03b1_4193_, lean_object* v_inst_4194_, lean_object* v_value_4195_, lean_object* v_a_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Near_Env_logValue(v_00_u03b1_4193_, v_inst_4194_, v_value_4195_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx(uint8_t v_x_4198_){
_start:
{
switch(v_x_4198_)
{
case 0:
{
lean_object* v___x_4199_; 
v___x_4199_ = lean_unsigned_to_nat(0u);
return v___x_4199_;
}
case 1:
{
lean_object* v___x_4200_; 
v___x_4200_ = lean_unsigned_to_nat(1u);
return v___x_4200_;
}
default: 
{
lean_object* v___x_4201_; 
v___x_4201_ = lean_unsigned_to_nat(2u);
return v___x_4201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorIdx___boxed(lean_object* v_x_4202_){
_start:
{
uint8_t v_x_boxed_4203_; lean_object* v_res_4204_; 
v_x_boxed_4203_ = lean_unbox(v_x_4202_);
v_res_4204_ = l_Near_Contract_Mode_ctorIdx(v_x_boxed_4203_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx(uint8_t v_x_4205_){
_start:
{
lean_object* v___x_4206_; 
v___x_4206_ = l_Near_Contract_Mode_ctorIdx(v_x_4205_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_toCtorIdx___boxed(lean_object* v_x_4207_){
_start:
{
uint8_t v_x_4__boxed_4208_; lean_object* v_res_4209_; 
v_x_4__boxed_4208_ = lean_unbox(v_x_4207_);
v_res_4209_ = l_Near_Contract_Mode_toCtorIdx(v_x_4__boxed_4208_);
return v_res_4209_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg(lean_object* v_k_4210_){
_start:
{
lean_inc(v_k_4210_);
return v_k_4210_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___redArg___boxed(lean_object* v_k_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l_Near_Contract_Mode_ctorElim___redArg(v_k_4211_);
lean_dec(v_k_4211_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim(lean_object* v_motive_4213_, lean_object* v_ctorIdx_4214_, uint8_t v_t_4215_, lean_object* v_h_4216_, lean_object* v_k_4217_){
_start:
{
lean_inc(v_k_4217_);
return v_k_4217_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_ctorElim___boxed(lean_object* v_motive_4218_, lean_object* v_ctorIdx_4219_, lean_object* v_t_4220_, lean_object* v_h_4221_, lean_object* v_k_4222_){
_start:
{
uint8_t v_t_boxed_4223_; lean_object* v_res_4224_; 
v_t_boxed_4223_ = lean_unbox(v_t_4220_);
v_res_4224_ = l_Near_Contract_Mode_ctorElim(v_motive_4218_, v_ctorIdx_4219_, v_t_boxed_4223_, v_h_4221_, v_k_4222_);
lean_dec(v_k_4222_);
lean_dec(v_ctorIdx_4219_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg(lean_object* v_init_4225_){
_start:
{
lean_inc(v_init_4225_);
return v_init_4225_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___redArg___boxed(lean_object* v_init_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l_Near_Contract_Mode_init_elim___redArg(v_init_4226_);
lean_dec(v_init_4226_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim(lean_object* v_motive_4228_, uint8_t v_t_4229_, lean_object* v_h_4230_, lean_object* v_init_4231_){
_start:
{
lean_inc(v_init_4231_);
return v_init_4231_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_init_elim___boxed(lean_object* v_motive_4232_, lean_object* v_t_4233_, lean_object* v_h_4234_, lean_object* v_init_4235_){
_start:
{
uint8_t v_t_boxed_4236_; lean_object* v_res_4237_; 
v_t_boxed_4236_ = lean_unbox(v_t_4233_);
v_res_4237_ = l_Near_Contract_Mode_init_elim(v_motive_4232_, v_t_boxed_4236_, v_h_4234_, v_init_4235_);
lean_dec(v_init_4235_);
return v_res_4237_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg(lean_object* v_view_4238_){
_start:
{
lean_inc(v_view_4238_);
return v_view_4238_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___redArg___boxed(lean_object* v_view_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Near_Contract_Mode_view_elim___redArg(v_view_4239_);
lean_dec(v_view_4239_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim(lean_object* v_motive_4241_, uint8_t v_t_4242_, lean_object* v_h_4243_, lean_object* v_view_4244_){
_start:
{
lean_inc(v_view_4244_);
return v_view_4244_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_view_elim___boxed(lean_object* v_motive_4245_, lean_object* v_t_4246_, lean_object* v_h_4247_, lean_object* v_view_4248_){
_start:
{
uint8_t v_t_boxed_4249_; lean_object* v_res_4250_; 
v_t_boxed_4249_ = lean_unbox(v_t_4246_);
v_res_4250_ = l_Near_Contract_Mode_view_elim(v_motive_4245_, v_t_boxed_4249_, v_h_4247_, v_view_4248_);
lean_dec(v_view_4248_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg(lean_object* v_update_4251_){
_start:
{
lean_inc(v_update_4251_);
return v_update_4251_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___redArg___boxed(lean_object* v_update_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_Near_Contract_Mode_update_elim___redArg(v_update_4252_);
lean_dec(v_update_4252_);
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim(lean_object* v_motive_4254_, uint8_t v_t_4255_, lean_object* v_h_4256_, lean_object* v_update_4257_){
_start:
{
lean_inc(v_update_4257_);
return v_update_4257_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_Mode_update_elim___boxed(lean_object* v_motive_4258_, lean_object* v_t_4259_, lean_object* v_h_4260_, lean_object* v_update_4261_){
_start:
{
uint8_t v_t_boxed_4262_; lean_object* v_res_4263_; 
v_t_boxed_4262_ = lean_unbox(v_t_4259_);
v_res_4263_ = l_Near_Contract_Mode_update_elim(v_motive_4258_, v_t_boxed_4262_, v_h_4260_, v_update_4261_);
lean_dec(v_update_4261_);
return v_res_4263_;
}
}
LEAN_EXPORT uint8_t l_Near_Contract_instBEqMode_beq(uint8_t v_x_4264_, uint8_t v_y_4265_){
_start:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; uint8_t v___x_4268_; 
v___x_4266_ = l_Near_Contract_Mode_ctorIdx(v_x_4264_);
v___x_4267_ = l_Near_Contract_Mode_ctorIdx(v_y_4265_);
v___x_4268_ = lean_nat_dec_eq(v___x_4266_, v___x_4267_);
lean_dec(v___x_4267_);
lean_dec(v___x_4266_);
return v___x_4268_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instBEqMode_beq___boxed(lean_object* v_x_4269_, lean_object* v_y_4270_){
_start:
{
uint8_t v_x_17__boxed_4271_; uint8_t v_y_18__boxed_4272_; uint8_t v_res_4273_; lean_object* v_r_4274_; 
v_x_17__boxed_4271_ = lean_unbox(v_x_4269_);
v_y_18__boxed_4272_ = lean_unbox(v_y_4270_);
v_res_4273_ = l_Near_Contract_instBEqMode_beq(v_x_17__boxed_4271_, v_y_18__boxed_4272_);
v_r_4274_ = lean_box(v_res_4273_);
return v_r_4274_;
}
}
static lean_object* _init_l_Near_Contract_instReprMode_repr___closed__6(void){
_start:
{
lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4286_ = lean_unsigned_to_nat(2u);
v___x_4287_ = lean_nat_to_int(v___x_4286_);
return v___x_4287_;
}
}
static lean_object* _init_l_Near_Contract_instReprMode_repr___closed__7(void){
_start:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; 
v___x_4288_ = lean_unsigned_to_nat(1u);
v___x_4289_ = lean_nat_to_int(v___x_4288_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr(uint8_t v_x_4290_, lean_object* v_prec_4291_){
_start:
{
lean_object* v___y_4293_; lean_object* v___y_4300_; lean_object* v___y_4307_; 
switch(v_x_4290_)
{
case 0:
{
lean_object* v___x_4313_; uint8_t v___x_4314_; 
v___x_4313_ = lean_unsigned_to_nat(1024u);
v___x_4314_ = lean_nat_dec_le(v___x_4313_, v_prec_4291_);
if (v___x_4314_ == 0)
{
lean_object* v___x_4315_; 
v___x_4315_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_4293_ = v___x_4315_;
goto v___jp_4292_;
}
else
{
lean_object* v___x_4316_; 
v___x_4316_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_4293_ = v___x_4316_;
goto v___jp_4292_;
}
}
case 1:
{
lean_object* v___x_4317_; uint8_t v___x_4318_; 
v___x_4317_ = lean_unsigned_to_nat(1024u);
v___x_4318_ = lean_nat_dec_le(v___x_4317_, v_prec_4291_);
if (v___x_4318_ == 0)
{
lean_object* v___x_4319_; 
v___x_4319_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_4300_ = v___x_4319_;
goto v___jp_4299_;
}
else
{
lean_object* v___x_4320_; 
v___x_4320_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_4300_ = v___x_4320_;
goto v___jp_4299_;
}
}
default: 
{
lean_object* v___x_4321_; uint8_t v___x_4322_; 
v___x_4321_ = lean_unsigned_to_nat(1024u);
v___x_4322_ = lean_nat_dec_le(v___x_4321_, v_prec_4291_);
if (v___x_4322_ == 0)
{
lean_object* v___x_4323_; 
v___x_4323_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_4307_ = v___x_4323_;
goto v___jp_4306_;
}
else
{
lean_object* v___x_4324_; 
v___x_4324_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_4307_ = v___x_4324_;
goto v___jp_4306_;
}
}
}
v___jp_4292_:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; uint8_t v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4294_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__1));
lean_inc(v___y_4293_);
v___x_4295_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4295_, 0, v___y_4293_);
lean_ctor_set(v___x_4295_, 1, v___x_4294_);
v___x_4296_ = 0;
v___x_4297_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4297_, 0, v___x_4295_);
lean_ctor_set_uint8(v___x_4297_, sizeof(void*)*1, v___x_4296_);
v___x_4298_ = l_Repr_addAppParen(v___x_4297_, v_prec_4291_);
return v___x_4298_;
}
v___jp_4299_:
{
lean_object* v___x_4301_; lean_object* v___x_4302_; uint8_t v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
v___x_4301_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__3));
lean_inc(v___y_4300_);
v___x_4302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4302_, 0, v___y_4300_);
lean_ctor_set(v___x_4302_, 1, v___x_4301_);
v___x_4303_ = 0;
v___x_4304_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4304_, 0, v___x_4302_);
lean_ctor_set_uint8(v___x_4304_, sizeof(void*)*1, v___x_4303_);
v___x_4305_ = l_Repr_addAppParen(v___x_4304_, v_prec_4291_);
return v___x_4305_;
}
v___jp_4306_:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; uint8_t v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; 
v___x_4308_ = ((lean_object*)(l_Near_Contract_instReprMode_repr___closed__5));
lean_inc(v___y_4307_);
v___x_4309_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4309_, 0, v___y_4307_);
lean_ctor_set(v___x_4309_, 1, v___x_4308_);
v___x_4310_ = 0;
v___x_4311_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4311_, 0, v___x_4309_);
lean_ctor_set_uint8(v___x_4311_, sizeof(void*)*1, v___x_4310_);
v___x_4312_ = l_Repr_addAppParen(v___x_4311_, v_prec_4291_);
return v___x_4312_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_instReprMode_repr___boxed(lean_object* v_x_4325_, lean_object* v_prec_4326_){
_start:
{
uint8_t v_x_177__boxed_4327_; lean_object* v_res_4328_; 
v_x_177__boxed_4327_ = lean_unbox(v_x_4325_);
v_res_4328_ = l_Near_Contract_instReprMode_repr(v_x_177__boxed_4327_, v_prec_4326_);
lean_dec(v_prec_4326_);
return v_res_4328_;
}
}
static lean_object* _init_l_Near_Contract_entry___boxed__const__1(void){
_start:
{
uint32_t v___x_4331_; lean_object* v___x_4332_; 
v___x_4331_ = 0;
v___x_4332_ = lean_box_uint32(v___x_4331_);
return v___x_4332_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_entry(lean_object* v_action_4333_){
_start:
{
lean_object* v___x_4335_; 
v___x_4335_ = lean_apply_1(v_action_4333_, lean_box(0));
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v___x_4337_; uint8_t v_isShared_4338_; uint8_t v_isSharedCheck_4343_; 
v_isSharedCheck_4343_ = !lean_is_exclusive(v___x_4335_);
if (v_isSharedCheck_4343_ == 0)
{
lean_object* v_unused_4344_; 
v_unused_4344_ = lean_ctor_get(v___x_4335_, 0);
lean_dec(v_unused_4344_);
v___x_4337_ = v___x_4335_;
v_isShared_4338_ = v_isSharedCheck_4343_;
goto v_resetjp_4336_;
}
else
{
lean_dec(v___x_4335_);
v___x_4337_ = lean_box(0);
v_isShared_4338_ = v_isSharedCheck_4343_;
goto v_resetjp_4336_;
}
v_resetjp_4336_:
{
lean_object* v___x_4339_; lean_object* v___x_4341_; 
v___x_4339_ = l_Near_Contract_entry___boxed__const__1;
if (v_isShared_4338_ == 0)
{
lean_ctor_set(v___x_4337_, 0, v___x_4339_);
v___x_4341_ = v___x_4337_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4342_; 
v_reuseFailAlloc_4342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4342_, 0, v___x_4339_);
v___x_4341_ = v_reuseFailAlloc_4342_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
return v___x_4341_;
}
}
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
v_a_4345_ = lean_ctor_get(v___x_4335_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4335_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4335_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4335_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_entry___boxed(lean_object* v_action_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Near_Contract_entry(v_action_4353_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initializer(lean_object* v_name_4356_, lean_object* v_action_4357_){
_start:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; 
v___x_4358_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_4358_, 0, v_action_4357_);
v___x_4359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4359_, 0, v_name_4356_);
lean_ctor_set(v___x_4359_, 1, v___x_4358_);
return v___x_4359_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_view(lean_object* v_name_4360_, lean_object* v_action_4361_){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4362_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_4362_, 0, v_action_4361_);
v___x_4363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4363_, 0, v_name_4360_);
lean_ctor_set(v___x_4363_, 1, v___x_4362_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_update(lean_object* v_name_4364_, lean_object* v_action_4365_){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4366_ = lean_alloc_closure((void*)(l_Near_Contract_entry___boxed), 2, 1);
lean_closure_set(v___x_4366_, 0, v_action_4365_);
v___x_4367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4367_, 0, v_name_4364_);
lean_ctor_set(v___x_4367_, 1, v___x_4366_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized(){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; 
v___x_4370_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4371_ = lean_near_storage_has_key(v___x_4370_);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isInitialized___boxed(lean_object* v_a_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l_Near_Contract_isInitialized();
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue(lean_object* v_value_4374_){
_start:
{
lean_object* v___x_4376_; 
v___x_4376_ = lean_near_value_return(v_value_4374_);
return v___x_4376_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnValue___boxed(lean_object* v_value_4377_, lean_object* v_a_4378_){
_start:
{
lean_object* v_res_4379_; 
v_res_4379_ = l_Near_Contract_returnValue(v_value_4377_);
return v_res_4379_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnText(lean_object* v_value_4380_){
_start:
{
lean_object* v___x_4382_; 
v___x_4382_ = lean_near_value_return(v_value_4380_);
return v___x_4382_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnText___boxed(lean_object* v_value_4383_, lean_object* v_a_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l_Near_Contract_returnText(v_value_4383_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnJson(lean_object* v_value_4386_){
_start:
{
lean_object* v___x_4388_; 
v___x_4388_ = lean_near_value_return(v_value_4386_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnJson___boxed(lean_object* v_value_4389_, lean_object* v_a_4390_){
_start:
{
lean_object* v_res_4391_; 
v_res_4391_ = l_Near_Contract_returnJson(v_value_4389_);
return v_res_4391_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done(){
_start:
{
lean_object* v___x_4394_; lean_object* v___x_4395_; 
v___x_4394_ = ((lean_object*)(l_Near_Contract_done___closed__0));
v___x_4395_ = lean_near_value_return(v___x_4394_);
return v___x_4395_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_done___boxed(lean_object* v_a_4396_){
_start:
{
lean_object* v_res_4397_; 
v_res_4397_ = l_Near_Contract_done();
return v_res_4397_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool(uint8_t v_b_4398_){
_start:
{
if (v_b_4398_ == 0)
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4400_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__0));
v___x_4401_ = lean_near_value_return(v___x_4400_);
return v___x_4401_;
}
else
{
lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4402_ = ((lean_object*)(l_Near_Storage_instCodecBool___lam__0___closed__1));
v___x_4403_ = lean_near_value_return(v___x_4402_);
return v___x_4403_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnBool___boxed(lean_object* v_b_4404_, lean_object* v_a_4405_){
_start:
{
uint8_t v_b_boxed_4406_; lean_object* v_res_4407_; 
v_b_boxed_4406_ = lean_unbox(v_b_4404_);
v_res_4407_ = l_Near_Contract_returnBool(v_b_boxed_4406_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnU64(uint64_t v_n_4408_){
_start:
{
lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4410_ = lean_uint64_to_nat(v_n_4408_);
v___x_4411_ = l_Nat_reprFast(v___x_4410_);
v___x_4412_ = lean_near_value_return(v___x_4411_);
return v___x_4412_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnU64___boxed(lean_object* v_n_4413_, lean_object* v_a_4414_){
_start:
{
uint64_t v_n_boxed_4415_; lean_object* v_res_4416_; 
v_n_boxed_4415_ = lean_unbox_uint64(v_n_4413_);
lean_dec_ref(v_n_4413_);
v_res_4416_ = l_Near_Contract_returnU64(v_n_boxed_4415_);
return v_res_4416_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnNat(lean_object* v_n_4417_){
_start:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; 
v___x_4419_ = l_Nat_reprFast(v_n_4417_);
v___x_4420_ = lean_near_value_return(v___x_4419_);
return v___x_4420_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnNat___boxed(lean_object* v_n_4421_, lean_object* v_a_4422_){
_start:
{
lean_object* v_res_4423_; 
v_res_4423_ = l_Near_Contract_returnNat(v_n_4421_);
return v_res_4423_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId(lean_object* v_account_4424_){
_start:
{
lean_object* v___x_4426_; 
v___x_4426_ = lean_near_value_return(v_account_4424_);
return v___x_4426_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnAccountId___boxed(lean_object* v_account_4427_, lean_object* v_a_4428_){
_start:
{
lean_object* v_res_4429_; 
v_res_4429_ = l_Near_Contract_returnAccountId(v_account_4427_);
return v_res_4429_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg(lean_object* v_inst_4430_, lean_object* v_value_4431_){
_start:
{
lean_object* v_encode_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v_encode_4433_ = lean_ctor_get(v_inst_4430_, 0);
lean_inc_ref(v_encode_4433_);
lean_dec_ref(v_inst_4430_);
v___x_4434_ = lean_apply_1(v_encode_4433_, v_value_4431_);
v___x_4435_ = lean_near_value_return(v___x_4434_);
return v___x_4435_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___redArg___boxed(lean_object* v_inst_4436_, lean_object* v_value_4437_, lean_object* v_a_4438_){
_start:
{
lean_object* v_res_4439_; 
v_res_4439_ = l_Near_Contract_returnEncoded___redArg(v_inst_4436_, v_value_4437_);
return v_res_4439_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded(lean_object* v_00_u03b1_4440_, lean_object* v_inst_4441_, lean_object* v_value_4442_){
_start:
{
lean_object* v_encode_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_encode_4444_ = lean_ctor_get(v_inst_4441_, 0);
lean_inc_ref(v_encode_4444_);
lean_dec_ref(v_inst_4441_);
v___x_4445_ = lean_apply_1(v_encode_4444_, v_value_4442_);
v___x_4446_ = lean_near_value_return(v___x_4445_);
return v___x_4446_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_returnEncoded___boxed(lean_object* v_00_u03b1_4447_, lean_object* v_inst_4448_, lean_object* v_value_4449_, lean_object* v_a_4450_){
_start:
{
lean_object* v_res_4451_; 
v_res_4451_ = l_Near_Contract_returnEncoded(v_00_u03b1_4447_, v_inst_4448_, v_value_4449_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_panic(lean_object* v_msg_4452_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = lean_near_panic_str(v_msg_4452_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_panic___boxed(lean_object* v_msg_4455_, lean_object* v_a_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l_Near_Contract_panic(v_msg_4455_);
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require(uint8_t v_condition_4458_, lean_object* v_msg_4459_){
_start:
{
if (v_condition_4458_ == 0)
{
lean_object* v___x_4461_; 
v___x_4461_ = lean_near_panic_str(v_msg_4459_);
if (lean_obj_tag(v___x_4461_) == 0)
{
lean_object* v___x_4463_; uint8_t v_isShared_4464_; uint8_t v_isSharedCheck_4469_; 
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4469_ == 0)
{
lean_object* v_unused_4470_; 
v_unused_4470_ = lean_ctor_get(v___x_4461_, 0);
lean_dec(v_unused_4470_);
v___x_4463_ = v___x_4461_;
v_isShared_4464_ = v_isSharedCheck_4469_;
goto v_resetjp_4462_;
}
else
{
lean_dec(v___x_4461_);
v___x_4463_ = lean_box(0);
v_isShared_4464_ = v_isSharedCheck_4469_;
goto v_resetjp_4462_;
}
v_resetjp_4462_:
{
lean_object* v___x_4465_; lean_object* v___x_4467_; 
v___x_4465_ = lean_box(v_condition_4458_);
if (v_isShared_4464_ == 0)
{
lean_ctor_set(v___x_4463_, 0, v___x_4465_);
v___x_4467_ = v___x_4463_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v___x_4465_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
}
else
{
lean_object* v_a_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4478_; 
v_a_4471_ = lean_ctor_get(v___x_4461_, 0);
v_isSharedCheck_4478_ = !lean_is_exclusive(v___x_4461_);
if (v_isSharedCheck_4478_ == 0)
{
v___x_4473_ = v___x_4461_;
v_isShared_4474_ = v_isSharedCheck_4478_;
goto v_resetjp_4472_;
}
else
{
lean_inc(v_a_4471_);
lean_dec(v___x_4461_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4478_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4476_; 
if (v_isShared_4474_ == 0)
{
v___x_4476_ = v___x_4473_;
goto v_reusejp_4475_;
}
else
{
lean_object* v_reuseFailAlloc_4477_; 
v_reuseFailAlloc_4477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4477_, 0, v_a_4471_);
v___x_4476_ = v_reuseFailAlloc_4477_;
goto v_reusejp_4475_;
}
v_reusejp_4475_:
{
return v___x_4476_;
}
}
}
}
else
{
lean_object* v___x_4479_; lean_object* v___x_4480_; 
lean_dec_ref(v_msg_4459_);
v___x_4479_ = lean_box(v_condition_4458_);
v___x_4480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4480_, 0, v___x_4479_);
return v___x_4480_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_require___boxed(lean_object* v_condition_4481_, lean_object* v_msg_4482_, lean_object* v_a_4483_){
_start:
{
uint8_t v_condition_boxed_4484_; lean_object* v_res_4485_; 
v_condition_boxed_4484_ = lean_unbox(v_condition_4481_);
v_res_4485_ = l_Near_Contract_require(v_condition_boxed_4484_, v_msg_4482_);
return v_res_4485_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized(){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4488_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4489_ = lean_near_storage_has_key(v___x_4488_);
if (lean_obj_tag(v___x_4489_) == 0)
{
lean_object* v_a_4490_; uint8_t v___x_4491_; 
v_a_4490_ = lean_ctor_get(v___x_4489_, 0);
lean_inc(v_a_4490_);
v___x_4491_ = lean_unbox(v_a_4490_);
if (v___x_4491_ == 0)
{
lean_object* v___x_4492_; lean_object* v___x_4493_; 
lean_dec_ref_known(v___x_4489_, 1);
v___x_4492_ = ((lean_object*)(l_Near_Contract_requireInitialized___closed__0));
v___x_4493_ = lean_near_panic_str(v___x_4492_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4500_ == 0)
{
lean_object* v_unused_4501_; 
v_unused_4501_ = lean_ctor_get(v___x_4493_, 0);
lean_dec(v_unused_4501_);
v___x_4495_ = v___x_4493_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_dec(v___x_4493_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
lean_ctor_set(v___x_4495_, 0, v_a_4490_);
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4490_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
}
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
lean_dec(v_a_4490_);
v_a_4502_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4493_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4493_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
else
{
lean_dec(v_a_4490_);
return v___x_4489_;
}
}
else
{
return v___x_4489_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireInitialized___boxed(lean_object* v_a_4510_){
_start:
{
lean_object* v_res_4511_; 
v_res_4511_ = l_Near_Contract_requireInitialized();
return v_res_4511_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized(){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4514_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4515_ = lean_near_storage_has_key(v___x_4514_);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_object* v_a_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4546_; 
v_a_4516_ = lean_ctor_get(v___x_4515_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4515_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4518_ = v___x_4515_;
v_isShared_4519_ = v_isSharedCheck_4546_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_a_4516_);
lean_dec(v___x_4515_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4546_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
uint8_t v___x_4520_; 
v___x_4520_ = lean_unbox(v_a_4516_);
lean_dec(v_a_4516_);
if (v___x_4520_ == 0)
{
uint8_t v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4524_; 
v___x_4521_ = 1;
v___x_4522_ = lean_box(v___x_4521_);
if (v_isShared_4519_ == 0)
{
lean_ctor_set(v___x_4518_, 0, v___x_4522_);
v___x_4524_ = v___x_4518_;
goto v_reusejp_4523_;
}
else
{
lean_object* v_reuseFailAlloc_4525_; 
v_reuseFailAlloc_4525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4525_, 0, v___x_4522_);
v___x_4524_ = v_reuseFailAlloc_4525_;
goto v_reusejp_4523_;
}
v_reusejp_4523_:
{
return v___x_4524_;
}
}
else
{
lean_object* v___x_4526_; lean_object* v___x_4527_; 
lean_del_object(v___x_4518_);
v___x_4526_ = ((lean_object*)(l_Near_Contract_requireNotInitialized___closed__0));
v___x_4527_ = lean_near_panic_str(v___x_4526_);
if (lean_obj_tag(v___x_4527_) == 0)
{
lean_object* v___x_4529_; uint8_t v_isShared_4530_; uint8_t v_isSharedCheck_4536_; 
v_isSharedCheck_4536_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4536_ == 0)
{
lean_object* v_unused_4537_; 
v_unused_4537_ = lean_ctor_get(v___x_4527_, 0);
lean_dec(v_unused_4537_);
v___x_4529_ = v___x_4527_;
v_isShared_4530_ = v_isSharedCheck_4536_;
goto v_resetjp_4528_;
}
else
{
lean_dec(v___x_4527_);
v___x_4529_ = lean_box(0);
v_isShared_4530_ = v_isSharedCheck_4536_;
goto v_resetjp_4528_;
}
v_resetjp_4528_:
{
uint8_t v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4534_; 
v___x_4531_ = 0;
v___x_4532_ = lean_box(v___x_4531_);
if (v_isShared_4530_ == 0)
{
lean_ctor_set(v___x_4529_, 0, v___x_4532_);
v___x_4534_ = v___x_4529_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v___x_4532_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
}
else
{
lean_object* v_a_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4545_; 
v_a_4538_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4545_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4545_ == 0)
{
v___x_4540_ = v___x_4527_;
v_isShared_4541_ = v_isSharedCheck_4545_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_a_4538_);
lean_dec(v___x_4527_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4545_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
lean_object* v___x_4543_; 
if (v_isShared_4541_ == 0)
{
v___x_4543_ = v___x_4540_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v_a_4538_);
v___x_4543_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
return v___x_4543_;
}
}
}
}
}
}
else
{
return v___x_4515_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNotInitialized___boxed(lean_object* v_a_4547_){
_start:
{
lean_object* v_res_4548_; 
v_res_4548_ = l_Near_Contract_requireNotInitialized();
return v_res_4548_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor(lean_object* v_account_4549_){
_start:
{
lean_object* v___x_4551_; 
v___x_4551_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4561_; 
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4561_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4561_ == 0)
{
v___x_4554_ = v___x_4551_;
v_isShared_4555_ = v_isSharedCheck_4561_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4551_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4561_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
uint8_t v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4559_; 
v___x_4556_ = lean_string_dec_eq(v_a_4552_, v_account_4549_);
lean_dec(v_a_4552_);
v___x_4557_ = lean_box(v___x_4556_);
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v___x_4557_);
v___x_4559_ = v___x_4554_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v___x_4557_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
}
else
{
lean_object* v_a_4562_; lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4569_; 
v_a_4562_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4569_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4564_ = v___x_4551_;
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
else
{
lean_inc(v_a_4562_);
lean_dec(v___x_4551_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v___x_4567_; 
if (v_isShared_4565_ == 0)
{
v___x_4567_ = v___x_4564_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_a_4562_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
return v___x_4567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_isPredecessor___boxed(lean_object* v_account_4570_, lean_object* v_a_4571_){
_start:
{
lean_object* v_res_4572_; 
v_res_4572_ = l_Near_Contract_isPredecessor(v_account_4570_);
lean_dec_ref(v_account_4570_);
return v_res_4572_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor(lean_object* v_account_4574_){
_start:
{
lean_object* v___x_4576_; 
v___x_4576_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_4576_) == 0)
{
lean_object* v_a_4577_; lean_object* v___x_4579_; uint8_t v_isShared_4580_; uint8_t v_isSharedCheck_4606_; 
v_a_4577_ = lean_ctor_get(v___x_4576_, 0);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4576_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4579_ = v___x_4576_;
v_isShared_4580_ = v_isSharedCheck_4606_;
goto v_resetjp_4578_;
}
else
{
lean_inc(v_a_4577_);
lean_dec(v___x_4576_);
v___x_4579_ = lean_box(0);
v_isShared_4580_ = v_isSharedCheck_4606_;
goto v_resetjp_4578_;
}
v_resetjp_4578_:
{
uint8_t v___x_4581_; 
v___x_4581_ = lean_string_dec_eq(v_a_4577_, v_account_4574_);
lean_dec(v_a_4577_);
if (v___x_4581_ == 0)
{
lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; 
lean_del_object(v___x_4579_);
v___x_4582_ = ((lean_object*)(l_Near_Contract_requirePredecessor___closed__0));
v___x_4583_ = lean_string_append(v___x_4582_, v_account_4574_);
v___x_4584_ = lean_near_panic_str(v___x_4583_);
if (lean_obj_tag(v___x_4584_) == 0)
{
lean_object* v___x_4586_; uint8_t v_isShared_4587_; uint8_t v_isSharedCheck_4592_; 
v_isSharedCheck_4592_ = !lean_is_exclusive(v___x_4584_);
if (v_isSharedCheck_4592_ == 0)
{
lean_object* v_unused_4593_; 
v_unused_4593_ = lean_ctor_get(v___x_4584_, 0);
lean_dec(v_unused_4593_);
v___x_4586_ = v___x_4584_;
v_isShared_4587_ = v_isSharedCheck_4592_;
goto v_resetjp_4585_;
}
else
{
lean_dec(v___x_4584_);
v___x_4586_ = lean_box(0);
v_isShared_4587_ = v_isSharedCheck_4592_;
goto v_resetjp_4585_;
}
v_resetjp_4585_:
{
lean_object* v___x_4588_; lean_object* v___x_4590_; 
v___x_4588_ = lean_box(v___x_4581_);
if (v_isShared_4587_ == 0)
{
lean_ctor_set(v___x_4586_, 0, v___x_4588_);
v___x_4590_ = v___x_4586_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v___x_4588_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
return v___x_4590_;
}
}
}
else
{
lean_object* v_a_4594_; lean_object* v___x_4596_; uint8_t v_isShared_4597_; uint8_t v_isSharedCheck_4601_; 
v_a_4594_ = lean_ctor_get(v___x_4584_, 0);
v_isSharedCheck_4601_ = !lean_is_exclusive(v___x_4584_);
if (v_isSharedCheck_4601_ == 0)
{
v___x_4596_ = v___x_4584_;
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
else
{
lean_inc(v_a_4594_);
lean_dec(v___x_4584_);
v___x_4596_ = lean_box(0);
v_isShared_4597_ = v_isSharedCheck_4601_;
goto v_resetjp_4595_;
}
v_resetjp_4595_:
{
lean_object* v___x_4599_; 
if (v_isShared_4597_ == 0)
{
v___x_4599_ = v___x_4596_;
goto v_reusejp_4598_;
}
else
{
lean_object* v_reuseFailAlloc_4600_; 
v_reuseFailAlloc_4600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4600_, 0, v_a_4594_);
v___x_4599_ = v_reuseFailAlloc_4600_;
goto v_reusejp_4598_;
}
v_reusejp_4598_:
{
return v___x_4599_;
}
}
}
}
else
{
lean_object* v___x_4602_; lean_object* v___x_4604_; 
v___x_4602_ = lean_box(v___x_4581_);
if (v_isShared_4580_ == 0)
{
lean_ctor_set(v___x_4579_, 0, v___x_4602_);
v___x_4604_ = v___x_4579_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v___x_4602_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
}
else
{
lean_object* v_a_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4614_; 
v_a_4607_ = lean_ctor_get(v___x_4576_, 0);
v_isSharedCheck_4614_ = !lean_is_exclusive(v___x_4576_);
if (v_isSharedCheck_4614_ == 0)
{
v___x_4609_ = v___x_4576_;
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_a_4607_);
lean_dec(v___x_4576_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4614_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4612_; 
if (v_isShared_4610_ == 0)
{
v___x_4612_ = v___x_4609_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4613_; 
v_reuseFailAlloc_4613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4613_, 0, v_a_4607_);
v___x_4612_ = v_reuseFailAlloc_4613_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
return v___x_4612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePredecessor___boxed(lean_object* v_account_4615_, lean_object* v_a_4616_){
_start:
{
lean_object* v_res_4617_; 
v_res_4617_ = l_Near_Contract_requirePredecessor(v_account_4615_);
lean_dec_ref(v_account_4615_);
return v_res_4617_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePrivate(lean_object* v_methodName_4620_){
_start:
{
lean_object* v___x_4622_; 
v___x_4622_ = lean_near_current_account_id();
if (lean_obj_tag(v___x_4622_) == 0)
{
lean_object* v_a_4623_; lean_object* v___x_4624_; 
v_a_4623_ = lean_ctor_get(v___x_4622_, 0);
lean_inc(v_a_4623_);
lean_dec_ref_known(v___x_4622_, 1);
v___x_4624_ = lean_near_predecessor_account_id();
if (lean_obj_tag(v___x_4624_) == 0)
{
lean_object* v_a_4625_; lean_object* v___x_4627_; uint8_t v_isShared_4628_; uint8_t v_isSharedCheck_4656_; 
v_a_4625_ = lean_ctor_get(v___x_4624_, 0);
v_isSharedCheck_4656_ = !lean_is_exclusive(v___x_4624_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4627_ = v___x_4624_;
v_isShared_4628_ = v_isSharedCheck_4656_;
goto v_resetjp_4626_;
}
else
{
lean_inc(v_a_4625_);
lean_dec(v___x_4624_);
v___x_4627_ = lean_box(0);
v_isShared_4628_ = v_isSharedCheck_4656_;
goto v_resetjp_4626_;
}
v_resetjp_4626_:
{
uint8_t v___x_4629_; 
v___x_4629_ = lean_string_dec_eq(v_a_4623_, v_a_4625_);
lean_dec(v_a_4625_);
lean_dec(v_a_4623_);
if (v___x_4629_ == 0)
{
lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; 
lean_del_object(v___x_4627_);
v___x_4630_ = ((lean_object*)(l_Near_Contract_requirePrivate___closed__0));
v___x_4631_ = lean_string_append(v___x_4630_, v_methodName_4620_);
v___x_4632_ = ((lean_object*)(l_Near_Contract_requirePrivate___closed__1));
v___x_4633_ = lean_string_append(v___x_4631_, v___x_4632_);
v___x_4634_ = lean_near_panic_str(v___x_4633_);
if (lean_obj_tag(v___x_4634_) == 0)
{
lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4642_; 
v_isSharedCheck_4642_ = !lean_is_exclusive(v___x_4634_);
if (v_isSharedCheck_4642_ == 0)
{
lean_object* v_unused_4643_; 
v_unused_4643_ = lean_ctor_get(v___x_4634_, 0);
lean_dec(v_unused_4643_);
v___x_4636_ = v___x_4634_;
v_isShared_4637_ = v_isSharedCheck_4642_;
goto v_resetjp_4635_;
}
else
{
lean_dec(v___x_4634_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4642_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4638_; lean_object* v___x_4640_; 
v___x_4638_ = lean_box(v___x_4629_);
if (v_isShared_4637_ == 0)
{
lean_ctor_set(v___x_4636_, 0, v___x_4638_);
v___x_4640_ = v___x_4636_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v___x_4638_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
return v___x_4640_;
}
}
}
else
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4651_; 
v_a_4644_ = lean_ctor_get(v___x_4634_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4634_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4646_ = v___x_4634_;
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4634_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4649_; 
if (v_isShared_4647_ == 0)
{
v___x_4649_ = v___x_4646_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4644_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
}
}
}
}
else
{
lean_object* v___x_4652_; lean_object* v___x_4654_; 
v___x_4652_ = lean_box(v___x_4629_);
if (v_isShared_4628_ == 0)
{
lean_ctor_set(v___x_4627_, 0, v___x_4652_);
v___x_4654_ = v___x_4627_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v___x_4652_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
return v___x_4654_;
}
}
}
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
lean_dec(v_a_4623_);
v_a_4657_ = lean_ctor_get(v___x_4624_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4624_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4624_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4624_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
v_a_4665_ = lean_ctor_get(v___x_4622_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4622_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4622_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4622_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requirePrivate___boxed(lean_object* v_methodName_4673_, lean_object* v_a_4674_){
_start:
{
lean_object* v_res_4675_; 
v_res_4675_ = l_Near_Contract_requirePrivate(v_methodName_4673_);
lean_dec_ref(v_methodName_4673_);
return v_res_4675_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNoDeposit(){
_start:
{
lean_object* v___x_4678_; 
v___x_4678_ = lean_near_attached_deposit();
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4716_; 
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4716_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4716_ == 0)
{
v___x_4681_ = v___x_4678_;
v_isShared_4682_ = v_isSharedCheck_4716_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4678_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4716_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v_a_4684_; lean_object* v___x_4709_; 
v___x_4709_ = lean_string_data(v_a_4679_);
if (lean_obj_tag(v___x_4709_) == 0)
{
lean_object* v___x_4710_; 
v___x_4710_ = lean_unsigned_to_nat(0u);
v_a_4684_ = v___x_4710_;
goto v___jp_4683_;
}
else
{
lean_object* v___f_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; 
v___f_4711_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_4712_ = lean_unsigned_to_nat(0u);
v___x_4713_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_4714_ = l_List_foldl___redArg(v___f_4711_, v___x_4713_, v___x_4709_);
if (lean_obj_tag(v___x_4714_) == 0)
{
v_a_4684_ = v___x_4712_;
goto v___jp_4683_;
}
else
{
lean_object* v_val_4715_; 
v_val_4715_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_val_4715_);
lean_dec_ref_known(v___x_4714_, 1);
v_a_4684_ = v_val_4715_;
goto v___jp_4683_;
}
}
v___jp_4683_:
{
uint8_t v___x_4685_; 
v___x_4685_ = l_Near_NearToken_isZero(v_a_4684_);
lean_dec(v_a_4684_);
if (v___x_4685_ == 0)
{
lean_object* v___x_4686_; lean_object* v___x_4687_; 
lean_del_object(v___x_4681_);
v___x_4686_ = ((lean_object*)(l_Near_Contract_requireNoDeposit___closed__0));
v___x_4687_ = lean_near_panic_str(v___x_4686_);
if (lean_obj_tag(v___x_4687_) == 0)
{
lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4695_; 
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4695_ == 0)
{
lean_object* v_unused_4696_; 
v_unused_4696_ = lean_ctor_get(v___x_4687_, 0);
lean_dec(v_unused_4696_);
v___x_4689_ = v___x_4687_;
v_isShared_4690_ = v_isSharedCheck_4695_;
goto v_resetjp_4688_;
}
else
{
lean_dec(v___x_4687_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4695_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4691_; lean_object* v___x_4693_; 
v___x_4691_ = lean_box(v___x_4685_);
if (v_isShared_4690_ == 0)
{
lean_ctor_set(v___x_4689_, 0, v___x_4691_);
v___x_4693_ = v___x_4689_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v___x_4691_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
else
{
lean_object* v_a_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4704_; 
v_a_4697_ = lean_ctor_get(v___x_4687_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4687_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4699_ = v___x_4687_;
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_a_4697_);
lean_dec(v___x_4687_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4697_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
else
{
lean_object* v___x_4705_; lean_object* v___x_4707_; 
v___x_4705_ = lean_box(v___x_4685_);
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 0, v___x_4705_);
v___x_4707_ = v___x_4681_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v___x_4705_);
v___x_4707_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
return v___x_4707_;
}
}
}
}
}
else
{
lean_object* v_a_4717_; lean_object* v___x_4719_; uint8_t v_isShared_4720_; uint8_t v_isSharedCheck_4724_; 
v_a_4717_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4724_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4724_ == 0)
{
v___x_4719_ = v___x_4678_;
v_isShared_4720_ = v_isSharedCheck_4724_;
goto v_resetjp_4718_;
}
else
{
lean_inc(v_a_4717_);
lean_dec(v___x_4678_);
v___x_4719_ = lean_box(0);
v_isShared_4720_ = v_isSharedCheck_4724_;
goto v_resetjp_4718_;
}
v_resetjp_4718_:
{
lean_object* v___x_4722_; 
if (v_isShared_4720_ == 0)
{
v___x_4722_ = v___x_4719_;
goto v_reusejp_4721_;
}
else
{
lean_object* v_reuseFailAlloc_4723_; 
v_reuseFailAlloc_4723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4723_, 0, v_a_4717_);
v___x_4722_ = v_reuseFailAlloc_4723_;
goto v_reusejp_4721_;
}
v_reusejp_4721_:
{
return v___x_4722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireNoDeposit___boxed(lean_object* v_a_4725_){
_start:
{
lean_object* v_res_4726_; 
v_res_4726_ = l_Near_Contract_requireNoDeposit();
return v_res_4726_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireOneYocto(){
_start:
{
lean_object* v___x_4729_; 
v___x_4729_ = lean_near_attached_deposit();
if (lean_obj_tag(v___x_4729_) == 0)
{
lean_object* v_a_4730_; lean_object* v___x_4732_; uint8_t v_isShared_4733_; uint8_t v_isSharedCheck_4768_; 
v_a_4730_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4768_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4768_ == 0)
{
v___x_4732_ = v___x_4729_;
v_isShared_4733_ = v_isSharedCheck_4768_;
goto v_resetjp_4731_;
}
else
{
lean_inc(v_a_4730_);
lean_dec(v___x_4729_);
v___x_4732_ = lean_box(0);
v_isShared_4733_ = v_isSharedCheck_4768_;
goto v_resetjp_4731_;
}
v_resetjp_4731_:
{
lean_object* v_a_4735_; lean_object* v___x_4761_; 
v___x_4761_ = lean_string_data(v_a_4730_);
if (lean_obj_tag(v___x_4761_) == 0)
{
lean_object* v___x_4762_; 
v___x_4762_ = lean_unsigned_to_nat(0u);
v_a_4735_ = v___x_4762_;
goto v___jp_4734_;
}
else
{
lean_object* v___f_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; 
v___f_4763_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_4764_ = lean_unsigned_to_nat(0u);
v___x_4765_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_4766_ = l_List_foldl___redArg(v___f_4763_, v___x_4765_, v___x_4761_);
if (lean_obj_tag(v___x_4766_) == 0)
{
v_a_4735_ = v___x_4764_;
goto v___jp_4734_;
}
else
{
lean_object* v_val_4767_; 
v_val_4767_ = lean_ctor_get(v___x_4766_, 0);
lean_inc(v_val_4767_);
lean_dec_ref_known(v___x_4766_, 1);
v_a_4735_ = v_val_4767_;
goto v___jp_4734_;
}
}
v___jp_4734_:
{
lean_object* v___x_4736_; uint8_t v___x_4737_; 
v___x_4736_ = lean_unsigned_to_nat(1u);
v___x_4737_ = lean_nat_dec_eq(v_a_4735_, v___x_4736_);
lean_dec(v_a_4735_);
if (v___x_4737_ == 0)
{
lean_object* v___x_4738_; lean_object* v___x_4739_; 
lean_del_object(v___x_4732_);
v___x_4738_ = ((lean_object*)(l_Near_Contract_requireOneYocto___closed__0));
v___x_4739_ = lean_near_panic_str(v___x_4738_);
if (lean_obj_tag(v___x_4739_) == 0)
{
lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4747_; 
v_isSharedCheck_4747_ = !lean_is_exclusive(v___x_4739_);
if (v_isSharedCheck_4747_ == 0)
{
lean_object* v_unused_4748_; 
v_unused_4748_ = lean_ctor_get(v___x_4739_, 0);
lean_dec(v_unused_4748_);
v___x_4741_ = v___x_4739_;
v_isShared_4742_ = v_isSharedCheck_4747_;
goto v_resetjp_4740_;
}
else
{
lean_dec(v___x_4739_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4747_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4743_; lean_object* v___x_4745_; 
v___x_4743_ = lean_box(v___x_4737_);
if (v_isShared_4742_ == 0)
{
lean_ctor_set(v___x_4741_, 0, v___x_4743_);
v___x_4745_ = v___x_4741_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v___x_4743_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
return v___x_4745_;
}
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
v_a_4749_ = lean_ctor_get(v___x_4739_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4739_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4739_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4739_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
}
else
{
lean_object* v___x_4757_; lean_object* v___x_4759_; 
v___x_4757_ = lean_box(v___x_4737_);
if (v_isShared_4733_ == 0)
{
lean_ctor_set(v___x_4732_, 0, v___x_4757_);
v___x_4759_ = v___x_4732_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v___x_4757_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
}
else
{
lean_object* v_a_4769_; lean_object* v___x_4771_; uint8_t v_isShared_4772_; uint8_t v_isSharedCheck_4776_; 
v_a_4769_ = lean_ctor_get(v___x_4729_, 0);
v_isSharedCheck_4776_ = !lean_is_exclusive(v___x_4729_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4771_ = v___x_4729_;
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
else
{
lean_inc(v_a_4769_);
lean_dec(v___x_4729_);
v___x_4771_ = lean_box(0);
v_isShared_4772_ = v_isSharedCheck_4776_;
goto v_resetjp_4770_;
}
v_resetjp_4770_:
{
lean_object* v___x_4774_; 
if (v_isShared_4772_ == 0)
{
v___x_4774_ = v___x_4771_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v_a_4769_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireOneYocto___boxed(lean_object* v_a_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l_Near_Contract_requireOneYocto();
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireMinDeposit(lean_object* v_minDeposit_4780_){
_start:
{
lean_object* v___x_4782_; 
v___x_4782_ = lean_near_attached_deposit();
if (lean_obj_tag(v___x_4782_) == 0)
{
lean_object* v_a_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4822_; 
v_a_4783_ = lean_ctor_get(v___x_4782_, 0);
v_isSharedCheck_4822_ = !lean_is_exclusive(v___x_4782_);
if (v_isSharedCheck_4822_ == 0)
{
v___x_4785_ = v___x_4782_;
v_isShared_4786_ = v_isSharedCheck_4822_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_a_4783_);
lean_dec(v___x_4782_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4822_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v_a_4788_; lean_object* v___x_4815_; 
v___x_4815_ = lean_string_data(v_a_4783_);
if (lean_obj_tag(v___x_4815_) == 0)
{
lean_object* v___x_4816_; 
v___x_4816_ = lean_unsigned_to_nat(0u);
v_a_4788_ = v___x_4816_;
goto v___jp_4787_;
}
else
{
lean_object* v___f_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___f_4817_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__0));
v___x_4818_ = lean_unsigned_to_nat(0u);
v___x_4819_ = ((lean_object*)(l_Near_Storage_parseNat_x3f___closed__1));
v___x_4820_ = l_List_foldl___redArg(v___f_4817_, v___x_4819_, v___x_4815_);
if (lean_obj_tag(v___x_4820_) == 0)
{
v_a_4788_ = v___x_4818_;
goto v___jp_4787_;
}
else
{
lean_object* v_val_4821_; 
v_val_4821_ = lean_ctor_get(v___x_4820_, 0);
lean_inc(v_val_4821_);
lean_dec_ref_known(v___x_4820_, 1);
v_a_4788_ = v_val_4821_;
goto v___jp_4787_;
}
}
v___jp_4787_:
{
uint8_t v___x_4789_; 
v___x_4789_ = lean_nat_dec_le(v_minDeposit_4780_, v_a_4788_);
lean_dec(v_a_4788_);
if (v___x_4789_ == 0)
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
lean_del_object(v___x_4785_);
v___x_4790_ = ((lean_object*)(l_Near_Contract_requireMinDeposit___closed__0));
v___x_4791_ = l_Nat_reprFast(v_minDeposit_4780_);
v___x_4792_ = lean_string_append(v___x_4790_, v___x_4791_);
lean_dec_ref(v___x_4791_);
v___x_4793_ = lean_near_panic_str(v___x_4792_);
if (lean_obj_tag(v___x_4793_) == 0)
{
lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4801_; 
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4793_);
if (v_isSharedCheck_4801_ == 0)
{
lean_object* v_unused_4802_; 
v_unused_4802_ = lean_ctor_get(v___x_4793_, 0);
lean_dec(v_unused_4802_);
v___x_4795_ = v___x_4793_;
v_isShared_4796_ = v_isSharedCheck_4801_;
goto v_resetjp_4794_;
}
else
{
lean_dec(v___x_4793_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4801_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4797_; lean_object* v___x_4799_; 
v___x_4797_ = lean_box(v___x_4789_);
if (v_isShared_4796_ == 0)
{
lean_ctor_set(v___x_4795_, 0, v___x_4797_);
v___x_4799_ = v___x_4795_;
goto v_reusejp_4798_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v___x_4797_);
v___x_4799_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4798_;
}
v_reusejp_4798_:
{
return v___x_4799_;
}
}
}
else
{
lean_object* v_a_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4810_; 
v_a_4803_ = lean_ctor_get(v___x_4793_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4793_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4805_ = v___x_4793_;
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_a_4803_);
lean_dec(v___x_4793_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v___x_4808_; 
if (v_isShared_4806_ == 0)
{
v___x_4808_ = v___x_4805_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_a_4803_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
return v___x_4808_;
}
}
}
}
else
{
lean_object* v___x_4811_; lean_object* v___x_4813_; 
lean_dec(v_minDeposit_4780_);
v___x_4811_ = lean_box(v___x_4789_);
if (v_isShared_4786_ == 0)
{
lean_ctor_set(v___x_4785_, 0, v___x_4811_);
v___x_4813_ = v___x_4785_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v___x_4811_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
}
else
{
lean_object* v_a_4823_; lean_object* v___x_4825_; uint8_t v_isShared_4826_; uint8_t v_isSharedCheck_4830_; 
lean_dec(v_minDeposit_4780_);
v_a_4823_ = lean_ctor_get(v___x_4782_, 0);
v_isSharedCheck_4830_ = !lean_is_exclusive(v___x_4782_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4825_ = v___x_4782_;
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
else
{
lean_inc(v_a_4823_);
lean_dec(v___x_4782_);
v___x_4825_ = lean_box(0);
v_isShared_4826_ = v_isSharedCheck_4830_;
goto v_resetjp_4824_;
}
v_resetjp_4824_:
{
lean_object* v___x_4828_; 
if (v_isShared_4826_ == 0)
{
v___x_4828_ = v___x_4825_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v_a_4823_);
v___x_4828_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
return v___x_4828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_requireMinDeposit___boxed(lean_object* v_minDeposit_4831_, lean_object* v_a_4832_){
_start:
{
lean_object* v_res_4833_; 
v_res_4833_ = l_Near_Contract_requireMinDeposit(v_minDeposit_4831_);
return v_res_4833_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState(lean_object* v_value_4834_){
_start:
{
lean_object* v___x_4836_; lean_object* v___x_4837_; 
v___x_4836_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4837_ = lean_near_storage_write(v___x_4836_, v_value_4834_);
return v___x_4837_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initState___boxed(lean_object* v_value_4838_, lean_object* v_a_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l_Near_Contract_initState(v_value_4838_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState(){
_start:
{
lean_object* v___x_4842_; lean_object* v___x_4843_; 
v___x_4842_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4843_ = lean_near_storage_read(v___x_4842_);
return v___x_4843_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadState___boxed(lean_object* v_a_4844_){
_start:
{
lean_object* v_res_4845_; 
v_res_4845_ = l_Near_Contract_loadState();
return v_res_4845_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg(lean_object* v_inst_4846_, lean_object* v_value_4847_){
_start:
{
lean_object* v_encode_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v_encode_4849_ = lean_ctor_get(v_inst_4846_, 0);
lean_inc_ref(v_encode_4849_);
lean_dec_ref(v_inst_4846_);
v___x_4850_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4851_ = lean_apply_1(v_encode_4849_, v_value_4847_);
v___x_4852_ = lean_near_storage_write(v___x_4850_, v___x_4851_);
return v___x_4852_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___redArg___boxed(lean_object* v_inst_4853_, lean_object* v_value_4854_, lean_object* v_a_4855_){
_start:
{
lean_object* v_res_4856_; 
v_res_4856_ = l_Near_Contract_initStateAs___redArg(v_inst_4853_, v_value_4854_);
return v_res_4856_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs(lean_object* v_00_u03b1_4857_, lean_object* v_inst_4858_, lean_object* v_value_4859_){
_start:
{
lean_object* v_encode_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; 
v_encode_4861_ = lean_ctor_get(v_inst_4858_, 0);
lean_inc_ref(v_encode_4861_);
lean_dec_ref(v_inst_4858_);
v___x_4862_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4863_ = lean_apply_1(v_encode_4861_, v_value_4859_);
v___x_4864_ = lean_near_storage_write(v___x_4862_, v___x_4863_);
return v___x_4864_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_initStateAs___boxed(lean_object* v_00_u03b1_4865_, lean_object* v_inst_4866_, lean_object* v_value_4867_, lean_object* v_a_4868_){
_start:
{
lean_object* v_res_4869_; 
v_res_4869_ = l_Near_Contract_initStateAs(v_00_u03b1_4865_, v_inst_4866_, v_value_4867_);
return v_res_4869_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg(lean_object* v_inst_4870_, lean_object* v_value_4871_){
_start:
{
lean_object* v_encode_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; 
v_encode_4873_ = lean_ctor_get(v_inst_4870_, 0);
lean_inc_ref(v_encode_4873_);
lean_dec_ref(v_inst_4870_);
v___x_4874_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4875_ = lean_apply_1(v_encode_4873_, v_value_4871_);
v___x_4876_ = lean_near_storage_write(v___x_4874_, v___x_4875_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___redArg___boxed(lean_object* v_inst_4877_, lean_object* v_value_4878_, lean_object* v_a_4879_){
_start:
{
lean_object* v_res_4880_; 
v_res_4880_ = l_Near_Contract_saveStateAs___redArg(v_inst_4877_, v_value_4878_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs(lean_object* v_00_u03b1_4881_, lean_object* v_inst_4882_, lean_object* v_value_4883_){
_start:
{
lean_object* v_encode_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v_encode_4885_ = lean_ctor_get(v_inst_4882_, 0);
lean_inc_ref(v_encode_4885_);
lean_dec_ref(v_inst_4882_);
v___x_4886_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4887_ = lean_apply_1(v_encode_4885_, v_value_4883_);
v___x_4888_ = lean_near_storage_write(v___x_4886_, v___x_4887_);
return v___x_4888_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_saveStateAs___boxed(lean_object* v_00_u03b1_4889_, lean_object* v_inst_4890_, lean_object* v_value_4891_, lean_object* v_a_4892_){
_start:
{
lean_object* v_res_4893_; 
v_res_4893_ = l_Near_Contract_saveStateAs(v_00_u03b1_4889_, v_inst_4890_, v_value_4891_);
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg(lean_object* v_inst_4894_){
_start:
{
lean_object* v___x_4896_; lean_object* v___x_4897_; 
v___x_4896_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4897_ = lean_near_storage_read(v___x_4896_);
if (lean_obj_tag(v___x_4897_) == 0)
{
lean_object* v_a_4898_; lean_object* v___x_4900_; uint8_t v_isShared_4901_; uint8_t v_isSharedCheck_4912_; 
v_a_4898_ = lean_ctor_get(v___x_4897_, 0);
v_isSharedCheck_4912_ = !lean_is_exclusive(v___x_4897_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_4900_ = v___x_4897_;
v_isShared_4901_ = v_isSharedCheck_4912_;
goto v_resetjp_4899_;
}
else
{
lean_inc(v_a_4898_);
lean_dec(v___x_4897_);
v___x_4900_ = lean_box(0);
v_isShared_4901_ = v_isSharedCheck_4912_;
goto v_resetjp_4899_;
}
v_resetjp_4899_:
{
if (lean_obj_tag(v_a_4898_) == 0)
{
lean_object* v___x_4902_; lean_object* v___x_4904_; 
lean_dec_ref(v_inst_4894_);
v___x_4902_ = lean_box(0);
if (v_isShared_4901_ == 0)
{
lean_ctor_set(v___x_4900_, 0, v___x_4902_);
v___x_4904_ = v___x_4900_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v___x_4902_);
v___x_4904_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
return v___x_4904_;
}
}
else
{
lean_object* v_val_4906_; lean_object* v_decode_4907_; lean_object* v___x_4908_; lean_object* v___x_4910_; 
v_val_4906_ = lean_ctor_get(v_a_4898_, 0);
lean_inc(v_val_4906_);
lean_dec_ref_known(v_a_4898_, 1);
v_decode_4907_ = lean_ctor_get(v_inst_4894_, 1);
lean_inc_ref(v_decode_4907_);
lean_dec_ref(v_inst_4894_);
v___x_4908_ = lean_apply_1(v_decode_4907_, v_val_4906_);
if (v_isShared_4901_ == 0)
{
lean_ctor_set(v___x_4900_, 0, v___x_4908_);
v___x_4910_ = v___x_4900_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v___x_4908_);
v___x_4910_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
return v___x_4910_;
}
}
}
}
else
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
lean_dec_ref(v_inst_4894_);
v_a_4913_ = lean_ctor_get(v___x_4897_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4897_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4915_ = v___x_4897_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4897_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4913_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___redArg___boxed(lean_object* v_inst_4921_, lean_object* v_a_4922_){
_start:
{
lean_object* v_res_4923_; 
v_res_4923_ = l_Near_Contract_loadStateAs_x3f___redArg(v_inst_4921_);
return v_res_4923_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f(lean_object* v_00_u03b1_4924_, lean_object* v_inst_4925_){
_start:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; 
v___x_4927_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4928_ = lean_near_storage_read(v___x_4927_);
if (lean_obj_tag(v___x_4928_) == 0)
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4943_; 
v_a_4929_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4943_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4931_ = v___x_4928_;
v_isShared_4932_ = v_isSharedCheck_4943_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4928_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4943_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
if (lean_obj_tag(v_a_4929_) == 0)
{
lean_object* v___x_4933_; lean_object* v___x_4935_; 
lean_dec_ref(v_inst_4925_);
v___x_4933_ = lean_box(0);
if (v_isShared_4932_ == 0)
{
lean_ctor_set(v___x_4931_, 0, v___x_4933_);
v___x_4935_ = v___x_4931_;
goto v_reusejp_4934_;
}
else
{
lean_object* v_reuseFailAlloc_4936_; 
v_reuseFailAlloc_4936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4936_, 0, v___x_4933_);
v___x_4935_ = v_reuseFailAlloc_4936_;
goto v_reusejp_4934_;
}
v_reusejp_4934_:
{
return v___x_4935_;
}
}
else
{
lean_object* v_val_4937_; lean_object* v_decode_4938_; lean_object* v___x_4939_; lean_object* v___x_4941_; 
v_val_4937_ = lean_ctor_get(v_a_4929_, 0);
lean_inc(v_val_4937_);
lean_dec_ref_known(v_a_4929_, 1);
v_decode_4938_ = lean_ctor_get(v_inst_4925_, 1);
lean_inc_ref(v_decode_4938_);
lean_dec_ref(v_inst_4925_);
v___x_4939_ = lean_apply_1(v_decode_4938_, v_val_4937_);
if (v_isShared_4932_ == 0)
{
lean_ctor_set(v___x_4931_, 0, v___x_4939_);
v___x_4941_ = v___x_4931_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v___x_4939_);
v___x_4941_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
return v___x_4941_;
}
}
}
}
else
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4951_; 
lean_dec_ref(v_inst_4925_);
v_a_4944_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4946_ = v___x_4928_;
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4928_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4949_; 
if (v_isShared_4947_ == 0)
{
v___x_4949_ = v___x_4946_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4944_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs_x3f___boxed(lean_object* v_00_u03b1_4952_, lean_object* v_inst_4953_, lean_object* v_a_4954_){
_start:
{
lean_object* v_res_4955_; 
v_res_4955_ = l_Near_Contract_loadStateAs_x3f(v_00_u03b1_4952_, v_inst_4953_);
return v_res_4955_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg(lean_object* v_inst_4956_, lean_object* v_default_4957_){
_start:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; 
v___x_4959_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4960_ = lean_near_storage_read(v___x_4959_);
if (lean_obj_tag(v___x_4960_) == 0)
{
lean_object* v_a_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4978_; 
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_4978_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_4978_ == 0)
{
v___x_4963_ = v___x_4960_;
v_isShared_4964_ = v_isSharedCheck_4978_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_a_4961_);
lean_dec(v___x_4960_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4978_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
if (lean_obj_tag(v_a_4961_) == 0)
{
lean_object* v___x_4966_; 
lean_dec_ref(v_inst_4956_);
if (v_isShared_4964_ == 0)
{
lean_ctor_set(v___x_4963_, 0, v_default_4957_);
v___x_4966_ = v___x_4963_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v_default_4957_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
return v___x_4966_;
}
}
else
{
lean_object* v_val_4968_; lean_object* v_decode_4969_; lean_object* v___x_4970_; 
v_val_4968_ = lean_ctor_get(v_a_4961_, 0);
lean_inc(v_val_4968_);
lean_dec_ref_known(v_a_4961_, 1);
v_decode_4969_ = lean_ctor_get(v_inst_4956_, 1);
lean_inc_ref(v_decode_4969_);
lean_dec_ref(v_inst_4956_);
v___x_4970_ = lean_apply_1(v_decode_4969_, v_val_4968_);
if (lean_obj_tag(v___x_4970_) == 0)
{
lean_object* v___x_4972_; 
if (v_isShared_4964_ == 0)
{
lean_ctor_set(v___x_4963_, 0, v_default_4957_);
v___x_4972_ = v___x_4963_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_default_4957_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
else
{
lean_object* v_val_4974_; lean_object* v___x_4976_; 
lean_dec(v_default_4957_);
v_val_4974_ = lean_ctor_get(v___x_4970_, 0);
lean_inc(v_val_4974_);
lean_dec_ref_known(v___x_4970_, 1);
if (v_isShared_4964_ == 0)
{
lean_ctor_set(v___x_4963_, 0, v_val_4974_);
v___x_4976_ = v___x_4963_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v_val_4974_);
v___x_4976_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
return v___x_4976_;
}
}
}
}
}
else
{
lean_object* v_a_4979_; lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4986_; 
lean_dec(v_default_4957_);
lean_dec_ref(v_inst_4956_);
v_a_4979_ = lean_ctor_get(v___x_4960_, 0);
v_isSharedCheck_4986_ = !lean_is_exclusive(v___x_4960_);
if (v_isSharedCheck_4986_ == 0)
{
v___x_4981_ = v___x_4960_;
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
else
{
lean_inc(v_a_4979_);
lean_dec(v___x_4960_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
v_resetjp_4980_:
{
lean_object* v___x_4984_; 
if (v_isShared_4982_ == 0)
{
v___x_4984_ = v___x_4981_;
goto v_reusejp_4983_;
}
else
{
lean_object* v_reuseFailAlloc_4985_; 
v_reuseFailAlloc_4985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4985_, 0, v_a_4979_);
v___x_4984_ = v_reuseFailAlloc_4985_;
goto v_reusejp_4983_;
}
v_reusejp_4983_:
{
return v___x_4984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___redArg___boxed(lean_object* v_inst_4987_, lean_object* v_default_4988_, lean_object* v_a_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l_Near_Contract_loadStateAs___redArg(v_inst_4987_, v_default_4988_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs(lean_object* v_00_u03b1_4991_, lean_object* v_inst_4992_, lean_object* v_default_4993_){
_start:
{
lean_object* v___x_4995_; lean_object* v___x_4996_; 
v___x_4995_ = ((lean_object*)(l_Near_Contract_isInitialized___closed__0));
v___x_4996_ = lean_near_storage_read(v___x_4995_);
if (lean_obj_tag(v___x_4996_) == 0)
{
lean_object* v_a_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5014_; 
v_a_4997_ = lean_ctor_get(v___x_4996_, 0);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_4999_ = v___x_4996_;
v_isShared_5000_ = v_isSharedCheck_5014_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_a_4997_);
lean_dec(v___x_4996_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5014_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
if (lean_obj_tag(v_a_4997_) == 0)
{
lean_object* v___x_5002_; 
lean_dec_ref(v_inst_4992_);
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 0, v_default_4993_);
v___x_5002_ = v___x_4999_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_default_4993_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
else
{
lean_object* v_val_5004_; lean_object* v_decode_5005_; lean_object* v___x_5006_; 
v_val_5004_ = lean_ctor_get(v_a_4997_, 0);
lean_inc(v_val_5004_);
lean_dec_ref_known(v_a_4997_, 1);
v_decode_5005_ = lean_ctor_get(v_inst_4992_, 1);
lean_inc_ref(v_decode_5005_);
lean_dec_ref(v_inst_4992_);
v___x_5006_ = lean_apply_1(v_decode_5005_, v_val_5004_);
if (lean_obj_tag(v___x_5006_) == 0)
{
lean_object* v___x_5008_; 
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 0, v_default_4993_);
v___x_5008_ = v___x_4999_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5009_; 
v_reuseFailAlloc_5009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5009_, 0, v_default_4993_);
v___x_5008_ = v_reuseFailAlloc_5009_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
return v___x_5008_;
}
}
else
{
lean_object* v_val_5010_; lean_object* v___x_5012_; 
lean_dec(v_default_4993_);
v_val_5010_ = lean_ctor_get(v___x_5006_, 0);
lean_inc(v_val_5010_);
lean_dec_ref_known(v___x_5006_, 1);
if (v_isShared_5000_ == 0)
{
lean_ctor_set(v___x_4999_, 0, v_val_5010_);
v___x_5012_ = v___x_4999_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v_val_5010_);
v___x_5012_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
return v___x_5012_;
}
}
}
}
}
else
{
lean_object* v_a_5015_; lean_object* v___x_5017_; uint8_t v_isShared_5018_; uint8_t v_isSharedCheck_5022_; 
lean_dec(v_default_4993_);
lean_dec_ref(v_inst_4992_);
v_a_5015_ = lean_ctor_get(v___x_4996_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_4996_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5017_ = v___x_4996_;
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
else
{
lean_inc(v_a_5015_);
lean_dec(v___x_4996_);
v___x_5017_ = lean_box(0);
v_isShared_5018_ = v_isSharedCheck_5022_;
goto v_resetjp_5016_;
}
v_resetjp_5016_:
{
lean_object* v___x_5020_; 
if (v_isShared_5018_ == 0)
{
v___x_5020_ = v___x_5017_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v_a_5015_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Contract_loadStateAs___boxed(lean_object* v_00_u03b1_5023_, lean_object* v_inst_5024_, lean_object* v_default_5025_, lean_object* v_a_5026_){
_start:
{
lean_object* v_res_5027_; 
v_res_5027_ = l_Near_Contract_loadStateAs(v_00_u03b1_5023_, v_inst_5024_, v_default_5025_);
return v_res_5027_;
}
}
LEAN_EXPORT uint8_t l_Near_instBEqPromiseIndex_beq(uint64_t v_x_5028_, uint64_t v_x_5029_){
_start:
{
uint8_t v___x_5030_; 
v___x_5030_ = lean_uint64_dec_eq(v_x_5028_, v_x_5029_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l_Near_instBEqPromiseIndex_beq___boxed(lean_object* v_x_5031_, lean_object* v_x_5032_){
_start:
{
uint64_t v_x_26__boxed_5033_; uint64_t v_x_27__boxed_5034_; uint8_t v_res_5035_; lean_object* v_r_5036_; 
v_x_26__boxed_5033_ = lean_unbox_uint64(v_x_5031_);
lean_dec_ref(v_x_5031_);
v_x_27__boxed_5034_ = lean_unbox_uint64(v_x_5032_);
lean_dec_ref(v_x_5032_);
v_res_5035_ = l_Near_instBEqPromiseIndex_beq(v_x_26__boxed_5033_, v_x_27__boxed_5034_);
v_r_5036_ = lean_box(v_res_5035_);
return v_r_5036_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr___redArg(uint64_t v_x_5048_){
_start:
{
lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; uint8_t v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; 
v___x_5049_ = ((lean_object*)(l_Near_instReprPromiseIndex_repr___redArg___closed__3));
v___x_5050_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_5051_ = lean_uint64_to_nat(v_x_5048_);
v___x_5052_ = l_Nat_reprFast(v___x_5051_);
v___x_5053_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5053_, 0, v___x_5052_);
v___x_5054_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5054_, 0, v___x_5050_);
lean_ctor_set(v___x_5054_, 1, v___x_5053_);
v___x_5055_ = 0;
v___x_5056_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5056_, 0, v___x_5054_);
lean_ctor_set_uint8(v___x_5056_, sizeof(void*)*1, v___x_5055_);
v___x_5057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5057_, 0, v___x_5049_);
lean_ctor_set(v___x_5057_, 1, v___x_5056_);
v___x_5058_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_5059_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_5060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5060_, 0, v___x_5059_);
lean_ctor_set(v___x_5060_, 1, v___x_5057_);
v___x_5061_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_5062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5060_);
lean_ctor_set(v___x_5062_, 1, v___x_5061_);
v___x_5063_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5063_, 0, v___x_5058_);
lean_ctor_set(v___x_5063_, 1, v___x_5062_);
v___x_5064_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5064_, 0, v___x_5063_);
lean_ctor_set_uint8(v___x_5064_, sizeof(void*)*1, v___x_5055_);
return v___x_5064_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr___redArg___boxed(lean_object* v_x_5065_){
_start:
{
uint64_t v_x_116__boxed_5066_; lean_object* v_res_5067_; 
v_x_116__boxed_5066_ = lean_unbox_uint64(v_x_5065_);
lean_dec_ref(v_x_5065_);
v_res_5067_ = l_Near_instReprPromiseIndex_repr___redArg(v_x_116__boxed_5066_);
return v_res_5067_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr(uint64_t v_x_5068_, lean_object* v_prec_5069_){
_start:
{
lean_object* v___x_5070_; 
v___x_5070_ = l_Near_instReprPromiseIndex_repr___redArg(v_x_5068_);
return v___x_5070_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromiseIndex_repr___boxed(lean_object* v_x_5071_, lean_object* v_prec_5072_){
_start:
{
uint64_t v_x_160__boxed_5073_; lean_object* v_res_5074_; 
v_x_160__boxed_5073_ = lean_unbox_uint64(v_x_5071_);
lean_dec_ref(v_x_5071_);
v_res_5074_ = l_Near_instReprPromiseIndex_repr(v_x_160__boxed_5073_, v_prec_5072_);
lean_dec(v_prec_5072_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr___redArg(uint64_t v_x_5086_){
_start:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; uint8_t v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; 
v___x_5087_ = ((lean_object*)(l_Near_instReprPromise_repr___redArg___closed__3));
v___x_5088_ = lean_obj_once(&l_Near_instReprGas_repr___redArg___closed__4, &l_Near_instReprGas_repr___redArg___closed__4_once, _init_l_Near_instReprGas_repr___redArg___closed__4);
v___x_5089_ = l_Near_instReprPromiseIndex_repr___redArg(v_x_5086_);
v___x_5090_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5090_, 0, v___x_5088_);
lean_ctor_set(v___x_5090_, 1, v___x_5089_);
v___x_5091_ = 0;
v___x_5092_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5092_, 0, v___x_5090_);
lean_ctor_set_uint8(v___x_5092_, sizeof(void*)*1, v___x_5091_);
v___x_5093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5087_);
lean_ctor_set(v___x_5093_, 1, v___x_5092_);
v___x_5094_ = lean_obj_once(&l_Near_instReprNearToken_repr___redArg___closed__10, &l_Near_instReprNearToken_repr___redArg___closed__10_once, _init_l_Near_instReprNearToken_repr___redArg___closed__10);
v___x_5095_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__11));
v___x_5096_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5096_, 0, v___x_5095_);
lean_ctor_set(v___x_5096_, 1, v___x_5093_);
v___x_5097_ = ((lean_object*)(l_Near_instReprNearToken_repr___redArg___closed__12));
v___x_5098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5098_, 0, v___x_5096_);
lean_ctor_set(v___x_5098_, 1, v___x_5097_);
v___x_5099_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5094_);
lean_ctor_set(v___x_5099_, 1, v___x_5098_);
v___x_5100_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5100_, 0, v___x_5099_);
lean_ctor_set_uint8(v___x_5100_, sizeof(void*)*1, v___x_5091_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr___redArg___boxed(lean_object* v_x_5101_){
_start:
{
uint64_t v_x_109__boxed_5102_; lean_object* v_res_5103_; 
v_x_109__boxed_5102_ = lean_unbox_uint64(v_x_5101_);
lean_dec_ref(v_x_5101_);
v_res_5103_ = l_Near_instReprPromise_repr___redArg(v_x_109__boxed_5102_);
return v_res_5103_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr(uint64_t v_x_5104_, lean_object* v_prec_5105_){
_start:
{
lean_object* v___x_5106_; 
v___x_5106_ = l_Near_instReprPromise_repr___redArg(v_x_5104_);
return v___x_5106_;
}
}
LEAN_EXPORT lean_object* l_Near_instReprPromise_repr___boxed(lean_object* v_x_5107_, lean_object* v_prec_5108_){
_start:
{
uint64_t v_x_149__boxed_5109_; lean_object* v_res_5110_; 
v_x_149__boxed_5109_ = lean_unbox_uint64(v_x_5107_);
lean_dec_ref(v_x_5107_);
v_res_5110_ = l_Near_instReprPromise_repr(v_x_149__boxed_5109_, v_prec_5108_);
lean_dec(v_prec_5108_);
return v_res_5110_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_createRaw___boxed(lean_object* v_accountId_5119_, lean_object* v_methodName_5120_, lean_object* v_args_5121_, lean_object* v_amountYocto_5122_, lean_object* v_gas_5123_, lean_object* v_a_00___x40___internal___hyg_5124_){
_start:
{
uint64_t v_gas_boxed_5125_; lean_object* v_res_5126_; 
v_gas_boxed_5125_ = lean_unbox_uint64(v_gas_5123_);
lean_dec_ref(v_gas_5123_);
v_res_5126_ = lean_near_promise_create(v_accountId_5119_, v_methodName_5120_, v_args_5121_, v_amountYocto_5122_, v_gas_boxed_5125_);
return v_res_5126_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_thenRaw___boxed(lean_object* v_promiseIndex_5134_, lean_object* v_accountId_5135_, lean_object* v_methodName_5136_, lean_object* v_args_5137_, lean_object* v_amountYocto_5138_, lean_object* v_gas_5139_, lean_object* v_a_00___x40___internal___hyg_5140_){
_start:
{
uint64_t v_promiseIndex_boxed_5141_; uint64_t v_gas_boxed_5142_; lean_object* v_res_5143_; 
v_promiseIndex_boxed_5141_ = lean_unbox_uint64(v_promiseIndex_5134_);
lean_dec_ref(v_promiseIndex_5134_);
v_gas_boxed_5142_ = lean_unbox_uint64(v_gas_5139_);
lean_dec_ref(v_gas_5139_);
v_res_5143_ = lean_near_promise_then(v_promiseIndex_boxed_5141_, v_accountId_5135_, v_methodName_5136_, v_args_5137_, v_amountYocto_5138_, v_gas_boxed_5142_);
return v_res_5143_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_and2Raw___boxed(lean_object* v_left_5147_, lean_object* v_right_5148_, lean_object* v_a_00___x40___internal___hyg_5149_){
_start:
{
uint64_t v_left_boxed_5150_; uint64_t v_right_boxed_5151_; lean_object* v_res_5152_; 
v_left_boxed_5150_ = lean_unbox_uint64(v_left_5147_);
lean_dec_ref(v_left_5147_);
v_right_boxed_5151_ = lean_unbox_uint64(v_right_5148_);
lean_dec_ref(v_right_5148_);
v_res_5152_ = lean_near_promise_and2(v_left_boxed_5150_, v_right_boxed_5151_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_batchCreateRaw___boxed(lean_object* v_accountId_5155_, lean_object* v_a_00___x40___internal___hyg_5156_){
_start:
{
lean_object* v_res_5157_; 
v_res_5157_ = lean_near_promise_batch_create(v_accountId_5155_);
return v_res_5157_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_batchThenRaw___boxed(lean_object* v_promiseIndex_5161_, lean_object* v_accountId_5162_, lean_object* v_a_00___x40___internal___hyg_5163_){
_start:
{
uint64_t v_promiseIndex_boxed_5164_; lean_object* v_res_5165_; 
v_promiseIndex_boxed_5164_ = lean_unbox_uint64(v_promiseIndex_5161_);
lean_dec_ref(v_promiseIndex_5161_);
v_res_5165_ = lean_near_promise_batch_then(v_promiseIndex_boxed_5164_, v_accountId_5162_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_batchActionFunctionCallRaw___boxed(lean_object* v_promiseIndex_5172_, lean_object* v_methodName_5173_, lean_object* v_args_5174_, lean_object* v_amountYocto_5175_, lean_object* v_gas_5176_, lean_object* v_a_00___x40___internal___hyg_5177_){
_start:
{
uint64_t v_promiseIndex_boxed_5178_; uint64_t v_gas_boxed_5179_; lean_object* v_res_5180_; 
v_promiseIndex_boxed_5178_ = lean_unbox_uint64(v_promiseIndex_5172_);
lean_dec_ref(v_promiseIndex_5172_);
v_gas_boxed_5179_ = lean_unbox_uint64(v_gas_5176_);
lean_dec_ref(v_gas_5176_);
v_res_5180_ = lean_near_promise_batch_action_function_call(v_promiseIndex_boxed_5178_, v_methodName_5173_, v_args_5174_, v_amountYocto_5175_, v_gas_boxed_5179_);
return v_res_5180_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_batchActionTransferRaw___boxed(lean_object* v_promiseIndex_5184_, lean_object* v_amountYocto_5185_, lean_object* v_a_00___x40___internal___hyg_5186_){
_start:
{
uint64_t v_promiseIndex_boxed_5187_; lean_object* v_res_5188_; 
v_promiseIndex_boxed_5187_ = lean_unbox_uint64(v_promiseIndex_5184_);
lean_dec_ref(v_promiseIndex_5184_);
v_res_5188_ = lean_near_promise_batch_action_transfer(v_promiseIndex_boxed_5187_, v_amountYocto_5185_);
return v_res_5188_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_resultsCount___boxed(lean_object* v_a_00___x40___internal___hyg_5190_){
_start:
{
lean_object* v_res_5191_; 
v_res_5191_ = lean_near_promise_results_count();
return v_res_5191_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_resultStatusRaw___boxed(lean_object* v_resultIdx_5194_, lean_object* v_a_00___x40___internal___hyg_5195_){
_start:
{
uint64_t v_resultIdx_boxed_5196_; lean_object* v_res_5197_; 
v_resultIdx_boxed_5196_ = lean_unbox_uint64(v_resultIdx_5194_);
lean_dec_ref(v_resultIdx_5194_);
v_res_5197_ = lean_near_promise_result_status(v_resultIdx_boxed_5196_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_resultRaw___boxed(lean_object* v_resultIdx_5200_, lean_object* v_a_00___x40___internal___hyg_5201_){
_start:
{
uint64_t v_resultIdx_boxed_5202_; lean_object* v_res_5203_; 
v_resultIdx_boxed_5202_ = lean_unbox_uint64(v_resultIdx_5200_);
lean_dec_ref(v_resultIdx_5200_);
v_res_5203_ = lean_near_promise_result(v_resultIdx_boxed_5202_);
return v_res_5203_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_returnRaw___boxed(lean_object* v_promiseIndex_5206_, lean_object* v_a_00___x40___internal___hyg_5207_){
_start:
{
uint64_t v_promiseIndex_boxed_5208_; lean_object* v_res_5209_; 
v_promiseIndex_boxed_5208_ = lean_unbox_uint64(v_promiseIndex_5206_);
lean_dec_ref(v_promiseIndex_5206_);
v_res_5209_ = lean_near_promise_return(v_promiseIndex_boxed_5208_);
return v_res_5209_;
}
}
LEAN_EXPORT uint64_t l_Near_Promise_ofIndex(uint64_t v_idx_5210_){
_start:
{
return v_idx_5210_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_ofIndex___boxed(lean_object* v_idx_5211_){
_start:
{
uint64_t v_idx_boxed_5212_; uint64_t v_res_5213_; lean_object* v_r_5214_; 
v_idx_boxed_5212_ = lean_unbox_uint64(v_idx_5211_);
lean_dec_ref(v_idx_5211_);
v_res_5213_ = l_Near_Promise_ofIndex(v_idx_boxed_5212_);
v_r_5214_ = lean_box_uint64(v_res_5213_);
return v_r_5214_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_create(lean_object* v_receiver_5215_, lean_object* v_methodName_5216_, lean_object* v_args_5217_, lean_object* v_deposit_5218_, uint64_t v_gas_5219_){
_start:
{
lean_object* v___x_5221_; lean_object* v___x_5222_; 
v___x_5221_ = l_Nat_reprFast(v_deposit_5218_);
v___x_5222_ = lean_near_promise_create(v_receiver_5215_, v_methodName_5216_, v_args_5217_, v___x_5221_, v_gas_5219_);
if (lean_obj_tag(v___x_5222_) == 0)
{
lean_object* v_a_5223_; lean_object* v___x_5225_; uint8_t v_isShared_5226_; uint8_t v_isSharedCheck_5230_; 
v_a_5223_ = lean_ctor_get(v___x_5222_, 0);
v_isSharedCheck_5230_ = !lean_is_exclusive(v___x_5222_);
if (v_isSharedCheck_5230_ == 0)
{
v___x_5225_ = v___x_5222_;
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
else
{
lean_inc(v_a_5223_);
lean_dec(v___x_5222_);
v___x_5225_ = lean_box(0);
v_isShared_5226_ = v_isSharedCheck_5230_;
goto v_resetjp_5224_;
}
v_resetjp_5224_:
{
lean_object* v___x_5228_; 
if (v_isShared_5226_ == 0)
{
v___x_5228_ = v___x_5225_;
goto v_reusejp_5227_;
}
else
{
lean_object* v_reuseFailAlloc_5229_; 
v_reuseFailAlloc_5229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5229_, 0, v_a_5223_);
v___x_5228_ = v_reuseFailAlloc_5229_;
goto v_reusejp_5227_;
}
v_reusejp_5227_:
{
return v___x_5228_;
}
}
}
else
{
lean_object* v_a_5231_; lean_object* v___x_5233_; uint8_t v_isShared_5234_; uint8_t v_isSharedCheck_5238_; 
v_a_5231_ = lean_ctor_get(v___x_5222_, 0);
v_isSharedCheck_5238_ = !lean_is_exclusive(v___x_5222_);
if (v_isSharedCheck_5238_ == 0)
{
v___x_5233_ = v___x_5222_;
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
else
{
lean_inc(v_a_5231_);
lean_dec(v___x_5222_);
v___x_5233_ = lean_box(0);
v_isShared_5234_ = v_isSharedCheck_5238_;
goto v_resetjp_5232_;
}
v_resetjp_5232_:
{
lean_object* v___x_5236_; 
if (v_isShared_5234_ == 0)
{
v___x_5236_ = v___x_5233_;
goto v_reusejp_5235_;
}
else
{
lean_object* v_reuseFailAlloc_5237_; 
v_reuseFailAlloc_5237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5237_, 0, v_a_5231_);
v___x_5236_ = v_reuseFailAlloc_5237_;
goto v_reusejp_5235_;
}
v_reusejp_5235_:
{
return v___x_5236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_create___boxed(lean_object* v_receiver_5239_, lean_object* v_methodName_5240_, lean_object* v_args_5241_, lean_object* v_deposit_5242_, lean_object* v_gas_5243_, lean_object* v_a_5244_){
_start:
{
uint64_t v_gas_boxed_5245_; lean_object* v_res_5246_; 
v_gas_boxed_5245_ = lean_unbox_uint64(v_gas_5243_);
lean_dec_ref(v_gas_5243_);
v_res_5246_ = l_Near_Promise_create(v_receiver_5239_, v_methodName_5240_, v_args_5241_, v_deposit_5242_, v_gas_boxed_5245_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_new(lean_object* v_receiver_5247_){
_start:
{
lean_object* v___x_5249_; 
v___x_5249_ = lean_near_promise_batch_create(v_receiver_5247_);
if (lean_obj_tag(v___x_5249_) == 0)
{
lean_object* v_a_5250_; lean_object* v___x_5252_; uint8_t v_isShared_5253_; uint8_t v_isSharedCheck_5257_; 
v_a_5250_ = lean_ctor_get(v___x_5249_, 0);
v_isSharedCheck_5257_ = !lean_is_exclusive(v___x_5249_);
if (v_isSharedCheck_5257_ == 0)
{
v___x_5252_ = v___x_5249_;
v_isShared_5253_ = v_isSharedCheck_5257_;
goto v_resetjp_5251_;
}
else
{
lean_inc(v_a_5250_);
lean_dec(v___x_5249_);
v___x_5252_ = lean_box(0);
v_isShared_5253_ = v_isSharedCheck_5257_;
goto v_resetjp_5251_;
}
v_resetjp_5251_:
{
lean_object* v___x_5255_; 
if (v_isShared_5253_ == 0)
{
v___x_5255_ = v___x_5252_;
goto v_reusejp_5254_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v_a_5250_);
v___x_5255_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5254_;
}
v_reusejp_5254_:
{
return v___x_5255_;
}
}
}
else
{
lean_object* v_a_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5265_; 
v_a_5258_ = lean_ctor_get(v___x_5249_, 0);
v_isSharedCheck_5265_ = !lean_is_exclusive(v___x_5249_);
if (v_isSharedCheck_5265_ == 0)
{
v___x_5260_ = v___x_5249_;
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_a_5258_);
lean_dec(v___x_5249_);
v___x_5260_ = lean_box(0);
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
v_resetjp_5259_:
{
lean_object* v___x_5263_; 
if (v_isShared_5261_ == 0)
{
v___x_5263_ = v___x_5260_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v_a_5258_);
v___x_5263_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
return v___x_5263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_new___boxed(lean_object* v_receiver_5266_, lean_object* v_a_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = l_Near_Promise_new(v_receiver_5266_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_functionCall(uint64_t v_promise_5269_, lean_object* v_methodName_5270_, lean_object* v_args_5271_, lean_object* v_deposit_5272_, uint64_t v_gas_5273_){
_start:
{
lean_object* v___x_5275_; lean_object* v___x_5276_; 
v___x_5275_ = l_Nat_reprFast(v_deposit_5272_);
v___x_5276_ = lean_near_promise_batch_action_function_call(v_promise_5269_, v_methodName_5270_, v_args_5271_, v___x_5275_, v_gas_5273_);
if (lean_obj_tag(v___x_5276_) == 0)
{
lean_object* v___x_5278_; uint8_t v_isShared_5279_; uint8_t v_isSharedCheck_5284_; 
v_isSharedCheck_5284_ = !lean_is_exclusive(v___x_5276_);
if (v_isSharedCheck_5284_ == 0)
{
lean_object* v_unused_5285_; 
v_unused_5285_ = lean_ctor_get(v___x_5276_, 0);
lean_dec(v_unused_5285_);
v___x_5278_ = v___x_5276_;
v_isShared_5279_ = v_isSharedCheck_5284_;
goto v_resetjp_5277_;
}
else
{
lean_dec(v___x_5276_);
v___x_5278_ = lean_box(0);
v_isShared_5279_ = v_isSharedCheck_5284_;
goto v_resetjp_5277_;
}
v_resetjp_5277_:
{
lean_object* v___x_5280_; lean_object* v___x_5282_; 
v___x_5280_ = lean_box_uint64(v_promise_5269_);
if (v_isShared_5279_ == 0)
{
lean_ctor_set(v___x_5278_, 0, v___x_5280_);
v___x_5282_ = v___x_5278_;
goto v_reusejp_5281_;
}
else
{
lean_object* v_reuseFailAlloc_5283_; 
v_reuseFailAlloc_5283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5283_, 0, v___x_5280_);
v___x_5282_ = v_reuseFailAlloc_5283_;
goto v_reusejp_5281_;
}
v_reusejp_5281_:
{
return v___x_5282_;
}
}
}
else
{
lean_object* v_a_5286_; lean_object* v___x_5288_; uint8_t v_isShared_5289_; uint8_t v_isSharedCheck_5293_; 
v_a_5286_ = lean_ctor_get(v___x_5276_, 0);
v_isSharedCheck_5293_ = !lean_is_exclusive(v___x_5276_);
if (v_isSharedCheck_5293_ == 0)
{
v___x_5288_ = v___x_5276_;
v_isShared_5289_ = v_isSharedCheck_5293_;
goto v_resetjp_5287_;
}
else
{
lean_inc(v_a_5286_);
lean_dec(v___x_5276_);
v___x_5288_ = lean_box(0);
v_isShared_5289_ = v_isSharedCheck_5293_;
goto v_resetjp_5287_;
}
v_resetjp_5287_:
{
lean_object* v___x_5291_; 
if (v_isShared_5289_ == 0)
{
v___x_5291_ = v___x_5288_;
goto v_reusejp_5290_;
}
else
{
lean_object* v_reuseFailAlloc_5292_; 
v_reuseFailAlloc_5292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5292_, 0, v_a_5286_);
v___x_5291_ = v_reuseFailAlloc_5292_;
goto v_reusejp_5290_;
}
v_reusejp_5290_:
{
return v___x_5291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_functionCall___boxed(lean_object* v_promise_5294_, lean_object* v_methodName_5295_, lean_object* v_args_5296_, lean_object* v_deposit_5297_, lean_object* v_gas_5298_, lean_object* v_a_5299_){
_start:
{
uint64_t v_promise_boxed_5300_; uint64_t v_gas_boxed_5301_; lean_object* v_res_5302_; 
v_promise_boxed_5300_ = lean_unbox_uint64(v_promise_5294_);
lean_dec_ref(v_promise_5294_);
v_gas_boxed_5301_ = lean_unbox_uint64(v_gas_5298_);
lean_dec_ref(v_gas_5298_);
v_res_5302_ = l_Near_Promise_functionCall(v_promise_boxed_5300_, v_methodName_5295_, v_args_5296_, v_deposit_5297_, v_gas_boxed_5301_);
return v_res_5302_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_transfer(uint64_t v_promise_5303_, lean_object* v_amount_5304_){
_start:
{
lean_object* v___x_5306_; lean_object* v___x_5307_; 
v___x_5306_ = l_Nat_reprFast(v_amount_5304_);
v___x_5307_ = lean_near_promise_batch_action_transfer(v_promise_5303_, v___x_5306_);
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v___x_5309_; uint8_t v_isShared_5310_; uint8_t v_isSharedCheck_5315_; 
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5315_ == 0)
{
lean_object* v_unused_5316_; 
v_unused_5316_ = lean_ctor_get(v___x_5307_, 0);
lean_dec(v_unused_5316_);
v___x_5309_ = v___x_5307_;
v_isShared_5310_ = v_isSharedCheck_5315_;
goto v_resetjp_5308_;
}
else
{
lean_dec(v___x_5307_);
v___x_5309_ = lean_box(0);
v_isShared_5310_ = v_isSharedCheck_5315_;
goto v_resetjp_5308_;
}
v_resetjp_5308_:
{
lean_object* v___x_5311_; lean_object* v___x_5313_; 
v___x_5311_ = lean_box_uint64(v_promise_5303_);
if (v_isShared_5310_ == 0)
{
lean_ctor_set(v___x_5309_, 0, v___x_5311_);
v___x_5313_ = v___x_5309_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v___x_5311_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
else
{
lean_object* v_a_5317_; lean_object* v___x_5319_; uint8_t v_isShared_5320_; uint8_t v_isSharedCheck_5324_; 
v_a_5317_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5324_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5324_ == 0)
{
v___x_5319_ = v___x_5307_;
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
else
{
lean_inc(v_a_5317_);
lean_dec(v___x_5307_);
v___x_5319_ = lean_box(0);
v_isShared_5320_ = v_isSharedCheck_5324_;
goto v_resetjp_5318_;
}
v_resetjp_5318_:
{
lean_object* v___x_5322_; 
if (v_isShared_5320_ == 0)
{
v___x_5322_ = v___x_5319_;
goto v_reusejp_5321_;
}
else
{
lean_object* v_reuseFailAlloc_5323_; 
v_reuseFailAlloc_5323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5323_, 0, v_a_5317_);
v___x_5322_ = v_reuseFailAlloc_5323_;
goto v_reusejp_5321_;
}
v_reusejp_5321_:
{
return v___x_5322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_transfer___boxed(lean_object* v_promise_5325_, lean_object* v_amount_5326_, lean_object* v_a_5327_){
_start:
{
uint64_t v_promise_boxed_5328_; lean_object* v_res_5329_; 
v_promise_boxed_5328_ = lean_unbox_uint64(v_promise_5325_);
lean_dec_ref(v_promise_5325_);
v_res_5329_ = l_Near_Promise_transfer(v_promise_boxed_5328_, v_amount_5326_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_thenBatch(uint64_t v_promise_5330_, lean_object* v_receiver_5331_){
_start:
{
lean_object* v___x_5333_; 
v___x_5333_ = lean_near_promise_batch_then(v_promise_5330_, v_receiver_5331_);
if (lean_obj_tag(v___x_5333_) == 0)
{
lean_object* v_a_5334_; lean_object* v___x_5336_; uint8_t v_isShared_5337_; uint8_t v_isSharedCheck_5341_; 
v_a_5334_ = lean_ctor_get(v___x_5333_, 0);
v_isSharedCheck_5341_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5341_ == 0)
{
v___x_5336_ = v___x_5333_;
v_isShared_5337_ = v_isSharedCheck_5341_;
goto v_resetjp_5335_;
}
else
{
lean_inc(v_a_5334_);
lean_dec(v___x_5333_);
v___x_5336_ = lean_box(0);
v_isShared_5337_ = v_isSharedCheck_5341_;
goto v_resetjp_5335_;
}
v_resetjp_5335_:
{
lean_object* v___x_5339_; 
if (v_isShared_5337_ == 0)
{
v___x_5339_ = v___x_5336_;
goto v_reusejp_5338_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v_a_5334_);
v___x_5339_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5338_;
}
v_reusejp_5338_:
{
return v___x_5339_;
}
}
}
else
{
lean_object* v_a_5342_; lean_object* v___x_5344_; uint8_t v_isShared_5345_; uint8_t v_isSharedCheck_5349_; 
v_a_5342_ = lean_ctor_get(v___x_5333_, 0);
v_isSharedCheck_5349_ = !lean_is_exclusive(v___x_5333_);
if (v_isSharedCheck_5349_ == 0)
{
v___x_5344_ = v___x_5333_;
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
else
{
lean_inc(v_a_5342_);
lean_dec(v___x_5333_);
v___x_5344_ = lean_box(0);
v_isShared_5345_ = v_isSharedCheck_5349_;
goto v_resetjp_5343_;
}
v_resetjp_5343_:
{
lean_object* v___x_5347_; 
if (v_isShared_5345_ == 0)
{
v___x_5347_ = v___x_5344_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5348_; 
v_reuseFailAlloc_5348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5348_, 0, v_a_5342_);
v___x_5347_ = v_reuseFailAlloc_5348_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
return v___x_5347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_thenBatch___boxed(lean_object* v_promise_5350_, lean_object* v_receiver_5351_, lean_object* v_a_5352_){
_start:
{
uint64_t v_promise_boxed_5353_; lean_object* v_res_5354_; 
v_promise_boxed_5353_ = lean_unbox_uint64(v_promise_5350_);
lean_dec_ref(v_promise_5350_);
v_res_5354_ = l_Near_Promise_thenBatch(v_promise_boxed_5353_, v_receiver_5351_);
return v_res_5354_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_thenCall(uint64_t v_promise_5355_, lean_object* v_receiver_5356_, lean_object* v_methodName_5357_, lean_object* v_args_5358_, lean_object* v_deposit_5359_, uint64_t v_gas_5360_){
_start:
{
lean_object* v___x_5362_; lean_object* v___x_5363_; 
v___x_5362_ = l_Nat_reprFast(v_deposit_5359_);
v___x_5363_ = lean_near_promise_then(v_promise_5355_, v_receiver_5356_, v_methodName_5357_, v_args_5358_, v___x_5362_, v_gas_5360_);
if (lean_obj_tag(v___x_5363_) == 0)
{
lean_object* v_a_5364_; lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
v_a_5364_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5371_ == 0)
{
v___x_5366_ = v___x_5363_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_inc(v_a_5364_);
lean_dec(v___x_5363_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v_a_5364_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
else
{
lean_object* v_a_5372_; lean_object* v___x_5374_; uint8_t v_isShared_5375_; uint8_t v_isSharedCheck_5379_; 
v_a_5372_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5379_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5379_ == 0)
{
v___x_5374_ = v___x_5363_;
v_isShared_5375_ = v_isSharedCheck_5379_;
goto v_resetjp_5373_;
}
else
{
lean_inc(v_a_5372_);
lean_dec(v___x_5363_);
v___x_5374_ = lean_box(0);
v_isShared_5375_ = v_isSharedCheck_5379_;
goto v_resetjp_5373_;
}
v_resetjp_5373_:
{
lean_object* v___x_5377_; 
if (v_isShared_5375_ == 0)
{
v___x_5377_ = v___x_5374_;
goto v_reusejp_5376_;
}
else
{
lean_object* v_reuseFailAlloc_5378_; 
v_reuseFailAlloc_5378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5378_, 0, v_a_5372_);
v___x_5377_ = v_reuseFailAlloc_5378_;
goto v_reusejp_5376_;
}
v_reusejp_5376_:
{
return v___x_5377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_thenCall___boxed(lean_object* v_promise_5380_, lean_object* v_receiver_5381_, lean_object* v_methodName_5382_, lean_object* v_args_5383_, lean_object* v_deposit_5384_, lean_object* v_gas_5385_, lean_object* v_a_5386_){
_start:
{
uint64_t v_promise_boxed_5387_; uint64_t v_gas_boxed_5388_; lean_object* v_res_5389_; 
v_promise_boxed_5387_ = lean_unbox_uint64(v_promise_5380_);
lean_dec_ref(v_promise_5380_);
v_gas_boxed_5388_ = lean_unbox_uint64(v_gas_5385_);
lean_dec_ref(v_gas_5385_);
v_res_5389_ = l_Near_Promise_thenCall(v_promise_boxed_5387_, v_receiver_5381_, v_methodName_5382_, v_args_5383_, v_deposit_5384_, v_gas_boxed_5388_);
return v_res_5389_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_join(uint64_t v_left_5390_, uint64_t v_right_5391_){
_start:
{
lean_object* v___x_5393_; 
v___x_5393_ = lean_near_promise_and2(v_left_5390_, v_right_5391_);
if (lean_obj_tag(v___x_5393_) == 0)
{
lean_object* v_a_5394_; lean_object* v___x_5396_; uint8_t v_isShared_5397_; uint8_t v_isSharedCheck_5401_; 
v_a_5394_ = lean_ctor_get(v___x_5393_, 0);
v_isSharedCheck_5401_ = !lean_is_exclusive(v___x_5393_);
if (v_isSharedCheck_5401_ == 0)
{
v___x_5396_ = v___x_5393_;
v_isShared_5397_ = v_isSharedCheck_5401_;
goto v_resetjp_5395_;
}
else
{
lean_inc(v_a_5394_);
lean_dec(v___x_5393_);
v___x_5396_ = lean_box(0);
v_isShared_5397_ = v_isSharedCheck_5401_;
goto v_resetjp_5395_;
}
v_resetjp_5395_:
{
lean_object* v___x_5399_; 
if (v_isShared_5397_ == 0)
{
v___x_5399_ = v___x_5396_;
goto v_reusejp_5398_;
}
else
{
lean_object* v_reuseFailAlloc_5400_; 
v_reuseFailAlloc_5400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5400_, 0, v_a_5394_);
v___x_5399_ = v_reuseFailAlloc_5400_;
goto v_reusejp_5398_;
}
v_reusejp_5398_:
{
return v___x_5399_;
}
}
}
else
{
lean_object* v_a_5402_; lean_object* v___x_5404_; uint8_t v_isShared_5405_; uint8_t v_isSharedCheck_5409_; 
v_a_5402_ = lean_ctor_get(v___x_5393_, 0);
v_isSharedCheck_5409_ = !lean_is_exclusive(v___x_5393_);
if (v_isSharedCheck_5409_ == 0)
{
v___x_5404_ = v___x_5393_;
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
else
{
lean_inc(v_a_5402_);
lean_dec(v___x_5393_);
v___x_5404_ = lean_box(0);
v_isShared_5405_ = v_isSharedCheck_5409_;
goto v_resetjp_5403_;
}
v_resetjp_5403_:
{
lean_object* v___x_5407_; 
if (v_isShared_5405_ == 0)
{
v___x_5407_ = v___x_5404_;
goto v_reusejp_5406_;
}
else
{
lean_object* v_reuseFailAlloc_5408_; 
v_reuseFailAlloc_5408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5408_, 0, v_a_5402_);
v___x_5407_ = v_reuseFailAlloc_5408_;
goto v_reusejp_5406_;
}
v_reusejp_5406_:
{
return v___x_5407_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_join___boxed(lean_object* v_left_5410_, lean_object* v_right_5411_, lean_object* v_a_5412_){
_start:
{
uint64_t v_left_boxed_5413_; uint64_t v_right_boxed_5414_; lean_object* v_res_5415_; 
v_left_boxed_5413_ = lean_unbox_uint64(v_left_5410_);
lean_dec_ref(v_left_5410_);
v_right_boxed_5414_ = lean_unbox_uint64(v_right_5411_);
lean_dec_ref(v_right_5411_);
v_res_5415_ = l_Near_Promise_join(v_left_boxed_5413_, v_right_boxed_5414_);
return v_res_5415_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_returnPromise(uint64_t v_promise_5416_){
_start:
{
lean_object* v___x_5418_; 
v___x_5418_ = lean_near_promise_return(v_promise_5416_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_returnPromise___boxed(lean_object* v_promise_5419_, lean_object* v_a_5420_){
_start:
{
uint64_t v_promise_boxed_5421_; lean_object* v_res_5422_; 
v_promise_boxed_5421_ = lean_unbox_uint64(v_promise_5419_);
lean_dec_ref(v_promise_5419_);
v_res_5422_ = l_Near_Promise_returnPromise(v_promise_boxed_5421_);
return v_res_5422_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorIdx(lean_object* v_x_5423_){
_start:
{
switch(lean_obj_tag(v_x_5423_))
{
case 0:
{
lean_object* v___x_5424_; 
v___x_5424_ = lean_unsigned_to_nat(0u);
return v___x_5424_;
}
case 1:
{
lean_object* v___x_5425_; 
v___x_5425_ = lean_unsigned_to_nat(1u);
return v___x_5425_;
}
default: 
{
lean_object* v___x_5426_; 
v___x_5426_ = lean_unsigned_to_nat(2u);
return v___x_5426_;
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorIdx___boxed(lean_object* v_x_5427_){
_start:
{
lean_object* v_res_5428_; 
v_res_5428_ = l_Near_Promise_Result_ctorIdx(v_x_5427_);
lean_dec(v_x_5427_);
return v_res_5428_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorElim___redArg(lean_object* v_t_5429_, lean_object* v_k_5430_){
_start:
{
if (lean_obj_tag(v_t_5429_) == 1)
{
lean_object* v_data_5431_; lean_object* v___x_5432_; 
v_data_5431_ = lean_ctor_get(v_t_5429_, 0);
lean_inc_ref(v_data_5431_);
lean_dec_ref_known(v_t_5429_, 1);
v___x_5432_ = lean_apply_1(v_k_5430_, v_data_5431_);
return v___x_5432_;
}
else
{
lean_dec(v_t_5429_);
return v_k_5430_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorElim(lean_object* v_motive_5433_, lean_object* v_ctorIdx_5434_, lean_object* v_t_5435_, lean_object* v_h_5436_, lean_object* v_k_5437_){
_start:
{
lean_object* v___x_5438_; 
v___x_5438_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5435_, v_k_5437_);
return v___x_5438_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_ctorElim___boxed(lean_object* v_motive_5439_, lean_object* v_ctorIdx_5440_, lean_object* v_t_5441_, lean_object* v_h_5442_, lean_object* v_k_5443_){
_start:
{
lean_object* v_res_5444_; 
v_res_5444_ = l_Near_Promise_Result_ctorElim(v_motive_5439_, v_ctorIdx_5440_, v_t_5441_, v_h_5442_, v_k_5443_);
lean_dec(v_ctorIdx_5440_);
return v_res_5444_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_notReady_elim___redArg(lean_object* v_t_5445_, lean_object* v_notReady_5446_){
_start:
{
lean_object* v___x_5447_; 
v___x_5447_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5445_, v_notReady_5446_);
return v___x_5447_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_notReady_elim(lean_object* v_motive_5448_, lean_object* v_t_5449_, lean_object* v_h_5450_, lean_object* v_notReady_5451_){
_start:
{
lean_object* v___x_5452_; 
v___x_5452_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5449_, v_notReady_5451_);
return v___x_5452_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_successful_elim___redArg(lean_object* v_t_5453_, lean_object* v_successful_5454_){
_start:
{
lean_object* v___x_5455_; 
v___x_5455_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5453_, v_successful_5454_);
return v___x_5455_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_successful_elim(lean_object* v_motive_5456_, lean_object* v_t_5457_, lean_object* v_h_5458_, lean_object* v_successful_5459_){
_start:
{
lean_object* v___x_5460_; 
v___x_5460_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5457_, v_successful_5459_);
return v___x_5460_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_failed_elim___redArg(lean_object* v_t_5461_, lean_object* v_failed_5462_){
_start:
{
lean_object* v___x_5463_; 
v___x_5463_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5461_, v_failed_5462_);
return v___x_5463_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_Result_failed_elim(lean_object* v_motive_5464_, lean_object* v_t_5465_, lean_object* v_h_5466_, lean_object* v_failed_5467_){
_start:
{
lean_object* v___x_5468_; 
v___x_5468_ = l_Near_Promise_Result_ctorElim___redArg(v_t_5465_, v_failed_5467_);
return v___x_5468_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_instReprResult_repr(lean_object* v_x_5481_, lean_object* v_prec_5482_){
_start:
{
lean_object* v___y_5484_; lean_object* v___y_5491_; 
switch(lean_obj_tag(v_x_5481_))
{
case 0:
{
lean_object* v___x_5497_; uint8_t v___x_5498_; 
v___x_5497_ = lean_unsigned_to_nat(1024u);
v___x_5498_ = lean_nat_dec_le(v___x_5497_, v_prec_5482_);
if (v___x_5498_ == 0)
{
lean_object* v___x_5499_; 
v___x_5499_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_5484_ = v___x_5499_;
goto v___jp_5483_;
}
else
{
lean_object* v___x_5500_; 
v___x_5500_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_5484_ = v___x_5500_;
goto v___jp_5483_;
}
}
case 1:
{
lean_object* v_data_5501_; lean_object* v___x_5503_; uint8_t v_isShared_5504_; uint8_t v_isSharedCheck_5521_; 
v_data_5501_ = lean_ctor_get(v_x_5481_, 0);
v_isSharedCheck_5521_ = !lean_is_exclusive(v_x_5481_);
if (v_isSharedCheck_5521_ == 0)
{
v___x_5503_ = v_x_5481_;
v_isShared_5504_ = v_isSharedCheck_5521_;
goto v_resetjp_5502_;
}
else
{
lean_inc(v_data_5501_);
lean_dec(v_x_5481_);
v___x_5503_ = lean_box(0);
v_isShared_5504_ = v_isSharedCheck_5521_;
goto v_resetjp_5502_;
}
v_resetjp_5502_:
{
lean_object* v___y_5506_; lean_object* v___x_5517_; uint8_t v___x_5518_; 
v___x_5517_ = lean_unsigned_to_nat(1024u);
v___x_5518_ = lean_nat_dec_le(v___x_5517_, v_prec_5482_);
if (v___x_5518_ == 0)
{
lean_object* v___x_5519_; 
v___x_5519_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_5506_ = v___x_5519_;
goto v___jp_5505_;
}
else
{
lean_object* v___x_5520_; 
v___x_5520_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_5506_ = v___x_5520_;
goto v___jp_5505_;
}
v___jp_5505_:
{
lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5510_; 
v___x_5507_ = ((lean_object*)(l_Near_Promise_instReprResult_repr___closed__6));
v___x_5508_ = l_String_quote(v_data_5501_);
if (v_isShared_5504_ == 0)
{
lean_ctor_set_tag(v___x_5503_, 3);
lean_ctor_set(v___x_5503_, 0, v___x_5508_);
v___x_5510_ = v___x_5503_;
goto v_reusejp_5509_;
}
else
{
lean_object* v_reuseFailAlloc_5516_; 
v_reuseFailAlloc_5516_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5516_, 0, v___x_5508_);
v___x_5510_ = v_reuseFailAlloc_5516_;
goto v_reusejp_5509_;
}
v_reusejp_5509_:
{
lean_object* v___x_5511_; lean_object* v___x_5512_; uint8_t v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; 
v___x_5511_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5511_, 0, v___x_5507_);
lean_ctor_set(v___x_5511_, 1, v___x_5510_);
lean_inc(v___y_5506_);
v___x_5512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5512_, 0, v___y_5506_);
lean_ctor_set(v___x_5512_, 1, v___x_5511_);
v___x_5513_ = 0;
v___x_5514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5514_, 0, v___x_5512_);
lean_ctor_set_uint8(v___x_5514_, sizeof(void*)*1, v___x_5513_);
v___x_5515_ = l_Repr_addAppParen(v___x_5514_, v_prec_5482_);
return v___x_5515_;
}
}
}
}
default: 
{
lean_object* v___x_5522_; uint8_t v___x_5523_; 
v___x_5522_ = lean_unsigned_to_nat(1024u);
v___x_5523_ = lean_nat_dec_le(v___x_5522_, v_prec_5482_);
if (v___x_5523_ == 0)
{
lean_object* v___x_5524_; 
v___x_5524_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__6, &l_Near_Contract_instReprMode_repr___closed__6_once, _init_l_Near_Contract_instReprMode_repr___closed__6);
v___y_5491_ = v___x_5524_;
goto v___jp_5490_;
}
else
{
lean_object* v___x_5525_; 
v___x_5525_ = lean_obj_once(&l_Near_Contract_instReprMode_repr___closed__7, &l_Near_Contract_instReprMode_repr___closed__7_once, _init_l_Near_Contract_instReprMode_repr___closed__7);
v___y_5491_ = v___x_5525_;
goto v___jp_5490_;
}
}
}
v___jp_5483_:
{
lean_object* v___x_5485_; lean_object* v___x_5486_; uint8_t v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; 
v___x_5485_ = ((lean_object*)(l_Near_Promise_instReprResult_repr___closed__1));
lean_inc(v___y_5484_);
v___x_5486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5486_, 0, v___y_5484_);
lean_ctor_set(v___x_5486_, 1, v___x_5485_);
v___x_5487_ = 0;
v___x_5488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5488_, 0, v___x_5486_);
lean_ctor_set_uint8(v___x_5488_, sizeof(void*)*1, v___x_5487_);
v___x_5489_ = l_Repr_addAppParen(v___x_5488_, v_prec_5482_);
return v___x_5489_;
}
v___jp_5490_:
{
lean_object* v___x_5492_; lean_object* v___x_5493_; uint8_t v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; 
v___x_5492_ = ((lean_object*)(l_Near_Promise_instReprResult_repr___closed__3));
lean_inc(v___y_5491_);
v___x_5493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5493_, 0, v___y_5491_);
lean_ctor_set(v___x_5493_, 1, v___x_5492_);
v___x_5494_ = 0;
v___x_5495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5495_, 0, v___x_5493_);
lean_ctor_set_uint8(v___x_5495_, sizeof(void*)*1, v___x_5494_);
v___x_5496_ = l_Repr_addAppParen(v___x_5495_, v_prec_5482_);
return v___x_5496_;
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_instReprResult_repr___boxed(lean_object* v_x_5526_, lean_object* v_prec_5527_){
_start:
{
lean_object* v_res_5528_; 
v_res_5528_ = l_Near_Promise_instReprResult_repr(v_x_5526_, v_prec_5527_);
lean_dec(v_prec_5527_);
return v_res_5528_;
}
}
LEAN_EXPORT lean_object* l_Near_Promise_result(uint64_t v_resultIdx_5531_){
_start:
{
lean_object* v___x_5533_; 
v___x_5533_ = lean_near_promise_result_status(v_resultIdx_5531_);
if (lean_obj_tag(v___x_5533_) == 0)
{
lean_object* v_a_5534_; lean_object* v___x_5536_; uint8_t v_isShared_5537_; uint8_t v_isSharedCheck_5581_; 
v_a_5534_ = lean_ctor_get(v___x_5533_, 0);
v_isSharedCheck_5581_ = !lean_is_exclusive(v___x_5533_);
if (v_isSharedCheck_5581_ == 0)
{
v___x_5536_ = v___x_5533_;
v_isShared_5537_ = v_isSharedCheck_5581_;
goto v_resetjp_5535_;
}
else
{
lean_inc(v_a_5534_);
lean_dec(v___x_5533_);
v___x_5536_ = lean_box(0);
v_isShared_5537_ = v_isSharedCheck_5581_;
goto v_resetjp_5535_;
}
v_resetjp_5535_:
{
uint64_t v___x_5538_; uint64_t v___x_5539_; uint8_t v___x_5540_; 
v___x_5538_ = 1ULL;
v___x_5539_ = lean_unbox_uint64(v_a_5534_);
v___x_5540_ = lean_uint64_dec_eq(v___x_5539_, v___x_5538_);
if (v___x_5540_ == 0)
{
uint64_t v___x_5541_; uint64_t v___x_5542_; uint8_t v___x_5543_; 
v___x_5541_ = 2ULL;
v___x_5542_ = lean_unbox_uint64(v_a_5534_);
lean_dec(v_a_5534_);
v___x_5543_ = lean_uint64_dec_eq(v___x_5542_, v___x_5541_);
if (v___x_5543_ == 0)
{
lean_object* v___x_5544_; lean_object* v___x_5546_; 
v___x_5544_ = lean_box(0);
if (v_isShared_5537_ == 0)
{
lean_ctor_set(v___x_5536_, 0, v___x_5544_);
v___x_5546_ = v___x_5536_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v___x_5544_);
v___x_5546_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5545_;
}
v_reusejp_5545_:
{
return v___x_5546_;
}
}
else
{
lean_object* v___x_5548_; lean_object* v___x_5550_; 
v___x_5548_ = lean_box(2);
if (v_isShared_5537_ == 0)
{
lean_ctor_set(v___x_5536_, 0, v___x_5548_);
v___x_5550_ = v___x_5536_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5551_; 
v_reuseFailAlloc_5551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5551_, 0, v___x_5548_);
v___x_5550_ = v_reuseFailAlloc_5551_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
return v___x_5550_;
}
}
}
else
{
lean_object* v___x_5552_; 
lean_del_object(v___x_5536_);
lean_dec(v_a_5534_);
v___x_5552_ = lean_near_promise_result(v_resultIdx_5531_);
if (lean_obj_tag(v___x_5552_) == 0)
{
lean_object* v_a_5553_; lean_object* v___x_5555_; uint8_t v_isShared_5556_; uint8_t v_isSharedCheck_5572_; 
v_a_5553_ = lean_ctor_get(v___x_5552_, 0);
v_isSharedCheck_5572_ = !lean_is_exclusive(v___x_5552_);
if (v_isSharedCheck_5572_ == 0)
{
v___x_5555_ = v___x_5552_;
v_isShared_5556_ = v_isSharedCheck_5572_;
goto v_resetjp_5554_;
}
else
{
lean_inc(v_a_5553_);
lean_dec(v___x_5552_);
v___x_5555_ = lean_box(0);
v_isShared_5556_ = v_isSharedCheck_5572_;
goto v_resetjp_5554_;
}
v_resetjp_5554_:
{
if (lean_obj_tag(v_a_5553_) == 0)
{
lean_object* v___x_5557_; lean_object* v___x_5559_; 
v___x_5557_ = lean_box(0);
if (v_isShared_5556_ == 0)
{
lean_ctor_set(v___x_5555_, 0, v___x_5557_);
v___x_5559_ = v___x_5555_;
goto v_reusejp_5558_;
}
else
{
lean_object* v_reuseFailAlloc_5560_; 
v_reuseFailAlloc_5560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5560_, 0, v___x_5557_);
v___x_5559_ = v_reuseFailAlloc_5560_;
goto v_reusejp_5558_;
}
v_reusejp_5558_:
{
return v___x_5559_;
}
}
else
{
lean_object* v_val_5561_; lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5571_; 
v_val_5561_ = lean_ctor_get(v_a_5553_, 0);
v_isSharedCheck_5571_ = !lean_is_exclusive(v_a_5553_);
if (v_isSharedCheck_5571_ == 0)
{
v___x_5563_ = v_a_5553_;
v_isShared_5564_ = v_isSharedCheck_5571_;
goto v_resetjp_5562_;
}
else
{
lean_inc(v_val_5561_);
lean_dec(v_a_5553_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5571_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v___x_5566_; 
if (v_isShared_5564_ == 0)
{
v___x_5566_ = v___x_5563_;
goto v_reusejp_5565_;
}
else
{
lean_object* v_reuseFailAlloc_5570_; 
v_reuseFailAlloc_5570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5570_, 0, v_val_5561_);
v___x_5566_ = v_reuseFailAlloc_5570_;
goto v_reusejp_5565_;
}
v_reusejp_5565_:
{
lean_object* v___x_5568_; 
if (v_isShared_5556_ == 0)
{
lean_ctor_set(v___x_5555_, 0, v___x_5566_);
v___x_5568_ = v___x_5555_;
goto v_reusejp_5567_;
}
else
{
lean_object* v_reuseFailAlloc_5569_; 
v_reuseFailAlloc_5569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5569_, 0, v___x_5566_);
v___x_5568_ = v_reuseFailAlloc_5569_;
goto v_reusejp_5567_;
}
v_reusejp_5567_:
{
return v___x_5568_;
}
}
}
}
}
}
else
{
lean_object* v_a_5573_; lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5580_; 
v_a_5573_ = lean_ctor_get(v___x_5552_, 0);
v_isSharedCheck_5580_ = !lean_is_exclusive(v___x_5552_);
if (v_isSharedCheck_5580_ == 0)
{
v___x_5575_ = v___x_5552_;
v_isShared_5576_ = v_isSharedCheck_5580_;
goto v_resetjp_5574_;
}
else
{
lean_inc(v_a_5573_);
lean_dec(v___x_5552_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5580_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v___x_5578_; 
if (v_isShared_5576_ == 0)
{
v___x_5578_ = v___x_5575_;
goto v_reusejp_5577_;
}
else
{
lean_object* v_reuseFailAlloc_5579_; 
v_reuseFailAlloc_5579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5579_, 0, v_a_5573_);
v___x_5578_ = v_reuseFailAlloc_5579_;
goto v_reusejp_5577_;
}
v_reusejp_5577_:
{
return v___x_5578_;
}
}
}
}
}
}
else
{
lean_object* v_a_5582_; lean_object* v___x_5584_; uint8_t v_isShared_5585_; uint8_t v_isSharedCheck_5589_; 
v_a_5582_ = lean_ctor_get(v___x_5533_, 0);
v_isSharedCheck_5589_ = !lean_is_exclusive(v___x_5533_);
if (v_isSharedCheck_5589_ == 0)
{
v___x_5584_ = v___x_5533_;
v_isShared_5585_ = v_isSharedCheck_5589_;
goto v_resetjp_5583_;
}
else
{
lean_inc(v_a_5582_);
lean_dec(v___x_5533_);
v___x_5584_ = lean_box(0);
v_isShared_5585_ = v_isSharedCheck_5589_;
goto v_resetjp_5583_;
}
v_resetjp_5583_:
{
lean_object* v___x_5587_; 
if (v_isShared_5585_ == 0)
{
v___x_5587_ = v___x_5584_;
goto v_reusejp_5586_;
}
else
{
lean_object* v_reuseFailAlloc_5588_; 
v_reuseFailAlloc_5588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5588_, 0, v_a_5582_);
v___x_5587_ = v_reuseFailAlloc_5588_;
goto v_reusejp_5586_;
}
v_reusejp_5586_:
{
return v___x_5587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_Promise_result___boxed(lean_object* v_resultIdx_5590_, lean_object* v_a_5591_){
_start:
{
uint64_t v_resultIdx_boxed_5592_; lean_object* v_res_5593_; 
v_resultIdx_boxed_5592_ = lean_unbox_uint64(v_resultIdx_5590_);
lean_dec_ref(v_resultIdx_5590_);
v_res_5593_ = l_Near_Promise_result(v_resultIdx_boxed_5592_);
return v_res_5593_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make(lean_object* v_mapPrefix_5594_){
_start:
{
lean_inc_ref(v_mapPrefix_5594_);
return v_mapPrefix_5594_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_make___boxed(lean_object* v_mapPrefix_5595_){
_start:
{
lean_object* v_res_5596_; 
v_res_5596_ = l_Near_StringMap_make(v_mapPrefix_5595_);
lean_dec_ref(v_mapPrefix_5595_);
return v_res_5596_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey(lean_object* v_m_5597_, lean_object* v_key_5598_){
_start:
{
lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; 
v___x_5599_ = ((lean_object*)(l_Near_Storage_TypedMap_storageKey___redArg___closed__0));
v___x_5600_ = lean_string_append(v_m_5597_, v___x_5599_);
v___x_5601_ = lean_string_append(v___x_5600_, v_key_5598_);
return v___x_5601_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_storageKey___boxed(lean_object* v_m_5602_, lean_object* v_key_5603_){
_start:
{
lean_object* v_res_5604_; 
v_res_5604_ = l_Near_StringMap_storageKey(v_m_5602_, v_key_5603_);
lean_dec_ref(v_key_5603_);
return v_res_5604_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get(lean_object* v_m_5605_, lean_object* v_key_5606_){
_start:
{
lean_object* v___x_5608_; lean_object* v___x_5609_; 
v___x_5608_ = l_Near_StringMap_storageKey(v_m_5605_, v_key_5606_);
v___x_5609_ = lean_near_storage_read(v___x_5608_);
return v___x_5609_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_get___boxed(lean_object* v_m_5610_, lean_object* v_key_5611_, lean_object* v_a_5612_){
_start:
{
lean_object* v_res_5613_; 
v_res_5613_ = l_Near_StringMap_get(v_m_5610_, v_key_5611_);
lean_dec_ref(v_key_5611_);
return v_res_5613_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set(lean_object* v_m_5614_, lean_object* v_key_5615_, lean_object* v_value_5616_){
_start:
{
lean_object* v___x_5618_; lean_object* v___x_5619_; 
v___x_5618_ = l_Near_StringMap_storageKey(v_m_5614_, v_key_5615_);
v___x_5619_ = lean_near_storage_write(v___x_5618_, v_value_5616_);
return v___x_5619_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_set___boxed(lean_object* v_m_5620_, lean_object* v_key_5621_, lean_object* v_value_5622_, lean_object* v_a_5623_){
_start:
{
lean_object* v_res_5624_; 
v_res_5624_ = l_Near_StringMap_set(v_m_5620_, v_key_5621_, v_value_5622_);
lean_dec_ref(v_key_5621_);
return v_res_5624_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains(lean_object* v_m_5625_, lean_object* v_key_5626_){
_start:
{
lean_object* v___x_5628_; lean_object* v___x_5629_; 
v___x_5628_ = l_Near_StringMap_storageKey(v_m_5625_, v_key_5626_);
v___x_5629_ = lean_near_storage_has_key(v___x_5628_);
return v___x_5629_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_contains___boxed(lean_object* v_m_5630_, lean_object* v_key_5631_, lean_object* v_a_5632_){
_start:
{
lean_object* v_res_5633_; 
v_res_5633_ = l_Near_StringMap_contains(v_m_5630_, v_key_5631_);
lean_dec_ref(v_key_5631_);
return v_res_5633_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove(lean_object* v_m_5634_, lean_object* v_key_5635_){
_start:
{
lean_object* v___x_5637_; lean_object* v___x_5638_; 
v___x_5637_ = l_Near_StringMap_storageKey(v_m_5634_, v_key_5635_);
v___x_5638_ = lean_near_storage_remove(v___x_5637_);
return v___x_5638_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_remove___boxed(lean_object* v_m_5639_, lean_object* v_key_5640_, lean_object* v_a_5641_){
_start:
{
lean_object* v_res_5642_; 
v_res_5642_ = l_Near_StringMap_remove(v_m_5639_, v_key_5640_);
lean_dec_ref(v_key_5640_);
return v_res_5642_;
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr(lean_object* v_m_5643_, lean_object* v_key_5644_, lean_object* v_default_5645_){
_start:
{
lean_object* v___x_5647_; 
v___x_5647_ = l_Near_StringMap_get(v_m_5643_, v_key_5644_);
if (lean_obj_tag(v___x_5647_) == 0)
{
lean_object* v_a_5648_; lean_object* v___x_5650_; uint8_t v_isShared_5651_; uint8_t v_isSharedCheck_5659_; 
v_a_5648_ = lean_ctor_get(v___x_5647_, 0);
v_isSharedCheck_5659_ = !lean_is_exclusive(v___x_5647_);
if (v_isSharedCheck_5659_ == 0)
{
v___x_5650_ = v___x_5647_;
v_isShared_5651_ = v_isSharedCheck_5659_;
goto v_resetjp_5649_;
}
else
{
lean_inc(v_a_5648_);
lean_dec(v___x_5647_);
v___x_5650_ = lean_box(0);
v_isShared_5651_ = v_isSharedCheck_5659_;
goto v_resetjp_5649_;
}
v_resetjp_5649_:
{
if (lean_obj_tag(v_a_5648_) == 0)
{
lean_object* v___x_5653_; 
if (v_isShared_5651_ == 0)
{
lean_ctor_set(v___x_5650_, 0, v_default_5645_);
v___x_5653_ = v___x_5650_;
goto v_reusejp_5652_;
}
else
{
lean_object* v_reuseFailAlloc_5654_; 
v_reuseFailAlloc_5654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5654_, 0, v_default_5645_);
v___x_5653_ = v_reuseFailAlloc_5654_;
goto v_reusejp_5652_;
}
v_reusejp_5652_:
{
return v___x_5653_;
}
}
else
{
lean_object* v_val_5655_; lean_object* v___x_5657_; 
lean_dec_ref(v_default_5645_);
v_val_5655_ = lean_ctor_get(v_a_5648_, 0);
lean_inc(v_val_5655_);
lean_dec_ref_known(v_a_5648_, 1);
if (v_isShared_5651_ == 0)
{
lean_ctor_set(v___x_5650_, 0, v_val_5655_);
v___x_5657_ = v___x_5650_;
goto v_reusejp_5656_;
}
else
{
lean_object* v_reuseFailAlloc_5658_; 
v_reuseFailAlloc_5658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5658_, 0, v_val_5655_);
v___x_5657_ = v_reuseFailAlloc_5658_;
goto v_reusejp_5656_;
}
v_reusejp_5656_:
{
return v___x_5657_;
}
}
}
}
else
{
lean_object* v_a_5660_; lean_object* v___x_5662_; uint8_t v_isShared_5663_; uint8_t v_isSharedCheck_5667_; 
lean_dec_ref(v_default_5645_);
v_a_5660_ = lean_ctor_get(v___x_5647_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v___x_5647_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5662_ = v___x_5647_;
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
else
{
lean_inc(v_a_5660_);
lean_dec(v___x_5647_);
v___x_5662_ = lean_box(0);
v_isShared_5663_ = v_isSharedCheck_5667_;
goto v_resetjp_5661_;
}
v_resetjp_5661_:
{
lean_object* v___x_5665_; 
if (v_isShared_5663_ == 0)
{
v___x_5665_ = v___x_5662_;
goto v_reusejp_5664_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v_a_5660_);
v___x_5665_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5664_;
}
v_reusejp_5664_:
{
return v___x_5665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Near_StringMap_getOr___boxed(lean_object* v_m_5668_, lean_object* v_key_5669_, lean_object* v_default_5670_, lean_object* v_a_5671_){
_start:
{
lean_object* v_res_5672_; 
v_res_5672_ = l_Near_StringMap_getOr(v_m_5668_, v_key_5669_, v_default_5670_);
lean_dec_ref(v_key_5669_);
return v_res_5672_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Bool(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Near(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Near_NearToken_yoctoPerNear = _init_l_Near_NearToken_yoctoPerNear();
lean_mark_persistent(l_Near_NearToken_yoctoPerNear);
l_Near_NearToken_yoctoPerMilliNear = _init_l_Near_NearToken_yoctoPerMilliNear();
lean_mark_persistent(l_Near_NearToken_yoctoPerMilliNear);
l_Near_NearToken_yoctoPerMicroNear = _init_l_Near_NearToken_yoctoPerMicroNear();
lean_mark_persistent(l_Near_NearToken_yoctoPerMicroNear);
l_Near_NearToken_zero = _init_l_Near_NearToken_zero();
lean_mark_persistent(l_Near_NearToken_zero);
l_Near_NearToken_oneYocto = _init_l_Near_NearToken_oneYocto();
lean_mark_persistent(l_Near_NearToken_oneYocto);
l_Near_Gas_zero = _init_l_Near_Gas_zero();
l_Near_AccountId_minLen = _init_l_Near_AccountId_minLen();
lean_mark_persistent(l_Near_AccountId_minLen);
l_Near_AccountId_maxLen = _init_l_Near_AccountId_maxLen();
lean_mark_persistent(l_Near_AccountId_maxLen);
l_Near_Contract_entry___boxed__const__1 = _init_l_Near_Contract_entry___boxed__const__1();
lean_mark_persistent(l_Near_Contract_entry___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Near(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_String(uint8_t builtin);
lean_object* initialize_Init_Data_Bool(uint8_t builtin);
lean_object* initialize_Init_Data_Option(uint8_t builtin);
lean_object* initialize_Init_Data_UInt(uint8_t builtin);
lean_object* initialize_Init_Data_Nat(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Near(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Bool(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Near(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Near(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Near(builtin);
}
#ifdef __cplusplus
}
#endif
